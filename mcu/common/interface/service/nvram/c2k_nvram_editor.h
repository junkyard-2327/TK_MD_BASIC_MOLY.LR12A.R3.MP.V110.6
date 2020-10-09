/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
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
*****************************************************************************/

/*****************************************************************************
 *
 * Filename:
 * ---------
 * 
 *
 * Project:
 * --------
 *   MAUI
 *
 * Description:
 * ------------
 * 
 *
 * Author:
 * -------
 * 
 *
 *============================================================================
 *             HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
 * removed!
 *
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
 * removed!
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/
#ifndef __C2K_NVRAM_EDITOR_H__
#define __C2K_NVRAM_EDITOR_H__

#ifndef NVRAM_NOT_PRESENT
#if defined (__C2K_RAT__)
#ifdef __cplusplus
extern "C"
{
#endif /* __cplusplus */ 

#ifdef GEN_FOR_PC
#include "c2k_nvram_def.h"

// Data Structure of Each LID

typedef struct
{
   uint8 data[PRL_MAX_SIZE];
}NvEditorPrlTableT;

typedef struct
{
   uint8 data[ERI_MAX_SIZE];
}NvEditorEriTableT;

typedef struct
{
   uint8 data[GPS_NV_SIZE];
}NvEditorGpsDataT;

typedef struct
{
   uint8 data[GPS_HASH_SIZE];
}NvEditorGpsHashDataT;

BEGIN_NVRAM_DATA

//add LID_BIT VER_LID here

/***************************************************************************************************
* LID_NAME
*      NVRAM_EF_C2K_PSW_NAM1_LID
* DESCRIPTION
*      Store PSW NAM DATA in NVRAM.
* INFORMATION
*     Can OTA Reset: Yes
*     Update Scenario: can be updated by ELT
****************************************************************************************************/
LID_BIT VER_LID(NVRAM_EF_C2K_PSW_NAM1_LID)
PswIs95NamT * NVRAM_EF_C2K_PSW_NAM1_TOTAL
{
    ESN:"Electronic Serial Number, uniquely identifying the mobile station equipment"{};
    SCMp:"Station Class Mark for each band, An identification of certain characteristics of a mobile station"{};
    SLOT_CYCLE_INDEXp:"preferred slot cycle index"{};
    MOB_FIRM_REVp:"mobile firmware revision"{};
    MOB_MODELp:"Manufacturers model number"{};
    MOB_P_REVp:"Protocol revision number for each band"{};
    ValidZoneEntry:"indicates a valid ZONE_LIST entry"{};
    ZONE_LISTsp:"zone based registration list"{};
    ValidSidNidEntry:"indicates a valid SID_NID_LISTsp entry"{};
    SID_NID_LISTsp:"System/Network registration list"{};
    BASE_LAT_REGsp:"latitude from base last registered on"{};
    BASE_LONG_REGsp:"longitude from base last registered on"{};
    REG_DIST_REGsp:"registration distance from last base"{};
    LCKRSN_Psp:"lock code reason"{};
    MAINTRSNsp:"maintenance reason"{};
    DIGITAL_REGsp:"No longer used"{};
    PREF_BANDp:"No longer used"{};
    RESERVED0:"unused"{};
    PREF_BLOCK_BAND1p:"No longer used"{};
    PREF_SERV_BAND0p:"No longer used"{};
    SPCc:"left retry count"{};
    RESERVED1:"unused"{};
    RESERVED2:"unused"{};
    RESERVED3:"unused"{};
    COUNTsp:"Call History Parameter"{};
    ValidIMSImap:"indicates which IMSI was valid"{};
    IMSI_Mp:"MIN-based IMSI using the lower 10 digits to store the MIN"{};
    IMSI_Tp:"True IMSI not associated with MIN"{};
    ASSIGNING_TMSI_ZONE_LENsp:"The length of TMSI zone"{};
    ASSIGNING_TMSI_ZONEsp:"The administrative zone that allows the TMSI to be reused"{};
    TMSI_CODEsp:"The tmsi code has to be unique within a TMSI zone but may be reused in a different TMSI zone"{};
    TMSI_EXP_TIMEsp:"tmsi expiration timer"{};
    SIDp:"home system ids stored in NAM"{};
    NIDp:"home network ids stored in NAM"{};
    NEG_SIDp:"negative system ids stored in NAM"{};
    NEG_NIDp:"negative network ids stored in NAM"{};
    MAX_SID_NID:"Max sid/nid pairs that can be stored in NAM"{};
    STORED_POS_SID_NID:"No of Pos sid/nid pairs stored in NAM"{};
    STORED_NEG_SID_NID:"No of Neg sid/nid pairs stored in NAM"{};
    ACCOLCp:"access overload class"{};
    MobTermMap:"receive mobile terminated calls"{};
    BCAST_ADDR_LENp:"broadcast address length"{};
    BCAST_ADDRp:"broadcast address data"{};
    SPCp:"Service Programming Code"{};
    OTA_Capability_Map:"The capability which can be modified by OTA"{};
    MDN_NUM_DIGITS:"The digits number of Mobile Directory Number"{};
    Mdn:"Mobile directory number"{};
    HOME_SIDp:"home sid for analog system support"{};
    EXp:"extended address support for analog"{};
    FIRSTCHPp:"first paging channel for analog"{};
    DTXp:"Analog DTX Option"{};
    FCCA:"Analog Custom Control Channel Set A"{};
    LCCA:"Analog Custom Control Channel Set A"{};
    FCCB:"Analog Custom Control Channel Set B"{};
    LCCB:"Analog Custom Control Channel Set B"{};
    NXTREGsp:"Analog Location and Registration Indicators"{};
    SIDsp:"Analog system ids stored in NAM"{};
    LOCAIDsp:"Analog local area id"{};
    PUREGsp:"No longer used"{};
    CPCA:"CDMA Primary Channel A"{};
    CSCA:"CDMA Secondary Channel A"{};
    CPCB:"CDMA Primary Channel B"{};
    CSCB:"CDMA Secondary Channel B"{};
    RESERVED5:"unused"{};
    Auth_Capability_Map:"Akey Valid for Authentication"{};
    RESERVED6:"unused"{};
    SmsTlMaxRetry:"No longer used"{};
    UIM_ID:"The ID of User Identity Module"{};
    RoamingSetting:"Only for Sprint, whether allow service roaming on domestic system"{};
    SystemSelect:"system select type"{};
    FUTURE_EXPAND_FIELDs:"unused"{};
    Checksum:"checksum support"{};
};

/***************************************************************************************************
* LID_NAME
*      NVRAM_EF_C2K_PSW_MS_CAP_LID
* DESCRIPTION
*      Store PSW MS CAP DATA in NVRAM.
* INFORMATION
*     Can OTA Reset: Yes
*     Update Scenario: can be updated by ELT
****************************************************************************************************/
LID_BIT VER_LID(NVRAM_EF_C2K_PSW_MS_CAP_LID)
MsCapDb * NVRAM_EF_C2K_PSW_MS_CAP_TOTAL
{
    sr1Supported:"whether the MS supports Spreading Rate 1"{};
    sr3Supported:"whether the MS supports Spreading Rate 3"{};
    rcClass1Supported:"whether the MS supports Radio Configuration Class 1"{};
    rcClass2Supported:"whether the MS supports Radio Configuration Class 2"{};
    rcClass3Supported:"whether the MS supports Radio Configuration Class 3"{};
    UIEncryptionSupported:"whether the MS supports UI Encryption"{};
    enhancedRc:"whether the MS supports enhanced RC"{};
    Reserved1:"unused"{};
    revFchGatingReq:"whether the MS send reverse FCH gating request"{};
    stsSupported:"whether time space transmit diversity is supported"{};
    threeXCchSupported:"whether 3X CCH is supported"{};
    wllSupported:"whether wireless local loop is supported"{};
    soBitmapInd:"service option bitmap"{};
    Reserved:"unused"{};
    tieredServices:"whether tiered services is supported"{};
    qpchSupported:"QPCH, Quick Paging Channel Supported"{};
    slottedTimerSupported:"SLOTTED_TIMER, Slotted Timer Supported"{};
    chsSupported:"CHS_SUPPORTED, Control Hold Mode indicator"{};
    gatingRateSet:"GATING_RATE_SET, set of supported Reverse Pilot gating rates"{};
    extCapIncluded:"EXT_CAP_INCLUDED, Extended Capabilities Included Indicator"{};
    maboSupported:"MABO, Mobile Assisted Burst Operation Capability indicator"{};
    sdbSupported:"SDB, Short Data Burst supported Indicator"{};
    rlpCapBlopLen:"No longer used"{};
    rlpCapBlop:"RLP_CAP_BLOP, RLP capability information block of bits"{};
    otdSupported:"OTD_SUPPORTED, OTD Supported Indicator"{};
    fchSupported:"FCH_SUPPORTED, Fundemental Channel Supported Indicator"{};
    fchTypeSpecificFields:"FCH Type-specific fields, Fundemental Channel Capability Infornmation"{};
    dcchSupported:"DCCH_SUPPORTED, Dedicated Control Channel supported Indicator"{};
    dcchTypeSpecificFields:"DCCH Type-specific fields, Dedicated Control Channel Capability Information"{};
    forSchSupported:"FOR_SCH_SUPPORTED, Forward Supplemental Channel Supported"{};
    forSchTypeSpecificFields:"FOR_SCH, Type-specific fields, Forward Supplemental Channel Configuration Capability Information"{};
    revSchSupported:"REV_SCH_SUPPORTED, Reverse Supplemental Channel Supported"{};
    revSchTypeSpecificFields:"REV_SCH Type-specific fields, Reverse Supplemental Channel Configuration Capability Information"{};
    revSchDurationUnit:"Reverse Supplemental Channel duration unit"{};
    revSchDuration:"Reverse Supplemental Channel duration value"{};
    nonOctetAlignedData:"NONOCTET_ALIGNED_DATA Non-octet Aligned Data Block supported indicator"{};
    octetAlignedData:"OCTET_ALIGNED_DATA, Octet Aligned Data Block supported indicator"{};
    forFchMoSupport:"Forward Fundemental Channel Mux option supported"{};
    revFchMoSupport:"Reverse Fundemental Channel Mux option supported"{};
    forDcchMoSupport:"MO_FOR_DCCH, Forward Dedicated Control Channel Multiplex Options"{};
    revDcchMoSupport:"MO_REV_DCCH, Reverse Dedicated Control Channel Multiplex Options"{};
    forSchHighestRs1Mo:"The highest Rate Set 1 Forward Supplemental Channel Multiplex option supported"{};
    forSchHighestRs2Mo:"The highest Rate Set 2 Forward Supplemental Channel Multiplex option supported"{};
    revSchHighestRs1Mo:"The highest Rate Set 1 Reverse Supplemental Channel Multiplex option supported"{};
    revSchHighestRs2Mo:"The highest Rate Set 2 Reverse Supplemental Channel Multiplex option supported"{};
    geoLocType:"GEO_LOC, Geo-location Codes"{};
    Reserved2:"unused"{};
    Reserved3:"unused"{};
    encryptModeSupported:"ENCRYPTION_SUPPORTED (Basic/Basic&Enhanced)"{};
    opMode:"Mobile Stations Operation Mode"{};
    locPilotPhCap:"Location Services Pilot Ph capability"{};
    locGPSAcqCap:"Location Services GPS Acq capability"{};
    locLocCalcCap:"Location Services Calc capability"{};
    locTCPCap:"Location Services TCP capability"{};
    locMSOrigCap:"Location Services MS Originated capability"{};
    dcchOnlyPingPeriod:"DCCH Only Ping Time Out"{};
    dataReadyToSend:"DRS, data ready to send"{};
    channelIndicator:"CH_IND, channel indicator"{};
    pdchChmSupported:"Packet Data Channel Control Hold Mode supported"{};
    extendedChannelIndicator:"EXT_CH_IND, extended channel indicator"{};
    wllIncl:"WLL_INCL, wireless local loop included"{};
    wllDeviceType:"WLL_DEVICE_TYPE, wireless local loop device type"{};
    forPdchSupported:"FOR_PDCH_SUPPORTED, Forward Packet Data Channel Supported"{};
    ackDelay:"PDCH: ACK_DELAY, delay for the acknowledgment sent on the Reverse Acknowledgment Channel"{};
    numArqChan:"PDCH: NUM_ARQ_CHAN, Number of Physical Layer ARQ Channels supported"{};
    forPdchRcMap:"PDCH: FOR_PDCH_RC_MAP, Forward Packet Data Channel Radio Configuration information"{};
    chConfigSupMap:"PDCH: CH_CONFIG_SUP_MAP, Channel Configuration Supported Bitmap"{};
    sdbDesiredOnly:"Short data burst desired only"{};
    InfoRecCapabilityMap:"a capability information record"{};
    geoLocIncl:"the geo-location capabilities of the mobile station"{};
    checksum:"checksum support"{};
};

