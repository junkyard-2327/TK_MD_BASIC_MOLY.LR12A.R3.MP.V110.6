#if defined(__CUIF_DRV_TEST__)
// 0
// LTE IRQ 0
/************************* Core ISR Configure Begin ****************/
irq_index(CUIF_U2C_N1_L0)
irq_entry_function(CUIF_DefaultISR)
irq_auto_eoi(CUIF_TRUE)
/************************* Core ISR Configure END ******************/

// 1
// LTE IRQ 1
/************************* Core ISR Configure Begin ****************/
irq_index(CUIF_U2C_N1_L1)
irq_entry_function(CUIF_DefaultISR)
irq_auto_eoi(CUIF_TRUE)
/************************* Core ISR Configure END ******************/

// 2
// LTE IRQ 2
/************************* Core ISR Configure Begin ****************/
irq_index(CUIF_U2C_N1_L2)
irq_entry_function(CUIF_DefaultISR)
irq_auto_eoi(CUIF_TRUE)
/************************* Core ISR Configure END ******************/

// 3
// LTE IRQ 3
/************************* Core ISR Configure Begin ****************/
irq_index(CUIF_U2C_N1_L3)
irq_entry_function(CUIF_DefaultISR)
irq_auto_eoi(CUIF_TRUE)
/************************* Core ISR Configure END ******************/

// 4
// LTE IRQ 4
/************************* Core ISR Configure Begin ****************/
irq_index(CUIF_U2C_N1_L4)
irq_entry_function(CUIF_DriverTestISR_N1)
irq_auto_eoi(CUIF_TRUE)
/************************* Core ISR Configure END ******************/

// 5
// C2K IRQ 0
/************************* Core ISR Configure Begin ****************/
irq_index(CUIF_U2C_N1_C0)
irq_entry_function(CUIF_DriverTestISR_N1)
irq_auto_eoi(CUIF_TRUE)
/************************* Core ISR Configure END ******************/

// 6
// SS 0
/************************* Core ISR Configure Begin ****************/
irq_index(CUIF_U2C_N1_SS0)
irq_entry_function(CUIF_DriverTestISR_N1)
irq_auto_eoi(CUIF_TRUE)
/************************* Core ISR Configure END ******************/

// 7
// SS 1
/************************* Core ISR Configure Begin ****************/
irq_index(CUIF_U2C_N1_SS1)
irq_entry_function(CUIF_DriverTestISR_N1)
irq_auto_eoi(CUIF_FALSE)
/************************* Core ISR Configure END ******************/

// 8
// SS 2
/************************* Core ISR Configure Begin ****************/
irq_index(CUIF_U2C_N1_SS2)
irq_entry_function(CUIF_DriverTestISR_N1)
irq_auto_eoi(CUIF_FALSE)
/************************* Core ISR Configure END ******************/

// 9
// reserve IRQ 0
/************************* Core ISR Configure Begin ****************/
irq_index(CUIF_U2C_N1_RESERVE0)
irq_entry_function(CUIF_DriverTestISR_N1)
irq_auto_eoi(CUIF_FALSE)
/************************* Core ISR Configure END ******************/

// 10
// reserve IRQ 1
/************************* Core ISR Configure Begin ****************/
irq_index(CUIF_U2C_N1_RESERVE1)
irq_entry_function(CUIF_DefaultISR)
irq_auto_eoi(CUIF_TRUE)
/************************* Core ISR Configure END ******************/

// 11
// reserve IRQ 2
/************************* Core ISR Configure Begin ****************/
irq_index(CUIF_U2C_N1_RESERVE2)
irq_entry_function(CUIF_DefaultISR)
irq_auto_eoi(CUIF_TRUE)
/************************* Core ISR Configure END ******************/

// 12
// reserve IRQ 3
/************************* Core ISR Configure Begin ****************/
irq_index(CUIF_U2C_N1_RESERVE3)
irq_entry_function(CUIF_DefaultISR)
irq_auto_eoi(CUIF_TRUE)
/************************* Core ISR Configure END ******************/

// 13
// reserve IRQ 4
/************************* Core ISR Configure Begin ****************/
irq_index(CUIF_U2C_N1_RESERVE4)
irq_entry_function(CUIF_DefaultISR)
irq_auto_eoi(CUIF_TRUE)
/************************* Core ISR Configure END ******************/

// 14
// reserve IRQ 5
/************************* Core ISR Configure Begin ****************/
irq_index(CUIF_U2C_N1_RESERVE5)
irq_entry_function(CUIF_DefaultISR)
irq_auto_eoi(CUIF_TRUE)
/************************* Core ISR Configure END ******************/

// 15
// reserve IRQ 6
/************************* Core ISR Configure Begin ****************/
irq_index(CUIF_U2C_N1_RESERVE6)
irq_entry_function(CUIF_DefaultISR)
irq_auto_eoi(CUIF_TRUE)
/************************* Core ISR Configure END ******************/

// 16
// reserve IRQ 7
/************************* Core ISR Configure Begin ****************/
irq_index(CUIF_U2C_N1_RESERVE7)
irq_entry_function(CUIF_DefaultISR)
irq_auto_eoi(CUIF_TRUE)
/************************* Core ISR Configure END ******************/

