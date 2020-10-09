/******************************************************************************
*  Modification Notice:
*  --------------------------
*  This software is modified by MediaTek Inc. and the information contained
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
*******************************************************************************/

/*==============================================================================
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

 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================*/

/* Doxygen Group Header ****************************************************//**  
 * @addtogroup EL1D_HISR
 * @{
 ******************************************************************************/ 

//Doxygen file documentation block example:
/***************************************************************************//**
 * @file       lhisrregtbl.h
 * @author     YuLern Chu (MTK12318)
 * @date       2016.10.14
 * @brief      Header file of lhisr.c. EL1D HISR
 ******************************************************************************/

/***************************************************************************//**
 * @brief   Registration table of TailCB users 
 * @date    2016.11.10
 ******************************************************************************/
/****************************************************************************************
                        Do NOT use compile option in here
*****************************************************************************************/

// for callback function registration on Core0 Symbol11 of TailCB
// example: EL1D_TAILCB_REGISTER( your tail_type, your callback function name )EL1D_MT_MOD(your module id)
EL1D_TAILCB_REGISTER( CORE0_11, EL1D_CS_Main_Abort_Tailcb                   )EL1D_MT_MOD(EL1D_MT_MOD_CS)
EL1D_TAILCB_REGISTER( CORE0_11, EL1D_CS_Main_Sf_Tick                        )EL1D_MT_MOD(EL1D_MT_MOD_CS)
EL1D_TAILCB_REGISTER( CORE0_11, EL1D_POS_Meas_Fsm                           )EL1D_MT_MOD(EL1D_MT_MOD_POS)
EL1D_TAILCB_REGISTER( CORE0_11, EL1D_TX_Dump_Timing_Trace                   )EL1D_MT_MOD(EL1D_MT_MOD_TX)

// for callback function registration on Core1 Symbol11.8 of TailCB
// example: EL1D_TAILCB_REGISTER( your tail_type, your callback function name )EL1D_MT_MOD(your module id)
EL1D_TAILCB_REGISTER( CORE1_11_8, EL1D_RxLPwr_Set_RRC_State_Change          )EL1D_MT_MOD(EL1D_MT_MOD_RX)
EL1D_TAILCB_REGISTER( CORE1_11_8, EL1D_RxPreSync_Set_Force_Pre_Sync_Mode    )EL1D_MT_MOD(EL1D_MT_MOD_RX)
EL1D_TAILCB_REGISTER( CORE1_11_8, EL1D_RxPreSync_Set_Force_Using_RS_EN      )EL1D_MT_MOD(EL1D_MT_MOD_RX)
EL1D_TAILCB_REGISTER( CORE1_11_8, EL1D_RxPreSync_Set_Dump_Allowed           )EL1D_MT_MOD(EL1D_MT_MOD_RX)
EL1D_TAILCB_REGISTER( CORE1_11_8, EL1D_RxLPwr_Set_LoRX_Test_Pattern         )EL1D_MT_MOD(EL1D_MT_MOD_RX)
EL1D_TAILCB_REGISTER( CORE1_11_8, EL1D_RxLPwr_Set_Low_Power_Allowed         )EL1D_MT_MOD(EL1D_MT_MOD_RX)
EL1D_TAILCB_REGISTER( CORE1_11_8, EL1D_RxLPwr_Set_LoRX_Allow_In_Test_Mode   )EL1D_MT_MOD(EL1D_MT_MOD_RX)
EL1D_TAILCB_REGISTER( CORE1_11_8, EL1D_RxLPwr_Set_Factory_RX_Mode           )EL1D_MT_MOD(EL1D_MT_MOD_RX)
EL1D_TAILCB_REGISTER( CORE1_11_8, EL1D_RxDspRpt_Set_Rx_Self_Test            )EL1D_MT_MOD(EL1D_MT_MOD_RX)
EL1D_TAILCB_REGISTER( CORE1_11_8, EL1D_RxPublic_Set_Inject                  )EL1D_MT_MOD(EL1D_MT_MOD_RX)


EL1D_TAILCB_REGISTER( CORE1_11_8, EL1D_RxFsm_Force_TBMIMO_Enable_Flag       )EL1D_MT_MOD(EL1D_MT_MOD_RX)
EL1D_TAILCB_REGISTER( CORE1_11_8, EL1D_Nbi_Set_INJ_Force_All_On_Off         )EL1D_MT_MOD(EL1D_MT_MOD_RX)
EL1D_TAILCB_REGISTER( CORE1_11_8, EL1D_Nbi_Set_INJ_Force_CC_Off_Bmp         )EL1D_MT_MOD(EL1D_MT_MOD_RX)
EL1D_TAILCB_REGISTER( CORE1_11_8, EL1D_Usip_BootStateUpdate                 )EL1D_MT_MOD(EL1D_MT_MOD_DSP_BOOTUP)
EL1D_TAILCB_REGISTER( CORE1_11_8, EL1D_Dsp_BootInit                         )EL1D_MT_MOD(EL1D_MT_MOD_DSP_BOOTUP)
EL1D_TAILCB_REGISTER( CORE1_11_8, EL1D_MT_Inject_Enable                     )EL1D_MT_MOD(EL1D_MT_MOD_OTHERS)


/* Doxygen Group EL1D_HISR End ********************************************//**
 * @}
 ******************************************************************************/
 
