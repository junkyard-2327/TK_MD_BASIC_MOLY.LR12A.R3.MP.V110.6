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
 * c2k_nvram_def.c
 *
 * Project:
 * --------
 *   MAUI
 *
 * Description:
 * ------------
 *   This file is intends for NVRAM security customization.
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
 *
 * removed!
 *
 * removed!
 * removed!
 *
 * removed!
 *
 * removed!
 * removed!
 *
 * removed!
 * removed!
 *
 * removed!
 *
 * removed!
 * removed!
 *
 * removed!
 *
 * removed!
 * removed!
 *
 * removed!
 *
 * removed!
 * removed!
 *
 * removed!
 *
 * removed!
 * removed!
 *
 * removed!
 *
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

#ifndef NVRAM_NOT_PRESENT
#if defined (__C2K_RAT__)

#include "kal_general_types.h"
#ifdef NVRAM_AUTO_GEN
#include "nvram_auto_gen.h"
#endif

#include "nvram_enums.h"
#include "nvram_defs.h"

/*
 *   User Headers & Default value
 */
#include "c2k_nvram_def.h"
#include "c2k_nvram_editor.h"

// Default Values
extern kal_uint8 const NVRAM_EF_ZERO_DEFAULT[];
extern kal_uint8 const NVRAM_EF_FF_DEFAULT[];

ValSmsCbsInfoT gValSmsCbsInfo =
    {
        KAL_FALSE,
        0,
        {0},
        0
    };

const ValSmsDanDcnInfoT gstValSmsDanDcnInfoDft = {KAL_FALSE, ""};

/* DBM_UICC_SEG */
#ifdef MTK_DEV_BRING_UP_FACTORY_MODE
const UiccDbmDataT cpDataUiccDbmData = {KAL_TRUE};
#else
const UiccDbmDataT cpDataUiccDbmData = {KAL_FALSE};
#endif

/* DBM_SECURE_DATA_SEG */
const SecureDataStructT cpDataSecureData =
{
  0x0000, //Revision
  { 0x00000000, 0x00000001 },//AKEY_NAM1
  { 0x00, },//SSDA_NAM1
  { 0x00, },//SSDB_NAM1
  { 0x00000000, 0x00000001 },//AKEY_NAM2
  { 0x00, },//SSDA_NAM2
  { 0x00, },//SSDB_NAM2
  0x00000000,//SPCp
  { 0x00, }//FutureExpansion
};

/*C2K MDVSIM DATA*/
const UiccC2KVsimT C2KVsimValue = 
{
    /*VsimIccidValue*/
    {
        {
            0x0F, 0x00, 0x00, 0x00, 0x0A, 0x2F, 0xE2, 0x04, 0x00, 0x04, 0xFF, 0x44, 0x01, 0x02, 0x00, 0x00,
            0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
        },
        {
            0x98, 0x68, 0x30, 0x41, 0x00, 0X73, 0x01, 0x79, 0x41, 0x69
        }
    },
    /*VsimEprlValue*/
    {
        {
          0x0F, 0x00, 0x00, 0x00, 0x2C, 0x6F, 0x5A, 0x04, 0x00, 0x04, 0x00, 0x44, 0x01, 0x01, 0x00, 0x00, 
          0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
        },
       {
         0x00, 0x2C, 0x00, 0x09, 0x03, 0x81, 0x00, 0x80, 0x00, 0x01, 0x00, 0x0A, 0x06, 0x09, 0x90, 0x52,
         0x44, 0x01, 0x1B, 0x0B, 0x06, 0x09, 0x90, 0x52, 0x44, 0x00, 0x25, 0x40, 0x40, 0x00, 0x00, 0x00,
         0x03, 0x01, 0xC0, 0x38, 0xE0, 0x08, 0x00, 0x01, 0x80, 0xE0, 0xF0, 0xB0, 0xFF, 0xFF, 0xFF, 0xFF,
       }
    },
    /*VsimImsiMVale*/
    {
        {
            0x0F, 0x00, 0x00, 0x00, 0x0A, 0x6F, 0x22, 0x04, 0x00, 0x14, 0xFF, 0x14, 0x01, 0x02, 0x00, 0x00,
            0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
        },
        {
            0x00, 0x93, 0x03, 0x12, 0x93, 0x34, 0x5C, 0x80, 0x67, 0x01
        }
    },
    /*VsimImsiTVale*/
    {
        {
            0x0F, 0x00, 0x00, 0x00, 0x0A, 0x6F, 0x23, 0x04, 0x00, 0x14, 0xFF, 0x14, 0x01, 0x02, 0x00, 0x00,
            0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
        },
        {
            0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
        }
    },
    /*VsimAdValue*/
    {
        {
            0x0F, 0x00, 0x00, 0x00, 0x03, 0x6F, 0x43, 0x04, 0x00, 0x04, 0xFF, 0x44, 0x01, 0x02, 0x00, 0x00,
            0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
        },
        {
            0x00, 0x00, 0x00
        }
    },
    /*VsimUimidValue*/
    {
        {
            0x0F, 0x00, 0x00, 0x00, 0x08, 0x6F, 0x31, 0x04, 0x00, 0x0F, 0xFF, 0xFF, 0x01, 0x02, 0x00, 0x00,
            0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
        },
        {
            0x04, 0xA7, 0xE9, 0x91, 0x80, 0x00, 0x00, 0x00
        }
    },
    /*VsimAcclocValue*/
    {
        {
            0x0F, 0x00, 0x00, 0x00, 0x01, 0x6F, 0x2c, 0x04, 0x00, 0x14, 0xFF, 0x44, 0x01, 0x02, 0x00, 0x00,
            0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
        },
        {
            0x07
        }
    },
    /*VsimTermValue*/
    {
        {
            0x0F, 0x00, 0x00, 0x00, 0x01, 0x6F, 0x2d, 0x04, 0x00, 0x11, 0xFF, 0x44, 0x01, 0x02, 0x00, 0x00,
            0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
        },
        {
            0x07
        }
    },
    /*VsimSsciValue*/
    {
        {
            0x0F, 0x00, 0x00, 0x00, 0x01, 0x6F, 0x2e, 0x04, 0x00, 0x11, 0xFF, 0x44, 0x01, 0x02, 0x00, 0x00,
            0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
        },
        {
            0x02
        }
    },
    /*VsimNamlockValue*/
    {
        {
            0x0F, 0x00, 0x00, 0x00, 0x01, 0x6F, 0x35, 0x04, 0x00, 0x11, 0xFF, 0x44, 0x01, 0x02, 0x00, 0x00,
            0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
        },
        {
            0x00
        }
    },
    /*VsimSfuimidValue*/
    {
        {
            0x0F, 0x00, 0x00, 0x00, 0x01, 0x6F, 0x42, 0x04, 0x00, 0x14, 0xFF, 0x44, 0x01, 0x02, 0x00, 0x00,
            0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
        },
        {
            0x00
        }
    },
    /*VsimMdnValue*/
    {
        {
            0x0F, 0x00, 0x00, 0x00, 0x0B, 0x6F, 0x44, 0x04, 0x00, 0x11, 0xFF, 0x44, 0x01, 0x02, 0x01, 0x0B,
            0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
        },
        {
            0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
        }
    }
};
const PswMobileIDT pswMobileIdValue =
{
  0x0000, //mobileIdType
  0x0000000000000000, //value
};