/********************************************************
*LID_NAME
*      NVRAM_EF_C2K_UICC_LID
*DESCRIPTION
*      Factory mode configuration for MD3.
*INFORMATION
*      Can OTA Reset: No
*      Update Scenario: This LID will updated via MSG_ID_UIM_SET_FACTORY_MODE_MSG
*********************************************************/
LID_BIT VER_LID(NVRAM_EF_C2K_UICC_LID)
UiccDbmDataT * NVRAM_EF_C2K_UICC_TOTAL
{
   FactoryMode: "Set MD3 to factory mode. KAL_TRUE: enable factory mode, KAL_FALSE: disable factory mode."{};
   DbmChvIccid: "Store ICCID and CHV1 data."{};
     DbmChvIccid.IsICCIDValid: "ICCID data valid. KAL_TRUE: valid, KAL_FALSE: invalid"{};
     DbmChvIccid.IsCHVValid: "CHV1 data valid. KAL_TRUE: valid, KAL_FALSE: invalid"{};
     DbmChvIccid.CHVData: "CHV1 data"{};
     DbmChvIccid.ICCIDData: "ICCID data"{};
};

/********************************************************
*LID_NAME
*      NVRAM_EF_C2K_UICC_CARD_DATA_LID
*DESCRIPTION
*      ICCID/CHV pair for each sim
*INFORMATION
*      Can OTA Reset: No
*      Update Scenario: This LID will updated when CHV(PIN) is successfully Verified/Changed/Unblocked/Synced from MD1
*********************************************************/
LID_BIT VER_LID(NVRAM_EF_C2K_UICC_CARD_DATA_LID)
UiccDbmCardDataT * NVRAM_EF_C2K_UICC_CARD_DATA_TOTAL
{
   DbmChvIccid: "ICCID/CHV pair info of each card"{};
     DbmChvIccid.IsICCIDValid: "ICCID data valid. KAL_TRUE: valid, KAL_FALSE: invalid"{};
     DbmChvIccid.IsCHVValid: "CHV1 data valid. KAL_TRUE: valid, KAL_FALSE: invalid"{};
     DbmChvIccid.CHVData: "CHV1 data"{};
     DbmChvIccid.ICCIDData: "ICCID data"{};
};

/***************************************************************************************************
* LID_NAME
*      NVRAM_EF_C2K_PSW_NAM2_LID
* DESCRIPTION
*      Store PSW NAM DATA in NVRAM.
* INFORMATION
*     Can OTA Reset: Yes
*     Update Scenario: can be updated by ELT
****************************************************************************************************/
LID_BIT VER_LID(NVRAM_EF_C2K_PSW_NAM2_LID)
PswIs95NamT * NVRAM_EF_C2K_PSW_NAM2_TOTAL
{
    ESN:"Electronic Serial Number, uniquely identifying the mobile station equipment"{};
    SCMp:"Station Class Mark for each band, An identification of certain characteristics of a mobile station"{};
    SLOT_CYCLE_INDEXp:"preferred slot cycle index"{};
    MOB_FIRM_REVp:"mobile firmware revision"{};
    MOB_MODELp:"Manufacturers model number"{};
    MOB_P_REVp:"Protocol revision number for each band"{};
    ValidZoneEntry:"indicates a valid ZONE_LIST entry"{};
    ZONE_LISTsp:"zone based registration list"{};
    ValidSidNidEntry:"indicates a valid SID_NID_LISTsp entry"{};
    SID_NID_LISTsp:"System/Network registration list"{};
    BASE_LAT_REGsp:"latitude from base last registered on"{};
    BASE_LONG_REGsp:"longitude from base last registered on"{};
    REG_DIST_REGsp:"registration distance from last base"{};
    LCKRSN_Psp:"lock code reason"{};
    MAINTRSNsp:"maintenance reason"{};
    DIGITAL_REGsp:"No longer used"{};
    PREF_BANDp:"No longer used"{};
    RESERVED0:"unused"{};
    PREF_BLOCK_BAND1p:"No longer used"{};
    PREF_SERV_BAND0p:"No longer used"{};
    SPCc:"left retry count"{};
    RESERVED1:"unused"{};
    RESERVED2:"unused"{};
    RESERVED3:"unused"{};
    COUNTsp:"Call History Parameter"{};
    ValidIMSImap:"indicates which IMSI was valid"{};
    IMSI_Mp:"MIN-based IMSI using the lower 10 digits to store the MIN"{};
    IMSI_Tp:"True IMSI not associated with MIN"{};
    ASSIGNING_TMSI_ZONE_LENsp:"The length of TMSI zone"{};
    ASSIGNING_TMSI_ZONEsp:"The administrative zone that allows the TMSI to be reused"{};
    TMSI_CODEsp:"The tmsi code has to be unique within a TMSI zone but may be reused in a different TMSI zone"{};
    TMSI_EXP_TIMEsp:"tmsi expiration timer"{};
    SIDp:"home system ids stored in NAM"{};
    NIDp:"home network ids stored in NAM"{};
    NEG_SIDp:"negative system ids stored in NAM"{};
    NEG_NIDp:"negative network ids stored in NAM"{};
    MAX_SID_NID:"Max sid/nid pairs that can be stored in NAM"{};
    STORED_POS_SID_NID:"No of Pos sid/nid pairs stored in NAM"{};
    STORED_NEG_SID_NID:"No of Neg sid/nid pairs stored in NAM"{};
    ACCOLCp:"access overload class"{};
    MobTermMap:"receive mobile terminated calls"{};
    BCAST_ADDR_LENp:"broadcast address length"{};
    BCAST_ADDRp:"broadcast address data"{};
    SPCp:"Service Programming Code"{};
    OTA_Capability_Map:"The capability which can be modified by OTA"{};
    MDN_NUM_DIGITS:"The digits number of Mobile Directory Number"{};
    Mdn:"Mobile directory number"{};
    HOME_SIDp:"home sid for analog system support"{};
    EXp:"extended address support for analog"{};
    FIRSTCHPp:"first paging channel for analog"{};
    DTXp:"Analog DTX Option"{};
    FCCA:"Analog Custom Control Channel Set A"{};
    LCCA:"Analog Custom Control Channel Set A"{};
    FCCB:"Analog Custom Control Channel Set B"{};
    LCCB:"Analog Custom Control Channel Set B"{};
    NXTREGsp:"Analog Location and Registration Indicators"{};
    SIDsp:"Analog system ids stored in NAM"{};
    LOCAIDsp:"Analog local area id"{};
    PUREGsp:"No longer used"{};
    CPCA:"CDMA Primary Channel A"{};
    CSCA:"CDMA Secondary Channel A"{};
    CPCB:"CDMA Primary Channel B"{};
    CSCB:"CDMA Secondary Channel B"{};
    RESERVED5:"unused"{};
    Auth_Capability_Map:"Akey Valid for Authentication"{};
    RESERVED6:"unused"{};
    SmsTlMaxRetry:"No longer used"{};
    UIM_ID:"The ID of User Identity Module"{};
    RoamingSetting:"Only for Sprint, whether allow service roaming on domestic system"{};
    SystemSelect:"system select type"{};
    FUTURE_EXPAND_FIELDs:"unused"{};
    Checksum:"checksum support"{};
};

/***************************************************************************************************
* LID_NAME
*      NVRAM_EF_C2K_SECURE_DATA_LID
* DESCRIPTION
*      Store SECURE DATA in NVRAM.
* INFORMATION
*     Can OTA Reset: Yes
*     Update Scenario: can be updated by OTA
****************************************************************************************************/
LID_BIT VER_LID(NVRAM_EF_C2K_SECURE_DATA_LID)
SecureDataStructT * NVRAM_EF_C2K_SECURE_DATA_TOTAL
{
    Revision:"Secure Data Revision ID"{};
    AKEY_NAM1:"NAM1, Binary Authentication Key for CAVE"{};
    SSDA_NAM1:"NAM1, Shared Secret Data A"{};
    SSDB_NAM1:"NAM1, Shared Secret Data B"{};
    AKEY_NAM2:"NAM2, Binary Authentication Key for CAVE"{};
    SSDA_NAM2:"NAM2, Shared Secret Data A"{};
    SSDB_NAM2:"NAM2, Shared Secret Data B"{};
    SPCp:"Service Programming Code"{};
    FutureExpansion:"unused"{};
    checkSum:"checksum support"{};
};

