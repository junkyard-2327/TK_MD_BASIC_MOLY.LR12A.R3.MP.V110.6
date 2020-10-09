/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2012
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
 * Filename:
 * ---------
 *   drv_mdcirq.h
 *
 * Project:
 * --------
 *   TATAKA
 *
 * Description:
 * ------------
 *   Low level interrupt controller driver
 *
 * Author:
 * -------
 * -------
 *
 * ==========================================================================
 * $Log$
 *
 * 06 09 2017 yen-chun.liu
 * [MOLY00256414] [MT6763][Gen93][System Service][MDCIRQ] Workaround for MDCIRQ HW mask unexpected set issue
 * .
 *
 * 04 07 2017 yen-chun.liu
 * [MOLY00214957] [Gen93][System Service][MDCIRQ] Modify Gen93 MDCIRQ driver
 * add include header file.
 *
 * 04 07 2017 yen-chun.liu
 * [MOLY00214957] [Gen93][System Service][MDCIRQ] Modify Gen93 MDCIRQ driver
 * fix build warning.
 *
 * 05 30 2016 i-chun.liu
 * [MOLY00171836] 93 MDCIRQ driver implementation
 * MDCIRQ driver implementation.
 *
 * 02 17 2016 i-chun.liu
 * [MOLY00140199] MT6292 MDCIRQ and GIC driver implementation
 * Refine MIPSGIC/MDCIRQ driver .
 *
 * 01 27 2016 i-chun.liu
 * [MOLY00140199] MT6292 MDCIRQ and GIC driver implementation
 * SaveAndSetIRQMask/RestoreIRQMask API modification
 * 	.
 *
 * 09 22 2015 i-chun.liu
 * [MOLY00135941] UMOLY Trunk merge back for ELBRUS
 * UMOLY TRUNK merge back for ELBRUS MDCIRQ.
 *
 * 09 02 2015 i-chun.liu
 * [MOLY00140199] MT6292 MDCIRQ and GIC driver implementation
 * 	multi vpe cirq support (2VPE).
 * 08 06 2015 i-chun.liu
 * [MOLY00135941] UMOLY Trunk merge back for ELBRUS
 * UMOLY trunk call for check in for ELBRUS MDCIRQ.
 *
 * 07 30 2015 i-chun.liu
 * [MOLY00132732] [91+]: CBr merge back dev call for check in
 * fix modis build error .
 *
 * 07 28 2015 i-chun.liu
 * [MOLY00132732] [91+]: CBr merge back dev call for check in
 * rename mdcirq_lisr_dispatch_tbl to lisr_dispatch_tbl.
 *
 * 07 28 2015 i-chun.liu
 * [MOLY00132732] [91+]: CBr merge back dev call for check in
 * CIRQ driver merge back.
 *
 * 05 23 2013 chin-chieh.hung
 * [MOLY00023372] [MT6290][NW-UE SIM] UESIM MOLY Migration - UESIM related changes submission
 * UESIM, cirq support
 *
 * 03 29 2013 chin-chieh.hung
 * [MOLY00011352] [Driver] Update for common devdrv driver
 * mdcirq register definition re-arch
 ****************************************************************************/

#ifndef __DRV_MDCIRQ_H__
#define __DRV_MDCIRQ_H__
#include "kal_public_api.h"
#include "isrentry.h"
#include "drv_mdcirq_reg.h"
#include "kal_iram_section_defs.h"

#if MDCIRQ_256_128_4_VERSION

//#define MDCIRQ_256_128_8_DECLARE(x...) x

#define MDCIRQ_REG_ADDR_INDEX(base_addr, irqid)                              \
    ((base_addr) + ((irqid/32)<<2))


#define MDCIRQ_WRITE_REG_INDEX(base_addr, index, value)                      \
    DRV_WriteReg32((base_addr) + ((index)<<2), value)

#define MDCIRQ_READ_REG_INDEX(base_addr, index)                              \
    DRV_Reg32((base_addr) + ((index)<<2))

#define MDCIRQ_WRITE_REG_INDEX_NPW(base_addr, index, value)                  \
    DRV_WriteReg32_NPW((base_addr) + ((index)<<2), value)


