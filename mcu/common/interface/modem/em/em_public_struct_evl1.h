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

#ifndef _EM_PUBILIC_STRUCT_EVL1_H_
#define _EM_PUBILIC_STRUCT_EVL1_H_

/***********************************************************************************
*
* FILE NAME   :     em_pubilc_stuct_evl1.h.
*
* DESCRIPTION :     EM MSG Struct defination
*
*
************************************************************************************/
/*----------------------------------------------------------------------------
 Include Files
----------------------------------------------------------------------------*/
#include "em_struct.h"
#include "em_msgid.h"


#define MAX_C2K_FRAME_CNT                      18


/* *******************Begain of C2K EVDO L1 MSG_ID struct definition ************/

/* 1. MSG_ID_EM_EVL1_GENERAL_INFO_IND */
typedef enum
{
    EM_EVL1_SYNC = 1,
    EM_EVL1_IDLE = 2,
    EM_EVL1_CONNECTED = 4
} em_evl1_state_enum;

typedef enum
{
    EM_RMC_INACTIVE,
    EM_RMC_INITIAL_SEARCH_PENDING,
    EM_RMC_INITIAL_SEARCH,
    EM_RMC_MINI_ACQ,
    EM_RMC_SYNC,
    EM_RMC_ONLINE_SEARCH,
    EN_RMC_PAUSED
} em_evl1_rmc_modem_status_enum;

typedef enum
{
    EM_TXSTH_STATUS_IDLE,
    EM_TXSTH_STATUS_ACCESS,
    EM_TXSTH_STATUS_TRAFFIC,
    EM_TXSTH_STATUS_TRAFFIC_FREEZE,
    EM_TXSTH_STATUS_FREEZE,
    EM_TXSTH_STATUS_INVALID
} em_evl1_txsth_status_type_enum;

typedef enum
{
    EM_CL1_RFC_IDLE,
    EM_CL1_RFC_1X_MAIN_ONLY,
    EM_CL1_RFC_1X_DIV_ONLY,
    EM_CL1_RFC_1X_DIV_RX,
    EM_CL1_RFC_DO_MAIN_ONLY,
    EM_CL1_RFC_DO_DIV_RX,
    EM_CL1_RFC_SHDR,
    EM_CL1_RFC_1X_DFS,
    EM_CL1_RFC_DO_DFS
} em_rfc_status_type_enum;

typedef struct
{
    em_evl1_state_enum              evl1_state;
    em_evl1_rmc_modem_status_enum   rmc_mode;
    em_evl1_txsth_status_type_enum  txsth_status;
    em_rfc_status_type_enum         rfc_status;
    kal_uint16                      ServingPN;   /* Serving Pilot Pn */
    kal_uint16                      BandClass;
    kal_uint16                      Channel;
} em_evl1_general_info_struct;

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum                    em_info;
    em_evl1_general_info_struct     Msg;
} em_evl1_general_info_ind_struct;


/* 2. MSG_ID_EM_EVL1_TXAGC_POWER_INFO_IND */
typedef struct
{
    kal_uint32  Lower32; /*FrameNo. Lower 32 bit */
    kal_uint8   Upper6;  /* FrameNo. Upper 6 bit */
}em_frame_rec_struct;

typedef struct
{
    kal_int16            OpenLoopFilter[MAX_C2K_FRAME_CNT]; /* Open loop Rssi filter*/
    kal_int16            CloseLoopAcc[MAX_C2K_FRAME_CNT];   /* Close loop accumulation */
    kal_int16            TxPowerMax[MAX_C2K_FRAME_CNT];     /* Maximum Tx Power */
    kal_int16            ReqPowerSlot[MAX_C2K_FRAME_CNT];   /* Slot request Power */
    kal_int16            ReqPowerHslot[MAX_C2K_FRAME_CNT];  /* Half slot request Power */
    em_frame_rec_struct  FrameNo[MAX_C2K_FRAME_CNT];        /* Period Per frame, 18 frames */
} em_evl1_txagc_power_info_struct;


typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum                     em_info;
    em_evl1_txagc_power_info_struct  Msg;
} em_evl1_txagc_power_info_ind_struct;


