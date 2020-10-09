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
* Copyright (c) 2002-2010 VIA Telecom, Inc.  All rights reserved.
*
*************************************************************/
/*****************************************************************************
* 
* FILE NAME   : c2k_defs.h
*
* DESCRIPTION : C2K common definitions.
*
* HISTORY     :
*****************************************************************************/
#ifndef C2K_DEFS_H
#define C2K_DEFS_H

/*----------------------------------------------------------------------------
* System Wide Definitions
*   The definitions below are those that are shared across all CP software.
*   By defining them in this file, each unit and/or API will not need to make
*   their own definition of these.
*
*   In order to be included in this list, the entity must have a well-defined
*   system definition.  For example, they can be drawn from IS-2000 standard
*   documents.
*----------------------------------------------------------------------------*/

/* Definition of the active air interface */
typedef enum
{
   SYS_MODE_1xRTT  = 0,
   SYS_MODE_EVDO,
   SYS_MODE_MAX
} SysAirInterfaceT;

#define SYS_NUM_APPS   (SYS_MODE_EVDO+1)
#define SYS_MODE_1xRTT_BM   (1<<SYS_MODE_1xRTT)
#define SYS_MODE_EVDO_BM    (1<<SYS_MODE_EVDO)
#define SYS_MODE_ANY_SYSTEM (SYS_MODE_1xRTT_BM | SYS_MODE_EVDO_BM)

/*
** Definition of CDMA system time
**   Kept in terms of a 20 msec frame count.
*/
typedef kal_uint32 SysSystemTimeT;

/* define Cdma Band type */
typedef enum
{
  SYS_BAND_CLASS_0 = 0,   /* 800 MHz cellular band       */
  SYS_BAND_CLASS_1,       /* 1.8 to 2.0 GHz band     */
  SYS_BAND_CLASS_2,       /* 872 to 960 MHz TACS band    */
  SYS_BAND_CLASS_3,       /* 832 to 925 MHz JTACS band   */
  SYS_BAND_CLASS_4,       /* 1.75 to 1.87 GHz Korean PCS */
  SYS_BAND_CLASS_5,       /* 450 MHz NMT band            */
  SYS_BAND_CLASS_6,       /* 2 GHz IMT-2000 band         */
  SYS_BAND_CLASS_7,       /* 700 MHz band                */
  SYS_BAND_CLASS_8,       /* 1800 MHz band               */
  SYS_BAND_CLASS_9,       /* 900 MHz band                */
  SYS_BAND_CLASS_10,      /* Secondary 800 MHz NMT band  */
  SYS_BAND_CLASS_11,      /* 400 MHz European PARM band  */
  SYS_BAND_CLASS_12,      /* 800 MHz PAMR band           */
  SYS_BAND_CLASS_13,      /* 2.5 GHz IMT-2000            */
  SYS_BAND_CLASS_14,      /* US PCS 1.9 GHz band         */
  SYS_BAND_CLASS_15,      /* AWS band                    */
  SYS_BAND_CLASS_16,      /* US 2.5 GHz band             */
  SYS_BAND_CLASS_17,      /* US 2.5GHz Forward Link Only Band */
  SYS_BAND_CLASS_18,      /* 700 MHz Public Safety Band  */
  SYS_BAND_CLASS_19,      /* Lower 700 MHz Band */
  SYS_BAND_CLASS_20,      /* L-Band */
  SYS_BAND_CLASS_MAX,
  SYS_BAND_CLASS_NOT_USED = SYS_BAND_CLASS_MAX,
  SYS_BAND_CLASS_UNSUPPORTED /* MUST be DIFFERENT than SYS_BAND_CLASS_MAX / SYS_BAND_CLASS_NOT_USED */
} SysCdmaBandT;

/* BANDCHANNEL - CDMA channel designator */
typedef struct
{
  SysCdmaBandT   band;                /* CDMA band */
  kal_uint16     cdmaCh;              /* CDMA_CH - the frequency */
  kal_uint16     potentialCdmaCh;    /* POTENTIAL_CDMACHs */
} SysBandChannelT;


