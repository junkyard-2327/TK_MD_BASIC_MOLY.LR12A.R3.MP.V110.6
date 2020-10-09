/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2016
*
*  BY OPENING THIS FILE, BUYER HEREBY UNEQUIVOCALLY ACKNOWLEDGES AND AGREES
*  THAT THE SOFTWARE/FIRMWARE AND ITS DOCUMENTATIONS (""MEDIATEK SOFTWARE"")
*  RECEIVED FROM MEDIATEK AND/OR ITS REPRESENTATIVES ARE PROVIDED TO BUYER ON
*  AN ""AS-IS"" BASIS ONLY. MEDIATEK EXPRESSLY DISCLAIMS ANY AND ALL WARRANTIES,
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
#ifndef SYSAPI_H
#define SYSAPI_H
/*****************************************************************************

  FILE NAME:  sysapi.h

  DESCRIPTION:

    This file contains all the constants, mail message definition and
    function prototypes exported by the SYS unit.

*****************************************************************************/

#include "sysdefs.h"

#ifndef GEN_FOR_PC  /* Disable for MoDIS CodenGen error */
/* Define functions normally accessed from the C library */
#include <string.h>
#include <stdlib.h>

#endif

#define SysMemset   memset
#define SysMemcpy   memcpy
#define SysMemcmp   memcmp
#define	SysAbs( x ) abs( (x) )

#define ALL_ST_INTS_MASK  0xFFFF  /* Mask used for all ST interrupt Mask */


#define PAD32(_bytes_) ((((_bytes_) + sizeof(kal_uint32) - 1)/sizeof(kal_uint32)) * sizeof(kal_uint32))

/* Define variables used for System Timer interrupts */
#define ST_CPINT_0        0x0001
#define ST_CPINT_125      0x0002
#define ST_CPINT_250      0x0004
#define ST_CPINT_375      0x0008
#define ST_CPINT_500      0x0010
#define ST_CPINT_625      0x0020
#define ST_CPINT_750      0x0040
#define ST_CPINT_875      0x0080
#define ST_CPINT_1000     0x0100
#define ST_CPINT_1125     0x0200
#define ST_CPINT_1250     0x0400
#define ST_CPINT_1375     0x0800
#define ST_CPINT_1500     0x1000
#define ST_CPINT_1625     0x2000
#define ST_CPINT_1750     0x4000
#define ST_CPINT_1875     0x8000

#define ST_CPINT_ALL      0xFFFF

/* Define variables used for System Timer interrupts  for DO*/
#define ST_DO_CPINT_0     0x0001
#define ST_DO_CPINT_166   0x0002
#define ST_DO_CPINT_333   0x0004
#define ST_DO_CPINT_500   0x0008
#define ST_DO_CPINT_667   0x0010
#define ST_DO_CPINT_834   0x0020
#define ST_DO_CPINT_1001  0x0040
#define ST_DO_CPINT_1168  0x0080
#define ST_DO_CPINT_1335  0x0100
#define ST_DO_CPINT_1502  0x0200
#define ST_DO_CPINT_1669  0x0400
#define ST_DO_CPINT_1836  0x0800
#define ST_DO_CPINT_2003  0x1000
#define ST_DO_CPINT_2170  0x2000
#define ST_DO_CPINT_2337  0x4000
#define ST_DO_CPINT_2504  0x8000

#define ST_DO_CPINT_ALL   0xFFFF


#define INVALID_SYSTIME_SECS 0xFFFFFFFF


#define C2K_INVALID_MODULE_ID  0
#define C2K_INVALID_MESSAGE_ID 0

/*---------------------------------------------------------------
*  Carrier definitions and check for carrier compile options
*----------------------------------------------------------------*/
/* !!! When adding new carrier extension:                    !!! */
/* !!!  -update TOTAL_CARRIER_EXTENSIONS check below         !!! */
/* !!!  -add carrier to SysCarrierId enum  below             !!! */
/* !!!  -update function sysGetCarrierdId() in sysutils.c    !!! */
/* !!!  -update CarrierFeatureMatrix[][] in function         !!! */
/* !!!   sysIsFeatureSupported()in sysutils.c                !!! */
#define TOTAL_CARRIER_EXTENSIONS (  defined(VERIZON_EXTENSIONS) + \
                                    defined(SPRINT_EXTENSIONS) + \
                                    defined(LGT_EXTENSIONS) + \
                                    defined(KDDI_EXTENSIONS) )

#if TOTAL_CARRIER_EXTENSIONS > 1
 #error "Multiple carrier extensions(Verizon/Sprint/...) enabled in this build"
#endif

typedef enum
{
  SYS_CARRIER_GENERIC = 0,      /* no carrier extension defined */
  SYS_CARRIER_VERIZON,          /* VERIZON_EXTENSIONS           */
  SYS_CARRIER_SPRINT,           /* SPRINT_EXTENSIONS            */
  SYS_CARRIER_CHINATELECOM,     /* CHINATELECOM_EXTENSIONS      */
  SYS_CARRIER_LGT,              /* LGT_EXTENSIONS               */
  SYS_CARRIER_KDDI,             /* KDDI_EXTENSIONS              */
  SYS_NUM_CARRIERS
} SysCarrierId;

/*---------------------------------------------------------------
*  Declare constants and typedefs used for 1x in SysTime.c
*----------------------------------------------------------------*/

/* Define interrupt types used in SysIntEnable call */
typedef enum
{
   SYS_FIQ_INT = 0x40,
   SYS_IRQ_INT = 0x80,
   SYS_ALL_INT = SYS_IRQ_INT | SYS_FIQ_INT
} SysIntT;

/* structure used for finer system time resolution (36 bits) */
typedef struct
{
   kal_uint32 MostSignificant32Bits;
   kal_uint8 LeastSignificant4Bits;
} SysSystemTimeFineT;

typedef struct
{
   kal_bool Immediate;      /* do immdediate or at action time */
   SysSystemTimeT Time; /* action time in 20 ms */
} SysActionTimeT;

typedef enum
{
   SYS_FRAME_SIZE_20MS = 0,
   SYS_FRAME_SIZE_26MS = 1
} SysFrameSizeT;

typedef enum
{
   SYS_TX_SIGNAL_PERIOD_5MS,
   SYS_TX_SIGNAL_PERIOD_10MS,
   SYS_TX_SIGNAL_PERIOD_20MS
} SysTxSignalPeriodT;

typedef enum
{
   SYS_TX_SIGNAL_START_FRAME_SUBFRAME_0, /* Tx signal starts at 0 ms into 20 ms frame  */
   SYS_TX_SIGNAL_START_FRAME_SUBFRAME_1, /* Tx signal starts at 5 ms into 20 ms frame  */
   SYS_TX_SIGNAL_START_FRAME_SUBFRAME_2, /* Tx signal starts at 10 ms into 20 ms frame */
   SYS_TX_SIGNAL_START_FRAME_SUBFRAME_3  /* Tx signal starts at 15 ms into 20 ms frame */
} SysTxSignalStartFrameT;


typedef enum
{
   SLOT00_NUM = 0x00,   /* PCG or Slot 0 */
   SLOT01_NUM,
   SLOT02_NUM,
   SLOT03_NUM,
   SLOT04_NUM,
   SLOT05_NUM,
   SLOT06_NUM,
   SLOT07_NUM,
   SLOT08_NUM,
   SLOT09_NUM,
   SLOT10_NUM,
   SLOT11_NUM,
   SLOT12_NUM,
   SLOT13_NUM,
   SLOT14_NUM,
   SLOT15_NUM
} SlotMaskNumberT;


typedef struct
{
   kal_bool   Enabled;
   kal_uint8  FrameSize;
   kal_uint8  Cnt;
   kal_uint8  System;
} FreeRunT;

typedef struct
{
   kal_bool   ValidCalendarSystemTime;
   kal_uint32 Lower32;
   kal_uint8  Upper6;
   kal_uint8  LpSec;
   kal_int8   LtmOff;
   kal_bool   DayLt;
   FreeRunT   FreeRun;
} SysTimeDataT;

typedef struct
{
   kal_uint32 Lower32;
   kal_uint8  Upper6;
}FullSystemTimeT;


typedef struct
{
   kal_uint32 Seconds;
   kal_uint32 Milliseconds;
} SysCalendarTimeDataT;


/*---------------------------------------------------------------
*  Declare constants and typedefs used for DO in SysTime.c
*----------------------------------------------------------------*/
/* Select the mode when called SysCallbackregister or cancel */
#define SYS_ACTION_EVENT_MASK        0x1
#define SYS_ACTION_SLOT_EVENT_MASK   0x2
#define SYS_PERIODIC_SLOT_EVENT_MASK 0x4
typedef enum
{  /* bit 0 = 0: slot event
      bit 0 = 1: action event
      bit 1 = 1: action slot event
      bit 2 = 0: single event
      bit 2 = 1: periodic event
    */
   ACTION_EVENT               = SYS_ACTION_EVENT_MASK,
   ACTION_SLOT_EVENT          = (SYS_ACTION_EVENT_MASK | SYS_ACTION_SLOT_EVENT_MASK),
   SLOT_EVENT                 = 0,
   PERIODIC_SLOT_EVENT        = SYS_PERIODIC_SLOT_EVENT_MASK,
   ACTION_PERIODIC_SLOT_EVENT = (ACTION_SLOT_EVENT | SYS_PERIODIC_SLOT_EVENT_MASK)
} SysEventTypeT;

