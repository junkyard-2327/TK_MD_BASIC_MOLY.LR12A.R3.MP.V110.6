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
 *   drv_mtad.h
 *
 * Project:
 * --------
 *   UMOLY
 *
 * Description:
 * ------------
 *   MTAD(Memory to ATB DMA) driver header file
 *
 * Author:
 * -------
 * -------
 *
 * ==========================================================================
 * $Log$
 *
 * 10 14 2015 chun-hsien.lu
 * [MOLY00093385] [UMOLY][SIB_DRV][MTAD]submit mtad driver code to trunk
 * for elbus fpga
 *
 * 06 12 2015 chun-hsien.lu
 * [MOLY00093385] [UMOLY][SIB_DRV][MTAD]submit mtad driver code to trunk
 * add drvtxdone call back in mtad_en_q_de_q_with_mutex()
 *
 * 05 15 2015 chun-hsien.lu
 * [MOLY00093385] [UMOLY][SIB_DRV][MTAD]submit mtad driver code to trunk
 * modify ATID for MTAD from 0x01 to 0x08 and add clear TX buffer function
 *
 * 05 04 2015 chun-hsien.lu
 * [MOLY00093385] [UMOLY][SIB_DRV][MTAD]submit mtad driver code to trunk
 * refine related mtad driver test code
 *
 * 04 08 2015 chun-hsien.lu
 * [MOLY00093385] [UMOLY][SIB_DRV][MTAD]submit mtad driver code to trunk
 * disable debug print in mtad
 *
 * 02 05 2015 chun-hsien.lu
 * [MOLY00093385] [UMOLY][SIB_DRV][MTAD]submit mtad driver code to trunk
 * update exception command
 *
 * 01 14 2015 chun-hsien.lu
 * [MOLY00086992] [UMOLY][SIB_DRV][MTAD]submit mtad driver code
 * add some exception command code and mask dbg_print
 *
 * 12 31 2014 chun-hsien.lu
 * [MOLY00086992] [UMOLY][SIB_DRV][MTAD]submit mtad driver code
 * solve qbm allocate assertion and hang on using mutex
 *
 * 12 24 2014 chun-hsien.lu
 * [MOLY00086992] [UMOLY][SIB_DRV][MTAD]submit mtad driver code
 * no varidiric macro compile option(C99) fo usim project
 *
 * 12 24 2014 chun-hsien.lu
 * [MOLY00086992] [UMOLY][SIB_DRV][MTAD]submit mtad driver code
 * no varidiric macro compile option(C99) fo usim project
 *
 * 12 24 2014 chun-hsien.lu
 * [MOLY00086992] [UMOLY][SIB_DRV][MTAD]submit mtad driver code
 * add one hisr id for MTAD
 *
 * 12 23 2014 chun-hsien.lu
 * [MOLY00086992] [UMOLY][SIB_DRV][MTAD]submit mtad driver code
 * update modified code
 *
 *
 ****************************************************************************/



#ifndef __DRV_MTAD_H__
#define __DRV_MTAD_H__

#include "mtad_reg.h"
#include "dcl.h"
#include "dcl_uart.h"

typedef enum{
    MTAD_HDMA_DEV_BUS_WIDTH_1B = 0,
    MTAD_HDMA_DEV_BUS_WIDTH_MAX,    
}drv_mtad_hdma_dev_bus_width;


typedef enum{
    MTAD_HDMA_LIST_MODE = 0,
    MTAD_HDMA_BASIC_MODE = 1,
    MTAD_HDMA_DESCRIPTOR_MODE = 2,  
}drv_mtad_hdma_mode;

typedef enum{
    MTAD_HDMA_CKSUM_OFF = 0,
    MTAD_HDMA_CKSUM_ON  = 1,
}drv_mtad_hdma_cksum_en;

typedef enum{
    MTAD_HDMA_CKSUM_12B = 0,
    MTAD_HDMA_CKSUM_16B = 1,
}drv_mtad_hdma_cksum_mode;


typedef enum{
    MTAD_BURST_SIZE_4B = 2,
    MTAD_BURST_SIZE_8B = 3,
    MTAD_BURST_SIZE_16B = 4,
    MTAD_BURST_SIZE_32B = 5,
    MTAD_BURST_SIZE_64B = 6,
    MTAD_BURST_SIZE_128B = 7,
    MTAD_BURST_SIZE_MAX,
}drv_mtad_hdma_burst_size_t;



