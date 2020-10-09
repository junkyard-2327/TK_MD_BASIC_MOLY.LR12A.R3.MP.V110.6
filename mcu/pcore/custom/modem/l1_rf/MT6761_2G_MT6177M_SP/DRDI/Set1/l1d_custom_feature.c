/*******************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2018
*
*******************************************************************************/

/*******************************************************************************
 *
 * File name:
 * ---------
 *   l1d_custom_feature.c
 *
 * Description:
 * ------------
 *   Customization feature
 *
 * Author:
 * -------
 *
 *==============================================================================
 *******************************************************************************/

#include "l1d_cid.h"
#include "l1d_custom_rf.h"
#include "l1d_custom_def.h"
#include "l1d_custom_feature.h"

/*===============================================================================================*/

#if IS_EPSK_SW_DRDI_SWITCH_SUPPORT
const unsigned char   L1D_EPSK_SW_DRDI_enable_Set1 = 1;
#endif

#if IS_ANT_RXPWR_OFFSET_SUPPORT
const sL1D_ANT_RxPWR_Offset_v2_T L1D_ANT_RxPWR_Offset_v2_NVRAM_Set1 = 
{
   /* feature switch, set 1 to enable */
   0, 
   {
      /* pcell list */
      {  
         /* pcell id */
         22102786, 
         {
            /* gsm arfcn list */
            {  520, -100, PWROFFSET(-15.00)}, 
            { TABLE_END }
         }
      }, 
      {
         /* pcell id */
         185582337, 
         {
            /* gsm arfcn list */
            {   84, -100, PWROFFSET( 15.00)}, 
            {   90, -100, PWROFFSET( 15.00)}, 
            {  613, -100, PWROFFSET( 15.00)}, 
            { TABLE_END }
         }
      }, 
      {
         /* pcell id */
         153610370, 
         {
            /* gsm arfcn list */
            {   85, -100, PWROFFSET( 15.00)}, 
            {   88, -100, PWROFFSET( 15.00)}, 
            {  612, -100, PWROFFSET( 15.00)}, 
            { TABLE_END }
         }
      }, 
      {
         /* pcell id */
         189858050, 
         {
            /* gsm arfcn list */
            {   85, -100, PWROFFSET( 15.00)}, 
            {   88, -100, PWROFFSET( 15.00)}, 
            {  612, -100, PWROFFSET( 15.00)}, 
            { TABLE_END }
         }
      }, 
      { TABLE_END }
   }
};
#endif