const MsCapDb msCapDbValue =
{
    /* sr1Supported */
    PSW_DEFAULT_SR1_SUPPORTED,
    /* sr3Supported */
    PSW_DEFAULT_SR3_SUPPORTED,
    /* rcClass1Supported */
    PSW_DEFAULT_RC_CLASS_1_SUPPORTED,
    /* rcClass2Supported */
    PSW_DEFAULT_RC_CLASS_2_SUPPORTED,
    /* rcClass3Supported */
    PSW_DEFAULT_RC_CLASS_3_SUPPORTED,
    /* UIEncryptionSupported */
    PSW_DEFAULT_UI_ENCRYPT_SUPPORTED,
    /* enhancedRc */
    PSW_DEFAULT_ENHANCED_RC,
    /* Reserved1 */
    0,
    /* revFchGatingReq */
    PSW_DEFAULT_REV_FCH_GATING_REQ,
    /* stsSupported  */
    PSW_DEFAULT_STS_SUPPORTED,
    /* threeXCchSupported */
    PSW_DEFAULT_THREE_XC_CH_SUPPORTED,
    /* wl1Supported */
    PSW_DEFAULT_WLL_SUPPORTED,
    /* soBitmapInd */
    PSW_DEFAULT_SO_BITMAP_IND,
    /* Reserved1 */
    0,
    /* tieredServices */
    PSW_DEFAULT_TIERED_SERVICES,
    /* qpchSupported */
    PSW_DEFAULT_QPCH_SUPPORTED,
    /* slottedTimerSupported */
    PSW_DEFAULT_SLOTTED_TIMER_SUPPORTED,
    /* chsSupported */
    PSW_DEFAULT_CHS_SUPPORTED,
    /* gatingRateSet */
    PSW_DEFAULT_GATING_RATE_SET,
    /* extCapIncluded */
    PSW_DEFAULT_EXT_CAP_INCLUDED,
    /* maboSupported */
    PSW_DEFAULT_MABO_SUPPORTED,
    /* sdbSupported */
    PSW_DEFAULT_SDB_SUPPORTED,
    /* rlpCapBlopLen */
    PSW_DEFAULT_RLP_CAP_BLOP_LEN,
    /* rlpCapBlop */
    {PSW_DEFAULT_RLP_CAP_BLOP_MAX_NAK_ROUNDS_FWD, PSW_DEFAULT_RLP_CAP_BLOP_MAX_NAK_ROUNDS_REV},
    /* otdSupported */
    PSW_DEFAULT_OTD_SUPPORTED,
    /* fchSupported */
    PSW_DEFAULT_FCH_SUPPORTED,
    /* fchTypeSpecificFields */
    {PSW_DEFAULT_FCH_FRAME_SIZE, PSW_DEFAULT_FWD_FCH_LEN, PSW_DEFAULT_FWD_FCH_RC_MAP,
     PSW_DEFAULT_REV_FCH_LEN, PSW_DEFAULT_REV_FCH_RC_MAP},
    /* dcchSupported */
    PSW_DEFAULT_DCCH_SUPPORTED,
    /* dcchTypeSpecificFields */
    {PSW_DEFAULT_DCCH_FRAME_SIZE, PSW_DEFAULT_FWD_DCCH_LEN, PSW_DEFAULT_FWD_DCCH_RC_MAP,
     PSW_DEFAULT_REV_DCCH_LEN, PSW_DEFAULT_REV_DCCH_RC_MAP},
    /* forSchSupported */
    PSW_DEFAULT_FWD_SCH_SUPPORTED,
    /* forSchTypeSpecificFields */
    {PSW_DEFAULT_FWD_SCH_LEN, PSW_DEFAULT_FWD_SCH_RC_MAP, PSW_DEFAULT_FWD_SCH_NUM,
     PSW_DEFAULT_FWD_TURBO_SUPPORTED_SCH1, PSW_DEFAULT_FWD_TURBO_SUPPORTED_SCH2,
     PSW_DEFAULT_FWD_MAX_TURBO_BLOCK_SIZE,PSW_DEFAULT_FWD_CONV_SUPPORTED_SCH1,
     PSW_DEFAULT_FWD_CONV_SUPPORTED_SCH2,PSW_DEFAULT_FWD_MAX_CONV_BLOCK_SIZE},
    /* revSchSupported */
    PSW_DEFAULT_REV_SCH_SUPPORTED,
    /* revSchSupported */
    {PSW_DEFAULT_REV_SCH_LEN, PSW_DEFAULT_REV_SCH_RC_MAP, PSW_DEFAULT_REV_SCH_NUM,
     PSW_DEFAULT_REV_TURBO_SUPPORTED_SCH1, PSW_DEFAULT_REV_TURBO_SUPPORTED_SCH2,
     PSW_DEFAULT_REV_MAX_TURBO_BLOCK_SIZE,PSW_DEFAULT_REV_CONV_SUPPORTED_SCH1,
     PSW_DEFAULT_REV_CONV_SUPPORTED_SCH2,PSW_DEFAULT_REV_MAX_CONV_BLOCK_SIZE},
    /* revSchDurationUnit */
    PSW_DEFAULT_REV_SCH_DURATION_UNIT,
    /* revSchDuration */
    PSW_DEFAULT_REV_SCH_DURATION,
    /* nonOctetAlignedData */
    PSW_DEFAULT_NON_OCTET_ALIGNED_DATA,
    /* octetAlignedData */
    PSW_DEFAULT_OCTET_ALIGNED_DATA,
    /* forFchMoSupport */
    PSW_DEFAULT_FWD_FCH_MO_SUPPORT,
    /* revFchMoSupport */
    PSW_DEFAULT_REV_FCH_MO_SUPPORT,
    /* forDcchMoSupport */
    PSW_DEFAULT_FWD_DCCH_MO_SUPPORT,
    /* revDcchMoSupport */
    PSW_DEFAULT_REV_DCCH_MO_SUPPORT,
    /* forSchHighestRs1Mo */
    PSW_DEFAULT_FWD_SCH_HIGHEST_RS1_MO,
    /* forSchHighestRs2Mo */
    PSW_DEFAULT_FWD_SCH_HIGHEST_RS2_MO,
    /* revSchHighestRs1Mo */
    PSW_DEFAULT_REV_SCH_HIGHEST_RS1_MO,
    /* revSchHighestRs2Mo */
    PSW_DEFAULT_REV_SCH_HIGHEST_RS2_MO,

    /* geoLocType */
    PSW_DEFAULT_GEO_LOC_TYPE,
    /* Reserved2 */
    0,
    /* Reserved3 */
    0,
    /* encryptModeSupported */
    PSW_DEFAULT_ENCRYPT_MODE_SUPPORTED,
    /* opMode */
    PSW_DEFAULT_OP_MODE,
    /* locPilotPhCap */
    PSW_DEFAULT_LOC_PILOT_PH_CAP,
    /* locGPSAcqCap */
    PSW_DEFAULT_LOC_GPS_ACQ_CAP,
    /* locLocCalcCap */
    PSW_DEFAULT_LOC_CALC_CAP,
    /* locTCPCap */
    PSW_DEFAULT_LOC_TCP_CAP,
     /* locMSOrigCap */
    PSW_DEFAULT_LOC_MS_ORIG_CAP,
    /* dcchOnlyPingPeriod */
    PSW_DEFAULT_DCCH_ONLY_PING_PERIOD,
    /* dataReadyToSend */
    PSW_DEFAULT_DATA_READY_TO_SEND,
    /* channelIndicator */
    PSW_DEFAULT_CHANNEL_INDICATOR,
    /* pdchChmSupported */
    PSW_DEFAULT_PDCH_CHM_SUPPORTED,
    /* extendedChannelIndicator */
    PSW_DEFAULT_EXTENDED_CHAN_INDICATOR,
    /* wl1Inc1 */
    PSW_DEFAULT_WLL_INCL,
    /* wl1DeviceType */
    0,
    /* forPdchSupported */
    PSW_DEFAULT_FWD_PDCH_SUPPORTED,

    /* ackDelay */
    PSW_DEFAULT_PDCH_ACK_DELAY,
    /* numArqChan */
    PSW_DEFAULT_PDCH_NUM_ARQ_CHAN,
    /* forPdchRcMap */
    PSW_DEFAULT_FWD_PDCH_RC_MAP,
    /* chConfigSupMap */
    PSW_DEFAULT_CH_CONFIG_SUP_MAP,
    /* sdbDesiredOnly */
    PSW_DEFAULT_SDB_DESIRED_ONLY,
    /* InfoRecCapabilityMap */
    PSW_DEFAULT_INFO_REC_CAPABILITY_MAP,
    /* geoLocInc1 */
    PSW_DEFAULT_GEO_LOC_INCL,
    /* checksum */
    0x06f1
};

