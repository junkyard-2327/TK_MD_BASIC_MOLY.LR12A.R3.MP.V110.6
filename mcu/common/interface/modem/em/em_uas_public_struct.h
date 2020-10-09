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
 *   em_uas_public_struct.h
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


#ifndef _EM_UAS_PUBLIC_STRUCT_H
#define _EM_UAS_PUBLIC_STRUCT_H

#include "em_public_struct.h"
#include "em_as_common_public_struct.h"
#include "em_l4_common_public_struct.h"
#include "em_nwsel_common_public_struct.h"


#ifdef __UMTS_RAT__    //For MAUI, MONZA2G exclude 3G
/**
 * Remus 20080626
 * Added MEME EM info in Catcher
 */

typedef enum
{
    MEME_EM_EVENT_TYPE1_INVALID,
    MEME_EM_EVENT_TYPE1_E1A,
    MEME_EM_EVENT_TYPE1_E1B,
    MEME_EM_EVENT_TYPE1_E1C,
    MEME_EM_EVENT_TYPE1_E1D,
    MEME_EM_EVENT_TYPE1_E1E,
    MEME_EM_EVENT_TYPE1_E1F,

    MEME_EM_EVENT_TYPE1_E1G,
    MEME_EM_EVENT_TYPE1_E1H,
    MEME_EM_EVENT_TYPE1_E1I,

    MEME_EM_EVENT_TYPE1_E1J
} MemeEmInfoEventType1;


typedef enum
{
    MEME_EM_EVENT_TYPE2_INVALID,
    MEME_EM_EVENT_TYPE2_E2A,
    MEME_EM_EVENT_TYPE2_E2B,
    MEME_EM_EVENT_TYPE2_E2C,
    MEME_EM_EVENT_TYPE2_E2D,
    MEME_EM_EVENT_TYPE2_E2E,
    MEME_EM_EVENT_TYPE2_E2F
} MemeEmInfoEventType2;

typedef enum
{
    MEME_EM_EVENT_TYPE3_INVALID,
    MEME_EM_EVENT_TYPE3_E3A,
    MEME_EM_EVENT_TYPE3_E3B,
    MEME_EM_EVENT_TYPE3_E3C,
    MEME_EM_EVENT_TYPE3_E3D
} MemeEmInfoEventType3;

typedef enum
{
    MEME_EM_EVENT_INVALID,
    // E1x:
    // E2x:
    // E3x:
    MEME_EM_EVENT_E3A,
    MEME_EM_EVENT_E3B,
    MEME_EM_EVENT_E3C,
    MEME_EM_EVENT_E3D
} MemeEmInfoEvent;



typedef enum
{
    MEME_EM_MEAS_QTY_INVALID,
    MEME_EM_MEAS_QTY_RSCP,
    MEME_EM_MEAS_QTY_ECN0,
    MEME_EM_MEAS_QTY_PATHLOSS
} MemeEmMeasQty;

typedef enum
{
    MEME_EM_MEAS_QTY_FOR_OTHER_RAT_INVALID,
    MEME_EM_MEAS_QTY_GSM_RSSI,
    MEME_EM_MEAS_QTY_EUTRA_RSRP,
    MEME_EM_MEAS_QTY_EUTRA_RSRQ
} MemeEmMeasQtyForOtherRAT;


typedef struct {
    kal_uint8   MeasId;
    MemeEmInfoEventType1   EventType;   // 1: 1B, 2: 1B, 3: 1C, 4: 1D, 5: 1E, 6: 1F, 10: 1J
    MemeEmMeasQty MeasQty;              //  1: RSCP, 2: EcN0, 3: pathloss
    kal_uint8   fc;
    kal_int16   Threshold;
    kal_int16   W;                      // FDD only
    kal_int16   ReportingRange;         // FDD only
    kal_int16   Hystersis;              //unit: 0.5dB, real_value = Hystersis/2
    kal_uint16  TimeToTrigger;
} event_1_struct;

typedef struct {
    kal_uint8   MeasId;
    MemeEmInfoEventType2   EventType;   // 1: 2A, 2: 2B, 3: 2C, 4: 2D, 5: 2E, 6: 2F
    MemeEmMeasQty MeasQty;              //  1: RSCP, 2: EcN0, 3: pathloss
    kal_uint8   fc;
    kal_int16   UsedT;                  // threshold for used freq
    kal_int16   nonUsedT;               // threshold for non-used freq
    kal_int16   UsedW;                  // FDD only
    kal_int16   nonUsedW;               // FDD only
    kal_int16   Hystersis;              //unit: 0.5dB, real_value = Hystersis/2
    kal_uint16  TimeToTrigger;
} event_2_struct;

typedef struct {
    kal_uint8   MeasId;                 // 0: invalid, range 1~32
    MemeEmInfoEventType3   EventType;   // 0: invalid, 1: 3A, 2: 3B, 3: 3C, 4: 3D
    MemeEmMeasQty MeasQty;              // 0: invalid, 1: RSCP, 2: EcN0, 3: pathloss
    MemeEmMeasQtyForOtherRAT MeasQtyOtherRAT;   // 0: invalid, 1: GSM_RSSI, 2: EUTRA_RSRP, 3: EUTRA_RSRQ
    kal_uint8   fc_OtherSys;                     // 0xFF: invalid, range 0~ 19, Note: for other RAT (GSM or LTE)
    kal_uint8   fc_OwnSys;              // 0xFF: invalid, range 0~ 19, Note: for UMTS RAT
    kal_int16   ThresholdOwnSystem;      // 0xFFFF: invalid, step unit: 0.25 dB, real_value = ThresholdOwnSystem/4
    kal_int16   ThresholdOtherSystem;    // 0xFFFF: invalid, step unit: 0.25 dB, real_value = ThresholdOtherSystem/4

    kal_uint8   W;                      // 0xFF: invalid, FDD only, 0~2 with 0.1 step

    kal_uint8   Hystersis;              // 0xFF: invalid, step unit: 0.5dB, real_value = Hystersis/2, range 0~7.5
    kal_uint16  TimeToTrigger;          // 0xFFFF: invalid, range 0~5000
} event_3_struct;

typedef struct {
    kal_uint8   MeasId;                 // 0: invalid, range 1~32
    MemeEmInfoEvent   EventType;        // 0: invalid, 31: 3A, 32: 3B, 33: 3C, 34: 3D
} report_struct;


typedef struct {
    LOCAL_PARA_HDR
    em_info_enum em_info;
    kal_uint8 num_event_info;
    event_1_struct em_event_info[7];
} tdd_em_meme_event_type_1_parameter_info_ind_struct, fdd_em_meme_event_type_1_parameter_info_ind_struct;

typedef struct {
    LOCAL_PARA_HDR
    em_info_enum em_info;
    kal_uint8 num_event_info;
    event_2_struct em_event_info[6];
} tdd_em_meme_event_type_2_parameter_info_ind_struct, fdd_em_meme_event_type_2_parameter_info_ind_struct;

typedef struct {
    LOCAL_PARA_HDR
    em_info_enum em_info;
    kal_uint8 num_event_info;
    event_3_struct em_event_info[4];
} tdd_em_meme_event_type_3_parameter_info_ind_struct, fdd_em_meme_event_type_3_parameter_info_ind_struct;

