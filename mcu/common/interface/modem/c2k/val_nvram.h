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
*  THE TRANSACTION CONTEMPLATED HEREUNDER SHALL BE CONSKAL_TRUED IN ACCORDANCE
*  WITH THE LAWS OF THE STATE OF CALIFORNIA, USA, EXCLUDING ITS CONFLICT OF
*  LAWS PRINCIPLES.  ANY DISPUTES, CONTROVERSIES OR CLAIMS ARISING THEREOF AND
*  RELATED THERETO SHALL BE SETTLED BY ARBITRATION IN SAN FRANCISCO, CA, UNDER
*  THE RULES OF THE INTERNATIONAL CHAMBER OF COMMERCE (ICC).
*
*****************************************************************************/

#ifndef _VAL_NVRAM_H_

#define _VAL_NVRAM_H_ 1

/*****************************************************************************
 * Includes
 ****************************************************************************/
#include "kal_general_types.h"
#include "valattune.h"

#define NUM_BASESSD                    16
#define SSD_DATA_SIZE 1000 /* Total size of scrambling alogrithm contents */
#define VAL_SMS_CBS_CHA_MAX 4

typedef enum
{
   CP_VAL_GPS_PRIVACY_SETTING_VALUE_UNKNOWN = 0,
   CP_VAL_GPS_PRIVACY_SETTING_VALUE_E911_ONLY,
   CP_VAL_GPS_PRIVACY_SETTING_VALUE_LOCATION_ON,
   CP_VAL_GPS_PRIVACY_SETTING_VALUE_LOCATION_MI_ONLY,
   CP_VAL_GPS_PRIVACY_SETTING_VALUE_LOCATION_MT_ONLY
}ValGpsPrivacySettingT;
typedef  struct
{
   kal_uint16 Year;
   kal_uint16 Month;
   kal_uint16 DayOfWeek;
   kal_uint16 Day;
   kal_uint16 Hour;
   kal_uint16 Minute;
   kal_uint16 Second;
   kal_uint16 Milliseconds;

   /*; GPS week as the number of whole weeks since GPS time zero*/
   kal_uint32 GPSweek;
   /*; GPS time of week in milliseconds*/
   kal_uint32 GPSTimeOfWeek;
}   ValGpsSystemTimeT;

typedef enum
{
   CP_VAL_GPS_SECURITY_DISABLE,
   CP_VAL_GPS_SECURITY_ENABLE
}ValGpsSecOperE;
typedef struct {

	kal_int32 delay1X;
	kal_int32 delayDO;
}ValGpsRfDelayStruct;

typedef struct {  
  ValGpsPrivacySettingT LocationMode;
  
  kal_uint8 BaseSSD[NUM_BASESSD];
  /*kal_uint8 SSD[NUM_BASESSD];*/
  ValGpsSystemTimeT UTCTime; /*The timestamp indicates when the BaseSSD was created. The timestamp will be in UTC time*/
  
  /*kal_uint32 ScramblingCode;*/
  kal_bool   bAddrValid;
  kal_bool  IPType; /*0: IPV4; 1: IPV6*/
  kal_uint32 Ipv4Addr;
  kal_uint32 Ipv6Addr[4];
  
  kal_bool   bURLValid;
  kal_uint8  URLAddr[256];
  
  kal_uint32 PortNum;
  
  kal_uint32 EphUpdateTime; 
  kal_uint32 AlmUpdateTime;
  kal_uint8  ssdData[SSD_DATA_SIZE];

  ValGpsSecOperE Status;
  
  kal_uint32 ValMpcAddr;
  kal_uint16 ValMpcPort;

  kal_uint8 SIP_NAI[72];
  kal_uint8 SIP_PASSWORD[16];

  ValGpsRfDelayStruct  RfDelay[5];
}GpsDbmDataParms;

