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
#ifndef LECAPI_H
#define LECAPI_H
/*****************************************************************************
 
  FILE NAME:  lecapi.h

  DESCRIPTION : LEC task interface
 
      This include file provides system wide global type declarations and 
      constants
      HISTORY     :
      See Log at end of file

*****************************************************************************/

#include "monapi.h"
#include "valapi.h" 

#define     MAX_GPS_SV_NUM_INVIEW       16
/*------------------------------------------------------------------------
* EXE Interfaces - Definition of Signals, GPIO and Mailboxes
*------------------------------------------------------------------------*/

//#define LEC_STARTUP_SIGNAL          EXE_SIGNAL_1    /* From Mon Task */
//#define LEC_RUN_GPS_LIBRARY_SIGNAL  EXE_SIGNAL_2    /* For Every 50msec run the GPS Lib */
//#define LEC_RUN_PATCH_SIGNAL        EXE_SIGNAL_3    /* For Patch Uploding by LEC */

/* LEC command mailbox id */
#define LEC_MAILBOX                 EXE_MAILBOX_1_ID

/* GPIO Mapping for Target */
#define LEC_POWER_EN          HWD_GPIO_NUM    /* This GPIO pin can be change by Customer */
#define LEC_RESET_N           HWD_GPIO_NUM    /* This GPIO pin can be change by Customer */
 
#ifdef MTK_CBP
    	   
#else
#define LEC_UART1_IN          HWD_GPIO_NUM    /* Do not change this Port assign */ 
#define LEC_UART1_OUT         HWD_GPIO_NUM    /* Do not change this Port assign */
#define LEC_FRAME_SYNC        HWD_GPIO_NUM    /* Do not change this Port assign */
#define LEC_UART1_RTS         HWD_GPIO_NUM    /* Do not change this Port assign */
#endif


/* This is MAX PDE data size for IS801 and IS801-1 */
#define MAX_801_SIZE      200

#define  MAX_EPH_DATA_BUFFER        (1024)      /* To support 16 PRNs in one EPH data */ 
#define  MAX_PRNS_PER_ONE_EPH_MSG   (16)  
#define  MAX_ALM_DATA_BUFFER        (2048)      /* to support 32 PRNs in one ALM data */ 
#define  MAX_PRNS_PER_ONE_ALM_MSG   (32)  

/*----------------------------------------------------------------------------
 Defines Constants used in this file
----------------------------------------------------------------------------*/

/* GPS Calibration related Data */
#define LEC_CAL_INIT_FROM_NVRAM              (01)  /* GPS Cal data initialized from NV Ram */
#define LEC_CAL_INIT_FROM_CODE               (02)  /* GPS Cal data initialized from Code */
#define LEC_CAL_INIT_FROM_CODE_NV_ERR        (03)  /* GPS Cal data initialized from Code, Wrong NV data */
#define LEC_CAL_INIT_FROM_CODE_FOR_FACTORY   (04)  /* GPS Cal data initialized from Code, Wrong NV data */

#define LEC_1X_DO_GPS_GROUP_DELAY      (34195)  /* 3.5 Chip */   

  
 
#if (defined DATACARD_LTE_P1_USB_DPRAM) /* Stealth */
#define LEC_CELL_GPS_GROUP_DELAY      (-9770)   /* 1 Chip    */  
#define LEC_CELL_GPS_AA_CODE_PHASE      (9)     /* +9 Chips  */ 
#define LEC_CELL_GPS_PRM_WHOLE_CHIPS    (8)     /* -8 Chips  */
#define LEC_CELL_GPS_PRM_FRACT_CHIPS    (48)     /* -0.48 chips */  

#define LEC_PCS_GPS_GROUP_DELAY       (-9770)   /* 1 Chip    */   
#define LEC_PCS_GPS_AA_CODE_PHASE       (9)     /* +9 Chips  */ 
#define LEC_PCS_GPS_PRM_WHOLE_CHIPS     (8)     /* -8 Chips  */
#define LEC_PCS_GPS_PRM_FRACT_CHIPS     (49)    /* -0.49 chips */  

#elif (defined STEALTHV) /* Stealth */
#define LEC_CELL_GPS_GROUP_DELAY      (-9770)   /* 1 Chip    */  
#define LEC_CELL_GPS_AA_CODE_PHASE      (9)     /* +9 Chips  */ 
#define LEC_CELL_GPS_PRM_WHOLE_CHIPS    (8)     /* -8 Chips  */
#define LEC_CELL_GPS_PRM_FRACT_CHIPS    (48)     /* -0.48 chips */  

