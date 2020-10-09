/*******************************************************************************
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
 ******************************************************************************/

/*****************************************************************************
 *
 * Filename:
 * ---------
 *   vmmi_msg_struct.h
 *
 *
 * Description:
 * ------------
 *   This file defines messages that only used in IT
 *
 * Author:
 * -------
 * -------
 *
 ****************************************************************************/
#ifndef VMMI_MSG_STRUCT_H
#define VMMI_MSG_STRUCT_H

#ifdef MTK_DEV_C2K_SRLTE_BASE
/**********************************************STUB Interface Related*********************************/
typedef struct
{
    kal_uint32            ChannelBitMap;        /*mapping C2K's channel type*/
    kal_bool              IsPeriodic;           /*indicate the deny pattern is periodic or not*/
    kal_uint16             PatternBitMap;        /*mapping deny pattern*/
}RbsDenyPatternParaT_temp;

/* script_rbs_deny_pattern_info*/
typedef struct
{
    LOCAL_PARA_HDR
	RbsDenyPatternParaT_temp msg;
}RbsDenyPatternMsg_struct_temp;

/* HSC preempt trigger action type*/
typedef enum
{
    Hybird_preempt_resume,
    SHDR_preempt_resume,
    Early_wakeup
}HscActionTypeE;

typedef struct
{
    kal_uint32            ChannelBitMap;         /* mapping C2K's channel type*/
    kal_bool              GrantPreemptTrig;      /* Indicate RTBA grant or preempt to trigger Hsc preempt flow*/
    kal_uint8             TimingBitMap;          /* mapping block num and then judge whether to trigger Hsc preempt flow*/
    kal_uint8             PreemptTimeOffset;     /* preempt timing offset after trigger*/
    kal_uint8             ResumeTimeOffset;      /* resume timing offset after trigger*/
    HscActionTypeE        HscActionType;         /* indicate active type, hybrid,SHDR or early wakeup*/
}HscPreemptTrigParaT_temp;

/* script_hsc_preempt_trig_info*/
typedef struct
{
    LOCAL_PARA_HDR
    HscPreemptTrigParaT_temp msg;
}HscPreemptTrigMsg_struct_temp;


/* TEMP USE FOR EVL1 start*/
/* RMC_IRATM_CCELL_MEAS_REQ */

/* HSC_CLC_SIB8_INFO_CFG_MSG */
typedef struct
{
   LOCAL_PARA_HDR
   kal_bool                is_update;               /* 0 = Clear,  1 = Update*/
   sys_time_info_c2k_struct       sib8_sys_time_info;
} stub_HscClcSib8InfoCfgMsgT_struct;

typedef struct
{
   LOCAL_PARA_HDR
   SysAirInterfaceT Mode;               /* 0 = 1xRTT,  1 = EvDO*/
} stub_HscSib8TimingSyncReqMsgT_struct;

typedef enum
{
   FR_UT_CASE_0,
   FR_UT_CASE_1,
   FR_UT_CASE_2,
   FR_UT_CASE_3,
   FR_UT_CASE_4,
   FR_UT_CASE_5,
   FR_UT_CASE_6,
   FR_UT_CASE_7,
   FR_UT_CASE_8,
   FR_UT_CASE_9,
   FR_UT_CASE_10,
   FR_UT_CASE_MAX_NUM,
   FR_UT_CASE_INVALID
} FrTstCaseIdT;

typedef enum
{
   FR_TST_CMD_TASK_TO_FT   = 0x00000001,
   FR_TST_CMD_TASK_TO_SWI  = 0x00000002,
   FR_TST_CMD_TASK_TO_PCG  = 0x00000004,
   FR_TST_CMD_TASK_TO_SLOT = 0x00000008,
   FR_TST_CMD_FT_TO_TASK   = 0x00000010,
   FR_TST_CMD_FT_TO_PCG    = 0x00000020,
   FR_TST_CMD_FT_TO_SLOT   = 0x00000040,
   FR_TST_CMD_SWI_TO_TASK  = 0x00000080,
   FR_TST_CMD_SWI_TO_PCG   = 0x00000100,
   FR_TST_CMD_SWI_TO_SLOT  = 0x00000200,
   FR_TST_CMD_PCG_TO_TASK  = 0x00000400,
   FR_TST_CMD_PCG_TO_FT    = 0x00000800,
   FR_TST_CMD_PCG_TO_SWI   = 0x00001000,
   FR_TST_CMD_PCG_TO_SLOT  = 0x00002000,
   FR_TST_CMD_SLOT_TO_TASK = 0x00004000,
   FR_TST_CMD_SLOT_TO_FT   = 0x00008000,
   FR_TST_CMD_SLOT_TO_SWI  = 0x00010000,
   FR_TST_CMD_SLOT_TO_PCG  = 0x00020000,
   FR_TST_CMD_FT_SEFN      = 0x00040000,
   FR_TST_CMD_PCG_SEFN     = 0x00080000,
   FR_TST_CMD_SLOT_SEFN    = 0x00100000,
   FR_TST_CMD_OTHER
} FrTstCmdT;


typedef struct
{
   LOCAL_PARA_HDR
   FrTstCaseIdT CaseId;
   FrTstCmdT    Cmd;     /* FrTstCmdT */
   kal_uint32   DelayTs; /* SeFn schedule delay */
} Cl1FrTstTrigMsg_struct;

typedef enum
{
   START_UT,
   HSC_UT,
   RTBA_UT,
   RTBSTUB_UT,
   RBS_UT,
   DELAYTIMER_UT,
   SPAGE_UT,
   RXTIMER_UT,
   SM_UT,
   CALLBACK_UT,
   RC_UT
} UtTstModNameT;
typedef enum
{
   UT_TEST_CAT_SH,
   UT_TEST_CAT_FH,
   UT_TEST_CAT_TASK
} UtTstCategoryT;

typedef struct
{
   UtTstModNameT     Mod;                             /* Module Name.*/
   UtTstCategoryT    Category;                        /* Category */
   kal_uint32        CaseBitmap;                      /* The test case bitmap, 1- enable testing; 0-disable testing.*/
   kal_uint8         CaseGroup;
} Cl1UtTestTrigCmdTypeT;


typedef struct
{
   LOCAL_PARA_HDR
   Cl1UtTestTrigCmdTypeT  msg;                /* Indicate the test case group id.*/
} Cl1UtTstTrigMsg_struct;

typedef struct
{
   UtTstModNameT     Mod;          /* Module Name.*/
   UtTstCategoryT    Category;     /* Category */
   kal_uint32        CaseBitmap;   /* The test case bitmap, 1- enable testing; 0-disable testing.*/
   kal_uint32        CaseResult;   /* The test case result. 1- failed case; 0-case success or not tested.*/
   kal_uint8         CaseGroup;    /* Indicate the test case group.*/
   kal_bool          TestPass;     /* Indicate whether the whole UT case passed.*/
} Cl1UtTestRptCmdTypeT;

typedef struct
{
   LOCAL_PARA_HDR
   Cl1UtTestRptCmdTypeT msg;
} Cl1UtTestRptMsg_struct;

typedef enum
{
   CL1_UT_MOD_RADARB_RFC,
   CL1_UT_MOD_CALIBRATION,
   CL1_UT_MOD_EVL1_AFC,
   CL1_UT_MOD_EVL1_BSRP_CTRL,
   CL1_UT_MOD_EVL1_FLBRP_HANDLER,
   CL1_UT_MOD_EVL1_FMPMBP,
   CL1_UT_MOD_EVL1_RMC_SCH,
   CL1_UT_MOD_EVL1_RXAGC,
   CL1_UT_MOD_EVL1_STANDBY_MEAS,
   CL1_UT_MOD_EVL1_TIMING_LOOP,
   CL1_UT_MOD_EVL1_TXAGC,
   CL1_UT_MOD_EVL1_TXSTH,
   CL1_UT_MOD_EVL1_DFS,
   CL1_UT_MOD_EVL1_INTERHO,
   CL1_UT_MOD_EVL1_HSCA,
   CL1_UT_MOD_EVL1_SH_SCH,
   CL1_UT_MOD_EVL1_COSIM_TEST,
   CL1_UT_MOD_EVL1_CSM,
   CL1_UT_MOD_EVL1_RAKEDDL,
   CL1_UT_MOD_EVL1_INVALID,
   CL1_UT_MOD_XL1_L1D_SCH,
   CL1_UT_MOD_XL1_L1D_FMP,
   CL1_UT_MOD_XL1_L1D_RFC,
   CL1_UT_MOD_XL1_L1D_TLP,
   CL1_UT_MOD_XL1_L1D_FWD,
   CL1_UT_MOD_XL1_L1D_REV,
   CL1_UT_MOD_XL1_INVALID
} Cl1UtModIdT;

typedef enum
{
   CL1_UT_MOD_CASE_01,
   CL1_UT_MOD_CASE_02,
   CL1_UT_MOD_CASE_03,
   CL1_UT_MOD_CASE_04,
   CL1_UT_MOD_CASE_05,
   CL1_UT_MOD_CASE_06,
   CL1_UT_MOD_CASE_07,
   CL1_UT_MOD_CASE_08,
   CL1_UT_MOD_CASE_09,
   CL1_UT_MOD_CASE_10,
   CL1_UT_MOD_CASE_11,
   CL1_UT_MOD_CASE_12,
   CL1_UT_MOD_CASE_13,
   CL1_UT_MOD_CASE_14,
   CL1_UT_MOD_CASE_15,
   CL1_UT_MOD_CASE_16,
   CL1_UT_MOD_CASE_17,
   CL1_UT_MOD_CASE_18,
   CL1_UT_MOD_CASE_19,
   CL1_UT_MOD_CASE_20,
   CL1_UT_MOD_CASE_21,
   CL1_UT_MOD_CASE_22,
   CL1_UT_MOD_CASE_23,
   CL1_UT_MOD_CASE_24,
   CL1_UT_MOD_CASE_25,
   CL1_UT_MOD_CASE_26,
   CL1_UT_MOD_CASE_27,
   CL1_UT_MOD_CASE_28,
   CL1_UT_MOD_CASE_29,
   CL1_UT_MOD_CASE_30,
   CL1_UT_MOD_SH_SCH_CASE_01,
   CL1_UT_MOD_SH_SCH_CASE_02,
   CL1_UT_MOD_SH_SCH_CASE_03,
   CL1_UT_MOD_SH_SCH_CASE_04,
   CL1_UT_MOD_SH_SCH_CASE_05,
   CL1_UT_MOD_SH_SCH_CASE_06,
   CL1_COSIM_CPH_TEST_CASE_RTT_ICS_1,
   CL1_COSIM_CPH_TEST_CASE_RTT_NCS_1,
   CL1_COSIM_CPH_TEST_CASE_RTT_FDS_1,
   CL1_COSIM_CPH_TEST_CASE_RTT_QPCH_1,
   CL1_COSIM_CPH_TEST_CASE_RTT_RX_1,
   CL1_COSIM_CPH_TEST_CASE_RTT_RX_2,
   CL1_COSIM_CPH_TEST_CASE_RTT_TX_1,
   CL1_COSIM_CPH_TEST_CASE_RTT_TX_2,
   CL1_COSIM_CPH_TEST_CASE_RTT_TX_3,
   CL1_COSIM_CPH_TEST_CASE_EVDO_ICS_1,
   CL1_COSIM_CPH_TEST_CASE_EVDO_NCS_1,
   CL1_COSIM_CPH_TEST_CASE_EVDO_NCS_2,/*fast_full_search mode*/
   CL1_COSIM_CPH_TEST_CASE_EVDO_ICS_2,/*INT_ACQ mode*/
   CL1_COSIM_CPH_TEST_CASE_EVDO_RX_1,
   CL1_COSIM_CPH_TEST_CASE_EVDO_RX_2,
   CL1_COSIM_CPH_TEST_CASE_EVDO_RX_3,
   CL1_COSIM_CPH_TEST_CASE_EVDO_TX_1,
   CL1_COSIM_CPH_TEST_CASE_EVDO_TX_2,
   CL1_COSIM_CPH_TEST_CASE_EVDO_TX_3,
   CL1_COSIM_CPH_TEST_CASE_EVDO_TX_4,
   CL1_COSIM_CPH_TEST_CASE_SHDR_1,
   CL1_COSIM_CPH_TEST_CASE_EVDO_RX_4, /*PHY_UT_EVDO_FLBSRP_Dynamic_DRC_01_v6.2*/
   CL1_COSIM_CPH_TEST_CASE_EVDO_RX_5, /*PHY_UT_EVDO_FLBSRP_Dynamic_DRC_02_v6.2*/
   CL1_COSIM_CPH_TEST_CASE_EVDO_RX_6,/*PHY_UT_EVDO_FLBSRP_MultiPath_01_v6.2*/
   CL1_COSIM_CPH_TEST_CASE_EVDO_RX_7,/*PHY_UT_EVDO_FLBSRP_MultiPath_02_v6.2*/
   CL1_COSIM_CPH_TEST_CASE_RTT_G95_RX_1,
   CL1_COSIM_CPH_TEST_CASE_RTT_G95_DUMP_IQ,
   CL1_COSIM_CPH_TEST_CASE_RTT_G95_RX_QLIC,
   CL1_COSIM_CPH_TEST_CASE_RTT_G95_RX_QLIC_RC4,
   CL1_UT_MOD_CASE_INVALID
} Cl1UtModCaseIdT;

