#ifndef _FEC_HW_REG_MT6293_H_
#define _FEC_HW_REG_MT6293_H_


#ifndef _FEC_ADDR_FORMAT_MT6293_H_
#define _FEC_ADDR_FORMAT_MT6293_H_

typedef volatile unsigned short* SRAMADDR;         /* SRAM addr is 16 bits  */
typedef volatile unsigned short  SRAMDATA;         /* SRAM data is 16 bits  */
typedef volatile unsigned short* APBADDR;          /* APB addr is 16 bits   */
typedef volatile unsigned short  APBDATA;          /* APB data is 16 bits   */
typedef volatile unsigned long*  APBADDR32;        /* APB addr is 32 bits   */
typedef volatile unsigned long   APBDATA32;        /* APB data is 32 bits   */
typedef volatile unsigned short* DPRAMADDR;        /* DPRAM addr is 16 bits */
typedef volatile signed   short* DPRAMADDR_S;      /* DPRAM addr is 16 bits */
typedef volatile unsigned short  DPRAMDATA;        /* DPRAM data is 16 bits */

#endif //#ifndef _FEC_HW_REG_MT6291_H_
/*********************************************** RESORT****************************************************/

// ---------- FEC_L_TX_RESORT word-offset  ----------
#define FEC_LTPC_CUIF_O_RESORT_EN(i)                                                      (0)
#define FEC_LTPC_CUIF_O_RESORT_OFS_GLO0_0(i)                                              (1)
#define FEC_LTPC_CUIF_O_RESORT_OFS_GLO0_1(i)                                              (2)
#define FEC_LTPC_CUIF_O_RESORT_OFS_GLO1_0(i)                                              (3)
#define FEC_LTPC_CUIF_O_RESORT_OFS_GLO1_1(i)                                              (4)

// ---------- RESORT_EN bit-field ----------
#define FEC_LTPC_CUIF_P_RESORT_EN_glo_en_1                                                (24)
#define FEC_LTPC_CUIF_L_RESORT_EN_glo_en_1                                                (8)
#define FEC_LTPC_CUIF_M_RESORT_EN_glo_en_1                                                (0xFF000000)
#define FEC_LTPC_CUIF_P_RESORT_EN_glo_en_0                                                (16)
#define FEC_LTPC_CUIF_L_RESORT_EN_glo_en_0                                                (8)
#define FEC_LTPC_CUIF_M_RESORT_EN_glo_en_0                                                (0x00FF0000)
#define FEC_LTPC_CUIF_P_RESORT_EN_resorting_flag                                          (0)
#define FEC_LTPC_CUIF_L_RESORT_EN_resorting_flag                                          (16)
#define FEC_LTPC_CUIF_M_RESORT_EN_resorting_flag                                          (0x0000FFFF)

// ---------- RESORT_OFS_GLO0_0 bit-field ----------
#define FEC_LTPC_CUIF_P_RESORT_OFS_GLO0_0_pa_power_ofs                                    (16)
#define FEC_LTPC_CUIF_L_RESORT_OFS_GLO0_0_pa_power_ofs                                    (16)
#define FEC_LTPC_CUIF_M_RESORT_OFS_GLO0_0_pa_power_ofs                                    (0xFFFF0000)
#define FEC_LTPC_CUIF_P_RESORT_OFS_GLO0_0_pa_voltage_ofs                                  (0)
#define FEC_LTPC_CUIF_L_RESORT_OFS_GLO0_0_pa_voltage_ofs                                  (16)
#define FEC_LTPC_CUIF_M_RESORT_OFS_GLO0_0_pa_voltage_ofs                                  (0x0000FFFF)

// ---------- RESORT_OFS_GLO0_1 bit-field ----------
#define FEC_LTPC_CUIF_P_RESORT_OFS_GLO0_1_dfe_rf_ofs                                      (16)
#define FEC_LTPC_CUIF_L_RESORT_OFS_GLO0_1_dfe_rf_ofs                                      (16)
#define FEC_LTPC_CUIF_M_RESORT_OFS_GLO0_1_dfe_rf_ofs                                      (0xFFFF0000)
#define FEC_LTPC_CUIF_P_RESORT_OFS_GLO0_1_rf_bsi_ofs                                      (0)
#define FEC_LTPC_CUIF_L_RESORT_OFS_GLO0_1_rf_bsi_ofs                                      (16)
#define FEC_LTPC_CUIF_M_RESORT_OFS_GLO0_1_rf_bsi_ofs                                      (0x0000FFFF)

// ---------- RESORT_OFS_GLO1_0 bit-field ----------
#define FEC_LTPC_CUIF_P_RESORT_OFS_GLO1_0_pa_power_ofs                                    (16)
#define FEC_LTPC_CUIF_L_RESORT_OFS_GLO1_0_pa_power_ofs                                    (16)
#define FEC_LTPC_CUIF_M_RESORT_OFS_GLO1_0_pa_power_ofs                                    (0xFFFF0000)
#define FEC_LTPC_CUIF_P_RESORT_OFS_GLO1_0_pa_voltage_ofs                                  (0)
#define FEC_LTPC_CUIF_L_RESORT_OFS_GLO1_0_pa_voltage_ofs                                  (16)
#define FEC_LTPC_CUIF_M_RESORT_OFS_GLO1_0_pa_voltage_ofs                                  (0x0000FFFF)

// ---------- RESORT_OFS_GLO1_1 bit-field ----------
#define FEC_LTPC_CUIF_P_RESORT_OFS_GLO1_1_dfe_rf_ofs                                      (16)
#define FEC_LTPC_CUIF_L_RESORT_OFS_GLO1_1_dfe_rf_ofs                                      (16)
#define FEC_LTPC_CUIF_M_RESORT_OFS_GLO1_1_dfe_rf_ofs                                      (0xFFFF0000)
#define FEC_LTPC_CUIF_P_RESORT_OFS_GLO1_1_rf_bsi_ofs                                      (0)
#define FEC_LTPC_CUIF_L_RESORT_OFS_GLO1_1_rf_bsi_ofs                                      (16)
#define FEC_LTPC_CUIF_M_RESORT_OFS_GLO1_1_rf_bsi_ofs                                      (0x0000FFFF)


/*********************************************** INJECT STRING****************************************************/

// ---------- FEC_L_TX_INJECT_STRING word-offset  ----------
#define FEC_LTPC_CUIF_O_INJECT_STRING_EN(i)                                               (0)
#define FEC_LTPC_CUIF_O_INJECT_ASSERT_DUMP(i)                                             (1)
#define FEC_LTPC_CUIF_O_INJECT_SET_GAIN(i)                                                (2)
#define FEC_LTPC_CUIF_O_INJECT_FORCE_CONTOL(i)                                            (3)

// ---------- INJECT_STRING_EN bit-field ----------
#define FEC_LTPC_CUIF_P_INJECT_STRING_EN_force_control_flag                               (8)
#define FEC_LTPC_CUIF_L_INJECT_STRING_EN_force_control_flag                               (4)
#define FEC_LTPC_CUIF_M_INJECT_STRING_EN_force_control_flag                               (0x00000F00)
#define FEC_LTPC_CUIF_P_INJECT_STRING_EN_set_gain_flag                                    (4)
#define FEC_LTPC_CUIF_L_INJECT_STRING_EN_set_gain_flag                                    (4)
#define FEC_LTPC_CUIF_M_INJECT_STRING_EN_set_gain_flag                                    (0x000000F0)
#define FEC_LTPC_CUIF_P_INJECT_STRING_EN_assert_dump_flag                                 (0)
#define FEC_LTPC_CUIF_L_INJECT_STRING_EN_assert_dump_flag                                 (4)
#define FEC_LTPC_CUIF_M_INJECT_STRING_EN_assert_dump_flag                                 (0x0000000F)

// ---------- INJECT_ASSERT_DUMP bit-field ----------
#define FEC_LTPC_CUIF_P_INJECT_ASSERT_DUMP_clr_ast_dump                                   (31)
#define FEC_LTPC_CUIF_L_INJECT_ASSERT_DUMP_clr_ast_dump                                   (1)
#define FEC_LTPC_CUIF_M_INJECT_ASSERT_DUMP_clr_ast_dump                                   (0x80000000)
#define FEC_LTPC_CUIF_P_INJECT_ASSERT_DUMP_dis_robust                                     (15)
#define FEC_LTPC_CUIF_L_INJECT_ASSERT_DUMP_dis_robust                                     (1)
#define FEC_LTPC_CUIF_M_INJECT_ASSERT_DUMP_dis_robust                                     (0x00008000)
#define FEC_LTPC_CUIF_P_INJECT_ASSERT_DUMP_en_c2u_trc                                     (14)
#define FEC_LTPC_CUIF_L_INJECT_ASSERT_DUMP_en_c2u_trc                                     (1)
#define FEC_LTPC_CUIF_M_INJECT_ASSERT_DUMP_en_c2u_trc                                     (0x00004000)
#define FEC_LTPC_CUIF_P_INJECT_ASSERT_DUMP_en_dump_HW                                     (13)
#define FEC_LTPC_CUIF_L_INJECT_ASSERT_DUMP_en_dump_HW                                     (1)
#define FEC_LTPC_CUIF_M_INJECT_ASSERT_DUMP_en_dump_HW                                     (0x00002000)
#define FEC_LTPC_CUIF_P_INJECT_ASSERT_DUMP_en_gc_ast                                      (12)
#define FEC_LTPC_CUIF_L_INJECT_ASSERT_DUMP_en_gc_ast                                      (1)
#define FEC_LTPC_CUIF_M_INJECT_ASSERT_DUMP_en_gc_ast                                      (0x00001000)
#define FEC_LTPC_CUIF_P_INJECT_ASSERT_DUMP_en_cal_ast                                     (11)
#define FEC_LTPC_CUIF_L_INJECT_ASSERT_DUMP_en_cal_ast                                     (1)
#define FEC_LTPC_CUIF_M_INJECT_ASSERT_DUMP_en_cal_ast                                     (0x00000800)
#define FEC_LTPC_CUIF_P_INJECT_ASSERT_DUMP_first_tx_ast                                   (10)
#define FEC_LTPC_CUIF_L_INJECT_ASSERT_DUMP_first_tx_ast                                   (1)
#define FEC_LTPC_CUIF_M_INJECT_ASSERT_DUMP_first_tx_ast                                   (0x00000400)
#define FEC_LTPC_CUIF_P_INJECT_ASSERT_DUMP_srs_det_ast                                    (5)
#define FEC_LTPC_CUIF_L_INJECT_ASSERT_DUMP_srs_det_ast                                    (1)
#define FEC_LTPC_CUIF_M_INJECT_ASSERT_DUMP_srs_det_ast                                    (0x00000020)
#define FEC_LTPC_CUIF_P_INJECT_ASSERT_DUMP_prach_det_ast                                  (4)
#define FEC_LTPC_CUIF_L_INJECT_ASSERT_DUMP_prach_det_ast                                  (1)
#define FEC_LTPC_CUIF_M_INJECT_ASSERT_DUMP_prach_det_ast                                  (0x00000010)
#define FEC_LTPC_CUIF_P_INJECT_ASSERT_DUMP_puxch_det_ast                                  (3)
#define FEC_LTPC_CUIF_L_INJECT_ASSERT_DUMP_puxch_det_ast                                  (1)
#define FEC_LTPC_CUIF_M_INJECT_ASSERT_DUMP_puxch_det_ast                                  (0x00000008)
#define FEC_LTPC_CUIF_P_INJECT_ASSERT_DUMP_srs_ref_ast                                    (2)
#define FEC_LTPC_CUIF_L_INJECT_ASSERT_DUMP_srs_ref_ast                                    (1)
#define FEC_LTPC_CUIF_M_INJECT_ASSERT_DUMP_srs_ref_ast                                    (0x00000004)
#define FEC_LTPC_CUIF_P_INJECT_ASSERT_DUMP_prach_ref_ast                                  (1)
#define FEC_LTPC_CUIF_L_INJECT_ASSERT_DUMP_prach_ref_ast                                  (1)
#define FEC_LTPC_CUIF_M_INJECT_ASSERT_DUMP_prach_ref_ast                                  (0x00000002)
#define FEC_LTPC_CUIF_P_INJECT_ASSERT_DUMP_puxch_ref_ast                                  (0)
#define FEC_LTPC_CUIF_L_INJECT_ASSERT_DUMP_puxch_ref_ast                                  (1)
#define FEC_LTPC_CUIF_M_INJECT_ASSERT_DUMP_puxch_ref_ast                                  (0x00000001)

// ---------- INJECT_SET_GAIN bit-field ----------
#define FEC_LTPC_CUIF_P_INJECT_SET_GAIN_clr_set_gain                                      (31)
#define FEC_LTPC_CUIF_L_INJECT_SET_GAIN_clr_set_gain                                      (1)
#define FEC_LTPC_CUIF_M_INJECT_SET_GAIN_clr_set_gain                                      (0x80000000)
#define FEC_LTPC_CUIF_P_INJECT_SET_GAIN_pout_decreae                                      (22)
#define FEC_LTPC_CUIF_L_INJECT_SET_GAIN_pout_decreae                                      (1)
#define FEC_LTPC_CUIF_M_INJECT_SET_GAIN_pout_decreae                                      (0x00400000)
#define FEC_LTPC_CUIF_P_INJECT_SET_GAIN_pout_increase                                     (21)
#define FEC_LTPC_CUIF_L_INJECT_SET_GAIN_pout_increase                                     (1)
#define FEC_LTPC_CUIF_M_INJECT_SET_GAIN_pout_increase                                     (0x00200000)
#define FEC_LTPC_CUIF_P_INJECT_SET_GAIN_fix_open_loop                                     (10)
#define FEC_LTPC_CUIF_L_INJECT_SET_GAIN_fix_open_loop                                     (1)
#define FEC_LTPC_CUIF_M_INJECT_SET_GAIN_fix_open_loop                                     (0x00000400)
#define FEC_LTPC_CUIF_P_INJECT_SET_GAIN_fix_pa_idx                                        (2)
#define FEC_LTPC_CUIF_L_INJECT_SET_GAIN_fix_pa_idx                                        (1)
#define FEC_LTPC_CUIF_M_INJECT_SET_GAIN_fix_pa_idx                                        (0x00000004)
#define FEC_LTPC_CUIF_P_INJECT_SET_GAIN_first_tx_fix_gain                                 (1)
#define FEC_LTPC_CUIF_L_INJECT_SET_GAIN_first_tx_fix_gain                                 (1)
#define FEC_LTPC_CUIF_M_INJECT_SET_GAIN_first_tx_fix_gain                                 (0x00000002)
#define FEC_LTPC_CUIF_P_INJECT_SET_GAIN_fix_gain_mode                                     (0)
#define FEC_LTPC_CUIF_L_INJECT_SET_GAIN_fix_gain_mode                                     (1)
#define FEC_LTPC_CUIF_M_INJECT_SET_GAIN_fix_gain_mode                                     (0x00000001)

