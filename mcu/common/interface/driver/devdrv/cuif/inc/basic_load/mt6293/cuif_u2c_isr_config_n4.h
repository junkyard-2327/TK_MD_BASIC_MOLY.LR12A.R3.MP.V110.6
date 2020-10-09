#if defined(__CUIF_DRV_TEST__)
// 0
/************************* Core ISR Configure Begin ****************/
irq_index(CUIF_U2C_N4_INNER_WFI)
irq_entry_function(CUIF_DefaultISR)
irq_auto_eoi(CUIF_TRUE)
/************************* Core ISR Configure END ******************/

// 1
/************************* Core ISR Configure Begin ****************/
irq_index(CUIF_U2C_N4_OUTER_WFI)
irq_entry_function(CUIF_DefaultISR)
irq_auto_eoi(CUIF_TRUE)
/************************* Core ISR Configure END ******************/

// 2
/************************* Core ISR Configure Begin ****************/
irq_index(CUIF_U2C_N4_FEC_WFI)
irq_entry_function(CUIF_DefaultISR)
irq_auto_eoi(CUIF_TRUE)
/************************* Core ISR Configure END ******************/

// 3
/************************* Core ISR Configure Begin ****************/
irq_index(CUIF_U2C_N4_SPEECH_WFI)
irq_entry_function(CUIF_DefaultISR)
irq_auto_eoi(CUIF_TRUE)
/************************* Core ISR Configure END ******************/

// 4
// LTE IRQ 0
/************************* Core ISR Configure Begin ****************/
irq_index(CUIF_U2C_N4_L0)
irq_entry_function(CUIF_DriverTestISR_N4)
irq_auto_eoi(CUIF_TRUE)
/************************* Core ISR Configure END ******************/

// 5
// LTE IRQ 1
/************************* Core ISR Configure Begin ****************/
irq_index(CUIF_U2C_N4_L1)
irq_entry_function(CUIF_DriverTestISR_N4)
irq_auto_eoi(CUIF_TRUE)
/************************* Core ISR Configure END ******************/

// 6
// LTE IRQ 2
/************************* Core ISR Configure Begin ****************/
irq_index(CUIF_U2C_N4_L2)
irq_entry_function(CUIF_DriverTestISR_N4)
irq_auto_eoi(CUIF_TRUE)
/************************* Core ISR Configure END ******************/

// 7
// LTE IRQ 3
/************************* Core ISR Configure Begin ****************/
irq_index(CUIF_U2C_N4_L3)
irq_entry_function(CUIF_DriverTestISR_N4)
irq_auto_eoi(CUIF_FALSE)
/************************* Core ISR Configure END ******************/

// 8
// LTE IRQ 4
/************************* Core ISR Configure Begin ****************/
irq_index(CUIF_U2C_N4_L4)
irq_entry_function(CUIF_DriverTestISR_N4)
irq_auto_eoi(CUIF_FALSE)
/************************* Core ISR Configure END ******************/

// 9
// LTE IRQ 5
/************************* Core ISR Configure Begin ****************/
irq_index(CUIF_U2C_N4_L5)
irq_entry_function(CUIF_DriverTestISR_N4)
irq_auto_eoi(CUIF_FALSE)
/************************* Core ISR Configure END ******************/

// 10
// C2K IRQ 0
/************************* Core ISR Configure Begin ****************/
irq_index(CUIF_U2C_N4_C0)
irq_entry_function(CUIF_DefaultISR)
irq_auto_eoi(CUIF_TRUE)
/************************* Core ISR Configure END ******************/

// 11
// SS 0
/************************* Core ISR Configure Begin ****************/
irq_index(CUIF_U2C_N4_SS0)
irq_entry_function(CUIF_DefaultISR)
irq_auto_eoi(CUIF_TRUE)
/************************* Core ISR Configure END ******************/

// 12
// SS 1
/************************* Core ISR Configure Begin ****************/
irq_index(CUIF_U2C_N4_SS1)
irq_entry_function(CUIF_DefaultISR)
irq_auto_eoi(CUIF_TRUE)
/************************* Core ISR Configure END ******************/

