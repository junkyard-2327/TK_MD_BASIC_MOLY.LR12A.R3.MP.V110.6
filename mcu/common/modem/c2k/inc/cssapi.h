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
/*************************************************************
*
* This Software is the property of VIA Telecom, Inc. and may only be used pursuant to a license from VIA Telecom, Inc.
*
* Any unauthorized use inconsistent with the terms of such license is strictly prohibited.
*
* Copyright (c) 2010 VIA Telecom, Inc.  All rights reserved.
*
*************************************************************/
#ifndef _CSS_API_H_

#define _CSS_API_H_  1

#include "sysdefs.h"
#ifdef MTK_DEV_C2K_IRAT
#include "hlpapi.h"
#include "uimapi.h"
#include "do_ims.h"
#include "valiratapi.h"
#include "iratapi.h"
#endif /* MTK_DEV_C2K_IRAT */
#include "module_msg_range.h"
#include "css_nvram.h"
#include "css_msgid.h"
#include "clc_nvram.h"
#include "rsva_msgid.h"

/*----------------------------------------------------------------------------
* EXE Interfaces - Definition of Signals and Mailboxes
*----------------------------------------------------------------------------*/
#ifdef MTK_DEV_C2K_IRAT
#define MAX_IRAT_OOSA_TIME  0xFFFF
#endif
#define CSS_1X_CPSM_ID         0
#define CSS_DO_CPSM_ID         1

/* Subnet field length, in the unit of byte*/
#define SUBNET_LENGTH          16

#define CP_HRPD_MAX_NUM_REDIRECT_CHANNELS  10 /* can be more, just taken for now */

#ifdef MTK_DEV_C2K_IRAT
#define PDN_ADD_LEN            5
#endif

#define MAX_ERI_TEXT_LENGTH    32

/* CDMA Blocks */
#define A_BLOCK      0
#define B_BLOCK      1
#define C_BLOCK      2
#define D_BLOCK      3
#define E_BLOCK      4
#define F_BLOCK      5
#define G_BLOCK      6
#define H_BLOCK      7
#define I_BLOCK      8
#define J_BLOCK      9
#define K_BLOCK      10
#define L_BLOCK      11
#define M_BLOCK      12
#define N_BLOCK      13
#define PSB_BLOCK    27 /* Public Safety Broadband block */

#define UNDEF_BLK    254
#define ALL_BLOCKS   255

#define MAX_BLOCKS   14

/*----------------------------------------------------------------------------
* Basic Types
*----------------------------------------------------------------------------*/
#ifndef MTK_DEV_C2K_IRAT
typedef enum
{
    OP_HYBRID,
    OP_1X_ONLY,
    OP_DO_ONLY,
#ifdef MTK_CBP
    OP_INVALID
#endif
}OperationModeT;
#endif

typedef enum
{
    CSS_RAT_DO,
    CSS_RAT_1X,
    CSS_RAT_1X_DO
}CssRatModeT;

typedef enum
{
    CSS_LIST_SMALL_SIZE = 20,
    CSS_LIST_MEDIUM_RARE_SIZE = 30,     
    CSS_LIST_MEDIUM_SIZE = 50,
    CSS_LIST_MEDIUM_WELL_SIZE = 100,
    CSS_LIST_LARGE_SIZE = 200
} CssChanListSizeE;

typedef enum
{
    MRU,      /* Most recently used scan list  */
    MPL,      /* Most preferred scan list      */
    CRSL,     /* Channel release scan list     */
    PRL,      /* PRL scan list                 */
    DPCL,     /* Default band scan list        */
    RSL,      /* Redirection scan list         */
    OSL,      /* OTASP scan list               */
    GSL,      /* GEO scan list                 */
    ADOSL,    /* Associated DO scan list       */
    SRSL,     /* Silent retry scan list        */
    ASMPL,    /* DO Asso More Pref scan list   */
    ADOLOSL,  /* DO Lost Asso scan list        */
    PRLOSL,   /* DO Lost PRL MRU scan list     */
    GLOSL,    /* DO Lost GEO scan list         */
    EMERGENCYSL, /* Emergency call scan list   */
    TEMPSL,
    AVOIDL,   /* Avoidance list                     */
    HSRSL,    /* hVoLte silent redial scan list     */
    IGSL,     /* Idle GEO scan list                 */
    PSREGRAL, /* Recently acquired list             */
    RSSI,     /* Rssi Scan list                     */
    EMCGMSSSL,/* Emergency call scan list from GMSS */
    CSS_LIST_END
} CssLists;

typedef enum
{
	CP_SYS_DO,
	CP_SYS_1X,
	CP_SYS_BOTH,
    CP_SYS_INVALID
}CssCpSystemT;
typedef PACKED_PREFIX struct _CHANNEL_DESC {
    SysBandChannelT chan;

    /* Association Tag, valid only for DO system, and assume they are valid only for
     * associated DO scan list system */
    kal_bool Pn_Association;
    kal_bool Data_Association;
} PACKED_POSTFIX  CHANNEL_DESC, PACKED_POSTFIX *pCHANNEL_DESC;

#define CHAN_LIST_HDR \
    CssLists ListType; \
    CssChanListSizeE ListSize; \
    kal_uint16  ChanListNumChans; \
    kal_uint16  ChanListIndex;  

typedef struct {
    CHAN_LIST_HDR    
} ChanListHdr, *pChanListHdr;
 
typedef struct
{
    CHAN_LIST_HDR
    CHANNEL_DESC    ChanList[CSS_LIST_LARGE_SIZE];
    kal_uint16      AcqIndex[CSS_LIST_LARGE_SIZE];
} ChannelList, *pChannelList;

typedef struct
{
    CHAN_LIST_HDR
    CHANNEL_DESC    ChanList[CSS_LIST_MEDIUM_SIZE];
    kal_uint16      AcqIndex[CSS_LIST_MEDIUM_SIZE];
} MediumChannelList, *pMediumChannelList;

typedef struct
{
    CHAN_LIST_HDR
    CHANNEL_DESC    ChanList[CSS_LIST_MEDIUM_WELL_SIZE];
    kal_uint16      AcqIndex[CSS_LIST_MEDIUM_WELL_SIZE];
} MediumWellChannelList, *pMediumWellChannelList;

typedef struct
{
    CHAN_LIST_HDR
    CHANNEL_DESC    ChanList[CSS_LIST_SMALL_SIZE];
    kal_uint16      AcqIndex[CSS_LIST_SMALL_SIZE];
} SmallChannelList, *pSmallChannelList;

typedef struct
{
    LOCAL_PARA_HDR
    ChannelList    *Rssi_ScanList_p;
}Css_L1d_Rssi_Scan_ReqT;

typedef struct
{
    SysBandChannelT chan;
    kal_int16           rssiValue;
} ChannelRssiValueT;

typedef struct
{
    kal_uint16              ChanListNumChans;
    ChannelRssiValueT   ChannelRssiValue[CSS_LIST_LARGE_SIZE];
} RssiResultT;

typedef struct
{
    RssiResultT    *RssiResult_p;
}Css_L1d_Rssi_Scan_CnfT;

typedef struct
{
    kal_uint8  blockId;
    kal_uint16 FirstCh;
    kal_uint8  NumCh;
} _PrefCh;

typedef struct
{
    kal_uint8   numBlocks;
    kal_uint8   increment;
    _PrefCh PrefCh[MAX_BLOCKS];
} _BandBlockChannel;

typedef enum
{
    HDM_1XVOICE,
    HDM_DATAPREF,
    HDM_VOIP
}HybridPrefModeT;

typedef enum
{
    MSPL_POWER_ON_SEARCHING,
    MSPL_NORMAL_SERVICE,
    MSPL_SEARCH_EXHAUSTED
}MsplSearchStatusT;

