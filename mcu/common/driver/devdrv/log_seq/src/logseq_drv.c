/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2010
*
*  BY OPENING THIS FILE, BUYER HEREBY UNEQUIVOCALLY ACKNOWLEDGES AND AGREES
*  THAT THE SOFTWARE/FIRMWARE AND ITS DOCUMENTATIONS ("MEDIATEK SOFTWARE")
*  RECEIVED FROM MEDIATEK AND/OR ITS REPRESENTATIVES ARE PROVIDED TO BUYER ON
*  AN "AS-IS" BASIS ONLY. MEDIATEK EXPRESSLY DISCLAIMS ANY AND ALL WARRANTIES,
*  EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE IMPLIED WARRANTIES OF
*  MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE OR NONINFRINGEMENT.
*  NEITHER DOES MEDIATEK PROVIDE ANY WARRANTY WHATSOEVER WITH RESPECT TO THE
*  SOFTWARE OF ANY THIRD PARTY WHICH MAY BE USED BY, INCORPORATED IN, OR
*  SUPPLIED WITH THE MEDIATEK SOFTWARE, AND BUYER AGREES TO LOOK ONLY TO SUCH
*  THIRD PARTY FOR ANY WARRANTY CLAIM RELATING THERETO. MEDIATEK SHALL ALSO
*  NOT BE RESPONSIBLE FOR ANY MEDIATEK SOFTWARE RELEASES MADE TO BUYER'S
*  SPECIFICATION OR TO CONFORM TO A PARTICULAR STANDARD OR OPEN FORUM.
*
*  BUYER'S SOLE AND EXCLUSIVE REMEDY AND MEDIATEK'S ENTIRE AND CUMULATIVE
*  LIABILITY WITH RESPECT TO THE MEDIATEK SOFTWARE RELEASED HEREUNDER WILL BE,
*  AT MEDIATEK'S OPTION, TO REVISE OR REPLACE THE MEDIATEK SOFTWARE AT ISSUE,
*  OR REFUND ANY SOFTWARE LICENSE FEES OR SERVICE CHARGE PAID BY BUYER TO
*  MEDIATEK FOR SUCH MEDIATEK SOFTWARE AT ISSUE.
*
*  THE TRANSACTION CONTEMPLATED HEREUNDER SHALL BE CONSTRUED IN ACCORDANCE
*  WITH THE LAWS OF THE STATE OF CALIFORNIA, USA, EXCLUDING ITS CONFLICT OF
*  LAWS PRINCIPLES.  ANY DISPUTES, CONTROVERSIES OR CLAIMS ARISING THEREOF AND
*  RELATED THERETO SHALL BE SETTLED BY ARBITRATION IN SAN FRANCISCO, CA, UNDER
*  THE RULES OF THE INTERNATIONAL CHAMBER OF COMMERCE (ICC).
*
*****************************************************************************/

 /*****************************************************************************
 *
 * Filename:
 * ---------
 *      logseq_drv.c
 *
 * Project:
 * --------
 *      UMOLYYA
 *
 * Description:
 * ------------
 *      This module defines driver functions of log_seq driver
 *
 * Author:
 * -------
 * -------
 *
 *============================================================================
 *             HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 *
 * removed!
 * removed!
 *
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 *
 * removed!
 * removed!
 *
 * removed!
 * removed!
 *
 * removed!
 * removed!
 *
 * removed!
 * removed!
 *
 * removed!
 * removed!
 *
 * removed!
 * removed!
 *
 * removed!
 * removed!
 *
 * removed!
 * removed!
 *
 * removed!
 * removed!
 *
 * removed!
 * removed!
 *
 * removed!
 * removed!
 *
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 *****************************************************************************/

#include "cpu.h"
#include "intrCtrl.h"
#include "drv_comm.h"
#include "us_timer.h"
#include "logseq_drv.h"
#include "logseq_internal.h"
#include "logseq_trc.h"