/* define Multiplex Options for the MAC Multiplex Layer */
typedef enum
{
   SYS_MUX_NULL     = 0,
   SYS_MUX_OPTION1  = 1,
   SYS_MUX_OPTION2,
   SYS_MUX_OPTION3,
   SYS_MUX_OPTION4,
   SYS_MUX_OPTION5,
   SYS_MUX_OPTION6,
   SYS_MUX_OPTION7,
   SYS_MUX_OPTION8,
   SYS_MUX_OPTION9,
   SYS_MUX_OPTION10,
   SYS_MUX_OPTION11,
   SYS_MUX_OPTION12,
   SYS_MUX_OPTION13,
   SYS_MUX_OPTION14,
   SYS_MUX_OPTION15,
   SYS_MUX_OPTION16,
   SYS_MUX_OPTION809 = 0x809,
   SYS_MUX_OPTION80A,
   SYS_MUX_OPTION811 = 0x811,
   SYS_MUX_OPTION812,
   SYS_MUX_OPTION821 = 0x821,
   SYS_MUX_OPTION822,
   SYS_MUX_OPTION905 = 0x905,
   SYS_MUX_OPTION906,
   SYS_MUX_OPTION909 = 0x909,
   SYS_MUX_OPTION90A,
   SYS_MUX_OPTION911 = 0x911,
   SYS_MUX_OPTION912,
   SYS_MUX_OPTION921 = 0x921,
   SYS_MUX_OPTION922
} SysMultiplexOptionT;


typedef enum
{
   NULL_SERVICE_OPTION    = 0,

   SERVICE_OPTION_1       = 1,
   SERVICE_OPTION_2       = 2,
   SERVICE_OPTION_3       = 3,
   SERVICE_OPTION_4       = 4,
   SERVICE_OPTION_5       = 5,
   SERVICE_OPTION_6       = 6,
   SERVICE_OPTION_7       = 7,
   SERVICE_OPTION_8       = 8,
   SERVICE_OPTION_9       = 9,
   SERVICE_OPTION_10      = 10,
   SERVICE_OPTION_11      = 11,
   SERVICE_OPTION_12      = 12,
   SERVICE_OPTION_13      = 13,
   SERVICE_OPTION_14      = 14,
   SERVICE_OPTION_15      = 15,
   SERVICE_OPTION_16      = 16,
   SERVICE_OPTION_17      = 17,
   SERVICE_OPTION_18      = 18,
   SERVICE_OPTION_19      = 19,
   SERVICE_OPTION_20      = 20,
   SERVICE_OPTION_21      = 21,
   SERVICE_OPTION_22      = 22,
   SERVICE_OPTION_23      = 23,
   SERVICE_OPTION_24      = 24,
   SERVICE_OPTION_25      = 25,
   SERVICE_OPTION_26      = 26,
   SERVICE_OPTION_27      = 27,
   SERVICE_OPTION_28      = 28,
   SERVICE_OPTION_29      = 29,
   SERVICE_OPTION_30      = 30,
   SERVICE_OPTION_31      = 31,
   SERVICE_OPTION_32      = 32,
   SERVICE_OPTION_33      = 33,
   SERVICE_OPTION_34      = 34,
   SERVICE_OPTION_35      = 35,
   SERVICE_OPTION_36      = 36,
   SERVICE_OPTION_54      = 54,
   SERVICE_OPTION_55      = 55,
   SERVICE_OPTION_56      = 56,
   SERVICE_OPTION_59      = 59,
   SERVICE_OPTION_62      = 62,
   SERVICE_OPTION_63      = 63,
   SERVICE_OPTION_68      = 68,
   SERVICE_OPTION_69      = 69,
   SERVICE_OPTION_70      = 70,
   SERVICE_OPTION_73      = 73,
   SERVICE_OPTION_75      = 75,
   SERVICE_OPTION_4100    = 4100,
   SERVICE_OPTION_4101    = 4101,
   SERVICE_OPTION_4102    = 4102,
   SERVICE_OPTION_4103    = 4103,
   SERVICE_OPTION_4104    = 4104,
   SERVICE_OPTION_32768   = 32768,
   SERVICE_OPTION_32770   = 32770,
   SERVICE_OPTION_32798   = 32798,
   SERVICE_OPTION_32799   = 32799,
   SERVICE_OPTION_32858   = 32858,
   SERVICE_OPTION_32859   = 32859,   
#ifdef MTK_CBP_ENCRYPT_VOICE
   SERVICE_OPTION_32944	  = 32944,/*SO80b0 for Voice Encryption*/
#endif   
   NUM_SERVICE_OPTIONS,

   SERVICE_AMPS           = 0xFFFF,
}SysServiceOptionT, PswServiceOptionT, LmdServiceOptionT;

