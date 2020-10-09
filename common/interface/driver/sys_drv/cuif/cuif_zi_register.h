/**
 * @brief register cuif zi region
 *    Users could register zi region for each mode with the following format
 *       inner_cuif_zi_init_table_MODE(start_addr, byte_size)
 *       brp_cuif_zi_init_table_MODE(start_addr, byte_size)
 *       fec_wbrp_cuif_zi_init_table_MODE(start_addr, byte_size)
 *       speech_cuif_zi_init_table_MODE(start_addr, byte_size)
 *
 *      cuif memory region from start_addr to start_addr+size-1 will be ZI init
 *    where      
 *      MODE is boot_up / abort / wake_up
 *      start_addr and size should be 4-bye alignment
 *
 *     boot_up     - first boot-up and sleep resume
 *                        inner_cuif_zi_init_table_boot_up(addr, byte_size)
 *                        brp_cuif_zi_init_table_boot_up(addr, byte_size)
 *                        fec_wbrp_cuif_zi_init_table_boot_up(addr, byte_size)
 *                        speech_cuif_zi_init_table_boot_up(addr, byte_size)
 *
 *     abort         - sleep/dormant abort
 *                        inner_cuif_zi_init_table_abort(addr, byte_size)
 *                        brp_cuif_zi_init_table_abort(addr, byte_size)
 *                        fec_wbrp_cuif_zi_init_table_abort(addr, byte_size)
 *                        speech_cuif_zi_init_table_abort(addr, byte_size)
 *
 *     wake_up    - dormant wake-up
 *                        inner_cuif_zi_init_table_wake_up(addr, byte_size)
 *                        brp_cuif_zi_init_table_wake_up(addr, byte_size)
 *                        fec_wbrp_cuif_zi_init_table_wake_up(addr, byte_size)
 *                        speech_cuif_zi_init_table_wake_up(addr, byte_size)
 *
  *     ddl          - dynamic download finish
 *                        inner_cuif_zi_init_table_ddl(addr, byte_size)
 *                        brp_cuif_zi_init_table_ddl(addr, byte_size)
 *                        fec_wbrp_cuif_zi_init_table_ddl(addr, byte_size)
 *                        speech_cuif_zi_init_table_ddl(addr, byte_size)
 *
 *     Please do NOT add `;` in the line end, it would cause compile error
 *
 *     MODULE_cuif_zi_init_table_MODE(start_addr, byte_size);              // Error!!!
 *
 *
 **/
#if !defined(__USIP_CUIF_ZI_INIT_TEST__)

#if !defined(__USIP_BASIC_LOAD__)
/*
Register ZI region here for default load
Please contact file owner to chek-in code
*/
inner_cuif_zi_init_table_boot_up(CUIF_LTE_ALL_REGS_BASE, sizeof(CUIF_LTE_ALL_REGS))
    
inner_cuif_zi_init_table_boot_up(CUIF_WCDMA_INNER_ALL_PTR_FOR_ZI, sizeof(CUIF_WCDMA_INNER_ALL_REGS) * INNER_LTE_ALL_CC_NUM)

fec_wbrp_cuif_zi_init_table_boot_up(FEC_WBRP_FEC_REGION_BASE, sizeof(CUIF_FEC_region))
fec_wbrp_cuif_zi_init_table_boot_up(FEC_WBRP_WR99_CUIF, sizeof(WR99_CUIF_REGS))
#if defined(__DSP_CODEBASE_MT6295__)
fec_wbrp_cuif_zi_init_table_boot_up(FEC_WBRP_FEC_C_TX_INFO, sizeof(FEC_C_TX_INFO_t))
fec_wbrp_cuif_zi_init_table_boot_up(FEC_WBRP_FEC_C_RX_INFO, sizeof(FEC_C_RX_INFO_t))
#endif

speech_cuif_zi_init_table_boot_up(SPEECH_CUIF_REGION, sizeof(CUIF_Speech_Region_t))

