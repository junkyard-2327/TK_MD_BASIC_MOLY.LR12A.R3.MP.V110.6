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
#ifndef _SLC_NVRAM_H_
#define _SLC_NVRAM_H_ 1

/*----------------------------------------------------------------------------
 Include Files
----------------------------------------------------------------------------*/


typedef struct {
  kal_uint32 TSmpClose;             /*Nogotiation Parameter*/
  kal_uint64  TSysTime;              /*The lastest updatedsystem time*/
}SmpKeepAliveParaT;

/* this struct shall be identical to the corresponding part of AmpParamT */
typedef struct {
  kal_uint8 UATIAssignMessageSeq;
  kal_uint8 UATIColorCode;
  kal_uint8 UATISubnetMask;
  kal_uint8 UpperOldUATILen;
  kal_uint8 UATI[16];
  kal_uint8 ReducedSubnetMask[16];
  kal_uint8 UATIAvailable;
  
  kal_uint8 OldUATIAssignMessageSeq;
  kal_uint8 OldUATIColorCode;
  kal_uint8 OldUATISubnetMask;
  kal_uint8 OldUpperOldUATILen;
  kal_uint8 OldUATI[16];
  kal_uint8 OldReducedSubnetMask[16];
  kal_uint8 OldUATIAvailable;

  kal_uint8 UATIReqTransID;
  kal_uint8 AttriTransId;
  kal_uint8 InuseSubtype;
  kal_uint32 SessionSeed;
  kal_uint32 X0;
  kal_uint32 Y0;
}AmpSessionDataT;

typedef struct {
   SmpKeepAliveParaT KeepAliveParam; 
   AmpSessionDataT AmpSessionData;
   kal_uint16 SessionConfigurationToken;
   kal_uint8  EhrpdFlag;
}SessionDataT;

typedef struct
{
  kal_uint8  SubType;
  kal_uint8  CCShortPacketsMACIndex;
}CcmAttributeT;

typedef struct
{
  kal_uint8         CcmCfgReqTranId;
  CcmAttributeT CcmAttribute[2];
}CcmInfoT;

/* transmission rate  used to index into max payload tables and etc. */
#define ACM_MAX_NUM_RATES     4

/* for saving into personality file, use PACKED struct */
typedef struct
{
   kal_uint8  APersistenceOverride;
   kal_uint8  TerminalAccessRateMax;
   kal_uint8  AccessTerminalClassOverride;
   kal_uint8  ProbeSeqMax;
   kal_uint8  ProbeBackoff;
   kal_uint8  ProbeSeqBackoff;
   kal_int8   DataOffset[ACM_MAX_NUM_RATES];  /* 2's complement, [0] in 0.5dB, others in 0.25dB */
   /* 0=DataOffsetNom(Q1),  1=DataOffset9k6(Q2), 2=DataOffset19k2(Q2),  3=DataOffset38k4(Q2) */
}AcmAttributesT;

typedef enum
{
    FTM_SUBTYPE_DEFAULT= 0,    
    FTM_SUBTYPE_ENHANCE
} FtmSubtypeT; 

typedef struct
{
    kal_uint8 DrcLockPeriod; /*default: b'1. Length: 1bit */
    kal_uint8 DrcLockLength; /*default: b'01. Length: 2bit */
}DrcLockAttributeT;

typedef struct
{
    kal_uint8 SofterHandoffDelay; //default: 0x01
    kal_uint8 SoftHandoffDelay;   // default: 0x10
}HandoffDelayAttributeT;

typedef struct
{
    //default: all zero, index by Drc value
    kal_uint8 DrcOffset[15];
} DrcTranslationOffsetAttributeT;

typedef struct
{
    /*---------------*
       Simple Attributes
      *---------------*/
    kal_uint16 DrcGating; /* default: 0x0000 (continuous) */
    kal_uint16 NulRateDrc38_4Enable; /*default: 0x0000*/

    /*---------------*
       Complex Attributs
      *---------------*/
    DrcLockAttributeT DrcLock; 
    HandoffDelayAttributeT HandoffDelay;
}FtmDefaultAttributesT;

typedef struct
{
    /*--------------*
       Simple Attributtes
      *--------------*/
    kal_uint8 DrcGating; /* default:0x00 */
    kal_uint8 DrcLockLength; /* default: 0x01 (repeated 16 times) */
    kal_uint8 MultiUserPacketsEnabled; /*default: 0x00 (disabled) */
    kal_uint8 DscLength; /*default: 0x08 (64 slots), in uint of 8 slots */
 
    kal_uint8 DeltaAckChannelGainMUP; /*default: 0x0c(6 db), in unit of 0.5 db */
    kal_uint8 ShortPacketsEnabledThresh; /*default: 0x01 (2048 bits) 8*/
    kal_uint8 SingleUserMultiplexPacketsEnabled; /*default: 0x00 (disabled)*/
    kal_uint8 DrcSupervisionTimer; /*default: 0x00*/
 
    kal_uint8 MinimumContinuationSpan; /* default: 0x04. in subpacket*/
    kal_uint8 DscChannelGainBoost; /*default: 0x00. dB*/
    kal_uint8 DscBoostLength; /*default: 0x10 (128 slots). in unit of 8 slots*/
    kal_uint8 DrcChannelGainBoost;  /*default: 0x00. dB*/
 
    kal_uint8 DrcboostLength; /*default: 0x04 (8 slots). in unit of 2 slots*/
   
    /*----------------
       Complex Attributes
      *---------------*/
    HandoffDelayAttributeT HandoffDelay;
    DrcTranslationOffsetAttributeT DrcTranslationOffset;   
}FtmEnhanceAttributesT;

