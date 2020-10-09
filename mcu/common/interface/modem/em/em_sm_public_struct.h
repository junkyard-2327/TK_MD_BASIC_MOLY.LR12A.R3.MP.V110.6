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
 *   em_sm_public_struct.h
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


#ifndef _EM_SM_PUBLIC_STRUCT_H
#define _EM_SM_PUBLIC_STRUCT_H

#include "em_public_struct.h"



typedef enum{ // mtk01936 SM EM mode
     LOG_EM_MODE_PDP_INACTIVE, // PDP-INACTIVE
     LOG_EM_MODE_PDP_ACTIVE_PENDING, // PDP-ACTIVE-PENDING
     LOG_EM_MODE_PDP_INACTIVE_PENDING, // PDP-INACTIVE-PENDING
     LOG_EM_MODE_PDP_ACTIVE, // PDP-ACTIVE
     LOG_EM_MODE_PDP_MODIFY_PENDING, // PDP-MODIFY-PENDING
     LOG_EM_MODE_PDP_CONTEXT_ENUM_TOTAL
} sm_em_mode_pdp_context_enum;

typedef enum
{
    LOG_EM_MODE_PRIMARY_CONTEXT,
    LOG_EM_MODE_SECONDARY_CONTEXT,
    LOG_EM_MODE_UNKNOWN_CONTEXT
} sm_em_mode_pdp_context_type_enum;

typedef enum
{
    LOG_EM_MODE_MS_INITIATED = 0,
    LOG_EM_MODE_NW_INITIATED = 1
} sm_em_mode_initiated_enum;

typedef enum
{
     LOG_EM_MODE_IPV4_ADDR_TYPE      = 0X21,
     LOG_EM_MODE_IPV6_ADDR_TYPE      = 0X57,
     LOG_EM_MODE_IPV4V6_ADDR_TYPE    = 0X8D,
     LOG_EM_MODE_PPP_ADDR_TYPE       = 0X01,
     LOG_EM_MODE_OSP_IHOSS_ADDR_TYPE = 0X02,
     LOG_EM_MODE_NULL_PDP_ADDR_TYPE  = 0X03  /* This is added incase if no pdpaddrtype is
                                  * specified */
} sm_em_mode_pdp_addr_type_enum;

/* BCM stands for bearer control mode. */
typedef enum
{
    LOG_EM_MODE_SM_BCM_NULL    = 0x00,  /* Not yet selected by NW. */
    LOG_EM_MODE_SM_BCM_MS_ONLY = 0x01,  /* 24.008, Sec. 10.5.6.3 (PCO). */
    LOG_EM_MODE_SM_BCM_MS_NW   = 0x02   /* 24.008, Sec. 10.5.6.3 (PCO). */
} sm_em_mode_selected_bcm_enum ;

/* ETFT stands for extended TFT format. */
typedef enum
{
    LOG_EM_MODE_SM_ETFT_NOT_SUPPORT = 0x00,  /* 24.008, Sec. 10.5.6.3 (PCO). */
    LOG_EM_MODE_SM_ETFT_SUPPORT     = 0x01   /* 24.008, Sec. 10.5.6.3 (PCO). */
} sm_em_mode_selected_etft_enum ;

typedef struct
{
    /* Requested Qos */
    kal_uint8 delay_class; // possible value are Decimal 1, 2, 3, 4
    kal_uint8 reliability_class; // possible value are Decimal 1, 2, 3, 4, 5
    kal_uint8 peak_throughput; // possible value are Decimal 1~9
    kal_uint8 precedence_class; // possible value are Decimal 1, 2, 3, 4
    kal_uint8 mean_throughput; // possible value are Decimal 1~18
    kal_uint8 traffic_class; // possible value are Decimal 1, 2, 3, 4
    kal_uint8 delivery_order; // possible value are Decimal 1, 2
    kal_uint8 delivery_of_err_sdu; // possible value are Decimal 1, 2, 3
    kal_uint8 max_sdu_size; // max SDU size according to 24.008 Table 10.5.156 encoding
    kal_uint8 max_bitrate_up_lnk; // possible value are Decimal 1~254
    kal_uint8 max_bitrate_down_lnk;  // possible value are Decimal 1~254
    kal_uint8 residual_bit_err_rate; // possible value are Decimal 1~9
    kal_uint8 sdu_err_ratio; // possible value are Decimal 1~7
    kal_uint8 transfer_delay; // possible value are Decimal 1~62
    kal_uint8 traffic_hndl_priority; // possible value are Decimal 1, 2, 3
    kal_uint8 guarntd_bit_rate_up_lnk; // possible value are Decimal 1~254
    kal_uint8 guarntd_bit_rate_down_lnk;  // possible value are Decimal 1~254
    kal_uint8 signalling_indication;
    kal_uint8 source_statistics_descriptor;
    kal_uint8 ext_max_bitrate_down_lnk;
    kal_uint8 ext_guarntd_bit_rate_down_lnk;
    kal_uint8 ext_max_bitrate_up_lnk;
    kal_uint8 ext_guarntd_bit_rate_up_lnk;
    kal_uint8 ext2_max_bitrate_down_lnk;
    kal_uint8 ext2_guarntd_bit_rate_down_lnk;
    kal_uint8 ext2_max_bitrate_up_lnk;
    kal_uint8 ext2_guarntd_bit_rate_up_lnk;



    kal_uint8 human_readable_delay_class; // delay_class_enum
    kal_uint8 human_readable_reliability_class; // sm_readable_reliability_class_enum
    kal_uint8 human_readable_peak_throughput; // sm_readable_peak_throughput_class_enum
    kal_uint8 human_readable_precedence_class; // sm_readable_precedence_class_enum
    kal_uint8 human_readable_mean_throughput; // sm_readable_mean_throughput_enum
    kal_uint8 human_readable_traffic_class; // sm_readable_traffic_class_enum
    kal_uint8 human_readable_delivery_order; // sm_readable_delivery_order_enum
    kal_uint8 human_readable_delivery_of_err_sdu; // sm_readable_delivery_of_err_sdu_enum
    kal_uint16 human_readable_max_sdu_size;
    kal_uint32 human_readable_max_bitrate_up_lnk;
    kal_uint32 human_readable_max_bitrate_down_lnk;
    kal_uint8 human_readable_residual_bit_err_rate; // sm_readable_residual_bit_error_rate_enum
    kal_uint8 human_readable_sdu_err_ratio; // sm_readable_sdu_err_ratio_enum
    kal_uint16 human_readable_transfer_delay;
    kal_uint8 human_readable_traffic_hndl_priority; // sm_readable_traffic_hndl_priority_enum
    kal_uint32 human_readable_guarntd_bit_rate_up_lnk;
    kal_uint32 human_readable_guarntd_bit_rate_down_lnk;
    kal_uint8 human_readable_signalling_indication; // sm_readable_signaling_indication_enum
    kal_uint8 human_readable_source_statistics_descriptor; // sm_readable_source_statistics_descriptor_enum
    kal_uint32 human_readable_ext_max_bitrate_down_lnk;
    kal_uint32 human_readable_ext_guarntd_bit_rate_down_lnk;
    kal_uint32 human_readable_ext_max_bitrate_up_lnk;
    kal_uint32 human_readable_ext_guarntd_bit_rate_up_lnk;
    kal_uint32 human_readable_ext2_max_bitrate_down_lnk;
    kal_uint32 human_readable_ext2_guarntd_bit_rate_down_lnk;
    kal_uint32 human_readable_ext2_max_bitrate_up_lnk;
    kal_uint32 human_readable_ext2_guarntd_bit_rate_up_lnk;

} sm_em_qos_struct;


