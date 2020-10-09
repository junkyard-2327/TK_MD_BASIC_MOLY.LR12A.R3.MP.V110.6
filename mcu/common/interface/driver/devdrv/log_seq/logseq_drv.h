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
 *      logseq_drv.h
 *
 * Project:
 * --------
 *      UMOLYYA
 *
 * Description:
 * ------------
 *      This module defines the public APIs of log_seq driver
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
 *****************************************************************************/

#ifndef LOGSEQ_DRV_H_
#define LOGSEQ_DRV_H_

#include "kal_general_types.h"

/*!
 *  @brief LS error code enumeration
 *  @param LS_NO_ERROR                  LS no error
 *  @param LS_FLUSH_TIMEOUT             LS do flush timeout
 *  @param LS_ABORT_TIMEOUT             LS do abort timeout
 *  @param LS_FLUSH_RESUME_TIMEOUT      LS do flush & resume_after_flush timeout
 *  @param LS_ABORT_RESUME_TIMEOUT      LS do abort & resume_after_abort timeout
 *  @param LS_WHOLE_SYS_FLUSH_TIMEOUT   LS do whole system flush timeout
 *  @param LS_BACKUP_FAIL               LS do backup fail
 *  @param LS_RESTORE_FAIL              LS do restore fail
 */
typedef enum {
    LS_NO_ERROR = 0,
    LS_FLUSH_TIMEOUT = 0x1,
    LS_ABORT_TIMEOUT = 0x2,
    LS_FLUSH_RESUME_TIMEOUT = 0x4,
    LS_ABORT_RESUME_TIMEOUT = 0x8,
    LS_WHOLE_SYS_FLUSH_TIMEOUT = 0x10,
    LS_BACKUP_FAIL = 0x20,
    LS_RESTORE_FAIL = 0x40,
    LS_NO_DATA = 0x80,
    LS_INSERT_FAIL = 0x100,
    LS_EX_FAIL = 0x200,
    LS_FORCE_RLS_FAIL = 0x400,
    LS_FORCE_ABORT_FAIL = 0x800,
    LS_PLS_FLUSH_FAILED_DSP = 0x1000,
    LS_PLS_FLUSH_FAILED_MCU = 0x2000
}LS_ERROR_CODE;

/*!
 *  @brief LS channel id enumeration
 *  @param LS_DSP_CH             LS DSP channel
 *  @param LS_MCU_CH             LS MCU channel
 *  @param LS_CH_NUM             LS total channel number
 */
typedef enum {
    LS_DSP_CH,
    LS_MCU_CH,
    LS_CH_NUM
}LS_CH_ID;

/*!
 *  @brief LS get EMI buffer address & length whether is wrapped or not
 *  @param LS_NO_WRAPPED          LS return without wrapped address & length
 *  @param LS_WRAPPED             LS return with wrapped address & length
 */
typedef enum {
    LS_GET_DATA,
    LS_GET_NO_DATA
}LS_GET_ADDR_LEN_INFO;

/*!
 *  @brief LS interrupt issue mode
 *  @param LS_INT_THRESHOLD_MODE        LS issue interrupt by threshold count
 *  @param LS_INT_REMAIN_SIZE_MODE      LS issue interrupt by EMI remain size
 */
typedef enum {
    LS_INT_THRESHOLD_MODE,
    LS_INT_REMAIN_SIZE_MODE
}LS_LOGSEQ_INT_MODE;

/*!
 *  @brief LS EMI bandwidth selection. HW default is LS_BW_5US
 */
typedef enum{
    LS_BW_NO_LIMIMT,
    LS_BW_4US,
    LS_BW_5US,
    LS_BW_10US,
    LS_BW_16US,
    LS_BW_21US,
    LS_BW_32US,
    LS_BW_64US,
    LS_BW_128US,
    LS_BW_256US
}LS_BW_CTRL;