typedef enum
{
   CL1_UT_RLT_PASS,
   CL1_UT_RLT_FAIL
} Cl1UtRltT;

typedef struct
{
   Cl1UtModIdT      ModId;
   Cl1UtModCaseIdT  CaseId;   /* Case ID in module */
   kal_uint32       Reserved; /* Reserved */
} Cl1UtTrigCmdT;


typedef struct
{
   Cl1UtModIdT      ModId;
   Cl1UtModCaseIdT  CaseId;      /* Case ID in module */
   Cl1UtRltT        TestRlt;     /* TRUE: PASS, FALSE*/
} Cl1UtTrigCnfT;

typedef struct
{
   LOCAL_PARA_HDR
   Cl1UtTrigCmdT    Msg;
} Cl1UtTrigMsg_struct;

typedef struct
{
   LOCAL_PARA_HDR
   Cl1UtTrigCnfT    Msg;
} Cl1UtRltRptMsg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    kal_uint8                  tid;          /* tid is used by EAS to filter the measurement report from CAS, range: 0..255
                                                the CCELL_MEAS_IND corresponding to this CCELL_MEAS_REQ should return the same tid */
    cas_meas_type_enum     measType;    /* indicate the measurement type of this CCELL_MEAS_REQ
                                                - if 'RESEL' type is selected, the set of sectors indicated in this primitive should be a subset of the previously measured sectors
                                                - if 'CONNECTED' type is selected, it means EAS is in connected mode and requests CAS to do measurement
                                                  (in order to distinguish from HP/LP/RESEL modes which used in idle mode)
                                                - when this primitive is used to stop measurement, EAS should choose correct type to inform CAS which type of measurement should be stopped */
    kal_uint8                  measPeriod;  /* indicate the absolute measurement period used by C2K to report the measurement results to LTE
                                                this field is only valid if 'meas_type' = HP_MODE, represent in 'seconds' */
    kal_uint8                  bandNum;     /* indicate the number of measurement bands, range: 0..MAX_NUM_MEAS_C2K_BAND
                                                if band_num=0, CAS should stop the measurement specified in the 'meas_type' */
    cas_meas_band_info_struct  bandList[MAX_NUM_MEAS_C2K_BAND];  /* indicate the measurement information */

} //RmcIratmCcellMeasReqT;
evstandby_script_cell_meas_req_struct;

/*RMC_IRATM_ACQ_CGI_REQ*/
typedef struct
{
    LOCAL_PARA_HDR
    kal_uint8                 tid;                  /* tid is used for EAS to filter the corresponding CNF from CAS, range: 0..255
                                                       the EAS_REPORT_CGI_CNF corresponding to this EAS_REPORT_CGI_REQ should return the same tid */
    report_cgi_req_type_enum  reportCgiReqType;  /* identify the request for CGI report is started or stopped */
    kal_uint8                 band;                 /* indicate the band class of the measured frequency, range: 0..21 */
    kal_uint16                channel;              /* indicate the ARFCN of the measured frequency, range: 0..2047 */
    kal_uint8                 searchWinSize;      /* the search window size used by CDMA for the measurement, range: 0..15
                                                       it should be set according to the value defined in MeasObjectCDMA2000 */
    kal_uint16                pn;                   /* indicate the C2K cell which needs to acquire CGI */
} //RmcIratmAcqCgiReqT;
evstandby_script_acq_cgi_req_struct;

typedef enum {
    ATPAL_XL1_SEARCH_NULL,
    ATPAL_XL1_SEARCH_SUCCESS,
    ATPAL_XL1_SEARCH_NCOH_FAIL,
    ATPAL_XL1_SEARCH_COH_FAIL,
    ATPAL_XL1_SEARCH_FDS_FAIL_SUCCESS,
    ATPAL_XL1_SEARCH_FDS_FAIL_FAIL,
    ATPAL_XL1_AFLT_TEST_CASE_NSLT,
    ATPAL_XL1_AFLT_TEST_CASE_TRFC,
    ATPAL_XL1_SEARCH_NUM
}
atpal_xl1_search_case_enum;

typedef struct {
    LOCAL_PARA_HDR
    atpal_xl1_search_case_enum           SearchCase;
    kal_uint32                           case_info[8];
}
xl1_script_l1d_test_case_msg_struct;

#ifdef MTK_DEV_93M_PREIT
typedef struct
{
    LOCAL_PARA_HDR
    kal_bool   AfltTstFlag;
    kal_uint8  Aflt1xMode;
    kal_uint8  AfltChCntTest;
} 
xl1_L1d_Tst_Aflt_msg_struct;

#endif



typedef struct
{
    LOCAL_PARA_HDR
    kal_bool   CfsTstFlag;
} 
xl1_L1d_Tst_Cfs_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    kal_bool   DfsTstFlag;
} 
xl1_L1d_Tst_Dfs_msg_struct;


/*  ELT command temp */
/* MSG_ID_ELT_CLC_NST_CMD_MSG */
//#ifdef NWSIM_IT
typedef struct
{
   kal_bool   NstEvdoRev0;  /* EVDO Rev.0 NST */
   kal_bool   NstEvdoRevA;  /* EVDO Rev.A NST */
} ClcNstTstMsgT_IT;


/* MSG_ID_ELT_RUP_TCA_CMD_MSG */
/* CDMA Channel Record */

typedef struct
{
   kal_uint8             SysType;
   kal_uint8             BandClass;
   kal_uint16            Channel;
}ChanRecGT_IT;
//#endif

typedef struct
{
    kal_uint16       PilotPN;
    kal_uint8        SofterHandoff;
    kal_uint8        MACIndexLSBs;
    kal_uint8        DRCCover;
    kal_uint8        RABLength;
    kal_uint8        RABOffset;
} RupTchPilotRecT_IT;

typedef struct
{
    kal_uint8                  ChanInc;
    ChanRecGT_IT               Chan;
    kal_uint8                  FrameOffset;
    kal_uint8                  DRCLength;
    kal_uint8                  DRCChannelGainBase;
    kal_uint8                  ACKChannelGain;
    kal_uint8                  NumPilots;
    kal_uint8                  RAChannelGainInc;
    kal_uint8                  RAChannelGain[8];
    kal_uint8                  MACIndexMSBInc;
    kal_uint8                  MACIndexMSB[8];
    kal_uint8                  DSCChannelGainBase;
    kal_uint8                  DSC[8];
    RupTchPilotRecT_IT         PilotRec[8];
} EtsTcaMsgT_IT;


/* temp elt command for IT */
typedef struct
{
    LOCAL_PARA_HDR
} elt_clc_almp_rel_conn_cmd_msg_struct_it,elt_clc_almp_rel_conn_shdr_cmd_msg_struct_it;

typedef struct {
   kal_uint32 Reserved;
} IdpSlottedModeSetRspT_it;

typedef struct
{
    LOCAL_PARA_HDR
    IdpSlottedModeSetRspT_it msg;
} elt_clc_almp_rel_conn_rsp_msg_struct_it,elt_clc_almp_rel_conn_shdr_rsp_msg_struct_it;

typedef struct
{
   kal_uint8    RxDiversityCtrl;
} ClcDoRxDiversityCtrlMsgT_tmp;

typedef struct
{
    kal_int16 TestPn;
    kal_int8  DRCCover;          /* The target DRCCover */
    kal_int8  DSC;          /* The target DSCCover */
    kal_int8  PcgId;         /*The target PcgId*/  
}RcpCsmTestSwtichParamT_tmp;

typedef struct
{
    LOCAL_PARA_HDR
    ClcNstTstMsgT_IT msg;
} elt_clc_nst_cmd_msg_struct_it;

typedef struct
{
    LOCAL_PARA_HDR
} elt_clc_connreq_cmd_msg_struct_it;

/* RMC RUP Related */
typedef struct
{
    LOCAL_PARA_HDR
    EtsTcaMsgT_IT msg;
} elt_rup_tca_cmd_msg_struct_it;

typedef struct
{
    LOCAL_PARA_HDR
    ClcDoRxDiversityCtrlMsgT_tmp msg;
} elt_rmc_rx_div_ctrl_msg_struct_tmp;

typedef struct
{
    LOCAL_PARA_HDR
    RcpCsmTestSwtichParamT_tmp msg;
}elt_csm_test_cell_switch_msg_struct_tmp;


/** define RF platform information getting command structure */
typedef struct
{
    kal_uint32          Reserved;
} Cl1TstGetRfPlatInfoCmdT_tmp;

/** define RF platform information getting confirm structure */
typedef struct
{
    /* Request execute status */
    kal_uint32          Status;
} Cl1TstGetRfPlatInfoRspT_tmp;

/** define RFD test mode request structure */
typedef struct
{
    /** [in] - bit0: RX test mode
               bit1: TX test mode
               bit2: TRX test mode
    */
    kal_uint8           TstModeBmp;

    /* Reserved1 */
    kal_uint8           Reserved1;
    kal_uint16          Reserved2;

} Cl1TstRfdTestModeReqCmdT_tmp;

/** define RFD test mode confirm structure */
typedef struct
{
    /* Request execute status */
    kal_uint32          Status;
} Cl1TstRfdTestModeReqRspT_tmp;

/** define MIPI codeword setting command structure */
typedef struct
{
    kal_uint16          MipiPort;
    kal_uint16          Reserved;
    kal_uint32          MipiUsid;
    kal_uint32          MipiAddr;
    kal_uint32          MipiData;
} Cl1TstSetMipiCodeWordCmdT_tmp;

/** define MIPI codeword setting confirm structure */
typedef struct
{
    /* Request execute status */
    kal_uint32          Status;
} Cl1TstSetMipiCodeWordRspT_tmp;

/** define MIPI codeword getting command structure */
typedef struct
{
    kal_uint16          MipiPort;
    kal_uint16          Reserved;
    kal_uint32          MipiUsid;
    kal_uint32          MipiAddr;
} Cl1TstGetMipiCodeWordCmdT_tmp;

/** define MIPI codeword getting confirm structure */
typedef struct
{
    /* Request execute status */
    kal_uint32          Status;

    /* MIPI data */
    kal_uint32          MipiData;
} Cl1TstGetMipiCodeWordRspT_tmp;

/** define SPI data setting command structure */
typedef struct
{
    kal_uint16          SpiId;
    kal_uint16          Reserved;
    kal_uint32          SpiAddr;
    kal_uint32          SpiData;
} Cl1TstSetSpiDataCmdT_tmp;

/** define SPI data setting confirm structure */
typedef struct
{
    /* Request execute status */
    kal_uint32          Status;
} Cl1TstSetSpiDataRspT_tmp;

/** define SPI data getting command structure */
typedef struct
{
    kal_uint16          SpiId;
    kal_uint16          Reserved;
    kal_uint32          SpiAddr;
} Cl1TstGetSpiDataCmdT_tmp;

/** define SPI data getting confirm structure */
typedef struct
{
    /* Request execute status */
    kal_uint32          Status;

    /* SPI data */
    kal_uint32          SpiData;
} Cl1TstGetSpiDataRspT_tmp;