typedef enum {
  UNKNOWN_SVC,
  VOICE,            /* Voice Services (SCC VS)       */
  CIRCUIT_DATA,     /* Cicuit Data Services (SCC DS) */
  PACKET_DATA,      /* Packet Data Services (SCC PS) */
  LOOPBACK_TEST,    /* Loopback Services (SCC LS)    */
  MESSAGING,        /* Messaging Services (SCC MS)   */
  OTA_ADMIN,        /* OTA Admin Services (SCC OS)   */
  LOCATION          /* Location Services (SCC CS)    */
} SysServiceTypeT;

typedef enum
{
    FSM_UNEXPECTED_EVENT,
    FSM_CHANGED_STATE_EVENT,
    FSM_UNCHANGED_STATE_EVENT,
    FSM_NO_EVENT
} FsmEventTypeT;

/* Service Controller Module Ids */
typedef enum
{    
  SCC_CPC  = 1,
  SCC_NEG, 
  SCC_DBC, 
  SCC_OSC, 
  SCC_MSC, 
  SCC_VSC, 
  SCC_DSC, 
  SCC_PSC, 
  SCC_LSC, 
  SCC_BIOS, 
  SCC_API,
  SCC_TC, 
  SCC_CSC, 
  MAX_MODULE /* used by the token parser */  
} SccModuleId;

typedef enum
{    
  CSS_1X_CPSM,
  CSS_DO_CPSM,
} CssModuleId;

typedef enum {
  LS_UNKNOWN,
  LS_IS126_LPBK, /* IS-126 type Loopback      */
  LS_MARKOV,     /* Markov                    */
  LS_SUPCH_LPBK, /* Suppl Code channel Loopbk */
  LS_TDSO        /* TDSO                    */
} SysLoopbackSvcTypeT;

typedef enum {
  DS_UNKNOWN,
  DS_ASYNC,       /* ASYNC Data               */
  DS_FAX          /* FAX                      */
} SysCircuitDataSvcTypeT;

typedef enum {
  PS_UNKNOWN,
  PS_LSPD,       /* Low Speed Packed Data     */
  PS_MSPD,       /* Medium Speed Packed Data  */
  PS_HSPD         /* High Speed Packed Data    */
} SysPacketDataSvcTypeT;


/*define So Group,refer to C.R1001-C_v1.0 TableTable 3.3-1. Service Option Group Assignments. */
typedef enum {
  VOICE_GRP,                                  /* Voice Services  */
  ASYNC_DATA_GRP,                       /* Cicuit Data Services */
  DIGIT_FAX_GRP,                          /*Digit Fax*/
  ANALOG_FAX_GRP,                       /* Analog Fax*/
  NON_CDPD_PACKET_DATA_GRP,   /* Non CDPD Packet Data Services  */
  CDPD_PACKET_DATA_GRP,          /* CDPD Packet Data Services    */
  SMS_GRP,                                     /* Messaging Services    */
  OTAPA_GRP,                                /* OTAPAervices  */
  LOCATION_GRP,                           /* Location Services */
  MAX_SO_GRP
} SysSoGrpT;
/* define types used in Service Config msgs from PSW to L1D and LMD */
typedef enum
{
  FCH_20MS_FRAME_SIZE,
  FCH_5_AND_20MS_FRAME_SIZE
} SysFchFrameSizeT;

typedef enum
{
  DCCH_FRAME_SIZE_RESERVED,
  DCCH_20MS_FRAME_SIZE,
  DCCH_5MS_FRAME_SIZE,
  DCCH_5_AND_20MS_FRAME_SIZE
} SysDcchFrameSizeT;

typedef enum
{
   CL1D_DPD_DISABLE,
   CL1D_DPD_ENABLE
} CL1D_DPD_ENABLE_E;


