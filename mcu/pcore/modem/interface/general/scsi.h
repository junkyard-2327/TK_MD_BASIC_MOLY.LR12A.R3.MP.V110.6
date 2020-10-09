/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2007
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
/******************************************************************************
 * Filename:
 * --------------------------------------------------------
 *   scsi.h
 *
 * Project:
 * --------------------------------------------------------
 *   MONZA
 *
 * Description:
 * --------------------------------------------------------
 *   Implementation of Scsi class.
 *
 * Author:
 * --------------------------------------------------------
 * -------
 *
 * --------------------------------------------------------
 * $Log$
 *
 * 05 15 2019 vinayak.bandagi
 * [MOLY00400912] [CODE SYNC][MH4ATT_P][Protocol][10776] cannot find 348-300-3G(1900) during LTE-BTR-1-1150
 *
 * 05 14 2019 harish.reddy
 * [MOLY00405667] [CODE SYNC]?TOP??NL-BD236??FT??T-Mobile??Free_test?Manual search and register  KPN 4G?appear modemCrash?3/5?
 *
 * 02 20 2019 shreya.raizada
 * [MOLY00367496] [CODE SYNC] [MT3967][Eiger][O1][MD Static Test][CMW Cards][China][Auto] Incorrect UTRAN FDD bands are filled in the utra UE-CapabilityRAT-Container
 * .
 *
 * 12 14 2017 vend_mtb_aritha001
 * [MOLY00296081] [OPPO_FT][1151630] DUT fail to show own ( Vodafone 3G) RAT during MPLMN search for Vodafone operator.
 * ALPS03622290 [[1155800]?17310-IN??FT-Free_Test? Observed DUT fails to show IDEA(3G) RAT while performing PLMN on Airtel operator when mode set as LWG(Auto).]
 *
 * 04 12 2017 rajasekhar.gade
 * [MOLY00240270] [6293][Gemini][T+W] Phase 1: Common Interface Changes Check in
 * 	
 * 	.
 *
 * 01 06 2017 rajasekhar.gade
 * [MOLY00215599] [B160916-164]?1??+?2????1?????????????1????2????,??2???2G
 * 	
 * 	.
 *
 * 10 24 2016 vend_mtb_mobiveil003
 * [MOLY00209293] Band 66 support
 * Band 66 support
 *
 * 07 09 2015 peter.chiang
 * [MOLY00125851] SCSI compile warning remove and index bug fix
 * remove compile warning and fix index error of SCSI
 *
 * 06 01 2015 henry.lai
 * [MOLY00092508] [MT6291][LTE-C2K] AS Inter RAT feature
 * .
 *
 * 05 20 2015 nicky.chou
 * [MOLY00089131] [MT6291 Gemini] L+W+W+W code revision check in
 * .
 *
 * 04 14 2015 nicky.chou
 * [MOLY00106888] [USIME]FDD/TDD set band problem when init
 * .
 *
 * 12 11 2014 nicky.chou
 * [MOLY00084935] [SCSI][LCSCE] sync to UMOLY from MT6291_DEV
 * .
 *
 * 11 19 2014 nicky.chou
 * [MOLY00084935] [SCSI][LCSCE] sync to UMOLY from MT6291_DEV
 * .
 *
 * 06 04 2014 nicky.chou
 * [MOLY00067600] [CMCC][CSFB] 5.2.1 HZ FT workaournd - add scsi GSMLatestServingCell for 4G measurement
 * .
 *
 * 12 20 2013 nicky.chou
 * [MOLY00050587] [SCSI][Gemini] remove APIs without sim_index
 * .
 *
 * 11 21 2013 nicky.chou
 * [MOLY00045854] [PS1267 HG+WG] Check-in Gemini HG+WG modification
 * .
 *
 * 04 09 2013 nicky.chou
 * [MOLY00011685] [CSE][SCSI][USIME] UMTS Band Priority Search
 * .
 *
 * 03 14 2013 nicky.chou
 * [MOLY00009229] [CSE][SCSI] Merge Multimode modification back to MOLY
 * .
 *
 * 01 23 2013 nicky.chou
 * [MOLY00009229] [CSE][SCSI] Merge Multimode modification back to MOLY
 * .
 * 
 * 09 26 2012 ye.yuan
 * [MOLY00004173] [3G TDD][CISE]R9 code merge back to MOLY
 * CSCE CODE Interface part .
 *
 * 07 02 2012 nicky.chou
 * [MOLY00000149] [SCSI][CSE][USIME][MEME] Performance optimization for Auto-Band & Stored Info Freq List
 * .
 *
 * 04 16 2012 nicky.chou
 * removed!
 * .
 *
 * 01 15 2012 nicky.chou
 * removed!
 * .
 *
 * 11 08 2011 nicky.chou
 * removed!
 * .
 *
 * 05 31 2011 nicky.chou
 * removed!
 * .
 *
 * 12 14 2010 nicky.chou
 * removed!
 * .
 *
 * removed!
 * removed!
 * 
 *
 * removed!
 * removed!
 * 
 *
 * removed!
 * removed!
 * 
 *
 * removed!
 * removed!
 * 
 *
 * removed!
 * removed!
 * 
 *
 * removed!
 * removed!
 * 
 *
 * removed!
 * removed!
 * 
 *
 * removed!
 * removed!
 * 
 *
 * removed!
 * removed!
 * 
 *
 * removed!
 * removed!
 * 
 *
 * removed!
 * removed!
 * 
 *
 * removed!
 * removed!
 * UARFCN validation function refactor (from URR to SCSI)
 *
 * removed!
 * removed!
 * 
 *
 * removed!
 * removed!
 * 
 *
 * removed!
 * removed!
 * add to source control recursely
 *
 * removed!
 * removed!
 * Add copyright header.
 *
 * removed!
 * removed!
 * add to source control recursely
 *
 * removed!
 * removed!
 * 
 *
 * removed!
 * removed!
 * 
 *
 * removed!
 * removed!
 * 
 *
 * removed!
 * removed!
 * 
 *
 * removed!
 * removed!
 * 
 *
 * removed!
 * removed!
 * 
 *
 * removed!
 * removed!
 * 
 *
 *****************************************************************************/