/** define RF transmitter control command structure */
typedef struct
{
    /* EVDO or 1xRTT*/
    kal_uint8           RfMode;

    /* Turn on or off action*/
    kal_uint8           Action;

    /* 0: signal tone for 1xRTT and EVDO
       1: reverse 1xRTT signal for 1xRTT
       2: reverse EVDO pilot only for EVDO
       3: reverse EVDO subtype2 for EVDO */
    kal_uint8           SigType;

    /* CDMA Band Class to turn on*/
    kal_uint8           BandClass;

    /* Channel Number to turn on*/
    kal_uint16          ChannelNum;

    /* Reserved */
    kal_uint16          Reserved1;

    /* Frequency offset for tone transmission */
    kal_uint32          FreqOffset;

    /* Only for RTT */
    kal_uint8           RevRc;

    /* Only for RTT */
    kal_uint8           ChnType;
    /* Only for RTT */
    kal_uint8           FchRate;
    /* Only for RTT */
    kal_uint8           SchRate;

    /* Only for RTT */
    kal_uint16          GatePat; //GateOn/Off pattern

    /* Only for RTT */
    kal_uint16          FpcPat;  //FPC pattern

    /* Only for RTT */
    kal_uint16          TxPreamble;

    /* Only for RTT */
    kal_uint16          LcmLow;

    /* Only for RTT */
    kal_uint16          SchWc;   //Walsh code for SCH channel

    /* Only for RTT */
    kal_uint16          RaDly;   //RA chip delay for access transmission

    /* Only for RTT */
    kal_uint16          TurboEn;  //Indicate Turbo or CC encode for SCH channel
    kal_uint16          Reserved2;
} Cl1TstTransmitCtrlCmdT_tmp;

typedef struct
{
    Cl1TstTransmitCtrlCmdT_tmp Msg;
    kal_uint16          EvChannelType;
    kal_uint16          EvProtocolSubtype;
    kal_uint16          EvAuxPilotMiniPayload;
    kal_uint16          EvDrcGating;
    kal_uint16          EvDrcBoostLength;
    kal_uint16          EvDscBoostLength;
    kal_uint16          EvDrcLength;
    kal_uint16          EvFrameOffset;
    /*subype0:0,0,1:9.6K,2:19.2k,3:38.4k,4:76.8k, 5:153.6 */
    kal_uint16          EvDataRate;
    kal_uint16          EvDRCCover;
    kal_uint16          EvDRCCover1;
    kal_uint16          EvDRCCover2;
    kal_uint16          EvDRCValue;
    kal_uint16          EvDRCValue1;
    kal_uint16          EvDSCValue;
    kal_uint16          EvDSCValue1;
    kal_uint16          EvDSCValue2;
    kal_uint16          EvAckEnalble;
    kal_uint16          EvAckUserType;
    kal_uint16          EvAckBits;
    kal_uint16          EvAckBits1;
    kal_uint16          EvAckSuScale;
    kal_uint16          EvAckMuScale;
    kal_uint16          EvPreSlot;
    kal_uint16          EvCapFrame;

    kal_uint16          Reserved2;
} Cl1TstTransmitCtrlCmdPhyUT_tmp;

/** define RF transmitter control confirm structure */
typedef struct
{
    /* Request execute status */
    kal_uint32          Status;
} Cl1TstTransmitCtrlRspT_tmp;

/** define RF receive control command structure */
typedef struct
{
    /* EVDO or 1xRTT, EVDO for CAL*/
    kal_uint8           RfMode;

    /* Turn on/off Rx path*/
    kal_uint8           Action;

    /* bit0 for Main, bit1 for Div, bit2 for SHDR */
    kal_uint8           PathBitmap;

    /* Band Class to turn on*/
    kal_uint8           BandClass;

    /* Channel number to turn on*/
    kal_uint16          ChannelNum;

    /* Reserved */
    kal_uint16          Reserved;

} Cl1TstReceiveCtrlCmdT_tmp;

/** define RF receive control confirm structure */
typedef struct
{
    /* Request execute status */
    kal_uint32          Status;
} Cl1TstReceiveCtrlRspT_tmp;

/** define AFC configure command structure */
typedef struct
{
    /* Manual for auto mode*/
    kal_uint8           CtrlMode;

    /* Cap Id valid indication*/
    kal_uint8           CapIdValid;

    /* Cap Id*/
    kal_uint16          CapId;

    /* Reserved */
    kal_uint8           Reserved;

    /* AFC DAC valid indication*/
    kal_uint8           DacValid;

    /*AFC DAC value*/
    kal_uint16          DacValue;
} Cl1TstAfcConfigCmdT_tmp;

/** define AFC configure confirm structure */
typedef struct
{
    /* Request execute status */
    kal_uint32          Status;
} Cl1TstAfcConfigRspT_tmp;

/** define Tx AGC configuration command structure for RF test and traditional calibration */
typedef struct
{
    /* EVDO or 1xRTT*/
    kal_uint8           RfMode;

    /* 0: APT mode, 1: DPD mode */
    kal_uint8           PaType;

    /* 0: fix power 1: manual mode */
    kal_uint8           CtrlMode;

    /* ILPC enable or disable */
    kal_uint8           IlpcEnable;

    /* PA table index */
    kal_uint8           PaTblIdx;

    /* PA mode, 0: high, 1: middle, 2: low */
    kal_uint8           PaMode;

    /* Tx Power in dBm, Q5*/
    kal_int16           TxPwr;

    /* PA gain, Q5 dBm */
    kal_int16           PaGain;

    /* Coupler loss, Q5 dB */
    kal_int16           CpLoss;

    /* AM */
    kal_int16           Am;

    /* PM */
    kal_int16           Pm;

    /* 0/1*/
    kal_uint8           Vm1;

    /*0/1*/
    kal_uint8           Vm2;

    /* voltage, in unit of mV*/
    kal_uint16          Vcc;

} Cl1TstTxAgcConfigCmdT_tmp;

/** define Tx AGC configuration confirm structure for RF test and traditional calibration */
typedef struct
{
    /* Request execute status */
    kal_uint32          Status;
} Cl1TstTxAgcConfigRspT_tmp;

/** define DDPC result getting command structure */
typedef struct
{
    kal_uint8           Reserved;
} Cl1TstTxPowerQueryCmdT_tmp;

/** define DDPC result getting confirm structure */
typedef struct
{
    /* Request execute status */
    kal_uint32          Status;

    /* Tx power, unit is Q5 dBm */
    kal_int16           Power;
    kal_int16           Reserved;
} Cl1TstTxPowerQueryRspT_tmp;

/** define Rx AGC configuration command structure for RF test and traditional calibration */
typedef struct
{
    /* 0: 1xRTT, 1: EVDO */
    kal_uint8           RfMode;

    /* Bit0: main antenna, Bit1: diversity antenna, Bit2: SHDR */
    kal_uint8           PathBitMap;

    /* 0: Auto, 1: Manual for calibration and test, 2: RSSI scan */
    kal_uint8           CtrlMode;

    /* 0: high power mode, 1: low power mode */
    kal_uint8           PwrMode;

    /* 0: stage 0, 1: stage 1....5: stage 5 */
    kal_uint8           LnaMode;

    /* Reserved */
    kal_uint8           Reserved1;

    /* Reserved */
    kal_uint16          Reserved2;

} Cl1TstRxAgcConfigCmdT_tmp;

/** define Rx AGC configuration confirm structure for RF test and traditional calibration */
typedef struct
{
    /* Request execute status */
    kal_uint32          Status;
} Cl1TstRxAgcConfigRspT_tmp;

/** define RSSI query command structure */
typedef struct
{
    /* 0: 1xRTT, 1: EVDO */
    kal_uint8           RfMode;

    /* Bit0: main antenna, Bit1: diversity antenna, Bit2: SHDR */
    kal_uint8           PathBitMap;

    /* Reserved */
    kal_uint16          Reserved;
} Cl1TstRxRssiQueryCmdT_tmp;

/** define RSSI query confirm structure */
typedef struct
{
    /* Request execute status */
    kal_uint32          Status;

    /* Main antenna Rx power, unit is Q5 dBm */
    kal_int16           RxMainPower;

    /* Diversity antenna Rx power, unit is Q5 dBm */
    kal_int16           RxDivPower;

} Cl1TstRxRssiQueryRspT_tmp;

/** define SNR query command structure */
typedef struct
{
    /* 0: 1xRTT, 1: EVDO */
    kal_uint8           RfMode;

    /* Bit0: main antenna, Bit1: diversity antenna, Bit2: SHDR */
    kal_uint8           PathBitMap;
} Cl1TstRxSnrQueryCmdT_tmp;

/** define SNR query confirm structure */
typedef struct
{
    /* Request execute status */
    kal_uint32          Status;

    /* Main antenna Rx SNR, unit is Q5 dBm */
    kal_int16           RxMainAntSnr;

    /* Diversity antenna Rx Snr, unit is Q5 dBm */
    kal_int16           RxDivAntSnr;

} Cl1TstRxSnrQueryRspT_tmp;

/** define Ec/Io query command structure */
typedef struct
{
    /* 0: 1xRTT, 1: EVDO */
    kal_uint8           RfMode;

    /* Bit0: main antenna, Bit1: diversity antenna, Bit2: SHDR */
    kal_uint8           PathBitMap;
} Cl1TstRxEcIoQueryCmdT_tmp;

/** define Ec/Io query confirm structure */
typedef struct
{
    /* Request execute status */
    kal_uint32          Status;

    /* Main antenna Rx EcIo, unit is Q5 dBm */
    kal_int16           RxMainAntEcIo;

    /* Diversity antenna Rx EcIo, unit is Q5 dBm */
    kal_int16           RxDivAntEcIo;

} Cl1TstRxEcIoQueryRspT_tmp;

/** define AFC calibration data structure */
typedef struct
{
    kal_uint16  init_dac;
    kal_int16  slope;
    kal_uint16  cap_id;
    kal_uint16  Reserved;
    
} Cl1TstAfcCalDataT_tmp;

/** define AFC calibration data setting command structure */
typedef struct
{
    /* update NVRAM flag, 0: do not update, 1: update */
    kal_uint8           UpdateNvram;

    /* Reserved */
    kal_uint8           Reserved1;

    /* Reserved */
    kal_uint16          Reserved2;

    /* AFC calibration data */
    Cl1TstAfcCalDataT_tmp   AfcCalData;

} Cl1TstAfcCalDataSetCmdT_tmp;

/** define AFC calibration data setting confirm structure */
typedef struct
{
    /* Request execute status */
    kal_uint32          Status;
} Cl1TstAfcCalDataSetRspT_tmp;

/** define AFC calibration data getting command structure */
typedef struct
{
    kal_uint32          Reserved;
} Cl1TstAfcCalDataGetCmdT_tmp;

/** define AFC calibration data getting confirm structure */
typedef struct
{
    /* Request execute status */
    kal_uint32              Status;

    /* AFC calibration data */
    Cl1TstAfcCalDataT_tmp   AfcCalData;

} Cl1TstAfcCalDataGetRspT_tmp;

/*temperature and frequency compensation parameter */
typedef struct{
    kal_int16 TemFreqComp[8][16];/*TEMP:8; FREQ:15 */
}CL1D_RF_TEMP_FREQ_COMP_DATA_T_tmp;

typedef struct{
    kal_int8 TemCelsius[8];/*TEMP:8 */
    kal_uint16 ChanNum[16];/*FREQ:15 */
    CL1D_RF_TEMP_FREQ_COMP_DATA_T_tmp RxPathLossFreqComp[8];/*LNA:8 */
}CL1D_RF_RX_PATH_LOSS_COMP_T_tmp;

/** define Rx calibration data structure */
typedef struct
{
    /* High power mode path loss */
    /* LID NVRAM_EF_CL1_MAIN_RX_PATH_LOSS_HPM_BAND_X_LID */
    CL1D_RF_RX_PATH_LOSS_COMP_T_tmp RxPLossHPM;

    /* Low power mode path loss */
    /* LID:NVRAM_EF_CL1_MAIN_RX_PATH_LOSS_LPM_BAND_X_LID */
    CL1D_RF_RX_PATH_LOSS_COMP_T_tmp RxPLossLPM;
} Cl1TstRxCalDataT_tmp;


/** define Rx calibration data setting command structure */
typedef struct
{
    /* update NVRAM flag, 0: do not update, 1: update */
    kal_uint8           UpdateNvram;

    /* CDMA Band Class to turn on */
    kal_uint8           BandClass;

    /* path bitmap, bit0--main, bit1--diversity, bit2--SHDR */
    kal_uint8           PathBmp;

    /* Reserved */
    kal_uint8           Reserved;

    /* Rx calibration data */
    Cl1TstRxCalDataT_tmp  RxCalData;

} Cl1TstRxCalDataSetCmdT_tmp;

