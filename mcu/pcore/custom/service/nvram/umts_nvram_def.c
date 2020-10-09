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
 * umts_nvram_def.c
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
 *
 * removed!
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
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
 *
 * removed!
 * removed!
 * removed!
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

#ifndef NVRAM_NOT_PRESENT

#include "kal_general_types.h"
#ifdef NVRAM_AUTO_GEN
#include "nvram_auto_gen.h"
#endif

#include "nvram_enums.h"
#include "nvram_defs.h"

/*
 *   User Headers & Default value
 */
#include "umts_nvram_def.h" 
#include "umts_nvram_editor.h"

// Default Values
#ifdef __UMTS_RAT__

static kal_uint8 const NVRAM_EF_UMTS_USIME_RRC_DYNAMIC_CAP_DEFAULT_FDD[] =
{
    // R99 CAP #29
    /* PDCP part */
#if defined(__RFC2507_SUPPORT__) && defined(__CUSTOMIZE_RFC2507_SUPPORT__)
    0x02, /* PDCP_supportForRfc2507: supported */
#else
    0x01, /* PDCP_supportForRfc2507: not supported */
#endif

#ifndef __UMTS_R5__
    0x00, /* MAX_HeaderCompressionLengthContext: 512 */
#else
    0x01, /* MAX_HeaderCompressionLengthContext: 1024 */
#endif

#if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif

    /* RLC part */
#ifdef __UMTS_R8__
    0x06, /* RRC_TotalRLC_AM_BufferSize: RRC_kb1000 */
#elif defined(__UMTS_R5__)
    0x05, /* RRC_TotalRLC_AM_BufferSize: RRC_kb500 */
#else
    0x04, /* RRC_TotalRLC_AM_BufferSize: RRC_kb150. */
#endif

    0x00, /* RRC_MaximumRLC_WindowSize: RRC_mws2047 */
    0x04, /* RRC_MaximumAM_EntityNumberRLC_Cap: RRC_am8 */

    /* UL TRCH part */
    0x01, /* ul_TransChCapability.modeSpecificInfo.selection: RRC_UL_TransChCapability_modeSpecificInfo_fdd_selected */
    0x08, /* ul_TransChCapability.maxNoBitsTransmitted: RRC_b10240 */
    0x00, /* ul_TransChCapability.maxConvCodeBitsTransmitted: RRC_b640 */
    0x02, /* ul_TransChCapability.turboEncodingSupport.selection: RRC_TurboSupport_supported_selected */
    0x08, /* ul_TransChCapability.turboEncodingSupport.choice.supported: RRC_b10240 */
    0x02, /* ul_TransChCapability.maxSimultaneousTransChs: RRC_MaxSimultaneousTransChsUL_e8 */
    0x03, /* ul_TransChCapability.maxTransmittedBlocks: RRC_MaxTransportBlocksUL_tb16 */
    0x05, /* ul_TransChCapability.maxNumberOfTFC: RRC_MaxNumberOfTFC_UL_tfc64 */
    0x00, /* ul_TransChCapability.maxNumberOfTF: RRC_tf32 */
    0x01, /* tdd.maxSimultaneousCCTrCH_Count: 1(TDD_R4 only), not used in FDD */
    /* DL TRCH part */
    0x08, /* maxNoBitsReceived: RRC_b10240 */
// Temporary modify from 1280bits to 640bits for 6290E1 HW.
//    0x01, /* maxConvCodeBitsReceived: RRC_b1280 */
#ifdef __UE_SIMULATOR__
    0x01, /* maxConvCodeBitsReceived: RRC_b1280 */
#else
/* Use Chip-ID to determine maxConvCodeBitsReceived. If 6290 E1 is no-longer used, we shall remove this checking */
#if defined( MT6290_S00 )
    0x00, /* maxConvCodeBitsReceived: RRC_b640 */
#else
    0x01, /* maxConvCodeBitsReceived: RRC_b1280 */
#endif
#endif
    
    0x02, /* turboDecodingSupport: RRC_TurboSupport_supported_selected */
    0x08, /* turboDecodingSupport.choice.supported: RRC_b10240 */
    0x01, /* maxSimultaneousTransChs: RRC_MaxSimultaneousTransChsDL_e8 */
    0x01, /* maxSimultaneousCCTrCH_Count: DL_TCH_MAXSIMCCTRCH_COUNT */
    0x03, /* maxReceivedTransportBlocks: RRC_MaxTransportBlocksDL_tb32 */
    0x05, /* maxNumberOfTFC: RRC_MaxNumberOfTFC_DL_tfc128 */
    0x01, /* maxNumberOfTF: RRC_tf64 */

    /* Capability for CSCE use (WCDMA prefered, not part of UE capability which report to Network) */
#ifdef __WCDMA_PREFERRED__
    0x28+ /* 2G RSSI penalty: default value is 40 */
#endif /* __WCDMA_PREFERRED__ */
    0x00,

    /* RF Frequency Capability Info */
    0x00, /* reserved, original is for RF band */
    0x02, /* power class for all frequency bands: 00: Power Class 1, 01: Power Class 2, 02: Power Class 3, 03: Power Class 4 */
    0xAA, /* reserved, original is for Power Class bitmask */
    0xAA, /* reserved, original is for Power Class bitmask */

    /* R99 CAP Additional part #5 */
    /* 20101020 Chi-Chung: According to PDCP request, turn off LSR on FDD R5R6 and MAUI branches */
    0x00, /* losslessSRNS_RelocationSupport: 0 not supported, 1 supported */

    0x00, /* cipheringAlgorithmCap.stringData[0] */
#if defined(__UMTS_R7__) && !defined(__UE_SIMULATOR__) && defined(__CUSTOMIZE_UEA2_UIA2_SUPPORT__)
    0x07, /* cipheringAlgorithmCap.stringData[1]: UEA2|UEA1|UEA0 */
#else
    0x03, /* cipheringAlgorithmCap.stringData[1]: UEA1|UEA0*/
#endif

    0x00, /* integrityProtectionAlgorithmCap.stringData[0] */
#if defined(__UMTS_R7__) && !defined(__UE_SIMULATOR__) && defined(__CUSTOMIZE_UEA2_UIA2_SUPPORT__)
    0x06  /* integrityProtectionAlgorithmCap.stringData[1]: UIA2|UIA1 */
#else
    0x02  /* integrityProtectionAlgorithmCap.stringData[1]: UIA1 */
#endif

    , /* Capability for RRCE use (not part of UE capability which report to Network) */
      /* bit 8~3: not used */
#if defined(__NO_PSDATA_SEND_SCRI__) || defined(__FAST_DORMANCY__)
    0x0a+
#endif /* defined(__NO_PSDATA_SEND_SCRI__) || defined(__FAST_DORMANCY__) */
#if 0  /* 6589: default setting changes to not send SCRI in PCH state for power saving optimization, also to meet some operators requirement. */
#ifdef __FAST_DORMANCY__
/* under construction !*/
#endif /* __FAST_DORMANCY__ */
#endif
    0x00

    , /* Capability for RRCE use (not part of UE capability which report to Network) */
      /* bit 8~3: not used 
       * bit 2: Turn on 3G Smart Paging Level 2 (RRCE listen paging each 2 DRX without learning)
       * bit 1: Turn on 3G Smart Paging */
#ifdef __SMART_PAGING_3G_FDD__
#ifdef __SMART_PAGING_3G_FDD_OFF__ /* This compile option only defined in MT6280 chip, used to keep the code sync with MT6583 and further product (Smart paging not turn on in MT6280) */
    0x00+
#else
    0x01+
#endif /* __SMART_PAGING_3G_FDD_OFF__ */
#endif /* __SMART_PAGING_3G_FDD__ */
    0x00

   ,  /* Capability for RRCE use (not part of UE capability which report to Network) */
      /* bit 8~7: not used 
       * bit 1: bypass integrity checking(ip checking always pass). 
       * e.g. 0x01: UE will bypass integrity checking for every DL RRC msg.
       *      0x00: UE will handle integrity checking as usual. */
   0x0

    /* Access Stratum Release Indicator */
   ,
#if defined(__UMTS_R11__)
   0x07 /* RRC_AccessStratumReleaseIndicator_rel_11 */
#elif defined(__UMTS_R10__)
   0x06 /* RRC_AccessStratumReleaseIndicator_rel_10 */
#elif defined(__UMTS_R9__)
   0x05 /* RRC_AccessStratumReleaseIndicator_rel_9 */
#elif defined(__UMTS_R8__)
   0x04 /* RRC_AccessStratumReleaseIndicator_rel_8 */
#elif defined(__UMTS_R7__)
   0x03 /* RRC_AccessStratumReleaseIndicator_rel_7 */
#elif defined(__UMTS_R6__)
   0x02 /* RRC_AccessStratumReleaseIndicator_rel_6 */
#elif defined(__UMTS_R5__)
   0x01 /* RRC_AccessStratumReleaseIndicator_rel_5 */
#elif defined(__UMTS_R4__)
   0x00 /* RRC_AccessStratumReleaseIndicator_rel_4 */
#else
   0x00
#endif

    /* PHYCH part */
   ,0x03, /* DL PhyChCap -  dlPhyCh_maxNoDPCH_PDSCH_Codes: 3 */


                          /* r3_cap1: USIME_R3_Cap1
                            * bit 8~5: maxNoDPDCH_BitsTransmitted
                            * bit 4~0: maxNoPhysChBitsReceived */

   0x40+ /* UL PhyChCap - maxNoDPDCH_BitsTransmitted: RRC_MaxNoDPDCH_BitsTransmitted_b9600 */
   0x08, /* DL PhyChCap - maxNoPhysChBitsReceived: RRC_MaxNoPhysChBitsReceived_b19200 */


                          /* r3_cap2: USIME_R3_Cap2
                            * bit 8~7: not used
                            * bit 6: sfn_sfnType2Capability
                            * bit 5~4: multiModeCapability
                            * bit 3: supportOfMulticarrier
                            * bit 2: supportOfGSM
                            * bit 1: supportForSF_512 */
   0x00+ /* sfn_sfnType2Capability: 0x20 supported, 0x00 not supported */

   //0x10+ /* RRC_MultiModeCapability_fdd_tdd */
   0x08+ /* RRC_MultiModeCapability_fdd */
   //0x00+ /* RRC_MultiModeCapability_tdd */

   0x00+ /* supportOfMulticarrier: 0x04 supported, 0x00 not supported */
#if defined (__GSM_RAT__)
   0x02+ /* supportOfGSM: 0x02 supported, 0x00 not supported */
#endif
   0x00, /* USIME_supportForSF_512: 0x01 supported, 0x00 not supported */

                          /* r3_cap3: USIME_R3_Cap3
                            * bit 8: validity_CellPCH_UraPCH
                            * bit 7: rx_tx_TimeDifferenceType2Capable
                            * bit 6: supportForIPDL
                            * bit 5: supportForUE_GPS_TimingOfCellFrames
                            * bit 4~3: networkAssistedGPS_Supported
                            * bit 2: ue_BasedOTDOA_Supported
                            * bit 1: standaloneLocMethodsSupported */
#ifdef __UAGPS_CP_SUPPORT__
   0x80+ /* validity_CellPCH_UraPCH: 0x80: supported, 0x00 not supported */
#endif

   0x00+ /* rx_tx_TimeDifferenceType2Capable: 0x40: supported, 0x00 not supported */
   0x00+ /* supportForIPDL: 0x20: supported, 0x00 not supported */

#if defined(__UAGPS_CP_SUPPORT__) && defined(__L1_GPS_REF_TIME_SUPPORT__)
   0x00+ /* supportForUE_GPS_TimingOfCellFrames: 0x10: supported, 0x00 not supported */
#endif

#ifdef __UAGPS_CP_SUPPORT__
   0x08+ /* networkAssistedGPS_Supported: RRC_NetworkAssistedGPS_Supported_bothNetworkAndUE_Based */
#else
   0x0C+ /* networkAssistedGPS_Supported: RRC_NetworkAssistedGPS_Supported_noNetworkAssistedGPS */
#endif

   0x00+ /* ue_BasedOTDOA_Supported: 0x02: supported, 0x00 not supported */

#ifdef __UAGPS_CP_SUPPORT__
   0x01+ /* standaloneLocMethodsSupported: 0x01: supported, 0x00 not supported */
#endif
   0x00

    /* R4 CAP */
#if defined(__UMTS_R4__) || defined(__UMTS_R5__)
    ,   // >#I
                           /* r4_cap1: USIME_R4_Cap1
                            * bit 8~6: not used
                            * bit 4: USIME_supportForRfc3095
                            * bit 3~0: maxROHC_ContextSessions */
    0x00+ /* USIME_supportForRfc3095: 0x10 support, 0x00 not support */
    0x00, /* maxROHC_ContextSessions: RRC_MaxROHC_ContextSessions_r4_s2 */

    0x00, /* reverseCompressionDepth_high_byte */
    0x00 /* reverseCompressionDepth_low_byte */
#endif /* defined(__UMTS_R4__) || defined(__UMTS_R5__) */

    /* R5 CAP */
#ifdef __UMTS_R5__
    ,   // >#I
                           /* r5_cap1: USIME_R5_Cap1
                            * bit 8~7: not used
                            * bit 6: supportForRfc3095ContextRelocation
                            * bit 5: supportOfUTRAN_ToGERAN_NACC
                            * bit 4: losslessDLRLCPDUSizeChange
                            * bit 2~3: dl_CapabilityWithSimultaneousHS_DSCHConfig 
                            * bit 1: dl_CapabilityWithSimultaneousHS_DSCHConfigValid */
    0x00+ /* supportForRfc3095ContextRelocation: 0x20 supported, 0x00 not supported */
    0x10+ /* supportOfUTRAN_ToGERAN_NACC: 0x10 supported, 0x00 not supported */
    0x00+ /* losslessDLRLCPDUSizeChange: 0x08 supported, 0x00 not supported */
    0x02+ /* dl_CapabilityWithSimultaneousHS_DSCHConfig: 0x00 kbps32, 0x02 kbps64, 0x04 kbps128, 0x06 kbps384*/
    0x01  /* fddPhysicalChannelCapab_hspdsch_edch: 0x01 valid, 0x00 not valid */
#endif /* __UMTS_R5__ */

    /* R6 CAP */
#ifdef __UMTS_R6__
    ,   // >#I
                          /* r6_cap1: USIME_R6_Cap1
                            * bit 8~5: not used
                            * bit 4: supportOfCSHandoverToGAN
                            * bit 3: doesNotBenifitFromBatteryConsumptionOptimization
                            * bit 2: supportForFDPCH 
                            * bit 1: supportForSIB11bis */
    0x00+ /* supportOfCSHandoverToGAN: 0x08 support, 0x00 not support */
#ifdef __NOT_BENEFIT_FROM_BATTERY_CONSUMPTION_OPTIMISATION__
    0x04+ /* doesNotBenifitFromBatteryConsumptionOptimization: 0x04 does not benefit, 0x00 benefit */
#endif    
    0x02+ /* supportForFDPCH: 0x02 supported, 0x00 not supported */
    0x01  /* supportForSIB11bis: 0x01 supported, 0x00 not supported */
#endif /* __UMTS_R6__ */

    /* R7 CAP */
#ifdef __UMTS_R7__
    ,   // >#I
                          /* r7_cap1: USIME_R7_Cap1
                            * bit 8: discontinuousDpcchTransmission
                            * bit 7: hsdschReceptionCellUraPch
                            * bit 6: hsdschReceptionCellFach
                            * bit 5: enhancedFdpch
                            * bit 4: hsscchlessHsdschOperation
                            * bit 3: mac_ehsSupport
                            * bit 2: supportOfTwoLogicalChannel
                            * bit 1: supportForCSVoiceoverHSPA */
#if defined(__FDD_ENHANCED_COMMON_STATE_SUPPORT__) && defined(__CUSTOMIZE_ENHANCED_COMMON_STATE_SUPPORT__)
    0x40+ /* hsdschReceptionCellUraPch: 0x40 supported, 0x00 not supported */
    0x20+ /* hsdschReceptionCellFach: 0x20 supported, 0x00 not supported*/
#endif

    0x10+ /* enhancedFdpch: 0x10 supported, 0x00 not supported */

#ifdef __FDD_CPC_SUPPORT__
    0x80+ /* discontinuousDpcchTransmission: 0x80 supported, 0x00 not supported */
#endif

#if defined(__FDD_CPC_SUPPORT__) && defined(__CUSTOMIZE_HSSCCH_LESS_SUPPORT__)
#ifdef __UE_SIMULATOR__
	0x08+ /* hsscchlessHsdschOperation: 0x08 supported, 0x00 not supported */
#else

    0x00+ /* hsscchlessHsdschOperation: 0x08 supported, 0x00 not supported */
#endif
#endif

#ifdef __FDD_MAC_EHS_SUPPORT__
    0x04+ /* mac_ehsSupport: 0x04 supported, 0x00 not supported */
#endif

    0x00+ /* supportOfTwoLogicalChannel: 0x02 supported, 0x00 not supported */

#if defined(__CSHSPA_SUPPORT__) && defined(__CUSTOMIZE_CSHSPA_SUPPORT__)
    0x01+  /* pdcp_supportForCSVoiceoverHSPA: 0x01 supported, 0x00 not supported */
#endif

    0x00,

                          /* r7_cap2: USIME_R7_Cap2
                            * bit 8: not used
                            * bit 7: supportofUL16QAM
                            * bit 6: supportofPSHandoverToGAN
                            * bit 5: supportofTxDivOnNonMIMOChannel
                            * bit 4: supportEDPDCHPowerInterpolation
                            * bit 3: supportForTwoDRXSchemesInPCH
                            * bit 2: supportForEDPCCHPowerBoosting
                            * bit 1: slotFormat4 */
    0x40+ /* supportofUL16QAM: 0x40 supported, 0x00 not supported */
    0x00+ /* supportofPSHandoverToGAN: 0x20 supported, 0x00 not supported */
    0x00+ /* supportofTxDivOnNonMIMOChannel: 0x10 supported, 0x00 not supported */
    0x00+ /* supportEDPDCHPowerInterpolation: 0x08 supported, 0x00 not supported */
    0x04+ /* supportForTwoDRXSchemesInPCH: 0x04 supported, 0x00 not supported */
    0x02+ /* supportForEDPCCHPowerBoosting: 0x02 supported, 0x00 not supported */
    0x01   /* slotFormat4: 0x01 supported, 0x00 not supported */
#endif /* __UMTS_R7__ */

    /* R8 CAP */
#ifdef __UMTS_R8__
    ,   // >#I
                          /* r8_cap1: USIME_R8_Cap1
                            * bit 5~8: eutraFeatureGroupIndicators
                            * bit 4: supportOfInterRATHOToEUTRAFDD
                            * bit 3: supportOfEUTRAFDD
                            * bit 2: supportOfHsdschDrxOperation
                            * bit 1: supportOfTargetCellPreConfig */

#ifdef __LTE_RAT__
    0xC0+ /* eutraFeatureGroupIndicators: 0xC0 fully supported, 0x00 not supported */
#ifdef __UMTS_R11__
    0x30+ /* UTRA CELL_FACH absolute priority cell reselection for high priority layers, for all layers  */
#endif
    0x08+ /* supportOfInterRATHOToEUTRAFDD: 0x08 supported, 0x00 not supported */
    0x04+ /* supportOfEUTRAFDD: 0x04 supported, 0x00 not supported */
#endif

#if defined(__FDD_HSDSCH_DRX_CELL_FACH_SUPPORT__) && defined(__CUSTOMIZE_HSDSCH_DRX_CELL_FACH_SUPPORT__)
    0x02+ /* supportOfHsdschDrxOperation: 0x02 supported, 0x00 not supported */
#endif

#if defined(__HSDSCH_CELL_CHANGE_ENHANCE_SUPPORT__) && defined(__CUSTOMIZE_HSDSCH_CELL_CHANGE_ENHANCE_SUPPORT__)
    0x01+ /* supportOfTargetCellPreConfig: 0x01 supported, 0x00 not supported */
#endif

    0x00,

                          /* r8_cap2: USIME_R8_Cap2
                            * bit 8: supportOfInterRATHOToEUTRATDD
                            * bit 7: supportOfEUTRATDD
                            * bit 6: supportCellSpecificTxDiversityinDC_Operation
                            * bit 5: supportForPriorityReselectionInUTRAN
                            * bit 4: supportOfCSG
                            * bit 3: supportOfMACiis
                            * bit 2: supportOfCommonEDCH
                            * bit 1: adjacentFrequencyMeasurements */
#ifdef __LTE_RAT__
    0x80+ /* supportOfInterRATHOToEUTRATDD: 0x80 supported, 0x00 not supported */
    0x40+ /* supportOfEUTRATDD: 0x40 supported, 0x00 not supported */
#endif

#ifdef __DCHSDPA_ADJ_FREQ_SUPPORT__
    0x20+ /* supportCellSpecificTxDiversityinDC_Operation: 0x20 supported, 0x00 not supported */
#endif

#ifdef __23G_PRI_RESEL_SUPPORT__
    0x10+ /* supportForPriorityReselectionInUTRAN: 0x10 supported, 0x00 not supported */
#endif

#ifdef __3G_CSG_SUPPORT__
    0x08+ /* supportOfCSG: 0x08 supported, 0x00 not supported */
#endif

#if defined(__FDD_MAC_IIS_SUPPORT__) && defined(__CUSTOMIZE_MAC_IIS_SUPPORT__)
    0x04+ /* supportOfMACiis: 0x04 supported, 0x00 not supported */
#endif

#if defined(__FDD_COMMON_EDCH_SUPPORT__) && defined(__CUSTOMIZE_COMMON_EDCH_SUPPORT__)
    0x02+ /* supportOfCommonEDCH: 0x02 supported, 0x00 not supported */
#endif

#ifdef __DCHSDPA_ADJ_FREQ_SUPPORT__
    0x01+  /* adjacentFrequencyMeasurements: 0x01 supported, 0x00 not supported */
#endif

    0x00
#endif /* __UMTS_R8__ */

    /* R10 CAP */
#ifdef __UMTS_R10__
    ,
                          /* r10_cap1: USIME_R10_Cap1
                           * bit 1: radioAccessCapabBandCombList
                           * bit 2: supportOfMimoOnlySingleStream
                           * bit 3: interBandMeasurements 
                           * bit 4: ExtendedMeasurementSupport
                           * bit 5: carrierCombination
                           * bit 6: interFrequencyDetectedSetMeasurements
                           * bit 7: enhancedInterFrequencyMeasurements
                           * bit 8: freqSpecificCompressedMode */
#if defined(__FDD_R11_FULL_SET_SUPPORT__) || defined(__UE_SIMULATOR__)
    0x01+ /* radioAccessCapabBandCombList: 0x01 supported, 0x00 not supported */
    0x00+ /* supportOfMimoOnlySingleStream: 0x02 supported, 0x00 not supported */
    0x04+ /* interBandMeasurements: 0x04 supported, 0x00 not supported */
    0x08+ /* ExtendedMeasurementSupport: 0x08 supported, 0x00 not supported */
    0x10+ /* carrierCombination: 0x10 supported, 0x00 not supported */
    0x20+ /* interFrequencyDetectedSetMeasurements: 0x20 supported, 0x00 not supported */
    0x40+ /* enhancedInterFrequencyMeasurements: 0x40 supported, 0x00 not supported */
    0x80+ /* freqSpecificCompressedMode:0x80 supported, 0x00 not supported */
    0x00
#else
    0x08+ /* ExtendedMeasurementSupport: 0x08 supported, 0x00 not supported */
    0x00
#endif    
    ,
                          /* r10_cap2: USIME_R10_Cap2
                           * bit 1: support3CHSDPA
                           * bit 2: support4CHSDPA
                           * bit 3: supportOfLoggedMeasurementsIdlePCH
                           * bit 4: supportOfUTRANANR
                           * bit 5: additionalSecondaryCells
                           * bit 6:  
                           * bit 7: supportofDCHSUPA 
                           * bit 8: 
                           */
#if defined(__FDD_R11_FULL_SET_SUPPORT__) || defined(__UE_SIMULATOR__)                           
    0x01+ /* support3CHSDPA: 0x01 supported, 0x00 not supported */
    0x00+ /* support4CHSDPA: 0x02 supported, 0x00 not supported */
    0x00+ /* supportOfLoggedMeasurementsIdlePCH: 0x04 supported, 0x00 not supported */
    0x00+ /* supportOfUTRANANR: 0x08 supported, 0x00 not supported */
    0x10+ /* additionalSecondaryCells: 0x10 supported, 0x00 not supported */
    0x00+ /* : 0x20 supported, 0x00 not supported */
    0x40+ /* supportofDCHSUPA: 0x40 supported, 0x00 not supported */                           
    0x00
#else
    0x00
#endif
#endif /* __UMTS_R10__ */
    /* R11 CAP */
#ifdef __UMTS_R11__
    ,
                          /* r11_cap1: USIME_R11_Cap1
                           * bit 1: cellsExcludedFromDetectedSetMeasurements
                           * bit 2: widebandRSRQFDDMeasurements
                           * bit 3: eutraSupportOfMFBI
                           * bit 4: umRlcReestViaReconfig
                           * bit 5: supportofMFBI
                           * bit 6: EUTRAFDDMeasurementReportingInCELLFACH 
                           * bit 7: HS_DSCHSecondDRXOperation 
                           */
#if defined(__FDD_R11_FULL_SET_SUPPORT__) || defined(__UE_SIMULATOR__)                                                      
    0x01+ /* cellsExcludedFromDetectedSetMeasurements: 0x01 supported, 0x00 not supported */
    0x02+ /* widebandRSRQFDDMeasurements: 0x02 supported, 0x00 not supported */
    0x04+ /* eutraSupportOfMFBI: 0x04 supported, 0x00 not supported */
    0x08+ /* umRlcReestViaReconfig: 0x08 supported, 0x00 not supported */ 
    0x10+ /* supportofMFBI: 0x10 supported, 0x00 not supported */
    0x20+ /* EUTRAFDDMeasurementReportingInCELLFACH: 0x20 supported, 0x00 not supported */
    0x40+ /* HS_DSCHSecondDRXOperation: 0x40 supported, 0x00 not supported */
    0x00
#else
    0x04+ /* eutraSupportOfMFBI: 0x04 supported, 0x00 not supported */
    0x10+ /* supportofMFBI: 0x10 supported, 0x00 not supported */
    0x00
#endif    
#endif

};
#ifdef __UMTS_FDD_MODE__