const PswIs95NamT pswNam1Value =
{
    /* ESN */
#ifdef MTK_PLT_ON_PC
#ifdef MTK_PLT_ON_PC_IT
    0x1f67c4fd,
#else
    0x1f67d49b,
#endif
#else
    0,
#endif
    /* SCM */
    {PSW_DEFAULT_SCM_BC0,PSW_DEFAULT_SCM_BC1,PSW_DEFAULT_SCM_BC2,PSW_DEFAULT_SCM_BC3,PSW_DEFAULT_SCM_BC4},
    /* SLOT_CYCLE_INDEX */
    PSW_DEFAULT_SLOT_CYCLE_IDX,
    /* MOB_FIRM_REV */
    PSW_DEFAULT_MOB_FIRM_REV,
    /* MOB_MODEL */
    PSW_DEFAULT_MOB_MODEL,
    /* MOB_P_REV */
    {PSW_DEFAULT_PREV,PSW_DEFAULT_PREV,PSW_DEFAULT_PREV,PSW_DEFAULT_PREV,PSW_DEFAULT_PREV},
    /* ValidZoneEntry */
    KAL_FALSE,
    /* ZONE_LIST */
    {0,0,0,0,KAL_FALSE,0,0},
    /* ValidSidNidEntry */
    KAL_FALSE,
    /* SID_NID_LIST */
    {0,0,0,KAL_FALSE,0,0},
    /* BASE_LAT_REG */
    0,
    /* BASE_LOG_REG */
    0,
    /* REG_DIST_REG */
    0,
    /* LCKRSN_P */
    0,
    /* MAINTRSN */
    0,
    /* DIGITAL_REG */
    0,
    /* PREF_BAND */
    0,
    /* RESERVED0 */
    0,
    /* PREF_BLOCK_BAND1 */
    0,
    /* PREF_BLOCK_BAND0 */
    0,
#ifndef MTK_CBP
    /* reserved */
    0,
#else
    /* SPC count */
    15,
#endif
    /* reserved1 */
    {0,0},
    /* reserved2 */
    {0,0,0,0,0,0,0},
    /* reserved3 */
    {0,0,0,0,0,0,0,0},
    /* COUNT */
    0,
    /* ValidIMSImap */
    PSW_DEFAULT_VALID_IMSI_MAP,
    /* IMSI_M */
#ifdef MTK_PLT_ON_PC
#ifdef MTK_PLT_ON_PC_IT
    {PSW_DEFAULT_IMSI_M_MCC,0x63,0x03e7,0xf9ebe7,0,0},
#else
    {0x03e7,0x63,0x03e7,0xf9dcb6,0,0},
#endif
#else
    {PSW_DEFAULT_IMSI_M_MCC,0,0,0,0,0},
#endif
    /* IMSI_T */
    {0},
    /* ASSIGNING_TMSI_ZONE_LEN */
    PSW_DEFAULT_ASSIGN_TMSI_ZONE_LEN,
    /* ASSIGNING_TMSI_ZONE */
    {0,0,0,0,0,0,0,0},
    /* TMSI_CODE */
    PSW_DEFAULT_TMSI_CODE,
    /* TMSI_EXP_TIME */
    PSW_DEFAULT_TMSI_EXP_TIME,
    /* SID */
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    /* NID */
    {65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535},
    /* NEG_SID */
    {65535,65535,65535,65535,65535,65535,65535,65535,65535,65535},
    /* NEG_NID */
    {0,0,0,0,0,0,0,0,0,0},
    /* MAX_SID_NID */
    PSW_DEFAULT_MAX_SID_NID,
    /* STORED_POS_SID_NID */
    PSW_DEFAULT_STORED_POS_SID_NID,
    /* STORED_NEG_SID_NID */
    0,
    /* ACCOLC */
    0,
    /* MobTermMap */
    PSW_DEFAULT_MOB_TERM_MAP,
    /* BCAST_ADDR_LEN */
    0,
    /* BCAST_ADDR */
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
#ifndef MTK_CBP
    /* RESERVED4 */
    0,
#else
    /* SPC */
    0,
#endif
    /* OTA_Capability_Map */
    PSW_DEFAULT_OTA_CAPABILITY_MAP,
#ifdef MTK_PLT_ON_PC_UT
    /* MDN_NUM_DIGITS */
    0x0a,
    /* MDN */
    {0,0,0,0,0,0,0x08,0x03,0x03,0,0,0,0,0,0,0},
#else
    /* MDN_NUM_DIGITS */
    0,
    /* MDN */
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
#endif
    /* HOME_SID */
    PSW_DEFAULT_HOME_SID,
    /* Exp */
    PSW_DEFAULT_EX,
    /* FIRSTCHP */
    PSW_DEFAULT_FIRSTCHP,
    /* DTX */
    PSW_DEFAULT_DTX,
    /* FCCA */
    PSW_DEFAULT_FCCA,
    /* LCCA */
    PSW_DEFAULT_LCCA,
    /* FCCB */
    PSW_DEFAULT_FCCB,
    /* LCCB */
    PSW_DEFAULT_LCCB,
    /* NXTREG */
    PSW_DEFAULT_NXTREG,
    /* SID */
    PSW_DEFAULT_SID,
    /* LOCAID */
    PSW_DEFAULT_LOCAID,
    /* PUREG */
    PSW_DEFAULT_PUREG,
    /* CPCA */
    PSW_DEFAULT_CPCA,
    /* CSCA */
    PSW_DEFAULT_CSCA,
    /* CPCB */
    PSW_DEFAULT_CPCB,
    /* CSCB */
    PSW_DEFAULT_CSCB,
    /* RESERVED5 */
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
     0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
     0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
     0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
     0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
     0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
     0,0,0,0,0},
    /* Auth_Capability_Map */
    PSW_DEFAULT_AUTH_CAPABILITY_MAP,
    /* RESERVED6 */
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
     0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
     0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
     0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
     0,0,0,0,0,0,0,0,0},
    /* SmsTlMaxRetry */
    0,
    /* UIM_ID */
    PSW_DEFAULT_UIM_ID,
    /* RoamingSetting */
    PSW_DEFAULT_ROAM_SETTING,
    /* SystemSelect */
    PSW_DEFAULT_SYSTEM_SELECT,
    /* FUTURE_EXPAND_FIELD */
    {0,0},
    /* Checksum */
    0xb9d4
};

const PswIs95NamT pswNam2Value =
{
    /* ESN */
    0,
    /* SCM */
    {PSW_DEFAULT_SCM_BC0,PSW_DEFAULT_SCM_BC1,PSW_DEFAULT_SCM_BC2,PSW_DEFAULT_SCM_BC3,PSW_DEFAULT_SCM_BC4},
    /* SLOT_CYCLE_INDEX */
    PSW_DEFAULT_SLOT_CYCLE_IDX,
    /* MOB_FIRM_REV */
    PSW_DEFAULT_MOB_FIRM_REV,
    /* MOB_MODEL */
    PSW_DEFAULT_MOB_MODEL,
    /* MOB_P_REV */
    {PSW_DEFAULT_PREV,PSW_DEFAULT_PREV,PSW_DEFAULT_PREV,PSW_DEFAULT_PREV,PSW_DEFAULT_PREV},
    /* ValidZoneEntry */
    KAL_FALSE,
    /* ZONE_LIST */
    {0,0,0,0,KAL_FALSE,0,0},
    /* ValidSidNidEntry */
    KAL_FALSE,
    /* SID_NID_LIST */
    {0,0,0,KAL_FALSE,0,0},
    /* BASE_LAT_REG */
    0,
    /* BASE_LOG_REG */
    0,
    /* REG_DIST_REG */
    0,
    /* LCKRSN_P */
    0,
    /* MAINTRSN */
    0,
    /* DIGITAL_REG */
    0,
    /* PREF_BAND */
    0,
    /* RESERVED0 */
    0,
    /* PREF_BLOCK_BAND1 */
    0,
    /* PREF_BLOCK_BAND0 */
    0,
#ifndef MTK_CBP
    /* reserved */
    0,
#else
    /* SPC count */
    15,
#endif
    /* reserved1 */
    {0,0},
    /* reserved2 */
    {0,0,0,0,0,0,0},
    /* reserved3 */
    {0,0,0,0,0,0,0,0},
    /* COUNT */
    0,
    /* ValidIMSImap */
    PSW_DEFAULT_VALID_IMSI_MAP,
    /* IMSI_M */
    {PSW_DEFAULT_IMSI_M_MCC,0,0,0,0,0},
    /* IMSI_T */
    {0},
    /* ASSIGNING_TMSI_ZONE_LEN */
    PSW_DEFAULT_ASSIGN_TMSI_ZONE_LEN,
    /* ASSIGNING_TMSI_ZONE */
    {0,0,0,0,0,0,0,0},
    /* TMSI_CODE */
    PSW_DEFAULT_TMSI_CODE,
    /* TMSI_EXP_TIME */
    PSW_DEFAULT_TMSI_EXP_TIME,
    /* SID */
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    /* NID */
    {65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535},
    /* NEG_SID */
    {65535,65535,65535,65535,65535,65535,65535,65535,65535,65535},
    /* NEG_NID */
    {0,0,0,0,0,0,0,0,0,0},
    /* MAX_SID_NID */
    PSW_DEFAULT_MAX_SID_NID,
    /* STORED_POS_SID_NID */
    PSW_DEFAULT_STORED_POS_SID_NID,
    /* STORED_NEG_SID_NID */
    0,
    /* ACCOLC */
    0,
    /* MobTermMap */
    PSW_DEFAULT_MOB_TERM_MAP,
    /* BCAST_ADDR_LEN */
    0,
    /* BCAST_ADDR */
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
#ifndef MTK_CBP
    /* RESERVED4 */
    0,
#else
    /* SPC */
    0,
#endif
    /* OTA_Capability_Map */
    PSW_DEFAULT_OTA_CAPABILITY_MAP,
    /* MDN_NUM_DIGITS */
    0,
    /* MDN */
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    /* HOME_SID */
    PSW_DEFAULT_HOME_SID,
    /* Exp */
    PSW_DEFAULT_EX,
    /* FIRSTCHP */
    PSW_DEFAULT_FIRSTCHP,
    /* DTX */
    PSW_DEFAULT_DTX,
    /* FCCA */
    PSW_DEFAULT_FCCA,
    /* LCCA */
    PSW_DEFAULT_LCCA,
    /* FCCB */
    PSW_DEFAULT_FCCB,
    /* LCCB */
    PSW_DEFAULT_LCCB,
    /* NXTREG */
    PSW_DEFAULT_NXTREG,
    /* SID */
    PSW_DEFAULT_SID,
    /* LOCAID */
    PSW_DEFAULT_LOCAID,
    /* PUREG */
    PSW_DEFAULT_PUREG,
    /* CPCA */
    PSW_DEFAULT_CPCA,
    /* CSCA */
    PSW_DEFAULT_CSCA,
    /* CPCB */
    PSW_DEFAULT_CPCB,
    /* CSCB */
    PSW_DEFAULT_CSCB,
    /* RESERVED5 */
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
     0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
     0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
     0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
     0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
     0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
     0,0,0,0,0},
    /* Auth_Capability_Map */
    PSW_DEFAULT_AUTH_CAPABILITY_MAP,
    /* RESERVED6 */
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
     0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
     0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
     0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
     0,0,0,0,0,0,0,0,0},
    /* SmsTlMaxRetry */
    0,
    /* UIM_ID */
    PSW_DEFAULT_UIM_ID,
    /* RoamingSetting */
    PSW_DEFAULT_ROAM_SETTING,
    /* SystemSelect */
    PSW_DEFAULT_SYSTEM_SELECT,
    /* FUTURE_EXPAND_FIELD */
    {0,0},
    /* Checksum */
    0xb9d4
};