/** define Rx calibration data setting confirm structure */
typedef struct
{
    /* Request execute status */
    kal_uint32          Status;
} Cl1TstRxCalDataSetRspT_tmp;

/** define Rx calibration data getting command structure */
typedef struct
{
    /* CDMA Band Class to turn on*/
    kal_uint8           BandClass;

    /* path bitmap, bit0--main, bit1--diversity, bit2--SHDR */
    kal_uint8           PathBmp;

    /* Reserved */
    kal_uint16          Reserved;

} Cl1TstRxCalDataGetCmdT_tmp;

/** define Rx calibration data getting confirm structure */
typedef struct
{
    /* Request execute status */
    kal_uint32          Status;

    /* Rx calibration data */
    Cl1TstRxCalDataT_tmp    RxCalData;

} Cl1TstRxCalDataGetRspT_tmp;

/*PA Context Data */
typedef struct{
    /** The reference power, in 1/32 dBm. */
    kal_int16       refPwr;
    /** The reference power output PA without feq/temp compensation, in 1/32 dBm. */
    kal_int16       paGain;
    /** The PA mode info.*/
    kal_uint16      paMode;
    /** The PA control RFGPOs level */
    ///TODO: Below 3 parameter not used
    kal_uint16      paVm0;
    kal_uint16      paVm1;
    /** PA BUCK supply voltage level, unit is mv*/
    kal_uint16      paVdd;
}CL1D_RF_PA_CONTEXT_T_tmp;

typedef struct{
    kal_int16 HighSwitchThresh;/* Tx power for L2M or M2H, unit is 1/32dBm (Q5)*/
    kal_int16 LowSwitchThresh;/* Tx power for H2M or M2L, unit is 1/32dBm (Q5)*/
}CL1D_RF_TX_PA_HYST_DATA_T_tmp;

typedef struct
{
    kal_int32 PaCalSectionNum;
    CL1D_RF_PA_CONTEXT_T_tmp TxPwrPaContext[8];/*PA Gain:8 */
    CL1D_RF_TX_PA_HYST_DATA_T_tmp TxHyst[3-1];/*Hyst Region */
    kal_int16 paPhaseJumpComp[3];/*PA mode:3 */
	kal_int16 reserve;
}CL1D_RF_TX_APT_PA_CONTEXT_T_tmp;

/*APT PA Gain Data */
typedef struct{
    kal_int8 TemCelsius[8];/*TEMP:8 */
    kal_uint16 ChanNum[16];/*FREQ:15 */
    CL1D_RF_TEMP_FREQ_COMP_DATA_T_tmp TxPwrPaGainComp[8];/*PA Gain:8 */
}CL1D_RF_TX_APT_PA_GAIN_COMP_T_tmp;

/*DET Compensation Data */
typedef struct{
    kal_int8 TemCelsius[8];/*TEMP:8 */
    kal_uint16 ChanNum[16];/*FREQ:15 */
    CL1D_RF_TEMP_FREQ_COMP_DATA_T_tmp TxPdetCouplerGainComp[3];/*PA mode:3 */
}CL1D_RF_DET_COUPLE_LOSS_COMP_T_tmp;

/*DET Couper Loss Data */
typedef struct{
    kal_int16 CouplerGain[3];/*PA mode:3 */
}CL1D_RF_DET_COUPLE_LOSS_T_tmp;

/** define Tx calibration data structure */
typedef struct
{
    /* PA context */
    /* LID:NVRAM_EF_CL1_TX_APT_PA_CONTEXT_XX_BAND_X_LID */
    CL1D_RF_TX_APT_PA_CONTEXT_T_tmp     TxAptPaCtx;

    /* PA gain temperature and frequency compensation, Q5 dB */
    /* LID:NVRAM_EF_CL1_TX_APT_PA_GAIN_COMP_XX_BAND_X_LID */
    CL1D_RF_TX_APT_PA_GAIN_COMP_T_tmp   TxAptPaGainComp;

    /* Coupler loss temperature and frequency compensation, Q5 dB */
    /* LID:NVRAM_EF_CL1_DET_COUPLE_LOSS_COMP_XX_BAND_X_LID */
    CL1D_RF_DET_COUPLE_LOSS_COMP_T_tmp  CplLossComp;

    /* Coupler loss, Q5 dB */
    /* LID:NVRAM_EF_CL1_DET_COUPLE_LOSS_XX_BAND_X_LID */
    CL1D_RF_DET_COUPLE_LOSS_T_tmp       CplLoss;

    /* Reserved */
    kal_uint16                      Reserved;

} Cl1TstTxCalDataT_tmp;

/** define Tx calibration data setting command structure */
typedef struct
{
    /* update NVRAM flag, 0: do not update, 1: update */
    kal_uint8           UpdateNvram;

    /* RF mode, 0: 1xRTT, 1: EVDO */
    kal_uint8           RfMode;

    /* CDMA Band Class to turn on*/
    kal_uint8           BandClass;

    /* Reserved */
    kal_uint8           Reserved;

    /* Tx calibration data */
    Cl1TstTxCalDataT_tmp    TxCalData;

} Cl1TstTxCalDataSetCmdT_tmp;

/** define Tx calibration data setting confirm structure */
typedef struct
{
    /* Request execute status */
    kal_uint32          Status;
} Cl1TstTxCalDataSetRspT_tmp;

/** define Tx calibration data getting command structure */
typedef struct
{
    /* RF mode, 0: 1xRTT, 1: EVDO */
    kal_uint8           RfMode;

    /* CDMA Band Class to turn on*/
    kal_uint8           BandClass;

    /* Reserved */
    kal_uint16          Reserved;

} Cl1TstTxCalDataGetCmdT_tmp;

/** define Tx calibration data getting confirm structure */
typedef struct
{
    /* Request execute status */
    kal_uint32          Status;

    /* Tx calibration data */
    Cl1TstTxCalDataT_tmp    TxCalData;

} Cl1TstTxCalDataGetRspT_tmp;

/** define FHC start common data structure */
typedef struct
{
    /* Tx RX delay for FHC, unit us (> 10us) */
    kal_uint16          TxRxDelay;

    /* Tx step length, unit us (>= 1000us and <= 20000 us) */
    kal_uint16          TxStepLength;

    /* Tx retune length, unit us (>= 500us) */
    kal_uint16          TxRetuLength;

    /* RF mode switch length, unit us, the integer multiple of step length */
    kal_uint16          RfMSwhLength;

    /* Rx step length, unit us (>= 1000us and <= 20000 us) */
    kal_uint16          RxStepLength;

    /* Rx retune length, unit us (>= 500us) */
    kal_uint16          RxRetuLength;

} Cl1TstFhcCommonT_tmp;

/** define Tx calibration element structure */
typedef struct
{
    /* RF mode, 0: 1xRTT, 1: EVDO */
    kal_uint8           RfMode;

    /* Step indication, 0: next step is normal step,
                        1: next step is retune step,
                        2: the current step is the last step,
                        3: next step is RF mode switch step
    */
    kal_uint8           StepInd;

    /* CDMA band class */
    kal_uint8           BandClass;

    /* Reserved */
    kal_uint8           Reserved;

    /* CDMA channel */
    kal_uint16          ChanNum;

    /* RF calibration power points, dBm, Q5 */
    kal_int16           TxPwr;

} Cl1TstFhcTxElementT_tmp;

/** define Rx calibration element structure */
typedef struct
{
    /* Step indication, 0: next step is normal step,
                        1: next step is retune step,
                        2: the current step is the last step
    */
    kal_uint8           StepInd;

    /* CDMA band class */
    kal_uint8           BandClass;

    /* CDMA channel */
    kal_uint16          ChanNum;

    /* Bit0: main antenna, Bit1: diversity antenna, Bit2: SHDR */
    kal_uint8           PathBitmap;

    /* Power mode, 0: high power mode, 1: low power mode */
    kal_uint8           PwrMode;

    /* LNA mode, 0~7 */
    kal_uint8           LnaMode;

    /* Reserved */
    kal_uint8           Reserved;

} Cl1TstFhcRxElementT_tmp;

/** define FHC calibration start command structure */
typedef struct
{
    /* FHC calibration common data */
    Cl1TstFhcCommonT_tmp    CommonData;

    /* Reserved */
    kal_uint16          Reserved1;

    /* Tx calibration elements number (1~1000) */
    kal_uint16          TxElementNum;

    /* Tx calibration elements */
    Cl1TstFhcTxElementT_tmp TxElement[1000];

    /* Reserved */
    kal_uint16          Reserved2;

    /* Rx calibration elements number (1~1000) */
    kal_uint16          RxElementNum;

    /* Rx calibration elements */
    Cl1TstFhcRxElementT_tmp RxElement[1000];

} Cl1TstFhcStartCmdT_tmp;

/** define FHC report result structure */
typedef struct
{
    /* power detect result number */
    kal_uint16          PdetNum;

    /* RSSI number */
    kal_uint16          RssiNum;

    /* power detect result, unit is Q5 dBm */
    kal_int16           Pdet[1000];

    /* Main antenna RSSI, unit is Q5 dBm */
    kal_int16           RssiMain[1000];

    /* Diversity antenna RSSI, unit is Q5 dBm */
    kal_int16           RssiDiv[1000];
} Cl1TstFhcRptDataT_tmp;

/** define FHC calibration start confirm structure */
typedef struct
{
    /* Request execute status */
    kal_uint32              Status;

    /* FHC report result */
    Cl1TstFhcRptDataT_tmp   RptData;
} Cl1TstFhcStartRspT_tmp;

typedef struct
{
    kal_uint32       Result;
}ResultCheckRespT_tmp;

/** MSG_ID_ELT_RESULT_CHECK_RESP_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    ResultCheckRespT_tmp Msg;
} elt_result_check_resp_msg_struct_tmp;

typedef struct
{
    kal_uint32 TxCrpCrcRslt;
}L1dTxResultsT_tmp;

/* MSG_ID_UTS_L1D_TX_RESULTS_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    L1dTxResultsT_tmp msg;
} uts_l1d_tx_results_msg_struct_tmp;
typedef enum
{
    CL1TST_REQ_SUCCESS_tmp,
    CL1TST_REQ_FAILURE_tmp,
    CL1TST_REQ_NOT_SUPPORT_tmp,
    CL1TST_REQ_INVALID_tmp = 0xFFFFFFFF
} Cl1TstReqStatusE_tmp;

typedef struct
{
    /* Request execute status */
    Cl1TstReqStatusE_tmp        Status;
} Cl1TstRxAntennaTestModeRspT_tmp;

