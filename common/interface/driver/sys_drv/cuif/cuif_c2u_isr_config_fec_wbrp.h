// 0
// FEC IRQ 0
/************************* Core ISR Configure Begin ****************/
irq_index(CUIF_C2U_FEC_WBRP_FEC0)
irq_entry_function(FEC_TPC_C2U_CB_CAL_DL_P0)
irq_auto_eoi(CUIF_TRUE)
/************************* Core ISR Configure END ******************/

// 1
// FEC IRQ 1
/************************* Core ISR Configure Begin ****************/
irq_index(CUIF_C2U_FEC_WBRP_FEC1)
irq_entry_function(FEC_TPC_C2U_CB_CAL_DL_P1)
irq_auto_eoi(CUIF_TRUE)
/************************* Core ISR Configure END ******************/

// 2
// FEC IRQ 2
/************************* Core ISR Configure Begin ****************/
irq_index(CUIF_C2U_FEC_WBRP_FEC2)
irq_entry_function(FEC_TPC_C2U_CB_TX_INIT_END_P0)
irq_auto_eoi(CUIF_TRUE)
/************************* Core ISR Configure END ******************/

// 3
// FEC IRQ 3
/************************* Core ISR Configure Begin ****************/
irq_index(CUIF_C2U_FEC_WBRP_FEC3)
irq_entry_function(FEC_TPC_C2U_CB_TX_INIT_END_P1)
irq_auto_eoi(CUIF_TRUE)
/************************* Core ISR Configure END ******************/

// 4
// FEC IRQ 4
/************************* Core ISR Configure Begin ****************/
irq_index(CUIF_C2U_FEC_WBRP_FEC4)
irq_entry_function(FEC_WTX_C2U_IRQ_DL_EMI)
irq_auto_eoi(CUIF_TRUE)
/************************* Core ISR Configure END ******************/

// 5
// FEC IRQ 5
/************************* Core ISR Configure Begin ****************/
irq_index(CUIF_C2U_FEC_WBRP_FEC5)
irq_entry_function(CUIF_DefaultISR)
irq_auto_eoi(CUIF_TRUE)
/************************* Core ISR Configure END ******************/

// 6
// FEC IRQ 6
/************************* Core ISR Configure Begin ****************/
irq_index(CUIF_C2U_FEC_WBRP_FEC6)
irq_entry_function(CUIF_DefaultISR)
irq_auto_eoi(CUIF_TRUE)
/************************* Core ISR Configure END ******************/

// 7
// FEC IRQ 7
/************************* Core ISR Configure Begin ****************/
irq_index(CUIF_C2U_FEC_WBRP_FEC7)
irq_entry_function(CUIF_DefaultISR)
irq_auto_eoi(CUIF_TRUE)
/************************* Core ISR Configure END ******************/

// 8
// FEC IRQ 8
/************************* Core ISR Configure Begin ****************/
irq_index(CUIF_C2U_FEC_WBRP_FEC8)
irq_entry_function(CUIF_DefaultISR)
irq_auto_eoi(CUIF_TRUE)
/************************* Core ISR Configure END ******************/

// 9
// FEC IRQ 9
/************************* Core ISR Configure Begin ****************/
irq_index(CUIF_C2U_FEC_WBRP_FEC9)
irq_entry_function(CUIF_DefaultISR)
irq_auto_eoi(CUIF_TRUE)
/************************* Core ISR Configure END ******************/

// 10
// C2K IRQ 0
/************************* Core ISR Configure Begin ****************/
irq_index(CUIF_C2U_FEC_WBRP_C2K0)
irq_entry_function(CUIF_DefaultISR)
irq_auto_eoi(CUIF_TRUE)
/************************* Core ISR Configure END ******************/

// 11
// C2K IRQ 1
/************************* Core ISR Configure Begin ****************/
irq_index(CUIF_C2U_FEC_WBRP_C2K1)
irq_entry_function(CUIF_DefaultISR)
irq_auto_eoi(CUIF_TRUE)
/************************* Core ISR Configure END ******************/

// 12
// C2K IRQ 2
/************************* Core ISR Configure Begin ****************/
irq_index(CUIF_C2U_FEC_WBRP_C2K2)
irq_entry_function(CUIF_DefaultISR)
irq_auto_eoi(CUIF_TRUE)
/************************* Core ISR Configure END ******************/

// 13
// C2K IRQ 3
/************************* Core ISR Configure Begin ****************/
irq_index(CUIF_C2U_FEC_WBRP_C2K3)
irq_entry_function(CUIF_DefaultISR)
irq_auto_eoi(CUIF_TRUE)
/************************* Core ISR Configure END ******************/

// 14
// WBRP IRQ 0
/************************* Core ISR Configure Begin ****************/
irq_index(CUIF_C2U_FEC_WBRP_WBRP0_INI_TICK)
irq_entry_function(CUIF_DefaultISR)
irq_auto_eoi(CUIF_TRUE)
/************************* Core ISR Configure END ******************/

// 15
// WBRP IRQ 1
/************************* Core ISR Configure Begin ****************/
irq_index(CUIF_C2U_FEC_WBRP_WBRP1_CC0_STATIC_CFG_OK)
irq_entry_function(isr_s2f_cc0_static_cfg_ok_handler)
irq_auto_eoi(CUIF_TRUE)
/************************* Core ISR Configure END ******************/

