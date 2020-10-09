/*******************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2001
*
*******************************************************************************/

/*******************************************************************************
 *
 * Filename:
 * ---------
 *   mml1_custom_rf.c
 *
 * Project:
 * --------
 *   TK6291
 *
 * Description:
 * ------------
 *   TK6291 Multi-Mode Multi-RAT L1 constance definition
 *
 * Author:
 * -------
 *
 *
 *==============================================================================
 *******************************************************************************/

#include "kal_general_types.h"

#include "mmrf_cc_global.h"
#include "mml1_custom_rf.h"

/*----------------------------------------------------*/
/*             GPS Co-TMS ini data                    */
/*----------------------------------------------------*/
MML1_CO_TMS_CONFIG_FLOAT_T MML1_CoTMS_ConfigTbl =
{
          0, //C0
     -0.225, //C1
   -0.00085, //C2
     0.0001, //C3
};

MML1_CO_TMS_CONFIG_T* MML1_CoTMSTbl[] =
{
   (MML1_CO_TMS_CONFIG_T*)&MML1_CoTMS_ConfigTbl,
};

MMRF_TemperatureDac_T MML1_TempDacTable =
{
   {
#if defined(__L1_TEMPERATURE_RANGE_V2__)
      /* -10,   5,  20,  35,  55,  70,  85,  90 */
      {{  320, 362, 411, 457, 522, 570, 631, 664  }},  /* for RFIC 1 */
      {{  320, 362, 411, 457, 522, 570, 631, 664  }},  /* for RFIC 2 */
#else
      /* -10,   5,  20,  35,  45,  55,  60,  65 */
      {{  321, 367, 412, 457, 487, 517, 531, 543  }},  /* for RFIC 1 */
      {{  321, 367, 412, 457, 487, 517, 531, 543  }},  /* for RFIC 2 */
#endif
   }
};