/**
 * scsi.h
 * 
 * # @COPYLEFT 2005 Jethro E. Lee
 * ALL WRONGS RESERVED
 * 
 * [Useage]
 * 
 * [SYNOPSIS]
 * 
 * [Example]
 */

#ifndef __SCSI_H__	/* _(!@$ `scsi.h' $@!)_ */
#define __SCSI_H__

/* Nicky 20101008: include header files for redundant header file removal */
#include "kal_general_types.h"
#include "scsi_asn.h"    
#include "csi_asn.h"     
#include "mcd_l3_inc_struct.h"
#ifdef __GSM_RAT__
#include "csi_gsm_asn.h" 
#endif
#ifdef __UMTS_RAT__
#include "csi_umts_asn.h"
#endif
#ifdef __LTE_RAT__
#include "csi_lte_asn.h"
#endif


#define SCSI_SIM_EF_LOCI_LEN                    (11)
#define SCSI_USIM_EF_LOCI_LEN                   (11)
#define SCSI_USIM_EF_PSLOCI_LEN                 (14)

/** 
 * UTRAN Absolute Radio Frequency Channel Number 
 *  
 * UTRAFDD is designed to operatein either of the  
 * following paired bands: 
 *            1920-1980 MHz Uplink 
 *            2110-2170 MHz Downlink 
 *  
 * UARFCN Uplink:           9612- 9888 
 * UARFCN Downlink:         10562-10838 
 */
#ifdef __LTE_RAT__
#define SCSI_MAX_EARFCN                         (262143)
#endif /* __LTE_RAT__ */
#define SCSI_MAX_UARFCN                         (16383)
#define SCSI_PRIMARY_SCRAMBLING_CODE_MAX        (511) //UMTS FDD
#define SCSI_CELL_PARAMETERS_ID_MAX             (127) //UMTS TDD

/* Clause 2 of SPEC 05.05 */
#define SCSI_MAX_GSM_ARFCN                      (1024)

#define SCSI_GSM_CELL_INFORMATION_TAG           (0xA0)
#define SCSI_FDD_CELL_INFORMATION_TAG           (0xA1)
#define SCSI_TDD_CELL_INFORMATION_TAG           (0xA2)
#define SCSI_GSM_CAMPED_BCCH_FREQUENCY_TAG              (0x80)
#define SCSI_GSM_NEIGHBOUR_BCCH_FREQUENCY_TAG           (0x81)
#define SCSI_INTRA_FREQUENCY_INFORMATION_TAG        (0x80)
#define SCSI_INTER_FREQUENCY_INFORMATION_TAG        (0x81)
#define SCSI_UNITIALIZED_USIM_DATA                      (0xFF)

typedef enum {
    SCSI_SIM1 = 0,
    SCSI_SIM2,
    SCSI_SIM3,
    SCSI_SIM4,
    SCSI_SIM_INVALID
}SCSI_SIM_INDEX;

#ifdef __UMTS_RAT__

/**
 *  Lucien Huang 20081218:
 *    Please be sure that the following definition shall be matched with
 *    those in rrc_utils.h (same definition could be seen there)
 **/

#define SCSI_TOTAL_NUMBER_OF_UMTS_FDD_BAND_DEFINED      (26)
#define SCSI_TOTAL_NUMBER_OF_UMTS_TDD_BAND_DEFINED      (6)
#define SCSI_TOTAL_NUMBER_OF_UMTS_BAND_DEFINED ((SCSI_TOTAL_NUMBER_OF_UMTS_FDD_BAND_DEFINED>SCSI_TOTAL_NUMBER_OF_UMTS_TDD_BAND_DEFINED)? SCSI_TOTAL_NUMBER_OF_UMTS_FDD_BAND_DEFINED: SCSI_TOTAL_NUMBER_OF_UMTS_TDD_BAND_DEFINED)

#define SCSI_MAX_NUM_OF_UMTS_BAND_SUPPORTED         (26)
#define SCSI_MAX_NUM_OF_UMTS_BAND_ADDITION_INFO     (11) /* For UMTS FDD BAND V(Num:6) and XXVI(Num:11) */

enum SCSI_UMTS_BAND_UARFCN_IDENTIFIER_TAG
{
    SCSI_UMTS_FDD_UARFCN_BAND_I_Identifier = 0,
    SCSI_UMTS_FDD_UARFCN_BAND_II_Identifier,
    SCSI_UMTS_FDD_UARFCN_BAND_III_Identifier,
    SCSI_UMTS_FDD_UARFCN_BAND_IV_Identifier,
    SCSI_UMTS_FDD_UARFCN_BAND_V_Identifier,
    SCSI_UMTS_FDD_UARFCN_BAND_VI_Identifier,
    SCSI_UMTS_FDD_UARFCN_BAND_VII_Identifier,
    SCSI_UMTS_FDD_UARFCN_BAND_VIII_Identifier,
    SCSI_UMTS_FDD_UARFCN_BAND_IX_Identifier,
    SCSI_UMTS_FDD_UARFCN_BAND_X_Identifier,
    SCSI_UMTS_FDD_UARFCN_BAND_XI_Identifier,
    SCSI_UMTS_FDD_UARFCN_BAND_XII_Identifier,
    SCSI_UMTS_FDD_UARFCN_BAND_XIII_Identifier,
    SCSI_UMTS_FDD_UARFCN_BAND_XIV_Identifier,
    SCSI_UMTS_FDD_UARFCN_BAND_XV_Identifier,
    SCSI_UMTS_FDD_UARFCN_BAND_XVI_Identifier,
    SCSI_UMTS_FDD_UARFCN_BAND_XVII_Identifier,
    SCSI_UMTS_FDD_UARFCN_BAND_XVIII_Identifier,
    SCSI_UMTS_FDD_UARFCN_BAND_XIX_Identifier,
    SCSI_UMTS_FDD_UARFCN_BAND_XX_Identifier,
    SCSI_UMTS_FDD_UARFCN_BAND_XXI_Identifier,
    SCSI_UMTS_FDD_UARFCN_BAND_XXII_Identifier,
    SCSI_UMTS_FDD_UARFCN_BAND_XXIII_Identifier,
    SCSI_UMTS_FDD_UARFCN_BAND_XXIV_Identifier,
    SCSI_UMTS_FDD_UARFCN_BAND_XXV_Identifier,
    SCSI_UMTS_FDD_UARFCN_BAND_XXVI_Identifier,
    SCSI_UMTS_FDD_UARFCN_BAND_INVALID,
    SCSI_UMTS_TDD_UARFCN_BAND_A_Identifier = 0,
    SCSI_UMTS_TDD_UARFCN_BAND_B_Identifier = 1,
    SCSI_UMTS_TDD_UARFCN_BAND_C_Identifier = 2,
    SCSI_UMTS_TDD_UARFCN_BAND_D_Identifier = 3,
    SCSI_UMTS_TDD_UARFCN_BAND_E_Identifier = 4,
    SCSI_UMTS_TDD_UARFCN_BAND_F_Identifier = 5,
    SCSI_UMTS_TDD_UARFCN_BAND_INVALID = 6
};

