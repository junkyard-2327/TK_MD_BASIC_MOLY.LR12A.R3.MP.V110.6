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
 *
 *

 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================*/
/* Doxygen Group Header ****************************************************//**
 * @addtogroup EL1D_SHM_DATA
 * @{
 ******************************************************************************/
/***************************************************************************//**
 * @file       lte_custom_rf_mpr.c
 * @author     Mika Farin (MTK09554)
 * @date       2016.09.23
 * @brief      EL1D RF custom MPR data
 * @details    RF custom MPR data definitions. It can be re-build by customer
 ******************************************************************************/

/*******************************************************************************
 * #include
 ******************************************************************************/
/* Custom folder setting */
#include "lte_custom_rf.h"
#include "lte_custom_rf_mpr.h"
//#include "lte_custom_rf_ca.h"
#if !defined (L1_SIM)
#include "nvram_data_items.h"
#include "nvram_enums.h"
#include "lte_custom_rf_mpr_nvram_if.h"
#endif
#include "el1d_rf_common.h"
#include "el1d_rf_custom_data.h"
#include "lrfcustomdata.h"

/*******************************************************************************
 * #define
 ******************************************************************************/

#define LTE_BandX_AMPR_NS1          // null row
#define LTE_BandX_AMPR_NS6          // null row
#define LTE_BandX_AMPR_NS17         // null row
#define LTE_BandX_AMPR_NS23         // null row

#ifndef LTE_Band1_NS5_SetDefault
#define LTE_Band1_AMPR_NS5          LTE_BandX_AMPR_NS1
#else   // using double curly brackets for LTE_Band1_NS5_SetDefault is to avoid initialize warning
#define LTE_Band1_AMPR_NS5          { LTE_Band1 ,  LTE_AMPR_NS5      , { {LTE_Band1_NS5_SetDefault}      }  },
#define LTE_Band1_AMPR_NS_DEF       1
#endif

#ifndef LTE_Band2_NS3_SetDefault
#define LTE_Band2_AMPR_NS3          LTE_BandX_AMPR_NS1
#else
#define LTE_Band2_AMPR_NS3          { LTE_Band2 ,  LTE_AMPR_NS3      , { {LTE_Band2_NS3_SetDefault}      }  },
#define LTE_Band2_AMPR_NS_DEF       1
#endif

#ifndef LTE_Band4_NS3_SetDefault
#define LTE_Band4_AMPR_NS3          LTE_BandX_AMPR_NS1
#else
#define LTE_Band4_AMPR_NS3          { LTE_Band4 ,  LTE_AMPR_NS3      , { {LTE_Band4_NS3_SetDefault}      }  },
#define LTE_Band4_AMPR_NS_DEF       1
#endif

#ifndef LTE_Band10_NS3_SetDefault
#define LTE_Band10_AMPR_NS3         LTE_BandX_AMPR_NS1
#else
#define LTE_Band10_AMPR_NS3         { LTE_Band10,  LTE_AMPR_NS3      , { {LTE_Band10_NS3_SetDefault}     }  },
#define LTE_Band10_AMPR_NS_DEF      1
#endif

#ifndef LTE_Band13_NS7_SetDefault
#define LTE_Band13_AMPR_NS7         LTE_BandX_AMPR_NS1
#else
#define LTE_Band13_AMPR_NS7         { LTE_Band13,  LTE_AMPR_NS7      , { {LTE_Band13_NS7_SetDefault}     }  },
#define LTE_Band13_AMPR_NS_DEF      1
#endif

#ifndef LTE_Band19_NS8_SetDefault
#define LTE_Band19_AMPR_NS8         LTE_BandX_AMPR_NS1
#else
#define LTE_Band19_AMPR_NS8         { LTE_Band19,  LTE_AMPR_NS8      , { {LTE_Band19_NS8_SetDefault}     }  },
#define LTE_Band19_AMPR_NS_DEF      1
#endif

#ifndef LTE_Band20_NS10_SetDefault
#define LTE_Band20_AMPR_NS10        LTE_BandX_AMPR_NS1
#else
#define LTE_Band20_AMPR_NS10        { LTE_Band20,  LTE_AMPR_NS10     , { {LTE_Band20_NS10_SetDefault}    }  },
#define LTE_Band20_AMPR_NS_DEF      1
#endif

#ifndef LTE_Band21_NS9_SetDefault
#define LTE_Band21_AMPR_NS9         LTE_BandX_AMPR_NS1
#else
#define LTE_Band21_AMPR_NS9         { LTE_Band21,  LTE_AMPR_NS9      , { {LTE_Band21_NS9_SetDefault}     }  },
#define LTE_Band21_AMPR_NS_DEF      1
#endif

#ifndef LTE_Band23_NS3_SetDefault
#define LTE_Band23_AMPR_NS3         LTE_BandX_AMPR_NS1
#else
#define LTE_Band23_AMPR_NS3         { LTE_Band23,  LTE_AMPR_NS3      , { {LTE_Band23_NS3_SetDefault}     }  },
#define LTE_Band23_AMPR_NS_DEF      1
#endif

#ifndef LTE_Band23_NS11_SetDefault
#define LTE_Band23_AMPR_NS11        LTE_BandX_AMPR_NS1
#else
#define LTE_Band23_AMPR_NS11        { LTE_Band23,  LTE_AMPR_NS11     , { {LTE_Band23_NS11_SetDefault}    }  },
#define LTE_Band23_AMPR_NS_DEF      1
#endif

#ifndef LTE_Band23_NS20_SetDefault
#define LTE_Band23_AMPR_NS20        LTE_BandX_AMPR_NS1
#else
#define LTE_Band23_AMPR_NS20        { LTE_Band23,  LTE_AMPR_NS20     , { {LTE_Band23_NS20_SetDefault}    }  },
#define LTE_Band23_AMPR_NS_DEF      1
#endif

