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
 * 
 *
 * Project:
 * --------
 *   MAUI
 *
 * Description:
 * ------------
 * 
 *
 * Author:
 * -------
 * 
 *
 *============================================================================
 *             HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
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
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/
#ifndef __EX_NVRAM_EDITOR_H__
#define __EX_NVRAM_EDITOR_H__


#ifndef NVRAM_NOT_PRESENT
#ifdef __cplusplus
extern "C"
{
#endif /* __cplusplus */ 

#include "ex_nvram_def.h"

typedef struct ex_fulllog_t_d
{
    kal_char raw[TOTAL_EXPTR_SIZE];
} EX_FULLLOG_T_D;

#ifdef GEN_FOR_PC
BEGIN_NVRAM_DATA

/********************************************************************************************
 * LID_NAME
 *      NVRAM_EF_SYS_EXCEPTION_LID
 * DESCRIPTION
 *      This is exception records
 * INFOMATION
 *      Can OTA Reset: Yes
 *      Update Scenario: MD exception (not showing for security reason).
 *********************************************************************************************/
LID_BIT VER_LID(NVRAM_EF_SYS_EXCEPTION_LID)
EX_FULLLOG_T_D *NVRAM_EF_SYS_EXCEPTION_TOTAL
{
};
 /********************************************************************************************
 * LID_NAME
 *      NVRAM_EF_SYS_STATISTICS_LID
 * DESCRIPTION
 *      This is the runtime system statistics 
 * INFOMATION
 *      Can OTA Reset: Yes
 *      Update Scenario: This LID will update when MD power off or MD exception.
 *********************************************************************************************/
 
 LID_BIT VER_LID(NVRAM_EF_SYS_STATISTICS_LID)
 stack_statistics_struct *NVRAM_EF_SYS_STATISTICS_TOTAL
 {
    stack_stats_status:"whether statistics are effective"
        {
        };
    total_save_count:"update and save times"
        {
        };
    effective_accum_ustime_low:"effective running us(low)"
        {
        };
    effective_accum_ustime_high:"effective running us(high)"
        {
        };
    memory_pool:"system memoy pools water level"
        {
        };
    runtime_max_amount_total:"overall statistics"
        {
        };
    runtime_max_amount_system:"system statistics"
        {
        };
    runtime_max_amount_task:"tasks statistics"
        {
        };
    runtime_max_amount_hisr:"hisrs statistics"
        {
        };
    primitive_size:"structure size of primitives"
        {
        };

  
#if defined(DEBUG_BUF1) || defined(DEBUG_BUF2)
     max_ctrl_buff_num_allocated:"max ctrl buffer num allocated"
        {
        };
#endif /* DEBUG_BUF1 || DEBUG_BUF2 */
 
#if defined(DEBUG_BUF_MOD_USAGE) && !defined(__MTK_TARGET__)	
     mod_ctrlBuf_peak_count:"md ctrl buffer peak count"
        {
        };
#endif /* end of DEBUG_BUF_MOD_USAGE && !__MTK_TARGET__ */
 
 
#if defined(FURTHER_STATISTIC)
     top_adm_profile:"top adm profile"
        {
        };
     top_adm_user_profile:"top adm user profile"
        {
        };
     kicked_out_smallest_adm_user_size:"kicked out smallest adm user size"
        {
        };
     kicked_out_adm_user_number:"kicked out adm user number"
        {
        };
     NVRAM_HRTQbitFailLog_VPE0_Dur:"VPE0 Qbit Violation Duration"
     {
     };
     NVRAM_HRTQbitFailLog_VPE0_Addr:"VPE0 Qbit Offender"
     {
     };
     NVRAM_HRTQbitFailLog_VPE1_Dur:"VPE1 Qbit Violation Duration"
     {
     };
     NVRAM_HRTQbitFailLog_VPE1_Addr:"VPE1 Qbit Offender"
     {
     };
     NVRAM_HRTQbitFailLog_VPE2_Dur:"VPE2 Qbit Violation Duration"
     {
     };
     NVRAM_HRTQbitFailLog_VPE2_Addr:"VPE2 Qbit Offender"
     {
     };
     NVRAM_HRTQbitFailLog_VPE3_Dur:"VPE3 Qbit Violation Duration"
     {
     };
     NVRAM_HRTQbitFailLog_VPE3_Addr:"VPE3 Qbit Offender"
     {
     };
#endif

    
 };

/********************************************************************************************
* LID_NAME
*      NVRAM_EF_L1_SYS_STATISTICS_LID
* DESCRIPTION
*      [Phase-Out] This is L1Core runtime system statistics 
* INFOMATION
*      Can OTA Reset: Yes
*      Update Scenario: will not be updated. (phase-out)
*********************************************************************************************/

 LID_BIT VER_LID(NVRAM_EF_L1_SYS_STATISTICS_LID)
 stack_statistics_struct *NVRAM_EF_SYS_STATISTICS_TOTAL
 {
 };
END_NVRAM_DATA
#endif	/*GEN FOR PC*/

#ifdef __cplusplus
}
#endif 

#endif  /* !NVRAM_NOT_PRESENT */
#endif  /* __EX_NVRAM_EDITOR_H__ */
