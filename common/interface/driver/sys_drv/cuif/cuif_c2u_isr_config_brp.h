// 0
// HBRP IRQ 0
/************************* Core ISR Configure Begin ****************/
irq_index(CUIF_C2U_BRP_HBRP0_HSPA_SERV_SCCH)
irq_entry_function(top_c2m_isr_serv_scch_proc)
irq_auto_eoi(CUIF_TRUE)
/************************* Core ISR Configure END ******************/

// 1
// HBRP IRQ 1
/************************* Core ISR Configure Begin ****************/
irq_index(CUIF_C2U_BRP_HBRP1_HSPA_AGCH)
irq_entry_function(top_c2m_isr_agch_proc)
irq_auto_eoi(CUIF_TRUE)
/************************* Core ISR Configure END ******************/

// 2
// HBRP IRQ 2
/************************* Core ISR Configure Begin ****************/
irq_index(CUIF_C2U_BRP_HBRP2_HSPA_NC_SCCH)
irq_entry_function(top_c2m_isr_nc_scch_proc)
irq_auto_eoi(CUIF_TRUE)
/************************* Core ISR Configure END ******************/

// 3
// HBRP IRQ 3
/************************* Core ISR Configure Begin ****************/
irq_index(CUIF_C2U_BRP_HBRP3)
irq_entry_function(CUIF_DefaultISR)
irq_auto_eoi(CUIF_TRUE)
/************************* Core ISR Configure END ******************/

// 4
// HBRP IRQ 4
/************************* Core ISR Configure Begin ****************/
irq_index(CUIF_C2U_BRP_HBRP4)
irq_entry_function(CUIF_DefaultISR)
irq_auto_eoi(CUIF_TRUE)
/************************* Core ISR Configure END ******************/

// 5
// SS IRQ 0
/************************* Core ISR Configure Begin ****************/
irq_index(CUIF_C2U_BRP_SS_DEACTIVATE)
irq_entry_function(dsp_deactivate_callback)
irq_auto_eoi(CUIF_TRUE)
/************************* Core ISR Configure END ******************/

// 6
// SS IRQ 1
/************************* Core ISR Configure Begin ****************/
irq_index(CUIF_C2U_BRP_SS_INIT_ACTIVATE)
irq_entry_function(fill_bootup_pattern_after_cuifhandshake)
irq_auto_eoi(CUIF_TRUE)
/************************* Core ISR Configure END ******************/

// 7
// SS IRQ 2
/************************* Core ISR Configure Begin ****************/
irq_index(CUIF_C2U_BRP_SS_TRIGGER_DDL)
irq_entry_function(ddl_brp_handler)
irq_auto_eoi(CUIF_TRUE)
/************************* Core ISR Configure END ******************/

// 8
// reserve IRQ 0
/************************* Core ISR Configure Begin ****************/
irq_index(CUIF_C2U_POS_T2F_CMD)
irq_entry_function(LISR_BRP_lte_pos_td2fd_cmd)
irq_auto_eoi(CUIF_TRUE)

/************************* Core ISR Configure END ******************/

// 9
// reserve IRQ 1
/************************* Core ISR Configure Begin ****************/
irq_index(CUIF_C2U_POS_ABORT)
irq_entry_function(LISR_lte_pos_abort)
irq_auto_eoi(CUIF_TRUE)


/************************* Core ISR Configure END ******************/

// 10
// reserve IRQ 2
/************************* Core ISR Configure Begin ****************/
irq_index(CUIF_C2U_POS_CELL0_CMD)
irq_entry_function(LISR_BRP_lte_pos_cell0)
irq_auto_eoi(CUIF_TRUE)

/************************* Core ISR Configure END ******************/

// 11
// reserve IRQ 3
/************************* Core ISR Configure Begin ****************/
irq_index(CUIF_C2U_POS_CELL1_CMD)
irq_entry_function(LISR_BRP_lte_pos_cell1)
irq_auto_eoi(CUIF_TRUE)

/************************* Core ISR Configure END ******************/

// 12
// reserve IRQ 4
/************************* Core ISR Configure Begin ****************/
irq_index(CUIF_C2U_BRP_RESERVE4)
irq_entry_function(CUIF_DefaultISR)
irq_auto_eoi(CUIF_TRUE)
/************************* Core ISR Configure END ******************/

// 13
// reserve IRQ 5
/************************* Core ISR Configure Begin ****************/
irq_index(CUIF_C2U_BRP_RESERVE5)
irq_entry_function(CUIF_DefaultISR)
irq_auto_eoi(CUIF_TRUE)
/************************* Core ISR Configure END ******************/

// 14
// reserve IRQ 6
/************************* Core ISR Configure Begin ****************/
irq_index(CUIF_C2U_BRP_RESERVE6)
irq_entry_function(CUIF_DefaultISR)
irq_auto_eoi(CUIF_TRUE)
/************************* Core ISR Configure END ******************/

