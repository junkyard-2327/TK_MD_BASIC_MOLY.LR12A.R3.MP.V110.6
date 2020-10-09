#if defined(__CUIF_DRV_TEST__)
// 0
// TDD IRQ 0
/************************* Core ISR Configure Begin ****************/
irq_index(CUIF_U2C_N2_T0)
irq_entry_function(CUIF_DefaultISR)
irq_auto_eoi(CUIF_TRUE)
/************************* Core ISR Configure END ******************/

// 1
// TDD IRQ 1
/************************* Core ISR Configure Begin ****************/
irq_index(CUIF_U2C_N2_T1)
irq_entry_function(CUIF_DefaultISR)
irq_auto_eoi(CUIF_TRUE)
/************************* Core ISR Configure END ******************/

// 2
// TDD IRQ 2
/************************* Core ISR Configure Begin ****************/
irq_index(CUIF_U2C_N2_T2)
irq_entry_function(CUIF_DefaultISR)
irq_auto_eoi(CUIF_TRUE)
/************************* Core ISR Configure END ******************/

// 3
// C2K IRQ 3
/************************* Core ISR Configure Begin ****************/
irq_index(CUIF_U2C_N2_C3)
irq_entry_function(CUIF_DefaultISR)
irq_auto_eoi(CUIF_TRUE)
/************************* Core ISR Configure END ******************/

// 4
// SS 0
/************************* Core ISR Configure Begin ****************/
irq_index(CUIF_U2C_N2_SS0)
irq_entry_function(CUIF_DriverTestISR_N2)
irq_auto_eoi(CUIF_TRUE)
/************************* Core ISR Configure END ******************/

// 5
// SS 1
/************************* Core ISR Configure Begin ****************/
irq_index(CUIF_U2C_N2_SS1)
irq_entry_function(CUIF_DriverTestISR_N2)
irq_auto_eoi(CUIF_TRUE)
/************************* Core ISR Configure END ******************/

// 6
// SS 2
/************************* Core ISR Configure Begin ****************/
irq_index(CUIF_U2C_N2_SS2)
irq_entry_function(CUIF_DriverTestISR_N2)
irq_auto_eoi(CUIF_TRUE)
/************************* Core ISR Configure END ******************/

// 7
// reserve IRQ 0
/************************* Core ISR Configure Begin ****************/
irq_index(CUIF_U2C_N2_RESERVE0)
irq_entry_function(CUIF_DriverTestISR_N2)
irq_auto_eoi(CUIF_FALSE)
/************************* Core ISR Configure END ******************/

// 8
// reserve IRQ 1
/************************* Core ISR Configure Begin ****************/
irq_index(CUIF_U2C_N2_RESERVE1)
irq_entry_function(CUIF_DriverTestISR_N2)
irq_auto_eoi(CUIF_FALSE)
/************************* Core ISR Configure END ******************/

// 9
// reserve IRQ 2
/************************* Core ISR Configure Begin ****************/
irq_index(CUIF_U2C_N2_RESERVE2)
irq_entry_function(CUIF_DriverTestISR_N2)
irq_auto_eoi(CUIF_FALSE)
/************************* Core ISR Configure END ******************/

// 10
// reserve IRQ 3
/************************* Core ISR Configure Begin ****************/
irq_index(CUIF_U2C_N2_RESERVE3)
irq_entry_function(CUIF_DefaultISR)
irq_auto_eoi(CUIF_TRUE)
/************************* Core ISR Configure END ******************/

#else /* basic */

// 0
// TDD IRQ 0
/************************* Core ISR Configure Begin ****************/
irq_index(CUIF_U2C_N2_T0)
irq_entry_function(CUIF_DefaultISR)
irq_auto_eoi(CUIF_TRUE)
/************************* Core ISR Configure END ******************/

// 1
// TDD IRQ 1
/************************* Core ISR Configure Begin ****************/
irq_index(CUIF_U2C_N2_T1)
irq_entry_function(CUIF_DefaultISR)
irq_auto_eoi(CUIF_TRUE)
/************************* Core ISR Configure END ******************/

// 2
// TDD IRQ 2
/************************* Core ISR Configure Begin ****************/
irq_index(CUIF_U2C_N2_T2)
irq_entry_function(CUIF_DefaultISR)
irq_auto_eoi(CUIF_TRUE)
/************************* Core ISR Configure END ******************/

// 3
// C2K IRQ 3
/************************* Core ISR Configure Begin ****************/
irq_index(CUIF_U2C_N2_C3)
irq_entry_function(CUIF_DefaultISR)
irq_auto_eoi(CUIF_TRUE)
/************************* Core ISR Configure END ******************/

// 4
// SS 0
/************************* Core ISR Configure Begin ****************/
irq_index(CUIF_U2C_N2_SS0)
irq_entry_function(CUIF_DefaultISR)
irq_auto_eoi(CUIF_TRUE)
/************************* Core ISR Configure END ******************/

// 5
// SS 1
/************************* Core ISR Configure Begin ****************/
irq_index(CUIF_U2C_N2_SS1)
irq_entry_function(CUIF_DefaultISR)
irq_auto_eoi(CUIF_TRUE)
/************************* Core ISR Configure END ******************/

// 6
// SS 2
/************************* Core ISR Configure Begin ****************/
irq_index(CUIF_U2C_N2_SS2)
irq_entry_function(CUIF_DefaultISR)
irq_auto_eoi(CUIF_TRUE)
/************************* Core ISR Configure END ******************/

// 7
// reserve IRQ 0
/************************* Core ISR Configure Begin ****************/
irq_index(CUIF_U2C_N2_RESERVE0)
irq_entry_function(CUIF_DefaultISR)
irq_auto_eoi(CUIF_TRUE)
/************************* Core ISR Configure END ******************/

// 8
// reserve IRQ 1
/************************* Core ISR Configure Begin ****************/
irq_index(CUIF_U2C_N2_RESERVE1)
irq_entry_function(CUIF_DefaultISR)
irq_auto_eoi(CUIF_TRUE)
/************************* Core ISR Configure END ******************/

// 9
// reserve IRQ 2
/************************* Core ISR Configure Begin ****************/
irq_index(CUIF_U2C_N2_RESERVE2)
irq_entry_function(CUIF_DefaultISR)
irq_auto_eoi(CUIF_TRUE)
/************************* Core ISR Configure END ******************/

// 10
// reserve IRQ 3
/************************* Core ISR Configure Begin ****************/
irq_index(CUIF_U2C_N2_RESERVE3)
irq_entry_function(CUIF_DefaultISR)
irq_auto_eoi(CUIF_TRUE)
/************************* Core ISR Configure END ******************/

#endif