const ClcDoParmDataT clcDoParmValue =
{
    /* DataSize */
    342,
#ifndef SYS_FEATURE_FORCE_1XONLY
    /* HybridMode */
    /* PrefMode */
#ifdef MTK_DEV_BRING_UP_1X
    NON_HYBRID,
    CDMA_ONLY,
#elif MTK_DEV_BRING_UP_DO
    NON_HYBRID,
    HDR_ONLY,
#else
    HYBRID,
    DETERMINE_MODE_AUTOMATICALLY,
#endif /*MTK_DEV_BRING_UP_1X*/
#else
    /* HybridMode */
    NON_HYBRID,
    /* PrefMode */
    CDMA_ONLY,
#endif
    /* PrefCCCycleEnable */
    KAL_TRUE,
    /* PrefCCCycle */
    0,
    /* ScpForceRel0Config */
    KAL_FALSE,
    /* NotDisturb */
    0,
    /* FtMacDrcGating */
    0,
    /* LUPUnsolicitedEnable */
    KAL_FALSE,
    /* RxDiversityCtrl */
    0x01,
    /* Stream0Configuration */
    0, /* DSA */
    /* Stream1Configuration */
    0xffff, /* INVALID_APP_SUBTYPE */
    /* Stream2Configuration */
    5, /* MFPA_ServiceStream */
    /* Stream3Configuration */
    0xffff, /* INVALID_APP_SUBTYPE */
    /* SubtypeConfigData */
    {
      {0,{0,0,0,0,0}, KAL_FALSE},
      {0,{0,0,0,0,0}, KAL_FALSE},
      {0,{0,0,0,0,0}, KAL_FALSE},
      {0,{0,0,0,0,0}, KAL_FALSE},
      {0,{0,0,0,0,0}, KAL_FALSE},
      {0,{0,0,0,0,0}, KAL_FALSE},
      {0,{0,0,0,0,0}, KAL_FALSE},
      {0,{0,0,0,0,0}, KAL_FALSE},
      {0,{0,0,0,0,0}, KAL_FALSE},
      {0,{0,0,0,0,0}, KAL_FALSE},
      {0,{0,0,0,0,0}, KAL_FALSE},
      {0,{0,0,0,0,0}, KAL_FALSE},
      {0,{0,0,0,0,0}, KAL_FALSE},
      {0,{0,0,0,0,0}, KAL_FALSE},
      {0,{0,0,0,0,0}, KAL_FALSE},
      {0,{0,0,0,0,0}, KAL_FALSE},
      {0,{0,0,0,0,0}, KAL_FALSE},
      {0,{0,0,0,0,0}, KAL_FALSE},
      {0,{0,0,0,0,0}, KAL_FALSE},
      {0,{0,0,0,0,0}, KAL_FALSE},
      {0,{0,0,0,0,0}, KAL_FALSE},
      {0,{0,0,0,0,0}, KAL_FALSE}
    },
    /*T_Dual_Idle*/
    60,
    /* T_HRPD_ExtendedSC */
    0x09,
    /* T_1x_ExtendedSC */
    0x09,
    /* T_HRPD_Init */
    0,
    /* T_1x_Init */
    0,
    /* DOSystem */
    {{0,0},{0,0},{0,0},{0,0},{0,0}},
    /* eHrpdDisable */
    KAL_FALSE,
    /* DfsIdleInterval */
    RUP_DEFAULT_DFS_IDLE_INTERVAL,
    /* DfsConnInterval */
    RUP_DEFAULT_DFS_CONN_INTERVAL,
    /* DfsIdleNumChan */
    RUP_DEFAULT_DFS_IDLE_NUMCHAN,
    /* DfsConnNumChan */
    RUP_DEFAULT_DFS_CONN_NUMCHAN,
    /* DfsIdleEcIoThresh */
    RUP_DEFAULT_DFS_IDLE_ECIO_THRESH,
    /* DfsConnEcIoThresh */
    RUP_DEFAULT_DFS_CONN_ECIO_THRESH,
    /* Paddings */
    {0,0,0,0,0,0,0,0,0,0}
};


const css1xDbmSegment css1xDbmValue = {
    {
        CSS_1X_MPSS_PILOT_STRENGTH_THRESH_DEFAULT,
        {CSS_1X_T_BSR_1_DEFAULT,CSS_1X_T_BSR_2_DEFAULT,CSS_1X_T_BSR_NEWSYS_DEFAULT,CSS_1X_T_BSR_REDIR_DEFAULT,CSS_1X_T_BSR_CALL_DEFAULT,CSS_1X_T_BSR_HOLD_DEFAULT},
        {0},
        {CSS_1X_HOME_MAPE_AVOIDANCE_DURATION_DEFAULT,CSS_1X_REDIR_AVOIDANCE_DURATION_DEFAULT},
        {0},
        {0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF},
        CSS_1X_PS_DELAY_DEFAULT,
        CSS_1X_EMERGENCY_SYS_LOST_SCAN_TIME,
        {KAL_FALSE,0,0}
    },
    0xF066,//checkSum
    {0}};

const cssDODbmSegment cssDODbmValue = {
    {
        0,
        {CSS_DO_T_BSR_1_DEFAULT,CSS_DO_T_BSR_2_DEFAULT,CSS_DO_T_BSR_HYBRID_DEFAULT,CSS_DO_T_BSR_REDIR_DEFAULT,CSS_DO_T_BSR_HOLD_DEFAULT,CSS_DO_T_BSR_CALL_DEFAULT},
        {0},
        {0},
        {0}
    },
    0xFE74,//checkSum
    {0}};

const CssDbmDataT css1xMRUValue = {{SYS_BAND_CLASS_0}, {0}};
const CssDbmDataT cssDOMRUValue = {{SYS_BAND_CLASS_0}, {0}};

const cssMiscDbmSegment cssMiscDbmValue =
{
  0xFF, 
  {
#ifdef MTK_DEV_C2K_IRAT
    {KAL_FALSE, 0, KAL_FALSE, 0},
#endif
    ROAMING_IND_OFF, /* roamIndForNonPrlSysButHomeInNam */
    1, /* homeEriValNum */
    {1}, /* homeEriVals */
    0, /* intlEriValNum */
    {0}, /* intlEriVals */
  },
  0xFEFD,
  {0}
};

/* DBM_PSW_MISC_CUST_SEG (DBM_PSW_MISC_SEG) */
const PswMiscT cpDataPswMiscData =
{
  NAM_1,//StartupActiveNam
  0,//PswFeatureFlags
  1,//PhyFeatureFlags
  0x17,//PswMiscEnableFlags
  0,//??PEND_REG_NONE,//pendingReg
  3,//PrefHomeMOSO
  3,//PrefHomeMTSO
  3,//PrefRoamMOSO
  KAL_TRUE,//IS683NamLock
  0,//DfsEcIoThresh
  2609,//qpchPilotEcIoThreshLow
  5205,//gpchPilotEcIoThreshHigh
  0,//reserved_0
  0x0000 //checksum
};

/* DBM_CUSTOMIZE_CUST_SEG (DBM_CUSTOMIZE_SEG) */
const ValCustomizedParmDataT cpDataValCustomizeData =
{
  2, //??AUTO_REG_DISABLE,//??AutoReg
  0  //??RegMask
};


