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

/******************************************************************************
 * Filename:
 * --------------------------------------------------------
 *   mrs_cas_capability.h
 *
 * Project:
 * --------------------------------------------------------
 *   Multimode
 *
 * Description:
 * --------------------------------------------------------
 *   The C2K AS capability stored in MRS context.
 *
 * Author:
 * --------------------------------------------------------
 * -------
 *
 * --------------------------------------------------------
 * $Log$
 *
 * 12 09 2016 guanglong.wu
 * [MOLY00211482] [6293][C2K AS re-arch item] Add API in MRS for checking C2K supported band
 * 	
 * 	Updated C2K default support band for UT TEST
 *
 * 11 10 2016 guanglong.wu
 * [MOLY00211482] [6293][C2K AS re-arch item] Add API in MRS for checking C2K supported band
 * 		modifed cas capability strcucture name.
 *
  *****************************************************************************/

#ifndef _MRS_CAS_CAPABILITY_H
#define _MRS_CAS_CAPABILITY_H

#include "mrs_as_inter_core_def.h"
#include "mrs_as_enums.h"
#include "mrs_as_struct.h"
#include "reg_base.h"
#include "global_type.h"
#include "mrs_common_capability.h"

/*****************************************************************************
 * Macros Without Parameters
 *****************************************************************************/
#ifdef UNIT_TEST
/*supported band 0 ,1, 4, 6 and band 10 for UT test*/
#define C2K_UT_TEST_SUPPORTED_BAND_MASK     0x00000453
#endif
/*****************************************************************************
 * Macros With Parameters
 *****************************************************************************/
#define mrs_get_cas_band_bitmask(cas_band)  (0x0001 << (cas_band))

/*****************************************************************************
 * Enums without tags
 *****************************************************************************/

/*****************************************************************************
 * Type Definitions
 *****************************************************************************/
typedef enum
{
    CAS_BAND_CLASS_0 = 0,   /* 800 MHz cellular band       */
    CAS_BAND_CLASS_1,       /* 1.8 to 2.0 GHz band     */
    CAS_BAND_CLASS_2,       /* 872 to 960 MHz TACS band    */
    CAS_BAND_CLASS_3,       /* 832 to 925 MHz JTACS band   */
    CAS_BAND_CLASS_4,       /* 1.75 to 1.87 GHz Korean PCS */
    CAS_BAND_CLASS_5,       /* 450 MHz NMT band            */
    CAS_BAND_CLASS_6,       /* 2 GHz IMT-2000 band         */
    CAS_BAND_CLASS_7,       /* 700 MHz band                */
    CAS_BAND_CLASS_8,       /* 1800 MHz band               */
    CAS_BAND_CLASS_9,       /* 900 MHz band                */
    CAS_BAND_CLASS_10,      /* Secondary 800 MHz NMT band  */
    CAS_BAND_CLASS_11,      /* 400 MHz European PARM band  */
    CAS_BAND_CLASS_12,      /* 800 MHz PAMR band           */
    CAS_BAND_CLASS_13,      /* 2.5 GHz IMT-2000            */
    CAS_BAND_CLASS_14,      /* US PCS 1.9 GHz band         */
    CAS_BAND_CLASS_15,      /* AWS band                    */
    CAS_BAND_CLASS_16,      /* US 2.5 GHz band             */
    CAS_BAND_CLASS_17,      /* US 2.5GHz Forward Link Only Band */
    CAS_BAND_CLASS_18,      /* 700 MHz Public Safety Band  */
    CAS_BAND_CLASS_19,      /* Lower 700 MHz Band */
    CAS_BAND_CLASS_20,      /* L-Band */
    CAS_BAND_CLASS_MAX,
    CAS_BAND_CLASS_NOT_USED = CAS_BAND_CLASS_MAX,
    CAS_BAND_CLASS_UNSUPPORTED /* MUST be DIFFERENT than CAS_BAND_CLASS_MAX / CAS_BAND_CLASS_NOT_USED */
} cas_band_enum;

typedef struct{
    kal_uint32  cas_rf_support_band_bitmask;    /*All Support band  of C2k RF*/
    kal_uint32  cas_support_band_bitmask;       /*configured to active band */
    
}cas_capability_context_struct;

/*****************************************************************************
 * Declarations Of Exported Globals
 *****************************************************************************/

kal_uint32 mrs_cas_all_rf_supported_band(void);

kal_uint32 mrs_cas_all_supported_band(void);

kal_bool mrs_cas_is_rf_supported_band(kal_uint8 cas_band);

kal_bool mrs_cas_is_supported_band(kal_uint8 cas_band) ;

void mrs_cas_update_rf_supported_band(kal_uint32  rf_supported_band_mask);

void mrs_cas_update_supported_band(kal_uint32  supported_band_mask);


#endif /* _MRS_CAS_CAPABILITY_H */


