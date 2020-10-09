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
 *   em_ul2_public_struct.h
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


#ifndef _EM_UL2_PUBLIC_STRUCT_H
#define _EM_UL2_PUBLIC_STRUCT_H

#include "em_public_struct.h"
#include "em_l4_common_public_struct.h"
#include "em_as_common_public_struct.h"

typedef struct
{
    kal_uint16                      max_usage_kbytes;          /*Maximum used size of the pool, <= 999*/
    kal_uint16                      avg_usage_kbytes;           /*Average used size of the pool, <= 999*/
} adm_pool_info_struct;

typedef enum
{
    URLC_ESTABLISH,               //display "EST"
    URLC_REESTABLISH,           //display "REEST"
    URLC_RECONFIG,                //display "RECFG"
    URLC_RELEASE,                   //display "REL"
    URLC_SUSPEND,                  //display "SUSPD"
    URLC_RESUME,                    //display "RES"
    URLC_RESET,                        //display "RST"
    URLC_DISCARD                   //display "DISCD"
} RLC_ACTION_INFO;

/***HSUPA SI***/
typedef struct
{
   kal_uint32                       time;
   kal_uint8                        SNPL;
   kal_uint8                        UPH;
   kal_uint8                        TEBS;
   kal_uint8                        HLBS;
   kal_uint8                        HLID;
   kal_bool                         isERUCCH;
}ul2_em_hsupa_si_ind_struct;

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum em_info;
    ul2_em_hsupa_si_ind_struct ul2_em_hsupa_si_ind_info;
}em_ul2_hsupa_si_ind_struct;
/***HSUPA SI***/
typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum em_info;
}tdd_em_ul2_pch_crc_ind_struct;


typedef struct
{
    /*UMAC new EM Arch*/
    adm_pool_info_struct      dl_adm_pool_info; /*dl_adm_pool_info represent the info of  DL ADM POOl 1*/
    adm_pool_info_struct      ul_adm_pool_info[4];/* ul_adm_pool_info[0] ~ ul_adm_pool_info[2]
                                              represent the info of  UL ADM POOl 1 ~ 3 and
                                              ul_adm_pool_info[3] represent the info TOTAL UL ADM POOL*/
} ul2_em_adm_pool_status_ind_struct;

typedef struct
{
    kal_uint8               num_trch;
    trch_bler_struct        TrCHBler[8];
}ul2_em_3g_bler_ind_struct;


typedef enum
{
    Invalid,                                        /*show blank */
    No_Modify,                                   /*show "=" */
    Add_Queue,                                  /*show "V" */
    Delete_Queue,                                /*show "X" */
    Reconfigure_T1,                              /*show "T1" */
    Reconfigure_WindowSize,                   /*show "WS" */
    Reconfigure_T1_WindowSize,               /*show "T1_WS" */
    Reconfigure_C_T,                          /*show "C_T"*/
} reconfigure_operation_E;

typedef struct
{
    reconfigure_operation_E               reconfig_info[8];         /* reconfiguration operation of the Queue 0 ~ 7 */
} ul2_em_hsdsch_reconfig_status_ind_struct;
typedef struct
{
    kal_uint16           rx_mac_data_rate;      /* kbps, <=2800*/
    kal_uint16           rx_pdcp_data_rate;     /* kbps, <= 2800*/
    kal_uint16           tx_mac_data_rate;      /*kbps, <=400*/
    kal_uint16           tx_pdcp_data_rate;      /*kbps, <=400*/
} ul2_em_ps_data_rate_status_ind_struct;


typedef struct
{
    kal_bool                  is_srb;         // if TRUE, display "S", else display "U"
    kal_uint8                 cn_domain;  // for 0, display "CS"; for 1, display "PS"; for 2, display "ALL"
} ul2_em_rb_info_struct;

typedef struct
{
    kal_uint8                  rlc_mode;   //for 1, display "TM"; for 2, display "UM"; for 3, display "AM", other "Error"
    kal_uint8                  direction;    //for 1, display "UL"; for 2, display "DL"; for 3, display "Both", other "Error"
} ul2_em_rlc_info_struct;

typedef struct
{
    kal_uint16              pdu_Size;    //display the value
    kal_uint16              tx_window_size;  //display the value, range [1, 2048]
    kal_uint16              rx_window_size;   //display the value, range[1, 2048]
    kal_uint8               discard_mode;    //value is 0/1/2/3, display the value
    kal_uint16              discard_value;    //display the value, range [0, 9999]
} ul2_em_rlc_parameter_struct;