const HlpHspdSegData hlpHspdSegValue = {
    HLP_DEFAULT_RRP_TIMEOUT,
    HLP_DEFAULT_NUM_REG_RETRIES,
    HLP_DEFAULT_RRA,
    HLP_DEFAULT_IS801_IP_ADDR,
    HLP_DEFAULT_IS801_PORT_NUM,
    {0},
    {0},
    {0},

    HLP_DEFAULT_HA_AUTH,
    HLP_DEFAULT_HA_AUTH_ALGORITHM,
    HLP_DEFAULT_HA_AUTH_ALGORITHM,

    {HLP_DEFAULT_HA_AUTH_ALGORITHM, HLP_DEFAULT_HA_AUTH_ALGORITHM, HLP_DEFAULT_HA_AUTH_ALGORITHM},
    HLP_DEFAULT_ACTIVE_RSA_PUBLIC_KEY,
    HLP_DEFAULT_PKOID,

    HLP_DEFAULT_NAI,
    HLP_DEFAULT_DUN_NAI,
    HLP_DEFAULT_NAI,

    HLP_DEFAULT_DORMANT_HANDOFF_OPTION,
    HLP_DEFAULT_DATA_SCRM_ENABLED,
    HLP_DEFAULT_DATA_THROTTLING_ENABLED,
    HLP_DEFAULT_PREFERRED_RC,
    HLP_DEFAULT_IP_ADDR,
    HLP_DEFAULT_IP_ADDR,
    HLP_DEFAULT_MIP_MODE,

    HLP_DEFAULT_ACTIVE_PROFILE,
    HLP_DEFAULT_NUM_PROFILES,
    HLP_DEFAULT_VJCOMPRESSION_ENABLED,
    HLP_DEFAULT_HSPD_LOCKED,
    0,
    HLP_DEFAULT_HSPD_NETWORKMODE,
    HLP_DEFAULT_HSPD_T_DORMACNY,
    HLP_DEFAULT_HSPD_T_HRPD_SEARCH,
    DO_RETRY_TIMER,
    HLP_DEFAULT_HSPD_T_RAPID_DORMACNY,
    HLP_DEFAULT_HSPD_T_RES_DEF_DORMACNY,
    HLP_DEFAULT_NUM_DEREG_RETRIES,
    HLP_DEFAULT_REREG_ONLYIF_TRAFFIC,
    HLP_DEFAULT_NAI_ENABLED,
    HLP_DEFAULT_DOTO1X_FALLBACK_ENABLED,

    {
      HLP_DEFAULT_PPP_UM_LCP_REQ_RETRIES,
      HLP_DEFAULT_PPP_UM_LCP_NAK_RETRIES,
      HLP_DEFAULT_PPP_UM_LCP_RESTART_TMR,
      HLP_DEFAULT_PPP_UM_LCP_TERM_RETRIES,
      HLP_DEFAULT_PPP_UM_LCP_TERM_TIMER,
      HLP_DEFAULT_PPP_UM_AUTH_RETRIES,
      HLP_DEFAULT_PPP_UM_AUTH_TIMER,
      HLP_DEFAULT_PPP_UM_NCP_REQ_RETRIES,
      HLP_DEFAULT_PPP_UM_NCP_NAK_RETRIES,
      HLP_DEFAULT_PPP_UM_NCP_RESTART_TMR,
      HLP_DEFAULT_PPP_UM_NCP_TERM_RETRIES,
      HLP_DEFAULT_PPP_UM_NCP_TERM_TIMER,
      {0},
    },

    {
      HLP_DEFAULT_PPP_RM_PPP_KEEP_LIVE,
      HLP_DEFAULT_PPP_RM_PPP_DETECT,
      HLP_DEFAULT_PPP_RM_LCP_REQ_RETRIES,
      HLP_DEFAULT_PPP_RM_LCP_NAK_RETRIES,
      0,
      0,
      0,
      0,
      0,
      0,
      0,
      0,
      {0},
    },

    {
      HLP_DEFAULT_TCP_MTU,
      HLP_DEFAULT_TCP_WIN_1XRTT,
      HLP_DEFAULT_TCP_WIN_EVDO,
      {0},
    },
    IPv4,

    {0},
    {
       {
         0,
         KAL_TRUE,
         HLP_DEFAULT_MN_HOME_IP_ADDR,
         HLP_DEFAULT_HA_PRI_IP_ADDR,
         HLP_DEFAULT_HA_SEC_IP_ADDR,
         HLP_DEFAULT_NAI,
         HLP_DEFAULT_DUN_NAI,
         HLP_DEFAULT_MN_REV_TUNNELING,
         HLP_DEFAULT_MN_HA_SPI_ENABLE,
         HLP_DEFAULT_MN_HA_SPI,
         HLP_DEFAULT_MN_AAA_SPI_ENABLE,
         HLP_DEFAULT_MN_AAA_SPI,
         {0}
       },

       {
         0,
         KAL_TRUE,
         HLP_DEFAULT_MN_HOME_IP_ADDR,
         HLP_DEFAULT_HA_PRI_IP_ADDR,
         HLP_DEFAULT_HA_SEC_IP_ADDR,
         HLP_DEFAULT_NAI,
         HLP_DEFAULT_DUN_NAI,
         HLP_DEFAULT_MN_REV_TUNNELING,
         HLP_DEFAULT_MN_HA_SPI_ENABLE,
         HLP_DEFAULT_MN_HA_SPI,
         HLP_DEFAULT_MN_AAA_SPI_ENABLE,
         HLP_DEFAULT_MN_AAA_SPI,
         {0}
       }
    }
};

/* NOTE: if the data following checksum is changed, the checksum must be updated using calcChecksum */
const HlpHspdSecureSegData hlpHspdSecureSegValue = {
    0xfc0b,
    HLP_MAX_PSWD_LEN,
    {HLP_DEFAULT_SIP_PASSWRD},
    HLP_MAX_PSWD_LEN,
    {HLP_DEFAULT_AN_PASSWRD},
 #ifdef CBP7_EHRPD
    {HLP_DEFAULT_AKA_PASSWRD},
 #endif
    {0},
    {
       {
         0,
         KAL_TRUE,
         HLP_MAX_PSWD_LEN,
         {HLP_DEFAULT_MN_AAA_PASSWRD},
         HLP_MAX_PSWD_LEN,
         {HLP_DEFAULT_MN_HA_PASSWRD},
         {0}
       },

       {
         0,
         KAL_TRUE,
         HLP_MAX_PSWD_LEN,
         {HLP_DEFAULT_MN_AAA_PASSWRD},
         HLP_MAX_PSWD_LEN,
         {HLP_DEFAULT_MN_HA_PASSWRD},
         {0}
       }
    }
    };

#ifdef CBP7_EHRPD
const HlpEHrpdSegDataT hlpEhrpdSegValue = {
    {{0},{0},{0},{{0}}},
    0,
    0
    };
#endif


#ifdef MTK_DEV_BRING_UP_FIXED_FREQ
/*1x channel 283, DO channel 47*/
const kal_uint8 prlDbmValue[PRL_MAX_SIZE] = {0x00, 0x24, 0x00, 0x09, 0x03, 0x81, 0x00, 0x80, 0x00, 0x01, 0x00, 0x03, 0x02, 0x09, 0x1B, 0x0B,
0x02, 0x00, 0x2F, 0x40, 0x40, 0x00, 0x00, 0x00, 0x03, 0x01, 0xC0, 0x38, 0xE0, 0x08, 0x00, 0x01,
0x80, 0xE0, 0x7E, 0x7F};
#else
/* MS without UICC mode is used to test OTASP cases in C.S0060, band 0/chan 283 for VzW and
 * band 1/chan 425 for Sprint are configured, these two channels must in the PRL. */
const kal_uint8 prlDbmValue[PRL_MAX_SIZE] =
{0x00, 0x7B, 0x01, 0x2E, 0x03, 0x01, 0x01, 0xC0, 0x00, 0x03, 0x80, 0x03, 0x0C, 0x41, 0x1B, 0x19,
0x23, 0xC8, 0x50, 0x04, 0xE0, 0xEE, 0x09, 0x46, 0x38, 0x0B, 0x0E, 0x00, 0x25, 0x00, 0x4E, 0x00,
0x77, 0x00, 0xA0, 0x00, 0xC9, 0x00, 0xF2, 0x01, 0x1B, 0x03, 0x02, 0x08, 0x28, 0x0B, 0x02, 0x00,
0x7A, 0x06, 0x02, 0x09, 0xA9, 0x02, 0x01, 0xF0, 0x05, 0x02, 0x5F, 0x80, 0x40, 0x40, 0x00, 0x00,
0x00, 0x03, 0x01, 0xC0, 0x40, 0x60, 0x20, 0x00, 0x00, 0x03, 0x01, 0xC0, 0x58, 0xE0, 0x08, 0x23,
0x00, 0xA8, 0xC0, 0x00, 0x60, 0x30, 0x1C, 0x40, 0x40, 0x10, 0x00, 0x00, 0x01, 0x04, 0x00, 0x70,
0xE0, 0x18, 0x37, 0xFE, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x08, 0x01, 0x04, 0x00, 0x30, 0x60, 0x28,
0x00, 0x00, 0x00, 0x30, 0x60, 0x30, 0x00, 0x00, 0x00, 0x53, 0x8D};
#endif