typedef struct {
    LOCAL_PARA_HDR
    em_info_enum em_info;
    kal_uint8 num_trch;
    trch_bler_struct TrCHBler[8];
} em_meme_periodic_bler_report_ind;

typedef struct {
    LOCAL_PARA_HDR
    em_info_enum em_info;
    report_struct em_report_info;
} fdd_em_meme_report_info_ind_struct, tdd_em_meme_report_info_ind_struct;







typedef struct
{
    kal_uint16 UARFCN;
    kal_uint16 CELLPARAID;
    kal_int32 RSCP; /* value = RSCP/4096 */
    kal_int32 ISCP[6]; /* value = ISCP/4096, timeslot 1 - 6 */
    kal_bool isServingCell;/* if it is KAL_TRUE, MMI or Catcher display the cell in Red*/
	kal_uint8 band;  /* value  = 0-invalid, = 1-A band,  =2-B band, ...,  = 6-F band */
} TDD_meme_umts_cell_struct;

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum em_info;
    kal_uint16 workingFreq;
    kal_uint8 num_cells;
    kal_uint8 supportBand; //bitmap: bit0-A Band, bit1-B Band, bit2-C Band, bit3-D Band, bit4-E Band, bit5-F Band
    kal_uint8 sinr; // 0~254, 0xff means this value is invalid
    TDD_meme_umts_cell_struct umts_cell_list[64];
} tdd_em_meme_dch_umts_cell_info_ind_struct;

typedef struct uas_cell_plmn_id
{
    kal_uint16              mcc;
    kal_uint16              mnc;
} uas_cell_plmn_id;

/* BIT STRING URA-Identity */
typedef struct meme_umts_ura_identity
{
   kal_uint8                numBits;
   kal_uint8                stringData[2];
}
meme_umts_ura_identity;

typedef enum {
    MEME_EM_ACTIVE_SET,
    MEME_EM_INTRA_MONITORED,
    MEME_EM_INTRA_DETECTED,
    MEME_EM_INTER_MONITORED,
    MEME_EM_INVALID         = 0xff
} meme_em_umts_cell_type;

typedef struct
{
    kal_uint16              UARFCN;
    kal_uint16              PSC;    // FDD only
    kal_int32               RSCP;   /* value = RSCP/4096 */
    kal_int32               ECN0;   /* value = ECN0/4096 */ // FDD only
    meme_em_umts_cell_type  cell_type;
    kal_uint8               Band;
    kal_int32               RSSI;
    kal_uint32              Cell_identity;

    kal_uint8               validity;
#define MEME_UMTS_CELL_INFO_LAC_VALID 0x01
#define MEME_UMTS_CELL_INFO_RAC_VALID 0x02
#define MEME_UMTS_CELL_INFO_CID_VALID 0x04

    /* Extended Cell Info */
    kal_uint8               num_plmn_id;
    uas_cell_plmn_id        plmn_id_list[6];
    kal_uint16              lac;
    kal_uint8               rac;
    kal_uint8               num_ura_id;
    meme_umts_ura_identity  uraIdentity[8];
} FDD_meme_umts_cell_struct;

typedef struct
{
    kal_uint8 frequency_band;
    kal_uint16 arfcn;
    kal_uint8 bsic;
    kal_int16 rssi; /* value = rssi /4 */
    kal_bool verified;
} meme_gsm_cell_struct;


typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum em_info;
    kal_uint8 num_cells;
    meme_gsm_cell_struct gsm_cell_list[6];
} fdd_em_meme_dch_gsm_cell_info_ind_struct;

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum em_info;
    kal_uint8 num_cells;
    meme_gsm_cell_struct gsm_cell_list[6];
} tdd_em_meme_dch_gsm_cell_info_ind_struct;

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum em_info;
    kal_bool with_2g_neighbor;
    kal_bool is_gsm_ncell_meas_ongoing;
} tdd_em_meme_gsm_ncell_info_ind_struct;

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum em_info;
    kal_bool with_4g_neighbor;
    kal_bool is_lte_ncell_meas_ongoing;
} tdd_em_meme_lte_ncell_info_ind_struct;


/* 20101006
 * H-Serving cell information is added into EM */
typedef struct
{
   kal_uint16 HSDSCH_Serving_UARFCN;     /* uarfcn of HS-DSCH serving cell, 0xFFFF means invalid */
   kal_uint16 HSDSCH_Serving_PSC;        /* psc of HS-DSCH serving cell, 0xFFFF means invalid */
   kal_uint16 EDCH_Serving_UARFCN;       /* uarfcn of E-DCH serving cell, 0xFFFF means invalid */
   kal_uint16 EDCH_Serving_PSC;          /* psc of E-DCH serving cell, 0xFFFF means invalid */
} meme_em_info_h_serving_cell_ind_struct;

/**
 * Gibran 20061228
 * Added Cell Status for EM in Catcher
 * Gibran 20080627
 * Modified CSCE structure for EM in Catcher/MMI.
 */
typedef enum
{
   EM_3G_IN_SERV_ABOVE_S,  /* green button */
   EM_3G_IN_SERV_BELOW_S,  /* yellow button */
   EM_3G_OUT_OF_SERV,      /* orange button */
   EM_3G_NO_SERV,          /* red button */
   EM_3G_NO_CHANGE         /* no change */
} em_3g_service_status_enum;

typedef enum
{
   EM_3G_RRC_IDLE,
   EM_3G_RRC_CELL_FACH,
   EM_3G_RRC_CELL_PCH,
   EM_3G_RRC_URA_PCH,
   EM_3G_RRC_CELL_DCH,
   EM_3G_RRC_INACTIVE,
   EM_3G_RRC_NO_CHANGE,
   // RRCE R7 new states
   EM_3G_RRC_CELL_FACH_HSDPA,
   EM_3G_RRC_CELL_PCH_HSDPA_DATA,
   EM_3G_RRC_CELL_PCH_HSDPA_PAGING,
   EM_3G_RRC_URA_PCH_HSDPA_PAGING,
   // RRCE R8 new states
   EM_3G_RRC_CELL_FACH_HSUPA,
   EM_3G_RRC_CELL_PCH_HSUPA_DATA,
   EM_3G_RRC_CELL_PCH_READYtoHSPA
} em_3g_rrc_state_enum;

typedef enum
{
   EM_3G_PLMNSEARCH_NO_CHANGE,
   EM_3G_PLMNSEARCH_ANY_START,
   EM_3G_PLMNSEARCH_GIVEN_START,
   EM_3G_PLMNSEARCH_ANY_SUCCESS,
   EM_3G_PLMNSEARCH_ANY_NO_CELL,
   EM_3G_PLMNSEARCH_GIVEN_SUCCESS,
   EM_3G_PLMNSEARCH_GIVEN_NO_CELL,
   EM_3G_PLMNSEARCH_ABORT
} em_3g_rrc_plmn_search_status_enum;

typedef struct
{
   em_3g_service_status_enum  service_status;               //MMI
   em_3g_rrc_state_enum      umts_rrc_state;                //MMI
   kal_uint16        uarfcn_DL;                             //MMI
   /* if 0xFFFFFFFF means Invalid, set to empty; 0xFFFFFFFE means No Change. */
   kal_uint16        psc;                                   //MMI
   /* if 0xFFFFFFFF means Invalid, set to empty; 0xFFFFFFFE means No Change.*/

   em_3g_rrc_plmn_search_status_enum plmn_search_status;
} fdd_uas_em_3g_status;