typedef union
{
    FtmDefaultAttributesT FtmDefaultAttributes;
    FtmEnhanceAttributesT FtmEnhanceAttributes;
}FtmAttributesT;

typedef struct 
{
    FtmSubtypeT  FtmSubtype;
    FtmAttributesT FtmAttributes;
} FtmCfgDataT;

typedef enum
{
    RTM_SUBTYPE0 = 0,
    RTM_SUBTYPE1,
    RTM_SUBTYPE2,
    RTM_SUBTYPE3
} RtmRmmSubtypeT;

#define RTM_MAX_RATE_TRANSITION     12      /* Subtype0/1: Max number of entries in RateTransition Table */
#define RTM_MAX_REV_RATE            6       /* Subtype0/1: Max number of rev rates */
#define MAX_MAC_FLOW_NUM        4
#define RTM_MAX_INTERLACE           3       /* Standard defined 3 RevLink interlaces */
#define RTM_MAX_REV_RATE_PHY2       13      /* RTM:TODO Subtype3: Max number of rev rates */
#define MAX_RLP_FLOW_SUPPORTED       8

typedef struct
{
   kal_uint8  rpcStep;          /* 0=0.5db, 1=1.0db */
   kal_int8   pwrParm[RTM_MAX_REV_RATE];
                            /* Channel Gains from pilotpwr, in 0.5db/0.25db, 2'complement
                                0 = dataOffsetNom   in 0.5db
                                1 = dataOffset9k6   in 0.25db
                                2 = dataOffset19k2
                                3 = dataOffset38k4
                                4 = dataOffset76k8
                                5 = dataOffset153k6
                            */
   kal_uint8  rateParm[RTM_MAX_RATE_TRANSITION];   /* GAUP */
                            /* Transition Probability for rev rates (units of 1/255)
                                0  = 0xFF (KAL_TRUE always)
                                1  = Trans9k6_19k2
                                2  = Trans19k2_38k4
                                3  = Trans38k4_76k8
                                4  = Trans76k8_153k6
                                5  = 0 (KAL_FALSE always)
                                6  = 0 (KAL_FALSE always)
                                7  = 0 (KAL_FALSE always)
                                8  = Trans19k2_9k6
                                9  = Trans38k4_19k2
                                10 = Trans76k8_38k4
                                11 = Trans153k6_76k8
                            */
}Rtm01AttributesT;

/* FRABFilterTC */
typedef enum
{
   RTM_FRABFILTERTC_128 = 0,
   RTM_FRABFILTERTC_256,
   RTM_FRABFILTERTC_384,
   RTM_FRABFILTERTC_512
} RtmFrabFilterTcT;

typedef enum
{
    RTM_FRAB_LOW_MINUS_0_2 =0,
    RTM_FRAB_LOW_MINUS_0_4,
    RTM_FRAB_LOW_MINUS_0_6,
    RTM_FRAB_LOW_MINUS_0_8,
    RTM_FRAB_LOW_MINUS_1_0,
    RTM_FRAB_LOW_MAX,
}RtmFrabLowT;

typedef enum
{
    RTM_MERGE_THRESHOLD_128=0,
    RTM_MERGE_THRESHOLD_256,
    RTM_MERGE_THRESHOLD_512,
    RTM_MERGE_THRESHOLD_1024,
    RTM_MERGE_THRESHOLD_2048,
    RTM_MERGE_THRESHOLD_MAX,
}RtmMergeThresholdT;

typedef enum
{
    RTM_PAYLOAD_THRESH_768=0,
    RTM_PAYLOAD_THRESH_1024,
    RTM_PAYLOAD_THRESH_1536,
    RTM_PAYLOAD_THRESH_INFINITE,
    RTM_PAYLOAD_THRESH_MAX,
}RtmPayloadThreshT;

typedef enum
{
    RTM_PILOT_STRENGTH_FILTER_TC_32=0,
    RTM_PILOT_STRENGTH_FILTER_TC_64,
    RTM_PILOT_STRENGTH_FILTER_TC_128,
    RTM_PILOT_STRENGTH_FILTER_TC_MAX,
}RtmPilotStrengthFilterTcT;

typedef enum
{
   RTM_QRABFILTERTC_4 = 0,
   RTM_QRABFILTERTC_8
} RtmQrabFilterTcT;

typedef enum
{
    RTM_T2P_NO_TX_FILTER_TC_16=0,
    RTM_T2P_NO_TX_FILTER_TC_24,
    RTM_T2P_NO_TX_FILTER_TC_32,
    RTM_T2P_NO_TX_FILTER_TC_64,
    RTM_T2P_NO_TX_FILTER_TC_128,
    RTM_T2P_NO_TX_FILTER_TC_MAX,
}RtmT2pNoTxFilterTcT;

typedef enum
{
    RTM_MERGE_THRESHOLD_NN_0=0,
    RTM_MERGE_THRESHOLD_NN_32,
    RTM_MERGE_THRESHOLD_NN_128,
    RTM_MERGE_THRESHOLD_NN_1024,
    RTM_MERGE_THRESHOLD_NN_4096,
    RTM_MERGE_THRESHOLD_NN_8192,
    RTM_MERGE_THRESHOLD_NN_INFINITE,
    RTM_MERGE_THRESHOLD_NN_MAX,
    RTM_MERGE_THRESHOLD_00_INFINITE=4,
    RTM_MERGE_THRESHOLD_00_MAX,
}RtmMergeThresholdNnT;