typedef enum
{
   SINGLE_PCG_EVENT    = SLOT_EVENT,
   PERIODIC_PCG_EVENT  = PERIODIC_SLOT_EVENT
} PcgEventTypeT;
#define SINGLE_SLOT_EVENT            SLOT_EVENT

/* For Tag Type */
#define SYS_TAG_FRMOFT_ADJ_MASK 0x8  /* FrameOffset adjust flag, bit 3: 0 = Offset not yet adjusted, 1 = FrameOffset adjusted */
#define SYS_TAG_FRMOFT_MASK     0x4  /* FrameOffset,   bit 2: 0 = No Offset, 1 = FrameOffset */
#define SYS_TAG_KEEP_MASK       0x2  /* Flush or Keep, bit 1: 0 = Flush Q,   1 = Keep Q      */
#define SYS_TAG_MODE_MASK       0x1  /* AirInterface,  bit 0: 0 = 1xRTT,     1 = EVDO        */
typedef enum
{
   FLUSH_QUEUE_1X = 0,  /* b000 */
   FLUSH_QUEUE_DO = 1,  /* b001 */
   KEEP_QUEUE_1X  = 2,  /* b010 */
   KEEP_QUEUE_DO  = 3,  /* b011 */
   OFT_FLUSH_QUEUE_DO = 5, /* b101 */
   OFT_KEEP_QUEUE_DO  = 7  /* b111 */
} SysTagTypeT;

/* Define Tracking Frame Counter based, according 1X and DO Frame counter */
typedef struct
{
   kal_uint32 Lower32;      /* Lower 32 bit */
   kal_uint8  Upper6;       /* Upper 6 bit  */
} FrameRecT;

/* The system time definition in echip level. */
typedef struct
{
   kal_uint64    SuperFrame;   /* The superframe in 80ms unit. */
   kal_uint32    Chip8xOffset; /* Offset to 80ms frame boundary, in unit of 1/8 chip. */
} SysSFrameTimeT;


typedef struct
{
  kal_uint32  Lower32;
  kal_uint8   Upper6;
  kal_int8    Subframe;
  kal_int8    Slot;
  kal_int16   SymbNum;
} SysTimeFullT;


/* For Transition from 1x to do or vise versa */
#define SYS_TRANS_HW_SWITCH          0x1
#define SYS_TRANS_DUAL_UPDATE        0x2
#define SYS_TRANS_TIME_RESET         0x4
#define SYS_TRANS_TIME_RESYNC        0x8
typedef enum
{
/* (Time << 2) | (Update << 1) | HW
   Time  : 0 = Curr, 1 = Reset, 2 = Resync
   Update: 0 = SINGLE, 1 = DUAL
   HW    : 0 = NO, 1 = HW
*/
   SYS_TRANS_NO_ACTION        = 0,
   SYS_TRANS_CURR_SINGLE_HW   = 1,   /* b0001 */
   SYS_TRANS_RESET_SINGLE_HW  = 5,   /* b0101 */
   SYS_TRANS_RESET_DUAL_HW    = 7,   /* b0111 */
   SYS_TRANS_RESYNC_SINGLE_NO = 8,   /* b1000 */
   SYS_TRANS_RESYNC_SINGLE_HW = 9,   /* b1001 */
   SYS_TRANS_RESYNC_DUAL_HW   = 11   /* b1011 */
} SysTransitionTypeT;


/*----------------------------------------------------------------------------------
*  Declare constants and typedefs used for Bondout Option functions in SysBondout.c
*-----------------------------------------------------------------------------------*/
typedef enum
{
    SYS_BONDOUT_EVDOREV0_VOICE,
    SYS_BONDOUT_EVDOREV0_NO_VOICE,
    SYS_BONDOUT_EVDOREV0A_VOICE,
    SYS_BONDOUT_EVDOREV0A_NO_VOICE,
    SYS_BONDOUT_VOICE_ONLY
} SysBondoutOptionsT;

typedef enum
{
    SYS_ENH_SYSTEM_SELECT_FEATURE, /* Enhanced System Select with AutoA and AutoB options */
    SYS_ERI_FEATURE, /* Enhanced Roaming Indicator */
    SYS_EXT_SMS_INIT_FEATURE, /* External SMS Initialization */
    SYS_RSVD_ASSIGN_MODE_111_FEATURE,/* Enables IS-95A to specify Rate set 1 or 2 for data calls
                                        using Reserved 111 ASSIGN Mode. */
    SYS_GPS_FEATURE,                /* Enhanced GPS HW select with features */
    SYS_ALT_AKEY_CHKSUM_FEATURE, /* Alternate Akey Checksum algorithm */

    SYS_GPS_SUPL_FEATURE,

    SYS_PRL_ENHANCE_FOR_INT_ROAM_FEATURE,   /* PRL Enhancements for International Roaming per CDG 86 */

    SYS_REGISTRATION_THROTTLING_FEATURE, /* Registration throttling (to avoid draining battery in area
                                            where MS continously fails to register due to Max Access
                                            Probe failures)    */

    SYS_SAFETY_NET_REGISTRATION_FEATURE,  /* Feature to perform safety net/fallback registration in
                                           * network conditions that may result in the network not
                                           * knowing the whereabouts of the MS for extended periods.
                                           * Feature needed to compensation for poor network configurations
                                           * seen on the TATA network in India.
                                           */

    SYS_HSC_CLK_CAL_FAST_SETTLE_FEATURE,  /* Feature to be turned on on devices with fast drifting 32k clocks */

    SYS_HWD_KEYBOARD_FEATURE,    /* Hwd Keyboard. */

    SYS_CSS_1X_MAPE_HOME_SYS_AVOID_FEATURE,  /* Home system avoidance upon MAPE registration failure.
                                             Acquire less preferred system if available */

    SYS_CSS_1X_CDG143_MAPE_SYS_AVOID_FEATURE, /* CDG143 Req. The channel over which access failed is placed last
                                              in the channels list */

    SYS_CSS_1X_CDG143_REDIR_SYS_AVOID_FEATURE, /* CDG143 Req. If Redirection Scan List is exhausted and return_if_fail is KAL_FALSE,
                                               MS shall avoid the original channel over which the redirection was received for 30 sec. */

    SYS_CSS_1X_CDG143_REDIR_MPSS_FEATURE, /* CDG143 Req 4.5.5. Perform MPSS after T_bsr_redir when acquiring a less pref. sys. following a
                                             redirection. If no better service found, reacquire the original system from which it got redirected */

    SYS_CSS_1X_CDG143_CALL_RELEASE_MPSS_FEATURE, /* CDG143 Req 4.2.5b. MS shall perform better service reselection T_bsr_call sec after end of call */

    SYS_CSS_1X_FINISH_1ST_BSR_B4_DATACALL_FEATURE, /* MS will continue the initial BSR after acquiring a less preferred system
                                               if the user attempts to access the network for a data call */

    SYS_CSS_1X_FINISH_1ST_BSR_AFTER_POWERUP_FEATURE, /* MS will continue the initial BSR after acquiring a less preferred system
                                                        during power up if user attempts calls (except for 911) */

    SYS_CSS_1X_USE_NAM_FOR_VALIDATION_FEATURE, /* A 1x System not found in the PRL, not negative in NAM but found in the NAM
                                                  positive SID NID list will be declared Home and accepted (if PRL pref_only=KAL_FALSE) */

    SYS_CSS_1X_VOICE_ROAM_BARRING_FEATURE, /* Ability to reject International and or Domestic roaming based on ERI */

    SYS_CSS_1X_LOST_CHANNEL_DWELL_FEATURE, /* The lost channel will be scanned repeatedly for the duratioon specified */
                                           /* in Phase 0 of OOSA System Lost Stage => Phase 0 scan method MUST be set to timer based. */

    SYS_CSS_1X_RESET_GEO_UPON_SYSLOST_FEATURE, /* Upon system lost, the MS will scan from the top of the GEO instead of continuing  */
                                               /* from current index */

    SYS_CSS_1X_RESTRICT_SILENTRETRY_TO_SAME_GEO_FEATURE, /* Only same Geo Systems will be accepted in Silent Retry state */

    SYS_CSS_1X_ONLY_REJECT_REDIR_IF_NEG_IN_PRL_FEATURE, /* Reject the redirected system only if found negative in PRL or NAM.  */
                                                        /* Non-system table systems will be accepted no matter what            */

    SYS_CSS_1X_ACCEPT_SIDNID_CHANGE_IN_IDLE_FEATURE, /* Do not inititate immediate better service scan in SID NID changes  */
                                                     /* as a result of idle channel hash, idle handoff                     */

    SYS_CSS_1X_USE_RESTRICTIVE_SIDNID_MATCH_FEATURE, /* When matching an SID/NID in the PRL, use more restrictive SID/NID */
                                                     /* matching using the band class and channel                         */

    SYS_CSS_DO_USE_RESTRICTIVE_SUBNET_MATCH_FEATURE, /* Restrictive subnet match feature */

    SYS_CSS_1X_MPSS_PILOT_STRENGTH_FEATURE, /* During MPSS, higher priority system can only be selected if they meet certain pilot strength criteria*/

    SYS_CSS_1X_CDG143_NEW_SYS_MPSS_FEATURE, /* CDG143 Req 4.2.6. MS shall perform better service reselection T_bsr_newsys sec after idle handoff or hash to less pref system */

    SYS_CSS_1X_ALLOW_SILENTRETRY_ON_LOWER_PRI_FEATURE, /* Allow Silent Retry on lower priority systems in same geo. */

    SYS_MMC_MBIM_API_FEATURE,  /* Microsoft MBIM API feature */

    SYS_MCC_1X_LTE_ASSOCIATION,  /* SPRINT carrier requirement */

    SYS_NUM_FEATURES
} SysFeatureId;