typedef enum
{
    CP_PREV_POWERUP = 1,
    CP_PREV_ACQUISITION_FAILURE = 2,   
    CP_PREV_NEW_SYSTEM = 3,
    CP_PREV_CDMA_AVAILABLE = 4,
    CP_PREV_RESELECTION = 5,
    CP_PREV_PROTOCOL_MISMATCH = 6,
    CP_PREV_SYSTEM_LOST = 7,
    CP_PREV_UNLOCK = 8,
    CP_PREV_ACCESS_DENIED = 9,
    CP_PREV_NDSS_OFF = 10,
    CP_PREV_RELEASE = 11,
    CP_PREV_ERROR = 12,
    CP_PREV_REDIRECTION = 13,
    CP_PREV_REGISTRATION_REJECT = 14,
    CP_PREV_WRONG_SYSTEM = 15,
    CP_PREV_WRONG_NETWORK = 16,
    CP_PREV_RESCAN = 17,
    CP_PREV_LOCK = 18,
    CP_PREV_SYSTEM_LOST_ACCESS = 19,
    CP_PREV_E911_CALL = 20,
    CP_PREV_OTASP_CALL = 21,
    CP_PREV_PERIODIC_RESCAN_OBSOLETE = 22,
    CP_PREV_ADDITIONAL_CDMA = 23,
    CP_PREV_SYSTEM_RESELECTION = 24,
    CP_PREV_FORCE_BAND_MODE = 25,
    CP_PREV_EXIT_E911_MODE = 26,
    CP_PREV_SYSTEM_FOUND_NOT_BEST = 27,
    CP_PREV_REDIRECTION_END_TIMER_EXPIRED = 28,
    CP_PREV_FORCE_ANALOG_MODE = 29,
    CP_PREV_MORE_PREF_SCAN_TIMER_EXPIRED = 30,
    CP_PREV_ACCESS_FAILED_SILENT_RETRY = 31,
    CP_PREV_ESPM_NOT_RECEIVED = 32,
    CP_PREV_TIMING_CHANGE_FAILURE = 33,
    CP_PREV_SYNCHRONIZATION_FAILURE = 34,
    CP_PREV_REG_THROTTLING = 35,
    CP_PREV_ACCESS_MAX_PROBES = 36,
    CP_PREV_PAGING_MONITOR_TIMEOUT = 40,
    CP_PREV_MODEM_FAILURE = 41,
    CP_PREV_IRAT_RESET_1XCDMA = 42,
    CP_PREV_MANUAL_AVOID_RESELECT = 43,
    CP_PREV_1X_DO_COLLOCATED_BROKEN = 50,
    CP_PREV_REINIT = 51,
    CP_PREV_E911_TRAFF_CONV_FAIL = 52,
    CP_GLOBALMODE_DO_ACQUISITION_FAILURE = 60,
    CP_PREV_1X_RESUME_FROM_SUSPENDED = 61,
    CP_PREV_1X_DATA_ACCESS_RELEASE = 62
} SystemSelectIndE;

/* CSS_NWK_RPT_CP_EVENT_MSG */
typedef enum
{
    CSS_EV_DISCONNECT = 1,
    CSS_EV_PAGE_RECEIVED,
    CSS_EV_STOPALERT,
    CSS_EV_ABBR_ALERT,
    CSS_EV_NOSVC,
    CSS_EV_CDMA_INSVC,
    CSS_EV_CPENABLED,
    CSS_EV_CPDISABLED,
    CSS_EV_PDOWNACK,
    CSS_EV_CONNANALOG,
    CSS_EV_CONNDIGITAL,
    CSS_EV_ASSIGNED,
    CSS_EV_ORIG_FAIL,
    CSS_EV_NDSS_ORIG_CANCEL,
    CSS_EV_INTERCEPT,
    CSS_EV_REORDER,
    CSS_EV_CC_RELEASE,
    CSS_EV_CC_RELEASE_SO_REJ,
    CSS_EV_DIALING_COMPLETE,
    CSS_EV_DILAING_CONTINUE,
    CSS_EV_MAINTENANCE,
    CSS_EV_VP_ON,
    CSS_EV_VP_OFF,
    CSS_EV_PSIST_FAIL,
    CSS_EV_TC_RELEASE_MS,
    CSS_EV_TC_RELEASE_PDOWN,
    CSS_EV_TC_RELEASE_DISABLE,
    CSS_EV_TC_RELEASE_BS,
    CSS_EV_TC_RELEASE_SO_REJECT,
    CSS_EV_TC_RELEASE_TIMEOUT,
    CSS_EV_TC_RELEASE_ACK_FAIL,
    CSS_EV_TC_RELEASE_FADE,
    CSS_EV_TC_RELEASE_LOCK,
    CSS_EV_PAGE_FAIL,
    CSS_EV_RETRY_TIMER_ACTIVE,
    CSS_EV_RETRY_TIMER_INACTIVE,
    CSS_EV_AMPS_INSVC,
    CSS_EV_ORIG_REJECTED,
    CSS_EV_ORIG_REJECTED_SO_NOT_SUPPORTED,
    CSS_EV_ORIG_BLOCKED_BY_IRAT,

    CSS_EV_PKT_ACTIVE = 50,
    CSS_EV_PKT_RELEASED,
    CSS_EV_PKT_DORMANT,

    CSS_EV_ORIG_USER_CANCEL = 60,
    CSS_EV_ORIG_ACCESS_FAIL,
    CSS_EV_ORIG_NO_SVC_FAIL,
    CSS_EV_ORIG_RETRY_ORDER,
    CSS_EV_SR_ENABLED,
    CSS_EV_SR_DISABLED,
    CSS_EV_ORIG_REQ_RECEIVED,
    CSS_EV_PSW_POWER_UP,
    CSS_EV_PSW_POWER_DOWN,

    CSS_EV_FLASHFAIL = 80,
    CSS_EV_ANALOG_PAGE_RECEIVED,
    CSS_EV_AMPS_IDLE,

    CSS_EV_ABBR_INTERCEPT,
    CSS_EV_ABBR_REORDER,
    CSS_EV_CONNCOMPLETE,
    CSS_EV_ENTER_OOSA,
    CSS_EV_FNM_RELEASE,
    CSS_EV_MSID_UPDATED,
    CSS_EV_BUSY_ORIG_FAIL,
    CSS_EV_LOCKED_ORIG_FAIL,
    CSS_EV_REG_MAX_PROBE,
    CSS_EV_DOCONN_1XPREEMPT,
    CSS_EV_ORIG_ACCT,
    CSS_EV_REG_SYS_LOST,
    CSS_EV_SMS_CANCEL_BY_PWRDOWN,
    CSS_EV_RSVAS_SUSPEND_COMPLETE,
    CSS_EV_SERVICE_SUCCESS,
    CSS_EV_LOCKED,
    CSS_EV_UNLOCKED,
    CSS_RPT_CP_EVENT_INVALID
} Css1xRptCpEventT;

typedef enum
{
    IRAT_DEEPSLEEP = 0,     /* no system state after disabled by MMC */
    IRAT_CSSOOSA,           /* css in OOSA sleep */
    IRAT_INIT,              /* no system state while scanning channel */
    IRAT_RESCAN,            /* conducting MPSS scan, ASSO scan,..*/
    IRAT_SYSTEMLOST,        /* no system state while scanning channel or OOSA after sys lost */
    IRAT_IDLE,
    IRAT_CONNECTION,

    /* the followings are used as event only */
    IRAT_EXHAUST,           /* reach at the end of scan list */
    IRAT_DO_NO_ASSO,        /* current 1X has no associated DO system */
    IRAT_HANDOFF,           /* handoff to a new system */
    IRAT_SCANNING,          /* scanning channels */
    IRAT_WAKEUP,            /* wakeup from OOSA or DEEPSLEEP*/
    IRAT_VALIDATE_FAIL,     /* Validate fail from scanning or idle*/
    IRAT_VALIDATE_SUCC,     /* Validate success from scanning or idle*/
    IRAT_1X_POWERUP,        /* 1xRTT Power up done. */
    IRAT_DO_POWERUP,        /* EVDO Power up done. */
    IRAT_1X_POWERDOWN,      /* 1xRTT Power down done. */
    IRAT_DO_POWERDOWN,      /* EVDO Power down done. */
    IRAT_1X_RSSI_SCAN_ABORTED,  /* 1xRTT RSSI Abort done */
    IRAT_1X_IN_SERVICE,         /* 1xRTT is in service from PSW */
} IRAT_CPStateT;