/*!
 *  @brief LS logging mode: user only uses LS_NORMAL, and the others are for driver verification
 */
typedef enum{
    LS_NORMAL = 0,
    LS_L2AUTO = 1,
    LS_INAUTO = 2,
    LS_TEST_MODE = 4
}LS_LOGGING_MODE;

/*!
 *  @brief LS EMI mode selection: user could configure LS_PLS for pls mode and LS_NORMAL_STREAM for streaming mode 
 */
typedef enum{
    LS_STREAM_EMI = 0,
    LS_PLS_EMI = 1,
    LS_EMI_MODE_NUM
}LS_EMI_MODE;

/*!
 *  @brief LS threshold buffer query result: when user query threshold buffer info, the return value will be as below
 */
typedef enum {
    LS_QUERY_END,
    LS_QUERY_CONTINUE,
    LS_QUERY_INVALID
}LS_QUERY_THRS_BUF_INFO;


/*!
 *  @brief define macro to configure LSInitInfo
 */
#define LS_Init_Info_initial    {0, 0, LS_BW_5US, 0, 0, 0, LS_NORMAL, 1, 0, 1, 0, 0, 0, LS_STREAM_EMI, 0}

/*!
 *  @brief LOG_SEQ_Init_Info is used to record the LOG_SEQ IP initial information
 */
typedef struct{
    /*!
     *  @brief ls_emi_base_addr is EMI base address
     */
    kal_uint32  ls_emi_base_addr;           // emi buffer address
    /*!
     *  @brief ls_emi_size is EMI buffer size (unit:byte)
     */
    kal_uint32  ls_emi_size:27;                // emi buffer size (unit:byte)
     /*!
     *  @brief ls_emi_bandwidth_ctrl is EMI bandwidth control(0~9, 0 is no limit)
     */
    kal_uint32  ls_emi_bandwidth_ctrl:4;      // 0~9, 0 is no limit
    /*!
     *  @brief ls_emi_wrapping_mode_en is EMI buffer wrapping mode enable(no interrupt will be issued, no EMI buffer blocking when LS write EMI buffer)
     */
    kal_uint32  ls_emi_wrapping_mode_en:1;    // 1, wrapping mode enable
    /*!
     *  @brief ls_emi_over_ths_int_level is EMI buffer over threshold interrupt level(unit:byte)
     *         when threshold count over this level, LS will issue interrupt
     */
    kal_uint32  ls_emi_over_ths_int_level:27;
    /*!
     *  @brief ls_emi_over_ths_en is Enable LS to issue interrupt when threshold count beyond the LS_EMI_BUF_OVER_THS_LEVEL
     */
    kal_uint32  ls_emi_over_ths_en:1;
    /*!
     *  @brief ls_log_mode_en is LS input mode selection (0:normal, 1:L2AUTO mode, 2:INAUTO mode, 4:SW test mode,
     */
    kal_uint32  ls_log_mode_en:3;
    /*!
     *  @brief ls_output_to_emi is LS output path(0:output to ATB, 1:output to EMI)
     */
    kal_uint32  ls_output_to_emi:1;
    /*!
     *  @brief ls_auto_test_init_val is initial value control of auto test mode counter
     */
    kal_uint32  ls_auto_test_init_val:14;
    /*!
     *  @brief ls_internal_buf_unlock_ths is internal buffer unlock thesis after internal buffer full(0~2, 0:total empty, 1:half empty, 2:usage 1/4)
     */
    kal_uint32  ls_internal_buf_unlock_ths:2; // 0~2
    /*!
     *  @brief ls_emi_pri_ultra_en is LS Enable EMI Priority Dynamic Adjustment Feature
     */
    kal_uint32  ls_emi_pri_ultra_en:1;
    /*!
     *  @brief ls_emi_pri_ultra_h_level is LS set EMI priority to ULTRA if L2 buffer usage beyond this level (unit:128 bytes)
     */
    kal_uint32  ls_emi_pri_ultra_h_level:6;
    /*!
     *  @brief ls_emi_pri_ultra_l_level is LS set EMI priority to normal if L2 buffer usage below this level (unit:128 bytes)
     */
    kal_uint32  ls_emi_pri_ultra_l_level:6;
	/*!
	*  @brief ls_emi_mode is user can select emi to streaming mode or PLS mode
	*/
	kal_uint32	ls_emi_mode_select:1;
    /*!
     *  @brief reserve
     */
    kal_uint32  rsv:2;
}LOG_SEQ_Init_Info;

