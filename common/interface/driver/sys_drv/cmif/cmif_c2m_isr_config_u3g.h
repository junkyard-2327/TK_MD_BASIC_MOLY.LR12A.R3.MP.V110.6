// 0
/************************* Core ISR Configure Begin ****************/
irq_index(CMIF_C2M_U3G_IRQ_LOADER_OFF)
irq_name("CMIF_C2M_U3G_IRQ_LOADER_OFF")
irq_entry_function(rake_loader_off_isr)
irq_auto_eoi(CMIF_TRUE)
/************************* Core ISR Configure END ******************/
// 1
/************************* Core ISR Configure Begin ****************/
irq_index(CMIF_C2M_U3G_IRQ1)
irq_name("CMIF_C2M_U3G_IRQ1")
irq_entry_function(CMIF_DefaultISR)
irq_auto_eoi(CMIF_TRUE)
/************************* Core ISR Configure END ******************/

// 2
/************************* Core ISR Configure Begin ****************/
irq_index(CMIF_C2M_U3G_IRQ2)
irq_name("CMIF_C2M_U3G_IRQ2")
irq_entry_function(CMIF_DefaultISR)
irq_auto_eoi(CMIF_TRUE)
/************************* Core ISR Configure END ******************/

// 3
/************************* Core ISR Configure Begin ****************/
irq_index(C2M_DEACTIVATE_IRQ)
irq_name("C2M_DEACTIVATE_IRQ")
irq_entry_function(sleep_irq_comment)
irq_auto_eoi(CMIF_TRUE)
/************************* Core ISR Configure END ******************/

// 4
/************************* Core ISR Configure Begin ****************/
irq_index(C2M_ACTIVATE_IRQ)
irq_name("C2M_ACTIVATE_IRQ")
irq_entry_function(abort_irq_comment)
irq_auto_eoi(CMIF_TRUE)
/************************* Core ISR Configure END ******************/

// 5
/************************* Core ISR Configure Begin ****************/
irq_index(CMIF_C2M_U3G_IRQ5)
irq_name("CMIF_C2M_U3G_IRQ5")
irq_entry_function(loader_run_time_ddl_it_empty)
irq_auto_eoi(CMIF_TRUE)
/************************* Core ISR Configure END ******************/

// 6
/************************* Core ISR Configure Begin ****************/
irq_index(CMIF_C2M_U3G_IRQ6)
irq_name("CMIF_C2M_U3G_IRQ6")
irq_entry_function(CMIF_DefaultISR)
irq_auto_eoi(CMIF_TRUE)
/************************* Core ISR Configure END ******************/

// 7
/************************* Core ISR Configure Begin ****************/
irq_index(CMIF_C2M_U3G_IRQ7)
irq_name("CMIF_C2M_U3G_IRQ7")
irq_entry_function(CMIF_DefaultISR)
irq_auto_eoi(CMIF_TRUE)
/************************* Core ISR Configure END ******************/

// 8
/************************* Core ISR Configure Begin ****************/
irq_index(CMIF_C2M_U3G_IRQ8)
irq_name("CMIF_C2M_U3G_IRQ8")
irq_entry_function(CMIF_DefaultISR)
irq_auto_eoi(CMIF_TRUE)
/************************* Core ISR Configure END ******************/

// 9
/************************* Core ISR Configure Begin ****************/
irq_index(CMIF_C2M_U3G_IRQ9)
irq_name("CMIF_C2M_U3G_IRQ9")
irq_entry_function(CMIF_DefaultISR)
irq_auto_eoi(CMIF_TRUE)
/************************* Core ISR Configure END ******************/

// 10
/************************* Core ISR Configure Begin ****************/
irq_index(CMIF_C2M_U3G_IRQA)
irq_name("CMIF_C2M_U3G_IRQA")
irq_entry_function(CMIF_DefaultISR)
irq_auto_eoi(CMIF_TRUE)
/************************* Core ISR Configure END ******************/

// 11
/************************* Core ISR Configure Begin ****************/
irq_index(CMIF_C2M_U3G_IRQB)
irq_name("CMIF_C2M_U3G_IRQB")
irq_entry_function(CMIF_DefaultISR)
irq_auto_eoi(CMIF_TRUE)
/************************* Core ISR Configure END ******************/

// 12
/************************* Core ISR Configure Begin ****************/
irq_index(CMIF_C2M_U3G_IRQC)
irq_name("CMIF_C2M_U3G_IRQC")
irq_entry_function(CMIF_DefaultISR)
irq_auto_eoi(CMIF_TRUE)
/************************* Core ISR Configure END ******************/

// 13
/************************* Core ISR Configure Begin ****************/
irq_index(CMIF_C2M_U3G_IRQD)
irq_name("CMIF_C2M_U3G_IRQD")
irq_entry_function(CMIF_DefaultISR)
irq_auto_eoi(CMIF_TRUE)
/************************* Core ISR Configure END ******************/

// 14
/************************* Core ISR Configure Begin ****************/
irq_index(CMIF_C2M_U3G_IRQE)
irq_name("CMIF_C2M_U3G_IRQE")
irq_entry_function(CMIF_DefaultISR)
irq_auto_eoi(CMIF_TRUE)
/************************* Core ISR Configure END ******************/

// 15
/************************* Core ISR Configure Begin ****************/
irq_index(CMIF_C2M_U3G_IRQF)
irq_name("CMIF_C2M_U3G_IRQF")
irq_entry_function(CMIF_DefaultISR)
irq_auto_eoi(CMIF_TRUE)
/************************* Core ISR Configure END ******************/

