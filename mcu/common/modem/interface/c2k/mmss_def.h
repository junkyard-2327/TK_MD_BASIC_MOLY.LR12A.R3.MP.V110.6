/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2015
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

/** \file
 *
 * Filename:
 * ---------
 *   mmss_def.h
 *
 * Project:
 * --------
 *   UMOLY
 *
 * Description:
 * ------------
 * This file defines the public structures between MD1 and MD3.
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

#ifndef _GMSS_MD1_MD3_COMMON_H
#define _GMSS_MD1_MD3_COMMON_H

#ifdef __cplusplus
extern "C" {
#endif

#include "l3_inc_enums_public.h"

typedef struct
{
    kal_uint8 mcc1;
    kal_uint8 mcc2;
    kal_uint8 mcc3;	
    kal_uint8 mnc1;
    kal_uint8 mnc2;	
    kal_uint8 mnc3;	
} gmss_plmn_id_struct;

typedef struct {
    gmss_plmn_id_struct plmn_id;
    kal_uint8 rat;  /* nwsel_rat_enum */
} gmss_plmn_id_rat_struct;

typedef struct
{
    irat_system_type_enum  rat;
    kal_uint8  band;
    kal_uint16 channel;     /* used for 3GPP2 only */
    kal_uint8 ef_imsi[9];      // the IMSI of UIM which adds the record 
} mmss_cdma_rec_type;

typedef struct
{
    irat_system_type_enum  rat;
    kal_uint16  band;
    /**< band 
     **   for GSM band ID (binary):
     **      0: GSM450; 1: GSM 480; 10: GSM 750; 11: GSM 850; 100: P-GMS900; 101: E-GSM900; 110: R-GSM900; 111: DCS 1800; 1000: PCS 1900
     **   for  UMTS band ID (binary):
     **      0: IMT-2000; 1: PCS-1900; 2: WCDMA_III_1700; 3: WCDMA_IV_1700; 4: WCDMA_V_850; 5: WCDMA_VI_800; 6: WCDMA_VII_2600; 7: WCDMA_VIII_900
     **  for LTE band ID (binary):
     **      0: band 1; 1: band 2; 11: band 3; 100: band 4; 101: band 5; 110: band 6; 111: band 7; 1000: band 8; 
     **      1001: band 9; 1010: band 10; 1011: band 11; 1100: band 12; 1101: band 13; 1110: band 14; 10001: band 17
     */
    gmss_plmn_id_struct  plmn_id; /* used for 3GPP only */
    kal_uint8 ef_imsi[9];      // the IMSI of SIM which adds the record 
} mmss_gwl_rec_type;

typedef union {

  irat_system_type_enum     rat;
  mmss_cdma_rec_type        cdma;
  mmss_gwl_rec_type         gwl;

} mmss_sys_rec_union;

typedef struct
{
  /* Number of system record stored in list.
  */
  kal_uint8            num;

  /* List type of this list.
  */
  mmss_list_type_enum  list_type;

  /* Array for holding the system record references.
  */
  mmss_sys_rec_union   sys_recs[SYS_MAX_MMSS_REC_NUM];

} mmss_nv_list_struct;

typedef struct
{
  /* Number of system record stored in list.
  */
  kal_uint8            num;

  /* List type of this list.
  */
  mmss_list_type_enum  list_type;

  /* Array for holding the system record references.
  */
  mmss_gwl_rec_type    sys_recs[SYS_MAX_MMSS_REC_NUM];

} mmss_3gpp_list_struct;

typedef struct
{
  /* Number of system record stored in list.
  */
  kal_uint8            num;

  /* List type of this list.
  */
  mmss_list_type_enum  list_type;

  /* Array for holding the system record references.
  */
  mmss_cdma_rec_type   sys_recs[SYS_MAX_MMSS_REC_NUM];

} mmss_3gpp2_list_struct;


#ifdef __cplusplus
}
#endif

#endif /* _GMSS_MD1_MD3_COMMON_H */