// ---------- INJECT_FORCE_CONTOL bit-field ----------
#define FEC_LTPC_CUIF_P_INJECT_FORCE_CONTOL_clr_force_control                             (31)
#define FEC_LTPC_CUIF_L_INJECT_FORCE_CONTOL_clr_force_control                             (1)
#define FEC_LTPC_CUIF_M_INJECT_FORCE_CONTOL_clr_force_control                             (0x80000000)
#define FEC_LTPC_CUIF_P_INJECT_FORCE_CONTOL_dis_otfc                                      (20)
#define FEC_LTPC_CUIF_L_INJECT_FORCE_CONTOL_dis_otfc                                      (1)
#define FEC_LTPC_CUIF_M_INJECT_FORCE_CONTOL_dis_otfc                                      (0x00100000)
#define FEC_LTPC_CUIF_P_INJECT_FORCE_CONTOL_fix_ET_mode                                   (13)
#define FEC_LTPC_CUIF_L_INJECT_FORCE_CONTOL_fix_ET_mode                                   (1)
#define FEC_LTPC_CUIF_M_INJECT_FORCE_CONTOL_fix_ET_mode                                   (0x00002000)
#define FEC_LTPC_CUIF_P_INJECT_FORCE_CONTOL_fix_DPD_mode                                  (12)
#define FEC_LTPC_CUIF_L_INJECT_FORCE_CONTOL_fix_DPD_mode                                  (1)
#define FEC_LTPC_CUIF_M_INJECT_FORCE_CONTOL_fix_DPD_mode                                  (0x00001000)
#define FEC_LTPC_CUIF_P_INJECT_FORCE_CONTOL_fix_APT_mode                                  (11)
#define FEC_LTPC_CUIF_L_INJECT_FORCE_CONTOL_fix_APT_mode                                  (1)
#define FEC_LTPC_CUIF_M_INJECT_FORCE_CONTOL_fix_APT_mode                                  (0x00000800)
#define FEC_LTPC_CUIF_P_INJECT_FORCE_CONTOL_en_clk                                        (10)
#define FEC_LTPC_CUIF_L_INJECT_FORCE_CONTOL_en_clk                                        (1)
#define FEC_LTPC_CUIF_M_INJECT_FORCE_CONTOL_en_clk                                        (0x00000400)
#define FEC_LTPC_CUIF_P_INJECT_FORCE_CONTOL_dis_cfr                                       (4)
#define FEC_LTPC_CUIF_L_INJECT_FORCE_CONTOL_dis_cfr                                       (1)
#define FEC_LTPC_CUIF_M_INJECT_FORCE_CONTOL_dis_cfr                                       (0x00000010)
#define FEC_LTPC_CUIF_P_INJECT_FORCE_CONTOL_dis_det_dfe_cmp                               (3)
#define FEC_LTPC_CUIF_L_INJECT_FORCE_CONTOL_dis_det_dfe_cmp                               (1)
#define FEC_LTPC_CUIF_M_INJECT_FORCE_CONTOL_dis_det_dfe_cmp                               (0x00000008)
#define FEC_LTPC_CUIF_P_INJECT_FORCE_CONTOL_dis_brp_droop                                 (2)
#define FEC_LTPC_CUIF_L_INJECT_FORCE_CONTOL_dis_brp_droop                                 (1)
#define FEC_LTPC_CUIF_M_INJECT_FORCE_CONTOL_dis_brp_droop                                 (0x00000004)
#define FEC_LTPC_CUIF_P_INJECT_FORCE_CONTOL_dis_sram_latch                                (1)
#define FEC_LTPC_CUIF_L_INJECT_FORCE_CONTOL_dis_sram_latch                                (1)
#define FEC_LTPC_CUIF_M_INJECT_FORCE_CONTOL_dis_sram_latch                                (0x00000002)
#define FEC_LTPC_CUIF_P_INJECT_FORCE_CONTOL_dis_droop_integral                            (0)
#define FEC_LTPC_CUIF_L_INJECT_FORCE_CONTOL_dis_droop_integral                            (1)
#define FEC_LTPC_CUIF_M_INJECT_FORCE_CONTOL_dis_droop_integral                            (0x00000001)


/*********************************************** COM****************************************************/
// ---------- FEC_L_TX_COM word-offset  ----------
#define FEC_LTPC_CUIF_O_INI_CC_PARAM0(i)                                                  (0)
#define FEC_LTPC_CUIF_O_INI_CAL_DL_INFO5(i)                                               (1)
#define FEC_LTPC_CUIF_O_INI_FEC_TX_BOOT_CHK(i)                                            (2)
#define FEC_LTPC_CUIF_O_FEC_TX_TPC_PHYTEST_MODE(i)                                        (3)
#define FEC_LTPC_CUIF_O_FEC_TX_TPC_DDL_MODE(i)                                            (4)
#define FEC_LTPC_CUIF_O_INI_CAL_DL_INFO6(i)                                               (6)
#define FEC_LTPC_CUIF_O_INI_CAL_DL_INFO7(i)                                               (7)

// ---------- INI_CC_PARAM0 bit-field ----------
#define FEC_LTPC_CUIF_P_INI_CC_PARAM0_tx_carrier_type                                     (0)
#define FEC_LTPC_CUIF_L_INI_CC_PARAM0_tx_carrier_type                                     (8)
#define FEC_LTPC_CUIF_M_INI_CC_PARAM0_tx_carrier_type                                     (0x000000FF)

// ---------- INI_CAL_DL_INFO5 bit-field ----------
#define FEC_LTPC_CUIF_P_INI_CAL_DL_INFO5_etm_cw_table_addr                                (0)
#define FEC_LTPC_CUIF_L_INI_CAL_DL_INFO5_etm_cw_table_addr                                (32)
#define FEC_LTPC_CUIF_M_INI_CAL_DL_INFO5_etm_cw_table_addr                                (0xFFFFFFFF)

// ---------- INI_FEC_TX_BOOT_CHK bit-field ----------
#define FEC_LTPC_CUIF_P_INI_FEC_TX_BOOT_CHK_fec_tx_bootup_ready                           (0)
#define FEC_LTPC_CUIF_L_INI_FEC_TX_BOOT_CHK_fec_tx_bootup_ready                           (1)
#define FEC_LTPC_CUIF_M_INI_FEC_TX_BOOT_CHK_fec_tx_bootup_ready                           (0x00000001)

// ---------- FEC_TX_TPC_PHYTEST_MODE bit-field ----------
#define FEC_LTPC_CUIF_P_FEC_TX_TPC_PHYTEST_MODE_phytest_monitor_enable                    (0)
#define FEC_LTPC_CUIF_L_FEC_TX_TPC_PHYTEST_MODE_phytest_monitor_enable                    (1)
#define FEC_LTPC_CUIF_M_FEC_TX_TPC_PHYTEST_MODE_phytest_monitor_enable                    (0x00000001)


// ---------- FEC_TX_TPC_RF_SELECT bit-field ----------  
#define FEC_LTPC_CUIF_P_FEC_TX_TPC_RF_SELECT_rf_select                                    (0)
#define FEC_LTPC_CUIF_L_FEC_TX_TPC_RF_SELECT_rf_select                                    (8)
#define FEC_LTPC_CUIF_M_FEC_TX_TPC_RF_SELECT_rf_select                                    (0x000000FF)

// ---------- FEC_TX_TPC_DDL_MODE bit-field ----------
#define FEC_LTPC_CUIF_P_FEC_TX_TPC_DDL_MODE_mode                                          (0)
#define FEC_LTPC_CUIF_L_FEC_TX_TPC_DDL_MODE_mode                                          (1)
#define FEC_LTPC_CUIF_M_FEC_TX_TPC_DDL_MODE_mode                                          (0x00000001)

// ---------- INI_CAL_DL_INFO6 bit-field ----------
#define FEC_LTPC_CUIF_P_INI_CAL_DL_INFO6_et_cw_table_addr                                 (0)
#define FEC_LTPC_CUIF_L_INI_CAL_DL_INFO6_et_cw_table_addr                                 (32)
#define FEC_LTPC_CUIF_M_INI_CAL_DL_INFO6_et_cw_table_addr                                 (0xFFFFFFFF)

// ---------- INI_CAL_DL_INFO7 bit-field ----------
#define FEC_LTPC_CUIF_P_INI_CAL_DL_INFO7_etm_cw_table_addr_etdpd                          (0)
#define FEC_LTPC_CUIF_L_INI_CAL_DL_INFO7_etm_cw_table_addr_etdpd                          (32)
#define FEC_LTPC_CUIF_M_INI_CAL_DL_INFO7_etm_cw_table_addr_etdpd                          (0xFFFFFFFF)

// ---------- ET_SO_GEN_CON bit-field ----------
#define FEC_LTPC_CUIF_P_ET_SO_GEN_CON_etdbb_rb_idx_map8                                   (24)
#define FEC_LTPC_CUIF_L_ET_SO_GEN_CON_etdbb_rb_idx_map8                                   (3)
#define FEC_LTPC_CUIF_M_ET_SO_GEN_CON_etdbb_rb_idx_map8                                   (0x07000000)
#define FEC_LTPC_CUIF_P_ET_SO_GEN_CON_etdbb_rb_idx_map7                                   (21)
#define FEC_LTPC_CUIF_L_ET_SO_GEN_CON_etdbb_rb_idx_map7                                   (3)
#define FEC_LTPC_CUIF_M_ET_SO_GEN_CON_etdbb_rb_idx_map7                                   (0x00E00000)
#define FEC_LTPC_CUIF_P_ET_SO_GEN_CON_etdbb_rb_idx_map6                                   (18)
#define FEC_LTPC_CUIF_L_ET_SO_GEN_CON_etdbb_rb_idx_map6                                   (3)
#define FEC_LTPC_CUIF_M_ET_SO_GEN_CON_etdbb_rb_idx_map6                                   (0x001C0000)
#define FEC_LTPC_CUIF_P_ET_SO_GEN_CON_etdbb_rb_idx_map5                                   (15)
#define FEC_LTPC_CUIF_L_ET_SO_GEN_CON_etdbb_rb_idx_map5                                   (3)
#define FEC_LTPC_CUIF_M_ET_SO_GEN_CON_etdbb_rb_idx_map5                                   (0x00038000)
#define FEC_LTPC_CUIF_P_ET_SO_GEN_CON_etdbb_rb_idx_map4                                   (12)
#define FEC_LTPC_CUIF_L_ET_SO_GEN_CON_etdbb_rb_idx_map4                                   (3)
#define FEC_LTPC_CUIF_M_ET_SO_GEN_CON_etdbb_rb_idx_map4                                   (0x00007000)
#define FEC_LTPC_CUIF_P_ET_SO_GEN_CON_etdbb_rb_idx_map3                                   (9)
#define FEC_LTPC_CUIF_L_ET_SO_GEN_CON_etdbb_rb_idx_map3                                   (3)
#define FEC_LTPC_CUIF_M_ET_SO_GEN_CON_etdbb_rb_idx_map3                                   (0x00000E00)
#define FEC_LTPC_CUIF_P_ET_SO_GEN_CON_etdbb_rb_idx_map2                                   (6)
#define FEC_LTPC_CUIF_L_ET_SO_GEN_CON_etdbb_rb_idx_map2                                   (3)
#define FEC_LTPC_CUIF_M_ET_SO_GEN_CON_etdbb_rb_idx_map2                                   (0x000001C0)
#define FEC_LTPC_CUIF_P_ET_SO_GEN_CON_etdbb_rb_idx_map1                                   (3)
#define FEC_LTPC_CUIF_L_ET_SO_GEN_CON_etdbb_rb_idx_map1                                   (3)
#define FEC_LTPC_CUIF_M_ET_SO_GEN_CON_etdbb_rb_idx_map1                                   (0x00000038)
#define FEC_LTPC_CUIF_P_ET_SO_GEN_CON_etdbb_rb_idx_map0                                   (0)
#define FEC_LTPC_CUIF_L_ET_SO_GEN_CON_etdbb_rb_idx_map0                                   (3)
#define FEC_LTPC_CUIF_M_ET_SO_GEN_CON_etdbb_rb_idx_map0                                   (0x00000007)

// ---------- ET_POUT_MAX bit-field ----------
#define FEC_LTPC_CUIF_P_ET_POUT_MAX_pout_max                                              (16)
#define FEC_LTPC_CUIF_L_ET_POUT_MAX_pout_max                                              (16)
#define FEC_LTPC_CUIF_M_ET_POUT_MAX_pout_max                                              (0xFFFF0000)
#define FEC_LTPC_CUIF_P_ET_POUT_MAX_et_gpa_delta                                          (0)
#define FEC_LTPC_CUIF_L_ET_POUT_MAX_et_gpa_delta                                          (16)
#define FEC_LTPC_CUIF_M_ET_POUT_MAX_et_gpa_delta                                          (0x0000FFFF)

/*********************************************** P01****************************************************/

// ---------- FEC_L_TX_P01 word-offset  ----------
#define FEC_LTPC_CUIF_O_INI_PCFE2_INPUT1(i)                                               (0)
#define FEC_LTPC_CUIF_O_INI_PCFE2_INPUT2(i)                                               (1)
#define FEC_LTPC_CUIF_O_INI_PCFE2_INPUT3(i)                                               (2)
#define FEC_LTPC_CUIF_O_INI_PCFE2_INPUT4(i)                                               (3)
#define FEC_LTPC_CUIF_O_INI_PCFE2_INPUT5(i)                                               (4)
#define FEC_LTPC_CUIF_O_INI_PCFE2_INPUT6(i)                                               (5)
#define FEC_LTPC_CUIF_O_INI_DDPC_INPUT0(i)                                                (6)
#define FEC_LTPC_CUIF_O_INI_DDPC_INPUT1(i)                                                (7)
#define FEC_LTPC_CUIF_O_INI_DDPC_INPUT2(i)                                                (8)
#define FEC_LTPC_CUIF_O_INI_RFIC_CS_INPUT0(i)                                             (9)
#define FEC_LTPC_CUIF_O_INI_PGA_LENGTH_INPUT0(i)                                          (10)
#define FEC_LTPC_CUIF_O_INI_PMIC_LENGTH_INPUT0(i)                                         (11)
#define FEC_LTPC_CUIF_O_INI_MIPI_LENGTH_INPUT0(i)                                         (12)
#define FEC_LTPC_CUIF_O_INI_MIPI_LENGTH_INPUT1(i)                                         (13)
#define FEC_LTPC_CUIF_O_INIT_ROUTE_INFO0(i)                                               (14)
#define FEC_LTPC_CUIF_O_INI_CAL_DL_INFO0(i)                                               (15)
#define FEC_LTPC_CUIF_O_INI_CAL_DL_INFO1(i)                                               (16)
#define FEC_LTPC_CUIF_O_INI_CAL_DL_INFO2(i)                                               (17)
#define FEC_LTPC_CUIF_O_INI_CAL_DL_INFO3(i)                                               (18)
#define FEC_LTPC_CUIF_O_INI_CAL_DL_INFO4(i)                                               (19)
#define FEC_LTPC_CUIF_O_INI_TX_INIT_END_INFO(i)                                           (20)
#define FEC_LTPC_CUIF_O_INI_NRT_UPDATE(i)                                                 (21)
#define FEC_LTPC_CUIF_O_INI_CALDL_CHK(i)                                                  (22)
#define FEC_LTPC_CUIF_O_INI_INIT_END_CHK(i)                                               (23)
#define FEC_LTPC_CUIF_O_TESTMODE_CHANNEL_BMP_SLOT0(i)                                     (24)
#define FEC_LTPC_CUIF_O_TESTMODE_POUT_RB_SLOT0(i)                                         (25)
#define FEC_LTPC_CUIF_O_TESTMODE_PA_RF_SLOT0(i)                                           (26)
#define FEC_LTPC_CUIF_O_TESTMODE_GBB2_COMP_ER_SLOT0(i)                                    (27)
#define FEC_LTPC_CUIF_O_TESTMODE_CHANNEL_BMP_SLOT1(i)                                     (28)
#define FEC_LTPC_CUIF_O_TESTMODE_POUT_RB_SLOT1(i)                                         (29)
#define FEC_LTPC_CUIF_O_TESTMODE_PA_RF_SLOT1(i)                                           (30)
#define FEC_LTPC_CUIF_O_TESTMODE_GBB2_COMP_ER_SLOT1(i)                                    (31)
#define FEC_LTPC_CUIF_O_TESTMODE_CHANNEL_BMP_SYM12(i)                                     (32)
#define FEC_LTPC_CUIF_O_TESTMODE_POUT_RB_SYM12(i)                                         (33)
#define FEC_LTPC_CUIF_O_TESTMODE_PA_RF_SYM12(i)                                           (34)
#define FEC_LTPC_CUIF_O_TESTMODE_GBB2_COMP_ER_SYM12(i)                                    (35)
#define FEC_LTPC_CUIF_O_TESTMODE_CHANNEL_BMP_SYM13(i)                                     (36)
#define FEC_LTPC_CUIF_O_TESTMODE_POUT_RB_SYM13(i)                                         (37)
#define FEC_LTPC_CUIF_O_TESTMODE_PA_RF_SYM13(i)                                           (38)
#define FEC_LTPC_CUIF_O_TESTMODE_GBB2_COMP_ER_SYM13(i)                                    (39)
#define FEC_LTPC_CUIF_O_TEMP_CHANGE_FLAG(i)                                               (40)
#define FEC_LTPC_CUIF_O_OFF_PMIC_CHANGE_FLAG(i)                                           (41)
#define FEC_LTPC_CUIF_O_OFF_PMIC_CW_H(i)                                                  (42)
#define FEC_LTPC_CUIF_O_OFF_PMIC_CW_L(i)                                                  (43)


// ---------- INI_PCFE2_INPUT1 bit-field ----------
#define FEC_LTPC_CUIF_P_INI_PCFE2_INPUT1_gtx_bb_max_db                                    (16)
#define FEC_LTPC_CUIF_L_INI_PCFE2_INPUT1_gtx_bb_max_db                                    (16)
#define FEC_LTPC_CUIF_M_INI_PCFE2_INPUT1_gtx_bb_max_db                                    (0xFFFF0000)
#define FEC_LTPC_CUIF_P_INI_PCFE2_INPUT1_gtx_bb_min_db                                    (0)
#define FEC_LTPC_CUIF_L_INI_PCFE2_INPUT1_gtx_bb_min_db                                    (16)
#define FEC_LTPC_CUIF_M_INI_PCFE2_INPUT1_gtx_bb_min_db                                    (0x0000FFFF)