#define LEC_PCS_GPS_GROUP_DELAY       (-9770)   /* 1 Chip    */   
#define LEC_PCS_GPS_AA_CODE_PHASE       (9)     /* +9 Chips  */ 
#define LEC_PCS_GPS_PRM_WHOLE_CHIPS     (8)     /* -8 Chips  */
#define LEC_PCS_GPS_PRM_FRACT_CHIPS     (49)    /* -0.49 chips */  
#define LEC_CELL_GPS_GROUP_DELAY        (0) /* 1 Chip    */  
#define LEC_CELL_GPS_AA_CODE_PHASE      (0)     /* +9 Chips  */ 
#define LEC_CELL_GPS_PRM_WHOLE_CHIPS    (0)     /* -8 Chips  */
#define LEC_CELL_GPS_PRM_FRACT_CHIPS    (0)    /* -0.56 chips */  

#define LEC_PCS_GPS_GROUP_DELAY         (0) /* 1 Chip    */  
#define LEC_PCS_GPS_AA_CODE_PHASE       (0)     /* +9 Chips  */ 
#define LEC_PCS_GPS_PRM_WHOLE_CHIPS     (0)     /* -8 Chips  */
#define LEC_PCS_GPS_PRM_FRACT_CHIPS     (0)    /* -0.57 chips */

#else  /* Make Default value until Calibrated */ 
#define LEC_CELL_GPS_GROUP_DELAY        (-9770) /* 1 Chip    */  
#define LEC_CELL_GPS_AA_CODE_PHASE      (9)     /* +9 Chips  */ 
#define LEC_CELL_GPS_PRM_WHOLE_CHIPS    (8)     /* -8 Chips  */
#define LEC_CELL_GPS_PRM_FRACT_CHIPS    (56)    /* -0.56 chips */  

#define LEC_PCS_GPS_GROUP_DELAY         (-9770) /* 1 Chip    */  
#define LEC_PCS_GPS_AA_CODE_PHASE       (9)     /* +9 Chips  */ 
#define LEC_PCS_GPS_PRM_WHOLE_CHIPS     (8)     /* -8 Chips  */
#define LEC_PCS_GPS_PRM_FRACT_CHIPS     (57)    /* -0.57 chips */  
#endif 

/* To Calibrate, set the default value */
#define LEC_CELL_GPS_GROUP_DELAY_CAL      (0)   /* 0 Chips */   
#define LEC_CELL_GPS_AA_CODE_PHASE_CAL    (0)   /* 0 Chips */ 
#define LEC_CELL_GPS_PRM_WHOLE_CHIPS_CAL  (0)   /* 0 Chips */
#define LEC_CELL_GPS_PRM_FRACT_CHIPS_CAL  (0)   /* 0 Chips */  
#define LEC_1X_DO_GPS_GROUP_DELAY_CAL     (0)   /* 0 Chips */   


#define LEC_AP_RF_DELAY_1X                            0
#define LEC_AP_RF_DELAY_DO                            0

#if (SYS_OPTION_GPS_HW ==SYS_GPS_LOCAL_INTERNAL)
#define LEC_RFDELAY_1X                                  (86364)
#define LEC_RFDELAY_DO                                 (87713)
#define LEC_RFDELAY                                         (87039)
#endif



/*----------------------------------------------------------------------------
* LEC States : Kind of Virtual State 
*----------------------------------------------------------------------------*/
typedef enum
{
   GPS_OFF,
   GPS_POWER_UP,
   GPS_SLEEP,
   GPS_ABOUT_TO_RUNNING,
   GPS_RUNNING
} GpsStateT;
      
typedef  struct
{
   unsigned short PilotPN;
   signed short  SystemTimeOffset;
} LecGpsEndGpsAckMsgT; 

typedef  struct
{
   unsigned short Enable;
} LecGpsHwEnableMsgT;

typedef enum 
{
   GPS_FIX_MODE_UNKNOWN,   /* This is for Error */
   GPS_FIX_MODE_MSA,       /* This is for MS_Assisted mode in User Plane*/
   GPS_FIX_MODE_MSB,       /* This is for MS_Based mode in User Plane */
   GPS_FIX_MODE_MSS,       /* This is for MS_Standalone mode in User Plane */
   GPS_FIX_MODE_CP = 8,        /* This is for Control Plane mode and E911 *//*associated with struct GPS_FIX_MODE*/
   GPS_FIX_MODE_SUPL_MSA,       /* This is for MS_Assisted mode in SUPL  */
   GPS_FIX_MODE_SUPL_MSB,       /* This is for MS_Based mode in SUPL  */
   GPS_FIX_MODE_COUNT
} GpsFixModeT;

/* Write Cntl data size */
#define GN_GPS_GNB_CTRL_MAX_SIZE   (EXE_SIZE_MSG_BUFF_4 - 12)   
#define GN_GPS_GNB_CTRL_MAX_MSGS    2    