typedef enum
{
    RTM_BURST_DURATION_FACTOR_4=0,
    RTM_BURST_DURATION_FACTOR_8,
    RTM_BURST_DURATION_FACTOR_16,
    RTM_BURST_DURATION_FACTOR_32,
    RTM_BURST_DURATION_FACTOR_MAX,
}RtmBurstDurationFactorNnT;

typedef enum
{
    RTM_T2P_FILTER_TC_NN_16=0,
    RTM_T2P_FILTER_TC_NN_24,
    RTM_T2P_FILTER_TC_NN_32,
    RTM_T2P_FILTER_TC_NN_64,
    RTM_T2P_FILTER_TC_NN_128,
    RTM_T2P_FILTER_TC_NN_MAX,
}RtmT2pFilterTcNnT;

typedef enum
{
    RTM_PAYLOAD_NO_BITS=0,
    RTM_PAYLOAD_128_BITS,
    RTM_PAYLOAD_256_BITS,
    RTM_PAYLOAD_512_BITS,
    RTM_PAYLOAD_768_BITS,
    RTM_PAYLOAD_1024_BITS,
    RTM_PAYLOAD_1536_BITS,
    RTM_PAYLOAD_2048_BITS,
    RTM_PAYLOAD_3072_BITS,
    RTM_PAYLOAD_4096_BITS,
    RTM_PAYLOAD_6144_BITS,
    RTM_PAYLOAD_8192_BITS,
    RTM_PAYLOAD_12288_BITS,
    RTM_PAYLOAD_MAX_BITS,
}RtmPayloadT;

//start of complex type definition for RtmSubtype 3
// complex attribute type 0x01NN
/* AssocFlows for MacFlows */
typedef struct
{
   kal_uint8  flowCount;
   kal_uint16 stream[MAX_MAC_FLOW_NUM];
   kal_uint8  substream[MAX_MAC_FLOW_NUM];
} RtmAssocFlowsT;
//complex attribute type 0x0000, not defined. it's done already.

// complex attribute type 0x03NN
typedef struct
{
    kal_uint8 ValueId;
    kal_uint8 NumT2pAxisValues;
    kal_uint8 NumFrabAxisValues;
    kal_uint8 T2pAxis[16];
    kal_uint8 FrabAxis[8];
    kal_uint8 BucketFactorT2pAxisFrabAxis[128];
}RtmBucketFactorNnT;

// complex attribute type 0x0001
typedef struct
{
    kal_uint8 ValueId;
    kal_uint8 AllocationStagger;
    kal_uint8 TxT2pMin;
    kal_uint8 RpcStep;
}RtmCommonPowerParameterT;

// complex attribute type 0x0002, not defined. it's done already.

// complex attribute type 0x0003
typedef struct
{
    kal_uint8 ValueId;
    kal_uint8 PermittedPayload[RTM_PAYLOAD_MAX_BITS][3];
}RtmPermittedPayloadT;

// complex attribute type 0x0004
typedef struct
{
    kal_uint8 ValueId;
    kal_uint8 NumPilotStrengthAxisValues;
    kal_uint8 PilotStrengthAxis[15];
    kal_uint8 PilotStrengthPilotStrengthAxis[15];
}RtmPilotStrengthT;

// complex attribute type 0x0005-0x0010
typedef struct
{
    kal_uint8 ValueId;
    kal_uint8 LoLatT2pTransition;
    kal_uint8 LoLatTerminationTarget;
    kal_uint8 HiCapT2pTransition;
    kal_uint8 HiCapTerminationTarget;
    kal_uint8 T2pLoLatPreTransition;
    kal_uint8 T2pLoLatPostTransition;
    kal_uint8 T2pHiCapPreTransition;
    kal_uint8 T2pHiCapPostTransition;
}RtmPowerParameterT;

// complex attribute type 0x0011
typedef struct
{
    kal_uint8 ValueId;
    kal_uint8 ReqRatio;
    kal_uint8 MaxReqInterval;
}RtmRequestParametersT;

// complex attribute type 0x0012
typedef struct
{
    kal_uint8 ValueId;
    kal_uint8 RriChanGainPreTransition0;
    kal_uint8 RriChanGainPostTransition0;
    kal_uint8 RriChanGainPreTransition1;
    kal_uint8 RriChanGainPostTransition1;
    kal_uint8 RriChanGainPreTransition2;
    kal_uint8 RriChanGainPostTransition2;
    kal_uint8 RriChanGainPreTransition3;
    kal_uint8 Reserved;
}RtmRriChanPowerParametersT;

// complex attribute type 0x15NN
typedef struct
{
    kal_uint8 ValueId;
    kal_uint8 T2pInflowMin;
    kal_uint8 T2pInflowMax;
}RtmT2pInflowRangeNnT;

// complex attribute type 0x16NN
typedef struct
{
    kal_uint8 ValueId;
    kal_uint8 NumT2pAxisValues;
    kal_uint8 NumFrabAxisValues;
    kal_uint8 T2pAxis[16];
    kal_uint8 FrabAxis[8];
    kal_uint8 T2pUpT2pAxisFrabAxis[128];
    kal_uint8 T2pDnT2pAxisFrabAxis[128];
}RtmT2pTransitionFunctionNnT;

