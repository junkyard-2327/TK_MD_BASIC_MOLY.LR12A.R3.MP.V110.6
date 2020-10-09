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

 /*******************************************************************************
 * Filename:
 * ---------
 *   em_ul1_public_struct.h
 *
 * Project:
 * --------
 *   MAUI
 *
 * Description:
 * ------------
 *   Engineer mode public structures.
 *
 * Author:
 * -------
 * -------
 *
 *==============================================================================
 *              HISTORY
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
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *==============================================================================
 *******************************************************************************/

/********************************************************************************
*  Copyright Statement:
*  --------------------
*
*  This product has been developed using a protocol stack
*  developed by Sasken Communication Technologies Limited.
*
********************************************************************************/


#ifndef _EM_UL1_PUBLIC_STRUCT_H
#define _EM_UL1_PUBLIC_STRUCT_H

#include "em_public_struct.h"
#include "em_l4_common_public_struct.h"
#include "em_as_common_public_struct.h"


#ifdef __UMTS_RAT__    //For MAUI, MONZA2G exclude 3G
/**
 * Remus 20080626
 * Added MEME EM info in Catcher
 */

typedef enum
{
  _QPSK=0,
  _16QAM,           /* 1st alphabet can not digit */
  _64QAM
}em_mod_enum;

typedef struct
{
   kal_bool    dl_64QAM_on;
} ul1_em_hs_dsch_configuration_struct;

typedef struct
{
   kal_bool    ul_16QAM_on;
   kal_uint8   edch_tti;
} ul1_em_edch_configuration_struct;

typedef struct
{
   kal_bool    dtx_on;
    kal_bool       drx_on;
} ul1_em_cpc_configuration_struct;

typedef struct
{
   kal_bool    dc_on;
   kal_uint16  dl_freq;
   kal_uint16  psc;
   kal_bool    dl_64QAM_on;
} ul1_em_secondary_hs_dsch_configuration_status_struct;

typedef struct
{
   kal_uint16  dsch_error_all;
   kal_uint16  dsch_error_new_data;
   kal_uint16  dsch_error_after_retx;
   em_mod_enum dsch_curr_mod;
   kal_uint16  dsch_code_num;
   kal_uint16  dsch_cqi_val;
   kal_uint16  dsch_gap_ratio;
} ul1_em_primary_hs_dsch_bler_struct;

typedef struct
{
   kal_uint16  dsch_error_all;
   kal_uint16  dsch_error_new_data;
   kal_uint16  dsch_error_after_retx;
   em_mod_enum dsch_curr_mod;
   kal_uint16  dsch_code_num;
   kal_uint16  dsch_cqi_val;
   kal_uint16  dsch_gap_ratio;
} ul1_em_secondary_hs_dsch_bler_struct;

typedef struct
{
   kal_uint16  edch_ack_cnt;
    kal_uint16  edch_gap_ratio;
} ul1_em_edch_ack_rate_struct;

/* hs_dsch_configuration */
typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum em_info;

    ul1_em_hs_dsch_configuration_struct EmHsDschInfo;
}
fdd_em_ul1_hs_dsch_config_ind_struct;

/* edch_configuration */
typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum em_info;

    ul1_em_edch_configuration_struct EmEdchInfo;
}
fdd_em_ul1_edch_config_ind_struct;

/* secondary_hs_dsch_configuration */
typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum em_info;

    ul1_em_secondary_hs_dsch_configuration_status_struct EmSecHsDschInfo;
}
fdd_em_ul1_sec_hs_dsch_config_ind_struct;


/* cpc_configuration */
typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum em_info;

    ul1_em_cpc_configuration_struct EmCpcInfo;
}
fdd_em_ul1_cpc_config_ind_struct;

/* primary_hs_dsch_bler*/
typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum em_info;

    ul1_em_primary_hs_dsch_bler_struct EmPriHsDschBLER;
}
fdd_em_ul1_pri_hs_dsch_bler_ind_struct;

/* secondary_hs_dsch_bler */
typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum em_info;

    ul1_em_secondary_hs_dsch_bler_struct EmSecHsDschBLER;
}
fdd_em_ul1_sec_hs_dsch_bler_ind_struct;