// ---------- INI_PCFE2_INPUT2 bit-field ----------
#define FEC_LTPC_CUIF_P_INI_PCFE2_INPUT2_gtx_pga_max_db                                   (16)
#define FEC_LTPC_CUIF_L_INI_PCFE2_INPUT2_gtx_pga_max_db                                   (16)
#define FEC_LTPC_CUIF_M_INI_PCFE2_INPUT2_gtx_pga_max_db                                   (0xFFFF0000)
#define FEC_LTPC_CUIF_P_INI_PCFE2_INPUT2_gtx_pga_min_db                                   (0)
#define FEC_LTPC_CUIF_L_INI_PCFE2_INPUT2_gtx_pga_min_db                                   (16)
#define FEC_LTPC_CUIF_M_INI_PCFE2_INPUT2_gtx_pga_min_db                                   (0x0000FFFF)

// ---------- INI_PCFE2_INPUT3 bit-field ----------
#define FEC_LTPC_CUIF_P_INI_PCFE2_INPUT3_gdet_rf_max_db                                   (16)
#define FEC_LTPC_CUIF_L_INI_PCFE2_INPUT3_gdet_rf_max_db                                   (16)
#define FEC_LTPC_CUIF_M_INI_PCFE2_INPUT3_gdet_rf_max_db                                   (0xFFFF0000)
#define FEC_LTPC_CUIF_P_INI_PCFE2_INPUT3_gdet_rf_min_db                                   (0)
#define FEC_LTPC_CUIF_L_INI_PCFE2_INPUT3_gdet_rf_min_db                                   (16)
#define FEC_LTPC_CUIF_M_INI_PCFE2_INPUT3_gdet_rf_min_db                                   (0x0000FFFF)

// ---------- INI_PCFE2_INPUT4 bit-field ----------
#define FEC_LTPC_CUIF_P_INI_PCFE2_INPUT4_prach_fmt                                        (8)
#define FEC_LTPC_CUIF_L_INI_PCFE2_INPUT4_prach_fmt                                        (8)
#define FEC_LTPC_CUIF_M_INI_PCFE2_INPUT4_prach_fmt                                        (0x0000FF00)
#define FEC_LTPC_CUIF_P_INI_PCFE2_INPUT4_cp_type                                          (0)
#define FEC_LTPC_CUIF_L_INI_PCFE2_INPUT4_cp_type                                          (8)
#define FEC_LTPC_CUIF_M_INI_PCFE2_INPUT4_cp_type                                          (0x000000FF)

// ---------- INI_PCFE2_INPUT5 bit-field ----------
#define FEC_LTPC_CUIF_P_INI_PCFE2_INPUT5_freq_pa_carr                                     (0)
#define FEC_LTPC_CUIF_L_INI_PCFE2_INPUT5_freq_pa_carr                                     (16)
#define FEC_LTPC_CUIF_M_INI_PCFE2_INPUT5_freq_pa_carr                                     (0x0000FFFF)

// ---------- INI_PCFE2_INPUT6 bit-field ----------
#define FEC_LTPC_CUIF_P_INI_PCFE2_INPUT6_tx_band                                          (24)
#define FEC_LTPC_CUIF_L_INI_PCFE2_INPUT6_tx_band                                          (8)
#define FEC_LTPC_CUIF_M_INI_PCFE2_INPUT6_tx_band                                          (0xFF000000)
#define FEC_LTPC_CUIF_P_INI_PCFE2_INPUT6_tx_cbw                                           (16)
#define FEC_LTPC_CUIF_L_INI_PCFE2_INPUT6_tx_cbw                                           (8)
#define FEC_LTPC_CUIF_M_INI_PCFE2_INPUT6_tx_cbw                                           (0x00FF0000)
#define FEC_LTPC_CUIF_P_INI_PCFE2_INPUT6_tx_cbw_cc1                                       (8)
#define FEC_LTPC_CUIF_L_INI_PCFE2_INPUT6_tx_cbw_cc1                                       (8)
#define FEC_LTPC_CUIF_M_INI_PCFE2_INPUT6_tx_cbw_cc1                                       (0x0000FF00)
#define FEC_LTPC_CUIF_P_INI_PCFE2_INPUT6_tx_cbw_cc0                                       (0)
#define FEC_LTPC_CUIF_L_INI_PCFE2_INPUT6_tx_cbw_cc0                                       (8)
#define FEC_LTPC_CUIF_M_INI_PCFE2_INPUT6_tx_cbw_cc0                                       (0x000000FF)

// ---------- INI_DDPC_INPUT0 bit-field ----------
#define FEC_LTPC_CUIF_P_INI_DDPC_INPUT0_ddpc_nor_period_0                                 (16)
#define FEC_LTPC_CUIF_L_INI_DDPC_INPUT0_ddpc_nor_period_0                                 (16)
#define FEC_LTPC_CUIF_M_INI_DDPC_INPUT0_ddpc_nor_period_0                                 (0xFFFF0000)
#define FEC_LTPC_CUIF_P_INI_DDPC_INPUT0_ddpc_nor_period_1                                 (0)
#define FEC_LTPC_CUIF_L_INI_DDPC_INPUT0_ddpc_nor_period_1                                 (16)
#define FEC_LTPC_CUIF_M_INI_DDPC_INPUT0_ddpc_nor_period_1                                 (0x0000FFFF)

// ---------- INI_DDPC_INPUT1 bit-field ----------
#define FEC_LTPC_CUIF_P_INI_DDPC_INPUT1_ddpc_nor_period_2                                 (16)
#define FEC_LTPC_CUIF_L_INI_DDPC_INPUT1_ddpc_nor_period_2                                 (16)
#define FEC_LTPC_CUIF_M_INI_DDPC_INPUT1_ddpc_nor_period_2                                 (0xFFFF0000)
#define FEC_LTPC_CUIF_P_INI_DDPC_INPUT1_ddpc_nor_period_3                                 (0)
#define FEC_LTPC_CUIF_L_INI_DDPC_INPUT1_ddpc_nor_period_3                                 (16)
#define FEC_LTPC_CUIF_M_INI_DDPC_INPUT1_ddpc_nor_period_3                                 (0x0000FFFF)

// ---------- INI_DDPC_INPUT2 bit-field ----------
#define FEC_LTPC_CUIF_P_INI_DDPC_INPUT2_ddpc_e_0                                          (24)
#define FEC_LTPC_CUIF_L_INI_DDPC_INPUT2_ddpc_e_0                                          (8)
#define FEC_LTPC_CUIF_M_INI_DDPC_INPUT2_ddpc_e_0                                          (0xFF000000)
#define FEC_LTPC_CUIF_P_INI_DDPC_INPUT2_ddpc_e_1                                          (16)
#define FEC_LTPC_CUIF_L_INI_DDPC_INPUT2_ddpc_e_1                                          (8)
#define FEC_LTPC_CUIF_M_INI_DDPC_INPUT2_ddpc_e_1                                          (0x00FF0000)
#define FEC_LTPC_CUIF_P_INI_DDPC_INPUT2_ddpc_e_2                                          (8)
#define FEC_LTPC_CUIF_L_INI_DDPC_INPUT2_ddpc_e_2                                          (8)
#define FEC_LTPC_CUIF_M_INI_DDPC_INPUT2_ddpc_e_2                                          (0x0000FF00)
#define FEC_LTPC_CUIF_P_INI_DDPC_INPUT2_ddpc_e_3                                          (0)
#define FEC_LTPC_CUIF_L_INI_DDPC_INPUT2_ddpc_e_3                                          (8)
#define FEC_LTPC_CUIF_M_INI_DDPC_INPUT2_ddpc_e_3                                          (0x000000FF)

// ---------- INI_RFIC_CS_INPUT0 bit-field ----------
#define FEC_LTPC_CUIF_P_INI_RFIC_CS_INPUT0_rfic_cs                                        (0)
#define FEC_LTPC_CUIF_L_INI_RFIC_CS_INPUT0_rfic_cs                                        (8)
#define FEC_LTPC_CUIF_M_INI_RFIC_CS_INPUT0_rfic_cs                                        (0x000000FF)

// ---------- INI_PGA_LENGTH_INPUT0 bit-field ----------
#define FEC_LTPC_CUIF_P_INI_PGA_LENGTH_INPUT0_pga_length                                  (16)
#define FEC_LTPC_CUIF_L_INI_PGA_LENGTH_INPUT0_pga_length                                  (4)
#define FEC_LTPC_CUIF_M_INI_PGA_LENGTH_INPUT0_pga_length                                  (0x000F0000)

// ---------- INI_PMIC_LENGTH_INPUT0 bit-field ----------
#define FEC_LTPC_CUIF_P_INI_PMIC_LENGTH_INPUT0_pmic_length                                  (16)
#define FEC_LTPC_CUIF_L_INI_PMIC_LENGTH_INPUT0_pmic_length                                  (8)
#define FEC_LTPC_CUIF_M_INI_PMIC_LENGTH_INPUT0_pmic_length                                  (0x00FF0000)

// ---------- INI_MIPI_LENGTH_INPUT0 bit-field ----------
#define FEC_LTPC_CUIF_P_INI_MIPI_LENGTH_INPUT0_mipiI_length_apt                           (16)
#define FEC_LTPC_CUIF_L_INI_MIPI_LENGTH_INPUT0_mipiI_length_apt                           (8)
#define FEC_LTPC_CUIF_M_INI_MIPI_LENGTH_INPUT0_mipiI_length_apt                           (0x00FF0000)
#define FEC_LTPC_CUIF_P_INI_MIPI_LENGTH_INPUT0_mipiI_length_dpd                           (8)
#define FEC_LTPC_CUIF_L_INI_MIPI_LENGTH_INPUT0_mipiI_length_dpd                           (8)
#define FEC_LTPC_CUIF_M_INI_MIPI_LENGTH_INPUT0_mipiI_length_dpd                           (0x0000FF00)
#define FEC_LTPC_CUIF_P_INI_MIPI_LENGTH_INPUT0_mipiI_length_et                            (0)
#define FEC_LTPC_CUIF_L_INI_MIPI_LENGTH_INPUT0_mipiI_length_et                            (8)
#define FEC_LTPC_CUIF_M_INI_MIPI_LENGTH_INPUT0_mipiI_length_et                            (0x000000FF)

// ---------- INI_MIPI_LENGTH_INPUT1 bit-field ----------
#define FEC_LTPC_CUIF_P_INI_MIPI_LENGTH_INPUT1_mipiI_length_apt                           (16)
#define FEC_LTPC_CUIF_L_INI_MIPI_LENGTH_INPUT1_mipiI_length_apt                           (8)
#define FEC_LTPC_CUIF_M_INI_MIPI_LENGTH_INPUT1_mipiI_length_apt                           (0x00FF0000)
#define FEC_LTPC_CUIF_P_INI_MIPI_LENGTH_INPUT1_mipiI_length_dpd                           (8)
#define FEC_LTPC_CUIF_L_INI_MIPI_LENGTH_INPUT1_mipiI_length_dpd                           (8)
#define FEC_LTPC_CUIF_M_INI_MIPI_LENGTH_INPUT1_mipiI_length_dpd                           (0x0000FF00)
#define FEC_LTPC_CUIF_P_INI_MIPI_LENGTH_INPUT1_mipiI_length_et                            (0)
#define FEC_LTPC_CUIF_L_INI_MIPI_LENGTH_INPUT1_mipiI_length_et                            (8)
#define FEC_LTPC_CUIF_M_INI_MIPI_LENGTH_INPUT1_mipiI_length_et                            (0x000000FF)

// ---------- INIT_ROUTE_INFO0 bit-field ----------
#define FEC_LTPC_CUIF_P_INIT_ROUTE_INFO0_route_idx                                        (0)
#define FEC_LTPC_CUIF_L_INIT_ROUTE_INFO0_route_idx                                        (16)
#define FEC_LTPC_CUIF_M_INIT_ROUTE_INFO0_route_idx                                        (0x0000FFFF)

// ---------- INI_CAL_DL_INFO0 bit-field ----------
#define FEC_LTPC_CUIF_P_INI_CAL_DL_INFO0_bypass_filter_mode_switch                        (24)
#define FEC_LTPC_CUIF_L_INI_CAL_DL_INFO0_bypass_filter_mode_switch                        (1)
#define FEC_LTPC_CUIF_M_INI_CAL_DL_INFO0_bypass_filter_mode_switch                        (0x01000000)
#define FEC_LTPC_CUIF_P_INI_CAL_DL_INFO0_subband_scc_hrm_switch                           (16)
#define FEC_LTPC_CUIF_L_INI_CAL_DL_INFO0_subband_scc_hrm_switch                           (1)
#define FEC_LTPC_CUIF_M_INI_CAL_DL_INFO0_subband_scc_hrm_switch                           (0x00010000)
#define FEC_LTPC_CUIF_P_INI_CAL_DL_INFO0_band_bw_switch                                   (8)
#define FEC_LTPC_CUIF_L_INI_CAL_DL_INFO0_band_bw_switch                                   (1)
#define FEC_LTPC_CUIF_M_INI_CAL_DL_INFO0_band_bw_switch                                   (0x00000100)
#define FEC_LTPC_CUIF_P_INI_CAL_DL_INFO0_rat_switch                                       (0)
#define FEC_LTPC_CUIF_L_INI_CAL_DL_INFO0_rat_switch                                       (1)
#define FEC_LTPC_CUIF_M_INI_CAL_DL_INFO0_rat_switch                                       (0x00000001)

// ---------- INI_CAL_DL_INFO1 bit-field ----------
#define FEC_LTPC_CUIF_P_INI_CAL_DL_INFO1_band_idx                                         (16)
#define FEC_LTPC_CUIF_L_INI_CAL_DL_INFO1_band_idx                                         (16)
#define FEC_LTPC_CUIF_M_INI_CAL_DL_INFO1_band_idx                                         (0xFFFF0000)
#define FEC_LTPC_CUIF_P_INI_CAL_DL_INFO1_cal_dl_sfbdy                                     (0)
#define FEC_LTPC_CUIF_L_INI_CAL_DL_INFO1_cal_dl_sfbdy                                     (16)
#define FEC_LTPC_CUIF_M_INI_CAL_DL_INFO1_cal_dl_sfbdy                                     (0x0000FFFF)

// ---------- INI_CAL_DL_INFO2 bit-field ----------
#define FEC_LTPC_CUIF_P_INI_CAL_DL_INFO2_dyn_cal_table_addr                               (0)
#define FEC_LTPC_CUIF_L_INI_CAL_DL_INFO2_dyn_cal_table_addr                               (32)
#define FEC_LTPC_CUIF_M_INI_CAL_DL_INFO2_dyn_cal_table_addr                               (0xFFFFFFFF)

// ---------- INI_CAL_DL_INFO3 bit-field ----------
#define FEC_LTPC_CUIF_P_INI_CAL_DL_INFO3_sta_cal_table_addr                               (0)
#define FEC_LTPC_CUIF_L_INI_CAL_DL_INFO3_sta_cal_table_addr                               (32)
#define FEC_LTPC_CUIF_M_INI_CAL_DL_INFO3_sta_cal_table_addr                               (0xFFFFFFFF)

// ---------- INI_CAL_DL_INFO4 bit-field ----------
#define FEC_LTPC_CUIF_P_INI_CAL_DL_INFO4_cw_table_addr                                    (0)
#define FEC_LTPC_CUIF_L_INI_CAL_DL_INFO4_cw_table_addr                                    (32)
#define FEC_LTPC_CUIF_M_INI_CAL_DL_INFO4_cw_table_addr                                    (0xFFFFFFFF)

// ---------- INI_TX_INIT_END_INFO bit-field ----------
#define FEC_LTPC_CUIF_P_INI_TX_INIT_END_INFO_tx_init_end                                  (0)
#define FEC_LTPC_CUIF_L_INI_TX_INIT_END_INFO_tx_init_end                                  (1)
#define FEC_LTPC_CUIF_M_INI_TX_INIT_END_INFO_tx_init_end                                  (0x00000001)

// ---------- INI_NRT_UPDATE bit-field ----------
#define FEC_LTPC_CUIF_P_INI_NRT_UPDATE_nrt_ready_bit                                      (0)
#define FEC_LTPC_CUIF_L_INI_NRT_UPDATE_nrt_ready_bit                                      (1)
#define FEC_LTPC_CUIF_M_INI_NRT_UPDATE_nrt_ready_bit                                      (0x00000001)

