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
 *   hif_lhif.h
 *
 * Project:
 * --------
 *   UMOLYA
 *
 * Description:
 * ------------
 *   lhif driver public API
 *
 * Author:
 * -------
 * -------
 *
 * ==========================================================================
 * $Log$
 *
 * 04 13 2018 hsin-hao.huang
 * [MOLY00318697] [MT6739][Zion][O1][MP2.0][MP2 Regression][Overnight][China][Shenzhen][2GSM][FTAA][SWIFT][CMCC+Invalid SIM]Externel (EE), [ASSERT] file:mcu/common/driver/dpcopro/src/dpcopro_hisr.c line:537
 * log isr issue and l2 power
 *
 * 04 13 2018 hsin-hao.huang
 * [MOLY00318697] [MT6739][Zion][O1][MP2.0][MP2 Regression][Overnight][China][Shenzhen][2GSM][FTAA][SWIFT][CMCC+Invalid SIM]Externel (EE), [ASSERT] file:mcu/common/driver/dpcopro/src/dpcopro_hisr.c line:537
 * 	
 * 	log isr issue and l2 power
 *
 * 04 13 2018 hsin-hao.huang
 * [MOLY00318697] [MT6739][Zion][O1][MP2.0][MP2 Regression][Overnight][China][Shenzhen][2GSM][FTAA][SWIFT][CMCC+Invalid SIM]Externel (EE), [ASSERT] file:mcu/common/driver/dpcopro/src/dpcopro_hisr.c line:537
 * 	
 * 	log isr issue and l2 power
 *
 * 04 13 2018 hsin-hao.huang
 * [MOLY00318697] [MT6739][Zion][O1][MP2.0][MP2 Regression][Overnight][China][Shenzhen][2GSM][FTAA][SWIFT][CMCC+Invalid SIM]Externel (EE), [ASSERT] file:mcu/common/driver/dpcopro/src/dpcopro_hisr.c line:537
 * log isr issue and l2 power
 *
 * 04 13 2018 hsin-hao.huang
 * [MOLY00318697] [MT6739][Zion][O1][MP2.0][MP2 Regression][Overnight][China][Shenzhen][2GSM][FTAA][SWIFT][CMCC+Invalid SIM]Externel (EE), [ASSERT] file:mcu/common/driver/dpcopro/src/dpcopro_hisr.c line:537
 * .Log isr and L2 power issue
 *
 * 04 13 2018 hsin-hao.huang
 * [MOLY00308522] [MT6763][Bianco][O1][MP2][TMO][NIOT][United States][Dallas][Nokia][4GMM][CA][2CA_012] During UL TPUT Test, device stops pushing data in UL
 * .LHIF log ISR and power issue
 *
 * 01 12 2018 hsin-hao.huang
 * [MOLY00301952] [MT6763][Bianco][O1][MP2.0][MP2 Regression][SWIFT][Overnight][SZ][CU+CU][4GMM][4GMM][ASSERT] file:mcu/common/driver/dpcopro/src/dpcopro_hisr.c line:568
 * .lhif log isr race condition
 *
 * 01 09 2018 hsin-hao.huang
 * [MOLY00301032] [MT6739][Zion][O1][MP2.0][4M][MP2 Regression][MTBF][PHONE][HQ][Lab][Ericsson][ASSERT] file:mcu/common/driver/dpcopro/src/dpcopro_hisr.c line:527
 * DL IPF function
 *
 * 11 14 2017 hsin-hao.huang
 * [MOLY00288860] [6293][R3] LHIF driver re-design for 93/95 co-codebase
 * .
 *
 * 11 10 2017 hsin-hao.huang
 * [MOLY00288860] [6293][R3] LHIF driver re-design for 93/95 co-codebase
 * .MODIS error
 *
 * 11 10 2017 hsin-hao.huang
 * [MOLY00288860] [6293][R3] LHIF driver re-design for 93/95 co-codebase
 * R3 LHIF 93/95 co-code base
 *
 * 08 02 2017 hsin-hao.huang
 * [MOLY00267433] [BIANCO][MT6763][RDIT][L+L][MTBF][PHONE][Overnight][HQ][Lab][Ericsson][ASSERT] file:mcu/common/driver/dpcopro/src/dpcopro_hisr.c line:430
 * UMOLYA merge
 *
 * 06 27 2017 hsin-hao.huang
 * [MOLY00259861] [Rose][Telephony switch][Bianco][N1]Externel (EE),0,0,99,/data/core/,1,modem,Trigger time:[2017-06-26 15:02:36.261168]md1:(MCU_core1.vpe1.tc1(VPE3)) [Fatal error(task)] err_code1:0x00000B34 err_code2:0x902404A9 err_code3:0xCCCCCCCC CaDeFa Supported.
 * LHIF lock hw register issue in back up funciton
 *
 * 05 11 2017 hsin-hao.huang
 * [MOLY00248647] [BIANCO][LHIF] LHIF driver re-organization from LHIF core
 * LHIF dirver re-organization from LHIF core
 *
 * 04 21 2017 hsin-hao.huang
 * [MOLY00243828] [BIANCO][MT6763][RDIT][PHONE][Overnight][HQ][MTBF][Lab][Ericsson][ASSERT] file:mcu/pcore/modem/el2/el2h/erlcdl/src/erlcdl_reasm.c line:560
 * LHIF check CLDMA DL ready
 *
 * 08 23 2016 cs.huang
 * [MOLY00189147] [LHIF] Add LHIFCORE & LHIFDEV
 * [LHIF] Change L2Copro wri ptr and start API
 *
 * 08 19 2016 cs.huang
 * [MOLY00189147] [LHIF] Add LHIFCORE & LHIFDEV
 * [LHIF] fix modis build error
 *
 * 08 19 2016 cs.huang
 * [MOLY00189147] [LHIF] Add LHIFCORE & LHIFDEV
 * [LHIF DEV] fix modis build error
 *
 * 07 18 2016 cs.huang
 * [MOLY00189147] [LHIF] Add LHIFCORE & LHIFDEV
 * [LHIF] Fix MoDIS build error
 *
 * 07 13 2016 cs.huang
 * [MOLY00189147] [LHIF] Add LHIFCORE & LHIFDEV
 * [LHIF] Update LHIF register
 *
 * 07 12 2016 cs.huang
 * [MOLY00189147] [LHIF] Add LHIFCORE & LHIFDEV
 * [LHIF] Fix build warnings
 *
  ****************************************************************************/