// 13
// reserve IRQ 0
/************************* Core ISR Configure Begin ****************/
irq_index(CUIF_U2C_N4_RESERVE0)
irq_entry_function(CUIF_DefaultISR)
irq_auto_eoi(CUIF_TRUE)
/************************* Core ISR Configure END ******************/

// 14
// reserve IRQ 1
/************************* Core ISR Configure Begin ****************/
irq_index(CUIF_U2C_N4_RESERVE1)
irq_entry_function(CUIF_DefaultISR)
irq_auto_eoi(CUIF_TRUE)
/************************* Core ISR Configure END ******************/

// 15
// reserve IRQ 2
/************************* Core ISR Configure Begin ****************/
irq_index(CUIF_U2C_N4_RESERVE2)
irq_entry_function(CUIF_DefaultISR)
irq_auto_eoi(CUIF_TRUE)
/************************* Core ISR Configure END ******************/

// 16
// reserve IRQ 3
/************************* Core ISR Configure Begin ****************/
irq_index(CUIF_U2C_N4_RESERVE3)
irq_entry_function(CUIF_DefaultISR)
irq_auto_eoi(CUIF_TRUE)
/************************* Core ISR Configure END ******************/

// 17
// reserve IRQ 4
/************************* Core ISR Configure Begin ****************/
irq_index(CUIF_U2C_N4_RESERVE4)
irq_entry_function(CUIF_DefaultISR)
irq_auto_eoi(CUIF_TRUE)
/************************* Core ISR Configure END ******************/

// 18
// reserve IRQ 5
/************************* Core ISR Configure Begin ****************/
irq_index(CUIF_U2C_N4_RESERVE5)
irq_entry_function(CUIF_DefaultISR)
irq_auto_eoi(CUIF_TRUE)
/************************* Core ISR Configure END ******************/

// 19
// reserve IRQ 6
/************************* Core ISR Configure Begin ****************/
irq_index(CUIF_U2C_N4_RESERVE6)
irq_entry_function(CUIF_DefaultISR)
irq_auto_eoi(CUIF_TRUE)
/************************* Core ISR Configure END ******************/

// 20
// reserve IRQ 7
/************************* Core ISR Configure Begin ****************/
irq_index(CUIF_U2C_N4_RESERVE7)
irq_entry_function(CUIF_DefaultISR)
irq_auto_eoi(CUIF_TRUE)
/************************* Core ISR Configure END ******************/

#else /* basic */

// 0
/************************* Core ISR Configure Begin ****************/
irq_index(CUIF_U2C_N4_INNER_WFI)
irq_entry_function(wfi_irq_callback_inner)
irq_auto_eoi(CUIF_TRUE)
/************************* Core ISR Configure END ******************/

// 1
/************************* Core ISR Configure Begin ****************/
irq_index(CUIF_U2C_N4_OUTER_WFI)
irq_entry_function(wfi_irq_callback_brp)
irq_auto_eoi(CUIF_TRUE)
/************************* Core ISR Configure END ******************/

// 2
/************************* Core ISR Configure Begin ****************/
irq_index(CUIF_U2C_N4_FEC_WFI)
irq_entry_function(wfi_irq_callback_fec)
irq_auto_eoi(CUIF_TRUE)
/************************* Core ISR Configure END ******************/

// 3
/************************* Core ISR Configure Begin ****************/
irq_index(CUIF_U2C_N4_SPEECH_WFI)
irq_entry_function(wfi_irq_callback_speech)
irq_auto_eoi(CUIF_TRUE)
/************************* Core ISR Configure END ******************/

// 4
// LTE IRQ 0
/************************* Core ISR Configure Begin ****************/
irq_index(CUIF_U2C_N4_L0)
irq_entry_function(CUIF_DefaultISR)
irq_auto_eoi(CUIF_TRUE)
/************************* Core ISR Configure END ******************/

// 5
// LTE IRQ 1
/************************* Core ISR Configure Begin ****************/
irq_index(CUIF_U2C_N4_L1)
irq_entry_function(CUIF_DefaultISR)
irq_auto_eoi(CUIF_TRUE)
/************************* Core ISR Configure END ******************/

// 6
// LTE IRQ 2
/************************* Core ISR Configure Begin ****************/
irq_index(CUIF_U2C_N4_L2)
irq_entry_function(CUIF_DefaultISR)
irq_auto_eoi(CUIF_TRUE)
/************************* Core ISR Configure END ******************/