// ---------- INI_CALDL_CHK bit-field ----------
#define FEC_LTPC_CUIF_P_INI_CALDL_CHK_ready_bit                                           (0)
#define FEC_LTPC_CUIF_L_INI_CALDL_CHK_ready_bit                                           (1)
#define FEC_LTPC_CUIF_M_INI_CALDL_CHK_ready_bit                                           (0x00000001)

// ---------- INI_INIT_END_CHK bit-field ----------
#define FEC_LTPC_CUIF_P_INI_INIT_END_CHK_ready_bit                                        (0)
#define FEC_LTPC_CUIF_L_INI_INIT_END_CHK_ready_bit                                        (1)
#define FEC_LTPC_CUIF_M_INI_INIT_END_CHK_ready_bit                                        (0x00000001)


// ---------- TESTMODE_CHANNEL_BMP_SLOT0 bit-field ----------
#define FEC_LTPC_CUIF_P_TESTMODE_CHANNEL_BMP_SLOT0_CHANNEL_BMP_CC1                        (16)
#define FEC_LTPC_CUIF_L_TESTMODE_CHANNEL_BMP_SLOT0_CHANNEL_BMP_CC1                        (16)
#define FEC_LTPC_CUIF_M_TESTMODE_CHANNEL_BMP_SLOT0_CHANNEL_BMP_CC1                        (0xFFFF0000)
#define FEC_LTPC_CUIF_P_TESTMODE_CHANNEL_BMP_SLOT0_CHANNEL_BMP_CC0                        (0)
#define FEC_LTPC_CUIF_L_TESTMODE_CHANNEL_BMP_SLOT0_CHANNEL_BMP_CC0                        (16)
#define FEC_LTPC_CUIF_M_TESTMODE_CHANNEL_BMP_SLOT0_CHANNEL_BMP_CC0                        (0x0000FFFF)

// ---------- TESTMODE_POUT_RB_SLOT0 bit-field ----------
#define FEC_LTPC_CUIF_P_TESTMODE_POUT_RB_SLOT0_Pout                                       (16)
#define FEC_LTPC_CUIF_L_TESTMODE_POUT_RB_SLOT0_Pout                                       (16)
#define FEC_LTPC_CUIF_M_TESTMODE_POUT_RB_SLOT0_Pout                                       (0xFFFF0000)
#define FEC_LTPC_CUIF_P_TESTMODE_POUT_RB_SLOT0_RB_num                                     (0)
#define FEC_LTPC_CUIF_L_TESTMODE_POUT_RB_SLOT0_RB_num                                     (16)
#define FEC_LTPC_CUIF_M_TESTMODE_POUT_RB_SLOT0_RB_num                                     (0x0000FFFF)

// ---------- TESTMODE_PA_RF_SLOT0 bit-field ----------
#define FEC_LTPC_CUIF_P_TESTMODE_PA_RF_SLOT0_PA_gain                                      (16)
#define FEC_LTPC_CUIF_L_TESTMODE_PA_RF_SLOT0_PA_gain                                      (16)
#define FEC_LTPC_CUIF_M_TESTMODE_PA_RF_SLOT0_PA_gain                                      (0xFFFF0000)
#define FEC_LTPC_CUIF_P_TESTMODE_PA_RF_SLOT0_RF_gain                                      (0)
#define FEC_LTPC_CUIF_L_TESTMODE_PA_RF_SLOT0_RF_gain                                      (16)
#define FEC_LTPC_CUIF_M_TESTMODE_PA_RF_SLOT0_RF_gain                                      (0x0000FFFF)

// ---------- TESTMODE_GBB2_COMP_ER_SLOT0 bit-field ----------
#define FEC_LTPC_CUIF_P_TESTMODE_GBB2_COMP_ER_SLOT0_GBB2_gain                             (16)
#define FEC_LTPC_CUIF_L_TESTMODE_GBB2_COMP_ER_SLOT0_GBB2_gain                             (16)
#define FEC_LTPC_CUIF_M_TESTMODE_GBB2_COMP_ER_SLOT0_GBB2_gain                             (0xFFFF0000)
#define FEC_LTPC_CUIF_P_TESTMODE_GBB2_COMP_ER_SLOT0_Comp_error                            (0)
#define FEC_LTPC_CUIF_L_TESTMODE_GBB2_COMP_ER_SLOT0_Comp_error                            (16)
#define FEC_LTPC_CUIF_M_TESTMODE_GBB2_COMP_ER_SLOT0_Comp_error                            (0x0000FFFF)

// ---------- TESTMODE_CHANNEL_BMP_SLOT1 bit-field ----------
#define FEC_LTPC_CUIF_P_TESTMODE_CHANNEL_BMP_SLOT1_CHANNEL_BMP_CC1                        (16)
#define FEC_LTPC_CUIF_L_TESTMODE_CHANNEL_BMP_SLOT1_CHANNEL_BMP_CC1                        (16)
#define FEC_LTPC_CUIF_M_TESTMODE_CHANNEL_BMP_SLOT1_CHANNEL_BMP_CC1                        (0xFFFF0000)
#define FEC_LTPC_CUIF_P_TESTMODE_CHANNEL_BMP_SLOT1_CHANNEL_BMP_CC0                        (0)
#define FEC_LTPC_CUIF_L_TESTMODE_CHANNEL_BMP_SLOT1_CHANNEL_BMP_CC0                        (16)
#define FEC_LTPC_CUIF_M_TESTMODE_CHANNEL_BMP_SLOT1_CHANNEL_BMP_CC0                        (0x0000FFFF)

// ---------- TESTMODE_POUT_RB_SLOT1 bit-field ----------
#define FEC_LTPC_CUIF_P_TESTMODE_POUT_RB_SLOT1_Pout                                       (16)
#define FEC_LTPC_CUIF_L_TESTMODE_POUT_RB_SLOT1_Pout                                       (16)
#define FEC_LTPC_CUIF_M_TESTMODE_POUT_RB_SLOT1_Pout                                       (0xFFFF0000)
#define FEC_LTPC_CUIF_P_TESTMODE_POUT_RB_SLOT1_RB_num                                     (0)
#define FEC_LTPC_CUIF_L_TESTMODE_POUT_RB_SLOT1_RB_num                                     (16)
#define FEC_LTPC_CUIF_M_TESTMODE_POUT_RB_SLOT1_RB_num                                     (0x0000FFFF)

// ---------- TESTMODE_PA_RF_SLOT1 bit-field ----------
#define FEC_LTPC_CUIF_P_TESTMODE_PA_RF_SLOT1_PA_gain                                      (16)
#define FEC_LTPC_CUIF_L_TESTMODE_PA_RF_SLOT1_PA_gain                                      (16)
#define FEC_LTPC_CUIF_M_TESTMODE_PA_RF_SLOT1_PA_gain                                      (0xFFFF0000)
#define FEC_LTPC_CUIF_P_TESTMODE_PA_RF_SLOT1_RF_gain                                      (0)
#define FEC_LTPC_CUIF_L_TESTMODE_PA_RF_SLOT1_RF_gain                                      (16)
#define FEC_LTPC_CUIF_M_TESTMODE_PA_RF_SLOT1_RF_gain                                      (0x0000FFFF)

// ---------- TESTMODE_GBB2_COMP_ER_SLOT1 bit-field ----------
#define FEC_LTPC_CUIF_P_TESTMODE_GBB2_COMP_ER_SLOT1_GBB2_gain                             (16)
#define FEC_LTPC_CUIF_L_TESTMODE_GBB2_COMP_ER_SLOT1_GBB2_gain                             (16)
#define FEC_LTPC_CUIF_M_TESTMODE_GBB2_COMP_ER_SLOT1_GBB2_gain                             (0xFFFF0000)
#define FEC_LTPC_CUIF_P_TESTMODE_GBB2_COMP_ER_SLOT1_Comp_error                            (0)
#define FEC_LTPC_CUIF_L_TESTMODE_GBB2_COMP_ER_SLOT1_Comp_error                            (16)
#define FEC_LTPC_CUIF_M_TESTMODE_GBB2_COMP_ER_SLOT1_Comp_error                            (0x0000FFFF)

// ---------- TESTMODE_CHANNEL_BMP_SYM12 bit-field ----------
#define FEC_LTPC_CUIF_P_TESTMODE_CHANNEL_BMP_SYM12_CHANNEL_BMP_CC1                        (16)
#define FEC_LTPC_CUIF_L_TESTMODE_CHANNEL_BMP_SYM12_CHANNEL_BMP_CC1                        (16)
#define FEC_LTPC_CUIF_M_TESTMODE_CHANNEL_BMP_SYM12_CHANNEL_BMP_CC1                        (0xFFFF0000)
#define FEC_LTPC_CUIF_P_TESTMODE_CHANNEL_BMP_SYM12_CHANNEL_BMP_CC0                        (0)
#define FEC_LTPC_CUIF_L_TESTMODE_CHANNEL_BMP_SYM12_CHANNEL_BMP_CC0                        (16)
#define FEC_LTPC_CUIF_M_TESTMODE_CHANNEL_BMP_SYM12_CHANNEL_BMP_CC0                        (0x0000FFFF)

// ---------- TESTMODE_POUT_RB_SYM12 bit-field ----------
#define FEC_LTPC_CUIF_P_TESTMODE_POUT_RB_SYM12_Pout                                       (16)
#define FEC_LTPC_CUIF_L_TESTMODE_POUT_RB_SYM12_Pout                                       (16)
#define FEC_LTPC_CUIF_M_TESTMODE_POUT_RB_SYM12_Pout                                       (0xFFFF0000)
#define FEC_LTPC_CUIF_P_TESTMODE_POUT_RB_SYM12_RB_num                                     (0)
#define FEC_LTPC_CUIF_L_TESTMODE_POUT_RB_SYM12_RB_num                                     (16)
#define FEC_LTPC_CUIF_M_TESTMODE_POUT_RB_SYM12_RB_num                                     (0x0000FFFF)

// ---------- TESTMODE_PA_RF_SYM12 bit-field ----------
#define FEC_LTPC_CUIF_P_TESTMODE_PA_RF_SYM12_PA_gain                                      (16)
#define FEC_LTPC_CUIF_L_TESTMODE_PA_RF_SYM12_PA_gain                                      (16)
#define FEC_LTPC_CUIF_M_TESTMODE_PA_RF_SYM12_PA_gain                                      (0xFFFF0000)
#define FEC_LTPC_CUIF_P_TESTMODE_PA_RF_SYM12_RF_gain                                      (0)
#define FEC_LTPC_CUIF_L_TESTMODE_PA_RF_SYM12_RF_gain                                      (16)
#define FEC_LTPC_CUIF_M_TESTMODE_PA_RF_SYM12_RF_gain                                      (0x0000FFFF)

// ---------- TESTMODE_GBB2_COMP_ER_SYM12 bit-field ----------
#define FEC_LTPC_CUIF_P_TESTMODE_GBB2_COMP_ER_SYM12_GBB2_gain                             (16)
#define FEC_LTPC_CUIF_L_TESTMODE_GBB2_COMP_ER_SYM12_GBB2_gain                             (16)
#define FEC_LTPC_CUIF_M_TESTMODE_GBB2_COMP_ER_SYM12_GBB2_gain                             (0xFFFF0000)
#define FEC_LTPC_CUIF_P_TESTMODE_GBB2_COMP_ER_SYM12_Comp_error                            (0)
#define FEC_LTPC_CUIF_L_TESTMODE_GBB2_COMP_ER_SYM12_Comp_error                            (16)
#define FEC_LTPC_CUIF_M_TESTMODE_GBB2_COMP_ER_SYM12_Comp_error                            (0x0000FFFF)

// ---------- TESTMODE_CHANNEL_BMP_SYM13 bit-field ----------
#define FEC_LTPC_CUIF_P_TESTMODE_CHANNEL_BMP_SYM13_CHANNEL_BMP_CC1                        (16)
#define FEC_LTPC_CUIF_L_TESTMODE_CHANNEL_BMP_SYM13_CHANNEL_BMP_CC1                        (16)
#define FEC_LTPC_CUIF_M_TESTMODE_CHANNEL_BMP_SYM13_CHANNEL_BMP_CC1                        (0xFFFF0000)
#define FEC_LTPC_CUIF_P_TESTMODE_CHANNEL_BMP_SYM13_CHANNEL_BMP_CC0                        (0)
#define FEC_LTPC_CUIF_L_TESTMODE_CHANNEL_BMP_SYM13_CHANNEL_BMP_CC0                        (16)
#define FEC_LTPC_CUIF_M_TESTMODE_CHANNEL_BMP_SYM13_CHANNEL_BMP_CC0                        (0x0000FFFF)

// ---------- TESTMODE_POUT_RB_SYM13 bit-field ----------
#define FEC_LTPC_CUIF_P_TESTMODE_POUT_RB_SYM13_Pout                                       (16)
#define FEC_LTPC_CUIF_L_TESTMODE_POUT_RB_SYM13_Pout                                       (16)
#define FEC_LTPC_CUIF_M_TESTMODE_POUT_RB_SYM13_Pout                                       (0xFFFF0000)
#define FEC_LTPC_CUIF_P_TESTMODE_POUT_RB_SYM13_RB_num                                     (0)
#define FEC_LTPC_CUIF_L_TESTMODE_POUT_RB_SYM13_RB_num                                     (16)
#define FEC_LTPC_CUIF_M_TESTMODE_POUT_RB_SYM13_RB_num                                     (0x0000FFFF)

// ---------- TESTMODE_PA_RF_SYM13 bit-field ----------
#define FEC_LTPC_CUIF_P_TESTMODE_PA_RF_SYM13_PA_gain                                      (16)
#define FEC_LTPC_CUIF_L_TESTMODE_PA_RF_SYM13_PA_gain                                      (16)
#define FEC_LTPC_CUIF_M_TESTMODE_PA_RF_SYM13_PA_gain                                      (0xFFFF0000)
#define FEC_LTPC_CUIF_P_TESTMODE_PA_RF_SYM13_RF_gain                                      (0)
#define FEC_LTPC_CUIF_L_TESTMODE_PA_RF_SYM13_RF_gain                                      (16)
#define FEC_LTPC_CUIF_M_TESTMODE_PA_RF_SYM13_RF_gain                                      (0x0000FFFF)

// ---------- TESTMODE_GBB2_COMP_ER_SYM13 bit-field ----------
#define FEC_LTPC_CUIF_P_TESTMODE_GBB2_COMP_ER_SYM13_GBB2_gain                             (16)
#define FEC_LTPC_CUIF_L_TESTMODE_GBB2_COMP_ER_SYM13_GBB2_gain                             (16)
#define FEC_LTPC_CUIF_M_TESTMODE_GBB2_COMP_ER_SYM13_GBB2_gain                             (0xFFFF0000)
#define FEC_LTPC_CUIF_P_TESTMODE_GBB2_COMP_ER_SYM13_Comp_error                            (0)
#define FEC_LTPC_CUIF_L_TESTMODE_GBB2_COMP_ER_SYM13_Comp_error                            (16)
#define FEC_LTPC_CUIF_M_TESTMODE_GBB2_COMP_ER_SYM13_Comp_error                            (0x0000FFFF)

// ---------- TEMP_CHANGE_FLAG bit-field ----------
#define FEC_LTPC_CUIF_P_TEMP_CHANGE_FLAG_TEMP_CHANGE_FLAG                                 (0)
#define FEC_LTPC_CUIF_L_TEMP_CHANGE_FLAG_TEMP_CHANGE_FLAG                                 (1)
#define FEC_LTPC_CUIF_M_TEMP_CHANGE_FLAG_TEMP_CHANGE_FLAG                                 (0x00000001)

// ---------- OFF_PMIC_CHANGE_FLAG bit-field ----------
#define FEC_LTPC_CUIF_P_OFF_PMIC_CHANGE_FLAG_off_pmic_change_flag                         (16)
#define FEC_LTPC_CUIF_L_OFF_PMIC_CHANGE_FLAG_off_pmic_change_flag                         (16)
#define FEC_LTPC_CUIF_M_OFF_PMIC_CHANGE_FLAG_off_pmic_change_flag                         (0xFFFF0000)
#define FEC_LTPC_CUIF_P_OFF_PMIC_CHANGE_FLAG_off_pmic_prf_th                              (0)
#define FEC_LTPC_CUIF_L_OFF_PMIC_CHANGE_FLAG_off_pmic_prf_th                              (16)
#define FEC_LTPC_CUIF_M_OFF_PMIC_CHANGE_FLAG_off_pmic_prf_th                              (0x0000FFFF)