/* 3. MSG_ID_EM_EVL1_CELL_SWITCH_INFO_IND */
typedef struct
{
    kal_uint16  Pn;        /*Pilot Pn */
    kal_int16   c2i;
    kal_uint16  drc_cover; /* DRC Cover Value */
    kal_uint16  dsc;       /* DSC Date */
    kal_uint16  Pcg_id;
    kal_uint16  Mac_id;
}em_evl1_cell_c2i_info_struct;

typedef struct
{
    kal_uint16                    srv_pn[MAX_C2K_FRAME_CNT];     /* Serving Pilot Pn*/
    em_evl1_cell_c2i_info_struct  Cell_info[MAX_C2K_FRAME_CNT][6];  /* C2i info in active list */
    em_frame_rec_struct           FrameNo[MAX_C2K_FRAME_CNT];    /* Period Per frame, 18 frames */
} em_evl1_cell_switch_info_struct;

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum                     em_info;
    em_evl1_cell_switch_info_struct  Msg;
} em_evl1_cell_switch_info_ind_struct;


/* 4. MSG_ID_EM_EVL1_RXAGC_INFO_IND */
typedef enum
{
    EM_EVL1_RXAGC_STATE_FAST,
    EM_EVL1_RXAGC_STATE_STEADY,
    EM_EVL1_RXAGC_STATE_ICS,
    EM_EVL1_RXAGC_STATE_CAL,
    EM_EVL1_RXAGC_STATE_INVALID
} em_evl1_rxagc_state_enum;

typedef enum
{
    EM_EVL1_RXAGC_HIGH_POWER_MODE,
    EM_EVL1_RXAGC_LOW_POWER_MODE
} em_evl1_rxagc_power_mode_enum;

typedef struct
{
    em_evl1_rxagc_state_enum       rxagc_state;
    em_evl1_rxagc_power_mode_enum  power_mode;
    kal_int16                      Rssi; /* Rssi, in dBm Q5 */
    kal_int16                      DC;
}em_evl1_rxagc_dm_info_struct;

typedef struct
{
    em_evl1_rxagc_dm_info_struct  rxagc_main_info[MAX_C2K_FRAME_CNT];  /* Serving Pilot Pn*/
    em_evl1_rxagc_dm_info_struct  rxagc_div_info[MAX_C2K_FRAME_CNT];   /* C2i info in active list */
    em_frame_rec_struct        FrameNo[MAX_C2K_FRAME_CNT];          /* Period Per frame, 18 frames */

} em_evl1_rxagc_info_struct;

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum               em_info;
    em_evl1_rxagc_info_struct  Msg;
} em_evl1_rxagc_info_ind_struct;

/* 5. MSG_ID_EM_EVL1_AFC_INFO_IND */
typedef enum
{
    EM_EVL1_AFC_STATE_DISABLED,
    EM_EVL1_AFC_STATE_INIT_ACQ_NO_PILOT,
    EM_EVL1_AFC_STATE_INIT_ACQ_PILOT_FOUND,
    EM_EVL1_AFC_STATE_INIT_ACQ_FINGER_ALLOC,
    EM_EVL1_AFC_STATE_SLOTTED,
    EM_EVL1_AFC_STATE_ONLINE,
    EM_EVL1_AFC_STATE_MINIACQ,
    EM_EVL1_TXAFC_STATE_DIABLED,
    EM_EVL1_TXAFC_STATE_ENABLED
} em_evl1_afc_state_enum;

typedef struct
{
    em_evl1_afc_state_enum  afc_state;
    kal_int16               foe;       /* Total FOE, in Hz */
    kal_int16               pll_foe;   /* FOE adjusted by PLL, in Hz */
    kal_int16               nco_foe;   /* FOE adjusted by NCO, in Hz */
} em_evl1_rxtx_afc_info_struct;

typedef struct
{
    em_evl1_rxtx_afc_info_struct  Rx_afc_info[MAX_C2K_FRAME_CNT];  /* Serving Pilot Pn*/
    em_evl1_rxtx_afc_info_struct  Tx_afc_info[MAX_C2K_FRAME_CNT];   /* C2i info in active list */
    em_frame_rec_struct           FrameNo[MAX_C2K_FRAME_CNT];          /* Period Per frame, 18 frames */
} em_evl1_afc_info_struct;

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum                  em_info;
    em_evl1_afc_info_struct       Msg;
} em_evl1_afc_info_ind_struct;


