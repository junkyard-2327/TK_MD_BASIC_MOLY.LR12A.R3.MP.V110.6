/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2014
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
 *   cmif.h
 *
 * Project:
 * --------
 *   
 *
 * Description:
 * ------------
 *   
 *
 * Author:
 * -------
 * -------
 *
 *============================================================================
 *             HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
  * $Revision$
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
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/
#ifndef __DRV_CMIF_H__
#define __DRV_CMIF_H__


#include "kal_public_api.h"
#include "kal_general_types.h"

#include "cmif_common_def.h"

/*******************************************************************************
 * Typedefs 
 *******************************************************************************/
/*

emum CMIF_C2M_U3G_Code_t defined in
"common/interface/driver/sys_drv/cmif/cmif_c2m_isr_config_u3g.h"

emum CMIF_M2C_U3G_Code_t defined in
"common/interface/driver/sys_drv/cmif/cmif_m2c_isr_config_u3g_rake.h"

emum CMIF_M2C_FPC_1X_Code_t defined in
"common/interface/driver/sys_drv/cmif/cmif_m2c_isr_config_fpc_1x.h"

emum CMIF_M2C_DO_PD_Code_t defined in
"common/interface/driver/sys_drv/cmif/cmif_m2c_isr_config_do_pd.h"

emum CMIF_M2C_FOE_1X_Code_t defined in
"common/interface/driver/sys_drv/cmif/cmif_m2c_isr_config_foe_1x.h"


// Define status register type
typedef struct{
    kal_uint32 mask31_0;    
}CMIF_Mask_t;
*/

typedef kal_char                cmif_char;   
typedef kal_uint8               cmif_uint8;  
typedef kal_int8                cmif_int8;   
typedef kal_uint16              cmif_uint16; 
typedef kal_int16               cmif_int16;  
typedef kal_uint32              cmif_uint32; 
typedef kal_int32               cmif_int32;  
typedef kal_bool                cmif_bool;

/* User callback should be registered in common/interface/driver/sys_drv/cmif/ */

// Define user callback function type
typedef void (*CMIF_InterruptEntryFun)(CMIF_Mask_t*);

/*******************************************************************************
 * Function prototypes
 *******************************************************************************/
/**
  *  CMIF Init: Register Interrupt
  *  It would register IRQ for
  *     - M2C RAKE U3G, FPC_1X, DO_PD, FOE_1X
  */
extern void CMIF_Init();


/**
  *  CMIF Interrupt: MCU trigger MD32 
  *
  *  @param[in]  code  trigger interrupt code. Please use enum defined in index(enum) of callback table
  *  @return no return
  *
  **/
extern void CMIF_C2M_SWI_SW_U3G(CMIF_C2M_U3G_Code_t code);



/**
  *  Get CMIF Status register value
  *  @param[in]   mask    the value of status register(s)
  *
  **/
extern void CMIF_M2C_STATUS_U3G(CMIF_Mask_t* mask);
extern void CMIF_M2C_STATUS_FPC_1X(CMIF_Mask_t* mask);
extern void CMIF_M2C_STATUS_DO_PD(CMIF_Mask_t* mask);
extern void CMIF_M2C_STATUS_FOE_1X(CMIF_Mask_t* mask);

extern void CMIF_C2M_STATUS_U3G(CMIF_Mask_t* mask);


extern cmif_uint32 CMIF_C2M_STATUS_U3G_READ();

extern cmif_bool CMIF_MD32AllowPowerDown();


/**
  *   When the `irq_auto_eoi()` attribute is `CMIF_FALSE`
  *   Users could call these function to clean the interrupt bit 
  */
extern void CMIF_M2C_EOI_U3G(CMIF_M2C_U3G_Code_t code);
extern void CMIF_M2C_EOI_FPC_1X(CMIF_M2C_FPC_1X_Code_t code);
extern void CMIF_M2C_EOI_DO_PD(CMIF_M2C_DO_PD_Code_t code);
extern void CMIF_M2C_EOI_FOE_1X(CMIF_M2C_FOE_1X_Code_t code);



#endif   /* __DRV_CMIF_H__ */
