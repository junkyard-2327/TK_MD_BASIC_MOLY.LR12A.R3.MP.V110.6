/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2012
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

/*******************************************************************************
 * Filename:
 * ---------
 *   uart.c
 *
 * Project:
 * --------
 *   TATAKA
 *
 * Description:
 * ------------
 *   This Module defines the uart1 driver and the adaption layer
 *   between driver and TATAKA protocol.
 * Author:
 * -------
 * -------
 * -------
 * -------
 *
 * ==========================================================================
 * $Log$
 *
 * 11 21 2017 shenghui.shi
 * [MOLY00290848] [UMOLYA] Usage of INT_SW_SecVersion
 * remove INT_SW_SecVersion API from UART driver. This API is not used in 93/95
 *
 * 11 13 2017 shenghui.shi
 * [MOLY00288866] [Gen93][HISR] Enable HISR Init Centralization
 * UMOLYA HISR coding change for UART part
 *
 * 11 03 2017 shenghui.shi
 * [MOLY00287577] UMOLYA HISR coding change for UART part
 * .
 * 11 07 2017 shenghui.shi
 * [MOLY00288093] update UART driver to remove no needed project option
 * fix build error
 *
 * 11 07 2017 shenghui.shi
 * [MOLY00288093] update UART driver to remove no needed project option
 * fix build error
 *
 * 11 07 2017 shenghui.shi
 * [MOLY00288093] update UART driver to remove no needed project option
 * update uart driver to remove no needed project option
 *
 * 10 24 2017 yao.xue
 * [MOLY00284920] [Cervino] UART driver porting for Cervino.
 *
 * 09 15 2017 da.li
 * [MOLY00270315] [System Service][KIR] make ex robust before ex steplog work
 * Replace INT_QueryExceptionStatus  with #include <ex_public.h>.
 *
 * 09 08 2017 da.li
 * [MOLY00274163] [Sylvia] Driver porting
 * Build warning(error) fix.
 *
 * 09 07 2017 da.li
 * [MOLY00274163] [Sylvia] Driver porting
 * UART driver porting for Sylvia.
 *
 * 07 13 2017 shenghui.shi
 * [MOLY00263518] Update UART driver test code
 * fix build error
 *
 * 07 13 2017 shenghui.shi
 * [MOLY00263518] Update UART driver test code
 * update UART driver
 *
 * 06 12 2017 flamingo.wang
 * [MOLY00244966] [ZION][IDC] add chip define of MT6739 in idc driver
 * Add MT6739 define
 *
 * 06 12 2017 flamingo.wang
 * [MOLY00254599] Normal mode UARTDriver���ܳ�Log
 * norm uart mode print log fix
 *
 * 04 24 2017 shenghui.shi
 * [MOLY00243727] update UART PDN feature
 * update UART pdn feature,to void system could not entry DCM issue.
 *
 * 03 07 2017 shenghui.shi
 * [MOLY00233604] UART print driver update for baudrate
 * update UART driver for uart include.
 *
 * 02 07 2017 shenghui.shi
 * [MOLY00228102] [Bianco Bring-up]UMOLYA uart driver update
 * update UART dbgprint driver
 *
 * 09 22 2016 yuke.ren
 * [MOLY00204183] Fix UART HDMA usage
 * set RX SEL for RX channel
 *
 *
 * 09 20 2016 yuke.ren
 * [MOLY00204183] Fix UART HDMA usage
 * .
 *
 * 07 15 2016 shenghui.shi
 * [MOLY00171995] update uart driver for 93
 * update UART cloclk to 26MHz  (after GEN93 Bitfile 2016071380)
 *
 * 05 19 2016 shenghui.shi
 * [MOLY00175766] NVRAM update for UMOLYA
 * modify UART 26MHz macro to 20.8MHz to match real clock freq.
 *
 * 03 30 2016 shenghui.shi
 * [MOLY00171995] update uart driver for 93
 * update uart driver for 93.
 *
 * 01 27 2016 shenghui.shi
 * [MOLY00081492] [UART] update uart driver
 * use sst_get_exception_count() to replace INT_Exception_Enter.
 *
 * 01 22 2016 shenghui.shi
 * [MOLY00162415] [Coverity inspect] driver coding issue fix
 * [coverity inspect]driver coding issue fix
 *
 * 01 15 2016 shenghui.shi
 * [MOLY00081492] [UART] update uart driver
 * Merging
 * 	
 * update UART debug driver to use HMDA mode.
 *
 * 10 13 2015 shenghui.shi
 * [MOLY00145129] fixed EWS build error which caused by UART IRQ naming exchange on ELBRUS
 * .
 *
 * 10 13 2015 shenghui.shi
 * [MOLY00145129] fixed EWS build error which caused by UART IRQ naming exchange on ELBRUS
 * .
 *
 * 08 17 2015 shenghui.shi
 * [MOLY00137551] [MOLY_LINUX_DOWNLOADBIN notify] ELBRUS_FPGA(BASIC) build error
 * <saved by Perforce>
 *
 * 06 18 2015 da.li
 * [MOLY00121478] [UMOLY][JADE]UART driver compile error fix
 * Compile error fix on JADE(MT6755).
 *
 * 06 15 2015 da.li
 * [MOLY00121478] [UMOLY][JADE]UART driver compile error fix
 * UART driver compile error fix on MT6755(JADE).
 *
 * 05 11 2015 shenghui.shi
 * [MOLY00081492] [UART] update uart driver
 * pdn clear UART/GDMA clock before use UART driver
 *
 * 04 02 2015 tero.jarkko
 * [MOLY00094214] [System Service][MOLY Kernel Internal Request]Modify driver HISR to individual HISR
 *
 * 03 25 2015 shenghui.shi
 * [MOLY00104131] [UMOLY][Klocwork] Fix potential code defect in uart driver
 * .
 *
 * 02 11 2015 shenghui.shi
 * [MOLY00081492] [UART] update uart driver
 * fix ews build error
 *
 * 02 11 2015 shenghui.shi
 * [MOLY00081492] [UART] update uart driver
 * 1. add sw escape feature to UMOLY
 * 2. phase out VFIFO hw code in devdrv_common.c
 *
 * 12 18 2014 shenghui.shi
 * [MOLY00081492] [UART] update uart driver
 * .
 *
 * 11 17 2014 shenghui.shi
 * [MOLY00084720] update UMOLY HDMA HISR
 * move GDMA2 to DEVDRV share HISR
 *
 * 11 17 2014 shenghui.shi
 * [MOLY00084720] update UMOLY HDMA HISR
 * .
 *
 * 05 13 2014 shenghui.shi
 * [MOLY00062001] TK6291 UART Fix EWS error
 * .
 *
 * 05 13 2014 shenghui.shi
 * [MOLY00065467] [TK6291] update UART driver for TK6291
 * update UART clock to 26MHZ for TK6291
 *
 * 04 08 2014 shenghui.shi
 * [MOLY00062001] TK6291 UART Fix EWS error
 * .
 *
 * 04 08 2014 shenghui.shi
 * [MOLY00062003] [MakeFile] [Modify Common Makefile] Disable __CUST_NEW__
 * update a patch for no __FPGA__ macro
 *
 * 04 08 2014 shenghui.shi
 * [MOLY00062001] TK6291 UART Fix EWS error
 * update uart driver to fix ews error
 *
 * 01 10 2014 shenghui.shi
 * [MOLY00043671] [klocwork_95][LTE] in uart.c, line 428
 * .
 *
 * 01 10 2014 shenghui.shi
 * [MOLY00043674] [klocwork_95][LTE] in uart.c, line 2247
 * update uart driver to fix uninitial risk.
 *
 * 01 09 2014 shenghui.shi
 * [MOLY00052974] MT6595 UART driver merge to Trunk
 * MT6595 uart driver merge to MOLY TRUNK
 *
 * 12 10 2013 shenghui.shi
 * [MOLY00049628] MT6595 UART merge to Trunk
 * .
 *
 * 10 29 2013 shenghui.shi
 * [MOLY00044172] uart all memory dump
 * .
 *
 * 10 02 2013 vend_brandon-hy.lin
 * [MOLY00040071] [MT6290] SRCLKEN cannot be toggled when LTE sleep feature is enable
 * Fix SRCLEN_OUT0 cannot be toggle when LTE sleep feature is enable.
 * Solution: enlarge transmission time of dummy fdma patch.
 *
 * 09 13 2013 shenghui.shi
 * [MOLY00035078] [MT6290][PDN] Enable GDMA & HDMA related module PDN support
 * move uart pdn_clr from dcl_tty.c to uart.c
 *
 * 09 03 2013 shenghui.shi
 * [MOLY00036272] open UART SlEEP_EN feature
 * open uart SLEEP_EN feature when MTK_SLEEP_EN enable.
 *
 * 08 29 2013 shenghui.shi
 * [MOLY00035659] [MOLY] [MT6290][SLT] SLT Tool Communication API for driver test
 * .
 *
 * 08 29 2013 shenghui.shi
 * [MOLY00035768] fix uart build warnning
 * .
 *
 * 08 26 2013 shenghui.shi
 * [MOLY00035078] [MT6290][PDN] Enable GDMA & HDMA related module PDN support
 * add uart PDN feature
 *
 * 08 14 2013 shenghui.shi
 * [MOLY00033671] update exception uart driver for void use qbm_dest_q
 * .
 *
 * 08 12 2013 shenghui.shi
 * [MOLY00033396] update dummy_fdma() patch
 * .
 *
 * 08 02 2013 shenghui.shi
 * [MOLY00032203] update dummy_fdma for GDMA sleep ack issue
 * update dummy_fdma() for GDMA sleep ack issue
 * 08/02/2013 shenghui.shi
 * [MOLY00032203]update dummy_fdma() for GDMA sleep ack issue
 *
 * 07 29 2013 shenghui.shi
 * [MOLY00030921] [MT6290]Low Power Feature patch back from CBr
 * merge UART dummy_fdma() patch from Branch to Trunk.
 *
 * 04 24 2013 shenghui.shi
 * [MOLY00020330] MT6290 UART driver update
 * uart driver update: modify the uart_hdma_isr().
 *
 * 04 03 2013 shenghui.shi
 * [MOLY00012769] IOMUX driver
 * update UART driver: add ASIC version for UART_CLOCK
 *
 * 02 04 2013 ansel.liao
 * [MOLY00006575] Add UART/HDMA Driver
 * rename: 7208 -> 6290
 *
 * 01 29 2013 ansel.liao
 * [MOLY00006575] Add UART/HDMA Driver
 * Integration change.
 *
 * 01 22 2013 ansel.liao
 * [MOLY00006575] USIM driver modification
 * *: remove an en-Q situation which won't occur
 *
 * 01 15 2013 ansel.liao
 * [MOLY00006575] Add UART/HDMA Driver
 * *: recover U_GetUARTByte function, WCP3/SE7/SD9 Chuanbo need this function to verify MSDC driver (port from MT6280)
 *
 * 01 14 2013 ansel.liao
 * [MOLY00006575] Add UART/HDMA Driver
 * Integration change.
 *
 * 01 04 2013 ansel.liao
 * [MOLY00006575] Add UART/HDMA Driver
 * *: clear rx data timeout counter periodly to prevent XON/XOFF of sw flow control to destroy rx data timeout mechanism
 *
 * 01 02 2013 ansel.liao
 * [MOLY00006575] Add UART/HDMA Driver
 * *: does not destroy rx queue when head of queue is null
 *
 * 12 26 2012 ansel.liao
 * [MOLY00006575] Add UART/HDMA Driver
 * Integration change.
 *
 * 12 25 2012 ansel.liao
 * [MOLY00006575] Add UART/HDMA Driver
 * *: free all TGPD/RGPD when TTY_CMD_EXCEPTION_CLEAR_CHANNEL is get
 *
 * 12 19 2012 ansel.liao
 * [MOLY00006575] Add UART/HDMA Driver
 * Integration change.
 *
 * 12 06 2012 ansel.liao
 * [MOLY00006575] Add UART/HDMA Driver
 * Integration change.
 *
 * 11 30 2012 ansel.liao
 * [MOLY00006575] Add UART/HDMA Driver
 * add dbg_flush and corresponding drvtest
 *
 * 11 27 2012 ansel.liao
 * [MOLY00006575] Add UART/HDMA Driver
 * update stress test
 *
 * 11 25 2012 ansel.liao
 * [MOLY00006575] Add UART/HDMA Driver
 * update UART stress test
 *
 * 11 23 2012 ansel.liao
 * [MOLY00006575] Add UART/HDMA Driver
 * Add UART/HDMA driver
 ****************************************************************************/
#include "drv_features.h"
#include "kal_general_types.h"
#include "kal_public_api.h"
#include "kal_public_defs.h"
#include "hisr_config.h"
#include "stack_msgs.h"
#include "stack_ltlcom.h"       /* Task message communiction */
#include "drv_comm.h"
#include "reg_base.h"
#include "uart_hw.h"
#include "bmd.h"
#include "intrCtrl.h"
#include "drvpdn.h"
#include "stack_config.h"        /*MOD_UART1_HISR,MOD_UART2_HISR*/
#include "uart_sw.h"
#include "uart_internal.h"
#include "dcl.h"
#include "uart_gpd.h"
#include "drv_msgid.h"
#include "devdrv_ls.h"
#include "pll.h"
#include "drv_gdma.h"
// for HDMA
#include "qmu_bm.h"
#include "qmu_bm_size.h"
#include "qmu_bm_util.h"
#include "init.h"
#include "cpu.h"
#include "cache_sw.h"
#include <ex_item.h>
#include <ex_public.h>
#if defined(__HMU_ENABLE__)
#include "hmu.h"
#include "hmu_conf_data.h"
#endif


#if !defined(DRV_UART_OFF)
#define UART_CLOCK  (26*1000000)

#ifndef MD_IRQID_MDGDMA2
#define MD_IRQID_MDGDMA2      PS_IRQID_MDGDMA2
#endif
// To enable or disable META Mode SW Escaping, defined this macro to enable it
#define META_MODE_SW_ESCAPING
#define UART_ESCAPE_CHAR 0x77
#define UART_ECPT_MAX_TIMEOUT 5000   //5s


kal_uint8 UART_handle;

tty_excp_hif_state uart_ecpt_tx_state[MAX_UART_PORT_NUM] = 
{
   HIF_STATE_NORMAL,
   HIF_STATE_NORMAL,
};
UART_ecpt_timer_t uart_ecpt_timer[MAX_UART_PORT_NUM];
UARTStruct UARTPort[MAX_UART_PORT_NUM];

#ifdef DRV_DEBUG
kal_uint8 uart_initialize[MAX_UART_PORT_NUM];
#endif /*DRV_DEBUG*/

#define DEBUG_PORT		uart_port1 // Use UART1 as debug port
#define DEBUG_BAUDRATE		115200
kal_int32 init_log_fail_count = 0;
kal_bool mutex_status = KAL_FALSE;
kal_mutexid mutexid = 0;

#if __LTE_ONLY__
#define MCU_BOOT_SPEED 40040000
#else
//MCU booting speed 26M/baudrate(bits/second) = 260M/baudrate(bytes/second) = MCU tick/bytes
#define MCU_BOOT_SPEED 260000000 //Currently all chips use 26M, 260M because of count [MCU ticks/byte]
#endif

kal_bool send_Txilm[MAX_UART_PORT_NUM] = {// change from kal_uint8 to kal_bool, avoid Warning 641: Converting enum 'kal_bool' to int"
   KAL_FALSE,
   KAL_FALSE,
};

kal_bool send_Rxilm[MAX_UART_PORT_NUM] = {// change from kal_uint8 to kal_bool, avoid Warning 641: Converting enum 'kal_bool' to int"
   KAL_TRUE,
   KAL_TRUE,
};

const VOID_FUNC UART_HISR[MAX_UART_PORT_NUM] =
{
   UART1_HISR,
   UART2_HISR,
};

const kal_uint32 UART_BaseAddr[MAX_UART_PORT_NUM] =
{
   UART1_base,
   UART2_base,
};
#ifdef __DMA_UART_VIRTUAL_FIFO__
kal_bool UART_VFIFO_support[MAX_UART_PORT_NUM] =
{ 
   KAL_TRUE, 
   KAL_TRUE,
};

#else
kal_bool UART_VFIFO_support[MAX_UART_PORT_NUM] =
{
   KAL_FALSE,
   KAL_FALSE,
};
#endif/*__DMA_UART_VIRTUAL_FIFO__*/

//Add for new internal func
void UART2_TrxHandler(void);
kal_uint8 UART_GetIRQCode(UART_PORT port);
void uart_qbm_virt_to_phy(void** pp_gpd_head, void** pp_gpd_tail);
void uart_qbm_phy_to_virt(void**pp_gpd_head, void**pp_gpd_tail);
void UART_META_PutBytes(UART_PORT port, void * gpd_head, void * gpd_tail);
kal_uint16 U_ExBytes(UART_PORT port, kal_uint8 *Buffaddr, kal_uint16 Length, kal_uint8 *status, module_type ownerid);
void UART_META_ExBytes(UART_PORT port, void * gpd_head, void * gpd_tail);



kal_uint8 uart_escape_state=0;

extern UartDriver_strcut* pUart_CMD_FUNC[];
#if defined(DRV_DEBUG_BUFFER_DMA_MODE)
kal_spinlockid print_buf_lock = 0;
#endif
//void dummy_fdma(kal_uint32 gdma_start);


void UART_Calback(void *parameter);
void U_ConfigEscape (UART_PORT port, kal_uint8 EscChar, kal_uint16 ESCGuardtime, module_type ownerid);
void UART_TrxHandler(void *parameter);
void UART_TxDMAHandler(void *parameter, kal_uint8 chk_done);
/*UART Customization */
extern const UART_customize_function_struct *UART_GetFunc(void);
const UART_customize_function_struct *UartCustomFunc;
const UART_rings_struct *UART_rings;
kal_bool WaitForUARTTx[MAX_UART_PORT_NUM] = {KAL_FALSE};

#define ASSERT_WAIT_LOOP 0xffffffff
#define VFIFO_SWITCH_WAIT_LOOP 100000
kal_uint16 DELAY_FOR_PUTBYTE = 300;

// for HDMA
void *uart_tgpd_head[3];
void *uart_rgpd_head[3];
void *uart_tgpd_tail[3];
void *uart_rgpd_tail[3];

void *uart_wait_tgpd_head[3];
void *uart_wait_tgpd_tail[3];


// for UART Exception mode
kal_uint8 uart_ecpt_bps_buf[UART_ECPT_QBM_BPS_BUF_SZ];
kal_bool uart_ecpt_init = KAL_FALSE;
uart_bps_gpd_t uart_bps_gpd;


#if defined(DRV_UART_MEMORY_TRACE)
UART_DRV_DBG_STRUCT UART_DRV_DBG_INFO_DATA;
/*uart_drv_dbg_trace(NAND_READ_START,drv_get_current_time(),0,0);*/
void uart_drv_dbg_trace(kal_uint16 index, kal_uint32 time, kal_uint32 data1, kal_uint32 data2)
{
   kal_uint32        savedMask;
   savedMask = SaveAndSetIRQMask();
   {
      UART_DRV_DBG_INFO_DATA.dbg_data[UART_DRV_DBG_INFO_DATA.dbg_data_idx&(MAX_UART_DRV_DBG_INFO_SIZE-1)].tag = index;
      UART_DRV_DBG_INFO_DATA.dbg_data[UART_DRV_DBG_INFO_DATA.dbg_data_idx&(MAX_UART_DRV_DBG_INFO_SIZE-1)].time = time;
      UART_DRV_DBG_INFO_DATA.dbg_data[UART_DRV_DBG_INFO_DATA.dbg_data_idx&(MAX_UART_DRV_DBG_INFO_SIZE-1)].data1 = data1;
      UART_DRV_DBG_INFO_DATA.dbg_data[UART_DRV_DBG_INFO_DATA.dbg_data_idx&(MAX_UART_DRV_DBG_INFO_SIZE-1)].data2 = data2;
      UART_DRV_DBG_INFO_DATA.dbg_data_idx++;
   }
   RestoreIRQMask(savedMask);
}
#endif //#if defined(DRV_UART_MEMORY_TRACE)