/* atc mod */
#define ATC_MAX_CFG_STR_SIZE	 249 /* MAX_CFG_LEN in Ai_data.h */
#define ATC_MAX_FDL_STR_SIZE     95  /* Sect 4.4.3 IS-707-A.3 */
#define ATC_MAX_GCAP_STR_SIZE    64  /* Ai_cmd is using 65535 bytes!! */
#define ATC_MAX_FLI_STR_SIZE	 21  /* MAX_FLI_LEN in Ai_data.h */ 
#define ATC_MAX_FPA_STR_SIZE	 21  /* MAX_FPA_LEN in Ai_data.h */
#define ATC_MAX_FPI_STR_SIZE	 21  /* MAX_FPI_LEN in Ai_data.h */
#define ATC_MAX_FPW_STR_SIZE	 21  /* MAX_FPW_LEN in Ai_data.h */
#define ATC_MAX_FSA_STR_SIZE	 21  /* MAX_FSA_LEN in Ai_data.h */
#define ATC_MAX_GMI_STR_SIZE	 64  /* Sect 4.1.1 IS-131 says 2048 */
#define ATC_MAX_GMM_STR_SIZE	 64  /* Sect 4.1.2 IS-131 says 2048 */
#define ATC_MAX_GMR_STR_SIZE	 64  /* Sect 4.1.3 IS-131 says 2048 */
#define ATC_MAX_HWV_STR_SIZE	 64
#define ATC_MAX_GOI_STR_SIZE	 64  /* Sect 4.1.4 IS-131 says 2048 */
#define ATC_MAX_GSN_STR_SIZE	 64  /* Sect 4.1.5 IS-131 says 2048 */

#define ATC_MAX_FIF_LEN          90

#define DEFAULT_FCC_VR  0
#define DEFAULT_FCC_BR  0
#define DEFAULT_FCC_WD  0
#define DEFAULT_FCC_LN  0
#define DEFAULT_FCC_DF  0
#define DEFAULT_FCC_EC  0
#define DEFAULT_FCC_BF  0
#define DEFAULT_FCC_ST  0

#define DEFAULT_FCR     0

#define DEFAULT_FFC_VRC 0
#define DEFAULT_FFC_DFC 0
#define DEFAULT_FFC_LNC 0
#define DEFAULT_FFC_WDC 0

#define DEFAULT_FRQ_PGL 0
#define DEFAULT_FRQ_CBL 0

#define DEFAULT_MS_CARRIER  CR_V34
#define DEFAULT_MS_AUTOMODE KAL_FALSE


#if (AT_DPD_AUTOBAUD_RATES == BR_NONE)
  #ifndef AT_DEFAULT_IPR
  #error "AT_DEFAULT_IPR not defined"
  #endif

  #if ((AT_DEFAULT_IPR == 0) || ((AT_DEFAULT_IPR & AT_DPD_FIXED_RATES) == 0))
  #error "AT_DEFAULT_IPR definition error"
  #endif

  #if (AT_DEFAULT_IPR == BR_300)
  #define IPR_DEFAULT 300
  #elif (AT_DEFAULT_IPR == BR_1200)
  #define IPR_DEFAULT 1200
  #elif (AT_DEFAULT_IPR == BR_2400)
  #define IPR_DEFAULT 2400
  #elif (AT_DEFAULT_IPR == BR_4800)
  #define IPR_DEFAULT 4800
  #elif (AT_DEFAULT_IPR == BR_9600)
  #define IPR_DEFAULT 9600
  #elif (AT_DEFAULT_IPR == BR_19200)
  #define IPR_DEFAULT 19200
  #elif (AT_DEFAULT_IPR == BR_38400)
  #define IPR_DEFAULT 38400
  #elif (AT_DEFAULT_IPR == BR_57600)
  #define IPR_DEFAULT 57600
  #elif (AT_DEFAULT_IPR == BR_115200)
  #define IPR_DEFAULT 115200UL
  #elif (AT_DEFAULT_IPR == BR_230400)
  #define IPR_DEFAULT 230400UL
  #else
  #error "AT_DEFAULT_IPR definition error"
  #endif

#else /* (AT_DPD_AUTOBAUD_RATES != BR_NONE) */
#define IPR_DEFAULT 0
#endif


#ifdef MTK_CBP
#define ATC_MAX_REG_TYPE_NUM        7
#endif

