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
 * c2k_nvram_def.h
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
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/
#ifndef __C2K_NVRAM_DEF_H__
#define __C2K_NVRAM_DEF_H__

#if defined (__C2K_RAT__)

#ifdef __cplusplus
extern "C"
{
#endif /* __cplusplus */


#include "nvram_defs.h"
#include "nvram_enums.h"
#include "ps_public_enum.h"
#include "device.h"
#include "c2k_defs.h"
#include "psw_nvram.h"
#include "uim_nvram.h"
#include "clc_nvram.h"
#include "hlp_nvram.h"
#include "val_nvram.h"
#include "css_nvram.h"
#include "slc_nvram.h"
/*----------------------------------------------------------------------------
 Typedefs
----------------------------------------------------------------------------*/
#define GPS_CAL_SIZE            16
#if !defined (GPS_NV_SIZE)
#define GPS_NV_SIZE            (5248)     /* was 5120 for GPS Lib ver3 */
#endif
#define GPS_HASH_SIZE           770
#define MAX_PHONE_NUM_LEN       12
#define NUM_UI_LOCK_CODE_DIGITS 7
#define RXN_PGPS_NUM_SERVERS 3
#define MAX_FIELD_LENGTH 50


/* c2k vsim data length */
#define EF_META_SIZE 32
#define EF_DATA_SIZE 48
#define EF_ICCID_DATA_SIZE 10
#define EF_EPRL_DATA_SIZE 256
#define EF_IMSI_DATA_SIZE 10
#define EF_AD_DATA_SIZE 3
#define EF_UIMID_DATA_SIZE 8
#define EF_ACCLOC_DATA_SIZE 1
#define EF_TERM_DATA_SIZE 1
#define EF_SSCI_DATA_SIZE 1
#define EF_NAMLOCK_DATA_SIZE 1
#define EF_SFUIMID_DATA_SIZE 1
#define EF_MDN_DATA_SIZE 11


/*----------------------------------------------------------------------------
 Typedefs
----------------------------------------------------------------------------*/

// LID Enums

typedef enum
{
  NVRAM_EF_C2K_PSW_NAM1_LID                         = NVRAM_LID_GRP_C2K(0),
  NVRAM_EF_C2K_PSW_MS_CAP_LID                       = NVRAM_LID_GRP_C2K(1),
  NVRAM_EF_C2K_UICC_LID                             = NVRAM_LID_GRP_C2K(2),
  NVRAM_EF_C2K_PSW_NAM2_LID                         = NVRAM_LID_GRP_C2K(3),
  NVRAM_EF_C2K_SECURE_DATA_LID                      = NVRAM_LID_GRP_C2K(4),
  NVRAM_EF_C2K_DO_DATA_LID                          = NVRAM_LID_GRP_C2K(5),
  NVRAM_EF_C2K_UI_MISC_LID                          = NVRAM_LID_GRP_C2K(6),
  NVRAM_EF_C2K_HLP_IPCOUNTERS_LID                   = NVRAM_LID_GRP_C2K(7),
  NVRAM_EF_C2K_PSW_MRU1_LID                         = NVRAM_LID_GRP_C2K(8),
  NVRAM_EF_C2K_PSW_MRU2_LID                         = NVRAM_LID_GRP_C2K(9),
  NVRAM_EF_C2K_DO_MRU_LID                           = NVRAM_LID_GRP_C2K(10),
  NVRAM_EF_C2K_CSS_1X_LID                           = NVRAM_LID_GRP_C2K(11),
  NVRAM_EF_C2K_CSS_DO_LID                           = NVRAM_LID_GRP_C2K(12),
  NVRAM_EF_C2K_CSS_MISC_LID                         = NVRAM_LID_GRP_C2K(13),
  NVRAM_EF_C2K_PSW_MISC_LID                         = NVRAM_LID_GRP_C2K(14),
  NVRAM_EF_C2K_CUSTOMIZE_LID                        = NVRAM_LID_GRP_C2K(15),
  NVRAM_EF_C2K_HSPD_LID                             = NVRAM_LID_GRP_C2K(16),
  NVRAM_EF_C2K_HSPD_SECURE_LID                      = NVRAM_LID_GRP_C2K(17),
  NVRAM_EF_C2K_EHRPD_LID                            = NVRAM_LID_GRP_C2K(18),
  NVRAM_EF_C2K_PRL1_LID                             = NVRAM_LID_GRP_C2K(19),
  NVRAM_EF_C2K_PRL2_LID                             = NVRAM_LID_GRP_C2K(20),
  NVRAM_EF_C2K_ATC_PARMS_LID                        = NVRAM_LID_GRP_C2K(21),
  NVRAM_EF_C2K_ATC_CUST_PARMS_LID                   = NVRAM_LID_GRP_C2K(22),
  NVRAM_EF_C2K_ERI1_LID                             = NVRAM_LID_GRP_C2K(23),
  NVRAM_EF_C2K_ERI2_LID                             = NVRAM_LID_GRP_C2K(24),
  NVRAM_EF_C2K_DMUPUBKEY1_LID                       = NVRAM_LID_GRP_C2K(25),
  NVRAM_EF_C2K_DMUPUBKEY2_LID                       = NVRAM_LID_GRP_C2K(26),
  NVRAM_EF_C2K_DMUPUBKEY_ORG_LID                    = NVRAM_LID_GRP_C2K(27),
  NVRAM_EF_C2K_EXT_GPS_LID                          = NVRAM_LID_GRP_C2K(28),
  NVRAM_EF_C2K_PGPS_PDA_LID                         = NVRAM_LID_GRP_C2K(29),
  NVRAM_EF_C2K_GPS_HASH_LID                         = NVRAM_LID_GRP_C2K(30),
  NVRAM_EF_C2K_UICC_CARD_DATA_LID                   = NVRAM_LID_GRP_C2K(33),
  NVRAM_EF_C2K_VAL_DANDCN_LID                       = NVRAM_LID_GRP_C2K(34),
  NVRAM_EF_C2K_VAL_ACTIVED_BAND_DATA_LID            = NVRAM_LID_GRP_C2K(35),
  NVRAM_EF_C2K_SIDB_ITEM_ATCONFIG_LID               = NVRAM_LID_GRP_C2K(36),
  NVRAM_EF_C2K_SIDB_ITEM_MANAGEMENT_CNIR_LID        = NVRAM_LID_GRP_C2K(37),
  NVRAM_EF_C2K_SIDB_ITEM_MESSAGE_LID                = NVRAM_LID_GRP_C2K(38),
  NVRAM_EF_C2K_FILE_SESSION_LID                     = NVRAM_LID_GRP_C2K(39),
  NVRAM_EF_C2K_FILE_SF_LID                          = NVRAM_LID_GRP_C2K(40),
  NVRAM_EF_C2K_FILE_GPS_LID                         = NVRAM_LID_GRP_C2K(41),
  NVRAM_EF_C2K_PERSONALITY_DATA_LID                 = NVRAM_LID_GRP_C2K(42),
  NVRAM_EF_C2K_VAL_SMS_CBS_LID                      = NVRAM_LID_GRP_C2K(43),
  NVRAM_EF_C2K_PSW_DBM_CRYPT_DATA_LID               = NVRAM_LID_GRP_C2K(44),
  NVRAM_EF_C2K_MOBILE_ID_LID                        = NVRAM_LID_GRP_C2K(45),
  NVRAM_EF_C2K_VSIM_LID                       = NVRAM_LID_GRP_C2K(46),
  //last
  NVRAM_EF_C2K_LAST_LID                             = NVRAM_LID_GRP_C2K(255)
}nvram_lid_c2k_enum;

// VERNO
#define NVRAM_EF_C2K_PSW_NAM1_LID_VERNO                         "000"
#define NVRAM_EF_C2K_PSW_MS_CAP_LID_VERNO                       "000"
#define NVRAM_EF_C2K_UICC_LID_VERNO                             "001"
#define NVRAM_EF_C2K_PSW_NAM2_LID_VERNO                         "000"
#define NVRAM_EF_C2K_SECURE_DATA_LID_VERNO                      "000"
#define NVRAM_EF_C2K_DO_DATA_LID_VERNO                          "000"
#define NVRAM_EF_C2K_UI_MISC_LID_VERNO                          "000"
#define NVRAM_EF_C2K_HLP_IPCOUNTERS_LID_VERNO                   "000"
#define NVRAM_EF_C2K_PSW_MRU1_LID_VERNO                         "000"
#define NVRAM_EF_C2K_PSW_MRU2_LID_VERNO                         "000"
#define NVRAM_EF_C2K_DO_MRU_LID_VERNO                           "000"
#define NVRAM_EF_C2K_CSS_1X_LID_VERNO                           "000"
#define NVRAM_EF_C2K_CSS_DO_LID_VERNO                           "000"
#define NVRAM_EF_C2K_CSS_MISC_LID_VERNO                         "001"
#define NVRAM_EF_C2K_PSW_MISC_LID_VERNO                         "002"
#define NVRAM_EF_C2K_CUSTOMIZE_LID_VERNO                        "000"
#define NVRAM_EF_C2K_HSPD_LID_VERNO                             "000"
#define NVRAM_EF_C2K_HSPD_SECURE_LID_VERNO                      "000"
#define NVRAM_EF_C2K_EHRPD_LID_VERNO                            "000"
#define NVRAM_EF_C2K_PRL1_LID_VERNO                             "001"
#define NVRAM_EF_C2K_PRL2_LID_VERNO                             "000"
#define NVRAM_EF_C2K_ATC_PARMS_LID_VERNO                        "002"
#define NVRAM_EF_C2K_ATC_CUST_PARMS_LID_VERNO                   "000"
#define NVRAM_EF_C2K_ERI1_LID_VERNO                             "000"
#define NVRAM_EF_C2K_ERI2_LID_VERNO                             "000"
#define NVRAM_EF_C2K_DMUPUBKEY1_LID_VERNO                       "000"
#define NVRAM_EF_C2K_DMUPUBKEY2_LID_VERNO                       "000"
#define NVRAM_EF_C2K_DMUPUBKEY_ORG_LID_VERNO                    "000"
#define NVRAM_EF_C2K_EXT_GPS_LID_VERNO                          "000"
#define NVRAM_EF_C2K_PGPS_PDA_LID_VERNO                         "000"
#define NVRAM_EF_C2K_GPS_HASH_LID_VERNO                         "000"
#define NVRAM_EF_C2K_UICC_CARD_DATA_LID_VERNO                   "001"
#define NVRAM_EF_C2K_VAL_DANDCN_LID_VERNO                       "001"
#define NVRAM_EF_C2K_VAL_ACTIVED_BAND_DATA_LID_VERNO            "000"
#define NVRAM_EF_C2K_SIDB_ITEM_ATCONFIG_LID_VERNO               "001"
#define NVRAM_EF_C2K_SIDB_ITEM_MANAGEMENT_CNIR_LID_VERNO        "001"
#define NVRAM_EF_C2K_SIDB_ITEM_MESSAGE_LID_VERNO                "001"
#define NVRAM_EF_C2K_FILE_SESSION_LID_VERNO                     "000"
#define NVRAM_EF_C2K_FILE_SF_LID_VERNO                          "000"
#define NVRAM_EF_C2K_FILE_GPS_LID_VERNO                         "000"
#define NVRAM_EF_C2K_VAL_SMS_CBS_LID_VERNO                      "000"
#ifdef MTK_CBP_ENCRYPT_VOICE
#define NVRAM_EF_C2K_PSW_DBM_CRYPT_DATA_LID_VERNO               "000"
#endif
#define NVRAM_EF_C2K_MOBILE_ID_LID_VERNO                        "000"
#define NVRAM_EF_C2K_VSIM_LID_VERNO                        "000"

// Size and Total
#define NVRAM_EF_C2K_PSW_NAM1_SIZE                              sizeof(PswIs95NamT)
#define NVRAM_EF_C2K_PSW_NAM1_TOTAL                             1

#define NVRAM_EF_C2K_PSW_MS_CAP_SIZE                            sizeof(MsCapDb)
#define NVRAM_EF_C2K_PSW_MS_CAP_TOTAL                           1

#define NVRAM_EF_C2K_UICC_SIZE                                  sizeof(UiccDbmDataT)
#define NVRAM_EF_C2K_UICC_TOTAL                                 1

#define NVRAM_EF_C2K_PSW_NAM2_SIZE                              sizeof(PswIs95NamT)
#define NVRAM_EF_C2K_PSW_NAM2_TOTAL                             1

#define NVRAM_EF_C2K_SECURE_DATA_SIZE                           sizeof(SecureDataStructT)
#define NVRAM_EF_C2K_SECURE_DATA_TOTAL                          1

#define NVRAM_EF_C2K_DO_DATA_SIZE                               sizeof(ClcDoParmDataT)
#define NVRAM_EF_C2K_DO_DATA_TOTAL                              1

#define NVRAM_EF_C2K_HLP_IPCOUNTERS_SIZE                        sizeof(IPCounterStruct)
#define NVRAM_EF_C2K_HLP_IPCOUNTERS_TOTAL                       1

#define NVRAM_EF_C2K_PSW_MRU1_SIZE                              sizeof(CssDbmDataT)
#define NVRAM_EF_C2K_PSW_MRU1_TOTAL                             1

#define NVRAM_EF_C2K_PSW_MRU2_SIZE                              sizeof(CssDbmDataT)
#define NVRAM_EF_C2K_PSW_MRU2_TOTAL                             1

#define NVRAM_EF_C2K_DO_MRU_SIZE                                sizeof(CssDbmDataT)
#define NVRAM_EF_C2K_DO_MRU_TOTAL                               1

#define NVRAM_EF_C2K_CSS_1X_SIZE                                sizeof(css1xDbmSegment)
#define NVRAM_EF_C2K_CSS_1X_TOTAL                               1

#define NVRAM_EF_C2K_CSS_DO_SIZE                                sizeof(cssDODbmSegment)
#define NVRAM_EF_C2K_CSS_DO_TOTAL                               1

#define NVRAM_EF_C2K_CSS_MISC_SIZE                              sizeof(cssMiscDbmSegment)
#define NVRAM_EF_C2K_CSS_MISC_TOTAL                             1

#define NVRAM_EF_C2K_PSW_MISC_SIZE                              sizeof(PswMiscT)
#define NVRAM_EF_C2K_PSW_MISC_TOTAL                             1

#define NVRAM_EF_C2K_CUSTOMIZE_SIZE                             sizeof(ValCustomizedParmDataT)
#define NVRAM_EF_C2K_CUSTOMIZE_TOTAL                            1

#define NVRAM_EF_C2K_HSPD_SIZE                                  sizeof(HlpHspdSegData)
#define NVRAM_EF_C2K_HSPD_TOTAL                                 1

#define NVRAM_EF_C2K_HSPD_SECURE_SIZE                           sizeof(HlpHspdSecureSegData)
#define NVRAM_EF_C2K_HSPD_SECURE_TOTAL                          1

#define NVRAM_EF_C2K_EHRPD_SIZE                                 sizeof(HlpEHrpdSegDataT)
#define NVRAM_EF_C2K_EHRPD_TOTAL                                1

#define NVRAM_EF_C2K_PRL1_SIZE                                  PRL_MAX_SIZE
#define NVRAM_EF_C2K_PRL1_TOTAL                                 1

#define NVRAM_EF_C2K_PRL2_SIZE                                  PRL_MAX_SIZE
#define NVRAM_EF_C2K_PRL2_TOTAL                                 1

#define NVRAM_EF_C2K_ATC_PARMS_SIZE                             sizeof(AtcDbmBinDataT)
#define NVRAM_EF_C2K_ATC_PARMS_TOTAL                            1

#define NVRAM_EF_C2K_ERI1_SIZE                                  ERI_MAX_SIZE
#define NVRAM_EF_C2K_ERI1_TOTAL                                 1

#define NVRAM_EF_C2K_ERI2_SIZE                                  ERI_MAX_SIZE
#define NVRAM_EF_C2K_ERI2_TOTAL                                 1

#define NVRAM_EF_C2K_DMUPUBKEY1_SIZE                            sizeof(HlpRSAPublicKeyInfoT)
#define NVRAM_EF_C2K_DMUPUBKEY1_TOTAL                           1

#define NVRAM_EF_C2K_DMUPUBKEY2_SIZE                            sizeof(HlpRSAPublicKeyInfoT)
#define NVRAM_EF_C2K_DMUPUBKEY2_TOTAL                           1

#define NVRAM_EF_C2K_DMUPUBKEY_ORG_SIZE                         sizeof(HlpRSAPublicKeyInfoT)
#define NVRAM_EF_C2K_DMUPUBKEY_ORG_TOTAL                        1


#define NVRAM_EF_C2K_UICC_CARD_DATA_SIZE                        sizeof(UiccDbmCardDataT)
#define NVRAM_EF_C2K_UICC_CARD_DATA_TOTAL                       1

#define NVRAM_EF_C2K_VAL_DANDCN_SIZE                            (sizeof(ValSmsDanDcnInfoT))
#define NVRAM_EF_C2K_VAL_DANDCN_TOTAL                           1


//1 TO-DO:
#define NVRAM_EF_C2K_VAL_ACTIVED_BAND_DATA_SIZE                 20
#define NVRAM_EF_C2K_VAL_ACTIVED_BAND_DATA_TOTAL                1

#define NVRAM_EF_C2K_SIDB_ITEM_ATCONFIG_SIZE                    (sizeof(ValMem1ValT))
#define NVRAM_EF_C2K_SIDB_ITEM_ATCONFIG_TOTAL                   1

#define NVRAM_EF_C2K_SIDB_ITEM_MANAGEMENT_CNIR_SIZE             (sizeof(ValCnirDataT))
#define NVRAM_EF_C2K_SIDB_ITEM_MANAGEMENT_CNIR_TOTAL            1

#define NVRAM_EF_C2K_SIDB_ITEM_MESSAGE_SIZE                     (sizeof(ValVpValT))
#define NVRAM_EF_C2K_SIDB_ITEM_MESSAGE_TOTAL                    1

#define NVRAM_EF_C2K_FILE_SESSION_SIZE                          (sizeof(SessionDataT))
#define NVRAM_EF_C2K_FILE_SESSION_TOTAL                         1

#define NVRAM_EF_C2K_FILE_SF_SIZE                               (sizeof(DScpPersonality))
#define NVRAM_EF_C2K_FILE_SF_TOTAL                              4

#define NVRAM_EF_C2K_FILE_GPS_SIZE                              (sizeof(GpsDbmDataParms))
#define NVRAM_EF_C2K_FILE_GPS_TOTAL                             1

#define NVRAM_EF_C2K_VAL_SMS_CBS_SIZE                           (sizeof(ValSmsCbsInfoT))
#define NVRAM_EF_C2K_VAL_SMS_CBS_TOTAL                          1

#ifdef MTK_CBP_ENCRYPT_VOICE
#define NVRAM_EF_C2K_PSW_DBM_CRYPT_DATA_SIZE                    (sizeof(PswDbmCryptDataT))
#define NVRAM_EF_C2K_PSW_DBM_CRYPT_DATA_TOTAL                   1
#endif

#define NVRAM_EF_C2K_MOBILE_ID_SIZE                             (sizeof(PswMobileIDT))
#define NVRAM_EF_C2K_MOBILE_ID_TOTAL                            1

#define NVRAM_EF_C2K_VSIM_SIZE                             (sizeof(UiccC2KVsimT))
#define NVRAM_EF_C2K_VSIM_TOTAL                         1


#ifdef __cplusplus
}
#endif

#endif /*__C2K_RAT__ */
#endif /* __C2K_NVRAM_DEF_H__ */

