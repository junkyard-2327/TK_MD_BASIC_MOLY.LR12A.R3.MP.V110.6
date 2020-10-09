/* inner callback */
// 0
// INNER IRQ 0
/************************* Core ISR Configure Begin ****************/
irq_index(CUIF_C2U_INNER_INNER0)
irq_entry_function(CUIF_DefaultISR)
irq_auto_eoi(CUIF_TRUE)
/************************* Core ISR Configure END ******************/

// 1
// INNER IRQ 1
/************************* Core ISR Configure Begin ****************/
irq_index(CUIF_C2U_INNER_INNER1)
irq_entry_function(CUIF_DefaultISR)
irq_auto_eoi(CUIF_TRUE)

/************************* Core ISR Configure END ******************/

// 2
// INNER IRQ 2
/************************* Core ISR Configure Begin ****************/
irq_index(CUIF_C2U_INNER_INNER2)
irq_entry_function(CUIF_DefaultISR)
irq_auto_eoi(CUIF_TRUE)

/************************* Core ISR Configure END ******************/

// 3
// INNER IRQ 3
/************************* Core ISR Configure Begin ****************/
irq_index(CUIF_C2U_INNER_INNER3)
irq_entry_function(CUIF_DefaultISR)
irq_auto_eoi(CUIF_TRUE)

/************************* Core ISR Configure END ******************/

// 4
// INNER IRQ 4
/************************* Core ISR Configure Begin ****************/
irq_index(CUIF_C2U_INNER_INNER4)
irq_entry_function(CUIF_DefaultISR)
irq_auto_eoi(CUIF_TRUE)

/************************* Core ISR Configure END ******************/

// 5
// INNER IRQ 5
/************************* Core ISR Configure Begin ****************/
irq_index(CUIF_C2U_INNER_INNER5)
irq_entry_function(CUIF_DefaultISR)
irq_auto_eoi(CUIF_TRUE)
/************************* Core ISR Configure END ******************/

// 6
// INNER IRQ 6
/************************* Core ISR Configure Begin ****************/
irq_index(CUIF_C2U_INNER_INNER6)
irq_entry_function(LISR_lte_inner_termination_tick)
irq_auto_eoi(CUIF_TRUE)
/************************* Core ISR Configure END ******************/

// 7
// INNER IRQ 7
/************************* Core ISR Configure Begin ****************/
irq_index(CUIF_C2U_INNER_INNER7)
irq_entry_function(CUIF_DefaultISR)
irq_auto_eoi(CUIF_TRUE)
/************************* Core ISR Configure END ******************/

// 8
// INNER IRQ 8
/************************* Core ISR Configure Begin ****************/
irq_index(CUIF_C2U_INNER_INNER8_C2K_SCHD)
irq_entry_function(LISR_c2k_c2uirq)
irq_auto_eoi(CUIF_TRUE)
/************************* Core ISR Configure END ******************/

// 9
// INNER IRQ 9
/************************* Core ISR Configure Begin ****************/
irq_index(CUIF_C2U_INNER_INNER9)
irq_entry_function(CUIF_DefaultISR)
irq_auto_eoi(CUIF_TRUE)
/************************* Core ISR Configure END ******************/

// 10
// INNER IRQ 10
/************************* Core ISR Configure Begin ****************/
irq_index(CUIF_C2U_INNER_INNER10_TDSCDMA_SCHD)
irq_entry_function(LISR_tdscdma_c2uirq)
irq_auto_eoi(CUIF_TRUE)
/************************* Core ISR Configure END ******************/

// 11
// INNER IRQ 11
/************************* Core ISR Configure Begin ****************/
irq_index(CUIF_C2U_INNER_INNER11_TDSCDMA_RESERVED)
irq_entry_function(CUIF_DefaultISR)
irq_auto_eoi(CUIF_TRUE)
/************************* Core ISR Configure END ******************/