typedef  struct
{
  kal_uint8 bcs;
  kal_uint8 bcl;
}   AtcCbc;


typedef  struct
{
  kal_uint8  direction;
  kal_bool   compressionNegotiation;
  kal_uint16 maxDict;
  kal_uint8  maxString;
}   AtcDs;

typedef  struct
{
  kal_uint8 sqm;
  kal_uint8 fer;
}   AtcCsq;

typedef enum 
{
  ATC_ABC_Unknown,
  ATC_ABC_800MHz,
  ATC_ABC_1900MHz,
  ATC_NUM_ABCs
} AtcBandClass;

typedef  struct
{
  AtcBandClass bandClass;
  kal_char band;
  kal_uint16 sid;
}   AtcCss;

typedef  struct
{
  kal_uint8 breakSelection;
  kal_bool timed;
  kal_uint8 defaultLen;
}   AtcEb;

typedef  struct
{
  kal_uint8 origRqst;
  kal_uint8 origFbk;
  kal_uint8 ansFbk;
}   AtcEs;

typedef  struct
{
  kal_uint8 pendingTd;
  kal_uint8 pendingRd;
  kal_uint8 timer;
}   AtcEtbm;

typedef  struct
{
  kal_bool sub;
  kal_bool sep;
  kal_bool pwd;
}   AtcFap;

typedef  struct
{
  kal_bool vr;
  kal_uint8 br;
  kal_uint8 wd;
  kal_uint8 ln;
  kal_uint8 df;
  kal_bool ec;
  kal_bool bf;
  kal_uint8 st;
}   AtcFcc;

typedef  struct
{
  kal_uint8 rq;
  kal_uint8 tq;
}   AtcFcq;

typedef  struct
{
  kal_uint8 vrc;
  kal_uint8 dfc;
  kal_uint8 lnc;
  kal_uint8 wdc;
}   AtcFfc;

typedef  struct
{
  kal_bool rpr;
  kal_bool tpr;
  kal_bool idr;
  kal_bool nsr;
}   AtcFnr;

typedef  struct
{
  kal_uint8 buf[ATC_MAX_FIF_LEN];
  kal_uint8 len;
}   AtcFif;

typedef  struct
{
  kal_uint8 pgl;
  kal_uint8 cbl;
}   AtcFrq;

typedef  struct
{
  kal_uint8 format;
  kal_uint8 parity;
}   AtcIcf;

typedef  struct
{
  kal_uint8 dceByDte;
  kal_uint8 dteByDce;
}   AtcIfc;
typedef  struct
{
  kal_uint8 carrier;
  kal_bool automode;
  kal_uint16 minRate;
  kal_uint16 maxRate;
  kal_uint16 minRxRate;
  kal_uint16 maxRxRate;
}   AtcMs;

typedef  struct
{
  kal_uint8 mode;
  kal_uint8 dfltAnsMode;
  kal_bool fbkTimeEnable;
}   AtcMv18s;

typedef  struct
{
   kal_uint8              StrChar[ATC_MAX_CFG_STR_SIZE];  
}   AtcDbmCfgStrT;

typedef  struct
{
   kal_uint8              StrChar[ATC_MAX_FDL_STR_SIZE];
}   AtcDbmFdlStrT;

typedef  struct 
{
   kal_uint8              StrChar[ATC_MAX_FLI_STR_SIZE];
}   AtcDbmFliStrT;

typedef  struct 
{
   kal_uint8              StrChar[ATC_MAX_FPA_STR_SIZE];
}   AtcDbmFpaStrT;

typedef  struct 
{
   kal_uint8              StrChar[ATC_MAX_FPI_STR_SIZE];
}   AtcDbmFpiStrT;

typedef  struct 
{
   kal_uint8              StrChar[ATC_MAX_FPW_STR_SIZE];
}   AtcDbmFpwStrT;

typedef  struct 
{
   kal_uint8              StrChar[ATC_MAX_FSA_STR_SIZE];
}   AtcDbmFsaStrT;

typedef  struct 
{
   kal_uint8              StrChar[ATC_MAX_GCAP_STR_SIZE];
}   AtcDbmGcapStrT;