#ifndef _HIF_LHIF_H
#define _HIF_LHIF_H

#ifdef __MD95__
#define _LHIF_GEN95_HW_
#else
#define _LHIF_GEN93_HW_
#define _LHIF_93SW_NO_CO_CB_
#endif

//#define _LHIF_LOG_MODE0_
//#define _LHIF_LOG_MODE1_
#define _LHIF_LOG_MODE2_
//#define _LHIF_LOG_MODE3_

#ifdef _LHIF_93SW_NO_CO_CB_
#include "dpcopro_router.h"
#endif

/***********************************************************************
 *  define module ID of copro power unit
 *
 ***********************************************************************/

#define LHIF_DRV_PWD_ID_AP_UL DPCOPRO_PWR_MOD_AP_UL_LHIF
#define LHIF_DRV_PWD_ID_SW_UL DPCOPRO_PWR_MOD_SW_UL_LHIF


/***********************************************************************
 *  LHIF driver power state
 *
 ***********************************************************************/
typedef enum
{
    LHIF_DRIVER_HW_STATUS_NOT_INIT =0,
    LHIF_DRIVER_HW_STATUS_INIT,
    LHIF_DRIVER_HW_STATUS_L2_INIT,    
    LHIF_DRIVER_HW_STATUS_CAN_BE_USED,
    LHIF_DRIVER_HW_STATUS_CAN_NOT_BE_USED,
    LHIF_DRIVER_HW_STATUS_DO_NOT_INIT,

}LHIF_DRIVER_HW_STATUS;

typedef enum
{
    LHIF_PWR_OFF = 0,
    LHIF_PWRON_SW_UL,
    LHIF_PWRON_AP_UL,    
    LHIF_PWRON_SW_DL,
    LHIF_PWR_OFF_LOG,
    LHIF_PWR_MAX,

}LHIF_HW_PWR_STS;

/***********************************************************************
 *  ul meta table macro / ul nat descriptor 
 *
 ***********************************************************************/