const AtcDbmBinDataT AtcDfNvValue[] = {
   {0,   /* ParamSetFlag */
    0x01, /* C109Parameter */
    0,  /* CADParameter */
    {0, 0}, /* CBCParameter */
    0,  /* CBIPParameter */
    0, /* CDRParameter */
    {AT_CMP_DIRECTION, 0, AT_DEFAULT_CDS_MAX_DICT, 6},  /* CDSParameter */
    0, /* CFCParameter */
    0, /* CMIPParameter */
    AT_DEFAULT_CMUX,  /* CMUXParameter */
    0,  /* CPERParameter */
    AT_DEFAULT_CPS,  /* CPSParameter */
    0,  /* CPSRParameter */
    0x0A, /* CQDParameter */
    0, /* CRCParameter */
    0x01, /* CRMParameter */
    {0, 0}, /* CSQParameter */
    {0, 0, 0}, /* CSSParameter */
    0x1E, /* CTAParameter */
    0, /* CXTParameter */
    0, /* C108Parameter */
    0x02, /* DParameter */
    0x01, /* DialTypeParameter */
    0, /* DRParameter */
    {0x03, 0, AT_DEFAULT_CDS_MAX_DICT, 0x06},  /* DSParameter */
    {0x01, 0x01
#ifdef SYS_OPTION_ATCMD_CH_2
     ,0x01
#ifdef SYS_OPTION_ATCMD_CH_3
     ,0x01
#ifdef SYS_OPTION_ATCMD_CH_4
     ,0x01
#ifdef SYS_OPTION_MORE_AT_CHANNEL
     ,0x01, 0x01, 0x01, 0x01 /* Now, there are 8 channel, 1 channel for backup */
#endif /* SYS_OPTION_ATCMD_CH_2 */
#endif /* SYS_OPTION_ATCMD_CH_3 */
#endif /* SYS_OPTION_ATCMD_CH_4 */
#endif /* SYS_OPTION_MORE_AT_CHANNEL */
#ifdef MTK_DEV_ETS_ENHANCEMENT
    , 0x01
#endif
    }, /* EParameter */
    {0x01, 0, 0x1E},  /* EBParameter */
    0x01, /* EFCSParameter */
    0, /* ERParameter */
    {0x03, 0, 0x02}, /* ESParameter */
    0x01, /* ESRParameter */
    {0x01, 0x01, 0x14}, /* ETBMParameter */
    0x00,  /* FAAParameter */
    {0, 0, 0}, /* FAPParameter */
    0, /* FBOParameter */
    0, /* FBUParameter */
    {DEFAULT_FCC_VR, DEFAULT_FCC_BR, DEFAULT_FCC_WD, DEFAULT_FCC_LN,
     DEFAULT_FCC_DF, DEFAULT_FCC_EC, DEFAULT_FCC_BF, DEFAULT_FCC_ST},  /* FCCParameter */
    0, /* FCLASSParameter */
    {0x01, 0}, /* FCQParameter */
    DEFAULT_FCR, /* FCRParameter */
    0x1E, /* FCTParameter */
    0, /* FEAParameter */
    {DEFAULT_FFC_VRC, DEFAULT_FFC_DFC, DEFAULT_FFC_LNC, DEFAULT_FFC_WDC}, /* FFCParameter */
    0, /* FHSParameter */
    0, /* FIEParameter */
    {DEFAULT_FCC_VR, DEFAULT_FCC_BR, DEFAULT_FCC_WD, DEFAULT_FCC_LN,
     DEFAULT_FCC_DF, DEFAULT_FCC_EC, DEFAULT_FCC_BF, DEFAULT_FCC_ST},  /* FISParameter */
    0x01, /* FLOParameter */
    0, /* FLPParameter */
    0, /* FMSParameter */
    {0, 0, 0, 0}, /* FNRParameter */
    {{0}, 0}, /* FNSParameter */
    0, /* FPPParameter */
    AT_DEFAULT_FPR, /* FPRParameter */
    0x01, /* FPSParameter */
    {DEFAULT_FRQ_PGL, DEFAULT_FRQ_CBL}, /* FRQParameter */
    0, /* FRYParameter */
    0, /* FSPParameter */
    0, /* IBCParameter */
    {0x03, 0x03}, /* ICFParameter */
    {0x02, 0x02}, /* IFCParameter */
    0, /* ILRRParameter */
    IPR_DEFAULT, /* IPRParameter */
    0, /* LParameter */
    0, /* MParameter */
    0, /* MRParameter */
    {DEFAULT_MS_CARRIER, DEFAULT_MS_AUTOMODE, 0, 0, 0, 0}, /* MSParameter */
    0, /* MV18RParameter */
    {0, 0, 0}, /* MV18SParameter */
    {0}, /* QParameter */
    0, /* S0Parameter */
    0x0d, /* S3Parameter */
    0x0a, /* S4Parameter */
    0x08, /* S5Parameter */
    0x02, /* S6Parameter */
    0x32, /* S7Parameter */
    0x02, /* S8Parameter */
    0x06, /* S9Parameter */
    0x0E, /* S10Parameter */
    0x5F, /* S11Parameter */
    {0x01, 0x01
#ifdef SYS_OPTION_ATCMD_CH_2
     ,0x01
#ifdef SYS_OPTION_ATCMD_CH_3
     ,0x01
#ifdef SYS_OPTION_ATCMD_CH_4
     ,0x01
#ifdef SYS_OPTION_MORE_AT_CHANNEL
     ,0x01, 0x01, 0x01, 0x01 /* Now there are 8 channel, 1 channel for backup */
#endif /* SYS_OPTION_ATCMD_CH_2 */
#endif /* SYS_OPTION_ATCMD_CH_3 */
#endif /* SYS_OPTION_ATCMD_CH_4 */
#endif /* SYS_OPTION_MORE_AT_CHANNEL */
#ifdef MTK_DEV_ETS_ENHANCEMENT
     , 0x01
#endif
    }, /* VParameter */
    0x04, /* XParameter */
    0, /* DMUVParameter */
    1,
    0, /* QCQNCParameter */
    0x03, /* QCMDRParameter */
    {{0}}, /* CfgStr */
    {{0}}, /* FdlStr */
    {{0}}, /* FliStr */
    {{0}}, /* FpaStr */
    {{0}}, /* FpiStr */
    {{0}}, /* FpwStr */
    {{0}}, /* FsaStr */
    {{0}}, /* GcapStr */
    {{0}}, /* GmiStr */
    {{0}}, /* GmmStr */
    {{0}}, /* GmrStr */
    {{0}}, /* GoiStr */
    {{0x30, 0x78, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30}}, /* GsnStr */
    {{0x03, 0x04, 0x06, 0x09, 0x0A, 0x0B, 0xFF, 0xFF}}, /* MaTbl */
    {{0}}, /* HwvStr */
    0x01 /* CMEEParameter */
#ifdef MTK_DEV_ENGINEER_MODE
    ,0  /* EctmMode */
#ifdef MTK_DEV_C2K_IRAT
    ,0 /* EclscMode */
#endif
#endif
#ifdef MTK_CBP
    ,0 /* VPMode */
    ,{AT_DEFAULT_SYS_ACTIVED_BAND_CLASS_MASK} /* ActivedBand */
    ,{{0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01}}  /*stRegTypeTbl*/

    ,0x00   /*uPrefSo VAL_TEST_CALL_FULL_TDSO */
    ,0x00   /*uPrefRc */
    ,0x01   /*bEvrcCap*/
    ,0x01   /*bEvrcbSupport*/
    ,0x01   /*bEvrcSupport*/
#endif
    ,0x00  /*PrefMode*/
    ,0x00  /*bSmsAckOff*/
    }
};


//const ValSmsDanDcnInfoT gstValSmsDanDcnInfoDft = {KAL_FALSE, "4437501000"};
extern const ValSmsDanDcnInfoT gstValSmsDanDcnInfoDft;

/* c2k vsim data */
kal_uint8 EF_C2K_vsim_atr[EF_META_SIZE+EF_DATA_SIZE] =
{
  /* The first 32 is meta data : start*/
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  /* The first 32 is meta data : end*/
  /* File content data : start*/
  0x13, 0x3B, 0x9C, 0x94, 0x80, 0x1F, 0xC7, 0x68, 0x86, 0x85, 0x06, 0x86, 0x98, 0x02, 0x10, 0xC2,
  0x00, 0x17, 0x00, 0xE4, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF
};

kal_uint8 DF_CDMA_data[EF_META_SIZE+EF_DATA_SIZE] =
{
  /* The first 32 is meta data : start*/
  0x16, 0x00, 0x00, 0x00, 0x00, 0x7F, 0x25, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0A, 0x13, 0x00,
  0x35, 0x04, 0x00, 0x83, 0x8A, 0x83, 0x8A, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  /* The first 32 is meta data : end*/
  /* File content data : start*/
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
  /* File content data : end*/
};

kal_uint8 DF_MF_data[EF_META_SIZE+EF_DATA_SIZE] =
{
  /* The first 32 is meta data : start*/
  0x16, 0x00, 0x00, 0x00, 0x00, 0x3F, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0A, 0x13, 0x04,
  0x02, 0x04, 0x00, 0x83, 0x8A, 0x83, 0x8A, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  /* The first 32 is meta data : end*/
  /* File content data : start*/
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
  /* File content data : end*/
};