/* Write NMEA to ETS size */
//#define GN_GPS_NMEA_MAX_SIZE   180
#define GN_GPS_NMEA_MAX_SIZE   MON_MAX_SPY_SIZE
#define GN_GPS_NMEA_MAX_MSGS   10

/* Write EVENT to ETS size */
//#define GN_GPS_EVENT_MAX_SIZE   180
#define GN_GPS_EVENT_MAX_SIZE   MON_MAX_SPY_SIZE
#define GN_GPS_EVENT_MAX_MSGS   15

/* Write NAV to ETS size */
//#define GN_GPS_NAV_MAX_SIZE   180
#define GN_GPS_NAV_MAX_SIZE   MON_MAX_SPY_SIZE
#define GN_GPS_NAV_MAX_MSGS   30

/* Write GNB to ETS size */
//#define GN_GPS_GNB_MAX_SIZE   180
#define GN_GPS_GNB_MAX_SIZE   MON_MAX_SPY_SIZE
#define GN_GPS_GNB_MIN_SEND_SIZE  400
#define GN_GPS_GNB_MAX_MSGS   15


#define PS_NMEA_MAX_SIZE   760

/* This structure is used in the PSW task */
/*
typedef  struct
{
   kal_uint16   DataLen;          
   kal_uint8     Data[PS_NMEA_MAX_SIZE];
}   PswGpsNmeaStreamMsgT;
*/
/* This structure is used for Patch Uploading */
#define IOP_GPS7560_PATCH_DATA_SIZE_MAX 256
typedef  struct
{
   kal_uint16   DataLen;          
   kal_uint8    Data[IOP_GPS7560_PATCH_DATA_SIZE_MAX];
} IopGps7560PatchDataMsgT;

/* This structure is used in the IOP task */
/* LEC <- IOP, Rx data of LEC point of view */
#define IOP_GPS7560_DATA_SIZE_MAX          186
typedef  struct
{
   kal_uint16   DataLen;          
   kal_uint8    Data[IOP_GPS7560_DATA_SIZE_MAX];
} IopGps7560RxDataMsgT;

/* These structure definitions are used between IOP and GPS Lib*/
#define LEC_MAX_QUEUE_DEPTH   (10240)    
extern kal_uint8         LecRxGpsBuffer[LEC_MAX_QUEUE_DEPTH]; 

/* Static Data definitions local to this module */
typedef  struct
{
   kal_uint32 CTime_Set;           /* 'C' Time when the RTC was last Set / Calibrated */
   kal_int32  Offset_s;            /* (UTC - RTC) calibration offset [s]   */
   kal_int32  Offset_ms;           /* (UTC - RTC) calibration offset [ms]    */
   kal_uint32 Acc_Est_Set;         /* Time Accuracy Estimate when RTC was Set / Calibrated [ms] */
   kal_uint32 checksum;            /* RTC Calibration File 32-bit checksum */
} GpsRtcCalibT;

/* This structure is used in the DMB for NV Data and RTC Cal data*/
/* From GN_GPS_API.h and Lecgns7560.c file */
#if !defined (GPS_NV_SIZE)
#define GPS_NV_SIZE            (5248)     /* was 5120 for GPS Lib ver3 */
#endif
#define GPS_RTC_CAL_SIZE   (sizeof(GpsRtcCalibT)) /* 20 Bytes */
#define DBM_EXT_GPS_NV_SIZE   (GPS_NV_SIZE + GPS_RTC_CAL_SIZE)  

typedef  struct
{
   kal_bool               ReadDbmFlag;
   kal_bool               WriteDbmFlag;
   kal_uint16             Offset;
   kal_uint8              Data[GPS_NV_SIZE];
   GpsRtcCalibT      RtcCal;
} GpsSvNvDataT;

typedef  struct
{
   kal_uint16             Offset;
   kal_uint8              Data[GPS_NV_SIZE];   
} GpsEngNvDataT;


/* This structure is used in the DMB for Cell ID Information*/
/* From cgpsHistoricalCell_Interface.h file */
#define DBM_EXT_GPS_CELL_NV_SIZE  (20 * NMAX) /* Actually, 16bytes * NMAX */  
/* This structure is used in the LEC and PSW*/
/* Define for GpsDevicePowerOn */
typedef  struct
{
   kal_uint32   FixMode;
   kal_uint32   FixRateNumFixes;
   kal_uint32   FixRateTimeBeFixes;
   kal_uint32   QoSHAccuracy;
   kal_uint32   QoSVAccuracy;
#ifdef MTK_CBP
   kal_uint32   QoSPRAccuracy;
#endif   
   kal_uint32   QoSPerformance;
   kal_uint32   InstanceID;
   kal_uint8    flag_gps;
} GpsDevConfigDataT;

