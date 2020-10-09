// 0
/************************* Core ISR Configure Begin ****************/
irq_index(CUIF_U2C_N0_INNER_WFI)
irq_entry_function(wfi_irq_callback_inner)
irq_auto_eoi(CUIF_TRUE)
/************************* Core ISR Configure END ******************/

// 1
/************************* Core ISR Configure Begin ****************/
irq_index(CUIF_U2C_N0_OUTER_WFI)
irq_entry_function(wfi_irq_callback_brp)
irq_auto_eoi(CUIF_TRUE)
/************************* Core ISR Configure END ******************/

// 2
/************************* Core ISR Configure Begin ****************/
irq_index(CUIF_U2C_N0_FEC_WFI)
irq_entry_function(wfi_irq_callback_fec)
irq_auto_eoi(CUIF_TRUE)
/************************* Core ISR Configure END ******************/

// 3
/************************* Core ISR Configure Begin ****************/
irq_index(CUIF_U2C_N0_SPEECH_WFI)
irq_entry_function(wfi_irq_callback_speech)
irq_auto_eoi(CUIF_TRUE)
/************************* Core ISR Configure END ******************/

// 4
// LTE IRQ 0
/************************* Core ISR Configure Begin ****************/
irq_index(CUIF_U2C_N0_L0)
irq_entry_function(EL1D_POS_Meas_Td2fd_IRQ_Handler)
irq_auto_eoi(CUIF_TRUE)
/************************* Core ISR Configure END ******************/

// 5
// LTE IRQ 1
/************************* Core ISR Configure Begin ****************/
irq_index(CUIF_U2C_N0_L1)
irq_entry_function(EL1D_POS_Meas_Abort_IRQ_Handler)
irq_auto_eoi(CUIF_TRUE)
/************************* Core ISR Configure END ******************/

// 6
// LTE IRQ 2
/************************* Core ISR Configure Begin ****************/
irq_index(CUIF_U2C_N0_L2)
irq_entry_function(EL1D_POS_Meas_Percell_0_IRQ_Handler)
irq_auto_eoi(CUIF_TRUE)
/************************* Core ISR Configure END ******************/

// 7
// LTE IRQ 3
/************************* Core ISR Configure Begin ****************/
irq_index(CUIF_U2C_N0_L3)
irq_entry_function(EL1D_POS_Meas_Percell_1_IRQ_Handler)
irq_auto_eoi(CUIF_TRUE)
/************************* Core ISR Configure END ******************/

// 8
// LTE IRQ 4
/************************* Core ISR Configure Begin ****************/
irq_index(CUIF_U2C_N0_L4)
irq_entry_function(CUIF_DefaultISR)
irq_auto_eoi(CUIF_TRUE)
/************************* Core ISR Configure END ******************/

// 9
//LTE IRQ 5
/************************* Core ISR Configure Begin ****************/
irq_index(CUIF_U2C_N0_L5)
irq_entry_function(CUIF_DefaultISR)
irq_auto_eoi(CUIF_TRUE)
/************************* Core ISR Configure END ******************/

// 10
//LTE IRQ 6
/************************* Core ISR Configure Begin ****************/
irq_index(CUIF_U2C_N0_L6)
irq_entry_function(CUIF_DefaultISR)
irq_auto_eoi(CUIF_TRUE)
/************************* Core ISR Configure END ******************/

// 11
// SPEECH IRQ 0
/************************* Core ISR Configure Begin ****************/
irq_index(CUIF_U2C_SPEECH_UL_TAIL)
irq_entry_function(CUIF_U2C_ULTail_ISR)
irq_auto_eoi(CUIF_TRUE)
/************************* Core ISR Configure END ******************/

// 12
// SPEECH IRQ 1
/************************* Core ISR Configure Begin ****************/
irq_index(CUIF_U2C_SPEECH_DL_TAIL)
irq_entry_function(CUIF_U2C_DLTail_ISR)
irq_auto_eoi(CUIF_TRUE)
/************************* Core ISR Configure END ******************/

// 13
// SPEECH IRQ 2
/************************* Core ISR Configure Begin ****************/
irq_index(CUIF_U2C_SPEECH_UL_HEAD)
irq_entry_function(CUIF_U2C_ULHead_ISR)
irq_auto_eoi(CUIF_TRUE)
/************************* Core ISR Configure END ******************/