// ================= define debug tool ===================
#ifdef DRV_DEBUG
#define	LS_PRINT(string,...)	dbg_print((char*)string, ##__VA_ARGS__)
#define	LS_PRINT_DBG(string,...)	dbg_print((char*)string, ##__VA_ARGS__)
#define	LS_PRINT_ASSERT(string,...)			\
do{												\
	dbg_print((char*)string, ##__VA_ARGS__);	\
	while(1);									\
}while(0)
	
#else
#define	LS_PRINT(string,...)	dhl_print(TRACE_INFO, DHL_USER_FLAG_NONE, MOD_DHL_READER, (char*)string, ##__VA_ARGS__)
#define	LS_PRINT_DBG(string,...)	{}
#define	LS_PRINT_ASSERT(string,...)			\
do{												\
	dhl_print(TRACE_INFO, DHL_USER_FLAG_NONE,	\
			  MOD_DHL_READER, (char*)string,	\
			  ##__VA_ARGS__);					\
	ASSERT(0);									\
}while(0)
#endif
// -------------- declare macro ------------------
#define FLUSH_TIMEOUT (1*1000*1000)
#define ABORT_TIMEOUT (20)
#define WHOLE_SYS_TIMEOUT (1*1000*1000)
#define SWWA_THRESHOLD (255)
// -------------declare local variable ------------------
typedef struct{
	kal_uint32 dbg_array[7];
	kal_uint32 ls_reg[33];

}ls_dbg_info;
typedef struct{
	LOG_SEQ_Backup_Info logseq_backup;
	kal_uint32 thrs_idx;
	kal_uint32 logseq_read_idx;
	kal_uint32 logseq_rls_idx;
	kal_atomic_uint32 logseq_drv_lock;
	kal_atomic_uint32 emi_mode_select;
	kal_uint32 g_lisr_count;
	kal_uint32 g_hisr_count;
	kal_uint32 ls_backup_start;
	kal_uint32 ls_backup_end;
	kal_uint32 ls_restore_start;
	kal_uint32 ls_restore_end;
	PLS_Internal_Info pls_info;
	kal_uint8 logseq_stream_sta;
	kal_uint8 logseq_pls_sta;	
	kal_hisr  logseq_hisr;
	kal_uint8 logseq_backup_sta:4;
	kal_uint8 resv:3;
}LOG_SEQ_Internal_Info;

static LOG_SEQ_Init_Info LSInitInfo[LS_CH_NUM];
static LOG_SEQ_Callback_Info LSCallback;
static LOG_SEQ_Internal_Info LSInternalInfo[LS_CH_NUM];
static LOG_SEQ_Internal_Info dbgInfo[LS_CH_NUM];
static PLS_DBG_Info dbgPLSInfo[LS_CH_NUM];
//	TODO: for ls unknown root cause in mcu channel (switch mode)
ls_dbg_info dbg_reg[LS_CH_NUM];
static kal_uint8 is_drv_init = 0;
static kal_uint8 is_lshw_enable = 0;
static kal_uint8 stop_ex_cnt = 0;
__attribute__ ((section(" MCURW_HWRO_DNC_NOINIT"))) kal_uint32 switch_swwa_cnter;
__attribute__ ((section(" MCURW_HWRO_DNC_NOINIT"))) kal_uint32 tag_swwa_cnter;
__attribute__ ((section(" MCURW_HWRO_DNC_NOINIT"))) kal_uint32 sleep_swwa_cnter;
//static kal_uint32 timeout_tick = CPU_MS2PMUTICK(3000); //3s
// -------------- declare local function ------------------
void logseq_lisr_mcu(kal_uint32);
void logseq_hisr_mcu(void);
void logseq_lisr_dsp(kal_uint32);
void logseq_hisr_dsp(void);

// ------------ declare static local function -------------
static void logseq_drv_backup(kal_uint8 ch_id);
static void logseq_drv_restore(kal_uint8 ch_id);
static kal_uint32 logseq_drv_whole_sys_flush_done_ex(kal_uint8 ch_id);
static kal_uint32 logseq_drv_redump_ex(kal_uint8 ch_id);
static kal_bool check_emi_base_addr(kal_uint8 ch_id);
// --------------------------------------------------------

// ======================================================
void logseq_drv_LS_save_initinfo(kal_uint8 ch_id, LOG_SEQ_Init_Info* pInitInfo)
{	
	LOG_SEQ_Internal_Info *interInfo = &LSInternalInfo[ch_id];
	LOG_SEQ_Init_Info *initInfo = &LSInitInfo[ch_id];
    // driver variable initial
    interInfo->g_lisr_count = 0;
    interInfo->g_hisr_count = 0;
    interInfo->pls_info.query_len = 0;
    interInfo->pls_info.rls_len = 0;
    interInfo->pls_info.rls_bypass_cnt = 0;
    interInfo->logseq_backup_sta = LS_RESTORE_SUCCESS;
    kal_atomic_set(&interInfo->logseq_drv_lock, LS_NO_LOCK);
    kal_atomic_set(&interInfo->emi_mode_select, pInitInfo->ls_emi_mode_select);
	stop_ex_cnt &= ~(1<<ch_id);
    //init driver read pointer and rls_ptr
    interInfo->logseq_read_idx = 0;
    interInfo->logseq_rls_idx = 0;
    interInfo->thrs_idx = 0;
    // save initial info
    kal_mem_cpy(&(LSInitInfo[ch_id]), pInitInfo, sizeof(LOG_SEQ_Init_Info));
	interInfo->logseq_backup.ls_emi_write_aligned_ptr = initInfo->ls_emi_base_addr;
	interInfo->logseq_backup.ls_remain_size = initInfo->ls_emi_size-128;
}

void logseq_drv_LS_setup(kal_uint8 ch_id, kal_uint8 reset_en)
{	
    // LS init config
    kal_uint32 reg_con0 = 0, reg_con1 = 0, reg_con2 = 0;
	LOG_SEQ_Init_Info *initInfo = & LSInitInfo[ch_id];
    // unlock LS register write protect
    DRV_WriteReg32(LS_REG(ch_id, DSP_LS_CON_LOCK_MARKER), LS_UNLOCK_MARKER);
    if(reset_en){
	    // reset LS module
	    DRV_SetReg32(LS_REG(ch_id, DSP_LS_CON0_BEFORE_START), 1<<2);
	    DRV_ClrReg32(LS_REG(ch_id, DSP_LS_CON0_BEFORE_START), 1<<2);
    }
    // enable LS clock
    DRV_ClrReg32(LS_REG(ch_id, DSP_LS_CON0_BEFORE_START), 1);
    // set EMI buffer size
    DRV_WriteReg32(LS_REG(ch_id, DSP_LS_EMI_SIZE), initInfo->ls_emi_size);
    //set EMI remain buffer size
    DRV_WriteReg32(LS_REG(ch_id, DSP_LS_EMI_REMAIN_SIZE), initInfo->ls_emi_size-128);
    //Avoid EMI base address is not 128 byte aligned
	if(check_emi_base_addr(ch_id) == KAL_FALSE)
	{
		dhl_trace(TRACE_INFO, DHL_USER_FLAG_NONE, LS_ASSERT,__FUNCTION__,__LINE__,ch_id,initInfo->ls_emi_base_addr,0,0);
		LS_PRINT_ASSERT("[LS] ch%d emi base address(%x) is not legal\r\n", ch_id, initInfo->ls_emi_base_addr); 
	}
    // set EMI base address
    DRV_WriteReg32(LS_REG(ch_id, DSP_LS_EMI_BASE_ADDR), initInfo->ls_emi_base_addr);
    // merge con0 register info & set control before start register0
    reg_con0 |= initInfo->ls_auto_test_init_val<<16;
    reg_con0 |= initInfo->ls_emi_bandwidth_ctrl<<8;
    reg_con0 |= initInfo->ls_output_to_emi<<7;
    reg_con0 |= initInfo->ls_emi_wrapping_mode_en<<6;
    reg_con0 |= initInfo->ls_log_mode_en<<3;
    DRV_WriteReg32(LS_REG(ch_id, DSP_LS_CON0_BEFORE_START), reg_con0);
    // set control before start register3 (over threshold level)
    // set before interrupt enable, otherwise spurious interrupt occurs.!!!
    DRV_WriteReg32(LS_REG(ch_id, DSP_LS_CON3_BEFORE_START), initInfo->ls_emi_over_ths_int_level);
    // merge con1 register info & set control before start register1
#if defined(__MD93__)
#elif defined(__MD95__)
	if(ch_id == LS_DSP_CH){
		reg_con1 |= 29<<20;
	}else{
		reg_con1 |= 10<<20;
	}
#else 
#error "No chip matched, please check it."
#endif
    reg_con1 |= initInfo->ls_internal_buf_unlock_ths<<16;
    reg_con1 |= 4<<12;
    reg_con1 |= 3<<8;
    reg_con1 |= 1<<4;
    reg_con1 |= initInfo->ls_emi_over_ths_en<<1;
    reg_con1 |= initInfo->ls_emi_pri_ultra_en;
    DRV_WriteReg32(LS_REG(ch_id, DSP_LS_CON1_BEFORE_START), reg_con1);
    // merge con2 register info & set control before start register2
    reg_con2 |= initInfo->ls_emi_pri_ultra_h_level<<8;
    reg_con2 |= initInfo->ls_emi_pri_ultra_l_level;
    DRV_WriteReg32(LS_REG(ch_id, DSP_LS_CON2_BEFORE_START), reg_con2);

}

void logseq_drv_LS_irq_init(kal_uint8 ch_id)
{
    if(ch_id == LS_MCU_CH){
        //register LISR & HISR
        IRQMask(IRQ_ULSP_LOG_MD_INT_CODE);
        IRQSensitivity(IRQ_ULSP_LOG_MD_INT_CODE, LEVEL_SENSITIVE);
        IRQ_Register_LISR(IRQ_ULSP_LOG_MD_INT_CODE, logseq_lisr_mcu, "LSMCUISR");
        LSInternalInfo[ch_id].logseq_hisr= LS_MCU_HISR;
        IRQUnmask(IRQ_ULSP_LOG_MD_INT_CODE);
    }
    else if(ch_id == LS_DSP_CH){
        //register LISR & HISR
        IRQMask(IRQ_ULSP_LOG_DSP_INT_CODE);
        IRQSensitivity(IRQ_ULSP_LOG_DSP_INT_CODE, LEVEL_SENSITIVE);
        IRQ_Register_LISR(IRQ_ULSP_LOG_DSP_INT_CODE, logseq_lisr_dsp, "LSDSPISR");
        LSInternalInfo[ch_id].logseq_hisr= LS_DSP_HISR;
        IRQUnmask(IRQ_ULSP_LOG_DSP_INT_CODE);
    }
}

void logseq_drv_init(kal_uint8 ch_id, LOG_SEQ_Init_Info* pInitInfo)
{	
    if(ch_id < LS_CH_NUM){
#ifndef DRV_DEBUG
        if((is_drv_init & (1<<ch_id))){
			dhl_trace(TRACE_INFO, DHL_USER_FLAG_NONE, LS_ASSERT,__FUNCTION__,__LINE__,ch_id,is_drv_init,0,0);
			kal_mem_cpy(&dbgInfo[ch_id],&LSInternalInfo[ch_id],sizeof(LOG_SEQ_Internal_Info));
            LS_PRINT_ASSERT("[LS] ch%d has been initialized", ch_id);   
        }
#endif // DRV_DEBUG
        //info backup & LS init
        logseq_drv_LS_save_initinfo(ch_id, pInitInfo);
        //config LS by InitInfo
        logseq_drv_LS_setup(ch_id,1);
        if(!(is_drv_init & (1<<ch_id)))
        {
            //init LS LISR & HISR
            logseq_drv_LS_irq_init(ch_id);
            is_drv_init |= (1<<ch_id);
        }
        // start LS
        dhl_trace(TRACE_INFO, DHL_USER_FLAG_NONE, LS_CLK_ON,__FUNCTION__,__LINE__,ch_id,kal_get_current_task(),ust_get_current_time());
        DRV_SetReg32(LS_REG(ch_id, DSP_LS_CON0_BEFORE_START), 1<<1);
       	is_lshw_enable |= (1<<ch_id);
    }
    else{
		dhl_trace(TRACE_INFO, DHL_USER_FLAG_NONE, LS_ASSERT,__FUNCTION__,__LINE__,ch_id,0,0,0);
        LS_PRINT_ASSERT("[LS] ChID:%d not defined", ch_id);
    }
}

void logseq_drv_buf_full_callback_init(LOG_SEQ_Callback_Info* pCallbackInfo)
{
    kal_mem_cpy(&LSCallback, pCallbackInfo, sizeof(LOG_SEQ_Callback_Info));
}


// calculate API
INLINE kal_uint32 logseq_drv_cal_idx_distance(kal_uint32 idx1, kal_uint32 idx2, kal_uint32 module){
	return (idx1+module-idx2)%(module);
}
INLINE kal_uint32 logseq_drv_cal_idx_increase(kal_uint32 idx, kal_uint32 incrs_size, kal_uint32 module){
	return (idx+incrs_size)%(module);
}

kal_uint32 logseq_drv_get_write_align_addr(kal_uint8 ch_id){
	LOG_SEQ_Internal_Info *interInfo = &LSInternalInfo[ch_id];
	kal_uint32 write_align_ptr = DRV_Reg32(LS_REG(ch_id, DSP_LS_EMI_WRITE_PACKET_ALIGNED_ADDR));
    if(write_align_ptr == 0){ write_align_ptr = interInfo->logseq_backup.ls_emi_write_aligned_ptr;}
    return write_align_ptr;
}

kal_uint32 logseq_drv_cal_emi_ptr_len_with_thrs_buf(kal_uint8 ch_id, LOG_SEQ_Thrs_Buf_Info* thrs_buf,kal_uint32 base_addr,kal_uint32 buf_size){

	LOG_SEQ_Internal_Info *interInfo = &LSInternalInfo[ch_id];
	kal_uint32 thrs_idx = interInfo->thrs_idx;
	kal_uint32 emi_read_idx = interInfo->logseq_read_idx;
	//kal_uint32 len = logseq_drv_cal_idx_distance(emi_read_idx, thrs_idx, buf_size);
	kal_uint32 rval = LS_NO_DATA;

	thrs_buf->addr = thrs_idx+base_addr;
	if(emi_read_idx >= thrs_idx){//wrap did not happen
		thrs_buf->len = logseq_drv_cal_idx_distance(emi_read_idx, thrs_idx, buf_size);
		rval = LS_QUERY_END;
	}else{
		thrs_buf->len = (buf_size)-thrs_idx;
		rval = LS_QUERY_CONTINUE;
	}
	/*
	if(thrs_idx+len <= (buf_size)){// addr add len did not wrap
		thrs_buf->len = len;
		rval = LS_QUERY_END;
	}else{// addr add len wrapped
		thrs_buf->len = (buf_size)-thrs_idx;
		rval = LS_QUERY_CONTINUE;
	}*/
	interInfo->thrs_idx = logseq_drv_cal_idx_increase(thrs_idx,thrs_buf->len,buf_size);
	//dbg_print("emi_read_ptr(%x), thrs_addr(%x), len(%x), rval(%d)\r\n",emi_read_idx,thrs_idx,thrs_buf->len,rval);
	return rval;
}

//debug API (add trace log)

static void logeq_drv_add_abort_timeout_info(kal_uint8 ch_id)
{
	kal_uint32 i, val;
	dhl_trace(TRACE_INFO, DHL_USER_FLAG_NONE, LS_DBG2,__FUNCTION__,__LINE__,ch_id,DRV_Reg32(LS_REG(ch_id,DSP_LS_RUN_TIME_MANAGE)),DRV_Reg32(LS_REG(ch_id,DSP_LS_FLUSH_ABORT_STATUS)));
	dhl_trace(TRACE_INFO, DHL_USER_FLAG_NONE, LS_CLK_STATUS,__FUNCTION__,__LINE__,ch_id,DRV_Reg32(0xA0150030),DRV_Reg32(0xA01C0004), DRV_Reg32(0xA01C000C));
	val = 0x11;
	for(i = 1; i<= 7; i++){
		DRV_WriteReg32(LS_REG(ch_id,DSP_LS_DBG_INFO),val*i);
		dhl_trace(TRACE_INFO, DHL_USER_FLAG_NONE,LS_DBG_REG,__FUNCTION__,__LINE__,ch_id,val*i,DRV_Reg32(LS_REG(ch_id,DSP_LS_DBG_INFO)));
	}
	dhl_trace(TRACE_INFO, DHL_USER_FLAG_NONE, LS_DBG3,__FUNCTION__,__LINE__,ch_id,DRV_Reg32(LS_REG(ch_id,DSP_LS_EMI_REMAIN_SIZE)),DRV_Reg32(LS_REG(ch_id,DSP_LS_L2_WRITE_ADDR)),DRV_Reg32(LS_REG(ch_id,DSP_LS_L2_READ_ADDR)));
}

static void logseq_drv_add_total_ptr_info(kal_uint8 ch_id)
{
	dhl_trace(TRACE_INFO, DHL_USER_FLAG_NONE, LS_DBG3,__FUNCTION__,__LINE__,ch_id,DRV_Reg32(LS_REG(ch_id,DSP_LS_EMI_REMAIN_SIZE)),DRV_Reg32(LS_REG(ch_id,DSP_LS_EMI_THRESHOLD_COUNT)),logseq_drv_get_write_align_addr(ch_id) - LSInitInfo[ch_id].ls_emi_base_addr);
	dhl_trace(TRACE_INFO, DHL_USER_FLAG_NONE, LS_DBG3,__FUNCTION__,__LINE__,ch_id,LSInternalInfo[ch_id].logseq_read_idx,LSInternalInfo[ch_id].thrs_idx,LSInternalInfo[ch_id].logseq_rls_idx);
	dhl_trace(TRACE_INFO, DHL_USER_FLAG_NONE, LS_DBG2,__FUNCTION__,__LINE__,ch_id,DRV_Reg32(LS_REG(ch_id,DSP_LS_EMI_REMAIN_SIZE))+DRV_Reg32(LS_REG(ch_id,DSP_LS_EMI_THRESHOLD_COUNT))+logseq_drv_cal_idx_distance(LSInternalInfo[ch_id].logseq_read_idx, LSInternalInfo[ch_id].thrs_idx, LSInitInfo[ch_id].ls_emi_size)+logseq_drv_cal_idx_distance(LSInternalInfo[ch_id].thrs_idx, LSInternalInfo[ch_id].logseq_rls_idx, LSInitInfo[ch_id].ls_emi_size),LSInitInfo[ch_id].ls_emi_size);
}

kal_uint32 logseq_drv_cal_emi_ptr_len_with_thrs_buf_wrapping(kal_uint8 ch_id, LOG_SEQ_Thrs_Buf_Info* thrs_buf,kal_uint32 base_addr,kal_uint32 buf_size){

	kal_uint32 write_align_ptr = logseq_drv_get_write_align_addr(ch_id);
	kal_uint32 emi_wrap_bit = ((DRV_Reg32(LS_REG(ch_id,DSP_LS_EMI_STATUS)))>>1)&0x1;
	kal_uint32 rval = LS_NO_DATA;
#if defined(__MD93__)
	LOG_SEQ_Internal_Info *interInfo = &LSInternalInfo[ch_id];
#endif
	if(write_align_ptr == 0){
		thrs_buf->len = 0;
		rval = LS_QUERY_INVALID;
	}
	if(0 == emi_wrap_bit){ 
		thrs_buf->addr = base_addr;
		thrs_buf->len = logseq_drv_cal_idx_distance(write_align_ptr, base_addr, buf_size);
		rval = LS_QUERY_END;
	}else{
#if defined(__MD93__)
		//Gen93 WHQA-if the wrap bit is set: ((WHQA00032633) & (WHQA00035111))
		//1. backup emi_write_ptr (WHQA00035111) 2.clear the wrap bit(force clear all 0) 3.calculate the length from base_addr+buf_size - write_align_add
		interInfo->pls_info.pls_backup_emi_write_addr = DRV_Reg32(LS_REG(ch_id, DSP_LS_EMI_WRITE_ADDR));
		DRV_WriteReg32_NPW(LS_REG(ch_id,DSP_LS_EMI_WRITE_ADDR),0x0);//should ack the emi_wrap_bit, clear all to 0=> (WHQA00032633) & (WHQA00035111)
		emi_wrap_bit = ((DRV_Reg32(LS_REG(ch_id,DSP_LS_EMI_STATUS)))>>1)&0x1;
		if(emi_wrap_bit == 1){
			//We have to clear emi_write_ptr twice, for HW clk dormain different in Gen93 
			//(100MClk(EMI_WRAP_BIT) and bus2x(EMI_WRITE_ADDR))
			DRV_WriteReg32_NPW(LS_REG(ch_id,DSP_LS_EMI_WRITE_ADDR),0x0);
			emi_wrap_bit = ((DRV_Reg32(LS_REG(ch_id,DSP_LS_EMI_STATUS)))>>1)&0x1;
			if(emi_wrap_bit == 1){
				LS_PRINT_ASSERT("%s: ch_id %d is not clear the emi wrapping bit val(%x)\r\n",__FUNCTION__,ch_id,emi_wrap_bit);
			}
		}
#elif defined(__MD95__)
		//Gen95
		DRV_ClrReg32(LS_REG(ch_id, DSP_LS_EMI_STATUS), 1<<1);
		emi_wrap_bit = ((DRV_Reg32(LS_REG(ch_id,DSP_LS_EMI_STATUS)))>>1)&0x1;
		if(emi_wrap_bit ==1){LS_PRINT_ASSERT("%s: ch_id %d is not clear the emi wrapping bit val(%x)\r\n",__FUNCTION__,ch_id,emi_wrap_bit);}
#else 
#error "No chip matched, please check it."
#endif
		thrs_buf->addr = write_align_ptr;
		thrs_buf->len = logseq_drv_cal_idx_distance(base_addr+buf_size, write_align_ptr, buf_size);
		rval = LS_QUERY_CONTINUE;
	}
	return rval;
}

// ================ normal API ======================

static kal_bool check_emi_base_addr(kal_uint8 ch_id)
{
	LOG_SEQ_Init_Info *initInfo = & LSInitInfo[ch_id];
	//emi base address should: 1. 128-byte aligned 2. DSP channel should not the same as MCU channel
	if((initInfo->ls_emi_base_addr%(0x80)) != 0)
	{
		dhl_trace(TRACE_INFO, DHL_USER_FLAG_NONE, LS_ADDR_NALIGNED,__FUNCTION__,__LINE__,ch_id,initInfo->ls_emi_base_addr);
		LS_PRINT_ASSERT("[LS] ch%d emi base address(%x) is not 128byte alignment\r\n", ch_id, initInfo->ls_emi_base_addr); 
		return KAL_FALSE;
	}
#ifndef DRV_DEBUG
	if((is_drv_init & (1<<LS_DSP_CH)) && (is_drv_init & (1<<LS_MCU_CH)))
	{
		if(LSInitInfo[LS_DSP_CH].ls_emi_base_addr < LSInitInfo[LS_MCU_CH].ls_emi_base_addr)// dsp base address < mcu base address
		{
			if((LSInitInfo[LS_DSP_CH].ls_emi_base_addr+LSInitInfo[LS_DSP_CH].ls_emi_size) >= LSInitInfo[LS_MCU_CH].ls_emi_base_addr)
			{
				dhl_trace(TRACE_INFO, DHL_USER_FLAG_NONE, LS_ADDR_OVERLAP,__FUNCTION__,__LINE__,ch_id,LSInitInfo[LS_DSP_CH].ls_emi_base_addr,LSInitInfo[LS_DSP_CH].ls_emi_size,LSInitInfo[LS_MCU_CH].ls_emi_base_addr,LSInitInfo[LS_MCU_CH].ls_emi_size);
				LS_PRINT_ASSERT("[LS] DSP and MCU channel emi base address can not be overlapped!\r\n");
				return KAL_FALSE;
			}

		}else{//mcu base address < dsp base address

			if((LSInitInfo[LS_MCU_CH].ls_emi_base_addr+LSInitInfo[LS_MCU_CH].ls_emi_size) >= LSInitInfo[LS_DSP_CH].ls_emi_base_addr)
			{
				dhl_trace(TRACE_INFO, DHL_USER_FLAG_NONE, LS_ADDR_OVERLAP,__FUNCTION__,__LINE__,ch_id,LSInitInfo[LS_DSP_CH].ls_emi_base_addr,LSInitInfo[LS_DSP_CH].ls_emi_size,LSInitInfo[LS_MCU_CH].ls_emi_base_addr,LSInitInfo[LS_MCU_CH].ls_emi_size);
				LS_PRINT_ASSERT("[LS] DSP and MCU channel emi base address can not be overlapped!\r\n");
				return KAL_FALSE;
			}
		}
	}
#endif
	return KAL_TRUE;
}

void logseq_drv_LS_setup_for_pls(kal_uint8 ch_id)
{	
    // LS init config
    kal_uint32 reg_con0 = 0, reg_con1 = 0, reg_con2 = 0;
	LOG_SEQ_Init_Info *initInfo = & LSInitInfo[ch_id];
    LOG_SEQ_Internal_Info *interInfo = &LSInternalInfo[ch_id];
    kal_uint32 write_aligned_ptr, base_addr, write_ptr;
    kal_uint32 thrs_cnt = 0, buf_size = 0;
    write_aligned_ptr = logseq_drv_get_write_align_addr(ch_id);
    write_ptr = DRV_Reg32(LS_REG(ch_id, DSP_LS_EMI_WRITE_ADDR));
    base_addr = initInfo->ls_emi_base_addr;
    buf_size = initInfo->ls_emi_size;
    // unlock LS register write protect
    DRV_WriteReg32(LS_REG(ch_id, DSP_LS_CON_LOCK_MARKER), LS_UNLOCK_MARKER);
	//	TODO: we can not write the LS reset while PB and L1 did not stop
    // reset LS module
    //DRV_SetReg32(LS_REG(ch_id, DSP_LS_CON0_BEFORE_START), 1<<2);
    //DRV_ClrReg32(LS_REG(ch_id, DSP_LS_CON0_BEFORE_START), 1<<2);
    // enable LS clock
    DRV_ClrReg32(LS_REG(ch_id, DSP_LS_CON0_BEFORE_START), 1);
	// set up emi wrapping mode enable first before setting the emi buffer size
    // merge con0 register info & set control before start register0
    reg_con0 |= initInfo->ls_auto_test_init_val<<16;
    reg_con0 |= initInfo->ls_emi_bandwidth_ctrl<<8;
    reg_con0 |= initInfo->ls_output_to_emi<<7;
    reg_con0 |= initInfo->ls_emi_wrapping_mode_en<<6;
    reg_con0 |= initInfo->ls_log_mode_en<<3;
    //	TODO: we have to set the LS_START to 1, or the bit[1] will be clear to 0.
    reg_con0 |= 1<<1;//LS_START configuration(keep this!!!) if remove this, the bit[1] will be clear to 0 and LS will not start again.
    DRV_WriteReg32(LS_REG(ch_id, DSP_LS_CON0_BEFORE_START), reg_con0);
    /*
    //Avoid EMI base address is not 128 byte aligned
	if(check_emi_base_addr(ch_id) == KAL_FALSE)
	{
		dhl_trace(TRACE_INFO, DHL_USER_FLAG_NONE, LS_ASSERT,__FUNCTION__,__LINE__,ch_id,initInfo->ls_emi_base_addr,0,0);
		LS_PRINT_ASSERT("[LS] ch%d emi base address(%x) is not legal\r\n", ch_id, initInfo->ls_emi_base_addr); 
	}
    //set EMI base address
    DRV_WriteReg32(LS_REG(ch_id, DSP_LS_EMI_BASE_ADDR), initInfo->ls_emi_base_addr);
    // set control before start register3 (over threshold level)
    // set before interrupt enable, otherwise spurious interrupt occurs.!!!*/
    if(write_ptr >= base_addr)
    {
    	//NO "128 byte data" go to EMI, such that write aligned ptr is 0. => write_aligned_ptr = EMI base address. 
    	if(write_aligned_ptr == 0){write_aligned_ptr = base_addr;}
    	if(write_aligned_ptr == base_addr){
			write_ptr = base_addr;
			DRV_WriteReg32_NPW(LS_REG(ch_id, DSP_LS_EMI_WRITE_ADDR), write_ptr);
    	}
    	if( write_ptr > write_aligned_ptr){
			thrs_cnt = write_ptr - write_aligned_ptr;
    	}else if(write_ptr < write_aligned_ptr){ // write ptr < write aligned_ptr
			thrs_cnt = buf_size - (write_aligned_ptr - write_ptr);
    	}else{ //write_ptr == write_aligned_ptr
			thrs_cnt = 0;
    	}
		interInfo->logseq_read_idx = write_aligned_ptr - base_addr;
		interInfo->thrs_idx = write_aligned_ptr - base_addr;
		interInfo->logseq_rls_idx = write_aligned_ptr - base_addr;
    }else{
		LS_PRINT_ASSERT("[LS] ch_id %d write ptr(%x) and wirte_aligned_ptr(%x) is smaller than emi base address\r\n",ch_id, write_ptr, write_aligned_ptr);
    }
    // set EMI buffer size
    DRV_WriteReg32(LS_REG(ch_id, DSP_LS_EMI_SIZE), buf_size);
    //set EMI remain buffer size
    if(buf_size-128-thrs_cnt < 0){LS_PRINT_ASSERT("[LS] The emi remain size can not be < 0\r\n");}
    DRV_WriteReg32(LS_REG(ch_id, DSP_LS_EMI_REMAIN_SIZE), buf_size-128-thrs_cnt);
    //set EMI threshold count
    DRV_WriteReg32(LS_REG(ch_id, DSP_LS_EMI_THRESHOLD_COUNT), thrs_cnt);
    DRV_WriteReg32(LS_REG(ch_id, DSP_LS_CON3_BEFORE_START), initInfo->ls_emi_over_ths_int_level);
    // merge con1 register info & set control before start register1
#if defined(__MD93__)
#elif defined(__MD95__)
	if(ch_id == LS_DSP_CH){
		reg_con1 |= 29<<20;
	}else{
		reg_con1 |= 10<<20;
	}
#else 
#error "No chip matched, please check it."
#endif
    reg_con1 |= initInfo->ls_internal_buf_unlock_ths<<16;
    reg_con1 |= 4<<12;
    reg_con1 |= 3<<8;
    reg_con1 |= 1<<4;
    reg_con1 |= initInfo->ls_emi_over_ths_en<<1;
    reg_con1 |= initInfo->ls_emi_pri_ultra_en;
    DRV_WriteReg32(LS_REG(ch_id, DSP_LS_CON1_BEFORE_START), reg_con1);
    // merge con2 register info & set control before start register2
    reg_con2 |= initInfo->ls_emi_pri_ultra_h_level<<8;
    reg_con2 |= initInfo->ls_emi_pri_ultra_l_level;
    DRV_WriteReg32(LS_REG(ch_id, DSP_LS_CON2_BEFORE_START), reg_con2);
}

void logseq_drv_change_setup(kal_uint8 ch_id,LOG_SEQ_Init_Info *lsinfo){

	logseq_drv_LS_save_initinfo(ch_id, lsinfo);//sw variables	
	logseq_drv_LS_setup_for_pls(ch_id);//set sw variable and hw registers
	if(!(is_drv_init & (1<<ch_id)))
	{
	    //init LS LISR & HISR
	    logseq_drv_LS_irq_init(ch_id);
	    is_drv_init |= (1<<ch_id);
	}
	return;

}

void logseq_drv_abort_timeout_recover(kal_uint8 ch_id)
{
	LOG_SEQ_Init_Info lsinfo = LS_Init_Info_initial;
	LOG_SEQ_Init_Info *initInfo = &LSInitInfo[ch_id];
	// reset LS module
    DRV_SetReg32(LS_REG(ch_id, DSP_LS_CON0_BEFORE_START), 1<<2);
    DRV_ClrReg32(LS_REG(ch_id, DSP_LS_CON0_BEFORE_START), 1<<2);
	// reset internal info
	kal_mem_cpy(&lsinfo, initInfo, sizeof(LOG_SEQ_Init_Info));
	logseq_drv_LS_save_initinfo(ch_id, &lsinfo);	
	is_lshw_enable &= ~(1<<ch_id);
	dhl_trace(TRACE_INFO, DHL_USER_FLAG_NONE, LS_ABORT_FAILED,__FUNCTION__,__LINE__,ch_id,DRV_Reg32(LS_REG(ch_id,DSP_LS_RUN_TIME_MANAGE)),DRV_Reg32(LS_REG(ch_id,DSP_LS_FLUSH_ABORT_STATUS)));
	return;
}

kal_uint32 logseq_drv_set_mode(kal_uint8 ch_id, kal_atomic_uint32 mode){

	LOG_SEQ_Internal_Info *interInfo = &LSInternalInfo[ch_id];
	LOG_SEQ_Init_Info *initInfo = &LSInitInfo[ch_id];
	LOG_SEQ_Init_Info lsinfo = LS_Init_Info_initial;
	kal_uint32 rval = LS_NO_ERROR;
	kal_uint32 temp = 0, mcu_cntr = 0, dsp_cntr = 0;
	if((is_drv_init & (1<<ch_id)) && (is_lshw_enable & (1<<ch_id)))
	{
		//dbg_print("enter %s mode %d setting %d\r\n",__FUNCTION__,mode,interInfo->emi_mode_select);
		//if the setting mode is the same as the original mode, LS return directly
		if(mode == interInfo->emi_mode_select){
			return rval;
		}
		logseq_drv_api_get_lock(ch_id,LS_MODE_LOCK);
		logseq_drv_mask_irq(ch_id);
		//change the state to set mode status.
		if(mode == LS_PLS_EMI)
		{//stream -> pls
			interInfo->logseq_pls_sta = LS_SET_MODE_STA;
		}
		else
		{//pls->stream	
			if(interInfo->pls_info.query_len != interInfo->pls_info.rls_len){
				LS_PRINT_ASSERT("[LS] query length != release length");
			}
			interInfo->logseq_stream_sta = LS_SET_MODE_STA;
		}
		//disable L2 buffer input
		DRV_SetReg32(LS_REG(ch_id, DSP_LS_RUN_TIME_MANAGE), 1 << 6);
		//stop LS first before changing the setting of EMI mode
		rval = logseq_drv_flush(ch_id);
		if(rval == LS_FLUSH_TIMEOUT) //change
		{
			rval = logseq_drv_abort(ch_id);
			if(rval == LS_ABORT_TIMEOUT) //change
			{
				if(!(DRV_Reg32(LS_REG(ch_id, DSP_LS_FLUSH_ABORT_STATUS))&(1<<2))) //change
				{	
					if((switch_swwa_cnter&0xFFFF0000) == 0x3A1B0000){
						if(ch_id == LS_MCU_CH){
							mcu_cntr = ((switch_swwa_cnter&0xFF00)>>8);
							if(mcu_cntr < SWWA_THRESHOLD){ //change
								mcu_cntr+=1;
								switch_swwa_cnter &= 0xFFFF00FF;
								switch_swwa_cnter |= ((mcu_cntr<<8)&0xFF00);
							}else{//change magic number and assert
								switch_swwa_cnter &= 0xFFFF;
								switch_swwa_cnter |= 0xB1A30000;
							}
						}else if(ch_id == LS_DSP_CH){
							dsp_cntr = (switch_swwa_cnter&0xFF);
							if(dsp_cntr < SWWA_THRESHOLD){ //change
								dsp_cntr+=1;
								switch_swwa_cnter &=0xFFFFFF00;
								switch_swwa_cnter |= (dsp_cntr&0xFF);	
							}else{
								switch_swwa_cnter &= 0xFFFF;
								switch_swwa_cnter |= 0xB1A30000;								
							}
						}
						else{
							LS_PRINT_ASSERT("[LS] ch_id %d the channel is incorrect!\r\n",ch_id);
						}
					}else{
						switch_swwa_cnter = 0x3A1B0000;
					}
					if(LSCallback.action_for_ls_abort_timeout){
						LSCallback.action_for_ls_abort_timeout(ch_id);
					}
					//	TODO:LS SWWA
					dhl_trace(TRACE_INFO, DHL_USER_FLAG_NONE, LS_DBG1,__FUNCTION__,__LINE__,ch_id,is_lshw_enable);
					logseq_drv_api_unlock(ch_id);
					logseq_drv_unmask_irq(ch_id);
					logseq_drv_abort_timeout_recover(ch_id);
					return rval;
					
				}
			}
		}
	    // enable LS clock
	    DRV_ClrReg32(LS_REG(ch_id, DSP_LS_CON0_BEFORE_START), 1);
		//copy the original setting to the  lsinfo structure.
		//change the mode ,set the emi to wrapping mode 
		//reset the LS driver setting
		kal_mem_cpy(&lsinfo, initInfo, sizeof(LOG_SEQ_Init_Info));
		lsinfo.ls_emi_mode_select = mode;
		lsinfo.ls_emi_wrapping_mode_en = (mode == LS_PLS_EMI)?1:0;
		logseq_drv_change_setup(ch_id,&lsinfo);
		logseq_drv_api_unlock(ch_id);
		logseq_drv_unmask_irq(ch_id);
		//last step disable input and resume the LS
		DRV_ClrReg32(LS_REG(ch_id, DSP_LS_RUN_TIME_MANAGE), 1 << 6);
		dhl_trace(TRACE_INFO, DHL_USER_FLAG_NONE, LS_CLK_ON,__FUNCTION__,__LINE__,ch_id,kal_get_current_task(),ust_get_current_time());
		temp = DRV_Reg32(LS_REG(ch_id,DSP_LS_FLUSH_ABORT_STATUS));
		if(temp&(1<<2)){
			logseq_drv_resume_after_abort(ch_id);
		}else if(temp&(1<<3)){
			logseq_drv_resume_after_flush(ch_id);
		}else{
			logeq_drv_add_abort_timeout_info(ch_id);
			LS_PRINT_ASSERT("[LS] ch_id %d, %s abort timeout!\r\n",ch_id,__FUNCTION__);
		}
	}else{

		if(!(is_lshw_enable &(1<<ch_id))){ rval = LS_ABORT_TIMEOUT;}
	}
	return rval;
}

static kal_uint32 logseq_drv_pls_flush(kal_uint8 ch_id){

	LOG_SEQ_Internal_Info *interInfo = &LSInternalInfo[ch_id];
	kal_uint32 rval = LS_NO_ERROR;
	kal_uint32 mcu_cntr = 0, dsp_cntr = 0;
	if(is_lshw_enable & (1<<ch_id)){
		if(interInfo->emi_mode_select == LS_PLS_EMI){
			if((interInfo->logseq_pls_sta != LS_TAGEND_STA) && (interInfo->logseq_pls_sta != LS_SET_MODE_STA)){
				LS_PRINT_ASSERT("[LS] the PLS state in tag start is not correct!\r\n");
			}
			logseq_drv_api_get_lock(ch_id,LS_MODE_LOCK);
			logseq_drv_mask_irq(ch_id);
			interInfo->logseq_pls_sta = LS_TAGSTART_STA;
			DRV_SetReg32(LS_REG(ch_id, DSP_LS_RUN_TIME_MANAGE), 1 << 6);
			rval = logseq_drv_flush(ch_id);
			if(rval == LS_FLUSH_TIMEOUT)
			{
		    	rval = logseq_drv_abort(ch_id);
				if(rval == LS_ABORT_TIMEOUT)
				{
					if(!(DRV_Reg32(LS_REG(ch_id, DSP_LS_FLUSH_ABORT_STATUS))&(1<<2)))
					{
						if((tag_swwa_cnter&0xFFFF0000) == 0x3A1B0000){
							if(ch_id == LS_MCU_CH){
								mcu_cntr = ((tag_swwa_cnter&0xFF00)>>8);
								if(mcu_cntr < SWWA_THRESHOLD){ //change
									mcu_cntr+=1;
									tag_swwa_cnter &= 0xFFFF00FF;
									tag_swwa_cnter |= ((mcu_cntr<<8)&0xFF00);
								}else{//change magic number and assert
									tag_swwa_cnter &= 0xFFFF;
									tag_swwa_cnter |= 0xB1A30000;
								}
							}else if(ch_id == LS_DSP_CH){
								dsp_cntr = (tag_swwa_cnter&0xFF);
								if(dsp_cntr < SWWA_THRESHOLD){ //change
									dsp_cntr+=1;
									tag_swwa_cnter &=0xFFFFFF00;
									tag_swwa_cnter |= (dsp_cntr&0xFF);
								}else{//change magic number and assert
									tag_swwa_cnter &= 0xFFFF;
									tag_swwa_cnter |= 0xB1A30000;
								}
							}
							else{
								LS_PRINT_ASSERT("[LS] ch_id %d the channel is incorrect!\r\n",ch_id);
							}
						}else{
							tag_swwa_cnter = 0x3A1B0000;
						}
						if(LSCallback.action_for_ls_abort_timeout){
							LSCallback.action_for_ls_abort_timeout(ch_id);
						}
						logseq_drv_abort_timeout_recover(ch_id);
						if(ch_id == LS_DSP_CH){ rval = LS_PLS_FLUSH_FAILED_DSP;}
						else if(ch_id == LS_MCU_CH){ rval = LS_PLS_FLUSH_FAILED_MCU;}
						else{
							LS_PRINT_ASSERT("[LS] ch_id %d the channel id is incorrect!\r\n",ch_id);
						}
					}
		    	}
		    }
			logseq_drv_api_unlock(ch_id);
			logseq_drv_unmask_irq(ch_id);
		}else{
			LS_PRINT_ASSERT("[LS] the tagStart is not PLS start!\r\n");
		}
	}else{
		if(ch_id == LS_DSP_CH ){ rval = LS_PLS_FLUSH_FAILED_DSP;
		}else if(ch_id == LS_MCU_CH) { rval = LS_PLS_FLUSH_FAILED_MCU;
		}else{
			LS_PRINT_ASSERT("[LS] ch_id %d the channel id is incorrect!\r\n",ch_id);
		}
		dhl_trace(TRACE_INFO, DHL_USER_FLAG_NONE, LS_API_CALLED_FAILED,__FUNCTION__,__LINE__, is_lshw_enable);
	}
	return rval;
}

kal_uint32 logseq_drv_tagStart(void){

		kal_uint32 rval = LS_NO_ERROR;
//	if((is_lshw_enable & (1<<LS_DSP_CH)) && (is_lshw_enable&(1<<LS_MCU_CH))){
		rval |= logseq_drv_pls_flush(LS_DSP_CH);
		rval |= logseq_drv_pls_flush(LS_MCU_CH);
//	}else{
#if defined(__MTK_INTERNAL__)
//		LS_PRINT_ASSERT("[LS] func: %s, lineno: %d, the API should not call before LS reinit",__FUNCTION__, __LINE__);
#else
//		dhl_trace(TRACE_INFO, DHL_USER_FLAG_NONE, LS_API_CALLED_FAILED,__FUNCTION__,__LINE__, is_lshw_enable);
#endif
	//}
	return rval;
}

static void logseq_drv_pls_release(kal_uint8 ch_id)
{
	LOG_SEQ_Internal_Info *interInfo = &LSInternalInfo[ch_id];
	LOG_SEQ_Init_Info*initInfo = &LSInitInfo[ch_id];
	LOG_SEQ_Init_Info lsinfo;
	kal_atomic_uint32 mode;
#if defined(__MD93__)
	kal_uint32 write_ptr;
#endif
	if(is_lshw_enable &(1<<ch_id)){
		if(interInfo->pls_info.query_len == interInfo->pls_info.rls_len){
			interInfo->logseq_pls_sta = LS_TAGEND_STA;
			logseq_drv_api_get_lock(ch_id,LS_MODE_LOCK);
			logseq_drv_mask_irq(ch_id); 	
			kal_mem_cpy(&lsinfo, initInfo, sizeof(LOG_SEQ_Init_Info));
			mode = interInfo->emi_mode_select;
			lsinfo.ls_emi_mode_select = mode;
			lsinfo.ls_emi_wrapping_mode_en = (LS_PLS_EMI == mode)?1:0;
#if defined(__MD93__)
			//Gen93 SW workaround at WHQA_00035111==start===
			write_ptr = DRV_Reg32(LS_REG(ch_id, DSP_LS_EMI_WRITE_ADDR));
			if(write_ptr == 0 && (write_ptr < initInfo->ls_emi_base_addr)){
				if(interInfo->pls_info.pls_backup_emi_write_addr < initInfo->ls_emi_base_addr){
					//if the HW reg emi_write_ptr == 0 
					//interInfo->pls_info.pls_backup_emi_write_addr should be always be >= emi_base_address
					LS_PRINT_ASSERT("[LS] ch_id %d the pls mode backup write pointer < base address when write address = 0");
				}else{
					DRV_WriteReg32(LS_REG(ch_id, DSP_LS_EMI_WRITE_ADDR), interInfo->pls_info.pls_backup_emi_write_addr);
				}
			}
#endif
			//Gen93 SW workaround at WHQA_00035111===end===
			logseq_drv_change_setup(ch_id,&lsinfo); 
			// enable LS input port
			DRV_ClrReg32(LS_REG(ch_id, DSP_LS_RUN_TIME_MANAGE), 1 << 6);
			//resume after abort/resume after flush
			if(DRV_Reg32(LS_REG(ch_id,DSP_LS_FLUSH_ABORT_STATUS))&0x1){
				logseq_drv_resume_after_abort(ch_id);
			}else if(DRV_Reg32(LS_REG(ch_id,DSP_LS_FLUSH_ABORT_STATUS))&0x2){
				logseq_drv_resume_after_flush(ch_id);
			}else{
				kal_mem_cpy(&dbgInfo[ch_id],&LSInternalInfo[ch_id],sizeof(LOG_SEQ_Internal_Info));
				LS_PRINT_ASSERT("[LS] func:%s, ch_id%d the LS has not flushed nor aborted done, rval(%x)\r\n",__FUNCTION__,ch_id,DRV_Reg32(LS_REG(ch_id,DSP_LS_FLUSH_ABORT_STATUS)));
			}
			logseq_drv_api_unlock(ch_id);
			logseq_drv_unmask_irq(ch_id);	
		}
		else{
			LS_PRINT_ASSERT("[LS] func:%s, ch_id%d the query length is not equal to release length",__FUNCTION__, ch_id);
		}
	}else{
		dhl_trace(TRACE_INFO, DHL_USER_FLAG_NONE, LS_API_CALLED_FAILED,__FUNCTION__,__LINE__, is_lshw_enable);
	}
	return;
}

void logseq_drv_tagEnd(void){
	//if((is_lshw_enable & (1<<LS_DSP_CH)) && (is_lshw_enable &(1<<LS_MCU_CH))){
		logseq_drv_pls_release(LS_DSP_CH);
		logseq_drv_pls_release(LS_MCU_CH);
	//}else{
#if defined(__MTK_INTERNAL__)
	//	LS_PRINT_ASSERT("[LS] func: %s, lineno: %d, the API should not call before LS reinit",__FUNCTION__, __LINE__);
#else
	//	dhl_trace(TRACE_INFO, DHL_USER_FLAG_NONE, LS_API_CALLED_FAILED,__FUNCTION__,__LINE__, is_lshw_enable);
#endif
	//}
	return;
}

void logseq_drv_release_thrs_cnt(kal_uint8 ch_id, kal_uint32 release_sz){

	kal_uint32 thrs_count = 0;
	LOG_SEQ_Init_Info *initInfo = & LSInitInfo[ch_id];
    if(0 == initInfo->ls_emi_wrapping_mode_en){
        thrs_count = DRV_Reg32(LS_REG(ch_id, DSP_LS_EMI_THRESHOLD_COUNT));
        if(release_sz > thrs_count){
        	dhl_trace(TRACE_INFO, DHL_USER_FLAG_NONE, LS_RELEASE_THRS,__FUNCTION__,__LINE__,ch_id,release_sz,thrs_count);
            //LS_PRINT_DBG("[LS] ChID:%d rls_size(%x) > threshold_count(%x)!\r\n", ch_id, release_sz, thrs_count);
        }
        // release threshold count to de-assert interrupt
        DRV_WriteReg32(LS_REG(ch_id, DSP_LS_EMI_THRESHOLD_RELEASE), release_sz);
    }	
}
void logseq_drv_get_addr_len(kal_uint8 ch_id, LOG_SEQ_Thrs_Buf_Info *thrs_buf)
{
    LOG_SEQ_Init_Info *initInfo = & LSInitInfo[ch_id];
    LOG_SEQ_Internal_Info *interInfo = &LSInternalInfo[ch_id];
    kal_uint32 write_align_ptr;
    kal_uint32 base_addr = initInfo->ls_emi_base_addr;
    kal_uint32 buf_size = initInfo->ls_emi_size;
    kal_uint32 idx = 0,len = 0;
    kal_uint32 thrs_count; //= DRV_Reg32(LS_REG(ch_id, DSP_LS_EMI_THRESHOLD_COUNT));
    // if get no data, then return
    //if LS has no burst to EMI(thrs_cnt < 128) -> write aligned address will not move.
    //if LS has 1 burst to EMI -> write aligned address will move after receiving EMI ACK.(might move/not move) 
	/*
    if(thrs_count < 128){
    	thrs_buf->len = 0;
        return;
    }*/
    write_align_ptr = logseq_drv_get_write_align_addr(ch_id);
    if(write_align_ptr == 0){
		thrs_buf->len = 0; 
		return;
    }
    idx = interInfo->logseq_read_idx;
    len = logseq_drv_cal_idx_distance(write_align_ptr-base_addr,interInfo->logseq_read_idx,buf_size);    
   	if(len == 0){
		//len = buf_size;
   		thrs_count = DRV_Reg32(LS_REG(ch_id, DSP_LS_EMI_THRESHOLD_COUNT));
   		if(thrs_count == buf_size){len = buf_size;}//when write_align_ptr == emi_read_ptr wrapped happened! length should be buffer size here
		else{thrs_buf->len = 0; return;}// get no data, then return
   	}
	logseq_drv_release_thrs_cnt(ch_id,len);
    interInfo->logseq_read_idx = write_align_ptr - base_addr;
    thrs_buf->addr = idx;
    thrs_buf->len = len;
    return;

}
kal_uint32 logseq_drv_insert_thrs_buf(kal_uint8 ch_id)
{	
	kal_uint32 rval = LS_NO_ERROR;
	LOG_SEQ_Init_Info *initInfo = &LSInitInfo[ch_id];
	LOG_SEQ_Internal_Info *interInfo = &LSInternalInfo[ch_id];
	kal_uint32 write_align_ptr;
	kal_uint32 base_addr = initInfo->ls_emi_base_addr;
	kal_uint32 buf_size = initInfo->ls_emi_size;
	kal_uint32 emi_read_ptr = interInfo->logseq_read_idx;
	kal_uint32 len;
	//get the write aligned address
	write_align_ptr = logseq_drv_get_write_align_addr(ch_id);
	//calculate the insert length
    len = logseq_drv_cal_idx_distance(write_align_ptr-base_addr,emi_read_ptr,buf_size);
	if(write_align_ptr == 0){
		rval = LS_NO_DATA;
	}else{
		if(logseq_drv_cal_idx_increase(emi_read_ptr, len, buf_size) != (write_align_ptr-base_addr)){
			rval = LS_INSERT_FAIL;
	    }else{
		    if(len == 0){
		    	rval = LS_NO_DATA;
		    }
		    //release threshold count
			logseq_drv_release_thrs_cnt(ch_id,len);
			//update emi read idx
		    interInfo->logseq_read_idx = write_align_ptr - base_addr; 
	    }
	}
    return rval;
}
kal_bool logseq_drv_thrs_buf_empty(kal_uint8 ch_id)
{
    LOG_SEQ_Init_Info *initInfo = &LSInitInfo[ch_id];
	LOG_SEQ_Internal_Info *interInfo = &LSInternalInfo[ch_id];
	kal_uint32 thrs_len = logseq_drv_cal_idx_distance(interInfo->logseq_read_idx, interInfo->thrs_idx, initInfo->ls_emi_size);
	if(thrs_len == 0) return KAL_TRUE;
	else return KAL_FALSE;
}

kal_uint32 logseq_drv_handle_emi_buf(kal_uint8 ch_id)
{	
    kal_uint32 rval = LS_NO_ERROR;
    //LOG_SEQ_Thrs_Buf_Info thrs_buf;
   	//logseq_drv_get_addr_len(ch_id, &thrs_buf);
    rval = logseq_drv_insert_thrs_buf(ch_id);
 	if(rval == LS_NO_DATA){
    	dhl_trace(TRACE_INFO, DHL_USER_FLAG_NONE, LS_THRSBUF_EMPTY,__FUNCTION__,__LINE__,ch_id);
		//LS_PRINT_DBG("[LS]: Ch_id: %d buffer is empty!\r\n",ch_id);
    }
    return rval;
}

static kal_uint32 logseq_drv_get_thrs_buf(kal_uint8 ch_id,LOG_SEQ_Thrs_Buf_Info* thrs_buf)
{
	LOG_SEQ_Init_Info*initInfo = &LSInitInfo[ch_id];
	LOG_SEQ_Internal_Info*interInfo = &LSInternalInfo[ch_id];
	kal_uint32 base_addr = initInfo->ls_emi_base_addr;
	kal_uint32 buf_size = initInfo->ls_emi_size;
	kal_uint32 rval = LS_NO_ERROR;
	if(LS_STREAM_EMI == interInfo->emi_mode_select ||(stop_ex_cnt&(1<<ch_id))){
		if(logseq_drv_thrs_buf_empty(ch_id)){
			rval = LS_QUERY_INVALID;
			dhl_trace(TRACE_INFO, DHL_USER_FLAG_NONE, LS_THRSBUF_EMPTY,__FUNCTION__,__LINE__,ch_id);
		}else{
			//emi is steaming mode
			interInfo->logseq_stream_sta = LS_QUERY_STA;
			rval= logseq_drv_cal_emi_ptr_len_with_thrs_buf(ch_id,thrs_buf, base_addr, buf_size);//calculate the thres_idx to read_idx
			dhl_trace(TRACE_INFO, DHL_USER_FLAG_NONE, LS_DBG3,__FUNCTION__,__LINE__,ch_id,thrs_buf->addr,thrs_buf->len,rval);
			//dbg_print("thrs_addr(%x), thrs_len(%x)\r\n",thrs_buf->addr,thrs_buf->len);
		}
	}else{//emi is pls mode
		interInfo->logseq_pls_sta = LS_QUERY_STA;
		//calculate the address and length
		if((DRV_Reg32(LS_REG(ch_id,DSP_LS_FLUSH_ABORT_STATUS))&0x1)||(DRV_Reg32(LS_REG(ch_id,DSP_LS_FLUSH_ABORT_STATUS))&0x2)){
        	rval = logseq_drv_cal_emi_ptr_len_with_thrs_buf_wrapping(ch_id, thrs_buf, base_addr, buf_size);
        	dbgPLSInfo[ch_id].dbg_query_len[dbgPLSInfo[ch_id].query_ptr] = thrs_buf->len;
			dbgPLSInfo[ch_id].query_ptr = (dbgPLSInfo[ch_id].query_ptr+1)%(PLS_MAX_NUM);
        	interInfo->pls_info.query_len += thrs_buf->len;
        }else{
			LS_PRINT_ASSERT("[LS] ch_id %d is not flush done/abort done\r\n",ch_id);
        }
	}
	logseq_drv_add_total_ptr_info(ch_id);
	return rval;
}

kal_uint8 logseq_drv_query_thrs_buf(kal_uint8 ch_id, LOG_SEQ_Thrs_Buf_Info * thrs_buf)
{
	kal_uint8 rval = LS_NO_ERROR;
	if(is_lshw_enable & (1<<ch_id)){
		//logseq_drv_api_get_lock(ch_id, LS_QUERY_Q_LOCK);
		//logseq_drv_mask_irq(ch_id);
		rval = logseq_drv_get_thrs_buf(ch_id,thrs_buf);
	    //logseq_drv_api_unlock(ch_id);
	    //logseq_drv_unmask_irq(ch_id);    
	}else{
		thrs_buf->addr = logseq_drv_get_emi_base(ch_id);
		thrs_buf->len = 0;
		rval = LS_QUERY_INVALID;
	}
    return rval;
}

void logseq_drv_release_emi_buf(kal_uint8 ch_id, kal_uint32 release_size)
{	
	LOG_SEQ_Internal_Info *interInfo = &LSInternalInfo[ch_id];
	LOG_SEQ_Init_Info*initInfo = &LSInitInfo[ch_id];
	kal_uint32 buf_size = initInfo->ls_emi_size;
	kal_uint32 rls_ptr = interInfo->logseq_rls_idx;
	kal_uint32 thrs_ptr = interInfo->thrs_idx;
	kal_uint32 max_release_size;
	kal_atomic_uint32 mode;
	if(is_lshw_enable & (1<<ch_id)){
		mode = interInfo->emi_mode_select;
		if(LS_STREAM_EMI == mode ||(stop_ex_cnt&(1<<ch_id))){
			interInfo->logseq_stream_sta = LS_RELEASE_STA;
		    max_release_size = logseq_drv_cal_idx_distance(thrs_ptr,rls_ptr,buf_size);
		    //if(max_release_size == 0){max_release_size = initInfo->ls_emi_size-128;}
		    if(release_size <= max_release_size){
		        DRV_WriteReg32(LS_REG(ch_id, DSP_LS_EMI_RELEASE_SIZE), release_size);
				interInfo->logseq_rls_idx = logseq_drv_cal_idx_increase(interInfo->logseq_rls_idx,release_size,buf_size);
				dhl_trace(TRACE_INFO, DHL_USER_FLAG_NONE, LS_RELEASE_EMI,__FUNCTION__,__LINE__,ch_id,release_size, max_release_size,thrs_ptr,rls_ptr,interInfo->logseq_read_idx,DRV_Reg32(LS_REG(ch_id,DSP_LS_EMI_REMAIN_SIZE)));
				//interInfo->logseq_rls_idx = thrs_ptr;//move release ptr
			}
		    else{
		        //LS_PRINT_DBG("[LS] ChID:%d release size(%x) > max release size(%x), thrs_ptr(%x), rls_ptr(%x)\r\n", ch_id, release_size, max_release_size,thrs_ptr,rls_ptr);		
				dhl_trace(TRACE_INFO, DHL_USER_FLAG_NONE, LS_RELEASE_EMI_WARN,__FUNCTION__,__LINE__,ch_id,release_size, max_release_size,thrs_ptr,rls_ptr,interInfo->logseq_read_idx,DRV_Reg32(LS_REG(ch_id,DSP_LS_EMI_REMAIN_SIZE)));
			}
		}else{
			if((interInfo->pls_info.query_len == 0) && (release_size !=0)){
				//corner case: the "normal flow" release comes in the "PLS mode"
				//neglect and return
				return;
			}else{	
				interInfo->pls_info.rls_len += release_size;
				dbgPLSInfo[ch_id].dbg_rls_len[dbgPLSInfo[ch_id].rls_ptr].cur_query_len = interInfo->pls_info.query_len;
				dbgPLSInfo[ch_id].dbg_rls_len[dbgPLSInfo[ch_id].rls_ptr].cur_rls_len= release_size;
				dbgPLSInfo[ch_id].dbg_rls_len[dbgPLSInfo[ch_id].rls_ptr].total_rls_len = interInfo->pls_info.rls_len;
				dbgPLSInfo[ch_id].rls_ptr = (dbgPLSInfo[ch_id].rls_ptr+1)%PLS_MAX_NUM;
				if(interInfo->pls_info.query_len < interInfo->pls_info.rls_len){
					// release length > query length (ERROR!!!)
					LS_PRINT_ASSERT("[LS] func: %s, ch_id %d release > query\r\n",__FUNCTION__,ch_id);
				}
				else if(interInfo->pls_info.query_len == interInfo->pls_info.rls_len){ 
					//1. total query length is all release => goto tag end next
					//2. wrapping case: first query length and AP release before the second query
					//3. query length = 0 and release length = 0
					//  3.1 they are really empty for the DSP/MCU did not output log in PLS mode
					//	3.2 the corner case: normal flow release comes in PLS mode really releases 0 
					//      -> 3.2 can not change the state, for tag start will assert
					if(interInfo->pls_info.query_len != 0){
						interInfo->logseq_pls_sta = LS_RELEASE_STA;
					}
		    	}
		    	else{
		    		//the accumulated release length is not equal to query length
		    		interInfo->pls_info.rls_bypass_cnt++;
		    		interInfo->logseq_pls_sta = LS_RELEASE_STA;
		    	}
	    	}
	    	
		}
		logseq_drv_add_total_ptr_info(ch_id);
	}else{
		dhl_trace(TRACE_INFO, DHL_USER_FLAG_NONE, LS_RELEASE_EMI_ABORT_FAILED,__FUNCTION__,__LINE__,ch_id);
	}
	return;
}


kal_uint32 logseq_drv_tick_diff(kal_uint32 s_tick, kal_uint32 e_tick)
{
    if(e_tick >= s_tick)
        return e_tick - s_tick;
    else
        return 0xFFFFFFFF-(s_tick - e_tick - 1);
}
kal_uint32 logseq_drv_get_cur_us(void){
	return ust_get_current_time();
}

kal_uint32 logseq_drv_get_us_diff(kal_uint32 prev_us){
	kal_uint32 cur_us;
	cur_us=ust_get_current_time();
	if(cur_us >= prev_us){return cur_us - prev_us;}
	else{return 0xffffffff-(prev_us-cur_us)+1;}
}
void logseq_drv_delay_us(kal_uint32 us)
{
	volatile kal_uint32 prev_time, diff_time = 0;
	prev_time = logseq_drv_get_cur_us();
	while(1) {
		diff_time = logseq_drv_get_us_diff(prev_time);
		if (diff_time >= us) {
			break;
		}
	}
}

kal_uint32 logseq_drv_flush_and_resume(kal_uint8 ch_id)
{
    kal_uint32 s_tick;
    kal_uint32 rval = LS_NO_ERROR;
    DRV_SetReg32(LS_REG(ch_id, DSP_LS_RUN_TIME_MANAGE), 0x5 << 2);
    s_tick = logseq_drv_get_cur_us();
    while((DRV_Reg32(LS_REG(ch_id, DSP_LS_RUN_TIME_MANAGE))&(0x5<<2)) || (DRV_Reg32(LS_REG(ch_id, DSP_LS_FLUSH_ABORT_STATUS))&(1<<3)))
    {
		if(logseq_drv_get_us_diff(s_tick) > 1*1000*1000){
            rval |= LS_FLUSH_RESUME_TIMEOUT;
            dhl_trace(TRACE_INFO, DHL_USER_FLAG_NONE, LS_DBG1,__FUNCTION__,__LINE__,ch_id,rval);
			//LS_PRINT_DBG("[LS] ChID:%d flush & resume timeout\r\n", ch_id);
            break;
		}
    }
    if(rval){
        DRV_SetReg32(LS_REG(ch_id, DSP_LS_RUN_TIME_MANAGE), 0x5 << 1);
        s_tick = logseq_drv_get_cur_us();
        while((DRV_Reg32(LS_REG(ch_id, DSP_LS_RUN_TIME_MANAGE))&(0x5<<1)) || (DRV_Reg32(LS_REG(ch_id, DSP_LS_FLUSH_ABORT_STATUS))&(1<<2)))
        {
            if(logseq_drv_get_us_diff(s_tick) > 1*1000*1000){
                rval |= LS_ABORT_RESUME_TIMEOUT;
                dhl_trace(TRACE_INFO, DHL_USER_FLAG_NONE, LS_ASSERT,__FUNCTION__,__LINE__,ch_id,rval,0,0);
                kal_mem_cpy(&dbgInfo[ch_id],&LSInternalInfo[ch_id],sizeof(LOG_SEQ_Internal_Info));
                LS_PRINT_ASSERT("[LS] ChID:%d abort & resume timeout", ch_id);
                break;
            }
        }
    }
    return rval;

}

kal_uint32 logseq_drv_get_L2_usage(kal_uint8 ch_id)
{
    return (DRV_Reg32(LS_REG(ch_id, DSP_LS_L2_STATUS)) >> 4) & 0xFFF;
}

kal_uint32 logseq_drv_get_emi_size(kal_uint8 ch_id)
{
	return DRV_Reg32(LS_REG(ch_id,DSP_LS_EMI_SIZE));
}

kal_uint32 logseq_drv_get_emi_remain_size(kal_uint32 ch_id)
{
	if(LSInternalInfo[ch_id].emi_mode_select == LS_PLS_EMI){
	
		return logseq_drv_get_emi_size(ch_id);//PLS mode return buffer size

	}
	else{
	
		return DRV_Reg32(LS_REG(ch_id,DSP_LS_EMI_REMAIN_SIZE));//Streaming mode return register remain size
	}
}

kal_bool is_logseq_drv_init(kal_uint32 ch_id)
{
	if(is_drv_init & (1<<ch_id)){return KAL_TRUE;}
	else{return KAL_FALSE;}
}

kal_uint32 logseq_drv_flush(kal_uint8 ch_id)
{
    kal_uint32 s_tick;
    kal_uint32 rval = LS_NO_ERROR;
    DRV_SetReg32(LS_REG(ch_id, DSP_LS_RUN_TIME_MANAGE), 1 << 4);
    s_tick = logseq_drv_get_cur_us();
    while(!(DRV_Reg32(LS_REG(ch_id, DSP_LS_FLUSH_ABORT_STATUS))&(1<<1)))
    {	
        if(logseq_drv_get_us_diff(s_tick) > FLUSH_TIMEOUT){
            rval = LS_FLUSH_TIMEOUT;
         	dhl_trace(TRACE_INFO, DHL_USER_FLAG_NONE, LS_DBG1,__FUNCTION__,__LINE__,ch_id,rval);         	
            //LS_PRINT_DBG("[LS] ChID:%d flush timeout", ch_id);
            break;
        }
        if(DRV_Reg32(LS_REG(ch_id, DSP_LS_EMI_REMAIN_SIZE)) < 128){
            rval = LS_FLUSH_TIMEOUT;
            dhl_trace(TRACE_INFO, DHL_USER_FLAG_NONE, LS_DBG1,__FUNCTION__,__LINE__,ch_id,rval);
            //LS_PRINT_DBG("[LS] ChID:%d EMI buffer full", ch_id);
            break;
        }
    }
    return rval;
}

kal_uint32 logseq_drv_abort(kal_uint8 ch_id)
{
    kal_uint32 s_tick;
    kal_uint32 rval = LS_NO_ERROR;
    DRV_SetReg32(LS_REG(ch_id, DSP_LS_RUN_TIME_MANAGE), 1 << 3);
    s_tick = logseq_drv_get_cur_us();
    while(!(DRV_Reg32(LS_REG(ch_id, DSP_LS_FLUSH_ABORT_STATUS))&1))
    {
        if(logseq_drv_get_us_diff(s_tick) > ABORT_TIMEOUT){
            rval = LS_ABORT_TIMEOUT;
			dhl_trace(TRACE_INFO, DHL_USER_FLAG_NONE, LS_ABORT_FAILED,__FUNCTION__,__LINE__,ch_id,DRV_Reg32(LS_REG(ch_id,DSP_LS_RUN_TIME_MANAGE)),DRV_Reg32(LS_REG(ch_id,DSP_LS_FLUSH_ABORT_STATUS)));
			kal_mem_cpy(&dbgInfo[ch_id],&LSInternalInfo[ch_id],sizeof(LOG_SEQ_Internal_Info));
            break;
        }
    }
    return rval;
}

static void logseq_drv_backup(kal_uint8 ch_id)
{	
	LOG_SEQ_Internal_Info *interInfo = &LSInternalInfo[ch_id];
	// backup EMI write pointer & EMI buffer remain size
	interInfo->logseq_backup.ls_emi_write_addr = DRV_Reg32(LS_REG(ch_id, DSP_LS_EMI_WRITE_ADDR));
	interInfo->logseq_backup.ls_remain_size = DRV_Reg32(LS_REG(ch_id, DSP_LS_EMI_REMAIN_SIZE));
	interInfo->logseq_backup.ls_emi_ths_cnt = DRV_Reg32(LS_REG(ch_id, DSP_LS_EMI_THRESHOLD_COUNT));
	if(DRV_Reg32(LS_REG(ch_id,DSP_LS_EMI_WRITE_PACKET_ALIGNED_ADDR))!=0){
		interInfo->logseq_backup.ls_emi_write_aligned_ptr = DRV_Reg32(LS_REG(ch_id,DSP_LS_EMI_WRITE_PACKET_ALIGNED_ADDR));
	}
	// backup EMI wrapped state
	interInfo->logseq_backup.ls_emi_wrapped = DRV_Reg32(LS_REG(ch_id, DSP_LS_EMI_STATUS))>>1;
	// backup L2 read/write pointer & buffer usage
#if defined(__MD93__)
	interInfo->logseq_backup.ls_internal_buf_used_level = DRV_Reg32(LS_REG(ch_id, DSP_LS_L2_STATUS))>>4;
#elif defined(__MD95__)
	interInfo->logseq_backup.ls_internal_buf_lock_remain_level = DRV_Reg32(LS_REG(ch_id, DSP_LS_CON1_BEFORE_START))>>20;
	interInfo->logseq_backup.ls_internal_max_used_level = DRV_Reg32(LS_REG(ch_id, DSP_LS_L2_STATUS))>>16;
#else 
#error "No chip matched, please check it."
#endif
	interInfo->logseq_backup.ls_l2_write_addr = DRV_Reg32(LS_REG(ch_id, DSP_LS_L2_WRITE_ADDR));
	interInfo->logseq_backup.ls_l2_read_addr = DRV_Reg32(LS_REG(ch_id, DSP_LS_L2_READ_ADDR));
	// backup L2 packet aligned pointer
	interInfo->logseq_backup.ls_l2_pkt_aligned_ptr_0 = DRV_Reg32(LS_REG(ch_id, DSP_LS_L2_PKT_ALIGNED_PTR_0));
	interInfo->logseq_backup.ls_l2_pkt_aligned_ptr_1 = DRV_Reg32(LS_REG(ch_id, DSP_LS_L2_PKT_ALIGNED_PTR_1));
	interInfo->logseq_backup.ls_l2_pkt_aligned_ptr_2 = DRV_Reg32(LS_REG(ch_id, DSP_LS_L2_PKT_ALIGNED_PTR_2));
	interInfo->logseq_backup.ls_l2_pkt_aligned_ptr_3 = DRV_Reg32(LS_REG(ch_id, DSP_LS_L2_PKT_ALIGNED_PTR_3));
	interInfo->logseq_backup.ls_l2_pkt_aligned_ptr_4 = DRV_Reg32(LS_REG(ch_id, DSP_LS_L2_PKT_ALIGNED_PTR_4));
	interInfo->logseq_backup.ls_l2_pkt_aligned_ptr_5 = DRV_Reg32(LS_REG(ch_id, DSP_LS_L2_PKT_ALIGNED_PTR_5));
	interInfo->logseq_backup.ls_l2_pkt_aligned_ptr_6 = DRV_Reg32(LS_REG(ch_id, DSP_LS_L2_PKT_ALIGNED_PTR_6));
	interInfo->logseq_backup.ls_l2_pkt_aligned_ptr_7 = DRV_Reg32(LS_REG(ch_id, DSP_LS_L2_PKT_ALIGNED_PTR_7));
#if defined(__MD93__)
#elif defined(__MD95__)
	interInfo->logseq_backup.ls_internal_buf_full_cnt = DRV_Reg32(LS_REG(ch_id, DSP_LS_INTERNAL_BUF_FULL_CNT));
#else 
#error "No chip matched, please check it."
#endif
}

kal_uint32 logseq_drv_stop(kal_uint8 ch_id)
{
    kal_uint32 rval = LS_NO_ERROR;
    if( LSInternalInfo[ch_id].logseq_backup_sta == LS_RESTORE_SUCCESS){
         LSInternalInfo[ch_id].logseq_backup_sta = LS_BACKUP_BUSY;

        logseq_drv_api_get_lock(ch_id, LS_SLEEP_LOCK);
        // mask IRQ
        logseq_drv_mask_irq(ch_id);
        dhl_trace(TRACE_INFO, DHL_USER_FLAG_NONE, LS_CLK_OFF,__FUNCTION__,__LINE__,ch_id,kal_get_current_task(),ust_get_current_time());
        // disable LS input port
        DRV_SetReg32(LS_REG(ch_id, DSP_LS_RUN_TIME_MANAGE), 1 << 6);
        logseq_drv_handle_emi_buf(ch_id);
        // LS do flush
        rval |= logseq_drv_flush(ch_id);
        if(rval){
            // LS do abort
            rval |= logseq_drv_abort(ch_id);
            if(rval == LS_ABORT_TIMEOUT)
			{
				LS_PRINT_ASSERT("[LS] ChID:%d abort timeout", ch_id);
			}
        }
        logseq_drv_handle_emi_buf(ch_id);
        //dbg_print("after flush emi_write_aligned_addr(%x), ls_status(%x)\r\n", DRV_Reg32(LS_REG(ch_id, DSP_LS_EMI_WRITE_PACKET_ALIGNED_ADDR)), DRV_Reg32(LS_REG(ch_id, DSP_LS_L2_STATUS)));
        // LS backup register info
        logseq_drv_backup(ch_id);
        // remove the disable clk, for the emi_write_aligned_ptr will be compared wrong
        //DRV_SetReg32(LS_REG(ch_id, DSP_LS_CON0_BEFORE_START), 1);
        LSInternalInfo[ch_id].logseq_backup_sta = LS_BACKUP_SUCCESS;
        // unlock atomic variable
        logseq_drv_api_unlock(ch_id);
        // unmask IRQ
        logseq_drv_unmask_irq(ch_id);
    }
    else{
        rval = LS_BACKUP_FAIL;
      	dhl_trace(TRACE_INFO, DHL_USER_FLAG_NONE, LS_ASSERT,__FUNCTION__,__LINE__,ch_id,rval,0,0);
      	kal_mem_cpy(&dbgInfo[ch_id],&LSInternalInfo[ch_id],sizeof(LOG_SEQ_Internal_Info));
        LS_PRINT_ASSERT("[LS] ChID:%d stop without restore success", ch_id);
    }
    return rval;
}

kal_uint32 logseq_drv_stop_im(kal_uint8 ch_id)
{
    kal_uint32 rval = LS_NO_ERROR;
    kal_uint32 mcu_cntr = 0, dsp_cntr = 0;
    LSInternalInfo[ch_id].ls_backup_start = ust_get_current_time();
	if(!(is_drv_init&(1<<ch_id))) return rval;
    if(LSInternalInfo[ch_id].logseq_backup_sta == LS_RESTORE_SUCCESS){
        LSInternalInfo[ch_id].logseq_backup_sta = LS_BACKUP_BUSY;
        logseq_drv_api_get_lock(ch_id, LS_SLEEP_LOCK);
        // mask IRQ
        logseq_drv_mask_irq(ch_id);
        dhl_trace(TRACE_INFO, DHL_USER_FLAG_NONE, LS_CLK_OFF,__FUNCTION__,__LINE__,ch_id,kal_get_current_task(),ust_get_current_time());
        // disable LS input port
        DRV_SetReg32(LS_REG(ch_id, DSP_LS_RUN_TIME_MANAGE), 1 << 6);
        // LS do abort
        rval |= logseq_drv_abort(ch_id);
        if(rval == LS_ABORT_TIMEOUT)
		{
			if((sleep_swwa_cnter&0xFFFF0000) == 0x3A1B0000){
				if(ch_id == LS_MCU_CH){
					mcu_cntr = ((sleep_swwa_cnter&0xFF00)>>8);
					if(mcu_cntr < SWWA_THRESHOLD){ //change
						mcu_cntr+=1;
						sleep_swwa_cnter &= 0xFFFF00FF;
						sleep_swwa_cnter |= ((mcu_cntr<<8)&0xFF00);
					}else{//change magic number and assert
						sleep_swwa_cnter &= 0xFFFF;
						sleep_swwa_cnter |= 0xB1A30000;
					}
				}else if(ch_id == LS_DSP_CH){
					dsp_cntr = (sleep_swwa_cnter&0xFF);
					if(dsp_cntr < SWWA_THRESHOLD){ //change
						dsp_cntr+=1;
						sleep_swwa_cnter &=0xFFFFFF00;
						sleep_swwa_cnter |= (dsp_cntr&0xFF);
					}else{//change magic number and assert
						sleep_swwa_cnter &= 0xFFFF;
						sleep_swwa_cnter |= 0xB1A30000;
					}
				}
				else{
					LS_PRINT_ASSERT("[LS] ch_id %d the channel is incorrect!\r\n",ch_id);
				}
			}else{
				sleep_swwa_cnter = 0x3A1B0000;
			}
			if(LSCallback.action_for_ls_abort_timeout){
				LSCallback.action_for_ls_abort_timeout(ch_id);
			}
			logseq_drv_abort_timeout_recover(ch_id);// LS abort sw workaround on 93 chip
        }else{
			logseq_drv_handle_emi_buf(ch_id);
	        // LS backup register info
	        logseq_drv_backup(ch_id);
        }
        //DRV_SetReg32(LS_REG(ch_id, DSP_LS_CON0_BEFORE_START), 1);
        LSInternalInfo[ch_id].logseq_backup_sta = LS_BACKUP_SUCCESS;
        // unlock atomic variable
        logseq_drv_api_unlock(ch_id);
        // unmask IRQ
        logseq_drv_unmask_irq(ch_id);
    }
    else{
        rval = LS_BACKUP_FAIL;
        dhl_trace(TRACE_INFO, DHL_USER_FLAG_NONE, LS_ASSERT,__FUNCTION__,__LINE__,ch_id,rval,0,0);
        kal_mem_cpy(&dbgInfo[ch_id],&LSInternalInfo[ch_id],sizeof(LOG_SEQ_Internal_Info));
        LS_PRINT_ASSERT("[LS] ChID:%d stop without restore success", ch_id);
    }
    LSInternalInfo[ch_id].ls_backup_end= ust_get_current_time();
    return rval;
}

static void logseq_drv_restore(kal_uint8 ch_id)
{	
	LOG_SEQ_Internal_Info *interInfo = &LSInternalInfo[ch_id];
	// restore EMI write pointer, write alinged pointer & EMI buffer remain size
	DRV_WriteReg32(LS_REG(ch_id, DSP_LS_EMI_WRITE_ADDR), interInfo->logseq_backup.ls_emi_write_addr);
#if defined(__MD93__)
#elif defined(__MD95__) 
	if(interInfo->logseq_backup.ls_emi_write_aligned_ptr != 0){//the emi write aligned ptr can be backed up in the gen95
		DRV_WriteReg32(LS_REG(ch_id,DSP_LS_EMI_WRITE_PACKET_ALIGNED_ADDR), interInfo->logseq_backup.ls_emi_write_aligned_ptr);
	}
#else 
#error "No chip matched, please check it."	
#endif
	DRV_WriteReg32(LS_REG(ch_id, DSP_LS_EMI_REMAIN_SIZE), interInfo->logseq_backup.ls_remain_size);
	DRV_WriteReg32(LS_REG(ch_id, DSP_LS_EMI_THRESHOLD_COUNT), interInfo->logseq_backup.ls_emi_ths_cnt);
//	TODO: Gen93 SW workaround for EMI wrapping bit WHQA00032633 start
	// restore EMI wrapped state 
#if defined(__MD93__)
	//WHQA00032633(Gen93)
	if(interInfo->logseq_backup.ls_emi_wrapped){
		DRV_SetReg32(LS_REG(ch_id, DSP_LS_EMI_WRITE_ADDR),1<<1);
	}
	// restore L2 read/write pointer & buffer usage
	DRV_WriteReg32(LS_REG(ch_id, DSP_LS_L2_STATUS), (interInfo->logseq_backup.ls_internal_buf_used_level)<<4);
//	TODO: Gen93 SW workaround for EMI wrapping bit WHQA00032633 end
#elif defined(__MD95__)
	//Gen95 fixed the bug
	DRV_WriteReg32(LS_REG(ch_id, DSP_LS_EMI_STATUS), (interInfo->logseq_backup.ls_emi_wrapped)<<1);
#else 
#error "No chip matched, please check it."
#endif
	DRV_WriteReg32(LS_REG(ch_id, DSP_LS_L2_WRITE_ADDR), interInfo->logseq_backup.ls_l2_write_addr);
	DRV_WriteReg32(LS_REG(ch_id, DSP_LS_L2_READ_ADDR), interInfo->logseq_backup.ls_l2_read_addr); 
	// restore L2 packet aligned pointer
	DRV_WriteReg32(LS_REG(ch_id, DSP_LS_L2_PKT_ALIGNED_PTR_0), interInfo->logseq_backup.ls_l2_pkt_aligned_ptr_0);
	DRV_WriteReg32(LS_REG(ch_id, DSP_LS_L2_PKT_ALIGNED_PTR_1), interInfo->logseq_backup.ls_l2_pkt_aligned_ptr_1);
	DRV_WriteReg32(LS_REG(ch_id, DSP_LS_L2_PKT_ALIGNED_PTR_2), interInfo->logseq_backup.ls_l2_pkt_aligned_ptr_2);
	DRV_WriteReg32(LS_REG(ch_id, DSP_LS_L2_PKT_ALIGNED_PTR_3), interInfo->logseq_backup.ls_l2_pkt_aligned_ptr_3);
	DRV_WriteReg32(LS_REG(ch_id, DSP_LS_L2_PKT_ALIGNED_PTR_4), interInfo->logseq_backup.ls_l2_pkt_aligned_ptr_4);
	DRV_WriteReg32(LS_REG(ch_id, DSP_LS_L2_PKT_ALIGNED_PTR_5), interInfo->logseq_backup.ls_l2_pkt_aligned_ptr_5);
	DRV_WriteReg32(LS_REG(ch_id, DSP_LS_L2_PKT_ALIGNED_PTR_6), interInfo->logseq_backup.ls_l2_pkt_aligned_ptr_6);
	DRV_WriteReg32(LS_REG(ch_id, DSP_LS_L2_PKT_ALIGNED_PTR_7), interInfo->logseq_backup.ls_l2_pkt_aligned_ptr_7);
#if defined(__MD93__)
#elif defined(__MD95__)
	// restore L2 read/write pointer & buffer usage
	DRV_WriteReg32(LS_REG(ch_id, DSP_LS_L2_STATUS), (interInfo->logseq_backup.ls_internal_max_used_level)<<16);
	DRV_WriteReg32(LS_REG(ch_id, DSP_LS_INTERNAL_BUF_FULL_CNT), interInfo->logseq_backup.ls_internal_buf_full_cnt);
#else 
#error "No chip matched, please check it."
#endif
}

kal_uint32 logseq_drv_reinit_after_abort_failed(kal_uint8 ch_id)
{
	kal_uint32 rval = LS_NO_ERROR;
	if(!(is_lshw_enable&(1<<ch_id))){
		// setup LS using original configures without reset the HW
		logseq_drv_LS_setup(ch_id,0);
		LSInternalInfo[ch_id].logseq_backup_sta = LS_RESTORE_SUCCESS;
		dhl_trace(TRACE_INFO, DHL_USER_FLAG_NONE, LS_CLK_ON,__FUNCTION__,__LINE__,ch_id,kal_get_current_task(),ust_get_current_time());
		DRV_SetReg32(LS_REG(ch_id, DSP_LS_CON0_BEFORE_START), 1<<1);
		is_lshw_enable |= (1<<ch_id);
	}else{
#if defined(__MTK_INTERNAL__)
		LS_PRINT_ASSERT("[LS] ch_id %d call reinit wihtout LS abort timeout\r\n",ch_id);
#else
		dhl_trace(TRACE_INFO, DHL_USER_FLAG_NONE, LS_REINIT_FAILED, __FUNCTION__, __LINE__, ch_id, is_lshw_enable);
#endif
	}
	return rval;
}

kal_uint32 logseq_drv_resume(kal_uint8 ch_id)
{
    kal_uint32 rval = LS_NO_ERROR;
    LSInternalInfo[ch_id].ls_restore_start = ust_get_current_time();
    if( LSInternalInfo[ch_id].logseq_backup_sta == LS_BACKUP_SUCCESS){
        LSInternalInfo[ch_id].logseq_backup_sta = LS_RESTORE_BUSY;
       	if(!(DRV_Reg32(LS_REG(ch_id,DSP_LS_CON0_BEFORE_START))&0x2))
		{
	        // setup LS using original configures
	        logseq_drv_LS_setup(ch_id,1);
	        // restore LS using backup info
	        logseq_drv_restore(ch_id);
	        LSInternalInfo[ch_id].logseq_backup_sta = LS_RESTORE_SUCCESS;
	        // start LS & unmask IRQ
	        dhl_trace(TRACE_INFO, DHL_USER_FLAG_NONE, LS_CLK_ON,__FUNCTION__,__LINE__,ch_id,kal_get_current_task(),ust_get_current_time());
	        DRV_SetReg32(LS_REG(ch_id, DSP_LS_CON0_BEFORE_START), 1<<1);
	        
		}else{
			// enable LS input port
			DRV_ClrReg32(LS_REG(ch_id, DSP_LS_RUN_TIME_MANAGE), 1 << 6);
			if(DRV_Reg32(LS_REG(ch_id,DSP_LS_FLUSH_ABORT_STATUS))&0x1){
				logseq_drv_resume_after_abort(ch_id);
				dhl_trace(TRACE_INFO, DHL_USER_FLAG_NONE, LS_DBG1,__FUNCTION__,__LINE__,ch_id,DRV_Reg32(LS_REG(ch_id,DSP_LS_FLUSH_ABORT_STATUS)));
			}else if(DRV_Reg32(LS_REG(ch_id,DSP_LS_FLUSH_ABORT_STATUS))&0x2){
				logseq_drv_resume_after_flush(ch_id);
				dhl_trace(TRACE_INFO, DHL_USER_FLAG_NONE, LS_DBG1,__FUNCTION__,__LINE__,ch_id,DRV_Reg32(LS_REG(ch_id,DSP_LS_FLUSH_ABORT_STATUS)));
			}else{
				logeq_drv_add_abort_timeout_info(ch_id);
				kal_mem_cpy(&dbgInfo[ch_id],&LSInternalInfo[ch_id],sizeof(LOG_SEQ_Internal_Info));
				LS_PRINT_ASSERT("[LS] func:%s, ch_id%d the LS has not flushed nor aborted done, rval(%x)\r\n",__FUNCTION__,ch_id,DRV_Reg32(LS_REG(ch_id,DSP_LS_FLUSH_ABORT_STATUS)));
			}
			LSInternalInfo[ch_id].logseq_backup_sta = LS_RESTORE_SUCCESS;
			dhl_trace(TRACE_INFO, DHL_USER_FLAG_NONE,LS_RESUME,__FUNCTION__,__LINE__,ch_id);
		}
        /*
        if(KAL_FALSE == logseq_drv_thrs_buf_empty(ch_id)){
            if(LSCallback.buffer_over_ths_callback)
                LSCallback.buffer_over_ths_callback(ch_id);
        }*/
    }else{
        rval = LS_RESTORE_FAIL;
        dhl_trace(TRACE_INFO, DHL_USER_FLAG_NONE, LS_ASSERT,__FUNCTION__,__LINE__,ch_id,rval,0,0);
        kal_mem_cpy(&dbgInfo[ch_id],&LSInternalInfo[ch_id],sizeof(LOG_SEQ_Internal_Info));
        LS_PRINT_ASSERT("[LS] ChID:%d resume without backup success", ch_id);
    }
    LSInternalInfo[ch_id].ls_restore_end= ust_get_current_time();
    return rval;
}

kal_uint32 logseq_drv_resume_force_rls(kal_uint8 ch_id)
{	
	kal_uint32 rval = LS_NO_ERROR;
	LOG_SEQ_Init_Info *initInfo = &LSInitInfo[ch_id];
	LOG_SEQ_Internal_Info *interInfo = &LSInternalInfo[ch_id];
	if((is_drv_init & (1<<ch_id))){
		if((logseq_drv_cal_idx_distance(interInfo->logseq_read_idx, interInfo->thrs_idx, initInfo->ls_emi_size)) >= initInfo->ls_emi_over_ths_int_level)
		{
			if(LSCallback.buffer_over_ths_callback){
				LSCallback.buffer_over_ths_callback(ch_id);
			}
		}
		logseq_drv_add_total_ptr_info(ch_id);
	}
    return rval;
}

kal_uint32 logseq_drv_force_rls_ths_count(kal_uint8 ch_id)
{
    kal_uint32 rval = LS_NO_ERROR;
  
	LOG_SEQ_Internal_Info *interInfo = &LSInternalInfo[ch_id];  
	if((is_drv_init & (1<<ch_id))){
	  if(KAL_TRUE == logseq_drv_api_try_lock(ch_id, LS_FORCE_RLS_LOCK)){//take atomic spin lock
		logseq_drv_mask_irq(ch_id);
		//if LS is in the PLS mode -> 1. disable input 2. change status(for debug)
		if(interInfo->emi_mode_select == LS_PLS_EMI){//pls mode
			if(interInfo->logseq_pls_sta == LS_TAGSTART_STA){
			//DRV_SetReg32(LS_REG(ch_id, DSP_LS_RUN_TIME_MANAGE), 1 << 6);
				interInfo->logseq_pls_sta = LS_FORCE_RLS_STA;
			}else{
				//corner case: the normal flow force release comes in PLS mode
				//unlock spinlock, unmask irq and return directly. -> corner case can not change the state, for the tag start will fail
				logseq_drv_api_unlock(ch_id);//unlock atomic spin lock
				logseq_drv_unmask_irq(ch_id);
				return rval;
			}
		}else{//streaming mode
			if(!(is_lshw_enable&(1<<ch_id))){
				logseq_drv_api_unlock(ch_id);//unlock atomic spin lock
				logseq_drv_unmask_irq(ch_id);
				return rval;
			}		
			interInfo->logseq_stream_sta = LS_FORCE_RLS_STA;
			dhl_trace(TRACE_INFO, DHL_USER_FLAG_NONE, LS_DBG1,__FUNCTION__,__LINE__,ch_id,LS_STREAM_EMI);
			rval = logseq_drv_handle_emi_buf(ch_id);
			if(rval == LS_INSERT_FAIL){
				dhl_trace(TRACE_INFO, DHL_USER_FLAG_NONE, LS_ASSERT,__FUNCTION__,__LINE__,ch_id,rval,0,0);
				kal_mem_cpy(&dbgInfo[ch_id],&LSInternalInfo[ch_id],sizeof(LOG_SEQ_Internal_Info));
				LS_PRINT_ASSERT("[LS] ch_id%d inserts address is not continous!\r\n",ch_id);
			}
		}
		logseq_drv_api_unlock(ch_id);//unlock atomic spin lock
	    if((KAL_FALSE == logseq_drv_thrs_buf_empty(ch_id)) ||(interInfo->emi_mode_select == LS_PLS_EMI)){
	    	//the PLS mode call the call back whether there is the data in the channel or not.(usually we call MCU callback but neglect DSP )
	    	//It will cause the DHL PLS mode flush unfinished and cause the flush log never finish.
	        if(LSCallback.buffer_over_ths_callback)
	            LSCallback.buffer_over_ths_callback(ch_id);
	    }
	    logseq_drv_unmask_irq(ch_id);
	  }
	}else{
		kal_mem_cpy(&dbgInfo[ch_id],&LSInternalInfo[ch_id],sizeof(LOG_SEQ_Internal_Info));
		LS_PRINT_ASSERT("[LS] ch_id %d force rls without LS init!\r\n",ch_id);
		rval = LS_FORCE_RLS_FAIL;
	}
	logseq_drv_add_total_ptr_info(ch_id);
    return rval;
}

// ======================= exception API ================================
void logseq_drv_get_unrls_addr_len(kal_uint8 ch_id,LOG_SEQ_Thrs_Buf_Info* get_thrs_buf)
{
	kal_uint32 idx,len = 0;
	LOG_SEQ_Internal_Info *interInfo = &LSInternalInfo[ch_id];
	LOG_SEQ_Init_Info *initInfo = &LSInitInfo[ch_id];
	kal_uint32 thrs_cnt = DRV_Reg32(LS_REG(ch_id,DSP_LS_EMI_THRESHOLD_COUNT));
	kal_uint32 remain_sz = DRV_Reg32(LS_REG(ch_id,DSP_LS_EMI_REMAIN_SIZE));
	idx = interInfo->logseq_rls_idx;
	if(thrs_cnt == 0 && remain_sz == 0){len = initInfo->ls_emi_size;}
	else{len = logseq_drv_cal_idx_distance(interInfo->thrs_idx,interInfo->logseq_rls_idx,initInfo->ls_emi_size);}
	get_thrs_buf->addr = idx;
	get_thrs_buf->len = len;
	return;	
}

static void logseq_drv_do_emi_buf_flush(kal_uint8 ch_id)
{
	kal_uint32 rval = LS_QUERY_INVALID;
	LOG_SEQ_Thrs_Buf_Info target_thrs_buf;
	do{
		rval=logseq_drv_query_thrs_buf(ch_id, &target_thrs_buf);
		dhl_trace(TRACE_INFO, DHL_USER_FLAG_NONE, LS_DBG3,__FUNCTION__,__LINE__,ch_id,target_thrs_buf.addr,target_thrs_buf.len,rval);
		if(rval != LS_QUERY_INVALID){
			LSCallback.flush_ex_callback(ch_id, target_thrs_buf.addr, target_thrs_buf.len);
			logseq_drv_release_emi_buf(ch_id, target_thrs_buf.len); 
		}
	}while(rval == LS_QUERY_CONTINUE);
	
	return;

}

void logseq_drv_handle_emi_buf_ex(kal_uint8 ch_id){

	kal_uint32 rval = LS_NO_ERROR;
	rval = logseq_drv_insert_thrs_buf(ch_id);
 	if(rval == LS_NO_DATA){
		dhl_trace(TRACE_INFO, DHL_USER_FLAG_NONE, LS_THRSBUF_EMPTY,__FUNCTION__,__LINE__,ch_id);
    }else{
		logseq_drv_do_emi_buf_flush(ch_id);
    }
    return;

}

void logseq_drv_handle_unrls_emi_buf_ex(kal_uint8 ch_id){

	LOG_SEQ_Init_Info *initInfo = &LSInitInfo[ch_id];
	LOG_SEQ_Internal_Info *interInfo = &LSInternalInfo[ch_id];
	kal_uint32 addr, len = 0;
    if(interInfo->logseq_rls_idx == interInfo->thrs_idx){
    	dhl_trace(TRACE_INFO, DHL_USER_FLAG_NONE, LS_THRSBUF_EMPTY,__FUNCTION__,__LINE__,ch_id);
		//LS_PRINT_DBG("[LS]: %s: Ch_id: %d buffer_ex is empty!\r\n",__FUNCTION__,ch_id);		
    }else{
	    do{
	    	addr = interInfo->logseq_rls_idx + initInfo->ls_emi_base_addr;
	    	len = logseq_drv_cal_idx_distance(interInfo->thrs_idx, interInfo->logseq_rls_idx, initInfo->ls_emi_size);
	    	LSCallback.flush_ex_callback(ch_id, addr, len);
			logseq_drv_release_emi_buf(ch_id, len);
	    }while(interInfo->logseq_rls_idx != interInfo->thrs_idx);
    }
    return;
}
kal_uint32 logseq_drv_flush_ex(kal_uint8 ch_id)
{
    kal_uint32 s_tick;
    kal_uint32 rval = LS_NO_ERROR;
    DRV_SetReg32(LS_REG(ch_id, DSP_LS_RUN_TIME_MANAGE), 1 << 4);
    s_tick = logseq_drv_get_cur_us();
    dhl_trace(TRACE_INFO, DHL_USER_FLAG_NONE, LS_DBG1,__FUNCTION__,__LINE__,ch_id,0);
    while(!(DRV_Reg32(LS_REG(ch_id, DSP_LS_FLUSH_ABORT_STATUS))&(1<<1)))
    {
        if(logseq_drv_get_us_diff(s_tick) > 3*FLUSH_TIMEOUT){
            rval = LS_FLUSH_TIMEOUT;
            dhl_trace(TRACE_INFO, DHL_USER_FLAG_NONE, LS_DBG1,__FUNCTION__,__LINE__,ch_id,rval);
			//LS_PRINT_DBG("[LS] ChID:%d flush timeout", ch_id);
            break;
        }
        if(DRV_Reg32(LS_REG(ch_id, DSP_LS_EMI_REMAIN_SIZE)) < 128)
            logseq_drv_handle_emi_buf_ex(ch_id);
    }
    return rval;
}

static kal_uint32 logseq_drv_whole_sys_flush_done_ex(kal_uint8 ch_id)
{
    kal_uint32 s_tick;
    kal_uint32 rval = LS_NO_ERROR;
    s_tick = logseq_drv_get_cur_us();
#if defined(__MD93__)
    if(ch_id == LS_MCU_CH){
        while((DRV_Reg32(MCU_LS_L2_GLB_FLUSH_STATUS)&0x1) != 0x1){
            if(logseq_drv_get_us_diff(s_tick) > WHOLE_SYS_TIMEOUT){
                rval |= LS_WHOLE_SYS_FLUSH_TIMEOUT;
                dhl_trace(TRACE_INFO, DHL_USER_FLAG_NONE, LS_WHOLESYS_FAILED,__FUNCTION__,__LINE__,ch_id,DRV_Reg32(LS_REG(ch_id,DSP_LS_EMI_REMAIN_SIZE)),\
                DRV_Reg32(LS_REG(ch_id,DSP_LS_L2_WRITE_ADDR)),DRV_Reg32(LS_REG(ch_id,DSP_LS_L2_READ_ADDR)), DRV_Reg32(LS_REG(ch_id,DSP_LS_L2_GLB_FLUSH_STATUS)),0);
                //LS_PRINT_DBG("[LS] ChID:%d whole system flush timeout", ch_id);
                break;
            }
        }
    }
    else{
        while((DRV_Reg32(DSP_LS_L2_GLB_FLUSH_STATUS)&0x7) != 0x7){
            if(logseq_drv_get_us_diff(s_tick) > WHOLE_SYS_TIMEOUT){
                rval |= LS_WHOLE_SYS_FLUSH_TIMEOUT;
                dhl_trace(TRACE_INFO, DHL_USER_FLAG_NONE, LS_WHOLESYS_FAILED,__FUNCTION__,__LINE__,ch_id,DRV_Reg32(LS_REG(ch_id,DSP_LS_EMI_REMAIN_SIZE)),\
                DRV_Reg32(LS_REG(ch_id,DSP_LS_L2_WRITE_ADDR)),DRV_Reg32(LS_REG(ch_id,DSP_LS_L2_READ_ADDR)), DRV_Reg32(LS_REG(ch_id,DSP_LS_L2_GLB_FLUSH_STATUS)),0);
                //LS_PRINT_DBG("[LS] ChID:%d whole system flush timeout", ch_id);
                break;
            }
        }
    }
#elif defined(__MD95__)
	if(ch_id == LS_MCU_CH){
        while(((DRV_Reg32(MCU_LS_L1_FLUSH_ABORT_STATUS)>>4)&0x1)!=0x1){
            if(logseq_drv_get_us_diff(s_tick) > WHOLE_SYS_TIMEOUT){
                rval |= LS_WHOLE_SYS_FLUSH_TIMEOUT;
                dhl_trace(TRACE_INFO, DHL_USER_FLAG_NONE, LS_WHOLESYS_FAILED,__FUNCTION__,__LINE__,ch_id,DRV_Reg32(LS_REG(ch_id,DSP_LS_EMI_REMAIN_SIZE)),\
                DRV_Reg32(LS_REG(ch_id,DSP_LS_L2_WRITE_ADDR)),DRV_Reg32(LS_REG(ch_id,DSP_LS_L2_READ_ADDR)),DRV_Reg32(LS_REG(ch_id,DSP_LS_L1_FLUSH_ABORT_STATUS)),\
                DRV_Reg32(LS_REG(ch_id, DSP_LS_ARB_SEL_PORT)));
                //LS_PRINT_DBG("[LS] ChID:%d whole system flush timeout", ch_id);
                break;
            }
        }
    }
    else{
        while(((DRV_Reg32(DSP_LS_L1_FLUSH_ABORT_STATUS)>>4)&0x7)!=0x7){
            if(logseq_drv_get_us_diff(s_tick) > WHOLE_SYS_TIMEOUT){
                rval |= LS_WHOLE_SYS_FLUSH_TIMEOUT;
                dhl_trace(TRACE_INFO, DHL_USER_FLAG_NONE, LS_WHOLESYS_FAILED,__FUNCTION__,__LINE__,ch_id,DRV_Reg32(LS_REG(ch_id,DSP_LS_EMI_REMAIN_SIZE)),\
                DRV_Reg32(LS_REG(ch_id,DSP_LS_L2_WRITE_ADDR)),DRV_Reg32(LS_REG(ch_id,DSP_LS_L2_READ_ADDR)), DRV_Reg32(LS_REG(ch_id,DSP_LS_L1_FLUSH_ABORT_STATUS)),\
				DRV_Reg32(LS_REG(ch_id, DSP_LS_ARB_SEL_PORT)));
                //LS_PRINT_DBG("[LS] ChID:%d whole system flush timeout", ch_id);
                break;
            }
        }
    }
#else 
#error "No chip matched, please check it."
#endif

    return rval;
}

kal_uint32 logseq_drv_stop_ex(kal_uint8 ch_id, kal_bool whole_sys_flush_en)
{
    kal_uint32 rval = LS_NO_ERROR;
	//check if exception happends without logseq_drv_init
	if(!(is_drv_init & (1<<ch_id))){
		rval = LS_EX_FAIL;
		return rval;
	}
	if(LSInternalInfo[ch_id].logseq_drv_lock != LS_NO_LOCK)
	{
		logseq_drv_api_unlock(ch_id);
	}
    // check restore status
    if(LSInternalInfo[ch_id].logseq_backup_sta == LS_RESTORE_BUSY || LSInternalInfo[ch_id].logseq_backup_sta == LS_BACKUP_BUSY){
        rval = LS_EX_FAIL;
        return rval;
    }
    else if(LSInternalInfo[ch_id].logseq_backup_sta == LS_BACKUP_SUCCESS)
        logseq_drv_resume(ch_id);
    else{}
    logeq_drv_add_abort_timeout_info(ch_id);
	//output the un-released data in queue
	logseq_drv_handle_unrls_emi_buf_ex(ch_id);
	//add trace for LS EMI remain size and l2 internal data sram
	if((DRV_Reg32(LS_REG(ch_id,DSP_LS_EMI_REMAIN_SIZE))) < 0x80)
	{
		dhl_trace(TRACE_INFO, DHL_USER_FLAG_NONE, LS_EMI_FULL,__FUNCTION__,__LINE__,ch_id,DRV_Reg32(LS_REG(ch_id,DSP_LS_EMI_REMAIN_SIZE)));
	}
	dhl_trace(TRACE_INFO, DHL_USER_FLAG_NONE, LS_DBG3,__FUNCTION__,__LINE__,ch_id,DRV_Reg32(LS_REG(ch_id,DSP_LS_EMI_REMAIN_SIZE)),DRV_Reg32(LS_REG(ch_id,DSP_LS_L2_WRITE_ADDR)),DRV_Reg32(LS_REG(ch_id,DSP_LS_L2_READ_ADDR)));
    // whole system flush, trigger PB to flush
    if(whole_sys_flush_en){
        DRV_SetReg32(LS_REG(ch_id, DSP_LS_RUN_TIME_MANAGE), 1);
        logseq_drv_handle_emi_buf_ex(ch_id);
//only Gen93 needs to delay 1 us to prevent from getting the temp L1_empty register.
#if defined(__MD93__)
        logseq_drv_delay_us(1000);//delay 1 ms
#endif
        rval |= logseq_drv_whole_sys_flush_done_ex(ch_id);
    }
    //	TODO: print the debug information before the whole system flush
    logeq_drv_add_abort_timeout_info(ch_id);
    dhl_trace(TRACE_INFO, DHL_USER_FLAG_NONE, LS_CLK_OFF,__FUNCTION__,__LINE__,ch_id,kal_get_current_task(),ust_get_current_time());
    // disable LS input
    DRV_SetReg32(LS_REG(ch_id, DSP_LS_RUN_TIME_MANAGE), 1 << 6);
	//add trace for LS EMI remain size and l2 internal data sram
	dhl_trace(TRACE_INFO, DHL_USER_FLAG_NONE, LS_DBG3,__FUNCTION__,__LINE__,ch_id,DRV_Reg32(LS_REG(ch_id,DSP_LS_EMI_REMAIN_SIZE)),DRV_Reg32(LS_REG(ch_id,DSP_LS_L2_WRITE_ADDR)),DRV_Reg32(LS_REG(ch_id,DSP_LS_L2_READ_ADDR)));
    // handle EMI buffer data
	logseq_drv_handle_emi_buf_ex(ch_id);
    // do LS flush(/abort)
    rval |= logseq_drv_flush_ex(ch_id);
    if(rval){
        rval |= logseq_drv_abort(ch_id);
    }
    // handle remaining data
	logseq_drv_handle_emi_buf_ex(ch_id);
    //	TODO: print the debug information before the whole system flush
    logeq_drv_add_abort_timeout_info(ch_id);
	//add trace for LS EMI remain size and l2 internal data sram
	dhl_trace(TRACE_INFO, DHL_USER_FLAG_NONE, LS_DBG3,__FUNCTION__,__LINE__,ch_id,DRV_Reg32(LS_REG(ch_id,DSP_LS_EMI_REMAIN_SIZE)),DRV_Reg32(LS_REG(ch_id,DSP_LS_L2_WRITE_ADDR)),DRV_Reg32(LS_REG(ch_id,DSP_LS_L2_READ_ADDR)));
    return rval;
}
static kal_uint32 logseq_drv_redump_ex(kal_uint8 ch_id){

	LOG_SEQ_Internal_Info *interInfo = &LSInternalInfo[ch_id];
	LOG_SEQ_Init_Info *initInfo = &LSInitInfo[ch_id];
	kal_uint32 rval = LS_NO_ERROR;
	kal_uint32 emi_write_align_addr,emi_base_addr,emi_buf_size;
	kal_uint32 addr_set1,len1 = 0;
	kal_uint32 addr_set2,len2 = 0;
	//check if exception happends without logseq_drv_init
	if(!(is_drv_init & (1<<ch_id))){
		rval = LS_EX_FAIL;
		return rval;
	}else{
		emi_write_align_addr = logseq_drv_get_write_align_addr(ch_id);
		emi_base_addr = DRV_Reg32(LS_REG(ch_id,DSP_LS_EMI_BASE_ADDR));
		emi_buf_size = DRV_Reg32(LS_REG(ch_id,DSP_LS_EMI_SIZE));
		if(emi_write_align_addr == 0){emi_write_align_addr = initInfo->ls_emi_base_addr;}
		if(DRV_Reg32(LS_REG(ch_id,DSP_LS_EMI_STATUS))&(1<<1) || interInfo->logseq_backup.ls_emi_wrapped){
		//EMI write address has been wrapped
			addr_set1 = emi_write_align_addr;
			len1= emi_base_addr+emi_buf_size - emi_write_align_addr;
			LSCallback.flush_ex_callback(ch_id, addr_set1, len1);
			dhl_trace(TRACE_INFO, DHL_USER_FLAG_NONE, LS_DBG2,__FUNCTION__,__LINE__,ch_id,addr_set1,len1);
			//LS_PRINT_DBG("[LS] lineno=%d, ch%d, addr1=%x, len1=%d",__LINE__,ch_id,addr_set1,len1);
		}
		if(emi_write_align_addr != emi_base_addr){//Prevent the emi_write_align_addr == emi_base_addr cases(len2 would be 0)
			addr_set2 = emi_base_addr;
			len2 = emi_write_align_addr - emi_base_addr;
			LSCallback.flush_ex_callback(ch_id, addr_set2, len2);
			dhl_trace(TRACE_INFO, DHL_USER_FLAG_NONE, LS_DBG2,__FUNCTION__,__LINE__,ch_id,addr_set2,len2);
			//LS_PRINT_DBG("[LS] lineno=%d, ch%d, addr2=%x, len2=%d",__LINE__,ch_id,addr_set2,len2);
		}
	}
	return rval;
}

kal_uint32 logseq_drv_stop_redump_ex(kal_uint8 ch_id, kal_bool whole_sys_flush_en)
{	
	kal_uint32 rval = LS_NO_ERROR;
	if(!(stop_ex_cnt&(1<<ch_id))){//user first call this API
		//logeq_drv_add_abort_timeout_info(ch_id);
		//logseq_drv_add_total_ptr_info(ch_id);//remove the debug inform for the early-log features.
		dhl_trace(TRACE_INFO, DHL_USER_FLAG_NONE, LS_DBG1,__FUNCTION__,__LINE__,ch_id,stop_ex_cnt);
		stop_ex_cnt |= (1<<ch_id);
		rval = logseq_drv_stop_ex(ch_id,whole_sys_flush_en);
	}else{//user call this API more than once.
		//logseq_drv_add_total_ptr_info(ch_id);
		dhl_trace(TRACE_INFO, DHL_USER_FLAG_NONE, LS_DBG1,__FUNCTION__,__LINE__,ch_id,stop_ex_cnt);
		dhl_trace(TRACE_INFO, DHL_USER_FLAG_NONE, LS_DBG3,__FUNCTION__,__LINE__,ch_id,DRV_Reg32(LS_REG(ch_id,DSP_LS_EMI_REMAIN_SIZE)),DRV_Reg32(LS_REG(ch_id,DSP_LS_L2_WRITE_ADDR)),DRV_Reg32(LS_REG(ch_id,DSP_LS_L2_WRITE_ADDR)));
		rval = logseq_drv_redump_ex(ch_id);
	}	
	return rval;
}



/***************************************/
/**          ISR handler              **/
/***************************************/

void logseq_lisr_mcu(kal_uint32 vector)
{
    IRQMask(IRQ_ULSP_LOG_MD_INT_CODE);
    if(KAL_TRUE == logseq_drv_api_try_lock(LS_MCU_CH, LS_IRQ_LOCK)){
    	if(LS_INSERT_FAIL == logseq_drv_handle_emi_buf(LS_MCU_CH)){
    		dhl_trace(TRACE_INFO, DHL_USER_FLAG_NONE, LS_ASSERT,__FUNCTION__,__LINE__,1,LS_INSERT_FAIL,0,0);
    		kal_mem_cpy(&dbgInfo[LS_MCU_CH],&LSInternalInfo[LS_MCU_CH],sizeof(LOG_SEQ_Internal_Info));
			LS_PRINT_ASSERT("[LS] Ch_id: 1, %s insert emi address is not continous!\r\n",__FUNCTION__);
    	}
    	logseq_drv_api_unlock(LS_MCU_CH);
    	kal_activate_hisr_index(LSInternalInfo[LS_MCU_CH].logseq_hisr);
        LSInternalInfo[LS_MCU_CH].g_lisr_count++;
    }

}

void logseq_hisr_mcu(void)
{
	if(LSInternalInfo[LS_MCU_CH].emi_mode_select == LS_STREAM_EMI){
	    LSInternalInfo[LS_MCU_CH].g_hisr_count++;
	    if(LSCallback.buffer_over_ths_callback)
			LSCallback.buffer_over_ths_callback(LS_MCU_CH);
    }
    IRQUnmask(IRQ_ULSP_LOG_MD_INT_CODE);
}

void logseq_lisr_dsp(kal_uint32 vector)
{
    IRQMask(IRQ_ULSP_LOG_DSP_INT_CODE);
    if(KAL_TRUE == logseq_drv_api_try_lock(LS_DSP_CH, LS_IRQ_LOCK)){
    	if(LS_INSERT_FAIL == logseq_drv_handle_emi_buf(LS_DSP_CH)){
    		dhl_trace(TRACE_INFO, DHL_USER_FLAG_NONE, LS_ASSERT,__FUNCTION__,__LINE__,0,LS_INSERT_FAIL,0,0);
    		kal_mem_cpy(&dbgInfo[LS_DSP_CH],&LSInternalInfo[LS_DSP_CH],sizeof(LOG_SEQ_Internal_Info));
			LS_PRINT_ASSERT("[LS] Ch_id: 0, %s insert emi address is not continous!\r\n",__FUNCTION__);
    	}
    	logseq_drv_api_unlock(LS_DSP_CH);
    	kal_activate_hisr_index(LSInternalInfo[LS_DSP_CH].logseq_hisr); 
        LSInternalInfo[LS_DSP_CH].g_lisr_count++;
    }

}
void logseq_hisr_dsp(void)
{
	if(LSInternalInfo[LS_DSP_CH].emi_mode_select == LS_STREAM_EMI){
	    LSInternalInfo[LS_DSP_CH].g_hisr_count++;
	    if(LSCallback.buffer_over_ths_callback){
			LSCallback.buffer_over_ths_callback(LS_DSP_CH);
		}
    }
    IRQUnmask(IRQ_ULSP_LOG_DSP_INT_CODE);
}

void logseq_drv_mask_irq(kal_uint8 ch_id)
{
    if(ch_id == LS_DSP_CH){
        IRQMask(IRQ_ULSP_LOG_DSP_INT_CODE);
    }
    else{
        IRQMask(IRQ_ULSP_LOG_MD_INT_CODE);
    }
}
void logseq_drv_unmask_irq(kal_uint8 ch_id)
{
    if(ch_id == LS_DSP_CH){
        IRQUnmask(IRQ_ULSP_LOG_DSP_INT_CODE);
    }
    else{
        IRQUnmask(IRQ_ULSP_LOG_MD_INT_CODE);
    }
}

kal_bool logseq_drv_api_try_lock(kal_uint8 ch_id, kal_uint32 lock)
{
 	if(LS_NO_LOCK == kal_atomic_compare_and_swap_return(&(LSInternalInfo[ch_id].logseq_drv_lock),LS_NO_LOCK,lock))
    	return KAL_TRUE;
	else
    	return KAL_FALSE;
}

kal_bool logseq_drv_api_get_lock(kal_uint8 ch_id, kal_uint32 lock)
{ 
	kal_uint32 ret = KAL_FALSE;
	
    do{
		ret = logseq_drv_api_try_lock(ch_id,lock); 
    }while(KAL_FALSE == ret);
     
    return KAL_TRUE;
    
}

void logseq_drv_api_unlock(kal_uint8 ch_id)
{
    kal_atomic_set(&LSInternalInfo[ch_id].logseq_drv_lock, LS_NO_LOCK);
}

// ==================== debug API ============================

void logseq_drv_get_wri_addr_and_len(kal_uint8 ch_id, LOG_SEQ_Thrs_Buf_Info* thrs_buf)
{
    LOG_SEQ_Init_Info *initInfo = & LSInitInfo[ch_id];
    LOG_SEQ_Internal_Info *interInfo = &LSInternalInfo[ch_id];
    kal_uint32 write_ptr;
    kal_uint32 base_addr = initInfo->ls_emi_base_addr;
    kal_uint32 buf_size = initInfo->ls_emi_size;
    kal_uint32 idx = 0,len = 0;
    kal_uint32 thrs_count = DRV_Reg32(LS_REG(ch_id, DSP_LS_EMI_THRESHOLD_COUNT));
    // if get no data, then return
    if(thrs_count < 128){
		thrs_buf->len = 0;
        return;
    }
    write_ptr = DRV_Reg32(LS_REG(ch_id, DSP_LS_EMI_WRITE_ADDR));
    idx = interInfo->logseq_read_idx;
    len = logseq_drv_cal_idx_distance(write_ptr-base_addr,interInfo->logseq_read_idx,buf_size);    
   	if(len == 0){ len = buf_size;}//when write_align_ptr == emi_read_ptr wrapped happened! length should be buffer size here
	logseq_drv_release_thrs_cnt(ch_id,len);
    interInfo->logseq_read_idx = write_ptr - base_addr;
	thrs_buf->addr = idx;
	thrs_buf->len = len;
    return;
	
}

void logseq_drv_get_addr_len_wrapping(kal_uint8 ch_id, LOG_SEQ_Thrs_Buf_Info *thrs_buf)
{
    kal_uint32 rls_size;
    LOG_SEQ_Init_Info *initInfo = &LSInitInfo[ch_id];
    LOG_SEQ_Internal_Info *interInfo = &LSInternalInfo[ch_id];
    kal_uint32 write_align_ptr = logseq_drv_get_write_align_addr(ch_id);
	kal_uint32 base_addr = initInfo->ls_emi_base_addr;
    kal_uint32 buf_size = initInfo->ls_emi_size;
    kal_uint32 packet_end_addr = (write_align_ptr==base_addr)?(write_align_ptr+buf_size):(write_align_ptr);
    kal_uint32 idx,len = 0;
    kal_uint32 thrs_count = DRV_Reg32(LS_REG(ch_id, DSP_LS_EMI_THRESHOLD_COUNT));
    if(write_align_ptr == 0){thrs_buf->len = 0; return;}
    // if get no data, then return
    if(interInfo->logseq_read_idx+base_addr == packet_end_addr){
    	thrs_buf->len = 0;
        return;
    }
    
    idx = interInfo->logseq_read_idx;
    len = (write_align_ptr - base_addr - interInfo->logseq_read_idx)%(buf_size);
    if(0 == initInfo->ls_emi_wrapping_mode_en){
        rls_size = len;
        if(rls_size > thrs_count){
            dhl_trace(TRACE_INFO, DHL_USER_FLAG_NONE, LS_RELEASE_THRS,__FUNCTION__,__LINE__,ch_id,rls_size,thrs_count);
            //LS_PRINT_DBG("[LS] ChID:%d rls_size > threshold_count! rls:(%x), thrs:(%x)", ch_id, rls_size, thrs_count);
        }
        // release threshold count to de-assert interrupt
        DRV_WriteReg32(LS_REG(ch_id, DSP_LS_EMI_THRESHOLD_RELEASE), rls_size);
    }
    interInfo->logseq_read_idx = write_align_ptr-base_addr;
	thrs_buf->addr = idx;
	thrs_buf->len = len;
    return;
}



kal_uint32 logseq_drv_get_emi_base(kal_uint8 ch_id)
{
    return LSInitInfo[ch_id].ls_emi_base_addr;
}

void logseq_drv_set_l2buf_output(kal_uint8 ch_id, kal_bool enable)
{
    if(enable)
        DRV_SetReg32(LS_REG(ch_id, DSP_LS_RUN_TIME_MANAGE), 1<<5);
    else
        DRV_ClrReg32(LS_REG(ch_id, DSP_LS_RUN_TIME_MANAGE), 1<<5);
}

void logseq_drv_resume_after_flush(kal_uint8 ch_id)
{
    DRV_SetReg32(LS_REG(ch_id, DSP_LS_RUN_TIME_MANAGE), 1<<2);
    while(DRV_Reg32(LS_REG(ch_id, DSP_LS_RUN_TIME_MANAGE)) & 1<<2);
}

void logseq_drv_resume_after_abort(kal_uint8 ch_id)
{
    DRV_SetReg32(LS_REG(ch_id, DSP_LS_RUN_TIME_MANAGE), 1<<1);
    while(DRV_Reg32(LS_REG(ch_id, DSP_LS_RUN_TIME_MANAGE)) & 1<<1);
}

//Use only when LS HW hang due to the abort timeout.
#if defined(__MD95__)
kal_uint32 logseq_drv_force_abort(kal_uint8 ch_id)
{
	kal_uint32 rval = LS_NO_ERROR;
	kal_uint32 s_tick = 0;
	DRV_SetReg32(LS_REG(ch_id, DSP_LS_RUN_TIME_MANAGE), 1<<8);
	while(!(DRV_Reg32(LS_REG(ch_id, DSP_LS_FLUSH_ABORT_STATUS))&1))
    {
        if(logseq_drv_get_us_diff(s_tick) > ABORT_TIMEOUT){
            rval = LS_FORCE_ABORT_FAIL;
            dhl_trace(TRACE_INFO, DHL_USER_FLAG_NONE, LS_ASSERT,__FUNCTION__,__LINE__,ch_id,rval,DRV_Reg32(LS_REG(ch_id, DSP_LS_FLUSH_ABORT_STATUS))&1,0);
			kal_mem_cpy(&dbgInfo[ch_id],&LSInternalInfo[ch_id],sizeof(LOG_SEQ_Internal_Info));
			//LS_PRINT_DBG("[LS] ChID:%d abort timeout", ch_id);
            break;
        }
    }
    return rval;
}
#endif

void logseq_drv_set_readptr_offset(kal_uint8 ch_id, kal_uint32 val)
{
	kal_uint32 buf_size=LSInitInfo[ch_id].ls_emi_size;
	LSInternalInfo[ch_id].logseq_read_idx = logseq_drv_cal_idx_increase(LSInternalInfo[ch_id].logseq_read_idx,val,buf_size);
	LSInternalInfo[ch_id].thrs_idx = logseq_drv_cal_idx_increase(LSInternalInfo[ch_id].thrs_idx,val,buf_size);
	LSInternalInfo[ch_id].logseq_rls_idx = logseq_drv_cal_idx_increase(LSInternalInfo[ch_id].logseq_rls_idx,val,buf_size);
    //LSInternalInfo[ch_id].logseq_read_idx += val;
}

kal_uint32 logseq_drv_get_lisr_count(kal_uint8 ch_id)
{
	return LSInternalInfo[ch_id].g_lisr_count;
}

kal_uint32* logseq_drv_get_emi_read_ptr(kal_uint8 ch_id)
{
	return &LSInternalInfo[ch_id].logseq_read_idx;
}

kal_uint32 logseq_drv_get_mode_select(kal_uint8 ch_id)
{
	return LSInternalInfo[ch_id].emi_mode_select;
}

kal_bool logseq_drv_get_emi_wrapping_bit(kal_uint8 ch_id)
{
	if((DRV_Reg32(LS_REG(ch_id,DSP_LS_EMI_STATUS))&(1<<1)) || (LSInternalInfo[ch_id].logseq_backup.ls_emi_wrapped)){
		return KAL_TRUE;
	}else{
		return KAL_FALSE;
	}
}

void logseq_drv_ls_hang_dbg_info(kal_uint8 ch_id){

	kal_uint32 i, j, val;
	dhl_trace(TRACE_INFO, DHL_USER_FLAG_NONE, LS_ABORT_FAILED,__FUNCTION__,__LINE__,ch_id,DRV_Reg32(LS_REG(ch_id,DSP_LS_RUN_TIME_MANAGE)),DRV_Reg32(LS_REG(ch_id,DSP_LS_FLUSH_ABORT_STATUS)));
	dhl_trace(TRACE_INFO, DHL_USER_FLAG_NONE, LS_CLK_STATUS,__FUNCTION__,__LINE__,ch_id,DRV_Reg32(0xA0150030),DRV_Reg32(0xA01C0004), DRV_Reg32(0xA01C000C));
	val = 0x11;
	for(i = 1; i<= 7; i++){
		DRV_WriteReg32(LS_REG(ch_id,DSP_LS_DBG_INFO),val*i);
		dhl_trace(TRACE_INFO, DHL_USER_FLAG_NONE,LS_DBG_REG,__FUNCTION__,__LINE__,ch_id,val*i,DRV_Reg32(LS_REG(ch_id,DSP_LS_DBG_INFO)));
		dbg_reg[ch_id].dbg_array[i-1] = DRV_Reg32(LS_REG(ch_id,DSP_LS_DBG_INFO));
	}
	for(i = 0; i<=0x80; i+=4){
		j = 0;
		val = (kal_uint32)(LS_REG(ch_id,DSP_LS_EMI_SIZE))+i;
		dbg_reg[ch_id].ls_reg[j] = DRV_Reg32(val);
		j++;
	}
	dhl_trace(TRACE_INFO, DHL_USER_FLAG_NONE, LS_DBG3,__FUNCTION__,__LINE__,ch_id,DRV_Reg32(LS_REG(ch_id,DSP_LS_EMI_REMAIN_SIZE)),DRV_Reg32(LS_REG(ch_id,DSP_LS_L2_WRITE_ADDR)),DRV_Reg32(LS_REG(ch_id,DSP_LS_L2_READ_ADDR)));	
	return;
}