/***********************************************************
* LID_NAME
*    NVRAM_EF_C2K_DO_DATA_LID
*DESCRIPTION
*    C2K EVDO Database segments of interest are here, it is stored for inquire function   
*    It will be read once during task init, and most items are for internal test 
*INFORMATION
*    Can OTA Reset: Yes
*    Update Scenario: This LID could update when each item value changed, mianly for evdo prefer mode or eHRPD mode change    
***********************************************************/
LID_BIT VER_LID(NVRAM_EF_C2K_DO_DATA_LID)
ClcDoParmDataT * NVRAM_EF_C2K_DO_DATA_TOTAL
{
    DataSize:"data size of Do Parmeter struct"{}; 
    HybridMode:"Hybrid Mode info"{}; 
    PrefMode:"Prefer Mode info"{}; 
    PrefCCCycleEnable:"Prefer CCCycle feature Enable status"{}; 
    PrefCCCycle:"Prefer CCCycle"{};
    ScpForceRel0Config:"Scp Force Rel0 Config"{};
    NotDisturb:"Not Disturb Config"{};
    FtMacDrcGating:"FtMac DRC gating"{};
    LUPUnsolicitedEnable:"Unsolicited location update enable status"{}; 
    RxDiversityCtrl:"Rx Diversity Ctrl"{}; 
    Stream0Configuration:"Stream0 application Config value"{}; 
    Stream1Configuration:"Stream1 application Config value"{}; 
    Stream2Configuration:"Stream2 application Config value"{}; 
    Stream3Configuration:"Stream3 application Config value"{}; 
    SubtypeConfigData:"All EVDO protocols Subtype Config Data"{}; 
    T_Dual_Idle:"dual idle time"{}; 
    T_HRPD_ExtendedSC:"HRPD Extended Slot CCcycle"{}; 
    T_1x_ExtendedSC:"1x Extended Slot CCcycle"{}; 
    T_HRPD_Init:"HRPD init time"{}; 
    T_1x_Init:"1x init time"{}; 
    DOSystem:"internal use"{};
    eHrpdDisable:"ehrpd capability disable status"{}; 
    DfsIdleInterval:"idle state dfs interval time"{}; 
    DfsConnInterval:"connection state dfs interval time"{}; 
    DfsIdleNumChan:"idle state dfs channel number"{};
    DfsConnNumChan:"connection state dfs channel number"{}; 
    DfsIdleEcIoThresh:"idle state dfs EcIo Threshold"{};
    DfsConnEcIoThresh:"connection state dfs EcIo Threshold"{};
    Padings:"internal use"{};
};

/********************************************************************************************
* LID_NAME
*            NVRAM_EF_C2K_HLP_IPCOUNTERS_LID
*
* DESCRIPTION
*            This LID is no use now. 
*
* INFOMATION
*      Can OTA Reset: no
*      Update Scenario: no.
*********************************************************************************************/
LID_BIT VER_LID(NVRAM_EF_C2K_HLP_IPCOUNTERS_LID)
IPCounterStruct * NVRAM_EF_C2K_HLP_IPCOUNTERS_TOTAL
{
};


/********************************************************************************************
* LID_NAME
*      NVRAM_EF_C2K_PSW_MRU1_LID
* DESCRIPTION
*      1X MRU band/channel records are available if NAM_1 is Active.
* INFOMATION
*      Can OTA Reset: Yes
*      Update Scenario: This LID will update once during task init.
*********************************************************************************************/
LID_BIT VER_LID(NVRAM_EF_C2K_PSW_MRU1_LID)
CssDbmDataT * NVRAM_EF_C2K_PSW_MRU1_TOTAL
{
    CdmaBand:"Cdma Band class";
    FreqChan:"Frequency channel";   
};

/********************************************************************************************
* LID_NAME
*      NVRAM_EF_C2K_PSW_MRU2_LID
* DESCRIPTION
*      1X MRU band/channel records are available if NAM_2 is Active.
* INFOMATION
*      Can OTA Reset: Yes
*      Update Scenario: This LID will update once during task init.
*********************************************************************************************/
LID_BIT VER_LID(NVRAM_EF_C2K_PSW_MRU2_LID)
CssDbmDataT * NVRAM_EF_C2K_PSW_MRU2_TOTAL
{
    CdmaBand:"Cdma Band class";
    FreqChan:"Frequency channel";   
};

/********************************************************************************************
* LID_NAME
*      NVRAM_EF_C2K_DO_MRU_LID
* DESCRIPTION
*      DO MRU band/channel records.
* INFOMATION
*      Can OTA Reset: Yes
*      Update Scenario: This LID will update once during task init.
*********************************************************************************************/
LID_BIT VER_LID(NVRAM_EF_C2K_DO_MRU_LID)
CssDbmDataT * NVRAM_EF_C2K_DO_MRU_TOTAL
{
    CdmaBand:"Cdma Band class";
    FreqChan:"Frequency channel"; 
};

/********************************************************************************************
* LID_NAME
*      NVRAM_EF_C2K_CSS_1X
* DESCRIPTION
*      CSS 1X Parameters. most items are for internal test
* INFOMATION
*      Can OTA Reset: no
*      Update Scenario: This LID will update once during task init.
*********************************************************************************************/   
LID_BIT VER_LID(NVRAM_EF_C2K_CSS_1X_LID)
css1xDbmSegment * NVRAM_EF_C2K_CSS_1X_TOTAL
{
    data:"css1xDbmParameters data"{};    
      data.mpssPilotStrengthThresh: "1x pilot strength threshold used for MPSS reselection"{};
      data.tBsr:"1X MPSS duration";
      data.reservedTBsr:"reserved for possible expansion of TBsr";
      data.tAvoidance:"1X avoidance duration for the given avoidance type";   
      data.reservedTAvoid:"not used now"; 
      data.manualAvoid1XSys:"avoided 1x system"; 
      data.tPsDelay:"1x delay PS timer duration"{}; 
      data.tEmergencySysLostScan:"emergency system lost scan timer duration"{}; 
      data.operSidNid:"Operator SID/NID of the first MRU entry "{};  
    checksum:"checksum"{};
    padding:"padding"{}; 
};  


/********************************************************************************************
* LID_NAME
*      NVRAM_EF_C2K_CSS_DO
* DESCRIPTION
*      CSS DO Parameters. most items are for internal test
* INFOMATION
*      Can OTA Reset: no
*      Update Scenario: This LID will update once during task init.
*********************************************************************************************/
LID_BIT VER_LID(NVRAM_EF_C2K_CSS_DO_LID)
cssDODbmSegment * NVRAM_EF_C2K_CSS_DO_TOTAL
{
    data:"cssDODbmParameters data"{};    
      data.mpssPilotStrengthThresh: "not used any more"{};
      data.tBsr:"DO MPSS duration";
      data.reservedTBsr:"reserved for possible expansion of TBsr"{};
      data.tAvoidance:"not used any more"{};
      data.reservedTAvoid:"not used any more"{};
    checksum:"check sum"{};
    padding:"padding"{};   
};

/********************************************************************************************
* LID_NAME
*      NVRAM_EF_C2K_CSS_MISC
* DESCRIPTION
*      CSS Misc Parameters. most items are for internal test
* INFOMATION
*      Can OTA Reset: no
*      Update Scenario: This LID will update once during task init.
*********************************************************************************************/
LID_BIT VER_LID(NVRAM_EF_C2K_CSS_MISC_LID)
cssMiscDbmSegment * NVRAM_EF_C2K_CSS_MISC_TOTAL
{
    data:"cssMiscDbmSegment data"{};
      data.chnlInfo: "frequency lock band/channel of 1X/DO"{};     
      data.roamIndForNonPrlSysButHomeInNam:"roam indicator for non-prl system but home system in NAM"{};
      data.homeEriValNum:"number of home ERI values";
      data.homeEriVals:"home ERI values"{};
      data.intlEriValNum:"the number of internation ERI values";
      data.intlEriVals:"internation ERI values"{};
    checksum:"check sum"{};
    padding:"padding"{};   
}; 

/***************************************************************************************************
* LID_NAME
*      NVRAM_EF_C2K_PSW_MISC_LID
* DESCRIPTION
*      Store PSW MISC DATA in NVRAM.
* INFORMATION
*     Can OTA Reset: Yes
*     Update Scenario: can be updated by AT/ELT
****************************************************************************************************/
LID_BIT VER_LID(NVRAM_EF_C2K_PSW_MISC_LID)
PswMiscT * NVRAM_EF_C2K_PSW_MISC_TOTAL
{
    StartupActiveNam:"indicates which NAM is active"{};
    PswFeatureFlags:"PSW module features to enable"{};
    PhyFeatureFlags:"physical layer features to enable"{};
    PswMiscEnableFlags:"PSW module Misc Enable Flags"{};
    pendingReg:"pending registration"{};
    PrefHomeMOSO:"Preferred service option for Home MO"{};
    PrefHomeMTSO:"Preferred service option for Home MT"{};
    PrefRoamMOSO:"Preferred service option for Roam MO"{};
    IS683NamLock:"Nam Lock"{};
    DfsEcIoThresh:"Different Frequency Search EcIo Threshold"{};
    qpchPilotEcIoThreshLow:"The low EcIo Threshold of Quick Paging Channel"{};
    qpchPilotEcIoThreshHigh:"The high EcIo Threshold of Quick Paging Channel"{};
    reserved_0:"unused"{};
    checksum:"checksum support"{};
};


/********************************************************************************************
* LID_NAME
*            NVRAM_EF_C2K_CUSTOMIZE_LID
*
* DESCRIPTION
*            This LID describes a customize feature:SMS Auto Registration. The realization is moved to AP side, not proceed at modem now.
*
* INFOMATION
*      Can OTA Reset: no 
*      Update Scenario: This LID can be updated by AT CMD if macro CHINATELECOM_SMS_REG_CP is defined.
*********************************************************************************************/
LID_BIT VER_LID(NVRAM_EF_C2K_CUSTOMIZE_LID)
ValCustomizedParmDataT * NVRAM_EF_C2K_CUSTOMIZE_TOTAL
{
    AutoReg:   "SMS Auto Registration feature support or not"{};
    RegMask:   "SMS Auto Registration Mask"{};
};