typedef struct
{
   em_3g_service_status_enum  service_status;               //MMI
   em_3g_rrc_state_enum      umts_rrc_state;                //MMI
   kal_uint16        uarfcn_DL;                             //MMI
   /* if 0xFFFFFFFF means Invalid, set to empty; 0xFFFFFFFE means No Change. */
   kal_uint16        psc;                                   //MMI
   /* if 0xFFFFFFFF means Invalid, set to empty; 0xFFFFFFFE means No Change.*/

   kal_uint16        workingFreq;                           //MMI
   /* if 0xFFFFFFFF means Invalid, set to empty; 0xFFFFFFFE means No Change. */
   kal_uint16        uppch_Position;                       //MMI
   /* if 0xFFFFFFFF means Invalid, set to empty; 0xFFFFFFFE means No Change.*/

   kal_uint16    repetitionPeriod_dl;
   /* if 0xFFFF means Invalid, set to empty; 0xFFFE means No Change. */
   kal_uint16    repetitionLength_dl;
   /* if 0xFFFF means Invalid, set to empty; 0xFFFE means No Change. */
   kal_uint16    repetitionPeriod_ul;
   /* if 0xFFFF means Invalid, set to empty; 0xFFFE means No Change. */
   kal_uint16    repetitionLength_ul;
   /* if 0xFFFF means Invalid, set to empty; 0xFFFE means No Change. */

} tdd_uas_em_3g_status;


typedef struct
{
   LOCAL_PARA_HDR
   em_info_enum em_info;

   fdd_uas_em_3g_status  uas_3g_general_status;
} fdd_em_urr_3g_general_status_ind_struct;

typedef struct
{
   LOCAL_PARA_HDR
   em_info_enum em_info;

    tdd_uas_em_3g_status  uas_3g_general_status;
} tdd_em_urr_3g_general_status_ind_struct;

#ifdef __UMTS_TDD128_MODE__
typedef enum
{
   INTRA_TR_HHO,
   INTRA_TM_HHO,
   INTER_TR_HHO,
   INTER_TM_HHO,
   INTRA_TR_BHO,
   INTRA_TM_BHO,
   INTER_TR_BHO,
   INTER_TM_BHO,
   HHO_REVERT,
   BHO_REVERT
} em_3g_handover_type_enum; /* the enum name should be shown in MMI */

typedef struct
{
   kal_uint16   primary_uarfcn_DL;
   kal_uint16   working_uarfcn;
   kal_uint16   physicalCellId;

}em_3g_cell_info;

typedef struct
{
   em_3g_handover_type_enum  service_status;
   em_3g_cell_info           old_cell_info;
   em_3g_cell_info           target_cell_info;
} em_uas_handover_status;

typedef struct
{
   LOCAL_PARA_HDR
   em_info_enum em_info;

   em_uas_handover_status  uas_3g_general_status;
} em_uas_3g_tdd128_handover_sequence_ind_struct;

#endif /*__UMTS_TDD128_MODE__*/


typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum em_info;
} em_rrce_3g4_redir_event_ind_struct;


typedef enum
{
    TDD_RRC_CONN_NULL,
    TDD_RRC_CONN_EST_INIT,/*when nas send est_req*/
    TDD_RRC_CONN_ATMPTING,/*when send rrcConnReq to ADR*/
    TDD_RRC_CONN_EST_FAIL,
    TDD_RRC_CONN_ESTED, /*when send est_cnf(success)to NAS*/
    TDD_RRC_CONN_REL,
} tdd_em_rrc_conn_status_enum;

typedef enum
{
    /*casue for est fail*/
    TDD_RRC_CAUSE_EST_FAIL_REJ_CONGESTION = 0,
    TDD_RRC_CAUSE_EST_FAIL_START = TDD_RRC_CAUSE_EST_FAIL_REJ_CONGESTION,
    TDD_RRC_CAUSE_EST_FAIL_REJ_UNSPECIFIED,
    TDD_RRC_CAUSE_EST_FAIL_RA_FAIL,
    TDD_RRC_CAUSE_EST_FAIL_NO_SETUP,
    TDD_RRC_CAUSE_EST_FAIL_AC_BARRED,
    TDD_RRC_CAUSE_EST_FAIL_T312_EXP,
    TDD_RRC_CAUSE_EST_FAIL_ABORTED,
    TDD_RRC_CAUSE_EST_FAIL_GIBI_TAG_MISMATCH,
    TDD_RRC_CAUSE_EST_FAIL_OTHER,

    /*cause for conn rel*/
    TDD_RRC_CAUSE_REL_START = 20,
    TDD_RRC_CAUSE_REL_UTRAN_NORMAL_EVENT = TDD_RRC_CAUSE_REL_START,
    TDD_RRC_CAUSE_REL_UTRAN_UNSPECIFIED,
    TDD_RRC_CAUSE_REL_UTRAN_PRE_EMPTIVE_RELEASE,
    TDD_RRC_CAUSE_REL_UTRAN_CONGESTION,
    TDD_RRC_CAUSE_REL_UTRAN_REEST_REJECT,
    TDD_RRC_CAUSE_REL_UTRAN_DIRECTED_SIGNALING_CONN_REEST,
    TDD_RRC_CAUSE_REL_UTRAN_USER_INACTIVITY,
    TDD_RRC_CAUSE_REL_CONN_INACTIVITY,
    TDD_RRC_CAUSE_REL_RLF,
    TDD_RRC_CAUSE_REL_SECURITY_CAP_MISMATCH,
    TDD_RRC_CAUSE_REL_NAS_AUTH_FAIL,
    TDD_RRC_CAUSE_REL_CSCE_REL_CH_REQ,
    TDD_RRC_CAUSE_REL_RATCM_DEACTIBATE,

    /*common cause*/
    TDD_RRC_CAUSE_NO_SERVICE = 254,
    TDD_RRC_CAUSE_NULL = 255,
} tdd_em_rrc_cause_enum;

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum  em_info;

    tdd_em_rrc_conn_status_enum rrc_conn_status;
    kal_uint8 est_cause;//RRC_EstablishmentCause:0-31, 255 means est_cause_NULL.
    tdd_em_rrc_cause_enum rrc_cause;
} tdd_em_rrce_conn_status_ind_struct;


