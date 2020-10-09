/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2014
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
 * Filename:
 * ---------
 *   uas_eas_inter_core_struct.h
 *
 * Project:
 * --------
 *   UMOLY
 *
 * Description:
 * ------------
 *
 *
 * Author:
 * -------
 *
 *
 * ----------------------------------------------------------------------------
 * $Log:$
 *
 * 03 21 2017 jui-chih.chin
 * [MOLY00236733] [MT6293][ERRC][MOB] Standby RSRQOnAllSymbols measurement from UAS
 * 	
 * 	Interface part
 *
 * 12 19 2014 birui.li
 * [MOLY00087677] [U3G][TDD][UAS RRCE] modifications for U3G
 * merge from peng-an CBr.
 *
 * 12 16 2014 dongqing.qi
 * [MOLY00087344] [UMOLY][TDD][UAS]sync U-Bin CBr to UMOLY TRUNCK
 * 	.low power(lmeme IRAT interfacel 2)
 *
 * 12 16 2014 claud.li
 * [MOLY00087795] [MEME] universal bin check in
 * [Universal bin][FDD][MEME/EAS/GAS] interface
 *
 *
 ******************************************************************************/

#ifndef __UAS_EAS_INTER_CORE_STRUCT_H__
#define __UAS_EAS_INTER_CORE_STRUCT_H__

#include "as_inter_core_enum.h"
#include "as_inter_core_struct.h"

typedef struct
{
  LOCAL_PARA_HDR
  kal_uint8 tid;
  kal_uint8 freq_num;
  eas_meas_freq_rslt_struct freq[MAX_MEAS_IRAT_FREQ];
  kal_bool rsrq_meas_on_all_symbols;
} uas_eas_lte_measurement_ind_struct;

typedef struct
{
  LOCAL_PARA_HDR
  kal_uint8 freq_num;
  eas_hps_qualify_struct freq[MAX_MEAS_IRAT_FREQ];
  /* This flag is used to indicate whether measurement period should be reset
   * immediately. (TRUE:  meas is performed in the first DRX. 
   *               FALSE: meas is performed in the first T-meas occasion)  
   * In current design, the following rules should be followed.
   * (1)If freq_num != 0, this flag will be set as FALSE only if tmeasure measurement 
   *                      is triggered when priority measurement is on-going (i.e., at 
   *                      least one of LTE cells hits priority reselection criteria for 
   *                      priority based measurement reselection). If any improvement is 
   *                      needed, the usage limitation for this flag should be confirmed 
   *                      with EL1's colleague.
   * (2) If freq_num == 0, this flag will alwyas be set as FALSE;
   */
  kal_bool is_meas_period_reset;
} uas_eas_lte_hps_qualify_cell_ind_struct;


typedef struct {
  LOCAL_PARA_HDR
  kal_uint8 list_ref;
  ir_umts_measured_result ir_umts_meas_info;
  kal_bool isLongPeriod;
#ifdef UNIT_TEST
  kal_uint32 meas_ind_ms_diff;
#endif /* UNIT_TEST */
}eas_fdd_uas_ucell_meas_ind_struct;

typedef struct {
  LOCAL_PARA_HDR
  kal_uint8 list_ref;
  ts_ir_umts_meas_info ir_umts_meas_info;
  kal_bool isLongPeriod;
#ifdef UNIT_TEST
  kal_uint32 meas_ind_ms_diff;
#endif /* UNIT_TEST */
}eas_tdd_uas_ucell_meas_ind_struct;

#endif /* __UAS_EAS_INTER_CORE_STRUCT_H__ */
