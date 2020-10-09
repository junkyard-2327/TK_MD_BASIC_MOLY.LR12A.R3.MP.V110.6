#ifndef __CUIF_LTE_RX_SF_COMM_CMD_H__
#define __CUIF_LTE_RX_SF_COMM_CMD_H__

// ----------------- CUIF_LTE_RX_SF_COMM_CMD Register Definition -------------------
typedef volatile struct {
    kal_uint32 FRC;                                                                       // 0x0000
    kal_uint32 AFC_INFO2;                                                                 // 0x0004
    kal_uint32 FWSSD_INFO;                                                                // 0x0008
    kal_uint32 DVFS_INFO;                                                                 // 0x000C
    kal_uint32 RX_INFO1;                                                                  // 0x0010
    kal_uint32 TIME_INFO;                                                                 // 0x0014
    kal_uint32 SPS_PCELL;                                                                 // 0x0018
    kal_uint32 MB_TH;                                                                     // 0x001C
    kal_uint32 C_RNTI;                                                                    // 0x0020
    kal_uint32 RA_RNTI;                                                                   // 0x0024
    kal_uint32 NE_INFO;                                                                   // 0x0028
    kal_uint32 DSP_MISC_FEATURE;                                                          // 0x002C
    kal_uint32 TIS_INFO;                                                                  // 0x0030
    kal_uint32 BRP_INFO0;                                                                 // 0x0034
    kal_uint32 BRP_RESERVED_1;                                                            // 0x0038
} CUIF_LTE_RX_SF_COMM_CMD_REGS, *PCUIF_LTE_RX_SF_COMM_CMD_REGS;

// ---------- CUIF_LTE_RX_SF_COMM_CMD word-offset  ----------
#define O_CUIF_LTE_RX_SF_COMM_CMD_FRC                                                     (0)
#define O_CUIF_LTE_RX_SF_COMM_CMD_AFC_INFO2                                               (1)
#define O_CUIF_LTE_RX_SF_COMM_CMD_FWSSD_INFO                                              (2)
#define O_CUIF_LTE_RX_SF_COMM_CMD_DVFS_INFO                                               (3)
#define O_CUIF_LTE_RX_SF_COMM_CMD_RX_INFO1                                                (4)
#define O_CUIF_LTE_RX_SF_COMM_CMD_TIME_INFO                                               (5)
#define O_CUIF_LTE_RX_SF_COMM_CMD_SPS_PCELL                                               (6)
#define O_CUIF_LTE_RX_SF_COMM_CMD_MB_TH                                                   (7)
#define O_CUIF_LTE_RX_SF_COMM_CMD_C_RNTI                                                  (8)
#define O_CUIF_LTE_RX_SF_COMM_CMD_RA_RNTI                                                 (9)
#define O_CUIF_LTE_RX_SF_COMM_CMD_NE_INFO                                                 (10)
#define O_CUIF_LTE_RX_SF_COMM_CMD_DSP_MISC_FEATURE                                        (11)
#define O_CUIF_LTE_RX_SF_COMM_CMD_TIS_INFO                                                (12)
#define O_CUIF_LTE_RX_SF_COMM_CMD_BRP_INFO0                                               (13)
#define O_CUIF_LTE_RX_SF_COMM_CMD_BRP_RESERVED_1                                          (14)

// ---------- FRC bit-field ----------
#define P_CUIF_LTE_RX_SF_COMM_CMD_FRC_SF_CNT                                              (0)
#define L_CUIF_LTE_RX_SF_COMM_CMD_FRC_SF_CNT                                              (32)
#define M_CUIF_LTE_RX_SF_COMM_CMD_FRC_SF_CNT                                              (0xFFFFFFFF)