typedef struct
{
    kal_int8                        rb_id;        // display the value, range [-5, 32]
    RLC_ACTION_INFO                 rlc_action;
    ul2_em_rb_info_struct           rb_info;
    ul2_em_rlc_info_struct          rlc_info;
    ul2_em_rlc_parameter_struct     rlc_parameter;
    kal_bool                        flush_data_indicator;    //if TRUE, display "Flush", else show blank
    kal_uint8                       reset_cause;                //value is 0/1/2, display the value
} ul2_em_urlc_event_status_ind_struct;


/* __UL2_EM_MODE__ */
#if defined(__UMTS_RAT__)


/*UMAC new EM Arch*/
typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum em_info;
    ul2_em_adm_pool_status_ind_struct ul2_em_adm_pool_status_ind_struct_info;
} em_ul2_adm_pool_status_ind_struct;

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum em_info;
    ul2_em_ps_data_rate_status_ind_struct ul2_em_ps_data_rate_status_ind_struct_info;
} em_ul2_ps_data_rate_status_ind_struct;

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum em_info;
    ul2_em_hsdsch_reconfig_status_ind_struct ul2_em_hsdsch_reconfig_status_ind_struct_info;
} em_ul2_hsdsch_reconfig_status_ind_struct;


typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum em_info;
    ul2_em_urlc_event_status_ind_struct ul2_em_urlc_event_status_ind_struct_info;
} em_ul2_urlc_event_status_ind_struct;

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum em_info;
    ul2_em_3g_bler_ind_struct ul2_em_periodic_bler_report_ind_info;
} em_ul2_3g_bler_ind_struct;



typedef enum
{
   AMR_4_75 = 0,
   AMR_5_15,
   AMR_5_90,
   AMR_6_70,
   AMR_7_40,
   AMR_7_95,
   AMR_10_20,
   AMR_12_20,
   AMR_SID,
   GSM_EFR_SID,
   TDMA_EFR_SID,
   PDC_EFR_SID,
   RESERVE_1,
   RESERVE_2,
   RESERVE_3,
   AMR_NODATA,
   AMRWB_6_60,
   AMRWB_8_85,
   AMRWB_12_65,
   AMRWB_14_25,
   AMRWB_15_85,
   AMRWB_18_25,
   AMRWB_19_85,
   AMRWB_23_05,
   AMRWB_23_85,
   AMRWB_SID
} em_csr_SpeechCodecType;


typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum            em_info;
    em_csr_SpeechCodecType   ULAMRType;
    em_csr_SpeechCodecType   DLAMRType;
} em_csr_status_ind_struct;

typedef struct
{
    kal_uint16 dummy;
    kal_bool bPCHBadCRC; /* KAL_FALSE means UE get Bad CRC TB from PCH at CELL_PCH state */
    kal_uint8 cfn;       /* the cfn receiving Bad CRC TB from PCH at CELL_PCH state */
} fdd_em_umac_info_pch_struct;

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum em_info;
    fdd_em_umac_info_pch_struct     pch_info;
} fdd_em_umac_info_pch_ind_struct;


typedef struct
{
    kal_bool        valid; /* indicate if this struct info is valid; SHALL be 0 or 1 */
    kal_uint8       dummy1; /* 4 byte alignment for memcpy */
    kal_uint16      dummy2; /* 4 byte alignment for memcpy */

    /* Happy bit indicator; for EM View:
            happy_rate = 100 * happy_count / tx_count
            dtx_rate = 100 * dtx_count / (tx_count + dtx_count)
     */
    kal_uint32      happy_count;
    kal_uint32      tx_count;
    kal_uint32      dtx_count;

    /* MAC-E layer throughput; for EM View:
            retx_1st_rate = 100 * retx_1st_count / total_tx_count
            retx_2nd_rate = 100 * retx_2nd_count / total_tx_count
            retx_3rd_rate = 100 * retx_3rd_count / total_tx_count
     */
    kal_uint32      bit_rate;   /* total transmit SDU bits */
    kal_uint32      block_rate; /* total transmit PDU bits */
    kal_uint32      retx_1st_count;
    kal_uint32      retx_2nd_count;
    kal_uint32      retx_3rd_count;
    kal_uint32      total_tx_count;

    /* Serving Grant; for EM View:
            sg_utilization = 100 * block_rate / sg_bit_rate;
     */
    kal_uint16      serving_grant[32];   /* count AG value when UE received AG command */
    kal_uint32      sg_bit_rate; /* total grant bits*/
    kal_uint32      sg_distribution; /* ??? */

    kal_uint32      AckBlkCnt;   /* total Ack block count*/
    kal_uint32      NackBlkCnt;  /* total Nack block count*/

    kal_uint32      ETFCISampleCnt;  /* number of ucETFCI */
                                     /* range: 0 ~ 500    */
    kal_uint8       ucETFCI[500];   /* worst case: recording on 2ms TTI and transmitting data on each TTI*/
} fdd_em_umac_info_cell_edch_struct;