typedef enum
{
    IRAT_STATE_INACTIVATE,         /*0*/
    IRAT_STATE_MCC_SEARCH,         /*1*/
    IRAT_STATE_SYS_ACQ,            /*2*/
    IRAT_STATE_GMSS_CS_REG,        /*3*/
    IRAT_STATE_GMSS_PS_REG,        /*4*/
    IRAT_STATE_L2C_RESEL,          /*5*/
    IRAT_STATE_L2C_REDIRECT,       /*6*/
    IRAT_STATE_C2L_RESEL,          /*7*/
    IRAT_STATE_SUSPEND,            /*8*/
    IRAT_STATE_VIRTUAL_SUSPEND,    /*9*/
    IRAT_STATE_RESUME,             /*10*/
    IRAT_STATE_DO_RESUME,          /*11*/
    IRAT_STATE_VIRTUAL_RESUME,     /*12*/
    IRAT_STATE_CS_SERVICE_START,   /*13*/
    IRAT_STATE_CS_SERVICE_FINISH,  /*14*/
    IRAT_STATE_GMSS_PS_DEREG,      /*15*/
    IRAT_STATE_DEACTIVATE,         /*16*/
    IRAT_STATE_LTE_DISABLE,        /*17*/
    IRAT_STATE_SET_RAT_MODE,       /*18*/
    IRAT_STATE_EMC_START,          /*19*/
    IRAT_STATE_EMC_STOP,           /*20*/
    IRAT_STATE_POWER_OFF,          /*21*/
    IRAT_STATE_CS_OCCUPY,          /*22*/
    IRAT_STATE_POWER_UP_SET_RAT,   /*23*/
    IRAT_STATE_POWER_DOWN_SET_RAT, /*24*/    
    IRAT_STATE_NUM
}IratMainStateE;

typedef enum
{
    LLA_OCCUPY_OWNER_IRAT_LIST,
    LLA_OCCUPY_OWNER_IRAT_MAJOR,
    LLA_OCCUPY_OWNER_RSVAC,
    LLA_OCCUPY_OWNER_NONE
} LLAOccupyOwnerT, LLAReleaseOwnerT;

typedef enum
{
    CSS_EV_DO_POWERUP,
    CSS_EV_DO_POWERDOWN
}CssDoRptCpEventT;

typedef enum
{
    SUCC,
    TCH_FAIL,
    CONN_DENY,
    RETRY_DELAY,
    THROTTLING
}CssTchSetupStatusT;

typedef PACKED_PREFIX struct _RECORD_INDEX {
    kal_uint8 *pByteOffset;
    kal_uint32 bitOffset;
    kal_uint16 recNum;
    kal_uint16 recSize;
} PACKED_POSTFIX  RECORD_INDEX, PACKED_POSTFIX *pRECORD_INDEX;

typedef PACKED_PREFIX struct
{
    kal_uint16 CPCA, CSCA;    /* CDMA CELL PRI CH, SEC CH, respectively, Sys A */
    kal_uint16 CPCB, CSCB;    /* CDMA CELL PRI CH, SEC CH, respectively, Sys B */

    kal_uint8 MAX_SID_NID;
    kal_uint8 STORED_POS_SID_NID;
    kal_uint16 SID[MAX_POSITIVE_SIDS];
    kal_uint16 NID[MAX_POSITIVE_SIDS];

    kal_uint8 STORED_NEG_SID_NID;
    kal_uint16 NEG_SID[MAX_NEGATIVE_SIDS];
    kal_uint16 NEG_NID[MAX_NEGATIVE_SIDS];

    kal_uint8 SystemSelect;

} PACKED_POSTFIX NAM_PREFERENCES, PACKED_POSTFIX *pNAM_PREFERENCES;

typedef enum {
    PRL_1X95 = 1,
    RSVD,
    PRL_EXT
}PRL_PREV;

typedef enum
{
    NORMAL_PRL = 0,
    CONCATENATE_PRL =1
}PRL_TYPE;

#ifdef MTK_PLT_ON_PC_UT
typedef enum
{
    CSS_CONF_LTE_IS_TURNED_OFF,        /**< LTE is turned on or not */
    CSS_CONF_UIM_IS_DISABLE,           /**< UIM is disable or not */
    CSS_CONF_UIM_STATE,                /**< UIM state (no card, UICC, ..) */
    CSS_CONF_IRAT_MODE,                /**< C2K-LTE IRAT mode */
    CSS_CONF_4G_SWITCH_OFF_BY_AT,      /**< 4G is switch off by AT command or not */
    CSS_CONF_SIM_INDEX,                /**< SIM index of C2K modem */
    CSS_CONF_PS_DATA_ATTACHED,         /**< PS data attached */
    CSS_CONF_OPERATOR_SBP_ID,          /**< Opeartor SBP ID */
    CSS_CONF_ECTM_MODE,                /**< UUT test mode */
    CSS_CONF_REL_TO_IDLE,              /**< ReleaseToIdle is ture or false */
    CSS_CONF_IDLE_GEO_LIST_SBP,        /**< idle GEO list feature SBP */
    CSS_CONF_MRU_FIRST_ENTRY_OPER_SID_NID, /**< MRU first entry operational SID/NID */
    CSS_CONF_1X_REG_ENABELD,          /**< 1x registration is allowed or not */
    CSS_CONF_DATA_HOLD_SBP,           /**< T_data_hold before data call feature SBP */
    CSS_CONF_PREF_ONLY,               /**< PREF_ONLY in PRL */
    CSS_CONF_SYSTEM_SELECT_TYPE,      /**< system select type */
    CSS_CONF_SBP_FEATURE_SET,         /**< set sbp feature */
    CSS_CONF_INTL_ERI_VALUES_SET,     /**< set intlEriVals*/
    CSS_CONF_CSS_NAM_ROAMING_SET,     /**< set _css_nam.RoamingSetting */
    CSS_CONF_ACTIVE_BAND_BITMASK,     /**< set active band bitmask */
    CSS_CONF_PREFMODE,                /**< set hybrid mode setting by AT+ PREFMODE */
    CSS_CONF_GMSS_MRU_SBP,            /**< GMSS MRU feature SBP */
    CSS_CONF_VZW_E911_SBP,            /**< VZW E911 SBP */
    CSS_CONF_RAT_MODE,                /**< RAT MODE */
    CSS_CONF_ERI_SBP,                 /**< ERI feature SBP */
    CSS_CONF_INVALID = 0xff           /* invalid access option, only for initialisation */
}css_configure_enum;
#endif

enum cpsm_1x_states
{
    CPSM_1X_POWERUP_ST,
    CPSM_1X_SCANNING_ST,
    CPSM_1X_IDLE_ST,
    CPSM_1X_CONNECTION_ST,
    CPSM_1X_SCANPAUSE_ST,
    CPSM_1X_OOSA_ST,
    CPSM_1X_NUM_STATES
};
typedef enum cpsm_1x_states CPSM_1X_STATES;

enum cpsm_do_states
{
    CPSM_DO_POWERUP_ST,
    CPSM_DO_SCANNING_ST,
    CPSM_DO_IDLE_ST,
    CPSM_DO_CONNECTION_ST,
    CPSM_DO_SCANPAUSE_ST,
    CPSM_DO_OOSA_ST,
    CPSM_DO_NUM_STATES
};
typedef enum cpsm_do_states CPSM_DO_STATES;

typedef enum 
{
    CSS_NOT_IN_FORCE_INIT = 0,
    CSS_FORCE_INIT_TO_PAUSE,
    CSS_FORCE_INIT_TO_SCAN
} CssForceToInitStatusE;

typedef PACKED_PREFIX struct {
    kal_bool valid;
    kal_uint16 PR_LIST_SIZEs;
    kal_uint16 PR_LIST_IDs;
    PRL_PREV SSPR_P_REV;
    kal_bool PREF_ONLYs;
    kal_uint8 DEF_ROAM_INDs;
    kal_uint16 NUM_ACQ_RECSs;
    kal_uint16 NUM_COMMON_SUBNET_RECS;
    kal_uint16 NUM_SYS_RECSs;
    RECORD_INDEX acquireTableStart;
    RECORD_INDEX commSubnetTableStart;
    RECORD_INDEX systemTableStart;
    kal_uint16 PR_LIST_CRCs;
    kal_uint16 NUM_GEO_AREASs;
} PACKED_POSTFIX  PRL_HEADER, PACKED_POSTFIX *pPRL_HEADER;