void uart_customize_init(void)
{
   /* retreive the function table */
   UartCustomFunc=UART_GetFunc();
   /* use the entry in function table to retreive desired information */
   UART_rings = UartCustomFunc->UART_Get_Data();
   
}  

kal_bool UART_IsVfifoSetting(UART_PORT port, UART_TxRx_VFIFO_support vs)
{
#ifdef __DMA_UART_VIRTUAL_FIFO__
   if(port >= MAX_UART_PORT_NUM)
      return KAL_FALSE;
   if(vs != NONE_VFIFO)
      return UART_VFIFO_support[port];
   else //NONE_VFIFO
      return (kal_bool)!UART_VFIFO_support[port];
#else
   if(vs == NONE_VFIFO)
      return KAL_TRUE;
   else //NONE_VFIFO
      return KAL_FALSE;   
#endif      
}

/*check if chip can support auto escape*/
kal_bool uart_support_autoescape(void)
{      
   return KAL_TRUE;	
}

void UART_sendilm(UART_PORT port, msg_type msgid) {}

//Add for U_ClrRxBuffer and U_ClrTxBuffer, reduce code size
void UART_Set_NormalFlowControl(UART_PORT port) 
{
	if (UARTPort[port].DCB.flowControl == fc_none)
		DRV_UART_WriteReg(UART_IER(UART_BaseAddr[port]),IER_HW_NORMALINTS);
	else if (UARTPort[port].DCB.flowControl == fc_hw)
		DRV_UART_WriteReg(UART_IER(UART_BaseAddr[port]),IER_HW_NORMALINTS);
	else if (UARTPort[port].DCB.flowControl == fc_sw)
		DRV_UART_WriteReg(UART_IER(UART_BaseAddr[port]),IER_SW_NORMALINTS);
}

void U_ClrRxBuffer(UART_PORT port, module_type ownerid)  /*clear sw buffer*/
{
   kal_uint32 savedMask;
      
   savedMask = SaveAndSetIRQMask();
   BWrite_addr(UARTPort[port].Rx_Buffer) = 0;
   BRead_addr(UARTPort[port].Rx_Buffer) = 0;
   
//   UART_Set_NormalFlowControl(port);

   send_Rxilm[port] = KAL_TRUE;
   RestoreIRQMask(savedMask);

// HDMA procedure
	uart_en_q_de_q_with_mutex(port, UART_RX, UART_DE_Q_ALL, NULL, NULL);
// end of HDMA procedure
   
}

void U_ClrTxBuffer(UART_PORT port, module_type ownerid)  /*clear sw buffer*/
{

	kal_uint32 savedMask;
   
	savedMask = SaveAndSetIRQMask();
   
	BWrite_addr(UARTPort[port].Tx_Buffer) = 0;
	BRead_addr(UARTPort[port].Tx_Buffer) = 0;
   
//	UART_Set_NormalFlowControl(port);

	send_Txilm[port] = KAL_TRUE;

	RestoreIRQMask(savedMask);


// HDMA procedure
	uart_en_q_de_q_with_mutex(port, UART_TX, UART_DE_Q_ALL, NULL, NULL);
// end of HDMA procedure
}
void UART_EnableTX(UART_PORT port, kal_bool enable)
{  
      if (port < MAX_UART_PORT_NUM)
      {
         UARTPort[port].EnableTX= enable;
         if(enable == KAL_TRUE){
            EnableTxIntr(UART_BaseAddr[port]);
		}else{
			DisableTxIntr(UART_BaseAddr[port]);
		}
      }else{
		ASSERT(0);
	  }
}

void UART_SleepOnTx_Enable(UART_PORT port, UART_SLEEP_ON_TX enable_flag) {}

kal_uint16 U_GetBytesAvail(UART_PORT port)
{	
	kal_uint16 real_count;	 
	
	Buf_GetBytesAvail(&(UARTPort[port].Rx_Buffer),real_count);

	return real_count;
}

kal_uint16 U_GetTxRoomLeft(UART_PORT port)
{
   kal_uint16 real_count;   

   Buf_GetRoomLeft(&(UARTPort[port].Tx_Buffer),real_count);   
   return real_count;
}

#ifndef __ROMSA_SUPPORT__ /* Note: for ROM code */

#if defined(__MTK_INTERNAL__) && defined(__MTK_TARGET__)
kal_uint16 DEVDRV_LS_INTERNCODE 
#else
kal_uint16
#endif
U_GetTxISRRoomLeft(UART_PORT port)
{
	return 0;
}

#endif /* Note: for ROM code */


/*
* FUNCTION
*  GetUARTByte
*
* DESCRIPTION
*     This function is to read data from UART
*
* CALLS
*  This function is to receive data through UART
*
* PARAMETERS
*  None
*
* RETURNS
*  the data from UART
*
* GLOBALS AFFECTED
*   external_global
*/
kal_uint8 U_GetUARTByte(UART_PORT port)
{
	kal_uint8 data;
	kal_uint8 U_GetUARTByteWithTimeOut(UART_PORT port, kal_uint8* ch, kal_uint32 timeout_value);//liming add statement
	while(!U_GetUARTByteWithTimeOut(port, &data, 0xffffffff)); // for descrease code size  (U_GetUARTByte &U_GetUARTByteTimeout)
	return data;
}


/*
* FUNCTION
*  GetUARTByte
*
* DESCRIPTION
*     This function is to read data from UART
*
* CALLS
*  This function is to receive data through UART
*
* PARAMETERS
*  None
*
* RETURNS
*  the data from UART
*
* GLOBALS AFFECTED
*   external_global
*/
kal_uint8 U_GetUARTByteWithTimeOut(UART_PORT port, kal_uint8* ch, kal_uint32 timeout_value)
{
   kal_uint8 res_byte = 0;
   kal_uint8 data;
   
   while(timeout_value != 0)
   {
      kal_uint16 LSR;
      LSR = DRV_UART_Reg(UART_LSR(UART_BaseAddr[port]));      
      if (LSR & UART_LSR_DR)
      {
         data = (kal_uint8)DRV_UART_Reg(UART_RBR(UART_BaseAddr[port]));
         res_byte = 1;
         //only META port use old flow control escape character,
         if( (kal_query_boot_mode()== FACTORY_BOOT && UARTPort[port].DCB.flowControl==fc_sw && UARTPort[port].ownerid==MOD_DHL_READER)||
            (uart_support_autoescape()==KAL_FALSE&&UARTPort[port].DCB.flowControl==fc_sw))     
         {
            if(uart_escape_state==0)
            {
               if(data==0x77)            
                  uart_escape_state=0x77;
               else
               {
                 *ch = data;
                 break; 
               }            
            }
            else if (uart_escape_state==0x77)
            {
               uart_escape_state=0x0; 
               
               if (data == 0x01)
               {
                 *ch = UARTPort[port].DCB.xonChar;
                 break;
               }
               else if (data == 0x02)
               {
                 *ch = UARTPort[port].DCB.xoffChar;
                 break;
               }
               else if (data == 0x03)
               {
                 *ch = 0x77;
                 break;
               }                                           
            }                           
         }
         else
         {
            *ch = data;
            break;
         }
      }
      
      --timeout_value;
   }
   
   return res_byte;
}
   
/*
* FUNCTION
*  PutUARTByte
*
* DESCRIPTION
*     This function is to write data to UART
*
* CALLS
*  This function is to transmit data through UART
*
* PARAMETERS
*  None
*
* RETURNS
*  the data from UART
*
* GLOBALS AFFECTED
*   external_global
*/
void PutUARTRingBufferData(UART_PORT port) {}

void UART_PutUARTByte_limited(UART_PORT port, kal_uint8 data)
{
   volatile kal_uint16 LSR;
   kal_uint32 count = 0;
   
   if(init_log_fail_count > 3)
   {
      DRV_UART_WriteReg(UART_THR(UART_BaseAddr[port]),(kal_uint16)data);
      return;
   }
   
   while(1)
   {
      LSR = DRV_UART_Reg(UART_LSR(UART_BaseAddr[port]));
      count++;
      if ( LSR & UART_LSR_THRE )
      {
         DRV_UART_WriteReg(UART_THR(UART_BaseAddr[port]),(kal_uint16)data);
         break;
      }
      else if(count > (MCU_BOOT_SPEED/DEBUG_BAUDRATE) ) 
      {
         DRV_UART_WriteReg(UART_THR(UART_BaseAddr[port]),(kal_uint16)data); //don't care the pending
         init_log_fail_count++;
         break;
   }
}
}

void U_PutUARTByte(UART_PORT port, kal_uint8 data) {
	kal_uint16 LSR;
	
	while(1)
	{
	   LSR = DRV_UART_Reg(UART_LSR(UART_BaseAddr[port]));
	   if ( LSR & UART_LSR_THRE )
	   {
		  DRV_UART_WriteReg(UART_THR(UART_BaseAddr[port]),(kal_uint16)data);
		  break;
	   }
	}
}
void PutUARTData(UART_PORT port, kal_uint8 escape_char, kal_uint8 data)
{
   if(port >= MAX_UART_PORT_NUM)
      return;

   //only META port use old flow control escape character,
if((kal_query_boot_mode() == FACTORY_BOOT && UARTPort[port].DCB.flowControl == fc_sw && UARTPort[port].ownerid == MOD_DHL_READER)
			|| (uart_support_autoescape() == KAL_FALSE && UARTPort[port].DCB.flowControl == fc_sw))
   {
      if (data == UARTPort[port].DCB.xonChar)
      {
           pUart_CMD_FUNC[port]->PutUARTByte(port, escape_char);
         pUart_CMD_FUNC[port]->PutUARTByte(port, 0x01);             
      }
      else if (data == UARTPort[port].DCB.xoffChar)
      {
         pUart_CMD_FUNC[port]->PutUARTByte(port, escape_char);
         pUart_CMD_FUNC[port]->PutUARTByte(port, 0x02);            
      }
      else if (data == escape_char)
      {
         pUart_CMD_FUNC[port]->PutUARTByte(port, escape_char);
         pUart_CMD_FUNC[port]->PutUARTByte(port, 0x03);            
      }
      else
      {
         pUart_CMD_FUNC[port]->PutUARTByte(port, data);
      }         
   }
   else
   {
      pUart_CMD_FUNC[port]->PutUARTByte(port, data);
   }   
}

void PutUARTByteDelay(UART_PORT port, kal_uint8 data)
{
   kal_uint16 LSR;
   kal_uint16 i;
   if(port >= MAX_UART_PORT_NUM)
      return;
   
   while(1)
   {
      LSR = DRV_UART_Reg(UART_LSR(UART_BaseAddr[port]));
      
      if( LSR & UART_LSR_THRE )
      {
         for(i = 0; i < DELAY_FOR_PUTBYTE; i++); //add delay...
         DRV_UART_WriteReg(UART_THR(UART_BaseAddr[port]),(kal_uint16)data);
         break;
      }
   }
}

void PutUARTDataDelay(UART_PORT port, kal_uint8 escape_char, kal_uint8 data)
{
   if(port >= MAX_UART_PORT_NUM)
      return;

   if( (kal_query_boot_mode()== FACTORY_BOOT && UARTPort[port].DCB.flowControl==fc_sw && UARTPort[port].ownerid==MOD_DHL_READER)||
      (uart_support_autoescape()==KAL_FALSE))        
   {
      if (data == UARTPort[port].DCB.xonChar)
      {
         PutUARTByteDelay(port, escape_char);
         PutUARTByteDelay(port, 0x01);            
      }
      else if (data == UARTPort[port].DCB.xoffChar)
      {
         PutUARTByteDelay(port, escape_char);
         PutUARTByteDelay(port, 0x02);            
      }
      else if (data == escape_char)
      {
         PutUARTByteDelay(port, escape_char);
         PutUARTByteDelay(port, 0x03);            
      }
      else
      {
         PutUARTByteDelay(port, data);
      }         
   }
   else
   {
      PutUARTByteDelay(port, data);
   }   
}


kal_uint16 U_ExBytes(UART_PORT port, kal_uint8 *Buffaddr, kal_uint16 Length, kal_uint8 *status, module_type ownerid)
{
	kal_uint16 real_count= Length, index;
	kal_uint16 data_count = 0;

		if((kal_query_boot_mode() == FACTORY_BOOT && UARTPort[port].DCB.flowControl == fc_sw && UARTPort[port].ownerid == MOD_DHL_READER)
			|| (uart_support_autoescape() == KAL_FALSE && UARTPort[port].DCB.flowControl == fc_sw))
		//if(0)
		{  
			for(index = 0; (index < real_count) && (data_count < Length); index++)
			{   
				// The following are for software flow control
				if(uart_escape_state==0)
				{
					if(*(Buffaddr + index) == 0x77)
					{
						uart_escape_state=0x77;
					} else
					{
						*(Buffaddr + data_count) = *(Buffaddr + index);
						data_count++;
					}
            
				} else if(uart_escape_state == 0x77)
				{
					switch(*(Buffaddr + index))
					{
						case 0x01:
							*(Buffaddr+data_count) = 0x11;//UARTPort[port].DCB.xonChar;
							data_count++;
							break;
						case 0x02:                  
							*(Buffaddr+data_count)= 0x13; //UARTPort[port].DCB.xoffChar; 
							data_count++;
							break;               
						case 0x03:                  
							*(Buffaddr + data_count) = 0x77;
							data_count++;
							break;      
						default:
							break;
               
					}
					uart_escape_state=0x0;        
				}


			}   
		}else{
			for(index = 0; (index < real_count) && (data_count < Length); index++){
				*(Buffaddr + data_count) = *(Buffaddr + index);
				data_count++;
			}
				
		}

	return data_count;
}

void UART_META_ExBytes(UART_PORT port, void * gpd_head, void * gpd_tail){
	hdma_tbd_t *bd_ptr = NULL, *p_bd_cur =NULL;
	hdma_tgpd_t *gpd_ptr = NULL;
	kal_uint32	gpd_data_len=0, gpd_data_real_len = 0, bd_data_len=0, bd_data_real_len = 0;
	kal_uint8  *gpd_data_ptr=NULL, *bd_data_ptr=NULL;

	
	gpd_ptr = (hdma_tgpd_t*)gpd_head;
	while(1){
		if (QBM_DES_GET_BDP(gpd_ptr)) {
			bd_ptr = QBM_DES_GET_DATAPTR(gpd_ptr);
			p_bd_cur = bd_ptr;
			while (1) {
				bd_data_len = QBM_DES_GET_DATALEN(p_bd_cur);
				if(bd_data_len>0){
					bd_data_ptr = QBM_DES_GET_DATAPTR(p_bd_cur);
					QBM_CACHE_INVALID(bd_data_ptr, bd_data_len);
					bd_data_real_len = U_ExBytes(port,bd_data_ptr ,bd_data_len, NULL, UARTPort[port].ownerid);
					if (bd_data_len != bd_data_real_len) {
					    QBM_CACHE_FLUSH(bd_data_ptr, bd_data_real_len);
    					QBM_DES_SET_DATALEN(p_bd_cur, bd_data_real_len);
    					QBM_CACHE_FLUSH(p_bd_cur, QBM_SIZE_TGPD);
					}
				}
				if (QBM_DES_GET_EOL(p_bd_cur)) {
					break;
				}
				p_bd_cur =(void *) QBM_DES_GET_NEXT(p_bd_cur);

			}
		} else{
			gpd_data_len = QBM_DES_GET_DATALEN(gpd_ptr);
			if(gpd_data_len>0){
				gpd_data_ptr = QBM_DES_GET_DATAPTR(gpd_ptr);
				QBM_CACHE_INVALID(gpd_data_ptr, gpd_data_len);
				gpd_data_real_len = U_ExBytes(port,gpd_data_ptr ,gpd_data_len, NULL, UARTPort[port].ownerid);
				if (gpd_data_len != gpd_data_real_len) {
                    QBM_CACHE_FLUSH(gpd_data_ptr, gpd_data_real_len);
                    QBM_DES_SET_DATALEN(gpd_ptr,gpd_data_real_len);
                    QBM_CACHE_FLUSH(gpd_ptr, QBM_SIZE_TGPD);
				}
			}
		}
		if(gpd_ptr == gpd_tail)
		{		
			break;
		} else
		{
			gpd_ptr = (void *) QBM_DES_GET_NEXT(gpd_ptr);
		}
	}
}
void UART_Boot_PutUARTBytes(UART_PORT port, kal_uint8 *data,kal_uint16 len)
{
   volatile kal_uint16 LSR;
   kal_uint16 index;
   static kal_uint32 UART_Boot_Send_Count = 0;
   
  UART_Boot_Send_Count+=len;
  
   for(index=0;index<len;index++)
      UART_PutUARTByte_limited(port,*(data+index));
      
   index = 0;
   while(1) //make sure tx already send out all data.
   {
      LSR = DRV_UART_Reg(UART_LSR(UART_BaseAddr[port]));
      if( LSR & UART_LSR_THRE )
      {
         break;
      }else if( (MCU_BOOT_SPEED/DEBUG_BAUDRATE) < index++)
      {
         init_log_fail_count++;
         break;
      }
   }
}

void U_PutUARTBytes(UART_PORT port, kal_uint8 *data,kal_uint16 len) {
	kal_uint16 index;
	
	for(index=0;index<len;index++)
	   pUart_CMD_FUNC[port]->PutUARTByte(port,*(data+index));

}
void PutUARTDatas(UART_PORT port, kal_uint8 escape_char, kal_uint8 *data,kal_uint16 len)
{
   kal_uint16 index;
   if(port >= MAX_UART_PORT_NUM)
      return;

   if( (sst_get_exception_count() > 0) && (0 == UARTPort[port].Tx_DMA_Ch) && (1500000 == UARTPort[port].DCB.baud))
      for(index=0;index<len;index++)
         PutUARTDataDelay(port,escape_char,*(data+index));
   else   
      for(index=0;index<len;index++)
         PutUARTData(port,escape_char,*(data+index));
}

void U_SetBaudRate(UART_PORT port, UART_baudrate baudrate, module_type ownerid)
{
	kal_uint16 byte = 0;
	kal_uint32 freq_div = 1;
	kal_uint32 sample_count = 0;
	kal_uint32 UART_BASE;

	UART_BASE = UART_BaseAddr[port];
	UARTPort[port].DCB.baud = baudrate;

	if(baudrate)
	{
		do {
			sample_count = (UART_CLOCK + (freq_div * baudrate / 2)) / (freq_div * baudrate);
			if(sample_count > 0xff) freq_div++;
		} while(sample_count > 0xff);
	}

	// configure register
	DRV_UART_WriteReg(UART_RATE_STEP(UART_BASE), 0x3);

	byte = DRV_Reg32(UART_LCR(UART_BASE));					// DLAB start
	DRV_WriteReg32(UART_LCR(UART_BASE), byte | UART_LCR_DLAB);

	DRV_WriteReg32(UART_DLL(UART_BASE), freq_div & 0xFF);
	DRV_WriteReg32(UART_DLH(UART_BASE), (freq_div >> 8) & 0xFF);

	DRV_UART_WriteReg(UART_STEP_COUNT(UART_BASE), sample_count - 1);
	DRV_UART_WriteReg(UART_SAMPLE_COUNT(UART_BASE), sample_count >> 1);
	DRV_UART_WriteReg(UART_LCR(UART_BASE), byte);					// DLAB end
}


