/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2005
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
 *   vc_excep_hdlr.h
 *
 * Project:
 * --------
 *   UMOLY
 *
 * Description:
 * ------------
 *   The format of exception record for VoLTE core Linux.
 *   It will be copied from Bach.
 *
 * Author:
 * -------
 * -------
 *
 *============================================================================
 *             HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/
 
#ifndef __VC_EXCEP_HDLR_FORMAT_H__
#define __VC_EXCEP_HDLR_FORMAT_H__

//------------------------------------------------------------------
//
// macros
//
#define VC_EXCEPTION_RECORD_T duos_excp_rec_t

//------------------------------------------------------------------
//
// enums
//
enum {
    VC_EX_STATUS_INIT = 0,
    VC_EX_STATUS_INIT_DONE,
    VC_EX_STATUS_TRIGGER_CTI,
    VC_EX_STATUS_SAVE_EX_INFO,
    VC_EX_STATUS_SAVE_EX_DONE,
    VC_EX_STATUS_SAVE_SW_VERSION,
    VC_EX_STATUS_SAVE_SW_VERSION_DONE,
    VC_EX_STATUS_CACHE_FLUSH,
    VC_EX_STATUS_CACHE_FLUSH_DONE,
    VC_EX_STATUS_READY,
    VC_EX_STATUS_END,
};

enum {
    VC_EX_REASON_ECT = 1,
    VC_EX_REASON_NMI,
    VC_EX_REASON_BUG,
    VC_EX_REASON_BUG_ON,
    VC_EX_REASON_DIE_KERNEL,
    VC_EX_REASON_PANIC,
    VC_EX_REASON_END,
};
//------------------------------------------------------------------


//------------------------------------------------------------------
//
// structures
//
// error table
typedef struct{
    unsigned int err_code;
    const char   *err_msg;
} duos_linux_err_tab_t;

// assert table
typedef struct{
    unsigned int  line_num;
    unsigned int  para1;
    unsigned int  para2;
    unsigned int  para3;
    char          file_name[64];
}duos_excp_assert_tlb;

// fatal table
typedef struct{
    unsigned int error_status;
    unsigned int error_pc;
    unsigned int error_lr;
    unsigned int error_address;
    unsigned int error_code1;
    unsigned int error_code2;
}duos_excp_fatal_tlb;

// exception record
typedef struct{
    unsigned int except_type;
    unsigned int except_stat;
	union{
		duos_excp_assert_tlb assert;
		duos_excp_fatal_tlb  fatal;
	} except_content;
}duos_excp_rec_t;
//------------------------------------------------------------------

#endif /* __VC_EXCEP_HDLR_FORMAT_H__ */