typedef enum SCSI_UMTS_BAND_UARFCN_IDENTIFIER_TAG SCSI_UMTS_Band_UARFCN_Identifier;

#define SCSI_MAX_OVERLAPPING_BANDS                  (4)

typedef struct {
    kal_uint8 numUarfcn;
    CsiUarfcn overlappingUarfcn[SCSI_MAX_OVERLAPPING_BANDS];
    SCSI_UMTS_Band_UARFCN_Identifier overlappingBand[SCSI_MAX_OVERLAPPING_BANDS];
} SCSI_UMTS_overlapping_band_info_struct;

typedef enum
{
   SCSI_RRC_UE_PowerClassExt_class1,
   SCSI_RRC_UE_PowerClassExt_class2,
   SCSI_RRC_UE_PowerClassExt_class3,
   SCSI_RRC_UE_PowerClassExt_class4,
   SCSI_RRC_UE_PowerClassExt_spare4,
   SCSI_RRC_UE_PowerClassExt_spare3,
   SCSI_RRC_UE_PowerClassExt_spare2,
   SCSI_RRC_UE_PowerClassExt_spare1
}
SCSI_RRC_UE_PowerClassExt;

typedef enum
{
    SCSI_UMTS_UARFCN_DL,
    SCSI_UMTS_UARFCN_UL
}SCSI_UMTS_UarfcnDirectionType;

typedef struct SCSI_UMTS_BAND_UARFCN_ADDITION_SPECIAL_INFO_TAG SCSI_UMTS_Band_UARFCN_Addition_Special;

struct SCSI_UMTS_BAND_UARFCN_ADDITION_SPECIAL_INFO_TAG
{
    kal_uint8     addition_number;
    kal_uint16    uarfcn[SCSI_MAX_NUM_OF_UMTS_BAND_ADDITION_INFO];
};

typedef struct SCSI_UMTS_BAND_UARFCN_ADDITION_GENERAL_INFO_TAG SCSI_UMTS_Band_UARFCN_Addition_General;

struct SCSI_UMTS_BAND_UARFCN_ADDITION_GENERAL_INFO_TAG
{
    kal_uint16    addition_start;
    kal_uint8     addition_number;
};

enum SCSI_UMTS_BAND_UARFCN_ADDITION_TYPE_TAG
{
    SCSI_UMTS_BAND_UARFCN_ADDITION_None_Selector,
    SCSI_UMTS_BAND_UARFCN_ADDITION_GENERAL_Selector,
    SCSI_UMTS_BAND_UARFCN_ADDITION_SPECIAL_Selector
};

typedef enum SCSI_UMTS_BAND_UARFCN_ADDITION_TYPE_TAG SCSI_UMTS_Band_UARFCN_AdditionType;

typedef struct SCSI_UMTS_BAND_UARFCN_CHECK_INFO_TAG SCSI_UMTS_BandCheckInfo;

#if 0 /*__3GPP_25102_DEFINITION__*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif

struct SCSI_UMTS_BAND_UARFCN_CHECK_INFO_TAG
{
#if 0 /*__3GPP_25102_DEFINITION__*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif

    kal_uint16                               low_bound;
    kal_uint16                               upper_bound;
    SCSI_UMTS_Band_UARFCN_AdditionType    selection;
    union
    {
        kal_uint8                                  none;
        SCSI_UMTS_Band_UARFCN_Addition_General  general;
        SCSI_UMTS_Band_UARFCN_Addition_Special  special;
    }choice;
};

struct SCSI_UMTS_BAND_INFO_TAG
{
    SCSI_UMTS_Band_UARFCN_Identifier  radioFrequencyBand;
    SCSI_RRC_UE_PowerClassExt            ue_PowerClass;
    kal_uint16                           txRxFrequencySeparation; /* in UARFCN */
    SCSI_UMTS_BandCheckInfo           uarfcn_check_info;
};

typedef struct SCSI_UMTS_BAND_INFO_TAG SCSI_UMTS_BandInfo;

typedef struct SCSI_UMTS_BAND_INFO_LIST_TAG SCSI_UMTS_BandInfoList;

struct SCSI_UMTS_BAND_INFO_LIST_TAG
{
    kal_uint8                         band_number; /* number of UMTS FDD working band */
    SCSI_UMTS_Band_UARFCN_Identifier  band_index[SCSI_TOTAL_NUMBER_OF_UMTS_BAND_DEFINED]; /* list of enum of UMTS FDD working band */
};

typedef struct SCSI_UMTS_BAND_INFO_DEFINED_TAG SCSI_UMTS_BandInfoDefinedList;

struct SCSI_UMTS_BAND_INFO_DEFINED_TAG
{
    kal_uint8                  band_number;
    SCSI_UMTS_BandInfo         band_info[SCSI_TOTAL_NUMBER_OF_UMTS_BAND_DEFINED];
};


/*
 * Chi-Chung 20090715:
 *    Code revised for frequencyRepository.  This is the structure for user to get the uarfcn in a MCC
 */
#define MAX_UARFCN_PER_MCC 32
    
/* the uarfcn in a Mcc*/
typedef struct SCSI_UMTS_UarfcnPerMcc
{
    ScsiMccValue mcc;
    kal_uint8 count;
    CsiUarfcn uarfcn[MAX_UARFCN_PER_MCC];
}
SCSI_UMTS_UarfcnPerMcc;