typedef struct {
    kal_bool valid;
    kal_uint32 PRL_Length;
    PRL_TYPE prl_type;
    kal_uint16 IS683A_Length;
    kal_uint16 IS683C_Length;
    kal_uint16 PR_LIST_CRCs;
    
    kal_uint16 PR_LIST_IDs;
    kal_bool   isEPRL;
} PRL_INFO, *pPRL_INFO;

typedef PACKED_PREFIX struct
{
    kal_bool e911;
} PACKED_POSTFIX  Css1xE911ModeSetMsgT;

typedef PACKED_PREFIX struct _SYSTEM_INFO_1X {
    kal_bool   foundSomeSys;
    kal_uint16 sid;
    kal_uint16 nid;
    kal_uint16 oper_sid;
    kal_uint16 oper_nid;
    kal_uint16 roamInd;
    kal_uint8  systemPref;
    kal_uint16 acqIndex;
    CHANNEL_DESC system;
    kal_uint16  pilotStrength;
    kal_int16   rxPower;
    kal_uint8   sys1xPriority; /* IRAT Priority: 0 (HOME), 1 (PREF), 2 (ANY), 255 (INVALID) */
} PACKED_POSTFIX  SYSTEM_INFO_1X, PACKED_POSTFIX *pSYSTEM_INFO_1X;

typedef PACKED_PREFIX struct
{
    SYSTEM_INFO_1X Sys;
} PACKED_POSTFIX  OtaspSelectParmsT;

typedef PACKED_PREFIX struct
{
    kal_uint16 expectedSid;
    kal_bool   ignoreCDMA;
    kal_uint8  sysOrdering;
    kal_uint8  maxRedirectDelay;  /* only applies to Global redirect */
} PACKED_POSTFIX  SvcRedirAnalog;


#define CSS_MAX_SERV_REDIR_NUM_CHANS 16 /* 4 bits */
typedef PACKED_PREFIX struct
{
    kal_uint8  bandClass;
    kal_uint16 expectedSid;
    kal_uint16 expectedNid;
    kal_uint8  numChans;
    kal_uint16 cdmaChan[CSS_MAX_SERV_REDIR_NUM_CHANS];
} PACKED_POSTFIX  SvcRedirCDMA;

typedef PACKED_PREFIX union
{
    SvcRedirAnalog analog;
    SvcRedirCDMA   cdma;
} PACKED_POSTFIX  RedirType;

typedef PACKED_PREFIX struct
{
    kal_bool   global;                   /* indicates a global redirection */
    kal_uint16   redirectAccolc;
    kal_bool   returnIfFail;
    kal_bool   deleteTMSI;
    kal_bool   exclPRevMs;
    kal_bool   redirectType;
    kal_uint8  recordType;
    RedirType  type;
} PACKED_POSTFIX  SvcRedirData1xT;

typedef PACKED_PREFIX struct
{
    SvcRedirData1xT RediretionData;
    kal_bool SysRedirectedToValid;
} PACKED_POSTFIX  RedirectionSelectParmsT;

typedef PACKED_PREFIX struct{
    SystemSelectIndE indication;
#ifdef MTK_DEV_C2K_IRAT
    kal_bool  isIndHandled;
#endif
    PACKED_PREFIX union{
        OtaspSelectParmsT OtaParms;
        RedirectionSelectParmsT RedirectParms;
    } PACKED_POSTFIX u;
} PACKED_POSTFIX Css1xSelectReqMsgT;

typedef enum
{
    CSS_1X_SID_NID_VALIDATION,
    CSS_1X_MCC_MNC_VALIDATION,
} Css1xValidationType;

typedef PACKED_PREFIX struct {
    kal_uint16 curChan;
    SysCdmaBandT curBand;
    kal_uint16  pilotStrength;
    kal_int16   rxPower;
    Css1xValidationType valType;
    kal_uint16 sid;
    kal_uint16 nid;
    kal_uint16 mcc;  /* mcc */
    kal_uint16 mnc;  /* mnc (i.e. imsi_11_12) */
    kal_uint16 aiMcc;  /* mcc in ESPM */
} PACKED_POSTFIX  Css1xValidateReqT;

typedef PACKED_PREFIX struct {
    kal_uint16  pilotStrength;
    kal_int16   rxPower;
} PACKED_POSTFIX  Css1xUpdateLastSavedEcIoRxPwrT;

typedef PACKED_PREFIX struct
{
    kal_bool pending;
    kal_bool isVoice;
} PACKED_POSTFIX  Css1XSetCallPendingMsgT;

typedef PACKED_PREFIX struct
{
    kal_uint16  sid;
    kal_uint16  nid;
    kal_uint16 curChan;
    SysCdmaBandT curBand;
} PACKED_POSTFIX  Css1XSysParmsUpdateMsgT;

typedef struct
{
    PRL_INFO   PRLInfo;
} CssGetPrlRspMsgT;

typedef PACKED_PREFIX struct
{
    PswIs95NamT  namData;
} PACKED_POSTFIX  Css1xNamUpdatedMsgT;

typedef PACKED_PREFIX struct
{
    kal_uint8 nam;
} PACKED_POSTFIX  CssUpdateActiveNamMsgT;

typedef PACKED_PREFIX struct
{
    SysBandChannelT channel;
} PACKED_POSTFIX  CssSaveChannelMsgT;

typedef PACKED_PREFIX struct
{
    SysBandChannelT channel;
    kal_bool withSyncCh;
} PACKED_POSTFIX  CssSetReturnChannelMsgT;

typedef PACKED_PREFIX struct
{
    kal_uint16 eri_version_number;
} PACKED_POSTFIX  CssEriVersionNumberRspMsgT;

typedef PACKED_PREFIX struct
{
    kal_bool newSession;
    kal_uint8 sysRev;
} PACKED_POSTFIX  CssDOSessionOpenedMsgT;

typedef PACKED_PREFIX struct
{
    kal_bool isAliveSession;
} PACKED_POSTFIX  CssDOSessionNegoModeMsgT;

typedef PACKED_PREFIX struct
{
  Css1xRptCpEventT event;
} PACKED_POSTFIX  CssRptCpEventMsgT;

/* DO messages structure*/

typedef PACKED_PREFIX struct{
    SystemSelectIndE indication;
#ifdef MTK_DEV_C2K_IRAT
    kal_bool isIndHandled;
#endif
} PACKED_POSTFIX  CssDoSelectReqMsgT;

typedef PACKED_PREFIX struct {
  kal_uint8 subnet[SUBNET_LENGTH];
  kal_uint16 curChan;
  SysCdmaBandT curBand;
#ifdef MTK_CBP
  kal_uint16 mcc;
#endif
} PACKED_POSTFIX  CssDoValidateReqMsgT;

typedef PACKED_PREFIX struct {
  CHANNEL_DESC Channel;
} PACKED_POSTFIX  CssDoNtwkAcqdMsgT;

typedef PACKED_PREFIX struct {
  kal_bool SessOpened;
} PACKED_POSTFIX  CssDoSessStatusIndT;

typedef PACKED_PREFIX struct {
  OperationModeT OpMode;
  HybridPrefModeT HybridPrefMode;
  kal_uint16 Mpss_Duration;
} PACKED_POSTFIX  CssTestCfgT;

/* CDMA Channel Record */
typedef PACKED_PREFIX struct
{
   kal_uint8             SysType;
   kal_uint8             BandClass;
   kal_uint16            Channel;
} PACKED_POSTFIX  ChanRecT;

/* ALMP Redirect Message */
typedef PACKED_PREFIX struct
{
   kal_uint8   NumChannel;       /* 8 bits */
   ChanRecT  Channels[CP_HRPD_MAX_NUM_REDIRECT_CHANNELS]; /* 24 bits/channel */
} PACKED_POSTFIX  SvcRedirDataDoT, PACKED_POSTFIX CssDoSvcRedirDataMsgT;

typedef PACKED_PREFIX struct {
  CHANNEL_DESC Channel;
} PACKED_POSTFIX  CssDoChanChangedIndMsgT;

typedef PACKED_PREFIX struct
{
  CssDoRptCpEventT event;
} PACKED_POSTFIX  CssDoRptCpEventMsgT;