// 14
// SPEECH IRQ 3
/************************* Core ISR Configure Begin ****************/
irq_index(CUIF_U2C_SPEECH_DL_HEAD)
irq_entry_function(CUIF_U2C_DLHead_ISR)
irq_auto_eoi(CUIF_TRUE)
/************************* Core ISR Configure END ******************/

// 15
// SPEECH IRQ 4
/************************* Core ISR Configure Begin ****************/
irq_index(CUIF_U2C_N0_SPEECH4)
irq_entry_function(CUIF_DefaultISR)
irq_auto_eoi(CUIF_TRUE)
/************************* Core ISR Configure END ******************/

// 16
// C2K IRQ 0
/************************* Core ISR Configure Begin ****************/
irq_index(CUIF_U2C_N0_C0)
irq_entry_function(CUIF_DefaultISR)
irq_auto_eoi(CUIF_TRUE)
/************************* Core ISR Configure END ******************/

// 17
// SS IRQ 0
/************************* Core ISR Configure Begin ****************/
irq_index(CUIF_U2C_N0_SS0)
irq_entry_function(firstboot_check_cuif_connect_n0)
irq_auto_eoi(CUIF_TRUE)
/************************* Core ISR Configure END ******************/

// 18
// SS IRQ 1
/************************* Core ISR Configure Begin ****************/
irq_index(CUIF_U2C_N0_CLEAR_INNER_DDL_PROTECTION_DONE)
irq_entry_function(ddl_clear_inner_ddl_protection_done)
irq_auto_eoi(CUIF_TRUE)
/************************* Core ISR Configure END ******************/

// 19
// SS IRQ 2
/************************* Core ISR Configure Begin ****************/
irq_index(CUIF_U2C_N0_INNER_CAN_DO_LTE)
irq_entry_function(set_4g_ddl_protection_done)
irq_auto_eoi(CUIF_TRUE)
/************************* Core ISR Configure END ******************/

// 20
// reserve IRQ 1
/************************* Core ISR Configure Begin ****************/
irq_index(CUIF_U2C_N0_RESERVE1)
irq_entry_function(CUIF_DefaultISR)
irq_auto_eoi(CUIF_TRUE)
/************************* Core ISR Configure END ******************/

// 21
// reserve IRQ 2
/************************* Core ISR Configure Begin ****************/
irq_index(CUIF_U2C_N0_RESERVE2)
irq_entry_function(CUIF_DefaultISR)
irq_auto_eoi(CUIF_TRUE)
/************************* Core ISR Configure END ******************/

// 22
// reserve IRQ 3
/************************* Core ISR Configure Begin ****************/
irq_index(CUIF_U2C_N0_RESERVE3)
irq_entry_function(CUIF_DefaultISR)
irq_auto_eoi(CUIF_TRUE)
/************************* Core ISR Configure END ******************/

// 23
// reserve IRQ 4
/************************* Core ISR Configure Begin ****************/
irq_index(CUIF_U2C_N0_RESERVE4)
irq_entry_function(CUIF_DefaultISR)
irq_auto_eoi(CUIF_TRUE)
/************************* Core ISR Configure END ******************/

// 24
// reserve IRQ 5
/************************* Core ISR Configure Begin ****************/
irq_index(CUIF_U2C_N0_RESERVE5)
irq_entry_function(CUIF_DefaultISR)
irq_auto_eoi(CUIF_TRUE)
/************************* Core ISR Configure END ******************/

// 25
// reserve IRQ 6
/************************* Core ISR Configure Begin ****************/
irq_index(CUIF_U2C_N0_RESERVE6)
irq_entry_function(CUIF_DefaultISR)
irq_auto_eoi(CUIF_TRUE)
/************************* Core ISR Configure END ******************/

// 26
// reserve IRQ 7
/************************* Core ISR Configure Begin ****************/
irq_index(CUIF_U2C_N0_RESERVE7)
irq_entry_function(CUIF_DefaultISR)
irq_auto_eoi(CUIF_TRUE)
/************************* Core ISR Configure END ******************/