//#ifdef __BAND_PRIORITY_SEARCH__
static kal_uint8 const NVRAM_EF_UMTS_BAND_PRIORITY_DEFAULT[] =
{
        /**
         * these bytes are used to set the priority of each band.
         * Total size: 22bytes (one byte for each band)
         * Value(Priority) range: 0x00(the highest) ~ 0xFF(the lowest)
         * Default value for each band: 0xFF
         *
         * Band    I    II    III   IV     V    VI    VII   VIII
         *      +-----------------------------------------------+
         * byte |  0  |  1  |  2  |  3  |  4  |  5  |  6  |  7  |
         *      +-----------------------------------------------+
         *
         * Band   IX     X    XI    XII  XIII   XIV   XV    XVI
         *      +-----------------------------------------------+
         * byte |  8  |  9  | 10  | 11  | 12  | 13  | 14  | 15  |
         *      +-----------------------------------------------+
         *
         * Band  XVII  XVIII  XIX   XX    XXI  XXII XXIII  XXIV
         *      +-----------------------------------------------+
         * byte | 16  | 17  | 18  | 19  | 20  | 21  | 22  | 23  |
         *      +-----------------------------------------------+
         *
         * Band   XV   XVI
         *      +-----------+
         * byte | 24  | 25  |
         *      +-----------+
         */
  0xFF, /* Band I */
  0xFF, /* Band II */
  0xFF, /* Band III */
  0xFF, /* Band IV */
  0xFF, /* Band V */
  0xFF, /* Band VI */
  0xFF, /* Band VII */
  0xFF, /* Band VIII */
  0xFF, /* Band IX */
  0xFF, /* Band X */
  0xFF, /* Band XI */
  0xFF, /* Band XII */
  0xFF, /* Band XIII */
  0xFF, /* Band XIV */
  0xFF, /* Band XV */
  0xFF, /* Band XVI */
  0xFF, /* Band XVII */
  0xFF, /* Band XVIII */
  0xFF, /* Band XIX */
  0xFF, /* Band XX */
  0xFF, /* Band XXI */
  0xFF, /* Band XXII */
  0xFF, /* Band XXIII */
  0xFF, /* Band XXIV */
  0xFF, /* Band XXV */
  0xFF  /* Band XXVI */
};
//#endif /* __BAND_PRIORITY_SEARCH__ */