#ifndef LTE_Band25_NS3_SetDefault
#define LTE_Band25_AMPR_NS3         LTE_BandX_AMPR_NS1
#else
#define LTE_Band25_AMPR_NS3         { LTE_Band25,  LTE_AMPR_NS3      , { {LTE_Band25_NS3_SetDefault}     }  },
#define LTE_Band25_AMPR_NS_DEF      1
#endif

#ifndef LTE_Band26_NS121314_SetDefault
#define LTE_Band26_AMPR_NS121314    LTE_BandX_AMPR_NS1
#else
#define LTE_Band26_AMPR_NS121314    { LTE_Band26,  LTE_AMPR_NS121314 , { {LTE_Band26_NS121314_SetDefault} } },
#define LTE_Band26_AMPR_NS_DEF      1
#endif

#ifndef LTE_Band26_NS15_SetDefault
#define LTE_Band26_AMPR_NS15        LTE_BandX_AMPR_NS1
#else
#define LTE_Band26_AMPR_NS15        { LTE_Band26,  LTE_AMPR_NS15     , { {LTE_Band26_NS15_SetDefault}    }  },
#define LTE_Band26_AMPR_NS_DEF      1
#endif

#ifndef LTE_Band27_NS16_SetDefault
#define LTE_Band27_AMPR_NS16        LTE_BandX_AMPR_NS1
#else
#define LTE_Band27_AMPR_NS16        { LTE_Band27,  LTE_AMPR_NS16     , { {LTE_Band27_NS16_SetDefault}    }  },
#define LTE_Band27_AMPR_NS_DEF      1
#endif

#ifndef LTE_Band28_NS18_SetDefault
#define LTE_Band28_AMPR_NS18        LTE_BandX_AMPR_NS1
#else
#define LTE_Band28_AMPR_NS18        { LTE_Band28,  LTE_AMPR_NS18     , { {LTE_Band28_NS18_SetDefault}    }  },
#define LTE_Band28_AMPR_NS_DEF      1
#endif

#ifndef LTE_Band30_NS21_SetDefault
#define LTE_Band30_AMPR_NS21        LTE_BandX_AMPR_NS1
#else
#define LTE_Band30_AMPR_NS21        { LTE_Band30,  LTE_AMPR_NS21     , { {LTE_Band30_NS21_SetDefault}    }  },
#define LTE_Band30_AMPR_NS_DEF      1
#endif

#ifndef LTE_Band35_NS3_SetDefault
#define LTE_Band35_AMPR_NS3         LTE_BandX_AMPR_NS1
#else
#define LTE_Band35_AMPR_NS3         { LTE_Band35,  LTE_AMPR_NS3      , { {LTE_Band35_NS3_SetDefault}     }  },
#define LTE_Band35_AMPR_NS_DEF      1
#endif

#ifndef LTE_Band36_NS3_SetDefault
#define LTE_Band36_AMPR_NS3         LTE_BandX_AMPR_NS1
#else
#define LTE_Band36_AMPR_NS3         { LTE_Band36,  LTE_AMPR_NS3      , { {LTE_Band36_NS3_SetDefault}     }  },
#define LTE_Band36_AMPR_NS_DEF      1
#endif

#ifndef LTE_Band41_NS4_SetDefault
#define LTE_Band41_AMPR_NS4         LTE_BandX_AMPR_NS1
#else
#define LTE_Band41_AMPR_NS4         { LTE_Band41,  LTE_AMPR_NS4      , { {LTE_Band41_NS4_SetDefault}     }  },
#define LTE_Band41_AMPR_NS_DEF      1
#endif

#ifndef LTE_Band42_NS22_SetDefault
#define LTE_Band42_AMPR_NS22         LTE_BandX_AMPR_NS1
#else
#define LTE_Band42_AMPR_NS22         { LTE_Band42,  LTE_AMPR_NS22      , { {LTE_Band42_NS22_SetDefault}     }  },
#define LTE_Band42_AMPR_NS_DEF      1
#endif

#ifndef LTE_Band43_NS22_SetDefault
#define LTE_Band43_AMPR_NS22         LTE_BandX_AMPR_NS1
#else
#define LTE_Band43_AMPR_NS22         { LTE_Band43,  LTE_AMPR_NS22      , { {LTE_Band43_NS22_SetDefault}     }  },
#define LTE_Band43_AMPR_NS_DEF      1
#endif

#ifndef LTE_Band44_NS19_SetDefault
#define LTE_Band44_AMPR_NS19        LTE_BandX_AMPR_NS1
#else
#define LTE_Band44_AMPR_NS19        { LTE_Band44,  LTE_AMPR_NS19     , { {LTE_Band44_NS19_SetDefault}    }  },
#define LTE_Band44_AMPR_NS_DEF      1
#endif

#ifndef LTE_Band65_NS5_SetDefault
#define LTE_Band65_AMPR_NS5        LTE_BandX_AMPR_NS1
#else
#define LTE_Band65_AMPR_NS5        { LTE_Band65,  LTE_AMPR_NS5     , { {LTE_Band65_NS5_SetDefault}    }  },
#define LTE_Band65_AMPR_NS_DEF      1
#endif

#ifndef LTE_Band65_NS24_SetDefault
#define LTE_Band65_AMPR_NS24        LTE_BandX_AMPR_NS1
#else
#define LTE_Band65_AMPR_NS24        { LTE_Band65,  LTE_AMPR_NS24     , { {LTE_Band65_NS24_SetDefault}    }  },
#define LTE_Band65_AMPR_NS_DEF      1
#endif

#ifndef LTE_Band65_NS25_SetDefault
#define LTE_Band65_AMPR_NS25        LTE_BandX_AMPR_NS1
#else
#define LTE_Band65_AMPR_NS25        { LTE_Band65,  LTE_AMPR_NS25     , { {LTE_Band65_NS25_SetDefault}    }  },
#define LTE_Band65_AMPR_NS_DEF      1
#endif

