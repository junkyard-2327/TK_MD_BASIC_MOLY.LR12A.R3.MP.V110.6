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
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================*/

/***************************************************************************//**
 * @brief   Registration table of EL1C MT users 
 * @date    2016.12.01
 ******************************************************************************/
// for callback function registration on Core0 Symbol 8 of MT
// example: EL1C_MT_REGISTER( your callback function name )

EL1C_MT_REGISTER( EL1D_RxPublic_Set_Rx_State_Next         )
EL1C_MT_REGISTER( EL1C_TX_PDCCH_PDSCH_PHICH_INFO_THREAD_2 )
EL1C_MT_REGISTER( EL1C_TX_PDCCH_PDSCH_PHICH_INFO_THREAD_1 )
EL1C_MT_REGISTER( EL1C_TX_PDCCH_PDSCH_PHICH_INFO_THREAD_0 )
EL1C_MT_REGISTER( EL1C_TX_GEMINI_RESERVATION_COMM         )
EL1C_MT_REGISTER( EL1C_TX_REQUIREMENT_PROCESS_THREAD_1    )
EL1C_MT_REGISTER( EL1C_TX_REQUIREMENT_PROCESS_THREAD_0    )
EL1C_MT_REGISTER( EL1C_TX_PROCESS_THREAD_1                )
EL1C_MT_REGISTER( EL1C_TX_PROCESS_THREAD_0                )
EL1C_MT_REGISTER( EL1C_TX_POST_PROCESS_THREAD_1           )
EL1C_MT_REGISTER( EL1C_TX_POST_PROCESS_THREAD_0           )
EL1C_MT_REGISTER( EL1D_TX_L1c_Lisr_Tag_Timing_Update_Main )
EL1C_MT_REGISTER( EL1D_TX_L1c_Lisr_MT_Enc                 )
EL1C_MT_REGISTER( EL1D_TX_L1c_Lisr_MT_Enc_With_Tag_Update )
EL1C_MT_REGISTER( EL1C_PHS_calc_rfdb                      )