extern void Scsi_ComposeUmtsBandDefinitionInfo(void);

extern void Scsi_SE_retrieveUmtsBandListInfo(SCSI_SIM_INDEX sim_index, SCSI_UMTS_BandInfoList **ppScsi_StoredUmtsFddBandListInfo);

extern void Scsi_SE_retrieveFddUmtsBandListInfo(SCSI_SIM_INDEX sim_index, SCSI_UMTS_BandInfoList **ppScsi_StoredUmtsFddBandListInfo);

extern void Scsi_retrieveUmtsFddAndTddBandDefinedInfo(SCSI_UMTS_BandInfoDefinedList **ppScsi_StoreUmtsFddBandDefinedInfo, SCSI_UMTS_BandInfoDefinedList **ppScsi_StoreUmtsTddBandDefinedInfo);

extern kal_bool Scsi_SE_ensureUarfcnValid(SCSI_SIM_INDEX sim_index, kal_uint16 uarfcn);

/****************************************************************************
 *    Function:    Scsi_UarfcnValidateInAllUmtsBand
 *
 *    parameter: 
 *      a. uarfcn - uarfcn which we want to check the validation
 *      b. type - indicate to perform DL or UL UARFCN validation
 *      c. band_id - store which band the input uarfcn locates if return KAL_TRUE
 *                   meaningless if return KAL_FALSE or input band_id is NULL pointer
 *    Returns:
 *      a. return KAL_TRUE means input uarfcn is in valid range
 *      b. *band_id will store the band number which this uarfcn locates if band_id is not NULL pointer
 *
 *    Description:
 *      Envoked for check whether the input uarfcn is in the valid value range which 3GPP defines for
 *      whole UMTS FDD bands. Currently it will check Band I - X.
 *
 *****************************************************************************/

extern kal_bool Scsi_UarfcnValidateInAllUmtsBand(SCSI_SIM_INDEX sim_index, kal_uint16 uarfcn, SCSI_UMTS_UarfcnDirectionType type, SCSI_UMTS_Band_UARFCN_Identifier *band_id);

extern kal_bool Scsi_SE_UarfcnValidateInAllSupportUmtsBand(SCSI_SIM_INDEX sim_index, kal_uint16 uarfcn, SCSI_UMTS_UarfcnDirectionType type, SCSI_UMTS_Band_UARFCN_Identifier *band_id);

extern kal_bool Scsi_UarfcnValidateInOneSupportUmtsBand(SCSI_SIM_INDEX sim_index, kal_uint16 uarfcn, SCSI_UMTS_UarfcnDirectionType type, SCSI_UMTS_Band_UARFCN_Identifier band_id);

extern kal_bool Scsi_SE_UarfcnValidateInAllSupportUmtsBandExt(SCSI_SIM_INDEX sim_index, kal_uint16 uarfcn, SCSI_UMTS_UarfcnDirectionType type, SCSI_UMTS_Band_UARFCN_Identifier *band_id, kal_uint8 *indexInBandFDDList);

extern kal_uint8 Scsi_SE_GetNumOfUmtsSupportBand(SCSI_SIM_INDEX sim_index);

extern void Scsi_SE_GetUmtsSupportBandInfo(SCSI_SIM_INDEX sim_index, SCSI_UMTS_BandInfoList const **workBandInfo);

extern void Scsi_SE_GetUmtsFddAndTddSupportBandInfo(SCSI_SIM_INDEX sim_index, SCSI_UMTS_BandInfoList **fddWorkBandInfo, SCSI_UMTS_BandInfoList  **tddWorkBandInfo);

extern void Scsi_SE_RequiredUmtsBandListQuery(SCSI_SIM_INDEX sim_index, kal_uint8 *query_array);

extern kal_bool Scsi_SE_IsUmtsSupportBand(SCSI_SIM_INDEX sim_index, SCSI_UMTS_Band_UARFCN_Identifier band_id);

#endif /* __UMTS_RAT__ */

#ifdef __LTE_RAT__
#define MAX_BYTE_LTE_BAND_BITMASK 8

typedef struct SCSI_LTE_Band_Bitmask
{
    kal_uint8 oneByteBandBitmask[MAX_BYTE_LTE_BAND_BITMASK];
}
SCSI_LTE_Band_Bitmask;

/* Extended supported LTE bitmask size in bits (256) / bits in one byte (8)
 */
#define MAX_BYTE_LTE_BAND_BITMASK_EXTENDED ( 256 / 8 )

typedef struct SCSI_LTE_Band_Bitmask_Extended
{
    kal_uint8 oneByteBandBitmask[MAX_BYTE_LTE_BAND_BITMASK_EXTENDED];
}
SCSI_LTE_Band_Bitmask_Extended;

#endif /* __LTE_RAT__ */

#if (defined(__23G_PRI_RESEL_SUPPORT__) || defined(__3G_CSG_SUPPORT__) || defined(__LTE_RAT__) || defined(__CDMA2000_RAT__))
#define SCSI_MAX_TICKS 0xFFFFFFFF

typedef enum {
    SCSI_GSM_RAT,
    SCSI_UMTSFDD_RAT,
    SCSI_UMTSTDD_RAT,
    SCSI_LTE_RAT,
    SCSI_C2K_RAT
}SCSI_RAT_MODE_TYPE;
#endif /* defined(__23G_PRI_RESEL_SUPPORT__) || defined(__3G_CSG_SUPPORT__) || defined(__LTE_RAT__) || defined(__CDMA2000_RAT__) */

#if (defined(__23G_PRI_RESEL_SUPPORT__) || defined(__LTE_RAT__) || defined(__CDMA2000_RAT__))
//Dedicated Priority Info
#define SCSI_MAX_NUM_OF_PRIO_INFO 17
#define SCSI_MAX_BYTE_OF_GSM_PRIO_ARFCN  128    // bitmask, total 128 bytes.
#define SCSI_MAX_NUM_OF_UMTSFDD_PRIO_UARFCN  32 // 32 frequency.
#define SCSI_MAX_NUM_OF_UMTSTDD_PRIO_UARFCN  32 // 32 frequency.
#define SCSI_MAX_NUM_OF_LTE_PRIO_EARFCN  32 // 32 frequency
#define SCSI_MAX_NUM_OF_C2K_PRIO_BAND  32 // 32 band

