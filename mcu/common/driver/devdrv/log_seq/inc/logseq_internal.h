/*
 * logseq_reg.h
 *
 *  Created on: 2016/4/22
 *      Author: MTK09658
 */

#ifndef LOGSEQ_INTERNAL_H_
#define LOGSEQ_INTERNAL_H_

#include "kal_public_api.h"
#include "log_top_reg.h"

// ============== define the register operation macro ================
// Port Related Macro
#define LS_MCU_BASE_OFFSET                  (LOG_TOP_MCU_BASE_ADDR - LOG_TOP_DSP_BASE_ADDR)
#define LS_REG(ch, reg)                     (reg + ch*LS_MCU_BASE_OFFSET)
#define LS_UNLOCK_MARKER                    (0xACCE)
#define LS_LOCK_MARKER                      (0)
#define PLS_MAX_NUM							(32)

#define LS_GET_EMI_WRITE_PACKET_ALIGNED_ADDR(ch)           (DRV_Reg32(DSP_LS_EMI_WRITE_PACKET_ALIGNED_ADDR + ch*LS_MCU_BASE_OFFSET))

#define LS_GET_EMI_REMAIN_SIZE(ch)                      (DRV_Reg32(DSP_LS_EMI_REMAIN_SIZE + ch*LS_MCU_BASE_OFFSET))

#define LS_GET_EMI_THRESHOLD_CNT(ch)					(DRV_Reg32(LS_REG(ch, DSP_LS_EMI_THRESHOLD_COUNT)))

#define LS_GET_LS_EMI_OVER_THS(ch)		                ((DRV_Reg32(DSP_LS_EMI_STATUS + ch*LS_MCU_BASE_OFFSET)) & 0x1)

#define LS_GET_EMI_WRAP_BIT(ch) 						((DRV_Reg32(LS_REG(ch, DSP_LS_EMI_STATUS))>>1)&0x1)

#define LS_SET_LS_SW_TEST_DATA(ch, data)                (DRV_WriteReg32(DSP_LS_SW_TEST_DATA + ch*LS_MCU_BASE_OFFSET, data))
/*!
 *  @brief LS PLS status
 */
typedef enum {
	LS_SET_MODE_STA = 0x1,
	LS_TAGSTART_STA = 0x2,
	LS_FORCE_RLS_STA = 0x4,
    LS_QUERY_STA = 0x8,
    LS_RELEASE_STA = 0x10,
    LS_TAGEND_STA = 0x20
}LS_PLS_STA;

/*!
 *  @brief LS backup status
 */
typedef enum {
    LS_RESTORE_SUCCESS = 0x1,
    LS_RESTORE_BUSY = 0x2,
    LS_BACKUP_SUCCESS = 0x4,
    LS_BACKUP_BUSY = 0x8
}LS_BACKUP_STA;

/*!
 *  @brief LS API lock status
 */
typedef enum {
    LS_NO_LOCK,
    LS_IRQ_LOCK,
    LS_SLEEP_LOCK,
    LS_FORCE_RLS_LOCK,
    LS_QUERY_Q_LOCK,
    LS_MODE_LOCK,
}LS_API_LOCK_STA;

/*!
 *  @brief LS backup data structure
 */
 #if defined(__MD93__)
 typedef struct{
	 kal_uint32 ls_emi_write_addr;				 // LS_EMI_WRITE_ADDR
	 kal_uint32 ls_remain_size; 				 // LS_EMI_REMAIN_SIZE
	 kal_uint32 ls_emi_ths_cnt; 				 // LS_EMI_THRESHOLD_COUNT
	 kal_uint32 ls_emi_write_aligned_ptr;		 // LS_EMI_WRITE_ALIGNED_PTR
	 kal_uint32 ls_l2_pkt_aligned_ptr_0;		 // LS_L2_PKT_ALIGNED_PTR_0
	 kal_uint32 ls_l2_pkt_aligned_ptr_1;		 // LS_L2_PKT_ALIGNED_PTR_1
	 kal_uint32 ls_l2_pkt_aligned_ptr_2;		 // LS_L2_PKT_ALIGNED_PTR_2
	 kal_uint32 ls_l2_pkt_aligned_ptr_3;		 // LS_L2_PKT_ALIGNED_PTR_3
	 kal_uint32 ls_l2_pkt_aligned_ptr_4;		 // LS_L2_PKT_ALIGNED_PTR_4
	 kal_uint32 ls_l2_pkt_aligned_ptr_5;		 // LS_L2_PKT_ALIGNED_PTR_5
	 kal_uint32 ls_l2_pkt_aligned_ptr_6;		 // LS_L2_PKT_ALIGNED_PTR_6
	 kal_uint32 ls_l2_pkt_aligned_ptr_7;		 // LS_L2_PKT_ALIGNED_PTR_7
	 kal_uint32 ls_internal_buf_used_level:12;	 // LS_INTERNAL_BUF_USED_LEVEL
	 kal_uint32 ls_l2_write_addr:9; 			 // LS_L2_WRITE_ADDR
	 kal_uint32 ls_l2_read_addr:9;				 // LS_L2_READ_ADDR
	 kal_uint32 ls_emi_wrapped:1;				 // LS_EMI_WRAPPED
 }LOG_SEQ_Backup_Info;