typedef struct
{
   kal_uint16        uarfcn_DL;     //MMI
   kal_uint16        psc;           //MMI
   kal_uint32        Sib_Scheduled; //MMI
   /* MIB      0x0001
      SB1      0x0002
      SB2      0x0004
      SIB1     0x0008
      SIB2     0x0010
      SIB3     0x0020
      SIB4     0x0040
      SIB5     0x0080
      SIB6     0x0100
      SIB7     0x0200
      SIB11    0x0400
      SIB12    0x0800
      SIB18    0x1000
      SIB16    0x4000
      SIB5bis  0x8000
      SIB11bis 0x00010000
      SIB19    0x00020000
      SIB20    0x00040000
      SIB21    0x00080000
      SIB22    0x00100000
      */
   kal_uint32        received_Sib_Type;   //MMI
   kal_bool          is_finished;      //MMI
/*    20110524 YenChih
  *    kal_uint8 deferredSIB11 is only used in UMTS_R7 for catcher to display deferred SIB11 related information
  *                 0x00: status not change,
  *                 0x01: deferred SIB11 is on-going,
  *                 0x02: deferred SIB11 is finished
  */
   kal_uint8        deferredSIB11_ongoing;   //MMI
#ifdef __UMTS_TDD128_MODE__

   kal_uint8        cell_type;             //MMI
                /*0x00 invalid (clear Cell_type)
                  0x01 r4 cell
                  0x03 DPA CELL
                  0X05 UPA CELL
                  0X07 UPA+DPA CELL
                */
#endif /*UMTS_TDD128_MODE*/
} sibe_em_sib_status;

/* Viola 20080627, sibe_em_sib_status as the discussion with Shyla,
Sib_Scheduled brings a bitmask for several SIBs, which indicate the SIBs UE needs to receive. Catcher should gray the other SIBs not contained in the variable. Sib_Scheduled would change 0~2 times during SIB collection, I suggest that Catcher could store the current Sib_Scheduled value and compare it with the latest received one.
received_Sib_Type: This variable may contain one or several SIBs. Catcher shall mark "v" for the SIB(s) contained in this variable, but shall all keep the v of the other SIBs, which is marked by pervious "sibe_em_sib_status" messages.
is_finished: is_finished sets to True, it means that the current SIB Collection finishes. When a new collection starts, Catcher shall clean the "v" mark of all SIBs.
*/

typedef struct
{
   LOCAL_PARA_HDR
   sibe_em_sib_status      sib_status;
} sibe_em_sib_status_ind_struct;

typedef enum
{
   EM_UMTS_SUPPORT,
   EM_HSDPA_SUPPORT,
   EM_HSUPA_SUPPORT,
   EM_HSDPA_UPA_SUPPORT
}csce_em_serv_cell_hspa_status;

typedef struct
{
   kal_uint8         cellidx;
   kal_uint16        uarfcn_DL;   /* UARFCN */  //MMI
   kal_uint16        psc;                       //MMI
   kal_bool          is_s_criteria_satisfied;   //MMI
   /* is_s_criteria_satisfied, 0: FALSE, 1: TRUE */
   kal_int8          qQualmin;  /* Qualmin */   //MMI
   kal_int8          qRxlevmin; /* Qrxlevmin */ //MMI
   /* the following value should be divided by 4096, the result may be float */
   kal_int32         srxlev;                    //MMI
   kal_int32         squal;                     //MMI
   kal_int32         rscp;                      //MMI
   kal_int32         ec_no;                     //MMI
   kal_uint16        cycleLength;               //MMI
/* number as k, value is 2k/100 in sec, float */
   kal_uint8         quality_measure;   /* 0: RSCP, 1: EcN0 */ //MMI
   /**
    * Dennis Weng 20101015
    * add band, rssi, cell_identity
    */
   kal_uint8         band;
   kal_int32         rssi;
   kal_uint32        cell_identity;
#ifdef __UMTS_R8__
/* csg_id: 0xFFFFFFFF means not show this csg_id */
   kal_uint32        csg_id;
/* apbcr_priority: -2 means not show apbcr_priority, Sprio_search1, Sprio_search2, and Threshserv_low */
   kal_int8          apbcr_priority;             //MMI
   kal_uint8         sprio_search1;              //MMI
   kal_uint8         sprio_search2;              //MMI
   kal_uint8         threshserv_low;             //MMI
   kal_uint8         threshserv_low2;            //MMI, 0xFF means invalid
#endif

   /* AT&T EM mode */
   kal_uint8         multi_plmn_count;
   plmn_struct       multi_plmn_id[6];

   kal_bool          lac_valid;
   kal_uint16        lac;

   kal_bool          rac_valid;
   kal_uint8         rac;

   kal_bool          ura_valid;
   kal_uint8         num_ura_id;
   meme_umts_ura_identity uraIdentity[8];

   csce_em_serv_cell_hspa_status hspa_status;

#ifdef __LTE_RAT__
#ifdef __UMTS_R11__
   kal_uint8         sib19CellFachMeasInd;
   kal_uint8         eutraRachReportNumBits;
   kal_uint8         eutraRachReportStringData;
#endif
#endif
   kal_int8          primaryCPICH_TX_Power;
   kal_int8          ul_interference;
} FDD_csce_em_serv_cell_s_status;

typedef struct
{
   kal_uint8         cellidx;
   kal_uint16        uarfcn_DL;   /* UARFCN */  //MMI
   kal_uint16        psc;                       //MMI
   kal_bool          is_s_criteria_satisfied;   //MMI
   /* is_s_criteria_satisfied, 0: FALSE, 1: TRUE */
   kal_int8          qQualmin;  /* Qualmin */   //MMI
   kal_int8          qRxlevmin; /* Qrxlevmin */ //MMI
   /* the following value should be divided by 4096, the result may be float */
   kal_int32         srxlev;                    //MMI
   kal_int32         squal;                     //MMI
   kal_int32         rscp;                      //MMI
   kal_uint16        cycleLength;               //MMI
   /**
    * Dennis Weng 20101015
    * add band, rssi, cell_identity
    */
   kal_uint8         band;
   kal_int32         rssi;
   kal_uint32        cell_identity;
#ifdef __UMTS_R8__
/* csg_id: 0xFFFFFFFF means not show this csg_id */
   kal_uint32        csg_id;
/* apbcr_priority: -2 means not show apbcr_priority, Sprio_search1, Sprio_search2, and Threshserv_low */
   kal_int8          apbcr_priority;             //MMI
   kal_uint8         sprio_search1;              //MMI
   kal_uint8         sprio_search2;              //MMI
   kal_uint8         threshserv_low;             //MMI
   kal_uint8         threshserv_low2;            //MMI, 0xFF means invalid
#endif
} tdd_csce_em_serv_cell_s_status;

typedef struct
{
    kal_uint8 multi_plmn_count;
    plmn_struct multi_plmn_id[6];
} csce_em_info_multiple_plmn_struct;

typedef struct
{
   kal_uint8         cellidx;
   kal_uint16        uarfcn_DL;                 //MMI
   kal_uint16        psc;                       //MMI
   kal_bool          is_s_criteria_satisfied;   //MMI
/* is_s_criteria_satisfied, 0: FALSE, 1: TRUE */
   kal_int8          qQualmin;  /* Qualmin */   //MMI
   kal_int8          qRxlevmin; /* Qrxlevmin */ //MMI
   /* the following value should be divided by 4096, the result may be float */
   kal_int32         srxlev;                    //MMI
   kal_int32         squal;                     //MMI
   kal_int32         rscp;                      //MMI
   kal_int32         ec_no;                     //MMI
#ifdef __UMTS_R8__
/* apbcr_priority: -2 means not show apbcr_priority, Threshx_high, and Threshx_low */
   kal_int8          apbcr_priority;             //MMI
   kal_uint8         threshx_high;               //MMI
   kal_uint8         threshx_low;                //MMI
   kal_uint8         threshx_high2;              //MMI, 0xFF means invalid
   kal_uint8         threshx_low2;               //MMI, 0xFF means invalid
#endif

   /* AT&T EM mode */
   kal_uint32        cell_identity;

   kal_bool          multi_plmn_valid;

   kal_uint8         multi_plmn_count;
   plmn_struct       multi_plmn_id[6];

   kal_bool          lac_valid;
   kal_uint16        lac;

   kal_bool          rac_valid;
   kal_uint8         rac;

   kal_bool          ura_valid;
   kal_uint8         num_ura_id;
   meme_umts_ura_identity uraIdentity[8];
} FDD_csce_em_neigh_cell_s_status;