//complex attribute type 0x0013
typedef struct
{
    kal_uint8 ValueId;
    kal_uint8 NumPilotStrengthAxisValues;
    kal_uint8 PilotStrengthAxis[7];
    kal_uint8 TxT2pMaxPilotStrengthAxis[7];
}RtmTxT2pMaxT;

//complex attribute type 0x0014, not defined. It's done already.
//end of complex type definition for RtmSubtype 3

typedef struct
{
    //simple attributes
    kal_uint8 arqMode;//attr id:0xffff, either 0 or 1
    RtmFrabFilterTcT frabfilterTC;//attr id:0xfffe
    RtmFrabLowT FrabLow;//attr id:0xfffd
    RtmMergeThresholdT MergeThreshold;//attr id:0xfffc
    RtmPayloadThreshT PayloadThreshold;//attr id:0xfffb
    RtmPilotStrengthFilterTcT PilotStrengthFilterTc;//attr id:0xfffa
    RtmQrabFilterTcT qrabfilterTC;//attr id:0xfff9
    RtmT2pNoTxFilterTcT T2pNoTxFilterTc;//attr id:0xfff7
    kal_uint8 PilotStrengthQrabThresholdDrcLock;//attr id: 0xfff6, -0.25dB resolution
    kal_uint8 PilotStrengthQrabThresholdDrcUnlock;//attr id: 0xfff5, -0.25dB resolution
    kal_uint8 rate1M8Supported;//attr id: 0xfff3 RTM3:1=ATsupports 1.8Mbps on revlink
    kal_uint8 supportGAUPMaxNumSubPackets;//attr id:0xfff2 RTM3: 1=supports GAP for MaxNumSubPackets attr
    kal_uint8 RtmBucketLevelMax[MAX_MAC_FLOW_NUM];//attr id: 0xfeNN, 0.25dB resolution
    RtmMergeThresholdNnT MergeThresholdNn[MAX_MAC_FLOW_NUM];//attr id:0xfdNN, 0xfd00 has to be taken care specially.
    kal_uint8 TransmissionModeNn[MAX_MAC_FLOW_NUM];//attr id:0xfcNN, 0:high capacity, 1:low latency
    kal_uint8 QrabSelectNn[MAX_MAC_FLOW_NUM];//attr id:0xfbNN, 0:use QRAB, 1: use QRABps
    RtmBurstDurationFactorNnT BurstDurationFactorNn[MAX_MAC_FLOW_NUM];//attr id:0xfaNN
    RtmT2pFilterTcNnT T2pFilterTcNn[MAX_MAC_FLOW_NUM];//attr id:0xf9NN

    //complex attributes
    //attr id:0x01NN
   RtmAssocFlowsT assocFlow[MAX_MAC_FLOW_NUM];  /* GAUP. The app macflows(stream,substream) assoc with each MacFlowId */
    //attr id:0x0000
   kal_int8   auxPilotChanGain;     /* RTM3,GAUP: relative to Traffic. In db, from -15 to 0db. */
   kal_uint8  auxPilotMinPayload;   /* RTM3,GAUP: 0 to 0xb, units of 128bits to represent payload bits */
    //attr id:03NN
    RtmBucketFactorNnT BuckFactorNn[MAX_MAC_FLOW_NUM];
    //attr id:0x0001
    RtmCommonPowerParameterT CommonPowerParameter;
    //attr id:0x0002
   kal_uint8  maxNumSubPkt[RTM_MAX_INTERLACE];  /* RTM3,GAUP: Max number of subpkt allowed for this interlace */
    //attr id:0x0003
    RtmPermittedPayloadT PermittedPayload;

    //attr id:0x0004
    RtmPilotStrengthT PilotStrength;

    //attr id:0x0005-0010
    RtmPowerParameterT PowerParameter[RTM_MAX_REV_RATE_PHY2-1];

    //attr id:0x0011
    RtmRequestParametersT RequestParameters;

    //attr id:0x0012
    RtmRriChanPowerParametersT RriChanPowerParameters;

    //attr id:0x15NN
    RtmT2pInflowRangeNnT T2pInflowRangeNn[MAX_MAC_FLOW_NUM];

    //attr id: 0x16NN
    RtmT2pTransitionFunctionNnT T2pTransitionFunctionNn[MAX_MAC_FLOW_NUM];

    //attr id:0x0013
    RtmTxT2pMaxT Txt2pMax;

    //attr id:0x0014
    kal_uint8  maxNumMacFlows;                   /* Max num of active+inactive MAC flows */
    kal_uint8  maxNumActiveMacFlows;             /* Max num of active MAC flows */
}Rtm3AttributesT;

typedef union
{
    Rtm01AttributesT Rtm01Attributes;
    Rtm3AttributesT Rtm3Attributes;
}RtmAttributesT;
/* Session Configuration Data */
/* This is a local SessCfg data structure which stores SessCfg attrib params
   saved from OTA Config msgs, or loaded from std defaults */
typedef struct
{
    RtmRmmSubtypeT     rtmSubtype;      /* RTCMAC subtype: 0, 1, 2, 3*/

    RtmAttributesT RtmAttributes;
} RtmCfgDataT;