/* bitmap for Home System avoidance customization */
typedef enum
{
  ALLOW_AVOIDANCE_WHEN_SYS_LOST = 0,
  ALLOW_LESS_PREF_SYS_AVOIDANCE,
  ALLOW_MPSS_DURING_AVOIDANCE
} SysCssHomeSysAvoidanceOptions;


/*****************************************************************************

  FUNCTION NAME: SysGetCpsrValue

  DESCRIPTION:

  PARAMETERS:

    None

  RETURNED VALUES:

    CPSR Value.

*****************************************************************************/
extern kal_uint32 SysGetCpsrValue(void);


/*****************************************************************************

  FUNCTION NAME: SysGetSpValue

  DESCRIPTION:

  PARAMETERS:

    None

  RETURNED VALUES:

    SP Value.

*****************************************************************************/
extern kal_uint32 SysGetSpValue(void);

/*****************************************************************************
;
;  FUNCTION NAME: SysSaveArmRegs
;
;  DESCRIPTION:
;
;    Stores the Arm current mode regs (r0~r15 to ArmRegs)
;
;    This function should only be used during crash dump.
;
;  C FUNCTION PROTOTYPE:
;
;    void SysSaveArmRegs(void);
;
;  PARAMETERS:
;
;    None
;
;  RETURNED VALUES:
;
;    None.
;
;*****************************************************************************/
void SysSaveArmRegs(void);

/*****************************************************************************

  FUNCTION NAME: SysSaveContextHistory

  DESCRIPTION:

    This routine save NU_Thread_Id and 32k time to ContextHistory array.
    It is called by high frequency, so use ASM routine to save time.

  C FUNCTION PROTOTYPE:

    void SysSaveContextHistory(void);

  PARAMETERS:

    None.

  RETURNED VALUES:

    None.

*****************************************************************************/
void SysSaveContextHistory(void);


/*****************************************************************************

  FUNCTION NAME: SysJumpToCodeAddr

  DESCRIPTION:

    This routine jump to the one code section, boot, cp or UA boot etc.

  PARAMETERS:

    CpAddr: The start address of CP code section.
    R6Flag: The flag need to save to R6

  RETURNED VALUES:

    None

*****************************************************************************/
extern void SysJumpToCodeAddr(kal_uint32 CpAddr, kal_uint32 R6Flag);

extern kal_uint32 SaveAndSetIRQMask(void);
extern void RestoreIRQMask(kal_uint32);
extern kal_uint32 kal_hrt_SaveAndSetIRQMask(void);
extern void kal_hrt_RestoreIRQMask(kal_uint32);

#define SysIntDisable(IntType)                  \
{                                               \
   volatile kal_uint32 M_IntStat;               \
   if (kal_get_current_vpe_id() & 0x1)          \
   {                                            \
      M_IntStat = kal_hrt_SaveAndSetIRQMask();  \
   }                                            \
   else                                         \
   {                                            \
      M_IntStat = SaveAndSetIRQMask();          \
   }                                            \

#define SysIntEnable(IntType)                   \
   if (kal_get_current_vpe_id() & 0x1)          \
   {                                            \
      kal_hrt_RestoreIRQMask(M_IntStat);        \
   }                                            \
   else                                         \
   {                                            \
      RestoreIRQMask(M_IntStat);                \
   }                                            \
}

#define  SysIntDisableEnd(IntType)    M_IntStat;}


/*****************************************************************************

  FUNCTION NAME: SysTimeRegister

  DESCRIPTION:

    This routine registers either a signal OR a call back function associated
    with an action time in the system time queue. The system time queue contains an order
    list of all action times.

    NOTE: 1. The Routine function pointer MUST be set to NULL to cause a message to be sent.
          2. If this Routine function is called in HRT domain, only be allowed in frame/PCG/slot tick.

  PARAMETERS:

    ActionTime - Action time to insert into the time queue
    Module_id     - Module ID of task to send signal.
    Signal     - Signal to send.
    Routine    - Call back routine when action time is reached

  RETURNED VALUES:

    None.

*****************************************************************************/
#ifdef SYS_DEBUG_FAULT_FILE_INFO
#define C2kSysTimeRegister(ActionTime, module_id, message, Routine) \
        __C2kSysTimeRegister(ActionTime, module_id, message, Routine, __MODULE__, __LINE__)
extern void __C2kSysTimeRegister(kal_uint32 ActionTime, module_type module_id, msg_type message, void (*Routine) (kal_uint32),
                              const char *ModuleName, unsigned line);
#else
extern void C2kSysTimeRegister(kal_uint32 ActionTime, module_type module_id, msg_type message, void (*Routine) (kal_uint32));
#endif


/*****************************************************************************

  FUNCTION NAME: SysTimeRegisterCancel

  DESCRIPTION:

    This routine cancels the signal OR callback that is registered at a specified
    action time.

    NOTE: If this Routine function is called in HRT domain, only be allowed in frame/PCG/slot tick.

  PARAMETERS:

    ActionTime - Action time of registered signal to cancel.
    Module_id     - Module ID of task to send signal.
    Signal     - Signal to send.
    Routine    - Call back routine when action time is reached

  RETURNED VALUES:

    kal_boolean flag indicating operation status.
    Returns KAL_TRUE if action cancelled successfully.
    Returns KAL_FALSE if specified action not found in registration queue.

  Note: Input paramters must match those used when SysTimeRegister was called
  originally.

*****************************************************************************/
#ifdef SYS_DEBUG_FAULT_FILE_INFO
#define C2kSysTimeRegisterCancel(ActionTime, module_id, message, Routine) \
        __C2kSysTimeRegisterCancel(ActionTime, module_id, message, Routine, __MODULE__, __LINE__)
extern kal_bool __C2kSysTimeRegisterCancel(kal_uint32 ActionTime, module_type module_id, msg_type message, void (*Routine) (kal_uint32),
                                    const char *ModuleName, unsigned line);
#else
extern kal_bool C2kSysTimeRegisterCancel(kal_uint32 ActionTime, module_type module_id, msg_type message, void (*Routine) (kal_uint32));
#endif




/*****************************************************************************

  FUNCTION NAME: SysCallbackGroupCancel

  DESCRIPTION:

    This routine cancels all the SLOT_EVENT, ACTION_EVENT, and SLOT_ACTION_EVENT
    (basically ALL) callbacks associated with the specified module id and Signal.

    NOTE: If this Routine function is called in HRT domain, only be allowed in frame/PCG/slot tick.

  PARAMETERS:

    Module_id     - Module ID of task to send signal.
    Signal     - Signal to send.

  RETURNED VALUES:

    None.

*****************************************************************************/
#ifdef SYS_DEBUG_FAULT_FILE_INFO
#define C2kSysCallbackGroupCancel(AirInterface, module_id, message) \
        __C2kSysCallbackGroupCancel(AirInterface, module_id, message, __MODULE__, __LINE__)
extern void  __C2kSysCallbackGroupCancel(SysAirInterfaceT AirInterface, module_type module_id, msg_type message,
                                   const char *ModuleName, unsigned line);
#else
extern void  C2kSysCallbackGroupCancel(SysAirInterfaceT AirInterface, module_type module_id, msg_type message);
#endif


/*****************************************************************************

  FUNCTION NAME: SysPcgEventRegister

  DESCRIPTION:

    This routine registers either a signal OR a call back function associated
    with a PCG trigger with the system timer interrupts. The PCG event queue contains
    the number of events based on which PCG is checked.

    NOTE: If this Routine function is called in HRT domain, only be allowed in frame/PCG/slot tick.

  PARAMETERS:

    PcgMask    - System Timer event mask to identify which PCG(s) to trigger event
    EventType  - Continuous periodic or single PCG event types.
    Module_id     - Module ID of task to send signal.
    Signal     - Signal to send.
    Routine    - Call back routine when action time is reached

  RETURNED VALUES:

    None.

*****************************************************************************/
#ifdef SYS_DEBUG_FAULT_FILE_INFO
#define C2kSysPcgEventRegister(PcgMask, EventType, module_id, message, Routine) \
        __C2kSysPcgEventRegister(PcgMask, EventType, module_id, message, Routine, __MODULE__, __LINE__)
extern void __C2kSysPcgEventRegister(kal_uint16 PcgMask, PcgEventTypeT EventType, module_type module_id, msg_type message, void (*Routine) (kal_uint32),
                                  const char *ModuleName, unsigned line);
#else
extern void C2kSysPcgEventRegister(kal_uint16 PcgMask, PcgEventTypeT EventType, module_type module_id, msg_type message, void (*Routine) (kal_uint32));
#endif



/*****************************************************************************

  FUNCTION NAME: SysTimePcgEventRegister

  DESCRIPTION:

    This routine registers either a signal OR a callback function associated
    with a PCG trigger at an defined action time. This is done with a special
    callback at the set action time which then logs the PCG event in the
    appropriate PCG event queue.

    NOTE: If this Routine function is called in HRT domain, only be allowed in frame/PCG/slot tick.

  PARAMETERS:

    ActionTime - Action time to insert PCG event callback routine into the time queue
    PcgMask    - System Timer event mask to identify which PCG(s) to trigger event
    EventType  - Continuous periodic or single PCG event types.
    Module_id     - Module ID of task to send signal.
    Signal     - Signal to send.
    Routine    - Call back routine when action time is reached

  RETURNED VALUES:

    None.

*****************************************************************************/
#ifdef SYS_DEBUG_FAULT_FILE_INFO
#define C2kSysTimePcgEventRegister(ActionTime, PcgMask, EventType, module_id, message, Routine)  \
        __C2kSysTimePcgEventRegister(ActionTime, PcgMask, EventType, module_id, message, Routine, __MODULE__, __LINE__)
