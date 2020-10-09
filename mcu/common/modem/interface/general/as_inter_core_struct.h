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
 *   as_inter_core_struct.h
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
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

#ifndef __AS_INTER_CORE_STRUCT_H__
#define __AS_INTER_CORE_STRUCT_H__

#include "as_inter_core_enum.h"
#include "global_type.h"

typedef struct meas_UmtsCell
{
   kal_uint8 validity;

   #define tstd_valid 0x04
   #define sctd_valid 0x02
   #define txDiversity_valid 0x01

   kal_uint16 physCellId; /* MANDATORY */
//   //AsnNull tstd; /* OPTIONAL */
//   //AsnNull sctd; /* OPTIONAL */
   kal_bool txDiversity; /* OPTIONAL */
}
meas_UmtsCell;

typedef struct meas_UmtsCellListOnTheCarrier
{
   kal_uint8 numElements;

   meas_UmtsCell element[32];
}
meas_UmtsCellListOnTheCarrier;

typedef struct meas_UmtsCellListPerCarrier
{
   kal_uint16 uarfcn; /* MANDATORY */
   meas_UmtsCellListOnTheCarrier cellList; /* MANDATORY */
   kal_bool reduced_meas_perf;
}
meas_UmtsCellListPerCarrier;

/* Measured results related: UAS to GAS/EAS */

///#ifdef __UMTS_TDD128_MODE__
typedef struct {
    kal_uint16 cell_parameter;
    kal_int16 pccpch_rscp;  /* RSCP, in qdbm. Range: -500~ -100 (means -125 ~ -25 dBm 0.25 dB step) */
    te_ir_bar_status resel_status;
//    te_ir_resel_criteria3_status criteria3_status;//FDD only
}ts_ir_reported_tdd_cells_meas_info;

typedef struct
{
   kal_uint16 uarfcn;
    kal_int16 uarfcn_rssi;  /* RSSI, in qdbm. Range: -400 ~ -100 (means -100 ~ -25 dBm 0.25 dB step) */
   kal_uint8  num_reported_cells;
   ts_ir_reported_tdd_cells_meas_info  ir_reported_tdd_cells_meas_info[MAX_NR_OF_TDD_CELLS_IN_CELL_LIST];
} ts_ir_umts_carrier_meas_results;

typedef struct
{
   kal_uint8 num_carriers;
   ts_ir_umts_carrier_meas_results  ir_umts_carrier_meas_reults[TDD_MAX_NUM_MEASURED_UMTS_CARRIERS];
} ts_ir_umts_meas_info;
///#endif

typedef struct
{
   kal_uint32  frame_offset;
   kal_uint16  quarter_bit_offset;
} ts_ir_gsm_cell_timing_info;

typedef struct
{
   te_gsm_band_indicator gsm_band_indicator;
   kal_uint16  bcch_arfcn;
   kal_bool    bsic_verified;
   kal_uint8   bsic;                                 /* This contains a valid value only if bsic_verified = TRUE */
   ts_ir_gsm_cell_timing_info  gsm_cell_timing_info; /* This contains a valid value only if bsic_verified = TRUE */
} ts_ir_gsm_cell_bsic_info;

/* Measured results related: EAS to GAS/UAS */
typedef struct
{
   kal_uint16  pci;
   kal_int16   rsrp;
   kal_int16   rsrq;
} eas_meas_cell_rslt_struct;

typedef struct
{
   EARFCN      earfcn;
   kal_uint8   cell_num;
   eas_meas_cell_rslt_struct  cell[MAX_NUM_LTE_MEAS_CELL];
} eas_meas_freq_rslt_struct;

typedef struct
{
   EARFCN      earfcn;
   kal_uint8   cell_num;
   kal_uint16  cell[MAX_NUM_LTE_MEAS_CELL];
} eas_hps_qualify_struct;

typedef struct
{
   kal_uint16 scrambling_code;
   kal_int16  cpich_rscp;    /* RSCP, in qdbm Range: -480 ~ -100 means (-120 ~ -25 )dBm in 0.25 dB step */
   kal_int16  cpich_ec_n0;   /* Ec/No, in qdb. Range: -100~0 (means -25 ~ 0 dB in 0.25 dB step) */
   te_ir_bar_status  resel_status;                 /* used when 2G active */
   te_ir_resel_criteria3_status  criteria3_status; /* used when 2G active */
} ir_umts_measured_result_per_cell;

typedef struct
{
   kal_uint16 uarfcn;
   kal_int16  uarfcn_rssi;  /* RSSI, in qdbm. Range: -480 ~ -100 (means -120 ~ -25 dBm 0.25 dB step) */
   kal_uint8  num_reported_cells;
   ir_umts_measured_result_per_cell  ir_reported_fdd_cells_meas_info[MAX_NR_OF_FDD_CELLS_IN_CELL_LIST];
} ir_umts_measured_result;

/* Measured results related: GAS to UAS/EAS */
typedef struct
{
   te_gsm_band_indicator  gsm_band_indicator;
   kal_uint16  bcch_arfcn;
   kal_int16   rssi_in_quarter_dbm;
} ts_ir_carrier_rssi_info;

typedef struct
{
   kal_uint8  num_carriers;
   ts_ir_carrier_rssi_info  carrier_rssi_info[MAX_NUM_MEASURED_GSM_CELLS];
} ts_ir_gsm_cell_rssi_info;

/* Measurement request/confirm related: EAS/UAS to GAS */
typedef struct
{
   te_gsm_band_indicator gsm_band_indicator;
   kal_uint16 bcchArfcn;
} ts_ir_gsm_cell;

typedef struct
{
   kal_uint8 numElements;
   ts_ir_gsm_cell element[32];
} ts_ir_gsm_cell_list;

/* Measured request related: UAS/GAS/CAS to EAS */
typedef struct
{
   EARFCN              earfcn;
   eas_bandwidth_enum  meas_bandwidth;
   kal_bool            skip_black_list;
   kal_uint8           black_list[BLK_LIST_ARRAY_SIZE];

//#ifdef __LTE_R11__
   kal_bool            wideband_rsrq_meas;
//#endif
} eas_meas_freq_info_struct;

typedef struct
{
   EARFCN      earfcn;
   kal_uint16  pci;
} eas_target_cell_info;

/* Define for Evaluation or Activation Failed Handle */
typedef struct
{
   te_eval_activate_fail_type  eval_activate_fail_type;
   /* In second, valid only when evalActivateFailType is CELL_BARRED */
   kal_uint16                  tbarred_val;
   /* In enum, valid only when evalActivateFailType is NAS_REJECT(only set and used by UAS now) */
   irat_reject_cause_enum      reject_cause;
} ts_eval_activate_fail_handle;

#endif /* __AS_INTER_CORE_STRUCT_H__ */