#ifndef LTE_Band66_NS3_SetDefault
#define LTE_Band66_AMPR_NS3         LTE_BandX_AMPR_NS1
#else
#define LTE_Band66_AMPR_NS3         { LTE_Band66 ,  LTE_AMPR_NS3      , { {LTE_Band66_NS3_SetDefault}      }  },
#define LTE_Band66_AMPR_NS_DEF      1
#endif  

#ifndef LTE_Band68_NS26_SetDefault
#define LTE_Band68_AMPR_NS26        LTE_BandX_AMPR_NS1
#else
#define LTE_Band68_AMPR_NS26        { LTE_Band68,  LTE_AMPR_NS26     , { {LTE_Band68_NS26_SetDefault}    }  },
#define LTE_Band68_AMPR_NS_DEF      1
#endif


//AMPR band -> NS configuration
//[Note] Please re-define LTE_AMPR_TABLE_ALL_SIZE and LTE_AMPR_TABLE_SIZE if number of the following AMPR_NS is changed
#define LTE_BandNone_AMPR_NS        LTE_BandX_AMPR_NS1
#define LTE_Band1_AMPR_NS           LTE_Band1_AMPR_NS5
#define LTE_Band2_AMPR_NS           LTE_Band2_AMPR_NS3
#define LTE_Band3_AMPR_NS           LTE_BandX_AMPR_NS1
#define LTE_Band4_AMPR_NS           LTE_Band4_AMPR_NS3
#define LTE_Band5_AMPR_NS           LTE_BandX_AMPR_NS1
#define LTE_Band6_AMPR_NS           LTE_BandX_AMPR_NS1
#define LTE_Band7_AMPR_NS           LTE_BandX_AMPR_NS1
#define LTE_Band8_AMPR_NS           LTE_BandX_AMPR_NS1
#define LTE_Band9_AMPR_NS           LTE_BandX_AMPR_NS1
#define LTE_Band10_AMPR_NS          LTE_Band10_AMPR_NS3
#define LTE_Band11_AMPR_NS          LTE_BandX_AMPR_NS1
#define LTE_Band12_AMPR_NS          LTE_BandX_AMPR_NS6
#define LTE_Band13_AMPR_NS          LTE_Band13_AMPR_NS7
#define LTE_Band14_AMPR_NS          LTE_BandX_AMPR_NS6
#define LTE_Band15_AMPR_NS          LTE_BandX_AMPR_NS1
#define LTE_Band16_AMPR_NS          LTE_BandX_AMPR_NS1
#define LTE_Band17_AMPR_NS          LTE_BandX_AMPR_NS6
#define LTE_Band18_AMPR_NS          LTE_BandX_AMPR_NS1
#define LTE_Band19_AMPR_NS          LTE_Band19_AMPR_NS8
#define LTE_Band20_AMPR_NS          LTE_Band20_AMPR_NS10
#define LTE_Band21_AMPR_NS          LTE_Band21_AMPR_NS9
#define LTE_Band22_AMPR_NS          LTE_BandX_AMPR_NS1
#define LTE_Band23_AMPR_NS          LTE_Band23_AMPR_NS3      \
                                    LTE_Band23_AMPR_NS11     \
                                    LTE_Band23_AMPR_NS20
#define LTE_Band24_AMPR_NS          LTE_BandX_AMPR_NS1
#define LTE_Band25_AMPR_NS          LTE_Band25_AMPR_NS3
#define LTE_Band26_AMPR_NS          LTE_Band26_AMPR_NS121314 \
                                    LTE_Band26_AMPR_NS15
#define LTE_Band27_AMPR_NS          LTE_Band27_AMPR_NS16
#define LTE_Band28_AMPR_NS          LTE_Band28_AMPR_NS18
#define LTE_Band29_AMPR_NS          LTE_BandX_AMPR_NS1
#define LTE_Band30_AMPR_NS          LTE_Band30_AMPR_NS21
#define LTE_Band31_AMPR_NS          LTE_BandX_AMPR_NS1
#define LTE_Band32_AMPR_NS          LTE_BandX_AMPR_NS1
#define LTE_Band33_AMPR_NS          LTE_BandX_AMPR_NS1
#define LTE_Band34_AMPR_NS          LTE_BandX_AMPR_NS1
#define LTE_Band35_AMPR_NS          LTE_Band35_AMPR_NS3
#define LTE_Band36_AMPR_NS          LTE_Band36_AMPR_NS3
#define LTE_Band37_AMPR_NS          LTE_BandX_AMPR_NS1
#define LTE_Band38_AMPR_NS          LTE_BandX_AMPR_NS1
#define LTE_Band39_AMPR_NS          LTE_BandX_AMPR_NS1
#define LTE_Band40_AMPR_NS          LTE_BandX_AMPR_NS1
#define LTE_Band41_AMPR_NS          LTE_Band41_AMPR_NS4
#define LTE_Band42_AMPR_NS          LTE_Band42_AMPR_NS22
#define LTE_Band43_AMPR_NS          LTE_BandX_AMPR_NS1
#define LTE_Band44_AMPR_NS          LTE_Band44_AMPR_NS19
#define LTE_Band46_AMPR_NS          LTE_BandX_AMPR_NS1
#define LTE_Band65_AMPR_NS          LTE_Band65_AMPR_NS5 \
                                    LTE_Band65_AMPR_NS24 \
                                    LTE_Band65_AMPR_NS25
#define LTE_Band66_AMPR_NS          LTE_Band66_AMPR_NS3
#define LTE_Band68_AMPR_NS          LTE_Band68_AMPR_NS26
#define LTE_Band71_AMPR_NS          LTE_BandX_AMPR_NS1
#define LTE_Band252_AMPR_NS         LTE_BandX_AMPR_NS1 
#define LTE_Band255_AMPR_NS         LTE_BandX_AMPR_NS1 