void UART_Bootup_Init()
{
	UARTPort[DEBUG_PORT].ownerid = (module_type)( (kal_uint16)MOD_UART1_HISR + (kal_uint8) DEBUG_PORT);

   //Set SW flow control as equal to catcher default flow control
   DRV_UART_WriteReg(UART_LCR(UART1_base),0xbf);            /* Enchance setting */
   DRV_UART_WriteReg(UART_EFR(UART1_base),UART_EFR_SWFlowCtrlX1);

   //always open as new SW flow control, DHL under META will reset to disable
   {  
      DRV_UART_WriteReg(UART_ESCAPE_DAT(UART1_base),0x77);
      DRV_UART_WriteReg(UART_ESCAPE_EN(UART1_base),0x1);
   }              
   DRV_UART_WriteReg(UART_XON1(UART1_base),0x11);
   DRV_UART_WriteReg(UART_XOFF1(UART1_base),0x13);
   DRV_UART_WriteReg(UART_XON2(UART1_base),0x11);
   DRV_UART_WriteReg(UART_XOFF2(UART1_base),0x13);
   DRV_UART_WriteReg(UART_LCR(UART1_base),0x3);
   

	U_SetBaudRate(DEBUG_PORT, DEBUG_BAUDRATE, (module_type)( (kal_uint16)MOD_UART1_HISR + (kal_uint8) DEBUG_PORT));
}

/*This function is to cover 6218B/6219 hw bug.
UART should not send receiving data to its FIFO when doing auto baud*/
void U_SetAutoBaud_Div(UART_PORT port, module_type ownerid) {}

void U_SetDCBConfig(UART_PORT port, UARTDCBStruct *UART_Config, module_type ownerid)
{
   kal_uint16   byte;
   kal_uint16   IER;
   kal_uint32   savedMask;
   kal_uint32   UART_BASE;

   UART_BASE = UART_BaseAddr[port];
   savedMask = SaveAndSetIRQMask();
   IER = DRV_UART_Reg(UART_IER(UART_BASE));
   DRV_UART_WriteReg(UART_IER(UART_BASE),UART_IER_ALLOFF);
   RestoreIRQMask(savedMask);
   
   U_SetBaudRate(port, UART_Config->baud, ownerid);
   
   /* Setup N81 */
   byte = DRV_UART_Reg(UART_LCR(UART_BASE));     /* DLAB start */
   byte &= ~UART_DATA_MASK;
   switch(UART_Config->dataBits)
   {
   case len_5:
      byte |= UART_WLS_5;
      break;
      
   case len_6:
      byte |= UART_WLS_6;
      break;
      
   case len_7:
      byte |= UART_WLS_7;
      break;
      
   case len_8:
      byte |= UART_WLS_8;
      break;
      
   default:
      break;
   }
   byte &= ~UART_STOP_MASK;
   switch(UART_Config->stopBits)
   {
   case sb_1:
      byte |= UART_1_STOP;
      break;
      
   case sb_2:
      byte |= UART_2_STOP;
      break;
      
   case sb_1_5:
      byte |= UART_1_5_STOP;
      break;
      
   default:
      break;
   }
   
   byte &= ~UART_PARITY_MASK;
   switch(UART_Config->parity)
   {
   case pa_none:
      byte |= UART_NONE_PARITY;
      break;
      
   case pa_odd:
      byte |= UART_ODD_PARITY;
      break;
      
   case pa_even:
      byte |= UART_EVEN_PARITY;
      break;
      
   case pa_space:
      byte |= UART_SPACE_PARITY;
      break;
      
   default:
      break;
   }
   DRV_UART_WriteReg(UART_LCR(UART_BASE),byte);            /* DLAB End */
   /* flowControl */
   byte = DRV_UART_Reg(UART_LCR(UART_BASE));

   DRV_UART_WriteReg(UART_LCR(UART_BASE),0xbf);            /* Enchance setting */
   switch(UART_Config->flowControl)
   {
   case fc_none:
      DRV_UART_WriteReg(UART_EFR(UART_BASE),UART_EFR_ALLOFF);
      
      // Disable AutoEscape, we expect to use this functionality for S/W flow control
      /*For AutoEscape*/
      DRV_UART_WriteReg(UART_ESCAPE_EN(UART_BaseAddr[port]),0x0);
      
      break;
      
   case fc_hw:
      DRV_UART_WriteReg(UART_EFR(UART_BASE),UART_EFR_AutoRTSCTS);
      
      // Disable AutoEscape, we expect to use this functionality for S/W flow control
      /*For AutoEscape*/
      DRV_UART_WriteReg(UART_ESCAPE_EN(UART_BaseAddr[port]),0x0);
      break;
      
   case fc_sw:

      DRV_UART_WriteReg(UART_EFR(UART_BASE), UART_EFR_SWFlowCtrlX1 |UART_EFR_Enchance); 
      //reset first
      DRV_UART_WriteReg(UART_ESCAPE_EN(UART_BaseAddr[port]),0x0);
      if(uart_support_autoescape()==KAL_TRUE)
      {  
         /*For META, Dont use auto escape*/ 
#if defined(META_MODE_SW_ESCAPING)
        if(kal_query_boot_mode() != FACTORY_BOOT || UARTPort[port].ownerid != MOD_DHL_READER)
#endif
         {
            /*For AutoEscape*/
            DRV_UART_WriteReg(UART_ESCAPE_DAT(UART_BaseAddr[port]),0x77);
            DRV_UART_WriteReg(UART_ESCAPE_EN(UART_BaseAddr[port]),0x1);
         }
      }                  
      break;
      
   default:    
      break;
   }
   /* XON and XOFF characters */
   DRV_UART_WriteReg(UART_XON1(UART_BASE),UART_Config->xonChar);
   DRV_UART_WriteReg(UART_XOFF1(UART_BASE),UART_Config->xoffChar);
   DRV_UART_WriteReg(UART_XON2(UART_BASE),UART_Config->xonChar);
   DRV_UART_WriteReg(UART_XOFF2(UART_BASE),UART_Config->xoffChar);
   DRV_UART_WriteReg(UART_LCR(UART_BASE),byte);         /* DLAB End */
   
   kal_mem_cpy( &UARTPort[port].DCB, UART_Config, sizeof(UARTDCBStruct) );
   
   savedMask = SaveAndSetIRQMask();
   DRV_UART_WriteReg(UART_IER(UART_BASE),IER);
   RestoreIRQMask(savedMask);
}

void U_ReadDCBConfig (UART_PORT port, UARTDCBStruct *DCB)
{
	kal_mem_cpy( DCB, &UARTPort[port].DCB, sizeof(UARTDCBStruct) );
}

void UART_loopback(UART_PORT port)
{
   kal_uint16 tmp;
   kal_uint32 UART_BASE;
   /* Enable Loop Back test!! */
   if(port >= MAX_UART_PORT_NUM)
      return;
   UART_BASE = UART_BaseAddr[port];
   tmp = DRV_UART_Reg(UART_MCR(UART_BASE));
   tmp |= UART_MCR_LOOPB;
   DRV_UART_WriteReg(UART_MCR(UART_BASE), tmp);
}

void UART_PDN_Disable(UART_PORT port)
{
	switch(port)
    {
    	case uart_port1:
		PDN_CLR(PDN_UART0);
	#if defined(HIF_UART_SUPPORT) ||(defined(DRV_DEBUG)&&(defined(DRV_DEBUG_DMA_MODE) || defined(DRV_DEBUG_BUFFER_DMA_MODE)))
		HDMA_PDN_CLR(port+2);
		HDMA_PDN_CLR(port+3);
	#endif
            break;
        case uart_port2:
            PDN_CLR(PDN_UART1);
            break;
        default:
            ASSERT(0);
            break;
     }
}

void UART_PDN_Enable(UART_PORT port)
{
	switch(port)
    {
    	case uart_port1:
		PDN_SET(PDN_UART0);
		HDMA_PDN_SET(port+2);
		HDMA_PDN_SET(port+3);
            break;
        case uart_port2:
            PDN_SET(PDN_UART1);
            break;
        default:
            ASSERT(0);
            break;
     }
}

void UART_HWInit(UART_PORT port)
{
	UARTDCBStruct *DCBdefault;
	UARTDCBStruct  UART_DefaultConfig =
	{
		UART_BAUD_1500000,	// baud
		len_8,			// dataBits
		sb_1,			// stopBits
		pa_none,		// parity
		fc_none,		// no flow control
		0x11,			// xonChar
		0x13,			// xoffChar
		KAL_FALSE
	};
	kal_uint32 UART_BASE;

	if(port >= MAX_UART_PORT_NUM)
		return;
	UART_BASE = UART_BaseAddr[port];
	
	UART_PDN_Disable(port);

	/* Setup N81,(UART_WLS_8 | UART_NONE_PARITY | UART_1_STOP) = 0x03 */
	/* BaudRate and autoflowcontrol */
	DCBdefault = (UARTDCBStruct *)&UART_DefaultConfig;
	U_SetDCBConfig(port, DCBdefault, UARTPort[port].ownerid);
  
	DRV_UART_Reg(UART_LSR(UART_BASE));
	DRV_UART_Reg(UART_MSR(UART_BASE));

	/* DTR , RTS is on, data will be coming,Output2 is high */
	DRV_UART_SetBits(UART_MCR(UART_BASE), UART_MCR_Normal);

	DRV_UART_WriteReg(UART_IER(UART_BASE), UART_IER_ALLOFF);
   
	// Set handle value to 0xFF to indicate this handle is invalid
	UARTPort[port].handle = 0xFF;
   
	UARTPort[port].Rec_state = UART_RecNormal;
	UARTPort[port].port_no = port;
   
	UARTPort[port].sleep_on_tx = uart_sleep_on_tx_allow;
	UARTPort[port].EnableTX= KAL_TRUE;
	UARTPort[port].power_on= KAL_TRUE;

	// HDMA related HW init
	// init FIFO Control Regitser: UART_FCR_RFTL_12 | UART_FCR_TFTL_0 | UART_FCR_CLRT | UART_FCR_CLRR | UART_FCR_FIFOE
	DRV_UART_WriteReg(UART_FCR(UART_BaseAddr[port]), 0x87);
#if defined(MTK_SLEEP_ENABLE)
	DRV_UART_WriteReg(UART_SLEEP_EN(UART_BASE),KAL_TRUE);
#endif
	switch(port)
	{
		case uart_port1:
			// init TX HDMA
			HDMA_MODE_CONFIG(UART1_HDMA_TX_CHANNEL, HDMA_CKSUM_EN_DEFAULT, HDMA_LIST_MODE, HDMA_CKSUM_12B);
			HDMA_CONFIG(UART1_HDMA_TX_CHANNEL, HDMA_BURST_SIZE_DEFAULT, HDMA_DEV_BUS_WIDTH_DEFAULT, HDMA_MEM_BUS_WIDTH_DEFAULT);
			HDMA_BUF0_XFER_SIZE_CONFIG(UART1_HDMA_TX_CHANNEL, 0);

			// init RX HDMA
			HDMA_CONFIG_RX_SEL(UART1_HDMA_RX_CHANNEL, 0x3);
			HDMA_MODE_CONFIG(UART1_HDMA_RX_CHANNEL, HDMA_CKSUM_EN_DEFAULT, HDMA_LIST_MODE, HDMA_CKSUM_12B);
			HDMA_CONFIG(UART1_HDMA_RX_CHANNEL, HDMA_BURST_SIZE_DEFAULT, HDMA_DEV_BUS_WIDTH_DEFAULT, HDMA_MEM_BUS_WIDTH_DEFAULT);
			HDMA_BUF0_XFER_SIZE_CONFIG(UART1_HDMA_RX_CHANNEL, 0);
#if defined(MT6290)
			// MDUART DMA mode: HDMA
			DRV_WriteReg32(MDMISC_MDGDMACTL, GDMA_MODE_HDMA);
#endif
#ifdef DRV_DEBUG
			DRV_WriteReg32(UART_DMA_EN(UART_BaseAddr[port]), 0x0);
#else
			DRV_WriteReg32(UART_DMA_EN(UART_BaseAddr[port]), UART_TXRXDMA_ON|UART_TO_CNT_AUTORST);
			DRV_WriteReg32(UART_DMA_ACK(UART_BaseAddr[port]),UART_DMA_ACK_DIS);
#endif
			break;

		case uart_port2:
			break;
		default:
			ASSERT(0);
			break;
	}

	// If needTxDoneCb is 1, the driver must call DclSerialPort_DrvTxDone(handle, source_id, tx_ior) after tx_ior data is sent.
	// initial value is 0
	UARTPort[port].need_tx_done_cb = KAL_FALSE;
}

kal_bool U_Open(UART_PORT port, module_type ownerid)
{
	kal_uint32 UART_BASE;
	kal_uint16  MSR;
	kal_uint8 byte;
	kal_uint8  irq_code = 0;

	UART_BASE = UART_BaseAddr[port];
	if(port == uart_port_null)
		return KAL_FALSE;
 
	UARTPort[port].initialized = KAL_TRUE;
	UARTPort[port].ownerid = ownerid;
         
	UARTPort[port].RingBuffers.rx_buffer = UART_rings->ring[port].rx_adrs;
	UARTPort[port].RingBuffers.tx_buffer = UART_rings->ring[port].tx_adrs;
	Buf_init(&(UARTPort[port].Rx_Buffer),(kal_uint8 *)(UARTPort[port].RingBuffers.rx_buffer),(kal_uint16)UART_rings->ring[port].rx_len);
	Buf_init(&(UARTPort[port].Tx_Buffer),(kal_uint8 *)(UARTPort[port].RingBuffers.tx_buffer),(kal_uint16)UART_rings->ring[port].tx_len);   
	if( UART_IsVfifoSetting(port, TX_VFIFO) == KAL_FALSE )
	{
		UARTPort[port].RingBuffers.txISR_buffer = UART_rings->ring[port].txisr_adrs;
		Buf_init(&(UARTPort[port].Tx_Buffer_ISR),(kal_uint8 *)(UARTPort[port].RingBuffers.txISR_buffer),(kal_uint16)UART_rings->ring[port].txisr_len);				
	}

	MSR = DRV_UART_Reg(UART_MSR(UART_BASE));

	if (MSR & UART_MSR_DSR)
		UARTPort[port].DSR = io_high;
	else
		UARTPort[port].DSR = io_low;
   
   /* Rx FIFO trigger = 62, Tx FIFO trigger is 16, and FIFO enable. */
   DRV_UART_WriteReg(UART_FCR(UART_BASE),UART_FCR_Normal);

   if( UART_IsVfifoSetting(port, TXRX_VFIFO))
   {
		ASSERT(0);/*wrong configuration*/
   }
   else
   {	
		if (UARTPort[port].DCB.flowControl == fc_none)
		{
			   DRV_UART_WriteReg(UART_IER(UART_BaseAddr[port]),IER_HW_NORMALINTS);
		}
		else if (UARTPort[port].DCB.flowControl == fc_hw)
		{
//		   DRV_UART_WriteReg(UART_IER(UART_BaseAddr[port]),IER_HW_NORMALINTS);
			DRV_UART_WriteReg32(UART_MCR(UART_BASE), (DRV_UART_Reg32(UART_MCR(UART_BASE)) | 0x02));
			byte = DRV_UART_Reg(UART_LCR(UART_BASE));
			DRV_UART_WriteReg(UART_LCR(UART_BASE), 0xbf); 
			DRV_UART_WriteReg(UART_EFR(UART_BASE), DRV_UART_Reg(UART_EFR(UART_BASE)) | UART_EFR_AutoRTSCTS);
			DRV_UART_WriteReg(UART_LCR(UART_BASE), byte);
		}
		else if (UARTPort[port].DCB.flowControl == fc_sw)
		{
			// need to set EFR enhance before IRE	
			byte = DRV_UART_Reg(UART_LCR(UART_BASE));
			DRV_UART_WriteReg(UART_LCR(UART_BASE),0xbf); 
			DRV_UART_WriteReg(UART_EFR(UART_BASE), DRV_UART_Reg(UART_EFR(UART_BASE)) | UART_EFR_Enchance);	
			DRV_UART_WriteReg(UART_LCR(UART_BASE),byte);

			DRV_UART_WriteReg(UART_IER(UART_BaseAddr[port]),IER_SW_NORMALINTS);                        
			DRV_UART_WriteReg(UART_ESCAPE_EN(UART_BaseAddr[port]),0x0); //reset to disable first
			if(uart_support_autoescape()==KAL_TRUE)
			{
                  	/*For META, Dont use auto escape*/
#if defined(META_MODE_SW_ESCAPING)
                 		if(kal_query_boot_mode() != FACTORY_BOOT || UARTPort[port].ownerid != MOD_DHL_READER)
#endif
                 		 {
                    		 /*For AutoEscape*/
                     		byte = DRV_UART_Reg(UART_LCR(UART_BASE));
                   		  	// DLAB start */
                    			DRV_UART_WriteReg(UART_LCR(UART_BASE),0xbf);            /* Enchance setting */
                     		DRV_UART_WriteReg(UART_XON1(UART_BaseAddr[port]),0x11);
                     		DRV_UART_WriteReg(UART_XON2(UART_BaseAddr[port]),0x11);
                    			 DRV_UART_WriteReg(UART_XOFF1(UART_BaseAddr[port]),0x13);
                     		DRV_UART_WriteReg(UART_XOFF2(UART_BaseAddr[port]),0x13);
				//autoescape
                    			 DRV_UART_WriteReg(UART_ESCAPE_DAT(UART_BaseAddr[port]),0x77);
                     		DRV_UART_WriteReg(UART_ESCAPE_EN(UART_BaseAddr[port]),0x1);
                     		DRV_UART_WriteReg(UART_LCR(UART_BASE),byte);            /* Enchance setting */            
                  		}
               	}   
		}
   }      
   
   /*For excetpion, we dont need to do the following */
#ifdef __MTK_TARGET__
   if(INT_QueryExceptionStatus())
      return KAL_TRUE; 
#endif   
	switch(port)
	{
		case uart_port1:	
			irq_code = UART_GetIRQCode(uart_port1);
			IRQMask(irq_code);
			IRQ_Register_LISR(irq_code, UART1_LISR, "UART1");
			IRQSensitivity(irq_code, LEVEL_SENSITIVE);
			IRQClearInt(irq_code);
			DRV_WriteReg32(UART_IER(UART_BASE), 0x4);
			IRQUnmask(irq_code);
			break;
			
		case uart_port2:
			irq_code = UART_GetIRQCode(uart_port2);
			IRQMask(irq_code);
			IRQ_Register_LISR(irq_code, UART2_LISR, "UART2");
			IRQSensitivity(irq_code, LEVEL_SENSITIVE);
			IRQClearInt(irq_code);
			DRV_WriteReg32(UART_IER(UART_BASE), 0x4);
			IRQUnmask(irq_code);
			break;
		default:
			ASSERT(0);
			break;
	}

	IRQMask(UART_HDMA_INTR_ID);
	IRQ_Register_LISR(UART_HDMA_INTR_ID, uart_hdma_lisr, "UART_HDMA");
	IRQSensitivity(UART_HDMA_INTR_ID, LEVEL_SENSITIVE);

	HDMA_LENERR_INTR_UNMASK(2);
	HDMA_BD_CSERR_INTR_UNMASK(2);
	HDMA_GPD_CSERR_INTR_UNMASK(2);
	HDMA_LENERR_INTR_UNMASK(3);
	HDMA_BD_CSERR_INTR_UNMASK(3);
	HDMA_GPD_CSERR_INTR_UNMASK(3);
	HDMA_QE_INTR_UNMASK(3);	// RX done
	HDMA_INT_CLEAR_ALL();
	IRQUnmask(UART_HDMA_INTR_ID);

	return KAL_TRUE;
}

void U_Purge(UART_PORT port, UART_buffer dir, module_type ownerid)
{
	kal_uint32 UART_BASE = UART_BaseAddr[port];

	/* Rx FIFO trigger = 62, Tx FIFO trigger is 16, and FIFO enable. */
	// for MT6290, Rx FIFO trigger = 12. Tx FIFO trigger is 0
	if (dir == RX_BUF)
		DRV_UART_WriteReg(UART_FCR(UART_BASE),(UART_FCR_Normal & ~UART_FCR_CLRT));
	else
		DRV_UART_WriteReg(UART_FCR(UART_BASE),(UART_FCR_Normal & ~UART_FCR_CLRR));
}