/* This structure is used in the LEC */
/* Define for GPS's Calibrated Parameters */
typedef  struct
{
   kal_int32    Lecl1xDoSystemTOffset;  /* For Diff system Time between 1xRTT and EVDO.*/
   kal_int32    LecGpsGroupDelay;       /* For Group Delay                  */
   kal_uint16   LecGpsAACodePhaseAdj;   /* For Code Phase Adjust for AA msg */
   kal_uint16   LecGpsWholeChipsAdj;    /* For Whole Chip Adjust for PRM msg*/
   kal_uint16   LecGpsFractChipsAdj;    /* For Fract chip Adjust for PRM msg*/
} LecGpsCalLocalT ;


typedef  struct
{
	kal_bool    ValidRef;
	kal_uint32 RefPosRMSMaj;
	kal_uint32 RefPosRMSMin;
	kal_int32 APRefLat;
	kal_int32 APRefLon;	
} ApRefCellIdInforT;

typedef  struct
{
   kal_uint32   InstanceId;
   kal_uint8 flag_gps;   
   kal_uint8 Status;
} GpsEndMsgT;
/*----------------------------------------------------------------------------
* Message IDs for signals and commands sent to LEC
*----------------------------------------------------------------------------*/

/* Define GNS7560's propriatry Commands set */
typedef enum 
{
   GNS7560_VERSION,                    
   GNS7560_RSET_HOT_START,             
   GNS7560_RSET_WARM_START,            
   GNS7560_RSET_COLD_START,            
   GNS7560_RSET_FACTORY_START,         
   GNS7560_SLEEP, 
   GNS7560_COMA,                     
   GNS7560_WAKEUP,                     
   GNS7560_SHUTDOWN,                   
   GNS7560_DIAG_MODE0,                 
   GNS7560_DIAG_MODE1,                 
   GNS7560_DIAG_MODE2,                 
   GNS7560_DIAG_MODE3,                 
                                       
   GNS7560_MAX_COMMANDS
} Gns7560CommandsT;

/* LEC_GPS_FACTORY_GET_RF_CNO_MSG */
typedef  struct 
{
   ExeRspMsgT  RspInfo;
   kal_uint8      Mode;    /* TimerBased:0 and CounterBased:1 */
   kal_uint8      Para1;   /* TimerBased's Para1 Range [10..60]seconds and 
                    CounterBased's Para1 Range [01..30] */
} LecEtsGpsFacGetCNoMsgT;

/* LEC_VAL_FACTORY_GET_RF_CNO_MSG */
typedef  struct 
{
   kal_uint8    Mode;    /* TimerBased:0 and CounterBased:1 */
   kal_uint8    Para1;   /* TimerBased's Para1 Range [10..60]seconds and 
                    CounterBased's Para1 Range [01..30] */
} LecGpsFacGetCNoMsgT;

/* For ETS and VAL as MSG_ID_VAL_GPS_FACTORY_RF_CNO_MSG  */
typedef  struct 
{
   kal_uint16 CNo;      /* Depend on GPS Signal Level */
} LecFacReportCNoMsgT;

/* LEC_GET_RF_BAND_MSG */
typedef  struct 
{
   kal_uint8 Owner;      /* SYS_MOD_1xRTT or SYS_MOD_EVDO */
   kal_uint8 Band;       /* Supported RF band */ 
} LecGetRfBandMsgT;

/* For PGPS on AP */
typedef  struct 
{
   kal_uint32 SysTime;   /* Seconds in GPS Time from AP */
} LecPgpsSysTimeMsgT;

typedef  struct 
{
   kal_uint32 Prn_Mask;   /* This is bit map for each PRN's request */
   kal_uint32 SysTime;    /* Current GPS's time to get the correct EE data */
} LecPgpsGetEeReqMsgT;

#define MAX_PGPS_SV   32

/**
* A structure containing ephemeris data.
* Please refer to the GPS-200D for more information.
*/
typedef struct sRXN_ephem
{
   kal_uint8    prn;        /* range: 1-32      */                                            
   kal_uint8    ura;        /* see ICD-200      */                                             
   kal_uint8    health;     /*                  */                                            
   kal_int8     af2;        /* 2^-55 sec/sec^2  */                                            
   kal_int8     ephem_fit;  /* 0-4 hr           */                                            
   kal_uint8    ure;        /* User Range Error. Provides an indication of EE accuracy. Always a GPStream output. Units: meters.*/    
   kal_uint16   gps_week;   /* cumulative GPS week number (eg. 1486) */                       
   kal_uint16   iode;       /*                  */                                            
   kal_uint16   toc;        /* 2^4              */                                            
   kal_uint16   toe;        /* 2^4 have him on 16 sec bdry */                                 
   kal_int16    af1;        /* 2^-43 sec/sec    */                                            
   kal_int16    i_dot;      /* 2^-43            */                                            
   kal_int16    delta_n;    /* 2^-43            */                                            
   kal_int16    cuc;        /* 2^-29            */                                            
   kal_int16    cus;        /* 2^-29            */                                            
   kal_int16    cic;        /* 2^-29            */                                            
   kal_int16    cis;        /* 2^-29            */                                            
   kal_int16    crc;        /* 2^-5             */                                            
   kal_int16    crs;        /* 2^-5             */                                            
   kal_int32    af0;        /* 2^-31 sec        */                                            
   kal_int32    m0;         /* 2^-31/PI         */                                            
   kal_uint32   e;          /* 2^-33            */                                            
   kal_uint32   sqrt_a;     /* 2^-19            */                                            
   kal_int32    omega0;     /* 2^-31/PI         */                                            
   kal_int32    i0;         /* 2^-31/PI         */                                            
   kal_int32    w;          /* 2^-31/PI         */                                            
   kal_int32    omega_dot;  /* 2^-43            */                                            
} sRXN_ephem_t;