#define LTE_AMPR_NS_DEFAULT         { LTE_BandNone, 0, {{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }} }

//DRDI use, in the end of LTE_AMPRAdjustTbl_All
#define LTE_BandMax_AMPR_NS         { LTE_BandMax, 0, {{0}} },


/* According to Table 6.2.4.A-1 A-MPR for intra-band contiguous CA: */
#define TX_INTRABAND_AMPR_CA_INDICATOR0_SetDefault LTE_Band1
#define TX_INTRABAND_AMPR_CA_INDICATOR1_SetDefault LTE_Band1
#define TX_INTRABAND_AMPR_CA_INDICATOR2_SetDefault LTE_Band1
#define TX_INTRABAND_AMPR_CA_INDICATOR3_SetDefault LTE_Band41
#define TX_INTRABAND_AMPR_CA_INDICATOR4_SetDefault LTE_Band38
#define TX_INTRABAND_AMPR_CA_INDICATOR5_SetDefault LTE_Band7
#define TX_INTRABAND_AMPR_CA_INDICATOR6_SetDefault LTE_Band39
#define TX_INTRABAND_AMPR_CA_INDICATOR7_SetDefault LTE_Band42


#define NS1_CA 1
#define NS2_CA 2
#define NS3_CA 3
#define NS4_CA 4
#define NS5_CA 5
#define NS6_CA 6
#define NS7_CA 7
#define NS8_CA 8

#define LTE_Band_AMPR_NS(b)          b##_AMPR_NS
#define LTE_AMPR_NS(b)               LTE_Band_AMPR_NS(b)
#define LTE_RF_AMPR_ADJUST(b)        LTE_Band_AMPR_NS(b)


/* bandIdx, amprIdx, LTE_AMPRCaAdjustTable[] */
#define LTE_AMPR_CA_ADJUST(s) \
{                             \
    LTE_##s                   \
}

#define LTE_RF_AMPR_CA_ADJUST(s) \
{                                \
    LTE_AMPR_CA_ADJUST(s)        \
}


#define LTE_RF_AMPR_ADJUST_CA(b, n ,s)       \
{ b, n, LTE_RF_AMPR_CA_ADJUST(s)        \
}

/*******************************************************************************
 * typedef
 ******************************************************************************/


/*******************************************************************************
 * Constant
 ******************************************************************************/

/*******************************************************************************
 * Global Variables
 ******************************************************************************/


/******************************************************************************
 * MPR   Table: refer to 36.101 6.2.3 6.2.5
 * Description: record MPR value for each band
 ******************************************************************************/

/* LTE MPR table by band */
LTE_MPRAdjust_T LTE_MPRAdjustTbl[LTE_TARGET_MAX_SUPPORT_BAND_NUM] =
{
   LTE_RF_MPR_ADJUST(BAND_INDICATOR0_SetDefault,  SetDefault),
   LTE_RF_MPR_ADJUST(BAND_INDICATOR1_SetDefault,  SetDefault),
   LTE_RF_MPR_ADJUST(BAND_INDICATOR2_SetDefault,  SetDefault),
   LTE_RF_MPR_ADJUST(BAND_INDICATOR3_SetDefault,  SetDefault),
   LTE_RF_MPR_ADJUST(BAND_INDICATOR4_SetDefault,  SetDefault),
   LTE_RF_MPR_ADJUST(BAND_INDICATOR5_SetDefault,  SetDefault),
   LTE_RF_MPR_ADJUST(BAND_INDICATOR6_SetDefault,  SetDefault),
   LTE_RF_MPR_ADJUST(BAND_INDICATOR7_SetDefault,  SetDefault),
   LTE_RF_MPR_ADJUST(BAND_INDICATOR8_SetDefault,  SetDefault),
   LTE_RF_MPR_ADJUST(BAND_INDICATOR9_SetDefault,  SetDefault),
   LTE_RF_MPR_ADJUST(BAND_INDICATOR10_SetDefault, SetDefault),
   LTE_RF_MPR_ADJUST(BAND_INDICATOR11_SetDefault, SetDefault),
   LTE_RF_MPR_ADJUST(BAND_INDICATOR12_SetDefault, SetDefault),
   LTE_RF_MPR_ADJUST(BAND_INDICATOR13_SetDefault, SetDefault),
   LTE_RF_MPR_ADJUST(BAND_INDICATOR14_SetDefault, SetDefault),
   LTE_RF_MPR_ADJUST(BAND_INDICATOR15_SetDefault, SetDefault),
   LTE_RF_MPR_ADJUST(BAND_INDICATOR16_SetDefault, SetDefault),
   LTE_RF_MPR_ADJUST(BAND_INDICATOR17_SetDefault, SetDefault),
   LTE_RF_MPR_ADJUST(BAND_INDICATOR18_SetDefault, SetDefault),
   LTE_RF_MPR_ADJUST(BAND_INDICATOR19_SetDefault, SetDefault),
   LTE_RF_MPR_ADJUST(BAND_INDICATOR20_SetDefault, SetDefault),
   LTE_RF_MPR_ADJUST(BAND_INDICATOR21_SetDefault, SetDefault),
   LTE_RF_MPR_ADJUST(BAND_INDICATOR22_SetDefault, SetDefault),
   LTE_RF_MPR_ADJUST(BAND_INDICATOR23_SetDefault, SetDefault),
   LTE_RF_MPR_ADJUST(BAND_INDICATOR24_SetDefault, SetDefault),
};