#endif /* end of MDCIRQ_128_64_VERSION */


#define MDCIRQ_WriteReg32_Vector(base_addr, vector, value)                   \
do{                                                                          \
    MDCIRQ_WRITE_REG_INDEX(base_addr, ((vector)/32), value)                  \
}while(0)

#define MDCIRQ_SetRegBit_Vector(base_addr, vector)                           \
do{                                                                          \
	kal_uint32 tmp;                                                          \
	tmp = MDCIRQ_READ_REG_INDEX(base_addr, ((vector)/32)) | (1UL<<((vector)%32)); \
    MDCIRQ_WRITE_REG_INDEX(base_addr, ((vector)/32), tmp);                  \
}while(0)

#define MDCIRQ_SetRegBit_Vector_NPW(base_addr, vector)                       \
do{                                                                          \
	kal_uint32 tmp;                                                          \
	tmp = MDCIRQ_READ_REG_INDEX(base_addr, ((vector)/32)) | (1UL<<((vector)%32)); \
    MDCIRQ_WRITE_REG_INDEX_NPW(base_addr, ((vector)/32), tmp);              \
}while(0)

#define MDCIRQ_ClrRegBit_Vector(base_addr, vector)                           \
do{ 																		 \
    kal_uint32 tmp;                                                          \
    tmp = MDCIRQ_READ_REG_INDEX(base_addr, ((vector)/32)) & (~(1<<((vector)%32))); \
    MDCIRQ_WRITE_REG_INDEX(base_addr, ((vector)/32), tmp);                   \
}while(0)


#define MDCIRQ_ClrRegBit_Vector_NPW(base_addr, vector)                       \
do{ 																		 \
	kal_uint32 tmp; 														 \
	tmp = MDCIRQ_READ_REG_INDEX(base_addr, ((vector)/32)) & (~(1<<((vector)%32))); \
	MDCIRQ_WRITE_REG_INDEX_NPW(base_addr, ((vector)/32), tmp);              \
}while(0)


#define MDCIRQ_WrSetRegBit_Vector(base_addr, vector)                         \
do{ 																		 \
    MDCIRQ_WRITE_REG_INDEX(base_addr, ((vector)/32), 1<<((vector)%32));     \
}while(0)

#define MDCIRQ_WrSetRegBit_Vector_NPW(base_addr, vector)                     \
do{ 																		 \
    MDCIRQ_WRITE_REG_INDEX_NPW(base_addr, ((vector)/32), 1<<((vector)%32)); \
}while(0)

#define MDCIRQ_GetRegBit_Vector(base_addr, vector)                           \
    ((MDCIRQ_READ_REG_INDEX(base_addr, ((vector)/32)) >> ((vector)%32)) & 1)


#define MDCIRQ_WrClrRegBit_Vector(base_addr, vector)                         \
	MDCIRQ_WrSetRegBit_Vector_NPW(base_addr, vector)

typedef void (*lisr_entry)(void);

/* extern functions/variables */
#if (ESIM_BUILD_CONFIG != ESIM_MULTI_MODE_ON_OSCAR) && (ESIM_BUILD_CONFIG != ESIM_SINGLE_MODE_ON_OSCAR)
extern irqlisr_entry lisr_dispatch_tbl[MDCIRQ_MAX_ISR_NUM];
#endif

__MCURW_HWRW_C_ALIGNED_L2CACHE_LOCK_ROCODE void  MDCIRQ_SYS_endIsr(kal_uint32 vpe_num, kal_uint32 Return_IRQID);
__MCURW_HWRW_C_ALIGNED_L2CACHE_LOCK_ROCODE void drv_mdcirq_Restore_VPE_state(kal_uint32 VPE, kal_uint32 ori_state);
__MCURW_HWRW_C_ALIGNED_L2CACHE_LOCK_ROCODE kal_uint32 drv_mdcirq_SaveAndSet_VPE_state(kal_uint32 VPE, kal_uint32 state);
void drv_mdcirq_unmask_core(kal_uint32 target_core);
void drv_mdcirq_mask_core(kal_uint32 target_core);


#endif /* end of __DRV_MDCIRQ_H__ */