// ---------- OFF_PMIC_CW_H bit-field ----------
#define FEC_LTPC_CUIF_P_OFF_PMIC_CW_H_off_pmic_cw_h                                       (0)
#define FEC_LTPC_CUIF_L_OFF_PMIC_CW_H_off_pmic_cw_h                                       (32)
#define FEC_LTPC_CUIF_M_OFF_PMIC_CW_H_off_pmic_cw_h                                       (0xFFFFFFFF)

// ---------- OFF_PMIC_CW_L bit-field ----------
#define FEC_LTPC_CUIF_P_OFF_PMIC_CW_L_off_pmic_cw_l                                       (0)
#define FEC_LTPC_CUIF_L_OFF_PMIC_CW_L_off_pmic_cw_l                                       (32)
#define FEC_LTPC_CUIF_M_OFF_PMIC_CW_L_off_pmic_cw_l                                       (0xFFFFFFFF)

// ---------- POWER_LIMIT_THRES bit-field ----------
#define FEC_LTPC_CUIF_P_POWER_LIMIT_THRES_th_cmeas_db                                     (0)
#define FEC_LTPC_CUIF_L_POWER_LIMIT_THRES_th_cmeas_db                                     (16)
#define FEC_LTPC_CUIF_M_POWER_LIMIT_THRES_th_cmeas_db                                     (0x0000FFFF)

// ---------- GAIN_RPT bit-field ----------
#define FEC_LTPC_CUIF_P_GAIN_RPT_pa_gain_rpt                                              (16)
#define FEC_LTPC_CUIF_L_GAIN_RPT_pa_gain_rpt                                              (16)
#define FEC_LTPC_CUIF_M_GAIN_RPT_pa_gain_rpt                                              (0xFFFF0000)
#define FEC_LTPC_CUIF_P_GAIN_RPT_temper_comp_rpt                                          (0)
#define FEC_LTPC_CUIF_L_GAIN_RPT_temper_comp_rpt                                          (16)
#define FEC_LTPC_CUIF_M_GAIN_RPT_temper_comp_rpt                                          (0x0000FFFF)

// ---------- GAIN2_RPT bit-field ----------
#define FEC_LTPC_CUIF_P_GAIN_RPT_rf_gain_rpt                                              (16)
#define FEC_LTPC_CUIF_L_GAIN_RPT_rf_gain_rpt                                              (16)
#define FEC_LTPC_CUIF_M_GAIN_RPT_rf_gain_rpt                                              (0xFFFF0000)
#define FEC_LTPC_CUIF_P_GAIN_RPT_bb_gain_rpt                                              (0)
#define FEC_LTPC_CUIF_L_GAIN_RPT_bb_gain_rpt                                              (16)
#define FEC_LTPC_CUIF_M_GAIN_RPT_bb_gain_rpt                                              (0x0000FFFF)


// ---------- MEAS_RPT bit-field ----------
#define FEC_LTPC_CUIF_P_MEAS_RPT_ppa_dbm_rpt                                              (16)
#define FEC_LTPC_CUIF_L_MEAS_RPT_ppa_dbm_rpt                                              (16)
#define FEC_LTPC_CUIF_M_MEAS_RPT_ppa_dbm_rpt                                              (0xFFFF0000)
#define FEC_LTPC_CUIF_P_MEAS_RPT_cmeas_rf_rpt                                             (0)
#define FEC_LTPC_CUIF_L_MEAS_RPT_cmeas_rf_rpt                                             (16)
#define FEC_LTPC_CUIF_M_MEAS_RPT_cmeas_rf_rpt                                             (0x0000FFFF)

// ---------- IDX_RPT bit-field ----------
#define FEC_LTPC_CUIF_P_IDX_RPT_sync_id_rpt                                               (16)
#define FEC_LTPC_CUIF_L_IDX_RPT_sync_id_rpt                                               (16)
#define FEC_LTPC_CUIF_M_IDX_RPT_sync_id_rpt                                               (0xFFFF0000)
#define FEC_LTPC_CUIF_P_IDX_RPT_pa_mode_rpt                                               (8)
#define FEC_LTPC_CUIF_L_IDX_RPT_pa_mode_rpt                                               (8)
#define FEC_LTPC_CUIF_M_IDX_RPT_pa_mode_rpt                                               (0x0000FF00)
#define FEC_LTPC_CUIF_P_IDX_RPT_idx_pa_rpt                                                (0)
#define FEC_LTPC_CUIF_L_IDX_RPT_idx_pa_rpt                                                (8)
#define FEC_LTPC_CUIF_M_IDX_RPT_idx_pa_rpt                                                (0x000000FF)

// ---------- TEMP_DEGREE bit-field ----------
#define FEC_LTPC_CUIF_P_TEMP_DEGREE_temp_degree_Celsius                                   (0)
#define FEC_LTPC_CUIF_L_TEMP_DEGREE_temp_degree_Celsius                                   (16)
#define FEC_LTPC_CUIF_M_TEMP_DEGREE_temp_degree_Celsius                                   (0x0000FFFF)

// ---------- PA_CPL_H_TEMP_COMP bit-field ----------
#define FEC_LTPC_CUIF_P_PA_CPL_H_TEMP_COMP_pa_h_temp_comp                                 (16)
#define FEC_LTPC_CUIF_L_PA_CPL_H_TEMP_COMP_pa_h_temp_comp                                 (16)
#define FEC_LTPC_CUIF_M_PA_CPL_H_TEMP_COMP_pa_h_temp_comp                                 (0xFFFF0000)
#define FEC_LTPC_CUIF_P_PA_CPL_H_TEMP_COMP_cpl_h_temp_comp                                (0)
#define FEC_LTPC_CUIF_L_PA_CPL_H_TEMP_COMP_cpl_h_temp_comp                                (16)
#define FEC_LTPC_CUIF_M_PA_CPL_H_TEMP_COMP_cpl_h_temp_comp                                (0x0000FFFF)

// ---------- PA_CPL_M_TEMP_COMP bit-field ----------
#define FEC_LTPC_CUIF_P_PA_CPL_M_TEMP_COMP_pa_m_temp_comp                                 (16)
#define FEC_LTPC_CUIF_L_PA_CPL_M_TEMP_COMP_pa_m_temp_comp                                 (16)
#define FEC_LTPC_CUIF_M_PA_CPL_M_TEMP_COMP_pa_m_temp_comp                                 (0xFFFF0000)
#define FEC_LTPC_CUIF_P_PA_CPL_M_TEMP_COMP_cpl_m_temp_comp                                (0)
#define FEC_LTPC_CUIF_L_PA_CPL_M_TEMP_COMP_cpl_m_temp_comp                                (16)
#define FEC_LTPC_CUIF_M_PA_CPL_M_TEMP_COMP_cpl_m_temp_comp                                (0x0000FFFF)

// ---------- PA_CPL_L_TEMP_COMP bit-field ----------
#define FEC_LTPC_CUIF_P_PA_CPL_L_TEMP_COMP_pa_l_temp_comp                                 (16)
#define FEC_LTPC_CUIF_L_PA_CPL_L_TEMP_COMP_pa_l_temp_comp                                 (16)
#define FEC_LTPC_CUIF_M_PA_CPL_L_TEMP_COMP_pa_l_temp_comp                                 (0xFFFF0000)
#define FEC_LTPC_CUIF_P_PA_CPL_L_TEMP_COMP_cpl_l_temp_comp                                (0)
#define FEC_LTPC_CUIF_L_PA_CPL_L_TEMP_COMP_cpl_l_temp_comp                                (16)
#define FEC_LTPC_CUIF_M_PA_CPL_L_TEMP_COMP_cpl_l_temp_comp                                (0x0000FFFF)

/*********************************************** L01****************************************************/

// ---------- FEC_L_TX_L01 word-offset  ----------
#define FEC_LTPC_CUIF_O_SUB_CONTROL_INPUT0(i)                                             (0)
#define FEC_LTPC_CUIF_O_SUB_CONTROL_INPUT1(i)                                             (1)
#define FEC_LTPC_CUIF_O_SUB_CONTROL_INPUT2(i)                                             (2)
#define FEC_LTPC_CUIF_O_TX_SF_CC_INFO(i)                                                  (3)
#define FEC_LTPC_CUIF_O_TX_SF_PARAMS0(i)                                                  (4)
#define FEC_LTPC_CUIF_O_TX_SF_PARAMS1(i)                                                  (5)
#define FEC_LTPC_CUIF_O_TX_SF_PARAMS2(i)                                                  (6)
#define FEC_LTPC_CUIF_O_TX_SF_PARAMS3(i)                                                  (7)
#define FEC_LTPC_CUIF_O_TX_SF_CH0(i)                                                      (8)
#define FEC_LTPC_CUIF_O_TX_SF_CH1(i)                                                      (9)
#define FEC_LTPC_CUIF_O_TX_CANCELREQ(i)                                                   (10)
#define FEC_LTPC_CUIF_O_DBG_FORCE_OP_INPUT(i)                                             (11)
#define FEC_LTPC_CUIF_O_DBG_FORCE_PA_INPUT(i)                                             (12)
#define FEC_LTPC_CUIF_O_DBG_FORCE_PGA_INPUT(i)                                            (13)
#define FEC_LTPC_CUIF_O_CUIF_READY(i)                                                     (14)
#define FEC_LTPC_CUIF_O_TXREQ_CUIF_READY(i)                                               (15)
#define FEC_LTPC_CUIF_O_TEST_CASE(i)                                                      (16)
#define FEC_LTPC_CUIF_O_ANT_OUT_PWR_RPT(i)                                                (17)
#define FEC_LTPC_CUIF_O_ATX_D_GTHERMAL_PARAMS(i)                                          (18)
#define FEC_LTPC_CUIF_O_ATX_D_BB_BKF_APT(i)                                               (19)
#define FEC_LTPC_CUIF_O_ATX_D_BB_BKF_DPD(i)                                               (20)
#define FEC_LTPC_CUIF_O_ATX_D_BB_BKF_ET(i)                                                (21)
#define FEC_LTPC_CUIF_O_ATX_D_BB_BKF_THRES(i)                                             (22)
#define FEC_LTPC_CUIF_O_ATX_D_PTAR_OFFSET(i)                                              (23)
#define FEC_LTPC_CUIF_O_PCFE1_MC_PA_SHIFT(i)                                              (24)
#define FEC_LTPC_CUIF_O_PCFE2_PA_INPUT1(i)                                                (25 + (i))
#define FEC_LTPC_CUIF_O_ATX_INPUT0(i)                                                     (29 + (i))
#define FEC_LTPC_CUIF_O_PCFE2_INPUT0(i)                                                   (32 + (i))
#define FEC_LTPC_CUIF_O_PCFE2_INPUT1(i)                                                   (36 + (i))
#define FEC_LTPC_CUIF_O_PCFE2_INPUT2(i)                                                   (40 + (i))
#define FEC_LTPC_CUIF_O_PCFE2_INPUT3(i)                                                   (44 + (i))
#define FEC_LTPC_CUIF_O_TEST_PA0(i)                                                       (48 + (i))
#define FEC_LTPC_CUIF_O_TEST_PA1(i)                                                       (52 + (i))
#define FEC_LTPC_CUIF_O_TEST_DET(i)                                                       (56 + (i))
#define FEC_LTPC_CUIF_O_TEST_PGA(i)                                                       (60 + (i))
#define FEC_LTPC_CUIF_O_TEST_GTX_BB(i)                                                    (64 + (i))
#define FEC_LTPC_CUIF_O_TEST_CPL(i)                                                       (68 + (i))
#define FEC_LTPC_CUIF_O_TEST_SIB_DUMP(i)                                                  (79)
#define FEC_LTPC_CUIF_O_OP_RPT(i)                                                         (77)
#define FEC_LTPC_CUIF_O_ET_SO_CON0(i)                                                     (80 + (i))
#define FEC_LTPC_CUIF_O_ET_SO_CON1(i)                                                     (81)
#define FEC_LTPC_CUIF_O_ET_SO_RPT(i)                                                      (82)
#define FEC_LTPC_CUIF_O_ET_SO_GEN_CON(i)                                                  (83)
#define FEC_LTPC_CUIF_O_ET_CAL_CON(i)                                                     (84)

// ---------- SUB_CONTROL_INPUT0 bit-field ----------
#define FEC_LTPC_CUIF_P_SUB_CONTROL_INPUT0_mode                                           (24)
#define FEC_LTPC_CUIF_L_SUB_CONTROL_INPUT0_mode                                           (8)
#define FEC_LTPC_CUIF_M_SUB_CONTROL_INPUT0_mode                                           (0xFF000000)
#define FEC_LTPC_CUIF_P_SUB_CONTROL_INPUT0_close_loop_en                                  (0)
#define FEC_LTPC_CUIF_L_SUB_CONTROL_INPUT0_close_loop_en                                  (1)
#define FEC_LTPC_CUIF_M_SUB_CONTROL_INPUT0_close_loop_en                                  (0x00000001)

// ---------- SUB_CONTROL_INPUT1 bit-field ----------
#define FEC_LTPC_CUIF_P_SUB_CONTROL_INPUT1_en_pa_droop                                    (16)
#define FEC_LTPC_CUIF_L_SUB_CONTROL_INPUT1_en_pa_droop                                    (1)
#define FEC_LTPC_CUIF_M_SUB_CONTROL_INPUT1_en_pa_droop                                    (0x00010000)
#define FEC_LTPC_CUIF_P_SUB_CONTROL_INPUT1_en_cpl_droop                                   (8)
#define FEC_LTPC_CUIF_L_SUB_CONTROL_INPUT1_en_cpl_droop                                   (1)
#define FEC_LTPC_CUIF_M_SUB_CONTROL_INPUT1_en_cpl_droop                                   (0x00000100)
#define FEC_LTPC_CUIF_P_SUB_CONTROL_INPUT1_en_res_droop                                   (0)
#define FEC_LTPC_CUIF_L_SUB_CONTROL_INPUT1_en_res_droop                                   (1)
#define FEC_LTPC_CUIF_M_SUB_CONTROL_INPUT1_en_res_droop                                   (0x00000001)

// ---------- SUB_CONTROL_INPUT2 bit-field ----------
#define FEC_LTPC_CUIF_P_SUB_CONTROL_INPUT2_en_PA_swpt_shift                               (16)
#define FEC_LTPC_CUIF_L_SUB_CONTROL_INPUT2_en_PA_swpt_shift                               (1)
#define FEC_LTPC_CUIF_M_SUB_CONTROL_INPUT2_en_PA_swpt_shift                               (0x00010000)
#define FEC_LTPC_CUIF_P_SUB_CONTROL_INPUT2_en_cfr                                         (8)
#define FEC_LTPC_CUIF_L_SUB_CONTROL_INPUT2_en_cfr                                         (1)
#define FEC_LTPC_CUIF_M_SUB_CONTROL_INPUT2_en_cfr                                         (0x00000100)
#define FEC_LTPC_CUIF_P_SUB_CONTROL_INPUT2_cfr_table_mode                                 (0)
#define FEC_LTPC_CUIF_L_SUB_CONTROL_INPUT2_cfr_table_mode                                 (8)
#define FEC_LTPC_CUIF_M_SUB_CONTROL_INPUT2_cfr_table_mode                                 (0x000000FF)

// ---------- TX_SF_CC_INFO bit-field ----------
#define FEC_LTPC_CUIF_P_TX_SF_CC_INFO_cc0_en                                              (24)
#define FEC_LTPC_CUIF_L_TX_SF_CC_INFO_cc0_en                                              (1)
#define FEC_LTPC_CUIF_M_TX_SF_CC_INFO_cc0_en                                              (0x01000000)
#define FEC_LTPC_CUIF_P_TX_SF_CC_INFO_cc1_en                                              (16)
#define FEC_LTPC_CUIF_L_TX_SF_CC_INFO_cc1_en                                              (1)
#define FEC_LTPC_CUIF_M_TX_SF_CC_INFO_cc1_en                                              (0x00010000)
#define FEC_LTPC_CUIF_P_TX_SF_CC_INFO_temp_idx                                            (8)
#define FEC_LTPC_CUIF_L_TX_SF_CC_INFO_temp_idx                                            (8)
#define FEC_LTPC_CUIF_M_TX_SF_CC_INFO_temp_idx                                            (0x0000FF00)
#define FEC_LTPC_CUIF_P_TX_SF_CC_INFO_nor_temp_idx                                        (0)
#define FEC_LTPC_CUIF_L_TX_SF_CC_INFO_nor_temp_idx                                        (8)
#define FEC_LTPC_CUIF_M_TX_SF_CC_INFO_nor_temp_idx                                        (0x000000FF)