const LTE_AMPRAdjust_T LTE_AMPRAdjustTbl_All[LTE_AMPR_TABLE_ALL_SIZE] =
{
   LTE_RF_AMPR_ADJUST(LTE_BandNone)
   LTE_RF_AMPR_ADJUST(LTE_Band1   )
   LTE_RF_AMPR_ADJUST(LTE_Band2   )
   LTE_RF_AMPR_ADJUST(LTE_Band3   )
   LTE_RF_AMPR_ADJUST(LTE_Band4   )
   LTE_RF_AMPR_ADJUST(LTE_Band5   )
   LTE_RF_AMPR_ADJUST(LTE_Band6   )
   LTE_RF_AMPR_ADJUST(LTE_Band7   )
   LTE_RF_AMPR_ADJUST(LTE_Band8   )
   LTE_RF_AMPR_ADJUST(LTE_Band9   )
   LTE_RF_AMPR_ADJUST(LTE_Band10  )
   LTE_RF_AMPR_ADJUST(LTE_Band11  )
   LTE_RF_AMPR_ADJUST(LTE_Band12  )
   LTE_RF_AMPR_ADJUST(LTE_Band13  )
   LTE_RF_AMPR_ADJUST(LTE_Band14  )
   LTE_RF_AMPR_ADJUST(LTE_Band15  )
   LTE_RF_AMPR_ADJUST(LTE_Band16  )
   LTE_RF_AMPR_ADJUST(LTE_Band17  )
   LTE_RF_AMPR_ADJUST(LTE_Band18  )
   LTE_RF_AMPR_ADJUST(LTE_Band19  )
   LTE_RF_AMPR_ADJUST(LTE_Band20  )
   LTE_RF_AMPR_ADJUST(LTE_Band21  )
   LTE_RF_AMPR_ADJUST(LTE_Band22  )
   LTE_RF_AMPR_ADJUST(LTE_Band23  )
   LTE_RF_AMPR_ADJUST(LTE_Band24  )
   LTE_RF_AMPR_ADJUST(LTE_Band25  )
   LTE_RF_AMPR_ADJUST(LTE_Band26  )
   LTE_RF_AMPR_ADJUST(LTE_Band27  )
   LTE_RF_AMPR_ADJUST(LTE_Band28  )
   LTE_RF_AMPR_ADJUST(LTE_Band29  )
   LTE_RF_AMPR_ADJUST(LTE_Band30  )
   LTE_RF_AMPR_ADJUST(LTE_Band31  )
   #if IS_4G_BAND32_SUPPORT
   LTE_RF_AMPR_ADJUST(LTE_Band32  )
   #else
   LTE_RF_AMPR_ADJUST(LTE_BandNone)
   #endif
   LTE_RF_AMPR_ADJUST(LTE_Band33  )
   LTE_RF_AMPR_ADJUST(LTE_Band34  )
   LTE_RF_AMPR_ADJUST(LTE_Band35  )
   LTE_RF_AMPR_ADJUST(LTE_Band36  )
   LTE_RF_AMPR_ADJUST(LTE_Band37  )
   LTE_RF_AMPR_ADJUST(LTE_Band38  )
   LTE_RF_AMPR_ADJUST(LTE_Band39  )
   LTE_RF_AMPR_ADJUST(LTE_Band40  )
   LTE_RF_AMPR_ADJUST(LTE_Band41  )
   LTE_RF_AMPR_ADJUST(LTE_Band42  )
   LTE_RF_AMPR_ADJUST(LTE_Band43  )
   LTE_RF_AMPR_ADJUST(LTE_Band44  )
   LTE_RF_AMPR_ADJUST(LTE_Band66  )
   LTE_RF_AMPR_ADJUST(LTE_Band71  )
   LTE_AMPR_NS_DEFAULT,
};

const LTE_AMPRAdjust_T LTE_AMPRAdjustTbl_None = LTE_AMPR_NS_DEFAULT;

/* ULCA                  */
/* LTE MPR table by band */
LTE_MPRAdjust_CA_T LTE_MPRAdjustTbl_CA[LTE_TARGET_MAX_SUPPORT_BAND_NUM] =
{
   LTE_RF_MPR_ADJUST_CA(BAND_INDICATOR0_SetDefault,  SetDefault),
   LTE_RF_MPR_ADJUST_CA(BAND_INDICATOR1_SetDefault,  SetDefault),
   LTE_RF_MPR_ADJUST_CA(BAND_INDICATOR2_SetDefault,  SetDefault),
   LTE_RF_MPR_ADJUST_CA(BAND_INDICATOR3_SetDefault,  SetDefault),
   LTE_RF_MPR_ADJUST_CA(BAND_INDICATOR4_SetDefault,  SetDefault),
   LTE_RF_MPR_ADJUST_CA(BAND_INDICATOR5_SetDefault,  SetDefault),
   LTE_RF_MPR_ADJUST_CA(BAND_INDICATOR6_SetDefault,  SetDefault),
   LTE_RF_MPR_ADJUST_CA(BAND_INDICATOR7_SetDefault,  SetDefault),
   LTE_RF_MPR_ADJUST_CA(BAND_INDICATOR8_SetDefault,  SetDefault),
   LTE_RF_MPR_ADJUST_CA(BAND_INDICATOR9_SetDefault,  SetDefault),
   LTE_RF_MPR_ADJUST_CA(BAND_INDICATOR10_SetDefault, SetDefault),
   LTE_RF_MPR_ADJUST_CA(BAND_INDICATOR11_SetDefault, SetDefault),
   LTE_RF_MPR_ADJUST_CA(BAND_INDICATOR12_SetDefault, SetDefault),
   LTE_RF_MPR_ADJUST_CA(BAND_INDICATOR13_SetDefault, SetDefault),
   LTE_RF_MPR_ADJUST_CA(BAND_INDICATOR14_SetDefault, SetDefault),
   LTE_RF_MPR_ADJUST_CA(BAND_INDICATOR15_SetDefault, SetDefault),
   LTE_RF_MPR_ADJUST_CA(BAND_INDICATOR16_SetDefault, SetDefault),
   LTE_RF_MPR_ADJUST_CA(BAND_INDICATOR17_SetDefault, SetDefault),
   LTE_RF_MPR_ADJUST_CA(BAND_INDICATOR18_SetDefault, SetDefault),
   LTE_RF_MPR_ADJUST_CA(BAND_INDICATOR19_SetDefault, SetDefault),
   LTE_RF_MPR_ADJUST_CA(BAND_INDICATOR20_SetDefault, SetDefault),
   LTE_RF_MPR_ADJUST_CA(BAND_INDICATOR21_SetDefault, SetDefault),
   LTE_RF_MPR_ADJUST_CA(BAND_INDICATOR22_SetDefault, SetDefault),
   LTE_RF_MPR_ADJUST_CA(BAND_INDICATOR23_SetDefault, SetDefault),
   LTE_RF_MPR_ADJUST_CA(BAND_INDICATOR24_SetDefault, SetDefault),
};