#elif defined(__MD95__)
typedef struct{
    kal_uint32 ls_emi_write_addr;               // LS_EMI_WRITE_ADDR
    kal_uint32 ls_remain_size;                  // LS_EMI_REMAIN_SIZE
    kal_uint32 ls_emi_ths_cnt;                  // LS_EMI_THRESHOLD_COUNT
    kal_uint32 ls_emi_write_aligned_ptr;		// LS_EMI_WRITE_ALIGNED_PTR
    kal_uint32 ls_l2_pkt_aligned_ptr_0;         // LS_L2_PKT_ALIGNED_PTR_0
    kal_uint32 ls_l2_pkt_aligned_ptr_1;         // LS_L2_PKT_ALIGNED_PTR_1
    kal_uint32 ls_l2_pkt_aligned_ptr_2;         // LS_L2_PKT_ALIGNED_PTR_2
    kal_uint32 ls_l2_pkt_aligned_ptr_3;         // LS_L2_PKT_ALIGNED_PTR_3
    kal_uint32 ls_l2_pkt_aligned_ptr_4;         // LS_L2_PKT_ALIGNED_PTR_4
    kal_uint32 ls_l2_pkt_aligned_ptr_5;         // LS_L2_PKT_ALIGNED_PTR_5
    kal_uint32 ls_l2_pkt_aligned_ptr_6;         // LS_L2_PKT_ALIGNED_PTR_6
    kal_uint32 ls_l2_pkt_aligned_ptr_7;         // LS_L2_PKT_ALIGNED_PTR_7
    kal_uint32 ls_internal_buf_full_cnt;		//LS_INTERNAL_FULL_CNT
    kal_uint32 ls_internal_max_used_level;	     //LS_MAX_USED_LEVEL
    kal_uint32 ls_internal_buf_lock_remain_level:10; // LS_INTERNAL_BUF_USED_LEVEL
    kal_uint32 ls_l2_write_addr:10;              // LS_L2_WRITE_ADDR
    kal_uint32 ls_l2_read_addr:10;               // LS_L2_READ_ADDR
    kal_uint32 ls_emi_wrapped:1;                // LS_EMI_WRAPPED
    kal_uint32 resv:1;
}LOG_SEQ_Backup_Info;
#else 
#error "No chip matched, please check it."
#endif
/*!
 *  @brief PLS query length and release length inform.
 */
typedef struct{
	kal_uint32 query_len;
	kal_uint32 rls_len;
	kal_uint32 rls_bypass_cnt;
	kal_uint32 pls_backup_emi_write_addr;//backup the emi write address in PLS mode due to the WHQA_00035111
}PLS_Internal_Info;

/*!
 *  @brief PLS debug information.
 */
typedef struct{
	kal_uint32 cur_query_len;
	kal_uint32 cur_rls_len;
	kal_uint32 total_rls_len;
}PLS_RLS_DBG_Info;

typedef struct{
	kal_uint32 dbg_query_len[PLS_MAX_NUM];
	PLS_RLS_DBG_Info dbg_rls_len[PLS_MAX_NUM];
	kal_uint32 query_ptr;
	kal_uint32 rls_ptr;
}PLS_DBG_Info;

/*!
 *  @brief LOG SEQ get EMI write address and length for L2 Auto mode and checking flush padding
 *  @param ch_id            channel id
 *  @param thrs_buf     	thrs_buf for write_addr, len
 */
void logseq_drv_get_wri_addr_and_len(kal_uint8 ch_id, LOG_SEQ_Thrs_Buf_Info* thrs_buf);



/*!
 *  @brief LOG SEQ save initial info. (part of driver initial flow, for DVT use)
 *  @param ch_id            channel id
 *  @param pInitInfo        driver initial info
 */
void logseq_drv_LS_save_initinfo(kal_uint8 ch_id, LOG_SEQ_Init_Info* pInitInfo);