extern void __C2kSysTimePcgEventRegister(kal_uint32 ActionTime, kal_uint16 PcgMask, PcgEventTypeT EventType, module_type module_id, msg_type message, void (*Routine) (kal_uint32),
                                      const char *ModuleName, unsigned line);
#else
extern void C2kSysTimePcgEventRegister(kal_uint32 ActionTime, kal_uint16 PcgMask, PcgEventTypeT EventType, module_type module_id, msg_type message, void (*Routine) (kal_uint32));
#endif


/*****************************************************************************

  FUNCTION NAME: SysPcgEventRegisterCancel

  DESCRIPTION:

    This routine cancels the signal OR callback that is registered at a specified
    PCG event.

    NOTE: Input parameters must match those used when SysEventRegister was called
    originally. This function would normally be used to clear a PCG event which
    is generated continuously/periodically - single PCG events clear themselves.

    NOTE: If this Routine function is called in HRT domain, only be allowed in frame/PCG/slot tick.

  PARAMETERS:

    PcgMask    - System Timer event mask to identify which PCG(s) to clear event
    Module_id     - Module ID of task to send signal.
    Signal     - Signal to send.
    Routine    - Call back routine when action time is reached

  RETURNED VALUES:

    kal_boolean flag indicating operation status.
    Returns KAL_TRUE if action cancelled successfully.
    Returns KAL_FALSE if specified action not found in PCG event queue.

*****************************************************************************/
#ifdef SYS_DEBUG_FAULT_FILE_INFO
#define C2kSysPcgEventRegisterCancel(PcgMask, module_id, message, Routine)  \
        __C2kSysPcgEventRegisterCancel(PcgMask, module_id, message, Routine, __MODULE__, __LINE__)
extern kal_bool __C2kSysPcgEventRegisterCancel(kal_uint16 PcgMask, module_type module_id, msg_type message, void (*Routine) (kal_uint32),
                                        const char *ModuleName, unsigned line);
#else
extern kal_bool C2kSysPcgEventRegisterCancel(kal_uint16 PcgMask, module_type module_id, msg_type message, void (*Routine) (kal_uint32));
#endif



/*****************************************************************************

  FUNCTION NAME: SysTimeIntReg

  DESCRIPTION:

    This routine register systime related IRQ

  PARAMETERS:

    None.

  RETURNED VALUES:

    None.

*****************************************************************************/

extern void SysTimeIntReg(void);


/*****************************************************************************

  FUNCTION NAME: SysTimeGet

  DESCRIPTION:

    Frame number updating in Gen93 is at frame boudary but not like Gen91 at PCG0 IRQ.

    To maintain meaning of this Routine return value, the returned frame number should
    consider frame-offset.

  PARAMETERS:

    None.

  RETURNED VALUES:

    kal_uint32 - System time variable is returned.

*****************************************************************************/
extern kal_uint32 SysTimeGet(void);


/*****************************************************************************

  FUNCTION NAME: SysTimeGetWithoutOffset

  DESCRIPTION:

    This routine gets a copy of the 1X system time variable which is not including
    frame-offset.

  PARAMETERS:

    None.

  RETURNED VALUES:

    kal_uint32 - System time variable is returned.

*****************************************************************************/
extern kal_uint32 SysTimeGetWoOffset(void);



/*****************************************************************************

  FUNCTION NAME: SysTimeGetFine

  DESCRIPTION:

    This routine returns the current system time with finer resolution,
    nominally 1.25 ms resolution.

  PARAMETERS:

    None.

  RETURNED VALUES:

   Structure containing 36 bit resolution system time.

*****************************************************************************/
extern SysSystemTimeFineT SysTimeGetFine(void);


/*****************************************************************************

  FUNCTION NAME: SysTimeLisr

  DESCRIPTION:

    This routine is the Lisr for system time. It increments
    the system time variable and then determines if an action
    is equal to the new system time. If so the HISR routine
    is activated.

  PARAMETERS:

    StIntSrc - System Time Block Interrupt Source register contents at time of
                   interrupt.

  RETURNED VALUES:

    None.

*****************************************************************************/
extern void SysTimeLisr(kal_uint32 StIntSrc, kal_uint8 AirInterface);


/*****************************************************************************

  FUNCTION NAME: SysInit

  DESCRIPTION:

    This routine initializes system time variables.

  PARAMETERS:

    None.

  RETURNED VALUES:

    None.

*****************************************************************************/
extern void SysInit(void);

/*****************************************************************************

  FUNCTION NAME: SysEnableTxSignal

  DESCRIPTION:

    This routine controls the sending of the Tx signal to any tasks registered
        using the SysRegisterTxSignal routine.


  PARAMETERS:

    TxSigPeriod     - Sets rate at which Tx signal occurs.
    TxSigStartFrame - Sets which sub-20ms frame the first Tx signal occurs in.
                      Parameter is relative to the 20 ms frame.  This is ignored
                      for a 20 ms frame.  Note this is valid for the first Tx
                      Signal; after the first one interrupts occur at each (sub)frame.

    Note: Tx signal interrupt is configured for a constant number of ms before
        the frame.


  RETURNED VALUES:

    None.

*****************************************************************************/
extern void SysEnableTxSignal(SysTxSignalPeriodT TxSigPeriod,
                              SysTxSignalStartFrameT TxSigStartFrame,
                              kal_uint8 PcgIdx);



/*****************************************************************************

  FUNCTION NAME: SysDisableTxSignal

  DESCRIPTION:

    This routine disables the sending of the Tx signal to any tasks registered
        using the SysRegisterTxSignal routine.


  PARAMETERS:

    None.


  RETURNED VALUES:

    None.

*****************************************************************************/
extern void SysDisableTxSignal(void);



/*****************************************************************************

  FUNCTION NAME: SysEnableTimerSync

  DESCRIPTION:

    This routine enables/disables the synchronization of the CTS/DTS timers
    with the System Timer.  When enabled the System Timer block controls the
    rollover of the CTS Timer.  On disable, the CTS timer is set to rollover
    at 20 ms, but not synced to the System Timer.

  PARAMETERS:

    Enable - KAL_TRUE for enable, KAL_FALSE for disable.

  RETURNED VALUES:

    None.

*****************************************************************************/
#define SysEnableTimerSync(Enable)

/*****************************************************************************

  FUNCTION NAME: SysSetFrameSize

  DESCRIPTION:

    This routine sets the System Timer block hardware to produce interrupts
    corresponding to either a 20 ms or 26 ms period.

  PARAMETERS:

    FrameSize - Either 20 or 26 ms frames.

  RETURNED VALUES:

    None.

*****************************************************************************/
extern void SysSetFrameSize(SysFrameSizeT FrameSize);



/*****************************************************************************

  FUNCTION NAME:   SysCtsCallbackClear

  DESCRIPTION:     Clears out all instances of the specified function from the
                   CTS callback routine .

  PARAMETERS:      CallbackPtr - routine to clear out of callback queue

  RETURNED VALUES: None

*****************************************************************************/
#define SysCtsCallbackClear(CallbackPtr)


/*****************************************************************************

  FUNCTION NAME:   SysCtsRegisterCallback

  DESCRIPTION:     Provides a callback after the specified delay. The delay
                   is generated by using the hardware frame counter to
                   determine the current time, and then programming a single
                   shot strobe to occur after the specified delay.

                   Notes:
                      1) Assumes frame time is 20 ms.
                      2) Contains overrun checking.

  PARAMETERS:      DelayMs     - Delay in ms.
                   CallbackPtr - Function to call after the delay.

  RETURNED VALUES: Flag indicating if a callback was scheduled successfully.
                   KAL_TRUE: Callback scheduled.
                   KAL_FALSE: NO CTS Timers available, callback NOT scheduled.

*****************************************************************************/
#define SysCtsRegisterCallback(DelayMs, CallbackPtr)



/*****************************************************************************

  FUNCTION NAME:   SysCtsRegisterCallbackUsec

  DESCRIPTION:     Provides a callback after the specified delay. The delay
                   is generated by using the hardware frame counter to
                   determine the current time, and then programming a single
                   shot strobe to occur after the specified delay.

                   Notes:
                      1) Contains overrun checking.
                      2) Minimum delay of 100usec is required due to resolution
                         of 80kHz counter value.
                      3) Resolution of 80kHz timer effectively "truncates" usec callbacks
                         to units of 12.5usec ticks.
                      4) Specifying the LISR context will cause the system to crash if
                         the registered callback attempts to use any EXE/RTOS functionality
                         (e.g. - Intertask messagings/signals or MonFaults) This should
                         ONLY be used for time-critical operations that does not involve
                         the RTOS.

  PARAMETERS:      DelayUsec   - Delay in usec.
                   Context     - Context in which to execute callback (i.e., LISR or HISR)
                   CallbackPtr - Function to call after the delay.

  RETURNED VALUES: Flag indicating if a callback was scheduled successfully.
                   KAL_TRUE:  Callback scheduled.
                   KAL_FALSE: NO CTS Timers available, callback NOT scheduled.

*****************************************************************************/
#define SysCtsRegisterCallbackUsec(DelayUsec, Context, CallbackPtr)