#else /* basic */
// 0
// LTE IRQ 0
/************************* Core ISR Configure Begin ****************/
irq_index(CUIF_U2C_N1_L0)
irq_entry_function(CUIF_DefaultISR)
irq_auto_eoi(CUIF_TRUE)
/************************* Core ISR Configure END ******************/

// 1
// LTE IRQ 1
/************************* Core ISR Configure Begin ****************/
irq_index(CUIF_U2C_N1_L1)
irq_entry_function(CUIF_DefaultISR)
irq_auto_eoi(CUIF_TRUE)
/************************* Core ISR Configure END ******************/

// 2
// LTE IRQ 2
/************************* Core ISR Configure Begin ****************/
irq_index(CUIF_U2C_N1_L2)
irq_entry_function(CUIF_DefaultISR)
irq_auto_eoi(CUIF_TRUE)
/************************* Core ISR Configure END ******************/

// 3
// LTE IRQ 3
/************************* Core ISR Configure Begin ****************/
irq_index(CUIF_U2C_N1_L3)
irq_entry_function(CUIF_DefaultISR)
irq_auto_eoi(CUIF_TRUE)
/************************* Core ISR Configure END ******************/

// 4
// LTE IRQ 4
/************************* Core ISR Configure Begin ****************/
irq_index(CUIF_U2C_N1_L4)
irq_entry_function(CUIF_DefaultISR)
irq_auto_eoi(CUIF_TRUE)
/************************* Core ISR Configure END ******************/

// 5
// C2K IRQ 0
/************************* Core ISR Configure Begin ****************/
irq_index(CUIF_U2C_N1_C0)
irq_entry_function(CUIF_DefaultISR)
irq_auto_eoi(CUIF_TRUE)
/************************* Core ISR Configure END ******************/

// 6
// SS 0
/************************* Core ISR Configure Begin ****************/
irq_index(CUIF_U2C_N1_SS0)
irq_entry_function(CUIF_DefaultISR)
irq_auto_eoi(CUIF_TRUE)
/************************* Core ISR Configure END ******************/

// 7
// SS 1
/************************* Core ISR Configure Begin ****************/
irq_index(CUIF_U2C_N1_SS1)
irq_entry_function(CUIF_DefaultISR)
irq_auto_eoi(CUIF_TRUE)
/************************* Core ISR Configure END ******************/

// 8
// SS 2
/************************* Core ISR Configure Begin ****************/
irq_index(CUIF_U2C_N1_SS2)
irq_entry_function(CUIF_DefaultISR)
irq_auto_eoi(CUIF_TRUE)
/************************* Core ISR Configure END ******************/

// 9
// reserve IRQ 0
/************************* Core ISR Configure Begin ****************/
irq_index(CUIF_U2C_N1_RESERVE0)
irq_entry_function(CUIF_DefaultISR)
irq_auto_eoi(CUIF_TRUE)
/************************* Core ISR Configure END ******************/

// 10
// reserve IRQ 1
/************************* Core ISR Configure Begin ****************/
irq_index(CUIF_U2C_N1_RESERVE1)
irq_entry_function(CUIF_DefaultISR)
irq_auto_eoi(CUIF_TRUE)
/************************* Core ISR Configure END ******************/

// 11
// reserve IRQ 2
/************************* Core ISR Configure Begin ****************/
irq_index(CUIF_U2C_N1_RESERVE2)
irq_entry_function(CUIF_DefaultISR)
irq_auto_eoi(CUIF_TRUE)
/************************* Core ISR Configure END ******************/

// 12
// reserve IRQ 3
/************************* Core ISR Configure Begin ****************/
irq_index(CUIF_U2C_N1_RESERVE3)
irq_entry_function(CUIF_DefaultISR)
irq_auto_eoi(CUIF_TRUE)
/************************* Core ISR Configure END ******************/

// 13
// reserve IRQ 4
/************************* Core ISR Configure Begin ****************/
irq_index(CUIF_U2C_N1_RESERVE4)
irq_entry_function(CUIF_DefaultISR)
irq_auto_eoi(CUIF_TRUE)
/************************* Core ISR Configure END ******************/

// 14
// reserve IRQ 5
/************************* Core ISR Configure Begin ****************/
irq_index(CUIF_U2C_N1_RESERVE5)
irq_entry_function(CUIF_DefaultISR)
irq_auto_eoi(CUIF_TRUE)
/************************* Core ISR Configure END ******************/

// 15
// reserve IRQ 6
/************************* Core ISR Configure Begin ****************/
irq_index(CUIF_U2C_N1_RESERVE6)
irq_entry_function(CUIF_DefaultISR)
irq_auto_eoi(CUIF_TRUE)
/************************* Core ISR Configure END ******************/

// 16
// reserve IRQ 7
/************************* Core ISR Configure Begin ****************/
irq_index(CUIF_U2C_N1_RESERVE7)
irq_entry_function(CUIF_DefaultISR)
irq_auto_eoi(CUIF_TRUE)
/************************* Core ISR Configure END ******************/

#endif

