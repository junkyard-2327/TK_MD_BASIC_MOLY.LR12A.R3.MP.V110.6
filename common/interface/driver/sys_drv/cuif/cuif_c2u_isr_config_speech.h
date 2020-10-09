// 0
// SPEECH IRQ 0
/************************* Core ISR Configure Begin ****************/
irq_index(CUIF_C2U_SPEECH_SRST)
irq_entry_function(SPH_SRstLisrHdlr)
irq_auto_eoi(CUIF_TRUE)
/************************* Core ISR Configure END ******************/

// 1
// SPEECH IRQ 1
/************************* Core ISR Configure Begin ****************/
irq_index(CUIF_C2U_SPEECH_SEND)
irq_entry_function(SPH_SEndLisrHdlr)
irq_auto_eoi(CUIF_TRUE)
/************************* Core ISR Configure END ******************/

// 2
// SPEECH IRQ 2
/************************* Core ISR Configure Begin ****************/
irq_index(CUIF_C2U_SPEECH_FSM_SEND)
irq_entry_function(SPH_SOffLisrHdlr)
irq_auto_eoi(CUIF_TRUE)
/************************* Core ISR Configure END ******************/

// 3
// SS IRQ 0
/************************* Core ISR Configure Begin ****************/
irq_index(CUIF_C2U_SPEECH_SS_DEACTIVATE)
irq_entry_function(dsp_deactivate_callback)
irq_auto_eoi(CUIF_TRUE)
/************************* Core ISR Configure END ******************/

// 4
// SS IRQ 1
/************************* Core ISR Configure Begin ****************/
irq_index(CUIF_C2U_SPEECH_SS_INIT_ACTIVATE)
irq_entry_function(fill_bootup_pattern_after_cuifhandshake)
irq_auto_eoi(CUIF_TRUE)
/************************* Core ISR Configure END ******************/

// 5
// SS IRQ 2
/************************* Core ISR Configure Begin ****************/
irq_index(CUIF_C2U_SPEECH_SS_2)
irq_entry_function(CUIF_DefaultISR)
irq_auto_eoi(CUIF_TRUE)
/************************* Core ISR Configure END ******************/

// 6
// RESERVE IRQ 0
/************************* Core ISR Configure Begin ****************/
irq_index(CUIF_C2U_SPEECH_RESERVE0)
irq_entry_function(CUIF_DefaultISR)
irq_auto_eoi(CUIF_TRUE)
/************************* Core ISR Configure END ******************/

// 7
// RESERVE IRQ 1
/************************* Core ISR Configure Begin ****************/
irq_index(CUIF_C2U_SPEECH_RESERVE1)
irq_entry_function(CUIF_DefaultISR)
irq_auto_eoi(CUIF_TRUE)
/************************* Core ISR Configure END ******************/

// 8
// RESERVE IRQ 2
/************************* Core ISR Configure Begin ****************/
irq_index(CUIF_C2U_SPEECH_RESERVE2)
irq_entry_function(CUIF_DefaultISR)
irq_auto_eoi(CUIF_TRUE)
/************************* Core ISR Configure END ******************/

// 9
// RESERVE IRQ 3
/************************* Core ISR Configure Begin ****************/
irq_index(CUIF_C2U_SPEECH_RESERVE3)
irq_entry_function(CUIF_DefaultISR)
irq_auto_eoi(CUIF_TRUE)
/************************* Core ISR Configure END ******************/