#endif /* __UMTS_FDD_MODE__ */

/* The default data was encoded result of SCSI's ScsiFrequencyInfoRepository which saves the 110 plmns' 3 uarfcn. */
static kal_uint8 const NVRAM_EF_UMTS_FREQUENCY_REPOSITORY_DEFAULT[NVRAM_EF_UMTS_FREQUENCY_REPOSITORY_SIZE] =
{0XA5, 0X02,
0X06, 0X00, 0X00, 0X03, 0X0F, 0XA9, 0X44, 0XA5, 
0X76, 0X04, 0X0C, 0X00, 0X00, 0X0C, 0X1F, 0X54, 0X47, 0X52, 
0XA4, 0X08, 0X18, 0X00, 0X00, 0X04, 0X3E, 0XA7, 0XC6, 0XA0, 
0XA8, 0X10, 0X30, 0X00, 0X00, 0X10, 0X7D, 0X4D, 0XC5, 0X32, 
0XF0, 0X20, 0X00, 0X80, 0X00, 0X10, 0XFA, 0XA2, 0X2A, 0X8E, 
0XE0, 0X40, 0X01, 0X00, 0X20, 0X01, 0XF5, 0X28, 0X94, 0XAE, 
0XC0, 0X80, 0X02, 0X00, 0X80, 0X03, 0XDA, 0X63, 0XE0, 0X40, 
0X60, 0X80, 0X60, 0X01, 0XED, 0X41, 0X30, 0X20, 0X30, 0X40, 
0X30, 0X30, 0XFA, 0XA5, 0X4A, 0X8E, 0XE0, 0X40, 0X60, 0X80, 
0X20, 0XA1, 0XFD, 0X3B, 0X14, 0XF8, 0X53, 0X7F, 0X02, 0X03, 
0X04, 0X01, 0X00, 0X0F, 0XA9, 0X8D, 0XA6, 0X96, 0X04, 0X06, 
0X08, 0X04, 0X00, 0X1F, 0XD2, 0X89, 0X4B, 0XA5, 0X2B, 0X90, 
0X40, 0X50, 0X40, 0X10, 0X90, 0XFE, 0X95, 0XDA, 0X51, 0X29, 
0X76, 0X82, 0X02, 0X82, 0X00, 0X03, 0X07, 0XD4, 0XF8, 0XD3, 
0XB3, 0X04, 0X05, 0X04, 0X00, 0X03, 0X0F, 0XEA, 0X24, 0XA8, 
0XF2, 0XA5, 0X48, 0X20, 0X28, 0X20, 0X00, 0X00, 0X7F, 0X4D, 
0X3D, 0X31, 0XD4, 0XDF, 0XC1, 0X01, 0X81, 0X80, 0X00, 0X43, 
0XDA, 0X50, 0XE0, 0X80, 0XC0, 0XC1, 0X01, 0X21, 0XF5, 0X31, 
0XD4, 0XD3, 0X41, 0X01, 0X81, 0X82, 0X40, 0X83, 0XEA, 0X82, 
0XAA, 0X23, 0X82, 0X03, 0X03, 0X04, 0X83, 0X87, 0XD4, 0XEC, 
0XD3, 0XE5, 0X02, 0X06, 0X02, 0X00, 0X01, 0X0F, 0X6A, 0X54, 
0X81, 0X03, 0X01, 0X00, 0X01, 0X07, 0XD4, 0XA2, 0X52, 0XB9, 
0X02, 0X06, 0X02, 0X00, 0X03, 0X0F, 0X69, 0XA7, 0X81, 0X03, 
0X01, 0X00, 0X03, 0X87, 0XB5, 0X11, 0X40, 0X80, 0X80, 0X80, 
0X40, 0X03, 0XDA, 0X95, 0XA0, 0X40, 0X40, 0X41, 0X21, 0X21, 
0XF5, 0X41, 0X75, 0X12, 0X40, 0X80, 0X80, 0X80, 0X00, 0X43, 
0XDA, 0X63, 0XA0, 0X40, 0X40, 0X41, 0X01, 0X01, 0XED, 0X38, 
0X10, 0X50, 0X10, 0X00, 0X00, 0X80, 0XF6, 0X97, 0X58, 0X28, 
0X08, 0X00, 0X08, 0X08, 0X7B, 0X4E, 0X04, 0X14, 0X04, 0X00, 
0X00, 0X04, 0X3D, 0XA7, 0X66, 0X0A, 0X02, 0X00, 0X10, 0X12, 
0X1E, 0XD2, 0X87, 0X05, 0X01, 0X00, 0X01, 0X00, 0X0F, 0X69, 
0XA7, 0X82, 0X80, 0X82, 0X80, 0X01, 0X07, 0XD4, 0XEC, 0XD3, 
0X81, 0X05, 0X01, 0X05, 0X00, 0X05, 0X0F, 0X69, 0X8E, 0X82, 
0X80, 0X82, 0X80, 0X01, 0X87, 0XF4, 0XA1, 0X22, 0X46, 0X88, 
0X54, 0X08, 0X14, 0X14, 0X00, 0X1C, 0X3E, 0XA6, 0X36, 0X94, 
0X38, 0X10, 0X28, 0X28, 0X00, 0X18, 0X7B, 0X4E, 0XCC, 0X18, 
0X00, 0X08, 0X00, 0X0C, 0X3E, 0XA5, 0X0A, 0X95, 0XB8, 0X30, 
0X00, 0X10, 0X00, 0X10, 0X7B, 0X4D, 0X34, 0X10, 0X14, 0X00, 
0X00, 0X20, 0X3D, 0XA9, 0X52, 0X08, 0X08, 0X00, 0X02, 0X00, 
0X1F, 0X88, 0X1B, 0X4E, 0X05, 0X3B, 0X10, 0X40, 0X40, 0X00, 
0X20, 0X00, 0XFE, 0XA0, 0XBA, 0X8F, 0X2A, 0X24, 0X83, 0X02, 
0X82, 0X80, 0X80, 0X07, 0XB4, 0XEC, 0X41, 0X81, 0X41, 0X40, 
0X00, 0X43, 0XEA, 0X57, 0X29, 0X42, 0X83, 0X81, 0X02, 0X00, 
0X02, 0X87, 0XA8, 0X9F, 0X41, 0XC0, 0X81, 0X00, 0X00, 0XC3, 
0XDA, 0X50, 0XE0, 0X60, 0X60, 0X80, 0X00, 0X41, 0XE8, 0X87, 
0XF0, 0X40, 0X00, 0X40, 0X30, 0X40, 0XF6, 0XA0, 0XA8, 0X20, 
0X00, 0X20, 0X28, 0X08, 0X7B, 0X4C, 0X6C, 0X0C, 0X04, 0X00, 
0X10, 0X04, 0X01, 0X45, 0X4E, 0X04, 0X00, 0X08, 0X00, 0X08, 
0X1E, 0XD2, 0XB9, 0X02, 0X00, 0X04, 0X00, 0X08, 0X0F, 0X69, 
0XA5, 0X81, 0X00, 0X02, 0X00, 0X83, 0X07, 0XB5, 0X2A, 0X40, 
0X80, 0X42, 0X40, 0X00, 0X43, 0XDA, 0X50, 0XA0, 0X40, 0X21, 
0X20, 0X20, 0X01, 0XED, 0X3E, 0X30, 0X20, 0X30, 0X80, 0X00, 
0X10, 0XF6, 0X9A, 0X68, 0X10, 0X18, 0X40, 0X00, 0X10, 0X7B, 
0X51, 0XEC, 0X08, 0X0C, 0X20, 0X00, 0X18, 0X3D, 0XA5, 0X6E, 
0X04, 0X06, 0X10, 0X04, 0X00, 0X1E, 0XD3, 0XE3, 0X02, 0X04, 
0X04, 0X00, 0X05, 0X0F, 0X69, 0X75, 0X81, 0X02, 0X02, 0X00, 
0X81, 0X07, 0XB4, 0XF9, 0X40, 0X81, 0X01, 0X02, 0X40, 0X43, 
0XDA, 0X95, 0X60, 0X40, 0X80, 0XC0, 0X00, 0X21, 0XED, 0X38, 
0X10, 0X20, 0X40, 0X60, 0X00, 0X20, 0XF6, 0X98, 0XD8, 0X10, 
0X20, 0X30, 0X00, 0X18, 0X7B, 0X50, 0X54, 0X08, 0X14, 0X00, 
0X00, 0X04, 0X3D, 0XA8, 0X2A, 0X04, 0X0A, 0X00, 0X00, 0X04, 
0X1E, 0XD3, 0X7F, 0X02, 0X05, 0X00, 0X09, 0X09, 0X0F, 0X6A, 
0X54, 0X81, 0X03, 0X04, 0X00, 0X00, 0X87, 0XD4, 0XAE, 0XD2, 
0XED, 0X02, 0X06, 0X08, 0X00, 0X03, 0X0F, 0X69, 0XC0, 0X81, 
0X03, 0X04, 0X00, 0X03, 0X07, 0XD5, 0X05, 0X54, 0X79, 0X02, 
0X07, 0X02, 0X00, 0X01, 0X0F, 0X69, 0XF1, 0X81, 0X03, 0X81, 
0X00, 0X01, 0X07, 0XB5, 0X2A, 0XC0, 0X81, 0XC0, 0X80, 0X01, 
0X43, 0XEA, 0X51, 0X29, 0X5D, 0X82, 0X01, 0X02, 0X80, 0X00, 
0X87, 0XB4, 0XDF, 0XC1, 0X00, 0X81, 0X40, 0X00, 0X83, 0XDA, 
0X89, 0X20, 0XA0, 0X00, 0XA0, 0X00, 0X41, 0XED, 0X3E, 0X30, 
0X50, 0X00, 0X50, 0X00, 0X60, 0XF6, 0X94, 0X38, 0X30, 0X18, 
0X48, 0X00, 0X10, 0X7D, 0X4A, 0X15, 0X2B, 0X70, 0X40, 0X60, 
0X00, 0X00, 0X10, 0XFA, 0X9C, 0X0A, 0X76, 0X60, 0X80, 0X00, 
0X80, 0X80, 0XA1, 0XED, 0X4A, 0X25, 0X00, 0X00, 0X01, 0X00, 
0X01, 0X0F, 0XE9, 0XCC, 0XA5, 0X0E, 0X96, 0X88, 0X10, 0X30, 
0X00, 0X00, 0X18, 0X7D, 0X4A, 0X25, 0X2B, 0XA0};