typedef PACKED_PREFIX struct
{
  kal_bool PwrUp;  /* KAL_TRUE-powerup; KAL_FALSE-powerdown */
  CssCpSystemT Sys;   /* 0-DO, 1-1X, 2:both 1X and DO */
} PACKED_POSTFIX  CssCpPowerCtrlMsgT;

typedef PACKED struct
{
    kal_bool mode;  /* KAL_TRUE: enter deep sleep mode; KAL_FALSE: exit deep sleep mode */
} CssValDeepSleepModeMsgT;

typedef PACKED_PREFIX struct
{
    kal_bool  attachStatus;
} PACKED_POSTFIX  CssValAttachStateIndMsgT;

typedef PACKED_PREFIX struct {
   kal_uint16 T_HRPD_Init;
   kal_uint16 T_1x_Init;
} PACKED_POSTFIX  CssPeriodicalSearchCycleSetMsgT;

typedef PACKED_PREFIX struct {
    kal_bool isMoCall;              /* to indicate the released call is MO call or MT call
                                       TRUE: MO call
                                       FALSE:MT call */                                           
} PACKED_POSTFIX  CssValVsRelIndMsgT;

typedef PACKED_PREFIX struct
{
  kal_uint16 PRL_ID;
} PACKED_POSTFIX  CssGetPrlIdRspMsgT;

typedef PACKED_PREFIX struct {
   CTDoDefaultBandDataT DOSystem[MAX_DO_DEFAULTBAND_SIZE];
} PACKED_POSTFIX  DODefaultBandSetMsgT;

typedef PACKED_PREFIX struct {
   kal_uint8 APersistence;
} PACKED_POSTFIX  CssACMAPersistenceIndMsgT;

typedef PACKED_PREFIX struct {
   kal_bool status; /*KAL_FALSE(0): max access probes failure, KAL_TRUE(1): access succeed*/
} PACKED_POSTFIX  CssDOAccessStatusIndT;

typedef PACKED_PREFIX struct {
   kal_uint16 Type; /*high 8 bits are direction if current DO connection is for DO data call (1-AT initiated),
                         low 8 bits are the connection type(for example, data call, SCP con)*/
} PACKED_POSTFIX  CssDoConnStartIndMsgT;

typedef PACKED_PREFIX struct {
   kal_uint8 type;
   kal_uint8 cause;
} PACKED_POSTFIX  CssDoErrIndT;

typedef enum
{
   CPSM_OOSA_SCAN_TIMER=0,
   CPSM_OOSA_SCAN_LIST
}CpsmOOSAScanMethod;

typedef enum
{
   CSS_OOSA_POWER_UP = 0,
   CSS_OOSA_SYSTEM_LOST
}CpsmOOSAStage;

typedef enum
{
   CSS_1X_SUB_MODULE = 0,
   CSS_DO_SUB_MODULE
}CssSubModule;

typedef enum
{
  CSS_OOSA_PHASE_SUCCESS = 0,
  CSS_OOSA_PHASE_FAIL_GENERAL_FAILURE,
  CSS_OOSA_PHASE_FAIL_PHASE_NOT_EXIST,
  CSS_OOSA_PHASE_FAIL_PHASE_INDEX_TOO_LARGE,
  CSS_OOSA_PHASE_FAIL_SLEEP_OUT_OF_RANGE
}CssOOSAPhaseRsp;

typedef PACKED_PREFIX struct
{
  CpsmOOSAScanMethod   scanMethod;
  kal_uint32               scanTime;
  kal_uint8                cycles;
  kal_uint32               delay;
} PACKED_POSTFIX CpsmOOSAPhaseT;

/*------------------------------------------------------*/
/* Begin CSS Set/Get Parm definitions                   */
/*------------------------------------------------------*/
/* Bitmap (on kal_uint8) of all the CSS DBM segments */
typedef enum
{
  CSS_DBM_1X    = 0x01,
  CSS_DBM_DO    = 0x02,
  CSS_DBM_MISC  = 0x04,
  CSS_DBM_ALL   = CSS_DBM_1X | CSS_DBM_DO | CSS_DBM_MISC
} CssDbmId;

typedef PACKED_PREFIX struct
{
  SysCdmaBandT band;
  kal_uint16       channel;
} PACKED_POSTFIX MruBandChannelT;

typedef PACKED_PREFIX struct
{
   CssDbmId DbmId;
} PACKED_POSTFIX  CssDbmInitDBToDefaultMsgT;

typedef enum
{
    CSS_PARM_SET_1X_T_BSR_DURATION,
    CSS_PARM_GET_1X_T_BSR_DURATION,
    CSS_PARM_SET_1X_AVOIDANCE_DURATION,
    CSS_PARM_GET_1X_AVOIDANCE_DURATION,
    CSS_PARM_SET_DO_T_BSR_DURATION,
    CSS_PARM_GET_DO_T_BSR_DURATION,
    CSS_PARM_SET_1X_MANUAL_AVOID_SID,
    CSS_PARM_GET_1X_MANUAL_AVOID_SID,
    CSS_PARM_SET_MRU_CHANNEL,
    CSS_PARM_GET_MRU_CHANNEL,
    CSS_PARM_SET_LOCK_CHANNEL,
    CSS_PARM_GET_LOCK_CHANNEL,
    CSS_PARM_SET_1X_PS_DELAY_TIMER_DURATION,
    CSS_PARM_GET_1X_PS_DELAY_TIMER_DURATION,
    CSS_PARM_SET_1X_DO_T_BSR_1_2_DURATION,
    CSS_PARM_GET_1X_DO_T_BSR_1_2_DURATION,
    /* IMPORTANT:
     * when adding new parameters to the list, add BOTH SET and GET,
     * even if one of them is not used/implemented */
    CSS_PARM_OPERATION_ID_END_LIST
} CssParmOperationId;

typedef enum
{
    CSS_PARM_OPERATION_SUCCESS,
    CSS_PARM_OPERATION_FAIL_PARM_ID_NOT_SUPPORTED,
    CSS_PARM_OPERATION_FAIL_READ_NOT_ALLOWED,
    CSS_PARM_OPERATION_FAIL_WRITE_NOT_ALLOWED,
    CSS_PARM_OPERATION_FAIL_INVALID_PTR,
    CSS_PARM_OPERATION_FAIL_INVALID_LENGTH,
    CSS_PARM_OPERATION_GENERAL_FAILURE,
    CSS_PARM_OPERATION_NO_CHANGE_IN_VALUE,
    CSS_PARM_OPERATION_FAIL_VALUE_OUT_OF_RANGE,
    CSS_PARM_OPERATION_FAIL_OP_TYPE_NOT_SUPPORTED,
    CSS_PARM_OPERATION_FAIL_DEFAULT_NOT_DEFINED,
    CSS_PARM_OPERATION_FAIL_DEFAULT_NOT_SUPPORTED_FOR_PARM,
    CSS_PARM_OPERATION_FAIL_MISSING_PARAMETER,
    CSS_PARM_OPERATION_RESULT_END_LIST
}CssParmAccessResultCode;

typedef enum
{
    CSS_PARM_MIN_VALUE,
    CSS_PARM_MAX_VALUE,
    CSS_PARM_DEFAULT_VALUE,
    CSS_PARM_CUSTOM_VALUE,
    CSS_PARM_OP_TYPE_LIST_END
} CssParmOperationType;