typedef struct LecPgpsRxnEEph      /* RxN's EE data set */
{
   kal_uint8 Num_Prn;                  /* Number of EEphs data [range 0 .. 32] */
   sRXN_ephem_t EE[MAX_PGPS_SV];   /* RxN's Ephemeris Elements array       */
} sLecPgpsRxnEEph;              

/*------------------------------------------------------------------------
* Timer Interfaces - Declaration for PRM and AA Message 
*------------------------------------------------------------------------*/

/* Define NA messages for Psedorange and Acquisition Assistance */
#define LEC_PRM_MAX_SIZE                 3
#define LEC_MAX_ASSIST_SIZE             250
#define LEC_PRM_MAX_RSP_SIZE             256      

typedef  struct
{
   unsigned char    IdleOrTraffic;              /* KAL_TRUE = Idle, KAL_FALSE = Traffic */
   unsigned char    SystemTimeOffsetIncl;
   unsigned short   ReqMsmtRecLen;              /* Request PRM Rec Length */
   unsigned char    ReqPseudorangesRec[LEC_PRM_MAX_SIZE];  /* Req PRM Buffer */
   unsigned short   ProvAcqAssistRecLen;     /* Prov GPS Acquisition Assist Rec Length */
   unsigned char    ProvAcqAssistRec[LEC_MAX_ASSIST_SIZE];  /* Prov GPS Acquisition Assist Buffer */
} LecPseudorangeMsmtReqMsgT;


#define MAX_SV   16 
 
/* This structure mirrors the structure that is used in the */
/* External GPS DB to hold AA information.               */
typedef struct
{
   unsigned char  TOA;                 /* Time of applicability*/
   unsigned char  NumSV;               /* Number of satellites for which data is available*/
   unsigned char  DoppIncl;            /* Doppler0 is included ? KAL_TRUE/KAL_FALSE */
   unsigned char  AddDoppIncl;         /* Doppler1 and DopplerWin is included? KAL_TRUE/KAL_FALSE */
   unsigned char  CodePhParIncl;       /* Code Phase Information is included? KAL_TRUE/KAL_FALSE  */
   unsigned char  AzElIncl;            /* Azimuth and elevation angle included? KAL_TRUE/KAL_FALSE*/
   unsigned char  SV[MAX_SV];          /* SV PRN number (0 means no data available)*/
   signed short   Dopp[MAX_SV];        /* Doppler value. Units Hz*/
   char           DoppRate[MAX_SV];    /* Doppler rate of change. Units (1/64) Hz/s*/
   unsigned char  DoppSR[MAX_SV];      /* Doppler search range. Units Hz.*/
   signed short   Code[MAX_SV];        /* Code phase [range 0..1022]. Units C/A chips*/
   unsigned char  CodePhInt[MAX_SV];   /* Integer C/A Code Msec into the GPS Data Bit */
                                       /*   Range[0..19]msec (-1 if not known) */
   unsigned char  GpsBitNum[MAX_SV];   /* GPS Data Bit Number, module 80 msec */
                                       /*   Range[0..3] (-1 if not known) */
   unsigned char  CodeSR[MAX_SV];      /* Code search range. Units C/A chips [range 0..512]*/
   unsigned char  Azim[MAX_SV];        /* Azimuth. Units 11.25 degrees*/
   unsigned char  Elev[MAX_SV];        /* Elevation. Units 11.25 degrees*/
} LecNAAcqAss;


/* LEC_SESSION_END_REQ_MSG:
 *    Sent by PSW to end a GPS Session. PSW passes on if it reset
 *    the MS to System Determination (KAL_TRUE) or not (KAL_FALSE). PDE 
 *    responds with a PSW_LEC_SESSION_END_RSP_MSG.
 */
typedef  struct
{
   unsigned char      SystemDeter; /* KAL_TRUE=MS reset to SYS DETER */
} LecSessionEndReqMsgT;