/*****************************************************************************

  FUNCTION NAME:   SysCtsRegisterCallbackAbs

  DESCRIPTION:     Provides a callback when the hardware frame counter reaches
                   the specified value. This is implemented by programming a
                   single shot strobe to occur at the specified count.

                   Notes:
                      1) Assumes frame time is 20 ms.
                      2) Contains overrun checking.
                      3) Uses same CTS as SysCtsRegisterCallbackDly


  PARAMETERS:      AbsCount    - Frame counter value to generate callback
                   CallbackPtr - Function to call after the delay.

  RETURNED VALUES: None

*****************************************************************************/
#define SysCtsRegisterCallbackAbs(AbsCount, CallbackPtr)




/*****************************************************************************

  FUNCTION NAME: SysTimeReset

  DESCRIPTION:

    This routine re-initializes system time variables and clears all callback
    queues.

  PARAMETERS:

    None.

  RETURNED VALUES:

    None.

*****************************************************************************/
extern void SysTimeReset(void);


/*****************************************************************************

  FUNCTION NAME: SysTimeDataGet

  DESCRIPTION:

    This routine retrieves the current system time data including the 38 bit
    system time in 20 ms units and the other information most recently received
    in the sync channel message.

  PARAMETERS:

    TimeDataP - Pointer to Time data structure to fill in with current data.

  RETURNED VALUES:

    kal_bool - KAL_TRUE if valid data was filled in.  KAL_FALSE if valid data does NOT exist.

*****************************************************************************/
extern kal_bool SysTimeDataGet(SysTimeDataT *TimeDataP);



/*****************************************************************************

  FUNCTION NAME: SysTimeSync

  DESCRIPTION:

    This routine is used to synchronize the system time variables received on
    the sync channel with the data stored by SYS.

  PARAMETERS:

    LpSec             : Leap seconds as received in sync channel message.
    LtmOff            : Local time offset as received in sync channel message
                        (units of signed 30 min).
    DayLt             : Daylight savings time kal_boolean flag.

  RETURNED VALUES:

    None.

*****************************************************************************/
extern void SysTimeSync(kal_uint8 *FullSystemTimeP,
                        kal_uint8 LpSec,
                         kal_int8 LtmOff,
                         kal_bool DayLt);


/*****************************************************************************

  FUNCTION NAME: SysTimeUpper6BitsGet

  DESCRIPTION:

    This routine retrieves the upper 6 bits of the current system time kept in
    20 ms units, making the full system time 38 bits.

  PARAMETERS:

    None.

  RETURNED VALUES:

    Upper 6 bits of system time (right justified in the 8 bits returned).

*****************************************************************************/
extern kal_uint8 SysTimeUpper6BitsGet(void);




/*****************************************************************************

  FUNCTION NAME: SysTimeFullGet

  DESCRIPTION:

    This routine retrieves the current system time in 80 ms units.
    It is returned in the same format as that received on the sync channel,
    36 bits contained in a five byte array with the data left justified.



  PARAMETERS:

    FullSystemTimeP - Pointer to 5 byte array for return data.

  RETURNED VALUES:

    Format:
    FullSystemTimeP[0] => Current System Time, bits 35-28
    FullSystemTimeP[1] => Current System Time, bits 27-20
    FullSystemTimeP[2] => Current System Time, bits 19-12
    FullSystemTimeP[3] => Current System Time, bits 11-4
    FullSystemTimeP[4] => Current System Time, bits 3-0
                          (contained in bits 7-4 of this byte)


*****************************************************************************/
extern void SysTimeFullGet(kal_uint8 *FullSystemTimeP);

/*****************************************************************************

  FUNCTION NAME: SysTimeDataCopy

  DESCRIPTION:

  PARAMETERS:

  RETURNED VALUES:

    None.

*****************************************************************************/
extern void SysTimeDataCopy(SysAirInterfaceT AirInterface);

/*****************************************************************************

  FUNCTION NAME: SysTimeDataFlush

  DESCRIPTION:

  PARAMETERS:

  RETURNED VALUES:

    None.

*****************************************************************************/
extern void SysTimeDataFlush(SysAirInterfaceT AirInterface);

/*****************************************************************************

  FUNCTION NAME: SysTime32BitTimeCalc

  DESCRIPTION:

    This routine calculates the system time in 20 ms, given the system
    time in sync channel message format (36 bits in 80 ms units, left
    justified) and returns the lower 32 bits of the calculated value.



  PARAMETERS:

    FullSystemTimeP - Pointer to 5 byte system time array.
    Format:
    FullSystemTimeP[0] => Current System Time, bits 35-28
    FullSystemTimeP[1] => Current System Time, bits 27-20
    FullSystemTimeP[2] => Current System Time, bits 19-12
    FullSystemTimeP[3] => Current System Time, bits 11-4
    FullSystemTimeP[4] => Current System Time, bits 3-0
                          (contained in bits 7-4 of this byte)

  RETURNED VALUES:

    Lower 32 bits of system time in 20 ms units.

*****************************************************************************/
extern kal_uint32 SysTime32BitTimeCalc(kal_uint8 *FullSystemTimeP);



/*****************************************************************************

        FUNCTION  : SysTime2Secs

        DESCRIPTION:Converts system time data into number of seconds since
                    the beginning of System Time.  System time data includes
                    local time offset, leap seconds, and daylight savings time
                    indicator.

        PARAMETERS: TimeDataP

                    !!!!IMPORTANT!!!!
                    TimeDataP must be initialized by SysTimeDataGet(TimeDataP).
                    In other words, SysTimeDataGet(TimeDataP) must be called
                    right before this function.

        RETURNS:    kal_uint32 - Number of seconds since start of System Time.
                    Returns 0xFFFFFFFF if not valid.

  ***********************************************************************
  * NOTE: THIS FUNCTION WILL NOT RETURN CORRECT VALUES FOR SYSTEM TIMES *
  *       CORRESPONDING TO A DATE LATER THAN FEB 12, 2067 (1X) or       *
  *       31 DEC, 2115 (DO).                                            *
  *       SEE EMBEDDED COMMENTS IN THIS FUNCTION FOR MORE DETAILS.      *
  ***********************************************************************

*****************************************************************************/
extern SysCalendarTimeDataT SysTime2Secs(SysTimeDataT* SysTimeData);



/*****************************************************************************

  FUNCTION NAME: SysCallbackRegister

  DESCRIPTION:

    This routine registers either a signal OR a call back function associated
    with an action time or Slot/PCG in the system time queue. The system time
    queue contains an order list of all action times and contains Slot masks
    without order.

    NOTE: 1. The Routine function pointer MUST be set to NULL to cause a message to be sent.
          2. If this Routine function is called in HRT domain, only be allowed in frame/PCG/slot tick.

  PARAMETERS:

    ActionTime - Action time
    SlotMask   - System Timer event mask to identify which Slot(s) to trigger event
    TagType    - Identify the Air interface with Quese operation for Transition	such as Flush or Keep.
    Type       - Signal type such as single or periodic shot.
    Module_id     - Module ID of task to send signal.
    Signal     - Signal to send.
    Routine    - Call back routine when action time is reached

  RETURNED VALUES:

    None.

*****************************************************************************/
#ifdef SYS_DEBUG_FAULT_FILE_INFO
#define C2kSysCallbackRegister(ActionTime, SlotNum, TagType, EventType, module_id, message, Routine)  \
        __C2kSysCallbackRegister(ActionTime, SlotNum, TagType, EventType, module_id, message, Routine, __MODULE__, __LINE__)
extern kal_bool __C2kSysCallbackRegister(kal_uint32 ActionTime, kal_uint16 SlotNum, SysTagTypeT TagType,
                                  SysEventTypeT EventType, module_type module_id, msg_type message,
                                  void (*Routine) (kal_uint32),
                                  const char *ModuleName, unsigned line);
#else
extern kal_bool C2kSysCallbackRegister(kal_uint32 ActionTime, kal_uint16 SlotNum, SysTagTypeT TagType,
                                SysEventTypeT EventType, module_type module_id, msg_type message,
                                void (*Routine) (kal_uint32));
#endif


/*****************************************************************************

  FUNCTION NAME: SysCallbackRegisterCancel

  DESCRIPTION:

    This routine registers either a signal OR a call back function associated
    with an action time or Slot in the system time queue. The system time queue contains
    an order list of all action times and contains Slot mask without order.

    NOTE: 1. The Routine function pointer MUST be set to NULL to cause a message to be sent.
          2. If this Routine function is called in HRT domain, only be allowed in frame/PCG/slot tick.

  PARAMETERS:

    ActionTime - Action time
    SlotMask   - System Timer event mask to identify which Slot(s) to trigger event
    TagType    - Identify the Air interface with Quese operation for Transition	such as Flush or Keep.
    Module_id     - Module ID of task to send signal.
    Signal     - Signal to send.
    Routine    - Call back routine when action time is reached

  RETURNED VALUES:

    kal_boolean flag indicating operation status.
    Returns KAL_TRUE if action cancelled successfully.
    Returns KAL_FALSE if specified action not found in registration queue.

  Note: Input paramters must match those used when SysCallbackRegister was called
  originally.

*****************************************************************************/
#ifdef SYS_DEBUG_FAULT_FILE_INFO
#define C2kSysCallbackRegisterCancel(ActionTime, SlotNum, TagType, EventType, module_id, message, Routine)  \
        __C2kSysCallbackRegisterCancel(ActionTime, SlotNum, TagType, EventType, module_id, message, Routine, __MODULE__, __LINE__)