/********************************************************************************************
* LID_NAME
*            NVRAM_EF_C2K_HSPD_LID
*
* DESCRIPTION
*            This LID describes the UE's HSPD segment data.
*
* INFOMATION
*      Can OTA Reset: some parametes(SIP_NAI / SIP_DUN_NAI / AN_NAI / MN_NAI / MN_DUN_NAI) can be reset except SPRINT OP. 
*      Update Scenario: This LID will update once during task init. NumRegRetries,ActiveDmuRsaPublicKey, nPKOID,SIP_NAI, AN_NAI, MIPMode,ActiveProfile,T_Dormancy,PppUmCfg can be updated by ELT.
*********************************************************************************************/
LID_BIT VER_LID(NVRAM_EF_C2K_HSPD_LID)
HlpHspdSegData * NVRAM_EF_C2K_HSPD_TOTAL
{
   RRPTimeout:      "Timeout waiting for Registration Reply to MIP Registration Request"{};
   NumRegRetries:   "RRP MIP Registration Retry Attempts"{};
   RRA:              "Pre Re-registration backoff"{};
   Is801_IpAddr:    "IP Address for IS801 GPS protocal"{};
   Is801_PortNum:   "Port for IS801 GPS protocal"{};
   Is801_UserId: "user id for IS801 GPS protocal"{};
   Is801_Pswd:    "password for IS801 GPS protocal"{};
   Is801_CalledNumber:"called number for IS801 GPS protocal"{};

   MN_HA_AUTH:      "MIP HA authentication caculated mode,0-RFC2002, 1-RFC2002bis, 2-bypassHA"{};
   MN_HA_Auth_Algo: "MIP HA authentication caculated algorithm"{};
   MN_AAA_Auth_Algo:"MIP AAA authentication caculated algorithm"{};

   MN_Authenticator: "MN_Authenticator for MIP DMU, 24-bit random number"{};
   ActiveDmuRsaPublicKey: "current NV RSA Public Key Number, NVRAM_EF_C2K_DMUPUBKEY1_LID or NVRAM_EF_C2K_DMUPUBKEY2_LID"{};
   nPKOID: "Public Key Organization Identifier for MIP DMU"{};

   SIP_NAI: "NAI for SIP challenge"{};
   SIP_DUN_NAI:"DUN NAI for DUN SIP challenge"{};
   AN_NAI:"AN NAI for A12 Authentication"{};

   DormantHandoffOptSet:  "Enable or disable dormant handoff"{};
   DataScrmEnabled:        "supplemental channel supported or not"{};
   DataTrtlEnabled:        "Throttling control enable or not"{};
   PrefRc:                  "Preferred Radio Cfg. Default-RC3"{};
   DNS_PRI_IP_ADDR:        "Primary DNS Server IP Address"{};
   DNS_SEC_IP_ADDR:        "Secondary DNS Server IP Address"{};
   MIPMode:                 "Mobile Ip mode - SIP_ONLY, MIP_PREFER, MIP_ONLY"{};

   ActiveProfile:          "the active profile for MIP"{};
   NumProfiles:            "the total number of profile for MIP"{};
   VJCompEnabled:          "VJ Compression enable or not"{};
   HspdLocked:             "HSPD data Locked or not"{};
   LockCode:               "HSPD Lock Code"{};
   HspdNetworkMode:       "HSPD Network Or RelayMode"{};
   T_Dormancy:             "HSPD into dormancy tiemr"{};
   T_HRPD_Search:          "EVDO NW search timer, no use now"{};
   T_DO_Retry:             "EVDO connection retry timer"{};
   T_Rapid_Dormancy:       "HSPD into dormancy fast timer"{};
   T_ResDef_Dormancy:      "HSPD resume default dormancy timer, no use now"{};
   NumDeRegRetries:           "Mip De-registration retry numbers"{};
   MipReRegOnlyIfTraffic:    "Mip Re-registration only if Traffic or not, only SPRINT use it now"{};
   MipNaiEnabled:             "Mip NAI enable or not"{};
   DoTo1X_Enabled:             "EVDO fallback to 1xRTT enable or not"{};

   PppUmCfg:             "PPP UM PORT configuration"{};
       PppUmCfg.lcpReqTries: "LCP REQ try numbers"{};
       PppUmCfg.lcpNakTries: "LCP NAK try numbers"{};
       PppUmCfg.lcpRestartTimer: "LCP Restart timer"{};
       PppUmCfg.lcpTermTries: "LCP Terminate REQ try numbers"{};
       PppUmCfg.lcpTermTimer: "LCP Terminate timer"{};
       PppUmCfg.authRetries: "Authentiacation try numbers"{};
       PppUmCfg.authTimer: "Authentiacation timer"{};
       PppUmCfg.ncpReqTries: "NCP REQ try numbers"{};
       PppUmCfg.ncpNakTries: "NCP NAK try numbers"{};
       PppUmCfg.ncpReStrTimer: "NCP Restart timer"{};
       PppUmCfg.ncpTermTries: "NCP Terminate REQ try numbers"{};
       PppUmCfg.ncpTermTimer: "NCP Terminate timer"{};
       PppUmCfg.unused: "unused"{};

   PppRmCfg:             "PPP RM PORT configuration"{};   
       PppRmCfg.pppKeepAlive:   "PPP RM keep alive or not"{};
       PppRmCfg.pppDetect:      "PPP RM detect or not"{};
       PppRmCfg.lcpReqTries:    "LCP REQ try numbers"{};
       PppRmCfg.lcpNakTries:    "LCP NAK try numbers"{};
       PppRmCfg.lcpRestartTimer: "LCP Restart timer"{};
       PppRmCfg.lcpTermTries: "LCP Terminate REQ try numbers"{};
       PppRmCfg.lcpTermTimer: "LCP Terminate timer"{};
       PppRmCfg.ncpReqTries: "NCP REQ try numbers"{};
       PppRmCfg.ncpNakTries: "NCP NAK try numbers"{};
       PppRmCfg.ncpReStrTimer: "NCP Restart timer"{};
       PppRmCfg.ncpTermTries: "NCP Terminate REQ try numbers"{};
       PppRmCfg.ncpTermTimer: "NCP Terminate timer"{};
       PppRmCfg.unused: "unused"{};

   TcpCfg: "TCP configuration"{};   
       TcpCfg.tcpMtu: "TCP MTU"{};
       TcpCfg.tcpWinSize_1XRTT: "TCP Window Size for 1xRTT"{};
       TcpCfg.tcpWinSize_EVDO: "TCP Window Size for EVDO"{};
       TcpCfg.unused: "unused"{};
   Ipv6V4Mode: "IPv6v4 mode"{};

   Padding: "padding"{};
   ProfileData: "configue MIP related parameters"{};
};

/********************************************************************************************
* LID_NAME
*            NVRAM_EF_C2K_HSPD_SECURE_LID
*
* DESCRIPTION
*            This LID describes the UE's HSPD secure related data.
*
* INFOMATION
*      Can OTA Reset: no 
*      Update Scenario: This LID will update once during task init. SIP_PASSWORD,AN_PASSWORD,ProfileData can be updated by ELT.
*********************************************************************************************/
LID_BIT VER_LID(NVRAM_EF_C2K_HSPD_SECURE_LID)
HlpHspdSecureSegData * NVRAM_EF_C2K_HSPD_SECURE_TOTAL
{
    checkSum: "the checksum of hspd secure segment data"{};
    SIP_PASSWORD_LEN: "the length of Simple IP User Password"{};
    SIP_PASSWORD: "Simple IP User Password"{};
    AN_PASSWORD_LEN: "the length of AN Shared Secret"{};
    AN_PASSWORD: "AN Shared Secret"{}; 
    AKA_PASSWORD: "EAP AKA Shared Secret"{};
    Padding: "Padding"{};
    ProfileData: "Profile ID, MIP AAA Shared Secret and MIP HA Shared Secret"{};
};

/********************************************************************************************
* LID_NAME
*            NVRAM_EF_C2K_EHRPD_LID
*
* DESCRIPTION
*            This LID describes the UE's EHRPD data.
*
* INFOMATION
*      Can OTA Reset: no 
*      Update Scenario: This LID will update once during task init.
*********************************************************************************************/
#ifdef CBP7_EHRPD
LID_BIT VER_LID(NVRAM_EF_C2K_EHRPD_LID)
HlpEHrpdSegDataT * NVRAM_EF_C2K_EHRPD_TOTAL
{
    AkaProfileData: "EAP AKA Authentication parameters"{};    
        AkaProfileData.NAI: "EAP AKA NAI"{};
        AkaProfileData.AcessNetworkId: "EAP AKA Acess Nw ID"{};
        AkaProfileData.OP: "EAP AKA OP"{};
        AkaProfileData.SQN: "EAP AKA SQN"{};
    pcmt_val_ehrpd: "PPP Partial Context Maintenance timer eHRPD: standalone eHRPD scenario. Unit: second."{};
    pcmt_val_irat: "PPP Partial Context Maintenance timer eHRPD: LTE IRAT transition scenario. Unit: second."{};
};
#endif

/********************************************************************************************
* LID_NAME
*      NVRAM_EF_C2K_PRL1
* DESCRIPTION
*      NVRAM PRL data when can not use UIM PRL data, saved in NAM 1
* INFOMATION
*      Can OTA Reset: no
*      Update Scenario: This LID will update once during task init.
*********************************************************************************************/
LID_BIT VER_LID(NVRAM_EF_C2K_PRL1_LID)
NvEditorPrlTableT * NVRAM_EF_C2K_PRL1_TOTAL
{
    data:"NVRAM PRL data"{};
};

/********************************************************************************************
* LID_NAME
*      NVRAM_EF_C2K_PRL2
* DESCRIPTION
*      NVRAM PRL data when can not use UIM PRL data, saved in NAM 2
* INFOMATION
*      Can OTA Reset: no
*      Update Scenario: This LID will update once during task init.
*********************************************************************************************/
LID_BIT VER_LID(NVRAM_EF_C2K_PRL2_LID)
NvEditorPrlTableT * NVRAM_EF_C2K_PRL2_TOTAL
{
    data:"NVRAM PRL data"{};
};

