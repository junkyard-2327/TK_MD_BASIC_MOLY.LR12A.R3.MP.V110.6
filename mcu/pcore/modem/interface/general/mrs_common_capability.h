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
 *   mrs_common_capability.h
 *
 * Project:
 * --------------------------------------------------------
 *   Multimode
 *
 * Description:
 * --------------------------------------------------------
 *   Declaration of funcitons of mrs_common_capability.c.
 *
 * Author:
 * --------------------------------------------------------
 * -------
 *
 * --------------------------------------------------------
 * $Log$
 *
 * 10 23 2018 ashik.tj
 * [MOLY00356075] modem mini dump??????????
 *
 * 05 18 2018 icy.li
 * [MOLY00317285] [GAS part]FT SRVCC improvement
 * 	
 * 	.
 *
 * 03 16 2018 qingyu.lai
 * [MOLY00312128] [杭州][CMCC VoLTE]杭州天湖苑_3.1SRVCC fail SW workaround solution
 * .
 *
 * 03 16 2018 qingyu.lai
 * [MOLY00312128] [杭州][CMCC VoLTE]杭州天湖苑_3.1SRVCC fail SW workaround solution
 * .
 *
 * 11 29 2017 sapna.ks
 * [MOLY00292082] [Gen93][TMO] 2G disable with ecc enable
 * .
 *
 * 07 06 2017 morton.lin
 * [MOLY00261305] [Gen93] B71 development
 * MRS and NVRAM phase in
 *
 * 03 14 2017 menghau.wu
 * [MOLY00217129] [MT6293] code sync from UMOLY (Phase4)
 * UMOLY CR : [MOLY00224474] [6291][MP3][Post MP] CU HST Patch - MRS and CUSTOM
 * UMOLY CL : 3547100
 *
 * 02 08 2017 menghau.wu
 * [MOLY00217129] [MT6293] code sync from UMOLY (Phase4)
 * UMOLY CR : [ALPS02900073][MT6292][ELBRUS][Phone][GCF][BLOCKING][TS8980][TDD B41,TC 8.7.13] No 4G measurement report from WCDMA to TD-LTE
 * UMOLY CL : 3354520/3354606
 *
 * 12 27 2016 david.niu
 * LR12->UMOLYA sync for CR[MOLY00210217].
 *
 * 10 24 2016 vend_mtb_mobiveil003
 * [MOLY00209293] Band 66 support
 * Band 66 support
 *
 * 10 12 2016 menghau.wu
 * [MOLY00207053] [MT6293] code sync form UMOLY
 * UMOLY CR : [MOLY00153524] [6291] Vivo BlackList feature
 * UMOLY CL : 2577150
 *
 * 03 10 2016 morton.lin
 * [MOLY00165947] [6291 HSR] Protocol Enhancement (Header/Interface)
 * CMCC requirement: HSFR CTRL (SBP, NVRAM and MRS) (Protocol Header / Interface)
 *
 * 02 17 2016 sabrina.hsu
 * [MOLY00156230] [6292] ERRC code sync LR11 to UMOLY
 * AT+EPBSE
 *
 * 12 02 2015 wonder.lee
 * [MOLY00151252] World Mode ID & Support Band collision check
 * 	
 * 	.
 *
 * 11 05 2014 wonder.lee
 * [MOLY00083318] [USIME/MCDLL/UMA] sync code from MT6291_DEV
 * 	.
 *
 * 01 21 2014 wcpuser_integrator
 * [MOLY00054475] SGLTE option rename
 * .
 *
 * 12 31 2013 wonder.lee
 * [MOLY00051335] USIMEcall SCSI function with sim index which UMTS is not supported
 *
 * 11 13 2013 peng.pan
 * [MOLY00046027] [MT6290E1][MMDS_DC] MMDC feature patch back to MOLY trunk
 * B3/B39 common capability.
 *
 * 02 05 2013 yenchih.yang
 * [MOLY00009186] [SIBE/USIME/DBME] Multi-Mode CBr merge to MOLY
 * .
 *
 *****************************************************************************/

#ifndef _MRS_COMMON_CAPABILITY_H
#define _MRS_COMMON_CAPABILITY_H

#include "mrs_as_enums.h" // for MRS_SIM_INDE

#include "mrs_as_struct.h" //for mrs_as_black_cell_struct

#define MRS_LTE_BAND_BITMASK_SIZE   8