/** define Get RF plat info command ELT msg */
/** MSG_ID_ELT_GET_RF_PLAT_INFO_CMD_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    Cl1TstGetRfPlatInfoCmdT_tmp Msg;
} elt_get_rf_plat_info_cmd_msg_struct_tmp;

/** define Get RF plat info response ELT msg */
/** MSG_ID_ELT_GET_RF_PLAT_INFO_RSP_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    Cl1TstGetRfPlatInfoRspT_tmp Msg;
} elt_get_rf_plat_info_rsp_msg_struct_tmp;

/** define RFD test mode req command ELT msg */
/** MSG_ID_ELT_RFD_TEST_MODE_REQ_CMD_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    Cl1TstRfdTestModeReqCmdT_tmp Msg;
} elt_rfd_test_mode_req_cmd_msg_struct_tmp;

/** define RFD test mode req response ELT msg */
/** MSG_ID_ELT_RFD_TEST_MODE_REQ_RSP_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    Cl1TstRfdTestModeReqRspT_tmp Msg;
} elt_rfd_test_mode_req_rsp_msg_struct_tmp;

/** define Set MIPI code word command ELT msg */
/** MSG_ID_ELT_SET_MIPI_CW_CMD_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    Cl1TstSetMipiCodeWordCmdT_tmp Msg;
} elt_set_mipi_cw_cmd_msg_struct_tmp;

/** define Set MIPI code word response ELT msg */
/** MSG_ID_ELT_SET_MIPI_CW_RSP_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    Cl1TstSetMipiCodeWordRspT_tmp Msg;
} elt_set_mipi_cw_rsp_msg_struct_tmp;

/** define Get MIPI code word command ELT msg */
/** MSG_ID_ELT_GET_MIPI_CW_CMD_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    Cl1TstGetMipiCodeWordCmdT_tmp Msg;
} elt_get_mipi_cw_cmd_msg_struct_tmp;

/** define Get MIPI code word response ELT msg */
/** MSG_ID_ELT_GET_MIPI_CW_RSP_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    Cl1TstGetMipiCodeWordRspT_tmp Msg;
} elt_get_mipi_cw_rsp_msg_struct_tmp;

/** define Set SPI data command ELT msg */
/** MSG_ID_ELT_SET_SPI_DATA_CMD_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    Cl1TstSetSpiDataCmdT_tmp Msg;
} elt_set_spi_data_cmd_msg_struct_tmp;

/** define Set SPI data response ELT msg */
/** MSG_ID_ELT_SET_SPI_DATA_RSP_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    Cl1TstSetSpiDataRspT_tmp Msg;
} elt_set_spi_data_rsp_msg_struct_tmp;

/** define Get SPI data command ELT msg */
/** MSG_ID_ELT_GET_SPI_DATA_CMD_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    Cl1TstGetSpiDataCmdT_tmp Msg;
} elt_get_spi_data_cmd_msg_struct_tmp;

/** define Get SPI data response ELT msg */
/** MSG_ID_ELT_GET_SPI_DATA_RSP_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    Cl1TstGetSpiDataRspT_tmp Msg;
} elt_get_spi_data_rsp_msg_struct_tmp;

/** define transmit ctrl command ELT msg */
/** MSG_ID_ELT_TRANSMIT_CTRL_CMD_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    Cl1TstTransmitCtrlCmdT_tmp Msg;
} elt_transmit_ctrl_cmd_msg_struct_tmp;


/** MSG_ID_ELT_TRANSMIT_CTRL_CMD_PHYUT_MSG*/
typedef struct
{
    LOCAL_PARA_HDR
    Cl1TstTransmitCtrlCmdPhyUT_tmp MsgphyUT;
} elt_transmit_ctrl_cmd_phyut_msg_struct_tmp;

/** define transmit ctrl response ELT msg */
/** MSG_ID_ELT_TRANSMIT_CTRL_RSP_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    Cl1TstTransmitCtrlRspT_tmp Msg;
} elt_transmit_ctrl_rsp_msg_struct_tmp;

/** define receive ctrl command ELT msg */
/** MSG_ID_ELT_RECEIVE_CTRL_CMD_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    Cl1TstReceiveCtrlCmdT_tmp Msg;
} elt_receive_ctrl_cmd_msg_struct_tmp;

/** define receive ctrl response ELT msg */
/** MSG_ID_ELT_RECEIVE_CTRL_RSP_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    Cl1TstReceiveCtrlRspT_tmp Msg;
} elt_receive_ctrl_rsp_msg_struct_tmp;

/** define AFC config command ELT msg */
/** MSG_ID_ELT_AFC_CONFIG_CMD_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    Cl1TstAfcConfigCmdT_tmp Msg;
} elt_afc_config_cmd_msg_struct_tmp;

/** define AFC config response ELT msg */
/** MSG_ID_ELT_AFC_CONFIG_RSP_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    Cl1TstAfcConfigRspT_tmp Msg;
} elt_afc_config_rsp_msg_struct_tmp;

/** define Tx AGC config command ELT msg */
/** MSG_ID_ELT_TX_AGC_CONFIG_CMD_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    Cl1TstTxAgcConfigCmdT_tmp Msg;
} elt_tx_agc_config_cmd_msg_struct_tmp;

/** define Tx AGC config response ELT msg */
/** MSG_ID_ELT_TX_AGC_CONFIG_RSP_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    Cl1TstTxAgcConfigRspT_tmp Msg;
} elt_tx_agc_config_rsp_msg_struct_tmp;

/** define Get Tx power command ELT msg */
/** MSG_ID_ELT_TX_POWER_QUERY_CMD_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    Cl1TstTxPowerQueryCmdT_tmp Msg;
} elt_tx_power_query_cmd_msg_struct_tmp;

/** define Get Tx power response ELT msg */
/** MSG_ID_ELT_TX_POWER_QUERY_RSP_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    Cl1TstTxPowerQueryRspT_tmp Msg;
} elt_tx_power_query_rsp_msg_struct_tmp;

/** define Rx AGC config command ELT msg */
/** MSG_ID_ELT_RX_AGC_CONFIG_CMD_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    Cl1TstRxAgcConfigCmdT_tmp Msg;
} elt_rx_agc_config_cmd_msg_struct_tmp;

/** define Rx AGC config response ELT msg */
/** MSG_ID_ELT_RX_AGC_CONFIG_RSP_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    Cl1TstRxAgcConfigRspT_tmp Msg;
} elt_rx_agc_config_rsp_msg_struct_tmp;

/** define Get RSSI command ELT msg */
/** MSG_ID_ELT_RX_RSSI_QUERY_CMD_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    Cl1TstRxRssiQueryCmdT_tmp Msg;
} elt_rx_rssi_query_cmd_msg_struct_tmp;

/** define Get RSSI response ELT msg */
/** MSG_ID_ELT_RX_RSSI_QUERY_RSP_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    Cl1TstRxRssiQueryRspT_tmp Msg;
} elt_rx_rssi_query_rsp_msg_struct_tmp;

/** define Get SNR command ELT msg */
/** MSG_ID_ELT_RX_SNR_QUERY_CMD_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    Cl1TstRxSnrQueryCmdT_tmp Msg;
} elt_rx_snr_query_cmd_msg_struct_tmp;

/** define Get SNR command ELT msg */
/** MSG_ID_ELT_RX_SNR_QUERY_RSP_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    Cl1TstRxSnrQueryRspT_tmp Msg;
} elt_rx_snr_query_rsp_msg_struct_tmp;

/** define Get Ec/Io command ELT msg */
/** MSG_ID_ELT_RX_EC_IO_QUERY_CMD_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    Cl1TstRxEcIoQueryCmdT_tmp Msg;
} elt_rx_ec_io_query_cmd_msg_struct_tmp;

/** define Get Ec/Io command ELT msg */
/** MSG_ID_ELT_RX_EC_IO_QUERY_RSP_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    Cl1TstRxEcIoQueryRspT_tmp Msg;
} elt_rx_ec_io_query_rsp_msg_struct_tmp;

/** define Set AFC data command ELT msg */
/** MSG_ID_ELT_AFC_CAL_DATA_SET_CMD_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    Cl1TstAfcCalDataSetCmdT_tmp Msg;
} elt_afc_cal_data_set_cmd_msg_struct_tmp;

/** define Set AFC data response ELT msg */
/** MSG_ID_ELT_AFC_CAL_DATA_SET_RSP_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    Cl1TstAfcCalDataSetRspT_tmp Msg;
} elt_afc_cal_data_set_rsp_msg_struct_tmp;

/** define Get AFC data command ELT msg */
/** MSG_ID_ELT_AFC_CAL_DATA_GET_CMD_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    Cl1TstAfcCalDataGetCmdT_tmp Msg;
} elt_afc_cal_data_get_cmd_msg_struct_tmp;

/** define Get AFC data response ELT msg */
/** MSG_ID_ELT_AFC_CAL_DATA_GET_RSP_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    Cl1TstAfcCalDataGetRspT_tmp Msg;
} elt_afc_cal_data_get_rsp_msg_struct_tmp;

/** define Set RX calibration data command ELT msg */
/** MSG_ID_ELT_RX_CAL_DATA_SET_CMD_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    Cl1TstRxCalDataSetCmdT_tmp Msg;
} elt_rx_cal_data_set_cmd_msg_struct_tmp;

/** define Set RX calibration data response ELT msg */
/** MSG_ID_ELT_RX_CAL_DATA_SET_RSP_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    Cl1TstRxCalDataSetRspT_tmp Msg;
} elt_rx_cal_data_set_rsp_msg_struct_tmp;

/** define Get RX calibration data command ELT msg */
/** MSG_ID_ELT_RX_CAL_DATA_GET_CMD_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    Cl1TstRxCalDataGetCmdT_tmp Msg;
} elt_rx_cal_data_get_cmd_msg_struct_tmp;

/** define Get RX calibration data response ELT msg */
/** MSG_ID_ELT_RX_CAL_DATA_GET_RSP_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    Cl1TstRxCalDataGetRspT_tmp Msg;
} elt_rx_cal_data_get_rsp_msg_struct_tmp;

/** define Set TX calibration data command ELT msg */
/** MSG_ID_ELT_TX_CAL_DATA_SET_CMD_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    Cl1TstTxCalDataSetCmdT_tmp Msg;
} elt_tx_cal_data_set_cmd_msg_struct_tmp;

/** define Set TX calibration data response ELT msg */
/** MSG_ID_ELT_TX_CAL_DATA_SET_RSP_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    Cl1TstTxCalDataSetRspT_tmp Msg;
} elt_tx_cal_data_set_rsp_msg_struct_tmp;

/** define Get TX calibration data command ELT msg */
/** MSG_ID_ELT_TX_CAL_DATA_GET_CMD_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    Cl1TstTxCalDataGetCmdT_tmp Msg;
} elt_tx_cal_data_get_cmd_msg_struct_tmp;

/** define Get TX calibration data response ELT msg */
/** MSG_ID_ELT_TX_CAL_DATA_GET_RSP_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    Cl1TstTxCalDataGetRspT_tmp Msg;
} elt_tx_cal_data_get_rsp_msg_struct_tmp;

/** define FHC command ELT msg */
/** MSG_ID_ELT_FHC_START_CMD_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    Cl1TstFhcStartCmdT_tmp Msg;
} elt_fhc_start_cmd_msg_struct_tmp;

/** define FHC response ELT msg */
/** MSG_ID_ELT_FHC_START_RSP_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    Cl1TstFhcStartRspT_tmp Msg;
} elt_fhc_start_rsp_msg_struct_tmp;

/** define temperature back off data structure */
typedef struct
{
    kal_uint8           Band;
    kal_int8            Temperature;
    kal_int16           BackOff;
} Cl1TstTempBackOffT_tmp;

/** define temperature back off set command structure */
typedef struct
{
    Cl1TstTempBackOffT_tmp  BackOffData;
} Cl1TstTempBackOffSetCmdT_tmp;

/** define temperature backoff set cmd ELT msg */
/** MSG_ID_ELT_TEMP_BACKOFF_SET_CMD_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    Cl1TstTempBackOffSetCmdT_tmp Msg;
} elt_temp_backoff_set_cmd_msg_struct_tmp;

/** define temperature back off set response structure */
typedef struct
{
    /* Request execute status */
    kal_uint32          Status;
} Cl1TstTempBackOffSetRspT_tmp;

/** define temperature backoff set rsp ELT msg */
/** MSG_ID_ELT_TEMP_BACKOFF_SET_RSP_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    Cl1TstTempBackOffSetRspT_tmp Msg;
} elt_temp_backoff_set_rsp_msg_struct_tmp;

/** define temperature back off get command structure */
typedef struct
{
    /* band class */
    kal_uint8           Band;
    kal_uint8           Reserved1;
    kal_uint16          Reserved2;
} Cl1TstTempBackOffGetCmdT_tmp;

/** define temperature backoff get cmd ELT msg */
/** MSG_ID_ELT_TEMP_BACKOFF_GET_CMD_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    Cl1TstTempBackOffGetCmdT_tmp Msg;
} elt_temp_backoff_get_cmd_msg_struct_tmp;

/** define temperature back off get response structure */
typedef struct
{
    /* Request execute status */
    kal_uint32          Status;

    /* Back off data */
    Cl1TstTempBackOffT_tmp  BackOffData;
} Cl1TstTempBackOffGetRspT_tmp;