/********************************************************************************************
* LID_NAME
*      NVRAM_EF_C2K_ATC_PARMS
* DESCRIPTION
*      C2K ATC PARMS is used to saved ATC and VAL configure information.
* INFOMATION
*      Can OTA Reset: no
*      Update Scenario: This LID can be updated by AT command and Meta.
*********************************************************************************************/
LID_BIT VER_LID(NVRAM_EF_C2K_ATC_PARMS_LID)
AtcDbmBinDataT * NVRAM_EF_C2K_ATC_PARMS_TOTAL
{
    ParamSetFlag:"not used"{};
    C109Parameter:"controls the Data Carrier Detect(DCD) signal"
        {
            C109Parameter:8 ""
            {
                0x00:"DCD always on";
                0x01:"DCD mathces state of remote modem's data carrier";
                0x02:"wink indicator on channel disconnect";
            };
        };

    CADParameter:"not uesed"{};
    CBCParameter:"Battery charge status and charge capacity"{};
        CBCParameter.bcs:""
        {
            bcs:8"battery charge status"
            {
                0x00:"MT2 powered by battery";
                0x01:"MT2 connected to external power";
                0x02:"battery status not available";
                0x03:"Recognized power fault, Calls inhibited";
            };
        };
        
        CBCParameter.bcl:"Remaining battery capacity, 0 ~ 100 mapping to 0% ~ 100%"{};
    CBIPParameter:" base station IP address"{};  
    CDRParameter:"+CDR intermediate result code whether or not will be transmitted by MT3"{};
    CDSParameter:"extend-format compound parameter control the V.42bis data comression on UM interface"{};
        CDSParameter.direction:""
        {
            direction:8 "the desired direction of opreration of the Data compression function"
            {
                0x00:"negotiated, no compression";
                0x01:"transmit only";
                0x02:"receive only";
                0x03:"accept any direction";
            };
        };
        CDSParameter.compressionNegotiation:"whether or not the DCE should continue ot operate if the desired result is not obtained"{};
        CDSParameter.maxDict:"the maximum number of dictionary entries which should be negotiated"{};
        CDSParameter.maxString:"the maximum string length to be negotiated, max value is 250"{};
    CFCParameter:"the mode of the Um interface fax compression"{};
    CMIPParameter:"not uesed currently"{};
    CMUXParameter:"the value of the select Multiplex Option parameter"{};
    CPERParameter:"the switch packet call envet reporting, 0: disable, 1: enable"{};
    CPSParameter:"the service option to be used for packet data serivce, default SO is 59"{};
    CPSRParameter:"whether or not enable packet call state reproting,0: disable, 1:enbable"{};
    CQDParameter:"command state inactivity timer length, default value is 0x0A"{};
    CRCParameter:"Whether or not enable cellular result codes, 0:disable; 1:enable "{};
    CRMParameter:"the Rm interface protocol"{};
    CSQParameter:"the Received Signal Quality parameters"{};
        CSQParameter.fer:"the frame error rate"{};
        CSQParameter.sqm:"signal quality measture"{};
    CSSParameter:" the Serving System parameters,contained band,sid and bandclass information of serving Cell, it is not used now."{};
        CSSParameter.bandClass:""{};
        CSSParameter.band:""{};
        CSSParameter.sid:""{};
    CTAParameter:"the value of the Um Packet Data Inactivity Timer length"{};
    CXTParameter:"decide how to process the unrecognized commands, 0:Do not pass unregcognized AT cmd, 1:open transport layer connection and pass unregcognized AT cmd"{};
    C108Parameter:"it not used now."{};
    DParameter:"the current value of Circuit 108 Behavior parameter."{};
    DialTypeParameter:"the current value of the Dial Type parameter. This parameter is uploaded to the IWF as either a ATT or ATP command."{};
    DRParameter:"whether or not enable Data Compressiong reporting"{};
    DSParameter:"extend-format compound parameter control the V.42bis data comression on UM interface"{};
        DSParameter.direction:""
        {
            direction:8 "the desired direction of opreration of the Data compression function"
            {
                0x00:"negotiated, no compression";
                0x01:"transmit only";
                0x02:"receive only";
                0x03:"accept any direction";
            };
        };
        DSParameter.compressionNegotiation:"whether or not the DCE should continue ot operate if the desired result is not obtained"{};
        DSParameter.maxDict:"the maximum number of dictionary entries which should be negotiated"{};
        DSParameter.maxString:"the maximum string length to be negotiated, max value is 250"{};
    EParameter:"whether or not the modem echoes characters for ench AT command channel";
    EBParameter:"the valule of control the manner of V.42 operation on the PSTN link"{};
        EBParameter.breakSelection:"type of break to be signaled to remote DCE"{};
        EBParameter.timed:"V.42 L-SIGNAL shall or not indicate break length"{};
        EBParameter.defaultLen:"Default break length, in 10 msec units"{};
    EFCSParameter:"Control the use of the 32-bit fram check sequence option"{};
    ERParameter:"whether or not +ER: intermediate result code is transmitted from IWF over the Um interface"{};
    ESParameter:"containing Error Control Selection parameters"{};
        ESParameter.origRqst:"the initial requested mode of operation"
        {
            origRqst:8""
            {
                0x00:"direct mode";
                0x01:"intiate call with buffered mode only";
                0x02:"intiate V.42 without detection Phase";
                0x03:"initiate alternative protocol";
            };
        };
        ESParameter.origFbk:"the acceptable fallback mode of operation."{};
        ESParameter.ansFbk:"the acceptable fallback mode of operation when the DCE is operating as answere."{};
    ESParameter:"the selctive repeat option"{}; 
    ETBMParameter:"the Call Termination Buffer Management"{};
        ETBMParameter.pendingTd:"how previously-transmitted data remaining"{};
        ETBMParameter.pendingRd:"how reviously-received data remaining"{};
        ETBMParameter.timer:"a maximum time length"{};
    FAAParameter:"control auto switching from class2 to class0, for call answering only"{};
    FAPParameter:"the Address and Polling Capabilities"{};
        FAPParameter.sep:""{};
        FAPParameter.sub:""{};
        FAPParameter.pwd:""{};
    FBOParameter:"the current value of the Phase C Data Bit Order"{};
    FBUParameter:"whether or not enable HDLC Frame Reporting"{};
    FCCParameter:"the DCE Capabilities(see IS-707.3, Table 7.3.1-1 and EIA-592, Table 14)"{};
        FCCParameter.vr:""{};
        FCCParameter.br:""{};
        FCCParameter.wd:""{};
        FCCParameter.ln:""{};
        FCCParameter.df:""{};
        FCCParameter.ec:""{};
        FCCParameter.bf:""{};
    FCLASSParameter:"the value of the Service Class Selection"{};
    FCQParameter:"the Copy Quality Checking parameters"{};
        FCQParameter.rq:"received copy quality checking mode"{};
        FCQParameter.tq:"Transmitted copy quality checking mode"{};
    FCRParameter:"the current value of the Capability to Receive parameter"{};
    FCTParameter:"the current value of the DTE Phase C Timeout parameter"{};
    FEAParameter:"he current value of the Phase C Received EOL Alignment"{};
    FFCParameter:"the Format Conversion parameter"{};
        FFCParameter.vrc:"vertical resolution"{};
        FFCParameter.dfc:"data format"{};
        FFCParameter.lnc:"page length"{};
        FFCParameter.wdc:"page width"{};
    FHSParameter:"Call Termination Status "{};
    FIEParameter:"whether or not enable procedure interrupt"{};
    FISParameter:"the Current Session Negotiation parameters"{};
        FISParameter.vr:"vertical resolution"{};
        FISParameter.br:"bit rate"{};
        FISParameter.wd:"page width"{};
        FISParameter.ln:"page length"{};
        FISParameter.df:"data compression"{};
        FISParameter.ec:"error correction"{};
        FISParameter.br:"binary file transfer"{};
        FISParameter.st:"scan time"{};
    FLOParameter:"the value of the Flow Control Selection"{}; 
    FLPParameter:"the value of the Indicate Document to Poll"{};
    FMSParameter:"the value of the Minimum Phase C Speed"{};
    FNRParameter:"the Negotiation Message Reporting Control"{};
        FNRParameter.rpr:"whether or not rueport the reciever parametes"{};
        FNRParameter.tpr:"whether or not rueport the transmitted parametes"{};
        FNRParameter.idr:"ID string should or not be report"{};
        FNRParameter.nsr:"non-standard frames whether report"{};
    FNSParameter:"the Nonstandard Frame FIF Octet String"{};
        FNSParameter.buf:"Octet string, in binary format."{};
        FNSParameter.len:"Length of buf, in octets."{};
    FPPParameter:"whether or not enable Packet Protocol"{};  
    FPRParameter:"Serial Port Rate Control value"{};
    FPSParameter:"fax page status"{};
    FRQParameter:"the Receive Quality Threshold"{};
        FRQParameter.cbl:"max tolerable number of consecutive bad lines"{};
        FRQParameter.pgl:"percentage of good line"{};
    FRYParameter:" ECM Retry Value"{};
    FSPParameter:" the Request to Poll parameter"{};
    IBCParameter:"enable or disable the in-band control service"{};
    ICFParameter:"the DTE-DCE Character Framing parameters"{};
        ICFParameter.format:""{};
        ICFParameter.parity:""{};
    IFCParameter:"the DTE-DCE Local Flow Control parameters"{};
        IFCParameter.dceByDte:"the method used by DTE, at receive data from DCE"{};
        IFCParameter.dteByDce:"the method uesd by DCE,at receive data from DTE"{};
    ILRRParameter:"the DTE-DCE Local Rate Reporting control"{};
    IPRParameter:"the Fixed DTE Rate"{};
    LParameter:"the Monitor Speaker Loudness value"{};
    MParameter:"the Monitor Speaker Mode "{};
    MRParameter:"the Modulation Reporting Control value"{};
    MSParameter:"the Modulation Selection Parameter."{};
        MSParameter.automode:""{};
        MSParameter.carrier:""{};
        MSParameter.maxRate:""{};
        MSParameter.maxRxRate:""{};
        MSParameter.minRate:""{};
        MSParameter.minRxRate:""{};
    MV18RParameter:"V.18 Reporting Control parameter"{};
    MV18SParameter:"the V.18 Selection parameters"{};
        MV18SParameter.dfltAnsMode:""{};
        MV18SParameter.fbkTimeEnable:""{};
        MV18SParameter.mode:""{};
    QParameter:"Result Code Suppression";
    S0Parameter:"the number of rings before automatically answering the call";
    S3Parameter:"the Command Line Termination return character control"{};
    S4Parameter:"the line feed character control"{};
    S5Parameter:"the backspace character control"{};
    S6Parameter:"the pause duration before blind dialing"{};
    S7Parameter:"the number of seconds to establish end-to-end data connection"{};
    S8Parameter:"the Comma Dial Modifier Time"{};
    S9Parameter:"the Carrier Detect Threshold Time,in increments of 0.1 seconds"{};
    S10Parameter:"the Automatic Disconnect Delay time, a second as unit"{};
    S11Parameter:"The DTMF tone duration and spacing in milliseconds"{};
    VParameter:"The response format with or without header characters <CR><LF>";
    XParameter:"the Result Code Selection and Call Progress Monitoring Control "{};
    DMUVParameter:"Mobile IP DMU Version"{};
    QCMIPParameter:"Mobile IP Preferred Mode."{};
    QCQNCParameter:"enable or disable circuit switched data QNC"{};
    QCMDRParameter:"data service option preference"{};
    CfgStr:"the Configuration String";
         CfgStr.StrChar:"Configuration String, it may be up to 248 characters"{};
    FdlStr:"the Dropped Fax Line String parameter.";
        FdlStr.StrChar:"dropped fax line string.";
    FliStr:"the Local String ID"{};
        FliStr.StrChar:"Local id string";
    FpaStr:"terminated Selective Polling Address"{};
        FpaStr.StrChar:"Selective Polling Address string";
    FpiStr:"terminated Local Polling ID String"{};
        FpiStr.StrChar:"Local Polling ID String";
    FpwStr:"terminated Password"{};
        FpwStr.StrChar:"Password string";
    FsaStr:"terminated Subaddress "{};
        FsaStr.StrChar:"subaddress string";
    GcapStr:"the Complete Capabilities parameter"{};
        GcapStr.StrChar:"the capability information text";
    GmiStr:"manufacturer identification"{};
        GmiStr.StrChar:"manufacturer identification information text";
    GmmStr:"mode identification"{};
        GmmStr.StrChar:"information text";
    GmrStr:"terminated Revision Identification "{};
        GmrStr.StrChar:"Revision Identification string";
    GoiStr:"terminated Global Object Identification "{};
        GoiStr.StrChar:"Global Object Identification string";
    GsnStr:"terminated Product Serial Number Identification "{};
        GsnStr.StrChar:"ESN string whithout double quotes";
    MaTbl:"the Modulation Automode Control"{};
        MaTbl.Carrier:"Modulation Selection carrier";
    HwvStr:"terminated Hardware version info"{};
        HwvStr.StrChar:"Hardware version info string";
    CMEEParameter:"disable or enable used final result code +CME ERROR:<err>"{};
    EctmMode:"configure the specific behavior to meet the requirement of specific conformance test"{};
    EclscMode:"enable or disable recognize the Test SIM card as a normal SIM card"{};
    VPMode:"enable or disable voice privacy mode"{};
    ActivedBand:"active band info"{};
        ActivedBand.ValActivedBandMask:"active band bit mask info"
        {
            ValActivedBandMask:32 "all the band which to need active used bit mapping format, See AT command +ECBANDCFG description of AT command Manual"
            {
                0xFFFFFFFF:"default value";
            };

        };
    stRegTypeTbl:"the Registration type information"{};
        stRegTypeTbl.regTypeArray:"saved Registration type";

    uPrefSo:"Pref Service opation"{};
    uPrefRc:"Pref fwd RC"{};
    bEvrcCap:"whether or not support EVRC capable"{};
    bEvrcbSupport:"whether or not enable EvrcB(SO68)"{};
    bEvrcSupport:"whether or not enable Evrc(SO3)"{};
    PrefMode:"Pref Rat Mode"{};
    bSmsAckOff:"control to send SMS Ack or not"{};
};