// ---------- TX_SF_PARAMS0 bit-field ----------
#define FEC_LTPC_CUIF_P_TX_SF_PARAMS0_tx_sfbdy                                            (16)
#define FEC_LTPC_CUIF_L_TX_SF_PARAMS0_tx_sfbdy                                            (16)
#define FEC_LTPC_CUIF_M_TX_SF_PARAMS0_tx_sfbdy                                            (0xFFFF0000)
#define FEC_LTPC_CUIF_P_TX_SF_PARAMS0_tx_subframe                                         (8)
#define FEC_LTPC_CUIF_L_TX_SF_PARAMS0_tx_subframe                                         (8)
#define FEC_LTPC_CUIF_M_TX_SF_PARAMS0_tx_subframe                                         (0x0000FF00)
#define FEC_LTPC_CUIF_P_TX_SF_PARAMS0_tx_1st                                              (0)
#define FEC_LTPC_CUIF_L_TX_SF_PARAMS0_tx_1st                                              (8)
#define FEC_LTPC_CUIF_M_TX_SF_PARAMS0_tx_1st                                              (0x000000FF)

// ---------- TX_SF_PARAMS1 bit-field ----------
#define FEC_LTPC_CUIF_P_TX_SF_PARAMS1_srs_tpc_on_time                                     (16)
#define FEC_LTPC_CUIF_L_TX_SF_PARAMS1_srs_tpc_on_time                                     (16)
#define FEC_LTPC_CUIF_M_TX_SF_PARAMS1_srs_tpc_on_time                                     (0xFFFF0000)
#define FEC_LTPC_CUIF_P_TX_SF_PARAMS1_tpc_on_time                                         (0)
#define FEC_LTPC_CUIF_L_TX_SF_PARAMS1_tpc_on_time                                         (16)
#define FEC_LTPC_CUIF_M_TX_SF_PARAMS1_tpc_on_time                                         (0x0000FFFF)

// ---------- TX_SF_PARAMS2 bit-field ----------
#define FEC_LTPC_CUIF_P_TX_SF_PARAMS2_p_complement                                        (16)
#define FEC_LTPC_CUIF_L_TX_SF_PARAMS2_p_complement                                        (16)
#define FEC_LTPC_CUIF_M_TX_SF_PARAMS2_p_complement                                        (0xFFFF0000)
#define FEC_LTPC_CUIF_P_TX_SF_PARAMS2_mTAG_pwr_exceed_flag                                (0)
#define FEC_LTPC_CUIF_L_TX_SF_PARAMS2_mTAG_pwr_exceed_flag                                (1)
#define FEC_LTPC_CUIF_M_TX_SF_PARAMS2_mTAG_pwr_exceed_flag                                (0x00000001)

// ---------- TX_SF_PARAMS3 bit-field ----------
#define FEC_LTPC_CUIF_P_TX_SF_PARAMS3_sync_id                                             (0)
#define FEC_LTPC_CUIF_L_TX_SF_PARAMS3_sync_id                                             (32)
#define FEC_LTPC_CUIF_M_TX_SF_PARAMS3_sync_id                                             (0xFFFFFFFF)

// ---------- TX_SF_CH0 bit-field ----------
#define FEC_LTPC_CUIF_P_TX_SF_CH0_srs_sym_cnt                                             (24)
#define FEC_LTPC_CUIF_L_TX_SF_CH0_srs_sym_cnt                                             (8)
#define FEC_LTPC_CUIF_M_TX_SF_CH0_srs_sym_cnt                                             (0xFF000000)
#define FEC_LTPC_CUIF_P_TX_SF_CH0_srs_sym_bmp                                             (16)
#define FEC_LTPC_CUIF_L_TX_SF_CH0_srs_sym_bmp                                             (8)
#define FEC_LTPC_CUIF_M_TX_SF_CH0_srs_sym_bmp                                             (0x00FF0000)
#define FEC_LTPC_CUIF_P_TX_SF_CH0_tpc_req_bmp                                             (0)
#define FEC_LTPC_CUIF_L_TX_SF_CH0_tpc_req_bmp                                             (16)
#define FEC_LTPC_CUIF_M_TX_SF_CH0_tpc_req_bmp                                             (0x0000FFFF)

// ---------- TX_SF_CH1 bit-field ----------
#define FEC_LTPC_CUIF_P_TX_SF_CH1_srs_sym_cnt                                             (24)
#define FEC_LTPC_CUIF_L_TX_SF_CH1_srs_sym_cnt                                             (8)
#define FEC_LTPC_CUIF_M_TX_SF_CH1_srs_sym_cnt                                             (0xFF000000)
#define FEC_LTPC_CUIF_P_TX_SF_CH1_srs_sym_bmp                                             (16)
#define FEC_LTPC_CUIF_L_TX_SF_CH1_srs_sym_bmp                                             (8)
#define FEC_LTPC_CUIF_M_TX_SF_CH1_srs_sym_bmp                                             (0x00FF0000)
#define FEC_LTPC_CUIF_P_TX_SF_CH1_tpc_req_bmp                                             (0)
#define FEC_LTPC_CUIF_L_TX_SF_CH1_tpc_req_bmp                                             (16)
#define FEC_LTPC_CUIF_M_TX_SF_CH1_tpc_req_bmp                                             (0x0000FFFF)

// ---------- TX_CANCELREQ bit-field ----------
#define FEC_LTPC_CUIF_P_TX_CANCELREQ_cancelreq                                            (0)
#define FEC_LTPC_CUIF_L_TX_CANCELREQ_cancelreq                                            (16)
#define FEC_LTPC_CUIF_M_TX_CANCELREQ_cancelreq                                            (0x0000FFFF)

// ---------- DBG_FORCE_OP_INPUT bit-field ----------
#define FEC_LTPC_CUIF_P_DBG_FORCE_OP_INPUT_bypass_dpd                                     (24)
#define FEC_LTPC_CUIF_L_DBG_FORCE_OP_INPUT_bypass_dpd                                     (1)
#define FEC_LTPC_CUIF_M_DBG_FORCE_OP_INPUT_bypass_dpd                                     (0x01000000)
#define FEC_LTPC_CUIF_P_DBG_FORCE_OP_INPUT_bypass_et                                      (16)
#define FEC_LTPC_CUIF_L_DBG_FORCE_OP_INPUT_bypass_et                                      (1)
#define FEC_LTPC_CUIF_M_DBG_FORCE_OP_INPUT_bypass_et                                      (0x00010000)
#define FEC_LTPC_CUIF_P_DBG_FORCE_OP_INPUT_en_force_OP                                    (8)
#define FEC_LTPC_CUIF_L_DBG_FORCE_OP_INPUT_en_force_OP                                    (1)
#define FEC_LTPC_CUIF_M_DBG_FORCE_OP_INPUT_en_force_OP                                    (0x00000100)
#define FEC_LTPC_CUIF_P_DBG_FORCE_OP_INPUT_force_OP_mode                                  (0)
#define FEC_LTPC_CUIF_L_DBG_FORCE_OP_INPUT_force_OP_mode                                  (8)
#define FEC_LTPC_CUIF_M_DBG_FORCE_OP_INPUT_force_OP_mode                                  (0x000000FF)

// ---------- DBG_FORCE_PA_INPUT bit-field ----------
#define FEC_LTPC_CUIF_P_DBG_FORCE_PA_INPUT_en_force_pa_index                              (24)
#define FEC_LTPC_CUIF_L_DBG_FORCE_PA_INPUT_en_force_pa_index                              (1)
#define FEC_LTPC_CUIF_M_DBG_FORCE_PA_INPUT_en_force_pa_index                              (0x01000000)
#define FEC_LTPC_CUIF_P_DBG_FORCE_PA_INPUT_en_force_pa_table                              (16)
#define FEC_LTPC_CUIF_L_DBG_FORCE_PA_INPUT_en_force_pa_table                              (1)
#define FEC_LTPC_CUIF_M_DBG_FORCE_PA_INPUT_en_force_pa_table                              (0x00010000)
#define FEC_LTPC_CUIF_P_DBG_FORCE_PA_INPUT_force_idx_pa                                   (8)
#define FEC_LTPC_CUIF_L_DBG_FORCE_PA_INPUT_force_idx_pa                                   (8)
#define FEC_LTPC_CUIF_M_DBG_FORCE_PA_INPUT_force_idx_pa                                   (0x0000FF00)
#define FEC_LTPC_CUIF_P_DBG_FORCE_PA_INPUT_force_pa_table_mode                            (0)
#define FEC_LTPC_CUIF_L_DBG_FORCE_PA_INPUT_force_pa_table_mode                            (8)
#define FEC_LTPC_CUIF_M_DBG_FORCE_PA_INPUT_force_pa_table_mode                            (0x000000FF)

// ---------- DBG_FORCE_PGA_INPUT bit-field ----------
#define FEC_LTPC_CUIF_P_DBG_FORCE_PGA_INPUT_pga_select_method                             (0)
#define FEC_LTPC_CUIF_L_DBG_FORCE_PGA_INPUT_pga_select_method                             (2)
#define FEC_LTPC_CUIF_M_DBG_FORCE_PGA_INPUT_pga_select_method                             (0x00000003)

// ---------- CUIF_READY bit-field ----------
#define FEC_LTPC_CUIF_P_CUIF_READY_cuif_ready                                             (0)
#define FEC_LTPC_CUIF_L_CUIF_READY_cuif_ready                                             (1)
#define FEC_LTPC_CUIF_M_CUIF_READY_cuif_ready                                             (0x00000001)

// ---------- TXREQ_CUIF_READY bit-field ----------
#define FEC_LTPC_CUIF_P_TXREQ_CUIF_READY_tx_req_cuif_ready                                (0)
#define FEC_LTPC_CUIF_L_TXREQ_CUIF_READY_tx_req_cuif_ready                                (1)
#define FEC_LTPC_CUIF_M_TXREQ_CUIF_READY_tx_req_cuif_ready                                (0x00000001)

// ---------- TEST_CASE bit-field ----------
#define FEC_LTPC_CUIF_P_TEST_CASE_case_num                                                (0)
#define FEC_LTPC_CUIF_L_TEST_CASE_case_num                                                (8)
#define FEC_LTPC_CUIF_M_TEST_CASE_case_num                                                (0x000000FF)

// ---------- ANT_OUT_PWR_RPT bit-field ----------
#define FEC_LTPC_CUIF_P_ANT_OUT_PWR_RPT_ant_out_power_rpt                                 (0)
#define FEC_LTPC_CUIF_L_ANT_OUT_PWR_RPT_ant_out_power_rpt                                 (16)
#define FEC_LTPC_CUIF_M_ANT_OUT_PWR_RPT_ant_out_power_rpt                                 (0x0000FFFF)

// ---------- ATX_D_GTHERMAL_PARAMS bit-field ----------
#define FEC_LTPC_CUIF_P_ATX_D_GTHERMAL_PARAMS_nt_rb_threshold                             (24)
#define FEC_LTPC_CUIF_L_ATX_D_GTHERMAL_PARAMS_nt_rb_threshold                             (8)
#define FEC_LTPC_CUIF_M_ATX_D_GTHERMAL_PARAMS_nt_rb_threshold                             (0xFF000000)
#define FEC_LTPC_CUIF_P_ATX_D_GTHERMAL_PARAMS_Gthermal_bkf_dB_APT                         (16)
#define FEC_LTPC_CUIF_L_ATX_D_GTHERMAL_PARAMS_Gthermal_bkf_dB_APT                         (8)
#define FEC_LTPC_CUIF_M_ATX_D_GTHERMAL_PARAMS_Gthermal_bkf_dB_APT                         (0x00FF0000)
#define FEC_LTPC_CUIF_P_ATX_D_GTHERMAL_PARAMS_Gthermal_bkf_dB_DPD                         (8)
#define FEC_LTPC_CUIF_L_ATX_D_GTHERMAL_PARAMS_Gthermal_bkf_dB_DPD                         (8)
#define FEC_LTPC_CUIF_M_ATX_D_GTHERMAL_PARAMS_Gthermal_bkf_dB_DPD                         (0x0000FF00)
#define FEC_LTPC_CUIF_P_ATX_D_GTHERMAL_PARAMS_Gthermal_bkf_dB_ET                          (0)
#define FEC_LTPC_CUIF_L_ATX_D_GTHERMAL_PARAMS_Gthermal_bkf_dB_ET                          (8)
#define FEC_LTPC_CUIF_M_ATX_D_GTHERMAL_PARAMS_Gthermal_bkf_dB_ET                          (0x000000FF)

// ---------- ATX_D_BB_BKF_APT bit-field ----------
#define FEC_LTPC_CUIF_P_ATX_D_BB_BKF_APT_BB_bkf_APT_sRB_dB                                (0)
#define FEC_LTPC_CUIF_L_ATX_D_BB_BKF_APT_BB_bkf_APT_sRB_dB                                (16)
#define FEC_LTPC_CUIF_M_ATX_D_BB_BKF_APT_BB_bkf_APT_sRB_dB                                (0x0000FFFF)

// ---------- ATX_D_BB_BKF_DPD bit-field ----------
#define FEC_LTPC_CUIF_P_ATX_D_BB_BKF_DPD_BB_bkf_DPD_sRB_dB_0                              (16)
#define FEC_LTPC_CUIF_L_ATX_D_BB_BKF_DPD_BB_bkf_DPD_sRB_dB_0                              (16)
#define FEC_LTPC_CUIF_M_ATX_D_BB_BKF_DPD_BB_bkf_DPD_sRB_dB_0                              (0xFFFF0000)
#define FEC_LTPC_CUIF_P_ATX_D_BB_BKF_DPD_BB_bkf_DPD_sRB_dB_1                              (0)
#define FEC_LTPC_CUIF_L_ATX_D_BB_BKF_DPD_BB_bkf_DPD_sRB_dB_1                              (16)
#define FEC_LTPC_CUIF_M_ATX_D_BB_BKF_DPD_BB_bkf_DPD_sRB_dB_1                              (0x0000FFFF)

// ---------- ATX_D_BB_BKF_ET bit-field ----------
#define FEC_LTPC_CUIF_P_ATX_D_BB_BKF_ET_BB_bkf_ET_sRB_dB_0                                (16)
#define FEC_LTPC_CUIF_L_ATX_D_BB_BKF_ET_BB_bkf_ET_sRB_dB_0                                (16)
#define FEC_LTPC_CUIF_M_ATX_D_BB_BKF_ET_BB_bkf_ET_sRB_dB_0                                (0xFFFF0000)
#define FEC_LTPC_CUIF_P_ATX_D_BB_BKF_ET_BB_bkf_ET_sRB_dB_1                                (0)
#define FEC_LTPC_CUIF_L_ATX_D_BB_BKF_ET_BB_bkf_ET_sRB_dB_1                                (16)
#define FEC_LTPC_CUIF_M_ATX_D_BB_BKF_ET_BB_bkf_ET_sRB_dB_1                                (0x0000FFFF)

// ---------- ATX_D_BB_BKF_THRES bit-field ----------
#define FEC_LTPC_CUIF_P_ATX_D_BB_BKF_THRES_TH_RB_length_APT                               (16)
#define FEC_LTPC_CUIF_L_ATX_D_BB_BKF_THRES_TH_RB_length_APT                               (8)
#define FEC_LTPC_CUIF_M_ATX_D_BB_BKF_THRES_TH_RB_length_APT                               (0x00FF0000)
#define FEC_LTPC_CUIF_P_ATX_D_BB_BKF_THRES_TH_RB_length_DPD                               (8)
#define FEC_LTPC_CUIF_L_ATX_D_BB_BKF_THRES_TH_RB_length_DPD                               (8)
#define FEC_LTPC_CUIF_M_ATX_D_BB_BKF_THRES_TH_RB_length_DPD                               (0x0000FF00)
#define FEC_LTPC_CUIF_P_ATX_D_BB_BKF_THRES_TH_RB_length_ET                                (0)
#define FEC_LTPC_CUIF_L_ATX_D_BB_BKF_THRES_TH_RB_length_ET                                (8)
#define FEC_LTPC_CUIF_M_ATX_D_BB_BKF_THRES_TH_RB_length_ET                                (0x000000FF)

// ---------- ATX_D_PTAR_OFFSET bit-field ----------
#define FEC_LTPC_CUIF_P_ATX_D_PTAR_OFFSET_pwr_thres                                       (16)
#define FEC_LTPC_CUIF_L_ATX_D_PTAR_OFFSET_pwr_thres                                       (16)
#define FEC_LTPC_CUIF_M_ATX_D_PTAR_OFFSET_pwr_thres                                       (0xFFFF0000)
#define FEC_LTPC_CUIF_P_ATX_D_PTAR_OFFSET_Ptar_offset                                     (0)
#define FEC_LTPC_CUIF_L_ATX_D_PTAR_OFFSET_Ptar_offset                                     (16)
#define FEC_LTPC_CUIF_M_ATX_D_PTAR_OFFSET_Ptar_offset                                     (0x0000FFFF)