#ifdef _LHIF_GEN93_HW_
#ifndef _LHIF_93SW_NO_CO_CB_
typedef struct
{
    kal_uint32 psn:16;
    kal_uint32 protocol_idx:3;
    kal_uint32 pdn:5;
    kal_uint32 net_if:5;
    kal_uint32 net_type:3;
    kal_uint32 length:16;
    kal_uint32 drb:8; // LWA only
    kal_uint32 reserved2:7;
    kal_uint32 ignore:1; // 1: ignore
    kal_uint8* vrb_addr;
}lhif_meta_tbl_t;
#endif
#endif

#ifdef _LHIF_GEN95_HW_
typedef struct
{
    kal_uint32 psn:16;
    kal_uint32 channel_id:8;
    kal_uint32 net_type:3;
    kal_uint32 reserved1:4;
    kal_uint32 ignore:1; // 1: ignore
    kal_uint32 length:16;
    kal_uint32 drb:8; // LWA only
    kal_uint32 pdn:5;
    kal_uint32 protocol_idx:3;
    kal_uint8* vrb_addr;
    kal_uint32 match_index:8;
    kal_uint32 mr:3;
    kal_uint32 reserved2:1;
    kal_uint32 ip:1;
    kal_uint32 ea:1;
    kal_uint32 reserved3:2;
    kal_uint32 tcp_flags:8;
    kal_uint32 tos_traffic_class:8;
    kal_uint32 net_if[0]; //test
    
}lhif_meta_tbl_t;

typedef struct
{
    kal_uint32 count_l:16;
    kal_uint32 channel_id:8;
    kal_uint32 net_type:3;
    kal_uint32 ipid:1;
    kal_uint32 reserved1:2;
    kal_uint32 add:1;  
    kal_uint32 nat:1;
    kal_uint32 pub_local_port:16;
    kal_uint32 prv_local_ip:8;
    kal_uint32 protocol:8;
    kal_uint32 remote_ip:32;    
    kal_uint32 prv_local_port:16;
    kal_uint32 remote_port:16;
}lhif_ul_nat_inband_data_t;
#endif

/***********************************************************************
 *  log mode define
 *
 ***********************************************************************/
#define LHIF_LOG_MODE0_TIME_STAMP  20 // 2^n us

typedef enum
{
    LHIF_HW_LOG_MODE0 = 0, // 4bytes + time
    LHIF_HW_LOG_MODE1 = 1, // 12 bytes
    LHIF_HW_LOG_MODE2 = 2, // 12+54 = 64 bytes
    LHIF_HW_LOG_MODE3 = 3, // 4 bytes only
    LHIF_HW_LOG_MODE_MAX = 4,

}LHIF_DRIVER_HW_LOG_MODE;

#define   LHIF_DRV_LOG_WIDX_ADV_BIT       (1 << 0)
#define   LHIF_DRV_LOG_FULL_BIT           (1 << 1)

/***********************************************************************
 *  L2 interrupt define
 *
 ***********************************************************************/
#define   L2_EVENT_LHIF_AP_UL             (1<<0)
#define   L2_EVENT_LHIF_LWA_DL            (1<<1)
#define   L2_EVENT_LHIF_DL                (1<<2)
#define   L2_EVENT_LHIF_ERROR             (1<<3)
#define   L2_EVENT_LHIF_LOG               (1<<4)
#define   L2_EVENT_LHIF_LOG_FULL          (1<<5)

/***********************************************************************
 *  LHIF driver property format for LHIFcore init
 *
 ***********************************************************************/

typedef struct _lhif_property {

    kal_uint32 lhif_mtu;
    kal_bool   lhif_hw_log_en;
    LHIF_DRIVER_HW_LOG_MODE lhif_hw_log_mode;    
    kal_uint32 lhif_hw_log_size;
    void      *lhif_hw_log_base;
    kal_uint32 lhif_hw_log_reserved_len;

    void (*l2_lhif_interrupt_cb)(kal_uint32 event);
    void (*lhif_pwr_interrupt_cb)(LHIF_HW_PWR_STS state);
    void (*lhif_log_init_cb)(void);

}lhif_property_t;