/* define types for default 1x advanced Radio Config parms used at PS and L1D */
#define RC_PARM_FOR_FCH_ACK_MASK_RL_BLANKING_DEFAULT      0x1998 /* FOR_FCH_ACK_MASK_RL_BLANKINGs to ?001 1001 1001 1000?*/
#define RC_PARM_FOR_FCH_ACK_MASK_NO_RL_BLANKING_DEFAULT   0x0aaa /* FOR_FCH_ACK_MASK_NO_RL_BLANKINGs to ?000 1010 1010 1010?*/
#define RC_PARM_REV_FCH_ACK_MASK_DEFAULT                  0x0aaa /* REV_FCH_ACK_MASKs to ?000 1010 1010 1010?*/
#define RC_PARM_FOR_SCH_ACK_MASK_RL_BLANKING_DEFAULT      0x0018 /* FOR_SCH_ACK_MASK_RL_BLANKINGs to ?000 0000 0001 1000?*/
#define RC_PARM_FOR_SCH_ACK_MASK_NO_RL_BLANKING_DEFAULT   0x0028 /* FOR_SCH_ACK_MASK_NO_RL_BLANKINGs to ?000 0000 0010 1000?*/
#define RC_PARM_REV_SCH_ACK_MASK_DEFAULT                  0x002a /* REV_SCH_ACK_MASKs to ?000 0000 0010 1010?*/
#define RC_PARM_FOR_N2M_IND_DEFAULT                            1 /* FOR_N2M_INDs to ?01?(4 bad frames) */
#define RC_PARM_FPC_MODE_DEFAULT                               0
#define RC_PARM_RPC_MODE_DEFAULT                               0 /* RPC_MODEs to ?0?(200 to 400 bps) */
#define RC_PARM_PWR_CNTL_STEP_DEFAULT                          0 /* PWR_CNTL_STEPs to ?00?(1 dB) */
#define RC_PARM_FOR_FCH_BLANKING_DUTYCYCLE_DEFAULT             0 /* FOR_FCH_BLANKING_DUTYCYCLEs to ?00?*/
#define RC_PARM_REV_FCH_BLANKING_DUTYCYCLE_DEFAULT             0 /* REV_FCH_BLANKING_DUTYCYCLEs to ?00?*/
#define RC_PARM_REV_ACK_CHAN_GAIN_ADJ_ACS_1_DEFAULT            0
#define RC_PARM_REV_ACK_CHAN_GAIN_ADJ_ACS_2PLUS_DEFAULT        0
#define RC_PARM_NUM_RC_PARM_RECS_DEFAULT                       0


/* define array sizes for pilot lists */
#define SYS_CP_MAX_CANDIDATE_FREQ_LIST      20   /* array size for used and unused PN lists */
#define SYS_CP_MAX_ACTIVE_LIST_PILOTS        6   /* array size for active pilot list */
#define SYS_CP_MAX_CANDIDATE_LIST_PILOTS    10   /* array size for candidate list */
#ifdef MTK_CBP
#define SYS_CP_MAX_NEIGHBOR_LIST_PILOTS     44   /* array size for neighbor pilot list */
#else
#define SYS_CP_MAX_NEIGHBOR_LIST_PILOTS     40   /* array size for neighbor pilot list */
#endif
#define SYS_CP_MAX_REMAINING_LIST_PILOTS    20   /* array size for Remaining pilot list */
#define SYS_CP_MAX_IDLE_PRIORITY_PILOTS     40   /* max number of pilot pn's in idle priority message */
#define SYS_CP_MAX_NUM_TC_ACTIVE_PILOTS      6   /* array size for active set list */
#define SYS_CP_MAX_ANALOG_FREQ_SEARCH        7   /* array size for analog candidate freq search list */
/* Amala K. 03/01/02 - AFLT */
#define SYS_CP_MAX_AFLT_LIST_PILOTS         40   /* max number of pilot pn's in position determination msg */
#define SYS_CP_MAX_RTT_NEIGHBOR_LIST_PILOTS 44 /* max number of pilot pn's in neighbor list  */                                               /* array size for AFLT neighbor pilot list */