/* 6. MSG_ID_EM_EVL1_MBP_SECTOR_INFO_IND */
typedef struct
{
    kal_uint16  PilotPN;
    kal_uint16  PwrEst;        /* Estimated Power */
    kal_uint8   PcgId;         /* PCG Id*/
    kal_uint8   ServCellFlag;  /* Flag to indicade if it's serving sector */
    kal_uint8   MacId;
    kal_uint8   MacWalshId;    /* Walshld of MAC channel */
    kal_uint8   RABLength;     /* RAB length */
    kal_uint8   RABOffset;
    kal_uint8   RAChannelGain; /* RA Channel Gain */
    kal_uint8   DRCCover;
    kal_uint8   DSC;           /* DSC Value */
} em_evl1_mbp_active_sector_info_struct;

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum                           em_info;
    kal_uint8                              NumPcg;         /* Number of PCG for active sectors */
    kal_uint8                              NumSec;         /* Number of active sectors */
    em_evl1_mbp_active_sector_info_struct  SectorInfo[6];  /* Active sector info list */
} em_evl1_mbp_sector_info_ind_struct;


/* 7. MSG_ID_EM_EVL1_FMP_FINGER_INFO_IND */
typedef enum
{
    EM_SCH_FGR_NOT_DET,
    EM_SCH_FGR_UNCH_ALLOC,
    EM_SCH_FGR_UNCH_DISABLE,
    EM_SCH_FGR_CH_ALLOC,
    EM_SCH_FGR_CH_DISABLE
} em_evl1_fmp_finger_alloc_status_enum;

typedef enum
{
    EM_FINGER_RELEASED,
    EM_FINGER_ACTIVATED,
    EM_FINGER_OBSERVED
} em_evl1_fmp_finger_status_enum;

typedef struct
{
    em_evl1_fmp_finger_alloc_status_enum  AllocStatus;
    em_evl1_fmp_finger_status_enum        Status;        /* fmp finger status */
    kal_bool                              AssignedFlg;   /* Flag to Indicate if finger is assigned */
    kal_int8                              ProtectCount;
    kal_int8                              AccuDrift;     /* Accumulated drift */
    kal_uint8                             AssocAnt;      /* Associated antenna path*/
    kal_uint8                             AssocFinger;   /* Associated Finger Id */
    kal_uint16                            PilotPN;
    kal_int16                             OffsetTc16;    /* Finger offest */
    kal_uint16                            MacId;
    kal_uint16                            MicPower;
    kal_uint16                            SnrEstQ9;     /* Instantaneous figner SNR */
    kal_uint16                            FiltSnrEstQ9; /* Longer term filterd figner SNR */
} em_evl1_fmp_per_finger_struct;

typedef struct
{
    kal_uint8    NumTrafficFinger;              /* Number of Traffic finger */
    kal_uint8    NumMacFinger;                  /* Number of MAC finger */
    em_evl1_fmp_per_finger_struct  Finger[15];  /* Finger detail Information */
} em_evl1_fmp_finger_database_struct;

typedef struct
{
    em_evl1_fmp_finger_database_struct  FmpFinerInfo[9];  /* Fmp finger database, every two frames*/
    em_frame_rec_struct                 FrameNo[9];          /* Period two frames */
} em_evl1_fmp_finger_info_struct;

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum                        em_info;
    em_evl1_fmp_finger_info_struct      Msg;
} em_evl1_fmp_finger_info_ind_struct;


/* 8. MSG_ID_EM_EVL1_TIMING_TRACK_STATUS_IND */
typedef enum
{
    EM_TIMING_TRACK_STATUS_NULL,
    EM_TIMING_TRACK_STATUS_ADV,
    EM_TIMING_TRACK_STATUS_RET
} em_evl1_timing_track_status_type_enum;

typedef struct
{
    em_evl1_timing_track_status_type_enum  timing_track_status[MAX_C2K_FRAME_CNT];  /* Fmp finger database, every two frames*/
    em_frame_rec_struct                    FrameNo[MAX_C2K_FRAME_CNT];              /* Period Per frame, 18 frames */
} em_evl1_timing_track_status_struct;

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum                           em_info;
    em_evl1_timing_track_status_struct     Msg;
} em_evl1_timing_track_status_ind_struct;