typedef  struct
{
   unsigned char RecLen;
   unsigned char ProvPseudorangeRec[LEC_PRM_MAX_RSP_SIZE];
} LecPseudorangeMsmtRspMsgT;

typedef struct
{
   kal_uint32 Time_Ref;    /* Time of Validity [ms] % 14400000 */
   kal_uint8  TimeRefSrc;  /* Time reference source [see IS801 std] */
} LecPRMeasTimeRef;

/* This is the structure that mirrors the PRM response */
typedef struct
{
   unsigned char     PRN_num;       /* Satellite PRN number */
   unsigned char     CNO;           /* Satellite C/No [dB-Hz] (range 0 to 63 dB-Hz) */
   signed short      Dopp;          /* Measured Doppler frequency [0.2 Hz] (range +/-6553.6) */
   unsigned short    Code_whole;    /* Satellite Code phase measurement - whole chips */
                                    /*   [C/A chips] (range 0..1022) */
   unsigned short    Code_fract;    /* Satellite Code phase measurement - fractional chips */
                                    /*   [2^-10 C/A chips] (range 0..1023) */
   unsigned char     Mul_Path_Ind;  /* Multipath indicator (range 0..3) */
                                    /*   (see TIA/EIA/IS-801 Table 3.2.4.2-7) */
   unsigned char     Range_RMS_Err; /* Pseudorange RMS error: Mantissa (range 0..63) consisting of  */
                                    /*   (see TIA/EIA/IS-801 Table 3.2.4.2-8) */
                                    /*   3 bit Mantissa 'x' & 3 bit Exponsent 'y' where: */ 
                                    /*   RMS Error = 0.5 * (1 + x/8) * 2^y metres */
} LecIS801SVData;

typedef struct
{
   kal_uint32               Time_Ref;       /* Time of Validity [ms] % 14400000 */
   unsigned char    TimeRefSrc;     /* Time reference source [see IS801 std] */
   unsigned char    NumValidMeas;   /* Number of Valid Meas avail [0..15] */
   LecIS801SVData    SV_Data[MAX_SV];   /* SV PRM data NUM_CH*/
} LecPRMeas;

#if (defined SYS_OPTION_GPS_EXTERNAL_SUPPORT_SA)
/* Define NA message for Sensitivity Assistance */
#define LEC_MAX_NUM_SA_NAV_BYTES 128
#define LEC_MAX_NUM_SA_SV         16
#define LEC_MAX_NUM_SA_DATA_RECS  3
typedef  struct
{
   unsigned char   NavMsgBits[LEC_MAX_NUM_SA_NAV_BYTES];
   unsigned char   NumSvDr;
   unsigned char   SvNumArray[LEC_MAX_NUM_SA_SV];
} LecSensAssistDataRecT;

typedef  struct
{
   unsigned short         RefBitNum;
   unsigned char          NumDataRecs;  /* num of data recs */
   unsigned short         DataRecSizeInBits;  /* size of each data rec in bits; range 0 to 1020 */  
   LecSensAssistDataRecT  SADataRecArray[LEC_MAX_NUM_SA_DATA_RECS];
} LecSensAssistMsgT;    
#endif 

/* LEC_GPS_REF_FREQ_ADJ_MSG */
#define SET_FREQ_PPB_CMD  0
#define ADJ_FREQ_PPB_CMD  1
typedef  struct 
{
  kal_uint16 Command;
  kal_uint32 RxPllKHz;
  kal_int16  FreqAdj;
} LecGpsRefAdjMsgT;

/*#ifdef MS_BASED_DEBUG*/
/*MS-Based     ETS*/
typedef enum{
   EPH = 1,
   ALM,
   LOC,
   EPHALM,
   All
}InjectModeT;


typedef  struct
{
ExeRspMsgT     RspInfo;
kal_uint32 UserModeTime;
} GPSUserModeTimeT;

typedef  struct
{
kal_uint32 UserModeTime;
} GPSUserModeTimeRspT;

/*MS-Based    ETS*/
typedef  struct 
{
   kal_uint32      FixMode;
   kal_uint32        QoSAccuracy;
   kal_uint32      QoSPerformance;
} GpsMSBasedT;


typedef  struct 
{
   kal_uint8      MsgNum;
   kal_uint16     IS801Length;
   kal_uint8      MsgID;          /* Should be change to TotalNumMsgs */ 
   kal_uint8      Data[MAX_801_SIZE];
} AGpsMSBased801T;

typedef enum{
   HotReStart = 1,
   WarmReStart,
   ColdReStart 
}ReStartModeT;

typedef  struct 
{
   kal_uint8      StartMode;
} GpsReStartT;