/* define maximum number of SCH supported by the physical layer */
#define SYS_MAX_FSCH 1  /* Maximum number of forward SCH */
#define SYS_MAX_RSCH 1  /* Maximum number of reverse SCH */


#define CP_VERSION_SIZE         4
#define CP_BUILDTIME_SIZE       5

/*************************************************************************
  defined types for RLP and LMD layers
**************************************************************************/

/*
   Valid is2000 sr_ids range from 0 to 7.  The additional sr_ids are for
   internal use only. The null sr_id identifies there is no associated
   rlp channel. The lmd sr_id is used by lmd during is95 calls.
*/
#define SYS_SR_ID_MAX         9
#define SYS_SR_ID_NULL        SYS_SR_ID_MAX

#if 1
#define SYS_SR_ID_IS95_LMD    1
#else
/* under construction !*/
#endif
#define SYS_SR_ID_IS2000_MAX  SYS_SR_ID_MAX - 2
#define SYS_SR_ID_IS95_PRIM   1
#define SYS_SR_ID_IS95_SEC    2

/*************************************************************************
  defined types for PSW and MMI
**************************************************************************/
#define SYS_SYSTIME_SIZE         5     /* # bytes to hold 36 bits  */

/*************************************************************************
  defined types for PSW and LMD
**************************************************************************/

#define MAX_STAT_ELEMENT         64 /* max stat element is PCG_FOR_FCH
                                       MAX_STAT_ELEMENT is 64       */
#define FWD_FCH_RATE_CATEGORY   4
#define PCG_PER_FRAME           16
#define LMD_EACH_ON             1

typedef enum
{
   MUX1_REV_FCH   = 0,
   MUX1_FOR_FCH,
   PAG,
   ACC,
   LAYER2_RTC,
   MUX2_REV_FCH,
   MUX2_FOR_FCH,
   SCCH_REV,
   SCCH_FOR,
   MUX1_REV_DCCH,
   MUX1_FOR_DCCH,
   MUX2_REV_DCCH,
   MUX2_FOR_DCCH,
   SCH0_REV,
   SCH1_REV,
   SCH0_FOR,
   SCH1_FOR,
   PCG_FOR_FCH,//decode forward fch on PCG0~15
   PCG_FOR_SCH,//not use 
   ACK_TX_PCG_FCH,//TX ACK for FCH reception on PCG0~15
   ACK_TX_PCG_SCH,//not use 
   ACK_RX_PCG_FCH,//RX ACK for FCH transmision on PCG1~15   
   ACK_RX_PCG_SCH,//not use   
   BCCH_TYPE,
   FCCCH_TYPE,
#ifdef LMD_EACH_ON
   EACH_BA,
#endif
   END_OF_GROUP_LIST
} StatCounterT;


#define SYS_TIME_MULTIPLE_TYPES

#ifdef SYS_TIME_MULTIPLE_TYPES
enum
{
   MON_SYS_TIME_TYPE_1X,
   MON_SYS_TIME_TYPE_DO,
   /* MON_SYS_TIME_TYPE_LTE, */
#ifdef SYS_OPTION_GSM
   MON_SYS_TIME_TYPE_GSM,
#endif
   MON_SYS_TIME_TYPE_FRC,
   MON_SYS_TIME_TYPE_MAX
};
#endif

/* Define Sys Time structure */
typedef struct
{
#ifndef SYS_TIME_MULTIPLE_TYPES
   kal_uint32      SysTime;
#else
   kal_uint32      NumOfSysTime;
   kal_uint64      SysTime[MON_SYS_TIME_TYPE_MAX];
#endif
} MonSysTimeT;

#define M_Q2(vALUE)       ((kal_int16)((vALUE) * (1 << 2)))
#define M_Q5(vALUE)       ((kal_int16)((vALUE) * (1 << 5)))
#define M_Q6(vALUE)       ((kal_int16)((vALUE) * (1 << 6)))
#define M_Q5ToQ6(vALUE)   ((vALUE) * (1 << 1))
#define M_Q5ToQ7(vALUE)   ((vALUE) * (1 << 2))
#define M_Q7ToQ5(vALUE)   ((vALUE) >> 2)