/* ULCA HPUE             */
/* LTE MPR table by band */
LTE_MPRAdjust_CA_T LTE_MPRAdjustTbl_HPUE_CA[LTE_TARGET_MAX_SUPPORT_BAND_NUM] =
{
   LTE_RF_MPR_ADJUST_CA(BAND_INDICATOR0_SetDefault,  SetDefault),
   LTE_RF_MPR_ADJUST_CA(BAND_INDICATOR1_SetDefault,  SetDefault),
   LTE_RF_MPR_ADJUST_CA(BAND_INDICATOR2_SetDefault,  SetDefault),
   LTE_RF_MPR_ADJUST_CA(BAND_INDICATOR3_SetDefault,  SetDefault),
   LTE_RF_MPR_ADJUST_CA(BAND_INDICATOR4_SetDefault,  SetDefault),
   LTE_RF_MPR_ADJUST_CA(BAND_INDICATOR5_SetDefault,  SetDefault),
   LTE_RF_MPR_ADJUST_CA(BAND_INDICATOR6_SetDefault,  SetDefault),
   LTE_RF_MPR_ADJUST_CA(BAND_INDICATOR7_SetDefault,  SetDefault),
   LTE_RF_MPR_ADJUST_CA(BAND_INDICATOR8_SetDefault,  SetDefault),
   LTE_RF_MPR_ADJUST_CA(BAND_INDICATOR9_SetDefault,  SetDefault),
   LTE_RF_MPR_ADJUST_CA(BAND_INDICATOR10_SetDefault, SetDefault),
   LTE_RF_MPR_ADJUST_CA(BAND_INDICATOR11_SetDefault, SetDefault),
   LTE_RF_MPR_ADJUST_CA(BAND_INDICATOR12_SetDefault, SetDefault),
   LTE_RF_MPR_ADJUST_CA(BAND_INDICATOR13_SetDefault, SetDefault),
   LTE_RF_MPR_ADJUST_CA(BAND_INDICATOR14_SetDefault, SetDefault),
   LTE_RF_MPR_ADJUST_CA(BAND_INDICATOR15_SetDefault, SetDefault),
   LTE_RF_MPR_ADJUST_CA(BAND_INDICATOR16_SetDefault, SetDefault),
   LTE_RF_MPR_ADJUST_CA(BAND_INDICATOR17_SetDefault, SetDefault),
   LTE_RF_MPR_ADJUST_CA(BAND_INDICATOR18_SetDefault, SetDefault),
   LTE_RF_MPR_ADJUST_CA(BAND_INDICATOR19_SetDefault, SetDefault),
   LTE_RF_MPR_ADJUST_CA(BAND_INDICATOR20_SetDefault, SetDefault),
   LTE_RF_MPR_ADJUST_CA(BAND_INDICATOR21_SetDefault, SetDefault),
   LTE_RF_MPR_ADJUST_CA(BAND_INDICATOR22_SetDefault, SetDefault),
   LTE_RF_MPR_ADJUST_CA(BAND_INDICATOR23_SetDefault, SetDefault),
   LTE_RF_MPR_ADJUST_CA(BAND_INDICATOR24_SetDefault, SetDefault),
};


/******************************************************************************
 * A-MPR Table: refer to 36.101 6.2.4 6.2.5
 * Description: record A-MPR value for each band
 ******************************************************************************/
/*const*/ LTE_AMPRAdjust_T LTE_AMPRAdjustTbl[LTE_AMPR_TABLE_SIZE] =
{
   LTE_RF_AMPR_ADJUST(BAND_INDICATOR0_SetDefault )
   LTE_RF_AMPR_ADJUST(BAND_INDICATOR1_SetDefault )
   LTE_RF_AMPR_ADJUST(BAND_INDICATOR2_SetDefault )
   LTE_RF_AMPR_ADJUST(BAND_INDICATOR3_SetDefault )
   LTE_RF_AMPR_ADJUST(BAND_INDICATOR4_SetDefault )
   LTE_RF_AMPR_ADJUST(BAND_INDICATOR5_SetDefault )
   LTE_RF_AMPR_ADJUST(BAND_INDICATOR6_SetDefault )
   LTE_RF_AMPR_ADJUST(BAND_INDICATOR7_SetDefault )
   LTE_RF_AMPR_ADJUST(BAND_INDICATOR8_SetDefault )
   LTE_RF_AMPR_ADJUST(BAND_INDICATOR9_SetDefault )
   LTE_RF_AMPR_ADJUST(BAND_INDICATOR10_SetDefault)
   LTE_RF_AMPR_ADJUST(BAND_INDICATOR11_SetDefault)
   LTE_RF_AMPR_ADJUST(BAND_INDICATOR12_SetDefault)
   LTE_RF_AMPR_ADJUST(BAND_INDICATOR13_SetDefault)
   LTE_RF_AMPR_ADJUST(BAND_INDICATOR14_SetDefault)
   LTE_RF_AMPR_ADJUST(BAND_INDICATOR15_SetDefault)
   LTE_RF_AMPR_ADJUST(BAND_INDICATOR16_SetDefault)
   LTE_RF_AMPR_ADJUST(BAND_INDICATOR17_SetDefault)
   LTE_RF_AMPR_ADJUST(BAND_INDICATOR18_SetDefault)
   LTE_RF_AMPR_ADJUST(BAND_INDICATOR19_SetDefault)
   LTE_RF_AMPR_ADJUST(BAND_INDICATOR20_SetDefault)
   LTE_RF_AMPR_ADJUST(BAND_INDICATOR21_SetDefault)
   LTE_RF_AMPR_ADJUST(BAND_INDICATOR22_SetDefault)
   LTE_RF_AMPR_ADJUST(BAND_INDICATOR23_SetDefault)
   LTE_RF_AMPR_ADJUST(BAND_INDICATOR24_SetDefault)
   LTE_AMPR_NS_DEFAULT,
};

