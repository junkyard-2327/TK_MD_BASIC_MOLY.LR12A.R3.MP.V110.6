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
 *   pccif_if.h
 *
 * Project:
 * --------
 *   UMOLYA
 *
 * Description:
 * ------------
 *   
 *
 * Author:
 * -------
 * -------
 *
 * ==========================================================================
 * $Log$
 *
 * 05 10 2017 alva.li
 * [MOLY00248273] [UMOLYA] handle possible deadlock in exception flow
 * 	
 * 	update pccif driver for exception flow
 *
 * 04 19 2017 alva.li
 * [MOLY00243355] [UMOLYA][PCCIF]build warning removal
 * update for build warning
 *
 *
 ****************************************************************************/
#ifndef __PCCIF_IF__
#define __PCCIF_IF__

#include "reg_base.h"
#include "devdrv_ls.h"

#define PCCIF0_IRQ1_CHANNEL_BASE    (15)
#define H2D_FORCE_ASSERT_INT        (PCCIF0_IRQ1_CHANNEL_BASE+3)
#define H2D_RMPU_FATAL_INT          (PCCIF0_IRQ1_CHANNEL_BASE+4)
#define H2D_WAKEUP_INT              (PCCIF0_IRQ1_CHANNEL_BASE+5)
#define D2H_WAKEUP_INT              (PCCIF0_IRQ1_CHANNEL_BASE+5)
#define D2H_SEQ_ERR_INT             (PCCIF0_IRQ1_CHANNEL_BASE+6)
#define H2D_SEQ_ERR_INT             (PCCIF0_IRQ1_CHANNEL_BASE+6)

#define MDCCIF_DATA_SIZE            512

/* SRAM, FIXME: DL 0~247, UL 248~495, last 16 byte for boot up trace */
#if defined(BASE_MADDR_PCCIF0_MD)
#define MDPCCIF0_TXCHDATA   (BASE_MADDR_PCCIF0_MD + 0x0100)
#define MDPCCIF0_RXCHDATA   (BASE_MADDR_PCCIF0_MD + 0x01F0)
#else
    #error "no ccif base define!!"
#endif
#define MDPCCIF0_TXRXCHDATA_SIZE    238

typedef void (*AP_CCCI_ASSERT_CB)(void); 

void pccif0_init(void);
kal_int32 pccif0_set(kal_uint32 ch);
kal_int32 pccif0_except_set(kal_uint32 ch);
kal_uint32 pccif0_valid_state(void);
kal_uint32 pccif0_except_valid_state(void);
kal_uint32 pccif0_start_state(void);
kal_uint32 pccif0_get_data_addr(void);
void pccif0_write_seq(kal_uint32 seq);
void pccif0_ack(kal_uint32 ch);
void pccif0_except_ack(kal_uint32 ch);
void pccif0_ccb_ack(void);
void pccif0_irq0_mask(void);
void pccif0_irq0_unmask(void);
void pccif0_irq1_mask(void);
void pccif0_irq1_unmask(void);
void pccif0_ccb_mask_irq(void);
void pccif0_ccb_unmask_irq(void);
void pccif0_isr_init(void);
void ccism_log_tx(kal_uint32 chnum);
void ccism_log_rx(kal_uint32 chnum);

// for CCCI debug with sequence error
void pccif_seq_err_D2H_int();
void pccif_write_seq(kal_uint32 seq);
void pccif_register_seq_err_assert_callback(AP_CCCI_ASSERT_CB func_cb_ptr);

void DEVDRV_LS_DRAM_EX_ROCODE hifpccif0_except_delay_us(kal_uint32 delay_us);
kal_bool DEVDRV_LS_DRAM_EX_ROCODE hifpccif0_except_sw_int_poll(kal_uint8 sw_int_no, kal_uint32 timeout_ms);

#endif  // __PCCIF_IF__
