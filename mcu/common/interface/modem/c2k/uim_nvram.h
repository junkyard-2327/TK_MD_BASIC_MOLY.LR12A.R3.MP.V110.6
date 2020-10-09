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

#ifndef _UIM_NVRAM_H_

#define _UIM_NVRAM_H_ 1


/*****************************************************************************
 * Includes
 ****************************************************************************/
#include "kal_general_types.h"
#include "sim_public_enum.h"

#define UICC_DBM_CACHE_CARD_NUM SUPPORT_SIM_TOTAL   /* Number of card info cached in DBM NV */
#define UICC_ICCID_DATA_LEN 10
#define UICC_CHV1_DATA_LEN 8
#define UICC_VSIM_FCP_LEN 32
#define UICC_EPRL_DATA_LEN 256
#define UICC_IMSI_DATA_LEN 10
#define UICC_AD_DATA_LEN 3
#define UICC_UIMID_DATA_LEN 8
#define UICC_ACCLOC_DATA_LEN 1
#define UICC_TERM_DATA_LEN 1
#define UICC_SSCI_DATA_LEN 1
#define UICC_NAMLOCK_DATA_LEN 1
#define UICC_SFUIMID_DATA_LEN 1
#define UICC_MDN_DATA_LEN 11

typedef struct
{
#ifdef MTK_DEV_CCCI_FS
   kal_bool IsICCIDValid;
   kal_bool IsCHVValid;
#else
   kal_bool IsICCIDValid:1;
   kal_bool IsCHVValid:1;
#endif
   kal_uint8 CHVData[UICC_CHV1_DATA_LEN];
   kal_uint8 ICCIDData[UICC_ICCID_DATA_LEN];
} UiccDbmChvIccidStruct;

typedef struct
{
   UiccDbmChvIccidStruct DbmChvIccid[UICC_DBM_CACHE_CARD_NUM]; /* 0 for current Card */
} UiccDbmCardDataT;


typedef struct
{
   kal_bool FactoryMode;
   UiccDbmChvIccidStruct DbmChvIccid;
}   UiccDbmDataT;

/*C2K MDVSIM*/
typedef struct
{
    kal_uint8 FcpData[UICC_VSIM_FCP_LEN];
    kal_uint8 EprlData[UICC_EPRL_DATA_LEN];
}UiccVsimEprlT;

typedef struct
{
    kal_uint8 FcpData[UICC_VSIM_FCP_LEN];
    kal_uint8 ImsiData[UICC_IMSI_DATA_LEN];
}UiccVsimImsiT;

typedef struct
{
    kal_uint8 FcpData[UICC_VSIM_FCP_LEN];
    kal_uint8 IccidData[UICC_ICCID_DATA_LEN];
}UiccVsimIccidT;

typedef struct
{
    kal_uint8 FcpData[UICC_VSIM_FCP_LEN];
    kal_uint8 AdData[UICC_AD_DATA_LEN];
}UiccVsimAdT;

typedef struct
{
    kal_uint8 FcpData[UICC_VSIM_FCP_LEN];
    kal_uint8 UimidData[UICC_UIMID_DATA_LEN];
}UiccVsimUimidT;

typedef struct
{
    kal_uint8 FcpData[UICC_VSIM_FCP_LEN];
    kal_uint8 AcclocData[UICC_ACCLOC_DATA_LEN];
}UiccVsimAcclocT;

typedef struct
{
    kal_uint8 FcpData[UICC_VSIM_FCP_LEN];
    kal_uint8 TermData[UICC_TERM_DATA_LEN];
}UiccVsimTermT;

typedef struct
{
    kal_uint8 FcpData[UICC_VSIM_FCP_LEN];
    kal_uint8 SsciData[UICC_SSCI_DATA_LEN];
}UiccVsimSsciT;

typedef struct
{
    kal_uint8 FcpData[UICC_VSIM_FCP_LEN];
    kal_uint8 NamlockData[UICC_NAMLOCK_DATA_LEN];
}UiccVsimNamelockT;

typedef struct
{
    kal_uint8 FcpData[UICC_VSIM_FCP_LEN];
    kal_uint8 SfuimidData[UICC_SFUIMID_DATA_LEN];
}UiccVsimSfuimidT;

typedef struct
{
    kal_uint8 FcpData[UICC_VSIM_FCP_LEN];
    kal_uint8 MdnData[UICC_MDN_DATA_LEN];
}UiccVsimMdnT;

typedef struct
{
    UiccVsimIccidT VsimIccidValue;
    UiccVsimEprlT VsimEprlValue; 
    UiccVsimImsiT VsimImsiMVale;
    UiccVsimImsiT VsimImsiTVale;
    UiccVsimAdT VsimAdValue;
    UiccVsimUimidT VsimUimidValue;
    UiccVsimAcclocT VsimAcclocValue; 
    UiccVsimTermT VsimTermValue;
    UiccVsimSsciT VsimSsciValue;
    UiccVsimNamelockT VsimNamlockValue;
    UiccVsimSfuimidT VsimSfuimidValue;
    UiccVsimMdnT VsimMdnValue; 
}UiccC2KVsimT;

#endif/* _UIM_NVRAM_H_ */