void U_Close(UART_PORT port, module_type ownerid)
{
	kal_uint32 UART_BASE = UART_BaseAddr[port];
	kal_uint8 irq_code;

	UARTPort[port].initialized = KAL_FALSE;
	UARTPort[port].ownerid = (module_type) ((kal_uint16) MOD_UART1_HISR + (kal_uint8) port); 
   
	switch(port)
	{
		case uart_port1:
			irq_code = UART_GetIRQCode(uart_port1);
			IRQMask(irq_code);
			break;
		case uart_port2:
			irq_code = UART_GetIRQCode(uart_port2);
			IRQMask(irq_code);
			break;
		default:
			ASSERT(0);
			break;
	}

	DRV_UART_WriteReg(UART_IER(UART_BASE), UART_IER_ALLOFF);

	U_ConfigEscape(port, 0xff, 0, UARTPort[port].ownerid);

	U_ClrRxBuffer(port, UARTPort[port].ownerid);		// clear sw RX buffer
	U_ClrTxBuffer(port, UARTPort[port].ownerid);		// clear sw TX buffer
	U_Purge(port, RX_BUF, UARTPort[port].ownerid);		// clear hw RX FIFO
	U_Purge(port, TX_BUF, UARTPort[port].ownerid);		// clear hw TX FIFO
 
	DRV_UART_WriteReg(UART_IER(UART_BASE),UART_IER_ALLOFF);
   
	UART_PDN_Enable(port);

   
	if(UARTPort[port].handle != 0xFF)
	{
		UARTPort[port].handle = 0xFF;
	}
}

void U_SetOwner (UART_PORT port, module_type ownerid)
{
	U_ClrTxBuffer(port, UARTPort[port].ownerid);		// clear sw TX buffer
	U_ClrRxBuffer(port, UARTPort[port].ownerid);		// clear sw RX buffer

	UARTPort[port].ownerid = ownerid;
	UARTPort[port].need_tx_done_cb = KAL_FALSE;
}

module_type U_GetOwnerID(UART_PORT port)
{
	return UARTPort[port].ownerid;
}

void U_ConfigEscape (UART_PORT port, kal_uint8 EscChar, kal_uint16 ESCGuardtime, module_type ownerid)
{

   UARTPort[port].ESCDet.EscChar = EscChar;
   UARTPort[port].ESCDet.GuardTime = ESCGuardtime;
	// Escape character register is WO
	DRV_UART_WriteReg(UART_ESCAPE_DAT(UART_BaseAddr[port]), EscChar);	// added by ansel
	DRV_UART_WriteReg(UART_GUARD(UART_BaseAddr[port]), ESCGuardtime);	// added by ansel
   if (UARTPort[port].ESCDet.GuardTime)
   {
      UARTPort[port].Rec_state = UART_RecNormal;
   }
}

void U_SetFlowCtrl(UART_PORT port, kal_bool XON, module_type ownerid)    {}   /*NULL for all*/

kal_uint32 U_GetFlowCtrl(UART_PORT port, module_type ownerid)
{
	kal_uint16 IER, LCR;
	kal_uint32 savedMask;
	kal_uint32 UART_BASE;
	kal_uint32 EFR;

	UART_BASE = UART_BaseAddr[port];

	savedMask = SaveAndSetIRQMask();
	IER = DRV_UART_Reg(UART_IER(UART_BASE));
	DRV_UART_WriteReg(UART_IER(UART_BASE), UART_IER_ALLOFF);
	RestoreIRQMask(savedMask);

	LCR = DRV_UART_Reg(UART_LCR(UART_BASE));
	DRV_UART_WriteReg(UART_LCR(UART_BASE), 0xBF);
	EFR = DRV_UART_Reg(UART_EFR(UART_BASE));
	DRV_UART_WriteReg(UART_LCR(UART_BASE), LCR);

	savedMask = SaveAndSetIRQMask();
	DRV_UART_WriteReg(UART_IER(UART_BASE), IER);
	RestoreIRQMask(savedMask);

	return EFR;
}

void U_CtrlDCD(UART_PORT port, IO_level SDCD, module_type ownerid) {}   /*NULL for DCE*/
void U_CtrlRI (UART_PORT port, IO_level SRI, module_type ownerid) {}   /*NULL for DCE*/
void U_CtrlDTR (UART_PORT port, IO_level SDTR, module_type ownerid) {}
void U_ReadHWStatus(UART_PORT port, IO_level *SDSR, IO_level *SCTS)
{
   kal_uint16 MSR;
   kal_uint32 UART_BASE;

   UART_BASE = UART_BaseAddr[port];
   MSR = DRV_UART_Reg(UART_MSR(UART_BASE));
   *SDSR = (IO_level)(( MSR & UART_MSR_DSR) >> 5);
   *SCTS = (IO_level)(( MSR & UART_MSR_CTS) >> 4);
}

void U_CtrlBreak(UART_PORT port, IO_level SBREAK, module_type ownerid)
{
	kal_uint32 UART_BASE = UART_BaseAddr[port];
	if(SBREAK == io_high)
	{
		if(HDMA_BUF0_IS_ACTIVE((port + 2)))
			HDMA_BUF0_STOP((port + 2));
		DRV_UART_SetBits(UART_LCR(UART_BASE), UART_LCR_BREAK);
	} else
	{
		DRV_UART_ClearBits(UART_LCR(UART_BASE), UART_LCR_BREAK);
		if(uart_wait_tgpd_head[port] != NULL || uart_tgpd_head[port] != NULL)
			HDMA_BUF0_RESUME((port + 2));
	}
}

kal_uint16 U_GetBytes(UART_PORT port, kal_uint8 *Buffaddr, kal_uint16 Length, kal_uint8 *status, module_type ownerid)
{
	kal_uint16 real_count, index;
	kal_uint16 data_count = 0;

	if(status != NULL)
		*status = 0;
   
	DisableRxIntr(UART_BaseAddr[port]);
	if (status != NULL)
	{
		if (UARTPort[port].EscFound)
		{
			*status |= UART_STAT_EscDet;
			UARTPort[port].EscFound = KAL_FALSE;
		}
		if(UARTPort[port].breakDet)
		{
			*status |= UART_STAT_Break;
			UARTPort[port].breakDet = KAL_FALSE;
		}
	}
   
	EnableRxIntr(UART_BaseAddr[port]);

	do {
		Buf_GetBytesAvail(&(UARTPort[port].Rx_Buffer),real_count);

		if((kal_query_boot_mode() == FACTORY_BOOT && UARTPort[port].DCB.flowControl == fc_sw && UARTPort[port].ownerid == MOD_DHL_READER)
			|| (uart_support_autoescape() == KAL_FALSE && UARTPort[port].DCB.flowControl == fc_sw))
		{  
         
			for(index = 0; (index < real_count) && (data_count < Length); index++)
			{
				Buf_Pop(&(UARTPort[port].Rx_Buffer), *(Buffaddr + data_count));           
            
				// The following are for software flow control
				if(uart_escape_state==0)
				{
					if(*(Buffaddr + data_count) == 0x77)
					{
						uart_escape_state=0x77;
					} else
					{
						data_count++;
					}
            
				} else if(uart_escape_state == 0x77)
				{
					switch(*(Buffaddr + data_count))
					{
						case 0x01:
							*(Buffaddr+data_count) = UARTPort[port].DCB.xonChar;
							data_count++;
							break;
						case 0x02:                  
							*(Buffaddr+data_count)=UARTPort[port].DCB.xoffChar; 
							data_count++;
							break;               
						case 0x03:                  
							*(Buffaddr + data_count) = 0x77;
							data_count++;
							break;      
						default:
							break;
               
					}
					uart_escape_state=0x0;        
            
				}
			}   
      
		} else // HW flow control
		{
			for(index = 0; (index < real_count) && (data_count < Length); index++)
			{
				Buf_Pop(&(UARTPort[port].Rx_Buffer),*(Buffaddr + data_count));
				data_count++;
			}
      		}   

      		// satisfy uart owner request, so break
	 	if (data_count == Length) break;            

		// disable interrupt
		DisableRxIntr(UART_BaseAddr[port]);

		Buf_GetBytesAvail(&(UARTPort[port].Rx_Buffer),real_count);
      		// there is no data in ringbuffer, so break
		if(real_count == 0)
		{
			send_Rxilm[port] = KAL_TRUE;  
			// enable interrupt
			EnableRxIntr(UART_BaseAddr[port]); 
			break;
		}

		/* enable interrupt*/
		EnableRxIntr(UART_BaseAddr[port]);
	} while(KAL_TRUE);        
   
	return data_count;
}

#ifdef DRV_DEBUG

void UART_DMA_PutBytes(UART_PORT port, kal_uint8 *Buffaddr, kal_uint16 Length)
{
	if(port>=uart_port3){
		return;
	}
	clean_and_invalidate_dcache(CPU_CACHE_LINE_ALIGN_ADDR((kal_uint32)Buffaddr), CPU_CACHE_LINE_ALIGN_LEN((kal_uint32)Buffaddr, (kal_uint32)Length));

	HDMA_BUF0_PROG_ADDR_CONFIG(port+2, (kal_uint32)Buffaddr);
	HDMA_BUF0_XFER_SIZE_CONFIG(port+2, (kal_uint32)Length);

	Data_Sync_Barrier();

	HDMA_BUF0_START(port+2);
}

kal_uint16 BMT_PutBytes(UART_PORT port, kal_uint8 *Buffaddr, kal_uint16 Length)
{
	kal_uint16 real_count, index;
    #if defined(DRV_DEBUG_BUFFER_DMA_MODE)
	kal_uint16 is_empty;
	#endif
	if(port >= MAX_UART_PORT_NUM)
		return 0;

	Buf_GetRoomLeft(&(UARTPort[port].Tx_Buffer), real_count);
	if(real_count > Length)
	{
		real_count = Length;
	}

    /* 
     * The spin lock is used for the con-currency case of HDMA HISR
     * and dbg_print. The write/read pointer of buffer is the basis
     * whether to start the next DMA or NOT, so use the spin lock
     * to protect the pointer updatding actions
     */
    #if defined(DRV_DEBUG_BUFFER_DMA_MODE)
    kal_take_spinlock(print_buf_lock, KAL_INFINITE_WAIT);

    /* To check if DMA should be start in this API */
	Buf_IsEmpty(&(UARTPort[port].Tx_Buffer), is_empty);
    #endif
	
	for(index = 0; index < real_count; index++)
	{
		Buf_Push(&(UARTPort[port].Tx_Buffer), *(Buffaddr + index));
	}

    #if defined(DRV_DEBUG_BUFFER_DMA_MODE)
	kal_give_spinlock(print_buf_lock);
	#endif
	
	switch(port)
	{
		case uart_port1:
        #if defined(DRV_DEBUG_BUFFER_DMA_MODE)
            if (is_empty == Buff_isEmpty)
                UART_TxDMAHandler(&UARTPort[uart_port1], 0);
        #else
            EnableTxIntr(UART_BaseAddr[port]);	
        #endif
			break;
		case uart_port2:
			EnableTxIntr(UART_BaseAddr[port]);
			break;
		default:
			ASSERT(0);
			break;
	}


	return real_count;
}
#endif   /*DRV_DEBUG*/

/*************************************************************************
   * FUNCTION                                                            
   *	UART_GetTxWorkingMode
   *
   * DESCRIPTION                                                           
   *	
   *	This function is to get the uart TX working mode.
   *
   * PARAMETERS
   *  port        - the uart port
   *
   *  RETURNS
   *  UART_ON_VFIFO: the uart port Tx working on VFIFO mode
   *  UART_ON_DMA: the uart port Tx working on normal DMA mode
   *  UART_ON_MCU: the uart port Tx working on sw mode 
   *
   * Global AFFECTED
   *
   *************************************************************************/
UART_WORKING_MODE UART_GetTxWorkingMode(UART_PORT port)
{
	if(UART_IsVfifoSetting(port, TX_VFIFO))
		return UART_ON_VFIFO;

	return UART_ON_MCU;
}

kal_uint16 U_PutBytes(UART_PORT port, kal_uint8 *Buffaddr, kal_uint16 Length, module_type ownerid )
{
	kal_uint16 real_count, index;
	if(port >= MAX_UART_PORT_NUM)
		return 0;
	
	Buf_GetRoomLeft(&(UARTPort[port].Tx_Buffer), real_count);
	if(real_count > Length)
	{
		real_count = Length;
	}
	
	for(index = 0; index < real_count; index++)
	{
		Buf_Push(&(UARTPort[port].Tx_Buffer), *(Buffaddr + index));
	}
	   
	switch(port)
	{
		case uart_port1:
			EnableTxIntr(UART_BaseAddr[port]);	  
			break;
		case uart_port2:
			EnableTxIntr(UART_BaseAddr[port]);
			break;
		default:
			ASSERT(0);
			break;
	}
	return real_count;
}

#ifndef __ROMSA_SUPPORT__ /* Note: for ROM code */

#if defined(__MTK_INTERNAL__) && defined(__MTK_TARGET__)
kal_uint16 DEVDRV_LS_INTERNCODE 
#else
kal_uint16 
#endif
U_PutISRBytes(UART_PORT port, kal_uint8 *Buffaddr, kal_uint16 Length, module_type ownerid)
{
	return 0;
}
#endif /* Note: for ROM code */

#if defined(__MTK_INTERNAL__) && defined(__MTK_TARGET__)
kal_uint16 DEVDRV_LS_INTERNCODE 
#else
kal_uint16 
#endif
U_SendISRData(UART_PORT port, kal_uint8 *Buffaddr, kal_uint16 Length,kal_uint8 mode, kal_uint8 escape_char, module_type ownerid)
{
	return 0;
}

kal_uint16 U_SendData(UART_PORT port, kal_uint8 *Buffaddr, kal_uint16 Length,kal_uint8 mode,kal_uint8 escape_char, module_type ownerid)
{ 
	return 0;
}

//============================== ISR level ====================
/*============================ UART1 ========================*/
void UART_RLSHandler(void *parameter)
{
	kal_uint16 LSR;
	UARTStruct *UARTData = (UARTStruct *) parameter;
	kal_uint32 UART_BASE;

	if(UARTData->port_no >= MAX_UART_PORT_NUM)
		return;
   
	UART_BASE = UART_BaseAddr[UARTData->port_no];
	LSR = DRV_UART_Reg(UART_LSR(UART_BASE));
/*
	if(LSR & UART_LSR_OE) dbg_print("Overrun Error\n\r");
	if(LSR & UART_LSR_PE) dbg_print("Parity Error\n\r");
	if(LSR & UART_LSR_FE) dbg_print("Framing Error\n\r");
*/
	if(LSR & UART_LSR_BI)
	{
		UARTData->breakDet = KAL_TRUE;
		U_Purge(UARTData->port_no, RX_BUF, UARTPort[UARTData->port_no].ownerid);
	}
   
	if((LSR & UART_LSR_OE) || (LSR & UART_LSR_FIFOERR))
	{
		//for check BT overwrite UART FIFO, because BT do not use flow control, lost data will cause BT fail
//		if((UARTPort[UARTData->port_no].ownerid == MOD_BT))
//		{
//			UART_DBG(__LINE__, UART_GetTimeStamp(), ust_get_current_time(), LSR);
//			ASSERT(!(LSR & UART_LSR_OE)); // BT send too fast, VFIFO can not get bus, overwrite UART FIFO
//		}   	   
		DisableRLSIntr(UART_BASE);
	}
}

void UART_Calback(void *parameter) {}

void UART_SetRateFix(UART_PORT  port) {}

int uart_pio_get_data_like_dma(UART_PORT port, kal_uint8 *ptr_dat, kal_uint32 allow_len)
{
	int real_len = 0;
	kal_uint32 base = UART_BaseAddr[port];
	if ((DRV_Reg8(UART_LSR(base))&UART_LSR_DR) == 0) {
			/* RX no data */
			return 0;
	}
	for(;;) {
		while ((real_len < allow_len) && (DRV_Reg8(UART_LSR(base))&UART_LSR_DR)) {
			*ptr_dat++ = DRV_Reg8(UART_RBR(base));
			real_len ++;
		}

		if (real_len == allow_len) {
			/* Got Enough data */
			break;
		}

		/* 32k timer, 30us */
		kal_uint32 delayTime1;
		delayTime1 = drv_get_current_time()+3;	/* delay 60~90us*/
		while(delayTime1 != drv_get_current_time()) {
			if ((DRV_Reg8(UART_LSR(base))&UART_LSR_DR))
				break;
				
		}

		if ((DRV_Reg8(UART_LSR(base))&UART_LSR_DR) == 0) {
			/* RX Timeout */
			break;
		}
	}

	return real_len;
}
void UART_RecHandler(void *parameter) {
	   UARTStruct *UARTData=(UARTStruct *)parameter;
	   kal_uint32 UART_BASE;
	   kal_uint16 RoomLeft;
	   kal_uint16 LSR;
	   kal_uint8  cRXChar;
	   if(UARTData->port_no >= MAX_UART_PORT_NUM)
		  return;
		  
	   UART_BASE = UART_BaseAddr[UARTData->port_no];   
	   Buf_GetRoomLeft(&(UARTData->Rx_Buffer),RoomLeft);
	  		
	   while (RoomLeft)
	   {
		  LSR = DRV_UART_Reg(UART_LSR(UART_BASE));
		  if (LSR & UART_LSR_BI)
		  {
			 UARTData->breakDet = KAL_TRUE;
			 U_Purge(UARTData->port_no,RX_BUF,UARTPort[UARTData->port_no].ownerid);
			 LSR = DRV_UART_Reg(UART_LSR(UART_BASE));
		  }
		  
		  if (LSR & UART_LSR_DR)
		  {
  	    
			 cRXChar = (kal_uint8)DRV_UART_Reg(UART_RBR(UART_BASE));
	
			 Buf_Push(&(UARTData->Rx_Buffer),cRXChar);
			 RoomLeft--;		 
		  }
		  else
		  {
			 break;
		  }
	   }	   
	   if (!RoomLeft)	/*buffer is full*/
		  DisableRxIntr(UART_BASE);


}

#if defined(DRV_DEBUG_BUFFER_DMA_MODE)
/* This function might be called by HISR and dbg_print */
void UART_TxDMAHandler(void *parameter, kal_uint8 chk_done)
{
    UARTStruct *UARTData = (UARTStruct *) parameter;
    kal_uint16 real_count_TASK, done_count;
    BUFFER_INFO *TxBuf = (BUFFER_INFO *)(&(UARTData->Tx_Buffer));

    if(UARTData->port_no >= MAX_UART_PORT_NUM)
        return;

    /* 
     * The spin lock is used for the con-currency case of HDMA HISR
     * and dbg_print. The write/read pointer of buffer is the basis
     * whether to start the next DMA or NOT, so use the spin lock
     * to protect the pointer updatding actions
     */
    kal_take_spinlock(print_buf_lock, KAL_INFINITE_WAIT);
    
    if (chk_done) {
        done_count = DRV_Reg32(GDMA_HCCR(UARTData->port_no+2)) & 0xFFFF;

        if (done_count) {
            BRead(TxBuf) += done_count;
            if (BRead(TxBuf) >= BLength(TxBuf))
                BRead(TxBuf) -= BLength(TxBuf);
        }
    }

    Buf_GetBytesAvail_DMA(&(UARTData->Tx_Buffer), real_count_TASK);

    kal_give_spinlock(print_buf_lock);

    if (real_count_TASK) {
        clean_and_invalidate_dcache(CPU_CACHE_LINE_ALIGN_ADDR((kal_uint32)BuffRead(TxBuf)), 
            CPU_CACHE_LINE_ALIGN_LEN((kal_uint32)BuffRead(TxBuf), (kal_uint32)real_count_TASK));
        
    	HDMA_BUF0_PROG_ADDR_CONFIG(UARTData->port_no+2, (kal_uint32)BuffRead(TxBuf));
    	HDMA_BUF0_XFER_SIZE_CONFIG(UARTData->port_no+2, (kal_uint32)real_count_TASK);
    	HDMA_BUF0_START(UARTData->port_no+2);

    	return;
	}
}
#endif