typedef struct
{
  kal_uint16 stream0Application;
  kal_uint16 stream1Application;
  kal_uint16 stream2Application;
  kal_uint16 stream3Application;
}StreamConfigAttribT;

/* 
The stream1, stream2, stream3 personality depends on 
the below parsubtype:
ParCfgAccessInCfg.parSubType
ParCfgServiceInCfg.parSubType
*/
typedef enum
{
    DSA,
    DPA_AccessStream = 0x01,
    DPA_ServiceStream,
    TAP_SUBTYPE,
    MFPA_AccessStream = 0x04,
    MFPA_ServiceStream,
    CIR_SRVCS_NOT_3G1X,
    EMFPA_AccessStream = 0x08,
    EMFPA_ServiceStream,
    ETAP_SUBTYPE = 0x0a,
    BTAP,
    NUM_APP_SUBTYPE_SUPPORTED
} AppSubTypeT;

#define MAX_RESV_LABEL_WITH_RLP_FLOW 3
#define MAX_SUPPORT_HL_PROTOCOL_NUM  1

typedef  struct
{
    kal_uint8 Active;
    kal_uint8 lenSeq;
    kal_uint8 lenRLPID;
    kal_uint8 RLPID;
} FlowIdentificationAttribT;

typedef  struct
{
    kal_uint16 AbortTimer;
    kal_uint16 FlushTimer;
} FlowTimersAttribT;

typedef  struct
{
    kal_uint8 MaxNumRLPFlows;
    kal_uint8 MaxActivatedRLPFlows;
} MaxRLPFlowsAttribT;

typedef  struct
{
    kal_uint8 nReservationCount;
    kal_uint8 ReservationLabel[MAX_RESV_LABEL_WITH_RLP_FLOW];
} FlowReservationAttribT;

typedef  struct
{
    kal_uint8 MaxNumReservationFwd;
    kal_uint8 MaxNumReservationRev;
    kal_uint8 MaxNumOpenReservationFwd;
    kal_uint8 MaxNumOpenReservationRev;
} MaxReservationsAttribT;

typedef  struct
{
    kal_uint8  ProtocolCount;
    kal_uint8  ProtocolIdentifier[MAX_SUPPORT_HL_PROTOCOL_NUM];
} SupportHLProtocolT;

#define MAX_QOSPROFILE_COUNT      10
#define MAX_QOS_PROFILE_NUM    16
#define MAX_RESERVATION_LABEL          0x100

typedef struct
{
  kal_uint8   ProfileCount;
  kal_uint8   ProfileLength[MAX_QOSPROFILE_COUNT];
  kal_uint16  Profile[MAX_QOSPROFILE_COUNT][MAX_QOS_PROFILE_NUM];
}SupportedQosProfileT;

#ifdef CBP7_EHRPD
#define MAX_PROTPARMSPROFILE_COUNT       8

typedef enum
{
   PI_NULL     = 0x00,         /* NULL */
   PI_HDLC     = 0x01,         /* Octet-based HDLC-like framing */
   PI_IPV4     = 0x02,         /* IP version4 */
   PI_IPV6     = 0x03,         /* IP version6 */
   PI_ROHC     = 0x04,         /* ROHC */
   PI_IPV4V6   = 0x05,         /* IP version4 and Version6 */
   PI_HDLC_ALT = 0x06,         /* Octet-based HDLC-like framing  with AltPPP*/
   PI_EHRPD    = 0x07,         /* Octet based HDLC like framing supporting multiple PDNs*/
   PI_PDNMUX   = 0x08,         /* PDN-Mux (One octet PDN-ID prefix) for Internet Protocol (IP) PDNs*/
   PI_RESERVED
} HlpProtocolIdentifierT;

typedef  struct
{
   kal_uint16 MaxCID;
   kal_bool LargeCIDs;
   kal_bool FeedbackForIncluded;
   kal_uint8 FeedbackFor;
   kal_uint16 MRRU;
   kal_uint8 ProfileCount;
   kal_uint16 Profiles[MAX_PROTPARMSPROFILE_COUNT];
} FwdRohcProtocolParmsT;

typedef  struct
{
   kal_uint16 MaxCID;
   kal_bool LargeCIDs;
   kal_bool FeedbackForIncluded;
   kal_uint8 FeedbackFor;
   kal_uint16 MRRU;
   kal_bool TimerBasedCompression;
   kal_uint8 ProfileCount;
   kal_uint16 Profiles[MAX_PROTPARMSPROFILE_COUNT];
} RevRohcProtocolParmsT;

typedef struct {
     HlpProtocolIdentifierT  ProtcolID;
     RevRohcProtocolParmsT   RohcParms;
} RevFlowProtocolParametersAttribT;

typedef struct {
     HlpProtocolIdentifierT  ProtcolID;
     RevRohcProtocolParmsT   RohcParms;
} RevRouteProtocolParametersAttribT;

typedef struct {
     HlpProtocolIdentifierT  ProtcolID;
     FwdRohcProtocolParmsT   RohcParms;
} FwdFlowProtocolParametersAttribT;

typedef struct {
     HlpProtocolIdentifierT  ProtcolID;
     FwdRohcProtocolParmsT   RohcParms;
} FwdRouteProtocolParametersAttribT;
#endif

typedef struct {
  kal_uint8 Active;
  kal_uint8 lenSeq;
  kal_uint8 lenRLPID;
  kal_uint8 RLPID;
} FlowIdentificationFwdAttribT;

