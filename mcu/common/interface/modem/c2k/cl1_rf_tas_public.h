/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2016
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
 *
 * Filename:
 * ---------
 * cl1d_rf_tas_public.h
 *
 * Project:
 * --------
 * C2K
 *
 * Description:
 * ------------
 * Header file containing typedefs and definitions pertaining
 * to C2K RF driver external interface.
 *
 * Author:
 * -------
 *
 *
 *==============================================================================
 *             HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
 *
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *==============================================================================
 *******************************************************************************/
#ifndef CL1D_RF_TAS_PUBLIC_H
#define CL1D_RF_TAS_PUBLIC_H
#ifdef SYS_OPTION_TX_TAS_ENABLE
    #define _C2K_TAS_SUPPORT_   (1)
#else
    #define _C2K_TAS_SUPPORT_   (0)
#endif

#ifdef L1_SIM
	#undef _C2K_TAS_SUPPORT_
	#define _C2K_TAS_SUPPORT_	(1)
#endif

#define _C2K_TUNER_OLD_ (0)

#define C2K_TAS_BPI_PIN_NULL                    (-1)
#define M_ABS(vALUE)	(vALUE>=0? vALUE:(-vALUE))

#define C2K_TAS_BPI_PIN_GEN(pIN1eN, pIN2eN, pIN3eN, sETiDX) \
		((C2K_TAS_BPI_PIN1_##sETiDX == C2K_TAS_BPI_PIN_NULL ? 0 : ((pIN1eN) << M_ABS(C2K_TAS_BPI_PIN1_##sETiDX))) \
		|(C2K_TAS_BPI_PIN2_##sETiDX == C2K_TAS_BPI_PIN_NULL ? 0 : ((pIN2eN) << M_ABS(C2K_TAS_BPI_PIN2_##sETiDX))) \
		|(C2K_TAS_BPI_PIN3_##sETiDX == C2K_TAS_BPI_PIN_NULL ? 0 : ((pIN3eN) << M_ABS(C2K_TAS_BPI_PIN3_##sETiDX))))

typedef enum
{
   C2K_TAS_STATE0=0,
   C2K_TAS_STATE1,
   C2K_TAS_STATE2,
   C2K_TAS_STATE3,
   C2K_TAS_STATE4,
   C2K_TAS_STATE5,
   C2K_TAS_STATE6,
   C2K_TAS_STATE7,
   C2K_TAS_STATE_MAX,
   C2K_TAS_STATE_NULL = C2K_TAS_STATE_MAX
}C2K_CUSTOM_TAS_STATE_E;

typedef enum{
    C2K_TAS_VER_1_0 = 0,
    C2K_TAS_VER_1_5 = 1,
    C2K_TAS_VER_2_0 = 2,
    C2K_MAX_TAS_VER_NUM
}C2K_CUSTOM_TAS_VER_E;

typedef struct{
	kal_bool AT_TAS_SWITCH_Flag;
}CL1D_RF_TAS_AT_CMD_T;

#if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif
#endif