void UART_TrxHandler(void *parameter)
{
	UARTStruct *UARTData = (UARTStruct *) parameter;
	kal_uint32 UART_BASE;
	kal_uint16 byteCount, index;
	kal_uint16 real_count_TASK, real_count = 0;
	kal_uint16 offset;
	kal_uint8 TX_DATA;

	if(UARTData->port_no >= MAX_UART_PORT_NUM)
		return;

	UART_BASE = UART_BaseAddr[UARTData->port_no];

	byteCount = UART1_TxFIFO_DEPTH;

	if(real_count != byteCount)
	{
		Buf_GetBytesAvail(&(UARTData->Tx_Buffer), real_count_TASK);
		offset = byteCount - real_count;
		real_count = real_count_TASK;
		if(real_count_TASK > offset)
		{
			real_count = offset;
		}
      
		for(index = 0; index < real_count; index++)
		{
			Buf_Pop(&(UARTData->Tx_Buffer),TX_DATA);
			DRV_UART_WriteReg(UART_THR(UART_BASE), (kal_uint16) TX_DATA);
		}
	}

	Buf_GetBytesAvail(&(UARTData->Tx_Buffer), real_count_TASK);
	if(real_count_TASK == 0)
		DisableTxIntr(UART_BASE);
}

void UART_MsHandler(void *parameter) {}

//Bei add for get irq code
kal_uint8 UART_GetIRQCode(UART_PORT port)
{
	kal_uint8 IRQ_code = 0;
	switch(port)
	{
		case uart_port1:
    		 IRQ_code = IRQ_UART_MD0_CODE;
			 break;
		case uart_port2:
    		 IRQ_code = IRQ_UART_MD1_CODE;
			 break;
		default:
			 break;
	}
	return IRQ_code;
}

void UART1_LISR(kal_uint32 vector)
{
	IRQMask(IRQ_UART_MD0_CODE);
	kal_activate_hisr_index(UART_1_HISR);
}

void UART1_HISR(void)
{
	kal_uint16 IIR;
   
	IIR = DRV_UART_Reg(UART_IIR(UART_BaseAddr[uart_port1]));
	if (IIR & UART_IIR_INT_INVALID)
	{
		IRQClearInt(IRQ_UART_MD0_CODE);
		IRQUnmask(IRQ_UART_MD0_CODE);
      
		return;
	}

	switch(IIR & UART_IIR_INT_MASK)
	{
	
		case UART_IIR_RLS:
			UART_RLSHandler(&UARTPort[uart_port1]);
			break;
		case UART_IIR_CTI:
		case UART_IIR_RDA:
#ifdef __SLT_TOOL_SUPPORT__
			UART_RecHandler(&UARTPort[uart_port1]) ;
#endif
			break;
		case UART_IIR_THRE:
			UART_TrxHandler(&UARTPort[uart_port1]);
			break;
		case UART_IIR_MS :
		case UART_IIR_SWFlowCtrl:
		case UART_IIR_HWFlowCtrl:
		default:
			break;
	}
	IRQClearInt(IRQ_UART_MD0_CODE);
	IRQUnmask(IRQ_UART_MD0_CODE);
}

/*============================ UART2 ========================*/
void UART2_LISR(kal_uint32 vector)
{
	IRQMask(IRQ_UART_MD1_CODE);
	kal_activate_hisr_index(UART_2_HISR);
}

void UART2_HISR(void)
{
	kal_uint16 IIR;

	IIR = DRV_UART_Reg(UART_IIR(UART_BaseAddr[uart_port2]));
	if (IIR & UART_IIR_INT_INVALID)
	{
		IRQClearInt(IRQ_UART_MD1_CODE);
		IRQUnmask(IRQ_UART_MD1_CODE);
      
		return;
	}

	switch(IIR & UART_IIR_INT_MASK)
	{
	
		case UART_IIR_RLS:
			UART_RLSHandler(&UARTPort[uart_port2]);
			break;
		case UART_IIR_CTI:
		case UART_IIR_RDA:
			break;
		case UART_IIR_THRE:
			UART_TrxHandler(&UARTPort[uart_port2]);
			break;
		case UART_IIR_MS :
		case UART_IIR_SWFlowCtrl:
		case UART_IIR_HWFlowCtrl:
		default:
			break;
	}
	IRQClearInt(IRQ_UART_MD1_CODE);
	IRQUnmask(IRQ_UART_MD1_CODE);
}


typedef struct _ut_hdma_intr_s{
	kal_uint32 hdma_done_int;
	kal_uint32 hdma_qe_int;
	kal_uint32 hdma_len_err_int;
	kal_uint32 hdma_bd_cserr_int;
	kal_uint32 hdma_gpd_cserr_int;
}ut_hdma_intr_t;

volatile static ut_hdma_intr_t ut_hdma_intr_record[2];


void uart_hdma_lisr(kal_uint32 vector)
{
	IRQMask(UART_HDMA_INTR_ID);
	kal_activate_hisr_index(GDMA2_HISR);
}

void uart_hdma_hisr(void)
{
	//kal_uint32 mask;
	kal_uint32 val, chl;
	kal_uint32 i;

	//mask = SaveAndSetIRQMask();

	val = DRV_Reg32(GDMA_GISAR_UART);

	//Set the interrupt record table
	for(i = 0; i < sizeof(ut_hdma_intr_record) / sizeof(ut_hdma_intr_t); i++ ){
		chl = i + 2;

		if(IS_HDMA_DONE_INTR(val, chl)){
			ut_hdma_intr_record[i].hdma_done_int++;

            #if defined(DRV_DEBUG_BUFFER_DMA_MODE)
    		if (chl == UART1_HDMA_TX_CHANNEL) {
    		    UART_TxDMAHandler(&UARTPort[uart_port1], 1);
    		}
    		#endif
		}

		if(IS_HDMA_QE_INTR(val, chl)){
			ut_hdma_intr_record[i].hdma_qe_int++;
			
            #if defined(__HMU_ENABLE__)
	            if (chl == UART1_HDMA_RX_CHANNEL) {
	                // trigger UARTCORE task to polling RX
	                hmu_hifeg_set(HIF_DRV_EG_HIF_TICK_EVENT_UART);
	            }
            #endif
		}

		if(IS_HDMA_GPD_CSERR_INTR(val, chl)){
			ut_hdma_intr_record[i].hdma_gpd_cserr_int++;
			ASSERT(0);
		}

		if(IS_HDMA_BD_CSERR_INTR(val, chl)){
			ut_hdma_intr_record[i].hdma_bd_cserr_int++;
			ASSERT(0);
		}

		if(IS_HDMA_LENERR_INTR(val, chl)){
			ut_hdma_intr_record[i].hdma_len_err_int++;
			ASSERT(0);
		}
	}

	//Clear the interrupt status
	HDMA_INT_CLEAR_ALL();

	//RestoreIRQMask(mask);
	IRQUnmask(UART_HDMA_INTR_ID);
}

#ifdef __USB_COM_PORT_ENABLE__
extern UARTStruct USB2UARTPort[MAX_USB_PORT_NUM];
#endif   /*__USB_COM_PORT_ENABLE__*/

void UART_SetSleepEnable(UART_PORT port, kal_bool enable)
{
	DRV_UART_WriteReg(UART_SLEEP_EN(UART_BaseAddr[port]), enable);
}

//This API only for test purpose, can only be called by MEUT DVT test.
//***********  do not call this API directly   ************
//***********  do not call this API directly   ************
//***********  do not call this API directly   ************
void UART_set_FIFO_trigger(UART_PORT port, kal_uint16 tx_level, kal_uint16 rx_level)
{
	if(port >= MAX_UART_PORT_NUM)
		return;
	DRV_UART_WriteReg(UART_FCR(UART_BaseAddr[port]), ((tx_level<<4) | (rx_level<<6) | 0x7));
}

void U_Register_TX_cb(UART_PORT port, module_type ownerid, UART_TX_FUNC func) {}
void U_Register_RX_cb(UART_PORT port, module_type ownerid, UART_RX_FUNC func) {}
void UART_TurnOnPower(UART_PORT port, kal_bool enable) {}

/* This is to check that all the data in UART TX ring buffer is empty. */
kal_bool UART_CheckTxBufferEmpty(UART_PORT port)
{
	kal_uint8 result;
	void *p_cur_gpd;
	if(port >= MAX_UART_PORT_NUM)
		return KAL_FALSE;

// HDMA
	if(uart_wait_tgpd_head[port] != NULL || uart_wait_tgpd_tail[port] != NULL) return KAL_FALSE;
	p_cur_gpd = uart_tgpd_head[port];	
	while(1)
	{
		if(p_cur_gpd == NULL) break;
		if(p_cur_gpd == uart_tgpd_tail[port]) break;
		if(QBM_DES_GET_HWO(p_cur_gpd + 0x40000000)) return KAL_FALSE;
		p_cur_gpd = QBM_DES_GET_NEXT(p_cur_gpd);
	}

	Buf_IsEmpty(&(UARTPort[port].Tx_Buffer), result);
	return ((Buff_isEmpty == result) ? KAL_TRUE : KAL_FALSE);
}

/* This is to check that all TX data have been sent out 
including UART TX ring buffer and UART FIFO. */
kal_bool UART_CheckTxAllSentOut(UART_PORT port)
{
   if(port >= MAX_UART_PORT_NUM)
      return KAL_FALSE;

   if (UART_CheckTxBufferEmpty(port) == KAL_FALSE)
      return KAL_FALSE;
   if (UART_LSR_TEMT & DRV_UART_Reg(UART_LSR(UART_BaseAddr[port])))
      return KAL_TRUE;
   else
      return KAL_FALSE;
}


// this function has a problem
void UART_GetTxBufferSize(UART_PORT port, kal_uint32 *total_size, kal_uint32 *rest_size)
{
	if(port >= MAX_UART_PORT_NUM)
		return;
	*total_size = UARTPort[port].Tx_Buffer.Length;
	if(uart_tgpd_head[port] != NULL || uart_wait_tgpd_head[port] != NULL)
	{
		*rest_size = uart_cal_tgpd_buf_length((void *) GDMA_HDCPRN((port + 2)), (void *) uart_tgpd_tail[port]);
		*rest_size += uart_cal_tgpd_buf_length((void *) uart_wait_tgpd_head[port], (void *) uart_wait_tgpd_tail[port]);

	} else
		Buf_GetBytesAvail(&(UARTPort[port].Tx_Buffer), *rest_size);
}


/*
* FUNCTION                                                            
*	UART_VFIFO_TX_DMA_Enable
*
* DESCRIPTION                                                           
*   	for
*
* CALLS  
*	This function is called to enable or disable VFIFO DMA TX
*     it is for logacc only , logacc will take UART TX , it might cause UART & VFIFO DMA sync problem
*     so we must disable VFIFO DMA when logacc on
*     enable and reset VFIFO DMA when logacc off
*
* PARAMETERS
*	port: uart port
*	enable: disable or enable VFIFO DMA TX
* RETURNS
*	None
*
* GLOBALS AFFECTED
*   external_global
*/
void UART_VFIFO_TX_DMA_Enable(UART_PORT port,kal_bool enable) {}




// Used under ASSERT condition
// This has effect only when the port does NOT support VFIFO and used as Catcher port
// After ASSERT, DHL will wait UART to send out all the data before ASSERT.
// But now, all the interrupts are disabled, DHL may wait forever when the UART port is configured with DMA
// To solve this problem, we provide this function for DHL to call 
// in order to send out all the data in ring buffer before ASSERT
// DHL will open UART port again after previous data is sent out
void UART_AssertWaitPrevDataSentOut(UART_PORT port){
	kal_uint16 LSR;
	kal_uint16 TX_DATA;

	if(port >= MAX_UART_PORT_NUM)
		return;
   
	// Manually send out data by MCU polling
	while(!UART_CheckTxBufferEmpty(port))
	{
		LSR = DRV_UART_Reg(UART_LSR(UART_BaseAddr[port]));
		if(LSR & UART_LSR_THRE)
		{
			Buf_Pop(&(UARTPort[port].Tx_Buffer), TX_DATA);
			DRV_UART_WriteReg(UART_THR(UART_BaseAddr[port]), (kal_uint16) TX_DATA);
		}
	}

	// Wait UART controller to sent out the data in FIFO
	while(!UART_CheckTxAllSentOut(port));
}

kal_uint32 UART_Get_Maxbaudrate(UART_PORT port)
{
	return 6000000;
}

kal_uint32 UART_PutBytesIor(UART_PORT port, void *putIor)
{
	void *p_ior;
	if(port >= MAX_UART_PORT_NUM)
		return 0;

	p_ior = putIor;
	while(1)
	{
		// if there is no tgpd, atach a bypass tgpd
		uart_en_q_de_q_with_mutex(port, UART_TX, UART_EN_Q, ((tty_io_request_t *) putIor)->first_gpd, ((tty_io_request_t *) putIor)->last_gpd);
		if(((tty_io_request_t *) p_ior)->next_request == NULL)
		{
			break;
		} else
		{
			p_ior = ((tty_io_request_t *) p_ior)->next_request;
		}
	}

	return 0;
}

kal_uint32 UART_PutBytesIor_LIGHT(UART_PORT port, void *putIor)
{
	void *p_ior;
	if(port >= MAX_UART_PORT_NUM)
		return 0;

	p_ior = putIor;
	while(1)
	{
		// if there is no tgpd, atach a bypass tgpd
		uart_en_q_de_q_with_mutex(port, UART_TX, UART_EN_Q_LIGHT, ((tty_io_request_t *) putIor)->first_gpd, ((tty_io_request_t *) putIor)->last_gpd);
		if(((tty_io_request_t *) p_ior)->next_request == NULL)
		{
			break;
		} else
		{
			p_ior = ((tty_io_request_t *) p_ior)->next_request;
		}
	}

	return 0;
}

kal_uint32 UART_GetBytesIor(UART_PORT port, void *ior)
{
	void *p_ior;

	if(port >= MAX_UART_PORT_NUM)
		return 0;

	p_ior = ior;
	while(1)
	{
		uart_en_q_de_q_with_mutex(port, UART_RX, UART_EN_Q, ((tty_io_request_t *) p_ior)->first_gpd, ((tty_io_request_t *) p_ior)->last_gpd);
		if(((tty_io_request_t *) p_ior)->next_request == NULL)
		{
			break;
		} else
		{
			p_ior = ((tty_io_request_t *) p_ior)->next_request;
		}
	}

	return 0;
}


void UART_DriverInit(UART_PORT port)
{
	module_type ownerid;
	static kal_bool b_uart_custom_init = KAL_FALSE;
	kal_bool Is_OpenUart = KAL_TRUE;

	ownerid = (MOD_UART1_HISR + port);
		
	// Customization 
	if(b_uart_custom_init == KAL_FALSE)
	{
		uart_customize_init();
		b_uart_custom_init = KAL_TRUE;
	}

	if(Is_OpenUart == KAL_TRUE)
	{
		UART_HWInit(port);

		pUart_CMD_FUNC[port]= &UartDriver;

		U_Open(port, ownerid);
	}

	// create mutex
	if(mutex_status == KAL_FALSE && !INT_QueryExceptionStatus())
	{
		mutexid = kal_create_mutex("DRV_UART");
		mutex_status = KAL_TRUE;
	}
}

void UART_SetNeedTxDoneCb(UART_PORT port, kal_bool needTxDoneCb, module_type ownerid)
{
	UARTPort[port].need_tx_done_cb = needTxDoneCb;
}

kal_uint32 uart_cal_tgpd_buf_length(void *head, void *tail)
{
	void *gpd_cur, *bd_cur;
	kal_uint32 sum = 0;

	if(head == NULL || tail == NULL)
		return 0;

	gpd_cur = head;
	while(1)
	{
		if(QBM_DES_GET_BPS(gpd_cur) == 0)
		{
			if(QBM_DES_GET_BDP(gpd_cur))
			{
				bd_cur = QBM_DES_GET_DATAPTR(gpd_cur);
				while(1)
				{
					sum += QBM_DES_GET_DATALEN(bd_cur);

					if(QBM_DES_GET_EOL(bd_cur)) {break;}
					else {bd_cur = QBM_DES_GET_NEXT(bd_cur);}
				}
			} else
			{
				sum += QBM_DES_GET_DATALEN(gpd_cur);
			}
		}

		if(gpd_cur == tail) {return sum;}
		else {gpd_cur = QBM_DES_GET_NEXT(gpd_cur);}
	}
}