typedef struct {
  kal_uint16 AbortTimer;
  kal_uint16 FlushTimer;
} FlowTimersFwdAttribT;

typedef struct {
  kal_uint8 MaxNumRLPFlowsFwd;
  kal_uint8 MaxActivatedRLPFlowsFwd;
} FwdMaxRLPFlowsAttribT;

typedef  struct
{
    AppSubTypeT  parSubType;
    /*kal_uint16        ProtocolType;*/
    kal_uint8        ActiveRlpNum;
    /*Default Packet Application Attributes*/
    kal_uint8           RANHandoff;

    /*Multi-Flow Packet Application Attributes*/
    kal_uint8           MaxAbortTimer;
    kal_bool            RevFlowNakEnabled [MAX_RLP_FLOW_SUPPORTED];
    kal_bool            FlowPhysicalLayerNakEnabledRev[MAX_RLP_FLOW_SUPPORTED];
    kal_uint8           RevFlowHighLayerProtocol[MAX_RLP_FLOW_SUPPORTED];
    kal_uint8           ReservationIdleStateRev[MAX_RESERVATION_LABEL];
    kal_uint8           ReservationIdleStateFwd[MAX_RESERVATION_LABEL];
    kal_uint16          FlowTransmitAbortTimerRev[MAX_RLP_FLOW_SUPPORTED];
    kal_bool            FlowDataOverSignalingAllowedRev[MAX_RLP_FLOW_SUPPORTED];
    FlowIdentificationAttribT attribRevFlowIdentification[MAX_RLP_FLOW_SUPPORTED];
    FlowTimersAttribT         attribRevFlowTimer[MAX_RLP_FLOW_SUPPORTED];
    kal_uint16          FlowAbortTimerRevInFrame[MAX_RLP_FLOW_SUPPORTED];
    FlowReservationAttribT    attribRevFlowReservation[MAX_RLP_FLOW_SUPPORTED];
    FlowReservationAttribT    attribFwdFlowReservation[MAX_RLP_FLOW_SUPPORTED];
    MaxRLPFlowsAttribT        attribRevmaxRLPFlows;
    MaxReservationsAttribT    attribMaxResv;
    SupportHLProtocolT        SupportedHLProtocol;
    SupportedQosProfileT      ANSupportedQosProfile;

#ifdef CBP7_EHRPD
    /*Enhanced Multi-Flow Packet Application attributes */
    kal_bool             PPPFreeAuthenticationSupport;
    kal_bool            TwoRouteSupported;
    kal_bool            ATNakDelaySupported;
    kal_uint8    attribRevFlowProtocolPDU[MAX_RLP_FLOW_SUPPORTED];
    kal_uint8    attribRevFlowDataUnit[MAX_RLP_FLOW_SUPPORTED];
    kal_uint8   attribRevRouteProtocolPDU[MAX_RLP_FLOW_SUPPORTED];
    RevFlowProtocolParametersAttribT attribRevFlowProtocolParameters[MAX_RLP_FLOW_SUPPORTED];
    RevRouteProtocolParametersAttribT attribRevRouteProtocolParameters[MAX_RLP_FLOW_SUPPORTED];
#endif
}ParServiceConfigDataT;

typedef struct {
  AppSubTypeT pafSubType;

  /*Default Packet Application Attributes*/
  kal_uint8 RANHandoff;

  /*Multi-Flow Packet Application Attributes*/
  kal_uint8 MaxAbortTimer;
  kal_bool FwdFlowNakEnabled [MAX_RLP_FLOW_SUPPORTED];
  kal_uint8 FwdFlowHighLayerProtocol[MAX_RLP_FLOW_SUPPORTED];
  FlowIdentificationFwdAttribT attribFwdFlowIdentification[MAX_RLP_FLOW_SUPPORTED];
  FlowTimersFwdAttribT attribFwdFlowTimer[MAX_RLP_FLOW_SUPPORTED];
  FwdMaxRLPFlowsAttribT attribFwdmaxRLPFlows;

#ifdef CBP7_EHRPD
   /*Enhanced Multi-Flow Packet Application attributes */
   kal_bool             PPPFreeAuthenticationSupport;
   kal_bool            TwoRouteSupported;
   kal_bool            ATNakDelaySupported;
   kal_uint8    attribFwdFlowProtocolPDU[MAX_RLP_FLOW_SUPPORTED];
   kal_uint8    attribFwdFlowDataUnit[MAX_RLP_FLOW_SUPPORTED];
   kal_uint8   attribFwdRouteProtocolPDU[MAX_RLP_FLOW_SUPPORTED];
   kal_bool     attribFwdFlowSimultaneousDeliveryOnBothRoutes[MAX_RLP_FLOW_SUPPORTED];
   kal_bool     attribFwdFlowOutOfOrderDeliveryToRouteProtcol[MAX_RLP_FLOW_SUPPORTED];
   kal_uint8     attribFwdFlowNakDelayTime[MAX_RLP_FLOW_SUPPORTED];
   FwdFlowProtocolParametersAttribT attribFwdFlowProtocolParameters[MAX_RLP_FLOW_SUPPORTED];
   FwdRouteProtocolParametersAttribT attribFwdRouteProtocolParameters[MAX_RLP_FLOW_SUPPORTED];
#endif
}PafConfigDataT;

typedef struct {
  PafConfigDataT ConfigAttribs;
}PafRcpSessionConfigMsgT;

typedef struct {
  kal_uint16  TsmpClose;
}SmpConfigurateAttr;

