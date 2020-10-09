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
 *
 * removed!
 * removed!
 * removed!
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/
#ifndef __UMTS_NVRAM_EDITOR_H__
#define __UMTS_NVRAM_EDITOR_H__

#ifndef NVRAM_NOT_PRESENT
#ifdef __cplusplus
extern "C"
{
#endif /* __cplusplus */ 

#include "umts_nvram_def.h"
#include "nas_nvram_editor.h"

// Data Structure of Each LID
#ifdef __UMTS_RAT__
/* currently useless
typedef  struct
{
    kal_uint8 data[4];
} nvram_ef_umts_plmn_struct;
*/

typedef  struct
{
    kal_uint8 data[NVRAM_EF_UMTS_IMSI_SIZE];
} nvram_ef_umts_imsi_struct;


typedef  struct
{
    kal_uint8 data[NVRAM_EF_UMTS_START_HFN_FDD_SIZE];
} nvram_ef_umts_start_hfn_fdd_struct;

typedef  struct
{
    kal_uint8 data[NVRAM_EF_UMTS_START_HFN_TDD_SIZE];
} nvram_ef_umts_start_hfn_tdd_struct;

typedef  struct
{
// R99 CAP #40
    kal_uint8       pdcp_support;
    kal_uint8       pdcp_maxHeaderCompressLength;

    kal_uint8       rlc_totalAmBufferSize;
    kal_uint8       rlc_maxWinodwSize;
    kal_uint8       rlc_maxAmEntityNumber;

    kal_uint8       ulTrch_modeSpecificInfoSelect;
    kal_uint8       ulTrch_maxNoBitsTransmitted;
    kal_uint8       ulTrch_maxConvCodeBitsTransmitted;
    kal_uint8       ulTrch_turboEncodingSupportSelect;
    kal_uint8       ulTrch_turboEncodingBitLength;
    kal_uint8       ulTrch_maxSimultaneousTransChs;
    kal_uint8       ulTrch_maxTransmittedBlocks;
    kal_uint8       ulTrch_maxNumberOfTFC;
    kal_uint8       ulTrch_maxNumberOfTF;
    kal_uint8       ulTrch_maxSimultaneousCCTrCHCount;

    kal_uint8       dlTrch_maxNoBitsReceived;
    kal_uint8       dlTrch_maxConvCodeBitsReceived;
    kal_uint8       dlTrch_turboDecodingSupportSelect;
    kal_uint8       dlTrch_turboDecodingBitLength;
    kal_uint8       dlTrch_maxSimultaneousTransChs;
    kal_uint8       dlTrch_maxSimultaneousCCTrCHCount;
    kal_uint8       dlTrch_maxReceivedTransportBlocks;
    kal_uint8       dlTrch_maxNumberOfTFC;
    kal_uint8       dlTrch_maxNumberOfTF;

    kal_uint8       wcdma_prefered_offset;
    kal_uint8       band_reserved2;
    kal_uint8       band_powerClass;
    kal_uint8       powerClass_reserved1;
    kal_uint8       powerClass_reserved2;

    kal_uint8       pdcp_losslessSRNSRelocationSupport;
    kal_uint8       cipher_cap1;
    kal_uint8       cipher_cap2;
    kal_uint8       integrity_cap1;
    kal_uint8       integrity_cap2;

    kal_uint8       rrce_feature_cap;
    kal_uint8       smart_paging_3g_fdd;
    kal_uint8       integrity_protection_3g_fdd;

    kal_uint8       access_stratum_release;

    kal_uint8       dlPhyCh_maxNoDPCH_PDSCH_Codes;

    kal_uint8       r3_cap1;
    kal_uint8       r3_cap2;
    kal_uint8       r3_cap3;

// R4 CAP  #3
#if defined(__UMTS_R4__) || defined(__UMTS_R5__)
    kal_uint8       r4_cap1;
    kal_uint8       reverseCompressionDepthHighByte;
    kal_uint8       reverseCompressionDepthLowByte;
#endif

// R5 CAP #3
#ifdef __UMTS_R5__
    kal_uint8       r5_cap1;
#endif /* __UMTS_R5__*/

// R6 CAP #2
#ifdef __UMTS_R6__
    kal_uint8       r6_cap1;
#endif

// R7 CAP #2
#ifdef __UMTS_R7__
    kal_uint8       r7_cap1;
    kal_uint8       r7_cap2;
#endif

// R8 CAP #3
#ifdef __UMTS_R8__
    kal_uint8       r8_cap1;
    kal_uint8       r8_cap2;
#endif

#ifdef __UMTS_R10__
    kal_uint8       r10_cap1;
    kal_uint8       r10_cap2;
#endif
#ifdef __UMTS_R11__
    kal_uint8       r11_cap1;
#endif

}nvram_ef_umts_usime_rrc_dynamic_fdd_struct;

typedef  struct
{
// R99 CAP #29
    kal_uint8       pdcp_support;
    kal_uint8       pdcp_maxHeaderCompressLength;

    kal_uint8       rlc_totalAmBufferSize;
    kal_uint8       rlc_maxWinodwSize;
    kal_uint8       rlc_maxAmEntityNumber;

    kal_uint8       ulTrch_modeSpecificInfoSelect;
    kal_uint8       ulTrch_maxNoBitsTransmitted;
    kal_uint8       ulTrch_maxConvCodeBitsTransmitted;
    kal_uint8       ulTrch_turboEncodingSupportSelect;
    kal_uint8       ulTrch_turboEncodingBitLength;
    kal_uint8       ulTrch_maxSimultaneousTransChs;
    kal_uint8       ulTrch_maxTransmittedBlocks;
    kal_uint8       ulTrch_maxNumberOfTFC;
    kal_uint8       ulTrch_maxNumberOfTF;
    kal_uint8       ulTrch_maxSimultaneousCCTrCHCount;

    kal_uint8       dlTrch_maxNoBitsReceived;
    kal_uint8       dlTrch_maxConvCodeBitsReceived;
    kal_uint8       dlTrch_turboDecodingSupportSelect;
    kal_uint8       dlTrch_turboDecodingBitLength;
    kal_uint8       dlTrch_maxSimultaneousTransChs;
    kal_uint8       dlTrch_maxSimultaneousCCTrCHCount;
    kal_uint8       dlTrch_maxReceivedTransportBlocks;
    kal_uint8       dlTrch_maxNumberOfTFC;
    kal_uint8       dlTrch_maxNumberOfTF;

    kal_uint8       wcdma_prefered_offset;
    kal_uint8       band_reserved2;
    kal_uint8       band_powerClass1;
    kal_uint8       band_powerClass2;
    kal_uint8       band_powerClass3;
// R99 CAP Additional part #5
    kal_uint8       pdcp_losslessSRNSRelocationSupport;
    kal_uint8       cipher_cap1;
    kal_uint8       cipher_cap2;
    kal_uint8       integrity_cap1;
    kal_uint8       integrity_cap2;

    kal_uint8       rrce_feature_cap;
    kal_uint8       smart_paging_3g_fdd;

    kal_uint8       access_stratum_release;

    kal_uint8       dlPhyCh_maxNoDPCH_PDSCH_Codes;

    kal_uint8       r3_cap1;
    kal_uint8       r3_cap2;
    kal_uint8       r3_cap3;

// R4 CAP  #3
#if defined(__UMTS_R4__) || defined(__UMTS_R5__)
    kal_uint8       r4_cap1;
    kal_uint8       reverseCompressionDepthHighByte;
    kal_uint8       reverseCompressionDepthLowByte;
#endif

// R5 CAP #3
#ifdef __UMTS_R5__
    kal_uint8       r5_cap1;
#endif /* __UMTS_R5__*/

// R6 CAP #2
#ifdef __UMTS_R6__
    kal_uint8       r6_cap1;
#endif

// R7 CAP #2
#ifdef __UMTS_R7__
    kal_uint8       r7_cap1;
    kal_uint8       r7_cap2;
#endif
// R9 CAP #3
#ifdef __UMTS_R9__
    kal_uint8       r9_cap1;
    kal_uint8       r9_cap2;
    kal_uint8       r9_cap3;
#endif

}nvram_ef_umts_usime_rrc_dynamic_tdd_struct;


typedef  struct
{
    kal_uint8 data[NVRAM_EF_UMTS_FREQUENCY_REPOSITORY_SIZE];
} nvram_ef_umts_frequency_repository_struct;

//#ifdef __BAND_PRIORITY_SEARCH__
#if defined(__UMTS_RAT__) && defined(__UMTS_FDD_MODE__)
typedef  struct
{
    kal_uint8 band[NVRAM_EF_UMTS_BAND_PRIORITY_SIZE];
} nvram_ef_umts_band_priority_struct;
#endif /* __UMTS_RAT__ && __UMTS_FDD_MODE_ */
//#endif /* __BAND_PRIORITY_SEARCH__ */

#if defined(__UMTS_FDD_MODE__) && defined(__UMTS_R7__)
typedef struct
{
    nvram_plmn_id_struct disable_PLMN[NVRAM_MAX_UMTS_DMCR_DISABLE_PLMN_NUM];
} nvram_ef_umts_dmcr_setting_struct;

typedef struct
{
    nvram_plmn_id_struct enable_PLMN[NVRAM_MAX_UMTS_SIB_SKIP_ENABLE_PLMN_NUM];
} nvram_ef_umts_sib_skip_setting_struct;
#endif /* __UMTS_FDD_MODE__ && __UMTS_R7__ */

//#if defined(__UMTS_TDD128_MODE__) && defined(__UMTS_R7__)
//#ifdef __SEARCH_ALL_EHPLMN_TOGETHER__
#if (defined(__UMTS_TDD128_MODE__) && defined(__UMTS_R7__)) || (defined(__SEARCH_ALL_EHPLMN_TOGETHER__))
typedef  struct
{
    kal_uint8 slce;
    kal_uint8 cse;
} nvram_ef_umts_urr_configuration_struct;
#endif
typedef struct
{
    kal_uint8 num_of_uarfcn;
    kal_uint16 uarfcn[NVRAM_3G_STORED_UARFCN_NUM_MAX];
} nvram_ef_cse_kor_info_struct;
#endif /* __UMTS_RAT__ */


typedef struct
{
  kal_uint8 mcc1;
  kal_uint8 mcc2;
  kal_uint8 mcc3;
  kal_uint8 mnc1;
  kal_uint8 mnc2;
  kal_uint8 mnc3;
} disable_plmn_list;




typedef struct 
{
kal_uint8 numPlmn;
disable_plmn_list disable_band_by_plmn_list[20];
kal_uint32 band[20];

}disable_List;




typedef struct
{
    disable_List positiveList;
    disable_List invertedList;
} nvram_ef_wcdma_custom_disable_band_list_struct;


#if (defined(__3G_CSG_SUPPORT__) || defined(__LTE_RAT__))

#define NVRAM_EF_UMTS_CSG_FINGERPRINT_ENTRY_MAX_NUM 8
#define NVRAM_EF_UMTS_CSG_FINGERPRINT_FREQ_MAX_NUM 4
#define NVRAM_EF_UMTS_CSG_FINGERPRINT_CELL_MAX_NUM 32 /* 4 freq * 32 cell = 128 records */

typedef struct
{
    kal_uint16  frequency;
    kal_uint8   num_cell;
    kal_uint16  physical_cell_id[NVRAM_EF_UMTS_CSG_FINGERPRINT_CELL_MAX_NUM];
    kal_uint32  cell_id[NVRAM_EF_UMTS_CSG_FINGERPRINT_CELL_MAX_NUM];
}nvram_ef_umts_fingerprint_CSG_recored_struct;

typedef struct
{
    kal_uint8                       ratmode;
    nvram_plmn_id_struct            csg_plmn;
    kal_uint32                      csg_id;
    kal_uint32                      csg_cell_id;
    kal_uint32                      csg_frequency;
    kal_uint16                      csg_physical_cell_id;

    kal_uint32                      timestamp;
    kal_bool                        isUpdateRequired;

    kal_uint8                       num_freq;
    nvram_ef_umts_fingerprint_CSG_recored_struct record[NVRAM_EF_UMTS_CSG_FINGERPRINT_FREQ_MAX_NUM];
}nvram_ef_umts_fingerprint_CSG_cell_struct;

typedef struct
{
    kal_uint8 num_record;
    nvram_ef_umts_fingerprint_CSG_cell_struct  CSG_phy_cell[NVRAM_EF_UMTS_CSG_FINGERPRINT_ENTRY_MAX_NUM];
}nvram_ef_umts_fingerprint_entry_struct;
#endif

typedef struct
{
    kal_int16 rscp;
    kal_int16 ecno;
    
} nvram_ef_umts_custom_rscp_ecno_csfb_call_info_struct;

#ifdef GEN_FOR_PC
BEGIN_NVRAM_DATA


#ifdef __UMTS_RAT__
/* currently useless
LID_BIT VER_LID(NVRAM_EF_UMTS_PLMN_LID) nvram_ef_umts_plmn_struct * NVRAM_EF_UMTS_PLMN_TOTAL{};
*/

/***************************************************************************************************   
* LID_NAME                                                                                             
*      NVRAM_EF_UMTS_IMSI_LID                                                                 
* DESCRIPTION                                                                                          
*      Store IMSI in NVRAM.                                                      
* INFORMATION                                                                                          
*     Can OTA Reset: Yes                                                                               
*     Update Scenario: power off                                                   
****************************************************************************************************/                 
LID_BIT VER_LID(NVRAM_EF_UMTS_IMSI_LID) nvram_ef_umts_imsi_struct * NVRAM_EF_UMTS_IMSI_TOTAL
{
    data: "imsi[24]"
    {
    };
};
/***************************************************************************************************
* LID_NAME              
*      NVRAM_EF_UMTS_START_HFN_FDD_LID
* DESCRIPTION           
*      WCDMA Start HFN Data, can't be customized.
* INFORMATION           
*     Can OTA Reset: Yes
*     Update Scenario: power off/HANDOVER TO UTRAN
****************************************************************************************************/
LID_BIT VER_LID(NVRAM_EF_UMTS_START_HFN_FDD_LID) nvram_ef_umts_start_hfn_fdd_struct * NVRAM_EF_UMTS_START_HFN_FDD_TOTAL
{
    data:"Store START HFN"
    {
    };
};
/***************************************************************************************************
* LID_NAME
*      NVRAM_EF_UMTS_START_HFN_TDD_LID
* DESCRIPTION
*      TDSCDMA Start HFN Data, cann't be customized.
* INFORMATION
*     Can OTA Reset: Yes
*     Update Scenario: power off/HANDOVER TO UTRAN
****************************************************************************************************/
LID_BIT VER_LID(NVRAM_EF_UMTS_START_HFN_TDD_LID) nvram_ef_umts_start_hfn_tdd_struct * NVRAM_EF_UMTS_START_HFN_TDD_TOTAL
{
	  data:"Store START HFN"
		{
		};
};

/********************************************************************************************
* LID_NAME
*	   NVRAM_EF_UMTS_USIME_RRC_DYNAMIC_CAP_FDD_LID
* DESCRIPTION
*	   Store UE capability. 
* INFOMATION
*	   Can OTA Reset: Yes
*	   Update Scenario: When power on/off or sim hot inherted or sim switch
*********************************************************************************************/
LID_BIT VER_LID(NVRAM_EF_UMTS_USIME_RRC_DYNAMIC_CAP_FDD_LID) nvram_ef_umts_usime_rrc_dynamic_fdd_struct * NVRAM_EF_UMTS_USIME_RRC_DYNAMIC_CAP_FDD_TOTAL
{
    pdcp_support:"PDCP support For Rfc2507"
    {
    };
    pdcp_maxHeaderCompressLength:"PDP MAX Header Compression Length"
    {
    };
    rlc_totalAmBufferSize:"Total RLC AM Buffer Size"
    {
    };
    rlc_maxWinodwSize:"Maximum RLC Window Size"
    {
    };
    rlc_maxAmEntityNumber:"Maximum AM Entity Number RLC Cap"
    {
    };
    ulTrch_modeSpecificInfoSelect:"ULTrch mode specific"
    {
    };
    ulTrch_maxNoBitsTransmitted:"Ultrch Max Transmit Number bits"
    {
    };
    ulTrch_maxConvCodeBitsTransmitted:"Ultrch Max transmit code bits"
    {
    };
    ulTrch_turboEncodingSupportSelect:"Ultrch turbo encoding support"
    {
    };
    ulTrch_turboEncodingBitLength:"Ultrch turbo encoding bit length"
    {
    };
    ulTrch_maxSimultaneousTransChs:"Ultrch carry max tran channels"
    {
    };
    ulTrch_maxTransmittedBlocks:"Ultrch Max transmit blocks"
    {
    };
    ulTrch_maxNumberOfTFC:"Ultrch Max number of TFC"
    {
    };
    ulTrch_maxNumberOfTF:"Ultrch Max number of TF"
    {
    };
    ulTrch_maxSimultaneousCCTrCHCount:"Ultrch Max carry CCTrch Count"
    {
    };
    dlTrch_maxNoBitsReceived:"Dltrch Max receive bits"
    {
    };
    dlTrch_maxConvCodeBitsReceived:"Dltrch Max receive code bits"
    {
    };
    dlTrch_turboDecodingSupportSelect:"Dltrch turbo decoding support"
    {
    };
    dlTrch_turboDecodingBitLength:"Dltrch turbo decoding bit length"
    {
    };
    dlTrch_maxSimultaneousTransChs:"Dltrch Max simultaneous trans channels"
    {
    };
    dlTrch_maxSimultaneousCCTrCHCount:"Dltrch Max CCTrch count"
    {
    };
    dlTrch_maxReceivedTransportBlocks:"Dltrch Max receive TBS"
    {
    };
    dlTrch_maxNumberOfTFC:"Dltrch max number of TFC"
    {
    };
    dlTrch_maxNumberOfTF:"Dltrch max number of TF"
    {
    };
    wcdma_prefered_offset:"WCDMA prefered offset"
    {
    };
    band_reserved2:"band reserve"
    {
    };
    band_powerClass:"UE power class1"
    {
    };
    powerClass_reserved1:"reserved"
    {
    };
    powerClass_reserved2:"reserved"
    {
    };
    pdcp_losslessSRNSRelocationSupport:"pdcp loss less relocation support"
    {
    };
    cipher_cap1:"ciper capability1"
    {
    };
    cipher_cap2:"ciper capability2"
    {
    };
    integrity_cap1:"integriy capability1"
    {
    };
    integrity_cap2:"integrity capability2"
    {
    };
    rrce_feature_cap:"RRCE feature"
    {
    };
    smart_paging_3g_fdd:"FDD smart paging"
    {
    };
    integrity_protection_3g_fdd:"bypass integrity checking"
    {
    };
    access_stratum_release: "AS release version"
    {
       access_stratum_release: 4 "AS release version"
            {
                0x0: "RRC_AccessStratumReleaseIndicator_rel_4";
                0x1: "RRC_AccessStratumReleaseIndicator_rel_5";
                0x2: "RRC_AccessStratumReleaseIndicator_rel_6";
                0x3: "RRC_AccessStratumReleaseIndicator_rel_7";
                0x4: "RRC_AccessStratumReleaseIndicator_rel_8";
                0x5: "RRC_AccessStratumReleaseIndicator_rel_9";
                0x6: "RRC_AccessStratumReleaseIndicator_rel_10";
                0x7: "RRC_AccessStratumReleaseIndicator_rel_11";
                0x8: "RRC_AccessStratumReleaseIndicator_spare8";
                0x9: "RRC_AccessStratumReleaseIndicator_spare7";
                0xA: "RRC_AccessStratumReleaseIndicator_spare6";
                0xB: "RRC_AccessStratumReleaseIndicator_spare5";
                0xC: "RRC_AccessStratumReleaseIndicator_spare4";
                0xD: "RRC_AccessStratumReleaseIndicator_spare3";
                0xE: "RRC_AccessStratumReleaseIndicator_spare2";
                0xF: "RRC_AccessStratumReleaseIndicator_spare1";
           };
       Bit5 : 1 "Bit5"
           {
           };
       Bit6 : 1 "Bit6"
           {
           };
       Bit7 : 1 "Bit7"
           {
           };
       Bit8 : 1 "Bit8"
           {
           };   
    };
    dlPhyCh_maxNoDPCH_PDSCH_Codes:"dlphych max number dpch pdsch"
    {
    };
    r3_cap1:"r3 cap1"
    {
                maxNoPhysChBitsReceived : 4 "maxNoPhysChBitsReceived"
                    {
                      0x0: "RRC_MaxNoPhysChBitsReceived_dummy";
                      0x1: "RRC_MaxNoPhysChBitsReceived_b1200";
                      0x2: "RRC_MaxNoPhysChBitsReceived_b2400";
                      0x3: "RRC_MaxNoPhysChBitsReceived_b3600";
                      0x4: "RRC_MaxNoPhysChBitsReceived_b4800";
                      0x5: "RRC_MaxNoPhysChBitsReceived_b7200";
                      0x6: "RRC_MaxNoPhysChBitsReceived_b9600";
                      0x7: "RRC_MaxNoPhysChBitsReceived_b14400";
                      0x8: "RRC_MaxNoPhysChBitsReceived_b19200";
                      0x9: "RRC_MaxNoPhysChBitsReceived_b28800";
                      0xA: "RRC_MaxNoPhysChBitsReceived_b38400";
                      0xB: "RRC_MaxNoPhysChBitsReceived_b48000";
                      0xC: "RRC_MaxNoPhysChBitsReceived_b57600";
                      0xD: "RRC_MaxNoPhysChBitsReceived_b67200";
                      0xE: "RRC_MaxNoPhysChBitsReceived_b76800";
                      0xF: "not used";
                    };
                maxNoDPDCH_BitsTransmitted : 4 "maxNoDPDCH_BitsTransmitted"
                    {
                      0x0: "RRC_MaxNoDPDCH_BitsTransmitted_b600";
                      0x1: "RRC_MaxNoDPDCH_BitsTransmitted_b1200";
                      0x2: "RRC_MaxNoDPDCH_BitsTransmitted_b2400";
                      0x3: "RRC_MaxNoDPDCH_BitsTransmitted_b4800";
                      0x4: "RRC_MaxNoDPDCH_BitsTransmitted_b9600";
                      0x5: "RRC_MaxNoDPDCH_BitsTransmitted_b19200";
                      0x6: "RRC_MaxNoDPDCH_BitsTransmitted_b28800";
                      0x7: "RRC_MaxNoDPDCH_BitsTransmitted_b38400";
                      0x8: "RRC_MaxNoDPDCH_BitsTransmitted_b48000";
                      0x9: "RRC_MaxNoDPDCH_BitsTransmitted_b57600";
                      0xA: "not used";
                      0xB: "not used";
                      0xC: "not used";
                      0xD: "not used";
                      0xE: "not used";
                      0xF: "not used"; 		
                    };                
    };
    r3_cap2:"r3 cap2"
    {
                supportForSF_512 : 1 "supportForSF_512"
                    {
                    	0x0:"SF_512 is not supported";
                      0x1:"SF_512 is supported";
                    };
                supportOfGSM : 1 "supportOfGSM"
                    {
                    	0x0:"GSM is not supported";
                      0x1:"GSM is supported";
                    };              
                supportOfMulticarrier : 1 "supportOfMulticarrier"
                    {
                    	0x0:"Multicarrier is not supported";
                      0x1:"Multicarrier is supported";
                    };
                multiModeCapability : 2 "multiModeCapability"
                    {
                      0x0: "RRC_MultiModeCapability_tdd";
                      0x1: "RRC_MultiModeCapability_fdd";
                      0x2: "RRC_MultiModeCapability_fdd_tdd";
                      0x3: "not used";
                    };
                sfn_sfnType2Capability : 1 "sfn_sfnType2Capability"
                    {
                      0x0:"sfn_sfnType2Capability is disabled";
                      0x1:"sfn_sfnType2Capability is enabled";
                    };                
                Bit7 : 1 "Bit7"
                    {
                    }    ;            
                Bit8 : 1 "Bit8"
                    {
                    };                 	
    };
    r3_cap3:"r3 cap3"
    {
                standaloneLocMethodsSupported : 1 "standaloneLocMethodsSupported"
                    {
                      0x0:"standaloneLocMethods is not supported";
                      0x1:"standaloneLocMethods is supported";
                    };
                ue_BasedOTDOA_Supported : 1 "ue_BasedOTDOA_Supported"
                    {
                      0x0:"ue_BasedOTDOA is not supported";
                      0x1:"ue_BasedOTDOA is supported";
                    };              
                networkAssistedGPS_Supported : 2 "networkAssistedGPS_Supported"
                    {
                      0x0:"RRC_NetworkAssistedGPS_Supported_networkBased";
                      0x1:"RRC_NetworkAssistedGPS_Supported_ue_Based";
                      0x2:"RRC_NetworkAssistedGPS_Supported_bothNetworkAndUE_Based";
                      0x3:"RRC_NetworkAssistedGPS_Supported_noNetworkAssistedGPS";
                    };
                supportForUE_GPS_TimingOfCellFrames : 1 "supportForUE_GPS_TimingOfCellFrames"
                    {
                      0x0:"supportForUE_GPS_TimingOfCellFrames is not supported";
                      0x1:"supportForUE_GPS_TimingOfCellFrames is supported";
                    };
                supportForIPDL : 1 "supportForIPDL"
                    {
                      0x0:"IPDL is not supported";
                      0x1:"IPDL is supported";
                    };                
                rx_tx_TimeDifferenceType2Capable : 1 "rx_tx_TimeDifferenceType2Capable"
                    {
                      0x0:"rx_tx_TimeDifferenceType2 is not supported";
                      0x1:"rx_tx_TimeDifferenceType2 is supported";
                    };            
                validity_CellPCH_UraPCH : 1 "validity_CellPCH_UraPCH"
                    {
                    	0x0:"validity_CellPCH_UraPCH is not supported";
                      0x1:"validity_CellPCH_UraPCH is supported";
                    };
    };
    r4_cap1:"r4 cap1"
    {
                maxROHC_ContextSessions : 4 "maxROHC_ContextSessions"
                    {
                      0x0: "RRC_MaxROHC_ContextSessions_r4_s2";
                      0x1: "RRC_MaxROHC_ContextSessions_r4_s4";
                      0x2: "RRC_MaxROHC_ContextSessions_r4_s8";
                      0x3: "RRC_MaxROHC_ContextSessions_r4_s12";
                      0x4: "RRC_MaxROHC_ContextSessions_r4_s16";
                      0x5: "RRC_MaxROHC_ContextSessions_r4_s24";
                      0x6: "RRC_MaxROHC_ContextSessions_r4_s32";
                      0x7: "RRC_MaxROHC_ContextSessions_r4_s48";
                      0x8: "RRC_MaxROHC_ContextSessions_r4_s64";
                      0x9: "RRC_MaxROHC_ContextSessions_r4_s128";
                      0xA: "RRC_MaxROHC_ContextSessions_r4_s256";
                      0xB: "RRC_MaxROHC_ContextSessions_r4_s512";
                      0xC: "RRC_MaxROHC_ContextSessions_r4_s1024";		
                      0xD: "RRC_MaxROHC_ContextSessions_r4_s16384";
                      0xE: "not used";
                      0xF: "not used";
                    };
                supportForRfc3095 : 1 "supportForRfc3095"
                    {
                      0x0:"Rfc3095 is not supported";
                      0x1:"Rfc3095 is supported";
                    }  ;              
                Bit6 : 1 "Bit6"
                    {
                    };
                Bit7 : 1 "Bit7"
                    {
                    };
                Bit8 : 1 "Bit8"
                    {
                    };             
    };
    reverseCompressionDepthHighByte:"Reverse compression high byte"
    {
    };
    reverseCompressionDepthLowByte:"Reverse compression high byte"
    {
    };
    r5_cap1:"r5 cap1"
    {
                dl_CapabilityWithSimultaneousHS_DSCHConfigValid : 1 "dl_CapabilityWithSimultaneousHS_DSCHConfigValid"
                    {
                      0x0:"dl_CapabilityWithSimultaneousHS_DSCHConfig is not valid";
                      0x1:"dl_CapabilityWithSimultaneousHS_DSCHConfig is valid";
                    };
                dl_CapabilityWithSimultaneousHS_DSCHConfig : 2 "dl_CapabilityWithSimultaneousHS_DSCHConfig"
                    {
                      0x0:"RRC_DL_CapabilityWithSimultaneousHS_DSCHConfig_kbps32";
                      0x1:"RRC_DL_CapabilityWithSimultaneousHS_DSCHConfig_kbps64";
                      0x2:"RRC_DL_CapabilityWithSimultaneousHS_DSCHConfig_kbps128";
                      0x3:"RRC_DL_CapabilityWithSimultaneousHS_DSCHConfig_kbps384";
                    }  ;              
                losslessDLRLCPDUSizeChange : 1 "losslessDLRLCPDUSizeChange"
                    {
                      0x0:"losslessDLRLCPDUSizeChange is not supported";
                      0x1:"losslessDLRLCPDUSizeChange is supported";
                    };
                supportOfUTRAN_ToGERAN_NACC : 1 "supportOfUTRAN_ToGERAN_NACC"
                    {
                      0x0:"supportOfUTRAN_ToGERAN_NACC is not supported";
                      0x1:"supportOfUTRAN_ToGERAN_NACC is supported";
                    };
                supportForRfc3095ContextRelocation : 1 "supportForRfc3095ContextRelocation"
                    {
                      0x0:"supportForRfc3095ContextRelocation is not supported";
                      0x1:"supportForRfc3095ContextRelocation is supported";
                    };                
                Bit7 : 1 "Bit7"
                    {
                    }    ;            
                Bit8 : 1 "Bit8"
                    {
                    }   ;             

    };
    r6_cap1:"r6 cap1"
    {
                supportForSIB11bis : 1 "supportForSIB11bis"
                    {
                      0x0:"SIB11bis is not supported";
                      0x1:"SIB11bis is supported";
                    };
                supportForFDPCH : 1 "supportForFDPCH"
                    {
                      0x0:"FDPCH is not supported";
                      0x1:"FDPCH is supported";
                    };              
                doesNotBenifitFromBatteryConsumptionOptimization : 1 "doesNotBenifitFromBatteryConsumptionOptimization"
                    {
                      0x0:"Benfits from BatteryConsumptionOptimization";
                      0x1:"does not benfit from BatteryConsumptionOptimization";
                    };
                supportOfCSHandoverToGAN : 1 "supportOfCSHandoverToGAN"
                    {
                      0x0:"CSHandoverToGAN is not supported";
                      0x1:"CSHandoverToGAN is supported";
                    };
                Bit5 : 1 "Bit5"
                    {
                    };                
                Bit6 : 1 "Bit6"
                    {
                    };            
                Bit7 : 1 "Bit7"
                    {
                    }; 
                Bit8 : 1 "Bit8"
                    {
                    };               
    };
    r7_cap1:"r7 cap1"
    {
                supportForCSVoiceoverHSPA : 1 "supportForCSVoiceoverHSPA"
                    {
                      0x0:"CSVoiceoverHSPA is not supported";
                      0x1:"CSVoiceoverHSPA is supported";
                    };
                supportOfTwoLogicalChannel : 1 "supportOfTwoLogicalChannel"
                    {
                      0x0:"TwoLogicalChannel is not supported";
                      0x1:"TwoLogicalChannel is supported";
                    };              
                mac_ehsSupport : 1 "mac_ehsSupport"
                    {
                      0x0:"mac_ehs is not supported";
                      0x1:"mac_ehs is supported";
                    };
                hsscchlessHsdschOperation : 1 "hsscchlessHsdschOperation"
                    {
                      0x0:"hsscchlessHsdschOperation is not supported";
                      0x1:"hsscchlessHsdschOperation is supported";
                    };
                enhancedFdpch : 1 "enhancedFdpch"
                    {
                      0x0:"enhancedFdpch is not supported";
                      0x1:"enhancedFdpch is supported";
                    };                
                hsdschReceptionCellFach : 1 "hsdschReceptionCellFach"
                    {
                      0x0:"hsdschReceptionCellFach is not supported";
                      0x1:"hsdschReceptionCellFach is supported";
                    };            
                hsdschReceptionCellUraPch : 1 "hsdschReceptionCellUraPch"
                    {
                      0x0:"hsdschReceptionCellUraPch is not supported";
                      0x1:"hsdschReceptionCellUraPch is supported";
                    };             
                discontinuousDpcchTransmission : 1 "discontinuousDpcchTransmission"
                    {
                      0x0:"discontinuousDpcchTransmission is not supported";
                      0x1:"discontinuousDpcchTransmission is supported";
                    }; 
    };
    r7_cap2:"r7 cap2"
    {
                slotFormat4 : 1 "slotFormat4"
                    {
                      0x0:"slotFormat4 is not supported";
                      0x1:"slotFormat4 is supported";
                    };
                supportForEDPCCHPowerBoosting : 1 "supportForEDPCCHPowerBoosting"
                    {
                      0x0:"EDPCCHPowerBoosting is not supported";
                      0x1:"EDPCCHPowerBoosting is supported";
                    };              
                supportForTwoDRXSchemesInPCH : 1 "supportForTwoDRXSchemesInPCH"
                    {
                      0x0:"TwoDRXSchemesInPCH is not supported";
                      0x1:"TwoDRXSchemesInPCH is supported";
                    };
                supportEDPDCHPowerInterpolation : 1 "supportEDPDCHPowerInterpolation"
                    {
                      0x0:"EDPDCHPowerInterpolation is not supported";
                      0x1:"EDPDCHPowerInterpolation is supported";
                    };
                supportofTxDivOnNonMIMOChannel : 1 "supportofTxDivOnNonMIMOChannel"
                    {
                      0x0:"TxDivOnNonMIMOChannel is not supported";
                      0x1:"TxDivOnNonMIMOChannel is supported";
                    };                
                supportofPSHandoverToGAN : 1 "supportofPSHandoverToGAN"
                    {
                      0x0:"PSHandoverToGAN is not supported";
                      0x1:"PSHandoverToGAN is supported";
                    };            
                supportofUL16QAM : 1 "supportofUL16QAM"
                    {
                      0x0:"UL16QAM is not supported";
                      0x1:"UL16QAM is supported";
                    };             
                Bit8 : 1 "Bit8"
                    {
                    };  
    };
    r8_cap1:"r8 cap1"
    {
                supportOfTargetCellPreConfig : 1 "supportOfTargetCellPreConfig"
                    {
                      0x0:"TargetCellPreConfig is not supported";
                      0x1:"TargetCellPreConfig is supported";
                    };
                supportOfHsdschDrxOperation : 1 "supportOfHsdschDrxOperation"
                    {
                      0x0:"HsdschDrxOperation is not supported";
                      0x1:"HsdschDrxOperation is supported";
                    };              
                supportOfEUTRAFDD : 1 "supportOfEUTRAFDD"
                    {
                      0x0:"EUTRAFDD is not supported";
                      0x1:"EUTRAFDD is supported";
                    };
                supportOfInterRATHOToEUTRAFDD : 1 "supportOfInterRATHOToEUTRAFDD"
                    {
                      0x0:"InterRATHOToEUTRAFDD is not supported";
                      0x1:"InterRATHOToEUTRAFDD is supported";
                    };
                eutraFeatureGroupIndicators1 : 1 "eutraFeatureGroupIndicators Bit1"
                    {
                      0x0:"UTRA CELL_FACH absolute priority reselection for all layers is not supported";
                      0x1:"UTRA CELL_FACH absolute priority reselection for all layers is supported";
                    };
                eutraFeatureGroupIndicators2 : 1 "eutraFeatureGroupIndicators Bit2"
                    {
                      0x0:"UTRA CELL_FACH absolute priority reselection for high priority layers is not supported";
                      0x1:"UTRA CELL_FACH absolute priority reselection for high priority layers is supported";
                    };
                eutraFeatureGroupIndicators3 : 1 "eutraFeatureGroupIndicators Bit3"
                    {
                      0x0:"EUTRA measurements and reporting in connected mode is not supported";
                      0x1:"EUTRA measurements and reporting in connected mode is supported";
                    };
                eutraFeatureGroupIndicators4 : 1 "eutraFeatureGroupIndicators Bit4"
                    {
                      0x0:"UTRA CELL_PCH/URA_PCH to EUTRA IDLE Cell reselection is not supported";
                      0x1:"UTRA CELL_PCH/URA_PCH to EUTRA IDLE Cell reselection is supported";
                    };
    };
    r8_cap2:"r8 cap2"
    {
                adjacentFrequencyMeasurements : 1 "adjacentFrequencyMeasurements"
                    {
                      0x0:"adjacentFrequencyMeasurements is not supported";
                      0x1:"adjacentFrequencyMeasurements is supported";
                    };
                supportOfCommonEDCH : 1 "supportOfCommonEDCH"
                    {
                      0x0:"CommonEDCH is not supported";
                      0x1:"CommonEDCH is supported";
                    };              
                supportOfMACiis : 1 "supportOfMACiis"
                    {
                      0x0:"MACiis is not supported";
                      0x1:"MACiis is supported";
                    };
                supportOfCSG : 1 "supportOfCSG"
                    {
                      0x0:"CSG is not supported";
                      0x1:"CSG is supported";
                    };
                supportForPriorityReselectionInUTRAN : 1 "supportForPriorityReselectionInUTRAN"
                    {
                      0x0:"PriorityReselectionInUTRAN is not supported";
                      0x1:"PriorityReselectionInUTRAN is supported";
                    };                
                supportCellSpecificTxDiversityinDC_Operation : 1 "supportCellSpecificTxDiversityinDC_Operation"
                    {
                      0x0:"CellSpecificTxDiversityinDC_Operation is not supported";
                      0x1:"CellSpecificTxDiversityinDC_Operation is supported";
                    };            
                supportOfEUTRATDD : 1 "supportOfEUTRATDD"
                    {
                      0x0:"EUTRATDD is not supported";
                      0x1:"EUTRATDD is supported";
                    };             
                supportOfInterRATHOToEUTRATDD : 1 "supportOfInterRATHOToEUTRATDD"
                    {
                      0x0:"InterRATHOToEUTRATDD is not supported";
                      0x1:"InterRATHOToEUTRATDD is supported";
                    };  
    };
    r10_cap1:"r10 cap1"
    {
                radioAccessCapabBandCombList : 1 "radioAccessCapabBandCombList"
                    {
                      0x0:"radioAccessCapabBandCombList is not supported";
                      0x1:"radioAccessCapabBandCombList is supported";
                    };
                supportOfMimoOnlySingleStream : 1 "supportOfMimoOnlySingleStream"
                    {
                      0x0:"MimoOnlySingleStream is not supported";
                      0x1:"MimoOnlySingleStream is supported";
                    };              
                interBandMeasurements : 1 "interBandMeasurements"
                    {
                      0x0:"interBandMeasurements is not supported";
                      0x1:"interBandMeasurements is supported";
                    };
                ExtendedMeasurementSupport : 1 "ExtendedMeasurementSupport"
                    {
                      0x0:"ExtendedMeasurement is not supported";
                      0x1:"ExtendedMeasurement is supported";
                    };
                carrierCombination : 1 "carrierCombination"
                    {
                      0x0:"carrierCombination is not supported";
                      0x1:"carrierCombination is supported";
                    };                
                interFrequencyDetectedSetMeasurements : 1 "interFrequencyDetectedSetMeasurements"
                    {
                      0x0:"interFrequencyDetectedSetMeasurements is not supported";
                      0x1:"interFrequencyDetectedSetMeasurements is supported";
                    };            
                enhancedInterFrequencyMeasurements : 1 "enhancedInterFrequencyMeasurements"
                    {
                      0x0:"enhancedInterFrequencyMeasurements is not supported";
                      0x1:"enhancedInterFrequencyMeasurements is supported";
                    };             
                freqSpecificCompressedMode : 1 "freqSpecificCompressedMode"
                    {
                      0x0:"freqSpecificCompressedMode is not supported";
                      0x1:"freqSpecificCompressedMode is supported";
                    };  
    };
    r10_cap2:"r10 cap2"
    {
                support3CHSDPA : 1 "support3CHSDPA"
                    {
                      0x0:"3CHSDPA is not supported";
                      0x1:"3CHSDPA is supported";
                    };
                support4CHSDPA : 1 "support4CHSDPA"
                    {
                      0x0:"4CHSDPA is not supported";
                      0x1:"4CHSDPA is supported";
                    };              
                supportOfLoggedMeasurementsIdlePCH : 1 "supportOfLoggedMeasurementsIdlePCH"
                    {
                      0x0:"LoggedMeasurementsIdlePCH is not supported";
                      0x1:"LoggedMeasurementsIdlePCH is supported";
                    };
                supportOfUTRANANR : 1 "supportOfUTRANANR"
                    {
                      0x0:"UTRANANR is not supported";
                      0x1:"UTRANANR is supported";
                    };
                additionalSecondaryCells : 1 "additionalSecondaryCells"
                    {
                      0x0:"additionalSecondaryCells is not supported";
                      0x1:"additionalSecondaryCells is supported";
                    };                
                Bit6 : 1 "Bit6"
                    {
                    };            
                supportofDCHSUPA : 1 "supportofDCHSUPA"
                    {
                      0x0:"DCHSUPA is not supported";
                      0x1:"DCHSUPA is supported";
                    };             
                Bit8 : 1 "Bit8"
                    {
                    };  
    };
    r11_cap1:"r11 cap1"
    {
                cellsExcludedFromDetectedSetMeasurements : 1 "cellsExcludedFromDetectedSetMeasurements"
                    {
                      0x0:"cellsExcludedFromDetectedSetMeasurements is not supported";
                      0x1:"cellsExcludedFromDetectedSetMeasurements is supported";
                    };
                widebandRSRQFDDMeasurements : 1 "widebandRSRQFDDMeasurements"
                    {
                      0x0:"widebandRSRQFDDMeasurements is not supported";
                      0x1:"widebandRSRQFDDMeasurements is supported";
                    };              
                eutraSupportOfMFBI : 1 "eutraSupportOfMFBI"
                    {
                      0x0:"eutraMFBI is not supported";
                      0x1:"eutraMFBI is supported";
                    };
                umRlcReestViaReconfig : 1 "umRlcReestViaReconfig"
                    {
                      0x0:"umRlcReestViaReconfig is not supported";
                      0x1:"umRlcReestViaReconfig is supported";
                    };
                supportofMFBI : 1 "supportofMFBI"
                    {
                      0x0:"MFBI is not supported";
                      0x1:"MFBI is supported";
                    };                
                EUTRAFDDMeasurementReportingInCELLFACH : 1 "EUTRAFDDMeasurementReportingInCELLFACH"
                    {
                      0x0:"EUTRAFDDMeasurementReportingInCELLFACH is not supported";
                      0x1:"EUTRAFDDMeasurementReportingInCELLFACH is supported";
                    };            
                HS_DSCHSecondDRXOperation : 1 "HS_DSCHSecondDRXOperation"
                    {
                      0x0:"HS_DSCHSecondDRXOperation is not supported";
                      0x1:"HS_DSCHSecondDRXOperation is supported";
                    };             
                Bit8 : 1 "Bit8"
                    {
                    };  
    };
};

/********************************************************************************************
* LID_NAME
*	   NVRAM_EF_UMTS_USIME_RRC_DYNAMIC_CAP_TDD_LID
* DESCRIPTION
*	   Store UE capability. 
* INFOMATION
*	   Can OTA Reset: Yes
*	   Update Scenario: When power on/off or sim hot inherted or sim switch
*********************************************************************************************/

LID_BIT VER_LID(NVRAM_EF_UMTS_USIME_RRC_DYNAMIC_CAP_TDD_LID) nvram_ef_umts_usime_rrc_dynamic_tdd_struct * NVRAM_EF_UMTS_USIME_RRC_DYNAMIC_CAP_TDD_TOTAL
{
    pdcp_support:"pdcp support"
  	{
  	};
  pdcp_maxHeaderCompressLength:"Max PDCP compress header length"
  	{
  	};
  rlc_totalAmBufferSize:"RLC total AM buffer size"
  	{
  	};
  rlc_maxWinodwSize:"RLC max window size"
  	{
  	};
  rlc_maxAmEntityNumber:"RLC max AM entity Number"
  	{
  	};
  ulTrch_modeSpecificInfoSelect:"ULTrch mode specific"
  	{
  	};
  ulTrch_maxNoBitsTransmitted:"Ultrch Max Transmit Number bits"
  	{
  	};
  ulTrch_maxConvCodeBitsTransmitted:"Ultrch Max transmit code bits"
  	{
  	};
  ulTrch_turboEncodingSupportSelect:"Ultrch turbo encoding support"
  	{
  	};
  ulTrch_turboEncodingBitLength:"Ultrch turbo encoding bit length"
  	{
  	};
  ulTrch_maxSimultaneousTransChs:"Ultrch carry max tran channels"
  	{
  	};
  ulTrch_maxTransmittedBlocks:"Ultrch Max transmit blocks"
  	{
  	};
  ulTrch_maxNumberOfTFC:"Ultrch Max number of TFC"
  	{
  	};
  ulTrch_maxNumberOfTF:"Ultrch Max number of TF"
  	{
  	};
  ulTrch_maxSimultaneousCCTrCHCount:"Ultrch Max carry CCTrch Count"
  	{
  	};
  dlTrch_maxNoBitsReceived:"Dltrch Max receive bits"
  	{
  	};
  dlTrch_maxConvCodeBitsReceived:"Dltrch Max receive code bits"
  	{
  	};
  dlTrch_turboDecodingSupportSelect:"Dltrch turbo decoding support"
  	{
  	};
  dlTrch_turboDecodingBitLength:"Dltrch turbo decoding bit length"
  	{
  	};
  dlTrch_maxSimultaneousTransChs:"Dltrch Max simultaneous trans channels"
  	{
  	};
  dlTrch_maxSimultaneousCCTrCHCount:"Dltrch Max CCTrch count"
  	{
  	};
  dlTrch_maxReceivedTransportBlocks:"Dltrch Max receive TBS"
  	{
  	};
  dlTrch_maxNumberOfTFC:"Dltrch max number of TFC"
  	{
  	};
  dlTrch_maxNumberOfTF:"Dltrch max number of TF"
  	{
  	};
  wcdma_prefered_offset:"WCDMA prefered offset"
  	{
  	};
  band_reserved2:"band reserve"
  	{
  	};
  band_powerClass1:"UE power class1"
  	{
  	};
  band_powerClass2:"UE power class2"
  	{
  	};
  band_powerClass3:"UE power class3"
  	{
  	};
  pdcp_losslessSRNSRelocationSupport:"pdcp loss less relocation support"
  	{
  	};
  cipher_cap1:"ciper capability1"
  	{
  	};
  cipher_cap2:"ciper capability2"
  	{
  	};
  integrity_cap1:"integriy capability1"
  	{
  	};
  integrity_cap2:"integrity capability2"
  	{
  	};
  rrce_feature_cap:"RRCE feature"
  	{
  	};
  smart_paging_3g_fdd:"FDD smart paging "
  	{
  	};
  access_stratum_release:"AS release version"
  	{
  	};
  dlPhyCh_maxNoDPCH_PDSCH_Codes:"dlphych max number dpch pdsch"
  	{
  	};
  r3_cap1:"r3 cap1"
  	{
  	};
  r3_cap2:"r3 cap2"
  	{
  	};
  r3_cap3:"r3 cap3"
  	{
  	};
  r4_cap1:"r4 cap1"
  	{
  	};
  reverseCompressionDepthHighByte:"Reverse compression high byte"
  	{
  	};
  reverseCompressionDepthLowByte:"Reverse compression low byte"
  	{
  	};
  r5_cap1:"r5 cap1"
  	{
  	};
  r6_cap1:"r6 cap1"
  	{
  	};
  r7_cap1:"r7 cap1"
  	{
  	};
  r7_cap2:"r7 cap2"
  	{
  	};
  r9_cap1:"r9 cap1"
  	{
  	};
  r9_cap2:"r9 cap2"
  	{
  	};
  r9_cap3:"r9 cap3"
  	{
  	};
};
/********************************************************************************************
* LID_NAME
*      NVRAM_EF_UMTS_FREQUENCY_REPOSITORY_LID
* DESCRIPTION
*      ASN.1 encoded Stored frequency repository for UMTS FDD and TDD
* INFORMATION
*      Can OTA Reset: Yes
*      Update Scenario: This LID will update once during task init.
*********************************************************************************************/
LID_BIT VER_LID(NVRAM_EF_UMTS_FREQUENCY_REPOSITORY_LID) nvram_ef_umts_frequency_repository_struct * NVRAM_EF_UMTS_FREQUENCY_REPOSITORY_TOTAL
{
    data : "ASN.1 encoded frequency repository [4500]" {};
};

/********************************************************************************************
* LID_NAME
*	   NVRAM_EF_UMTS_URR_CONFIGURATION_LID
* DESCRIPTION
*	   Store CSE Configuration about real network plmn id
*        Store SLCE Configuration enable DTX test or not. 
* INFOMATION
*	   Can OTA Reset: Yes
*	   Update Scenario: When power on/off
*********************************************************************************************/

//#if defined(__UMTS_TDD128_MODE__) && defined(__UMTS_R7__)
#if (defined(__UMTS_TDD128_MODE__) && defined(__UMTS_R7__)) || (defined(__SEARCH_ALL_EHPLMN_TOGETHER__))
LID_BIT VER_LID(NVRAM_EF_UMTS_URR_CONFIGURATION_LID) nvram_ef_umts_urr_configuration_struct * NVRAM_EF_UMTS_URR_CONFIGURATION_TOTAL
{
    slce:"Store CSE Configuration about real network plmn id"
    	{
    	};
	cse:"Store SLCE Configuration enable DTX test or not"
		{
		};
};
#endif

#if defined(__UMTS_FDD_MODE__) && defined(__UMTS_R7__)
/********************************************************************************************
* LID_NAME
*      NVRAM_EF_UMTS_DMCR_SETTING_LID
* DESCRIPTION
*      List of PLMNs for which DMCR feature should be disabled
* INFORMATION
*      Can OTA Reset: Yes
*      Update Scenario: This LID will update once during task init.
*********************************************************************************************/
LID_BIT VER_LID(NVRAM_EF_UMTS_DMCR_SETTING_LID) nvram_ef_umts_dmcr_setting_struct * NVRAM_EF_UMTS_DMCR_SETTING_TOTAL
{
    disable_PLMN : "PLMN id for which DMCR feature will be disabled[16]" {};
};
/********************************************************************************************
* LID_NAME
*      NVRAM_EF_UMTS_SIB_SKIP_SETTING_LID
* DESCRIPTION
*      List of PLMNs for which SIB SKIP feature should be enabled
* INFORMATION
*      Can OTA Reset: Yes
*      Update Scenario: This LID will update once during task init.
*********************************************************************************************/
LID_BIT VER_LID(NVRAM_EF_UMTS_SIB_SKIP_SETTING_LID) nvram_ef_umts_sib_skip_setting_struct * NVRAM_EF_UMTS_SIB_SKIP_SETTING_TOTAL
{
    enable_PLMN : "PLMN id for which SKIP SKIP feature will be enabled[16]" {};
};
#endif /* __UMTS_FDD_MODE__ && __UMTS_R7__ */

#endif /* __UMTS_RAT__ */


#if (defined(__3G_CSG_SUPPORT__) || defined(__LTE_RAT__))
LID_BIT VER_LID(NVRAM_EF_UMTS_FINGERPRINT_INFO_LID) nvram_ef_umts_fingerprint_entry_struct * NVRAM_EF_UMTS_FINGERPRINT_INFO_TOTAL{};
#endif

//#ifdef __BAND_PRIORITY_SEARCH__
#if defined(__UMTS_RAT__) && defined(__UMTS_FDD_MODE__)
/********************************************************************************************
* LID_NAME
*      NVRAM_EF_UMTS_BAND_PRIORITY_LID
* DESCRIPTION
*      Priority of each UMTS FDD band from Lowest (0x00) to Highest (0xFF)
* INFORMATION
*      Can OTA Reset: Yes
*      Update Scenario: This LID will update once during task init.
*********************************************************************************************/
LID_BIT VER_LID(NVRAM_EF_UMTS_BAND_PRIORITY_LID) nvram_ef_umts_band_priority_struct * NVRAM_EF_UMTS_BAND_PRIORITY_TOTAL
{
    band : "Priority of band[26], range 0x00~0xFF Lowest to Highest" {};
};
#endif /* __UMTS_RAT__ && __UMTS_FDD_MODE_ */
//#endif /* __BAND_PRIORITY_SEARCH__ */

/********************************************************************************************
* LID_NAME
*      NVRAM_EF_CSE_KOR_INFO_LID
* DESCRIPTION
*      Proritise certain frequencies on KT and SKT Operators
* INFORMATION
*      Can OTA Reset: Yes
*      Update Scenario: This LID will update once during task init.
*********************************************************************************************/

LID_BIT VER_LID(NVRAM_EF_CSE_KOR_INFO_LID) nvram_ef_cse_kor_info_struct * NVRAM_EF_CSE_KOR_INFO_TOTAL
{
    num_of_uarfcn : "No. of UARFCNs" {};
    uarfcn        : "UARFCN[6]s to be prioritized" {};
};

LID_BIT VER_LID(NVRAM_EF_WCDMA_CUSTOM_DISABLE_BAND_LIST_LID) nvram_ef_wcdma_custom_disable_band_list_struct * NVRAM_EF_WCDMA_CUSTOM_DISABLE_BAND_LIST_TOTAL
{
	
	
	positiveList:"Positive list to disable band by plmn."
    {};
        positiveList.numPlmn:"The valid plmn number of positive list setting."
        {};
	    positiveList.disable_band_by_plmn_list:"Positive custom disable band setting by plmn"
        {};
    invertedList:"Inverted list to disable band by plmn"
    {};
        invertedList.numPlmn:"The valid plmn group number of inverted list setting."
        {};
	    invertedList.disable_band_by_plmn_list:"Inverted custom disable band setting by plmn"
        {};
   
    
	
};

LID_BIT VER_LID(NVRAM_EF_UMTS_CUSTOM_RSCP_ECNO_CSFB_CALL_INFO_LID) nvram_ef_umts_custom_rscp_ecno_csfb_call_info_struct * NVRAM_EF_UMTS_CUSTOM_RSCP_ECNO_CSFB_CALL_INFO_TOTAL{};

END_NVRAM_DATA
#endif	/*GEN FOR PC*/

#ifdef __cplusplus
}
#endif 

#endif  /* !NVRAM_NOT_PRESENT */
#endif  /* __UMTS_NVRAM_EDITOR_H__ */