// 16
/************************* Core ISR Configure Begin ****************/
irq_index(CMIF_C2M_U3G_IRQ10)
irq_name("CMIF_C2M_U3G_IRQ10")
irq_entry_function(CMIF_DefaultISR)
irq_auto_eoi(CMIF_TRUE)
/************************* Core ISR Configure END ******************/

// 17
/************************* Core ISR Configure Begin ****************/
irq_index(CMIF_C2M_U3G_IRQ11)
irq_name("CMIF_C2M_U3G_IRQ11")
irq_entry_function(CMIF_DefaultISR)
irq_auto_eoi(CMIF_TRUE)
/************************* Core ISR Configure END ******************/

// 18
/************************* Core ISR Configure Begin ****************/
irq_index(CMIF_C2M_U3G_IRQ12)
irq_name("CMIF_C2M_U3G_IRQ12")
irq_entry_function(CMIF_DefaultISR)
irq_auto_eoi(CMIF_TRUE)
/************************* Core ISR Configure END ******************/

// 19
/************************* Core ISR Configure Begin ****************/
irq_index(CMIF_C2M_U3G_IRQ13)
irq_name("CMIF_C2M_U3G_IRQ13")
irq_entry_function(CMIF_DefaultISR)
irq_auto_eoi(CMIF_TRUE)
/************************* Core ISR Configure END ******************/

// 20
/************************* Core ISR Configure Begin ****************/
irq_index(CMIF_C2M_U3G_IRQ14)
irq_name("CMIF_C2M_U3G_IRQ14")
irq_entry_function(CMIF_DefaultISR)
irq_auto_eoi(CMIF_TRUE)
/************************* Core ISR Configure END ******************/

// 21
/************************* Core ISR Configure Begin ****************/
irq_index(CMIF_C2M_U3G_IRQ15)
irq_name("CMIF_C2M_U3G_IRQ15")
irq_entry_function(CMIF_DefaultISR)
irq_auto_eoi(CMIF_TRUE)
/************************* Core ISR Configure END ******************/

// 22
/************************* Core ISR Configure Begin ****************/
irq_index(CMIF_C2M_U3G_IRQ16)
irq_name("CMIF_C2M_U3G_IRQ16")
irq_entry_function(CMIF_DefaultISR)
irq_auto_eoi(CMIF_TRUE)
/************************* Core ISR Configure END ******************/

// 23
/************************* Core ISR Configure Begin ****************/
irq_index(CMIF_C2M_U3G_IRQ17)
irq_name("CMIF_C2M_U3G_IRQ17")
irq_entry_function(CMIF_DefaultISR)
irq_auto_eoi(CMIF_TRUE)
/************************* Core ISR Configure END ******************/

// 24
/************************* Core ISR Configure Begin ****************/
irq_index(CMIF_C2M_U3G_IRQ18)
irq_name("CMIF_C2M_U3G_IRQ18")
irq_entry_function(CMIF_DefaultISR)
irq_auto_eoi(CMIF_TRUE)
/************************* Core ISR Configure END ******************/

// 25
/************************* Core ISR Configure Begin ****************/
irq_index(CMIF_C2M_U3G_IRQ19)
irq_name("CMIF_C2M_U3G_IRQ19")
irq_entry_function(CMIF_DefaultISR)
irq_auto_eoi(CMIF_TRUE)
/************************* Core ISR Configure END ******************/

// 26
/************************* Core ISR Configure Begin ****************/
irq_index(CMIF_C2M_U3G_IRQ1A)
irq_name("CMIF_C2M_U3G_IRQ1A")
irq_entry_function(CMIF_DefaultISR)
irq_auto_eoi(CMIF_TRUE)
/************************* Core ISR Configure END ******************/

// 27
/************************* Core ISR Configure Begin ****************/
irq_index(CMIF_C2M_U3G_IRQ1B)
irq_name("CMIF_C2M_U3G_IRQ1B")
irq_entry_function(CMIF_DefaultISR)
irq_auto_eoi(CMIF_TRUE)
/************************* Core ISR Configure END ******************/

// 28
/************************* Core ISR Configure Begin ****************/
irq_index(CMIF_C2M_U3G_IRQ1C)
irq_name("CMIF_C2M_U3G_IRQ1C")
irq_entry_function(CMIF_DefaultISR)
irq_auto_eoi(CMIF_TRUE)
/************************* Core ISR Configure END ******************/

// 29
/************************* Core ISR Configure Begin ****************/
irq_index(CMIF_C2M_U3G_IRQ1D)
irq_name("CMIF_C2M_U3G_IRQ1D")
irq_entry_function(CMIF_DefaultISR)
irq_auto_eoi(CMIF_TRUE)
/************************* Core ISR Configure END ******************/

// 30
/************************* Core ISR Configure Begin ****************/
irq_index(CMIF_C2M_U3G_IRQ1E)
irq_name("CMIF_C2M_U3G_IRQ1E")
irq_entry_function(CMIF_DefaultISR)
irq_auto_eoi(CMIF_TRUE)
/************************* Core ISR Configure END ******************/

// 31
/************************* Core ISR Configure Begin ****************/
irq_index(CMIF_C2M_U3G_IRQ1F)
irq_name("CMIF_C2M_U3G_IRQ1F")
irq_entry_function(CMIF_DefaultISR)
irq_auto_eoi(CMIF_TRUE)
/************************* Core ISR Configure END ******************/