// 7
// LTE IRQ 3
/************************* Core ISR Configure Begin ****************/
irq_index(CUIF_U2C_N4_L3)
irq_entry_function(CUIF_DefaultISR)
irq_auto_eoi(CUIF_TRUE)
/************************* Core ISR Configure END ******************/

// 8
// LTE IRQ 4
/************************* Core ISR Configure Begin ****************/
irq_index(CUIF_U2C_N4_L4)
irq_entry_function(CUIF_DefaultISR)
irq_auto_eoi(CUIF_TRUE)
/************************* Core ISR Configure END ******************/

// 9
// LTE IRQ 5
/************************* Core ISR Configure Begin ****************/
irq_index(CUIF_U2C_N4_L5)
irq_entry_function(CUIF_DefaultISR)
irq_auto_eoi(CUIF_TRUE)
/************************* Core ISR Configure END ******************/

// 10
// C2K IRQ 0
/************************* Core ISR Configure Begin ****************/
irq_index(CUIF_U2C_N4_C0)
irq_entry_function(CUIF_DefaultISR)
irq_auto_eoi(CUIF_TRUE)
/************************* Core ISR Configure END ******************/

// 11
// SS 0
/************************* Core ISR Configure Begin ****************/
irq_index(CUIF_U2C_N4_SS0)
irq_entry_function(CUIF_DefaultISR)
irq_auto_eoi(CUIF_TRUE)
/************************* Core ISR Configure END ******************/

// 12
// SS 1
/************************* Core ISR Configure Begin ****************/
irq_index(CUIF_U2C_N4_SS1)
irq_entry_function(CUIF_DefaultISR)
irq_auto_eoi(CUIF_TRUE)
/************************* Core ISR Configure END ******************/

// 13
// reserve IRQ 0
/************************* Core ISR Configure Begin ****************/
irq_index(CUIF_U2C_N4_RESERVE0)
irq_entry_function(CUIF_DefaultISR)
irq_auto_eoi(CUIF_TRUE)
/************************* Core ISR Configure END ******************/

// 14
// reserve IRQ 1
/************************* Core ISR Configure Begin ****************/
irq_index(CUIF_U2C_N4_RESERVE1)
irq_entry_function(CUIF_DefaultISR)
irq_auto_eoi(CUIF_TRUE)
/************************* Core ISR Configure END ******************/

// 15
// reserve IRQ 2
/************************* Core ISR Configure Begin ****************/
irq_index(CUIF_U2C_N4_RESERVE2)
irq_entry_function(CUIF_DefaultISR)
irq_auto_eoi(CUIF_TRUE)
/************************* Core ISR Configure END ******************/

// 16
// reserve IRQ 3
/************************* Core ISR Configure Begin ****************/
irq_index(CUIF_U2C_N4_RESERVE3)
irq_entry_function(CUIF_DefaultISR)
irq_auto_eoi(CUIF_TRUE)
/************************* Core ISR Configure END ******************/

// 17
// reserve IRQ 4
/************************* Core ISR Configure Begin ****************/
irq_index(CUIF_U2C_N4_RESERVE4)
irq_entry_function(CUIF_DefaultISR)
irq_auto_eoi(CUIF_TRUE)
/************************* Core ISR Configure END ******************/

// 18
// reserve IRQ 5
/************************* Core ISR Configure Begin ****************/
irq_index(CUIF_U2C_N4_RESERVE5)
irq_entry_function(CUIF_DefaultISR)
irq_auto_eoi(CUIF_TRUE)
/************************* Core ISR Configure END ******************/

// 19
// reserve IRQ 6
/************************* Core ISR Configure Begin ****************/
irq_index(CUIF_U2C_N4_RESERVE6)
irq_entry_function(CUIF_DefaultISR)
irq_auto_eoi(CUIF_TRUE)
/************************* Core ISR Configure END ******************/

// 20
// reserve IRQ 7
/************************* Core ISR Configure Begin ****************/
irq_index(CUIF_U2C_N4_RESERVE7)
irq_entry_function(CUIF_DefaultISR)
irq_auto_eoi(CUIF_TRUE)
/************************* Core ISR Configure END ******************/

#endif