/** define temperature backoff get rsp ELT msg */
/** MSG_ID_ELT_TEMP_BACKOFF_GET_RSP_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    Cl1TstTempBackOffGetRspT_tmp Msg;
} elt_temp_backoff_get_rsp_msg_struct_tmp;

typedef struct
{
    /* TX AGC control type,
       0: stop sw txagc,
       1: start sw txagc,
       2: obtain current request power */
    kal_uint8               CtrlType;

    /* Tx slot */
    kal_uint8               TxSlot;

    /* Access/ Traffic channel */
    kal_uint8               ChanType;

    /* PHY subtype */
    kal_uint8               PhySubType;

    /* Power reference used for open loop estimation in 1/64dBm@S9.6 unit.*/
    kal_int16               PowerBase; /* Q6 dB */

    /* Bit0: trans ind TRUE/FALSE,
       Bit4: Close loop parameters enable/disable */
    kal_uint16              TestBmp;

    /* close loop step up size in 1/64dB@S2.6 unit */
    kal_int16               ClStepUp;

    /* close loop step down size in 1/64dB@S2.6 unit */
    kal_int16               ClStepDown;

    /* close loop adjustment limited in 1/64dB@S8.6 unit */
    kal_int16               ClAdjMax;

    /* close loop adjustment limited in 1/64dB@S8.6 unit */
    kal_int16               ClAdjMin;

    /* maximum transmit power adjustment in 1/64dB@S5.6 unit, set zero
    if not use it */
    kal_int16               MaxPwrAdj;

    /* RPC bit in SW mode with U2.0 unit*/
    kal_uint16              RpcBitSw; /* Q6 dB */

    /* KS value in SW mode with S6.6 unit*/
    kal_int16               KsValueSw; /* Q6 dB */

    /* Reserved */
    kal_uint16              Reserved;

} RcpTstTxAgcCtrlCmdT_tmp;

/** define Tx AGC control command message */
/** MSG_ID_ELT_RCP_TX_AGC_CTRL_CMD_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    RcpTstTxAgcCtrlCmdT_tmp Msg;
} elt_rcp_tx_agc_ctrl_cmd_msg_struct_tmp;

typedef struct
{
    /* Request execute status */
    kal_uint32              Status;
    kal_int16               ReqPwr;    /* Q6 dBm */
    kal_uint16              Reserved;
} RcpTstTxAgcCtrlRspT_tmp;

/** define Tx AGC control response message */
/** MSG_ID_ELT_RCP_TX_AGC_CTRL_RSP_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    RcpTstTxAgcCtrlRspT_tmp Msg;
} elt_rcp_tx_agc_ctrl_rsp_msg_struct_tmp;

/* define the power information report structure */
typedef struct
{
    kal_int16   openLoopRxPwr; /* The RxPwr after each access probe */
    kal_int16   TxPilotPwr;    /* The final "clipped" pilot pwr after each access probe */
    kal_int16   KsAdj;
} RcpRtcPwrRefParamMsgT_tmp;

/** MSG_ID_RCP_TXAGC_RTC_PWR_REF_PARAM_MSG
*/
typedef struct
{
    LOCAL_PARA_HDR
    RcpRtcPwrRefParamMsgT_tmp Msg;
} rcp_txagc_rtc_pwr_ref_param_msg_struct_tmp;

typedef struct
{
   kal_uint8     PowerUp;           /* 1 power up, 0 power down */
} ValPswPowerMsgT_tmp;

/** define send random access rtb preemption command  ELT msg **/
/** MSG_ID_ELT_RCP_ACC_RTB_CMD_MSG **/
typedef struct
{
    /* Preemption type:, 
       0: stop preemption, 
       1: start RTB/HSC preemption,  */
    kal_uint8    Preempt;
} RcpTxSthRtbHscPreemptCtrlCmdT_tmp;

typedef struct
{
    LOCAL_PARA_HDR
    RcpTxSthRtbHscPreemptCtrlCmdT_tmp Msg;
} elt_rcp_acc_rtb_cmd_msg_struct_tmp;


/*define MSG_ID_ELT_ACC_RTB_RSP_MSG */
typedef struct
{
    kal_uint16 TxsthAcStatus;  /*0 txsth_status_Idle;1 txsth_status_access; 2 txsth_status_traffic ;3 txsth_status_FREEZE*/
    kal_uint16 TxsthEventType; /*0 txsth_unfreeze; 1 txsth_freeze*/
    kal_uint16 RaNum;
} Evl1TxsthAccRtbPreemptionRspMsgT_tmp;

/** define Get random access rtb preemption command  ELT msg **/
/** MSG_ID_ELT_ACC_RTB_RSP_MSG **/
typedef struct
{
    LOCAL_PARA_HDR
    Evl1TxsthAccRtbPreemptionRspMsgT_tmp Msg;
} elt_rcp_acc_rtb_rsp_msg_struct_tmp;


typedef struct
{
    LOCAL_PARA_HDR
    ValPswPowerMsgT_tmp  msg;
} elt_val_power_ctrl_msg_struct_tmp;

typedef struct
{
    kal_uint8        CtrlMode; /* HWD_ENABLE = 0, HWD_DISABLE = 1, HWD_LOAD = 2 */
    kal_uint8        System;   /* 1x/DO */
    kal_uint8        Band;
    kal_uint16       Channel;
} CssTstPllChannelMsgT_tmp;

/* MSG_ID_CSS_TEST_MANUAL_BAND_CHNL_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    CssTstPllChannelMsgT_tmp msg;
} css_test_manual_band_chnl_msg_struct_tmp;

typedef enum
{
   DO_PARM_SET_HYBRID_MODE_TMP = 1,
   DO_PARM_SET_PREF_MODE_TMP =26,
} DoParmOperationId_tmp;

typedef enum
{
  PARM_MIN_VALUE_TMP,
  PARM_MAX_VALUE_TMP,
  PARM_DEFAULT_VALUE_TMP,
  PARM_CUSTOM_VALUE_TMP
} ParmOperationType_tmp;

typedef struct
{
    DoParmOperationId_tmp parmId;
    ParmOperationType_tmp opType;
}clcDoParaCmdInfoT_tmp;

typedef struct
{
   kal_uint32   HybridMode;
} DoHybridModeData_APIStruct_tmp;

typedef struct
{
    clcDoParaCmdInfoT_tmp paraInfo;
    DoHybridModeData_APIStruct_tmp hybridModeSet;
    /* Begin Enum,HybridMode:
                        Non-Hybrid,
                        Hybrid,
            End
         */
}clcDoHybridSetT_tmp;

typedef struct
{
    LOCAL_PARA_HDR
    clcDoHybridSetT_tmp msg;
} elt_clc_do_hybrid_mode_set_cmd_msg_struct_tmp;

#if (defined(MTK_PLT_ON_PC_IT))||(defined(MTK_C2K_L1_TST))


typedef enum
{
   CL1_PHYUT_MOD_EVL1_FLBSRP,
   CL1_PHYUT_MOD_EVL1_SCH,
   CL1_PHYUT_MOD_EVL1_RLBSRP,
   CL1_PHYUT_MOD_1XL1_FLBSRP,
   CL1_PHYUT_MOD_1XL1_SCH,
   CL1_PHYUT_MOD_1XL1_RLBSRP,
   CL1_PHYUT_MOD_EVL1_FRONTEND,
   CL1_PHYUT_MOD_1XL1_FRONTEND,
   CL1_PHYUT_MOD_DUAL_MODE,
   CL1_PHYUT_MOD_RXTIMER,
   CL1_PHYUT_MOD_SLPCTRL,
   CL1_PHYUT_MOD_COSIM,
   CL1_PHYUT_MOD_NUM
} Cl1PhyUtModIdT;

typedef enum
{
   CL1_PHYUT_MOD_CASE_01,
   CL1_PHYUT_MOD_CASE_02,
   CL1_PHYUT_MOD_CASE_03,
   CL1_PHYUT_MOD_CASE_04,
   CL1_PHYUT_MOD_CASE_05,
   CL1_PHYUT_MOD_CASE_06,
   CL1_PHYUT_MOD_CASE_07,
   CL1_PHYUT_MOD_CASE_08,
   CL1_PHYUT_MOD_CASE_09,
   CL1_PHYUT_MOD_CASE_10,
   CL1_PHYUT_MOD_CASE_11,
   CL1_PHYUT_MOD_CASE_12,
   CL1_PHYUT_MOD_CASE_13,
   CL1_PHYUT_MOD_CASE_14,
   CL1_PHYUT_MOD_CASE_15,
   CL1_PHYUT_MOD_CASE_16,
   CL1_PHYUT_MOD_CASE_17,
   CL1_PHYUT_MOD_CASE_18,
   CL1_PHYUT_MOD_CASE_19,
   CL1_PHYUT_MOD_CASE_20,
   CL1_PHYUT_MOD_CASE_21,
   CL1_PHYUT_MOD_CASE_22,
   CL1_PHYUT_MOD_CASE_23,
   CL1_PHYUT_MOD_CASE_24,
   CL1_PHYUT_MOD_CASE_25,
   CL1_PHYUT_MOD_CASE_26,
   CL1_PHYUT_MOD_CASE_27,
   CL1_PHYUT_MOD_CASE_28,
   CL1_PHYUT_MOD_CASE_29,
   CL1_PHYUT_MOD_CASE_30,
   CL1_PHYUT_MOD_CASE_NUM
} Cl1PhyUtModCaseIdT;

typedef struct
{
   kal_uint32 OperationType; /* 0: off   1: on */
   kal_uint32 RfMode; /* 0: RTT  1: EVDO */
   kal_uint32 PathBmp; /* bit0: main   bit1:div   bit2:sec */
   kal_uint32 RxAgcState; /* 0:FAST  1:STEADY  2:ICS  3:FHC */
   kal_uint32 PwrMode; /* 0:HPM  1:LPM */
   kal_int32  InitRssidBmQ5[3];
} Cl1PhyUtParamRxAgcT;

typedef struct
{
    kal_uint32 OperationType; /* 0: off   1: on */
    kal_uint32 RfMode; /* 0: RTT  1: EVDO */
    kal_uint32 PathBmp; /* bit0: main   bit1:div   bit2:sec */
    kal_uint32 RxAgcState; /* 0:FAST  1:STEADY  2:ICS  3:FHC */
    kal_uint32 PwrMode; /* 0:HPM  1:LPM */
    kal_int32  InitRssidBmQ5[3];
    kal_int32  FoeHz;

} Cl1PhyUtParamAfcNcoT;

typedef struct
{
    kal_uint32 OperationType; /* 0: off   1: on */
    kal_uint32 RfMode; /* 0: RTT  1: EVDO */
    kal_uint32 PathBmp; /* bit0: main   bit1:div   bit2:sec */
    kal_uint32 RxAgcState; /* 0:FAST  1:STEADY  2:ICS  3:FHC */
    kal_uint32 PwrMode; /* 0:HPM  1:LPM */
    kal_int32  InitRssidBmQ5[3];
    kal_uint32 NbifBmp;
    kal_int32  FoeHz[3];

} Cl1PhyUtParamAfcNbifT;

typedef struct
{
    kal_uint32 ModeBmp; /* Bit0: 1X; Bit1: EVDO
                           1: 1X only; 2: DO only; 3: 1X and DO */
    kal_uint32 CaseBmp[2]; /* [0]: 1X; [1]: DO */
} Cl1PhyUtParamRxTimerT;

typedef struct
{
    kal_uint32 ModeBmp; /* Bit0: 1X; Bit1: EVDO
                           1: 1X only; 2: DO only; 3: 1X and DO */
    kal_uint32 CaseBmp[2]; /* [0]: 1X; [1]: DO */
} Cl1PhyUtParamSlpCtrlT;

typedef union
{
    kal_uint32            Reserved; /* Reserved */
    Cl1PhyUtParamRxAgcT   ParamRxAgc;
    Cl1PhyUtParamAfcNcoT  ParamAfcNco;
    Cl1PhyUtParamAfcNbifT ParamAfcNbif;
    Cl1PhyUtParamRxTimerT ParamRxTimer;
    Cl1PhyUtParamSlpCtrlT ParamSlpCtrl;
} Cl1PhyUtParamU;

typedef  struct
{
   Cl1PhyUtModIdT      ModId;

   /** \assoc UNION \ref Param */
   Cl1PhyUtModCaseIdT  CaseId;   /* Case ID in module */
   Cl1PhyUtParamU      Param;
} Cl1PhyUtTrigCmdT;

#endif

typedef struct
{
    LOCAL_PARA_HDR
    Cl1PhyUtTrigCmdT msg;
} elt_cl1_phyut_trig_cmd_msg_struct_tmp;

typedef struct
{
   kal_bool result;/* 1->Pass, 0->Fail */
}EltC2kPhyUtTstRptTtmp;

typedef struct
{
    LOCAL_PARA_HDR
    EltC2kPhyUtTstRptTtmp      msg;
} elt_c2k_phyut_tst_rpt_msg_struct_tmp;

