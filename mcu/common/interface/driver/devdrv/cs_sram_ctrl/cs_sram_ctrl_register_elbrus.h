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

CS_SRAM_CTRL_MPC_DDLPM_REG(SRAM_PWR_DWN, SRAM_PWR_DWN)
//RXDMP
CS_SRAM_CTRL_RXDMP_REG(G0_RXDMP_EXT_T,    rxdmp_ext_sram_active,          SRAM_SW_CTRL, SRAM_PWR_DWN,    SRAM_PWR_DWN)
CS_SRAM_CTRL_RXDMP_REG(G1_RXDMP_EXT_T,    rxdmp_ext_sram_active,          SRAM_SW_CTRL, SRAM_PWR_DWN,    SRAM_PWR_DWN)
CS_SRAM_CTRL_RXDMP_REG(G2_RXDMP_EXT_T,    rxdmp_ext_sram_active,          SRAM_SW_CTRL, SRAM_PWR_DWN,    SRAM_PWR_DWN)
CS_SRAM_CTRL_RXDMP_REG(G3_RXDMP_EXT_T,    rxdmp_ext_sram_active,          SRAM_SW_CTRL, SRAM_PWR_DWN,    SRAM_PWR_DWN)