#if defined(__UMTS_FDD_MODE__) && defined(__UMTS_R7__)
static nvram_ef_umts_dmcr_setting_struct const NVRAM_EF_UMTS_DMCR_SETTING_DEFAULT[] =
{
    /**
     * User can use this setting to control which operator (PLMN) need to disable DMCR feature.
     * If UE try to camp on cells of these PLMNs, DMCR feature is disable.
     *
     * The format of each PLMN is defined as below:
     * MCC1, MCC2, MCC3, MNC1, MNC2, MNC3,   //disable_PLMN[x]
     *
     * For example, if user want to disable DMCR on CHT(46692f)
     * add it into this list as below:
     * 0x04, 0x06, 0x06, 0x09, 0x02, 0x0f,   //disable_PLMN[0]
     */
    {
       {
          {0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f},   //disable_PLMN[0]
          {0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f},   //disable_PLMN[1]
          {0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f},   //disable_PLMN[2]
          {0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f},   //disable_PLMN[3]
          {0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f},   //disable_PLMN[4]
          {0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f},   //disable_PLMN[5]
          {0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f},   //disable_PLMN[6]
          {0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f},   //disable_PLMN[7]
          {0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f},   //disable_PLMN[8]
          {0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f},   //disable_PLMN[9]
          {0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f},   //disable_PLMN[10]
          {0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f},   //disable_PLMN[11]
          {0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f},   //disable_PLMN[12]
          {0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f},   //disable_PLMN[13]
          {0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f},   //disable_PLMN[14]
          {0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f}    //disable_PLMN[15]
       }
    }
};