extern kal_bool __C2kSysCallbackRegisterCancel(kal_uint32 ActionTime, kal_uint16 SlotNum, SysTagTypeT TagType,
                                        SysEventTypeT EventType, module_type module_id, msg_type message,
                                        void (*Routine) (kal_uint32),
                                        const char *ModuleName, unsigned line);
#else
extern kal_bool C2kSysCallbackRegisterCancel(kal_uint32 ActionTime, kal_uint16 SlotNum, SysTagTypeT TagType,
                                      SysEventTypeT EventType, module_type module_id, msg_type message,
                                      void (*Routine) (kal_uint32));
#endif


/*****************************************************************************

  FUNCTION NAME: SysTimeCbOperation

  DESCRIPTION:

    This routine executes in message deliver HISR to run the systime CB operation which is called in HRT domain;

    NOTE: If systime CB operation is called in HRT domain, only be allowed in frame/PCG/slot tick.

  PARAMETERS:

    Ptr - Pointer to the parameters

  RETURNED VALUES:

    None

*****************************************************************************/
extern void SysTimeCbOperation(kal_uint8* Ptr);


/*****************************************************************************

  FUNCTION NAME: SysDoTimeGet

  DESCRIPTION:

    This routine gets a copy of the system time variable as 26msec unit.

  PARAMETERS:

    None.

  RETURNED VALUES:

    kal_uint32 - System time variable is returned.

*****************************************************************************/
extern kal_uint32 SysDoTimeGet( kal_bool useFrameOffset );


/*****************************************************************************

  FUNCTION NAME: SysDoTimeGetSubframe

  DESCRIPTION:

    Returns Subframe: a 0-11 subframe count for an 80ms interval.

  PARAMETERS:

    UseFrameOffset: Set to KAL_TRUE to subtrace FrameOffset from the SYS unit hardware subframe.

  RETURNED VALUES:
    kal_int8

*****************************************************************************/
extern kal_int8 SysDoTimeGetSubframe( kal_bool UseFrameOffset );


/*****************************************************************************

  FUNCTION NAME: SysDoTimeInSlotGet

  DESCRIPTION:

    This routine returns the current system time in units of slots.
    Slots are 1.66ms duration.

  PARAMETERS:

    None.

  RETURNED VALUES:

   Structure containing 36 bit resolution system time.

*****************************************************************************/
extern kal_uint64 SysDoTimeInSlotGet( kal_bool UseFrameOffset );


/*****************************************************************************

  FUNCTION NAME: SysDoTimeUpdateLtfLps

  DESCRIPTION:

    This routine writes the LeapSecs and LocalTimeOffset into global structure
    SysTimeData.

  PARAMETERS:

    FrameOffset - in units of slots

  RETURNED VALUES:

    None.

*****************************************************************************/
extern void  SysDoTimeUpdateLtfLps(kal_uint8 LpSec, kal_uint16 LtmOff);

/*****************************************************************************

  FUNCTION NAME: SysTimeStatusUpdate

  DESCRIPTION:

  PARAMETERS:

    None.

  RETURNED VALUES:

    None.

*****************************************************************************/
extern void SysTimeStatusUpdate(SysAirInterfaceT AirInterface, kal_uint8 UpdateReason);


/*****************************************************************************

  FUNCTION NAME: SysDoTimeFullSet

  DESCRIPTION:

    This routine sets the current system time.

  PARAMETERS:

    FrameRecT FullSystemTime - Structure to 37 bits input system time array.

  RETURNED VALUES:

    None.

*****************************************************************************/
extern void SysDoTimeFullSet(FrameRecT FullSystemTime);


/*****************************************************************************

  FUNCTION NAME: SysDoTimeFullGet

  DESCRIPTION:

    Returns:
    - frame count in units of 26.66ms frame
    - subframe count within 26.66ms frame [0-3]
    - slot count within 26.66ms frame [0-15]
    - symbol number within 26.66ms frame [0-511]

  PARAMETERS:

    none

  RETURNED VALUES:
    See SysTimeFullT in sysapi.h

*****************************************************************************/
extern SysTimeFullT SysDoTimeFullGet(kal_bool UseFrameOffset);


/*****************************************************************************

  FUNCTION NAME: SysSetFrameOffset

  DESCRIPTION:

    This routine sets C2K modem's frame offset

  PARAMETERS:

    AirInterface - 1X or DO
    FrameOffset - in units of slots

  RETURNED VALUES:

    None.

*****************************************************************************/
extern void SysSetFrameOffset(SysAirInterfaceT AirInterface, kal_uint8 FrameOffset);


/*****************************************************************************

  FUNCTION NAME: SysGetFrameOffset

  DESCRIPTION:

    This routine gets C2K modem's frame offset

  PARAMETERS:

    AirInterface - 1X or DO


  RETURNED VALUES:

    FrameOffset - in units of slots

*****************************************************************************/
extern kal_uint8 SysGetFrameOffset(SysAirInterfaceT AirInterface);


/*****************************************************************************

  FUNCTION NAME: SysTimeSymbNum

  DESCRIPTION:
    Returns the Symbol count [0-0x5FF] if AirInterface==SYS_MODE_EVDO. (wraps 80ms)
    Returns 0 if AirInterface== SYS_MODE_1xRTT. (wraps 80ms)

  PARAMETERS:

    StIntSrc - Current setted Interrupt Mask.

  RETURNED VALUES:

*****************************************************************************/
extern kal_uint16 CphSysTimeSymbNum(SysAirInterfaceT Airinterface);
#define SysTimeSymbNum(AirInterface) CphSysTimeSymbNum(AirInterface)

/*****************************************************************************

  FUNCTION NAME: SysTime9MHzCnt

  DESCRIPTION:
    Returns the 9MHz SystemTime count of the corresponding AirInterface

  PARAMETERS:

    StIntSrc - Current setted Interrupt Mask.

  RETURNED VALUES:

*****************************************************************************/
extern kal_uint32 CphSysTimeEchipCnt(SysAirInterfaceT Airinterface);
#define SysTime9MHzCnt(AirInterface) CphSysTimeEchipCnt(AirInterface)

/*****************************************************************************

  FUNCTION NAME: SysFrameCntGet

  DESCRIPTION:

  PARAMETERS:
  Return Upper8 and Lower 32 Frame Cnt  (NO Frame Offset for EVDO!)

  RETURNED VALUES:

    None.

*****************************************************************************/
extern void SysFrameCntGet(kal_uint8 AirInterfaceBM, FrameRecT* FrameCntP);

/*****************************************************************************

  FUNCTION NAME: SysTimeRemove

  DESCRIPTION:

    This routine requests removes system time from active list.

  PARAMETERS:

    SysAirInterfaceT AirInterface

  RETURNED VALUES:

    None.

*****************************************************************************/
extern void SysTimeRemove(SysAirInterfaceT AirInterface);

/*****************************************************************************

  FUNCTION NAME: SysTimeSwitchControl

  DESCRIPTION:

    This routine requests adds/removes systime for the system.

  PARAMETERS:

    SysAirInterfaceT NewAirInterface
    kal_bool             Enable

  RETURNED VALUES:

    None.

*****************************************************************************/
kal_uint8 SysTimeSwitchControl(SysAirInterfaceT NewAirInterface, kal_bool Enable);

/*****************************************************************************

  FUNCTION NAME: SysFrameCountGet

  DESCRIPTION:  This function feels the 1X and DO time.

  PARAMETERS:
  Return

  RETURNED VALUES:

    None.

*****************************************************************************/
extern void SysFrameCountGet(void* pSysTime);

extern void CphSysStIntDisable (SysAirInterfaceT Airinterface, kal_uint16 Mask);
extern void CphSysStIntEnable (SysAirInterfaceT Airinterface, kal_uint16 Mask);
#define SysStIntDisable(AirInterface, Mask) CphSysStIntDisable(AirInterface,Mask)
#define SysStIntEnable(AirInterface, Mask)  CphSysStIntEnable(AirInterface,Mask)

/*****************************************************************************

  FUNCTION NAME: SysAirInterfaceGet

  DESCRIPTION:

  PARAMETERS:

  RETURNED VALUES:
  return SYS_MODE_1xRTT or SYS_MODE_EVDO

    None.

*****************************************************************************/
extern kal_uint8  SysAirInterfaceGet(void);

/*****************************************************************************

  FUNCTION NAME: SysTimeSetFreqOffset

  DESCRIPTION:

  PARAMETERS:    Airinterface - 1X or DO
                 AfcPpb       - in unit of ppb, if AfcPpb>0, this setting will
                                increase chip-rate of Rx timer; else, decrease it.

  RETURNED VALUES:

    None.

*****************************************************************************/
extern void SysTimeSetFreqOffset(SysAirInterfaceT Airinterface, kal_int16 AfcPpb);


/*****************************************************************************

  FUNCTION NAME: SysTimeGetFreqOffset

  DESCRIPTION:

  PARAMETERS:

  RETURNED VALUES:

    Return the frequency offset of Rx timer usage.

*****************************************************************************/
extern kal_int16 SysTimeGetFreqOffset(SysAirInterfaceT Airinterface);