typedef struct
{
   /*
     * MTK Question: what is the index mean? Does it mean the PDP array index?
     * Response: Yes
     */
   kal_uint8   pdp_index;

   kal_uint8   nsapi; // NSAPI
   kal_uint8    ti_value;

   /*
     * MTK Question: How many states do you need to show? Just inactive & active?
     * Response:
     * PDP status is like below
     * PDP-INACTIVE
     * PDP-ACTIVE_-PENDING
     * PDP-INACTIVE-PENDING
     * PDP-ACTIVE
     * PDP-MODIFY-PENDING
     */

   sm_em_mode_pdp_context_enum   pdp_context_status;
   sm_em_mode_pdp_context_type_enum context_type;

   sm_em_mode_initiated_enum   initiated_by;

   sm_em_mode_pdp_addr_type_enum   pdp_addr_type;

   kal_uint8   ip[MAXIMUM_POSSIBLE_ADDR_LEN]; // IPv4 address or IPv6 address(not ready)
   //kal_uint8   dns1[4];
   //kal_uint8   dns2[4];

   kal_uint16 sdu_size; // Max SDU size in Bytes

   kal_uint8   apn[100];

   /*
     * MTK Question: In our current design, we clear the cause value after PDP deactivation, do you need to see the previous deactivation cause?
     * Response:
     * If MS work normal, just see the previos deactivaion cause.
     * If MS send PDP act msg to Network, MS recevie PDP reject msg from Network, then we need to see reject casue.
     */
   kal_uint8   sm_cause;          //  if applicable

   /*
     * MTK Question: Is this the neg QoS? According to 24.008 Table 10.5.156?
     * LG Response: Yes
     */

   sm_em_qos_struct em_requested_qos;
   sm_em_qos_struct em_minimum_qos;
   sm_em_qos_struct em_negotiated_qos;

   kal_uint8    pkt_flow_id;
   kal_uint8    radio_priority;
   kal_uint16   req_n201u;

   #ifdef __REL7__
   sm_em_mode_selected_bcm_enum     selected_bcm ;
   #endif // __REL7__

   sm_em_mode_selected_etft_enum    selected_etft ;

} sm_em_pdp_info_struct;

/* Poying: Need to define enum so Catcher can get from database */
typedef enum{
      SM_EM_MAX_PDP_SUPPORT = 11 // nsapi 5~15
} sm_em_max_pdp_support_enum;


typedef struct{
   LOCAL_PARA_HDR
   em_info_enum em_info;
   kal_uint8    num_of_active_pdp_context;
   sm_em_pdp_info_struct pdp; // nsapi 5~15
} em_sm_info_struct;

typedef em_sm_info_struct em_sm_nsapi5_status_ind_struct;
typedef em_sm_info_struct em_sm_nsapi6_status_ind_struct;
typedef em_sm_info_struct em_sm_nsapi7_status_ind_struct;
typedef em_sm_info_struct em_sm_nsapi8_status_ind_struct;
typedef em_sm_info_struct em_sm_nsapi9_status_ind_struct;
typedef em_sm_info_struct em_sm_nsapi10_status_ind_struct;
typedef em_sm_info_struct em_sm_nsapi11_status_ind_struct;
typedef em_sm_info_struct em_sm_nsapi12_status_ind_struct;
typedef em_sm_info_struct em_sm_nsapi13_status_ind_struct;
typedef em_sm_info_struct em_sm_nsapi14_status_ind_struct;
typedef em_sm_info_struct em_sm_nsapi15_status_ind_struct;

#endif /* _EM_SM_PUBLIC_STRUCT_H */