/* 9. MSG_ID_EM_EVL1_SCH_STATUS_IND */
typedef struct
{
    kal_uint16  PilotPN;        /* Sch result pilotPN */
    kal_uint8   macId;          /* Sch result MacId */
    kal_uint16  pwrEst;         /* Sch path power */
    kal_int8    pcgId;          /* Sch result PcgId */
    kal_uint8   RABLengh;       /* Sch result RAB length */
    kal_uint8   RABOffset;      /* Sch result RAB offset */
    kal_uint8   RAChannelGain;  /* Sch result RA channel gain */
    kal_uint8   DRCCover;       /* Sch result DRC cover*/
    kal_uint8   DSC;            /* Sch result DSC */
} em_evl1_sector_info_struct;

typedef struct
{
    kal_uint16  PilotPN;        /* Sch result pilotPN */
    kal_uint16  pwrEstQ16;      /* Power estimate for the offset, in linear Val */
    kal_int16   offestTc16;     /* path offset in 1/16Tc.Range[-1024, 1024]chips */
    kal_int16   sOffestTc16;    /* path start offset in 1/16Tc.Range[-1024, 1024]chips */
    kal_uint8   macId;          /* Sch result macId */
    kal_uint8   assocAnt;       /* Associated Antenna path, 0->main, 1-> div, FF->None*/
} em_evl1_usable_path_info_struct;

typedef enum
{
    EM_HW_RESET,
    EM_HW_PAUSE,
    EM_INIT_ACQ_PN_SRCH,
    EM_INIT_ACQ_ONLINE_PN_SRCH,
    EM_INIT_ACQ_VERIFY_SRCH,
    EM_MINI_ACQ,
    EM_FAST_SEARCH,
    EM_ONLINE,
    EM_OFFSET_ADJ,
    EM_FAST_FULL_SEARCH,
    EM_DFS,
    EM_MEAS_6MS_SRCH,
    EM_EMAS_ONLINE_SCAN
} em_evl1_sch_mode_type_enum;

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum                     em_info;
    em_evl1_sch_mode_type_enum       SchMode;
    kal_uint8                        SectorNum;          /* Number of sector */
    em_evl1_sector_info_struct       SectorInfo[6];
    kal_uint8                        UsablePathNum;      /* Number of usable path*/
    em_evl1_usable_path_info_struct  UsablePathInfo[7];
} em_evl1_sch_status_ind_struct;

/* 10. MSG_ID_EM_EVL1_ACC_DATA_RATE_INFO_IND */
typedef enum
{
    EM_ACC_RATE_0BPS,
    EM_ACC_RATE_9600BPS,
    EM_ACC_RATE_19200BPS,
    EM_ACC_RATE_38400BPS
} em_evl1_acc_data_rate_enum;

typedef struct
{
    em_evl1_acc_data_rate_enum  AccDataRate[MAX_C2K_FRAME_CNT];  /* evl1 tx access date rate , every frame, total 18 frames*/
    em_frame_rec_struct         FrameNo[MAX_C2K_FRAME_CNT];      /* Period Per frame, 18 frames */
} em_evl1_acc_data_rate_info_struct;


typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum                       em_info;
    em_evl1_acc_data_rate_info_struct  Msg;
} em_evl1_acc_data_rate_info_ind_struct;

/* 11. MSG_ID_EM_EVL1_TRAFFIC_RRI_VALUE_INFO_IND */
typedef enum
{
    EM_TRAFFIC_RATE_0BPS,
    EM_TRAFFIC_RATE_9600BPS,
    EM_TRAFFIC_RATE_19200BPS,
    EM_TRAFFIC_RATE_38400BPS,
    EM_TRAFFIC_RATE_76800BPS,
    EM_TRAFFIC_RATE_153600BPS
} em_evl1_traffic_data_rate_enum;

typedef struct
{
    em_evl1_traffic_data_rate_enum  RriDataAckPhy01[MAX_C2K_FRAME_CNT];  /* evl1 tx traffic rri date ack, every frame ror subype0/1 */
    kal_uint8                       RriDataAckPhy2[MAX_C2K_FRAME_CNT];  /* evl1 tx traffic rri date ack pkSzIndex,  every 4 slots for subtype2*/
    kal_uint8                       RriDataNakPhy2[MAX_C2K_FRAME_CNT];  /* evl1 tx traffic rri date nak pkSzIndex,  every 4 slots for subtype2*/
    em_frame_rec_struct             FrameNo[MAX_C2K_FRAME_CNT];     /* Period Per frame, 18 frames */
} em_evl1_traffic_rri_value_info_struct;

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum                           em_info;
    em_evl1_traffic_rri_value_info_struct  Msg;
} em_evl1_traffic_rri_value_info_ind_struct;

