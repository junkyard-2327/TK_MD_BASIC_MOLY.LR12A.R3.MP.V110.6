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
 *   intrCtrl.h
 *
 * Project:
 * --------
 *   Maui_Software
 *
 * Description:
 * ------------
 *   Common type and structure definition for MediaTek GSM/GPRS software
 *
 * Author:
 * -------
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
 * removed!
 *
 * removed!
 * removed!
 *
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
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
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
 *
 * removed!
 * removed!
 * removed!
 *
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
 *
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
 * removed!
 * removed!
 *
 * removed!
 * removed!
 *
 * removed!
 * removed!
 *
 * removed!
 * removed!
 *
 * removed!
 * removed!
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

#ifndef _INTRCTRL_H
#define _INTRCTRL_H

/*******************************************************************************
 * Include header files
 *******************************************************************************/
#include "kal_general_types.h"
#include "mips_ia_utils_public.h"
#include "us_timer.h"

#if defined(TK6291)
#if defined(__CR4__)
#include "intrCtrl_TK6291.h"
#elif defined(__ARM7EJ_S__)
#include "intrCtrl_TK6291_ARM7.h"
#else
#error "No CPU version select. Need to specify CPU version in project 6291 MDSYS."
#endif
#endif

#if defined(ELBRUS)
#if defined(__MIPS_IA__)
#include "intrCtrl_ELBRUS.h"
#else
#error "No CPU version select. Need to specify CPU version in project ELBRUS MDSYS."
#endif
#endif

#if defined(MT6763)
#if defined(__MIPS_IA__)
#include "intrCtrl_MT6763.h"
#else
#error "No CPU version select. Need to specify CPU version in project MT6763 MDSYS."
#endif
#endif

#if defined(MT6739)
#if defined(__MIPS_IA__)
#include "intrCtrl_MT6739.h"
#else
#error "No CPU version select. Need to specify CPU version in project MT6739 MDSYS."
#endif
#endif

#if defined(MT6771)
#if defined(__MIPS_IA__)
#include "intrCtrl_MT6771.h"
#else
#error "No CPU version select. Need to specify CPU version in project MT6771 MDSYS."
#endif
#endif

#if defined(MT6765)
#if defined(__MIPS_IA__)
#include "intrCtrl_MT6765.h"
#else
#error "No CPU version select. Need to specify CPU version in project MT6765 MDSYS."
#endif
#endif

#if defined(MT6761)
#if defined(__MIPS_IA__)
#include "intrCtrl_MT6761.h"
#else
#error "No CPU version select. Need to specify CPU version in project MT6761 MDSYS."
#endif
#endif

#if defined(MT6768)
#if defined(__MIPS_IA__)
#include "intrCtrl_MT6768.h"
#else
#error "No CPU version select. Need to specify CPU version in project MT6768 MDSYS."
#endif
#endif

/*******************************************************************************
 * Declarations and Definitions
 *******************************************************************************/

#define EDGE_SENSITIVE           KAL_TRUE
#define LEVEL_SENSITIVE          KAL_FALSE

#define IRQ_NOT_LISR_CONTEXT     (0xFFFF)

#if defined(__CIRQ_MASK_REG_NR_1_NEW__) || defined(__CIRQ_MASK_REG_NR_2_NEW__) || defined(__CIRQ_MASK_REG_NR_3_NEW__) || defined(__CIRQ_MASK_REG_NR_4_NEW__) || defined(__CIRQ_MASK_REG_NR_5_NEW__)
#define __CIRQ_DESIGN_NEW__
#endif

typedef struct CIRQ_MASK_VALUE_STRUCT
{
    kal_uint32 irq_mask[8]; 
} CIRQ_MASK_VALUE_T;

typedef struct MIPSGIC_IRQ_MASK_VALUE_STRUCT
{
#if defined(__MIPSGIC_MASK_REG_NR_2_NEW__)
    kal_uint32 irq_mask0;
    kal_uint32 irq_mask1;
#else
    kal_uint32 irq_maskl;
    kal_uint32 irq_maskh;
#endif
} MIPSGIC_IRQ_MASK_VALUE_T;

typedef struct MIPSGIC_IRQ_SEN_VALUE_STRUCT
{
#if defined(__MIPSGIC_MASK_REG_NR_2_NEW__)
    kal_uint32 irq_sen0;
    kal_uint32 irq_sen1;
#else
    kal_uint32 irq_maskl;
    kal_uint32 irq_maskh;
#endif
} MIPSGIC_IRQ_SEN_VALUE_T;


/* To enable SW Trigger Interrupt for new BB chips
   Need to modify 3 files
   1. add a file intrCtrl_MTxxxx_SW_Handler.h
   2. add an entry on intrCtrl_SW_Handler.h
   3. modify IRQ_SetSWRegister & IRQ_ResetSWRegister to support BB Chips on intrCtrl.c  */
#if defined(__ENABLE_SW_TRIGGER_INTERRUPT__)
typedef enum
{
#define X_SW_HANDLE_CONST(a, b, c) a=(b),
#include "intrCtrl_SW_Handle.h"
#undef X_SW_HANDLE_CONST
    SW_HANDLE_END
} SW_CODE_HANDLE;

#define Activate_LISR(code) MDCIRQ_Activate_LISR(code)
#define Deactivate_LISR(code) MDCIRQ_Deactivate_LISR(code)

extern void MDCIRQ_Activate_LISR(SW_CODE_HANDLE code);
extern void MDCIRQ_Deactivate_LISR(SW_CODE_HANDLE code);
#if defined(GEN93_MDMCU_SYSTEM_IMPROVEMENT_FOR_LOW_POWER)
extern void MDCIRQ_Activate_LISR_without_ITC(SW_CODE_HANDLE code);
extern void MDCIRQ_Deactivate_LISR_without_ITC(SW_CODE_HANDLE code);
#endif
extern const kal_uint8 SW_Code_Handle2Code[NUM_IRQ_SOURCES];