#if IS_SAR_TX_POWER_BACKOFF_DB_SUPPORT
const L1D_CUSTOM_SAR_TX_BACKOFF_DB_NVRAM_T L1_Custom_SAR_TX_BACKOFF_dB_Set1 =
{
   {
      {//GGE_SAR_RF_STATE_DEFAULT
         {/* unit: 1/8 dB */
            {  /* FrequencyBand850 */
               /* GMSK: 1T, 2T, 3T, 4T     EPSK: 1T, 2T, 3T, 4T */
               { {  0,  0,  0,  0  } , {  0,  0,  0,  0  }},//TAS_SEL_STATE_0
               { {  0,  0,  0,  0  } , {  0,  0,  0,  0  }},//TAS_SEL_STATE_1
               { {  0,  0,  0,  0  } , {  0,  0,  0,  0  }},//TAS_SEL_STATE_2
               #if defined(__2G_RX_DIVERSITY_PATH_SUPPORT__)
               { {  0,  0,  0,  0  } , {  0,  0,  0,  0  }},//TAS_SEL_STATE_3
               #endif
            },
            {  /* FrequencyBand900 */
               /* GMSK: 1T, 2T, 3T, 4T     EPSK: 1T, 2T, 3T, 4T */
               { {  0,  0,  0,  0  } , {  0,  0,  0,  0  }},//TAS_SEL_STATE_0
               { {  0,  0,  0,  0  } , {  0,  0,  0,  0  }},//TAS_SEL_STATE_1
               { {  0,  0,  0,  0  } , {  0,  0,  0,  0  }},//TAS_SEL_STATE_2
               #if defined(__2G_RX_DIVERSITY_PATH_SUPPORT__)
               { {  0,  0,  0,  0  } , {  0,  0,  0,  0  }},//TAS_SEL_STATE_3
               #endif
            },
            {  /* FrequencyBand1800 */
               /* GMSK: 1T, 2T, 3T, 4T     EPSK: 1T, 2T, 3T, 4T */
               { {  0,  0,  0,  0  } , {  0,  0,  0,  0  }},//TAS_SEL_STATE_0
               { {  0,  0,  0,  0  } , {  0,  0,  0,  0  }},//TAS_SEL_STATE_1
               { {  0,  0,  0,  0  } , {  0,  0,  0,  0  }},//TAS_SEL_STATE_2
               #if defined(__2G_RX_DIVERSITY_PATH_SUPPORT__)
               { {  0,  0,  0,  0  } , {  0,  0,  0,  0  }},//TAS_SEL_STATE_3
               #endif
            },
            {  /* FrequencyBand1900 */
               /* GMSK: 1T, 2T, 3T, 4T     EPSK: 1T, 2T, 3T, 4T */
               { {  0,  0,  0,  0  } , {  0,  0,  0,  0  }},//TAS_SEL_STATE_0
               { {  0,  0,  0,  0  } , {  0,  0,  0,  0  }},//TAS_SEL_STATE_1
               { {  0,  0,  0,  0  } , {  0,  0,  0,  0  }},//TAS_SEL_STATE_2
               #if defined(__2G_RX_DIVERSITY_PATH_SUPPORT__)
               { {  0,  0,  0,  0  } , {  0,  0,  0,  0  }},//TAS_SEL_STATE_3
               #endif
            }
         }
      },
      {//GGE_SAR_RF_STATE_1
         {/* unit: 1/8 dB */
            {  /* FrequencyBand850 */
               /* GMSK: 1T, 2T, 3T, 4T     EPSK: 1T, 2T, 3T, 4T */
               { {  0,  0,  0,  0  } , {  0,  0,  0,  0  }},//TAS_SEL_STATE_0
               { {  0,  0,  0,  0  } , {  0,  0,  0,  0  }},//TAS_SEL_STATE_1
               { {  0,  0,  0,  0  } , {  0,  0,  0,  0  }},//TAS_SEL_STATE_2
               #if defined(__2G_RX_DIVERSITY_PATH_SUPPORT__)
               { {  0,  0,  0,  0  } , {  0,  0,  0,  0  }},//TAS_SEL_STATE_3
               #endif
            },
            {  /* FrequencyBand900 */
               /* GMSK: 1T, 2T, 3T, 4T     EPSK: 1T, 2T, 3T, 4T */
               { {  0,  0,  0,  0  } , {  0,  0,  0,  0  }},//TAS_SEL_STATE_0
               { {  0,  0,  0,  0  } , {  0,  0,  0,  0  }},//TAS_SEL_STATE_1
               { {  0,  0,  0,  0  } , {  0,  0,  0,  0  }},//TAS_SEL_STATE_2
               #if defined(__2G_RX_DIVERSITY_PATH_SUPPORT__)
               { {  0,  0,  0,  0  } , {  0,  0,  0,  0  }},//TAS_SEL_STATE_3
               #endif
            },
            {  /* FrequencyBand1800 */
               /* GMSK: 1T, 2T, 3T, 4T     EPSK: 1T, 2T, 3T, 4T */
               { {  0,  0,  0,  0  } , {  0,  0,  0,  0  }},//TAS_SEL_STATE_0
               { {  0,  0,  0,  0  } , {  0,  0,  0,  0  }},//TAS_SEL_STATE_1
               { {  0,  0,  0,  0  } , {  0,  0,  0,  0  }},//TAS_SEL_STATE_2
               #if defined(__2G_RX_DIVERSITY_PATH_SUPPORT__)
               { {  0,  0,  0,  0  } , {  0,  0,  0,  0  }},//TAS_SEL_STATE_3
               #endif
            },
            {  /* FrequencyBand1900 */
               /* GMSK: 1T, 2T, 3T, 4T     EPSK: 1T, 2T, 3T, 4T */
               { {  0,  0,  0,  0  } , {  0,  0,  0,  0  }},//TAS_SEL_STATE_0
               { {  0,  0,  0,  0  } , {  0,  0,  0,  0  }},//TAS_SEL_STATE_1
               { {  0,  0,  0,  0  } , {  0,  0,  0,  0  }},//TAS_SEL_STATE_2
               #if defined(__2G_RX_DIVERSITY_PATH_SUPPORT__)
               { {  0,  0,  0,  0  } , {  0,  0,  0,  0  }},//TAS_SEL_STATE_3
               #endif
            }
         }
      },
      {//GGE_SAR_RF_STATE_2
         {/* unit: 1/8 dB */
            {  /* FrequencyBand850 */
               /* GMSK: 1T, 2T, 3T, 4T     EPSK: 1T, 2T, 3T, 4T */
               { {  0,  0,  0,  0  } , {  0,  0,  0,  0  }},//TAS_SEL_STATE_0
               { {  0,  0,  0,  0  } , {  0,  0,  0,  0  }},//TAS_SEL_STATE_1
               { {  0,  0,  0,  0  } , {  0,  0,  0,  0  }},//TAS_SEL_STATE_2
               #if defined(__2G_RX_DIVERSITY_PATH_SUPPORT__)
               { {  0,  0,  0,  0  } , {  0,  0,  0,  0  }},//TAS_SEL_STATE_3
               #endif
            },
            {  /* FrequencyBand900 */
               /* GMSK: 1T, 2T, 3T, 4T     EPSK: 1T, 2T, 3T, 4T */
               { {  0,  0,  0,  0  } , {  0,  0,  0,  0  }},//TAS_SEL_STATE_0
               { {  0,  0,  0,  0  } , {  0,  0,  0,  0  }},//TAS_SEL_STATE_1
               { {  0,  0,  0,  0  } , {  0,  0,  0,  0  }},//TAS_SEL_STATE_2
               #if defined(__2G_RX_DIVERSITY_PATH_SUPPORT__)
               { {  0,  0,  0,  0  } , {  0,  0,  0,  0  }},//TAS_SEL_STATE_3
               #endif
            },
            {  /* FrequencyBand1800 */
               /* GMSK: 1T, 2T, 3T, 4T     EPSK: 1T, 2T, 3T, 4T */
               { {  0,  0,  0,  0  } , {  0,  0,  0,  0  }},//TAS_SEL_STATE_0
               { {  0,  0,  0,  0  } , {  0,  0,  0,  0  }},//TAS_SEL_STATE_1
               { {  0,  0,  0,  0  } , {  0,  0,  0,  0  }},//TAS_SEL_STATE_2
               #if defined(__2G_RX_DIVERSITY_PATH_SUPPORT__)
               { {  0,  0,  0,  0  } , {  0,  0,  0,  0  }},//TAS_SEL_STATE_3
               #endif
            },
            {  /* FrequencyBand1900 */
               /* GMSK: 1T, 2T, 3T, 4T     EPSK: 1T, 2T, 3T, 4T */
               { {  0,  0,  0,  0  } , {  0,  0,  0,  0  }},//TAS_SEL_STATE_0
               { {  0,  0,  0,  0  } , {  0,  0,  0,  0  }},//TAS_SEL_STATE_1
               { {  0,  0,  0,  0  } , {  0,  0,  0,  0  }},//TAS_SEL_STATE_2
               #if defined(__2G_RX_DIVERSITY_PATH_SUPPORT__)
               { {  0,  0,  0,  0  } , {  0,  0,  0,  0  }},//TAS_SEL_STATE_3
               #endif
            }
         }
      },
      {//GGE_SAR_RF_STATE_3
         {/* unit: 1/8 dB */
            {  /* FrequencyBand850 */
               /* GMSK: 1T, 2T, 3T, 4T     EPSK: 1T, 2T, 3T, 4T */
               { {  0,  0,  0,  0  } , {  0,  0,  0,  0  }},//TAS_SEL_STATE_0
               { {  0,  0,  0,  0  } , {  0,  0,  0,  0  }},//TAS_SEL_STATE_1
               { {  0,  0,  0,  0  } , {  0,  0,  0,  0  }},//TAS_SEL_STATE_2
               #if defined(__2G_RX_DIVERSITY_PATH_SUPPORT__)
               { {  0,  0,  0,  0  } , {  0,  0,  0,  0  }},//TAS_SEL_STATE_3
               #endif
            },
            {  /* FrequencyBand900 */
               /* GMSK: 1T, 2T, 3T, 4T     EPSK: 1T, 2T, 3T, 4T */
               { {  0,  0,  0,  0  } , {  0,  0,  0,  0  }},//TAS_SEL_STATE_0
               { {  0,  0,  0,  0  } , {  0,  0,  0,  0  }},//TAS_SEL_STATE_1
               { {  0,  0,  0,  0  } , {  0,  0,  0,  0  }},//TAS_SEL_STATE_2
               #if defined(__2G_RX_DIVERSITY_PATH_SUPPORT__)
               { {  0,  0,  0,  0  } , {  0,  0,  0,  0  }},//TAS_SEL_STATE_3
               #endif
            },
            {  /* FrequencyBand1800 */
               /* GMSK: 1T, 2T, 3T, 4T     EPSK: 1T, 2T, 3T, 4T */
               { {  0,  0,  0,  0  } , {  0,  0,  0,  0  }},//TAS_SEL_STATE_0
               { {  0,  0,  0,  0  } , {  0,  0,  0,  0  }},//TAS_SEL_STATE_1
               { {  0,  0,  0,  0  } , {  0,  0,  0,  0  }},//TAS_SEL_STATE_2
               #if defined(__2G_RX_DIVERSITY_PATH_SUPPORT__)
               { {  0,  0,  0,  0  } , {  0,  0,  0,  0  }},//TAS_SEL_STATE_3
               #endif
            },
            {  /* FrequencyBand1900 */
               /* GMSK: 1T, 2T, 3T, 4T     EPSK: 1T, 2T, 3T, 4T */
               { {  0,  0,  0,  0  } , {  0,  0,  0,  0  }},//TAS_SEL_STATE_0
               { {  0,  0,  0,  0  } , {  0,  0,  0,  0  }},//TAS_SEL_STATE_1
               { {  0,  0,  0,  0  } , {  0,  0,  0,  0  }},//TAS_SEL_STATE_2
               #if defined(__2G_RX_DIVERSITY_PATH_SUPPORT__)
               { {  0,  0,  0,  0  } , {  0,  0,  0,  0  }},//TAS_SEL_STATE_3
               #endif
            }
         }
      },
      {//GGE_SAR_RF_STATE_4
         {/* unit: 1/8 dB */
            {  /* FrequencyBand850 */
               /* GMSK: 1T, 2T, 3T, 4T     EPSK: 1T, 2T, 3T, 4T */
               { {  0,  0,  0,  0  } , {  0,  0,  0,  0  }},//TAS_SEL_STATE_0
               { {  0,  0,  0,  0  } , {  0,  0,  0,  0  }},//TAS_SEL_STATE_1
               { {  0,  0,  0,  0  } , {  0,  0,  0,  0  }},//TAS_SEL_STATE_2
               #if defined(__2G_RX_DIVERSITY_PATH_SUPPORT__)
               { {  0,  0,  0,  0  } , {  0,  0,  0,  0  }},//TAS_SEL_STATE_3
               #endif
            },
            {  /* FrequencyBand900 */
               /* GMSK: 1T, 2T, 3T, 4T     EPSK: 1T, 2T, 3T, 4T */
               { {  0,  0,  0,  0  } , {  0,  0,  0,  0  }},//TAS_SEL_STATE_0
               { {  0,  0,  0,  0  } , {  0,  0,  0,  0  }},//TAS_SEL_STATE_1
               { {  0,  0,  0,  0  } , {  0,  0,  0,  0  }},//TAS_SEL_STATE_2
               #if defined(__2G_RX_DIVERSITY_PATH_SUPPORT__)
               { {  0,  0,  0,  0  } , {  0,  0,  0,  0  }},//TAS_SEL_STATE_3
               #endif
            },
            {  /* FrequencyBand1800 */
               /* GMSK: 1T, 2T, 3T, 4T     EPSK: 1T, 2T, 3T, 4T */
               { {  0,  0,  0,  0  } , {  0,  0,  0,  0  }},//TAS_SEL_STATE_0
               { {  0,  0,  0,  0  } , {  0,  0,  0,  0  }},//TAS_SEL_STATE_1
               { {  0,  0,  0,  0  } , {  0,  0,  0,  0  }},//TAS_SEL_STATE_2
               #if defined(__2G_RX_DIVERSITY_PATH_SUPPORT__)
               { {  0,  0,  0,  0  } , {  0,  0,  0,  0  }},//TAS_SEL_STATE_3
               #endif
            },
            {  /* FrequencyBand1900 */
               /* GMSK: 1T, 2T, 3T, 4T     EPSK: 1T, 2T, 3T, 4T */
               { {  0,  0,  0,  0  } , {  0,  0,  0,  0  }},//TAS_SEL_STATE_0
               { {  0,  0,  0,  0  } , {  0,  0,  0,  0  }},//TAS_SEL_STATE_1
               { {  0,  0,  0,  0  } , {  0,  0,  0,  0  }},//TAS_SEL_STATE_2
               #if defined(__2G_RX_DIVERSITY_PATH_SUPPORT__)
               { {  0,  0,  0,  0  } , {  0,  0,  0,  0  }},//TAS_SEL_STATE_3
               #endif
            }
         }
      },
      {//GGE_SAR_RF_STATE_5
         {/* unit: 1/8 dB */
            {  /* FrequencyBand850 */
               /* GMSK: 1T, 2T, 3T, 4T     EPSK: 1T, 2T, 3T, 4T */
               { {  0,  0,  0,  0  } , {  0,  0,  0,  0  }},//TAS_SEL_STATE_0
               { {  0,  0,  0,  0  } , {  0,  0,  0,  0  }},//TAS_SEL_STATE_1
               { {  0,  0,  0,  0  } , {  0,  0,  0,  0  }},//TAS_SEL_STATE_2
               #if defined(__2G_RX_DIVERSITY_PATH_SUPPORT__)
               { {  0,  0,  0,  0  } , {  0,  0,  0,  0  }},//TAS_SEL_STATE_3
               #endif
            },
            {  /* FrequencyBand900 */
               /* GMSK: 1T, 2T, 3T, 4T     EPSK: 1T, 2T, 3T, 4T */
               { {  0,  0,  0,  0  } , {  0,  0,  0,  0  }},//TAS_SEL_STATE_0
               { {  0,  0,  0,  0  } , {  0,  0,  0,  0  }},//TAS_SEL_STATE_1
               { {  0,  0,  0,  0  } , {  0,  0,  0,  0  }},//TAS_SEL_STATE_2
               #if defined(__2G_RX_DIVERSITY_PATH_SUPPORT__)
               { {  0,  0,  0,  0  } , {  0,  0,  0,  0  }},//TAS_SEL_STATE_3
               #endif
            },
            {  /* FrequencyBand1800 */
               /* GMSK: 1T, 2T, 3T, 4T     EPSK: 1T, 2T, 3T, 4T */
               { {  0,  0,  0,  0  } , {  0,  0,  0,  0  }},//TAS_SEL_STATE_0
               { {  0,  0,  0,  0  } , {  0,  0,  0,  0  }},//TAS_SEL_STATE_1
               { {  0,  0,  0,  0  } , {  0,  0,  0,  0  }},//TAS_SEL_STATE_2
               #if defined(__2G_RX_DIVERSITY_PATH_SUPPORT__)
               { {  0,  0,  0,  0  } , {  0,  0,  0,  0  }},//TAS_SEL_STATE_3
               #endif
            },
            {  /* FrequencyBand1900 */
               /* GMSK: 1T, 2T, 3T, 4T     EPSK: 1T, 2T, 3T, 4T */
               { {  0,  0,  0,  0  } , {  0,  0,  0,  0  }},//TAS_SEL_STATE_0
               { {  0,  0,  0,  0  } , {  0,  0,  0,  0  }},//TAS_SEL_STATE_1
               { {  0,  0,  0,  0  } , {  0,  0,  0,  0  }},//TAS_SEL_STATE_2
               #if defined(__2G_RX_DIVERSITY_PATH_SUPPORT__)
               { {  0,  0,  0,  0  } , {  0,  0,  0,  0  }},//TAS_SEL_STATE_3
               #endif
            }
         }
      },
      {//GGE_SAR_RF_STATE_6
         {/* unit: 1/8 dB */
            {  /* FrequencyBand850 */
               /* GMSK: 1T, 2T, 3T, 4T     EPSK: 1T, 2T, 3T, 4T */
               { {  0,  0,  0,  0  } , {  0,  0,  0,  0  }},//TAS_SEL_STATE_0
               { {  0,  0,  0,  0  } , {  0,  0,  0,  0  }},//TAS_SEL_STATE_1
               { {  0,  0,  0,  0  } , {  0,  0,  0,  0  }},//TAS_SEL_STATE_2
               #if defined(__2G_RX_DIVERSITY_PATH_SUPPORT__)
               { {  0,  0,  0,  0  } , {  0,  0,  0,  0  }},//TAS_SEL_STATE_3
               #endif
            },
            {  /* FrequencyBand900 */
               /* GMSK: 1T, 2T, 3T, 4T     EPSK: 1T, 2T, 3T, 4T */
               { {  0,  0,  0,  0  } , {  0,  0,  0,  0  }},//TAS_SEL_STATE_0
               { {  0,  0,  0,  0  } , {  0,  0,  0,  0  }},//TAS_SEL_STATE_1
               { {  0,  0,  0,  0  } , {  0,  0,  0,  0  }},//TAS_SEL_STATE_2
               #if defined(__2G_RX_DIVERSITY_PATH_SUPPORT__)
               { {  0,  0,  0,  0  } , {  0,  0,  0,  0  }},//TAS_SEL_STATE_3
               #endif
            },
            {  /* FrequencyBand1800 */
               /* GMSK: 1T, 2T, 3T, 4T     EPSK: 1T, 2T, 3T, 4T */
               { {  0,  0,  0,  0  } , {  0,  0,  0,  0  }},//TAS_SEL_STATE_0
               { {  0,  0,  0,  0  } , {  0,  0,  0,  0  }},//TAS_SEL_STATE_1
               { {  0,  0,  0,  0  } , {  0,  0,  0,  0  }},//TAS_SEL_STATE_2
               #if defined(__2G_RX_DIVERSITY_PATH_SUPPORT__)
               { {  0,  0,  0,  0  } , {  0,  0,  0,  0  }},//TAS_SEL_STATE_3
               #endif
            },
            {  /* FrequencyBand1900 */
               /* GMSK: 1T, 2T, 3T, 4T     EPSK: 1T, 2T, 3T, 4T */
               { {  0,  0,  0,  0  } , {  0,  0,  0,  0  }},//TAS_SEL_STATE_0
               { {  0,  0,  0,  0  } , {  0,  0,  0,  0  }},//TAS_SEL_STATE_1
               { {  0,  0,  0,  0  } , {  0,  0,  0,  0  }},//TAS_SEL_STATE_2
               #if defined(__2G_RX_DIVERSITY_PATH_SUPPORT__)
               { {  0,  0,  0,  0  } , {  0,  0,  0,  0  }},//TAS_SEL_STATE_3
               #endif
            }
         }
      },
      {//GGE_SAR_RF_STATE_7
         {/* unit: 1/8 dB */
            {  /* FrequencyBand850 */
               /* GMSK: 1T, 2T, 3T, 4T     EPSK: 1T, 2T, 3T, 4T */
               { {  0,  0,  0,  0  } , {  0,  0,  0,  0  }},//TAS_SEL_STATE_0
               { {  0,  0,  0,  0  } , {  0,  0,  0,  0  }},//TAS_SEL_STATE_1
               { {  0,  0,  0,  0  } , {  0,  0,  0,  0  }},//TAS_SEL_STATE_2
               #if defined(__2G_RX_DIVERSITY_PATH_SUPPORT__)
               { {  0,  0,  0,  0  } , {  0,  0,  0,  0  }},//TAS_SEL_STATE_3
               #endif
            },
            {  /* FrequencyBand900 */
               /* GMSK: 1T, 2T, 3T, 4T     EPSK: 1T, 2T, 3T, 4T */
               { {  0,  0,  0,  0  } , {  0,  0,  0,  0  }},//TAS_SEL_STATE_0
               { {  0,  0,  0,  0  } , {  0,  0,  0,  0  }},//TAS_SEL_STATE_1
               { {  0,  0,  0,  0  } , {  0,  0,  0,  0  }},//TAS_SEL_STATE_2
               #if defined(__2G_RX_DIVERSITY_PATH_SUPPORT__)
               { {  0,  0,  0,  0  } , {  0,  0,  0,  0  }},//TAS_SEL_STATE_3
               #endif
            },
            {  /* FrequencyBand1800 */
               /* GMSK: 1T, 2T, 3T, 4T     EPSK: 1T, 2T, 3T, 4T */
               { {  0,  0,  0,  0  } , {  0,  0,  0,  0  }},//TAS_SEL_STATE_0
               { {  0,  0,  0,  0  } , {  0,  0,  0,  0  }},//TAS_SEL_STATE_1
               { {  0,  0,  0,  0  } , {  0,  0,  0,  0  }},//TAS_SEL_STATE_2
               #if defined(__2G_RX_DIVERSITY_PATH_SUPPORT__)
               { {  0,  0,  0,  0  } , {  0,  0,  0,  0  }},//TAS_SEL_STATE_3
               #endif
            },
            {  /* FrequencyBand1900 */
               /* GMSK: 1T, 2T, 3T, 4T     EPSK: 1T, 2T, 3T, 4T */
               { {  0,  0,  0,  0  } , {  0,  0,  0,  0  }},//TAS_SEL_STATE_0
               { {  0,  0,  0,  0  } , {  0,  0,  0,  0  }},//TAS_SEL_STATE_1
               { {  0,  0,  0,  0  } , {  0,  0,  0,  0  }},//TAS_SEL_STATE_2
               #if defined(__2G_RX_DIVERSITY_PATH_SUPPORT__)
               { {  0,  0,  0,  0  } , {  0,  0,  0,  0  }},//TAS_SEL_STATE_3
               #endif
            }
         }
      },
      {//GGE_SAR_RF_STATE_8
         {/* unit: 1/8 dB */
            {  /* FrequencyBand850 */
               /* GMSK: 1T, 2T, 3T, 4T     EPSK: 1T, 2T, 3T, 4T */
               { {  0,  0,  0,  0  } , {  0,  0,  0,  0  }},//TAS_SEL_STATE_0
               { {  0,  0,  0,  0  } , {  0,  0,  0,  0  }},//TAS_SEL_STATE_1
               { {  0,  0,  0,  0  } , {  0,  0,  0,  0  }},//TAS_SEL_STATE_2
               #if defined(__2G_RX_DIVERSITY_PATH_SUPPORT__)
               { {  0,  0,  0,  0  } , {  0,  0,  0,  0  }},//TAS_SEL_STATE_3
               #endif
            },
            {  /* FrequencyBand900 */
               /* GMSK: 1T, 2T, 3T, 4T     EPSK: 1T, 2T, 3T, 4T */
               { {  0,  0,  0,  0  } , {  0,  0,  0,  0  }},//TAS_SEL_STATE_0
               { {  0,  0,  0,  0  } , {  0,  0,  0,  0  }},//TAS_SEL_STATE_1
               { {  0,  0,  0,  0  } , {  0,  0,  0,  0  }},//TAS_SEL_STATE_2
               #if defined(__2G_RX_DIVERSITY_PATH_SUPPORT__)
               { {  0,  0,  0,  0  } , {  0,  0,  0,  0  }},//TAS_SEL_STATE_3
               #endif
            },
            {  /* FrequencyBand1800 */
               /* GMSK: 1T, 2T, 3T, 4T     EPSK: 1T, 2T, 3T, 4T */
               { {  0,  0,  0,  0  } , {  0,  0,  0,  0  }},//TAS_SEL_STATE_0
               { {  0,  0,  0,  0  } , {  0,  0,  0,  0  }},//TAS_SEL_STATE_1
               { {  0,  0,  0,  0  } , {  0,  0,  0,  0  }},//TAS_SEL_STATE_2
               #if defined(__2G_RX_DIVERSITY_PATH_SUPPORT__)
               { {  0,  0,  0,  0  } , {  0,  0,  0,  0  }},//TAS_SEL_STATE_3
               #endif
            },
            {  /* FrequencyBand1900 */
               /* GMSK: 1T, 2T, 3T, 4T     EPSK: 1T, 2T, 3T, 4T */
               { {  0,  0,  0,  0  } , {  0,  0,  0,  0  }},//TAS_SEL_STATE_0
               { {  0,  0,  0,  0  } , {  0,  0,  0,  0  }},//TAS_SEL_STATE_1
               { {  0,  0,  0,  0  } , {  0,  0,  0,  0  }},//TAS_SEL_STATE_2
               #if defined(__2G_RX_DIVERSITY_PATH_SUPPORT__)
               { {  0,  0,  0,  0  } , {  0,  0,  0,  0  }},//TAS_SEL_STATE_3
               #endif
            }
         }
      }//End of GGE_SAR_RF_STATE
   }
};
#endif