/********************************************************************************************
* LID_NAME
*      NVRAM_EF_C2K_ERI1
* DESCRIPTION
*      NVRAM ERI data used for roaming indication when use NAM 1. 
* INFOMATION
*      Can OTA Reset: no
*      Update Scenario: This LID will update once during task init.
*********************************************************************************************/
LID_BIT VER_LID(NVRAM_EF_C2K_ERI1_LID)
NvEditorEriTableT * NVRAM_EF_C2K_ERI1_TOTAL
{
    data:"ERI data"{};
};

/********************************************************************************************
* LID_NAME
*      NVRAM_EF_C2K_ERI2
* DESCRIPTION
*     NVRAM ERI data used for roaming indication when use NAM 2
* INFOMATION
*      Can OTA Reset: no
*      Update Scenario: This LID will update once during task init.
*********************************************************************************************/
LID_BIT VER_LID(NVRAM_EF_C2K_ERI2_LID)
NvEditorEriTableT * NVRAM_EF_C2K_ERI2_TOTAL
{
    data:"ERI data"{};
};

/********************************************************************************************
* LID_NAME
*            NVRAM_EF_C2K_DMUPUBKEY1_LID
*
* DESCRIPTION
*            This LID describes the 1st set of parameters for Dynamic Mobile IP Key Update procedure.
*
* INFOMATION
*      Can OTA Reset: No
*      Update Scenario: This LID will update once during task init. nPKOID can be updated by ELT.
*********************************************************************************************/
LID_BIT VER_LID(NVRAM_EF_C2K_DMUPUBKEY1_LID)
HlpRSAPublicKeyInfoT * NVRAM_EF_C2K_DMUPUBKEY1_TOTAL
{
    hdrRSAPublicKeyInfo:"RSA public encryption parameters used to encrypt the MIP_Key_Data payload"{};    
        hdrRSAPublicKeyInfo.nPKOID:"Public Key Organization Identifier"{};
        hdrRSAPublicKeyInfo.nPKOI:"Public Key Organization Index"{};
        hdrRSAPublicKeyInfo.nPK_Expansion:"PK_Expansion: 8-bit field to enable possible expansion of PKOID or PKOI fields."{};
        hdrRSAPublicKeyInfo.nATVAndDMUV:"Algorithm Type and Version (ATV):4-bit identifier of the algorithm used, DMU Version (DMUV):4-bit identifier of DMU version"{};
    RSAPubKeyExponent:"RSA Public Key Exponent"{};
    RSAPubKeyModulus:"RSA Public Key Modulus"{};
};

/********************************************************************************************
* LID_NAME
*            NVRAM_EF_C2K_DMUPUBKEY2_LID
*
* DESCRIPTION
*            This LID describes the 2nd set of parameters for Dynamic Mobile IP Key Update procedure.
*
* INFOMATION
*      Can OTA Reset: No
*      Update Scenario: This LID will update once during task init. nPKOID can be updated by ELT.
*********************************************************************************************/
LID_BIT VER_LID(NVRAM_EF_C2K_DMUPUBKEY2_LID)
HlpRSAPublicKeyInfoT * NVRAM_EF_C2K_DMUPUBKEY2_TOTAL
{
    hdrRSAPublicKeyInfo:"RSA public encryption parameters used to encrypt the MIP_Key_Data payload"{};    
        hdrRSAPublicKeyInfo.nPKOID:"Public Key Organization Identifier"{};
        hdrRSAPublicKeyInfo.nPKOI:"Public Key Organization Index"{};
        hdrRSAPublicKeyInfo.nPK_Expansion:"PK_Expansion: 8-bit field to enable possible expansion of PKOID or PKOI fields."{};
        hdrRSAPublicKeyInfo.nATVAndDMUV:"Algorithm Type and Version (ATV):4-bit identifier of the algorithm used, DMU Version (DMUV):4-bit identifier of DMU version"{};
    RSAPubKeyExponent:"RSA Public Key Exponent"{};
    RSAPubKeyModulus:"RSA Public Key Modulus"{};
};

/********************************************************************************************
* LID_NAME
*            NVRAM_EF_C2K_DMUPUBKEY_ORG_LID
*
* DESCRIPTION
*            This LID describes parameters for Dynamic Mobile IP Key Update procedure. No use now.
*
* INFOMATION
*      Can OTA Reset: No
*      Update Scenario: No use.
*********************************************************************************************/
LID_BIT VER_LID(NVRAM_EF_C2K_DMUPUBKEY_ORG_LID)
HlpRSAPublicKeyInfoT * NVRAM_EF_C2K_DMUPUBKEY_ORG_TOTAL
{
};

/***********************************************************
* LID_NAME
*    NVRAM_EF_C2K_FILE_SESSION_LID
*DESCRIPTION
*    EVDO main session info are defined here, it is used for session restored function   
*INFORMATION
*    Can OTA Reset: Yes
*    Update Scenario: 1.This LID will update after evdo session Negotiation
*                     2.UATI update success after subnet change, then this LID will update during modem power down
***********************************************************/
LID_BIT VER_LID(NVRAM_EF_C2K_FILE_SESSION_LID)
SessionDataT * NVRAM_EF_C2K_FILE_SESSION_TOTAL
{
    KeepAliveParam:"keep alive parameter for evdo session"{};       
        KeepAliveParam.TSmpClose:""
        {
            TSmpClose:32 "Negotiation smp close time, 0x0000 to 0xffff minutes"
            {
                0x0CA8:"default is 54 hours";
                0x0000:"disable keep alive messages";                        
            };
        };
        KeepAliveParam.TSysTime:"The lastest updatedsystem time"{};
        
    AmpSessionData:"amp session configuration data"{};
        AmpSessionData.UATIAssignMessageSeq:"UATI Assignment Message Sequence"{};
        AmpSessionData.UATIColorCode:"UATI Color Code"{};
        AmpSessionData.UATISubnetMask:"UATI Subnet Mask"{};
        AmpSessionData.UpperOldUATILen:"Upper Old UATI Length"{};
        AmpSessionData.UATI:"Unitcast AT Identifier"{};
        AmpSessionData.ReducedSubnetMask:"Reduced Subnet Mask"{};
        AmpSessionData.UATIAvailable:""
        {
            UATIAvailable:8 "UATI Available or not"
            {
                0x0:"not Available";                        
                0x1:"Available";
            };
        };                
        
        AmpSessionData.OldUATIAssignMessageSeq:"Old UATI Assignment Message Sequence"{};
        AmpSessionData.OldUATIColorCode:"Old UATI Color Code"{};
        AmpSessionData.OldUATISubnetMask:"Old UATI Subnet Mask"{};
        AmpSessionData.OldUpperOldUATILen:"Old Upper Old UATI Length"{};
        AmpSessionData.OldUATI:"Old Unitcast AT Identifier"{};
        AmpSessionData.OldReducedSubnetMask:"Old Reduced Subnet Mask"{};
        AmpSessionData.OldUATIAvailable:""
        {
            OldUATIAvailable:8 "Old UATI Available or not"
            {
                0x0:"not Available";                        
                0x1:"Available";
            }; 
        }; 
        
        AmpSessionData.UATIReqTransID:"UATIReq TranscationID"{};
        AmpSessionData.AttriTransId:"Attribute TranscationID"{};
        AmpSessionData.InuseSubtype:""
        {
            InuseSubtype:8 "AMP Inuse Subtype"
            {
                0x0:"AMP_DEFAULT_SUBTYPE";
            }; 
        };
        AmpSessionData.SessionSeed:"SessionSeed"{};
        AmpSessionData.X0:"Latitude"{};
        AmpSessionData.Y0:"Longitude"{};

    SessionConfigurationToken:"open Session Configuration Token"{};        
    EhrpdFlag:"ehrpd session flag"{};
};