/*!
 *  @brief LOG_SEQ_Callback_Info is used to record the LOG_SEQ IP callback functions
 */
typedef struct{
    /*!
     *  @brief buffer_over_ths_callback is LS callback function for EMI over threshold
     */
    void (*buffer_over_ths_callback)(kal_uint8);
    /*!
     *  @brief flush_callback is LS callback function for EMI flush in exception mode
     */
    void (*flush_ex_callback)(kal_uint8, kal_uint32, kal_uint32);
    /*!
     *  @brief the swwa callback for DHL to decide if activating sw workaround or assert.     
     *  @param channel id     
     */
    void (*action_for_ls_abort_timeout)(kal_uint8);
    
}LOG_SEQ_Callback_Info;

/*!
 *  @brief LOG_SEQ_Emi_Buf_Addr_Len is EMI buffer address & length of EMI log
 */
typedef struct{
    /*!
     *  @brief addr is EMI log start address
     */
    kal_uint32  addr;
    /*!
     *  @brief len is EMI log length
     */
    kal_uint32  len;
}LOG_SEQ_Emi_Buf_Addr_Len;

/*!
 *  @brief LOG_SEQ_Thrs_Buf_Info is EMI threshold buffer address & length of EMI log
 */
typedef struct log_seq_thrs_buf_info_t{
    kal_uint32  addr;
    kal_uint32  len;
} LOG_SEQ_Thrs_Buf_Info;

//===========================================================================

/*!
 *  @brief LOG SEQ driver init
 *  @param ch_id            channel id
 *  @param pInitInfo        initial info.
 */
void logseq_drv_init(kal_uint8 ch_id, LOG_SEQ_Init_Info* pInitInfo);

/*!
 *  @brief LOG SEQ callback function init
 *  @param pCallbackInfo    callback function info
 */
void logseq_drv_buf_full_callback_init(LOG_SEQ_Callback_Info* pCallbackInfo);

/*!
 *  @brief LOG SEQ get address and length that should be handled
 *  @param ch_id            channel id
 *  @param ls_addr_len      addr&len info
 */
void logseq_drv_get_addr_len(kal_uint8 ch_id, LOG_SEQ_Thrs_Buf_Info *thrs_buf);

/*!
 *  @brief LOG SEQ release EMI buffer from read pointer
 *  @param ch_id            channel id
 *  @param release_size     release size of EMI buffer
 */
void logseq_drv_release_emi_buf(kal_uint8 ch_id, kal_uint32 release_size);

/*!
 *  @brief LOG SEQ set flush and resume simultaneously
 *  @param ch_id            channel id
 */
kal_uint32 logseq_drv_flush_and_resume(kal_uint8 ch_id);

/*!
 *  @brief LOG SEQ get level 2 buffer usage
 *  @param ch_id            channel id
 */
kal_uint32 logseq_drv_get_L2_usage(kal_uint8 ch_id);

/*!
 *  @brief LOG SEQ get EMI buffer size
 *  @param ch_id            channel id
 */
kal_uint32 logseq_drv_get_emi_size(kal_uint8 ch_id);

/*!
 *  @brief LOG SEQ get EMI remain size
 *  @param ch_id            channel id
 */
kal_uint32 logseq_drv_get_emi_remain_size(kal_uint32 ch_id);

/*!
 *  @brief check if LOG SEQ is init
 *  @param ch_id            channel id
 */