// LID Declaration
ltable_entry_struct logical_data_item_table_c2k[] =
{

//user should add LID declaration here
   {
      NVRAM_EF_C2K_PSW_NAM1_LID,
      NVRAM_EF_C2K_PSW_NAM1_TOTAL,
      NVRAM_EF_C2K_PSW_NAM1_SIZE,
      NVRAM_NORMAL(&pswNam1Value),
      NVRAM_CATEGORY_USER,
      NVRAM_ATTR_AVERAGE,
      "CK00",
      VER(NVRAM_EF_C2K_PSW_NAM1_LID)
   },

   {
      NVRAM_EF_C2K_PSW_MS_CAP_LID,
      NVRAM_EF_C2K_PSW_MS_CAP_TOTAL,
      NVRAM_EF_C2K_PSW_MS_CAP_SIZE,
      NVRAM_NORMAL(&msCapDbValue),
      NVRAM_CATEGORY_USER,
      NVRAM_ATTR_AVERAGE,
      "CK01",
      VER(NVRAM_EF_C2K_PSW_MS_CAP_LID)
   },

   {
      NVRAM_EF_C2K_UICC_LID,
      NVRAM_EF_C2K_UICC_TOTAL,
      NVRAM_EF_C2K_UICC_SIZE,
      NVRAM_NORMAL(&cpDataUiccDbmData),
      NVRAM_CATEGORY_USER,
      NVRAM_ATTR_AVERAGE|NVRAM_ATTR_CONFIDENTIAL,
      "CK02",
      VER(NVRAM_EF_C2K_UICC_LID)
   },

   {
       NVRAM_EF_C2K_PSW_NAM2_LID,
       NVRAM_EF_C2K_PSW_NAM2_TOTAL,
       NVRAM_EF_C2K_PSW_NAM2_SIZE,
       NVRAM_NORMAL(&pswNam2Value),
       NVRAM_CATEGORY_USER,
       NVRAM_ATTR_AVERAGE,
       "CK03",
       VER(NVRAM_EF_C2K_PSW_NAM2_LID)
    },

   {
      NVRAM_EF_C2K_SECURE_DATA_LID,
      NVRAM_EF_C2K_SECURE_DATA_TOTAL,
      NVRAM_EF_C2K_SECURE_DATA_SIZE,
      NVRAM_NORMAL(&cpDataSecureData),
      NVRAM_CATEGORY_IMPORTANT,
      NVRAM_ATTR_AVERAGE | NVRAM_ATTR_FAULT_ASSERT
      #if defined (__CCCIFS_SUPPORT__)  
      | NVRAM_ATTR_COMMITTED
      #endif
      ,
      "CK04",
      VER(NVRAM_EF_C2K_SECURE_DATA_LID)
   },

   {
      NVRAM_EF_C2K_DO_DATA_LID,
      NVRAM_EF_C2K_DO_DATA_TOTAL,
      NVRAM_EF_C2K_DO_DATA_SIZE,
      NVRAM_NORMAL(&clcDoParmValue),
      NVRAM_CATEGORY_USER,
      NVRAM_ATTR_AVERAGE,
      "CK05",
      VER(NVRAM_EF_C2K_DO_DATA_LID)
   },

   {
      NVRAM_EF_C2K_HLP_IPCOUNTERS_LID,
      NVRAM_EF_C2K_HLP_IPCOUNTERS_TOTAL,
      NVRAM_EF_C2K_HLP_IPCOUNTERS_SIZE,
      NVRAM_NORMAL(NVRAM_EF_ZERO_DEFAULT),
      NVRAM_CATEGORY_USER,
      NVRAM_ATTR_AVERAGE,
      "CK07",
      VER(NVRAM_EF_C2K_HLP_IPCOUNTERS_LID)
   },

   {
      NVRAM_EF_C2K_PSW_MRU1_LID,
      NVRAM_EF_C2K_PSW_MRU1_TOTAL,
      NVRAM_EF_C2K_PSW_MRU1_SIZE,
      NVRAM_NORMAL(&css1xMRUValue),
      NVRAM_CATEGORY_USER,
      NVRAM_ATTR_AVERAGE,
      "CK08",
      VER(NVRAM_EF_C2K_PSW_MRU1_LID)
   },

   {
      NVRAM_EF_C2K_PSW_MRU2_LID,
      NVRAM_EF_C2K_PSW_MRU2_TOTAL,
      NVRAM_EF_C2K_PSW_MRU2_SIZE,
      NVRAM_NORMAL(&css1xMRUValue),
      NVRAM_CATEGORY_USER,
      NVRAM_ATTR_AVERAGE,
      "CK09",
      VER(NVRAM_EF_C2K_PSW_MRU2_LID)
   },

   {
      NVRAM_EF_C2K_DO_MRU_LID,
      NVRAM_EF_C2K_DO_MRU_TOTAL,
      NVRAM_EF_C2K_DO_MRU_SIZE,
      NVRAM_NORMAL(&cssDOMRUValue),
      NVRAM_CATEGORY_USER,
      NVRAM_ATTR_AVERAGE,
      "CK0A",
      VER(NVRAM_EF_C2K_DO_MRU_LID)
   },

   {
      NVRAM_EF_C2K_CSS_1X_LID,
      NVRAM_EF_C2K_CSS_1X_TOTAL,
      NVRAM_EF_C2K_CSS_1X_SIZE,
      NVRAM_NORMAL(&css1xDbmValue),
      NVRAM_CATEGORY_USER,
      NVRAM_ATTR_AVERAGE,
      "CK0B",
      VER(NVRAM_EF_C2K_CSS_1X_LID)
   },

   {
      NVRAM_EF_C2K_CSS_DO_LID,
      NVRAM_EF_C2K_CSS_DO_TOTAL,
      NVRAM_EF_C2K_CSS_DO_SIZE,
      NVRAM_NORMAL(&cssDODbmValue),
      NVRAM_CATEGORY_USER,
      NVRAM_ATTR_AVERAGE,
      "CK0C",
      VER(NVRAM_EF_C2K_CSS_DO_LID)
   },

   {
      NVRAM_EF_C2K_CSS_MISC_LID,
      NVRAM_EF_C2K_CSS_MISC_TOTAL,
      NVRAM_EF_C2K_CSS_MISC_SIZE,
      NVRAM_NORMAL(&cssMiscDbmValue),
      NVRAM_CATEGORY_USER,
      NVRAM_ATTR_AVERAGE,
      "CK0D",
      VER(NVRAM_EF_C2K_CSS_MISC_LID)
   },

   {
      NVRAM_EF_C2K_PSW_MISC_LID,
      NVRAM_EF_C2K_PSW_MISC_TOTAL,
      NVRAM_EF_C2K_PSW_MISC_SIZE,
      NVRAM_NORMAL(&cpDataPswMiscData),
      NVRAM_CATEGORY_USER,
      NVRAM_ATTR_AVERAGE,
      "CK0E",
      VER(NVRAM_EF_C2K_PSW_MISC_LID)
   },

   {
      NVRAM_EF_C2K_CUSTOMIZE_LID,
      NVRAM_EF_C2K_CUSTOMIZE_TOTAL,
      NVRAM_EF_C2K_CUSTOMIZE_SIZE,
      NVRAM_NORMAL(&cpDataValCustomizeData),
      NVRAM_CATEGORY_USER,
      NVRAM_ATTR_AVERAGE,
      "CK0F",
      VER(NVRAM_EF_C2K_CUSTOMIZE_LID)
   },

   {
      NVRAM_EF_C2K_HSPD_LID,
      NVRAM_EF_C2K_HSPD_TOTAL,
      NVRAM_EF_C2K_HSPD_SIZE,
      NVRAM_NORMAL(&hlpHspdSegValue),
      NVRAM_CATEGORY_USER,
      NVRAM_ATTR_AVERAGE,
      "CK0G",
      VER(NVRAM_EF_C2K_HSPD_LID)
   },

   {
      NVRAM_EF_C2K_HSPD_SECURE_LID,
      NVRAM_EF_C2K_HSPD_SECURE_TOTAL,
      NVRAM_EF_C2K_HSPD_SECURE_SIZE,
      NVRAM_NORMAL(&hlpHspdSecureSegValue),
      NVRAM_CATEGORY_USER,
      NVRAM_ATTR_AVERAGE,
      "CK0H",
      VER(NVRAM_EF_C2K_HSPD_SECURE_LID)
   },

#ifdef CBP7_EHRPD
   {
      NVRAM_EF_C2K_EHRPD_LID,
      NVRAM_EF_C2K_EHRPD_TOTAL,
      NVRAM_EF_C2K_EHRPD_SIZE,
      NVRAM_NORMAL(&hlpEhrpdSegValue),
      NVRAM_CATEGORY_USER,
      NVRAM_ATTR_AVERAGE,
      "CK0I",
      VER(NVRAM_EF_C2K_EHRPD_LID)
   },
#endif

   {
      NVRAM_EF_C2K_PRL1_LID,
      NVRAM_EF_C2K_PRL1_TOTAL,
      NVRAM_EF_C2K_PRL1_SIZE,
      NVRAM_NORMAL(prlDbmValue),
      NVRAM_CATEGORY_USER,
      NVRAM_ATTR_AVERAGE,
      "CK0J",
      VER(NVRAM_EF_C2K_PRL1_LID)
   },

   {
      NVRAM_EF_C2K_PRL2_LID,
      NVRAM_EF_C2K_PRL2_TOTAL,
      NVRAM_EF_C2K_PRL2_SIZE,
      NVRAM_NORMAL(NVRAM_EF_ZERO_DEFAULT),
      NVRAM_CATEGORY_USER,
      NVRAM_ATTR_AVERAGE,
      "CK0K",
      VER(NVRAM_EF_C2K_PRL2_LID)
   },

   {
      NVRAM_EF_C2K_ATC_PARMS_LID,
      NVRAM_EF_C2K_ATC_PARMS_TOTAL,
      NVRAM_EF_C2K_ATC_PARMS_SIZE,
      NVRAM_NORMAL(AtcDfNvValue),
      NVRAM_CATEGORY_USER,
      NVRAM_ATTR_AVERAGE,
      "CK0L",
      VER(NVRAM_EF_C2K_ATC_PARMS_LID)
   },

   {
      NVRAM_EF_C2K_ERI1_LID,
      NVRAM_EF_C2K_ERI1_TOTAL,
      NVRAM_EF_C2K_ERI1_SIZE,
      NVRAM_NORMAL(NVRAM_EF_ZERO_DEFAULT),
      NVRAM_CATEGORY_USER,
      NVRAM_ATTR_AVERAGE,
      "CK0N",
      VER(NVRAM_EF_C2K_ERI1_LID)
   },


   {
      NVRAM_EF_C2K_ERI2_LID,
      NVRAM_EF_C2K_ERI2_TOTAL,
      NVRAM_EF_C2K_ERI2_SIZE,
      NVRAM_NORMAL(NVRAM_EF_ZERO_DEFAULT),
      NVRAM_CATEGORY_USER,
      NVRAM_ATTR_AVERAGE,
      "CK0O",
      VER(NVRAM_EF_C2K_ERI2_LID)
   },

   {
      NVRAM_EF_C2K_DMUPUBKEY1_LID,
      NVRAM_EF_C2K_DMUPUBKEY1_TOTAL,
      NVRAM_EF_C2K_DMUPUBKEY1_SIZE,
      NVRAM_NORMAL(NVRAM_EF_ZERO_DEFAULT),
      NVRAM_CATEGORY_USER,
      NVRAM_ATTR_AVERAGE,
      "CK0P",
      VER(NVRAM_EF_C2K_DMUPUBKEY1_LID)
   },

   {
      NVRAM_EF_C2K_DMUPUBKEY2_LID,
      NVRAM_EF_C2K_DMUPUBKEY2_TOTAL,
      NVRAM_EF_C2K_DMUPUBKEY2_SIZE,
      NVRAM_NORMAL(NVRAM_EF_ZERO_DEFAULT),
      NVRAM_CATEGORY_USER,
      NVRAM_ATTR_AVERAGE,
      "CK0Q",
      VER(NVRAM_EF_C2K_DMUPUBKEY2_LID)
   },

   {
      NVRAM_EF_C2K_DMUPUBKEY_ORG_LID,
      NVRAM_EF_C2K_DMUPUBKEY_ORG_TOTAL,
      NVRAM_EF_C2K_DMUPUBKEY_ORG_SIZE,
      NVRAM_NORMAL(NVRAM_EF_ZERO_DEFAULT),
      NVRAM_CATEGORY_USER,
      NVRAM_ATTR_AVERAGE,
      "CK0R",
      VER(NVRAM_EF_C2K_DMUPUBKEY_ORG_LID)
   },

   {
      NVRAM_EF_C2K_UICC_CARD_DATA_LID,
      NVRAM_EF_C2K_UICC_CARD_DATA_TOTAL,
      NVRAM_EF_C2K_UICC_CARD_DATA_SIZE,
      NVRAM_NORMAL(NVRAM_EF_ZERO_DEFAULT),
      NVRAM_CATEGORY_USER,
      NVRAM_ATTR_AVERAGE|NVRAM_ATTR_CONFIDENTIAL,
      "CK0X",
      VER(NVRAM_EF_C2K_UICC_CARD_DATA_LID)
    },

   /* VAL DAN DCN config and store info */
   {
      NVRAM_EF_C2K_VAL_DANDCN_LID,
      NVRAM_EF_C2K_VAL_DANDCN_TOTAL,
      NVRAM_EF_C2K_VAL_DANDCN_SIZE,
      NVRAM_NORMAL(&gstValSmsDanDcnInfoDft),
      NVRAM_CATEGORY_USER,
      NVRAM_ATTR_AVERAGE,
      "CK0Y",
      VER(NVRAM_EF_C2K_VAL_DANDCN_LID)
   },

   {
      NVRAM_EF_C2K_SIDB_ITEM_ATCONFIG_LID,
      NVRAM_EF_C2K_SIDB_ITEM_ATCONFIG_TOTAL,
      NVRAM_EF_C2K_SIDB_ITEM_ATCONFIG_SIZE,
      NVRAM_NORMAL(NVRAM_EF_ZERO_DEFAULT),
      NVRAM_CATEGORY_USER,
      NVRAM_ATTR_AVERAGE,
      "CK0Z",
      VER(NVRAM_EF_C2K_SIDB_ITEM_ATCONFIG_LID)
   },

   {
      NVRAM_EF_C2K_SIDB_ITEM_MANAGEMENT_CNIR_LID,
      NVRAM_EF_C2K_SIDB_ITEM_MANAGEMENT_CNIR_TOTAL,
      NVRAM_EF_C2K_SIDB_ITEM_MANAGEMENT_CNIR_SIZE,
      NVRAM_NORMAL(NVRAM_EF_ZERO_DEFAULT),
      NVRAM_CATEGORY_USER,
      NVRAM_ATTR_AVERAGE,
      "CK10",
      VER(NVRAM_EF_C2K_SIDB_ITEM_MANAGEMENT_CNIR_LID)
   },

   {
      NVRAM_EF_C2K_SIDB_ITEM_MESSAGE_LID,
      NVRAM_EF_C2K_SIDB_ITEM_MESSAGE_TOTAL,
      NVRAM_EF_C2K_SIDB_ITEM_MESSAGE_SIZE,
      NVRAM_NORMAL(NVRAM_EF_ZERO_DEFAULT),
      NVRAM_CATEGORY_USER,
      NVRAM_ATTR_AVERAGE,
      "CK11",
      VER(NVRAM_EF_C2K_SIDB_ITEM_MESSAGE_LID)
   },

   {
      NVRAM_EF_C2K_FILE_SESSION_LID,
      NVRAM_EF_C2K_FILE_SESSION_TOTAL,
      NVRAM_EF_C2K_FILE_SESSION_SIZE,
      NVRAM_NORMAL(NVRAM_EF_ZERO_DEFAULT),
      NVRAM_CATEGORY_USER,
      NVRAM_ATTR_AVERAGE,
      "CK12",
      VER(NVRAM_EF_C2K_FILE_SESSION_LID)
   },

   {
      NVRAM_EF_C2K_FILE_SF_LID,
      NVRAM_EF_C2K_FILE_SF_TOTAL,
      NVRAM_EF_C2K_FILE_SF_SIZE,
      NVRAM_NORMAL(NVRAM_EF_ZERO_DEFAULT),
      NVRAM_CATEGORY_USER,
      NVRAM_ATTR_AVERAGE,
      "CK13",
      VER(NVRAM_EF_C2K_FILE_SF_LID)
   },

   {
      NVRAM_EF_C2K_FILE_GPS_LID,
      NVRAM_EF_C2K_FILE_GPS_TOTAL,
      NVRAM_EF_C2K_FILE_GPS_SIZE,
      NVRAM_NORMAL(NVRAM_EF_ZERO_DEFAULT),
      NVRAM_CATEGORY_USER,
      NVRAM_ATTR_AVERAGE,
      "CK14",
      VER(NVRAM_EF_C2K_FILE_GPS_LID)
   },

#ifdef MTK_CBP_ENCRYPT_VOICE
   {
      NVRAM_EF_C2K_PSW_DBM_CRYPT_DATA_LID,
      NVRAM_EF_C2K_PSW_DBM_CRYPT_DATA_TOTAL,
      NVRAM_EF_C2K_PSW_DBM_CRYPT_DATA_SIZE,
      NVRAM_NORMAL(NVRAM_EF_ZERO_DEFAULT),
      NVRAM_CATEGORY_USER,
      NVRAM_ATTR_AVERAGE,
      "CK15",
      VER(NVRAM_EF_C2K_PSW_DBM_CRYPT_DATA_LID)
   },
#endif
   {
      NVRAM_EF_C2K_VAL_SMS_CBS_LID,
      NVRAM_EF_C2K_VAL_SMS_CBS_TOTAL,
      NVRAM_EF_C2K_VAL_SMS_CBS_SIZE,
      NVRAM_NORMAL(&gValSmsCbsInfo),
      NVRAM_CATEGORY_USER,
      NVRAM_ATTR_AVERAGE,
      "CK16",
      VER(NVRAM_EF_C2K_VAL_SMS_CBS_LID)
   },
   
   {
      NVRAM_EF_C2K_MOBILE_ID_LID,
      NVRAM_EF_C2K_MOBILE_ID_TOTAL,
      NVRAM_EF_C2K_MOBILE_ID_SIZE,
      NVRAM_NORMAL(&pswMobileIdValue),
#ifdef __NVRAM_OTP__      
      NVRAM_CATEGORY_OTP,
#else
      NVRAM_CATEGORY_IMPORTANT,
#endif
      #ifdef __NVRAM_OTP__  
      NVRAM_ATTR_AVERAGE | NVRAM_ATTR_FAULT_ASSERT,
      #else
      NVRAM_ATTR_AVERAGE | NVRAM_ATTR_FAULT_ASSERT
      #if defined (__CCCIFS_SUPPORT__)  
      | NVRAM_ATTR_COMMITTED
      #endif
      ,
      #endif
      "CK17",
      VER(NVRAM_EF_C2K_MOBILE_ID_LID)
   },

    {
        NVRAM_EF_C2K_VSIM_LID,
        NVRAM_EF_C2K_VSIM_TOTAL,
        NVRAM_EF_C2K_VSIM_SIZE,
        NVRAM_NORMAL(&C2KVsimValue),
        NVRAM_CATEGORY_USER,
        NVRAM_ATTR_AVERAGE,
        "CK18",
        VER(NVRAM_EF_C2K_VSIM_LID)
    },
   NVRAM_LTABLE_END
};

#endif /* __C2K_RAT__ */

#endif /* NVRAM_NOT_PRESENT */