/* 12. MSG_ID_EM_EVL1_FMP_SECTOR_INFO_IND */
typedef struct
{
    kal_uint16  PilotPN;        /* Pilot PN*/
    kal_uint8   MacIndex;       /* Mac index */
    kal_uint16  PwrEst;         /* Ec/Io */
    kal_int8    PcgId;          /* PCG Id */
    kal_uint8   RABLength;      /* RAB Length */
    kal_uint8   RABOffest;      /* RAB offest */
    kal_uint8   RAChannelGain;  /* RA channel gain */
    kal_uint8   DRCCover;       /* DRC cover */
    kal_uint8   DSC;
} em_evl1_fmp_per_sector_info_struct;

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum                        em_info;
    kal_uint8                           NumSec;
    em_evl1_fmp_per_sector_info_struct  SectorInfo[6];
} em_evl1_fmp_sector_info_ind_struct;

/* 13. MSG_ID_EM_EVL1_SCH_PILOT_UPDATE_INFO_IND */

typedef struct
{
    kal_uint16        PilotPN;        /* Number of pilot */
    kal_int16         StartOffset;    /* Start offset to search, Tc/2(-1024 ~ +1023.5) */
} em_list_q_struct;

typedef struct
{
    kal_uint16        WinSize;      /* Window size */
    kal_int16         WinOffset;    /* Window offset */
} em_win_struct;

typedef struct
{
    kal_int8          NumPilots;        /* Number of pilot */
    kal_int16         WinSize;          /* window size */
    em_list_q_struct  ListQ[6];
    kal_uint8         MACIndex[6];       /*mac index */
    kal_int8          PcgId[6];
    kal_uint8         RABLength[6];     /* RAB length*/
    kal_uint8         RABOffset[6];     /* RAB offset*/
    kal_uint8         RAChannelGain[6]; /* RA channel gain */
    kal_uint8         DRCCover[6];      /* DRC cover */
    kal_uint8         DSC[6];   
} em_active_list_struct;

typedef struct
{
    kal_int8          NumPilots;  /* Number of pilot */
    kal_int16         WinSize;    /* Window size */   
    em_list_q_struct  ListQ[10];
} em_cand_list_struct;

typedef struct
{
    kal_int8          NumPilots;  /* Number of pilot */
    em_win_struct     Win[56];    /* Window size */   
    em_list_q_struct  ListQ[56];
} em_neigh_list_struct;

typedef struct
{
    kal_int8          NumPilots;  /* Number of pilot */
    kal_uint16        WinSize;    /* Window size */   
    em_list_q_struct  ListQ[5];
} em_rem_list_struct;

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum           em_info;
    kal_int16              PilotSeq;
    kal_uint8              ConnSetupFlag;
    kal_uint8              TcaFlag;
    em_active_list_struct  ActiveList;
    em_cand_list_struct    CandList;
    em_neigh_list_struct   NeighList;
    em_rem_list_struct     RemList;
} em_evl1_sch_pilot_update_info_ind_struct;

/* 14. MSG_ID_EM_EVL1_SCH_RESULT_INFO_IND */
typedef struct
{
    kal_uint8   Ant;
    kal_uint16  Stat;   
    kal_int16   StatOffset;
} em_sch_path_info_struct;

typedef struct
{
    kal_uint16              PilotPn;   
    kal_uint16              PwrEst;
    kal_uint16              Offset;
    em_sch_path_info_struct PathInfo[16];
} em_sch_result_struct;

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum                em_info;
    kal_int16                   PilotSeq;
    em_evl1_sch_mode_type_enum  SchMode;
    em_sch_result_struct        ActiveResult[6];
    em_sch_result_struct        CandResult[10];
    em_sch_result_struct        NeighResult[56];
} em_evl1_sch_result_info_ind_struct;

/* ***********************End of C2K EVDO L1 MSG_ID struct definiton ****************/


#endif /* ~_EM_STRUCT_H */

