/* CS_SRAM_CTRL_XXX_CSIF_REG(power_on_init_state, power_down_init_state)
 * CS_SRAM_CTRL_XXX_ICM_REG(power_on_init_state, power_down_init_state)
 * CS_SRAM_CTRL_XXX_PM_REG(power_on_init_state, power_down_init_state)
 * CS_SRAM_CTRL_XXX_DPM_REG(power_on_init_state, power_down_init_state)
 * CS_SRAM_CTRL_RXTDB_REG(group_name, err_signal, sw_or_hw_control, power_on_init_state, power_down_init_state) 
 * CS_SRAM_CTRL_RXDMP_REG(group_name, err_signal, sw_or_hw_control, power_on_init_state, power_down_init_state) 
 * group_name : add postfix _T to group name to avoid build error
 *
 */
CS_SRAM_CTRL_ICC_CSIF_REG(SRAM_PWR_ON, SRAM_PWR_SLP)
CS_SRAM_CTRL_IMC_CSIF_REG(SRAM_PWR_ON, SRAM_PWR_SLP)
CS_SRAM_CTRL_MPC_CSIF_REG(SRAM_PWR_ON, SRAM_PWR_SLP)

CS_SRAM_CTRL_ICC_PMICM_REG(SRAM_PWR_ON, SRAM_PWR_SLP)
CS_SRAM_CTRL_IMC_PMICM_REG(SRAM_PWR_ON, SRAM_PWR_SLP)
CS_SRAM_CTRL_MPC_PMICM_REG(SRAM_PWR_ON, SRAM_PWR_SLP)

CS_SRAM_CTRL_IMC_DDLPM_REG(SRAM_PWR_DWN, SRAM_PWR_DWN)
CS_SRAM_CTRL_MPC_DDLPM_REG(SRAM_PWR_DWN, SRAM_PWR_DWN)
//RXTDB
CS_SRAM_CTRL_RXTDB_REG(G0_RXTDB_CM_T,   rxtdb_g0_1_cm_sram_active,      SRAM_SW_CTRL, SRAM_PWR_DWN,   SRAM_PWR_DWN)
CS_SRAM_CTRL_RXTDB_REG(G1_RXTDB_CM_T,   rxtdb_g0_1_cm_sram_active,      SRAM_SW_CTRL, SRAM_PWR_DWN,   SRAM_PWR_DWN)
CS_SRAM_CTRL_RXTDB_REG(G2_RXTDB_CM_T,   rxtdb_g2_3_4_cm_sram_active,    SRAM_SW_CTRL, SRAM_PWR_DWN,   SRAM_PWR_DWN)
CS_SRAM_CTRL_RXTDB_REG(G3_RXTDB_CM_T,   rxtdb_g2_3_4_cm_sram_active,    SRAM_SW_CTRL, SRAM_PWR_DWN,   SRAM_PWR_DWN)
CS_SRAM_CTRL_RXTDB_REG(G4_RXTDB_CM_T,   rxtdb_g2_3_4_cm_sram_active,    SRAM_SW_CTRL, SRAM_PWR_DWN,   SRAM_PWR_DWN)
CS_SRAM_CTRL_RXTDB_REG(G5_RXTDB_CM_T,   rxtdb_g5_cm_sram_active,        SRAM_SW_CTRL, SRAM_PWR_DWN,   SRAM_PWR_DWN)
CS_SRAM_CTRL_RXTDB_REG(G6_RXTDB_CM_T,   rxtdb_g6_7_cm_sram_active,      SRAM_SW_CTRL, SRAM_PWR_DWN,   SRAM_PWR_DWN)
CS_SRAM_CTRL_RXTDB_REG(G7_RXTDB_CM_T,   rxtdb_g6_7_cm_sram_active,      SRAM_SW_CTRL, SRAM_PWR_DWN,   SRAM_PWR_DWN)
CS_SRAM_CTRL_RXTDB_REG(G8_RXTDB_CM_T,   rxtdb_g8_9_10_cm_sram_active,   SRAM_SW_CTRL, SRAM_PWR_DWN,   SRAM_PWR_DWN)
CS_SRAM_CTRL_RXTDB_REG(G9_RXTDB_CM_T,   rxtdb_g8_9_10_cm_sram_active,   SRAM_SW_CTRL, SRAM_PWR_DWN,   SRAM_PWR_DWN)
CS_SRAM_CTRL_RXTDB_REG(G10_RXTDB_CM_T,  rxtdb_g8_9_10_cm_sram_active,   SRAM_SW_CTRL, SRAM_PWR_DWN,   SRAM_PWR_DWN)
CS_SRAM_CTRL_RXTDB_REG(G0_RXTDB_TEST_T, rxtdb_g0_test_sram_active,      SRAM_SW_CTRL, SRAM_PWR_DWN,   SRAM_PWR_DWN)
CS_SRAM_CTRL_RXTDB_REG(G0_RXTDB_RX_T,   rxtdb_g0_1_rx_sram_active,      SRAM_SW_CTRL, SRAM_PWR_DWN,   SRAM_PWR_DWN)
CS_SRAM_CTRL_RXTDB_REG(G1_RXTDB_RX_T,   rxtdb_g0_1_rx_sram_active,      SRAM_SW_CTRL, SRAM_PWR_DWN,   SRAM_PWR_DWN)
CS_SRAM_CTRL_RXTDB_REG(G2_RXTDB_RX_T,   rxtdb_g2_3_rx_sram_active,      SRAM_SW_CTRL, SRAM_PWR_DWN,   SRAM_PWR_DWN)
CS_SRAM_CTRL_RXTDB_REG(G3_RXTDB_RX_T,   rxtdb_g2_3_rx_sram_active,      SRAM_SW_CTRL, SRAM_PWR_DWN,   SRAM_PWR_DWN)
CS_SRAM_CTRL_RXTDB_REG(G9_RXTDB_RX_T,   rxtdb_g9_rx_sram_active,        SRAM_SW_CTRL, SRAM_PWR_ON,    SRAM_PWR_DWN)
CS_SRAM_CTRL_RXTDB_REG(G4_RXTDB_RX_T,   rxtdb_g4_5_rx_sram_active,      SRAM_SW_CTRL, SRAM_PWR_DWN,   SRAM_PWR_DWN)
CS_SRAM_CTRL_RXTDB_REG(G5_RXTDB_RX_T,   rxtdb_g4_5_rx_sram_active,      SRAM_SW_CTRL, SRAM_PWR_DWN,   SRAM_PWR_DWN)
CS_SRAM_CTRL_RXTDB_REG(G6_RXTDB_RX_T,   rxtdb_g6_7_rx_sram_active,      SRAM_SW_CTRL, SRAM_PWR_DWN,   SRAM_PWR_DWN)
CS_SRAM_CTRL_RXTDB_REG(G7_RXTDB_RX_T,   rxtdb_g6_7_rx_sram_active,      SRAM_SW_CTRL, SRAM_PWR_DWN,   SRAM_PWR_DWN)
CS_SRAM_CTRL_RXTDB_REG(G8_RXTDB_RX_T,   rxtdb_g8_rx_sram_active,        SRAM_SW_CTRL, SRAM_PWR_DWN,   SRAM_PWR_DWN)
//RXDMP
CS_SRAM_CTRL_RXDMP_REG(G0_RXDMP_EXT,    rxdmp_ext_sram_active,          SRAM_SW_CTRL, SRAM_PWR_DWN,    SRAM_PWR_DWN)