typedef struct
{
   kal_uint8         cellidx;
   kal_uint16        uarfcn_DL;                 //MMI
   kal_uint16        psc;                       //MMI
   kal_bool          is_s_criteria_satisfied;   //MMI
/* is_s_criteria_satisfied, 0: FALSE, 1: TRUE */
   kal_int8          qQualmin;  /* Qualmin */   //MMI
   kal_int8          qRxlevmin; /* Qrxlevmin */ //MMI
   /* the following value should be divided by 4096, the result may be float */
   kal_int32         srxlev;                    //MMI
   kal_int32         squal;                     //MMI
   kal_int32         rscp;                      //MMI
   kal_int32         ec_no;                     //MMI
#ifdef __UMTS_R8__
/* apbcr_priority: -2 means not show apbcr_priority, Threshx_high, and Threshx_low */
   kal_int8          apbcr_priority;             //MMI
   kal_uint8         threshx_high;               //MMI
   kal_uint8         threshx_low;                //MMI
   kal_uint8         threshx_high2;              //MMI, 0xFF means invalid
   kal_uint8         threshx_low2;               //MMI, 0xFF means invalid
#endif
} tdd_csce_em_neigh_cell_s_status;

typedef struct
{
   kal_uint8         cellidx;
   kal_uint16        arfcn;                     //MMI
   kal_uint8         bsic;                      //MMI
   kal_bool          is_bsic_verified;          //MMI
   kal_bool          is_s_criteria_satisfied;   //MMI
/* is_s_criteria_satisfied, 0: FALSE, 1: TRUE */
   kal_uint8         freq_band;                 //MMI
   /* 0: 1800Band, 1: 1900Band */
   kal_int8          qRxlevmin; /* Qrxlevmin */ //MMI
   /* the following value should be divided by 4096, the result may be float */
   kal_int32         srxlev;                    //MMI
   kal_int32         rssi;                      //MMI
#ifdef __UMTS_R8__
/* apbcr_priority: -2 means not show apbcr_priority, Threshx_high, and Threshx_low */
   kal_int8          apbcr_priority;            //MMI
   kal_uint8         threshx_high;              //MMI
   kal_uint8         threshx_low;               //MMI
   kal_uint8         threshx_high2;             //MMI, 0xFF means invalid
   kal_uint8         threshx_low2;              //MMI, 0xFF means invalid
#endif
} FDD_csce_em_2G_neigh_cell_s_status;

typedef struct
{
   kal_uint8         cellidx;
   kal_uint16        arfcn;                     //MMI
   kal_uint8         bsic;                      //MMI
   kal_bool          is_bsic_verified;          //MMI
   kal_bool          is_s_criteria_satisfied;   //MMI
/* is_s_criteria_satisfied, 0: FALSE, 1: TRUE */
   kal_uint8         freq_band;                 //MMI
   /* 0: 1800Band, 1: 1900Band */
   kal_int8          qRxlevmin; /* Qrxlevmin */ //MMI
   /* the following value should be divided by 4096, the result may be float */
   kal_int32         srxlev;                    //MMI
   kal_int32         rssi;                      //MMI
#ifdef __UMTS_R8__
/* apbcr_priority: -2 means not show apbcr_priority, Threshx_high, and Threshx_low */
   kal_int8          apbcr_priority;            //MMI
   kal_uint8         threshx_high;              //MMI
   kal_uint8         threshx_low;               //MMI
   kal_uint8         threshx_high2;             //MMI, 0xFF means invalid
   kal_uint8         threshx_low2;              //MMI, 0xFF means invalid
#endif
} tdd_csce_em_2G_neigh_cell_s_status;

typedef struct
{
   kal_uint32        earfcn;                    //MMI
   kal_uint16        pci;                       //MMI
   kal_int32         rsrp;                      //MMI
   kal_int32         rsrq;                      //MMI
   kal_int32         Treselection;              //MMI
   kal_int8          apbcr_priority;            //MMI

   kal_int16         qRxlevmin;                 //MMI
   kal_int8          qQualMinEUTRA;             //MMI

   kal_uint8         threshx_high;              //MMI
   kal_uint8         threshx_low;               //MMI
   kal_uint8         threshx_high2;             //MMI, 0xFF means invalid
   kal_uint8         threshx_low2;              //MMI, 0xFF means invalid
} FDD_csce_em_LTE_neigh_cell_s_status;

typedef struct
{
   kal_uint16        earfcn;                    //MMI
   kal_uint16        pci;                       //MMI
   kal_int32         rsrp;                      //MMI
   kal_int32         rsrq;                      //MMI
   kal_int32         Treselection;              //MMI
   kal_int8          apbcr_priority;            //MMI

   kal_int16         qRxlevmin;                 //MMI
   kal_int8          qQualMinEUTRA;             //MMI

   kal_uint8         threshx_high;              //MMI
   kal_uint8         threshx_low;               //MMI
   kal_uint8         threshx_high2;             //MMI, 0xFF means invalid
   kal_uint8         threshx_low2;              //MMI, 0xFF means invalid
} tdd_csce_em_LTE_neigh_cell_s_status;

typedef enum
{
  EM_UMTS_CELL,
  EM_GSM_CELL,
  EM_LTE_CELL
} em_RAT_type_enum;

#ifdef __UMTS_R8__
typedef enum
{
  EM_CLEAN_NEIGH_CELL_INFO,
  EM_UPDATE_RH_NEIGH_CELL_INFO,
  EM_UPDATE_APBCR_NEIGH_CELL_INFO
}em_neigh_cell_operation_enum;
#endif

typedef struct
{
   kal_uint8      cellidx;
   kal_uint8      celltype;               //MMI
   /* 1: ServCell, 2: IntraFreq NeighCell, 3: InterFreq NeighCell, 4: InterRAT NeighCell, 5: Detected NieghCell */
   kal_int32      r_value;                //MMI
   /* the value should be divided by 4096, the result may be float */
   kal_int32      Treselection;           //MMI
   /* if ServCell, it's Tresel_s; others, it's Tresel_acc */
   kal_uint8      chan_fail_type;         //MMI
   /* 0: Normal, 1: BCH failure, 2: Attempt failure, 4: MainCH failure */
} csce_em_cell_r_status;

typedef struct
{
   LOCAL_PARA_HDR
   kal_uint8               cell_count;
   csce_em_cell_r_status   cell_r_status[9];      /* for the element over neigh_cell_count, left blank */
} csce_em_cell_r_status_ind_struct;

typedef struct
{
   kal_uint8      cellidx;
   kal_int32      h_value;       //MMI
   /* the value should be divided by 4096, the result may be float */
   kal_uint8      HCS_PRIO;      //MMI
} csce_em_cell_h_status;