/** uS and nS to C2K chips: 1 c2k chip = 1/1.228 uS */
#define M_UsToChips(uS)          (((uS) * 1228 + 1000 - 1) / 1000)
#define M_NsToChips(nS)          (((nS) * 1228 * 1000 + 1000 * 1000 - 1) / 1000 * 1000)
#define M_ChipsToUs(cHIPS)       (((cHIPS) * 1000 + 1228 - 1) / 1228)
#define M_UsToChips8x(uS)        (((uS) * 1228)*8 / 1000)

typedef kal_uint32 RegAddrT;
typedef kal_uint32 RegDataT;

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

/* define Check Point Lists */
typedef enum
{
    /* In copy.s */
    CP_RUNNING_START     = 0x01,
    MEM_RELOCATION_DONE  = 0x02,

    /* In platform_porting.s */
    SWITCH_MODE_DONE     = 0x03,
    DISABLE_CPI_DONE     = 0x04,
    ENABLE_ICACHE_DONE   = 0x05,
    SWITCH_VEC_TO_H_DONE = 0x06,
    SETUP_STACKP_DONE    = 0x07,
    INIT_HW_MEM_DONE     = 0x08,
    INIT_C_MEM_DONE      = 0x09,
    INIT_TARGET_DONE     = 0x0A,
    INIT_TLB_TABLE_DONE  = 0x0B,
    ENABLE_MMU_DONE      = 0x0C,
    INIT_NU_SYSTEM_DONE  = 0x0D,
    ENABLE_FIQ_DONE      = 0x0E,
    INC_INITIALIZE_START = 0x0F,

    /* In exepowr.c */
    APPLICATION_INIT_START = 0x10,
    INIT_UART_DONE         = 0x11,
    INIT_CPI_DONE          = 0x12,
    INIT_CLOCK_DONE        = 0x13,
    
    /* CCIF handshake  phase 1*/
    CCIF_HDSKP1_START                 = 0x14,
    CCIF_HDSKP1_WAIT_AP_ACK_BOOT_DONE = 0x15,
    CCIF_HDSKP1_WAIT_AP_RTDATA_DONE   = 0x16,
    CCIF_HDSKP1_SET_MMU_PROTECT_DONE  = 0x17,
    CCIF_HDSKP1_SET_RTDATA_DONE       = 0x18,
    /* CCIF handshake phase 1 done */

    
    CREATE_TASKS_DONE                 = 0x19,
    ENABLE_RTOS_TIMER_DONE            = 0x20,
    INIT_GPIO_DONE                    = 0x21,
    INIT_WDT_TIMER_DONE               = 0x22,
    INIT_EXE_SYS_DONE                 = 0x23,
    INIT_CP_BUF_DONE                  = 0x24,
    INIT_FSM_DONE                     = 0x25,
    APPLICATION_INIT_END              = 0x26,
    
    SYS_CHECK_POINT_MAX               = 0xFF

} SysCheckPoiontT;

extern SysCheckPoiontT SysCheckPoint;

/* the first 4 bytes indicate the last check point, the following bytes are step pointer, next are fail args  */
#define BOOT_TRACE_MAX_SIZE           128
#ifdef SYS_OPTION_IOP_CCIF
#define BOOT_TRACE_ADR                (HWD_MDCCIF_CHDATA + HWD_CCIF_SRAM_SIZE - BOOT_TRACE_MAX_SIZE)
#else
#define BOOT_TRACE_ADR                (HWD_IRAM_BASE_ADDR + HWD_IRAM_SIZE - BOOT_TRACE_MAX_SIZE)
#endif
#define BOOT_LAST_POINT_ADR           (BOOT_TRACE_ADR)
#define BOOT_RECORD_TIMESAMP_ADR      (BOOT_LAST_POINT_ADR + 4)
#define BOOT_TIMESTAMP_BASE           (BOOT_RECORD_TIMESAMP_ADR + 4)
#define BOOT_TIMESTAMP_NUM            20
#define BOOT_TIMESTAP_END             (BOOT_TIMESTAMP_BASE + (BOOT_TIMESTAMP_NUM * 4))
/* We can record most 10 parameters, we should not exceed this, otherwise we will discard  */
#define BOOT_ASSERT_INFO_BASE         (BOOT_TIMESTAP_END)

#endif