typedef enum{
    MTAD_MEM_BUS_WIDTH_1B = 0,
    MTAD_MEM_BUS_WIDTH_2B = 1,
    MTAD_MEM_BUS_WIDTH_4B = 2,
    MTAD_MEM_BUS_WIDTH_MAX, 
}drv_mtad_hdma_mem_bus_width;


#define MTAD_BURST_SIZE_DEFAULT         (MTAD_BURST_SIZE_64B)
#define MTAD_MEM_BUS_WIDTH_DEFAULT      (MTAD_MEM_BUS_WIDTH_4B)


#define MTAD_BURST_SIZE_DEFAULT         (MTAD_BURST_SIZE_64B)
#define MTAD_MEM_BUS_WIDTH_DEFAULT      (MTAD_MEM_BUS_WIDTH_4B)

#define MTAD_DUMP_REGISTER 1
#define MTAD_DEBUG 0



extern void dbg_print(char *fmt,...);


#define MTAD_INT_ID   (IRQ_MDGDMA3_CODE)

#define MTAD_ATID   0x8

typedef enum{
    MTAD_EN_Q = 0,
    MTAD_DE_Q = 1,
    MTAD_EN_Q_LIGHT = 2,
    MTAD_DE_Q_ALL = 3,
} drv_mtad_en_q_or_de_q;

typedef enum
{
	MTAD_TX = 0,
	MTAD_RX,
}MTAD_IO_DIR;

/*TY adds these to expand flexibility 2004/10/15*/
typedef void (*MTAD_TX_FUNC)(void); 



typedef struct _mtaddriver
{
	kal_bool (*Open)( module_type ownerid);
	void (*Close)(void);
	kal_uint16 (*PutBytes)( kal_uint8 *Buffaddr, kal_uint16 Length, module_type ownerid);
	kal_uint16 (*GetTxAvail)();
	void (*ClrTxBuffer)(void);	
	/*TY adds these to expand flexibility 2004/10/15*/
	void (*MTAD_Register_TX_cb)( module_type ownerid, MTAD_TX_FUNC func);
}MtadDriver_strcut;



// MTAD exception mode
#define MTAD_ECPT_QBM_BPS_NUM	15
#define MTAD_ECPT_QBM_BPS_BUF_SZ	QBM_QUEUE_GET_MEM_SIZE(QBM_SIZE_TGPD_BPS, MTAD_ECPT_QBM_BPS_NUM)

typedef struct _mtad_bps_gpd{
	void		*bps_ptr[MTAD_ECPT_QBM_BPS_NUM];
	kal_uint32	bps_cur_idx;
	kal_uint32	remain_bps_gpd;
} mtad_bps_gpd_t;


typedef struct _mtad_bps_gpd_pool {
    void *gpd_head;
    void *gpd_tail;
    kal_uint32 free_num;
    kal_uint32 alloc_ok_cnt;
    kal_uint32 alloc_fail_cnt;
    kal_uint32 free_ok_cnt;
    void *buffer_start;
    void *buffer_end;
    kal_uint32 total_num;
} mtad_bps_gpd_pool;


typedef struct
{
	kal_uint32 timer_old;
	kal_uint32 timer_now;
	kal_uint32 timer_during;
	kal_uint32 timer_start;
}MTAD_ecpt_timer_t;


typedef enum {
    DATA_TO_SIB    = 0,
    DATA_LOOP_BACK = 1
}STP_DEST;


#define EN_MTAD_PRINTF 0

#if (EN_MTAD_PRINTF == 1)
extern void dbg_print(char *fmt,...);
#define MTAD_PRINT(fmt, ...)	do {dbg_print(fmt"\n\r", ##__VA_ARGS__);} while (0)
#else
#define MTAD_PRINT(fmt, ...)	
#endif


void mtad_cal_chksum_and_flush_gpd_list(void *gpd_head, void *gpd_tail);
void mtad_driver_attach_to_tty(void);
void mtad_ecpt_timer_reset(UART_PORT port);
void mtad_ecpt_timer_start(UART_PORT port);



#endif