typedef struct
{
   LOCAL_PARA_HDR
   kal_uint8               cell_count;
   csce_em_cell_h_status   cell_h_status[9];      /* for the element over neigh_cell_count, left blank */
} csce_em_cell_h_status_ind_struct;

#ifdef __UMTS_R8__
typedef struct
{
   kal_uint8      cellidx;
   kal_uint8      celltype;               //MMI
   /* 1: ServCell, 2: IntraFreq NeighCell, 3: InterFreq NeighCell, 4: InterRAT NeighCell, 5: Detected NieghCell */
   kal_int32      Treselection;           //MMI
   /* if ServCell, it's Tresel_s; others, it's Tresel_acc */
   kal_uint8      chan_fail_type;         //MMI
   /* 0: Normal, 1: BCH failure, 2: Attempt failure, 4: MainCH failure */
} csce_em_cell_apbcr_status;

typedef struct
{
   LOCAL_PARA_HDR
   kal_uint8               cell_count;
   csce_em_cell_apbcr_status   cell_apbcr_status[16];      /* for the element over neigh_cell_count, left blank */
} csce_em_cell_apbcr_status_ind_struct;
#endif

/*  UL1 Engineering Mode  */



/* BEGIN {2013} - NEW EM Architecture */
typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum em_info;

    kal_uint8 multi_plmn_count;
    plmn_struct multi_plmn_id[6];
}
fdd_em_csce_multiple_plmn_ind_struct;

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum em_info;

    kal_uint8 multi_plmn_count;
    plmn_struct multi_plmn_id[6];
}
tdd_em_csce_multiple_plmn_ind_struct;

typedef struct
{
   LOCAL_PARA_HDR
   em_info_enum em_info;

   kal_uint8               neigh_cell_count;
#ifdef __UMTS_R8__
   em_neigh_cell_operation_enum      operation;
#endif
   em_RAT_type_enum        RAT_type;
   union
   {
      FDD_csce_em_neigh_cell_s_status      neigh_cells[16];
      FDD_csce_em_2G_neigh_cell_s_status   GSM_neigh_cells[16];
      FDD_csce_em_LTE_neigh_cell_s_status  LTE_neigh_cells[16];
   }
   choice;
   /* for the element over neigh_cell_count, left blank */
}
fdd_em_csce_neigh_cell_s_status_ind_struct;

typedef struct
{
   LOCAL_PARA_HDR
   em_info_enum em_info;

   kal_uint8               neigh_cell_count;
#ifdef __UMTS_R8__
   em_neigh_cell_operation_enum      operation;
#endif
   em_RAT_type_enum        RAT_type;
   union
   {
      tdd_csce_em_neigh_cell_s_status      neigh_cells[16];
      tdd_csce_em_2G_neigh_cell_s_status   GSM_neigh_cells[16];
      tdd_csce_em_LTE_neigh_cell_s_status  LTE_neigh_cells[16];
   }
   choice;
   /* for the element over neigh_cell_count, left blank */
}
tdd_em_csce_neigh_cell_s_status_ind_struct;

typedef struct
{
   LOCAL_PARA_HDR
    em_info_enum em_info;

   /* the "sx","s_intra_search_value","s_intra_search_value",
   "s_search_hcs_value", "s_search_rat_value",
   "s_hcs_rat_value", "s_limit_search_rat_value"
   should be divided by 4096, the result may be float */
   kal_int32        sx;                            //MMI
   kal_bool         is_s_intra_search_valid;
   kal_int32        s_intra_search_value;          //MMI
   kal_bool         is_s_inter_search_valid;
   kal_int32        s_inter_search_value;          //MMI
   kal_bool         is_s_search_hcs_valid;
   kal_int32        s_search_hcs_value;            //MMI
   kal_bool         is_s_search_rat_valid;
   kal_int32        s_search_rat_value;            //MMI
   kal_bool         is_s_hcs_rat_valid;
   kal_int32        s_hcs_rat_value;               //MMI
   kal_bool         is_s_limit_search_rat_valid;
   kal_int32        s_limit_search_rat_value;      //MMI
   /* For meas_tgt_cells:
      1st LSB: UMTS Intra-Freq Cells, 2nd LSB: UMTS Inter-Freq Cells, 3rd LSB: GSM Inter-RAT Cells
      "Meas Target Type" in "Measurement Rule Status":
      0: Serv Cell only
      1: Serv with IntraFreq Cell
      2: Serv with InterFreq Cell
      3: Serv with Intra/InterFreq Cell
      4: Serv with InterRAT Cell
      5: Serv with IntraFreq/InterRAT Cell
      6: Serv with InterFreq/InterRAT Cell
      7: Serv with Intra/InterFreq/InterRAT Cell
      If the 1st&2nd LSB are all set to '0', make the "UMTS Satisfied Neighbour Cells Status" be invalid;
      If the 3rd LSB is set to '0', make the "GSM Satisfied Neighbour Cells Status" be invalid. */
   kal_uint32       meas_tgt_cells;               //MMI

#ifdef __UMTS_R8__
/* For apbcr_enabled_type:
      1: MEAS_RULE
      2: MEAS_RULE_AND_APB_H_PRIO
      3: MEAS_RULE_AND_APB_ALL_PRIO
      If apbcr_enabled_type is 1, please do not show apbMeasTargetCells, is_gsm_apbcr_enabled, apbcr_uarfcn .
   */
   kal_uint8        apbcr_enabled_type;               //MMI
   /* For apbMeasTargetCells:
      0: None cell
      1: intraFreq Cell
      2: interFreq Cell
      3: Intra/InterFreq Cell
      4: GSM Cell
      5: intraFreq/GSM Cell
      6: interFreq/GSM Cell
      7: Intra/InterFreq/GSM Cell
      8: LTE Cell
      9: intraFreq/LTE Cell
     10: interFreq/LTE Cell
     11: intraFreq/interFreq/LTE Cell
     12: GSM/LTE Cell
     13: intraFreq/GSM/LTE Cell
     14: interFreq/GSM/LTE Cell
     15: Intra/InterFreq/GSM/LTE Cell
   */
   kal_uint32       apbMeasTargetCells;                 //MMI
   kal_bool         is_gsm_apbcr_enabled;               //MMI
   kal_uint16       apbcr_uarfcn[2];                    //MMI
#endif
}
fdd_em_csce_meas_rule_status_ind_struct;

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum em_info;

   /* the "sx","s_intra_search_value","s_intra_search_value",
   "s_search_hcs_value", "s_search_rat_value",
   "s_hcs_rat_value", "s_limit_search_rat_value"
   should be divided by 4096, the result may be float */
   kal_int32        sx;                            //MMI
   kal_bool         is_s_intra_search_valid;
   kal_int32        s_intra_search_value;          //MMI
   kal_bool         is_s_inter_search_valid;
   kal_int32        s_inter_search_value;          //MMI
   kal_bool         is_s_search_hcs_valid;
   kal_int32        s_search_hcs_value;            //MMI
   kal_bool         is_s_search_rat_valid;
   kal_int32        s_search_rat_value;            //MMI
   kal_bool         is_s_hcs_rat_valid;
   kal_int32        s_hcs_rat_value;               //MMI
   kal_bool         is_s_limit_search_rat_valid;
   kal_int32        s_limit_search_rat_value;      //MMI
   /* For meas_tgt_cells:
      1st LSB: UMTS Intra-Freq Cells, 2nd LSB: UMTS Inter-Freq Cells, 3rd LSB: GSM Inter-RAT Cells
      "Meas Target Type" in "Measurement Rule Status":
      0: Serv Cell only
      1: Serv with IntraFreq Cell
      2: Serv with InterFreq Cell
      3: Serv with Intra/InterFreq Cell
      4: Serv with InterRAT Cell
      5: Serv with IntraFreq/InterRAT Cell
      6: Serv with InterFreq/InterRAT Cell
      7: Serv with Intra/InterFreq/InterRAT Cell
      If the 1st&2nd LSB are all set to '0', make the "UMTS Satisfied Neighbour Cells Status" be invalid;
      If the 3rd LSB is set to '0', make the "GSM Satisfied Neighbour Cells Status" be invalid. */
   kal_uint32       meas_tgt_cells;               //MMI