// ---------- PCFE1_MC_PA_SHIFT bit-field ----------
#define FEC_LTPC_CUIF_P_PCFE1_MC_PA_SHIFT_MC_PA_shift_value                               (0)
#define FEC_LTPC_CUIF_L_PCFE1_MC_PA_SHIFT_MC_PA_shift_value                               (16)
#define FEC_LTPC_CUIF_M_PCFE1_MC_PA_SHIFT_MC_PA_shift_value                               (0x0000FFFF)

// ---------- PCFE2_PA_INPUT1 bit-field ----------
#define FEC_LTPC_CUIF_P_PCFE2_PA_INPUT1_ptar_dbm                                          (16)
#define FEC_LTPC_CUIF_L_PCFE2_PA_INPUT1_ptar_dbm                                          (16)
#define FEC_LTPC_CUIF_M_PCFE2_PA_INPUT1_ptar_dbm                                          (0xFFFF0000)
#define FEC_LTPC_CUIF_P_PCFE2_PA_INPUT1_en_gthermal_bkf                                   (0)
#define FEC_LTPC_CUIF_L_PCFE2_PA_INPUT1_en_gthermal_bkf                                   (1)
#define FEC_LTPC_CUIF_M_PCFE2_PA_INPUT1_en_gthermal_bkf                                   (0x00000001)

// ---------- ATX_INPUT0 bit-field ----------
#define FEC_LTPC_CUIF_P_ATX_INPUT0_Ppeak_mcs_dBm                                          (16)
#define FEC_LTPC_CUIF_L_ATX_INPUT0_Ppeak_mcs_dBm                                          (16)
#define FEC_LTPC_CUIF_M_ATX_INPUT0_Ppeak_mcs_dBm                                          (0xFFFF0000)
#define FEC_LTPC_CUIF_P_ATX_INPUT0_Pset_mcs_dBm                                           (0)
#define FEC_LTPC_CUIF_L_ATX_INPUT0_Pset_mcs_dBm                                           (16)
#define FEC_LTPC_CUIF_M_ATX_INPUT0_Pset_mcs_dBm                                           (0x0000FFFF)

// ---------- PCFE2_INPUT0 bit-field ----------
#define FEC_LTPC_CUIF_P_PCFE2_INPUT0_length_rb_cluster_0                                  (25)
#define FEC_LTPC_CUIF_L_PCFE2_INPUT0_length_rb_cluster_0                                  (7)
#define FEC_LTPC_CUIF_M_PCFE2_INPUT0_length_rb_cluster_0                                  (0xFE000000)
#define FEC_LTPC_CUIF_P_PCFE2_INPUT0_freq_start_rb_cluster_0                              (16)
#define FEC_LTPC_CUIF_L_PCFE2_INPUT0_freq_start_rb_cluster_0                              (9)
#define FEC_LTPC_CUIF_M_PCFE2_INPUT0_freq_start_rb_cluster_0                              (0x01FF0000)
#define FEC_LTPC_CUIF_P_PCFE2_INPUT0_length_rb_cluster_1                                  (9)
#define FEC_LTPC_CUIF_L_PCFE2_INPUT0_length_rb_cluster_1                                  (7)
#define FEC_LTPC_CUIF_M_PCFE2_INPUT0_length_rb_cluster_1                                  (0x0000FE00)
#define FEC_LTPC_CUIF_P_PCFE2_INPUT0_freq_start_rb_cluster_1                              (0)
#define FEC_LTPC_CUIF_L_PCFE2_INPUT0_freq_start_rb_cluster_1                              (9)
#define FEC_LTPC_CUIF_M_PCFE2_INPUT0_freq_start_rb_cluster_1                              (0x000001FF)

// ---------- PCFE2_INPUT1 bit-field ----------
#define FEC_LTPC_CUIF_P_PCFE2_INPUT1_length_rb_cluster_2                                  (25)
#define FEC_LTPC_CUIF_L_PCFE2_INPUT1_length_rb_cluster_2                                  (7)
#define FEC_LTPC_CUIF_M_PCFE2_INPUT1_length_rb_cluster_2                                  (0xFE000000)
#define FEC_LTPC_CUIF_P_PCFE2_INPUT1_freq_start_rb_cluster_2                              (16)
#define FEC_LTPC_CUIF_L_PCFE2_INPUT1_freq_start_rb_cluster_2                              (9)
#define FEC_LTPC_CUIF_M_PCFE2_INPUT1_freq_start_rb_cluster_2                              (0x01FF0000)
#define FEC_LTPC_CUIF_P_PCFE2_INPUT1_length_rb_cluster_3                                  (9)
#define FEC_LTPC_CUIF_L_PCFE2_INPUT1_length_rb_cluster_3                                  (7)
#define FEC_LTPC_CUIF_M_PCFE2_INPUT1_length_rb_cluster_3                                  (0x0000FE00)
#define FEC_LTPC_CUIF_P_PCFE2_INPUT1_freq_start_rb_cluster_3                              (0)
#define FEC_LTPC_CUIF_L_PCFE2_INPUT1_freq_start_rb_cluster_3                              (9)
#define FEC_LTPC_CUIF_M_PCFE2_INPUT1_freq_start_rb_cluster_3                              (0x000001FF)

// ---------- PCFE2_INPUT2 bit-field ----------
#define FEC_LTPC_CUIF_P_PCFE2_INPUT2_length_rb_cluster_4                                  (25)
#define FEC_LTPC_CUIF_L_PCFE2_INPUT2_length_rb_cluster_4                                  (7)
#define FEC_LTPC_CUIF_M_PCFE2_INPUT2_length_rb_cluster_4                                  (0xFE000000)
#define FEC_LTPC_CUIF_P_PCFE2_INPUT2_freq_start_rb_cluster_4                              (16)
#define FEC_LTPC_CUIF_L_PCFE2_INPUT2_freq_start_rb_cluster_4                              (9)
#define FEC_LTPC_CUIF_M_PCFE2_INPUT2_freq_start_rb_cluster_4                              (0x01FF0000)

// ---------- PCFE2_INPUT3 bit-field ----------
#define FEC_LTPC_CUIF_P_PCFE2_INPUT3_all_cluster_num                                      (24)
#define FEC_LTPC_CUIF_L_PCFE2_INPUT3_all_cluster_num                                      (8)
#define FEC_LTPC_CUIF_M_PCFE2_INPUT3_all_cluster_num                                      (0xFF000000)

// ---------- TEST_PA0 bit-field ----------
#define FEC_LTPC_CUIF_P_TEST_PA0_pa_mode                                                  (16)
#define FEC_LTPC_CUIF_L_TEST_PA0_pa_mode                                                  (8)
#define FEC_LTPC_CUIF_M_TEST_PA0_pa_mode                                                  (0x00FF0000)

// ---------- TEST_PA1 bit-field ----------
#define FEC_LTPC_CUIF_P_TEST_PA1_idx_pa                                                   (0)
#define FEC_LTPC_CUIF_L_TEST_PA1_idx_pa                                                   (8)
#define FEC_LTPC_CUIF_M_TEST_PA1_idx_pa                                                   (0x000000FF)

// ---------- TEST_DET bit-field ----------
#define FEC_LTPC_CUIF_P_TEST_DET_idx_det                                                  (0)
#define FEC_LTPC_CUIF_L_TEST_DET_idx_det                                                  (8)
#define FEC_LTPC_CUIF_M_TEST_DET_idx_det                                                  (0x000000FF)

// ---------- TEST_PGA bit-field ----------
#define FEC_LTPC_CUIF_P_TEST_PGA_idx_pga                                                  (8)
#define FEC_LTPC_CUIF_L_TEST_PGA_idx_pga                                                  (8)
#define FEC_LTPC_CUIF_M_TEST_PGA_idx_pga                                                  (0x0000FF00)
#define FEC_LTPC_CUIF_P_TEST_PGA_pga_mode                                                 (0)
#define FEC_LTPC_CUIF_L_TEST_PGA_pga_mode                                                 (8)
#define FEC_LTPC_CUIF_M_TEST_PGA_pga_mode                                                 (0x000000FF)

// ---------- TEST_GTX_BB bit-field ----------
#define FEC_LTPC_CUIF_P_TEST_GTX_BB_gtx_bb                                                (0)
#define FEC_LTPC_CUIF_L_TEST_GTX_BB_gtx_bb                                                (16)
#define FEC_LTPC_CUIF_M_TEST_GTX_BB_gtx_bb                                                (0x0000FFFF)

// ---------- TEST_CPL bit-field ----------
#define FEC_LTPC_CUIF_P_TEST_CPL_gtx_pga_flag_sw                                          (24)
#define FEC_LTPC_CUIF_L_TEST_CPL_gtx_pga_flag_sw                                          (8)
#define FEC_LTPC_CUIF_M_TEST_CPL_gtx_pga_flag_sw                                          (0xFF000000)
#define FEC_LTPC_CUIF_P_TEST_CPL_op_mode_sw                                               (16)
#define FEC_LTPC_CUIF_L_TEST_CPL_op_mode_sw                                               (8)
#define FEC_LTPC_CUIF_M_TEST_CPL_op_mode_sw                                               (0x00FF0000)
#define FEC_LTPC_CUIF_P_TEST_CPL_clp_gain                                                 (0)
#define FEC_LTPC_CUIF_L_TEST_CPL_clp_gain                                                 (16)
#define FEC_LTPC_CUIF_M_TEST_CPL_clp_gain                                                 (0x0000FFFF)

// ---------- TEST_SIB_DUMP bit-field ----------
#define FEC_LTPC_CUIF_P_TEST_SIB_DUMP_det_path_en                                         (1)
#define FEC_LTPC_CUIF_L_TEST_SIB_DUMP_det_path_en                                         (1)
#define FEC_LTPC_CUIF_M_TEST_SIB_DUMP_det_path_en                                         (0x00000002)
#define FEC_LTPC_CUIF_P_TEST_SIB_DUMP_sib_dump_flag                                       (0)
#define FEC_LTPC_CUIF_L_TEST_SIB_DUMP_sib_dump_flag                                       (1)
#define FEC_LTPC_CUIF_M_TEST_SIB_DUMP_sib_dump_flag                                       (0x00000001)

// ---------- OP_RPT bit-field ----------
#define FEC_LTPC_CUIF_P_OP_RPT_slot0_op                                                   (28)
#define FEC_LTPC_CUIF_L_OP_RPT_slot0_op                                                   (4)
#define FEC_LTPC_CUIF_M_OP_RPT_slot0_op                                                   (0xF0000000)
#define FEC_LTPC_CUIF_P_OP_RPT_slot1_op                                                   (24)
#define FEC_LTPC_CUIF_L_OP_RPT_slot1_op                                                   (4)
#define FEC_LTPC_CUIF_M_OP_RPT_slot1_op                                                   (0x0F000000)
#define FEC_LTPC_CUIF_P_OP_RPT_srs0_op                                                    (20)
#define FEC_LTPC_CUIF_L_OP_RPT_srs0_op                                                    (4)
#define FEC_LTPC_CUIF_M_OP_RPT_srs0_op                                                    (0x00F00000)
#define FEC_LTPC_CUIF_P_OP_RPT_srs1_op                                                    (16)
#define FEC_LTPC_CUIF_L_OP_RPT_srs1_op                                                    (4)
#define FEC_LTPC_CUIF_M_OP_RPT_srs1_op                                                    (0x000F0000)
#define FEC_LTPC_CUIF_P_OP_RPT_sf_num                                                     (0)
#define FEC_LTPC_CUIF_L_OP_RPT_sf_num                                                     (16)
#define FEC_LTPC_CUIF_M_OP_RPT_sf_num                                                     (0x0000FFFF)

// ---------- ET_SO_CON0 bit-field ----------
#define FEC_LTPC_CUIF_P_ET_SO_CON0_idx_etm_vab                                            (24)
#define FEC_LTPC_CUIF_L_ET_SO_CON0_idx_etm_vab                                            (8)
#define FEC_LTPC_CUIF_M_ET_SO_CON0_idx_etm_vab                                            (0xFF000000)
#define FEC_LTPC_CUIF_P_ET_SO_CON0_idx_etm_vset                                           (16)
#define FEC_LTPC_CUIF_L_ET_SO_CON0_idx_etm_vset                                           (8)
#define FEC_LTPC_CUIF_M_ET_SO_CON0_idx_etm_vset                                           (0x00FF0000)
#define FEC_LTPC_CUIF_P_ET_SO_CON0_idx_etm_rb                                             (0)
#define FEC_LTPC_CUIF_L_ET_SO_CON0_idx_etm_rb                                             (8)
#define FEC_LTPC_CUIF_M_ET_SO_CON0_idx_etm_rb                                             (0x000000FF)

// ---------- ET_SO_CON1 bit-field ----------
#define FEC_LTPC_CUIF_P_ET_SO_CON1_l1_update_done                                         (16)
#define FEC_LTPC_CUIF_L_ET_SO_CON1_l1_update_done                                         (1)
#define FEC_LTPC_CUIF_M_ET_SO_CON1_l1_update_done                                         (0x00010000)
#define FEC_LTPC_CUIF_P_ET_SO_CON1_compen_err_db                                          (0)
#define FEC_LTPC_CUIF_L_ET_SO_CON1_compen_err_db                                          (16)
#define FEC_LTPC_CUIF_M_ET_SO_CON1_compen_err_db                                          (0x0000FFFF)

// ---------- ET_SO_RPT bit-field ----------
#define FEC_LTPC_CUIF_P_ET_SO_RPT_fec_report_flag                                         (16)
#define FEC_LTPC_CUIF_L_ET_SO_RPT_fec_report_flag                                         (1)
#define FEC_LTPC_CUIF_M_ET_SO_RPT_fec_report_flag                                         (0x00010000)
#define FEC_LTPC_CUIF_P_ET_SO_RPT_lms_compen_err_db                                       (0)
#define FEC_LTPC_CUIF_L_ET_SO_RPT_lms_compen_err_db                                       (16)
#define FEC_LTPC_CUIF_M_ET_SO_RPT_lms_compen_err_db                                       (0x0000FFFF)

// ---------- ET_CAL_CON bit-field ----------
#define FEC_LTPC_CUIF_P_ET_CAL_CON_et_cal_step2                                           (16)
#define FEC_LTPC_CUIF_L_ET_CAL_CON_et_cal_step2                                           (8)
#define FEC_LTPC_CUIF_M_ET_CAL_CON_et_cal_step2                                           (0x00FF0000)
#define FEC_LTPC_CUIF_P_ET_CAL_CON_et_pagk                                                (8)
#define FEC_LTPC_CUIF_L_ET_CAL_CON_et_pagk                                                (8)
#define FEC_LTPC_CUIF_M_ET_CAL_CON_et_pagk                                                (0x0000FF00)
#define FEC_LTPC_CUIF_P_ET_CAL_CON_et_cal_step1                                           (0)
#define FEC_LTPC_CUIF_L_ET_CAL_CON_et_cal_step1                                           (8)
#define FEC_LTPC_CUIF_M_ET_CAL_CON_et_cal_step1                                           (0x000000FF)

/***************************************************DPD OTFC ***********************************************/
#define FEC_MMTX_DPD_OTFC_HAND_SHAKE_ABORT_STATE_LSB                            (16)
#define FEC_MMTX_DPD_OTFC_HAND_SHAKE_ABORT_STATE_WIDTH                          (2)
#define FEC_MMTX_DPD_OTFC_HAND_SHAKE_ABORT_STATE_MASK                           (0x00030000)

#define FEC_MMTX_DPD_OTFC_HAND_SHAKE_MEAS_STATE_LSB                             (0)
#define FEC_MMTX_DPD_OTFC_HAND_SHAKE_MEAS_STATE_WIDTH                           (3)
#define FEC_MMTX_DPD_OTFC_HAND_SHAKE_MEAS_STATE_MASK                            (0x00000007)

#define FEC_ED_RESULT_STATUS_STATUS_FIN_LSB                                     (0)
#define FEC_ED_RESULT_STATUS_STATUS_FIN_WIDTH                                   (1)
#define FEC_ED_RESULT_STATUS_STATUS_FIN_MASK                                    (0x00000001)
#define FEC_ED_RESULT_STATUS_STATUS_FIN_BIT                                     (0x00000001)

#define FEC_ED_RESULT_COUNT0_CNT1_LSB                                           (16)
#define FEC_ED_RESULT_COUNT0_CNT1_WIDTH                                         (16)
#define FEC_ED_RESULT_COUNT0_CNT1_MASK                                          (0xFFFF0000)