typedef  struct 
{
   kal_uint8              StrChar[ATC_MAX_GMI_STR_SIZE];
}   AtcDbmGmiStrT;

typedef  struct 
{
   kal_uint8              StrChar[ATC_MAX_GMM_STR_SIZE];
}   AtcDbmGmmStrT;

typedef  struct 
{
   kal_uint8              StrChar[ATC_MAX_GMR_STR_SIZE];
}   AtcDbmGmrStrT;

typedef  struct 
{
   kal_uint8              StrChar[ATC_MAX_HWV_STR_SIZE];
}   AtcDbmHwvStrT;

typedef  struct 
{
   kal_uint8              StrChar[ATC_MAX_GOI_STR_SIZE];
}   AtcDbmGoiStrT;

typedef  struct 
{
   kal_uint8              StrChar[ATC_MAX_GSN_STR_SIZE];
}   AtcDbmGsnStrT;

typedef  struct
{
   kal_uint8             Carrier[8];
}   AtcDbmMaT;

typedef  struct 
{
    kal_uint32          ValActivedBandMask;
}   AtcValActivedBandDataT;

#ifdef MTK_CBP
typedef  struct 
{
  kal_bool  regTypeArray[ATC_MAX_REG_TYPE_NUM];
}   AtcValRegtypeDataT;

#endif