typedef  struct     
{
   kal_uint8 SatID;                 
   kal_uint8 CodeOnL2;               
   kal_uint8 URA;                    
   kal_uint8 SVHealth;               
   kal_uint8 FitIntFlag;             
   kal_uint8 AODA;                   
   kal_int8 L2Pflag;              
   kal_int8 TGD;                    
   kal_int8 af2;                    
   kal_uint16 Week;                   
   kal_uint16 toc;                    
   kal_uint16 toe;                    
   kal_uint16 IODC;                   
   kal_int16 af1;                    
   kal_int16 dn;                     
   kal_int16 IDot;                   
   kal_int16 Crs;                    
   kal_int16 Crc;                    
   kal_int16 Cus;                   
   kal_int16 Cuc;                    
   kal_int16 Cis;                   
   kal_int16 Cic;                    
   kal_int32 af0;                   
   kal_int32 M0;                     
   kal_uint32 e;                      
   kal_uint32 APowerHalf;             
   kal_int32 Omega0;               
   kal_int32 i0;                     
   kal_int32 w;                      
   kal_int32 OmegaDot;               

}    s_AGPS_Eph_El;   

typedef  struct     
{
   kal_uint8 WNa;         
   kal_uint8 SatID;         
   kal_uint8 SVHealth;   
   kal_uint8 toa;         
   kal_int16 af0;      
   kal_int16 af1;         
   kal_uint16 e;            
   kal_int16 delta_I;      
   kal_int16 OmegaDot;      
   kal_uint32 APowerHalf;   
   kal_int32 Omega0;         
   kal_int32 w;            
   kal_int32 M0;         
} s_AGPS_Alm_El;

typedef  struct   
{
   kal_uint32   ZCount;               
   kal_int8     al0;                   
   kal_int8     al1;                   
   kal_int8     al2;                   
   kal_int8     al3;                   
   kal_int8     be0;                   
   kal_int8     be1;                   
   kal_int8     be2;                   
   kal_int8     be3;                   
} s_AGPS_Ion;           

typedef  struct 
{
   kal_int32 Latitude;               
   kal_int32 Longitude;              
   kal_int32 RMS_SMaj;               
   kal_int32 RMS_SMin;               
   kal_int16 RMS_SMajBrg;         
   kal_bool  Height_OK;              
   kal_int32 Height;                 
   kal_int32 RMS_Height;             

} s_AGPS_Ref_Pos;            

typedef  struct {
   kal_uint32 Interval;
   kal_bool bGPGGA;
   kal_bool bGPGSV;
   kal_bool bGPGSA;
   kal_bool bGPRMC;
   kal_bool bGPGST;
   kal_bool bGPGLL;
   kal_bool bGPVTG;
} LecNMEACfgSetMsgT;

typedef  struct {
   ExeRspMsgT  rspInfo; 
}  LecNmeaCfgGetReqMsgT;

typedef  struct {
   kal_uint32 Interval;
   kal_bool bGPGGA;
   kal_bool bGPGSV;
   kal_bool bGPGSA;
   kal_bool bGPRMC;
   kal_bool bGPGST;
   kal_bool bGPGLL;
   kal_bool bGPVTG;
} LecNmeaCfgGetRspMsgT;


typedef  struct
{	   
	kal_uint8  Ref_Pos_Req; 		   
	kal_uint8  Ion_Req; 					 
	kal_uint8  Alm_Req; 			  
	kal_uint8  Eph_Req; 			   

} LecGpsAssistReqT;


typedef  struct
{
   kal_uint8 GpsState;
   kal_uint8   Eph;	
   kal_uint8   Alm;	
   kal_uint8   Loc;
   kal_uint8   Ion;
} GpsStateAssistT;


typedef enum
{
    LecGpsEng_FIX_NOT_VALID,
    LecGpsEng_FIX_ESTIMATED,
    LecGpsEng_FIX_2D,
    LecGpsEng_FIX_3D,
    LecGpsEng_FIX_DGPS_2D,
    LecGpsEng_FIX_DGPS_3D
} LecGpsEngFixTypeT;

typedef struct
{
    kal_bool Used;
    kal_uint8 Id;
    kal_uint8 Cn0;
    kal_int8 Elev;
    kal_uint16 Azimuth;
} LecGpsEngSvInViewT;