/*****************************************************************************

  FUNCTION NAME: SysTimeSyncTime

  DESCRIPTION:   This Routine will implement the sys time big jump.
                 For ICS/Sync Reception/Cross copy/SIB8 timing

  PARAMETERS:    Airinterface: 1X or DO
                 SyncEchip: the terminal e-chip count to restart counting
                 EchipIni: e-chip count initial value
                 SupfrmIniH/SupfrmIniL: super frame count synchronization initial value

  RETURNED VALUES:
  return SYS_MODE_1xRTT or SYS_MODE_EVDO

    None.

*****************************************************************************/
extern void SysTimeSyncTime(SysAirInterfaceT Airinterface, kal_uint32 SyncEchip, kal_uint32 EchipIni, kal_uint8 SupfrmIniH, kal_uint32 SupfrmIniL);


/*****************************************************************************

  FUNCTION NAME: Sys9MHzCntInitReq

  DESCRIPTION:   Uses the hardware 1X System time count to initialize the
                 hardware DO System time count
                 Note: Can do   : 1X time -> DO time.
                       CanNOT do: DO time -> 1X time

  PARAMETERS:    AckRequired:
                 KAL_TRUE : INSP_1XASSIST_DOACQ_MSG or some form of acknowledgement
                        will be sent upon successful completion of this request.
                 KAL_FALSE: No acknowledgement will be sent to indicate completion of
                        request.

  RETURNED VALUE:
                 KAL_TRUE : 1X system time can be used to initialize DO system time.
                 KAL_FALSE: 1X system time cannot be used to initialize DO system time.

*****************************************************************************/
extern kal_bool   Sys9MHzCntInitReq(kal_bool AckRequired);

/*****************************************************************************

  FUNCTION NAME: Sys9MHzCntInitProcess

  DESCRIPTION:   Thie Routine executes in PCG handler

  PARAMETERS:    NONE

  RETURNED VALUE:
                 NONE

*****************************************************************************/
extern void Sys9MHzCntInitProcess(void);


/*****************************************************************************

  FUNCTION NAME: SysTimeValid

  DESCRIPTION:

    Inquire whether the AirInterface has valid or invalid system time.

  PARAMETERS:

    None.

  RETURNED VALUES:

    KAL_TRUE: valid system time.  KAL_FALSE: invalid system time.

*****************************************************************************/
extern kal_uint8 SysTimeValid(kal_uint8 AirInterfaceBM);


/*****************************************************************************

  FUNCTION NAME: SysTimeCurrent

  DESCRIPTION:

    Inquire whether the AirInterface has current system time.

  PARAMETERS:

    None.

  RETURNED VALUES:

    KAL_TRUE: valid system time.  KAL_FALSE: invalid system time.

*****************************************************************************/
extern kal_bool SysTimeCurrent(kal_uint8 AirInterfaceBM);



/*****************************************************************************

  FUNCTION NAME: SysTimeTotalGet

  DESCRIPTION:

    This routine returns full time including super-frame / e-chip.

  PARAMETERS:

    AirInterface - 1X or DO
    SFramePtr    - pointer to the returned full time

  RETURNED VALUES:

    None.

*****************************************************************************/
extern void SysTimeTotalGet(SysAirInterfaceT AirInterface, SysSFrameTimeT * SFramePtr);


#if defined (MTK_DEV_C2K_IRAT) && defined (MTK_DEV_C2K_SRLTE_L1)
/*****************************************************************************

  FUNCTION NAME: SysSFrameGet

  DESCRIPTION:

  PARAMETERS:        AirInterface: 1X or DO
                     Curr:         Return curr super frame num or not
                     CheckFrameLo32: If Curr=KAL_FALSE, Return super frame num of CheckFrameLo32

  Return Lower 32 Super Frame Cnt

  RETURNED VALUES:

    None.

*****************************************************************************/
extern kal_uint64 SysSFrameGet(SysAirInterfaceT AirInterface, kal_bool Curr, kal_uint32 CheckFrameLo32);



/*****************************************************************************

  FUNCTION NAME: SysSFrameGetWith9M

  DESCRIPTION:   Get correct super frame numer with giving 9M Cnt

  PARAMETERS:        AirInterface: 1X or DO
                     Check9M:      given 8X clock cnt of system time

  Return Lower 32 of Super Frame Cnt

  RETURNED VALUES:

    None.

*****************************************************************************/
extern kal_uint64 SysSFrameGetWith9M(SysAirInterfaceT AirInterface, kal_uint32 Check9M);


/*****************************************************************************

  FUNCTION NAME: SysFrameSizeIs26ms

  DESCRIPTION:

  PARAMETERS:

  RETURNED VALUES:
  return Frame size type
            KAL_TRUE:  is 80/3 ms
            KAL_FALSE: is 20 ms

    None.

*****************************************************************************/
extern kal_bool SysFrameSizeIs26ms(SysAirInterfaceT AirInterface);


extern void  SysUpdateSysTime(SysAirInterfaceT AirInterface);

#endif

extern sap_type SysGetSapIdHisr(module_type src,module_type dest);


/****************************************************************************

  FUNCTION NAME: EndianSwap

  DESCRIPTION:

   This function is used to convert
   unsigned integers from Big endian format to Little endian format and vice-versa.

  PARAMETERS:

   kal_uint8 *input           Input that needs to be endian-swapped, in-place.
   kal_uint8 numOfBytes       Number of bytes

  RETURNED VALUES:

    KAL_TRUE if numOfBytes is 2,4,8 KAL_FALSE otherwise. This is because we have
    16,32 and 64 bit integers only in our S/W.

*****************************************************************************/
kal_bool EndianSwap( kal_uint8* input , kal_uint8 numOfBytes);

/****************************************************************************

  FUNCTION NAME: CP_Strnlen

  DESCRIPTION:

   This function is used to return the length of a "C" Style string (NULL
   Terminated). The max length returned is capped at MAX_LENGTH parameter
   which means that if the string is of size greater than MAX_LENGTH, further
   calculation of the string's length is stopped and MAX_LENGTH is returned,
   hence the name CP_Str **n** len.

  PARAMETERS:

   char *str              Input string that needs to be used
   kal_uint32 MAX_LENGTH      Max length to be returned

  RETURNED VALUES: the length of the string if its less than or equal to MAX_LENGTH
  else MAX_LENGTH is returned.

*****************************************************************************/
kal_uint32 CP_Strnlen( char *str, kal_uint32 MAX_LENGTH);

/****************************************************************************
;
;  FUNCTION NAME: SysArmSleep
;
;  DESCRIPTION:
;
;    Puts Arm into light sleep using coprocessor.  Any INT should wake
;    (SN bit does not work for CBP70 A0 so we use Arm968 light sleep)
;
;
;  PARAMETERS:
;
;    None
;
;  RETURNED VALUES:
;
;    None.
;
*****************************************************************************/
void SysArmSleep(void);

/*****************************************************************************
;
;  FUNCTION NAME: SysArmModeRegs
;
;  DESCRIPTION:
;
;    Stores the Arm mode regs (CPSR, SP, LR, SPSR) for 5 Arm modes
;    (supervisor, FIQ, IRQ, Undef,  Abort, Sytem). User mode does not have
;    its own mode specific registers.
;
;    This function should only be used during crash dump.
;
;  C FUNCTION PROTOTYPE:
;
;    void SysArmModeRegs(MonExceptArmModeRegs* pRegs);
;    Use kal_uint32* so we don't need definition of MonExceptArmModeRegs
;
;  PARAMETERS:
;
;    pRegs (r0), pointer to array of 6 MonExceptArmModeRegs
;
;  RETURNED VALUES:
;
;    None.
;
;*****************************************************************************/
void SysArmModeRegs(kal_uint32* pRegs);

/****************************************************************************
 *
 * Name:        sysIsBandSupported()
 *
 * Description: This routine validates the band by examining the allowed
 *              operation modes as set by teh compile time switches in
 *              custom.h.
 *
 * Parameters:  SysCdmaBandT band - band to be validated
 *
 * Returns:     kal_bool - KAL_TRUE if the band is supported
 *
 * Notes:
 *
 ****************************************************************************/
kal_bool sysIsBandSupported(SysCdmaBandT band);


/****************************************************************************
 *
 * Name:        sysFrequencyToBlock()
 *
 * Description: This routine finds the block for the given channel.
 *
 * Parameters:  SysCdmaBandT band - band channel is in
 *              kal_uint16 channel - channel for which block is to be found
 *
 * Returns:     kal_uint8 - PCS block
 *
 * Notes:       A liberal range is used for channel numbers since this is
 *              not validating the channels, only selecting a system.
 *
 ****************************************************************************/
kal_uint8 sysFrequencyToBlock(SysCdmaBandT band, kal_uint16 channel);

/****************************************************************************
 *
 * Name:        sysFrequencyToSubClass()
 *
 * Description: This routine finds the subclass for the given channel.
 *
 * Parameters:  SysCdmaBandT band - band channel is in
 *              kal_uint16 channel - channel for which block is to be found
 *
 * Returns:     kal_uint8 - Subclass
 *
 ****************************************************************************/
kal_uint8 sysFrequencyToSubClass(SysCdmaBandT band, kal_uint16 channel);

/****************************************************************************
 *
 * Name:        sysIsBandChannelValid()
 *
 * Description: This routine validates a given channel against the given
 *              band, based on Standard band definion only.
 *              It DOES NOT consider hardware, including possible hwd
 *              band SubClass limitation.
 *
 * Parameters:  BandChannel *bandChannel - band and channel to validate
 *
 * Returns:     kal_bool - KAL_TRUE if channel is valid within the band
 *
 * Notes:
 *
 ****************************************************************************/
kal_bool sysIsBandChannelValid(SysBandChannelT *bandChannel);