#define FEC_ED_RESULT_COUNT0_CNT0_LSB                                           (0)
#define FEC_ED_RESULT_COUNT0_CNT0_WIDTH                                         (16)
#define FEC_ED_RESULT_COUNT0_CNT0_MASK                                          (0x0000FFFF)

#define FEC_ED_RESULT_POW0_POW0_LSB                                             (0)
#define FEC_ED_RESULT_POW0_POW0_WIDTH                                           (31)
#define FEC_ED_RESULT_POW0_POW0_MASK                                            (0x7FFFFFFF)

#define FEC_ED_RESULT_COR_I0_COR_I0_LSB                                         (0)
#define FEC_ED_RESULT_COR_I0_COR_I0_WIDTH                                       (32)
#define FEC_ED_RESULT_COR_I0_COR_I0_MASK                                        (0xFFFFFFFF)

#define FEC_ED_RESULT_COR_Q0_COR_Q0_LSB                                         (0)
#define FEC_ED_RESULT_COR_Q0_COR_Q0_WIDTH                                       (32)
#define FEC_ED_RESULT_COR_Q0_COR_Q0_MASK                                        (0xFFFFFFFF)

#define FEC_MMTX_DPD_OTFC_FEC_WAIT_CONFIG_SF_NUM_LSB                            (16)
#define FEC_MMTX_DPD_OTFC_FEC_WAIT_CONFIG_SF_NUM_WIDTH                          (4)
#define FEC_MMTX_DPD_OTFC_FEC_WAIT_CONFIG_SF_NUM_MASK                           (0x000F0000)

#define FEC_MMTX_DPD_OTFC_FEC_WAIT_CONFIG_FEC_WAIT_AM_FLG_LSB                   (12)
#define FEC_MMTX_DPD_OTFC_FEC_WAIT_CONFIG_FEC_WAIT_AM_FLG_WIDTH                 (1)
#define FEC_MMTX_DPD_OTFC_FEC_WAIT_CONFIG_FEC_WAIT_AM_FLG_MASK                  (0x00001000)
#define FEC_MMTX_DPD_OTFC_FEC_WAIT_CONFIG_FEC_WAIT_AM_FLG_BIT                   (0x00001000)

#define FEC_MMTX_DPD_OTFC_FEC_WAIT_CONFIG_FEC_WAIT_PM_FLG_LSB                   (8)
#define FEC_MMTX_DPD_OTFC_FEC_WAIT_CONFIG_FEC_WAIT_PM_FLG_WIDTH                 (1)
#define FEC_MMTX_DPD_OTFC_FEC_WAIT_CONFIG_FEC_WAIT_PM_FLG_MASK                  (0x00000100)
#define FEC_MMTX_DPD_OTFC_FEC_WAIT_CONFIG_FEC_WAIT_PM_FLG_BIT                   (0x00000100)

#define FEC_MMTX_DPD_OTFC_FEC_WAIT_CONFIG_SELECT_GAIN_IDX_LSB                   (0)
#define FEC_MMTX_DPD_OTFC_FEC_WAIT_CONFIG_SELECT_GAIN_IDX_WIDTH                 (6)
#define FEC_MMTX_DPD_OTFC_FEC_WAIT_CONFIG_SELECT_GAIN_IDX_MASK                  (0x0000003F)

#define FEC_MMTX_DPD_OTFC_FEC_WAIT_AM_LUT_AM_LUT_LSB1                           (24)
#define FEC_MMTX_DPD_OTFC_FEC_WAIT_AM_LUT_AM_LUT_WIDTH1                         (8)
#define FEC_MMTX_DPD_OTFC_FEC_WAIT_AM_LUT_AM_LUT_MASK1                          (0xFF000000)

#define FEC_MMTX_DPD_OTFC_FEC_WAIT_AM_LUT_AM_LUT_LSB2                           (16)
#define FEC_MMTX_DPD_OTFC_FEC_WAIT_AM_LUT_AM_LUT_WIDTH2                         (8)
#define FEC_MMTX_DPD_OTFC_FEC_WAIT_AM_LUT_AM_LUT_MASK2                          (0x00FF0000)

#define FEC_MMTX_DPD_OTFC_FEC_WAIT_AM_LUT_AM_LUT_LSB3                           (8)
#define FEC_MMTX_DPD_OTFC_FEC_WAIT_AM_LUT_AM_LUT_WIDTH3                         (8)
#define FEC_MMTX_DPD_OTFC_FEC_WAIT_AM_LUT_AM_LUT_MASK3                          (0x0000FF00)

#define FEC_MMTX_DPD_OTFC_FEC_WAIT_AM_LUT_AM_LUT_LSB4                           (0)
#define FEC_MMTX_DPD_OTFC_FEC_WAIT_AM_LUT_AM_LUT_WIDTH4                         (8)
#define FEC_MMTX_DPD_OTFC_FEC_WAIT_AM_LUT_AM_LUT_MASK4                          (0x000000FF)

#define FEC_MMTX_DPD_OTFC_FEC_WAIT_PM_LUT_PM_LUT_LSB1                           (24)
#define FEC_MMTX_DPD_OTFC_FEC_WAIT_PM_LUT_PM_LUT_WIDTH1                         (8)
#define FEC_MMTX_DPD_OTFC_FEC_WAIT_PM_LUT_PM_LUT_MASK1                          (0xFF000000)

#define FEC_MMTX_DPD_OTFC_FEC_WAIT_PM_LUT_PM_LUT_LSB2                           (16)
#define FEC_MMTX_DPD_OTFC_FEC_WAIT_PM_LUT_PM_LUT_WIDTH2                         (8)
#define FEC_MMTX_DPD_OTFC_FEC_WAIT_PM_LUT_PM_LUT_MASK2                          (0x00FF0000)

#define FEC_MMTX_DPD_OTFC_FEC_WAIT_PM_LUT_PM_LUT_LSB3                           (8)
#define FEC_MMTX_DPD_OTFC_FEC_WAIT_PM_LUT_PM_LUT_WIDTH3                         (8)
#define FEC_MMTX_DPD_OTFC_FEC_WAIT_PM_LUT_PM_LUT_MASK3                          (0x0000FF00)

#define FEC_MMTX_DPD_OTFC_FEC_WAIT_PM_LUT_PM_LUT_LSB4                           (0)
#define FEC_MMTX_DPD_OTFC_FEC_WAIT_PM_LUT_PM_LUT_WIDTH4                         (8)
#define FEC_MMTX_DPD_OTFC_FEC_WAIT_PM_LUT_PM_LUT_MASK4                          (0x000000FF)


#define FEC_ED_CON_SHIFT_X_LSB                                                  (0)
#define FEC_ED_CON_SHIFT_X_WIDTH                                                (3)
#define FEC_ED_CON_SHIFT_X_MASK                                                 (0x00000007)

#define FEC_MMTX_DPD_OTFC_ALGO_CON0_AM_NORM_TH_DB_LSB                           (0)
#define FEC_MMTX_DPD_OTFC_ALGO_CON0_AM_NORM_TH_DB_WIDTH                         (16)
#define FEC_MMTX_DPD_OTFC_ALGO_CON0_AM_NORM_TH_DB_MASK                          (0x0000FFFF)

#define FEC_MMTX_DPD_OTFC_ALGO_CON1_EN_DPD_AM_TRACK_LSB                         (4)
#define FEC_MMTX_DPD_OTFC_ALGO_CON1_EN_DPD_AM_TRACK_WIDTH                       (1)
#define FEC_MMTX_DPD_OTFC_ALGO_CON1_EN_DPD_AM_TRACK_MASK                        (0x00000010)
#define FEC_MMTX_DPD_OTFC_ALGO_CON1_EN_DPD_AM_TRACK_BIT                         (0x00000010)

#define FEC_MMTX_DPD_OTFC_ALGO_CON1_EN_DPD_PM_TRACK_LSB                         (0)
#define FEC_MMTX_DPD_OTFC_ALGO_CON1_EN_DPD_PM_TRACK_WIDTH                       (1)
#define FEC_MMTX_DPD_OTFC_ALGO_CON1_EN_DPD_PM_TRACK_MASK                        (0x00000001)
#define FEC_MMTX_DPD_OTFC_ALGO_CON1_EN_DPD_PM_TRACK_BIT                         (0x00000001)

#define FEC_MMTX_DPD_OTFC_RESULT_ALGO_RPT0_VALID_POW_PA_PEAK_LSB                (16)
#define FEC_MMTX_DPD_OTFC_RESULT_ALGO_RPT0_VALID_POW_PA_PEAK_WIDTH              (1)
#define FEC_MMTX_DPD_OTFC_RESULT_ALGO_RPT0_VALID_POW_PA_PEAK_MASK               (0x00010000)
#define FEC_MMTX_DPD_OTFC_RESULT_ALGO_RPT0_VALID_POW_PA_PEAK_BIT                (0x00010000)

#define FEC_MMTX_DPD_OTFC_RESULT_ALGO_RPT0_POW_PA_PEAK_DBM_LSB                  (0)
#define FEC_MMTX_DPD_OTFC_RESULT_ALGO_RPT0_POW_PA_PEAK_DBM_WIDTH                (16)
#define FEC_MMTX_DPD_OTFC_RESULT_ALGO_RPT0_POW_PA_PEAK_DBM_MASK                 (0x0000FFFF)

#define FEC_MMTX_DPD_OTFC_RESULT_ALGO_RPT1_PA_VCC_IDX_LSB                       (16)
#define FEC_MMTX_DPD_OTFC_RESULT_ALGO_RPT1_PA_VCC_IDX_WIDTH                     (8)
#define FEC_MMTX_DPD_OTFC_RESULT_ALGO_RPT1_PA_VCC_IDX_MASK                      (0x00FF0000)

#define FEC_MMTX_DPD_OTFC_RESULT_ALGO_RPT1_GPA_OFS_DB_LSB                       (0)
#define FEC_MMTX_DPD_OTFC_RESULT_ALGO_RPT1_GPA_OFS_DB_WIDTH                     (16)
#define FEC_MMTX_DPD_OTFC_RESULT_ALGO_RPT1_GPA_OFS_DB_MASK                      (0x0000FFFF)

#define FEC_MMTX_DPD_OTFC_RESULT_CONFIG_ALGO_BYPASS_LSB                         (16)
#define FEC_MMTX_DPD_OTFC_RESULT_CONFIG_ALGO_BYPASS_WIDTH                       (1)
#define FEC_MMTX_DPD_OTFC_RESULT_CONFIG_ALGO_BYPASS_MASK                        (0x00010000)
#define FEC_MMTX_DPD_OTFC_RESULT_CONFIG_ALGO_BYPASS_BIT                         (0x00010000)

#define FEC_MMTX_DPD_OTFC_RESULT_CONFIG_AM_RESULT_FLG_LSB                       (12)
#define FEC_MMTX_DPD_OTFC_RESULT_CONFIG_AM_RESULT_FLG_WIDTH                     (1)
#define FEC_MMTX_DPD_OTFC_RESULT_CONFIG_AM_RESULT_FLG_MASK                      (0x00001000)
#define FEC_MMTX_DPD_OTFC_RESULT_CONFIG_AM_RESULT_FLG_BIT                       (0x00001000)

#define FEC_MMTX_DPD_OTFC_RESULT_CONFIG_PM_RESULT_FLG_LSB                       (8)
#define FEC_MMTX_DPD_OTFC_RESULT_CONFIG_PM_RESULT_FLG_WIDTH                     (1)
#define FEC_MMTX_DPD_OTFC_RESULT_CONFIG_PM_RESULT_FLG_MASK                      (0x00000100)
#define FEC_MMTX_DPD_OTFC_RESULT_CONFIG_PM_RESULT_FLG_BIT                       (0x00000100)

#define FEC_MMTX_DPD_OTFC_RESULT_CONFIG_RESULT_GAIN_IDX_LSB                     (0)
#define FEC_MMTX_DPD_OTFC_RESULT_CONFIG_RESULT_GAIN_IDX_WIDTH                   (6)
#define FEC_MMTX_DPD_OTFC_RESULT_CONFIG_RESULT_GAIN_IDX_MASK                    (0x0000003F)

#define FEC_MMTX_DPD_OTFC_RESULT_AM_LUT_AM_LUT_ODD_LSB                          (16)
#define FEC_MMTX_DPD_OTFC_RESULT_AM_LUT_AM_LUT_ODD_WIDTH                        (13)
#define FEC_MMTX_DPD_OTFC_RESULT_AM_LUT_AM_LUT_ODD_MASK                         (0x1FFF0000)

#define FEC_MMTX_DPD_OTFC_RESULT_AM_LUT_AM_LUT_EVEN_LSB                         (0)
#define FEC_MMTX_DPD_OTFC_RESULT_AM_LUT_AM_LUT_EVEN_WIDTH                       (13)
#define FEC_MMTX_DPD_OTFC_RESULT_AM_LUT_AM_LUT_EVEN_MASK                        (0x00001FFF)

#define FEC_MMTX_DPD_OTFC_RESULT_PM_LUT_PM_LUT_ODD_LSB                          (16)
#define FEC_MMTX_DPD_OTFC_RESULT_PM_LUT_PM_LUT_ODD_WIDTH                        (11)
#define FEC_MMTX_DPD_OTFC_RESULT_PM_LUT_PM_LUT_ODD_MASK                         (0x07FF0000)

#define FEC_MMTX_DPD_OTFC_RESULT_PM_LUT_PM_LUT_EVEN_LSB                         (0)
#define FEC_MMTX_DPD_OTFC_RESULT_PM_LUT_PM_LUT_EVEN_WIDTH                       (11)
#define FEC_MMTX_DPD_OTFC_RESULT_PM_LUT_PM_LUT_EVEN_MASK                        (0x000007FF)

/*********************************************** MTX_LTE_ATX_L01****************************************************/

// ---------- LTE_ATX_L01 word-offset  ----------
#define FEC_LTPC_CUIF_O_CON_ATX_D_GTHERMAL_PARAMS0(i)                                     (0)
#define FEC_LTPC_CUIF_O_CON_ATX_D_GTHERMAL_PARAMS1(i)                                     (1)

// ---------- CON_ATX_D_GTHERMAL_PARAMS0 bit-field ----------
#define FEC_LTPC_CUIF_P_CON_ATX_D_GTHERMAL_PARAMS0_con_nt_rb_threshold                    (24)
#define FEC_LTPC_CUIF_L_CON_ATX_D_GTHERMAL_PARAMS0_con_nt_rb_threshold                    (8)
#define FEC_LTPC_CUIF_M_CON_ATX_D_GTHERMAL_PARAMS0_con_nt_rb_threshold                    (0xFF000000)
#define FEC_LTPC_CUIF_P_CON_ATX_D_GTHERMAL_PARAMS0_con_gthermal_bkf_db_apt                (16)
#define FEC_LTPC_CUIF_L_CON_ATX_D_GTHERMAL_PARAMS0_con_gthermal_bkf_db_apt                (8)
#define FEC_LTPC_CUIF_M_CON_ATX_D_GTHERMAL_PARAMS0_con_gthermal_bkf_db_apt                (0x00FF0000)
#define FEC_LTPC_CUIF_P_CON_ATX_D_GTHERMAL_PARAMS0_con_gthermal_bkf_db_dpd                (8)
#define FEC_LTPC_CUIF_L_CON_ATX_D_GTHERMAL_PARAMS0_con_gthermal_bkf_db_dpd                (8)
#define FEC_LTPC_CUIF_M_CON_ATX_D_GTHERMAL_PARAMS0_con_gthermal_bkf_db_dpd                (0x0000FF00)
#define FEC_LTPC_CUIF_P_CON_ATX_D_GTHERMAL_PARAMS0_con_gthermal_bkf_db_et                 (0)
#define FEC_LTPC_CUIF_L_CON_ATX_D_GTHERMAL_PARAMS0_con_gthermal_bkf_db_et                 (8)
#define FEC_LTPC_CUIF_M_CON_ATX_D_GTHERMAL_PARAMS0_con_gthermal_bkf_db_et                 (0x000000FF)

// ---------- CON_ATX_D_GTHERMAL_PARAMS1 bit-field ----------
#define FEC_LTPC_CUIF_P_CON_ATX_D_GTHERMAL_PARAMS1_con_pwr_thres                          (0)
#define FEC_LTPC_CUIF_L_CON_ATX_D_GTHERMAL_PARAMS1_con_pwr_thres                          (16)
#define FEC_LTPC_CUIF_M_CON_ATX_D_GTHERMAL_PARAMS1_con_pwr_thres                          (0x0000FFFF)

#endif //#ifndef_FEC_HW_REG_MT6293_H_