/*
example:

inner_cuif_zi_init_table_boot_up(INNER_SS_DBGINFO, sizeof(SS_DBGInfo))
inner_cuif_zi_init_table_abort(INNER_SS_DBGINFO, sizeof(SS_DBGInfo))
inner_cuif_zi_init_table_wake_up(INNER_SS_DBGINFO, sizeof(SS_DBGInfo))
inner_cuif_zi_init_table_ddl(INNER_SS_DBGINFO, sizeof(SS_DBGInfo))

brp_cuif_zi_init_table_boot_up(BRP_SS_DBGINFO, sizeof(SS_DBGInfo))
brp_cuif_zi_init_table_abort(BRP_SS_DBGINFO, sizeof(SS_DBGInfo))
brp_cuif_zi_init_table_wake_up(BRP_SS_DBGINFO, sizeof(SS_DBGInfo))
brp_cuif_zi_init_table_ddl(BRP_SS_DBGINFO, sizeof(SS_DBGInfo))

fec_wbrp_cuif_zi_init_table_boot_up(FEC_WBRP_SS_DBGINFO, sizeof(SS_DBGInfo))
fec_wbrp_cuif_zi_init_table_abort(FEC_WBRP_SS_DBGINFO, sizeof(SS_DBGInfo))
fec_wbrp_cuif_zi_init_table_wake_up(FEC_WBRP_SS_DBGINFO, sizeof(SS_DBGInfo))
fec_wbrp_cuif_zi_init_table_ddl(FEC_WBRP_SS_DBGINFO, sizeof(SS_DBGInfo))

speech_cuif_zi_init_table_boot_up(SPEECH_SS_DBGINFO, sizeof(SS_DBGInfo))
speech_cuif_zi_init_table_abort(SPEECH_SS_DBGINFO, sizeof(SS_DBGInfo))
speech_cuif_zi_init_table_wake_up(SPEECH_SS_DBGINFO, sizeof(SS_DBGInfo))
speech_cuif_zi_init_table_ddl(SPEECH_SS_DBGINFO, sizeof(SS_DBGInfo))

*/

#else

//defined(__USIP_BASIC_LOAD__), zi nothing

#endif

#else
// defined(__USIP_CUIF_ZI_INIT_TEST__)
#if 1

inner_cuif_zi_init_table_boot_up(CUIF_INNER_BRP_BASE, 8)
inner_cuif_zi_init_table_boot_up(CUIF_INNER_BRP_BASE+9, 14)
inner_cuif_zi_init_table_boot_up(CUIF_INNER_BRP_BASE+26, 7)
inner_cuif_zi_init_table_boot_up(CUIF_INNER_BRP_BASE+34, 1)
inner_cuif_zi_init_table_boot_up(CUIF_INNER_BRP_BASE+39, 3)

inner_cuif_zi_init_table_abort(CUIF_INNER_BRP_BASE, 8)
inner_cuif_zi_init_table_abort(CUIF_INNER_BRP_BASE+9, 14)
inner_cuif_zi_init_table_abort(CUIF_INNER_BRP_BASE+26, 7)
inner_cuif_zi_init_table_abort(CUIF_INNER_BRP_BASE+34, 1)
inner_cuif_zi_init_table_abort(CUIF_INNER_BRP_BASE+39, 3)

inner_cuif_zi_init_table_wake_up(CUIF_INNER_BRP_BASE, 8)
inner_cuif_zi_init_table_wake_up(CUIF_INNER_BRP_BASE+9, 14)
inner_cuif_zi_init_table_wake_up(CUIF_INNER_BRP_BASE+26, 7)
inner_cuif_zi_init_table_wake_up(CUIF_INNER_BRP_BASE+34, 1)
inner_cuif_zi_init_table_wake_up(CUIF_INNER_BRP_BASE+39, 3)

brp_cuif_zi_init_table_boot_up(CUIF_INNER_BRP_BASE, 8)
brp_cuif_zi_init_table_boot_up(CUIF_INNER_BRP_BASE+9, 14)
brp_cuif_zi_init_table_boot_up(CUIF_INNER_BRP_BASE+26, 7)
brp_cuif_zi_init_table_boot_up(CUIF_INNER_BRP_BASE+34, 1)
brp_cuif_zi_init_table_boot_up(CUIF_INNER_BRP_BASE+39, 3)