typedef struct
{
   kal_uint32   PrefMode;
} DoPrefModeData_APIStruct_tmp;

typedef struct
{
    clcDoParaCmdInfoT_tmp paraInfo;
    DoPrefModeData_APIStruct_tmp prefModeSet;
    /*Begin Enum, PrefMode:
                    Eng Pref Mode Analog, 0
                    Eng Pref Mode Cdma, 1
                    Eng Pref Mode Analog Only, 2
                    Eng Pref Mode Cdma Only, 3
                    Automatic, 4
                    Emergency, 5
                    Home Only, 6
                    Cdma Only, 7
                    HDR Only, 8
                    Hybrid Only, 9
                    SHDR Only, 10
                    End
        */

}clcDoPrefModeSetT_tmp;

typedef struct
{
    LOCAL_PARA_HDR
    clcDoPrefModeSetT_tmp msg;
} elt_clc_do_pref_mode_set_cmd_msg_struct_tmp;

typedef enum
{
    RMCTST_REQ_SUCCESS_TMP,
    RMCTST_REQ_FAILURE_TMP,
    RMCTST_REQ_NOT_SUPPORT_TMP,
    RMCTST_REQ_INVALID_TMP = 0xFFFFFFFF
} RmcTstReqStatusE_tmp;

typedef enum
{
    ETS_FIX_TXDRC_SET_TMP     = 0,
    ETS_FIX_TXDRC_DISABLE_TMP = 1
}FcpTestFixDrcValModeT_tmp;

typedef struct
{
    FcpTestFixDrcValModeT_tmp  EtsFixDrcValMode;
    kal_uint8                  EtsFixDrcVal;
} FcpTestFixDrcValMsgT_tmp;

typedef struct
{
    LOCAL_PARA_HDR
    FcpTestFixDrcValMsgT_tmp msg;
} elt_fcp_fix_drcval_msg_struct_tmp;

typedef struct
{
    kal_uint8  AdaptiveRxTestMode;
    kal_uint8  PwrModeInTstMode;
    kal_uint16 Reserved;

} RmcRxAgcPwrModeTestModeCmdMsgT_tmp;

typedef struct
{
    LOCAL_PARA_HDR
    RmcRxAgcPwrModeTestModeCmdMsgT_tmp Msg;
} elt_rmc_power_mode_test_mode_cmd_msg_struct_tmp;

typedef struct
{
    /* Request execute status */
    RmcTstReqStatusE_tmp   Status;

} RmcRxAgcPwrModeTestModeRspMsgT_tmp;

typedef struct
{
    LOCAL_PARA_HDR
    RmcRxAgcPwrModeTestModeRspMsgT_tmp Msg;

} elt_rmc_power_mode_test_mode_rsp_msg_struct_tmp;

typedef struct
{
    LOCAL_PARA_HDR
    kal_uint32  Reserved;
} elt_rmc_rssi_power_mode_query_cmd_msg_struct_tmp;

typedef struct
{
    /* Request execute status */
    RmcTstReqStatusE_tmp   Status;

    kal_int16          MainImmRssidBmQ5;
    kal_int16          DivImmRssidBmQ5;
    kal_int16          SecImmRssidBmQ5;
    kal_uint16         Reserved1;
    kal_uint8          MainPwrMode;
    kal_uint8          DivPwrMode;
    kal_uint8          SecPwrMode;
    kal_uint8          Reserved2;

} RmcRxAgcRssiPwrModeQueryRspMsgT_tmp;

typedef struct
{
    LOCAL_PARA_HDR
    RmcRxAgcRssiPwrModeQueryRspMsgT_tmp Msg;

} elt_rmc_rssi_power_mode_query_rsp_msg_struct_tmp;

typedef enum
{
    RMC_AFC_MODIFY_FOE_INIT_TYPE_TMP   = 0, /* modify initial FOE */
    RMC_AFC_MODIFY_FOE_NORMAL_TYPE_TMP = 0x00000001, /* modify FOE when rx is already on, 32 bits aligned */

} RmcAfcModifyFoeTypeE_tmp;

typedef enum
{
    EVL1_AFC_MODIFY_FOE_RELATIVE_METHOD_TMP = 0, /* FOE modification value is a relative offset */
    EVL1_AFC_MODIFY_FOE_ABSOLUTE_METHOD_TMP = 0x00000001, /* FOE modification value is a absolute value, 32 bits aligned */

} Evl1ShAfcModifyFoeMethodE_tmp;

typedef struct
{
    kal_uint32                    ModifyFoeFlag;
    RmcAfcModifyFoeTypeE_tmp      ModifyFoeType;
    Evl1ShAfcModifyFoeMethodE_tmp ModifyFoeMethod;
    kal_int16                     ModifyFoeHz;   /* FOE modification value, in Hz */
    kal_uint16                    Reserved;

} RmcAfcModifyFoeCmdMsgT_tmp;

typedef struct
{
    LOCAL_PARA_HDR
    RmcAfcModifyFoeCmdMsgT_tmp msg;
} elt_rmc_modify_foe_cmd_msg_struct_tmp;

typedef struct
{
    /* Request execute status */
    RmcTstReqStatusE_tmp    Status;

} RmcAfcModifyFoeRspMsgT_tmp;

typedef struct
{
    LOCAL_PARA_HDR
    RmcAfcModifyFoeRspMsgT_tmp Msg;
} elt_rmc_modify_foe_rsp_msg_struct_tmp;

typedef enum
{
    RMC_AFC_FOE_QUERY_SCH_TYPE_TMP = 0,          /* query FOE calculated by searcher */
    RMC_AFC_FOE_QUERY_FNG_TYPE_TMP = 0x00000001, /* query FOE calculated by finger, 32 bits aligned */

} RmcAfcFoeQueryTypeE_tmp;

typedef struct
{
    RmcAfcFoeQueryTypeE_tmp FoeQueryType;

} RmcAfcFoeQueryCmdMsgT_tmp;

typedef struct
{
    LOCAL_PARA_HDR
    RmcAfcFoeQueryCmdMsgT_tmp Msg;
} elt_rmc_foe_query_cmd_msg_struct_tmp;

typedef struct
{
    /* Request execute status */
    RmcTstReqStatusE_tmp Status;
    kal_int16            FoeHz;
    kal_uint16           Reserved;

} RmcAfcFoeQueryRspMsgT_tmp;

typedef struct
{
    LOCAL_PARA_HDR
    RmcAfcFoeQueryRspMsgT_tmp Msg;
} elt_rmc_foe_query_rsp_msg_struct_tmp;

typedef struct {
   kal_uint32 bSlottedModeEnabled;
} IdpSlottedModeSetMsgT_tmp;

typedef struct
{
    LOCAL_PARA_HDR
    IdpSlottedModeSetMsgT_tmp msg;
    /*bSlottedModeEnabled::0->Disable;1->Enable.*/
} elt_clc_idp_slotted_mode_set_cmd_msg_struct_tmp;

typedef struct {
   kal_uint32 Reserved;
} IdpSlottedModeSetRspT_tmp;

typedef struct
{
    LOCAL_PARA_HDR
    IdpSlottedModeSetRspT_tmp msg;
} elt_clc_idp_slotted_mode_set_rsp_msg_struct_tmp;

typedef struct
{
    LOCAL_PARA_HDR
} elt_clc_get_l3_status_cmd_msg_struct_tmp;

typedef enum
{
  AT_PWROFF_TMP, /*Same as AT_INACTIVE, but can be used to check powerup */
  AT_INACTIVE_TMP,
  AT_PILOTACQ_TMP,
  AT_SYNC_TMP,
  AT_IDLE_TMP,
  AT_ACCESS_TMP,
  AT_CONNECTED_TMP
}EEDOATStateEnumT_tmp;

typedef struct
{
   EEDOATStateEnumT_tmp  ATState;
   kal_uint8     AlmpState;
   kal_uint8     InspState;
   kal_uint8     IdpState;
   kal_uint8     CspState;
   kal_uint8     RupState;
   kal_uint8     OmpState;
   kal_bool      bHybridOn;
}MonSpyL3StateT_tmp;

typedef struct
{
    LOCAL_PARA_HDR
    MonSpyL3StateT_tmp msg;
    /* Begin Enum, AlmpState:Init,0; Idle,1; ConnectionSetup,2; Connected,3; End */
    /* Begin Enum, InspState:Inactive,0; NetworkDetermination,1; PilotAcq,2;
     *                       Sync,3; TimingChange,4; INSP_WFR_1XASSIST_SIG,5;
     * End
     */
    /* Begin Enum, IdpState:Inactive,0; Monitor,1; Sleep,2; ConnectionSetup,3;
     *                      FreezePending,4; Freeze,5; ConnFrozen,6; WaitFor1XAssistAcqSignal,7;
     * End
     */
    /* Begin Enum, CspState:Inactive,0; Closing,1; Open,2; End */
    /* Begin Enum, RupState:Inactive,0; Idle,1; Connected,2; IRAT_MEASURE,3; End */
    /* Begin Enum, OmpState:Inactive,0; Active,1; End */
    /* bHybridOn:0->Off, 1->On. */
} elt_clc_get_l3_status_rsp_msg_struct_tmp;

typedef struct {
   kal_uint32    DfsTstServingFlag;
} RmcDoDfsServChCmdMsgT_tmp;

/** MSG_ID_ELT_RMC_DO_DFS_SERVCH_CMD_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    RmcDoDfsServChCmdMsgT_tmp Msg;
} elt_rmc_do_dfs_servch_cmd_msg_struct_tmp;

typedef struct
{
    /* Request execute status */
    RmcTstReqStatusE_tmp   Status;

} RmcDoDfsServChRspMsgT_tmp;

/** MSG_ID_ELT_RMC_DO_DFS_SERVCH_RSP_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    RmcDoDfsServChRspMsgT_tmp Msg;
} elt_rmc_do_dfs_servch_rsp_msg_struct_tmp;

/** Define sturcture of Setting DFS channel count */
typedef struct
{
   /** Indicate whether to set DFS channel count manually */
   Bool      DfsSetChCntInd;
   /** Indicate the number of DFS channels to be set */
   kal_uint8 DfsChCntTst;
} RmcTstSetIdpDfsChCntMsgT_tmp;

/** MSG_ID_ELT_RMC_TEST_DO_SET_DFS_CHCNT_CMD_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    RmcTstSetIdpDfsChCntMsgT_tmp Msg;
} elt_rmc_test_do_set_dfs_chcnt_cmd_msg_struct_tmp;

typedef struct
{
    /* Request execute status */
    RmcTstReqStatusE_tmp Status;
} RmcTestDoSetDfsChCntRspMsgT_tmp;

/** MSG_ID_ELT_RMC_TEST_DO_SET_DFS_CHCNT_RSP_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    RmcTestDoSetDfsChCntRspMsgT_tmp Msg;
} elt_rmc_test_do_set_dfs_chcnt_rsp_msg_struct_tmp;

/* SCH_RUP_PILOT_UPDATE_MSG */
typedef  struct
{
   kal_int8          NumPilots;
   kal_uint16        PilotPN[6];
   kal_uint8         MACIndex[6];
   kal_int16         PnPhase[6];
   kal_uint8         SofterHandoff[6];             /*1 bit*/
   kal_uint8         RABLength[6];                /* 2 bits*/
   kal_uint8         RABOffset[6];                 /* 3 bits*/
   kal_int8          RAChannelGain[6];          /*2bits, -1 means NULL*/ 
   kal_uint8         DRCCover[6];
   kal_uint8         DSC[6];   /* oxff means NULL */
} RupActiveListT_tmp; 

typedef  struct
{
   kal_int8             NumPilots;
   kal_uint16           PilotPN[10];
   kal_int16            PnPhase[10];
} RupCandListT_tmp; 

typedef  struct
{
   kal_int8             NumPilots;
   kal_uint16           PilotPN[56];   
   kal_uint8            SrhWinSize[56];   /* 255 is NULL, not mapped to PN chips*/
   kal_uint8            SrhWinOffset[56]; /*255 is NULL, not mapped to PN chips*/    
} RupNghbrListT_tmp;

typedef  struct
{
   kal_int8             NumPilots;
   kal_uint16           PilotPN[5];
} RupRemListT_tmp; 