// ---------- AFC_INFO2 bit-field ----------
#define P_CUIF_LTE_RX_SF_COMM_CMD_AFC_INFO2_FG_FAST_TRIGGER                               (1)
#define L_CUIF_LTE_RX_SF_COMM_CMD_AFC_INFO2_FG_FAST_TRIGGER                               (1)
#define M_CUIF_LTE_RX_SF_COMM_CMD_AFC_INFO2_FG_FAST_TRIGGER                               (0x00000002)
#define P_CUIF_LTE_RX_SF_COMM_CMD_AFC_INFO2_SWITCH_TYPE                                   (0)
#define L_CUIF_LTE_RX_SF_COMM_CMD_AFC_INFO2_SWITCH_TYPE                                   (1)
#define M_CUIF_LTE_RX_SF_COMM_CMD_AFC_INFO2_SWITCH_TYPE                                   (0x00000001)

// ---------- FWSSD_INFO bit-field ----------
#define P_CUIF_LTE_RX_SF_COMM_CMD_FWSSD_INFO_TDE_AR_RESET                                 (7)
#define L_CUIF_LTE_RX_SF_COMM_CMD_FWSSD_INFO_TDE_AR_RESET                                 (1)
#define M_CUIF_LTE_RX_SF_COMM_CMD_FWSSD_INFO_TDE_AR_RESET                                 (0x00000080)
#define P_CUIF_LTE_RX_SF_COMM_CMD_FWSSD_INFO_TDE_AR_EN                                    (6)
#define L_CUIF_LTE_RX_SF_COMM_CMD_FWSSD_INFO_TDE_AR_EN                                    (1)
#define M_CUIF_LTE_RX_SF_COMM_CMD_FWSSD_INFO_TDE_AR_EN                                    (0x00000040)
#define P_CUIF_LTE_RX_SF_COMM_CMD_FWSSD_INFO_TDE_REF_PDP                                  (5)
#define L_CUIF_LTE_RX_SF_COMM_CMD_FWSSD_INFO_TDE_REF_PDP                                  (1)
#define M_CUIF_LTE_RX_SF_COMM_CMD_FWSSD_INFO_TDE_REF_PDP                                  (0x00000020)
#define P_CUIF_LTE_RX_SF_COMM_CMD_FWSSD_INFO_TDE_CORR_EN                                  (4)
#define L_CUIF_LTE_RX_SF_COMM_CMD_FWSSD_INFO_TDE_CORR_EN                                  (1)
#define M_CUIF_LTE_RX_SF_COMM_CMD_FWSSD_INFO_TDE_CORR_EN                                  (0x00000010)
#define P_CUIF_LTE_RX_SF_COMM_CMD_FWSSD_INFO_RTP_AR_RESET                                 (3)
#define L_CUIF_LTE_RX_SF_COMM_CMD_FWSSD_INFO_RTP_AR_RESET                                 (1)
#define M_CUIF_LTE_RX_SF_COMM_CMD_FWSSD_INFO_RTP_AR_RESET                                 (0x00000008)
#define P_CUIF_LTE_RX_SF_COMM_CMD_FWSSD_INFO_RTP_AR_EN                                    (2)
#define L_CUIF_LTE_RX_SF_COMM_CMD_FWSSD_INFO_RTP_AR_EN                                    (1)
#define M_CUIF_LTE_RX_SF_COMM_CMD_FWSSD_INFO_RTP_AR_EN                                    (0x00000004)
#define P_CUIF_LTE_RX_SF_COMM_CMD_FWSSD_INFO_RTP_REF_PDP                                  (1)
#define L_CUIF_LTE_RX_SF_COMM_CMD_FWSSD_INFO_RTP_REF_PDP                                  (1)
#define M_CUIF_LTE_RX_SF_COMM_CMD_FWSSD_INFO_RTP_REF_PDP                                  (0x00000002)
#define P_CUIF_LTE_RX_SF_COMM_CMD_FWSSD_INFO_RTP_CORR_EN                                  (0)
#define L_CUIF_LTE_RX_SF_COMM_CMD_FWSSD_INFO_RTP_CORR_EN                                  (1)
#define M_CUIF_LTE_RX_SF_COMM_CMD_FWSSD_INFO_RTP_CORR_EN                                  (0x00000001)