typedef struct{
  kal_int8       priority;
  SCSI_RAT_MODE_TYPE  rat_choice;
  kal_uint8      freq_count;         // only used in 3G or LTE type, it keeps the frequency count
  kal_uint8      gsm_band_indicator; //refer to te_gsm_band_indicator in uas_gas_enums.h
  /**
   * for GSM RAT, every bit represenet a ARFCN (from 0~1023); LSB of octet 1 represent arfcn = 0, MSB of octet 1 represent arfcn = 7
   * for UMTSFDD, every U16 element represent an UARFCN.
   * for LTE,     every U32 element represent an EARFCN.
   * for C2K,     every U8  element represent an Band.
   **/
  union{
    kal_uint8  *ARFCN_bitmap; // SCSI_MAX_BYTE_OF_GSM_PRIO_ARFCN
    kal_uint16 *UARFCN_list;  // SCSI_MAX_NUM_OF_UMTSFDD_PRIO_UARFCN <== each of them is two bytes.
    kal_uint32 *EARFCN_list; // SCSI_MAX_NUM_OF_LTE_PRIO_EARFCN <== each of them is four bytes.
    kal_uint8  *C2K_Band_list; // SCSI_MAX_NUM_OF_C2K_PRIO_BAND <== each of them is one byte
  }choice;
} SCSI_layer_prio_struct;

typedef struct{
  plmn_id_struct            rplmn;
  SCSI_RAT_MODE_TYPE        dedi_prio_info_src;
  kal_uint8                 layer_prio_count;
  SCSI_layer_prio_struct    layer_prio_list[SCSI_MAX_NUM_OF_PRIO_INFO];

  kal_uint32                tick_previous; // SCSI internal use
  kal_uint32                tick_left;     // SCSI internal use
} SCSI_dedi_prio_info;

#define SCSI_MAX_NUM_OF_DEPRIORITIZATION_INFO 8
#define SCSI_MAX_DEPRIORITIZATION_PLMN_NUM 8

typedef struct{
  plmn_id_struct            rplmn;
  kal_uint8                 freq_num;
  kal_uint32                earfcn_info_list[SCSI_MAX_NUM_OF_DEPRIORITIZATION_INFO]; // frequency list, if earfcn == 0xffffffff => all LTE RAT

  kal_uint32                tick_previous; // SCSI internal use
  kal_uint32                tick_left;     // SCSI internal use
} SCSI_deprioritization_info_struct;

// for VzW request
typedef struct{
  kal_uint8                 plmn_num;
  SCSI_deprioritization_info_struct    *deprioritization_info_list[SCSI_MAX_DEPRIORITIZATION_PLMN_NUM];
} SCSI_deprioritization_info_tbl_struct;
#endif /* __23G_PRI_RESEL_SUPPORT__ || __LTE_RAT__ || __CDMA2000_RAT__ */


#if (defined(__3G_CSG_SUPPORT__) || defined(__LTE_RAT__))
//CSG Split Info
#define SCSI_MAX_NUM_OF_CSG_SPLIT_INFO  3   //the value cannot be equal to zero which 'wrap around' will happen in SCSI_newCSGSplitInfo().
#define SCSI_MAX_BYTE_OF_PHY_CELL_ID       64    // bitmask, total 64 bytes.
#define SCSI_MAX_NUM_OF_MULTI_PLMN   6

#ifdef __3G_CSG_SUPPORT__
typedef struct{
  kal_uint8      plmn_count;
  plmn_id_struct plmn[SCSI_MAX_NUM_OF_MULTI_PLMN];
  CsiUarfcn      uarfcn;
  kal_uint8      phyCellId_bitmap[SCSI_MAX_BYTE_OF_PHY_CELL_ID]; //every bit represenet a PSC (from 0~512); LSB of octet 1 represent psc = 0, MSB of octet 1 represent psc = 7

  kal_uint32     tick_previous; // SCSI internal use
  kal_uint32     tick_left;     // SCSI internal use
} SCSI_umts_csg_split_info;
#endif /* __3G_CSG_SUPPORT__ */

#ifdef __LTE_RAT__
typedef struct{
  kal_uint8      plmn_count;
  plmn_id_struct plmn[SCSI_MAX_NUM_OF_MULTI_PLMN];
  CsiEarfcn      earfcn;
  kal_uint8      phyCellId_bitmap[SCSI_MAX_BYTE_OF_PHY_CELL_ID]; //every bit represenet a PSC (from 0~512); LSB of octet 1 represent psc = 0, MSB of octet 1 represent psc = 7

  kal_uint32     tick_previous; // SCSI internal use
  kal_uint32     tick_left;     // SCSI internal use
} SCSI_lte_csg_split_info;
#endif /* __LTE_RAT__ */

#ifdef __3G_CSG_SUPPORT__
typedef struct{
  kal_uint8           list_count;
  SCSI_umts_csg_split_info split_info_list[SCSI_MAX_NUM_OF_CSG_SPLIT_INFO];
}SCSI_umts_csg_split_info_list;
#endif /* __3G_CSG_SUPPORT__ */

#ifdef __LTE_RAT__
typedef struct{
  kal_uint8           list_count;
  SCSI_lte_csg_split_info split_info_list[SCSI_MAX_NUM_OF_CSG_SPLIT_INFO];
}SCSI_lte_csg_split_info_list;
#endif /* __LTE_RAT__ */

#endif /* __3G_CSG_SUPPORT__ || __LTE_RAT__ */


// Constructor
extern void Scsi_Scsi(void);
extern void Scsi_reset(void);


// Initializer
extern void Scsi_initFromNVRAM(kal_uint8* nvramEfNetparBufPtr, kal_uint16 const nvramEfNetparBufLen);

extern kal_bool Scsi_isNvramInitialized(void);

#ifdef __GSM_RAT__
/* Jethro: Suppose SIM is able to be handled in all cases, regardless the load is dual mode or single mode. */
extern void Scsi_initFromSIM(plmn_id_struct const* const rPlmnId, 
                                CsiGsmCellList const* const gsmCellList);
