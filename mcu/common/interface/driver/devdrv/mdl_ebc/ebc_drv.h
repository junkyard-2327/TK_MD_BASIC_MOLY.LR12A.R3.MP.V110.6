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
 *      ebc_drv.h
 *
 * Project:
 * --------
 *      UMOLY
 *
 * Description:
 * ------------
 *      This module defines the public APIs of EBC driver
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
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 *****************************************************************************/

#ifndef EBC_DRV_H_
#define EBC_DRV_H_

#include "kal_general_types.h"

// ============== define Channel Map ==================
enum EBC_CH_ID {
    EBC_MDL_RAKE_ID = 0,
	EBC_MDL_RXBRP_ID,
	EBC_MDL_MPC_ID,
	EBC_MDL_IMC_ID,
	EBC_MDL_ICC_ID,
	EBC_MDP_MPC_ID,
	EBC_MDP_IMC_ID,
	EBC_MDP_ICC_ID,
	EBC_MTOL_MPC_ID,
	EBC_MTOL_IMC_ID,
	EBC_MTOL_ICC_ID,
    EBC_MDL_DFE_ID,
    EBC_MDL_DFE2_ID,
	EBC_CH_NUM
};

#define EBC_CH_BEGIN        (EBC_MDL_RAKE_ID)
#define EBC_MDL_ID_BEGIN	(EBC_MDL_RAKE_ID)
#define EBC_MDL2_ID_BEGIN   (EBC_MDL_DFE_ID)
#define EBC_MDP_ID_BEGIN	(EBC_MDP_MPC_ID)
#define EBC_MTOL_ID_BEGIN	(EBC_MTOL_MPC_ID)

typedef union {
	// all channel
	kal_uint32 ALL;
	// all channel of each type
	struct {
        kal_uint32 MDL_ALL:  5;	//ch id = 0~4
		kal_uint32 MDP_ALL:  3;	//ch id = 5~7
		kal_uint32 MTOL_ALL: 3;	//ch id = 8~10
        kal_uint32 MDL2_ALL: 2; //ch id = 11~12
	};
	// each channel
	struct {
		kal_uint32 MDL_RAKE: 1;	//ch id = 1
		kal_uint32 MDL_RXBRP:1;	//ch id = 2
		kal_uint32 MDL_MPC:  1;	//ch id = 3
		kal_uint32 MDL_IMC:  1;	//ch id = 4
		kal_uint32 MDL_ICC:  1;	//ch id = 5
		kal_uint32 MDP_MPC:  1;	//ch id = 6
		kal_uint32 MDP_IMC:  1;	//ch id = 7
		kal_uint32 MDP_ICC:  1;	//ch id = 8
		kal_uint32 MTOL_MPC: 1;	//ch id = 9
		kal_uint32 MTOL_IMC: 1;	//ch id = 10
		kal_uint32 MTOL_ICC: 1;	//ch id = 11
        kal_uint32 MDL_DFE1: 1; //ch id = 12
        kal_uint32 MDL_DFE2: 1; //ch id = 13
	};
}EBC_CH_MAP;

// ==================== Init Info ======================
typedef struct {
	kal_uint32 base_addr;
	kal_uint32 size;
} EBC_EMI_Info;

typedef struct {
	EBC_CH_MAP 	 ChEn;
	kal_uint32 	 OptionFlag;
	// return error, argu: channel id, base addr, size
	kal_int32  (*flush_callback_ex)(kal_uint32, kal_uint32, kal_uint32);
	void (*buffer_full_callback)(void);
	EBC_EMI_Info ChBuf[EBC_CH_NUM];
} EBC_Init_Info;

#define EBC_INIT_INFO_DEFAULT 	{{0}, 0, 0, 0}

// =================== EBC API ========================

/* @brief EBC driver init
 * @param initial info. & register callback function */
kal_int32 ebc_drv_init(EBC_Init_Info* pInitInfo);

/* @brief EBC driver stop in exception mode */
kal_int32 ebc_drv_stop_ex(void);

/* @brief EBC driver un-mask CIRQ */
void ebc_drv_unmask_cirq(void);

/* @brief EBC driver get all buffer full state */
kal_uint32 ebc_drv_get_buf_full_state(void);

/* @brief EBC driver clear buffer full state
 * @param buffer map: one bit one buffer  */
kal_uint32 ebc_drv_clr_buf_full_state(kal_uint32 BufMap);

#endif /* EBC_DRV_H_ */