/***********************************************************************
 *  LHIF driver related function definition
 *
 *  The function description please see the C file
 ***********************************************************************/
void lhif_drv_init(lhif_property_t *p_property);
void lhif_drv_init_hw_log(lhif_property_t *p_property);

kal_bool lhif_drv_meta_table_polling(kal_uint32 meta_id, kal_uint16 *r_idx,kal_uint16 *w_idx);
kal_bool lhif_drv_log_table_polling(kal_uint16 *r_idx,kal_uint16 *w_idx);


kal_bool lhif_drv_dl_enable(kal_bool enable);
kal_bool lhif_drv_ul_enable(kal_bool enable);

void lhif_l2_drv_init(void);
void lhif_drv_hw_backup(void);
void lhif_drv_hw_restore(void);

#ifdef _LHIF_GEN95_HW_
void lhif_ipf_drv_init(void(*reg_cb)(kal_bool en));
kal_bool lhif_ipf_drv_meta_table_polling(kal_uint32 meta_id, kal_uint16 *r_idx, kal_uint16 *w_idx);
#endif

void lhif_drv_set_mtu(kal_uint16 size);
kal_uint16 lhif_drv_get_mtu();
kal_uint32 lhif_drv_get_error();
void lhif_drv_clr_error();
void lhif_drv_mask_all_error();
void lhif_drv_unmask_all_error();
void lhif_drv_force_md_error();
void lhif_drv_force_ap_error();
void lhif_drv_backup_all_reg();
void lhif_drv_restore_all_reg();
kal_bool lhif_drv_log_enable(kal_bool enable);
kal_uint32 lhif_drv_log_get_base();
void lhif_drv_log_set_base(kal_uint32 log_base);
kal_uint32 lhif_drv_log_get_entry_num();
void lhif_drv_log_set_entry_num(kal_uint32 entry_num);
kal_uint16 lhif_drv_log_get_entry_size();
void lhif_drv_log_set_entry_size(kal_uint16 entry_size);
kal_uint16 lhif_drv_log_get_data_len();
void lhif_drv_log_set_data_len(kal_uint16 data_len);
kal_uint16 lhif_drv_log_get_read_idx();
kal_uint16 lhif_drv_log_get_hw_read_idx();
void lhif_drv_log_set_read_idx(kal_uint16 read_idx);
kal_uint16 lhif_drv_log_get_write_idx();
kal_uint16 lhif_drv_log_get_hw_write_idx();
void lhif_drv_log_set_write_idx(kal_uint16 write_idx);
kal_uint16 lhif_drv_log_get_log_seq();
void lhif_drv_log_set_log_seq(kal_uint16 log_seq);
kal_uint16 lhif_drv_log_get_sw_reserved_room();
void lhif_drv_log_set_sw_reserved_room(kal_uint16 room_size);
kal_uint32 lhif_drv_log_get_log_full();
kal_uint32 lhif_drv_check_meta_full();
kal_uint32 lhif_drv_check_vrb_shortage();
void lhif_drv_log_int_clr_notify(kal_uint32 notify);
kal_uint32 lhif_drv_log_int_get_notify();
void lhif_drv_log_int_set_mask(kal_uint32 mask);
kal_uint32 lhif_drv_log_int_get_mask();
kal_bool lhif_drv_dl_cldma_ready_check(void);
kal_bool lhif_drv_meta_query_next_rw_idx(kal_uint32 meta_id, kal_uint16 *r_idx,kal_uint16 *w_idx);
void lhif_drv_meta_rel_entry(kal_uint32 meta_id, kal_uint16 rel_entry_num);
kal_uint32* lhif_drv_meta_get_base(kal_uint32 meta_id);
kal_uint16 lhif_drv_meta_get_tbl_entry_num(kal_uint32 meta_id);
kal_uint32* lhif_drv_desc_get_wri_ptr(kal_uint32 desc_id, kal_uint16 *remain_cont_word_num);
kal_uint32* lhif_drv_desc_inc_wri_ptr_and_start(kal_uint32 qid, kal_uint16 inc_num);
void lhif_drv_set_ib_desc_cksum(kal_uint32 *ib_desc);
void lhif_drv_copro_vrb_release(void* addr, kal_uint16 len, kal_uint8 task_id);
void lhif_drv_dpcopro_power_on(kal_uint8 mod_id);
void lhif_drv_dpcopro_power_down(kal_uint8 mod_id);
void lhif_drv_dpcopro_event_cb_reg(void(*reg_cb)(kal_uint32 event),kal_uint32 reg_event);
void lhif_drv_dpcopro_cb_event_update(kal_uint32 reg_event);