void uart_en_q_de_q_with_mutex(UART_PORT port, kal_bool tx_or_rx, kal_uint8 en_q_or_de_q, void *p_ior_head, void *p_ior_tail)
{
	void *p_gpd_head = NULL;
	void *p_gpd_tail = NULL;
	void *p_gpd_cur = NULL;
	kal_uint32 queue_len = 0;
	tty_io_request_t *ior = NULL;
if(!kal_if_hisr()){
	// lock mutex
	kal_take_mutex(mutexid);
}
	DCL_HANDLE handle = DclSerialPort_Open(port, 0);

	if(tx_or_rx == (kal_bool) UART_TX)
	{
		if(en_q_or_de_q == UART_EN_Q)
		{

			uart_cal_chksum_and_flush_gpd_list(p_ior_head, p_ior_tail);

			if(uart_wait_tgpd_head[port] == NULL && uart_wait_tgpd_tail[port] == NULL)
			{
				uart_wait_tgpd_head[port] = p_ior_head;
				uart_wait_tgpd_tail[port] = p_ior_tail;
			} else
			{
				qbmt_common_en_q_rx(p_ior_head, p_ior_tail, (void **) &uart_wait_tgpd_head[port], (void **) &uart_wait_tgpd_tail[port]);
			}
		} else if(en_q_or_de_q == UART_EN_Q_LIGHT)
		{
			if(uart_wait_tgpd_head[port] == NULL && uart_wait_tgpd_tail[port] == NULL)
			{
				uart_wait_tgpd_head[port] = p_ior_head;
				uart_wait_tgpd_tail[port] = p_ior_tail;
			} else
			{
				qbmt_common_en_q_rx(p_ior_head, p_ior_tail, (void **) &uart_wait_tgpd_head[port], (void **) &uart_wait_tgpd_tail[port]);
			}
		} else
		{
			if(uart_tgpd_head[port] != NULL)
			{
				if(en_q_or_de_q == UART_DE_Q)
				{
					queue_len = qbmt_de_q((void **) &uart_tgpd_head[port], (void **) &uart_tgpd_tail[port], (void **) &p_gpd_head, (void **) &p_gpd_tail);
				} else if(en_q_or_de_q == UART_DE_Q_ALL)
				{
#if defined(META_MODE_SW_ESCAPING)
                    if(kal_query_boot_mode() != FACTORY_BOOT)
#endif
                    {
					HDMA_BUF0_STOP((2 + port));
					}
					uart_clear_hwo_of_gpd_list(uart_tgpd_head[port], uart_tgpd_tail[port]);
					queue_len = qbmt_de_q((void **) &uart_tgpd_head[port], (void **) &uart_tgpd_tail[port], (void **) &p_gpd_head, (void **) &p_gpd_tail);				
					QBM_FREE_ONE(uart_tgpd_head[port]);
					
					if(uart_wait_tgpd_head[port] != NULL)
					{
						if(queue_len > 0)
						{
							qbmt_common_en_q_rx(uart_wait_tgpd_head[port], uart_wait_tgpd_tail[port], (void **) &p_gpd_head, (void **) &p_gpd_tail);
						} else
						{
							p_gpd_head = uart_wait_tgpd_head[port];
							p_gpd_tail = uart_wait_tgpd_tail[port];
							queue_len = 1;
						}
						uart_clear_hwo_of_gpd_list(p_gpd_head, p_gpd_tail);
					}				

					uart_tgpd_head[port] = NULL;
					uart_tgpd_tail[port] = NULL;
					uart_wait_tgpd_head[port] = NULL;
					uart_wait_tgpd_tail[port] = NULL;
				} else ASSERT(0);

				if(queue_len > 0)
				{
					if(UARTPort[port].need_tx_done_cb)
					{
						ior = (tty_io_request_t *) QBM_DES_GET_SW_CTRL_FIELD(p_gpd_head);
						ior->first_gpd = p_gpd_head;
						ior->last_gpd = p_gpd_tail;
						ior->next_request = NULL;
						DclSerialPort_DrvTxDone(handle, kal_get_active_module_id(), ior);
					} else
					{
						qbmt_dest_q((void *) p_gpd_head, (void *) p_gpd_tail);
					}
				}
			}
		}
	} else
	{
		if(en_q_or_de_q == (kal_bool) UART_EN_Q)
		{
			if(uart_rgpd_head[port] == NULL && uart_rgpd_tail[port] == NULL)
			{
				uart_cal_chksum_and_flush_gpd_list(p_ior_head, p_ior_tail);

				QBM_DES_CLR_HWO(p_ior_tail);
				QBM_CACHE_FLUSH((void *) p_ior_tail, QBM_SIZE_GPD_BD_TST);
				HDMA_BUF0_PROG_ADDR_CONFIG((3 + port), p_ior_head);
				uart_rgpd_head[port] = p_ior_head;
				uart_rgpd_tail[port] = p_ior_tail;
				HDMA_BUF0_START((3 + port));
            } else {
				qbmt_common_en_q_rx(p_ior_head, p_ior_tail, (void **) &uart_rgpd_head[port], (void **) &uart_rgpd_tail[port]);
				uart_cal_chksum_and_flush_gpd_list(uart_rgpd_head[port], uart_rgpd_tail[port]);
				QBM_DES_CLR_HWO(uart_rgpd_tail[port]);
				QBM_CACHE_FLUSH((void *) uart_rgpd_tail[port], QBM_SIZE_GPD_BD_TST);
				
				HDMA_BUF0_RESUME((3 + port));
			}
		} else
		{
			if(uart_rgpd_head[port] == NULL)
			{
				if(!kal_if_hisr()){
				kal_give_mutex(mutexid);
				}
				return;
			} else
			{
				if(en_q_or_de_q == UART_DE_Q)
				{
					queue_len = qbmt_de_q((void **) &uart_rgpd_head[port], (void **) &uart_rgpd_tail[port], (void **) &p_gpd_head, (void **) &p_gpd_tail);
				} else if(en_q_or_de_q == UART_DE_Q_ALL)
				{
					// stop q
					HDMA_BUF0_STOP((port + 3));
					// de-Q all GPDs
					p_gpd_head = uart_rgpd_head[port];
					p_gpd_tail = uart_rgpd_tail[port];
					uart_rgpd_head[port] = NULL;
					uart_rgpd_tail[port] = NULL;
					queue_len = 1; // not real queue length
				}

				if(p_gpd_head != NULL && p_gpd_tail != NULL && queue_len > 0)
				{
#if defined(META_MODE_SW_ESCAPING) && !defined(UART_SIM_QMU)
                    if(kal_query_boot_mode() == FACTORY_BOOT){
				   		UART_META_ExBytes(port, p_gpd_head, p_gpd_tail);
					}
#endif
					ior = (tty_io_request_t *) QBM_DES_GET_SW_CTRL_FIELD(p_gpd_head);
					ior->first_gpd = p_gpd_head;
					ior->last_gpd = p_gpd_tail;
					ior->next_request = NULL;
 					DclSerialPort_DrvRx(handle, kal_get_active_module_id(), ior); // need to modify
				}
			}
		}
	}

	if(uart_wait_tgpd_head[port] != NULL && uart_wait_tgpd_tail[port] != NULL && !(DRV_Reg32(UART_LCR(UART_BaseAddr[port])) & UART_LCR_BREAK))
	{
		if(uart_tgpd_head[port] == NULL && uart_tgpd_tail[port] == NULL)
		{
			uart_tgpd_head[port] = uart_wait_tgpd_head[port];
			uart_tgpd_tail[port] = uart_wait_tgpd_tail[port];

			// connect a BPS GPD to the tail
			qbmt_alloc_q(QBM_TYPE_TGPD_BPS, 1, (void **) &p_gpd_cur, (void **) &p_gpd_cur);
			ASSERT(p_gpd_cur!= NULL);

			qbmt_common_en_q_rx(p_gpd_cur, p_gpd_cur, (void **) &uart_tgpd_head[port], (void **) &uart_tgpd_tail[port]);
#if defined(META_MODE_SW_ESCAPING)
			if(kal_query_boot_mode() == FACTORY_BOOT){
				UART_META_PutBytes(port,uart_tgpd_head[port], uart_tgpd_tail[port]);
			}else
#endif
			{
			HDMA_BUF0_PROG_ADDR_CONFIG((2 + port), uart_tgpd_head[port]);
			HDMA_BUF0_START((2 + port));
			}
			uart_wait_tgpd_head[port] = NULL;
			uart_wait_tgpd_tail[port] = NULL;
		} else if(QBM_DES_GET_BPS(uart_tgpd_head[port]) && QBM_DES_GET_BPS(uart_tgpd_tail[port]))
		{
			QBM_FREE_ONE(uart_tgpd_head[port]);

			uart_tgpd_head[port] = uart_wait_tgpd_head[port];
			uart_tgpd_tail[port] = uart_wait_tgpd_tail[port];

			// connect a BPS GPD to the tail
			qbmt_alloc_q(QBM_TYPE_TGPD_BPS, 1, (void **) &p_gpd_cur, (void **) &p_gpd_cur);
			ASSERT(p_gpd_cur!= NULL);
			qbmt_common_en_q_rx(p_gpd_cur, p_gpd_cur, (void **) &uart_tgpd_head[port], (void **) &uart_tgpd_tail[port]);
#if defined(META_MODE_SW_ESCAPING)
            if(kal_query_boot_mode() == FACTORY_BOOT){
				UART_META_PutBytes(port,uart_wait_tgpd_head[port], uart_wait_tgpd_tail[port]);
			}else
#endif
			{
			HDMA_BUF0_PROG_ADDR_CONFIG((2 + port), uart_wait_tgpd_head[port]);
			HDMA_BUF0_START((2 + port));
			}
			uart_wait_tgpd_head[port] = NULL;
			uart_wait_tgpd_tail[port] = NULL;
		}
	}
	if(!kal_if_hisr()){
	// unlock mutex
	kal_give_mutex(mutexid);
	}
	return;
}


void uart_qbm_virt_to_phy(void** pp_gpd_head, void** pp_gpd_tail)
{
	void *gpd_ptr = NULL, *gpd_ptr_tmp = NULL;
	void *bd_ptr = NULL, *bd_ptr_tmp = NULL;;
	void *pgd_data_ptr = NULL, *bd_data_ptr = NULL;

	*pp_gpd_head = (void*)virt_to_phys(*pp_gpd_head);
	gpd_ptr = *pp_gpd_head;
	while(1)
	{
		if(QBM_DES_GET_BDP(gpd_ptr))
		{
			bd_ptr = QBM_DES_GET_DATAPTR(gpd_ptr);
			bd_ptr = (void*)virt_to_phys(bd_ptr);
			QBM_DES_SET_DATAPTR(gpd_ptr,bd_ptr);
			qbm_cal_set_checksum_by_len((const kal_uint8 *)gpd_ptr, 12);
			while(1)
			{
				bd_data_ptr = QBM_DES_GET_DATAPTR(bd_ptr);
				bd_data_ptr = (void*)virt_to_phys(bd_data_ptr);
				QBM_DES_SET_DATAPTR(bd_ptr,bd_data_ptr);
				if(QBM_DES_GET_EOL(bd_ptr))
				{
					break;
				} else
				{
					bd_ptr_tmp = (void*)QBM_DES_GET_NEXT(bd_ptr);
					bd_ptr_tmp = (void*)virt_to_phys(bd_ptr_tmp);
					QBM_DES_SET_NEXT(bd_ptr,bd_ptr_tmp);
					qbm_cal_set_checksum_by_len((const kal_uint8 *)bd_ptr, 12);
					bd_ptr = QBM_DES_GET_NEXT(bd_ptr);
				}
			}
		} else
		{
			pgd_data_ptr = QBM_DES_GET_DATAPTR(gpd_ptr);
			pgd_data_ptr = (void*)virt_to_phys(pgd_data_ptr);
			QBM_DES_SET_DATAPTR(gpd_ptr,pgd_data_ptr);
		}

		if(gpd_ptr == *pp_gpd_tail)
		{
			break;
		} else
		{
			gpd_ptr_tmp = (void*)QBM_DES_GET_NEXT(gpd_ptr);
			gpd_ptr_tmp = (void*)virt_to_phys(gpd_ptr_tmp);
			QBM_DES_SET_NEXT(gpd_ptr,gpd_ptr_tmp);
			qbm_cal_set_checksum_by_len((const kal_uint8 *) gpd_ptr, 12);
			gpd_ptr =  QBM_DES_GET_NEXT(gpd_ptr);
		}

	}

}

void uart_qbm_phy_to_virt(void**pp_gpd_head, void**pp_gpd_tail)
{
	void *gpd_ptr = NULL, *gpd_ptr_tmp = NULL;
	void *bd_ptr = NULL, *bd_ptr_tmp = NULL;;
	void *pgd_data_ptr = NULL, *bd_data_ptr = NULL;

	
	*pp_gpd_head = (void*)phys_to_virt(*pp_gpd_head);
	QBM_CACHE_INVALID(*pp_gpd_head, QBM_SIZE_TGPD);
	gpd_ptr = *pp_gpd_head;
    	*pp_gpd_tail = (void*)phys_to_virt(*pp_gpd_tail);
	QBM_CACHE_INVALID(*pp_gpd_tail, QBM_SIZE_TGPD);
	while(1)
	{
		if(QBM_DES_GET_BDP(gpd_ptr))
		{
			bd_ptr = QBM_DES_GET_DATAPTR(gpd_ptr);
			bd_ptr = (void*)phys_to_virt(bd_ptr);
			QBM_CACHE_INVALID(bd_ptr, QBM_SIZE_TBD);
			QBM_DES_SET_DATAPTR(gpd_ptr,bd_ptr);
			
			while(1)
			{
				bd_data_ptr = QBM_DES_GET_DATAPTR(bd_ptr);
				bd_data_ptr = (void*)phys_to_virt(bd_data_ptr);
				QBM_CACHE_INVALID(bd_data_ptr, QBM_SIZE_CACHE_ALIGN(QBM_DES_GET_DATALEN(bd_data_ptr)));
				QBM_DES_SET_DATAPTR(bd_ptr,bd_data_ptr);

				if(QBM_DES_GET_EOL(bd_ptr))
				{
					break;
				} else
				{
					bd_ptr_tmp = (void*)QBM_DES_GET_NEXT(bd_ptr);
					bd_ptr_tmp = (void*)phys_to_virt(bd_ptr_tmp);
					QBM_CACHE_INVALID(bd_ptr_tmp, QBM_SIZE_TBD);
					QBM_DES_SET_NEXT(bd_ptr,bd_ptr_tmp);
					bd_ptr = QBM_DES_GET_NEXT(bd_ptr);
				}
			}
		} else
		{
			pgd_data_ptr = QBM_DES_GET_DATAPTR(gpd_ptr);
			pgd_data_ptr = (void*)phys_to_virt(pgd_data_ptr);
			QBM_CACHE_INVALID(pgd_data_ptr, QBM_SIZE_CACHE_ALIGN(QBM_DES_GET_DATALEN(pgd_data_ptr)));
			QBM_DES_SET_DATAPTR(gpd_ptr,pgd_data_ptr);
		}

		if(gpd_ptr == *pp_gpd_tail)
		{
			break;
		} else
		{
			gpd_ptr_tmp = (void*)QBM_DES_GET_NEXT(gpd_ptr);
			gpd_ptr_tmp = (void*)phys_to_virt(gpd_ptr_tmp);
			QBM_CACHE_INVALID(gpd_ptr_tmp, QBM_SIZE_TGPD);
			QBM_DES_SET_NEXT(gpd_ptr,gpd_ptr_tmp);			
			gpd_ptr =  QBM_DES_GET_NEXT(gpd_ptr);
		}

	}

}

void UART_META_PutBytes(UART_PORT port, void * gpd_head, void * gpd_tail){
	hdma_tbd_t *bd_ptr = NULL, *p_bd_cur =NULL;
	hdma_tgpd_t *gpd_ptr = NULL;
	kal_uint8 gpd_ext_len=0, bd_ext_len=0;
	kal_uint32	gpd_data_len=0, bd_data_len=0;
	kal_uint8 *gpd_ext_ptr=NULL, *gpd_data_ptr=NULL, *bd_ext_ptr=NULL, *bd_data_ptr=NULL;
	
	gpd_ptr = (hdma_tgpd_t*)gpd_head;
	while(1){
		if(QBM_DES_GET_HWO(gpd_ptr)==0){
			break;
		}
		if(QBM_DES_GET_BPS(gpd_ptr)){
		    QBM_DES_CLR_HWO(gpd_ptr);
		    QBM_CACHE_FLUSH(gpd_ptr, QBM_SIZE_TGPD);
			goto next;
		}
		if (QBM_DES_GET_EXTLEN(gpd_ptr)) {
			gpd_ext_len = QBM_DES_GET_EXTLEN(gpd_ptr);	
			gpd_ext_ptr = QBM_DES_GET_EXT(gpd_ptr);
			PutUARTDatas(port, UART_ESCAPE_CHAR, gpd_ext_ptr,gpd_ext_len);
			//U_SendData(port, gpd_ext_ptr, gpd_ext_len, FACTORY_BOOT, UART_ESCAPE_CHAR, UARTPort[port].ownerid);
		}
		if (QBM_DES_GET_BDP(gpd_ptr)) {
			bd_ptr = QBM_DES_GET_DATAPTR(gpd_ptr);
			p_bd_cur = bd_ptr;
			while (1) {
				if (QBM_DES_GET_EXTLEN(p_bd_cur)) {
					bd_ext_len = QBM_DES_GET_EXTLEN(p_bd_cur);
					bd_ext_ptr = QBM_DES_GET_EXT(p_bd_cur);
					PutUARTDatas(port, UART_ESCAPE_CHAR, bd_ext_ptr,bd_ext_len);
					//U_SendData(port, bd_ext_ptr, bd_ext_len, FACTORY_BOOT, UART_ESCAPE_CHAR, UARTPort[port].ownerid);

				}
				if (QBM_DES_GET_DATALEN(p_bd_cur)) {
					bd_data_len = QBM_DES_GET_DATALEN(p_bd_cur);
					bd_data_ptr = QBM_DES_GET_DATAPTR(p_bd_cur);
					PutUARTDatas(port, UART_ESCAPE_CHAR, bd_data_ptr,bd_data_len);
					//U_SendData(port, bd_data_ptr, bd_data_len, FACTORY_BOOT, UART_ESCAPE_CHAR, UARTPort[port].ownerid);
				}
				if (QBM_DES_GET_EOL(p_bd_cur)) {
					break;
				}
				p_bd_cur = (void *)QBM_DES_GET_NEXT(p_bd_cur);
			}
		} else{
		
			gpd_data_len = QBM_DES_GET_DATALEN(gpd_ptr);
			gpd_data_ptr = QBM_DES_GET_DATAPTR(gpd_ptr);
			PutUARTDatas(port, UART_ESCAPE_CHAR, gpd_data_ptr,gpd_data_len);
			//U_SendData(port, gpd_data_ptr, gpd_data_len, FACTORY_BOOT, UART_ESCAPE_CHAR, UARTPort[port].ownerid);
		}
		
		QBM_DES_CLR_HWO(gpd_ptr);
		QBM_CACHE_FLUSH(gpd_ptr, QBM_SIZE_TGPD);
		if(gpd_ptr == gpd_tail)
		{	
			break;
		} else
		{
next:
			gpd_ptr = (void *) QBM_DES_GET_NEXT(gpd_ptr);
		}
	}

    /* Cooperate with Non-Blocking CACHE API */
	MM_Sync();
}


void uart_cal_chksum_and_flush_gpd_list(void * gpd_head, void * gpd_tail)
{
	hdma_tbd_t *gpd_ptr = NULL, *bd_ptr = NULL;
	void *pgd_data_ptr = NULL, *bd_data_ptr = NULL;
	
	gpd_ptr = (hdma_tbd_t*)gpd_head;
	while(1)
	{
		QBM_DES_SET_HWO(gpd_ptr);
		qbm_cal_set_checksum_by_len((const kal_uint8 *) gpd_ptr, 12);
		QBM_CACHE_FLUSH((void *) gpd_ptr, QBM_SIZE_TGPD);

		if(QBM_DES_GET_BDP(gpd_ptr))
		{
			bd_ptr = QBM_DES_GET_DATAPTR(gpd_ptr);
			while(1)
			{
				qbm_cal_set_checksum_by_len((const kal_uint8 *) bd_ptr, 12);
				QBM_CACHE_FLUSH((void *) bd_ptr, QBM_SIZE_TBD);
				bd_data_ptr = QBM_DES_GET_DATAPTR(bd_ptr);
				QBM_CACHE_FLUSH((void *) bd_data_ptr, QBM_DES_GET_DATALEN(bd_ptr));

				if(QBM_DES_GET_EOL(bd_ptr))
				{
					break;
				} else
				{
					bd_ptr = (void *) QBM_DES_GET_NEXT(bd_ptr);
				}
			}
		} else
		{
			pgd_data_ptr = QBM_DES_GET_DATAPTR(gpd_ptr);
			QBM_CACHE_FLUSH((void *) pgd_data_ptr, QBM_DES_GET_DATALEN(gpd_ptr));		
		}

		if(gpd_ptr == gpd_tail)
		{
			break;
		} else
		{
			gpd_ptr = (void *) QBM_DES_GET_NEXT(gpd_ptr);
		}

	}

    /* Cooperate with Non-Blocking CACHE API */
    MM_Sync();
}

void uart_clear_hwo_of_gpd_list(void *gpd_head, void *gpd_tail)
{
	hdma_tbd_t *gpd_ptr = NULL;//, *bd_ptr = NULL;

	gpd_ptr = gpd_head;
	while(1)
	{
		QBM_DES_CLR_HWO(gpd_ptr);
		QBM_CACHE_FLUSH(gpd_ptr, QBM_SIZE_GPD_BD_TST);

		if(gpd_ptr == gpd_tail)
		{
			break;
		} else
		{
			gpd_ptr = (void *) QBM_DES_GET_NEXT(gpd_ptr);
		}
	}

    /* Cooperate with Non-Blocking CACHE API */
    MM_Sync();
}

typedef struct _uart_bps_gpd_pool {
    void *gpd_head;
    void *gpd_tail;
    kal_uint32 free_num;
    kal_uint32 alloc_ok_cnt;
    kal_uint32 alloc_fail_cnt;
    kal_uint32 free_ok_cnt;
    void *buffer_start;
    void *buffer_end;
    kal_uint32 total_num;
} uart_bps_gpd_pool;

static void *uart_discard_tgpd_head = NULL;
static void *uart_discard_tgpd_tail = NULL;
static void *uart_discard_rgpd_head = NULL;
static void *uart_discard_rgpd_tail = NULL;
static kal_uint32 uart_excpt_tx_bytes[MAX_UART_PORT_NUM];
static kal_uint32 uart_excpt_rx_bytes[MAX_UART_PORT_NUM];
static uart_bps_gpd_pool uart_bps_gpd_pool_info;

extern void uart_cal_chksum_and_flush_gpd_list(void *gpd_head, void *gpd_tail);


