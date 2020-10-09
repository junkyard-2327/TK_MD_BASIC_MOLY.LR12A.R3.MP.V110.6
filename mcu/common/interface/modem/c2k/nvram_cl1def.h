/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2016
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

/*******************************************************************************
 *
 * Filename:
 * ---------
 * nvram_cl1def.h
 *
 * Project:
 * --------
 * 93
 *
 * Description:
 * ------------
 * C2K interface declaration provided to NVRAM.
 *
 *               
 * Author:
 * -------
 * 
 *
 *==============================================================================
 *             HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
 *
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *==============================================================================
 *******************************************************************************/

#ifndef _NVRAM_CL1DEF_H_
#define _NVRAM_CL1DEF_H_

#include "cl1_rf_public.h"

#undef NVRAM_ITEM_RF_CUST
#undef NVRAM_ITEM_MIPI
#undef NVRAM_ITEM_RF_CAL
#undef NVRAM_ITEM_RF_POC
#undef NVRAM_ITEM_RF_TAS_VAR
#undef NVRAM_ITEM_RF_TAS_ARRAY
#undef NVRAM_ITEM_ELNA_VAR
#undef NVRAM_ITEM_ELNA_ARRAY
#undef NVRAM_ITEM_TX_POWER_VAR
#undef NVRAM_ITEM_RF_TAS_TST

#define NVRAM_ITEM_RF_CUST(nAME, aFFIX, rECnUM, tYPE, tYPEnUM, fUNC)    	NVRAM_EF_CL1_##nAME##_##aFFIX##_ITEM,
#define NVRAM_ITEM_MIPI(nAME, aFFIX, rECnUM, tYPE, tYPEnUM, fUNC)       	NVRAM_EF_CL1_##aFFIX##_##nAME##_ITEM,
#define NVRAM_ITEM_RF_CAL(nAME, aFFIX, rECnUM, tYPE, tYPEnUM, fUNC)     	NVRAM_EF_CL1CAL_##nAME##_##aFFIX##_ITEM,
#define NVRAM_ITEM_RF_POC(nAME, aFFIX, rECnUM, tYPE, tYPEnUM, fUNC)     	NVRAM_EF_CL1CAL_##nAME##_##aFFIX##_ITEM,
#define NVRAM_ITEM_RF_TAS_VAR(nAME, aFFIX, rECnUM, tYPE, tYPEnUM, fUNC)     NVRAM_EF_CL1_##nAME##_##aFFIX##_ITEM,
#define NVRAM_ITEM_RF_TAS_ARRAY(nAME, aFFIX, rECnUM, tYPE, tYPEnUM, fUNC)   NVRAM_EF_CL1_##nAME##_##aFFIX##_ITEM,
#define NVRAM_ITEM_ELNA_VAR(nAME, aFFIX, rECnUM, tYPE, tYPEnUM, fUNC)     	NVRAM_EF_CL1_##nAME##_##aFFIX##_ITEM,
#define NVRAM_ITEM_ELNA_ARRAY(nAME, aFFIX, rECnUM, tYPE, tYPEnUM, fUNC)     NVRAM_EF_CL1_##nAME##_##aFFIX##_ITEM,
#define NVRAM_ITEM_TX_POWER_VAR(nAME, aFFIX, rECnUM, tYPE, tYPEnUM, fUNC)   NVRAM_EF_CL1_##nAME##_##aFFIX##_ITEM,
#define NVRAM_ITEM_RF_TAS_TST(nAME, aFFIX, rECnUM, tYPE, tYPEnUM, fUNC)     NVRAM_EF_CL1_##nAME##_##aFFIX##_ITEM,

typedef enum {
    #include "cl1_nvram_id.h"
    CL1D_RF_NVRAM_ITEM_MAX_NUM
} NVRAM_CL1_LID_IDX_E;


typedef void* CL1D_RF_CUST_DATA_SET_INFO_T;


extern const CL1D_RF_CUST_DATA_SET_INFO_T c1ld_rf_cust_data_drdi_set_ptr[][CL1D_RF_NVRAM_ITEM_MAX_NUM];

#endif /* _NVRAM_CL1DEF_H_ */


