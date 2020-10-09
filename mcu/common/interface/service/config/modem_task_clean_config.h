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
 *   modem_task_clean_config.h
 *
 * Project:
 * --------
 *
 *
 * Description:
 * ------------
 *   This file provides the task clean up handler config parameter
 *
 * Author:
 * -------
 * -------
 *
 *============================================================================
 *             HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
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
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

/****************************************************************************
  * X_TASK_CLEAN_CONST(index, handler, option)
  *
  *       index: task unique index which MUST be same with task name in KAL config file.
  *    handler: task clean handler. 
  *     option: 
  *                 KAL_TRUE,   task stack will be reset in exception flow.
  *                 KAL_FALSE,  task stack will NOT be reset in exception flow.
  *
  *    Example:
  *             
  *            #if defined(__USER_COMPILE_OPTION__)    //You can add your own task compile option, if needed.
  *
  *            X_TASK_CLEAN_CONST( INDX_***, ***_task_clean_handler, KAL_FALSE )
  *
  *            #endif
  ***************************************************************************/

/* modem task clean handler config start */
//X_TASK_CLEAN_CONST(INDX_***, ***_task_clean_handler, KAL_FALSE)
#if defined(__LTE_RAT__)
X_TASK_CLEAN_CONST(INDX_EL2, el2_task_clean_handler, KAL_FALSE)
X_TASK_CLEAN_CONST(INDX_ERT, ert_task_clean_handler, KAL_FALSE)
#endif
#if defined(__C2K_RAT__)
X_TASK_CLEAN_CONST(INDX_CHLP, hlp_task_clean_handler, KAL_FALSE)
X_TASK_CLEAN_CONST(INDX_LMD, Lmd_Task_Clean_Handler, KAL_FALSE)
X_TASK_CLEAN_CONST(INDX_CPSW, psw_task_clean_handler, KAL_FALSE)
X_TASK_CLEAN_CONST(INDX_CVAL, Cval_Task_Clean_Handler, KAL_FALSE)
X_TASK_CLEAN_CONST(INDX_CUIM, Cuim_Task_Clean_Handler, KAL_FALSE)
#endif
X_TASK_CLEAN_CONST(INDX_STKBRG, stkbrg_task_clean_handler, KAL_FALSE)
#if defined(__LTE_RAT__)
X_TASK_CLEAN_CONST(INDX_EMM, emm_task_clean_handler, KAL_FALSE)
#endif
X_TASK_CLEAN_CONST(INDX_NWSEL, nwsel_task_clean_handler, KAL_FALSE)
#if defined(__CCISMCORE_SUPPORT__)
X_TASK_CLEAN_CONST(INDX_CCISMCORE, ccismcore_task_clean_handler, KAL_FALSE)
#endif
X_TASK_CLEAN_CONST(INDX_USM, usm_task_clean_handler, KAL_FALSE)
X_TASK_CLEAN_CONST(INDX_CC, cc_task_clean_handler, KAL_FALSE)
X_TASK_CLEAN_CONST(INDX_LTECSR, ltecsr_task_clean_handler, KAL_FALSE)
X_TASK_CLEAN_CONST(INDX_SIM, sim_task_clean_handler, KAL_FALSE)
X_TASK_CLEAN_CONST(INDX_IWLAN, iwlan_task_clean_handler, KAL_FALSE)
X_TASK_CLEAN_CONST(INDX_WO, wo_task_clean_handler, KAL_FALSE)
X_TASK_CLEAN_CONST(INDX_LPP, lpp_task_clean_handler, KAL_FALSE)
#if defined(__RRLP_SUPPORT__) 
X_TASK_CLEAN_CONST(INDX_RRLP, rrlp_task_clean_handler, KAL_FALSE)
#endif
#ifdef __MOD_IMC__
X_TASK_CLEAN_CONST(INDX_IMC, imc_task_clean_handler, KAL_FALSE)
#endif
X_TASK_CLEAN_CONST(INDX_RR_FDD, FDD_rr_task_clean_handler, KAL_FALSE)
#if defined(__UMTS_TDD128_MODE__) || defined(__TDD_MODEM__) || defined(__TDD_2G_OP01__)
X_TASK_CLEAN_CONST(INDX_RR_TDD, TDD_rr_task_clean_handler, KAL_FALSE)
#endif
X_TASK_CLEAN_CONST(INDX_LAS, las_task_clean_handler, KAL_FALSE)
X_TASK_CLEAN_CONST(INDX_SSDS,ssds_task_clean_handler, KAL_FALSE)
#if defined(__IMS_SUPPORT__)
X_TASK_CLEAN_CONST(INDX_VDM, vdm_task_clean_handler, KAL_FALSE)
X_TASK_CLEAN_CONST(INDX_SDM, sdm_task_clean_handler, KAL_FALSE)
#endif
X_TASK_CLEAN_CONST(INDX_SMS, SMS_Task_Clean_Handler, KAL_TRUE)
X_TASK_CLEAN_CONST(INDX_ATP, atp_task_clean_handler, KAL_TRUE)
X_TASK_CLEAN_CONST(INDX_L4, l4_task_clean_handler, KAL_TRUE)
X_TASK_CLEAN_CONST(INDX_DDM,ddm_task_clean_handler, KAL_TRUE)
X_TASK_CLEAN_CONST(INDX_EL1, el1_task_clean_handler, KAL_FALSE)
X_TASK_CLEAN_CONST(INDX_EL1_MPC, el1_mpc_task_clean_handler, KAL_FALSE)
X_TASK_CLEAN_CONST(INDX_SBP, sbp_task_clean_handler, KAL_FALSE)



/* modem task clean handler config end */


/* middleware task clean handler config start */
//X_TASK_CLEAN_CONST(INDX_***, ***_task_clean_handler, KAL_FALSE)
X_TASK_CLEAN_CONST(INDX_LBS, lbs_task_clean_handler, KAL_FALSE)
X_TASK_CLEAN_CONST(INDX_IPCORE, IPCore_Task_Clean_Handler, KAL_FALSE)
X_TASK_CLEAN_CONST(INDX_NMU, nmu_task_clean_handler, KAL_FALSE)


/* middleware task clean handler config end */