typedef struct {
   kal_bool       bMaxNoMonitorDistance;
   kal_uint32     MaxNoMonitorDistance;
   kal_bool       bSupportGAUPMaxNoMonitorDistance;
   kal_uint8      SupportGAUPMaxNoMonitorDistance;
   kal_bool       bHardwareSeparableFromSession;
   kal_uint8      HardwareSeparableFromSession;
   kal_bool       bReducedSubnetMaskOffset;
   kal_uint8      ReducedSubnetMaskOffset;
   kal_bool       bSupportSecondaryColorCode;
   kal_uint8      SupportSecondaryColorCode;
}AmpConfigurateAttrT;

typedef enum
{
  ConnectionFailureReportEnable = 0xff,
}AlmpAttribIdT;

typedef struct
{
   kal_uint8 SubType;
   AlmpAttribIdT AttriID;
   kal_uint8        AlmpValue;
}AlmpAttribT;

typedef enum {
   SSC_NOTALLOWED,
   SSC_ALLOWED,
   SSC_RESERVED
} SmallSlotCycleAllowedT;

typedef enum {
   MP_UNSPECIFIED,
   MP_1X_MONITOR,
   MP_RESERVED
} MaskPurposeT;

typedef enum {
   MT_1X_MONITOR,  /*Paging Mask for IS2000*/
   MT_WIFI,               /*Paging Mask for WiFi technology */
   MAX_MASKCOUNT
} PagingMaskTypeT;

typedef  struct {
   kal_uint8 nValueId;
   kal_bool bPreferredControlChannelCycleEnabled;
   kal_uint16 nPreferredControlChannelCycle;
   kal_uint8 nReserved;
} PreferredControlChannelCycleAttribT;

typedef  struct {
   kal_uint8 nValueId;
   kal_uint8 nSlotCycle1;
   kal_uint8 nSlotCycle2;
   kal_uint8 nSlotCycle3;
   kal_uint8 nWakeCount1;
   kal_uint8 nWakeCount2;
   kal_uint8 nReserved;
} SlottedModeAttribT;

typedef  struct {
   MaskPurposeT nMaskPurpose;
   kal_uint16 nPrevMaskDuration;
   kal_uint16 nMaskDuration;
   kal_uint16 nPostMaskDuration;
} MaskRecordT;

typedef  struct {
   kal_uint8 nValueId;
   kal_uint8 nMaskCount;
   MaskRecordT Mask[MAX_MASKCOUNT];
} PagingMaskAttribT;

typedef  struct
{
    kal_uint16 map;   /* Attrib map */
    kal_uint8 nSubType;
    kal_uint8 nTransactionId;
    SmallSlotCycleAllowedT SmallSlotCycleAllowed;
    kal_uint16 AccessHashingClassMask;
    PreferredControlChannelCycleAttribT attribPrefCtrlChCycle;
    SlottedModeAttribT attribSlottedMode;
    PagingMaskAttribT attribPagingMask;
} IdpAttribRecT;

/*SearchParameters */
typedef struct
{
   kal_uint8               ValueId;
   kal_uint8               PilotIncrement;               /* 4 bits*/
   kal_uint8               SearchWinActive;              /* 4 bits*/
   kal_uint8               SearchWinNghbr;
   kal_uint8               SearchWinRemaining;
} RupAttrSearchParamsT;

/* SetManagementChannelparameters*/
typedef  struct
{
   kal_uint8                 ValueId;
   kal_uint8                 PilotAdd;
   kal_uint8                 PilotComp;
   kal_uint8                 PilotDrop;
   kal_uint8                 PilotDropTimer;
   kal_uint8                 DynamicThresholds;
   kal_uint8                 SoftSlope;
   kal_int8                  AddIntercept;
   kal_int8                  DropIntercept;
   kal_uint8                 NghbrMaxAge;
} RupAttrSetManageChanParamsT;

/*SupportedChannel attribute record*/
typedef struct
{
   kal_uint8                 ValueId;
   kal_uint8                 BandClassCount;
} RupAttrSuppChannRecT;

typedef struct/*Attribute record*/
{
   kal_uint8                                    SubType;
   kal_uint8                                    AttrSetManOverrideAllow;
   kal_uint8                                    AttrRouteUpdateRadiusMult;
   kal_int16                                    AttrRouteUpdateRadiusAdd;
   kal_uint8                                    AttrSupportRouteUpdateEnh;
   RupAttrSearchParamsT                     SearchParms;
   RupAttrSetManageChanParamsT              SetManSameChParms;
   RupAttrSetManageChanParamsT              SetManDiffChParms;
   RupAttrSuppChannRecT                     SupChanRec;
} RupCfgDataT;

typedef  struct {
   kal_uint8 map;   /* Attrib map */
   kal_uint8 nSubType;
   kal_uint8 nTransactionId;
   kal_uint8 OverheadCachePeriod;
   kal_uint8 RouteUpdateTriggerCodeListSize;
} OmpAttribRecT;

typedef enum
{
  /*eFACAuthKey = 0, 
  eRACAuthKey,
  eFACEncKey,
  eRACEncKey,
  eFPCAuthKey,*/
  eRPCAuthKey=0,   /* current only use this one */
 /* eFPCEncKey,
  eRPCEncKey,*/
  eKeysCount
}ESubKey;

typedef struct
{
  kal_uint8 Number[128];
} SlcDHKepSKeyT;