typedef struct
{
    kal_uint32 dl_rb_rate; // DL Radio Bearer Rate
    kal_uint32 ul_rb_rate; // DL Radio Bearer Rate
    kal_uint16 rx_num_error_pdu; //Tot Num of PDU!|d received in error
    kal_uint16 rx_num_data_pdu_rxd; //Total Number of Data PDU!|s received
    kal_uint16 num_pdu_nak_by_nw; // Total Number of PDU!|s NAK!|d by n/w
    kal_uint16 pad;
    kal_uint32 rx_num_pdu_bytes; // Total number of bytes Rx!|d (Control + Data)
    kal_uint16 num_rlc_resets; //Number of RLC resets
    kal_uint16 num_pdu_tx; //Tot number of PDU!|s Tx
    kal_uint16 num_pdu_retx; // Tot number of PDU!|s Re- Tx
    kal_uint16 tot_num_pdu_nak_to_nw; // Total Number of PDU!|s NAK!|d to n/w
    kal_uint32 tx_num_pdu_bytes; // Total number of bytes Sent (Control + Data)
} FDD_em_urlc_status_struct;

typedef struct
{
    kal_uint32 ul_rlc_rate;
    kal_uint32 dl_rlc_rate;
    kal_uint32 ul_rlc_retx_rate;
    kal_uint32 ul_rb_tpt[8];
    kal_uint32 dl_rb_tpt[8];
    kal_uint32 ul_rb_retx_rate[8];
 } FDD_em_urlc_layer_tput_struct;


typedef enum iq_rlc_mode_Tag
{
    IQ_RLC_MODE_UNKNOWN,        /* Mode could not be determined */
    IQ_RLC_MODE_UNACKNOWLEDGED, /* Unacknowledged mode */
    IQ_RLC_MODE_ACKNOWLEDGED,   /* Acknowledged mode */
    IQ_RLC_MODE_TRANSPARENT,    /* Transparent mode */
} iq_rlc_mode_t;

typedef struct
{
    kal_uint8 ucUserRBId;       /* The ID of the user radio bearer to which this structure pertains (The deprecated name of this field was ucTrChId) */
    iq_rlc_mode_t urRlcMode;    /* The RLC mode of operation for this radio bearer */
    kal_uint16 wPad;            /* Padding for alignment, shall be set to 65535.*/
    kal_uint32 dwRlcByteCnt;    /* Number of new RLC data (payload) bytes received (UL) or transmitted (DL) on this radio bearer */
    kal_uint32 dwRlcBlkCnt;     /* Number of new RLC PDUs received or transmitted on this radio bearer */
    kal_uint32 dwRlcReTrBlkCnt; /* Number retransmitted PDUs (UL) or number of PDUs requested for retransmission (DL) on this radio bearer */
 } iq_rb_rlc_stats_t;


typedef struct
{
    kal_uint32 dwRlcUlDuration; /* RLC uplink measurement period to which this metric pertains in milliseconds*/
    kal_uint32 dwRlcDlDuration; /* RLC downlink measurement period to which this metric pertains in milliseconds*/
    kal_uint8  ucNumUlUserRB;   /* Number of uplink user radio bearers to which this metric pertains (The deprecated name of this field was ucNumUlTrCh) */
    kal_uint8  ucNumDlUserRB;   /* Number of user radio bearers to which this metric pertains (The deprecated name of this field was ucNumDlTrCh)*/
    kal_uint16 wPad;   /* Padding for alignment, shall be set to 65535.*/
    iq_rb_rlc_stats_t tRlcUlStats[8];   /* An array of structure type iq_rb_rlc_stats_t whose length is ucNumUlUserRB (The deprecated name of this field was iq_trch_rlc_stats_t) */
    iq_rb_rlc_stats_t tRlcDlStats[8];   /* An array of structure type iq_rb_rlc_stats_t whose length is ucNumDlUserRB (The deprecated name of this field was iq_trch_rlc_stats_t) */
 } FDD_em_urlc_att_rlc_statistics_struct;