typedef enum
{
    CSS_TIMER_START = 0,
    CSS_1X_TIMER_START = CSS_TIMER_START,
    CSS_1X_MPSS_TIMER = CSS_1X_TIMER_START,
    CSS_1X_EPRL_ESPM_WAIT_TIMER,
    CSS_1X_SCANNING_TIMER,
    CSS_1X_EMERGENCY_CALLBACK_MODE_TIMER,
    CSS_1X_LOST_WHILE_DO_CONN_SCAN_TIMER,
    CSS_1X_EMERGENCY_SCAN_PREV_SYSTEM_TIMER,
    CSS_1X_HOMESYS_AVOIDANCE_TIMER,
    CSS_1X_HOMESYS_AVOIDANCE_END_TIMER,
    CSS_1X_REDIRECTION_AVOIDANCE_TIMER, /*143v1[1]  4.5.1 4.5.3*/
    CSS_1X_PS_DELAY_TIMER, /* Verizon Reqs-LTE Multi Mode Operations */
    CSS_1X_BSR_SCAN_TIMER, /* sprint feature: control BSR in 10s feature
                              if Device is not able to scan all the channels during the first 10 secs,
                              the Device MUST wait 10 extra secs before continuing scanning the remainder of the channels.
                              the first 10 secs*/
    CSS_1X_BSR_EXTRA_WAIT_TIMER, /* wait 10 extra secs*/
    CSS_1X_BSR_DATA_HOLD_TIMER, /* sprint feature: device must wait T_data_hold before establishing a data call to allow BSR completion */
    CSS_1X_REG_REJ_AVOIDANCE_TIMER, /* when registration reject continuously, need to bar it for some time */
    CSS_1X_REG_REJ_AVOIDANCE_END_TIMER,
    CSS_1X_RELEASE_REJ_AVOIDANCE_TIMER,   /* when registration reject continuously, need to bar it for some time */
    CSS_1X_RELEASE_REJ_AVOIDANCE_END_TIMER,
    CSS_1X_TIMER_END = CSS_1X_RELEASE_REJ_AVOIDANCE_END_TIMER,

    CSS_DO_TIMER_START,
    CSS_DO_MPSS_TIMER = CSS_DO_TIMER_START,
    CSS_DO_REDIR_END_TIMER,
    CSS_DO_SCANNING_TIMER,
    CSS_DO_WTF_SESSION_OPEN_TIMER,
    CSS_DO_AVOIDANCE_TIMER,
    CSS_DO_SCAN_INTERRUPT_TIME_TIMER,
    CSS_DO_MPSS_HOLD_TIMER, /*143v1[1]  5.4.3 T_dbsr_hold*/
    CSS_DO_MPSS_CALL_TIMER, /*143v1[1]  5.4.5 T_dbsr_call*/
    CSS_DO_CONSECUTIVE_DO_LOST_TIMER, /*143v1[1]  5.5.2*/
    CSS_DO_AVOIDANCE_LOST_TIMER, /*143v1[1]  5.5.2*/
    CSS_DO_REDIRECTION_AVOIDANCE_TIMER, /*143v1[1]  5.6.2*/
    CSS_DO_ACM_PERSIS_TEST_FAIL_AVOIDANCE_TIMER, /*143v1[1]  5.7.1*/
    CSS_DO_MAXACCESSFAIL_AVOIDANCE_TIMER, /*143v1[1]  5.7.2*/
    CSS_DO_SESSIONEGO_TIMEOUT_AVOIDANCE_TIMER, /*143v1[1]  5.7.7*/
    CSS_DO_SESSIONEGO_FAIL_AVOIDANCE_TIMER, /*143v1[1]  5.7.7*/
    CSS_DO_CONNDENY_AUTH_AVOIDANCE_TIMER, /*143v1[1]  5.7.7*/
    CSS_DO_CONNDENY_GENERAL_AVOIDANCE_TIMER, /*143v1[1]  5.7.4*/
    CSS_DO_CH_AVOIDANCE_TICK_TIMER,
    CSS_DO_SCANNING_DURATION_TIMER, /* Per KDDI's req, AT shall set the timer when start to scan,
                                     * and stop the scan when the timer expires in the scenario of "1X&DO both OOSA" */
    CSS_IRAT_PS_RAT_RPT_DELAY_TIMER,
    CSS_IRAT_TDO_TIMER,
    CSS_IRAT_DO_RESUME_TIMER,
    CSS_IRAT_DEACTIVATE_RPT_DELAY_TIMER,
    CSS_DO_TIMER_END = CSS_IRAT_DEACTIVATE_RPT_DELAY_TIMER,

    CSS_IRAT_PROCEDURE_GUARD_TIMER_START,
    CSS_IRAT_MCC_SEARCH_GUARD_TIMER = CSS_IRAT_PROCEDURE_GUARD_TIMER_START,
    CSS_IRAT_PS_REG_GUARD_TIMER,
    CSS_IRAT_SYS_ACQUIRE_GUARD_TIMER,
    CSS_IRAT_RESEL_REDIR_GUARD_TIMER,
    CSS_IRAT_DEREG_GUARD_TIMER,
    CSS_IRAT_SET_RAT_MODE_TIMER,
    CSS_IRAT_C2L_RESEL_GUARD_TIMER,
    CSS_IRAT_PROCEDURE_GUARD_TIMER_END = CSS_IRAT_C2L_RESEL_GUARD_TIMER,
    CSS_TIMER_END =CSS_IRAT_PROCEDURE_GUARD_TIMER_END,
    
    CSS_MAX_NUMBER_OF_TIMER_TYPES
} CssTimerTypeE;

typedef PACKED_PREFIX struct
{
    kal_uint16 pilotThresh;
} PACKED_POSTFIX  Css1xMpssPilotStrengthThresh_APIStruct;

typedef PACKED_PREFIX struct
{
    kal_uint32  duration;
} PACKED_POSTFIX  CssTimerDuration_APIStruct;

typedef PACKED_PREFIX struct
{
    Css1xBsrTimerTypeT   tbsr;
    kal_uint32               duration;
} PACKED_POSTFIX  Css1xBsrTimerDuration_APIStruct;

typedef PACKED_PREFIX struct
{
    Css1xAvoidanceTimerTypeT   avoidance;
    kal_uint32                     duration;
} PACKED_POSTFIX  Css1xAvoidanceTimerDuration_APIStruct;

typedef PACKED_PREFIX struct
{
    CssDOBsrTimerTypeT   tbsr;
    kal_uint32               duration;
} PACKED_POSTFIX  CssDOBsrTimerDuration_APIStruct;

typedef PACKED_PREFIX struct
{
    kal_uint16 Sid[MAX_MANUAL_AVOID_1XSYS];
} PACKED_POSTFIX Css1xManualAvoidSid_APIStruct;

typedef PACKED_PREFIX struct
{
    kal_uint8           subModule;
    kal_uint8           index;
    MruBandChannelT mruChannel;
} PACKED_POSTFIX CssSetMruChannel_APIStruct;

typedef PACKED_PREFIX struct
{
    kal_uint8           subModule;
    kal_uint8           index;
    kal_uint8           num1x;
    kal_uint8           numDO;
    MruBandChannelT mru[MAX_MRU_RECORDS + MAX_MRU_RECORDS]; /* to contain 1x and/or DO MRU */
} PACKED_POSTFIX CssGetMruChannel_APIStruct;

#ifdef MTK_DEV_C2K_IRAT
typedef PACKED_PREFIX struct
{
    kal_uint8   sysType;
    kal_bool    b1xChnlLocked;
    kal_uint16  rttChnl;
    kal_bool    bDoChnlLocked;
    kal_uint16  doChnl;
} PACKED_POSTFIX CssSetChannleLockInfo_APIStruct;
#endif

/*------------------------------------------------------*/
/* End CSS Parm Set/Get definitions                     */
/*------------------------------------------------------*/

typedef PACKED_PREFIX struct
{
    CssSubModule         subModule;
    CpsmOOSAStage        stage;
    kal_uint8                phase;
    CpsmOOSAScanMethod   scanMethod;
    kal_uint32               scanTime;
    kal_uint8                cycles;
    kal_uint32               delay;
} PACKED_POSTFIX CssOOSASetPhaseParmsMsgT;

typedef PACKED_PREFIX struct
{
    CssOOSAPhaseRsp      result;
    CssSubModule         subModule;
    CpsmOOSAStage        stage;
    kal_uint8                phase;
} PACKED_POSTFIX CssOOSASetPhaseParmsRspMsgT;

typedef PACKED_PREFIX struct
{
    CssSubModule         subModule;
    CpsmOOSAStage        stage;
    kal_uint8                phase;
    CpsmOOSAScanMethod   scanMethod;
    kal_uint32               scanTime;
    kal_uint8                cycles;
    kal_uint32               delay;
} PACKED_POSTFIX CssOOSAGetPhaseParmsMsgT;

