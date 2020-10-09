/*******************************************************************************
 *  Copyright Statement:
 *  --------------------
 *  This software is protected by Copyright and the information contained
 *  herein is confidential. The software may not be copied and the information
 *  contained herein may not be used or disclosed except with the written
 *  permission of MediaTek Inc. (C) 2016
 *
 ******************************************************************************/

/*******************************************************************************
 *
 * Filename:
 * ---------
 *   mcu_pmu_montr_public.h
 *
 * Project:
 * --------
 *   UMOLY
 *
 * Description:
 * ------------
 *   Header file general ARM core performance monitor API
 *
 * Author:
 * -------
 * -------
 *
 *==============================================================================
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
 *
 * removed!
 * removed!
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *==============================================================================
 ******************************************************************************/
#ifndef MCU_PMU_MONTR_PUBLIC_H
#ifdef  __MTK_TARGET__

#define MCU_PMU_MONTR_PUBLIC_H
#include "kal_general_types.h"

#define PMU_EVENT_COUNTER_1     0x00000001
#define PMU_EVENT_COUNTER_2     0x00000002
#define PMU_EVENT_COUNTER_3     0x00000004
#define PMU_CYCLE_COUNTER       0x80000000

typedef enum {
    PMU_STATUS_OK           =            0,
    PMU_STATUS_ERROR        =   0xFFFFFFFF,
    PMU_STATUS_NOPERM       =   0xFFFFFFFE,
} IAPMU_STATUS_E;

#if defined(__MIPS_IA__)
/* (Statically) choose PMU sw user. Only one user can use PMU,
 *  other can still call their own function but no effect.
 *
 * if both SWLA/EL1BD/SYS not defined, switch to SYS by default
 */
# if (MCU_PMU_DEFAUT_USER == 0)
#  define IAPMU_ENABLE_PUBLIC_API_FOR_SYS
# elif (MCU_PMU_DEFAUT_USER == 1)
#  define IAPMU_ENABLE_PUBLIC_API_FOR_SWLA
# elif (MCU_PMU_DEFAUT_USER == 2)
#  define IAPMU_ENABLE_PUBLIC_API_FOR_EL1BD
# else
#  define IAPMU_ENABLE_PUBLIC_API_FOR_SYS
# endif

# include "mcu_pmu_montr_mips_ia_public.h"
#endif

#endif  /* __MTK_TARGET__ */
#endif /* MCU_PMU_MONTR_PUBLIC_H */