// ---------- DVFS_INFO bit-field ----------
#define P_CUIF_LTE_RX_SF_COMM_CMD_DVFS_INFO_DVFS_GEAR_IDX                                 (0)
#define L_CUIF_LTE_RX_SF_COMM_CMD_DVFS_INFO_DVFS_GEAR_IDX                                 (4)
#define M_CUIF_LTE_RX_SF_COMM_CMD_DVFS_INFO_DVFS_GEAR_IDX                                 (0x0000000F)

// ---------- RX_INFO1 bit-field ----------
#define P_CUIF_LTE_RX_SF_COMM_CMD_RX_INFO1_FLAG_TMO_OPT                                   (10)
#define L_CUIF_LTE_RX_SF_COMM_CMD_RX_INFO1_FLAG_TMO_OPT                                   (1)
#define M_CUIF_LTE_RX_SF_COMM_CMD_RX_INFO1_FLAG_TMO_OPT                                   (0x00000400)
#define P_CUIF_LTE_RX_SF_COMM_CMD_RX_INFO1_IS_TEST_SIM                                    (9)
#define L_CUIF_LTE_RX_SF_COMM_CMD_RX_INFO1_IS_TEST_SIM                                    (1)
#define M_CUIF_LTE_RX_SF_COMM_CMD_RX_INFO1_IS_TEST_SIM                                    (0x00000200)
#define P_CUIF_LTE_RX_SF_COMM_CMD_RX_INFO1_MEAS_GAP_EN                                    (8)
#define L_CUIF_LTE_RX_SF_COMM_CMD_RX_INFO1_MEAS_GAP_EN                                    (1)
#define M_CUIF_LTE_RX_SF_COMM_CMD_RX_INFO1_MEAS_GAP_EN                                    (0x00000100)
#define P_CUIF_LTE_RX_SF_COMM_CMD_RX_INFO1_DDL_RST                                        (7)
#define L_CUIF_LTE_RX_SF_COMM_CMD_RX_INFO1_DDL_RST                                        (1)
#define M_CUIF_LTE_RX_SF_COMM_CMD_RX_INFO1_DDL_RST                                        (0x00000080)
#define P_CUIF_LTE_RX_SF_COMM_CMD_RX_INFO1_TB_MIMO_EN                                     (6)
#define L_CUIF_LTE_RX_SF_COMM_CMD_RX_INFO1_TB_MIMO_EN                                     (1)
#define M_CUIF_LTE_RX_SF_COMM_CMD_RX_INFO1_TB_MIMO_EN                                     (0x00000040)
#define P_CUIF_LTE_RX_SF_COMM_CMD_RX_INFO1_SIM_AR_EN                                      (5)
#define L_CUIF_LTE_RX_SF_COMM_CMD_RX_INFO1_SIM_AR_EN                                      (1)
#define M_CUIF_LTE_RX_SF_COMM_CMD_RX_INFO1_SIM_AR_EN                                      (0x00000020)
#define P_CUIF_LTE_RX_SF_COMM_CMD_RX_INFO1_S_SIM_IND                                      (3)
#define L_CUIF_LTE_RX_SF_COMM_CMD_RX_INFO1_S_SIM_IND                                      (2)
#define M_CUIF_LTE_RX_SF_COMM_CMD_RX_INFO1_S_SIM_IND                                      (0x00000018)
#define P_CUIF_LTE_RX_SF_COMM_CMD_RX_INFO1_SIM_IDX                                        (1)
#define L_CUIF_LTE_RX_SF_COMM_CMD_RX_INFO1_SIM_IDX                                        (2)
#define M_CUIF_LTE_RX_SF_COMM_CMD_RX_INFO1_SIM_IDX                                        (0x00000006)
#define P_CUIF_LTE_RX_SF_COMM_CMD_RX_INFO1_CELL_TYPE                                      (0)
#define L_CUIF_LTE_RX_SF_COMM_CMD_RX_INFO1_CELL_TYPE                                      (1)
#define M_CUIF_LTE_RX_SF_COMM_CMD_RX_INFO1_CELL_TYPE                                      (0x00000001)