typedef PACKED_PREFIX struct
{
    CssOOSAPhaseRsp      result;
    CssSubModule         subModule;
    CpsmOOSAStage        stage;
    kal_uint8                phase;
    CpsmOOSAScanMethod   scanMethod;
    kal_uint32               scanTime;
    kal_uint8                cycles;
    kal_uint32               delay;
} PACKED_POSTFIX CssOOSAGetPhaseParmsRspMsgT;

#ifdef MTK_DEV_C2K_IRAT
typedef PACKED_PREFIX struct
{
    css_mmss_updated_file_id_enum file_id;
} PACKED_POSTFIX CssMMSSFileUpdateMsgT;
#endif

typedef PACKED_PREFIX struct
{
    CssSubModule         subModule;
    kal_bool  Enable;
} PACKED_POSTFIX CpsmOOSASetEnable_APIStruct;

typedef PACKED_PREFIX struct
{
    CssOOSAPhaseRsp      result;
    CssSubModule         subModule;
    kal_bool  Enable;
} PACKED_POSTFIX CpsmOOSASetEnableRsp_APIStruct;

typedef PACKED_PREFIX struct
{
    CssSubModule         subModule;
} PACKED_POSTFIX CpsmOOSAGetEnable_APIStruct;

typedef PACKED_PREFIX struct
{
    CssOOSAPhaseRsp      result;
    CssSubModule         subModule;
    kal_bool  Enable;
} PACKED_POSTFIX CpsmOOSAGetEnableRsp_APIStruct;

typedef PACKED_PREFIX struct
{
    CssSubModule         subModule;
    CpsmOOSAStage        stage;
    kal_uint8                numPhases;
} PACKED_POSTFIX CpsmOOSASetNumPhases_APIStruct;

typedef PACKED_PREFIX struct
{
    CssOOSAPhaseRsp      result;
    CssSubModule         subModule;
    CpsmOOSAStage        stage;
    kal_uint8                numPhases;
} PACKED_POSTFIX CpsmOOSASetNumPhasesRsp_APIStruct;

typedef PACKED_PREFIX struct
{
    CssSubModule         subModule;
    CpsmOOSAStage        stage;
} PACKED_POSTFIX CpsmOOSAGetNumPhases_APIStruct;

typedef PACKED_PREFIX struct
{
    CssOOSAPhaseRsp      result;
    CssSubModule         subModule;
    CpsmOOSAStage        stage;
    kal_uint8                numPhases;
} PACKED_POSTFIX CpsmOOSAGetNumPhasesRsp_APIStruct;

typedef PACKED_PREFIX struct
{
    CssSubModule         subModule;
    CpsmOOSAStage        stage;
    kal_uint8                phase;
    kal_uint8                cycle;
} PACKED_POSTFIX CpsmOOSASetCurrentStage_APIStruct;

typedef PACKED_PREFIX struct
{
    CssOOSAPhaseRsp      result;
    CssSubModule         subModule;
    CpsmOOSAStage        stage;
    kal_uint8                phase;
    kal_uint8                cycle;
} PACKED_POSTFIX CpsmOOSASetCurrentStageRsp_APIStruct;

typedef PACKED_PREFIX struct
{
    CssSubModule         subModule;
} PACKED_POSTFIX CpsmOOSAGetCurrentStage_APIStruct;

typedef PACKED_PREFIX struct
{
    CssOOSAPhaseRsp      result;
    CssSubModule         subModule;
    CpsmOOSAStage        stage;
    kal_uint8                phase;
    kal_uint8                cycle;
} PACKED_POSTFIX CpsmOOSAGetCurrentStageRsp_APIStruct;

typedef PACKED_PREFIX struct
{
    CpsmOOSAStage        stage;
    kal_uint8                phase;
    kal_uint8                cycle;
} PACKED_POSTFIX CpsmOOSACurrentPhase;

typedef PACKED_PREFIX struct
{
    CssSubModule         System;
} PACKED_POSTFIX CpsmGetMccT;

typedef PACKED_PREFIX struct
{
    kal_uint16                Mcc;
    CssSubModule          System;
} PACKED_POSTFIX CpsmGetMcccRspT;

typedef struct
{
    kal_uint8        CtrlMode; /* HWD_ENABLE = 0, HWD_DISABLE = 1, HWD_LOAD = 2 */
    kal_uint8        System;   /* 1x/DO */
    kal_uint8        Band;
    kal_uint16       Channel;
} CssTstPllChannelMsgT;

typedef PACKED_PREFIX struct
{
    kal_uint8  NetworkPreference;
} PACKED_POSTFIX  CssSvcStatusReqMsgT;

typedef enum
{
    CSS_1X_MARK_SYSTEM_AS_NEGATIVE,
    CSS_1X_CLEAR_MARKED_SYSTEM_LIST
} CssMarkSystemT;

typedef PACKED_PREFIX struct
{
    CssMarkSystemT action;
} PACKED_POSTFIX  CssMarkSystemMsgT;

typedef PACKED_PREFIX struct
{
    kal_bool Redirection;
} PACKED_POSTFIX  Css1xRedirIndMsgT;

typedef PACKED_PREFIX struct
{
    kal_uint32 timer;
} PACKED_POSTFIX  CssTimerExpiredMsgT;

typedef struct
{
    kal_int16 TxPwr;      /* in Q7 format */
} IratRcpTxPwrRspT, IratL1dTxPwrRspT;

typedef PACKED_PREFIX struct
{
    CssTchSetupStatusT status;
} PACKED_POSTFIX  CssDataTchSetupStatusMsgT;

typedef PACKED_PREFIX struct
{
    ExeRspMsgT            rspInfo;
    CssSubModule          subModule;
    kal_uint32                duration;
} PACKED_POSTFIX CpsmOOSAScanTimeSetMsgT;

typedef PACKED_PREFIX struct
{
    CssOOSAPhaseRsp     result;
    CssSubModule        subModule;
    kal_uint32              duration;
} PACKED_POSTFIX CpsmOOSAScanTimeSetRspMsgT;

typedef PACKED_PREFIX struct
{
    ExeRspMsgT          rspInfo;
    CssSubModule        subModule;
    kal_uint32              duration;
} PACKED_POSTFIX CpsmOOSAScanTimeGetMsgT;

typedef PACKED_PREFIX struct
{
    CssOOSAPhaseRsp     result;
    CssSubModule        subModule;
    kal_uint32              duration;
} PACKED_POSTFIX CpsmOOSAScanTimeGetRspMsgT;

typedef PACKED_PREFIX struct
{
    kal_uint8 RegStatus;   /* 0-1X reg succeed. 1-1X reg fail. others - reserved */
} PACKED_POSTFIX  CssPsw1XRegStatusIndT;

typedef PACKED_PREFIX struct
{
    kal_uint8 DOOverlap;  /* the value of the 3rd bit of BASE_ID in SPM of LGT 1X(sid=2190) */
} PACKED_POSTFIX  CssPsw1XDOOverlapIndT;

/*IRAT*/
#ifdef MTK_DEV_C2K_IRAT
/*CSS_IRATM_TO_LTE_RESEL_IND*/
typedef struct
{
    cas_eas_activate_ecell_req_struct  ReselToLteInfo;
} CssIratmToLteReselIndT;

/*CSS_IRATM_PARAM_UPDATE_IND*/
typedef struct
{
    kal_bool                  is_valid;       /* indicate if the CDMA2000 neighbor cell reselection parameter is valid */
    nbr_cell_list_c2k_struct  nbr_cell_list;  /* indicate the CDMA2000 neighbor cell reselection parameters */
} CssIratmParaUpdateIndT;

/*IRATM_CSS_PLMN_LIST_UPDATE_RSP*/
typedef struct
{
    gmss_css_sim_plmn_info_rsp_struct PlmnInfoRsp;
}CssIratmPlmnListUpdateRspT;

/*CSS_IRATM_POWER_CTRL_CNF*/
typedef struct
{
    kal_bool powerStatus; /*0: power off; 1: power on */
}CssIratmPowerCtrlCnfT;

/*CSS_IRATM_MEAS_CTRL_CNF*/
typedef struct
{
    kal_bool isMeasStart; /*0: measure off; 1: measure on */
}CssIratmMeasCtrlCnfT;

/* CSS_CLC_RELEASE_LLA_REQ */
typedef struct
{
    kal_uint8 LLAReleaseOwner;
}CssClcReleaseLlaReqT;