/******************************************************************************
 * A-MPR Table: Extra table 36.521
 * Description: record A-MPR value for each band
 ******************************************************************************/
/*const*/ LTE_AMPR_EXTRA_Adjust_T LTE_AMPR_EXTRA_AdjustTbl [LTE_AMPR_EXTRA_TABLE_SIZE] = 
{
    {LTE_Band41, 4, {{LTE_Band41_NS4_EXTRA_SetDefault}} }
};

/******************************************************************************
 * A-MPR Table: Extra CA table 36.521
 * Description: record A-MPR value for each band
 ******************************************************************************/
/*const*/ LTE_AMPR_EXTRA_CA_Adjust_T LTE_AMPR_EXTRA_CA_AdjustTbl [LTE_AMPR_EXTRA_CA_TABLE_SIZE] = 
{
    {LTE_Band7, 6, {{LTE_Band7_NS6_EXTRA_CA_SetDefault}} }
};

kal_uint16 LTE_AMPR_VZW_SUPPORT = AMPR_VZW_SUPPORT_SetDefault;

kal_uint16 LTE_AMPR_SPRINT_SUPPORT = AMPR_SPRINT_SUPPORT_SetDefault;

kal_uint16 LTE_AMPR_JP_SUPPORT;

/*const*/ LTE_AMPR_HPUE_Adjust_T LTE_AMPR_HPUE_AdjustTbl [LTE_AMPR_HPUE_TABLE_SIZE] = 
{
    {LTE_Band41, 4, {{LTE_Band41_NS4_HPUE_SetDefault}} }
};

/*const*/ LTE_RF_HPUE_TX_POWER_OFFSET_T ERF_HPUE_TPOS_PARAMETER = 
{ 
  LTE_HPUE_TPOS_ENA_SetDefault,
  {
    {LTE_HPUE_PC2_TPOS(BAND_HPUE_INDICATOR0_SetDefault, SetDefault),LTE_HPUE_PC3_TPOS(BAND_HPUE_INDICATOR0_SetDefault, SetDefault)},
    {LTE_HPUE_PC2_TPOS(BAND_HPUE_INDICATOR1_SetDefault, SetDefault),LTE_HPUE_PC3_TPOS(BAND_HPUE_INDICATOR1_SetDefault, SetDefault)},
    {LTE_HPUE_PC2_TPOS(BAND_HPUE_INDICATOR2_SetDefault, SetDefault),LTE_HPUE_PC3_TPOS(BAND_HPUE_INDICATOR2_SetDefault, SetDefault)},
    {LTE_HPUE_PC2_TPOS(BAND_HPUE_INDICATOR3_SetDefault, SetDefault),LTE_HPUE_PC3_TPOS(BAND_HPUE_INDICATOR3_SetDefault, SetDefault)},
    {LTE_HPUE_PC2_TPOS(BAND_HPUE_INDICATOR4_SetDefault, SetDefault),LTE_HPUE_PC3_TPOS(BAND_HPUE_INDICATOR4_SetDefault, SetDefault)}
  } 
};


/*const*/ LTE_AMPR_HPUE_CA_Adjust_T LTE_AMPR_HPUE_CA_AdjustTbl[LTE_AMPR_HPUE_CA_TABLE_SIZE] = 
{
    {LTE_Band41, 4, {{LTE_NS4_HPUE_CA_SetDefault}} }
};

/******************************************************************************
 * A-MPR Table: Sprint AMPR NS12 & NS13
 * Description: record A-MPR value for each band
 ******************************************************************************/
/*const*/ LTE_AMPR_SPRINT_Adjust_T LTE_AMPR_SPRINT_AdjustTbl [LTE_AMPR_SPRINT_TABLE_SIZE] = 
{
    {LTE_Band26, 12, {{LTE_Band26_NS12_13_14_SPRINT_SetDefault}} }
};

/******************************************************************************
 * A-MPR Table: refer to 36.101 6.2.4 6.2.5
 * Description: record A-MPR value for each band
 ******************************************************************************/