// 12
// INNER IRQ 12
/************************* Core ISR Configure Begin ****************/
irq_index(CUIF_C2U_INNER_INNER12_WCDMA_INIT_TICK)
irq_entry_function(C2U_IRQ_wcdma_init_tick)
irq_auto_eoi(CUIF_TRUE)
/************************* Core ISR Configure END ******************/

// 13
// INNER IRQ 13
/************************* Core ISR Configure Begin ****************/
irq_index(CUIF_C2U_INNER_INNER13)
irq_entry_function(CUIF_DefaultISR)
irq_auto_eoi(CUIF_TRUE)
/************************* Core ISR Configure END ******************/

// 14
// SS IRQ 0
/************************* Core ISR Configure Begin ****************/
irq_index(CUIF_C2U_INNER_SS_DEACTIVATE)
irq_entry_function(dsp_deactivate_callback)
irq_auto_eoi(CUIF_TRUE)
/************************* Core ISR Configure END ******************/

// 15
// SS IRQ 1
/************************* Core ISR Configure Begin ****************/
irq_index(CUIF_C2U_INNER_SS_INIT_ACTIVATE)
irq_entry_function(fill_bootup_pattern_after_cuifhandshake)
irq_auto_eoi(CUIF_TRUE)
/************************* Core ISR Configure END ******************/

// 16
// SS IRQ 2
/************************* Core ISR Configure Begin ****************/
irq_index(CUIF_C2U_INNER_SS_TRIGGER_DDL_OR_GDMA_DONE)
irq_entry_function(ddl_inner_handler)
irq_auto_eoi(CUIF_TRUE)
/************************* Core ISR Configure END ******************/

// 17
// SS IRQ 3
/************************* Core ISR Configure Begin ****************/
irq_index(CUIF_C2U_INNER_CANT_DO_LTE)
irq_entry_function(inner_can_not_do_lte)
irq_auto_eoi(CUIF_TRUE)
/************************* Core ISR Configure END ******************/

// 18
// SS IRQ 4
/************************* Core ISR Configure Begin ****************/
irq_index(CUIF_C2U_INNER_CAN_DO_LTE)
irq_entry_function(inner_can_do_lte)
irq_auto_eoi(CUIF_TRUE)
/************************* Core ISR Configure END ******************/

// 19
// reserve IRQ 2
/************************* Core ISR Configure Begin ****************/
irq_index(CUIF_C2U_INNER_RESERVE2)
irq_entry_function(CUIF_DefaultISR)
irq_auto_eoi(CUIF_TRUE)
/************************* Core ISR Configure END ******************/

// 20
// reserve IRQ 3
/************************* Core ISR Configure Begin ****************/
irq_index(CUIF_C2U_INNER_RESERVE3)
irq_entry_function(CUIF_DefaultISR)
irq_auto_eoi(CUIF_TRUE)
/************************* Core ISR Configure END ******************/

// 21
// reserve IRQ 4
/************************* Core ISR Configure Begin ****************/
irq_index(CUIF_C2U_INNER_RESERVE4)
irq_entry_function(CUIF_DefaultISR)
irq_auto_eoi(CUIF_TRUE)
/************************* Core ISR Configure END ******************/

// 22
// reserve IRQ 5
/************************* Core ISR Configure Begin ****************/
irq_index(CUIF_C2U_INNER_RESERVE5)
irq_entry_function(CUIF_DefaultISR)
irq_auto_eoi(CUIF_TRUE)
/************************* Core ISR Configure END ******************/

// 23
// reserve IRQ 6
/************************* Core ISR Configure Begin ****************/
irq_index(CUIF_C2U_INNER_RESERVE6)
irq_entry_function(CUIF_DefaultISR)
irq_auto_eoi(CUIF_TRUE)
/************************* Core ISR Configure END ******************/

// 24
// reserve IRQ 7
/************************* Core ISR Configure Begin ****************/
irq_index(CUIF_C2U_INNER_RESERVE7)
irq_entry_function(CUIF_DefaultISR)
irq_auto_eoi(CUIF_TRUE)
/************************* Core ISR Configure END ******************/