typedef struct
{
    kal_bool  NeedResetConn; /* This field shall be filled with value of same field in corresponding HLP_CSS_NETWORK_REL_REQ message */
    kal_bool  Is1xResReleased; /* True if HLP has notified PSW to release RSVAS*/
} CssHlpNetwkRelRspMsgT;

typedef struct
{
    kal_uint8  Pdn_Id;
    kal_uint8  Bearer_Id;
    kal_uint8  Reason;
} CssHlpEpsBearerDisconnIndT;

typedef struct
{
    kal_uint8 Band;          /* CDMA bandclass */
    kal_uint16 Channel;      /* CDMA channel number */
    IratCdmaPilotMeasResultT Pilot; /* CDMA pilot measure result */
} IratRupCurSysMeasRspT, IratPswCurSysMeasRspT;

typedef struct
{
    kal_uint8 available; /* 0-unavailale(msg not include RatInfo data); 1-available */
    IratEUTRANMeasureInfoT RatInfo;
    kal_uint8 ServingPriority; /* priority of current serving CDMA channel. 0xff means not provided */
    kal_int8 ThreshServing;    /* CDMA serving pilot strength threshold trigger point for EUTRAN
                              neighbor selection. 0xff means not provided */
} IratOmpRATInfoIndT, IratPswRATInfoIndT;

typedef struct
{
    kal_uint16 Mcc; /* 0xffff means not available */
    kal_uint8 pRev; /* pRev of CDMA95 and 1X */
    kal_bool  regenabled; /* 1 - MCC have changed and originale regenabled is TRUE, 0 - MCC not changed or  originale regenabled is FALSE*/
    kal_bool  MccChanged; /* MCC changed or not */
} IratOmpMCCRspT, IratPswMCCRspT;

typedef struct
{
    kal_uint16 Mcc; /* 0xffff means not available */
    kal_bool   regenabled; /* 1x register enabled or not*/
} IratOmpMccChangeIndT, IratPswMccChangeIndT;

typedef struct
{
    kal_uint8 Band;          /* CDMA bandclass */
    kal_uint16 Channel;      /* CDMA channel number */
    IratCdmaPilotMeasResultT Pilot; /* CDMA pilot measure result */
} IratRupCurSysWeakIndT, IratPswCurSysWeakIndT; /* content same as xxxCurSysMeasRspT */

typedef struct
{
    kal_uint16 sid;
    kal_uint16 nid;
    kal_uint16 baseId;
    kal_uint16 mcc;
    kal_uint16 mnc;
    kal_uint8  pzid;
} IratPswCellIDIndT;

typedef struct
{
    kal_uint8 sectorId[16];
    kal_uint8 subnetLength;
} IratOmpCellIDIndT;

typedef struct
{
    IratEvent event;
    kal_uint32    eventParameter;
} CssIratEventMsgT;

typedef enum
{
    RSVAS_CSS_EVENT_CS_OCCUPY,
    RSVAS_CSS_EVENT_CS_CANCEL,
    RSVAS_CSS_EVENT_CS_OCCUPY_IND,
    RSVAS_CSS_EVENT_CS_RELEASE,
    RSVAS_CSS_EVENT_PS_OCCUPY,
    RSVAS_CSS_EVENT_PS_CANCEL,
    RSVAS_CSS_EVENT_PS_OCCUPY_IND,
    RSVAS_CSS_EVENT_PS_RELEASE,
} CssRsvasEventT;

/* CSS_PSW_RSVAS_EVENT_REPORT_MSG */
typedef PACKED_PREFIX struct
{
    CssRsvasEventT  cssRsvasEvent;
    rsvas_sim_enum  servOwnerSimId;
    rsvas_sim_enum  currC2kSimId;
} PACKED_POSTFIX  CssRsvasEventReportMsgT;

/* CSS_PSW_RSVAS_SUSPEND_REQ_MSG */
typedef PACKED_PREFIX struct
{
    rsvas_sim_enum servOwnerSimId;
    rsvas_sim_enum currC2kSimId;
} PACKED_POSTFIX  CssPswRsvasSuspendReqMsgT;

/* CSS_PSW_RSVAS_DO_VRTL_SUSP_REQ_MSG */
typedef PACKED_PREFIX struct
{
    rsvas_sim_enum servOwnerSimId;
    rsvas_sim_enum currC2kSimId;
} PACKED_POSTFIX  CssPswRsvasDoVrtlSuspReqMsgT;

/* CSS_PSW_RSVAS_DO_RESUME_REQ_MSG */
typedef PACKED_PREFIX struct
{
    rsvas_sim_enum servOwnerSimId;
    rsvas_sim_enum currC2kSimId;
} PACKED_POSTFIX  CssPswRsvasDoResumeReqMsgT;

/* CSS_PSW_RSVAS_VRTL_RESUME_REQ_MSG */
typedef PACKED_PREFIX struct
{
    rsvas_sim_enum servOwnerSimId;
    rsvas_sim_enum currC2kSimId;
} PACKED_POSTFIX  CssPswRsvasVrtlResumeReqMsgT;

/* CSS_PSW_RSVAS_RESUME_REQ_MSG */
typedef PACKED_PREFIX struct
{
    rsvas_sim_enum servOwnerSimId;
    rsvas_sim_enum currC2kSimId;
} PACKED_POSTFIX  CssPswRsvasResumeReqMsgT;
#endif /* MTK_DEV_C2K_IRAT */

#ifdef MTK_PLT_ON_PC_UT
typedef struct
{
    LOCAL_PARA_HDR
    css_configure_enum	configure_id;
    kal_uint8        	value;
    kal_uint32        	valueArray[10];
}css_configure_req_struct;

/* msg struct of msg: CSS_SYS_UT_TIMER_START_REQ */
typedef struct
{
    LOCAL_PARA_HDR
    CssTimerTypeE       timerId;
    kal_uint16          index;
    kal_uint32          duration;
}css_sys_ut_timer_start_req_struct;

/* msg struct of msg: CSS_SYS_UT_TIMER_STOP_REQ */
typedef struct
{
    LOCAL_PARA_HDR
    CssTimerTypeE   timerId;
    kal_uint16      index;
}css_sys_ut_timer_stop_req_struct;

/* msg struct of msg: CSS_SYS_UT_TIMER_EXPIRED_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    CssTimerTypeE   type;
    kal_uint16      index;
}css_sys_ut_timer_expired_ind_struct;
#endif

void CssReportDOUnavailToHlp(void);
kal_uint8 cpCssGetNamSystemSelectType(void);
void css1xSetOtaSystem(kal_uint8 mode);
kal_uint8 css1xGetPilotAcqSensIndex(SysBandChannelT *system);
kal_bool cssIsPrlValid(void);
UiccCardStatusType cssGetUiccStatus(void);
kal_bool cssIsUiccReady(void);
kal_bool css1xIsSystemSelectSettingValid(SystemSelectType *sysSelect);
kal_bool cssGetEmergencyMode(void);
kal_uint8* cssGetPtrToPRL(void);
kal_uint16 cssGetERIVersionNumber(void);

CPSM_1X_STATES Cpsm1xGetState(void);
CPSM_DO_STATES CpsmDoGetState(void);

#ifdef MTK_DEV_C2K_IRAT
kal_bool IRATIsPsDataOnC2K(void);
IRAT_CPStateT IRATCpState(CssRatModeT rat);
IratMainStateE IRATGetCurMainState(void);
kal_bool IRATGet1XPSEnabled(void);
kal_bool IRATIsCsRegPendedForSilentRedial(void);
kal_bool IRATGet1XRegEnabled(void);
void IRATSet1xRegEnabled(kal_bool val);
srlteRatTypeT IRATGetDoRatType(void);
kal_bool IsIratActingOnPsReg(void);
kal_bool IRATIsC2KRatNotInvolvedInGlobalMode(void);
kal_bool IRATIsC2KRatModeNotInvolved(void);
#endif

#ifdef MTK_DEV_SLT
kal_uint16 cssGet1xPrlScanListNumber(void);
#endif
#if defined (MTK_DEV_C2K_IRAT) && defined (MTK_DEV_C2K_SRLTE_L1)
extern kal_uint32 SysFrcCntGet(void);
#endif
#endif