static nvram_ef_umts_sib_skip_setting_struct const NVRAM_EF_UMTS_SIB_SKIP_SETTING_DEFAULT[] =
{
    /**
     * ********** HIGH RISK!! Need to set it carafully. **********
     * If DMCR is not supported by some operators, may use this setting to speed up the CSFB time.
     * 'BUT' there are highly potential risks that side effects (ex: call drop) may happen if implicitly skipping SIB11/12.
     * Highly recommend 'NOT' to use this setting.
     *
     * User can use this setting to control which operator (PLMN) need to enable SIB11/12 skipping for CSFB.
     * If UE try to camp on cells of these PLMNs while CSFB is ongoing, SIB11/12 skipping is enable if DMCR not supported.
     *
     * The format of each PLMN is defined as below:
     * MCC1, MCC2, MCC3, MNC1, MNC2, MNC3,   //enable_PLMN[x]
     *
     * For example, if user want to enable SIB11/12 skipping on CHT(46692f)
     * add it into this list as below:
     * 0x04, 0x06, 0x06, 0x09, 0x02, 0x0f,   //enable_PLMN[0]
     */
    {
       {
          {0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f},   //enable_PLMN[0]
          {0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f},   //enable_PLMN[1]
          {0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f},   //enable_PLMN[2]
          {0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f},   //enable_PLMN[3]
          {0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f},   //enable_PLMN[4]
          {0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f},   //enable_PLMN[5]
          {0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f},   //enable_PLMN[6]
          {0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f},   //enable_PLMN[7]
          {0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f},   //enable_PLMN[8]
          {0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f},   //enable_PLMN[9]
          {0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f},   //enable_PLMN[10]
          {0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f},   //enable_PLMN[11]
          {0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f},   //enable_PLMN[12]
          {0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f},   //enable_PLMN[13]
          {0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f},   //enable_PLMN[14]
          {0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f}    //enable_PLMN[15]
       }
    }
};
#endif /* __UMTS_FDD_MODE__ && __UMTS_R7__ */