kal_bool is_logseq_drv_init(kal_uint32 ch_id);

/*!
 *  @brief LOG SEQ stop LS with flush log in EMI buffer
 *  @param ch_id            channel id
 */
kal_uint32 logseq_drv_stop(kal_uint8 ch_id);

/*!
 *  @brief LOG SEQ stop LS immediately
 *  @param ch_id            channel id
 */
kal_uint32 logseq_drv_stop_im(kal_uint8 ch_id);

/*!
 *  @brief LOG SEQ resume LS logging from stop
 *  @param ch_id            channel id
 */
kal_uint32 logseq_drv_resume(kal_uint8 ch_id);

/*!
 *  @brief LOG SEQ call DHL callback after leaving dormant flow
 *  @param ch_id            channel id
 */
kal_uint32 logseq_drv_resume_force_rls(kal_uint8 ch_id);

/*!
 *  @brief LOG SEQ LS reset on 93 sw workaround for LS abort failed
 *  @param ch_id            channel id
 */
kal_uint32 logseq_drv_reinit_after_abort_failed(kal_uint8 ch_id);

/*!
 *  @brief LOG SEQ stop LS in exception mode
 *  @param ch_id                channel id
 *  @param whole_sys_flush_en   trigger whole system flush or not
 */
kal_uint32 logseq_drv_stop_ex(kal_uint8 ch_id, kal_bool whole_sys_flush_en);

/*!
 *  @brief LOG SEQ stop/re-dump LS in exception mode
 *  @param ch_id                channel id
 *  @param whole_sys_flush_en   trigger whole system flush or not
 */
kal_uint32 logseq_drv_stop_redump_ex(kal_uint8 ch_id, kal_bool whole_sys_flush_en);

/*!
 *  @brief LOG SEQ query EMI threshold buffer information
 *  @param ch_id                channel id
 *  @param thrs_buf             threshold buffer information
 */
kal_uint8 logseq_drv_query_thrs_buf(kal_uint8 ch_id, LOG_SEQ_Thrs_Buf_Info* thrs_buf);

/*!
 *  @brief LOG SEQ force release EMI threshold count without over threshold level
 *  @param ch_id            channel id
 */
kal_uint32 logseq_drv_force_rls_ths_count(kal_uint8 ch_id);

/*!
 *  @brief LOG SEQ set EMI mode, default is LS_STREAM_EMI
 *  @param ch_id            channel id
 *	@param mode				LS_STREAM_EMI, LS_PLS_EMI
 */
kal_uint32 logseq_drv_set_mode(kal_uint8 ch_id, kal_atomic_uint32 mode);

/*!
 *  @brief LOG SEQ start tag log
 *  @param void            
 */
kal_uint32 logseq_drv_tagStart(void);

/*!
 *  @brief LOG SEQ set EMI mode, default is LS_STREAM_EMI
 *  @param void            
 */
void logseq_drv_tagEnd(void);

//20170801- OPPO NEW feature: to take the log from memory dump 
//add two new APIs -logseq_drv_get_write_align_addr and logseq_drv_get_emi_wrapping_bit
/*!
 *  @brief get the emi write aligned address, read from HW reg or SW global on demand.
register and backup variable
 *  @param ch_id                channel id          
 */
kal_uint32 logseq_drv_get_write_align_addr(kal_uint8 ch_id);

/*!
 *  @brief judge if LOG SEQ get emi wrapping bit is set or not, read hw register and backup variable
 *  @param ch_id                channel id          
 */
kal_bool logseq_drv_get_emi_wrapping_bit(kal_uint8 ch_id);

/*!
 *  @brief get the LS dbg information if LS abort timeout happened, 
 the DHL should assert while using this API or it could cause HRT failed.
 *  @param ch_id                channel id          
 */
void logseq_drv_ls_hang_dbg_info(kal_uint8 ch_id);

#endif /* LOG_SEQ_H_ */
