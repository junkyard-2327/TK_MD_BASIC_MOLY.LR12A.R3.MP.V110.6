/******************************************************************************
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
*******************************************************************************/

/******************************************************************************
 * Filename:
 * --------------------------------------------------------
 *   mrs_uas_capability.h
 *
 * Project:
 * --------------------------------------------------------
 *   Multimode
 *
 * Description:
 * --------------------------------------------------------
 *   The UAS capability stored in MRS context.
 *
 * Author:
 * --------------------------------------------------------
 * -------
 *
 * --------------------------------------------------------
 * $Log$
 *
 * 08 29 2019 vinayak.bandagi
 * [MOLY00435415] [CB70][Query] How to change supported band configuration dynamically
 *
 * 08 29 2019 vinayak.bandagi
 * [MOLY00435415] [CB70][Query] How to change supported band configuration dynamically
 *
 * 01 22 2018 muneeswaraiah.dama
 * [MOLY00302897] [CODE SYNC] AT command (+ESCELLINFO) to modem to query serving cell band and arfcn info, when needed.
 * .
 *
 * 10 14 2016 wenlong.an
 * [MOLY00153524] [6291] Vivo BlackList feature
 * .vivo black list sync to umolya
 *
 * 06 01 2015 henry.lai
 * [MOLY00092508] [MT6291][LTE-C2K] AS Inter RAT feature
 * .
 *
 * 12 16 2014 ethan.han
 * [MOLY00087858] [RRCE] Universal Bin Modification
 * 	MRS.
 *
 * 12 16 2014 jiajia.luo
 * [MOLY00087491] [UMOLY][TDD][UAS][SLCE/RRCE]sync U-Bin CBr to UMOLY TRUNCK.
 * .
 * mrs_uas_capability (TDD RRCE part)
 *
 * 11 17 2014 yuhhwang.yu
 * [MOLY00084676] [CISE] Sync CSCE/CSE from 6291_DEV to UMOLY
 * .
 *
 * 01 21 2014 wcpuser_integrator
 * [MOLY00054475] SGLTE option rename
 * .
 *
 * 11 13 2013 birui.li
 * [MOLY00046027] [MT6290E1][MMDS_DC] MMDC feature patch back to MOLY trunk
 * B3/B39.
 *
 * 11 12 2013 morton.lin
 * [MOLY00045967] [Gemini] Add SIM index in INTER RAT HANDOVER INFO set/get function
 * SIM index argument added in MRS INTER RAT HANDOVER INFO set/get function
 *
 * 10 21 2013 vend_yuhhwang.yu
 * [MOLY00040050] [MultiMode] Dynamic band selection
 * .
 *
 * 03 14 2013 morton.lin
 * [MOLY00011957] [MT6290][3G][RRCE] Multimode IT CBr merge back to MOLY
 * MRS UAS Capability header
 *
 * 01 22 2013 david.niu
 * [MOLY00009205] [MRS] Code checked-in for MOLY branch
 * .
 *
 *****************************************************************************/

#ifndef _MRS_UAS_CAPABILITY_H
#define _MRS_UAS_CAPABILITY_H

/* COMMON INCLUDES ***********************************************************/
#include "irat_common_enums.h"
#include "mrs_as_enums.h"
#include "mrs_as_inter_core_enum.h"
#include "mrs_as_struct.h"


/*****************************************************************************
 * Macros Without Parameters
 *****************************************************************************/


/*****************************************************************************
 * Macros With Parameters
 *****************************************************************************/


/*****************************************************************************
 * Enums without tags
 *****************************************************************************/



/*****************************************************************************
 * Type Definitions
 *****************************************************************************/
typedef struct {
    kal_uint32  length;
    kal_uint8   value[MAX_LEN_UTRAN_HANDOVER_INFO_MSG];
} ho_info_buf;

typedef struct {
    ho_info_buf  fdd_iRATHOInfo_GSM;
    ho_info_buf  fdd_iRATHOInfoCompact_GSM;
    ho_info_buf  fdd_iRATHOInfo_EUTRA;
    ho_info_buf  tdd_iRATHOInfo_GSM;
    ho_info_buf  tdd_iRATHOInfoCompact_GSM;
    ho_info_buf  tdd_iRATHOInfo_EUTRA;

    kal_uint16 fdd_uea;
    kal_uint16 fdd_uia;
    kal_uint16 tdd_uea;
    kal_uint16 tdd_uia;    
#ifdef __SGLTE__
	kal_bool is_band_39_ori_support;
#endif /* __SGLTE__ */
    kal_uint32 fdd_umts_supported_band;

} uas_capability_context_struct;

/*****************************************************************************
 * Declarations Of Exported Globals
 *****************************************************************************/


/*****************************************************************************
 * Function prototypes
 *****************************************************************************/
extern void mrs_uas_set_irat_ho_info(MRS_SIM_INDEX sim_index, module_type src_mod, kal_bool needToNotify);

extern void TDD_mrs_uas_set_irat_ho_info(MRS_SIM_INDEX sim_index, module_type src_mod, kal_bool needToNotify);

extern void mrs_uas_get_irat_ho_info(MRS_SIM_INDEX sim_index, kal_bool isGSM, kal_bool isCompact,
                                     kal_uint32 *pSize, void *pCtrlBuf);

extern void mrs_uas_read_nvram_cnf_handler(kal_uint16 nvram_file_id, kal_uint8* data, kal_uint16 len);

extern void mrs_uas_get_uea_uia(MRS_SIM_INDEX sim_index, kal_uint16 *uea, kal_uint16 *uia);
#ifdef __UMTS_FDD_MODE__
extern mrs_utra_power_class_enum mrs_uas_get_FDD_powerclass();
#endif
#ifdef __UMTS_TDD128_MODE__
extern mrs_utra_power_class_enum mrs_uas_get_TDD_powerclass();
#endif

extern void mrs_uas_band_setting_update(MRS_SIM_INDEX sim_index, kal_uint32* data);
#ifdef __SGLTE__
extern kal_bool mrs_uas_is_band_39_ori_support(MRS_SIM_INDEX sim_index);
#endif

void mrs_tas_add_black_cell_list_notification(void);
void mrs_tas_clear_black_cell_list_notification(void);

#ifdef __UMTS_R11__
kal_uint16 mrs_uas_multi_band_conversion(MRS_SIM_INDEX sim_index,
                                         kal_uint16    uarfcn,
                                         kal_bool      useRrcMFBIList,
                                         kal_uint16    band_num,
                                         kal_uint16   *band_list_ptr,
                                         void *pMFBI);
#endif

kal_bool mrs_uas_retrieve_dl_uarfcn_band(MRS_SIM_INDEX sim_index, kal_uint16 dl_uarfcn, kal_uint8 *band_ptr);

kal_bool mrs_uas_band_setting_update_by_plmn(MRS_SIM_INDEX sim_index, kal_uint32 cplmn);

void mrs_uas_reset_uas_supported_band(MRS_SIM_INDEX sim_index);
kal_bool mrs_is_band_capability_update_needed(MRS_SIM_INDEX sim_index, kal_uint8 bandID);


#endif /* _MRS_UAS_CAPABILITY_H */