/*!
 *  @brief LOG SEQ setup LS registers according to LSInitInfo
 *  @param ch_id            channel id
 *	@param reset_en			do LS reset/do not reset LS
 */
void logseq_drv_LS_setup(kal_uint8 ch_id, kal_uint8 reset_en);

/*!
 *  @brief LOG SEQ do flush operation
 *  @param ch_id            channel id
 */
kal_uint32 logseq_drv_flush(kal_uint8 ch_id);

/*!
 *  @brief LOG SEQ do abort operation
 *  @param ch_id            channel id
 */
kal_uint32 logseq_drv_abort(kal_uint8 ch_id);

/*!
 *  @brief LOG SEQ get EMI base address
 *  @param ch_id            channel id
 */
kal_uint32 logseq_drv_get_emi_base(kal_uint8 ch_id);

/*!
 *  @brief LOG SEQ handle current all log packets in EMI buffer
 *  @param ch_id            channel id
 */
kal_uint32 logseq_drv_handle_emi_buf(kal_uint8 ch_id);

/*!
 *  @brief LOG SEQ handle EMI buffer by calling the emi flush
 *  @param ch_id            channel id
 */
void logseq_drv_handle_emi_buf_ex(kal_uint8 ch_id);

/*!
 *  @brief LOG SEQ handle unreleased EMI buffer from the un-released ptr and call the emi flush
 *  @param ch_id            channel id
 */
void logseq_drv_handle_unrls_emi_buf_ex(kal_uint8 ch_id);


/*!
 *  @brief LOG SEQ get the address and length while entering excpetion mode, some data in queue did not release.
 *  @param ch_id            channel id
 * 	@param get_thrs_buf     the buf for unrls addr and len
 */
void logseq_drv_get_unrls_addr_len(kal_uint8 ch_id,LOG_SEQ_Thrs_Buf_Info* get_thrs_buf);


/*!
 *  @brief LOG SEQ calculate time tick
 *  @param s_tick           start tick
 *  @param e_tick           end tick
 */
kal_uint32 logseq_drv_tick_diff(kal_uint32 s_tick, kal_uint32 e_tick);

/*!
 *  @brief LOG SEQ do flush operation in exception mode
 *  @param ch_id            channel id
 */
kal_uint32 logseq_drv_flush_ex(kal_uint8 ch_id);

/*!
 *  @brief LOG SEQ set L2 buffer output open/closed.
 *  @param ch_id            channel id
 *  @param enable           open:KAL_TRUE, closed:KAL_FALSE
 */
void logseq_drv_set_l2buf_output(kal_uint8 ch_id, kal_bool enable);

/*!
 *  @brief LOG SEQ mask IRQ
 *  @param ch_id            channel id
 */
void logseq_drv_mask_irq(kal_uint8 ch_id);

/*!
 *  @brief LOG SEQ unmask IRQ
 *  @param ch_id            channel id
 */
void logseq_drv_unmask_irq(kal_uint8 ch_id);

/*!
 *  @brief LOG SEQ do resume operation after flush
 *  @param ch_id            channel id
 */
void logseq_drv_resume_after_flush(kal_uint8 ch_id);

/*!
 *  @brief LOG SEQ do resume operation after abort
 *  @param ch_id            channel id
 */
void logseq_drv_resume_after_abort(kal_uint8 ch_id);

/*!
 *  @brief LOG SEQ do sw workaround in LS abort timeout
 *  @param ch_id            channel id
 */
void logseq_drv_abort_timeout_recover(kal_uint8 ch_id);

#if defined(__MD95__)
/*!
 *  @brief LOG SEQ force LS to be abort done if LS HW hang for abort failed
 *  @param ch_id            channel id
 */
kal_uint32 logseq_drv_force_abort(kal_uint8 ch_id);
#endif

void logseq_drv_set_readptr_offset(kal_uint8 ch_id, kal_uint32 val);

kal_uint32 logseq_drv_insert_thrs_buf(kal_uint8 ch_id);

kal_bool logseq_drv_thrs_buf_empty(kal_uint8 ch_id);

kal_bool logseq_drv_api_try_lock(kal_uint8 ch_id, kal_uint32 lock);

kal_bool logseq_drv_api_get_lock(kal_uint8 ch_id, kal_uint32 lock);

void logseq_drv_api_unlock(kal_uint8 ch_id);

//Time calculation API
kal_uint32 logseq_drv_get_cur_us(void);

kal_uint32 logseq_drv_get_cur_us(void);

void logseq_drv_delay_us(kal_uint32 us);

kal_uint32 logseq_drv_get_lisr_count(kal_uint8 ch_id);

#endif /* LOGSEQ_REG_H_ */