/***********************************************************
* LID_NAME
*    NVRAM_EF_C2K_FILE_SF_LID
*DESCRIPTION
*    All EVDO session Personality Data are defined here, it is used for session renego and restored function
*INFORMATION
*    Can OTA Reset: Yes
*    Update Scenario: This LID will update for each evdo session Personality Data Negotiation finished
***********************************************************/
LID_BIT VER_LID(NVRAM_EF_C2K_FILE_SF_LID)
DScpPersonality * NVRAM_EF_C2K_FILE_SF_TOTAL
{
    pervalid:"personality valid flag"{};
    
    ccmcfgdata:"ccm config data"{};
        ccmcfgdata.CcmCfgReqTranId:"CcmCfgReq TranscationId"{};
        ccmcfgdata.CcmAttribute:"Ccm Attribute config"{};

    acmcfgdata:"acm config data"{};
        acmcfgdata.APersistenceOverride:"Access persistence vector"{};
        acmcfgdata.TerminalAccessRateMax:"Max data rate at access terminal when transmit access probe"{};
        acmcfgdata.AccessTerminalClassOverride:"The access ternimal uses persistence probability value"{};
        acmcfgdata.ProbeSeqMax:"Max number of probe sequences, 1 to 15"{};
        acmcfgdata.ProbeBackoff:"Inter-probe backoff"{};
        acmcfgdata.ProbeSeqBackoff:"Inter-probe sequence backoff"{};
        acmcfgdata.DataOffset:"DataOffset"{};

    ftmcfgdata:"ftm config data"{};
        ftmcfgdata.FtmSubtype:""
        {
            FtmSubtype:1 "ftm Subtype value"
            {
                0x0:"FTM_SUBTYPE_DEFAULT";   
                0x1:"FTM_SUBTYPE_ENHANCE";
            };
        };
        ftmcfgdata.FtmAttributes:"Ftm Attributes"{};

    rtmcfgdata:"rtm config data"{};
        rtmcfgdata.rtmSubtype:""
        {
            rtmSubtype:2 "rtm Subtype value"
            {
                0x0:"RTM_SUBTYPE0";   
                0x1:"RTM_SUBTYPE1";
                0x2:"RTM_SUBTYPE2";   
                0x3:"RTM_SUBTYPE3";
            };
        };
        rtmcfgdata.RtmAttributes:"Rtm Attributes"{};

    strcfgdata:"stream config data"{};
        strcfgdata.stream0Application:""
        {
            stream0Application:16 "stream0 Application type"
            {
                0x00:"DSA";
            };
        };
        strcfgdata.stream1Application:""
        {
            stream1Application:16 "stream1 Application type"
            {
                0x01:"DPA_AccessStream";
                0x02:"DPA_ServiceStream";
                0x03:"TAP_SUBTYPE";               
                0x04:"MFPA_AccessStream";
                0x05:"MFPA_ServiceStream";
                0xFFFF:"NONE";
            };
        };               
        strcfgdata.stream2Application:""
        {
            stream2Application:16 "stream2 Application type"
            {
                0x01:"DPA_AccessStream";
                0x02:"DPA_ServiceStream";
                0x03:"TAP_SUBTYPE";
                0x04:"MFPA_AccessStream";
                0x05:"MFPA_ServiceStream";
                0x08:"EMFPA_AccessStream";
                0x09:"EMFPA_ServiceStream";
                0x0a:"ETAP_SUBTYPE";
                0xFFFF:"NONE";
            };               
        }; 
        strcfgdata.stream3Application:""
        {
            stream3Application:16 "stream3 Application type"
            {
                0x01:"DPA_AccessStream";
                0x02:"DPA_ServiceStream";
                0x03:"TAP_SUBTYPE";                
                0x04:"MFPA_AccessStream";
                0x05:"MFPA_ServiceStream";
                0xFFFF:"NONE";
            }; 
        };                 
 
    str1cfgdata:"stream1 config data"{};
        str1cfgdata.bMfpaCfgData:"stream1 MFPA Serving Stream config data"{};
        str1cfgdata.bEmfpaCfgData:"stream1 eMFPA Serving Stream config data"{};

    str2cfgdata:"stream2 config data"{};
        str2cfgdata.bMfpaCfgData:"stream2 MFPA Serving Stream config data"{};
        str2cfgdata.bEmfpaCfgData:"stream2 eMFPA Serving Stream config data"{};
    
    str3cfgdata:"stream3 config data"{};
        str3cfgdata.bMfpaCfgData:"stream3 MFPA Serving Stream config data"{};
        str3cfgdata.bEmfpaCfgData:"stream3 eMFPA Serving Stream config data"{};

    smpcfgdata:"smp config data"{};        
        smpcfgdata.TsmpClose:"Negotiation smp close time"{};

    ampcfgdata:"amp config data"{};
        ampcfgdata.bMaxNoMonitorDistance:""
        {
            bMaxNoMonitorDistance:1 "MaxNoMonitorDistance Attribute is enabled or not"
            {
                0x0:"enabled";
                0x1:"disabled";
            }; 

        };
        ampcfgdata.MaxNoMonitorDistance:"max allowed distance traveled without monitoring overhead, 0x0000 to 0xffff"{};
        ampcfgdata.bSupportGAUPMaxNoMonitorDistance:""
        {
            bSupportGAUPMaxNoMonitorDistance:1 "SupportGAUPMaxNoMonitorDistance Attribute is enabled or not"
            {
                0x0:"enabled";
                0x1:"disabled";
            }; 
        
        };            
        ampcfgdata.SupportGAUPMaxNoMonitorDistance:""
        {
            SupportGAUPMaxNoMonitorDistance:8 "Use of Generic Attribute Update Protocol to update MaxNoMonitorDistance is supported or not"
            {
                0x0:"not supported";
                0x1:"supported";
            }; 
        
        };
        ampcfgdata.bHardwareSeparableFromSession:""
        {
            bHardwareSeparableFromSession:1 "HardwareSeparableFromSession Attribute is enabled or not"
            {
                0x0:"enabled";
                0x1:"disabled";
            }; 
        
        };                 
        ampcfgdata.HardwareSeparableFromSession:""
        {
            HardwareSeparableFromSession:8 "The session can be extricated from hardwareID or not"
            {
                0x0:"cannot";
                0x1:"can";
            }; 
        
        };            
        ampcfgdata.bReducedSubnetMaskOffset:""
        {
            bReducedSubnetMaskOffset:1 "ReducedSubnetMaskOffset Attribute is enabled or not"
            {
                0x0:"enabled";
                0x1:"disabled";
            }; 
        
        };                 
        ampcfgdata.ReducedSubnetMaskOffset:"Difference between the subnet mask and the reduced subnet mask"{};               
        ampcfgdata.bSupportSecondaryColorCode:""
        {
            bSupportSecondaryColorCode:1 "SupportSecondaryColorCode Attribute is enabled or not"
            {
                0x0:"enabled";
                0x1:"disabled";
            }; 
        
        };                
        ampcfgdata.SupportSecondaryColorCode:""
        {
            SupportSecondaryColorCode:8 "Use of secondary color code is supported or not"
            {
                0x0:"not supported";
                0x1:"supported";
            }; 
        
        };                 
    
    almpcfgdata:"almp config data"{};
        almpcfgdata.SubType:"almp SubType vaule"{};
        almpcfgdata.AttriID:"almp AttriID ConnectionFailureReportEnable"{};
        almpcfgdata.AlmpValue:"almp AttriID ConnectionFailureReportEnable value"{};
    
    idpcfgdata:"idp config data"{};
        idpcfgdata.map:"idp Attribute bit map"{};
        idpcfgdata.nSubType:""
        {
            nSubType:8 "idp SubType value"
            {
                0x0:"IDP_DEFAULT";
                0x1:"IDP_ENHANCED";
            }; 
        };
        idpcfgdata.nTransactionId:"idp config TransactionId"{};
        idpcfgdata.SmallSlotCycleAllowed:""
        {
            SmallSlotCycleAllowed:2 "Small Slot Cycle Allowed or not"
            {
                0x0:"NOT ALLOWED";
                0x1:"ALLOWED";
                0x2:"RESERVED";
            }; 
        };
        idpcfgdata.AccessHashingClassMask:"AccessHashingClassMask"{};
        idpcfgdata.attribPrefCtrlChCycle:"PrefCtrlChCycle attribute"{};
        idpcfgdata.attribSlottedMode:"SlottedMode attribute"{};
        idpcfgdata.attribPagingMask:"PagingMask attribute"{};
    
    rupcfgdata:"rup config data"{};
        rupcfgdata.SubType:"rup SubType vaule"{};
        rupcfgdata.AttrSetManOverrideAllow:"SetManagementSameChannelParmeters and SetManagementdiffChannelParmeters acted or discarded"{};
        rupcfgdata.AttrRouteUpdateRadiusMult:"Multiplier for the route update radius in uints of 0.1"{};
        rupcfgdata.AttrRouteUpdateRadiusAdd:"addition to route update radius expressed as 2's complement calue"{};
        rupcfgdata.AttrSupportRouteUpdateEnh:"use of GAUP to update  attribute AttrRouteUpdateRadiusMult and AttrRouteUpdateRadiusAdd"{};
        rupcfgdata.SearchParms:"RUP Search Parmeters"{};
        rupcfgdata.SetManSameChParms:"RUP same Channnel Parmeters"{};
        rupcfgdata.SetManDiffChParms:"RUP diff Channnel Parmeters"{};
        rupcfgdata.SupChanRec:"Support Channel Record"{};
    
    ompcfgdata:"omp config data"{};
        ompcfgdata.map:"omp Attribute bit map"{}; 
        ompcfgdata.nSubType:"omp SubType value"{};
        ompcfgdata.nTransactionId:"omp config TransactionId"{};
        ompcfgdata.OverheadCachePeriod:"Overhead Cache Period in uint of 5.12 seconds"{};
        ompcfgdata.RouteUpdateTriggerCodeListSize:"size of RouteUpdateTriggerCodeList"{};
        
    kepcfgdata:"kep config data"{};
        kepcfgdata.DHKepKeys:"DHKepKeys"{}; 
        kepcfgdata.DHKepAttribute:"DHKep configuration attributes"{};

    authcfgdata:"auth config data"{};
        authcfgdata.AuthCfgReqTranId:"Auth ConfigReq TrancationId"{};
        authcfgdata.AuthHdrLen:"AuthHdrLen"{};
        authcfgdata.ACAuthKey:"ACAuthKey"{};
        authcfgdata.AuthAttribute:"Auth Attribute"{};
        authcfgdata.SectorID:"SectorID"{};
    
    secsubtype:"sec sub type data"{};
    
    scpcfgdata:"scp config data"{};
        scpcfgdata.ProtocolType:"scp Protocol Type value"{};
        scpcfgdata.SupportGAUPSessionConfigurationToken:"Support GAUP Session Configuration Token"{};
        scpcfgdata.PersonalityCount:"configed Personality Count, 0 to 4"{};
        scpcfgdata.SupportConfigurationLock:"Support Configuration Lock"{};
        scpcfgdata.ATSupAppSubtypes:"ATSupAppSubtypes list"{};        
};

