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
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================*/

/* Doxygen Group Header ****************************************************//**  
 * @addtogroup EL1D_MT
 * @{
 ******************************************************************************/ 

//Doxygen file documentation block example:
/***************************************************************************//**
 * @file       lmultithreadregtbl.h
 * @author     YuLern Chu (MTK12318)
 * @date       2016.10.28
 * @brief      Header file of lmultithread.c. EL1D Multi-thread
 ******************************************************************************/

/***************************************************************************//**
 * @brief   Registration table of MT users 
 * @date    2016.12.01
 ******************************************************************************/
// for callback function registration on Core0 Symbol11 of MT
// example: EL1D_MT_REGISTER( your callback function name )EL1D_MT_MOD(your module id)
/****************************************************************************************
                        Do NOT use compile option in here
*****************************************************************************************/
EL1D_MT_REGISTER( CORE1_C_RX    , EL1D_RxFsm_Handle_CC_Combined_Fsm_Sync_Nbi_TBMIMO_CSI_Thread )EL1D_MT_MOD(EL1D_MT_MOD_RX)//lrxfsm.h
EL1D_MT_REGISTER( CORE1_D_RX    , EL1D_RxDspRpt_Handle_Inner_Cmimo_Report_Common_Thread    )EL1D_MT_MOD(EL1D_MT_MOD_RX)//lrxdsprpt.h
EL1D_MT_REGISTER( CORE1_D_RX    , EL1D_RxDspRpt_Handle_Inner_32k_Report_Common_Thread      )EL1D_MT_MOD(EL1D_MT_MOD_RX)//lrxdsprpt.h
EL1D_MT_REGISTER( CORE1_D_RX    , EL1D_Subframetick_Core1_Post_Handler                     )EL1D_MT_MOD(EL1D_MT_MOD_RX)//lmain.h
EL1D_MT_REGISTER( CORE0_C_TX    , EL1D_RxDspRpt_Handle_PHICH_Report_In_EL1C_TX_LISR_MT3    )EL1D_MT_MOD(EL1D_MT_MOD_RX)//lrxpublic.h
EL1D_MT_REGISTER( CORE0_D_TX    , EL1D_RxDspRpt_Handle_Dsp_Report_In_EL1D_TX_LISR          )EL1D_MT_MOD(EL1D_MT_MOD_RX)//lrxinterface.h
EL1D_MT_REGISTER( CORE1_D_RX    , EL1D_RxPublic_Set_Rx_State_Next                          )EL1D_MT_MOD(EL1D_MT_MOD_RX)//lrxpublic.h
EL1D_MT_REGISTER( CORE1_C_RX    , EL1D_RxPublic_Set_Rx_State_Next                          )EL1D_MT_MOD(EL1D_MT_MOD_RX)//lrxpublic.h
EL1D_MT_REGISTER( CORE0_D_COMMON, EL1D_TX_RF_Related_Handler_SF_Tick_Main                  )EL1D_MT_MOD(EL1D_MT_MOD_TX)//ltxhandler.h
EL1D_MT_REGISTER( CORE0_D_TX    , EL1D_RX_Check_BRP_Pdsch_CRC_Report_In_T_Tick             )EL1D_MT_MOD(EL1D_MT_MOD_RX)//lrxinterface.h
EL1D_MT_REGISTER( CORE0_D_TX_T  , EL1D_RX_Check_BRP_Pdsch_CRC_Report_In_T_Tick             )EL1D_MT_MOD(EL1D_MT_MOD_RX)//lrxinterface.h
EL1D_MT_REGISTER( CORE1_D_RX    , EL1D_RF_SF_Tick                                          )EL1D_MT_MOD(EL1D_MT_MOD_RFD)//lrfinterface.h
EL1D_MT_REGISTER( CORE1_D_RX    , EL1D_RXDFE_SF_Tick                                       )EL1D_MT_MOD(EL1D_MT_MOD_RXDFE)//lrxdfecontrol.h
EL1D_MT_REGISTER( CORE1_D_RX    , EL1D_RxCsi_SF_Tick_Main                                  )EL1D_MT_MOD(EL1D_MT_MOD_RX)//lrxcsi.h
EL1D_MT_REGISTER( CORE0_C_TX    , EL1D_TX_L1c_Lisr_Tag_Timing_Update_Main                  )EL1D_MT_MOD(EL1D_MT_MOD_TX)//ltxhandler.h
EL1D_MT_REGISTER( CORE0_C_TX    , EL1D_TX_L1c_Lisr_MT_Enc                                  )EL1D_MT_MOD(EL1D_MT_MOD_TX)//ltxhandler.h
EL1D_MT_REGISTER( CORE0_C_TX    , EL1D_TX_L1c_Lisr_MT_Enc_With_Tag_Update                  )EL1D_MT_MOD(EL1D_MT_MOD_TX)//ltxhandler.h
EL1D_MT_REGISTER( NONE          , EL1D_Prof_Child_TC_Core0                                 )EL1D_MT_MOD(EL1D_MT_MOD_OTHERS)//lprof.h
EL1D_MT_REGISTER( NONE          , EL1D_Prof_Child_TC_Core1                                 )EL1D_MT_MOD(EL1D_MT_MOD_OTHERS)//lprof.h

EL1D_MT_REGISTER( CORE0_D_TX    , EL1D_TX_RF_Related_Handler_SF_Tick_Main                  )EL1D_MT_MOD(EL1D_MT_MOD_TX)//ltxhandler.h
EL1D_MT_REGISTER( CORE0_D_TX    , EL1D_TX_Handler_SF_Tick_Main                             )EL1D_MT_MOD(EL1D_MT_MOD_TX)//ltxhandler.h
EL1D_MT_REGISTER( CORE0_D_TX    , EL1D_TX_Handle_T_Tick_PUCCH                              )EL1D_MT_MOD(EL1D_MT_MOD_TX)//ltxhandler.h
EL1D_MT_REGISTER( CORE0_D_TX_T  , EL1D_TX_Handle_T_Tick_PUCCH                              )EL1D_MT_MOD(EL1D_MT_MOD_TX)//ltxhandler.h
EL1D_MT_REGISTER( CORE0_D_TX    , EL1D_TX_Handle_T_Tick_PUSCH                              )EL1D_MT_MOD(EL1D_MT_MOD_TX)//ltxhandler.h
EL1D_MT_REGISTER( CORE0_D_TX_T  , EL1D_TX_Handle_T_Tick_PUSCH                              )EL1D_MT_MOD(EL1D_MT_MOD_TX)//ltxhandler.h
EL1D_MT_REGISTER( CORE0_D_TX    , EL1D_TX_Get_Harq_Info                                    )EL1D_MT_MOD(EL1D_MT_MOD_TX)//ltxgetrxinfo.h
EL1D_MT_REGISTER( CORE0_D_TX_T  , EL1D_TX_Get_Harq_Info                                    )EL1D_MT_MOD(EL1D_MT_MOD_TX)//ltxgetrxinfo.h



/* Doxygen Group EL1D_MT End ********************************************//**
 * @}
 ******************************************************************************/