// ---------- TIME_INFO bit-field ----------
#define P_CUIF_LTE_RX_SF_COMM_CMD_TIME_INFO_S_TIME                                        (0)
#define L_CUIF_LTE_RX_SF_COMM_CMD_TIME_INFO_S_TIME                                        (32)
#define M_CUIF_LTE_RX_SF_COMM_CMD_TIME_INFO_S_TIME                                        (0xFFFFFFFF)

// ---------- SPS_PCELL bit-field ----------
#define P_CUIF_LTE_RX_SF_COMM_CMD_SPS_PCELL_DIS_SEND_PDSCH_DATA                           (15)
#define L_CUIF_LTE_RX_SF_COMM_CMD_SPS_PCELL_DIS_SEND_PDSCH_DATA                           (1)
#define M_CUIF_LTE_RX_SF_COMM_CMD_SPS_PCELL_DIS_SEND_PDSCH_DATA                           (0x00008000)
#define P_CUIF_LTE_RX_SF_COMM_CMD_SPS_PCELL_DL_SPS_VLD                                    (5)
#define L_CUIF_LTE_RX_SF_COMM_CMD_SPS_PCELL_DL_SPS_VLD                                    (1)
#define M_CUIF_LTE_RX_SF_COMM_CMD_SPS_PCELL_DL_SPS_VLD                                    (0x00000020)
#define P_CUIF_LTE_RX_SF_COMM_CMD_SPS_PCELL_DL_SPS_REL_EN                                 (4)
#define L_CUIF_LTE_RX_SF_COMM_CMD_SPS_PCELL_DL_SPS_REL_EN                                 (1)
#define M_CUIF_LTE_RX_SF_COMM_CMD_SPS_PCELL_DL_SPS_REL_EN                                 (0x00000010)
#define P_CUIF_LTE_RX_SF_COMM_CMD_SPS_PCELL_DLSPS_HARQ_PROC_ID                            (0)
#define L_CUIF_LTE_RX_SF_COMM_CMD_SPS_PCELL_DLSPS_HARQ_PROC_ID                            (4)
#define M_CUIF_LTE_RX_SF_COMM_CMD_SPS_PCELL_DLSPS_HARQ_PROC_ID                            (0x0000000F)

// ---------- MB_TH bit-field ----------
#define P_CUIF_LTE_RX_SF_COMM_CMD_MB_TH_MUL_BIN_TH                                        (0)
#define L_CUIF_LTE_RX_SF_COMM_CMD_MB_TH_MUL_BIN_TH                                        (16)
#define M_CUIF_LTE_RX_SF_COMM_CMD_MB_TH_MUL_BIN_TH                                        (0x0000FFFF)

// ---------- C_RNTI bit-field ----------
#define P_CUIF_LTE_RX_SF_COMM_CMD_C_RNTI_TC_RNTI                                          (16)
#define L_CUIF_LTE_RX_SF_COMM_CMD_C_RNTI_TC_RNTI                                          (16)
#define M_CUIF_LTE_RX_SF_COMM_CMD_C_RNTI_TC_RNTI                                          (0xFFFF0000)
#define P_CUIF_LTE_RX_SF_COMM_CMD_C_RNTI_C_RNTI                                           (0)
#define L_CUIF_LTE_RX_SF_COMM_CMD_C_RNTI_C_RNTI                                           (16)
#define M_CUIF_LTE_RX_SF_COMM_CMD_C_RNTI_C_RNTI                                           (0x0000FFFF)

// ---------- RA_RNTI bit-field ----------
#define P_CUIF_LTE_RX_SF_COMM_CMD_RA_RNTI_RA_RNTI                                         (16)
#define L_CUIF_LTE_RX_SF_COMM_CMD_RA_RNTI_RA_RNTI                                         (16)
#define M_CUIF_LTE_RX_SF_COMM_CMD_RA_RNTI_RA_RNTI                                         (0xFFFF0000)