static kal_uint8 const NVRAM_EF_UMTS_USIME_RRC_DYNAMIC_CAP_DEFAULT_TDD[] =
{
    /* PDCP part */
#if defined(__RFC2507_SUPPORT__) && defined(__CUSTOMIZE_RFC2507_SUPPORT__)
    0x02, /* PDCP_supportForRfc2507: supported */
#else
    0x01, /* PDCP_supportForRfc2507: not supported */
#endif /* __RFC2507_SUPPORT__ */

    0x01, /* MAX_HeaderCompressionLengthContext:  1024 */ 

    /* RLC part */
#ifdef __UMTS_R7__
        0x05, /* RRC_TotalRLC_AM_BufferSize: RRC_kb150. */
#else
        0x04, /* RRC_TotalRLC_AM_BufferSize: RRC_kb500 */
#endif

    //0x04, /* RRC_TotalRLC_AM_BufferSize: RRC_kb150(TDD_R4). For R5, remember to revise the later-release raw data in USIME
             //and keep buffer_size_R99 <= buffer_size_R5 */
    0x00, /* RRC_MaximumRLC_WindowSize: RRC_mws2047(TDD_R4) */
    //0x06, /* RRC_MaximumAM_EntityNumberRLC_Cap: RRC_am30(TDD_R4) */
#ifdef __UMTS_R7__
        0x04, /* RRC_MaximumAM_EntityNumberRLC_Cap: RRC_am30(TDD_R4) */
#else
        0x06, /* RRC_MaximumAM_EntityNumberRLC_Cap: RRC_am8(TDD_R4) */
#endif
    /* UL TRCH part */
    0x02, /* ul_TransChCapability.modeSpecificInfo.selection: RRC_UL_TransChCapability_modeSpecificInfo_tdd_selected */
    0x07, /* ul_TransChCapability.maxNoBitsTransmitted: RRC_b8960(TDD_R4) */
    0x00, /* ul_TransChCapability.maxConvCodeBitsTransmitted: RRC_b640(TDD_R4) */
    0x02, /* ul_TransChCapability.turboEncodingSupport.selection: RRC_TurboSupport_supported_selected */
    0x07, /* ul_TransChCapability.turboEncodingSupport.choice.supported: RRC_b8960 */
    0x02, /* ul_TransChCapability.maxSimultaneousTransChs: RRC_MaxSimultaneousTransChsUL_e8 */
    0x04, /* ul_TransChCapability.maxTransmittedBlocks: RRC_MaxTransportBlocksUL_tb32 */
    0x05, /* ul_TransChCapability.maxNumberOfTFC: RRC_MaxNumberOfTFC_UL_tfc64 */
    0x00, /* ul_TransChCapability.maxNumberOfTF: RRC_tf32 */
    0x01, /* transportChannelCapability.ul_TransChCapability.modeSpecificInfo.choice.tdd.maxSimultaneousCCTrCH_Count: 1(TDD_R4 only) */
    /* DL TRCH part */
    0x07, /* maxNoBitsReceived: RRC_b8960(TDD_R4) */
    0x00, /* maxConvCodeBitsReceived: RRC_b640(TDD_R4) */
    0x02, /* turboDecodingSupport: RRC_TurboSupport_supported_selected */
    0x07, /* turboDecodingSupport.choice.supported: RRC_b8960 */
    0x01, /* maxSimultaneousTransChs: RRC_MaxSimultaneousTransChsDL_e8 */
    0x01, /* maxSimultaneousCCTrCH_Count: DL_TCH_MAXSIMCCTRCH_COUNT */
    0x03, /* maxReceivedTransportBlocks: RRC_MaxTransportBlocksDL_tb32 */
#ifdef __AST1001__
    0x05, /* maxNumberOfTFC: RRC_MaxNumberOfTFC_DL_tfc128 */
#else /* __AST2001__ */
    0x04, /* maxNumberOfTFC: RRC_MaxNumberOfTFC_DL_tfc96 */
#endif
    0x01, /* maxNumberOfTF: RRC_tf64 */

    /* RF Frequency Capability Info */
    0x00, /* reserved, original is for RF band */
    0x00, /* reserve for future band use, currently this shall be set to 0 */
    0x01, /* 0: Power Class 1, 1: Power Class 2, 2: Power Class 3, 3: Power Class 4  */
    0x00, /* TDD_R4 sync with FDD, dummy byte */
    0x00, /* TDD_R4 sync with FDD, dummy byte */

    /* R99 CAP Additional part #5 */
    0x00, /* losslessSRNS_RelocationSupport: 1 supported */
    0x00, /* cipheringAlgorithmCap.stringData[0] */
#ifdef __UMTS_R7__
    //0x07, /* cipheringAlgorithmCap.stringData[1]: UEA2|UEA1|UEA0 */
    0x01,
#else
    0x01, /* cipheringAlgorithmCap.stringData[1]: UEA0*/
#endif

    0x00, /* integrityProtectionAlgorithmCap.stringData[0] */
#ifdef __UMTS_R7__
    //0x06  /* integrityProtectionAlgorithmCap.stringData[1]: UIA2|UIA1 */
    0x02
#else
    0x02  /* integrityProtectionAlgorithmCap.stringData[1]: UIA1 */
#endif

,   /* Capability for RRCE use (not part of UE capability which report to Network) */
       /* bit 8~3: not used */
#if defined(__NO_PSDATA_SEND_SCRI__) || defined(__FAST_DORMANCY__)
    0x02+
#endif /* defined(__NO_PSDATA_SEND_SCRI__) || defined(__FAST_DORMANCY__) */
#ifdef __FAST_DORMANCY__
    0x01+
#endif /* __FAST_DORMANCY__ */
    0x00

    , /* Capability for RRCE use (not part of UE capability which report to Network) */
                           /* bit 8~3: not used 
                                                 * bit 2: Turn on 3G Smart Paging Level 2 (RRCE listen paging each 2 DRX without learning)
                                                 * bit 1: Turn on 3G Smart Paging */
#ifdef __SMART_PAGING_3G_FDD__
#ifdef __SMART_PAGING_3G_FDD_OFF__ /* This compile option only defined in MT6280 chip, used to keep the code sync with MT6583 and further product (Smart paging not turn on in MT6280) */
    0x00+
#else
    0x01+
#endif /* __SMART_PAGING_3G_FDD_OFF__ */
#endif /* __SMART_PAGING_3G_FDD__ */
    0x00

    /* Access Stratum Release Indicator */
   ,
#if defined(__UMTS_R9__)
    0x05 /* RRC_AccessStratumReleaseIndicator_rel_9 */
#elif defined(__UMTS_R8__)
   0x04 /* RRC_AccessStratumReleaseIndicator_rel_8 */
#elif defined(__UMTS_R7__)
   0x03 /* RRC_AccessStratumReleaseIndicator_rel_7 */
#elif defined(__UMTS_R6__)
   0x02 /* RRC_AccessStratumReleaseIndicator_rel_6 */
#elif defined(__UMTS_R5__)
   0x01 /* RRC_AccessStratumReleaseIndicator_rel_5 */
#elif defined(__UMTS_R4__)
   0x00 /* RRC_AccessStratumReleaseIndicator_rel_4 */
#else
   0x00
#endif

    /* PHYCH part */
   ,0x03, /* DL PhyChCap -  dlPhyCh_maxNoDPCH_PDSCH_Codes: 3 */


                          /* r3_cap1: USIME_R3_Cap1
                            * bit 8~5: maxNoDPDCH_BitsTransmitted
                            * bit 4~0: maxNoPhysChBitsReceived */

   0x40+ /* UL PhyChCap - maxNoDPDCH_BitsTransmitted: RRC_MaxNoDPDCH_BitsTransmitted_b9600 */
   0x08, /* DL PhyChCap - maxNoPhysChBitsReceived: RRC_MaxNoPhysChBitsReceived_b19200 */


                          /* r3_cap2: USIME_R3_Cap2
                            * bit 8~7: not used
                            * bit 6: sfn_sfnType2Capability
                            * bit 5~4: multiModeCapability
                            * bit 3: supportOfMulticarrier
                            * bit 2: supportOfGSM
                            * bit 1: supportForSF_512 */
   0x00+ /* sfn_sfnType2Capability: 0x20 supported, 0x00 not supported */

   0x00+ /* RRC_MultiModeCapability_tdd */

   0x00+ /* supportOfMulticarrier: 0x04 supported, 0x00 not supported */
#if defined (__GSM_RAT__)
   0x02+ /* supportOfGSM: 0x02 supported, 0x00 not supported */
#endif
   0x00, /* USIME_supportForSF_512: 0x01 supported, 0x00 not supported */

                          /* r3_cap3: USIME_R3_Cap3
                            * bit 8: validity_CellPCH_UraPCH
                            * bit 7: rx_tx_TimeDifferenceType2Capable
                            * bit 6: supportForIPDL
                            * bit 5: supportForUE_GPS_TimingOfCellFrames
                            * bit 4~3: networkAssistedGPS_Supported
                            * bit 2: ue_BasedOTDOA_Supported
                            * bit 1: standaloneLocMethodsSupported */
#ifdef __TDD_UAGPS_CP_SUPPORT__
   0x80+ /* validity_CellPCH_UraPCH: 0x80: supported, 0x00 not supported */
#endif

   0x00+ /* rx_tx_TimeDifferenceType2Capable: 0x40: supported, 0x00 not supported */
   0x00+ /* supportForIPDL: 0x20: supported, 0x00 not supported */

#if defined(__TDD_UAGPS_CP_SUPPORT__) && defined(__L1_GPS_REF_TIME_SUPPORT__)
   0x00+ /* supportForUE_GPS_TimingOfCellFrames: 0x10: supported, 0x00 not supported */
#endif

#ifdef __TDD_UAGPS_CP_SUPPORT__
   0x08+ /* networkAssistedGPS_Supported: RRC_NetworkAssistedGPS_Supported_bothNetworkAndUE_Based */
#else
   0x0C+ /* networkAssistedGPS_Supported: RRC_NetworkAssistedGPS_Supported_noNetworkAssistedGPS */
#endif

   0x00+ /* ue_BasedOTDOA_Supported: 0x02: supported, 0x00 not supported */

#ifdef __TDD_UAGPS_CP_SUPPORT__
   0x01+ /* standaloneLocMethodsSupported: 0x01: supported, 0x00 not supported */
#endif
   0x00

    /* R4 CAP */
#if defined(__UMTS_R4__) || defined(__UMTS_R5__)
    ,   // >#I
                           /* r4_cap1: USIME_R4_Cap1
                            * bit 8~6: not used
                            * bit 4: USIME_supportForRfc3095
                            * bit 3~0: maxROHC_ContextSessions */
    0x00+ /* USIME_supportForRfc3095: 0x10 support, 0x00 not support */
    0x00, /* maxROHC_ContextSessions: RRC_MaxROHC_ContextSessions_r4_s2 */

    0x00, /* reverseCompressionDepth_high_byte */
    0x00 /* reverseCompressionDepth_low_byte */
#endif /* defined(__UMTS_R4__) || defined(__UMTS_R5__) */

    /* R5 CAP */
#ifdef __UMTS_R5__
    ,   // >#I
                           /* r5_cap1: USIME_R5_Cap1
                            * bit 8~7: not used
                            * bit 6: supportForRfc3095ContextRelocation
                            * bit 5: supportOfUTRAN_ToGERAN_NACC
                            * bit 4: losslessDLRLCPDUSizeChange
                            * bit 2~3: dl_CapabilityWithSimultaneousHS_DSCHConfig 
                            * bit 1: dl_CapabilityWithSimultaneousHS_DSCHConfigValid */
    0x00+ /* supportForRfc3095ContextRelocation: 0x20 supported, 0x00 not supported */
    0x10+ /* supportOfUTRAN_ToGERAN_NACC: 0x10 supported, 0x00 not supported */
    0x00+ /* losslessDLRLCPDUSizeChange: 0x08 supported, 0x00 not supported */
    0x02+ /* dl_CapabilityWithSimultaneousHS_DSCHConfig: 0x00 kbps32, 0x02 kbps64, 0x04 kbps128, 0x06 kbps384*/
    0x01  /* fddPhysicalChannelCapab_hspdsch_edch: 0x01 valid, 0x00 not valid */
#endif /* __UMTS_R5__ */

    /* R6 CAP */
#ifdef __UMTS_R6__
    ,   // >#I
                          /* r6_cap1: USIME_R6_Cap1
                            * bit 8~5: not used
                            * bit 4: supportOfCSHandoverToGAN
                            * bit 3: doesNotBenifitFromBatteryConsumptionOptimization
                            * bit 2: supportForFDPCH 
                            * bit 1: supportForSIB11bis */
    0x00+ /* supportOfCSHandoverToGAN: 0x08 support, 0x00 not support */
#ifdef __NOT_BENEFIT_FROM_BATTERY_CONSUMPTION_OPTIMISATION__
    0x04+ /* doesNotBenifitFromBatteryConsumptionOptimization: 0x04 does not benefit, 0x00 benefit */
#endif 
    0x00+ /* supportForFDPCH: 0x02 supported, 0x00 not supported */
    //0x01,  /* supportForSIB11bis: 0x01 supported, 0x00 not supported */
    0x00   /*TDD not support but FDD support*/
#endif /* __UMTS_R6__ */

    /* R7 CAP */
#ifdef __UMTS_R7__
    ,   // >#I
                          /* r7_cap1: USIME_R7_Cap1
                            * bit 8: discontinuousDpcchTransmission
                            * bit 7: hsdschReceptionCellUraPch
                            * bit 6: hsdschReceptionCellFach
                            * bit 5: enhancedFdpch
                            * bit 4: hsscchlessHsdschOperation
                            * bit 3: mac_ehsSupport
                            * bit 2: supportOfTwoLogicalChannel
                            * bit 1: supportForCSVoiceoverHSPA */
#ifdef __TDD_ENHANCED_COMMON_STATE_SUPPORT__
    0x40+ /* hsdschReceptionCellUraPch: 0x40 supported, 0x00 not supported */
    0x20+ /* hsdschReceptionCellFach: 0x20 supported, 0x00 not supported*/
#endif

    0x00+ /* enhancedFdpch: 0x10 supported, 0x00 not supported */

#ifdef __TDD_CPC_SUPPORT__
    0x80+ /* discontinuousDpcchTransmission: 0x80 supported, 0x00 not supported */
    0x08+ /* hsscchlessHsdschOperation: 0x08 supported, 0x00 not supported */
#endif

#ifdef __TDD_MAC_EHS_SUPPORT__
    //0x04+ /* mac_ehsSupport: 0x04 supported, 0x00 not supported */
    0x00+   /*open this compile option but not surpport this capability*/
#endif
    0x00+ /* supportOfTwoLogicalChannel: 0x02 supported, 0x00 not supported */
#ifdef __CSHSPA_SUPPORT__
    0x00+  /* pdcp_supportForCSVoiceoverHSPA: 0x01 supported, 0x00 not supported */
#endif
    0x00,

                          /* r7_cap2: USIME_R7_Cap2
                            * bit 8~7: not used
                            * bit 6: supportofPSHandoverToGAN
                            * bit 5: supportofTxDivOnNonMIMOChannel
                            * bit 4: supportEDPDCHPowerInterpolation
                            * bit 3: supportForTwoDRXSchemesInPCH
                            * bit 2: supportForEDPCCHPowerBoosting
                            * bit 1: slotFormat4 */
    0x00+ /* supportofPSHandoverToGAN: 0x20 supported, 0x00 not supported */
#ifdef __DCHSDPA_ADJ_FREQ_SUPPORT__
    0x00+ /* supportofTxDivOnNonMIMOChannel: 0x10 supported, 0x00 not supported */
#endif
    0x00+ /* supportEDPDCHPowerInterpolation: 0x08 supported, 0x00 not supported */
    0x00+ /* supportForTwoDRXSchemesInPCH: 0x04 supported, 0x00 not supported */
    0x00+ /* supportForEDPCCHPowerBoosting: 0x02 supported, 0x00 not supported */
    0x00   /* slotFormat4: 0x01 supported, 0x00 not supported */
#endif /* __UMTS_R7__ */

    /* R8 CAP */
#ifdef __UMTS_R9__
    ,   // >#I
                          /* r9_cap1: USIME_R8_Cap1
                            * bit 5~8: eutraFeatureGroupIndicators
                            * bit 4: supportOfInterRATHOToEUTRATDD
                            * bit 3: supportOfEUTRATDD
                            * //bit 2: supportOfHsdschDrxOperation
                            * //bit 1: supportOfTargetCellPreConfig
                            * bit 2: supportOfSPSOperation
                            * bit 1: supportOfControlChannelDRXOperation */

#ifdef __LTE_RAT__
    0xC0+ /* eutraFeatureGroupIndicators: 0xC0 fully supported, 0x00 not supported */
    0x08+ /* supportOfInterRATHOToEUTRATDD: 0x08 supported, 0x00 not supported */
    0x04+ /* supportOfEUTRATDD: 0x04 supported, 0x00 not supported */
#endif


    0x02+ /* supportOfSPSOperation: 0x02 supported, 0x00 not supported */
    0x01+ /* supportOfControlChannelDRXOperation: 0x01 supported, 0x00 not supported */
    0x00,

                          /* r8_cap2: USIME_R8_Cap2
                            * bit 8: supportOfTS0
                            * bit 7: supportOfSFModeForHSPDSCHDualStream
                            * bit 6: supportCellSpecificTxDiversityinDC_Operation
                            * bit 5: supportForPriorityReselectionInUTRAN
                            * bit 4: supportOfCSG
                            * bit 3: supportOfMACiis
                            * bit 2: supportOfCommonEDCH
                            * bit 1: supportForRfc3095*/

    0x80+ /* supportOfTS0: 0x80 supported, 0x00 not supported */
    0x00+ /* supportOfSFModeForHSPDSCHDualStream: 0x40 supported, 0x00 not supported */

#ifdef __DCHSDPA_ADJ_FREQ_SUPPORT__
    0x00+ /* supportCellSpecificTxDiversityinDC_Operation: 0x20 supported, 0x00 not supported */
#endif

#ifdef __23G_PRI_RESEL_SUPPORT__
    0x10+ /* supportForPriorityReselectionInUTRAN: 0x10 supported, 0x00 not supported */
#endif

#ifdef __3G_CSG_SUPPORT__
    0x00+ /* supportOfCSG: 0x08 supported, 0x00 not supported */
#endif

#if defined(__TDD_MAC_IIS_SUPPORT__)
    0x04+ /* supportOfMACiis: 0x04 supported, 0x00 not supported */
#endif

#if defined(__TDD_COMMON_EDCH_SUPPORT__)
    0x02+ /* supportOfCommonEDCH: 0x02 supported, 0x00 not supported */
#endif


    0x00+  /* supportForRfc3095: 0x01 supported, 0x00 not supported */
    0x00,
							  /* r9_cap3: USIME_R8_Cap3
							   * bit 8: supportOfEUTRAFDD
							   * bit 7: supportOfInterRATHOToEUTRAFDD
							   * else: reserved
							   */
#ifdef __LTE_RAT__
#ifdef __4G_TDD_ONLY__
    0x00+ /*  not supportOfEUTRAFDD */
	0x00+ /* not supportOfInterRATHOToEUTRAFDD: 0x08 supported, 0x00 not supported */
#else 
	0x80+ /*  supportOfEUTRAFDD */
	0x40+ /* supportOfInterRATHOToEUTRAFDD: 0x08 supported, 0x00 not supported */
#endif
	0x00+ /* reserved */
    0x00
#endif
#endif /* __UMTS_R8__ */

};
#ifdef __UMTS_TDD128_MODE__

