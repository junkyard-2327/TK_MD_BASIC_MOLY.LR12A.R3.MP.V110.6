/******************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2013
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
 *   lpp_msg_enum.h
 *
 * Project:
 * --------------------------------------------------------
 *   LTE project
 *
 * Description:
 * --------------------------------------------------------
 *   LTE Positioning Protocol - Message Structure Enumeration
 *
 * Author:
 * --------------------------------------------------------
 * -------
 *
 * --------------------------------------------------------
 * $Log$
 *
 * 09 20 2017 yung-chun.lin
 * [MOLY00278366] LPP OTDOA new procedure architecture development
 * 	
 * 	[MOB][OTDOA][OA] 
 * 	- ERRC-LPP OTDOA API
 * 	- enum for OTDOA STOP cause
 *
 * 10 28 2016 jie-yu.wang
 * [MOLY00206577] [Gen92] A-BeiDou feature development
 * .
 *
 * 01 13 2015 roland.li
 * [MOLY00092193] [UMOLY][LPP]LPP R10R11 feature checkin
 * 	.
 *
 * 08 04 2014 doug.shih
 * [MOLY00073990] [LPP CP] LPP code check-in for OTDOA feature
 * .
 *
 * 06 20 2014 jinghan.wang
 * [MOLY00070034] [LCS][LPP] Always turn on reset UE stored pos info in CP for UP testing reference
 * Turn on LPP CP option for UP SUPL usage.
 *
 *
 *****************************************************************************/

#ifndef _LPP_MSG_ENUM_H
#define _LPP_MSG_ENUM_H

#include "kal_public_api.h"
#include "kal_public_defs.h"
#include "kal_general_types.h"

//#if defined(__LPP_CP_SUPPORT__) || defined(__LPP_UP_SUPPORT__) || defined(__L1EDPS_ENABLE__)

#define LPP_OTDOA_MAX_NBR_CELL_FREQ_LAYER_NUM   3
#define LPP_OTDOA_MAX_NBR_CELL_LIST_NUM        24
#define LPP_OTDOA_MAX_NBR_CELL_LIST_NUM_TOTAL  3*24


#define LPP_ECID_MAX_MEASURED_CELL_INFO_NUM    32

#define LPP_MAX_BANDS                          64 // should align LPP_maxBands

/* LPP procedure enum mapped to bitmask (BIT position equals to enum value) */
typedef enum
{
    LPP_PROC_TYPE_NULL,
    LPP_PROC_TYPE_CAPABILITY_TRANSFER_INDICATION,
    LPP_PROC_TYPE_ASSIST_DATA_TRANSFER_DELIVERY,
    LPP_PROC_TYPE_LOC_INFO_TRANSFER_DELIVERY,
    LPP_PROC_TYPE_ERROR,
    LPP_PROC_TYPE_ABORT
} lpp_procedure_type_enum;


typedef enum
{
    LPP_LOC_OTDOA_RESULT_NULL,
    LPP_LOC_OTDOA_RESULT_NO_ERROR,
    LPP_LOC_OTDOA_RESULT_UNDEFINED,
    LPP_LOC_OTDOA_RESULT_ASSIST_DATA_MISSING,          /* TBD: used for timeout without assist data case */
    LPP_LOC_OTDOA_RESULT_UNABLE_MEASURE_REF_CELL,      /* LPP_OTDOA_TargetDeviceErrorCauses_cause_unableToMeasureReferenceCell */
    LPP_LOC_OTDOA_RESULT_UNABLE_MEASURE_ANY_NBR_CELL,  /* LPP_OTDOA_TargetDeviceErrorCauses_cause_unableToMeasureAnyNeighbourCell */
    LPP_LOC_OTDOA_RESULT_UNABLE_MEASURE_SOME_NBR_CELL  /* LPP_OTDOA_TargetDeviceErrorCauses_cause_attemptedButUnableToMeasureSomeNeighbourCells */
} lpp_loc_otdoa_result_enum;


typedef enum
{
    LPP_LOC_ECID_RESULT_NULL,
    LPP_LOC_ECID_RESULT_NO_ERROR,
    LPP_LOC_ECID_RESULT_UNDEFINED,
    LPP_LOC_ECID_RESULT_REQUESTED_MEASUREMENT_NOT_AVAILABLE,      /* LPP_ECID_TargetDeviceErrorCauses_cause_requestedMeasurementNotAvailable, e.g. RRC connection reestablishment */
    LPP_LOC_ECID_RESULT_NOT_ALL_REQUESTED_MEASUREMENTS_POSSIBLE   /* LPP_ECID_TargetDeviceErrorCauses_cause_notAllrequestedMeasurementsPossible */
} lpp_loc_ecid_result_enum;


typedef enum
{
    LPP_OTDOA_PRS_INFO_BANDWIDTH_N6,
    LPP_OTDOA_PRS_INFO_BANDWIDTH_N15,
    LPP_OTDOA_PRS_INFO_BANDWIDTH_N25,
    LPP_OTDOA_PRS_INFO_BANDWIDTH_N50,
    LPP_OTDOA_PRS_INFO_BANDWIDTH_N75,
    LPP_OTDOA_PRS_INFO_BANDWIDTH_N100
} lpp_otdoa_prs_info_bandwidth_enum;


typedef enum
{
    LPP_OTDOA_PRS_INFO_NUM_DL_FRAME_SF_1,
    LPP_OTDOA_PRS_INFO_NUM_DL_FRAME_SF_2,
    LPP_OTDOA_PRS_INFO_NUM_DL_FRAME_SF_4,
    LPP_OTDOA_PRS_INFO_NUM_DL_FRAME_SF_6
} lpp_otdoa_prs_info_num_dl_frame_enum;


typedef enum
{
    LPP_OTDOA_PRS_INFO_MUTING_PO_2,
    LPP_OTDOA_PRS_INFO_MUTING_PO_4,
    LPP_OTDOA_PRS_INFO_MUTING_PO_8,
    LPP_OTDOA_PRS_INFO_MUTING_PO_16,
} lpp_otdoa_prs_info_muting_po_enum;

typedef enum
{
    LPP_OTDOA_NORMAL_STOP,        /*Timer Timeout or ERRC Conn Release*/
    LPP_OTDOA_PROC_CONFLICT_SUS,  /*REQ does not stop for proc conflict, possible restart within a short time period*/
    LPP_OTDOA_PROC_CONFLICT_STOP  /*REQ does not stop for proc conflict, possible restart after a longer time period*/
} lpp_otdoa_req_stop_enum;

typedef enum {
    UE_POS_TECH_AGNSS = 0,
    UE_POS_TECH_OTDOA = 1
} ue_pos_tech_enum;


//#endif  /* #if defined(__LPP_CP_SUPPORT__) || defined(__LPP_UP_SUPPORT__) || defined(__L1EDPS_ENABLE__) */

#endif /* _LPP_MSG_ENUM_H */