kal_bool uart_except_init_qbm()
{
    uart_bps_gpd_pool *gpd_pool = &uart_bps_gpd_pool_info;
    bm_queue_config conf;
    kal_uint32 ret;

    qbm_init_q_config(&conf);
	
	conf.buff_num = UART_ECPT_QBM_BPS_NUM;
	conf.p_mem_pool_str = uart_ecpt_bps_buf;
	conf.p_mem_pool_end = conf.p_mem_pool_str  + UART_ECPT_QBM_BPS_BUF_SZ;
	ret = qbm_init_queue_non_free(QBM_TYPE_TGPD_BPS, &conf, 
	                              &gpd_pool->gpd_head,
	                              &gpd_pool->gpd_tail);
    if(QBM_ERROR_OK != ret)
        return KAL_FALSE;

    gpd_pool->buffer_start = conf.p_mem_pool_str;
    gpd_pool->buffer_end   = conf.p_mem_pool_end;
    gpd_pool->total_num    = conf.buff_num;
    gpd_pool->free_num     = conf.buff_num;
    
    return KAL_TRUE;
}

kal_bool uart_except_check_bps_gpd(void *p_gpd)
{
	kal_uint8* uart_bps_buf;

	uart_bps_buf = uart_ecpt_bps_buf;
	
    if (((kal_uint8 *)p_gpd >= uart_bps_buf) && ((kal_uint8 *)p_gpd < uart_bps_buf + UART_ECPT_QBM_BPS_BUF_SZ)){
        return KAL_TRUE;
    }
    return KAL_FALSE;
}

void uart_except_free_bps_gpd(void *p_gpd)
{
    uart_bps_gpd_pool *gpd_pool = &uart_bps_gpd_pool_info;
    
    ASSERT(uart_except_check_bps_gpd(p_gpd));

    if (gpd_pool->gpd_head == NULL) {
        gpd_pool->gpd_head = gpd_pool->gpd_tail = p_gpd;
    } else {
        QBM_DES_SET_NEXT(gpd_pool->gpd_tail, p_gpd);
        gpd_pool->gpd_tail = p_gpd;
    }

    gpd_pool->free_num ++;
    gpd_pool->free_ok_cnt ++;
}

void *uart_except_alloc_bps_gpd(kal_bool tx_or_rx)
{
    void *p_ret_gpd;
    uart_bps_gpd_pool *gpd_pool = &uart_bps_gpd_pool_info;
    
    if (gpd_pool->gpd_head == NULL) {
        gpd_pool->alloc_fail_cnt ++;
        return NULL;
    }

    p_ret_gpd = gpd_pool->gpd_head;
    if (gpd_pool->gpd_head == gpd_pool->gpd_tail) {
        gpd_pool->gpd_head = gpd_pool->gpd_tail = NULL;
    } else {
        gpd_pool->gpd_head = QBM_DES_GET_NEXT(gpd_pool->gpd_head);
    }

    gpd_pool->free_num --;
    gpd_pool->alloc_ok_cnt ++;

    QBM_DES_SET_NEXT(p_ret_gpd, NULL);

    //QBM_DES_SET_BPS(p_ret_gpd);
    
    return p_ret_gpd;
}

kal_uint32 uart_except_free_bps_gpd_in_list(void **pp_head, void **pp_tail)
{
    void *p_gpd_cur, *p_gpd_pre, *p_gpd_nex; 
    int free_num = 0;

    p_gpd_cur = *pp_head;
    p_gpd_pre = NULL;

    if (*pp_head == NULL || *pp_tail == NULL)
        return 0;
        
    while (1) {
        p_gpd_nex = QBM_DES_GET_NEXT(p_gpd_cur);
        if (uart_except_check_bps_gpd(p_gpd_cur)) {            
            /* free this gpd from list */
            if (p_gpd_pre == NULL)
                *pp_head = p_gpd_nex;
            else
                QBM_DES_SET_NEXT(p_gpd_pre, p_gpd_nex);

            uart_except_free_bps_gpd(p_gpd_cur);
            free_num ++;
        } else {
            p_gpd_pre = p_gpd_cur;
        }

        if(p_gpd_cur == *pp_tail)
            break;
            
        p_gpd_cur = p_gpd_nex;
    }

    return free_num;
}

void uart_except_en_q_rx(
		void *p_new_head, 
		void *p_new_tail, 
		void **pp_orig_head, 
		void **pp_orig_tail
		)
{
    void *p_orig_tail = NULL;
    
    ASSERT(pp_orig_head!=NULL);
    ASSERT(pp_orig_tail!=NULL);
    if (*pp_orig_head != NULL) {
        p_orig_tail = *pp_orig_tail;

        /* set new tail's HWO=0 */
        QBM_DES_CLR_HWO(p_new_tail);
        QBM_CACHE_FLUSH(p_new_tail, QBM_SIZE_TGPD);

        /* link new list to tail of orig list */
        QBM_DES_SET_NEXT(p_orig_tail, p_new_head);

        /* re-calc the orig tail's checksum */
        qbm_cal_set_checksum_wth_hwo(p_orig_tail);
        
        /* set the orig tail's HWO=1 */
        QBM_DES_SET_HWO(p_orig_tail);
        QBM_CACHE_FLUSH(p_orig_tail, QBM_SIZE_TGPD);  

        /* update the orig tail */
        *pp_orig_tail = p_new_tail;
    } else {
        *pp_orig_head = p_new_head;
        *pp_orig_tail = p_new_tail;
    }
}
/* the last gpd will not be de-queued */
kal_uint32 uart_except_de_q(
		void **pp_src_head, 
		void **pp_src_tail, 
		void **pp_new_head, 
		void **pp_new_tail
		)
{
    kal_uint32 deqno = 0;
    void *p_this_gpd = NULL;
    *pp_new_head = NULL;
    *pp_new_tail = NULL;

    if (pp_src_head != NULL && *pp_src_head != NULL && *pp_src_head != *pp_src_tail) {
        p_this_gpd = *pp_src_head;
        QBM_CACHE_INVALID(p_this_gpd, QBM_SIZE_TGPD);
        if (!QBM_DES_GET_HWO(p_this_gpd)){
            *pp_new_head = p_this_gpd;

            while(!QBM_DES_GET_HWO(p_this_gpd) && p_this_gpd != *pp_src_tail) {
                *pp_new_tail = p_this_gpd;
                deqno ++;
                
                p_this_gpd = QBM_DES_GET_NEXT(p_this_gpd);
                QBM_CACHE_INVALID(p_this_gpd, QBM_SIZE_TGPD);
            }

            *pp_src_head = p_this_gpd;
        } 
    }

    return deqno;
}

kal_uint32 uart_except_de_q_with_timeout(
		UART_PORT port, 
		void **pp_src_head, 
		void **pp_src_tail, 
		void **pp_new_head, 
		void **pp_new_tail
		)
{
    kal_uint32 deqno = 0;
    void *p_this_gpd = NULL;
    *pp_new_head = NULL;
    *pp_new_tail = NULL;

    if (pp_src_head != NULL && *pp_src_head != NULL && *pp_src_head != *pp_src_tail) {
        p_this_gpd = *pp_src_head;
        QBM_CACHE_INVALID(p_this_gpd, QBM_SIZE_TGPD);
        if (!QBM_DES_GET_HWO(p_this_gpd)){
            *pp_new_head = p_this_gpd;

            while(!QBM_DES_GET_HWO(p_this_gpd) && p_this_gpd != *pp_src_tail) {
                *pp_new_tail = p_this_gpd;
                deqno ++;
                
                p_this_gpd = QBM_DES_GET_NEXT(p_this_gpd);
                QBM_CACHE_INVALID(p_this_gpd, QBM_SIZE_TGPD);
            }

            *pp_src_head = p_this_gpd;
		uart_ecpt_timer_reset(port);
        }else{
		uart_ecpt_timer_start(port);
	}
    }

    return deqno;
}

DCL_STATUS uart_except_check_dma_status(kal_uint32 hdma_channel)
{
    kal_uint32 int_sts;
    DCL_STATUS ret_sts = STATUS_OK;
    
    int_sts = DRV_Reg32(GDMA_GISAR_UART);
    
	if(IS_HDMA_LENERR_INTR(int_sts, hdma_channel)) {
	    DRV_WriteReg32(GDMA_GISAR_UART, (HDMA_INTR_CHL_MASK(hdma_channel) << 16));
	    ret_sts = STATUS_FAIL;
	}

	if(IS_HDMA_BD_CSERR_INTR(int_sts, hdma_channel)) {  
	    DRV_WriteReg32(GDMA_GISAR_UART, (HDMA_INTR_CHL_MASK(hdma_channel) << 24));
	    ret_sts = STATUS_ERROR_CRCERROR;
	}
	
	if(IS_HDMA_GPD_CSERR_INTR(int_sts, hdma_channel)) {   
	    DRV_WriteReg32(GDMA_GISAR_UART, (HDMA_INTR_CHL_MASK(hdma_channel) << 28));
	    ret_sts = STATUS_ERROR_CRCERROR;
	}

	return ret_sts;
}

DCL_STATUS
uart_en_q_de_q_for_ecpt(
    UART_PORT port, 
    kal_bool tx_or_rx, 
    kal_uint8 en_q_or_de_q, 
    void **pp_gpd_head, 
    void **pp_gpd_tail, 
    kal_uint32 *p_num
)
{
    void *p_gpd_head, *p_gpd_tail;  /* work queue */
    void *p_bps_gpd;
    kal_uint32 deq_num;
    DCL_STATUS ret = STATUS_OK;
    kal_uint32 hdma_ch;
    kal_uint32 xfer_bytes;

    ASSERT(pp_gpd_head != NULL);
    ASSERT(pp_gpd_tail != NULL);
    
    /* get global variable to local variable */
    if (tx_or_rx == (kal_bool)UART_TX) {
        p_gpd_head = uart_tgpd_head[port];
        p_gpd_tail = uart_tgpd_tail[port];
    } else {
        p_gpd_head = uart_rgpd_head[port];
        p_gpd_tail = uart_rgpd_tail[port];
    }

    hdma_ch = (tx_or_rx == (kal_bool)UART_TX)?port+2:port+3;

    if (en_q_or_de_q == UART_EN_Q) {
        if (*pp_gpd_head == NULL || *pp_gpd_tail == NULL) {
            goto  end;
        }

        /* alloc a bypass gpd */
        if (tx_or_rx == (kal_bool)UART_TX) {
            p_bps_gpd = uart_except_alloc_bps_gpd(tx_or_rx);
            if (p_bps_gpd == NULL) {
                ret = STATUS_FAIL;
                goto end;
            }

            /* append the bypass gpd to the gpd list */
            QBM_DES_SET_NEXT(*pp_gpd_tail, p_bps_gpd);
            *pp_gpd_tail = p_bps_gpd;
        } else {
            QBM_DES_CLR_HWO(*pp_gpd_tail);
        }

        /* re-calc checksum and flush cache */
        uart_cal_chksum_and_flush_gpd_list(*pp_gpd_head, *pp_gpd_tail);

        /* now, start en-q operation */
        if (p_gpd_head == NULL) {
            /* clear tail's HWO bit manually */
            QBM_DES_CLR_HWO(*pp_gpd_tail);
            QBM_CACHE_FLUSH(*pp_gpd_tail, QBM_SIZE_TGPD_BPS);

            p_gpd_head = *pp_gpd_head;
            p_gpd_tail = *pp_gpd_tail;
#if defined(META_MODE_SW_ESCAPING)
          if((kal_query_boot_mode() == FACTORY_BOOT) && (tx_or_rx ==(kal_bool)UART_TX)){
		   UART_META_PutBytes(port, p_gpd_head, p_gpd_tail);
	     }else
#endif
	     {
            /* newly configure and start DMA */
            HDMA_BUF0_PROG_ADDR_CONFIG(hdma_ch, p_gpd_head);
            HDMA_BUF0_START(hdma_ch);
	     }
        } else {
            /* Because META mode Tx should be done before new en_q,  p_gpd_head must be NULL. so Tx would not be affected by new Start putbytes. 
            	  The following step just for backup, but should not be running. If it run, will may send more data or lose data*/
#if defined(META_MODE_SW_ESCAPING)
        if((kal_query_boot_mode() == FACTORY_BOOT) && (tx_or_rx ==(kal_bool)UART_TX)){
		   UART_META_PutBytes(port, p_gpd_head, p_gpd_tail);
	     }else
#endif
	     {
            /* tail's HWO bit will be cleared automatically */
            /* en-q and resume DMA */
            uart_except_en_q_rx(*pp_gpd_head, *pp_gpd_tail, (void **)&p_gpd_head, (void **)&p_gpd_tail);
            HDMA_BUF0_RESUME(hdma_ch);
	     }           
        }
    } else if (en_q_or_de_q == UART_DE_Q) {
        if (p_gpd_head == NULL) {
            *pp_gpd_head = NULL;
            *pp_gpd_tail = NULL;
            if (NULL != p_num)
                *p_num = 0;
            goto end;
        }
        
        if(tx_or_rx == (kal_bool)UART_TX){
        	deq_num = uart_except_de_q_with_timeout(port,(void **)&p_gpd_head, (void **) &p_gpd_tail, (void **)pp_gpd_head, (void **)pp_gpd_tail);
	}else{
		deq_num = uart_except_de_q((void **)&p_gpd_head, (void **) &p_gpd_tail, (void **)pp_gpd_head, (void **)pp_gpd_tail);
	}
		
        if (deq_num == 0) {
            *pp_gpd_head = NULL;
            *pp_gpd_tail = NULL;
            if (NULL != p_num)
                *p_num = deq_num;
            goto end;
        }

        /* check if all is done */
        if (p_gpd_head == p_gpd_tail && QBM_DES_GET_HWO(p_gpd_head)==0) {
            if (uart_except_check_bps_gpd(p_gpd_head)) {
                uart_except_free_bps_gpd(p_gpd_head);
                QBM_DES_SET_NEXT(*pp_gpd_tail, NULL);
            } else {
                QBM_DES_SET_NEXT(*pp_gpd_tail, p_gpd_head);
                *pp_gpd_tail = p_gpd_head;
            }
                
            p_gpd_head = p_gpd_tail = NULL;
        }

        /* check and free bypass GPD allocated by us in list */
        deq_num -= uart_except_free_bps_gpd_in_list(pp_gpd_head, pp_gpd_tail);

        if (NULL != p_num && deq_num > 0) {
            *p_num = deq_num;
#if defined(META_MODE_SW_ESCAPING)
		if(kal_query_boot_mode() == FACTORY_BOOT && tx_or_rx == (kal_bool)UART_RX){
			UART_META_ExBytes(port, *pp_gpd_head, *pp_gpd_tail);
		}
#endif
            xfer_bytes = uart_cal_tgpd_buf_length(*pp_gpd_head, *pp_gpd_tail);
            if (tx_or_rx == (kal_bool)UART_TX)
                uart_excpt_tx_bytes[port] += xfer_bytes;
            else
                uart_excpt_rx_bytes[port] += xfer_bytes;
        }
		
    } else {  
        ASSERT(en_q_or_de_q != UART_EN_Q && en_q_or_de_q != UART_DE_Q);
    }

    /* updated global variable from local variable */
    if (tx_or_rx == (kal_bool)UART_TX) {
        uart_tgpd_head[port] = p_gpd_head;
        uart_tgpd_tail[port] = p_gpd_tail;
    } else {
        uart_rgpd_head[port] = p_gpd_head;
        uart_rgpd_tail[port] = p_gpd_tail;
    }
                
end:
    return ret;
}

DCL_STATUS uart_ecpt_tx_gpd(UART_PORT port, void *p_first_gpd, void *p_last_gpd)
{
	ASSERT(port < MAX_UART_PORT_NUM);

	return uart_en_q_de_q_for_ecpt(port, UART_TX, UART_EN_Q, &p_first_gpd, &p_last_gpd, NULL);
}

DCL_STATUS uart_ecpt_tx_done_info(UART_PORT port, void **pp_first_gpd, void **pp_last_gpd, kal_uint32 *gpd_num)
{
	ASSERT(port < MAX_UART_PORT_NUM);

	return uart_en_q_de_q_for_ecpt(port, UART_TX, UART_DE_Q, pp_first_gpd, pp_last_gpd, gpd_num);
}

DCL_STATUS uart_ecpt_assign_rx_gpd(UART_PORT port, void *p_first_gpd, void *p_last_gpd)
{
	ASSERT(port < MAX_UART_PORT_NUM);

	return uart_en_q_de_q_for_ecpt(port, UART_RX, UART_EN_Q, &p_first_gpd, &p_last_gpd, NULL);
}

DCL_STATUS uart_ecpt_get_rx_gpd(UART_PORT port, void **pp_first_gpd, void **pp_last_gpd, kal_uint32 *gpd_num)
{
	ASSERT(port < MAX_UART_PORT_NUM);

	return uart_en_q_de_q_for_ecpt(port, UART_RX, UART_DE_Q, pp_first_gpd, pp_last_gpd, gpd_num);
}

void uart_ecpt_clear_sw_queue(UART_PORT port)
{
    static kal_bool first_time_clear = KAL_TRUE;

    if (first_time_clear) {
        first_time_clear = KAL_FALSE;

        if (uart_wait_tgpd_head[port] != NULL) {
            if (uart_discard_tgpd_head != NULL) {
                QBM_DES_SET_NEXT(uart_discard_tgpd_tail, uart_wait_tgpd_head[port]);
                uart_discard_tgpd_tail = uart_wait_tgpd_tail[port];
            } else {
                uart_discard_tgpd_head = uart_wait_tgpd_head[port];
                uart_discard_tgpd_tail = uart_wait_tgpd_tail[port];
            }
    	}

    	if (uart_tgpd_head[port] != NULL) {
    	    if (uart_discard_tgpd_head != NULL) {
                QBM_DES_SET_NEXT(uart_discard_tgpd_tail, uart_tgpd_head[port]);
                uart_discard_tgpd_tail = uart_tgpd_tail[port];
            } else {
                uart_discard_tgpd_head = uart_tgpd_head[port];
                uart_discard_tgpd_tail = uart_tgpd_tail[port];
            }
        }

        if (uart_rgpd_head[port] != NULL) {
            if (uart_discard_rgpd_head != NULL) {
                QBM_DES_SET_NEXT(uart_discard_rgpd_tail, uart_rgpd_head[port]);
                uart_discard_rgpd_tail = uart_rgpd_tail[port];
            } else {
                uart_discard_rgpd_head = uart_rgpd_head[port];
                uart_discard_rgpd_tail = uart_rgpd_tail[port];
            }
        }

	} else {
        ;
	}
	
    uart_wait_tgpd_head[port] = NULL;
    uart_wait_tgpd_tail[port] = NULL;
    
	uart_tgpd_head[port] = NULL;
    uart_tgpd_tail[port] = NULL;
    
	uart_rgpd_head[port] = NULL;
    uart_rgpd_tail[port] = NULL;
}

DCL_STATUS uart_ecpt_clear_ch(UART_PORT port)
{
	kal_uint32 val = 0;

	ASSERT(port < MAX_UART_PORT_NUM);

#if defined(META_MODE_SW_ESCAPING)
	if(kal_query_boot_mode() != FACTORY_BOOT)
#endif
    {
    /* Wait Tx HDMA Channel to be inactive */
	while(HDMA_BUF0_IS_ACTIVE((port + 2)))
	{
		val = DRV_Reg32(GDMA_GISAR_UART);
		if(IS_HDMA_LENERR_INTR(val, (2 + port))) break;
		if(IS_HDMA_GPD_CSERR_INTR(val, (2 + port))) break;
		if(IS_HDMA_BD_CSERR_INTR(val, (2 + port))) break;
	}

    /* Stop Tx HDMA Channel */
	HDMA_BUF0_STOP((2 + port));
	while (HDMA_BUF0_IS_ACTIVE((port + 2)));
}
	/* Stop Rx HDMA Channel */
	HDMA_BUF0_STOP((3 + port));
	while (HDMA_BUF0_IS_ACTIVE((port + 3)));

	/* Clear SW Queue */
	uart_ecpt_clear_sw_queue(port);

	return STATUS_OK;
}