#ifdef __UMTS_R8__
/* For apbcr_enabled_type:
      1: MEAS_RULE
      2: MEAS_RULE_AND_APB_H_PRIO
      3: MEAS_RULE_AND_APB_ALL_PRIO
      If apbcr_enabled_type is 1, please do not show apbMeasTargetCells, is_gsm_apbcr_enabled, apbcr_uarfcn .
   */
   kal_uint8        apbcr_enabled_type;               //MMI
   /* For apbMeasTargetCells:
      0: None cell
      1: intraFreq Cell
      2: interFreq Cell
      3: Intra/InterFreq Cell
      4: GSM Cell
      5: intraFreq/GSM Cell
      6: interFreq/GSM Cell
      7: Intra/InterFreq/GSM Cell
      8: LTE Cell
      9: intraFreq/LTE Cell
     10: interFreq/LTE Cell
     11: intraFreq/interFreq/LTE Cell
     12: GSM/LTE Cell
     13: intraFreq/GSM/LTE Cell
     14: interFreq/GSM/LTE Cell
     15: Intra/InterFreq/GSM/LTE Cell
   */
   kal_uint32       apbMeasTargetCells;                 //MMI
   kal_bool         is_gsm_apbcr_enabled;               //MMI
   kal_uint16       apbcr_uarfcn[8];                    //MMI
#endif
}
tdd_em_csce_meas_rule_status_ind_struct;

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum em_info;

    kal_uint8                 cell_count;
    csce_em_cell_apbcr_status cell_apbcr_status[16];    /* for the element over neigh_cell_count, left blank */
}
fdd_em_csce_apbcr_status_ind_struct;

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum em_info;

    kal_uint8                 cell_count;
    csce_em_cell_apbcr_status cell_apbcr_status[16];    /* for the element over neigh_cell_count, left blank */
}
tdd_em_csce_apbcr_status_ind_struct;

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum em_info;

    kal_uint8             cell_count;
    csce_em_cell_r_status cell_r_status[9];   /* for the element over neigh_cell_count, left blank */
}
fdd_em_csce_cell_r_status_ind_struct;

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum em_info;

    kal_uint8             cell_count;
    csce_em_cell_r_status cell_r_status[9];   /* for the element over neigh_cell_count, left blank */
}
tdd_em_csce_cell_r_status_ind_struct;

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum em_info;

    kal_uint8             cell_count;
    csce_em_cell_h_status cell_h_status[9];    /* for the element over neigh_cell_count, left blank */
}
fdd_em_csce_cell_h_status_ind_struct;

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum em_info;

    kal_uint8             cell_count;
    csce_em_cell_h_status cell_h_status[9];    /* for the element over neigh_cell_count, left blank */
}
tdd_em_csce_cell_h_status_ind_struct;

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum em_info;

    FDD_csce_em_serv_cell_s_status serv_cell;
} fdd_em_csce_serv_cell_s_status_ind_struct;

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum em_info;

    tdd_csce_em_serv_cell_s_status serv_cell;
} tdd_em_csce_serv_cell_s_status_ind_struct;

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum em_info;

    sibe_em_sib_status sib_status;
} em_sibe_sib_status_ind_struct;

typedef enum {
    ON,
    OFF
} hspa_support;

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum em_info;

    hspa_support hsdpa_enable;
    hspa_support hsupa_enable;
} fdd_em_usime_capability_info_ind_struct;

typedef struct
{
   LOCAL_PARA_HDR
   em_info_enum em_info;

   kal_uint16 HSDSCH_Serving_UARFCN;     /* uarfcn of HS-DSCH serving cell, 0xFFFF means invalid */
   kal_uint16 HSDSCH_Serving_PSC;        /* psc of HS-DSCH serving cell, 0xFFFF means invalid */
   kal_uint16 EDCH_Serving_UARFCN;       /* uarfcn of E-DCH serving cell, 0xFFFF means invalid */
   kal_uint16 EDCH_Serving_PSC;          /* psc of E-DCH serving cell, 0xFFFF means invalid */
} fdd_em_meme_dch_h_serving_cell_info_ind_struct;

typedef struct {
   LOCAL_PARA_HDR
   em_info_enum em_info;

   kal_uint8 num_trch;
   trch_bler_struct TrCHBler[8];
}
fdd_em_meme_dch_bler_info_ind_struct;

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum em_info;

    kal_int8 tx_power; // FDD only
    kal_uint8 num_cells;
    FDD_meme_umts_cell_struct umts_cell_list[32];
} fdd_em_meme_dch_umts_cell_info_ind_struct;

typedef struct
{
    kal_uint32 EARFCN;
    kal_uint16 PCI;
    kal_int16 RSRP;
    kal_int16 RSRQ;
} meme_lte_cell_struct;

#define MAX_REPORT_LTE_CELL_EM (32)

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum em_info;

    kal_uint8 num_cells;
    meme_lte_cell_struct lte_cell_list[32];
} fdd_em_meme_fach_dch_lte_cell_info_ind_struct, fdd_em_meme_dch_lte_cell_info_ind_struct, fdd_em_meme_fach_lte_cell_info_ind_struct;

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum em_info;

    kal_uint8 num_cells;
    meme_lte_cell_struct lte_cell_list[32];
} tdd_em_meme_dch_lte_cell_info_ind_struct;


/* END {2013} - NEW EM Architecture */

typedef enum
{
   EM_TDD_MEASURE,
   EM_FDD_MEASURE,
   EM_GSM_RSSI,
   EM_GSM_BSIC_INIT,
   EM_GSM_BSIC_CNF,
   EM_MULTI_CARRIER,
   EM_E_UTRA
} em_tgps_measure_enum;


typedef struct
{
   kal_bool          existed;
   kal_uint8          tgpsi;  /* 1~6 */
   kal_bool          is_gap_deactive;
   /* is_gap_deactive, 0: gap is ACTIVE, 1: gap is DEACTIVE */
   em_tgps_measure_enum    measure_purpose;
} urr_em_tgps_status;

typedef struct
{
   LOCAL_PARA_HDR
   em_info_enum em_info;

   urr_em_tgps_status        tgps_status[6];

} em_rrce_tgps_status_ind_struct;

typedef struct
{
   LOCAL_PARA_HDR
   em_info_enum em_info;

   kal_uint16        srnc;

} em_slce_srncid_status_ind_struct;