/*const*/ LTE_AMPRAdjust_CA_T LTE_AMPRAdjustTbl_CA[LTE_TARGET_MAX_SUPPORT_AMPR_INTRACABAND_NUM] =
{
   /*    */
   LTE_RF_AMPR_ADJUST_CA(TX_INTRABAND_AMPR_CA_INDICATOR0_SetDefault, NS1_CA, NS1_CA_SetDefault),
   LTE_RF_AMPR_ADJUST_CA(TX_INTRABAND_AMPR_CA_INDICATOR1_SetDefault, NS2_CA, NS2_CA_SetDefault),
   LTE_RF_AMPR_ADJUST_CA(TX_INTRABAND_AMPR_CA_INDICATOR2_SetDefault, NS3_CA, NS3_CA_SetDefault),
   LTE_RF_AMPR_ADJUST_CA(TX_INTRABAND_AMPR_CA_INDICATOR3_SetDefault, NS4_CA, NS4_CA_SetDefault),
   LTE_RF_AMPR_ADJUST_CA(TX_INTRABAND_AMPR_CA_INDICATOR4_SetDefault, NS5_CA, NS5_CA_SetDefault),
   LTE_RF_AMPR_ADJUST_CA(TX_INTRABAND_AMPR_CA_INDICATOR5_SetDefault, NS6_CA, NS6_CA_SetDefault),
   LTE_RF_AMPR_ADJUST_CA(TX_INTRABAND_AMPR_CA_INDICATOR6_SetDefault, NS7_CA, NS7_CA_SetDefault),
   LTE_RF_AMPR_ADJUST_CA(TX_INTRABAND_AMPR_CA_INDICATOR7_SetDefault, NS8_CA, NS8_CA_SetDefault)
};



/*******************************************************************************
 * Local Variables
 * Static variables declaration
 ******************************************************************************/

/*******************************************************************************
 * Local Functions
 * Static Functions Prototype
 ******************************************************************************/

/*******************************************************************************
 * Static Functions declaration
 ******************************************************************************/

/*******************************************************************************
 * Global Functions declaration (interface)
 ******************************************************************************/
#if !defined (L1_SIM)
void nvram_get_TX_default_value_to_write(nvram_lid_enum lid, kal_uint8 *buffer, kal_uint16 buffer_size)
{
    //MPR/AMPR DRDI
    EL1D_RF_CUSTOM_DynamicInitMprAmpr();
    
    switch (lid)
    {
        case NVRAM_EF_EL1_MPRADJTBL_LID:
        {
            kal_mem_cpy(buffer, LTE_MPRAdjustTbl, NVRAM_EF_EL1_MPRADJTBL_SIZE);
        }
        break;

        case NVRAM_EF_EL1_MPRADJTBLCA_LID:
        {
            kal_mem_cpy(buffer, LTE_MPRAdjustTbl_CA, NVRAM_EF_EL1_MPRADJTBLCA_SIZE);
        }
        break;

        case NVRAM_EF_EL1_MPR_HPUE_CA_FEATURE_LID:
        {
            kal_mem_cpy(buffer, LTE_MPRAdjustTbl_HPUE_CA, NVRAM_EF_EL1_MPR_HPUE_CA_FEATURE_SIZE);
        }
        break;

        case NVRAM_EF_EL1_AMPRADJTBL_LID:
        {
            kal_mem_cpy(buffer, LTE_AMPRAdjustTbl, NVRAM_EF_EL1_AMPRADJTBL_SIZE);
        }
        break;

        case NVRAM_EF_EL1_AMPRADJTBLCA_LID:
        {
            kal_mem_cpy(buffer, LTE_AMPRAdjustTbl_CA, NVRAM_EF_EL1_AMPRADJTBLCA_SIZE);
        }
        break;

        case NVRAM_EF_EL1_AMPRADJTBL_EXTRA_LID:
        {
            kal_mem_cpy(buffer, LTE_AMPR_EXTRA_AdjustTbl, NVRAM_EF_EL1_AMPRADJTBL_EXTRA_SIZE);
        }
        break;

        case NVRAM_EF_EL1_AMPRADJTBLCA_EXTRA_LID:
        {
            kal_mem_cpy(buffer, LTE_AMPR_EXTRA_CA_AdjustTbl, NVRAM_EF_EL1_AMPRADJTBLCA_EXTRA_SIZE);
        }
        break;

        case NVRAM_EF_EL1_AMPR_VZW_FEATURE_LID:
        {
            kal_mem_cpy(buffer, &LTE_AMPR_VZW_SUPPORT, NVRAM_EF_EL1_AMPR_VZW_FEATURE_SIZE);
        }
        break;
		
		case NVRAM_EF_EL1_AMPR_SPRINT_FEATURE_LID:
        {
            kal_mem_cpy(buffer, &LTE_AMPR_SPRINT_SUPPORT, NVRAM_EF_EL1_AMPR_SPRINT_FEATURE_SIZE);
        }
        break;

        case NVRAM_EF_EL1_AMPR_HPUE_FEATURE_LID:
        {
            kal_mem_cpy(buffer, LTE_AMPR_HPUE_AdjustTbl, NVRAM_EF_EL1_AMPR_HPUE_FEATURE_SIZE);
        }
        break;

        case NVRAM_EF_EL1_AMPR_HPUE_CA_FEATURE_LID:
        {
            kal_mem_cpy(buffer, LTE_AMPR_HPUE_CA_AdjustTbl, NVRAM_EF_EL1_AMPR_HPUE_CA_FEATURE_SIZE);
        }
        break;

        case NVRAM_EF_EL1_AMPRADJTBL_SPRINT_LID:
        {
            kal_mem_cpy(buffer, LTE_AMPR_SPRINT_AdjustTbl, NVRAM_EF_EL1_AMPRADJTBL_SPRINT_SIZE);
        }
        break;

        case NVRAM_EF_EL1_AMPR_JP_FEATURE_LID:
        {
            kal_mem_cpy(buffer, &LTE_AMPR_JP_SUPPORT, NVRAM_EF_EL1_AMPR_JP_FEATURE_SIZE);
        }
        break;

       case NVRAM_EF_EL1_HPUE_TPOS_LID:
       {
               kal_mem_cpy(buffer, &ERF_HPUE_TPOS_PARAMETER,  NVRAM_EF_EL1_HPUE_TPOS_SIZE);
       }
       break;

    }
}
#endif
/* Doxygen Group End ***************************************************//**@}*/