typedef struct 
{
   kal_int16            PilotSeq;      /* Sequence number to match up with the measurement report */ 
   kal_uint8            ConnSetupFlag; /*message sent  upon the receipt of TCHAssign in the Idle State*/
   kal_uint8            TcaFlag;
   RupActiveListT_tmp   Active;        /* Active set*/
   RupCandListT_tmp     Candidate;     /* Candidate set */
   RupNghbrListT_tmp    Neighbor;      /* Neighbor set */
   RupRemListT_tmp      Remaining; 
} SchPilotUpdateMsgT_tmp;

typedef struct
{
    SchPilotUpdateMsgT_tmp SchUpdateMsg;
} RmcSchPilotUpdateMsgT_tmp;

/*MSG_ID_ELT_RMC_DO_INTRA_MEAS_CMD_MSG*/
typedef struct
{
    LOCAL_PARA_HDR
    RmcSchPilotUpdateMsgT_tmp Msg;
}elt_rmc_do_intra_meas_cmd_msg_struct_tmp;

typedef struct
{
    /* Request execute status */
    RmcTstReqStatusE_tmp   Status;
    kal_uint32  PilotPn;

} RmcDoIntraMeasRspMsgT_tmp;

/*MSG_ID_ELT_RMC_DO_INTRA_MEAS_RSP_MSG*/
typedef struct
{
    LOCAL_PARA_HDR
    RmcDoIntraMeasRspMsgT_tmp Msg;
}elt_rmc_do_intra_meas_rsp_msg_struct_tmp;

typedef struct
{
   kal_uint8 reserve;

} RmcRupDfsAbortMsgT_tmp;

/*MSG_ID_ELT_RUP_CLC_DFS_SET_CMD_MSG*/
typedef struct
{
    LOCAL_PARA_HDR
    RmcRupDfsAbortMsgT_tmp Msg;
}elt_rmc_rup_dfs_abort_msg_struct_tmp;

/* CDMA Channel Record */
typedef  struct
{
   kal_uint8             SysType;
   kal_uint8             BandClass;
   kal_uint16            Channel;
}ChanRecGT_tmp;

typedef struct
{
   ChanRecGT_tmp        DfsChannel;    /* Dfs channel */
   RupCandListT_tmp     Candidate;     /* Candidate set belong to same dfs channel */
   RupNghbrListT_tmp    Neighbor;      /* Neighbor set belong to same dfs channel */
}RupDfsChannelCfgT_tmp;

typedef struct
{
    kal_uint16             DfsCfgSeq;                                /* Sequence number to match up with the measurement report */
    kal_uint8              NumChan;                                  /* Total Unique DFS Channels */
    RupDfsChannelCfgT_tmp  ChanList[2];    /* Measured dfs frequency and neighbor info */
}RmcRupDfsCfgMsgT_tmp;


/*MSG_ID_ELT_RUP_IDP_DFS_START_CMD_MSG*/
typedef struct
{
    LOCAL_PARA_HDR
    RmcRupDfsCfgMsgT_tmp Msg;
}elt_rmc_rup_dfs_start_cmd_msg_struct_tmp;


typedef struct
{
    kal_uint32 Reserve;
} RmcMmAfcStateQueryCmdMsgT_tmp;

/** MSG_ID_ELT_RMC_MMAFC_STATE_QUERY_CMD_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    RmcMmAfcStateQueryCmdMsgT_tmp Msg;
} elt_rmc_mmafc_state_query_cmd_msg_struct_tmp;

typedef struct
{
    /* Request execute status */
    RmcTstReqStatusE_tmp   Status;
    kal_uint32             MmAfcState;

} RmcMmAfcStateQueryRspMsgT_tmp;

/** MSG_ID_ELT_RMC_MMAFC_STATE_QUERY_RSP_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    RmcMmAfcStateQueryRspMsgT_tmp Msg;
} elt_rmc_mmafc_state_query_rsp_msg_struct_tmp;


typedef struct
{
    kal_uint32 Reserve;
} RmcRxTxActSlotQueryCmdMsgT_tmp;

/** MSG_ID_ELT_RMC_RX_TX_ACT_SLOT_QUERY_CMD_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    RmcRxTxActSlotQueryCmdMsgT_tmp Msg;
} elt_rmc_rx_tx_act_slot_query_cmd_msg_struct_tmp;


typedef struct
{
    /* Request execute status */
    RmcTstReqStatusE_tmp   Status;
    kal_uint32             RxActiveSlot;
    kal_uint32             TxActiveSlot[5];
    
} RmcRxTxActSlotQueryRspMsgT_tmp;

/** MSG_ID_ELT_RMC_RX_TX_ACT_SLOT_QUERY_RSP_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    RmcRxTxActSlotQueryRspMsgT_tmp Msg;
} elt_rmc_rx_tx_act_slot_query_rsp_msg_struct_tmp;

typedef enum
{
    CL1_DISABLE_MODE_tmp = 0,
    CL1_MAINRX_ONLY_MODE_tmp = 1,
    CL1_DIVERSITYRX_ONLY_MODE_tmp,
    CL1_DUAL_MODE_tmp,
    CL1_TESTMODE_NUM_tmp
} Cl1AntennaTestModeT_tmp;

typedef struct
{
    Cl1AntennaTestModeT_tmp    AntTestMode;
}Cl1TstRxAntennaTestModeT_tmp;

typedef struct
{
   LOCAL_PARA_HDR
   Cl1TstRxAntennaTestModeT_tmp          Msg;
} elt_tst_rx_antenna_testmode_set_msg_struct_tmp;



typedef struct
{
    module_type    dest_mod_id_tmp;  /* Destination module ID of response message */
    kal_uint32     MsgId_tmp; 
}ExeRspMsgT_tmp;

typedef enum
{
    VAL_Cl1TST_START_TX_TRANSMIT_tmp = 0,
    VAL_CL1TST_STOP_TX_TRANSMIT_tmp,
    VAL_CL1TST_START_RX_MEASURE_tmp,
    VAL_CL1TST_TX_POWER_QUERY_tmp,
    VAL_CL1TST_START_TX_POWER_MODU_SIGNAL_tmp,
    VAL_CL1TST_STOP_TX_POWER_MODU_SIGNAL_tmp,
    VAL_CL1TST_DETECT_RX_POWER_DBM_UNIT_tmp,
    VAL_CL1TST_POWER_REDUCTION_LEVEL_tmp,
    VAL_CL1TST_POWER_REDUCTION_LEVEL_BY_BAND_tmp
}ValCl1tstReqModeT_tmp;

typedef enum
{
    VAL_CL1TST_SIG_TX_TONE_tmp = 0,
    VAL_CL1TST_SIG_TX_MODU_tmp,
    VAL_CL1TST_SIG_INVALID_tmp = 255
}ValCl1tstTxSigTypeT_tmp;

typedef struct
{
    ValCl1tstReqModeT_tmp           Mode;
    kal_uint16                      Channel;
    kal_uint8                       Band;
    kal_int8                        TxPower;/*Q0*/
    ValCl1tstTxSigTypeT_tmp         TxSigType;
}Cl1tstValRxTxPwrDetectMsgT_tmp;

typedef struct
{
   LOCAL_PARA_HDR
   Cl1tstValRxTxPwrDetectMsgT_tmp          Msg;
} elt_tst_rx_at_sim_rx_rssi_msg_struct_tmp;


typedef struct
{
/*
0: ics wo afc wo 1x
1: ics wi afc wo 1x
2: ics wo afc wi 1x
3: ics wi afc wi 1x
4: ics wo signal
5: ics wi  strong signal
6: ics foe
7: ics preempt
0xf----->valid(no test )*/
  kal_uint8  caseId ;

} EltTstIcsTstCaseIdCfgTtmp;

typedef struct
{
    LOCAL_PARA_HDR
    EltTstIcsTstCaseIdCfgTtmp  msg;
} elt_tst_ics_tst_caseId_cfg_msg_struct_tmp;

typedef struct
{
    kal_bool RcpDbgEn;  /* 1->RCP subchannel in Debug mode, 0->normal mode */
    kal_bool RcpDbgVal;
    kal_bool ArqDbgEn;  /* 1->H/LARQ subchannel in Debug mode, 0->normal mode */
    kal_bool ArqDbgVal;
}EltTstMcdDebugMsgTtmp;

typedef struct
{
    LOCAL_PARA_HDR
    EltTstMcdDebugMsgTtmp  msg;
} elt_tst_mcd_debug_msg_struct_tmp;

typedef struct
{
   kal_int16 CheckType;/*bit 0--->Chananl Register   bit1---->Rssi   bit2---->Ec/iO    bit3---->FOE   bit4----->Sync ok */
   kal_int16 IcsRegisterChan;
   kal_int16 IcsRssiRpt;
   kal_int16  IcsEcIoPrt;
   kal_int16  IcsFoePrt;
   kal_int16 IcsSyncOk;
}EltTstIcsCheckRptTtmp;

typedef struct
{
    LOCAL_PARA_HDR
    EltTstIcsCheckRptTtmp      msg;
} elt_tst_ics_check_rpt_msg_struct_tmp;

typedef struct
{
   SysCdmaBandT   Band;
   kal_uint16     Chan;
   kal_uint8      TriggerSource; /* 0->IDP; 1->RUP */
}EltRmcInterhoTstCfgTtmp;

typedef struct
{
    LOCAL_PARA_HDR
    EltRmcInterhoTstCfgTtmp      msg;
} elt_c2k_rmc_interho_tst_cfg_msg_struct_tmp;

typedef struct
{
   kal_uint16     ResePilotPN;
}EltRmcIntrahoTstCfgTtmp;

typedef struct
{
    LOCAL_PARA_HDR
    EltRmcIntrahoTstCfgTtmp      msg;
} elt_c2k_rmc_intraho_tst_cfg_msg_struct_tmp;

typedef struct
{
    kal_uint8  DoSignalValidFlag;
} EltTstStbDoSignalCfgT_tmp;

typedef struct
{
    LOCAL_PARA_HDR
    EltTstStbDoSignalCfgT_tmp  Msg;
} elt_tst_stb_dosignal_cfg_msg_struct_tmp;

typedef struct
{
    kal_uint8  RttTimingValid;
    kal_uint8  DoTimingValid;
} EltTstStbTimingCfgT_tmp;

typedef struct
{
    LOCAL_PARA_HDR
    EltTstStbTimingCfgT_tmp  Msg;
} elt_tst_stb_timing_cfg_msg_struct_tmp;
/** define Rx antenna mode response ELT msg */
/** MSG_ID_ELT_TST_RX_ANTENNA_TESTMODE_SET_RSP_MSG */
typedef struct
{
   LOCAL_PARA_HDR
   Cl1TstRxAntennaTestModeRspT_tmp          msg;
} elt_tst_rx_antenna_testmode_set_rsp_msg_struct_tmp;

/** define AT sim rx rssi rsp ELT msg */
/** MSG_ID_ELT_TST_AT_SIM_RX_RSSI_RSP_MSG*/
typedef struct
{
   LOCAL_PARA_HDR
   Cl1TstRxRssiQueryRspT_tmp          msg;
} elt_tst_at_sim_rx_rssi_rsp_msg_struct_tmp;

typedef struct
{
    kal_uint8  temp_type;
} EltTstReadTempT_tmp;


typedef struct
{
   LOCAL_PARA_HDR
   EltTstReadTempT_tmp          Msg;
} elt_tst_read_temp_msg_struct_tmp;


/** Ads structure to provide parameters to the CL1D_RF_Temperature_Query() function. */
typedef struct
{
  /** [in] - 0: From RF for RF temperature compensation
             1: From PMIC for AFC temperature compensation
  */
  kal_uint32  temp_type;
  /** [out] - Temperature value in Celsius*/
  kal_uint32 temperature;
} CL1D_RF_TEMPERATURE_QUERY_T_tmp;


/** define temperature get response structure */
typedef struct
{
    /* Request execute status */
    RmcTstReqStatusE_tmp        Status;

    /* Get temperature*/
    CL1D_RF_TEMPERATURE_QUERY_T_tmp  Temperature;
} Cl1TstReadTempRspT_tmp;


/** define read temperature response ELT msg */
/** MSG_ID_ELT_TST_TEMP_READ_RSP_MSG */
typedef struct
{
   LOCAL_PARA_HDR
   Cl1TstReadTempRspT_tmp          Msg;
} elt_tst_read_temp_rsp_msg_struct_tmp;


#endif

#endif //VMMI_MSG_STRUCT_H