/* Use to translate the mapping between software handler to hardware interrupt code */
#define SW_code_handle2code(a)  (a)

extern kal_uint32 SW_INT_Counter[NUM_IRQ_SOURCES];

#endif /* __ENABLE_SW_TRIGGER_INTERRUPT__ */


#define IRQClearInt(vector) MDCIRQ_IRQClearInt(vector)
#define IRQMask(vector) MDCIRQ_IRQMask(vector)
#define IRQUnmask(vector) MDCIRQ_IRQUnmask(vector)
#define IRQSensitivity(vector, e) MDCIRQ_IRQSensitivity(vector, e)
#define IRQ_VPE_SPL_Compare_with_IRQ_Priority(VPE, code) MDCIRQ_VPE_SPL_Compare_with_IRQ_Priority(VPE, code)



extern kal_uint32 SaveAndSetIRQMask(void);
extern void RestoreIRQMask(kal_uint32);
extern void MDCIRQ_IRQClearInt(kal_uint8);
extern void MDCIRQ_IRQMask(kal_uint8);
extern void MDCIRQ_IRQUnmask(kal_uint8);
extern void MDCIRQ_IRQSensitivity(kal_uint8, kal_bool);
extern void initINTR(void);
extern kal_uint32 IRQMask_Status(kal_uint8 code);
extern kal_uint32 IRQ_Status(void);
extern kal_bool MDCIRQ_VPE_SPL_Compare_with_IRQ_Priority(kal_uint32 VPE, kal_uint32 code);


#define IRQ_Register_LISR(code, lisr, description) \
    MDCIRQ_IRQ_Register_LISR(code, (void*)lisr, description)
extern void MDCIRQ_IRQ_Register_LISR(kal_uint32 code, void (*reg_lisr)(kal_uint32 vector), char* description);
//extern void IRQ_Register_LISR(kal_uint32 code, void (*reg_lisr)(kal_uint32 vector), char* description);

extern void initVPEIRQ(void);

#if !defined(__SINGLE_CORE__)
extern kal_uint32 sst_dhl_irq_count[4];
extern kal_uint32 sst_dhl_irq_caller[4];
extern kal_uint32 DHLIrqCounter[4];
#else
extern kal_uint32 sst_dhl_irq_count[2];
extern kal_uint32 sst_dhl_irq_caller[2];
extern kal_uint32 DHLIrqCounter[2];
#endif
extern kal_int32 INC_Initialize_State;

/***********************************
NOTE:
1. below API is only for L2 logging, please not use
2. if you want to use, please confirm with CIRQ owner first
***********************************/
#define __IRQ_LOCK_WITHOUT_CHECK__
//#define __NESTED_DI_CHECK__

#if defined(__L2_LOGGING_IRQ_LOC__)
#if defined(__IRQ_LOCK_WITHOUT_CHECK__) && defined(__MIPS_IA__)
#if defined(__NESTED_DI_CHECK__)
#define LOCK_CPU_INTERRUPT(oldmask, newmask) \
do{\
    kal_uint32 vpe_num = 0;\
    miu_mt_dmt();\
    __asm__ __volatile__\
    (\
        "di %0\n\t"\
        "ehb\n\t"\
        :"=&r"(oldmask), "=&r"(newmask)\
        :\
        :"$31","memory"\
    );\
    oldmask &= 0x1;\
    vpe_num = kal_get_current_vpe_id();\
    sst_dhl_irq_count[vpe_num]++;\
    sst_dhl_irq_caller[vpe_num] = (kal_uint32)__builtin_return_address(0);\
    DHLIrqCounter[vpe_num] = ust_get_current_time();\
} while(0)

#define UNLOCK_CPU_INTERRUPT(oldmask) \
do{\
    kal_uint32 tmp=1;\
    sst_dhl_irq_count[kal_get_current_vpe_id()]--;\
    __asm__ __volatile__\
    (\
        "bne %0, %1, END\n\t"\
        "ei\n\t"\
        "ehb\n\t"\
        "END:emt\n\t"\
        "ehb\n\t"\
        :\
        :"r"(oldmask), "r"(tmp)\
        :"memory"\
    );\
} while(0)
#else
#define LOCK_CPU_INTERRUPT(oldmask, newmask) \
do{\
    miu_mt_dmt();\
    __asm__ __volatile__\
    (\
        "di %0\n\t"\
        "ehb\n\t"\
        :"=&r"(oldmask), "=&r"(newmask)\
        :\
        :"$31","memory"\
    );\
    oldmask &= 0x1;\
} while(0)

#define UNLOCK_CPU_INTERRUPT(oldmask) \
do{\
    kal_uint32 tmp=1;\
    __asm__ __volatile__\
    (\
        "bne %0, %1, END\n\t"\
        "ei\n\t"\
        "ehb\n\t"\
        "END:emt\n\t"\
        "ehb\n\t"\
        :\
        :"r"(oldmask), "r"(tmp)\
        :"memory"\
    );\
} while(0)
#endif

#else

#define LOCK_CPU_INTERRUPT(oldmask, newmask) \
do{ \
	oldmask = kal_hrt_SaveAndSetIRQMask(); \
}while(0);

#define UNLOCK_CPU_INTERRUPT(oldmask) \
do{ \
	kal_hrt_RestoreIRQMask(oldmask); \
}while(0);

#endif
#endif

#endif /* _INTRCTRL_H */