#ifdef MTK_CBP_ENCRYPT_VOICE
/***************************************************************************************************
* LID_NAME
*      NVRAM_EF_C2K_PSW_DBM_CRYPT_DATA_LID
* DESCRIPTION
*      Store PSW CRYPT DATA in NVRAM.
* INFORMATION
*     Can OTA Reset: Yes
*     Update Scenario: can be updated by NW
****************************************************************************************************/
LID_BIT VER_LID(NVRAM_EF_C2K_PSW_DBM_CRYPT_DATA_LID)
PswDbmCryptDataT * NVRAM_EF_C2K_PSW_DBM_CRYPT_DATA_TOTAL
{
    KMCKeyVersion:"The version number of KMC key"{};
    KMCPublicKey:"KMC public key value"{};
    reserved_0:"unused"{};
    checksum:"checksum support"{};
};
#endif

/************************************************************
* LID_NAME
*	NVRAM_EF_C2K_VAL_SMS_CBS_LID
* DESCRIPTION
*	This LID records the configuration of cell broadcast message parameters,
* 	which includes switch on/off, language, and channel ID.
* INFOMATION
*	Can OTA Reset: Yes
*	Update Scenario: The LID will update when such AT command excuted,
*					AT+ECSCBLAN, AT+ECSCBCHA and AT+ECSCB.
************************************************************/
LID_BIT VER_LID(NVRAM_EF_C2K_VAL_SMS_CBS_LID)
ValSmsCbsInfoT* NVRAM_EF_C2K_VAL_SMS_CBS_TOTAL
{
	CbsState:"FALSE, CBS off; TRUE, CBS on"
	{
	};
	LanMask:"lanuage bitmap"
	{
	};
	ChaMask:"channels bitmap"
	{
	};
	CmasMask:"cmas bitmap"
	{
	};
};

/***************************************************************************************************
* LID_NAME
*      NVRAM_EF_C2K_MOBILE_ID_LID
* DESCRIPTION
*      Store MOBILE ID DATA in NVRAM.
* INFORMATION
*     Can OTA Reset: Yes
*     Update Scenario: can be updated by AT/ELT/Meta
****************************************************************************************************/
LID_BIT VER_LID(NVRAM_EF_C2K_MOBILE_ID_LID)
PswMobileIDT * NVRAM_EF_C2K_MOBILE_ID_TOTAL
{
    mobileIdType:"mobile identification type"{};
    value:"mobile identification value"{};
};

/********************************************************************************************
* LID_NAME
*      NVRAM_EF_C2K_FILE_GPS_LID
* DESCRIPTION
*      This LID stores GPS related information.
* INFOMATION
*      Can OTA Reset: NO
*      Update Scenario: internal use.
*********************************************************************************************/
LID_BIT VER_LID(NVRAM_EF_C2K_FILE_GPS_LID)
GpsDbmDataParms* NVRAM_EF_C2K_FILE_GPS_TOTAL
{
	LocationMode: "location privacy mode"{};
	BaseSSD:"not used any more"{};
	UTCTime: "not used any more"{}; 
	bAddrValid: "IP ADDR's validity"{};
	IPType:"0-ip4, 1-ipv6"{}; 
	Ipv4Addr: " IPV4 ADDR"{};
	Ipv6Addr: "IPV6 ADDR"{};
	
	bURLValid: "not used any more"{};
	URLAddr: "not used any more"{};
	
	PortNum: "not used any more"{};
	
	EphUpdateTime: "not used any more"{}; 
	AlmUpdateTime: "not used any more"{};
	ssdData: "not used any more"{};
	
	Status:" security validity"{};
	
	ValMpcAddr:" MPC server addr"{};
	ValMpcPort: "MPC server port"{};
	
	SIP_NAI: "not used any more"{};
	SIP_PASSWORD: "not used any more"{};
	
	RfDelay: "not used any more"{};

};

/************************************************************
* LID_NAME
*	NVRAM_EF_C2K_VAL_DANDCN_LID
* DESCRIPTION
*	This LID records flag which should send DAN message or not and 
*	service address number.
* INFOMATION
*	Can OTA Reset: Yes
*	Update Scenario: The LID will update when power off message received 
*	but Stop Dan message has not been sent.,
************************************************************/
LID_BIT VER_LID(NVRAM_EF_C2K_VAL_DANDCN_LID)
ValSmsDanDcnInfoT* NVRAM_EF_C2K_VAL_DANDCN_TOTAL
{
	isDanStopShallBeSend:"should send DAN message or not"
	{
	};
    aucVdnAddr:"DAN/DCN service address number"
    {
	};
};

/************************************************************
* LID_NAME
*	NVRAM_EF_C2K_SIDB_ITEM_ATCONFIG_LID
* DESCRIPTION
*	This LID records memory to be used when listing, reading and deleting messages.
* INFOMATION
*	Can OTA Reset: Yes
*	Update Scenario: The LID will update once during task init.
************************************************************/
LID_BIT VER_LID(NVRAM_EF_C2K_SIDB_ITEM_ATCONFIG_LID)
ValMem1ValT* NVRAM_EF_C2K_SIDB_ITEM_ATCONFIG_TOTAL
{	
    mem1:"mem1 value"
    {
	};
};

/************************************************************
* LID_NAME
*	NVRAM_EF_C2K_SIDB_ITEM_MESSAGE_LID
* DESCRIPTION
*	This LID records Validity Period value.
* INFOMATION
*	Can OTA Reset: Yes
*	Update Scenario: The LID will update when AT+CSMP command excuted.
************************************************************/
LID_BIT VER_LID(NVRAM_EF_C2K_SIDB_ITEM_MESSAGE_LID)
ValVpValT* NVRAM_EF_C2K_SIDB_ITEM_MESSAGE_TOTAL
{	
    vp:"validity period value"
    {
	};
};

/************************************************************
* LID_NAME
*   NVRAM_EF_C2K_SIDB_ITEM_MANAGEMENT_CNIR_LID
* DESCRIPTION
*   This LID records memory to be used when enable or disable CNIR for SS service.
* INFOMATION
*   Can OTA Reset: Yes
*   Update Scenario: The LID will update once during task init.
************************************************************/
LID_BIT VER_LID(NVRAM_EF_C2K_SIDB_ITEM_MANAGEMENT_CNIR_LID)
ValCnirDataT* NVRAM_EF_C2K_SIDB_ITEM_MANAGEMENT_CNIR_TOTAL
{   
    enableCnir:"Enable/disable CNIR value for SS service"
    {
    };
};

/************************************************************
* LID_NAME
*   NVRAM_EF_C2K_VSIM_LID
* DESCRIPTION
*   This LID records memory to be used when MDVSIM is on.
* INFOMATION
*   Can OTA Reset: No
*   Update Scenario: The LID will update when AT+EC2KVSIMEF command excuted.
************************************************************/
LID_BIT VER_LID(NVRAM_EF_C2K_VSIM_LID)
UiccC2KVsimT * NVRAM_EF_C2K_VSIM_TOTAL
{
    VsimIccidValue:"vsim iccid value"{};
        VsimIccidValue.FcpData:"FCP for iccid"{};
        VsimIccidValue.IccidData:"Data for iccid"{};
    VsimEprlValue:"vsim eprl value"{};
        VsimEprlValue.FcpData:"FCP for eprl"{};
        VsimEprlValue.EprlData:"Data for eprl"{};
    VsimImsiMVale:"vsim imsim value"{};
        VsimImsiMVale.FcpData:"FCP for imsim"{};
        VsimImsiMVale.ImsiData:"Data for imsim"{};
    VsimImsiTVale:"vsim imsit value"{};
        VsimImsiTVale.FcpData:"FCP for imsit"{};
        VsimImsiTVale.ImsiData:"Data for imsit"{};
    VsimAdValue:"vsim ad value"{};
        VsimAdValue.FcpData:"FCP for ad"{};
        VsimAdValue.AdData:"Data for ad"{};
    VsimUimidValue:"vsim uimid value"{};
        VsimUimidValue.FcpData:"FCP for uimid"{};
        VsimUimidValue.UimidData:"Data for uimid"{};
    VsimAcclocValue:"vsim accloc value"{};
        VsimAcclocValue.FcpData:"FCP for accloc"{};
        VsimAcclocValue.AcclocData:"Data for accloc"{};
    VsimTermValue:"vsim term value"{};
        VsimTermValue.FcpData:"FCP for term"{};
        VsimTermValue.TermData:"Data for term"{};
    VsimSsciValue:"vsim ssci value"{};
        VsimSsciValue.FcpData:"FCP for ssci"{};
        VsimSsciValue.SsciData:"Data for ssci"{};
    VsimNamlockValue:"vsim namlock value"{};
        VsimNamlockValue.FcpData:"FCP for namlock"{};
        VsimNamlockValue.NamlockData:"Data for namlock"{};
    VsimSfuimidValue:"vsim sfuimid value"{};
        VsimSfuimidValue.FcpData:"FCP for sfuimid"{};
        VsimSfuimidValue.SfuimidData:"Data for sfuimid"{};
    VsimMdnValue:"vsim mdn value"{};
        VsimMdnValue.FcpData:"FCP for mdn"{};
        VsimMdnValue.MdnData:"Data for mdn"{};
};


END_NVRAM_DATA
#endif	/*GEN FOR PC*/

#ifdef __cplusplus
}
#endif 
#endif /* __C2K_RAT__ */
#endif  /* !NVRAM_NOT_PRESENT */
#endif  /* __C2K_NVRAM_EDITOR_H__ */
