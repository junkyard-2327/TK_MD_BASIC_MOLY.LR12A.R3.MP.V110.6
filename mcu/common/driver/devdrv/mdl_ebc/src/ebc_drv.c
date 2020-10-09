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
 *      ebc_drv.c
 *
 * Project:
 * --------
 *      UMOLY
 *
 * Description:
 * ------------
 *      This module defines driver functions of mdl_ebc driver
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
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 *****************************************************************************//*
 * ebc_drv.c
 *
 *  Created on: 2014/6/10
 *      Author: MTK07117
 */
#include "cpu.h"
//#include "kal_debug.h"
#include "intrCtrl.h"
#include "drv_comm.h"
#include "coresonic_access_ctrl_public.h"
#include "md32_access_ctrl_public.h"
#include "ebc_drv.h"
#include "ebc_internal.h"
#include "mdl_logging.h"

//for build pass
#define IRQ_LTE_MODEMSYS_TRACE_CODE 255

// ================= define debug tool ===================
#ifdef DRV_DEBUG
#define	EBC_PRINT_LOG(string,...)	{}
#define	EBC_PRINT(string,...)	dbg_print((char*)string, ##__VA_ARGS__)
#define	EBC_PRINT_ASSERT(string,...)			\
do{												\
	dbg_print((char*)string, ##__VA_ARGS__);	\
	ASSERT(0);									\
}while(0)
#else
#define	EBC_PRINT_LOG(string,...)	dhl_print(TRACE_INFO, DHL_USER_FLAG_NONE, MOD_DHL_READER, (char*)string, ##__VA_ARGS__)
#define	EBC_PRINT(string,...)	dhl_print(TRACE_INFO, DHL_USER_FLAG_NONE, MOD_DHL_READER, (char*)string, ##__VA_ARGS__)
#define	EBC_PRINT_ASSERT(string,...)			\
do{												\
	dhl_print(TRACE_INFO, DHL_USER_FLAG_NONE,	\
			  MOD_DHL_READER, (char*)string,	\
			  ##__VA_ARGS__);					\
	ASSERT(0);									\
}while(0)
#endif
// ======================================================
//DRV_Reg32 ./pcore/interface/driver/peripheral/drv_comm.h
//IRQ_LTE_MODEMSYS_TRACE_CODE pcore/driver/devdrv/cirq/irqid_TK6291.h
//IRQ_LTE_MODEMSYS_TRACE_CODE pcore/driver/devdrv/cirq/intrCtrl_TK6291.h

// ------------- declare local variable ------------------
static EBC_Init_Info ebcInitInfo;
static kal_bool is_drv_init = KAL_FALSE;
static kal_uint32 ebc_flush_timeout = CPU_MS2PMUTICK(3000);
static EBC_HANDLE_RECORD ebcHandleRecord;
static EBC_CH_MAP fail_ch;
#ifdef DRV_DEBUG
static EBC_HISR_INFO g_ebc_hisr_info[10];
#endif // DRV_DEBUG
// ------------- declare global variable ------------------
char *mdl_name[] = {"RAKE MDL", "RXBRP MDL", "MPC MDL", "IMC MDL", "ICC MDL"};
char *mdp_name[] = {"MPC MDP", "IMC MDP", "ICC MDP"};
char *mtol_name[] = {"MPC MTOL", "IMC MTOL", "ICC MTOL"};
char *mdl2_name[] = {"DFE1 MDL","DFE2 MDL"};
// TODO: mapping base address to MDL registers structure
volatile kal_uint32 const MDL[] = {
	(volatile kal_uint32)MDL0_BASEADDR,
	(volatile kal_uint32)MDL1_BASEADDR,
	(volatile kal_uint32)MDL2_BASEADDR,
	(volatile kal_uint32)MDL3_BASEADDR,
	(volatile kal_uint32)MDL4_BASEADDR,
	(volatile kal_uint32)MDL5_BASEADDR,
	(volatile kal_uint32)MDL6_BASEADDR
};
const kal_int32 MDL_NUM = sizeof(MDL)/sizeof(kal_uint32);

volatile kal_uint32 const MDP[] = {
	(volatile kal_uint32)MDP0_BASEADDR,
	(volatile kal_uint32)MDP1_BASEADDR,
	(volatile kal_uint32)MDP2_BASEADDR
};
const kal_int32 MDP_NUM = sizeof(MDP)/sizeof(kal_uint32);

volatile kal_uint32 const MTOL[] = {
	(volatile kal_uint32)MTOL0_BASEADDR,
	(volatile kal_uint32)MTOL1_BASEADDR,
	(volatile kal_uint32)MTOL2_BASEADDR
};
const kal_int32 MTOL_NUM = sizeof(MTOL)/sizeof(kal_uint32);

kal_int32 g_ebc_lisr_count = 0;
kal_int32 g_ebc_hisr_count = 0;
kal_int32 g_ebc_irq_count = 0;
kal_int32 g_ebc_clr_bf_count = 0;

// ----- declare base address & start address table -------
// TODO: setting all channel base address & start address
const kal_uint32 emi_base_addr[] = {
	(kal_uint32)MDL_EMI_BUF_BASE_ADDR_REG(0),
	(kal_uint32)MDL_EMI_BUF_BASE_ADDR_REG(1),
	(kal_uint32)MDL_EMI_BUF_BASE_ADDR_REG(2),
	(kal_uint32)MDL_EMI_BUF_BASE_ADDR_REG(3),
	(kal_uint32)MDL_EMI_BUF_BASE_ADDR_REG(4),
	(kal_uint32)MDP_EMI_BUF_BASE_ADDR_REG(0),
	(kal_uint32)MDP_EMI_BUF_BASE_ADDR_REG(1),
	(kal_uint32)MDP_EMI_BUF_BASE_ADDR_REG(2),
	(kal_uint32)MTOL_EMI_BUF_BASE_ADDR_REG(0),
	(kal_uint32)MTOL_EMI_BUF_BASE_ADDR_REG(1),
	(kal_uint32)MTOL_EMI_BUF_BASE_ADDR_REG(2),
	(kal_uint32)MDL_EMI_BUF_BASE_ADDR_REG(5),
	(kal_uint32)MDL_EMI_BUF_BASE_ADDR_REG(6)
};

const kal_uint32 emi_start_addr[] = {
	(kal_uint32)MDL_EMI_BUF_START_ADDR_REG(0),
	(kal_uint32)MDL_EMI_BUF_START_ADDR_REG(1),
	(kal_uint32)MDL_EMI_BUF_START_ADDR_REG(2),
	(kal_uint32)MDL_EMI_BUF_START_ADDR_REG(3),
	(kal_uint32)MDL_EMI_BUF_START_ADDR_REG(4),
	(kal_uint32)MDP_EMI_BUF_START_ADDR_REG(0),
	(kal_uint32)MDP_EMI_BUF_START_ADDR_REG(1),
	(kal_uint32)MDP_EMI_BUF_START_ADDR_REG(2),
	(kal_uint32)MTOL_EMI_BUF_START_ADDR_REG(0),
	(kal_uint32)MTOL_EMI_BUF_START_ADDR_REG(1),
	(kal_uint32)MTOL_EMI_BUF_START_ADDR_REG(2),
	(kal_uint32)MDL_EMI_BUF_START_ADDR_REG(5),
	(kal_uint32)MDL_EMI_BUF_START_ADDR_REG(6)
};

// -------------- declare local function ------------------
void ebc_lisr(kal_uint32);
void ebc_hisr(void);

// ------------ declare static local function -------------
static kal_int32 ebc_drv_handle_power_down_data_ex(kal_int32 fail_ch);
static void ebc_drv_check_flush_abort_state_info_ex();
static void ebc_drv_check_ebcinfo_ex();
static void ebc_drv_check_log_buffer_full_ex();
static kal_int32 ebc_drv_handle_channel_remaining_data_ex(kal_uint32 i, kal_uint32 base_addr, kal_uint32 start_addr, kal_uint32 half_buf_sz);
static kal_int32 ebc_drv_handle_channel_buffer_full_ex(kal_int32 i, kal_uint32 base_addr, kal_uint32 start_addr, kal_uint32 half_buf_sz, kal_uint32 buf_full_sta);
static void ebc_drv_disable_log_port_ex(void);
// --------------------------------------------------------

static void ebc_drv_handle_record_init()
{
    kal_int32 i;
    ebcHandleRecord.IsEn = KAL_FALSE;
    for(i=0 ; i<EBC_CH_NUM ; i++)
    {
        ebcHandleRecord.ChRecord[i].buf_sz = 0;
        ebcHandleRecord.ChRecord[i].base_addr = 0;
        ebcHandleRecord.ChRecord[i].start_addr = 0;
        ebcHandleRecord.ChRecord[i].IsWrapped = KAL_FALSE;
    }
}

kal_int32 ebc_drv_init(EBC_Init_Info* pInitInfo)
{
	//ebcInitInfo = *pInitInfo;
	kal_mem_set(&ebcInitInfo, 0, sizeof(EBC_Init_Info));
	kal_mem_cpy(&ebcInitInfo, pInitInfo, sizeof(EBC_Init_Info));
	g_ebc_lisr_count = 0;
	g_ebc_hisr_count = 0;
	g_ebc_irq_count = 0;
	g_ebc_clr_bf_count = 0;
	ebc_drv_handle_record_init();
#ifdef DRV_DEBUG
    kal_mem_set(&g_ebc_hisr_info, 0, sizeof(EBC_HISR_INFO)*10);
#endif // DRV_DEBUG

	// enable ebc module & IRQ
	TEC_SET_TEC_RESET;
	TEC_CLK_EN;
	TEC_BUF_FULL_INT_EN;

	// initialize LISR, HISR
	if (is_drv_init == KAL_FALSE) {
		//IRQMask(IRQ_LTE_MODEMSYS_TRACE_CODE);
		//IRQSensitivity(IRQ_LTE_MODEMSYS_TRACE_CODE, LEVEL_SENSITIVE);
		//IRQ_Register_LISR(IRQ_LTE_MODEMSYS_TRACE_CODE, ebc_lisr, "EBCISR");
		is_drv_init = KAL_TRUE;
	}
	//IRQUnmask(IRQ_LTE_MODEMSYS_TRACE_CODE);
	return 0;
}

static void ebc_drv_disable_log_port_ex(void)
{	// disable each log port
	kal_int32 i;
	for(i = 0; i < MDL_HW_NUM; i++)
	{
		if(ebcInitInfo.ChEn.MDL_ALL & (1 << i))
			MDL_SET_MDL_PORT_DIS(i, 1);
	}
	// MDP, MTOL don't support port disable
    for(i = 0; i < MDL2_HW_NUM; i++)
	{
		if(ebcInitInfo.ChEn.MDL2_ALL & (1 << i))
			MDL_SET_MDL_PORT_DIS(i+MDL_HW_NUM, 1);
	}
}

static void ebc_drv_record_handled_buffer(kal_int32 i, kal_uint32 buf_sz, kal_uint32 start_addr, kal_uint32 base_addr)
{
    kal_uint8 wrapped = 0;
    ebcHandleRecord.ChRecord[i].buf_sz = buf_sz;
    ebcHandleRecord.ChRecord[i].base_addr = base_addr;
    ebcHandleRecord.ChRecord[i].start_addr = start_addr;
    if (ebcInitInfo.ChEn.ALL & (1 << i)){//if(KAL_TRUE == IsNormal){
        if(i < EBC_MDP_ID_BEGIN)
            ebcHandleRecord.ChRecord[i].IsWrapped = MDL_GET_MDL_EMI_BUF_WRAPPED(i);
        else if(i < EBC_MTOL_ID_BEGIN)
            ebcHandleRecord.ChRecord[i].IsWrapped = MDP_GET_EMI_BUF_WRAPPED(i-EBC_MDP_ID_BEGIN);
        else if(i < EBC_MDL2_ID_BEGIN)
            ebcHandleRecord.ChRecord[i].IsWrapped = MTOL_GET_EMI_BUF_WRAPPED(i-EBC_MTOL_ID_BEGIN);
        else
            ebcHandleRecord.ChRecord[i].IsWrapped = MDL_GET_MDL_EMI_BUF_WRAPPED(i-EBC_MDL2_ID_BEGIN+MDL_HW_NUM);
        EBC_PRINT_LOG("[EXC][EBC] ch%d record (buf_sz:%x), (base:%x), (start:%x) (wrap bit:%d)\r\n", i, buf_sz, base_addr, start_addr, ebcHandleRecord.ChRecord[i].IsWrapped);
    }
    else{
        if(GET_INFO_SUCCESS == MdlGetXXifWrap(i,&wrapped))
        {
            if(wrapped)
                ebcHandleRecord.ChRecord[i].IsWrapped = KAL_TRUE;
            else
                ebcHandleRecord.ChRecord[i].IsWrapped = KAL_FALSE;
            EBC_PRINT_LOG("[EXC][EBC] ch%d record(from XXIF) (buf_sz:%x), (base:%x), (start:%x) (wrap bit:%d)\r\n", i, buf_sz, base_addr, start_addr, ebcHandleRecord.ChRecord[i].IsWrapped);
        }
        else{
            EBC_PRINT_LOG("[EXC][EBC] ch%d get wrap info fail\r\n", i);
            ebcHandleRecord.ChRecord[i].IsWrapped = KAL_FALSE;
            EBC_PRINT_LOG("[EXC][EBC] ch%d record(from XXIF fail) (buf_sz:%x), (base:%x), (start:%x) (wrap bit:%d)\r\n", i, buf_sz, base_addr, start_addr, ebcHandleRecord.ChRecord[i].IsWrapped);
        }
    }
}

static kal_int32 ebc_drv_handle_channel_buffer_full_ex(kal_int32 i, kal_uint32 base_addr, kal_uint32 start_addr, kal_uint32 half_buf_sz, kal_uint32 buf_full_sta)
{
    kal_uint32 buf0_mask, buf1_mask, mid_addr;
	kal_uint32 is_buf0_full, is_buf1_full;
    kal_int32 result = EBC_NO_ERROR;

    buf0_mask 	 = 1 << (2*i + CH_ID_SHIFT_OFFSET);
	buf1_mask	 = 1 << (2*i + CH_ID_SHIFT_OFFSET + 1);
	is_buf0_full = buf_full_sta & buf0_mask;
	is_buf1_full = buf_full_sta & buf1_mask;

	mid_addr	 = base_addr + half_buf_sz;

	if(start_addr == base_addr)
	{
		if(is_buf0_full) //buf0 full
		{
		    EBC_PRINT_LOG("[EXC][EBC] ch%d callback(%x, %d):%d\r\n", i, base_addr, half_buf_sz, __LINE__);
			result |= ebcInitInfo.flush_callback_ex(i, base_addr, half_buf_sz);
			TEC_CLR_EMI_BUF_FULL_IRQ(buf0_mask);
			TEC_CLR_EMI_BUF_FULL_STA(buf0_mask);
			g_ebc_clr_bf_count++;
			ebc_drv_record_handled_buffer(i, half_buf_sz*2, start_addr, base_addr);
		}
		if(is_buf1_full) //buf1 full
		{
		    EBC_PRINT_LOG("[EXC][EBC] ch%d callback(%x, %d):%d\r\n", i, mid_addr, half_buf_sz, __LINE__);
			result |= ebcInitInfo.flush_callback_ex(i, mid_addr, half_buf_sz);
			TEC_CLR_EMI_BUF_FULL_IRQ(buf1_mask);
			TEC_CLR_EMI_BUF_FULL_STA(buf1_mask);
			g_ebc_clr_bf_count++;
			ebc_drv_record_handled_buffer(i, half_buf_sz*2, start_addr, base_addr);
		}
	}
	else if(start_addr < mid_addr)
	{
		if(is_buf1_full) //buf1 full
		{
		    EBC_PRINT_LOG("[EXC][EBC] ch%d callback(%x, %d):%d\r\n", i, mid_addr, half_buf_sz, __LINE__);
			result |= ebcInitInfo.flush_callback_ex(i, mid_addr, half_buf_sz);
			TEC_CLR_EMI_BUF_FULL_IRQ(buf1_mask);
			TEC_CLR_EMI_BUF_FULL_STA(buf1_mask);
			g_ebc_clr_bf_count++;
			ebc_drv_record_handled_buffer(i, half_buf_sz*2, start_addr, base_addr);
		}
		if(is_buf0_full)
		{	// error, buf0 full but buf1 not full
			EBC_PRINT("[EXC][EBC] ch%d wrong buf start addr(in buf0) or buf full state(%x)\r\n", i, buf_full_sta);
			return EBC_WRONG_START_ADDR_EX;
		}
	}
	else if(start_addr == mid_addr)
	{
		if(is_buf1_full) //buf1 full
		{
		    EBC_PRINT_LOG("[EXC][EBC] ch%d callback(%x, %d):%d\r\n", i, mid_addr, half_buf_sz, __LINE__);
			result |= ebcInitInfo.flush_callback_ex(i, mid_addr, half_buf_sz);
			TEC_CLR_EMI_BUF_FULL_IRQ(buf1_mask);
			TEC_CLR_EMI_BUF_FULL_STA(buf1_mask);
			g_ebc_clr_bf_count++;
			ebc_drv_record_handled_buffer(i, half_buf_sz*2, start_addr, base_addr);
		}
		if(is_buf0_full) //buf0 full
		{
		    EBC_PRINT_LOG("[EXC][EBC] ch%d callback(%x, %d):%d\r\n", i, base_addr, half_buf_sz, __LINE__);
			result |= ebcInitInfo.flush_callback_ex(i, base_addr, half_buf_sz);
			TEC_CLR_EMI_BUF_FULL_IRQ(buf0_mask);
			TEC_CLR_EMI_BUF_FULL_STA(buf0_mask);
			g_ebc_clr_bf_count++;
			ebc_drv_record_handled_buffer(i, half_buf_sz*2, start_addr, base_addr);
		}
	}
	else
	{
		if(is_buf0_full) //buf0 full
		{
		    EBC_PRINT_LOG("[EXC][EBC] ch%d callback(%x, %d):%d\r\n", i, base_addr, half_buf_sz, __LINE__);
			result |= ebcInitInfo.flush_callback_ex(i, base_addr, half_buf_sz);
			TEC_CLR_EMI_BUF_FULL_IRQ(buf0_mask);
			TEC_CLR_EMI_BUF_FULL_STA(buf0_mask);
			g_ebc_clr_bf_count++;
			ebc_drv_record_handled_buffer(i, half_buf_sz*2, start_addr, base_addr);
		}
		if(is_buf1_full)
		{	// error, buf1 full but buf0 not full
			EBC_PRINT("[EXC][EBC] ch%d wrong buf start addr(in buf1) or buf full state(%x)\r\n", i, buf_full_sta);
			return EBC_WRONG_START_ADDR_EX;
		}
	}
	return result;
}

kal_int32 ebc_drv_handle_buffer_full_ex()
{
	kal_uint32 start_addr, base_addr;
	kal_uint32 half_buf_sz;
	kal_uint32 buf_full_sta = TEC_GET_EMI_BUF_FULL_STA;
	kal_int32 i, result = EBC_NO_ERROR;

	// return, if ebc doesn't have any buffer full state
	if(buf_full_sta == 0)
		return result;

	for (i = EBC_CH_BEGIN; i < EBC_CH_NUM; i++)
    {
        if((ebcInitInfo.ChEn.ALL & (1 << i)) == 0) //skip masked channel
            continue;

        base_addr = EBC_get_ch_base_addr_ex(i);
        start_addr = EBC_get_ch_start_addr_ex(i);
        half_buf_sz = (ebcInitInfo.ChBuf[i].size)/2;

        result |= ebc_drv_handle_channel_buffer_full_ex(i, base_addr, start_addr, half_buf_sz, buf_full_sta);
    }
	return result;
}

static kal_int32 ebc_drv_handle_channel_remaining_data_ex(kal_uint32 i, kal_uint32 base_addr, kal_uint32 start_addr, kal_uint32 half_buf_sz)
{
    kal_int32 result = EBC_NO_ERROR;
    kal_uint32 mid_addr;

    mid_addr   = base_addr + half_buf_sz;

	if(start_addr == base_addr){}	    //start addr == buf0
	else if(start_addr < mid_addr){     //start addr in buf0
		EBC_PRINT_LOG("[EXC][EBC] ch%d callback(%x, %d):%d\r\n", i, base_addr, start_addr - base_addr, __LINE__);
		result |= ebcInitInfo.flush_callback_ex(i, base_addr, start_addr - base_addr);
		ebc_drv_record_handled_buffer(i, half_buf_sz*2, start_addr, base_addr);
	}
	else if(start_addr == mid_addr){}	//start addr == buf1
	else{ 							    //start addr in buf1
		EBC_PRINT_LOG("[EXC][EBC] ch%d callback(%x, %d):%d\r\n", i, mid_addr, start_addr - mid_addr, __LINE__);
		result |= ebcInitInfo.flush_callback_ex(i, mid_addr , start_addr - mid_addr );
		ebc_drv_record_handled_buffer(i, half_buf_sz*2, start_addr, base_addr);
    }
    return result;
}

kal_int32 ebc_drv_handle_remaining_data_ex()
{
	kal_uint32 base_addr, start_addr, half_buf_sz;
	kal_int32 i, result = EBC_NO_ERROR;

	// check buffer full state
	result = ebc_drv_handle_buffer_full_ex();
	if( result )
		return result;

	// handle the remain data
	for (i = EBC_CH_BEGIN; i < EBC_CH_NUM; i++)
    {
        if((ebcInitInfo.ChEn.ALL & (1 << i)) == 0) //skip masked channel
            continue;

		base_addr = EBC_get_ch_base_addr_ex(i);
        start_addr = EBC_get_ch_start_addr_ex(i);
        half_buf_sz = (ebcInitInfo.ChBuf[i].size)/2;

        result |= ebc_drv_handle_channel_remaining_data_ex(i, base_addr, start_addr, half_buf_sz);
	}
	return result;
}

void ebc_drv_flush_ex(void)
{
	kal_int32 i, active_ch = 0;
	// do flush, if logger is enable and never do flush and abort
	for(i = 0; i < MDL_HW_NUM; i++)
	{
		if((ebcInitInfo.ChEn.MDL_ALL & (1<<i)) && (!(MDL_GET_MDL_LBUF_FLUSH(i)|MDL_GET_MDL_LBUF_ABORT(i)))){
			MDL_SET_MDL_LBUF_FLUSH(i);
			active_ch |= 1 << (i + EBC_MDL_ID_BEGIN);
		}
	}
	for(i = 0; i < MDP_NUM; i++)
	{
		if((ebcInitInfo.ChEn.MDP_ALL & (1<<i)) && (!(MDP_GET_LBUF_FLUSH(i)|MDP_GET_LBUF_ABORT(i)))){
			MDP_SET_LBUF_FLUSH(i);
			active_ch |= 1 << (i + EBC_MDP_ID_BEGIN);
		}
	}
	for(i = 0; i < MTOL_NUM; i++)
	{
		if((ebcInitInfo.ChEn.MTOL_ALL & (1<<i)) && (!(MTOL_GET_LBUF_FLUSH(i)|MTOL_GET_LBUF_ABORT(i)))){
			MTOL_SET_LBUF_FLUSH(i);
			active_ch |= 1 << (i + EBC_MTOL_ID_BEGIN);
		}
	}
	for(i = 0; i < MDL2_HW_NUM; i++)
	{
		if((ebcInitInfo.ChEn.MDL2_ALL & (1<<i)) && (!(MDL_GET_MDL_LBUF_FLUSH(i+MDL_HW_NUM)|MDL_GET_MDL_LBUF_ABORT(i+MDL_HW_NUM)))){
			MDL_SET_MDL_LBUF_FLUSH(i+MDL_HW_NUM);
			active_ch |= 1 << (i + EBC_MDL2_ID_BEGIN);
		}
	}
	EBC_PRINT_LOG("[EXC][EBC] ch %x: flush operation launched\r\n", active_ch);
}

void ebc_drv_abort_ex(void)
{
	kal_int32 i, active_ch = 0;
	// do flush, if logger is enable and never do flush and abort
	for(i = 0; i < MDL_HW_NUM; i++)
	{
		if((ebcInitInfo.ChEn.MDL_ALL & (1<<i)) && (!MDL_GET_MDL_LBUF_ABORT(i))){
			MDL_SET_MDL_LBUF_ABORT(i);
			active_ch |= 1 << (i + EBC_MDL_ID_BEGIN);
		}
	}
	for(i = 0; i < MDP_NUM; i++)
	{
		if((ebcInitInfo.ChEn.MDP_ALL & (1<<i)) && (!MDP_GET_LBUF_ABORT(i))){
			MDP_SET_LBUF_ABORT(i);
			active_ch |= 1 << (i + EBC_MDP_ID_BEGIN);
		}
	}
	for(i = 0; i < MTOL_NUM; i++)
	{
		if((ebcInitInfo.ChEn.MTOL_ALL & (1<<i)) && (!MTOL_GET_LBUF_ABORT(i))){
			MTOL_SET_LBUF_ABORT(i);
			active_ch |= 1 << (i + EBC_MTOL_ID_BEGIN);
		}
	}
    for(i = 0; i < MDL2_HW_NUM; i++)
	{
		if((ebcInitInfo.ChEn.MDL2_ALL & (1<<i)) && (!MDL_GET_MDL_LBUF_ABORT(i+MDL_HW_NUM))){
			MDL_SET_MDL_LBUF_ABORT(i+MDL_HW_NUM);
			active_ch |= 1 << (i + EBC_MDL2_ID_BEGIN);
		}
	}
	EBC_PRINT_LOG("[EXC][EBC] ch %x: abort operation launched\r\n", active_ch);
}

kal_uint32 ebc_drv_get_flush_abort_state(void)
{
	kal_int32 i;
	EBC_CH_MAP ActiveCh = ebcInitInfo.ChEn;
	// check flush done, if logger is enable and do flush
	for(i = 0; i < MDL_HW_NUM; i++)
	{
		if( (ebcInitInfo.ChEn.MDL_ALL & (1<<i)) &&								// check channel enable
			(MDL_GET_MDL_LBUF_FLUSH_DONE(i)|MDL_GET_MDL_LBUF_ABORT_DONE(i)))	// check done flag
			ActiveCh.MDL_ALL &= ~(1<<i);
	}
	for(i = 0; i < MDP_NUM; i++)
	{
		if( (ebcInitInfo.ChEn.MDP_ALL & (1<<i)) &&								// check channel enable
			(MDP_GET_LBUF_FLUSH_DONE(i)|MDP_GET_LBUF_ABORT_DONE(i))) 			// check done flag
			ActiveCh.MDP_ALL &= ~(1<<i);
	}
	for(i = 0; i < MTOL_NUM; i++)
	{
		if( (ebcInitInfo.ChEn.MTOL_ALL & (1<<i)) &&								// check channel enable
			(MTOL_GET_LBUF_FLUSH_DONE(i)|MTOL_GET_LBUF_ABORT_DONE(i)))			// check done flag
			ActiveCh.MTOL_ALL &= ~(1<<i);
	}
    for(i = 0; i < MDL2_HW_NUM; i++)
	{
		if( (ebcInitInfo.ChEn.MDL2_ALL & (1<<i)) &&								// check channel enable
			(MDL_GET_MDL_LBUF_FLUSH_DONE(i+MDL_HW_NUM)|MDL_GET_MDL_LBUF_ABORT_DONE(i+MDL_HW_NUM)))	// check done flag
			ActiveCh.MDL2_ALL &= ~(1<<i);
	}
	return ActiveCh.ALL;
}

kal_int32 ebc_drv_flush_logger_ex(kal_uint32 timeout_tick)
{
	kal_int32 rval = EBC_NO_ERROR;
	kal_uint32 s_tick, e_tick, active_ch;
	// try to flush local buffer
	ebc_drv_flush_ex();
	cpu_event_counter_get_cycle(s_tick);
	while((active_ch = ebc_drv_get_flush_abort_state()))
	{
		cpu_event_counter_get_cycle(e_tick);
		if((e_tick - s_tick) > timeout_tick)
        {
			EBC_PRINT("[EXC][EBC] ch %x: flush timeout\r\n", active_ch);
			rval |= EBC_FLASH_TIMEOUT;
			break;
		}
		//check buffer full
		rval |= ebc_drv_handle_buffer_full_ex();
    }
	if(rval)
	{	// if flush timeout, try to abort local buffer
		ebc_drv_abort_ex();
		cpu_event_counter_get_cycle(s_tick);
		while((active_ch = ebc_drv_get_flush_abort_state()))
		{
			cpu_event_counter_get_cycle(e_tick);
			if((e_tick - s_tick) > timeout_tick)
			{
				EBC_PRINT("[EXC][EBC] ch %x: abort timeout\r\n", active_ch);
				rval |= EBC_ABORT_TIMEOUT; //Do not do following operation
				break;
			}
		}
		if(EBC_FLASH_TIMEOUT == rval)
            EBC_PRINT("[EXC][EBC] abort done\r\n");
	}
	// disable time-out channel
	ebcInitInfo.ChEn.ALL &= (~active_ch);
	return rval;
}

kal_int32 ebc_drv_debug_mdoe_en_ex()
{
    kal_uint32 i, ch_mask;
    fail_ch.ALL = ebcInitInfo.ChEn.ALL;
	// open debug mode
	Coresonic_C2CRF_Ctrl(C2CRF_ENABLE);
	INT_EnableMD32DBGEn();
	// check active logger is opened
	for(i = 0, ch_mask = 1; i < MDL_HW_NUM; i++, ch_mask <<= 1) {
		if((ebcInitInfo.ChEn.MDL_ALL & ch_mask) && MDL_GET_MDL_CON0_BEFORE_START(i) == 0) {
			ebcInitInfo.ChEn.MDL_ALL &= ~ch_mask;
		}
	}
	for(i = 0, ch_mask = 1; i < MDP_NUM; i++, ch_mask <<= 1) {
		if((ebcInitInfo.ChEn.MDP_ALL & ch_mask) && MDP_GET_CON1_BEFORE_START(i) == 0) {
			ebcInitInfo.ChEn.MDP_ALL &= ~ch_mask;
		}
	}
	for(i = 0, ch_mask = 1; i < MTOL_NUM; i++, ch_mask <<= 1) {
		if((ebcInitInfo.ChEn.MTOL_ALL & ch_mask) && MTOL_GET_CON_BEFORE_START(i) == 0) {
			ebcInitInfo.ChEn.MTOL_ALL &= ~ch_mask;
		}
	}
    for(i = 0, ch_mask = 1; i < MDL2_HW_NUM; i++, ch_mask <<= 1) {
		if((ebcInitInfo.ChEn.MDL2_ALL & ch_mask) && MDL_GET_MDL_CON0_BEFORE_START(i + MDL_HW_NUM) == 0) {
			ebcInitInfo.ChEn.MDL2_ALL &= ~ch_mask;
		}
	}
	// calculate failed channel
	fail_ch.ALL = fail_ch.ALL ^ ebcInitInfo.ChEn.ALL;
	if( fail_ch.ALL ) {
		EBC_PRINT("[EXC][EBC] ch map: %x failed to open debug mode\r\n", fail_ch);
		return EBC_DBG_MODE_EN_FAIL;
	}
	return EBC_NO_ERROR;
}

static void ebc_drv_check_log_buffer_full_ex()
{	// check log buffer full before handling exception flow
	kal_int32 i;
	for(i = 0; i < MDL_HW_NUM; i++)
	{
		if( (MDL_GET_EMI_BUF0_FULL(i)) && (MDL_GET_EMI_BUF1_FULL(i)) )
        {
            EBC_PRINT_LOG("[EXC][EBC] ch%d %s : EMI buffer is full!!! Log may be lost or incomplete!\r\n", i, mdl_name[i]);
        }
	}
	for(i = 0; i < MDP_NUM; i++)
    {
        if( (MDP_GET_EMI_BUF0_FULL(i)) && (MDP_GET_EMI_BUF1_FULL(i)) )
        {
            EBC_PRINT_LOG("[EXC][EBC] ch%d %s : EMI buffer is full!!! Log may be lost or incomplete!\r\n", i + EBC_MDP_ID_BEGIN, mdp_name[i]);
        }
    }
    for(i = 0; i < MTOL_NUM; i++)
    {
        if( (MTOL_GET_EMI_BUF0_FULL(i)) && (MTOL_GET_EMI_BUF1_FULL(i)) )
        {
            EBC_PRINT_LOG("[EXC][EBC] ch%d %s : EMI buffer is full!!! Log may be lost or incomplete!\r\n", i + EBC_MTOL_ID_BEGIN, mtol_name[i]);
        }
    }
    for(i = 0; i < MDL2_HW_NUM; i++)
	{
		if( (MDL_GET_EMI_BUF0_FULL(i+MDL_HW_NUM)) && (MDL_GET_EMI_BUF1_FULL(i+MDL_HW_NUM)) )
        {
            EBC_PRINT_LOG("[EXC][EBC] ch%d %s : EMI buffer is full!!! Log may be lost or incomplete!\r\n", i + EBC_MDL2_ID_BEGIN, mdl2_name[i]);
        }
	}
}

static void ebc_drv_check_ebcinfo_ex()
{
    kal_int32 i,ch_active;
    EBC_CH_MAP val,val_clk,val_start;
    val.ALL = 0;
    val_clk.ALL = 0;
    val_start.ALL = 0;
    for(i = 0, ch_active = 1; i < MDL_HW_NUM; i++, ch_active <<= 1) {
        if(ebcInitInfo.ChEn.MDL_ALL & ch_active){
            if( 0 == MDL_GET_MDL_CLOCK(i) ) {
                val_clk.MDL_ALL |= ch_active;
            }
            if( 1 == MDL_GET_MDL_START(i) && 1 == MDL_GET_MDL_OUTPUT_TO_EMI(i)) {
                val_start.MDL_ALL |= ch_active;
            }
        }
	}
	for(i = 0, ch_active = 1; i < MDP_NUM; i++, ch_active <<= 1) {
        if(ebcInitInfo.ChEn.MDP_ALL & ch_active){
            if( 0 == MDP_GET_CLOCK(i)) {
                val_clk.MDP_ALL |= ch_active;
            }
            if( 1 == MDP_GET_START(i) && 1 == MDP_GET_OUTPUT_TO_EMI(i)) {
                val_start.MDP_ALL |= ch_active;
            }
        }
	}
	for(i = 0, ch_active = 1; i < MTOL_NUM; i++, ch_active <<= 1) {
        if(ebcInitInfo.ChEn.MTOL_ALL & ch_active){
            if( 0 == MTOL_GET_CLOCK(i) ) {
                val_clk.MTOL_ALL |= ch_active;
            }
            if( 1 == MTOL_GET_START(i) && 1 == MTOL_GET_OUTPUT_TO_EMI(i)) {
                val_start.MTOL_ALL |= ch_active;
            }
        }
	}
    for(i = 0, ch_active = 1; i < MDL2_HW_NUM; i++, ch_active <<= 1) {
        if(ebcInitInfo.ChEn.MDL2_ALL & ch_active){
            if( 0 == MDL_GET_MDL_CLOCK(i+MDL_HW_NUM) ) {
                val_clk.MDL2_ALL |= ch_active;
            }
            if( 1 == MDL_GET_MDL_START(i+MDL_HW_NUM) && 1 == MDL_GET_MDL_OUTPUT_TO_EMI(i+MDL_HW_NUM)) {
                val_start.MDL2_ALL |= ch_active;
            }
        }
	}
	val.ALL = val_clk.ALL & val_start.ALL;
    if(ebcInitInfo.ChEn.ALL != val.ALL){
        EBC_PRINT_LOG("[EXC][EBC] active channel and ebcinfo are inconsistent. ebcinfo_ChEn: %x\r\n", ebcInitInfo.ChEn.ALL);
        EBC_PRINT_LOG("[EXC][EBC] active_ch: %x ; clk_on_ch: %x ; start_ch: %x\r\n", val.ALL, val_clk.ALL, val_start.ALL);
    }
    fail_ch.ALL |= ebcInitInfo.ChEn.ALL & (~val.ALL); //record fail channel
    ebcInitInfo.ChEn.ALL &= ~fail_ch.ALL; //disable ebc enable channel
}

static void ebc_drv_check_flush_abort_state_info_ex()
{
    kal_int32 i,ch_active;
    EBC_CH_MAP flush_state, abort_state;
    flush_state.ALL = 0;
    abort_state.ALL = 0;

	// do flush, if logger is enable and never do flush and abort
	for(i = 0, ch_active = 1; i < MDL_HW_NUM; i++, ch_active <<= 1)
	{
        if( MDL_GET_MDL_LBUF_FLUSH_DONE(i) )
            flush_state.MDL_ALL |= ch_active;
        if( MDL_GET_MDL_LBUF_ABORT_DONE(i) )
            abort_state.MDL_ALL |= ch_active;
	}
	for(i = 0, ch_active = 1; i < MDP_NUM; i++, ch_active <<= 1)
	{
		if( MDP_GET_LBUF_FLUSH_DONE(i) )
			flush_state.MDP_ALL |= ch_active;
        if( MDP_GET_LBUF_ABORT_DONE(i) )
            abort_state.MDP_ALL |= ch_active;
	}
	for(i = 0, ch_active = 1; i < MTOL_NUM; i++, ch_active <<= 1)
	{
        if( MTOL_GET_LBUF_FLUSH_DONE(i) )
            flush_state.MTOL_ALL |= ch_active;
        if( MTOL_GET_LBUF_ABORT_DONE(i) )
            abort_state.MTOL_ALL |= ch_active;
	}
    for(i = 0, ch_active = 1; i < MDL2_HW_NUM; i++, ch_active <<= 1)
	{
        if( MDL_GET_MDL_LBUF_FLUSH_DONE(i+MDL_HW_NUM) )
            flush_state.MDL2_ALL |= ch_active;
        if( MDL_GET_MDL_LBUF_ABORT_DONE(i+MDL_HW_NUM) )
            abort_state.MDL2_ALL |= ch_active;
	}
	EBC_PRINT_LOG("[EXC][EBC] flush done state: %x ; abort done state: %x\r\n", flush_state.ALL, abort_state.ALL);
}


static kal_int32 ebc_drv_handle_power_down_data_ex(kal_int32 fail_ch)
{
    kal_uint32 base_addr, start_addr, buf_sz;
    kal_int32 i;
    kal_int32 result = EBC_NO_ERROR;

    EBC_PRINT_LOG("[EXC][EBC] ch :%x handle power down data.\r\n", fail_ch);

    kal_uint32 buf_full_sta = TEC_GET_EMI_BUF_FULL_STA;
    for(i = 0; i < MDL_HW_NUM; i++){
	    if(!(fail_ch & (1 << i + EBC_MDL_ID_BEGIN)))
			continue;
        if(GET_INFO_SUCCESS == MdlGetXXifInfo(i + EBC_MDL_ID_BEGIN, &buf_sz, &base_addr, &start_addr)){
            EBC_PRINT_LOG("[EXC][EBC] ch:%d get info from XXif.\r\n", i + EBC_MDL_ID_BEGIN);

            result |= ebc_drv_handle_channel_buffer_full_ex(i + EBC_MDL_ID_BEGIN, base_addr, start_addr, buf_sz/2, buf_full_sta);

            result |= ebc_drv_handle_channel_remaining_data_ex(i + EBC_MDL_ID_BEGIN, base_addr, start_addr, buf_sz/2);
        }
        else{
            EBC_PRINT_LOG("[EXC][EBC] ch:%d fail to get info from XXif.\r\n", i + EBC_MDL_ID_BEGIN);
        }
	}
    for(i = 0; i < MDL2_HW_NUM; i++){
	    if(!(fail_ch & (1 << i + EBC_MDL2_ID_BEGIN)))
			continue;
        if(GET_INFO_SUCCESS == MdlGetXXifInfo(i + EBC_MDL2_ID_BEGIN, &buf_sz, &base_addr, &start_addr)){
            EBC_PRINT_LOG("[EXC][EBC] ch:%d get info from XXif.\r\n", i + EBC_MDL2_ID_BEGIN);

            result |= ebc_drv_handle_channel_buffer_full_ex(i + EBC_MDL2_ID_BEGIN, base_addr, start_addr, buf_sz/2, buf_full_sta);

            result |= ebc_drv_handle_channel_remaining_data_ex(i + EBC_MDL2_ID_BEGIN, base_addr, start_addr, buf_sz/2);
        }
        else{
            EBC_PRINT_LOG("[EXC][EBC] ch:%d fail to get info from XXif.\r\n", i + EBC_MDL2_ID_BEGIN);
        }
	}
	if(result)
        result = EBC_HANDLE_POWER_DOWN_DATA_FAIL;
	return result;
}


kal_int32 ebc_drv_stop_normal_ex(void)
{
    kal_int32 rval = EBC_NO_ERROR;

    EBC_PRINT_LOG("[EXC][EBC] Enter ebc_drv_stop_ex\r\n");

	// 1. open logger system debug mode
	rval |= ebc_drv_debug_mdoe_en_ex();

    // get fail channel, and mask it
    ebc_drv_check_ebcinfo_ex();

    // show the result of DSP flush status for each channel
    ebc_drv_check_flush_abort_state_info_ex();

	// 2. disable log port of all channel
	ebc_drv_disable_log_port_ex();

    //  check whether ping-pong buffers are full for each channel, if yes, show log to tell users their log may be lost
	ebc_drv_check_log_buffer_full_ex();

	// 3. to transmit EMI log data, if EMI buffer is full
	EBC_PRINT_LOG("[EXC][EBC] handle buffer before flush\r\n");
	rval |= ebc_drv_handle_buffer_full_ex();

	// 4. flush MDL local buffer
	rval |= ebc_drv_flush_logger_ex(ebc_flush_timeout);

	// 5. to transmit the remained data
	EBC_PRINT_LOG("[EXC][EBC] handle buffer after flush\r\n");
	rval |= ebc_drv_handle_remaining_data_ex();

    // if fail channels occur, do handle power down data
    // [MOLY00134636] new feature requested by ST
    if(fail_ch.ALL){
        EBC_PRINT_LOG("[EXC][EBC] do power_down flush\r\n");
        rval |= ebc_drv_handle_power_down_data_ex(fail_ch.ALL);
    }

    EBC_PRINT_LOG("[EXC][EBC] Exit ebc_drv_stop_ex\r\n");

	return rval;
}

static kal_int32 ebc_drv_stop_log_redump_ex()
{
    kal_int32 i, rval = EBC_NO_ERROR;
    kal_uint32 buf_sz, start_addr, base_addr, mid_addr;
    for(i=0 ; i < EBC_CH_NUM ; i++)
    {
        if(0 != ebcHandleRecord.ChRecord[i].buf_sz){
            buf_sz = ebcHandleRecord.ChRecord[i].buf_sz;
            mid_addr = ebcHandleRecord.ChRecord[i].start_addr + buf_sz/2;
            start_addr = ebcHandleRecord.ChRecord[i].start_addr;
            base_addr = ebcHandleRecord.ChRecord[i].base_addr;
            EBC_PRINT_LOG("[EXC][EBC] ch%d :(buf_sz:%d), (base:%x), (start:%x), (wrap bit:%d)\r\n", i, buf_sz, base_addr, start_addr, ebcHandleRecord.ChRecord[i].IsWrapped);
            if(start_addr == base_addr){
                if(KAL_TRUE == ebcHandleRecord.ChRecord[i].IsWrapped)
                    rval |= ebcInitInfo.flush_callback_ex(i, base_addr, buf_sz);
            }
            else if(start_addr < mid_addr){
                if(KAL_TRUE == ebcHandleRecord.ChRecord[i].IsWrapped)
                    rval |= ebcInitInfo.flush_callback_ex(i, start_addr, buf_sz - (start_addr - base_addr));
                rval |= ebcInitInfo.flush_callback_ex(i, base_addr, start_addr - base_addr);
            }
            else if(start_addr == mid_addr){
                if(KAL_TRUE == ebcHandleRecord.ChRecord[i].IsWrapped)
                    rval |= ebcInitInfo.flush_callback_ex(i, mid_addr, buf_sz/2);
                rval |= ebcInitInfo.flush_callback_ex(i, base_addr, buf_sz/2);
            }
            else{
                if(KAL_TRUE == ebcHandleRecord.ChRecord[i].IsWrapped)
                    rval |= ebcInitInfo.flush_callback_ex(i, start_addr, buf_sz - (start_addr - base_addr));
                rval |= ebcInitInfo.flush_callback_ex(i, base_addr, start_addr - base_addr);
            }
        }
    }
    return rval;
}

kal_int32 ebc_drv_stop_ex(void)
{
    kal_int32 rval = EBC_NO_ERROR;
    if(ebcHandleRecord.IsEn == KAL_TRUE)    //for DHL to redump log to user
        rval = ebc_drv_stop_log_redump_ex();
    else{                                   // normal exception flow
        ebcHandleRecord.IsEn = KAL_TRUE;
        rval = ebc_drv_stop_normal_ex();
    }
    return rval;
}

void ebc_drv_unmask_cirq(void)
{
	//IRQUnmask(IRQ_LTE_MODEMSYS_TRACE_CODE);
}

kal_uint32 ebc_drv_get_buf_full_state(void)
{
	return (TEC_GET_EMI_BUF_FULL_STA >> CH_ID_SHIFT_OFFSET);
}

kal_uint32 ebc_drv_clr_buf_full_state(kal_uint32 BufMap)
{
	TEC_CLR_EMI_BUF_FULL_STA(BufMap<<CH_ID_SHIFT_OFFSET);
	// wait for synchronizing between MDL and TEC
//	if(BufMap & TEC_GET_EMI_BUF_FULL_ASYNC)
//		kal_sleep_task(10);
	// return synchronization result
	return ((BufMap<<CH_ID_SHIFT_OFFSET) & TEC_GET_EMI_BUF_FULL_ASYNC);
}

kal_uint32 ebc_drv_get_active_ch_ex()
{
	return ebcInitInfo.ChEn.ALL;
}

kal_uint32 EBC_get_ch_base_addr_ex(kal_int32 ChID)
{
	kal_uint32 rval;
	rval = DRV_Reg32(emi_base_addr[ChID]);
	// check the base address register = initial value?
	if(rval != ebcInitInfo.ChBuf[ChID].base_addr){
		EBC_PRINT("[EXC][EBC] ch%d Init buf_addr(%x) != reg(%x)\n\r", ChID, ebcInitInfo.ChBuf[ChID].base_addr, rval);
		ebcInitInfo.ChEn.ALL &= ~(1<<ChID);
	}
	return rval;
}

kal_uint32 EBC_get_ch_start_addr_ex(kal_int32 ChID)
{
	return DRV_Reg32(emi_start_addr[ChID]);
}

 void ebc_lisr(kal_uint32 vector)
{
	//IRQMask(IRQ_LTE_MODEMSYS_TRACE_CODE);
	//kal_activate_hisr_index(EBC_HISR);
	g_ebc_lisr_count++;
}

inline kal_int32 ebc_get_bits_num(kal_uint32 val)
{
	val = val - ((val >> 1) & 0x55555555);
 	val = (val & 0x33333333) + ((val >> 2) & 0x33333333);
 	val = ((val + (val >> 4)) & 0x0F0F0F0F);
 	return (val * 0x01010101) >> 24;
}

void ebc_hisr()
{
	kal_uint32 buf_full_irq = TEC_GET_EMI_BUF_FULL_IRQ;
	// Record IRQ count
#ifdef DRV_DEBUG
	g_ebc_irq_count += ebc_get_bits_num(buf_full_irq);
	g_ebc_hisr_info[g_ebc_hisr_count%10].hisr_number = g_ebc_hisr_count;
	g_ebc_hisr_info[g_ebc_hisr_count%10].buf_full_irq = buf_full_irq;
#endif

	TEC_CLR_EMI_BUF_FULL_IRQ(buf_full_irq);

    // call callback function
	if (ebcInitInfo.buffer_full_callback)
		ebcInitInfo.buffer_full_callback();

    g_ebc_hisr_count++;

	// according to init setting to un-mask cirq
	if (!(ebcInitInfo.OptionFlag & EBC_OPT_NO_UNMASK_IRQ)){}
		//IRQUnmask(IRQ_LTE_MODEMSYS_TRACE_CODE);

#if defined(__UNIFIED_ISR_LEVEL__)
	//IRQMask(IRQ_LTE_MODEMSYS_TRACE_CODE);
#endif
}