#endif /* __GSM_RAT__ */

#ifdef __UMTS_RAT__      /* 3G is to be built-in */
extern void Scsi_initFromUSIM(SCSI_SIM_INDEX sim_index,
                              plmn_id_struct const* const rPlmnId, 
                              CsiUmtsCellList* const umtsCellList
#ifdef __GSM_RAT__
                              , 
                              CsiGsmCellList const* const gsmCellList
#endif
                              );

extern void Scsi_FreqRepositoryInitFromNVRAM(kal_uint8* nvramEfNetparBufPtr, kal_uint16 const nvramEfNetparBufLen);
extern kal_uint16 Scsi_getNvramEFUmtsFreq(kal_uint8* const nvramEfNetparBufPtr, kal_uint16 const nvramEfNetparBufLen);
extern void Scsi_freqPurge(void);
extern void Scsi_freqPurge3GTDDOnly(void);
#endif      /* #ifdef __UMTS_RAT__ */

extern void Scsi_purge(void);
extern void Scsi_purge3GTDDOnly(void);

// Destructor
extern void Scsi_destruct(void);


#ifdef __GSM_RAT__      /* 2G is to be built-in */
// GSM
// Setter
extern void Scsi_newGsmFreqRange(plmn_id_struct const* const plmnID, CsiGsmBaRangeAndBand* const BARangeList);
extern void Scsi_newGsmNeighborCells(plmn_id_struct const* const plmnID, CsiGsmCellList* const cellList);
#ifdef __LTE_RAT__
extern void Scsi_newGsmLatestServingCell(plmn_id_struct const* const plmnID, CsiGsmCell const* const cell);

//Just for UT currently, not release publicly
#ifdef UNIT_TEST
extern void Scsi_delGsmLatestServingCell(plmn_id_struct const* const plmnID);
#endif /* UNIT_TEST */
#endif /* __LTE_RAT__ */

// Getter
extern void Scsi_getGsmFreqRange(plmn_id_struct const* const plmnID, CsiGsmBaRangeAndBand* const BARangeList);
extern void Scsi_getGsmNeighborCells(plmn_id_struct const* const plmnID, CsiGsmCellList* const cellList);
#ifdef __LTE_RAT__
extern kal_bool Scsi_getGsmLatestServingCell(plmn_id_struct const* const plmnID, CsiGsmCell* const cell);
#endif /* __LTE_RAT__ */
#endif      /* #ifdef __GSM_RAT__ */


#ifdef __UMTS_RAT__      /* 3G is to be built-in */
// UMTS
/* David 20081107:
 * Added for auto band mechanism.
 */
#ifdef __3G_AUTO_BAND_MECHANISM__
extern void Scsi_newUmtsWorkingBand(SCSI_SIM_INDEX sim_index, plmn_id_struct const* const plmnID, SCSI_UMTS_Band_UARFCN_Identifier bandID);
extern void Scsi_delUmtsWorkingBand(SCSI_SIM_INDEX sim_index, plmn_id_struct const* const plmnID, SCSI_UMTS_Band_UARFCN_Identifier bandID);
#endif
// Setter
extern void Scsi_newUmtsFreqRange(SCSI_SIM_INDEX sim_index, plmn_id_struct const* const plmnID, CsiUmtsFrequnecyList* const freqRange);

extern void Scsi_newUmtsFreqList(SCSI_SIM_INDEX sim_index, plmn_id_struct const* const plmnID, CsiUmtsFrequnecyList* const freqList, kal_bool correctOverlappingUarfcn);

extern void Scsi_newUmtsNeighborCells(SCSI_SIM_INDEX sim_index, plmn_id_struct const* const plmnID, CsiUmtsCellList* const cellList);
#ifdef __LTE_RAT__
extern void Scsi_newUmtsLatestServingCell(SCSI_SIM_INDEX sim_index, plmn_id_struct const* const plmnID, CsiUmtsCellWithUarfcn const* const cell);

//Just for UT currently, not release publicly
#ifdef UNIT_TEST
extern void Scsi_delUmtsLatestServingCell(SCSI_SIM_INDEX sim_index, plmn_id_struct const* const plmnID);
#endif /* UNIT_TEST */
#endif /* __LTE_RAT__ */

extern void Scsi_newUmtsUarfcnList(SCSI_SIM_INDEX sim_index, plmn_id_struct const* const plmnID , CsiUmtsUarfcnList *uarfcnList);

// Getter
extern void Scsi_getUmtsFreqRange(SCSI_SIM_INDEX sim_index, plmn_id_struct const* const plmnID, CsiUmtsFrequnecyList* const freqRange);
extern void Scsi_getUmtsFreqList(SCSI_SIM_INDEX sim_index, plmn_id_struct const* const plmnID, CsiUmtsFrequnecyList* const freqList);
/* Nicky 20141007: Stored 3G Cell List is not used. Remove the get function. */
#if 0
/* under construction !*/
#endif
#ifdef __LTE_RAT__
extern kal_bool Scsi_getUmtsLatestServingCell(SCSI_SIM_INDEX sim_index, plmn_id_struct const* const plmnID, CsiUmtsCellWithUarfcn* const cell);
#endif /* __LTE_RAT__ */
extern void Scsi_getUmtsUarcnList(SCSI_SIM_INDEX sim_index, plmn_id_struct const* const plmnID, CsiUmtsUarfcnList *uarfcnList);
extern void Scsi_getUmtsUarfcnByMcc(SCSI_SIM_INDEX sim_index, kal_uint32 const countOfMccs , SCSI_UMTS_UarfcnPerMcc* uarfcnByMccs);
extern kal_bool Scsi_isUarfcnSharedInCurrentPlmn(SCSI_SIM_INDEX sim_index, plmn_id_struct const* const plmn_found ,kal_uint16  uarfn_to_be_checked );