typedef  struct  
{
   kal_bool             ParamSetFlag;
   kal_uint8            C109Parameter;
   kal_uint8            CADParameter;
   AtcCbc           CBCParameter;
   kal_uint32 	        CBIPParameter;
   kal_bool             CDRParameter;
   AtcDs            CDSParameter;
   kal_uint8            CFCParameter;
   kal_uint32           CMIPParameter;
   kal_uint8            CMUXParameter;
   kal_bool             CPERParameter;
   kal_uint16           CPSParameter;
   kal_bool             CPSRParameter;
   kal_uint8            CQDParameter;
   kal_bool             CRCParameter;
   kal_uint8            CRMParameter;
   AtcCsq           CSQParameter;
   AtcCss           CSSParameter;
   kal_uint8            CTAParameter;
   kal_bool             CXTParameter;
   kal_uint8            C108Parameter;
   kal_uint8            DParameter;
   kal_bool             DialTypeParameter;
   kal_bool             DRParameter;
   AtcDs            DSParameter;
   kal_bool             EParameter[AT_CHAN_NUM];
   AtcEb            EBParameter;
   kal_uint8            EFCSParameter;
   kal_bool             ERParameter;
   AtcEs            ESParameter;
   kal_uint8            ESRParameter;
   AtcEtbm          ETBMParameter;
   kal_bool             FAAParameter;
   AtcFap           FAPParameter;
   kal_uint8            FBOParameter;
   kal_bool             FBUParameter;
   AtcFcc           FCCParameter;
   kal_uint8            FCLASSParameter;
   AtcFcq           FCQParameter;
   kal_bool             FCRParameter;
   kal_uint8            FCTParameter;
   kal_bool             FEAParameter;
   AtcFfc           FFCParameter;
   kal_uint8            FHSParameter;
   kal_bool             FIEParameter;
   AtcFcc           FISParameter;
   kal_uint8            FLOParameter;
   kal_bool             FLPParameter;
   kal_uint8            FMSParameter;
   AtcFnr           FNRParameter;
   AtcFif           FNSParameter;
   kal_bool             FPPParameter;
   kal_uint8            FPRParameter;
   kal_uint8            FPSParameter;
   AtcFrq           FRQParameter;
   kal_uint8            FRYParameter;
   kal_bool             FSPParameter;
   kal_bool             IBCParameter;
   AtcIcf           ICFParameter;
   AtcIfc           IFCParameter;
   kal_bool             ILRRParameter;
   kal_uint32           IPRParameter;
   kal_uint8            LParameter;
   kal_uint8            MParameter;
   kal_bool             MRParameter;
   AtcMs            MSParameter;
   kal_bool             MV18RParameter;
   AtcMv18s         MV18SParameter;
   kal_bool             QParameter[AT_CHAN_NUM];
   kal_uint8            S0Parameter;
   kal_uint8            S3Parameter;
   kal_uint8            S4Parameter;
   kal_uint8            S5Parameter;
   kal_uint8            S6Parameter;
   kal_uint8            S7Parameter;
   kal_uint8            S8Parameter;
   kal_uint8            S9Parameter;
   kal_uint8            S10Parameter;
   kal_uint8            S11Parameter;
   kal_bool             VParameter[AT_CHAN_NUM];
   kal_uint8            XParameter;  
    kal_uint8 	        DMUVParameter;
    kal_uint8	        QCMIPParameter;

    kal_bool            QCQNCParameter;
    kal_uint8           QCMDRParameter;

    AtcDbmCfgStrT   CfgStr;
    AtcDbmFdlStrT	FdlStr;
    AtcDbmFliStrT	FliStr;
    AtcDbmFpaStrT	FpaStr;
    AtcDbmFpiStrT	FpiStr;
    AtcDbmFpwStrT	FpwStr;
    AtcDbmFsaStrT	FsaStr;
    AtcDbmGcapStrT	GcapStr;
    AtcDbmGmiStrT	GmiStr;
    AtcDbmGmmStrT	GmmStr;
    AtcDbmGmrStrT	GmrStr;
    AtcDbmGoiStrT	GoiStr;
    AtcDbmGsnStrT	GsnStr;
    AtcDbmMaT       MaTbl;
    AtcDbmHwvStrT	HwvStr;
    kal_uint8           CMEEParameter;
#ifdef MTK_DEV_ENGINEER_MODE
    kal_uint8           EctmMode;
#ifdef MTK_DEV_C2K_IRAT
    kal_uint8           EclscMode;
#endif
#endif
#ifdef MTK_CBP
    kal_bool            VPMode;  /* voice privacy mode */

    AtcValActivedBandDataT ActivedBand;

    AtcValRegtypeDataT     stRegTypeTbl;    /*saved value, if enable the registration type 
                                                                  RegTypeArray[0], timer based
                                                                  RegTypeArray[1], Power up
                                                                  RegTypeArray[2], Zoned based
                                                                  RegTypeArray[3], Power down
                                                                  RegTypeArray[4], Parameter change
                                                                  RegTypeArray[5], order
                                                                  RegTypeArray[6], distanc based
                                                                  TRUE,enalbe the reg type*/

                                                                  
    kal_uint16          uPrefSo;
    kal_uint8           uPrefRc;
    kal_bool            bEvrcCap;
    kal_bool            bEvrcbSupport;  /*True,the EvrcB(SO68) is enable, False, it is disable*/
    kal_bool            bEvrcSupport;   /*True,the EVRC(SO3)  is enable, False, it is disable*/
    
#endif
	kal_uint8 PrefMode;  /*for mode switch optimization*/
    kal_bool bSmsAckOff; /*True,UE does not send SMS Ack, False, UE sends SMS Ack as normal */
}   AtcDbmBinDataT;

typedef  struct {
#define VAL_SMS_DANDCN_MAX_VDNADDR_LEN  (32)
    kal_bool  isDanStopShallBeSend;
    kal_uint8 aucVdnAddr[VAL_SMS_DANDCN_MAX_VDNADDR_LEN+1];
}   ValSmsDanDcnInfoT;
typedef  struct
{
   kal_uint8   AutoReg;
   kal_uint16  RegMask;
}  ValCustomizedParmDataT;

typedef struct {
    kal_bool    CbsState;                           /* FALSE, CBS off; TRUE, CBS on */
    kal_uint32  LanMask;                            /* lanuage bitmap */
    kal_uint32  ChaMask[VAL_SMS_CBS_CHA_MAX];       /* channels bitmap */
    kal_uint32  CmasMask;                           /* cmas bitmap */
} ValSmsCbsInfoT;

typedef struct {
	kal_uint8 mem1;
} ValMem1ValT;

typedef struct {
	kal_uint8 vp;
} ValVpValT;

typedef struct {
    kal_uint8 enableCnir;
} ValCnirDataT;

#endif/* _VAL_NVRAM_H_ */