void uart_ecpt_timer_reset(UART_PORT port){
	ASSERT(port < MAX_UART_PORT_NUM);
	uart_ecpt_timer[port].timer_during = 0;
	uart_ecpt_timer[port].timer_old = 0;
	uart_ecpt_timer[port].timer_now = 0;
	uart_ecpt_timer[port].timer_start = 0;
}

void uart_ecpt_timer_start(UART_PORT port)
{	
	ASSERT(port < MAX_UART_PORT_NUM);
	if(uart_ecpt_timer[port].timer_start == 0){
		cpu_event_counter_get_cycle(uart_ecpt_timer[port].timer_now);
		uart_ecpt_timer[port].timer_old = uart_ecpt_timer[port].timer_now; 
		uart_ecpt_timer[port].timer_during = 0;
		uart_ecpt_timer[port].timer_start = 1;
	}else{
		cpu_event_counter_get_cycle(uart_ecpt_timer[port].timer_now);
	}
}

kal_uint32 uart_ecpt_get_timer_during(UART_PORT port)
{
	ASSERT(port < MAX_UART_PORT_NUM);
	uart_ecpt_timer[port].timer_during =CPU_PMUTICK2MS( uart_ecpt_timer[port].timer_now - uart_ecpt_timer[port].timer_old) ;
	return uart_ecpt_timer[port].timer_during;
}

DCL_STATUS uart_ecpt_init_hif(UART_PORT port)
{
	ASSERT(port < MAX_UART_PORT_NUM);

	/* need re-init hardware ??? */

	/* initial exception mode qbm */
	if (uart_except_init_qbm() != KAL_TRUE) {
        return STATUS_FAIL;
	}
	return STATUS_OK;
}

DCL_STATUS uart_except_reset(UART_PORT port)
{
    	ASSERT(port < MAX_UART_PORT_NUM);
	uart_ecpt_tx_state[port] = HIF_STATE_NORMAL;
	uart_ecpt_timer_reset(port);
    
    return STATUS_OK;
}
kal_uint32 uart_ecpt_get_tx_state(UART_PORT port){
	ASSERT(port < MAX_UART_PORT_NUM);
	kal_uint32 timer_dur = 0;
	timer_dur = uart_ecpt_get_timer_during(port);
	if(timer_dur>=UART_ECPT_MAX_TIMEOUT){
		uart_ecpt_tx_state[port] = HIF_STATE_TXERROR;
		uart_ecpt_timer_reset( port);
	}else{
		uart_ecpt_tx_state[port] = HIF_STATE_NORMAL;
	}
	
    return uart_ecpt_tx_state[port];
}


#else //#if !defined(DRV_UART_OFF)

UARTStruct UARTPort[MAX_UART_PORT_NUM];

kal_bool UART_VFIFO_support[MAX_UART_PORT_NUM] =
{
	KAL_FALSE,
	KAL_FALSE,
};

void UART_Boot_PutUARTBytes(UART_PORT port, kal_uint8 *data,kal_uint16 len){}
void U_Register(UART_PORT port, UartType_enum type, UartDriver_strcut* drv){}
kal_bool U_Open(UART_PORT port, module_type ownerid){}
void U_Close(UART_PORT port, module_type ownerid){}
kal_uint16 U_GetBytes(UART_PORT port, kal_uint8 *Buffaddr, kal_uint16 Length, kal_uint8 *status, module_type ownerid){}
kal_uint16 U_PutBytes(UART_PORT port, kal_uint8 *Buffaddr, kal_uint16 Length, module_type ownerid){}
kal_uint16 U_GetBytesAvail(UART_PORT port){}
kal_uint16 U_GetTxRoomLeft(UART_PORT port){}
kal_uint16 U_PutISRBytes(UART_PORT port, kal_uint8 *Buffaddr, kal_uint16 Length, module_type ownerid){}
kal_uint16 U_GetTxISRRoomLeft(UART_PORT port){}
kal_uint16 U_SendISRData(UART_PORT port, kal_uint8 *Buffaddr, kal_uint16 Length,kal_uint8 mode, kal_uint8 escape_char, module_type ownerid){}
kal_uint16 U_SendData(UART_PORT port, kal_uint8 *Buffaddr, kal_uint16 Length,kal_uint8 mode,kal_uint8 escape_char, module_type ownerid ){}
void U_Purge(UART_PORT port, UART_buffer dir, module_type ownerid){}
void U_SetOwner (UART_PORT port, module_type ownerid){}
void U_SetFlowCtrl(UART_PORT port, kal_bool XON, module_type ownerid){}
void U_ConfigEscape (UART_PORT port, kal_uint8 EscChar, kal_uint16 ESCGuardtime, module_type ownerid){}
void U_SetDCBConfig(UART_PORT port, UARTDCBStruct *UART_Config, module_type ownerid){}
void U_CtrlDCD(UART_PORT port, IO_level SDCD, module_type ownerid){}
void U_CtrlBreak(UART_PORT port, IO_level SBREAK, module_type ownerid){}
void U_ClrRxBuffer(UART_PORT port, module_type ownerid){}
void U_ClrTxBuffer(UART_PORT port, module_type ownerid){}
void U_SetBaudRate(UART_PORT port, UART_baudrate baudrate, module_type ownerid){}
module_type U_GetOwnerID(UART_PORT port){}
void U_SetAutoBaud_Div(UART_PORT port, module_type ownerid){}
void U_Register_TX_cb(UART_PORT port, module_type ownerid, UART_TX_FUNC func){}
void U_Register_RX_cb(UART_PORT port, module_type ownerid, UART_RX_FUNC func){}
kal_uint8 U_GetUARTByte(UART_PORT port){}
kal_uint8 U_GetUARTByteWithTimeOut(UART_PORT port, kal_uint8* ch, kal_uint32 timeout_value){return 0;}
void U_PutUARTByte(UART_PORT port, kal_uint8 data){}
void U_PutUARTBytes(UART_PORT port, kal_uint8 *data, kal_uint16 len){}
void U_ReadDCBConfig(UART_PORT port, UARTDCBStruct *DCB){}
void U_CtrlRI (UART_PORT port, IO_level SRI, module_type ownerid){}
void U_CtrlDTR (UART_PORT port, IO_level SDTR, module_type ownerid){}
void U_ReadHWStatus(UART_PORT port, IO_level *SDSR, IO_level *SCTS){}
void UART_AssertWaitPrevDataSentOut(UART_PORT port){}
void UART_Calback(void *parameter){}
void UART_CheckAT_Callback(void *parameter){}
kal_bool UART_CheckTxAllSentOut(UART_PORT port){}
kal_bool UART_CheckTxBufferEmpty(UART_PORT port){}
void UART_CompensateAT(UART_PORT  port){}
void uart_customize_init(void){}
void UART_dafault_rx_cb(UART_PORT port){}
void UART_dafault_tx_cb(UART_PORT port){}
void UART_DriverInit(UART_PORT port){}
void UART_EnableTX(UART_PORT port, kal_bool enable){}
void UART_GetTxBufferSize(UART_PORT port, kal_uint32 *total_size, kal_uint32 *rest_size){}
void UART_HWInit(UART_PORT port){}
kal_bool UART_IsVfifoSetting(UART_PORT port, UART_TxRx_VFIFO_support vs){}
void UART_RecHandler(void *parameter){}
void UART_MsHandler(void *parameter){}
void UART_RLSHandler(void *parameter){}
void UART_sendilm(UART_PORT port, msg_type msgid){}
void UART_set_FIFO_trigger(UART_PORT port, kal_uint16 tx_level, kal_uint16 rx_level){}
void UART_SetRateFix(UART_PORT  port){}
void UART_SetSleepEnable(UART_PORT port, kal_bool enable){}
void UART_SleepOnTx_Enable(UART_PORT port, UART_SLEEP_ON_TX enable_flag){}
kal_bool uart_support_autoescape(void){}
void UART_SwitchPort(UART_PORT *APP_port, UART_PORT new_uart_port){}
void UART_TrxHandler(void *parameter){}
void UART_TxDMAHandler(void *parameter, kal_uint8 chk_done){}
void UART_TurnOnPower(UART_PORT port, kal_bool enable){}
void UART1_HISR(void){}
void UART2_HISR(void){}
void PutUARTDatas(UART_PORT port, kal_uint8 escape_char, kal_uint8 *data,kal_uint16 len){}
kal_uint16 BMT_PutBytes(UART_PORT port, kal_uint8 *Buffaddr, kal_uint16 Length){}
void PutUARTRingBufferData(UART_PORT port){}
void UART_loopback(UART_PORT port){}
void UART_dsp_dafault_tx_cb(UART_PORT port){}
void UART_dsp_dafault_rx_cb(UART_PORT port){}
#endif //if !defined(DRV_UART_OFF)


// uart dispatch funtion table
UartDriver_strcut UartDriver=
{
   	U_Open,
	U_Close,
	U_GetBytes,			// SIO_CMD_GET_BYTES is not supported
	U_PutBytes,			// SIO_CMD_PUT_BYTES is not supported
	U_GetBytesAvail,		// SIO_CMD_GET_RX_AVAIL is not supported
	U_GetTxRoomLeft,		// SIO_CMD_GET_TX_AVAIL is not supported
	U_PutISRBytes,			// SIO_CMD_PUT_ISR_BYTES is not supported
	U_GetTxISRRoomLeft,		// SIO_CMD_GET_ISR_TX_AVAIL is not supported
	U_Purge,
	U_SetOwner,
	U_SetFlowCtrl,
	U_ConfigEscape,
	U_SetDCBConfig,
	U_CtrlDCD,			// SIO_CMD_CTRL_DCD is not supported
	U_CtrlBreak,
	U_ClrRxBuffer,
	U_ClrTxBuffer,
	U_SetBaudRate,
	U_SendISRData,			// SIO_CMD_SEND_ISR_DATA is not supported
	U_SendData,			// SIO_CMD_SEND_DATA is not supported
	U_GetOwnerID,
	U_SetAutoBaud_Div,		// SIO_CMD_SET_AUTOBAUD_DIV is not supported
	/*TY adds these to expand flexibility 2004/10/15*/
	U_Register_TX_cb,        	// SIO_CMD_REG_TX_CB is not supported 
	U_Register_RX_cb,		// SIO_CMD_REG_RX_CB is not supported
	/*TY adds these to let virtual COM port can retrive exception log 2005/3/8*/
	U_GetUARTByte,			// SIO_CMD_GET_UART_BYTE is not supported
	U_PutUARTByte,			// SIO_CMD_PUT_UART_BYTE is not supported
	U_PutUARTBytes,			// SIO_CMD_PUT_UART_BYTES is not supported
	/*for virtual com port to return DCB configuration*/
	U_ReadDCBConfig,
	U_CtrlRI,			// SIO_CMD_CTRL_RI is not supported
	U_CtrlDTR,			// SIO_CMD_CTRL_DTR is not supported
	U_ReadHWStatus,
	U_GetUARTByteWithTimeOut
};


typedef struct hdma_tgpd_ss {
	kal_uint8 hwo:1;
	kal_uint8 bdp:1;
	kal_uint8 bps:1;
	kal_uint8 resv1:4;
	kal_uint8 ioc:1;
	kal_uint8 cksum;
	kal_uint16 resv2;
	kal_uint32 nextPtr;
	kal_uint32 bufPtr;
	kal_uint8 resv3;
} hdma_tgpd_tt;

typedef struct hdma_rgpd_ss {
	kal_uint8 hwo:1;
	kal_uint8 bdp:1;
	kal_uint8 bps:1;
	kal_uint8 resv1:4;
	kal_uint8 ioc:1;
	kal_uint8 cksum;
	kal_uint16 allowBufLen;
	kal_uint32 nextPtr;
	kal_uint32 bufPtr;
	kal_uint16 bufLen;
	kal_uint16 resv2;
} hdma_rgpd_tt;


// dummy_fdma() just for mt6595 workaround patch. removed on LR12.
/*  
void dummy_fdma(kal_uint32 gdma_start)
{

	FDMA_PDN_CLR(3);
	if(gdma_start == 0){
		DRV_WriteReg32(0xff2c0080, 0x4); // stop (GDMA_FDCR0)
		FDMA_PDN_SET(3);
	}
	else{
		DRV_WriteReg32(0xff2c0080, 0x4); // stop (GDMA_FDCR0)
		while(DRV_Reg32(0xff2c0014) & (1<<16)); // check done state (GDMA_FDCSR0)
		
		DRV_WriteReg32(0xff2c0014, 0x02000000); // GDMA_FDCSR
		DRV_WriteReg32(0xff2c0084, 0xbf830C20); // GDMA_FDSAR3
		DRV_WriteReg32(0xff2c0088, 0xbf830C24); // GDMA_FDDAR3
		DRV_WriteReg32(0xff2c0080, 0xffff43a1); // start (GDMA_FDCR3)
	}
	return;
}

}
*/

extern UARTStruct UARTPort[];
extern Seriport_HANDLER_T  Uart_Drv_Handler;

enum {
   INIT_NOTINIT,
   INIT_REG_CB,
   INIT_DRV_ATTACH,
   INIT_DRV_INIT,
   INIT_UPMOD_INIT,
   INIT_SET_BAUDRATE,
   INIT_DONE,
} uart_excpt_drv_init_stage = INIT_NOTINIT;
kal_bool uart_excpt_drv_init_done_g = KAL_FALSE;
kal_bool uart_st_in_except_mode_g = KAL_FALSE;

#if defined __UART_UT__
kal_int32 uart_hmu_pre_init(kal_uint32 dev_mapping, kal_uint32 ext_devinfo_len, kal_char *ext_devinfo)
{
	return KAL_TRUE;
}

kal_int32 uart_hmu_init(kal_uint32 dev_mapping, kal_uint32 ext_devinfo_len, kal_char *ext_devinfo)
{
	return 0;
}

kal_int32 uart_hmu_post_init(kal_uint32 dev_mapping, kal_uint32 ext_devinfo_len, kal_char *ext_devinfo)
{
	return KAL_TRUE;
}

kal_int32 uart_hmu_pre_deinit(kal_uint32 dev_mapping, kal_uint32 ext_devinfo_len, kal_char *ext_devinfo)
{
	return KAL_TRUE;
}

kal_int32 uart_hmu_deinit(kal_uint32 dev_mapping, kal_uint32 ext_devinfo_len, kal_char *ext_devinfo)
{
	return KAL_TRUE;
}

kal_int32 uart_hmu_post_deinit(kal_uint32 dev_mapping, kal_uint32 ext_devinfo_len, kal_char *ext_devinfo)
{
	return KAL_TRUE;
}

kal_int32 uart_hmu_except_init(kal_uint32 dev_mapping, kal_uint32 ext_devinfo_len, kal_char *ext_devinfo)
{
	return KAL_TRUE;
}

#else

kal_int32 uart_hmu_pre_init(kal_uint32 dev_mapping, kal_uint32 ext_devinfo_len, kal_char *ext_devinfo)
{
	return KAL_TRUE;
}

kal_int32 uart_hmu_init(kal_uint32 dev_mapping, kal_uint32 ext_devinfo_len, kal_char *ext_devinfo)
{

    return KAL_TRUE;
}

kal_int32 uart_hmu_post_init(kal_uint32 dev_mapping, kal_uint32 ext_devinfo_len, kal_char *ext_devinfo)
{
	return KAL_TRUE;
}

kal_int32 uart_hmu_pre_deinit(kal_uint32 dev_mapping, kal_uint32 ext_devinfo_len, kal_char *ext_devinfo)
{
	return KAL_TRUE;
}

kal_int32 uart_hmu_deinit(kal_uint32 dev_mapping, kal_uint32 ext_devinfo_len, kal_char *ext_devinfo)
{

	return KAL_TRUE;
}

kal_int32 uart_hmu_post_deinit(kal_uint32 dev_mapping, kal_uint32 ext_devinfo_len, kal_char *ext_devinfo)
{
	return KAL_TRUE;
}

UARTStruct* uart_core_get_instance(kal_uint32 uart_port)
{
    return &UARTPort[uart_port];
}

DCL_STATUS uart_ttyhdr_reg_ttycore(UARTStruct*p_dev_inst, kal_uint32 port)
{
	DCL_STATUS status;
	DCL_HANDLE handle;

	handle =  DclSerialPort_Open(port, 0);
	
	uart_excpt_drv_init_stage = INIT_REG_CB;
	status = DclSerialPort_DrvRegisterCb(handle, &Uart_Drv_Handler);

	if (KAL_TRUE == uart_st_in_except_mode_g && STATUS_ALREADY_OPENED == status) {
        return STATUS_OK;
    }
	return status;
}

DCL_STATUS uart_ttyhdr_cmd_init(UART_PORT port)
{
    DCL_STATUS status;
    DCL_HANDLE handle;
	DCL_CTRL_DATA_T data;

	handle = DclSerialPort_Open(port, 0);
	
    uart_excpt_drv_init_stage = INIT_DRV_ATTACH;
   	status = DclSerialPort_DrvAttach(handle);
	if(status != STATUS_OK)
	{	
		return STATUS_FAIL;
	}

   uart_excpt_drv_init_stage = INIT_DRV_INIT;
   status = DclSerialPort_Control(handle, SIO_CMD_INIT, &data);

   return status;
   
}

DCL_STATUS uart_ttyhdr_upmodule_init(UART_PORT port)
{
    DCL_STATUS status;
    DCL_HANDLE handle;
    UART_CTRL_DCB_T data;

    handle = DclSerialPort_Open(port, 0);
    
    uart_excpt_drv_init_stage = INIT_UPMOD_INIT;
    status = DclSerialPort_UpModuleInit(handle, MOD_DRV_DBG, TTY_FLAG_NEW_TX | TTY_FLAG_NEW_RX);
    if (status != STATUS_OK && status != STATUS_ALREADY_OPENED) {
        return status;
    }
    
    //DclSerialPort_UpModuleRegisterCb(handle, dbg_print_tty_rx_cb, NULL, dbg_print_tty_state_cb);

    data.u4OwenrId = MOD_DRV_DBG;
    data.rUARTConfig.u4Baud = UART_BAUD_1500000;
    data.rUARTConfig.u1DataBits = len_8;
    data.rUARTConfig.u1StopBits = sb_1;
    data.rUARTConfig.u1Parity = pa_none;
    data.rUARTConfig.u1FlowControl = fc_sw;
    data.rUARTConfig.ucXonChar = 0x11;
    data.rUARTConfig.ucXoffChar = 0x13;
    data.rUARTConfig.fgDSRCheck = KAL_FALSE;

    // Set baudrate
    uart_excpt_drv_init_stage = INIT_SET_BAUDRATE;
    status = DclSerialPort_Control(handle, SIO_CMD_SET_DCB_CONFIG, (DCL_CTRL_DATA_T*)&data);

    return status;
}

kal_int32 uart_hmu_except_init(kal_uint32 dev_mapping, kal_uint32 ext_devinfo_len, kal_char *ext_devinfo)
{
    DCL_STATUS ret;
    UARTStruct* p_dev_inst;
    kal_uint32 uart_port;
    kal_uint32 init_ports[] = {uart_port1, uart_port2};
    kal_uint32 ret_val = 0;
    int i;

    uart_st_in_except_mode_g = KAL_TRUE;
    if (uart_excpt_drv_init_done_g == KAL_TRUE) {
        return 0;
    }

    for (i = 0; i < sizeof(init_ports)/sizeof(init_ports[0]); i++) {
        uart_port = init_ports[i];

        p_dev_inst = uart_core_get_instance(uart_port);

        if(p_dev_inst->initialized == KAL_TRUE){
            continue;
        }

        ret = uart_ttyhdr_reg_ttycore(p_dev_inst, uart_port);
        if (STATUS_OK != ret) {
            ret_val = -1;
            continue;
        }

        ret = uart_ttyhdr_cmd_init(uart_port);
        if (STATUS_OK != ret) {
            ret_val = -1;
            continue;
        }
    }

    uart_excpt_drv_init_stage = INIT_DONE;
    uart_excpt_drv_init_done_g = KAL_TRUE;

    return ret_val;
}

#endif 


