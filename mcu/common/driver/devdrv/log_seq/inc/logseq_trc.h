#ifndef __LOGSEQ_TRACE_H__
#define __LOGSEQ_TRACE_H__

#ifndef GEN_FOR_PC
#include "stack_config.h"
#endif

#include "dhl_trace.h"

#if !defined(L1_SIM)
#if !defined(GEN_FOR_PC)
#include "logseq_trc_gen.h"
#endif

BEGIN_TRACE_MAP(MOD_LS)    
	TRC_MSG(LS_ASSERT, "[LS] LS assert in func:%s, lineno:%d, ch%d, val1(%x), val2(%x), val3(%x)")
	TRC_MSG(LS_ADDR_NALIGNED,"[LS] func:%s, lineno:%d, ch%d, emi base addr %x is not aligned")
	TRC_MSG(LS_ADDR_OVERLAP,"[LS] func:%s, lineno:%d, ch%d, emi base addr overlap dsp(%x),buf_size(%x),mcu(%x),buf_size(%x)")
	TRC_MSG(LS_ADDR_DISCON, "[LS] func:%s, lineno:%d, ch%d, inserted addr discontinous thrs_addr(%x), thrs_len(%x), idx(%x), buf_size(%x)")
	TRC_MSG(LS_ABORT_FAILED,"[LS] func:%s, lineno:%d, ch%d, LS abort timeout, LS HW hang, LS_RUN_TIME_MANAGE(%x), LS_FLUSH_ABORT_STATUS(%x)")
	TRC_MSG(LS_REINIT_FAILED,"[LS] func:%s, lineno:%d, ch%d, LS reinit without LS abort timeout, is_lshw_enable(%x)")
	TRC_MSG(LS_CLK_STATUS,"[LS] func:%s, lineno:%d, ch%d, A015_0030(%x), A01C_0004(%x), A01C_000C(%x)")
	TRC_MSG(LS_WHOLESYS_FAILED,"[LS] func:%s, lineno:%d, ch%d, LS whole system flush timeout, EMI remain size(%x), EMI write ptr(%x), EMI read ptr(%x), L1_STATUS(%x), LS_ARB_SEL(%x)")
	TRC_MSG(LS_THRSBUF_EMPTY,"[LS] func:%s, lineno:%d, ch%d buffer is empty")
	TRC_MSG(LS_RELEASE_THRS,"[LS] func:%s, lineno:%d, ch%d release_size(%x), threshold_count(%x)")
	TRC_MSG(LS_RELEASE_EMI,"[LS] func:%s, lineno:%d, ch%d release_size(%x), max_release_size(%x), thrs_idx(%x), rls_ptr(%x), emi_read_idx(%x), emi_remain_sz(%x)")
	TRC_MSG(LS_RELEASE_EMI_WARN,"[WARN][LS] func:%s, lineno:%d, ch%d release_size(%x), max_release_size(%x), thrs_idx(%x), rls_ptr(%x), emi_read_idx(%x), emi_remain_sz(%x)")
	TRC_MSG(LS_RELEASE_EMI_ABORT_FAILED,"[ABORT TIMEOUT][LS] func:%s, lineno:%d, ch%d release API is called after abort timeout without reinit")
	TRC_MSG(LS_CLK_OFF,"[LS] func:%s, lineno:%d, ch%d is going to turn off LS, taskid(%x), time(%x)")
	TRC_MSG(LS_CLK_ON,"[LS] func:%s, lineno:%d, ch%d is going to turn on LS, taskid(%x), time(%x)")
	TRC_MSG(LS_RESUME,"[LS] func:%s, lineno:%d, ch%d LS leave sleep, LS_START rval(%x)")
	TRC_MSG(LS_EMI_FULL,"[LS] func:%s, lineno:%d, ch%d LS EMI full, EMI remain size(%x)")
	TRC_MSG(LS_DBG_REG, "[LS] func:%s, lineno:%d, ch%d dbg_input(%x), dbg_output(%x)")
	TRC_MSG(LS_API_CALLED_FAILED, "[LS] func:%s, lineno:%d, the API should not call before reinit, is_lshw_enable(%x)")
	TRC_MSG(LS_DBG1, "[LS] func:%s, lineno:%d, ch%d val1(%x)")
	TRC_MSG(LS_DBG2, "[LS] func:%s, lineno:%d, ch%d val1(%x), val2(%x)")
	TRC_MSG(LS_DBG3, "[LS] func:%s, lineno:%d, ch%d val1(%x), val2(%x), val3(%x)")
END_TRACE_MAP(MOD_LS)

#endif
#endif