// ---------- NE_INFO bit-field ----------
#define P_CUIF_LTE_RX_SF_COMM_CMD_NE_INFO_LAUNCH_CTRL_NE                                  (5)
#define L_CUIF_LTE_RX_SF_COMM_CMD_NE_INFO_LAUNCH_CTRL_NE                                  (1)
#define M_CUIF_LTE_RX_SF_COMM_CMD_NE_INFO_LAUNCH_CTRL_NE                                  (0x00000020)

// ---------- DSP_MISC_FEATURE bit-field ----------
#define P_CUIF_LTE_RX_SF_COMM_CMD_DSP_MISC_FEATURE_CRSNE_DATA_SCM_SCALE_FAC               (19)
#define L_CUIF_LTE_RX_SF_COMM_CMD_DSP_MISC_FEATURE_CRSNE_DATA_SCM_SCALE_FAC               (3)
#define M_CUIF_LTE_RX_SF_COMM_CMD_DSP_MISC_FEATURE_CRSNE_DATA_SCM_SCALE_FAC               (0x00380000)
#define P_CUIF_LTE_RX_SF_COMM_CMD_DSP_MISC_FEATURE_CRSNE_FORCE_EBNE                       (18)
#define L_CUIF_LTE_RX_SF_COMM_CMD_DSP_MISC_FEATURE_CRSNE_FORCE_EBNE                       (1)
#define M_CUIF_LTE_RX_SF_COMM_CMD_DSP_MISC_FEATURE_CRSNE_FORCE_EBNE                       (0x00040000)
#define P_CUIF_LTE_RX_SF_COMM_CMD_DSP_MISC_FEATURE_HWDCM_PROFILE_EN                       (17)
#define L_CUIF_LTE_RX_SF_COMM_CMD_DSP_MISC_FEATURE_HWDCM_PROFILE_EN                       (1)
#define M_CUIF_LTE_RX_SF_COMM_CMD_DSP_MISC_FEATURE_HWDCM_PROFILE_EN                       (0x00020000)
#define P_CUIF_LTE_RX_SF_COMM_CMD_DSP_MISC_FEATURE_RMEM_ZERO_ASSERT_EN                    (16)
#define L_CUIF_LTE_RX_SF_COMM_CMD_DSP_MISC_FEATURE_RMEM_ZERO_ASSERT_EN                    (1)
#define M_CUIF_LTE_RX_SF_COMM_CMD_DSP_MISC_FEATURE_RMEM_ZERO_ASSERT_EN                    (0x00010000)
#define P_CUIF_LTE_RX_SF_COMM_CMD_DSP_MISC_FEATURE_SD_SET                                 (9)
#define L_CUIF_LTE_RX_SF_COMM_CMD_DSP_MISC_FEATURE_SD_SET                                 (4)
#define M_CUIF_LTE_RX_SF_COMM_CMD_DSP_MISC_FEATURE_SD_SET                                 (0x00001E00)
#define P_CUIF_LTE_RX_SF_COMM_CMD_DSP_MISC_FEATURE_FORCE_SD_SET                           (8)
#define L_CUIF_LTE_RX_SF_COMM_CMD_DSP_MISC_FEATURE_FORCE_SD_SET                           (1)
#define M_CUIF_LTE_RX_SF_COMM_CMD_DSP_MISC_FEATURE_FORCE_SD_SET                           (0x00000100)
#define P_CUIF_LTE_RX_SF_COMM_CMD_DSP_MISC_FEATURE_DISABLE_ILL_COND                       (7)
#define L_CUIF_LTE_RX_SF_COMM_CMD_DSP_MISC_FEATURE_DISABLE_ILL_COND                       (1)
#define M_CUIF_LTE_RX_SF_COMM_CMD_DSP_MISC_FEATURE_DISABLE_ILL_COND                       (0x00000080)
#define P_CUIF_LTE_RX_SF_COMM_CMD_DSP_MISC_FEATURE_DISABLE_CSI_TRACK                      (6)
#define L_CUIF_LTE_RX_SF_COMM_CMD_DSP_MISC_FEATURE_DISABLE_CSI_TRACK                      (1)
#define M_CUIF_LTE_RX_SF_COMM_CMD_DSP_MISC_FEATURE_DISABLE_CSI_TRACK                      (0x00000040)
#define P_CUIF_LTE_RX_SF_COMM_CMD_DSP_MISC_FEATURE_RESET_CSI_CRC_CNT                      (5)
#define L_CUIF_LTE_RX_SF_COMM_CMD_DSP_MISC_FEATURE_RESET_CSI_CRC_CNT                      (1)
#define M_CUIF_LTE_RX_SF_COMM_CMD_DSP_MISC_FEATURE_RESET_CSI_CRC_CNT                      (0x00000020)
#define P_CUIF_LTE_RX_SF_COMM_CMD_DSP_MISC_FEATURE_MD_IDX                                 (1)
#define L_CUIF_LTE_RX_SF_COMM_CMD_DSP_MISC_FEATURE_MD_IDX                                 (4)
#define M_CUIF_LTE_RX_SF_COMM_CMD_DSP_MISC_FEATURE_MD_IDX                                 (0x0000001E)
#define P_CUIF_LTE_RX_SF_COMM_CMD_DSP_MISC_FEATURE_FORCE_MD_IDX                           (0)
#define L_CUIF_LTE_RX_SF_COMM_CMD_DSP_MISC_FEATURE_FORCE_MD_IDX                           (1)
#define M_CUIF_LTE_RX_SF_COMM_CMD_DSP_MISC_FEATURE_FORCE_MD_IDX                           (0x00000001)