#endif /* __UMTS_TDD128_MODE__ */
static nvram_ef_cse_kor_info_struct const NVRAM_EF_CSE_KOR_DEFAULT[] = 
{
    {
        0x06,
        {
            0x29A8,
            0x29C1,
            0x29D9,
            0x29F1,
            0x298F,
            0x2976
        }
    }
};
#endif /* __UMTS_RAT__ */

static nvram_ef_umts_custom_rscp_ecno_csfb_call_info_struct const NVRAM_EF_UMTS_CUSTOM_RSCP_ECNO_CSFB_CALL_DEFAULT[] = 
{
    {
        0xff,  //RSCP
        0xff   //ECNO
    }
};


// LID Declaration
ltable_entry_struct logical_data_item_table_umts[] =
{
//#ifdef __BAND_PRIORITY_SEARCH__
#if defined(__UMTS_RAT__) && defined(__UMTS_FDD_MODE__)
    {
        NVRAM_EF_UMTS_BAND_PRIORITY_LID,
        NVRAM_EF_UMTS_BAND_PRIORITY_TOTAL,
        NVRAM_EF_UMTS_BAND_PRIORITY_SIZE,
        NVRAM_NORMAL(NVRAM_EF_UMTS_BAND_PRIORITY_DEFAULT),
        NVRAM_CATEGORY_USER,
        NVRAM_ATTR_AVERAGE,
        "UM12",
        VER(NVRAM_EF_UMTS_BAND_PRIORITY_LID)
    },
#endif /* __UMTS_RAT__ && __UMTS_FDD_MODE_ */
//#endif /* __BAND_PRIORITY_SEARCH__ */

#if defined(__UMTS_RAT__) && defined(__UMTS_FDD_MODE__) && defined(__UMTS_R7__)
    {

        NVRAM_EF_UMTS_DMCR_SETTING_LID,
        NVRAM_EF_UMTS_DMCR_SETTING_TOTAL,
        NVRAM_EF_UMTS_DMCR_SETTING_SIZE,
        NVRAM_NORMAL(NVRAM_EF_UMTS_DMCR_SETTING_DEFAULT),
        NVRAM_CATEGORY_USER,
        NVRAM_ATTR_AVERAGE,
        "UM13",
        VER(NVRAM_EF_UMTS_DMCR_SETTING_LID)
    },

    {

        NVRAM_EF_UMTS_SIB_SKIP_SETTING_LID,
        NVRAM_EF_UMTS_SIB_SKIP_SETTING_TOTAL,
        NVRAM_EF_UMTS_SIB_SKIP_SETTING_SIZE,
        NVRAM_NORMAL(NVRAM_EF_UMTS_SIB_SKIP_SETTING_DEFAULT),
        NVRAM_CATEGORY_USER,
        NVRAM_ATTR_AVERAGE,
        "UM14",
        VER(NVRAM_EF_UMTS_SIB_SKIP_SETTING_LID)
    },
#endif /* __UMTS_RAT__ && __UMTS_FDD_MODE__ && __UMTS_R7__ */

#ifdef __UMTS_RAT__
/* currently useless
    {
        NVRAM_EF_UMTS_PLMN_LID,
        NVRAM_EF_UMTS_PLMN_TOTAL,
        NVRAM_EF_UMTS_PLMN_SIZE,
        NVRAM_NORMAL(NVRAM_EF_FF_DEFAULT),
        NVRAM_CATEGORY_USER,
        NVRAM_ATTR_AVERAGE,
        "UM01",
        VER(NVRAM_EF_UMTS_PLMN_LID)
    },
*/
    {
        NVRAM_EF_UMTS_IMSI_LID,
        NVRAM_EF_UMTS_IMSI_TOTAL,
        NVRAM_EF_UMTS_IMSI_SIZE,
        NVRAM_NORMAL(NVRAM_EF_FF_DEFAULT),
        NVRAM_CATEGORY_USER,
        NVRAM_ATTR_CONFIDENTIAL,
        "UM02",
        VER(NVRAM_EF_UMTS_IMSI_LID)
    },
    {
        NVRAM_EF_UMTS_START_HFN_FDD_LID,
        NVRAM_EF_UMTS_START_HFN_FDD_TOTAL,
        NVRAM_EF_UMTS_START_HFN_FDD_SIZE,
        NVRAM_NORMAL(NVRAM_EF_FF_DEFAULT),
        NVRAM_CATEGORY_USER,
        NVRAM_ATTR_AVERAGE,
        "UM03",
        VER(NVRAM_EF_UMTS_START_HFN_FDD_LID)
    },
    {
        NVRAM_EF_UMTS_START_HFN_TDD_LID,
        NVRAM_EF_UMTS_START_HFN_TDD_TOTAL,
        NVRAM_EF_UMTS_START_HFN_TDD_SIZE,
        NVRAM_NORMAL(NVRAM_EF_ZERO_DEFAULT),
        NVRAM_CATEGORY_USER,
        NVRAM_ATTR_AVERAGE,
        "UM10",
        VER(NVRAM_EF_UMTS_START_HFN_TDD_LID)
    },
    {
        NVRAM_EF_UMTS_USIME_RRC_DYNAMIC_CAP_FDD_LID,
        NVRAM_EF_UMTS_USIME_RRC_DYNAMIC_CAP_FDD_TOTAL,
        NVRAM_EF_UMTS_USIME_RRC_DYNAMIC_CAP_FDD_SIZE,
        NVRAM_NORMAL(NVRAM_EF_UMTS_USIME_RRC_DYNAMIC_CAP_DEFAULT_FDD),
        NVRAM_CATEGORY_USER,
        NVRAM_ATTR_AVERAGE,
        "UM04",
        VER(NVRAM_EF_UMTS_USIME_RRC_DYNAMIC_CAP_FDD_LID)
    },
    {
        NVRAM_EF_UMTS_USIME_RRC_DYNAMIC_CAP_TDD_LID,
        NVRAM_EF_UMTS_USIME_RRC_DYNAMIC_CAP_TDD_TOTAL,
        NVRAM_EF_UMTS_USIME_RRC_DYNAMIC_CAP_TDD_SIZE,
        NVRAM_NORMAL(NVRAM_EF_UMTS_USIME_RRC_DYNAMIC_CAP_DEFAULT_TDD),
        NVRAM_CATEGORY_USER,
        NVRAM_ATTR_AVERAGE,
        "UM05",
        VER(NVRAM_EF_UMTS_USIME_RRC_DYNAMIC_CAP_TDD_LID)
    },
    {
        NVRAM_EF_CSE_KOR_INFO_LID,
        NVRAM_EF_CSE_KOR_INFO_TOTAL,
        NVRAM_EF_CSE_KOR_INFO_SIZE,
        NVRAM_NORMAL(NVRAM_EF_CSE_KOR_DEFAULT),
        NVRAM_CATEGORY_USER,
        NVRAM_ATTR_AVERAGE,
        "UM15",
        VER(NVRAM_EF_CSE_KOR_INFO_LID),
    },
    {
        NVRAM_EF_UMTS_FREQUENCY_REPOSITORY_LID,
        NVRAM_EF_UMTS_FREQUENCY_REPOSITORY_TOTAL,
        NVRAM_EF_UMTS_FREQUENCY_REPOSITORY_SIZE,
        NVRAM_NORMAL(NVRAM_EF_UMTS_FREQUENCY_REPOSITORY_DEFAULT),
        NVRAM_CATEGORY_USER,
        NVRAM_ATTR_AVERAGE,
        "UM06",
        VER(NVRAM_EF_UMTS_FREQUENCY_REPOSITORY_LID)
    },
#if (defined(__UMTS_TDD128_MODE__) && defined(__UMTS_R7__)) || (defined(__SEARCH_ALL_EHPLMN_TOGETHER__))
   {
        NVRAM_EF_UMTS_URR_CONFIGURATION_LID,
        NVRAM_EF_UMTS_URR_CONFIGURATION_TOTAL,
        NVRAM_EF_UMTS_URR_CONFIGURATION_SIZE,
        NVRAM_NORMAL(NVRAM_EF_ZERO_DEFAULT),
        NVRAM_CATEGORY_USER,
        NVRAM_ATTR_AVERAGE,
        "UM08",
        VER(NVRAM_EF_UMTS_URR_CONFIGURATION_LID)
    },
#endif
#endif /* __UMTS_RAT__ */

#if (defined(__3G_CSG_SUPPORT__) || defined(__LTE_RAT__))
    {
        NVRAM_EF_UMTS_FINGERPRINT_INFO_LID,
        NVRAM_EF_UMTS_FINGERPRINT_INFO_TOTAL,
        NVRAM_EF_UMTS_FINGERPRINT_INFO_SIZE,
        NVRAM_NORMAL(NVRAM_EF_ZERO_DEFAULT),
        NVRAM_CATEGORY_USER,
        NVRAM_ATTR_AVERAGE,
        "UM09",
        VER(NVRAM_EF_UMTS_FINGERPRINT_INFO_LID)
    },
#endif


    {
        NVRAM_EF_WCDMA_CUSTOM_DISABLE_BAND_LIST_LID,
        NVRAM_EF_WCDMA_CUSTOM_DISABLE_BAND_LIST_TOTAL,
        NVRAM_EF_WCDMA_CUSTOM_DISABLE_BAND_LIST_SIZE,
        NVRAM_NORMAL(NVRAM_EF_ZERO_DEFAULT),
        NVRAM_CATEGORY_USER,
        NVRAM_ATTR_AVERAGE,
        "UM16",
        VER(NVRAM_EF_WCDMA_CUSTOM_DISABLE_BAND_LIST_LID)
    },
    {
        NVRAM_EF_UMTS_CUSTOM_RSCP_ECNO_CSFB_CALL_INFO_LID,
        NVRAM_EF_UMTS_CUSTOM_RSCP_ECNO_CSFB_CALL_INFO_TOTAL,
        NVRAM_EF_UMTS_CUSTOM_RSCP_ECNO_CSFB_CALL_INFO_SIZE,
        NVRAM_NORMAL(NVRAM_EF_UMTS_CUSTOM_RSCP_ECNO_CSFB_CALL_DEFAULT),
        NVRAM_CATEGORY_USER,
        NVRAM_ATTR_AVERAGE,
        "UM17",
        VER(NVRAM_EF_UMTS_CUSTOM_RSCP_ECNO_CSFB_CALL_INFO_LID)
    },

    NVRAM_LTABLE_END
};

#endif /* NVRAM_NOT_PRESENT */