typedef struct
{
    kal_uint8  ucRadioBearerId;   /* The identity of the AM-RLC radio bearer to which the RESET pertains */
    kal_uint8  ucDirection;       /* 0: The PDU was received by the UE, 1: The PDU was transmitted by the UE , All other values are reserved */
    kal_uint8  ucPduType;         /* The type of PDU to which this metric pertains: 1: RESET PDU, 2: RESET ACK PDU, All other values are reserved NOTE: This field corresponds to PDU Type as defined in 3GPP TS 25.322/9.2.2.2 */
    kal_uint8  ucResetSeqNum;     /* The sequence number of the reset transaction to which this metric pertains. Shall be set to 255 if the Reset Sequence Number is not available NOTE: This field corresponds to Reset Sequence Number as defined in 3GPP TS 25.322/9.2.2.13 */
    kal_uint8  ucMaxRst;          /* 0: MaxRST has not yet been reached for this AM-RLC entity, 1: MaxRST has been reached (i.e., transmission of this PDU is prohibited) All other values are reserved. */
 } FDD_em_urlc_att_rlc_reset_struct;

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum em_info;

    fdd_em_umac_info_cell_edch_struct       edch_info[2]; /* [0] is Primary Cell; [1] is Secondary Cell */
} fdd_em_umac_info_edch_ind_struct; /* for periodic (1s) edch reporting */


typedef struct
{
    kal_bool        valid; /* indicate if this struct info is valid; SHALL be 0 or 1 */
    kal_uint8       dummy1; /* 4 byte alignment for memcpy */
    kal_uint16      dummy2; /* 4 byte alignment for memcpy */

    /* MAC layer HSDPA throughput; for EM View:
            retx_1st_rate = 100 * retx_1st_count / total_tx_count
            retx_2nd_rate = 100 * retx_2nd_count / total_tx_count
            retx_3rd_rate = 100 * retx_3rd_count / total_tx_count
            redundant_rate = 100 * redundant_TSN_count / total_TSN_count
     */
    kal_uint32      bit_rate;   /* total transmit SDU bits */
    kal_uint32      block_rate; /* total transmit PDU bits */
                                /* For MAC-hs, both bit_rate & block_rate include the MAC-hs header
                                 * For MAC-ehs, only block_rate includes the MAC-ehs header */
    kal_uint32      retx_1st_count;
    kal_uint32      retx_2nd_count;
    kal_uint32      retx_3rd_count;
    kal_uint32      total_tx_count;         /* Count of MAC-hs PDU or "MAC-ehs PDU" */
    kal_uint32      redundant_TSN_count;    /* Count of duplicated MAC-hs PDU or "MAC-ehs RO PDU" */
    kal_uint32      total_TSN_count;        /* Count of MAC-hs PDU or "MAC-ehs RO PDU" */
} fdd_em_umac_info_cell_hsdsch_struct;

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum em_info;

    fdd_em_umac_info_cell_hsdsch_struct     hsdsch_info[3]; /* [0] is Primary Cell; [1] is Secondary Cell */
} fdd_em_umac_info_hsdsch_ind_struct; /* for periodic (1s) hsdsch reporting */

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum em_info;
    FDD_em_urlc_status_struct FDD_em_urlc_status_struct_info;
} fdd_em_urlc_status_ind_struct;

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum em_info;
    FDD_em_urlc_layer_tput_struct FDD_em_urlc_layer_tput_struct_info;
} fdd_em_urlc_layer_tput_ind_struct;

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum em_info;
    FDD_em_urlc_att_rlc_statistics_struct FDD_em_urlc_att_rlc_statistics_struct_info;
} fdd_em_urlc_att_rlc_statistics_ind_struct;

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum em_info;
    FDD_em_urlc_att_rlc_reset_struct FDD_em_urlc_att_rlc_reset_struct_info;
} fdd_em_urlc_att_rlc_reset_ind_struct;


#endif /* __UMTS_RAT__ */

/***********UMAC LogCh to Trch Mapping Info****************/

typedef enum
{
    FDD_LOGICAL_CHANNEL_NONE_EM = -1,
    FDD_LOGICAL_CHANNEL_BCCH_EM,    
    FDD_LOGICAL_CHANNEL_PCCH_EM,
    FDD_LOGICAL_CHANNEL_CCCH_EM,
    FDD_LOGICAL_CHANNEL_DCCH_EM,
    FDD_LOGICAL_CHANNEL_DTCH_EM,
    FDD_LOGICAL_CHANNEL_CTCH_EM,
    FDD_LAST_LOGICAL_CHANNEL_EM = FDD_LOGICAL_CHANNEL_CTCH_EM
} FDD_LogicalChannelType;