/* Nicky 20110103: Added for Gemini 2.0 */
#ifdef __GEMINI_MONITOR_PAGE_DURING_TRANSFER__
extern kal_uint16 Scsi_getUmtsUarfcnUpperBound(SCSI_SIM_INDEX sim_index, SCSI_UMTS_Band_UARFCN_Identifier bandID);
extern kal_uint16 Scsi_getUmtsUarfcnLowerBound(SCSI_SIM_INDEX sim_index, SCSI_UMTS_Band_UARFCN_Identifier bandID);
extern kal_uint8 Scsi_getUmtsAdditionalFreqList(SCSI_SIM_INDEX sim_index, SCSI_UMTS_Band_UARFCN_Identifier bandID, kal_uint8 const sizeOfList, kal_uint16 * const additionalFreqList);
#endif      /* #ifdef __GEMINI_MONITOR_PAGE_DURING_TRANSFER__ */

/* Nicky 20111028: Added for UMTS Band Extension, which will be used by RRCE module. */
extern kal_uint16 Scsi_getBandTxRxFreqSeparation(SCSI_SIM_INDEX sim_index, SCSI_UMTS_Band_UARFCN_Identifier bandID);

extern kal_bool Scsi_convertUarfcnForOverlappedFreqBands(SCSI_SIM_INDEX sim_index, kal_uint16 uarfcn, SCSI_UMTS_Band_UARFCN_Identifier bandId, SCSI_UMTS_Band_UARFCN_Identifier otherBandId, kal_uint16 *convertedUarfcn);
#endif      /* #ifdef __UMTS_RAT__ */

extern kal_uint8 Scsi_getPlmns(plmn_id_struct* plmns);

// Retrieve encoded data for saving to non-volatile storages, i.e., NVRAM and USIM/SIM.
extern kal_uint16 Scsi_getNvramEFNetpar(kal_uint8* const nvramEfNetparBufPtr, kal_uint16 const nvramEfNetparBufLen);

#if (defined(__23G_PRI_RESEL_SUPPORT__) || defined(__LTE_RAT__))
// SCSI need to provide the following functions:

// Before use any API of DediPrioInfo, please call this function to acquire mutext.
extern void SCSI_acquirePrioMutex(SCSI_SIM_INDEX sim_index);

// return the pointer of pDediPrioInfo.
// user can operate on SCSI_dedi_prio_info, but user shall not operate on tick_previous. tick_previous would be updated by SCSI.
extern SCSI_dedi_prio_info *SCSI_getDediPrioInfo(SCSI_SIM_INDEX sim_index);

// free the memory of pDediPrioInfo, after user call this function, please never use the previous-got memory...So please be careful.
extern void SCSI_freeDediPrioInfo(SCSI_SIM_INDEX sim_index);

// call SCSI_FreeDediPrioInfo to free previous-put memory in pDediPrioInfo, and then put the point address in pDediPrioInfo.
// please never use the previous-got memory...So please careful.
// Besides, update the tick_previous by SCSI. User would not update it.
extern void SCSI_setDediPrioInfo(SCSI_SIM_INDEX sim_index, kal_uint32 tick_left, SCSI_dedi_prio_info *pDediPrio);

// In this function, please check the left_tick and do correct computing. If expired, please free the pDediPrioInfo and set it NULL.
extern void SCSI_releasePrioMutex(SCSI_SIM_INDEX sim_index);


// Before use any API of DeprioritizationInfo, please call this function to acquire mutext.
extern void SCSI_acquireDeprioritizationMutex(SCSI_SIM_INDEX sim_index);

// return the pointer of pDeprioritizationInfo.
// user can operate on SCSI_deprioritization_info_struct, but user shall not operate on tick_previous. tick_previous would be updated by SCSI.
extern SCSI_deprioritization_info_struct *SCSI_getDeprioritizationInfo(SCSI_SIM_INDEX sim_index, plmn_id_struct const* const rplmn);

// free the memory of specific PLMN of pDeprioritizationInfo.
extern void SCSI_freeDeprioritizationInfo(SCSI_SIM_INDEX sim_index, plmn_id_struct const* const rplmn);

// call SCSI_freeDeprioritizationInfo to free previous-put memory of pDeprioritizationInfo, and then put the point address to pDeprioritizationInfo.
// please never use the previous-got memory...So please careful.
// Besides, update the tick_previous by SCSI. User would not update it.
extern void SCSI_setDeprioritizationInfo(SCSI_SIM_INDEX sim_index, kal_uint32 tick_left, SCSI_deprioritization_info_struct *pDeprioritizationInfo);

// In this function, please check the left_tick and do correct computing. If expired, please free the pDeprioritizationInfo and set it NULL.
extern void SCSI_releaseDeprioritizationMutex(SCSI_SIM_INDEX sim_index);
#endif /* __23G_PRI_RESEL_SUPPORT__ || __LTE_RAT__ */

#if (defined(__3G_CSG_SUPPORT__) || defined(__LTE_RAT__))
// put the pSlitInfo which contain this arfcn in pSplitInfo according to rat_type, if not found, set content of pSplitInfo all zero.
// besides, according to tick_left tick_previous to delete the expired split info.
#ifdef __3G_CSG_SUPPORT__
extern void SCSI_getUmtsCSGSplitInfo(SCSI_SIM_INDEX sim_index, CsiUarfcn uarfcn, plmn_id_struct const* const plmnID, SCSI_umts_csg_split_info * const pSplitInfo);
#endif /* __3G_CSG_SUPPORT__ */

#ifdef __LTE_RAT__
extern void SCSI_getLteCSGSplitInfo(SCSI_SIM_INDEX sim_index, CsiEarfcn earfcn, plmn_id_struct const* const plmnID, SCSI_lte_csg_split_info * const pSplitInfo);
#endif /* __LTE_RAT__ */

// put the content of pCSGSplitInfoList in SCSI to pSplitInfoList according to rat_type, if pCSGSplitInfoList is null, set content of pSplitInfoList all zero.
// besides, according to tick_left tick_previous to delete the expired split info.
#ifdef __3G_CSG_SUPPORT__
extern void SCSI_getUmtsCSGSplitInfoList(SCSI_SIM_INDEX sim_index, SCSI_umts_csg_split_info_list * const pSplitInfoList);
#endif /* __3G_CSG_SUPPORT__ */