typedef struct
{
   kal_uint8     RAB_ID;
   kal_int8      RB_ID;
   kal_uint32    DL_rate;   /* the value should be divided by 1000, the result may be float, uint: kbps */
   kal_uint32    UL_rate;   /* the value should be divided by 1000, the result may be float, uint: kbps */

} slce_em_ps_data_status;

typedef struct
{
   LOCAL_PARA_HDR
   em_info_enum em_info;

   kal_uint8         ps_number;
   slce_em_ps_data_status        ps_data_status[8];

} em_slce_ps_data_rate_status_ind_struct;

typedef struct
{
   LOCAL_PARA_HDR
   em_info_enum em_info;

    /* UMAC related */
   kal_uint8    dl_mac_hspa_type;  // dl_mac_type display : 0:NA, 1:MAC-hs, 2:MAC-ehs
    kal_uint8   ul_mac_hspa_type;  // ul_mac_type display : 0:NA, 1:MAC-ees, 2:MAC-iis

    /* UL1 PHY related */
    kal_uint8 fdpch[6];           // fdpch slot format display : 0~9: SlotFormat-0 ~ SlotFormat-9, 10:NA(NotConfigured  )

   /* Jack Chu: Amazon EM Modifications: shift ID workaround */
   kal_uint16 num_rbs;           // PS RBs only
   /* HS-DSCH related */
   kal_uint8  cqi_feedback_cycle;
   kal_uint8 num_hs_ops_start; /* HSDPA channel setup */
   kal_uint8 num_hs_ops_reconfig; /* H serving cell change */
   kal_uint8 num_hs_ops_stop; /* HSDPA channel tear down */
   kal_uint16 mac_hs_reset;

} em_rrce_dch_state_configuration_status_ind_struct ;

typedef struct
{
   LOCAL_PARA_HDR
   em_info_enum em_info;

   kal_uint8 e_dch_tti; // edch tti display : 255:NA, 0: 2 tti, 1: 10 tti
   kal_uint8 hsdpa_configured;  //display: 0: not configured, 1; configured
   kal_uint8 hsupa_configured;  //display: 0: not configured, 1; configured
   kal_uint8 dc_hsdpa_configured;  //display: 0: not configured, 1; configured
   kal_uint8 dtx_configured;  //display: 0: not configured, 1; configured
   kal_uint8 drx_configured;  //display: 0: not configured, 1; configured
   kal_uint8 hspa_plus_configured;  //display: 0: not configured, 1; configured
}em_rrce_hspa_config_ind_struct; /* MOLY00100048, Jack Chu,  EM_RRCE_HSPA_CONFIG_IND == 160 */


typedef struct
{
   LOCAL_PARA_HDR
   em_info_enum em_info;

    /* eDRX related */
   kal_bool eDRXcfgStatus;  // Note that this is config status from RRC viewpoint, not real operating status from UL1 viewpoint

} em_rrce_fach_state_configuration_status_ind_struct ;

typedef struct
{
   LOCAL_PARA_HDR
   em_info_enum em_info;

    /* security related */
   kal_uint8    uCipheringAlgorithm;  // F9 Alg : 0x0:Init(no cipher), 0x1:UEA0, 0x2:UEA1, 0x4:UEA2
    kal_uint8   uIntegrityAlgorithm;  // F8 Alg : 0x0:Init(no integrity), 0x1:UIA1, 0x2:UIA2
} em_rrce_3g_security_configuration_status_ind_struct ;

typedef struct
{
   LOCAL_PARA_HDR
   em_info_enum em_info;

   kal_bool cs_over_hspa_status;  // R8 feature CS over HSPA on/off status

} em_rrce_cs_over_hspa_status_ind_struct;

typedef struct
{
   LOCAL_PARA_HDR
   em_info_enum em_info;

   kal_bool FDcfgStatus;  // NW support FD status

} em_rrce_fd_configuration_status_ind_struct;



typedef enum
{
    EM_RRCE_CALL_TYPE_MO    = 0,
    EM_RRCE_CALL_TYPE_MT,
    EM_RRCE_CALL_TYPE_EMERGENCY,
    EM_RRCE_CALL_TYPE_INVALID
} em_rrce_call_type_enum;


typedef struct
{
   LOCAL_PARA_HDR
   em_info_enum em_info;
   kal_uint16 uarfcn_DL;   /* DL UARFCN */
    em_rrce_call_type_enum te_call_type;    /* mo/mt call */
} em_rrce_rlf_ind_struct; /* __ALPS02506878_SUPPORT__ */

typedef struct
{
   LOCAL_PARA_HDR
   em_info_enum em_info;
} em_rrce_mo_rlf_ind_struct;

typedef struct
{
   LOCAL_PARA_HDR
   em_info_enum em_info;
} em_rrce_rach_fail_ind_struct;

#define RRC_NW_PEER_MESSAGE_MAX_LEN 30
#define RRC_NW_PEER_MESSAGE_TYPE_MAX_LEN 50
#define RRC_PEER_MSG_DIR_UPLINK 0
#define RRC_PEER_MSG_DIR_DOWNLINK 1

typedef struct
{
   LOCAL_PARA_HDR
   em_info_enum em_info;
   kal_uint8 direction; /* 0 = uplink 1 = downlink */
   kal_uint8 message[RRC_NW_PEER_MESSAGE_MAX_LEN];
   kal_uint8 message_type[RRC_NW_PEER_MESSAGE_TYPE_MAX_LEN];
   kal_uint8 msg_type_idx;
   kal_uint8 channelType;
   kal_uint8 rrcTransactionId;
} em_rrce_nw_peer_msg_info_ind_struct;

typedef struct
{
   LOCAL_PARA_HDR
   em_info_enum em_info;
} em_rrce_3g3_ho_fail_ind_struct;

typedef struct
{
   LOCAL_PARA_HDR
   em_info_enum em_info;
} em_rrce_3g2_ho_fail_ind_struct;

typedef enum
{
   EM_RRCE_KPI_IRAT_3G2_HO,
   EM_RRCE_KPI_IRAT_3G2_IDLE_CR,
   EM_RRCE_KPI_IRAT_3G2_CONNECTED_CR,
   EM_RRCE_KPI_IRAT_3G2_CCO,
   EM_RRCE_KPI_IRAT_3G2_IDLE_REDIR,
   EM_RRCE_KPI_IRAT_3G2_CONNECTED_REDIR,
   EM_RRCE_KPI_PROC_NUM
} em_rrce_kpi_proc_enum;

typedef struct
{
   LOCAL_PARA_HDR
   em_info_enum em_info;

   em_rrce_kpi_proc_enum proc_id;
   em_kpi_status_enum status;
   kal_uint32  attempt;
   kal_uint32  success;
} em_rrce_kpi_status_ind_struct;


typedef struct
{
   LOCAL_PARA_HDR
   em_info_enum em_info;

   kal_uint16 uarfcn_DL;   /* DL UARFCN */
   kal_uint16 uarfcn_UL;   /* UL UARFCN */
} em_rrce_3g_cell_uarfcn_dl_ul_info_ind_struct ;

#endif /* __UMTS_RAT__ */


#endif /* _EM_UAS_PUBLIC_STRUCT_H */