kal_uint32 lhif_drv_get_all_dp_power_status(void);
void lhif_drv_dpcopro_event_reg(kal_uint32 reg_event);
void lhif_drv_dpcopro_event_dereg(kal_uint32 reg_event);

void lhif_drv_data_write_dl_inband_desc(void *desc_ptr,kal_uint8 c_bit,kal_uint16 net_type,kal_uint16 net_if,kal_uint8 flush_cmd,kal_uint8 flow,kal_uint16 count_l);
void lhif_drv_data_write_ul_inband_desc(void *desc_ptr,kal_uint8 c_bit,kal_uint16 net_type,kal_uint16 net_if,kal_uint8 flush_cmd,kal_uint8 flow,kal_uint16 count_l);
void lhif_drv_data_write_normal_desc(void *desc_ptr,kal_uint8 c_bit,kal_uint16 offset,kal_uint8 f_bit,kal_uint16 length,void *address);

kal_bool lhif_drv_log_check_idle(void);

#ifdef _LHIF_GEN95_HW_
void lhif_drv_data_write_ul_nat_inband_desc(void *desc_ptr, lhif_ul_nat_inband_data_t *data_ptr);
#endif


#if defined(__MTK_TARGET__)
#else // MODIS
#include "dpcopro_router.h"
//#include "lhif_if.h"

typedef struct{
    kal_uint32*    tbl_base; // must cache(32 byte) align 
    kal_uint16     entry_num;
    kal_uint8      entry_size;
    kal_uint8      ch_idx;// only use for DL Cipher & 3G DL 
}lhif_meta_tbl_config_t;

// Should be replaced to QP format
kal_uint32 lhif_drv_ut_get_hw_reg_base();
kal_uint32 lhif_drv_ut_get_hw_log_reg_base();
kal_uint32 lhif_drv_ut_get_meta_base();
kal_uint32 lhif_drv_ut_get_qp_base();
void lhif_drv_ut_writereg32(kal_uint32 reg_addr, kal_uint32 value);
kal_uint32 lhif_drv_ut_readreg32(kal_uint32 reg_addr);
kal_bool lhif_drv_ut_dl_enable(kal_bool enable);
kal_bool lhif_drv_ut_ul_enable(kal_bool enable);
void lhif_qp_ut_meta_config(kal_uint32 meta_id, lhif_meta_tbl_config_t *meta);
kal_bool lhif_qp_ut_meta_query(kal_uint32 meta_id, kal_uint16 *read_idx, kal_uint16 *end_idx);
kal_uint32* lhif_qp_ut_get_tbl_base(kal_uint32 meta_id);
kal_uint16 lhif_qp_ut_get_tbl_size(kal_uint32 meta_id);
void lhif_qp_ut_meta_rel_entry(kal_uint32 meta_id, kal_uint16 rel_entry_num);
kal_uint32* lhif_qp_ut_inc_wri_ptr(kal_uint32 desc_id, kal_uint16 desc_word_num);
kal_uint32* lhif_qp_ut_get_wri_ptr(kal_uint32 desc_id, kal_uint16 *remain_cont_word_num);
kal_uint32* lhif_qp_ut_inc_wri_ptr_and_start(kal_uint32 desc_id, kal_uint16 desc_word_num);
void lhif_qp_ut_start(kal_uint32 desc_id, kal_uint16 desc_word_num);
void lhif_qp_ut_set_checksum(inband_desc_hdr_t *hdr);
kal_uint16 lhif_qp_ut_inc_wri_idx_and_start(kal_uint32 desc_id, kal_uint16 desc_word_num);
void lhif_drv_ut_log_set_read_idx(kal_uint16 read_idx);
void lhif_drv_ut_log_set_write_idx(kal_uint16 write_idx);
void lhif_drv_ut_log_set_log_seq(kal_uint16 log_seq);
#endif

#endif //_HIF_LHIF_H