/* edch_ack_rate */
typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum em_info;

    ul1_em_edch_ack_rate_struct EmEdchAckRate;
}
fdd_em_ul1_edch_ack_rate_ind_struct;

/* prx_drx_measurement_ind */
typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum em_info;

     /* DL Qual indicator */
    kal_int16  dl_rscp[2]; // -255: disable, -120 ~ (dBm)
    kal_int16  dl_rssi[2]; // -255: disable, -120 ~  (dBm)
}
fdd_em_ul1_prx_drx_measurement_ind_struct;

/* ul1_hspa_info_group_ind_struct */
typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum                                         em_info;

    ul1_em_hs_dsch_configuration_struct                  hs_dsch_configuration;
    ul1_em_edch_configuration_struct                     edch_configuration;
    ul1_em_cpc_configuration_struct                      cpc_configuration;
    ul1_em_secondary_hs_dsch_configuration_status_struct secondary_hs_dsch_configuration_status;
    ul1_em_primary_hs_dsch_bler_struct                   primary_hs_dsch_bler;
    ul1_em_secondary_hs_dsch_bler_struct                 secondary_hs_dsch_bler;
    ul1_em_edch_ack_rate_struct                          edch_ack_rate;
}
fdd_em_ul1_hspa_info_group_ind_struct;

typedef struct
{
   kal_uint16 band;
   kal_uint16 uarfcn;
   kal_uint16 serving_psc;
   kal_int16 rscp_max;
   kal_int16 rscp_0;
   kal_int16 rscp_1;
   kal_int16 rscp_diff;
   kal_int16 ecno_max;
   kal_int16 ecno_0;
   kal_int16 ecno_1;
   kal_int16 rssi_max;
   kal_int16 rssi_0;
   kal_int16 rssi_1;
   kal_int8 tx_pwr;
   kal_int8 dpcch_tx_pwr;
   kal_uint8 main_ant_idx;
   kal_int16 tas_version;
   kal_int16 rscp_2;
   kal_int16 ecno_2;
   kal_int16 rssi_2;
   kal_uint16 tas_enable;
   /*instantaneous value*/
   kal_int16 rscp_div_inst;             
   kal_int16 rscp_main_inst;             
   kal_int16 ecio_div_inst;             
   kal_int16 ecio_main_inst;             
   kal_int16 rssi_div_inst;             
   kal_int16 rssi_main_inst;
   kal_int16 dat_scenario_index; 
} fdd_ul1_em_tas_info_struct;

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum em_info;

    fdd_ul1_em_tas_info_struct EmUl1Tas;
}fdd_em_ul1_tas_info_ind_struct;

typedef enum
{
  FDD_T313_STATUS_STOPPED=0,
  FDD_T313_STATUS_RUNNING,
  FDD_T313_STATUS_EXPIRED,
  FDD_T313_STATUS_UNKNOWN=255
}iq_t313_status_t;
typedef struct
{
   kal_uint16 wScramblingCode;
   kal_uint8 ucTpcCombinationIndex;
   iq_t313_status_t ucT313Status;
}iq_rl_sync_status_t;
typedef struct
{
   LOCAL_PARA_HDR
   em_info_enum em_info;
   kal_uint8                    ucNumRLSyncStatus;    /* Number of radio link sync status structuers: Range 1-6 */
   kal_uint8                    ucPad;
   iq_rl_sync_status_t          tRlSyncStatus[6];
}
em_ul1_radio_link_sync_status_ind_struct;

typedef enum
{
  RxPATH_NONE=0,
  RxPATH_MAIN,
  RxPATH_BOTH
}em_rxd_enum;

typedef struct
{
   LOCAL_PARA_HDR
   em_info_enum            em_info;
   em_rxd_enum             rx_path;
   kal_bool                ras_enable_nvram;
}
fdd_em_ul1_rxd_status_ind_struct;

typedef enum
{
  EM_UMTS_CELL,
  EM_GSM_CELL,
  EM_LTE_CELL
} RAT_type_enum;

typedef struct
{
   LOCAL_PARA_HDR
   em_info_enum            em_info;
   kal_uint16              UARFCN;
   RAT_type_enum           RAT_type;
}
fdd_em_ul1_freq_rat_info_during_search_ind_struct;
#endif /* __UMTS_RAT__ */

#endif /* _EM_UL1_PUBLIC_STRUCT_H */