brp_cuif_zi_init_table_abort(CUIF_INNER_BRP_BASE, 8)
brp_cuif_zi_init_table_abort(CUIF_INNER_BRP_BASE+9, 14)
brp_cuif_zi_init_table_abort(CUIF_INNER_BRP_BASE+26, 7)
brp_cuif_zi_init_table_abort(CUIF_INNER_BRP_BASE+34, 1)
brp_cuif_zi_init_table_abort(CUIF_INNER_BRP_BASE+39, 3)

brp_cuif_zi_init_table_wake_up(CUIF_INNER_BRP_BASE, 8)
brp_cuif_zi_init_table_wake_up(CUIF_INNER_BRP_BASE+9, 14)
brp_cuif_zi_init_table_wake_up(CUIF_INNER_BRP_BASE+26, 7)
brp_cuif_zi_init_table_wake_up(CUIF_INNER_BRP_BASE+34, 1)
brp_cuif_zi_init_table_wake_up(CUIF_INNER_BRP_BASE+39, 3)


fec_wbrp_cuif_zi_init_table_boot_up(CUIF_FEC_WBRP_BASE, 8)
fec_wbrp_cuif_zi_init_table_boot_up(CUIF_FEC_WBRP_BASE+9, 14)
fec_wbrp_cuif_zi_init_table_boot_up(CUIF_FEC_WBRP_BASE+26, 7)
fec_wbrp_cuif_zi_init_table_boot_up(CUIF_FEC_WBRP_BASE+34, 1)
fec_wbrp_cuif_zi_init_table_boot_up(CUIF_FEC_WBRP_BASE+39, 3)

fec_wbrp_cuif_zi_init_table_abort(CUIF_FEC_WBRP_BASE, 8)
fec_wbrp_cuif_zi_init_table_abort(CUIF_FEC_WBRP_BASE+9, 14)
fec_wbrp_cuif_zi_init_table_abort(CUIF_FEC_WBRP_BASE+26, 7)
fec_wbrp_cuif_zi_init_table_abort(CUIF_FEC_WBRP_BASE+34, 1)
fec_wbrp_cuif_zi_init_table_abort(CUIF_FEC_WBRP_BASE+39, 3)

fec_wbrp_cuif_zi_init_table_wake_up(CUIF_FEC_WBRP_BASE, 8)
fec_wbrp_cuif_zi_init_table_wake_up(CUIF_FEC_WBRP_BASE+9, 14)
fec_wbrp_cuif_zi_init_table_wake_up(CUIF_FEC_WBRP_BASE+26, 7)
fec_wbrp_cuif_zi_init_table_wake_up(CUIF_FEC_WBRP_BASE+34, 1)
fec_wbrp_cuif_zi_init_table_wake_up(CUIF_FEC_WBRP_BASE+39, 3)


speech_cuif_zi_init_table_boot_up(CUIF_SPEECH_BASE, 8)
speech_cuif_zi_init_table_boot_up(CUIF_SPEECH_BASE+9, 14)
speech_cuif_zi_init_table_boot_up(CUIF_SPEECH_BASE+26, 7)
speech_cuif_zi_init_table_boot_up(CUIF_SPEECH_BASE+34, 1)
speech_cuif_zi_init_table_boot_up(CUIF_SPEECH_BASE+39, 3)

speech_cuif_zi_init_table_abort(CUIF_SPEECH_BASE, 8)
speech_cuif_zi_init_table_abort(CUIF_SPEECH_BASE+9, 14)
speech_cuif_zi_init_table_abort(CUIF_SPEECH_BASE+26, 7)
speech_cuif_zi_init_table_abort(CUIF_SPEECH_BASE+34, 1)
speech_cuif_zi_init_table_abort(CUIF_SPEECH_BASE+39, 3)

speech_cuif_zi_init_table_wake_up(CUIF_SPEECH_BASE, 8)
speech_cuif_zi_init_table_wake_up(CUIF_SPEECH_BASE+9, 14)
speech_cuif_zi_init_table_wake_up(CUIF_SPEECH_BASE+26, 7)
speech_cuif_zi_init_table_wake_up(CUIF_SPEECH_BASE+34, 1)
speech_cuif_zi_init_table_wake_up(CUIF_SPEECH_BASE+39, 3)


#else
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif

#endif