/****************************************************************************
 *
 * Name:        sysSupportCDMAChannel()
 *
 * Description: This routine determines if the provided band and channel
 *              are supported and valid.
 *
 * Parameters:  BandChannel *bandChannel - band and channel
 *
 * Returns:     kal_bool - KAL_TRUE if the band is supported and the channel is valid
 *
 * Notes:
 *
 ****************************************************************************/
kal_bool sysIsBandChannelSupported(SysBandChannelT *bandChannel);

/*****************************************************************************

  FUNCTION NAME: sysSOServiceType

  DESCRIPTION:

    This routine returns the service type for the passed Service option.

  PARAMETERS:

    SysServiceOptionT serviceOption

  RETURNED VALUES:

    SysServiceTypeT  service type (e.g. VOICE, PACKET_DATA, etc...)

*****************************************************************************/
SysServiceTypeT sysSOServiceType(SysServiceOptionT serviceOption);

/*****************************************************************************

  FUNCTION NAME: sysLoopbackSvcType

  DESCRIPTION:

    This routine returns the service subtype for a loopback Service option.

  PARAMETERS:

    SysServiceOptionT serviceOption

  RETURNED VALUES:

    SysLoopbackSvcTypeT  service sub type (IS126, Markov, TDSO)

*****************************************************************************/
SysLoopbackSvcTypeT sysLoopbackSvcType(SysServiceOptionT serviceOption);

/*****************************************************************************

  FUNCTION NAME: sysCircuitDataSvcType

  DESCRIPTION:

    This routine returns the service subtype for a cicuit data  Service option.

  PARAMETERS:

    SysServiceOptionT serviceOption

  RETURNED VALUES:

    SysCircuitDataSvcTypeT  service sub type (Async, Fax)

*****************************************************************************/
SysCircuitDataSvcTypeT sysCircuitDataSvcType(SysServiceOptionT serviceOption);

/*****************************************************************************

  FUNCTION NAME: sysPacketDataSvcType

  DESCRIPTION:

    This routine returns the service subtype for a packet data Service option.

  PARAMETERS:

    SysPacketDataSvcTypeT serviceOption

  RETURNED VALUES:

    SysPacketDataSvcTypeT  service sub type (LSPD, MSPD, HSPD)

*****************************************************************************/

SysPacketDataSvcTypeT sysPacketDataSvcType(SysServiceOptionT serviceOption);



SysSoGrpT sysSOSvcGrp(kal_uint16 serviceOption);

/*****************************************************************************

  FUNCTION NAME: calcChecksum

  DESCRIPTION:

   Calculates the checksum for the data pointed to by ptrtodata whose size
   is given by sizeofdata. The function also inverts the checksum before
   returning it.

  PARAMETERS:

   kal_uint8 *ptrtodata    - pointer to the data whose checksum has to be calc
   kal_uint16 sizeofdata   - size of the data whose checksum has to be calc
                         (this does not incl the checksum size)

  RETURNED VALUES: Inverted checksum.

*****************************************************************************/
kal_uint16 calcChecksum(kal_uint8 *ptrtodata, kal_uint16 sizeofdata);

/****************************************************************************
 *
 * Name:        SysBondoutOptionGet ()
 *
 * Description: This routine returns the chip's bondout option configuration.
 *
 * Parameters:  None
 *
 * Returns:     SysBondoutOptionsT - Bondout option
 *
 ****************************************************************************/
SysBondoutOptionsT SysBondoutOptionGet (void);

/****************************************************************************
 *
 * Name:        SysIsVoiceSupported()
 *
 * Description: This routine returns a kal_boolean indicating whether voice is
 *              supported based on the chip's bondout option configuration.
 *
 * Parameters:  None
 *
 * Returns:     KAL_TRUE if voice is supported, KAL_FALSE otherwise
 *
 ****************************************************************************/
kal_bool SysIsVoiceSupported (void);


/****************************************************************************
 *
 * Name:        SysIsDORevASupported()
 *
 * Description: This routine returns a kal_boolean indicating whether or not EV-DO
 *              RevA is supported based on the chip's bondout option configuration.
 *
 * Parameters:  None
 *
 * Returns:     KAL_TRUE if EV-DO RevA is supported, KAL_FALSE otherwise
 *
 ****************************************************************************/
kal_bool SysIsDORevASupported (void);

/****************************************************************************
 *
 * Name:        sysIsFeatureSupported()
 *
 * Description: This routine returns whether a system wide feature is
 *              supported.
 *
 * Parameters:  SysFeatures Feature
 *
 * Returns:     kal_bool - KAL_FALSE: Feature not supported
 *                     KAL_TRUE:  Feature supported
 *
 ****************************************************************************/
kal_bool sysIsFeatureSupported(SysFeatureId Feature);


/****************************************************************************
 *
 * Name:        sysSWFeatureValue()
 *
 * Description: Returns an indication as to which variation of a software
 *              feature is supported.
 *
 * Parameters:  SysFeatures Feature
 *
 * Returns:
 *
 ****************************************************************************/
kal_uint32 sysSWFeatureValue(SysFeatureId Feature);

/****************************************************************************
 *
 * Name:        sysGetCarrierdId()
 *
 * Description: Returns the carrier Id for which the SW was compiled for
 *
 * Parameters:  none
 *
 * Returns:     SysCarrierId enum
 *
 ****************************************************************************/
SysCarrierId sysGetCarrierId(void);



/*****************************************************************************

  FUNCTION NAME: SysTransitionReq

  DESCRIPTION:

    This routine requests transition from 1x to Do and vice versa.

  PARAMETERS:

    SysAirInterfaceT NewAirInterface
    kal_bool             HybridMode

  RETURNED VALUES:

    None.

*****************************************************************************/
kal_uint8 SysTransitionReq(SysAirInterfaceT NewAirInterface);



/****************************************************************************
 *
 * Name:        max8
 *
 * Scope:       public
 *
 * Description: Returns the greater of two kal_uint8 values.
 *
 * Parameters:
 *   kal_uint8 a - First value.
 *   kal_uint8 b - Second value.
 *
 * Returns:
 *   kal_uint8
 *
 * Notes:
 *
 ****************************************************************************/
kal_uint8 max8 (kal_uint8 a, kal_uint8 b);

/****************************************************************************
 *
 * Name:        min8
 *
 * Scope:       public
 *
 * Description: Returns the lesser of two kal_uint8 values.
 *
 * Parameters:
 *   kal_uint8 a - First value.
 *   kal_uint8 b - Second value.
 *
 * Returns:
 *   kal_uint8
 *
 * Notes:
 *
 ****************************************************************************/
kal_uint8 min8 (kal_uint8 a, kal_uint8 b);

/****************************************************************************
 *
 * Name:        max16
 *
 * Scope:       public
 *
 * Description: Returns the greater of two kal_uint16 values.
 *
 * Parameters:
 *   kal_uint16 a - First value.
 *   kal_uint16 b - Second value.
 *
 * Returns:
 *   kal_uint16
 *
 * Notes:
 *
 ****************************************************************************/
kal_uint16 max16 (kal_uint16 a, kal_uint16 b);

/****************************************************************************
 *
 * Name:        min16
 *
 * Scope:       public
 *
 * Description: Returns the lesser of two kal_uint16 values.
 *
 * Parameters:
 *   kal_uint16 a - First value.
 *   kal_uint16 b - Second value.
 *
 * Returns:
 *   kal_uint16
 *
 * Notes:
 *
 ****************************************************************************/
kal_uint16 min16 (kal_uint16 a, kal_uint16 b);

/****************************************************************************
 *
 * Name:        waitForExtMsg
 *
 * Scope:       public
 *
 * Description: Wait for an external message
 *
 * Parameters:
 *   kal_uint32 expMsgId - Id of the expected external message.
 *   ilm_struct *ilm     - pointer to the received expected message.
 *
 * Returns:
 *   void
 *
 * Notes:
 *   Do NOT forget to destroy the expected ilm after calling this function
 ****************************************************************************/
extern void waitForExtMsg(kal_uint32 expMsgId, ilm_struct *ilm);


extern void SysInitWaitEg(void);

extern void SysInitSetEg(void);


/*****************************************************************************

  Empty MACRO stubbing for MON&HWD sleep

*****************************************************************************/
#define MonDeepSleepStatistInit(SetDefaultCheckLength)
#define MonDeepSleepStatistCtrlMsg(CheckLengthP)
#define MonDeepClearSleepRecordInfo()
#define MonDeepReadSleepRecordInfo(SleepCnts,MdSystemTime1,MdSystemTime2,MdRtcCnts,AllSleepduration)
#define MonDeepRecordRtcCntOfEnterSleep()
#define MonDeepRecordTotalSleepDuration()
#define MonDeepRecordSystimeOfExitSleep()

#endif

/*****************************************************************************
 * removed!
*****************************************************************************/

/**Log information: \main\CBP80\cbp80_cshen_scbp10098\1 2012-07-26 06:27:42 GMT cshen
** cbp80_cshen_scbp10098**/
/**Log information: \main\Trophy\Trophy_czhang_href21785\1 2013-11-25 02:42:46 GMT czhang
** HREF#21785**/
/**Log information: \main\Trophy\1 2013-11-25 02:55:25 GMT czhang
** HREF#21785**/
/**Log information: \main\Trophy\Trophy_xding_href22331\1 2013-12-10 07:18:04 GMT xding
** HREF#22331, 合并MMC相关功能到Trophy baseline上**/
/**Log information: \main\Trophy\2 2013-12-10 08:33:42 GMT jzwang
** href#22331:Merge MMC latest implementation from Qilian branch.**/