// ---------- TIS_INFO bit-field ----------
#define P_CUIF_LTE_RX_SF_COMM_CMD_TIS_INFO_TIS_ABORTION                                   (31)
#define L_CUIF_LTE_RX_SF_COMM_CMD_TIS_INFO_TIS_ABORTION                                   (1)
#define M_CUIF_LTE_RX_SF_COMM_CMD_TIS_INFO_TIS_ABORTION                                   (0x80000000)
#define P_CUIF_LTE_RX_SF_COMM_CMD_TIS_INFO_TIS_NUM_SF                                     (1)
#define L_CUIF_LTE_RX_SF_COMM_CMD_TIS_INFO_TIS_NUM_SF                                     (4)
#define M_CUIF_LTE_RX_SF_COMM_CMD_TIS_INFO_TIS_NUM_SF                                     (0x0000001E)
#define P_CUIF_LTE_RX_SF_COMM_CMD_TIS_INFO_TIS_EN                                         (0)
#define L_CUIF_LTE_RX_SF_COMM_CMD_TIS_INFO_TIS_EN                                         (1)
#define M_CUIF_LTE_RX_SF_COMM_CMD_TIS_INFO_TIS_EN                                         (0x00000001)

// ---------- BRP_INFO0 bit-field ----------
#define P_CUIF_LTE_RX_SF_COMM_CMD_BRP_INFO0_KNOW_PDCCH_EN                                 (1)
#define L_CUIF_LTE_RX_SF_COMM_CMD_BRP_INFO0_KNOW_PDCCH_EN                                 (1)
#define M_CUIF_LTE_RX_SF_COMM_CMD_BRP_INFO0_KNOW_PDCCH_EN                                 (0x00000002)
#define P_CUIF_LTE_RX_SF_COMM_CMD_BRP_INFO0_BRP_EN                                        (0)
#define L_CUIF_LTE_RX_SF_COMM_CMD_BRP_INFO0_BRP_EN                                        (1)
#define M_CUIF_LTE_RX_SF_COMM_CMD_BRP_INFO0_BRP_EN                                        (0x00000001)

// ---------- BRP_RESERVED_1 bit-field ----------
#define P_CUIF_LTE_RX_SF_COMM_CMD_BRP_RESERVED_1_BRP_RESERVED                             (0)
#define L_CUIF_LTE_RX_SF_COMM_CMD_BRP_RESERVED_1_BRP_RESERVED                             (32)
#define M_CUIF_LTE_RX_SF_COMM_CMD_BRP_RESERVED_1_BRP_RESERVED                             (0xFFFFFFFF)

#endif // __CUIF_LTE_RX_SF_COMM_CMD_H__