#ifdef __LTE_RAT__
extern void SCSI_getLteCSGSplitInfoList(SCSI_SIM_INDEX sim_index, SCSI_lte_csg_split_info_list * const pSplitInfoList);
#endif /* __LTE_RAT__ */

// If found the same frequecny replace it, else allocate one memory and put the SCSI_csg_split_info in the CSGSplitInfo according to rat_type.
// besides, according to tick_left tick_previous to delete the expired split info.
#ifdef __3G_CSG_SUPPORT__
extern void SCSI_newUmtsCSGSplitInfo(SCSI_SIM_INDEX sim_index, kal_uint32 tick_left, SCSI_umts_csg_split_info const * const pSplitInfo);
#endif /* __3G_CSG_SUPPORT__ */

#ifdef __LTE_RAT__
extern void SCSI_newLteCSGSplitInfo(SCSI_SIM_INDEX sim_index, kal_uint32 tick_left, SCSI_lte_csg_split_info const * const pSplitInfo);
#endif /* __LTE_RAT__ */

#endif /* __3G_CSG_SUPPORT__ || __LTE_RAT__ */

/*Multi-Mode******************************************************************/
#ifdef __GSM_RAT__
extern void Scsi_SE_ComposeGsmBandBitmask(SCSI_SIM_INDEX sim_index, kal_uint8 GBandBitmask);

extern void Scsi_SE_retrieveGsmBandBitmask(SCSI_SIM_INDEX sim_index, kal_uint8 *pGBandBitmask);
#endif /* __GSM_RAT__ */
#ifdef __UMTS_RAT__
extern void Scsi_SE_ComposeUmtsBandBitmask(SCSI_SIM_INDEX sim_index, kal_uint32 UBandBitmask);

extern void Scsi_SE_retrieveUmtsBandBitmask(SCSI_SIM_INDEX sim_index, kal_uint32 *pUBandBitmask);

extern void Scsi_SE_retrieveUmtsFddBandBitmask(SCSI_SIM_INDEX sim_index, kal_uint32 *pUFddBandBitmask);

extern void Scsi_SE_ComposeUmtsFddAndTddBandBitmask(SCSI_SIM_INDEX sim_index, kal_uint32 UFddBandBitmask, kal_uint32 UTddBandBitmask);

extern void Scsi_SE_retrieveUmtsFddAndTddBandBitmask(SCSI_SIM_INDEX sim_index, kal_uint32 *pUFddBandBitmask, kal_uint32 *pUTddBandBitmask);
#endif /* __UTMS_RAT__ */
#ifdef __LTE_RAT__
extern void Scsi_SE_ComposeLteBandBitmask(SCSI_SIM_INDEX sim_index, SCSI_LTE_Band_Bitmask LBandBitmask);

extern void Scsi_SE_retrieveLteBandBitmask(SCSI_SIM_INDEX sim_index, SCSI_LTE_Band_Bitmask *pLBandBitmask);

extern void Scsi_SE_ComposeLteBandBitmask_extended( SCSI_SIM_INDEX sim_index, const SCSI_LTE_Band_Bitmask_Extended* LBandBitmask );

extern void Scsi_SE_retrieveLteBandBitmask_extended( SCSI_SIM_INDEX sim_index, SCSI_LTE_Band_Bitmask_Extended* pLBandBitmask );
#endif /* __LTE_RAT__ */

#ifdef __LTE_RAT__
extern void Scsi_newLteFreqList(plmn_id_struct const* const plmnID, CsiLteFrequencyList* const freqList);

extern void Scsi_getLteFreqList(plmn_id_struct const* const plmnID, CsiLteFrequencyList* const freqList);
#endif /* __LTE_RAT__ */

#if (defined(__3G_CSG_SUPPORT__) || defined(__LTE_RAT__))
extern void Scsi_prevVisitedCellInitFromNVRAM(kal_uint8* nvramEfPrevVisitedCellBufPtr, kal_uint16 const nvramEfPrevVisitedCellBufLen);

extern kal_uint16 Scsi_getNvramEFPrevVisitedCell(kal_uint8* const nvramEfPrevVisitedCellBufPtr, kal_uint16 const nvramEfPrevVisitedCellBufLen);

extern void Scsi_prevVisitedCellPurge(void);

extern void Scsi_newPrevVisitedCell(SCSI_SIM_INDEX const simIdx, plmn_id_struct const* const plmnID, ScsiPrevVisitedCell * prevVisitedCell);

extern void Scsi_delPrevVisitedCellGivenPlmnAndCsg(SCSI_SIM_INDEX const simIdx, plmn_id_struct const* const plmnID, CsiCsgId const csgID);

extern void Scsi_getPrevVisitedCellListByPlmn(SCSI_SIM_INDEX const simIdx, plmn_id_struct const* const plmnID, ScsiPrevVisitedCellList * const prevVisitedCellList);

extern kal_bool Scsi_isPrevVisitedCellExistedGivenPlmnAndCsg(SCSI_SIM_INDEX const simIdx, plmn_id_struct const* const plmnID, CsiCsgId const csgID);

#endif /* __3G_CSG_SUPPORT__ || __LTE_RAT__ */
/*Multi-Mode******************************************************************/

#ifdef UNIT_TEST
extern void Scsi_initFromNvramUnitTesting(SCSI_SIM_INDEX sim_index);
extern void Scsi_initFromNvramUnitTesting1(SCSI_SIM_INDEX sim_index);
extern void Scsi_initFromNvramUnitTesting2(SCSI_SIM_INDEX sim_index);
extern void Scsi_initFromNvramUnitTesting3(SCSI_SIM_INDEX sim_index);
extern void Scsi_initFromNvramUnitTestingForRplmnInfo(SCSI_SIM_INDEX sim_index);
//#ifdef __BAND_PRIORITY_SEARCH__
extern void Scsi_initFromNvramUnitTestingForBandPrioSearch(SCSI_SIM_INDEX sim_index);
//#endif /* __BAND_PRIORITY_SEARCH__ */
extern void Scsi_te(SCSI_SIM_INDEX sim_index);
extern void Scsi_initFromNvramUnitTesting4(SCSI_SIM_INDEX sim_index);
#endif


#endif 				/* _(!@$ `scsi.h' $@!)_ */
