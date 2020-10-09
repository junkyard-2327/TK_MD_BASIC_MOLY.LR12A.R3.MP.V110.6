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
 *   ulsp_mod_function.h
 *
 * Project:
 * --------
 *   UMOLYA
 *
 * Description:
 * ------------
 *   ULS+ logging mod function. Integrating log sequence, uls+ hw control, TX out
 *
 * Author:
 * -------
 * -------
 *
 * ==========================================================================
 * $Log$
 *
 * 01 15 2018 yancy.chien
 * [MOLY00298581] [MT6763][Bianco][N1][MTBF][PHONE][HQ][Lab][Ericsson][HCR][ASSERT] file:mcu/common/driver/devdrv/log_seq/src/logseq_drv.c line:800
 * [DHL] LS abort fail callback flow - DHL part.
 *
 * 08 08 2017 yu-hsiang.peng
 * [MOLY00269110] 【主基线】【Other】收集试用用户Modem LOG
 * [UMOLYA.TRUNK] New PLS mode 1. PS only 2. Both mode
 *
 * 08 01 2017 yu-hsiang.peng
 * [MOLY00266204] [Gen93] Common feature development before control
 * [UMOLYA.TRUNK] Recycle LS buffer when mdlogger not connect after 60 seconde (FRC version)
 *
 * 05 03 2017 yancy.chien
 * [MOLY00246569] [BIANCO] OST can't enter sleep because MCU/DSP log backup/restore procedure not ready
 * 1. ULSP logging bandwidth logs
 * 2. ULSP Dormant flow integration
 *
 * 04 27 2017 yancy.chien
 * [MOLY00242548] [DHL] Build warning removal
 * 	     Apply A style.
 *
 * 04 27 2017 yancy.chien
 * [MOLY00242548] [DHL] Build warning removal
 *     Apply A style.
 *
 * 04 05 2017 yu-hsiang.peng
 * [MOLY00239426] [Bianco] PLS logging support
 * [UMOLYA.TRUNK] PLS mode porting.
 *
 * 03 31 2017 yancy.chien
 * [MOLY00238999] [DHL][ULSP] Dormant flow integration.
 *
 * 03 14 2017 kenneth.lin
 * [MOLY00235284] [xL1SIM][DHL] support ulsp logging feature in xl1sim
 *
 *  DHL support ulsp logging feature in xl1sim
 *
 *  1. enable __USE_ULSP__
 *  2. implement ulsp macro to send ELT directly
 *
 * 03 10 2017 yu-hsiang.peng
 * [MOLY00224307] [MT6293] General feature change before MP branch create
 * [UMOLYA.TRUNK] Fix target build warning
 *
 * 11 01 2016 yu-hsiang.peng
 * [MOLY00210769] [MT6293] MT6292 CCB service migrate to MT6293 and MT6293 ULSP logging on CCB development
 * [UMOLYA.TRUNK] ULSP on CCB full load logging, normal logging(stage 1)
 *
 * 08 03 2016 yu-hsiang.peng
 * [MOLY00185213] [MT6293] DHL MT6292 SW logging migrate to MT6293 & MT6293 ULSP logging development
 * [UMOLYA.TRUNK] Merge back 93 ULSP 1st connect ELT code (stage 4)
 *
 * 07 05 2016 yu-hsiang.peng
 * [MOLY00185213] [MT6293] DHL MT6292 SW logging migrate to MT6293 & MT6293 ULSP logging development
 * [UMOLYA.TRUNK] Edit all description in ULSP-releated file
 *
 *
 ****************************************************************************/

#ifndef _ULSP_MOD_FUNCTION_H_
#define _ULSP_MOD_FUNCTION_H_

#include "kal_general_types.h"
#include "dhl_internal_def.h"
#include "dhl_def.h"

#if defined(__USE_ULSP__) && defined(__MTK_TARGET__)
#include "logseq_drv.h"
#endif

#if defined(__MTK_TARGET__)
#if defined(__USE_ULSP__)

void dhl_ulsp_disable_input();
void dhl_ulsp_enable_input();
void dhl_ulsp_config_PB_input_by_filter();


void dhl_ulsp_init_ex_dump_region(void);
void dhl_trigger_hd_flush_ulsp_mcu_event(void);
void dhl_trigger_hd_flush_ulsp_dsp_event(void);
// Callback functions register to LS
void dhl_ulsp_ls_full_cb(kal_uint8 id);
void dhl_ulsp_ls_ex_flush_cb(kal_uint8 id, kal_uint32 address, kal_uint32 length);
void dhl_ulsp_ls_abort_timeout_cb(kal_uint8 ch_id);

void dhl_ulsp_get_and_ouput_buffer(kal_uint8 ls_ch_id, module_type ownerid);
void dhl_ulsp_send_buffer_sync(module_type ownerid, dhl_mux_id mux_id, kal_uint8 *buffer, kal_uint32 length);
void dhl_ulsp_force_ls_trigger_flush();
void dhl_ulsp_set_ls_stream_mode();
void dhl_ulsp_set_ls_PLS_mode();
void dhl_ulsp_recycle_LS_buffer(kal_uint8 ls_ch_id);
#if defined(__DHL_SP_LOGGING_SUPPORT__) && defined(__MTK_TARGET__) && defined(__DHL_CCB_LOGGING_SUPPORT__)
void dhl_ulsp_CCB_send_buffer(module_type ownerid, dhl_mux_id mux_id, kal_uint8 *buffer, kal_uint32 length);
void dhl_ulsp_CCB_tx_done(kal_uint16 muxid,  CCB_ULSP_TYPE type, kal_uint32 *buf_addr, kal_uint32 length);
void dhl_ulsp_CCB_page_release(CCB_ULSP_TYPE type);
#endif //defined(__DHL_SP_LOGGING_SUPPORT__) && defined(__MTK_TARGET__) && defined(__DHL_CCB_LOGGING_SUPPORT__)

#endif // #if defined(__USE_ULSP__)
#endif //#if defined(__MTK_TARGET__)
void ulsp_mcu_backup();
void ulsp_mcu_restore();
kal_bool ulsp_check_lock_sleep();
void dhl_ulsp_disable_input();
void dhl_ulsp_enable_input();
void dhl_ulsp_config_PB_input_by_filter();

#endif //_ULSP_MCU_LOGGING_H_