typedef enum
{
    FDD_UL_CCTrCh_Type_none_EM = -1,
    FDD_UL_CCTrCh_Type_rach_EM ,
    FDD_UL_CCTrCH_Type_dch_EM,
    FDD_UL_CCTrCH_Type_Inactive_EM,
    FDD_UL_CCTrCH_Type_e_dch_EM,
    FDD_UL_CCTrCH_Type_Invalid_EM 
}FDD_UL_CCTrCH_Type_EM;

typedef enum
{
    FDD_DL_CCTrCH_Type_bch_EM,
    FDD_DL_CCTrCH_Type_pch_EM,
    FDD_DL_CCTrCH_Type_fach_EM,
    FDD_DL_CCTrCH_Type_dch_EM,   
    FDD_DL_CCTrCH_Type_dsch_EM,
    FDD_DL_CCTrCH_Type_hs_dsch_EM,
    FDD_DL_CCTrCH_Type_Invalid_EM
}FDD_DL_CCTrCH_Type_EM;

typedef enum 
{
    RLC_TM_EM = 1,
    RLC_UM_EM,
    RLC_AM_EM
} RLCEntityMode;


typedef struct
{
    FDD_LogicalChannelType      ChannelType;
    kal_uint8                   RbId;/*LCH and RB have one to one mapping in R99*/
    RLCEntityMode               EntityMode;
}FDD_R99_MacTxLogicalChannel;

typedef struct
{
    FDD_LogicalChannelType      ChannelType;
    kal_uint8                   RbId;/*LCH and RB have one to one mapping in R99*/
    RLCEntityMode               EntityMode;
}FDD_R99_MacRxLogicalChannel;

typedef struct
{
    kal_uint8                   MacDFlowId; /* For MAC-hs use only */
    RLCEntityMode               EntityMode;
    FDD_LogicalChannelType      ChannelType;    
    kal_uint8                   LogChID; //SLCE will configure this value only when Mac-ehs configured
    kal_uint8                   MacEhsQueueID;
} FDD_MacRxLogicalChannel;

typedef struct
{
    kal_uint8                       Id;
    FDD_UL_CCTrCH_Type_EM           CCTrCHtype; /*For TX, this type is identity*/
    FDD_R99_MacTxLogicalChannel     LogicalChannelInfo[15]; /* Iterate through NoOfLogicalChannel, since this is the max NoOfLogicalChannel which a Queue can have*/
}fdd_umac_r99_ul_mapping_info_ind_struct;

typedef struct
{
    kal_uint8                       Id;
    FDD_DL_CCTrCH_Type_EM           CCTrCHtype; /* For TX, this type is identity*/
    FDD_R99_MacRxLogicalChannel     LogicalChannelInfo[15]; /* Iterate through NoOfLogicalChannel, since this is the max NoOfLogicalChannel which a Queue can have*/
}fdd_umac_r99_dl_mapping_info_ind_struct;


typedef struct
{
    kal_uint8                   Queue_Id;    /* 0~ 7. The MAC-hs queue ID is unique across all MAC-d flows */
    kal_uint8                   Flow_Id;    /* 0 ~ 7. One MAC-d flow can associate to more than one MAC-hs Queue */
    FDD_MacRxLogicalChannel     LogicalChannelInfo[15]; /* Iterate through NoOfLogicalChannel, since this is the max NoOfLogicalChannel which a Queue can have*/
}fdd_umac_hsdsch_mapping_info_ind_struct;

typedef enum
{
    hsdsch_mapping_info_ind = 1,
    r99_dl_mapping_info_ind,
    r99_ul_mapping_info_ind
}fdd_release_info_enum;

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum                em_info;
    kal_uint8                   NoOfLogicalChannel;/* Nooflogicalchannel belongs to one queue is MAC-hs or one trch in case R99*/
    fdd_release_info_enum       release_info;
    union
    {
        fdd_umac_hsdsch_mapping_info_ind_struct em_hsdsch_info;
        fdd_umac_r99_dl_mapping_info_ind_struct em_r99_dl_info;
        fdd_umac_r99_ul_mapping_info_ind_struct em_r99_ul_info;
    }choice;  /*Selection of type of mapping info depends on release_info_enum*/
}fdd_em_umac_lchid_trch_mapping_info_struct;

typedef enum
{
	RACH_SUCCESS_IND = 0,
    RACH_FAILURE_IND

}fdd_rach_status_enum;

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum           em_info;
    fdd_rach_status_enum  rach_status_info;
}em_umac_rach_failure_info_ind_struct;





#endif /* _EM_UL2_PUBLIC_STRUCT_H */