typedef struct {
    LecGpsEngFixTypeT     FixType;
    kal_uint32 OsTime;
    kal_uint32 LocalTimeTag;
    kal_uint16 UtcYear;
    kal_uint16 UtcMonth;
    kal_uint16 UtcDay;
    kal_uint16 UtcHour;
    kal_uint16 UtcMin;
    kal_uint16 UtcSec;
    kal_uint16 UtcMilliSec;     /* UTC Millisec into Sec */
    kal_uint16 WeekNo;
    kal_uint32 Tow;             /* milliseconds */
    kal_uint8 UtcDifference;    /* (GPS-UTC) seconds */
    double Lat;
    double Long;
    double AltitudeMSL;     /* Mean Sea level */
    double AltitudeElli;    /* ? */
    double X;
    double Y;
    double Z;
    float SpeedGround;
    float CourseGround;
    float VerticalVelocity; /* Vertical velocity */
    float LocUncAng;        /* Location uncertainty angle */
    float LocUncA;          /* ? */ 
    float LocUncP;
    float LocUncV;
    float VelHUnc;          /* Horizontal Velocity RMS 1-sigma (67%) Accuracy estimate */
    float VelVUnc;          /* Vertical Velocity RMS 1-sigma (67%) Accuracy estimate */
    float Pdop;
    float Hdop;
    float Vdop;
    kal_uint8 SvInViewNum;
    kal_uint8 SvUsed;
    LecGpsEngSvInViewT  SvInView[MAX_GPS_SV_NUM_INVIEW];
} LecGpsEngWholeNavDataT;

typedef struct
{
    kal_uint32  OsTime;             /* Ticks */
    kal_uint32  LocalTimeTag;       
    kal_uint16  UtcYear;
    kal_uint16  UtcMonth;
    kal_uint16  UtcDay;
    kal_uint16  UtcHour;
    kal_uint16  UtcMin;
    kal_uint16  UtcSec;
    kal_uint16  UtcMilliSec;        /* UTC Millisec into Sec */
    kal_uint16  WeekNo;
    kal_uint32  Tow;                /* Milliseconds */
} LecGpsEngTimeMsgT;

typedef struct 
{
   kal_uint8 CustomerId;   
}LecCustomerIdSettingMsgT;


typedef enum{
   LEC_OFFSETSTART,
   LEC_OFFSETEND
}LecOffsetModeT;

typedef  struct 
{
   kal_uint32      OffsetMode;
} LecGpsOffsetT;


typedef  struct {

	kal_int32 delay1X;
	kal_int32 delayDO;
} LecGpsRfDelayStruct;


typedef  struct 
{
  LecGpsRfDelayStruct RfDelay[5];

} LecGpsRfDelayT;

#ifdef MTK_GPS_SYNC_DEV
typedef  struct 
{
  ExeRspMsgT	rspInfo;
  kal_uint8 Switch;
  kal_uint8 IntervalReqEE;/*in seconds*/

} LecPgpsOnOffMsgT;
typedef  struct
{
  kal_uint8 Switch;
  kal_uint8 IntervalReqEE;/*in seconds*/
} LecPgpsOnOffMsgRspT;
#endif
/*****************************************************************************************/
/*----------------------------------------------------------------------------
 Global Data
----------------------------------------------------------------------------*/
#ifdef MTK_GPS_SYNC_DEV
extern kal_bool bAssistDataRecvd;
extern kal_uint8 LeapSecond;
#endif

extern ValGpsEphPrnMsgT     ApGpsEphPrnData;     /* Parsed Ephemeris Global Variable for LEC and VAL */ 
extern ValGpsAlmPrnMsgT     ApGpsAlmPrnData;     /* Parsed Almanac Global Variable for LEC and VAL */ 

extern void LecGpsTickLisr (void);
#ifdef MTK_CBP
#if (SYS_OPTION_EXTERNAL_GPS_HW == SYS_EXT_GPS_ON_AP)
extern void LecAdjustLecTimer(float NewTime);
#endif
#endif

#endif


/*****************************************************************************
* $Log: lecapi.h $
* Revision 1.0  2009/02/09 schun
*****************************************************************************/
/**Log information: \main\Trophy\Trophy_ylxiao_href22001\1 2013-03-08 01:52:59 GMT ylxiao
** HREF#22001 整理GPS初始化代码，修改GPIO定义到lecapi.h**/
/**Log information: \main\Trophy\1 2013-03-08 03:47:15 GMT hzhang
** HREF#22001 to modify GPS macro definition**/
/**Log information: \main\Trophy\Trophy_ylxiao_href22033\1 2013-03-18 14:15:39 GMT ylxiao
** HREF#22033, merge 4.6.0**/
/**Log information: \main\Trophy\2 2013-03-19 05:20:02 GMT hzhang
** HREF#22033 to merge 0.4.6 code from SD.**/
/**Log information: \main\Trophy\Trophy_wzhou_href22240_fix2\1 2013-07-19 06:14:33 GMT wzhou
** HREF#22240: fix for AP gps.**/
/**Log information: \main\Trophy\3 2013-07-19 06:03:03 GMT jzwang
** href#22240_fix2**/
/**Log information: \main\Trophy\Trophy_wzhou_href22254_fix1\1 2013-08-27 09:14:35 GMT wzhou
** HREF#22254 : Fix AA too big crash issue.**/
/**Log information: \main\Trophy\4 2013-08-27 09:16:33 GMT jzwang
** href#22254_fix1**/