typedef struct
{
  kal_uint8 Number[20];
} SlcDHKepKeyT;

/*For DHKEY computing keys*/
typedef  struct 
{
  SlcDHKepSKeyT SKey;    /* Session Key */
  SlcDHKepKeyT Keys[eKeysCount];/* FACAuthKey, RACAuthKey, FACEncKey, RACEncKey, FPCAuthKey, RPCAuthKey, FPCEncKey, RPCEncKey */
} SlcDHKEPKeysT;

typedef struct
{
  kal_uint8 DHKepKeyLen;
} SlcDHKepAttriT;

/* this is the session data to save into personality */
typedef struct
{
  SlcDHKEPKeysT   DHKepKeys;      /* DHKep SKey, FACAuthKey, RACAuthKey, FACEncKey, RACEncKey, FPCAuthKey, RPCAuthKey, FPCEncKey, RPCEncKey */ 
  SlcDHKepAttriT    DHKepAttribute;    /* DHKep configuration attributes */
} SlcKepInfoT;

#define MAX_KEY_LENGTH_BYTES              128  //length of max key in bytes
#define SECTORID_LENGTH_BYTES 16      /* 128 bits*/

typedef struct{
   kal_uint16 bits;
   kal_uint8  value[MAX_KEY_LENGTH_BYTES];
} AuthKeyT;

typedef struct
{
   kal_uint8  SubType;
   kal_uint16 ShaACAuthKeyLen;
} RcpAuthAttriT;

typedef struct
{
   kal_uint8         AuthCfgReqTranId;
   kal_uint8         AuthHdrLen;
   AuthKeyT      ACAuthKey;
   RcpAuthAttriT AuthAttribute[2];
   kal_uint8         SectorID[SECTORID_LENGTH_BYTES];
} RcpAuthInfoT;

typedef enum
{
    PHY_PROT= 0,
    CCM_PROT,
    ACM_PROT,
    FTM_PROT,
    RTM_PROT,
    KEP_PROT,
    AUT_PROT,
    ENC_PROT,
    SEC_PROT,
    PCP_PROT,
    ALMP_PROT,
    INSP_PROT,
    IDP_PROT,
    CSP_PROT,
    RUP_PROT,
    OMP_PROT,
    SMP_PROT,  /* 0x10 */
    AMP_PROT,
    SCP_PROT,
    STR_PROT,
    STR0_APP,
    STR1_APP,
    STR2_APP,
    STR3_APP,
    VSP_PROT = 0x19,
    NUM_PROTOCOL_TYPE
} ProtocolTypeE;

/* 7.4.7.2.2 */
typedef struct {
  kal_uint8  numAppSubtypes;
  kal_uint16 appSubtypes[NUM_APP_SUBTYPE_SUPPORTED];
} DScpATSupportedAppSubtypesValueRecT;

/* DSCP attributes */
typedef struct {
  kal_uint16 ProtocolType[NUM_PROTOCOL_TYPE];  /* must be first in all subtypes */
  kal_uint16 SupportGAUPSessionConfigurationToken;
  kal_uint16 PersonalityCount;
  kal_uint16 SupportConfigurationLock;
  DScpATSupportedAppSubtypesValueRecT ATSupAppSubtypes;
} DScpAttributesDataT;

//Personality total struct---------start

/* 
The stream1, stream2, stream3 personality depends on 
the below parsubtype:
ParCfgAccessInCfg.parSubType
ParCfgServiceInCfg.parSubType
*/
typedef struct {
    ParServiceConfigDataT    bRevSevConfdata;
    PafRcpSessionConfigMsgT  bFwdSevConfdata;
} MfpaServStrCfgData; //MFPA_ServiceStream

typedef struct {
    kal_bool                     bEHRPDNego;
    ParServiceConfigDataT    bRevSevConfdata;  
    PafRcpSessionConfigMsgT  bFwdSevConfdata;
} EmfpaServStrCfgData; //EMFPA_ServiceStream

typedef union
{
    MfpaServStrCfgData   bMfpaCfgData;
    EmfpaServStrCfgData  bEmfpaCfgData;  
} StreamConfigAttribEnT;

/*
The below struct matches the DSCPProtToCommit[];
*/
typedef struct {
    kal_bool             pervalid;   //index of the personality valid
    CcmInfoT             ccmcfgdata;
    AcmAttributesT       acmcfgdata;
    FtmCfgDataT          ftmcfgdata;
    RtmCfgDataT          rtmcfgdata;  //rtm0, rtm3
    StreamConfigAttribT  strcfgdata;
    //kal_uint8            dummy;                     /* stream0 no configuration data */
    StreamConfigAttribEnT str1cfgdata;  //stream1,
    StreamConfigAttribEnT str2cfgdata;  //stream2
    StreamConfigAttribEnT str3cfgdata;  //stream3
    SmpConfigurateAttr   smpcfgdata;
    AmpConfigurateAttrT  ampcfgdata;
    AlmpAttribT          almpcfgdata;
    IdpAttribRecT        idpcfgdata;
    RupCfgDataT          rupcfgdata;
    OmpAttribRecT        ompcfgdata;
    SlcKepInfoT          kepcfgdata;
    RcpAuthInfoT         authcfgdata;
    kal_uint8            secsubtype[2];
    DScpAttributesDataT  scpcfgdata;
} DScpPersonality;
//Personality total struct---------end

#endif
