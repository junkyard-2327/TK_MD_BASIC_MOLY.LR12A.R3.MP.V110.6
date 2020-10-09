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
 *   l1dma_drv.h
 *
 * Project:
 * --------
 *   MOLY
 *
 * Description:
 * ------------
 *   L1DMA driver interface
 *
 * Author:
 * -------
 * -------
 *
 * ==========================================================================
 * $Log$
 *
 * 04 27 2017 yancy.chien
 * [MOLY00242548] [DHL] Build warning removal
 * 	     Apply A style.
 *
 * 04 27 2017 yancy.chien
 * [MOLY00242548] [DHL] Build warning removal
 *     Apply A style.
 *
 * 01 12 2016 cynthia.sun
 * [MOLY00147391] [MDL] 92 Integration
 * . merge with SS1 on UMOLY
 *
 * 10 30 2015 eason.lai
 * [MOLY00134958] [MT6292] [DHL] logging service migration
 *
 *  remove __PCORE__ and __L1CORE__ option
 *
 * 10 23 2015 eason.lai
 * [MOLY00134958] [MT6292] [DHL] logging service migration
 *
 *  SMP DHL logging migration
 *
 * 05 29 2015 cynthia.sun
 * [MOLY00117240] [tk6291] [DHL] MDP log CBr check-in
 * .
 *
 * 02 09 2015 eason.lai
 * [MOLY00084440] [MT6291][DHL] Patch back UMOLY trunk from MT6291_DEV
 *  fixed dsp log duplicated in exception issue.
 *
 * 12 04 2014 eason.lai
 * [MOLY00084440] [MT6291][DHL] Patch back UMOLY trunk from MT6291_DEV
 *      add MDL UT string
 *
 * 11 14 2014 eason.lai
 * [MOLY00084440] [MT6291][DHL] Patch back UMOLY trunk from MT6291_DEV
 *  first time patch back
 *
 * 06 21 2013 ken.liu
 * [MOLY00021786] [MT6290 Bring-up]4G coresonic DSP assert memory dump integration
 * fix function declaration build error.
 *
 * 06 03 2013 ken.liu
 * [MOLY00021786] [MT6290 Bring-up]4G coresonic DSP assert memory dump integration
 * sync from MT6290E1_FirstCall.
 *
 * 11 07 2012 ken.liu
 * [MOLY00005322] TATAKA merge to MOLY
 * dhl module check-in.
 ****************************************************************************/

#if !defined(__L1DMA_HISR_DISABLE__) && defined(__MTK_TARGET__)

#include "ebc_drv.h"
#include "dhl_def.h"
#include "mdl_logging.h"

#ifndef _L1DMA_DRV_H
#define _L1DMA_DRV_H

/**
 * @brief L1DMA send buffer to HIF
 */
void l1dma_send_buffer();

/* copy from ebc driver include file
kal_uint32 MDL_DFE:  1; //ch id = 0
kal_uint32 MDL_RAKE: 1; //ch id = 1
kal_uint32 MDL_RXBRP:1; //ch id = 2
kal_uint32 MDL_CMP:  1; //ch id = 3
kal_uint32 MDL_IMC:  1; //ch id = 4
kal_uint32 MDL_ICC:  1; //ch id = 5
kal_uint32 MDP_CMP:  1; //ch id = 6
kal_uint32 MDP_IMC:  1; //ch id = 7
kal_uint32 MDP_ICC:  1; //ch id = 8
kal_uint32 MTOL_CMP: 1; //ch id = 9
kal_uint32 MTOL_IMC: 1; //ch id = 10
kal_uint32 MTOL_ICC: 1; //ch id = 11
*/

void l1dma_drv_init(MdlConfigStruct_t *p_mdl_config, kal_uint32 config_num);

/**
 * @brief L1DMA driver stop
 */
kal_int32 l1dma_ex_stop();

void l1dma_flush_sync_ex();
void l1dma_flush_buffer_ex();

typedef struct
{
    kal_uint32 dsplog_addr[2];
    kal_uint32 dsplog_saddr;
    kal_uint32 dsplog_eaddr;
    kal_uint32 dsplog_dcnt;
    kal_uint32 mux_id;
    void *head[2];
    void *tail[2];
} l1dma_config;

typedef enum
{
    ERROR,
    SEND_PING_FIRST_THEN_SEND_PONG,
    SEND_PONG_FIRST_THEN_SEND_PING,
    ONLY_SEND_PING,
    ONLY_SEND_PONG,
    DO_NOT_SEND,
    FLUSH_BUFFER_STAT_NUM
} flush_buffer_stat_enum;

#if defined(__MTK_TARGET__)
#if defined(__DHL_MPU_CR4_CONFIG__)
extern unsigned int     SaveAndSetIRQMask(void);
extern void             RestoreIRQMask(unsigned int);
#define DHL_Enter_DSPLOG_CS(saved_mask)   (saved_mask) = SaveAndSetIRQMask()
#define DHL_Leave_DSPLOG_CS(saved_mask)   RestoreIRQMask((saved_mask))
#else
#define DHL_Enter_DSPLOG_CS(mutex_id)     KAL_MUTEX_WRAP_TAKE(mutex_id)
#define DHL_Leave_DSPLOG_CS(mutex_id)     KAL_MUTEX_WRAP_GIVE(mutex_id)
#endif
#else
#error "Unsupport configure!"
#endif    //#if defined(__MTK_TARGET__)

#endif
#endif //__L1DMA_HISR_DISABLE__