// 16
// WBRP IRQ 2
/************************* Core ISR Configure Begin ****************/
irq_index(CUIF_C2U_FEC_WBRP_WBRP2_CC1_STATIC_CFG_OK)
irq_entry_function(isr_s2f_cc1_static_cfg_ok_handler)
irq_auto_eoi(CUIF_TRUE)
/************************* Core ISR Configure END ******************/

// 17
// WBRP IRQ 3
/************************* Core ISR Configure Begin ****************/
irq_index(CUIF_C2U_FEC_WBRP_WBRP3_BCHSFN_STATIC_CFG_OK)
irq_entry_function(isr_s2f_bchsfn_static_cfg_ok_handler)
irq_auto_eoi(CUIF_TRUE)
/************************* Core ISR Configure END ******************/

// 18
// WBRP IRQ 4
/************************* Core ISR Configure Begin ****************/
irq_index(CUIF_C2U_FEC_WBRP_WBRP4_CC0_CFG_OK)
irq_entry_function(isr_s2f_cc0_cfg_ok_handler)
irq_auto_eoi(CUIF_TRUE)
/************************* Core ISR Configure END ******************/

// 19
// WBRP IRQ 5
/************************* Core ISR Configure Begin ****************/
irq_index(CUIF_C2U_FEC_WBRP_WBRP5_CC1_CFG_OK)
irq_entry_function(isr_s2f_cc1_cfg_ok_handler)
irq_auto_eoi(CUIF_TRUE)
/************************* Core ISR Configure END ******************/

// 20
// WBRP IRQ 6
/************************* Core ISR Configure Begin ****************/
irq_index(CUIF_C2U_FEC_WBRP_WBRP6_CC0_GUIDED_CFG_OK)
irq_entry_function(isr_s2f_cc0_guided_cfg_ok_handler)
irq_auto_eoi(CUIF_TRUE)
/************************* Core ISR Configure END ******************/

// 21
// WBRP IRQ 7
/************************* Core ISR Configure Begin ****************/
irq_index(CUIF_C2U_FEC_WBRP_WBRP7_CC1_GUIDED_CFG_OK)
irq_entry_function(isr_s2f_cc1_guided_cfg_ok_handler)
irq_auto_eoi(CUIF_TRUE)
/************************* Core ISR Configure END ******************/

// 22
// WBRP IRQ 8
/************************* Core ISR Configure Begin ****************/
irq_index(CUIF_C2U_FEC_WBRP_WBRP8_RESERVED)
irq_entry_function(CUIF_DefaultISR)
irq_auto_eoi(CUIF_TRUE)
/************************* Core ISR Configure END ******************/

// 23
// WBRP IRQ 9
/************************* Core ISR Configure Begin ****************/
irq_index(CUIF_C2U_FEC_WBRP_WBRP9_RESERVED)
irq_entry_function(CUIF_DefaultISR)
irq_auto_eoi(CUIF_TRUE)
/************************* Core ISR Configure END ******************/

// 24
// WBRP IRQ 10
/************************* Core ISR Configure Begin ****************/
irq_index(CUIF_C2U_FEC_WBRP_WBRP10_RESERVED)
irq_entry_function(CUIF_DefaultISR)
irq_auto_eoi(CUIF_TRUE)
/************************* Core ISR Configure END ******************/

// 25
// SS IRQ 0
/************************* Core ISR Configure Begin ****************/
irq_index(CUIF_C2U_FEC_WBRP_SS_DEACTIVATE)
irq_entry_function(dsp_deactivate_callback)
irq_auto_eoi(CUIF_TRUE)
/************************* Core ISR Configure END ******************/

// 26
// SS IRQ 1
/************************* Core ISR Configure Begin ****************/
irq_index(CUIF_C2U_FEC_WBRP_SS_INIT_ACTIVATE)
irq_entry_function(fill_bootup_pattern_after_cuifhandshake)
irq_auto_eoi(CUIF_TRUE)
/************************* Core ISR Configure END ******************/

// 27
// SS IRQ 2
/************************* Core ISR Configure Begin ****************/
irq_index(CUIF_C2U_FEC_WBRP_TX_SS_TRIGGER_DDL)
irq_entry_function(ddl_fec_tx_handler)
irq_auto_eoi(CUIF_TRUE)
/************************* Core ISR Configure END ******************/

// 28
// RESERVE IRQ 0
/************************* Core ISR Configure Begin ****************/
irq_index(CUIF_C2U_FEC_WBRP_RX_SS_TRIGGER_DDL)
irq_entry_function(ddl_fec_rx_handler)
irq_auto_eoi(CUIF_TRUE)
/************************* Core ISR Configure END ******************/

// 29
// RESERVE IRQ 1
/************************* Core ISR Configure Begin ****************/
irq_index(CUIF_C2U_FEC_WBRP_RESERVE1)
irq_entry_function(CUIF_DefaultISR)
irq_auto_eoi(CUIF_TRUE)
/************************* Core ISR Configure END ******************/

// 30
// RESERVE IRQ 2
/************************* Core ISR Configure Begin ****************/
irq_index(CUIF_C2U_FEC_WBRP_RESERVE2)
irq_entry_function(CUIF_DefaultISR)
irq_auto_eoi(CUIF_TRUE)
/************************* Core ISR Configure END ******************/

// 31
// RESERVE IRQ 3
/************************* Core ISR Configure Begin ****************/
irq_index(CUIF_C2U_FEC_WBRP_RESERVE3)
irq_entry_function(CUIF_DefaultISR)
irq_auto_eoi(CUIF_TRUE)
/************************* Core ISR Configure END ******************/