/*  Type Definitions */
typedef struct {
    kal_uint8  gsm_band;
    kal_uint32 umts_band;
    kal_uint8  lte_band[MRS_LTE_BAND_BITMASK_SIZE];
} mrs_as_band_setting;

/* B66 support */
typedef struct {
    kal_uint8  gsm_band;
    kal_uint32 umts_band;
    kal_uint8  lte_band[SIZE_LTE_BAND_MASK_TABLE_EXTENDED];
} mrs_as_band_setting_extended;

#define MAX_BLACK_CELL_NUM      50

typedef struct {
    kal_uint8                   num;
    mrs_as_black_cell_struct    as_black_cell_list[MAX_BLACK_CELL_NUM];
} mrs_as_black_cell_list_struct;

/* PUBLIC FUNCTION PROTOTYPES ***********************************************/
extern void mrs_get_asband_settings(MRS_SIM_INDEX sim_index, kal_uint8 *nocheck_invalidrat, kal_uint8 *support_rat);
extern void mrs_em_get_as_band_setting(MRS_SIM_INDEX sim_index, mrs_as_band_setting *band_setting);
extern void mrs_em_get_as_band_setting_extended(MRS_SIM_INDEX sim_index, mrs_as_band_setting_extended *band_setting);
extern void mrs_get_as_band_setting(MRS_SIM_INDEX sim_index, mrs_as_band_setting *band_setting);
extern void mrs_get_as_band_setting_extended(MRS_SIM_INDEX sim_index, mrs_as_band_setting_extended *band_setting);
extern void mrs_em_set_as_band_setting(MRS_SIM_INDEX sim_index, mrs_as_band_setting *band_setting);
extern void mrs_em_set_as_band_setting_extended( MRS_SIM_INDEX sim_index, mrs_as_band_setting_extended *band_setting );
extern void mrs_set_as_band_setting(MRS_SIM_INDEX sim_index, mrs_as_band_setting *band_setting);
extern void mrs_set_as_band_setting_extended(MRS_SIM_INDEX sim_index, mrs_as_band_setting_extended *band_setting);
extern void mrs_set_as_band_setting_nosave(MRS_SIM_INDEX sim_index, mrs_as_band_setting_extended *band_setting);

extern void mrs_hsr_set_mode(MRS_SIM_INDEX sim_index, kal_bool hsr_mode);
extern kal_bool mrs_hsr_get_mode(MRS_SIM_INDEX sim_index);
void FDD_mrs_cleanup(kal_uint8 sim_index);


#ifdef __SGLTE__
extern void mrs_band_39_control_func(rat_enum rat_mode, band_39_control_enum band_39_control);
#endif /* __SGLTE__ */

extern void mrs_scsi_retrieveGsmBandBitmask(MRS_SIM_INDEX sim_index, kal_uint8 *pGBandBitmask);
extern void mrs_scsi_retrieveUmtsBandBitmask(MRS_SIM_INDEX sim_index, kal_uint32 *pUBandBitmask);
extern void mrs_scsi_retrieveLteBandBitmask(MRS_SIM_INDEX sim_index, void *pLBandBitmask);
extern void mrs_scsi_retrieveLteBandBitmask_extended(MRS_SIM_INDEX sim_index, void *pLBandBitmask);

extern kal_bool mrs_add_black_cell_list(mrs_as_black_cell_list_struct *black_cell_list);
extern void mrs_get_black_cell_list(mrs_as_black_cell_list_struct *black_cell_list);
extern kal_bool mrs_check_black_cell_list(MRS_RAT_MODE_TYPE rat, mrs_plmn_id plmn_id, kal_uint32 cell_identity, kal_uint16 lac_or_tac);
extern void mrs_clear_black_cell_list(void);
extern void mrs_update_disable_rat_mode(MRS_SIM_INDEX sim_index, rat_enum disable_rat_mode);

#if defined(__ANT_RXPWR_OFFSET_SUPPORT__)
extern kal_int16 L1D_RF_Antenna_RX_Power_Offset(kal_uint16 rf_band, kal_uint16 arfcn, kal_int16 RSSI, kal_uint32 pcell_id);
extern kal_int16 EAS_GAS_RF_Antenna_RX_Power_Offset(kal_uint16 rf_band, kal_uint16 arfcn, kal_int16 RSSI, kal_uint32 pcell_id);
#endif

#endif /* _MRS_COMMON_CAPABILITY_H */
