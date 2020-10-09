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
 * cl1_rf_public.h
 *
 * Project:
 * --------
 * 93
 *
 * Description:
 * ------------
 * RF public defines and types
 *
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

#ifndef _CL1_RF_PUBLIC_H_
#define _CL1_RF_PUBLIC_H_

#include "c2k_defs.h"
#include "cl1d_rf_common_defs.h"
#include "cl1_rf_tas_public.h" 
#include "cl1_rf_elna_public.h"
#include "cl1_rf_poc_public.h"
#include "mml1_rf_public.h"
#include "cl1_rf_dat_public.h"

#define C2K_USID_NULL                      0x0000
#define C2K_USID_REG_W                     0x0001
#define C2K_USID_REG_W_EXT                 0x0002

#define C2K_REG_0_W                   0x0001
#define C2K_REG_W                     0x0002
#define C2K_REG_W_EXT_1ST             0x0003
#define C2K_REG_W_EXT_BYTE            0x0004
#define C2K_REG_W_EXT_END             0x0005
#define C2K_REG_W_EXT_ONLY_ONEBYTE    0x0006
#define C2K_REG_W_INVALID             0x0008

/* port select */
#define C2K_MIPI_PORT0                0x0000
#define C2K_MIPI_PORT1                0x0001
#define C2K_MIPI_PORT2                0x0002
#define C2K_MIPI_PORT3                0x0003
#define C2K_MIPI_PORT4                0x0004
#define C2K_MIPI_PORT5                0x0005

#define C2K_MIPI_PORT_MAX             (6)

/* event type */
#define C2K_MIPI_TRX_ON         0x0001
#define C2K_MIPI_TRX_OFF        0x0002
#define C2K_MIPI_TPC_SET        0x0003
#define C2K_MIPI_TX_GATE_ON     0x0004
#define C2K_MIPI_TX_GATE_OFF    0x0005
#define C2K_MIPI_RX_DIV_ON      0x0006
#define C2K_MIPI_RX_DIV_OFF     0x0007
#define C2K_MIPI_ETM_TX_ON      0x0008
#define C2K_MIPI_ETM_TX_OFF     0x0009
#define C2K_MIPI_ETM_TPC_SET    0x000A
#define C2K_MIPI_ELNA_ON		0x000B
#define C2K_MIPI_ELNA_BYPASS	0x000C
#define C2K_MIPI_ELNA_OFF		0x000D
#define C2K_MIPI_EVENT_NULL     0x1000

/* element type */
#define C2K_MIPI_NULL                 0x0000
#define C2K_MIPI_ASM                  0x0001
#define C2K_MIPI_ANT                  0x0002
#define C2K_MIPI_PA                   0x0003
#define C2K_MIPI_PA_SEC               0x0004
#define C2K_MIPI_TAS                  0x0005
#define C2K_MIPI_TUNER                0x0006
#define C2K_MIPI_ETM                  0x0007
#define C2K_MIPI_ETM_SEC              0x0008
/*ELNA MIPI element type */
#define C2K_MIPI_ELNA              	  0x0009
#define C2K_MIPI_DAT				  0x000A
#define C2K_MIPI_END_PATTERN          0xFFFF

/* TPC PA SECTION DATA PATTERN */
#define C2K_MIPI_PA_SECTION_DATA0     0x0
#define C2K_MIPI_PA_SECTION_DATA1     0x1
#define C2K_MIPI_PA_SECTION_DATA2     0x2
#define C2K_MIPI_PA_SECTION_DATA3     0x3
#define C2K_MIPI_PA_SECTION_DATA4     0x4

/* Dummy PA USID and register address */
#define C2K_MIPI_PA_SECTION_USID      0x0
#define C2K_MIPI_PA_SECTION_ADDRESS   0x0

/* TPC ETM SECTION DATA PATTERN */
#define C2K_MIPI_ETM_SECTION_DATA0     0x0
#define C2K_MIPI_ETM_SECTION_DATA1     0x1
#define C2K_MIPI_ETM_SECTION_DATA2     0x2
#define C2K_MIPI_ETM_SECTION_DATA3     0x3
#define C2K_MIPI_ETM_SECTION_DATA4     0x4

/* Dummy ETM USID and register address */
#define C2K_MIPI_ETM_SECTION_USID      0x0
#define C2K_MIPI_ETM_SECTION_ADDRESS   0x0


#define C2K_MIPI_SUBBAND_NUM  5

#define M_US(x)     x


/*************** RF Cust Data Dimentions ***************/
#define RF_CUST_SUPPORT_BAND_MAX_NUM 5
#define MIPI_TPC_OCT_NUM 8
#define RF_ELNA_MAX_NUM	10

/*Temp: 8 */
#define CL1D_RF_NUM_TEMP_CALIBR 8
#define CL1D_RF_NUM_TEMP_CALIBR_D	(2*CL1D_RF_NUM_TEMP_CALIBR-1)
/* Freq: 16 */
#define CL1D_RF_NUM_FREQ_CALIBR 16
/*Pa Gain:8 */
#define CL1D_RF_NUM_TX_PA_GAIN_CALIBR 8

#define TX_POWER_OFFSET_TABLE_ITEM_NUM 16
#if defined(__SAR_TX_POWER_BACKOFF_SUPPORT__)  
#define SAR_TX_POWER_OFFSET_TABLE_NUM	 9
#elif defined(__TX_POWER_OFFSET_SUPPORT__)
#define SAR_TX_POWER_OFFSET_TABLE_NUM	 1
#else 
#define SAR_TX_POWER_OFFSET_TABLE_NUM	 9
#endif
#define CL1D_RF_NUM_RAMP_LEVEL 16
#define SAR_FREQ_CALIBR_NUM				16

/*************** RF Cust Data Dimentions ***************/
#define CL1D_RF_SUB_CLASS_ALL_SUPPORTED  0xffff0000
#define CL1D_RF_SUB_CLASS_NONE_SUPPORTED 0x00000000

/***************** RF cust params *******************/
#define PRX1                (0)
#define PRX2                (1)
#define PRX3                (2)
#define PRX4                (3)
#define PRX5                (4)
#define PRX6                (5)
#define PRX7                (6)
#define PRX8                (7)
#define PRX9                (8)
#define PRX10               (9)
#define PRX11               (10)
#define PRX12               (11)
#define PRX13               (12)
#define PRX14               (13)
#define PRX15               (14)
#define PRX16               (15)
#define PRX17               (16)
#define PRX18               (17)
#define PRX19               (18)
#define PRX20               (19)
#define PRX21               (20)
#define PRX22               (21)
#define DRX1                PRX1
#define DRX2                PRX2
#define DRX3                PRX3
#define DRX4                PRX4
#define DRX5                PRX5
#define DRX6                PRX6
#define DRX7                PRX7
#define DRX8                PRX8
#define DRX9                PRX9
#define DRX10               PRX10
#define DRX11               PRX11
#define DRX12               PRX12
#define DRX13               PRX13
#define DRX14               PRX14
#define DRX15               PRX15
#define DRX16               PRX16
#define DRX17               PRX17
#define DRX18               PRX18
#define DRX19               PRX19
#define DRX20               PRX20
#define DRX21               PRX21
#define DRX22               PRX22
#define PRXMAX_RF1          PRX11
#define PRXMAX_RF2          PRX22
#define DRXMAX_RF1          DRX11
#define DRXMAX_RF2          DRX22
#define PRXMAX              PRX22
#define DRXMAX              DRX22

#define TX0_UHB              (0)
#define TX0_HB1              (1)
#define TX0_HB2              (2)
#define TX0_MB1              (3)
#define TX0_MB2              (4)
#define TX0_MB3              (5)
#define TX0_LB1              (6)
#define TX0_LB2              (7)
#define TX0_LB3              (8)
#define TX0_LB4              (9)
#define TX1_UHB              (10)
#define TX1_HB               (11)
#define TX1_MB               (12)
#define TX1_LB1              (13)
#define TX1_LB2              (14)
#define TXO1                 TX0_HB1
#define TXO2                 TX0_MB1
#define TXO3                 TX0_MB2
#define TXO4                 TX0_LB1
#define TXO5                 TX0_LB2
#define TXMAX_RF1            TX0_LB4
#define TXMAX_RF2            TX1_LB2

#define C2K_TX_DET_IO_DET0      (0)
#define C2K_TX_DET_IO_DET1      (1)


#define NONE_USED_BAND      (0xff)

#define NONE_USED_PRX       PRXMAX
#define NONE_USED_DRX       DRXMAX
#define TX_IO_NULL          TXMAX_RF1
#define C2K_TX_DET_IO_NULL      C2K_TX_DET_IO_DET0

/*** TAS 2.0 ***/
#define C2K_TAS_MAX_CAT_A_ROUTE_NUM      (4)
#define C2K_TAS_MAX_CAT_B_ROUTE_NUM      (4)
#define C2K_TAS_MAX_CAT_C_ROUTE_NUM      (4)
#define C2K_TAS_MAX_FE_ROUTE_NUM         (5)
#define C2K_TAS_MAX_STATE_NUM            (8)
#define C2K_TUNER_FE_MAX                 (8)
typedef enum
{
	CL1D_RF_TX_POWER_BACK_OFF_HIGH_TEMP,
	CL1D_RF_TX_POWER_BACK_OFF_LOW_TEMP,	
	CL1D_RF_TX_POWER_BACK_OFF_TEMP_NUM 
}CL1D_RF_TX_POWER_BAK_OFF_TEMP_E;

/** C2K RAT type enumeration */
typedef enum
{
   CL1D_RF_RAT_1XRTT  = 0,
   CL1D_RF_RAT_EVDO   = 1,
   CL1D_RF_RAT_NUM    = 2,
   CL1D_RF_RAT_NULL   = CL1D_RF_RAT_NUM,
} CL1D_RF_RAT_TYPE_E;

typedef enum
{
   C2K_DC2DC	=0,
   C2K_PMIC		=VPA_SOURCE_HW_PMIC,
   C2K_BATT,
   C2K_ETM,
   C2K_HPUE		=VPA_SOURCE_HW_EXT_VPA
} CL1D_RF_PA_VDD_SRC_E;

typedef enum
{
   _IDX = 1,
   BAND_A_IDX = 1,
   BAND_B_IDX = 2,
   BAND_C_IDX = 3,
   BAND_D_IDX = 4,
   BAND_E_IDX = 5,
   MAX_BAND_NUM = 5,

   Route0_IDX = 1,
   Route1_IDX = 2,
   Route2_IDX = 3,
   Route3_IDX = 4,
   MAX_Route_NUM = 4,

   DAT_CAT_A_Route0_IDX = 1,
   DAT_CAT_A_Route1_IDX = 2,
   DAT_CAT_A_Route2_IDX = 3,
   DAT_CAT_A_Route3_IDX = 4,
   DAT_CAT_A_Route4_IDX = 5,
   DAT_CAT_A_Route5_IDX = 6,
   DAT_CAT_A_Route6_IDX = 7,
   DAT_CAT_A_Route7_IDX = 8,
   DAT_CAT_A_Route8_IDX = 9,
   DAT_CAT_A_Route9_IDX = 10,
   MAX_DAT_CAT_A_Route_NUM = 10,
   
   DAT_CAT_B_Route0_IDX = 1,
   DAT_CAT_B_Route1_IDX = 2,
   DAT_CAT_B_Route2_IDX = 3,
   DAT_CAT_B_Route3_IDX = 4,
   DAT_CAT_B_Route4_IDX = 5,
   DAT_CAT_B_Route5_IDX = 6,
   DAT_CAT_B_Route6_IDX = 7,
   DAT_CAT_B_Route7_IDX = 8,
   DAT_CAT_B_Route8_IDX = 9,
   DAT_CAT_B_Route9_IDX = 10,
   DAT_CAT_B_Route10_IDX = 11,
   DAT_CAT_B_Route11_IDX = 12,
   DAT_CAT_B_Route12_IDX = 13,
   DAT_CAT_B_Route13_IDX = 14,
   DAT_CAT_B_Route14_IDX = 15,
   DAT_CAT_B_Route15_IDX = 16,
   DAT_CAT_B_Route16_IDX = 17,
   DAT_CAT_B_Route17_IDX = 18,
   DAT_CAT_B_Route18_IDX = 19,
   DAT_CAT_B_Route19_IDX = 20,
   DAT_CAT_B_Route20_IDX = 21,
   DAT_CAT_B_Route21_IDX = 22,
   DAT_CAT_B_Route22_IDX = 23,
   DAT_CAT_B_Route23_IDX = 24,
   DAT_CAT_B_Route24_IDX = 25,
   DAT_CAT_B_Route25_IDX = 26,
   DAT_CAT_B_Route26_IDX = 27,
   DAT_CAT_B_Route27_IDX = 28,
   DAT_CAT_B_Route28_IDX = 29,
   DAT_CAT_B_Route29_IDX = 30,
   DAT_CAT_B_Route30_IDX = 31,
   DAT_CAT_B_Route31_IDX = 32,
   DAT_CAT_B_Route32_IDX = 33,
   DAT_CAT_B_Route33_IDX = 34,
   DAT_CAT_B_Route34_IDX = 35,
   DAT_CAT_B_Route35_IDX = 36,
   DAT_CAT_B_Route36_IDX = 37,
   DAT_CAT_B_Route37_IDX = 38,
   DAT_CAT_B_Route38_IDX = 39,
   DAT_CAT_B_Route39_IDX = 40,
   MAX_DAT_CAT_B_Route_NUM = 40,
   
   ELNA1_IDX = 1,
   ELNA2_IDX = 2,
   ELNA3_IDX = 3,
   ELNA4_IDX = 4,
   ELNA5_IDX = 5,
   ELNA6_IDX = 6,
   ELNA7_IDX = 7,
   ELNA8_IDX = 8,
   ELNA9_IDX = 9,
   ELNA10_IDX = 10,
   MAX_ELNA_NUM = 10
} CL1D_RF_NV_ITEM_INDEX_T;

/*ELNA mode */
typedef enum{
    C2K_ELNA_ALWAYS_ON,
    C2K_ELNA_ALWAYS_ON_2ND_SAW,
    C2K_ELNA_BYPASS,
    C2K_ELNA_BYPASS_2ND_SAW,
    C2K_ELNA_OFF,
    C2K_ELNA_MODE_NUM_MAX,
    C2k_ELNA_ILLEGAL
}MIPI_ELNA_CATEGORY_E;

typedef enum{
    CL1D_ELNA_NONE,
    CL1D_ELNA_ALWAYS_ON,
    CL1D_ELNA_RUNTIME_CHANGE,
    CL1D_ELNA_MODE_NUM,
    CL1D_ELNA_MODE_ILLEGAL=CL1D_ELNA_MODE_NUM
}CL1D_ELNA_MODE_E;

typedef enum{
    C2K_ELNA_ON_INTER,
    C2K_ELNA_BYPASS_INTER,
    C2K_ELNA_OFF_INTER,
    C2K_ELNA_EVENT_TYPE_MAX_NUM
}MIPI_ELNA_EVENT_TYPE_E;



typedef struct
{
    kal_bool is_supported;
    SysCdmaBandT band_class;
    kal_uint32 sub_class;
} CL1D_RF_CUST_BAND_SUPPORT_T;
 typedef struct
{
   kal_int16 pa_setting_time;
} CL1D_RF_CUST_PA_TIMING_T;
 typedef struct
  {
     /* Band Class Supported */
      CL1D_RF_CUST_BAND_SUPPORT_T band_support[RF_CUST_SUPPORT_BAND_MAX_NUM];/*5bands: A,B,C,D,E */
      /* PA control timing */
      CL1D_RF_CUST_PA_TIMING_T pa_timing;
      /* PA VDD selection*/
      CL1D_RF_PA_VDD_SRC_E pa_vdd_src_sel[RF_CUST_SUPPORT_BAND_MAX_NUM];

      /* RX LNA port selection */
      kal_uint8 rx_lna_port_sel[RF_CUST_SUPPORT_BAND_MAX_NUM];
      /* RX Diversity LNA port selection */
      kal_uint8 rxd_lna_port_sel[RF_CUST_SUPPORT_BAND_MAX_NUM];
      /* TX LNA port selection */
      kal_uint8 tx_lna_port_sel[RF_CUST_SUPPORT_BAND_MAX_NUM];
      /* DET LNA port selection */
      kal_uint8 det_lna_port_sel[RF_CUST_SUPPORT_BAND_MAX_NUM];

      /* RX Diversity enable */
      kal_bool rx_diversity_enable[RF_CUST_SUPPORT_BAND_MAX_NUM];
      /* RX Diversity enable for test */
      kal_bool rx_diversity_only_test_enable[RF_CUST_SUPPORT_BAND_MAX_NUM];
  } CL1D_RF_CUST_PARAM_T;

/***************** BPI *******************/
typedef struct{
    /*BPI Data*/
    kal_uint32 pdata_pr1;
    kal_uint32 pdata_pr2;
    kal_uint32 pdata_pr2b;
    kal_uint32 pdata_pr3;
    kal_uint32 pdata_pr3a;

    kal_uint32 pdata_pt1;
    kal_uint32 pdata_pt2;
    kal_uint32 pdata_pt2b;
    kal_uint32 pdata_pt3;
    kal_uint32 pdata_pt3a;

    kal_uint32 pdata_rxd_pr1;
    kal_uint32 pdata_rxd_pr2;
    kal_uint32 pdata_rxd_pr2b;
    kal_uint32 pdata_rxd_pr3;
    kal_uint32 pdata_rxd_pr3a;

    kal_uint32 pdata_ptg1;
    kal_uint32 pdata_ptg2;
    kal_uint32 pdata_ptg2b;
    kal_uint32 pdata_ptg3;
    kal_uint32 pdata_ptg3a;

}CL1D_RF_CUST_BPI_DATA_CFG_T;
typedef struct{
    /*RX */
    kal_int16 tc_pr1;
    kal_int16 tc_pr2;
    kal_int16 tc_pr2b;
    kal_int16 tc_pr3;
    kal_int16 tc_pr3a;

    /*RXD */
    kal_int16 tc_rxd_pr1;
    kal_int16 tc_rxd_pr2;
    kal_int16 tc_rxd_pr2b;
    kal_int16 tc_rxd_pr3;
    kal_int16 tc_rxd_pr3a;

    /*TX */
    kal_int16 tc_pt1;
    kal_int16 tc_pt2;
    kal_int16 tc_pt2b;
    kal_int16 tc_pt3;
    kal_int16 tc_pt3a;

    /*TX GATE */
    kal_int16 tc_ptg1;
    kal_int16 tc_ptg2;
    kal_int16 tc_ptg2b;
    kal_int16 tc_ptg3;
    kal_int16 tc_ptg3a;

}CL1D_RF_CUST_BPI_TIMING_CFG_T;

typedef struct
{
    CL1D_RF_CUST_BPI_DATA_CFG_T bpi_data;
    CL1D_RF_CUST_BPI_TIMING_CFG_T bpi_timing;
}CL1D_RF_CUST_BPI_CFG_T;



/***************** TAS *******************/
#define C2K_MIPI_TAS_EVENT_NUM        (10)
#define C2K_MIPI_TAS_DATA_NUM         (20)
#define C2K_MIPI_TAS_ROUTE_NUM        (4)
#define C2K_MIPI_TUNER_EVENT_NUM      (8+1)
#define C2K_MIPI_TUNER_DATA_NUM       (8+1)
#define C2K_MIPI_TUNER_ROUTE_NUM      (8)
/*DAT*/
#define C2K_DAT_FE_NULL				  (255)
#define C2K_DAT_MIPI_TABLE_NULL		  (255)
#define C2K_DAT_MAX_CAT_A_ROUTE_NUM      10
#define C2K_DAT_MAX_CAT_B_ROUTE_NUM      40
#define C2K_DAT_NO_SPLIT_BAND         (0xFF)
#define C2K_DAT_MAX_STATE_NUM		  (8)
#define C2K_DAT_MAX_CAT_NUM			  (2)
#define C2K_MIPI_DAT_EVENT_NUM		  (8)
#define C2K_MIPI_DAT_DATA_NUM		  (20)


/*match to TAS big switch *///0,1,2,3
/*ST*/
typedef enum
{
    TAS2_IDX_STATE0 = 0,
    TAS2_IDX_STATE1,
    TAS2_IDX_STATE2,
    TAS2_IDX_STATE3,
    TAS2_IDX_STATE4,
    TAS2_IDX_STATE5,
    TAS2_IDX_STATE6,
    TAS2_IDX_STATE7,
    TAS2_IDX_FORCE,
    TAS2_IDX_DEFAULT,
    TAS2_IDX_DEFAULT_ON_TEST_SIM,
    TAS2_IDX_DEFAULT_ON_REAL_SIM,
    TAS2_TBL_IDX_MAX
} CL1D_RF_TAS_YABL_INIT_IDX_T;
typedef struct
{
    kal_int32 tasBMMask;
    kal_int32 tasBMData;
    kal_int32 initTblIndex;
    kal_bool tasSwitchEn;
} CL1D_RF_TAS_TABL_T;
typedef enum
{
   TAS_BY_RAT_REAL_SIM_ENBLE = 0,
   TAS_BY_RAT_TEST_SIM_ENBLE = 1,
   TAS_FORCE_ENBLE = 0,
   TAS_BY_BAND_REAL_SIM_ENBLE,
   TAS_BY_BAND_TEST_SIM_ENBLE,
   TAS_TEST_MODE_ENBLE,
   TAS_IS_TESTSIM,
   TAS_BY_RAT_ALL_SWITCH_MAX = 4
}CL1D_RF_TAS_MAP_T;
/*SP*/

typedef enum{
	C2K_TAS_CAT_A,
	C2K_TAS_CAT_B,
	C2K_TAS_CAT_C,
	C2K_TAS_CAT_NUM
}CL1D_RF_CUST_TAS_CAT_E ;

typedef enum{
	C2K_TAS_ROUTE_0,
	C2K_TAS_ROUTE_1,
	C2K_TAS_ROUTE_2,
	C2K_TAS_ROUTE_3,
	C2K_TAS_ROUTE_NUM
}CL1D_RF_CUST_TAS_ROUTE_E;

typedef enum {
    ANT_NULL = 0, /* NO TAS control */
    ANT_1,
    ANT_2,
    ANT_3,
    ANT_4,
    ANT_5,
    ANT_6,
    ANT_7,

    ANT_MAX_NUM,

    ANT_INVALID_NUM = ANT_MAX_NUM
}CL1D_RF_CUST_TAS_ANT_INDEX_E;

typedef enum
{
   C2K_TAS_FE_ROUTE0,
   C2K_TAS_FE_ROUTE1,
   C2K_TAS_FE_ROUTE2,
   C2K_TAS_FE_ROUTE3,
   C2K_TAS_FE_ROUTE4,
   C2K_TAS_FE_NULL = C2K_TAS_FE_ROUTE4
}C2K_CUSTOM_TAS_FE_ROUTE_IDX_E;

typedef enum
{
    C2K_TAS_DISBLE,
    C2K_TAS_ENABLE
}C2K_CUSTOM_TAS_SWITCH_E;

#if IS_C2K_DAT_RFD_CTRL_EN
/*DAT structure */
typedef enum
{
   C2K_DAT_CAT_A_CONFIG_IDX0,
   C2K_DAT_CAT_A_CONFIG_IDX1,
   C2K_DAT_CAT_A_CONFIG_IDX2,
   C2K_DAT_CAT_A_CONFIG_IDX3,
   C2K_DAT_CAT_A_CONFIG_IDX4,
   C2K_DAT_CAT_A_CONFIG_IDX5,
   C2K_DAT_CAT_A_CONFIG_IDX6,
   C2K_DAT_CAT_A_CONFIG_IDX7,
   C2K_DAT_CAT_A_CONFIG_IDX8,
   C2K_DAT_CAT_A_CONFIG_IDX9,
   C2K_DAT_CAT_A_NULL = C2K_DAT_FE_NULL,
}C2K_CUSTOM_DAT_CAT_A_IDX_E;

typedef enum
{
   C2K_DAT_CAT_B_CONFIG_IDX0,
   C2K_DAT_CAT_B_CONFIG_IDX1,
   C2K_DAT_CAT_B_CONFIG_IDX2,
   C2K_DAT_CAT_B_CONFIG_IDX3,
   C2K_DAT_CAT_B_CONFIG_IDX4,
   C2K_DAT_CAT_B_CONFIG_IDX5,
   C2K_DAT_CAT_B_CONFIG_IDX6,
   C2K_DAT_CAT_B_CONFIG_IDX7,
   C2K_DAT_CAT_B_CONFIG_IDX8,
   C2K_DAT_CAT_B_CONFIG_IDX9,
   C2K_DAT_CAT_B_CONFIG_IDX10,
   C2K_DAT_CAT_B_CONFIG_IDX11,
   C2K_DAT_CAT_B_CONFIG_IDX12,
   C2K_DAT_CAT_B_CONFIG_IDX13,
   C2K_DAT_CAT_B_CONFIG_IDX14,
   C2K_DAT_CAT_B_CONFIG_IDX15,
   C2K_DAT_CAT_B_CONFIG_IDX16,
   C2K_DAT_CAT_B_CONFIG_IDX17,
   C2K_DAT_CAT_B_CONFIG_IDX18,
   C2K_DAT_CAT_B_CONFIG_IDX19,
   C2K_DAT_CAT_B_CONFIG_IDX20,
   C2K_DAT_CAT_B_CONFIG_IDX21,
   C2K_DAT_CAT_B_CONFIG_IDX22,
   C2K_DAT_CAT_B_CONFIG_IDX23,
   C2K_DAT_CAT_B_CONFIG_IDX24,
   C2K_DAT_CAT_B_CONFIG_IDX25,
   C2K_DAT_CAT_B_CONFIG_IDX26,
   C2K_DAT_CAT_B_CONFIG_IDX27,
   C2K_DAT_CAT_B_CONFIG_IDX28,
   C2K_DAT_CAT_B_CONFIG_IDX29,
   C2K_DAT_CAT_B_CONFIG_IDX30,
   C2K_DAT_CAT_B_CONFIG_IDX31,
   C2K_DAT_CAT_B_CONFIG_IDX32,
   C2K_DAT_CAT_B_CONFIG_IDX33,
   C2K_DAT_CAT_B_CONFIG_IDX34,
   C2K_DAT_CAT_B_CONFIG_IDX35,
   C2K_DAT_CAT_B_CONFIG_IDX36,
   C2K_DAT_CAT_B_CONFIG_IDX37,
   C2K_DAT_CAT_B_CONFIG_IDX38,
   C2K_DAT_CAT_B_CONFIG_IDX39,
   C2K_DAT_CAT_B_NULL = C2K_DAT_FE_NULL,
}C2K_CUSTOM_DAT_CAT_B_IDX_E;

typedef enum
{
   C2K_DAT_CAT_A_MIPI_TABLE_CONFIG_IDX0,
   C2K_DAT_CAT_A_MIPI_TABLE_CONFIG_IDX1,
   C2K_DAT_CAT_A_MIPI_TABLE_CONFIG_IDX2,
   C2K_DAT_CAT_A_MIPI_TABLE_CONFIG_IDX3,
   C2K_DAT_CAT_A_MIPI_TABLE_CONFIG_IDX4,
   C2K_DAT_CAT_A_MIPI_TABLE_CONFIG_IDX5,
   C2K_DAT_CAT_A_MIPI_TABLE_CONFIG_IDX6,
   C2K_DAT_CAT_A_MIPI_TABLE_CONFIG_IDX7,
   C2K_DAT_CAT_A_MIPI_TABLE_CONFIG_IDX8,
   C2K_DAT_CAT_A_MIPI_TABLE_CONFIG_IDX9,
   C2K_DAT_CAT_A_MIPI_TABLE_NULL = C2K_DAT_MIPI_TABLE_NULL,
}C2K_CUSTOM_DAT_CAT_A_MIPI_TBL_IDX_E;


typedef enum
{
   C2K_DAT_CAT_B_MIPI_TABLE_CONFIG_IDX0,
   C2K_DAT_CAT_B_MIPI_TABLE_CONFIG_IDX1,
   C2K_DAT_CAT_B_MIPI_TABLE_CONFIG_IDX2,
   C2K_DAT_CAT_B_MIPI_TABLE_CONFIG_IDX3,
   C2K_DAT_CAT_B_MIPI_TABLE_CONFIG_IDX4,
   C2K_DAT_CAT_B_MIPI_TABLE_CONFIG_IDX5,
   C2K_DAT_CAT_B_MIPI_TABLE_CONFIG_IDX6,
   C2K_DAT_CAT_B_MIPI_TABLE_CONFIG_IDX7,
   C2K_DAT_CAT_B_MIPI_TABLE_CONFIG_IDX8,
   C2K_DAT_CAT_B_MIPI_TABLE_CONFIG_IDX9,
   C2K_DAT_CAT_B_MIPI_TABLE_CONFIG_IDX10,
   C2K_DAT_CAT_B_MIPI_TABLE_CONFIG_IDX11,
   C2K_DAT_CAT_B_MIPI_TABLE_CONFIG_IDX12,
   C2K_DAT_CAT_B_MIPI_TABLE_CONFIG_IDX13,
   C2K_DAT_CAT_B_MIPI_TABLE_CONFIG_IDX14,
   C2K_DAT_CAT_B_MIPI_TABLE_CONFIG_IDX15,
   C2K_DAT_CAT_B_MIPI_TABLE_CONFIG_IDX16,
   C2K_DAT_CAT_B_MIPI_TABLE_CONFIG_IDX17,
   C2K_DAT_CAT_B_MIPI_TABLE_CONFIG_IDX18,
   C2K_DAT_CAT_B_MIPI_TABLE_CONFIG_IDX19,
   C2K_DAT_CAT_B_MIPI_TABLE_CONFIG_IDX20,
   C2K_DAT_CAT_B_MIPI_TABLE_CONFIG_IDX21,
   C2K_DAT_CAT_B_MIPI_TABLE_CONFIG_IDX22,
   C2K_DAT_CAT_B_MIPI_TABLE_CONFIG_IDX23,
   C2K_DAT_CAT_B_MIPI_TABLE_CONFIG_IDX24,
   C2K_DAT_CAT_B_MIPI_TABLE_CONFIG_IDX25,
   C2K_DAT_CAT_B_MIPI_TABLE_CONFIG_IDX26,
   C2K_DAT_CAT_B_MIPI_TABLE_CONFIG_IDX27,
   C2K_DAT_CAT_B_MIPI_TABLE_CONFIG_IDX28,
   C2K_DAT_CAT_B_MIPI_TABLE_CONFIG_IDX29,
   C2K_DAT_CAT_B_MIPI_TABLE_CONFIG_IDX30,
   C2K_DAT_CAT_B_MIPI_TABLE_CONFIG_IDX31,
   C2K_DAT_CAT_B_MIPI_TABLE_CONFIG_IDX32,
   C2K_DAT_CAT_B_MIPI_TABLE_CONFIG_IDX33,
   C2K_DAT_CAT_B_MIPI_TABLE_CONFIG_IDX34,
   C2K_DAT_CAT_B_MIPI_TABLE_CONFIG_IDX35,
   C2K_DAT_CAT_B_MIPI_TABLE_CONFIG_IDX36,
   C2K_DAT_CAT_B_MIPI_TABLE_CONFIG_IDX37,
   C2K_DAT_CAT_B_MIPI_TABLE_CONFIG_IDX38,
   C2K_DAT_CAT_B_MIPI_TABLE_CONFIG_IDX39,
   C2K_DAT_CAT_B_MIPI_TABLE_NULL = C2K_DAT_MIPI_TABLE_NULL,
}C2K_CUSTOM_DAT_CAT_B_MIPI_TBL_IDX_E;

typedef enum{
	C2K_DAT_DISABLE,
	C2K_DAT_ENABLE
}C2K_CUSTOM_DAT_SWITCH_E;

typedef enum
{
   C2K_DAT_STATE0,
   C2K_DAT_STATE1,
   C2K_DAT_STATE2,
   C2K_DAT_STATE3,
   C2K_DAT_STATE4,
   C2K_DAT_STATE5,
   C2K_DAT_STATE6,
   C2K_DAT_STATE7,
   C2K_DAT_STATE_NULL,
}C2K_CUSTOM_DAT_STATE_E;
   
typedef struct
{
   kal_uint32   cat_a_route_num;
   kal_uint32   cat_b_route_num;
}C2K_CUSTOM_DAT_FE_ROUTE_MAP_T;


typedef struct
{
   C2K_CUSTOM_DAT_FE_ROUTE_MAP_T     dat_fe_setting[C2K_DAT_MAX_STATE_NUM];
}C2K_CUSTOM_DAT_ROUTE_SETTING_T;   

typedef struct
{
   C2K_CUSTOM_DAT_SWITCH_E   feature_enable;
   C2K_CUSTOM_DAT_ROUTE_SETTING_T    c2k_dat_fe_route_db[RF_CUST_SUPPORT_BAND_MAX_NUM];
}CL1D_RF_DAT_FE_ROUTE_DATABASE_T; 
typedef CL1D_RF_DAT_FE_ROUTE_DATABASE_T C2K_CUSTOM_DAT_FE_ROUTE_DATABASE_T;

typedef struct
{
   kal_uint32                     bpi_mask;
   kal_uint32                     bpi_value;
   C2K_CUSTOM_DAT_CAT_A_MIPI_TBL_IDX_E dat_mipi_table_index;
}C2K_CUSTOM_DAT_CAT_A_FE_SETTING_T;

typedef struct
{
   kal_uint32                     bpi_mask;
   kal_uint32                     bpi_value;
   C2K_CUSTOM_DAT_CAT_B_MIPI_TBL_IDX_E dat_mipi_table_index;
}C2K_CUSTOM_DAT_CAT_B_FE_SETTING_T;

typedef struct
{
   C2K_CUSTOM_DAT_CAT_A_FE_SETTING_T   dat_cat_a_fe_route[C2K_DAT_MAX_CAT_A_ROUTE_NUM];
}C2K_CUSTOM_DAT_FE_CAT_A_T;
typedef C2K_CUSTOM_DAT_FE_CAT_A_T CL1D_RF_DAT_FE_CAT_A_T;

typedef struct
{
   C2K_CUSTOM_DAT_CAT_B_FE_SETTING_T   dat_cat_b_fe_route[C2K_DAT_MAX_CAT_B_ROUTE_NUM];
}C2K_CUSTOM_DAT_FE_CAT_B_T;
typedef C2K_CUSTOM_DAT_FE_CAT_B_T CL1D_RF_DAT_FE_CAT_B_T;
#endif


/*TAS TST config structure */
typedef enum{
	C2K_TAS_TST_DISABLE,
	C2K_TAS_TST_ENABLE
}C2K_CUSTOM_TAS_TST_SWITCH_E;

typedef struct{
	C2K_CUSTOM_TAS_TST_SWITCH_E tas_tst_enable; //enable query state info
	SysCdmaBandT tas_tst_band_support[RF_CUST_SUPPORT_BAND_MAX_NUM];
	C2K_CUSTOM_TAS_SWITCH_E tas_tst_state_support[RF_CUST_SUPPORT_BAND_MAX_NUM][C2K_TAS_MAX_STATE_NUM];
}CL1D_RF_TAS_TST_CONFIG_T;

typedef struct
{
    C2K_CUSTOM_TAS_SWITCH_E  tas_enable;
    C2K_CUSTOM_TAS_STATE_E   tas_state;
}C2K_CUSTOM_TAS_FEATURE_OPTION_T;
typedef struct{
    C2K_CUSTOM_TAS_VER_E              tas_version;
    C2K_CUSTOM_TAS_FEATURE_OPTION_T   force_mode_tas_feature;
    C2K_CUSTOM_TAS_STATE_E            tas_init_ant_state;
    C2K_CUSTOM_TAS_SWITCH_E           tas_enable_on_real_sim;
    C2K_CUSTOM_TAS_SWITCH_E           tas_enable_on_test_sim;
}CL1D_RF_TAS_FEATURE_BY_RAT_T;
typedef CL1D_RF_TAS_FEATURE_BY_RAT_T C2K_CUSTOM_TAS_FEATURE_BY_RAT_T;

typedef struct
{
   C2K_CUSTOM_TAS_FEATURE_OPTION_T   real_sim_tas_feature;
   C2K_CUSTOM_TAS_FEATURE_OPTION_T   test_sim_tas_feature;
}C2K_CUSTOM_TAS_FEATURE_ENABLE_T;

typedef struct
{
   kal_uint32   cat_a_route_num;
   kal_uint32   cat_b_route_num;
   kal_uint32   cat_c_route_num;
}C2K_CUSTOM_TAS_FE_ROUTE_MAP_T;
typedef struct
{
   kal_uint32                        tas_state_num;
   C2K_CUSTOM_TAS_FEATURE_ENABLE_T   tas_feature_enable;
   C2K_CUSTOM_TAS_FE_ROUTE_MAP_T     tas_fe_setting[C2K_TAS_MAX_STATE_NUM];
}C2K_CUSTOM_SB_TAS_SETTING_T;
typedef struct
{
   C2K_CUSTOM_SB_TAS_SETTING_T   c2k_tas_fe_route_db[C2K_TAS_MAX_FE_ROUTE_NUM];/*By route(By RF_Band) */
}CL1D_RF_TAS_FE_ROUTE_DATABASE_T;
typedef CL1D_RF_TAS_FE_ROUTE_DATABASE_T C2K_CUSTOM_TAS_FE_ROUTE_DATABASE_T;

typedef enum
{
   C2K_TAS_MIPI_TABLE_ROUTE0,
   C2K_TAS_MIPI_TABLE_ROUTE1,
   C2K_TAS_MIPI_TABLE_ROUTE2,
   C2K_TAS_MIPI_TABLE_ROUTE3,
   C2K_TAS_MIPI_TABLE_NULL
}C2K_CUSTOM_TAS_MIPI_TBL_IDX_E;
typedef struct
{
   kal_uint32                     bpi_mask;
   kal_uint32                     bpi_value;
   C2K_CUSTOM_TAS_MIPI_TBL_IDX_E  tas_mipi_table_index;
}C2K_CUSTOM_TAS_FE_SETTING_T;
typedef struct
{
    C2K_CUSTOM_TAS_FE_SETTING_T   tas_cat_a_fe_route[C2K_TAS_MAX_CAT_A_ROUTE_NUM];
}CL1D_RF_TAS_FE_CAT_A_T;
typedef const CL1D_RF_TAS_FE_CAT_A_T C2K_CUSTOM_TAS_FE_CAT_A_T;

typedef struct
{
    C2K_CUSTOM_TAS_FE_SETTING_T   tas_cat_b_fe_route[C2K_TAS_MAX_CAT_B_ROUTE_NUM];
}CL1D_RF_TAS_FE_CAT_B_T;
typedef const CL1D_RF_TAS_FE_CAT_B_T C2K_CUSTOM_TAS_FE_CAT_B_T;

typedef struct
{
    C2K_CUSTOM_TAS_FE_SETTING_T   tas_cat_c_fe_route[C2K_TAS_MAX_CAT_C_ROUTE_NUM];
}CL1D_RF_TAS_FE_CAT_C_T;
typedef const CL1D_RF_TAS_FE_CAT_C_T C2K_CUSTOM_TAS_FE_CAT_C_T;

typedef struct
{
    kal_int8 main_route_num;
    kal_int8 div_route_num;
}HwdRfTunerIndexT;
typedef struct
{
    HwdRfTunerIndexT TunerInitSetting;
    HwdRfTunerIndexT TunerWithTasSetting[C2K_TAS_MAX_STATE_NUM];
}HwdRfTunerSetting;
typedef struct
{
  HwdRfTunerSetting tuner_fe_route[RF_CUST_SUPPORT_BAND_MAX_NUM];
}CL1D_RF_TUNER_FE_ROUTE_TABLE;
typedef const CL1D_RF_TUNER_FE_ROUTE_TABLE C2K_CUSTOM_TUNER_FE_ROUTE_TABLE;

typedef enum
{
   C2K_TUNER_FE_ROUTE0,
   C2K_TUNER_FE_ROUTE1,
   C2K_TUNER_FE_ROUTE2,
   C2K_TUNER_FE_ROUTE3,
   C2K_TUNER_FE_ROUTE4,
   C2K_TUNER_FE_ROUTE5,
   C2K_TUNER_FE_ROUTE6,
   C2K_TUNER_FE_ROUTE7,
   C2K_TUNER_FE_NULL ,
}C2K_CUSTOM_TUER_FE_ROUTE_IDX_E;
typedef struct
{
   kal_uint32                     bpi_mask;
   kal_uint32                     bpi_value;
   C2K_CUSTOM_TUER_FE_ROUTE_IDX_E  tas_mipi_table_index;
}C2K_CUSTOM_TUNER_FE_SETTING_T;
typedef struct
{
   C2K_CUSTOM_TUNER_FE_SETTING_T   tuner_band_route[C2K_TUNER_FE_MAX];
}CL1D_RF_TUNER_BAND_T;
typedef const CL1D_RF_TUNER_BAND_T C2K_CUSTOM_TUNER_BAND_T;
typedef struct{
	C2K_CUSTOM_TAS_FE_CAT_A_T * tas_cat_a_ptr;
	C2K_CUSTOM_TAS_FE_CAT_B_T * tas_cat_b_ptr;
	C2K_CUSTOM_TAS_FE_CAT_C_T * tas_cat_c_ptr;
}CL1D_RF_TAS_DATA_BASE_T;

typedef struct{
	C2K_CUSTOM_TUNER_BAND_T * tuner_data_base_by_band[RF_CUST_SUPPORT_BAND_MAX_NUM];
}CL1D_RF_TUNER_DATA_BASE_T;

typedef struct
{
    kal_bool mipi_enable;
    kal_uint32 mipi_tool_version;
}CL1D_RF_MIPI_PARAM_T;
/*mipi event(RX/TX/TPC Event)*/
typedef struct
{
    kal_uint16 mipi_data_st;/*MIPI data start index*/
    kal_uint16 mipi_data_sp;/*MIPI data stop index*/
}CL1D_RF_MIPI_DATA_STSP;
//final
typedef struct
{
    kal_uint16 mipi_elm_type;/*MIPI element:ASM,PA,Tuner,etc. */
    CL1D_RF_MIPI_DATA_STSP mipi_data_stsp;
    kal_uint16 mipi_evt_type;/*MIPI event type: RX/TX on/off */
    kal_uint32 mipi_evt_offset;/*MIPI event offset,in unit of chips */
}CL1D_RF_MIPI_EVENT_TABLE_T;//ju he 1

/*mipi RX/TX Data */
typedef struct
{
    kal_uint16 addr;
    kal_uint32 data;
}CL1D_MIPI_ADDR_DATA_EXPAND_TABLE_T;
typedef struct
{
    kal_uint16 mipi_subband_freq;
    CL1D_MIPI_ADDR_DATA_EXPAND_TABLE_T mipi_data;
}CL1D_MIPI_DATA_EXPAND_TABLE_T;
/*MIPI_SUBBAND */
typedef enum
{
    mipi_subband_0=0,
    mipi_subband_1,
    mipi_subband_2,
    mipi_subband_3,
    mipi_subband_4,
    mipi_subband_num_max
}MIPI_SUBBAND_E;

typedef struct
{
    kal_uint16 mipi_elm_type;
    kal_uint16 mipi_port_sel;
    kal_uint16 mipi_data_seq;/*mipi data write format */
    kal_uint16 mipi_usid;
    CL1D_MIPI_DATA_EXPAND_TABLE_T mipi_subband_data[mipi_subband_num_max];
}CL1D_RF_MIPI_DATA_SUBBAND_TABLE_T;//ju he 2

/*mipi TPC Data */

typedef struct
{
    kal_uint16 mipi_elm_type;
    kal_uint16 mipi_port_sel;
    kal_uint16 mipi_data_seq;/*mipi data write format */
    kal_uint16 mipi_usid;
    kal_uint16 addr;
    kal_uint32 data;
}CL1D_RF_MIPI_DATA_TABLE_T;

typedef struct
{
    kal_uint16 addr;
    kal_uint16 data;
}CL1D_RF_MIPI_ADDR_DATA_TABLE_T;
typedef struct
{
    CL1D_RF_MIPI_ADDR_DATA_TABLE_T mipi_event_data[5];///TODO: the max num of data is 5 !
}CL1D_MIPI_TPC_SUBBAND_OCT_TABLE_T;

typedef struct
{
    kal_uint16 mipi_subband_freq;
    kal_uint16 mipi_usid;
    CL1D_MIPI_TPC_SUBBAND_OCT_TABLE_T mipi_pa_oct_table[MIPI_TPC_OCT_NUM];///TODO: typedef an enum !!!
}CL1D_RF_TPC_SECTION_TABLE_T;//ju he 3

typedef const CL1D_RF_MIPI_EVENT_TABLE_T C2K_MIPI_EVENT_TABLE_T;
typedef const CL1D_RF_MIPI_DATA_SUBBAND_TABLE_T C2K_MIPI_DATA_SUBBAND_TABLE_T;
typedef const CL1D_RF_MIPI_DATA_TABLE_T C2K_MIPI_DATA_TABLE_T;
typedef const CL1D_RF_TPC_SECTION_TABLE_T C2K_MIPI_TPC_SECTION_TABLE_T;

/* MIPI Aggregation structure*/
typedef struct
{
    /*Event tables*/
    CL1D_RF_MIPI_EVENT_TABLE_T *RX_EVENT_ptr;
    CL1D_RF_MIPI_EVENT_TABLE_T *TX_EVENT_ptr;
    CL1D_RF_MIPI_EVENT_TABLE_T *TPC_EVENT_ptr;
    /*ETM event tables */
    CL1D_RF_MIPI_EVENT_TABLE_T *ETM_TX_EVENT_ptr;
    CL1D_RF_MIPI_EVENT_TABLE_T *ETM_TPC_EVENT_ptr;

    /*Data tables*/
    CL1D_RF_MIPI_DATA_SUBBAND_TABLE_T *RX_DATA_ptr;
    CL1D_RF_MIPI_DATA_SUBBAND_TABLE_T *TX_DATA_ptr;
    CL1D_RF_MIPI_DATA_TABLE_T *TPC_DATA_ptr;
    /*ETM data tables */
    CL1D_RF_MIPI_DATA_SUBBAND_TABLE_T *ETM_TX_DATA_ptr;
    CL1D_RF_MIPI_DATA_TABLE_T *ETM_TPC_DATA_ptr;

    /*TPC section tables*/
    CL1D_RF_TPC_SECTION_TABLE_T *TPC_SECTION_DATA_1XRTT_ptr[mipi_subband_num_max];
    CL1D_RF_TPC_SECTION_TABLE_T *TPC_SECTION_DATA_EVDO_ptr[mipi_subband_num_max];
    CL1D_RF_TPC_SECTION_TABLE_T *TPC_SECTION_DPD_DATA_1XRTT_ptr[mipi_subband_num_max];
    CL1D_RF_TPC_SECTION_TABLE_T *TPC_SECTION_DPD_DATA_EVDO_ptr[mipi_subband_num_max];
    /*ETM section tables */
    CL1D_RF_TPC_SECTION_TABLE_T *ETM_TPC_SECTION_DATA_1XRTT_ptr[mipi_subband_num_max];
    CL1D_RF_TPC_SECTION_TABLE_T *ETM_TPC_SECTION_DATA_EVDO_ptr[mipi_subband_num_max];
}CL1D_RF_CUST_MIPI_INPUT_T;
/* ELNA MIPI Aggregation structure */
typedef struct{
	CL1D_RF_MIPI_EVENT_TABLE_T *ELNA_EVENT_ptr;
	CL1D_RF_MIPI_DATA_SUBBAND_TABLE_T *ELNA_DATA_ptr;
}CL1D_RF_CUST_ELNA_MIPI_INPUT_T;

/*MIPI event&data Aggregation structure */
typedef struct{
	CL1D_RF_MIPI_EVENT_TABLE_T *MIPI_EVENT_ptr;
	CL1D_RF_MIPI_DATA_SUBBAND_TABLE_T *MIPI_DATA_ptr;
}CL1D_RF_CUST_MIPI_INPUT_AGGREATION_T;

#undef NVRAM_ITEM_RF_CUST
#undef NVRAM_ITEM_MIPI
#undef NVRAM_ITEM_RF_CAL
#undef NVRAM_ITEM_RF_POC
#undef NVRAM_ITEM_RF_TAS_VAR
#undef NVRAM_ITEM_RF_TAS_ARRAY
#undef NVRAM_ITEM_ELNA_VAR
#undef NVRAM_ITEM_ELNA_ARRAY
#undef NVRAM_ITEM_TX_POWER_VAR
#undef NVRAM_ITEM_RF_TAS_TST
#define NVRAM_ITEM_RF_CUST(nAME, aFFIX, rECnUM, tYPE, tYPEnUM, fUNC) 
#define NVRAM_ITEM_MIPI(nAME, aFFIX, rECnUM, tYPE, tYPEnUM, fUNC) 
#define NVRAM_ITEM_RF_CAL(nAME, aFFIX, rECnUM, tYPE, tYPEnUM, fUNC) 
#define NVRAM_ITEM_RF_POC(nAME, aFFIX, rECnUM, tYPE, tYPEnUM, fUNC) 
#define NVRAM_ITEM_RF_TAS_VAR(nAME, aFFIX, rECnUM, tYPE, tYPEnUM, fUNC) 
#define NVRAM_ITEM_RF_TAS_ARRAY(nAME, aFFIX, rECnUM, tYPE, tYPEnUM, fUNC) 
#define NVRAM_ITEM_ELNA_VAR(nAME, aFFIX, rECnUM, tYPE, tYPEnUM, fUNC) 
#define NVRAM_ITEM_ELNA_ARRAY(nAME, aFFIX, rECnUM, tYPE, tYPEnUM, fUNC) 
#define NVRAM_ITEM_TX_POWER_VAR(nAME, aFFIX, rECnUM, tYPE, tYPEnUM, fUNC) 
#define NVRAM_ITEM_RF_TAS_TST(nAME, aFFIX, rECnUM, tYPE, tYPEnUM, fUNC) 
#include "cl1_nvram_id.h"//Just for obtain MIPI_DAT_EVENT_MAX_NUM && MIPI_DAT_DATA_MAX_NUM

typedef struct{
	CL1D_RF_MIPI_EVENT_TABLE_T DatMipiEventBuffer[C2K_DAT_MAX_CAT_NUM*MIPI_DAT_EVENT_MAX_NUM];
	CL1D_RF_MIPI_DATA_SUBBAND_TABLE_T DatMipiDataBuffer[C2K_DAT_MAX_CAT_NUM*MIPI_DAT_DATA_MAX_NUM];
}CL1D_RF_CUST_MIPI_BUFFER_T;


/***************** Calibration *******************/
/*temperature and frequency compensation parameter */
typedef struct{
    kal_int16 TemFreqComp[CL1D_RF_NUM_TEMP_CALIBR][CL1D_RF_NUM_FREQ_CALIBR];/*TEMP:8; FREQ:15 */
}CL1D_RF_TEMP_FREQ_COMP_DATA_T;
/*RX Path Loss Data */
typedef struct{
    kal_int8 TemCelsius[CL1D_RF_NUM_TEMP_CALIBR];/*TEMP:8 */
    kal_uint16 ChanNum[CL1D_RF_NUM_FREQ_CALIBR];/*FREQ:15 */
    CL1D_RF_TEMP_FREQ_COMP_DATA_T RxPathLossFreqComp[CL1D_RF_LNA_MODE_NUM];/*LNA:8 */
}CL1D_RF_RX_PATH_LOSS_COMP_T;
typedef const CL1D_RF_RX_PATH_LOSS_COMP_T C2K_RF_RX_PATH_LOSS_COMP_T;
typedef struct {
    kal_uint16  init_dac;
    kal_int16  slope;
    kal_uint16  cap_id;
    kal_uint16  Reserved;
}CL1D_RF_AFC_DATA_T;
typedef const CL1D_RF_AFC_DATA_T C2K_RF_AFC_DATA_T;

/*PA Context Data */
typedef struct{
    /** The reference power, in 1/32 dBm. */
    kal_int16       refPwr;
    /** The reference power output PA without feq/temp compensation, in 1/32 dBm. */
    kal_int16       paGain;
    /** The PA mode info.*/
    kal_uint16      paMode;
    /** The PA control RFGPOs level */
    ///TODO: Below 3 parameter not used
    kal_uint16      paVm0;
    kal_uint16      paVm1;
    /** PA BUCK supply voltage level, unit is mv*/
    kal_uint16      paVdd;
}CL1D_RF_PA_CONTEXT_T;
typedef struct{
    kal_int16 HighSwitchThresh;/* Tx power for L2M or M2H, unit is 1/32dBm (Q5)*/
    kal_int16 LowSwitchThresh;/* Tx power for H2M or M2L, unit is 1/32dBm (Q5)*/
}CL1D_RF_TX_PA_HYST_DATA_T;
typedef struct{
    kal_int16 TH_OP_A2D;
    kal_int16 TH_OP_D2A;///TODO: new feature for 93
}CL1D_RF_APT_DPD_SWITCH_THD_T;
typedef struct
{
    kal_int32 PaCalSectionNum;
    CL1D_RF_PA_CONTEXT_T TxPwrPaContext[CL1D_RF_NUM_TX_PA_GAIN_CALIBR];/*PA Gain:8 */
    CL1D_RF_TX_PA_HYST_DATA_T TxHyst[CL1D_RF_PA_MODE_NUM-1];/*Hyst Region */
    kal_int16 paPhaseJumpComp[CL1D_RF_PA_MODE_NUM];/*PA mode:3 */
	kal_int16 reserve;
}CL1D_RF_TX_APT_PA_CONTEXT_T;
typedef const CL1D_RF_TX_APT_PA_CONTEXT_T C2K_RF_TX_APT_PA_CONTEXT_T;
typedef struct{
    kal_uint8 PaCalSectionNum;
    CL1D_RF_PA_CONTEXT_T TxPwrPaContext[CL1D_RF_NUM_TX_PA_GAIN_CALIBR];/*PA Gain:8 */
    CL1D_RF_TX_PA_HYST_DATA_T TxHyst[CL1D_RF_PA_MODE_NUM-1];/*Hyst Region */
    kal_int16 paPhaseJumpComp[CL1D_RF_PA_MODE_NUM];/*PA mode:3 */
	 CL1D_RF_APT_DPD_SWITCH_THD_T AptDpdSwitchThd;
}CL1D_RF_TX_DPD_PA_CONTEXT_T;
typedef const CL1D_RF_TX_DPD_PA_CONTEXT_T C2K_RF_TX_DPD_PA_CONTEXT_T;

/*APT PA Gain Data */
typedef struct{
    kal_int8 TemCelsius[CL1D_RF_NUM_TEMP_CALIBR];/*TEMP:8 */
    kal_uint16 ChanNum[CL1D_RF_NUM_FREQ_CALIBR];/*FREQ:16 */
    CL1D_RF_TEMP_FREQ_COMP_DATA_T TxPwrPaGainComp[CL1D_RF_NUM_TX_PA_GAIN_CALIBR];/*PA Gain:8 */
}CL1D_RF_TX_APT_PA_GAIN_COMP_T;
typedef const CL1D_RF_TX_APT_PA_GAIN_COMP_T C2K_RF_TX_APT_PA_GAIN_COMP_T;

/*DPD Common parameters */
typedef struct{
    kal_int16 FdB[CL1D_RF_NUM_TX_PA_GAIN_CALIBR];
    kal_int16 PtarThTmp[CL1D_RF_NUM_TX_PA_GAIN_CALIBR];	
}CL1D_RF_TX_DPD_COMM_DATA_T;

/*DPD custom parameters*/
typedef struct             
{
   /*DPD Normal Mode enable Flag*/
   CL1D_DPD_ENABLE_E       dpd_normal_enable;

   /* The delta term add to tab_PA_Vcc_idx_th, value from custom file */
   kal_int16          d_tar_th_dpd;

} CL1D_RF_DPD_COMMON_CTRL_T;  

/************PCFE SA fine tune Parameters Start*******/

typedef struct
{
   kal_uint32        reserved0;   
}CL1D_RF_PCFE_CUSTOM_PARA_T;

typedef struct
{
   kal_int16        dpd_apt_temperature_th_by_rfic[2]; // for 2 RFIC
}CL1D_RF_DPD_OTFC_CUSTOM_PARA_T;

typedef struct
{
    CL1D_RF_DPD_OTFC_CUSTOM_PARA_T     dpd_otfc_custom;
    CL1D_RF_PCFE_CUSTOM_PARA_T         pcfe_custom;
   
}CL1D_RF_PCFE_DPD_OTFC_CUSTOM_PARA_T;



/*DPD PA Gain Data */
#define CL1D_RF_NUM_RAMP_CALIBR 16
typedef struct{
    kal_int8 TemCelsius[CL1D_RF_NUM_TEMP_CALIBR];/*TEMP:8 */
    kal_uint16 ChanNum[CL1D_RF_NUM_FREQ_CALIBR];/*FREQ:16 */
    CL1D_RF_TEMP_FREQ_COMP_DATA_T TxPwrPaGainComp[CL1D_RF_NUM_TX_PA_GAIN_CALIBR];/*PA Gain:8 */
	CL1D_RF_TX_DPD_COMM_DATA_T TxDpdComm[CL1D_RF_NUM_FREQ_CALIBR];
    kal_int16 DpdTr[CL1D_RF_NUM_FREQ_CALIBR];
}CL1D_RF_TX_DPD_PA_GAIN_COMP_T;
typedef const CL1D_RF_TX_DPD_PA_GAIN_COMP_T C2K_RF_TX_DPD_PA_GAIN_COMP_T;

/* AM LUT data parameter */
typedef struct{
    kal_uint8 AmLut[CL1D_RF_NUM_TX_PA_GAIN_CALIBR][CL1D_RF_NUM_RAMP_LEVEL];/*PA :8; RAMP:16 */
}CL1D_RF_AM_LUT_DATA_T;

/* PM LUT data parameter */
typedef struct{
    kal_int8 PmLut[CL1D_RF_NUM_TX_PA_GAIN_CALIBR][CL1D_RF_NUM_RAMP_LEVEL];/*PA :8; RAMP:16 */
}CL1D_RF_PM_LUT_DATA_T;

/*DPD AM/PM Data */
typedef struct{
    CL1D_RF_AM_LUT_DATA_T AmLut[CL1D_RF_NUM_FREQ_CALIBR];/* FREQ :16 */
    CL1D_RF_PM_LUT_DATA_T PmLut[CL1D_RF_NUM_FREQ_CALIBR];/* FREQ :16 */
}CL1D_RF_TX_DPD_AM_PM_LUT_DATA_T;
typedef const CL1D_RF_TX_DPD_AM_PM_LUT_DATA_T C2K_RF_TX_DPD_AM_PM_LUT_DATA_T;

/*DPD AM/PM Data For One Freq*/
typedef struct{
    CL1D_RF_AM_LUT_DATA_T AmLut;/* FREQ :16 */
    CL1D_RF_PM_LUT_DATA_T PmLut;/* FREQ :16 */
}CL1D_RF_TX_DPD_AM_PM_CAL_LUT_DATA_T;
typedef const CL1D_RF_TX_DPD_AM_PM_CAL_LUT_DATA_T C2K_RF_TX_DPD_AM_PM_CAL_LUT_DATA_T;


/*DET Couper Loss Data */
typedef struct{
    kal_int16 CouplerGain[CL1D_RF_PA_MODE_NUM];/*PA mode:3 */
}CL1D_RF_DET_COUPLE_LOSS_T;
typedef const CL1D_RF_DET_COUPLE_LOSS_T C2K_RF_DET_COUPLE_LOSS_T;

/*DET Compensation Data */
typedef struct{
    kal_int8 TemCelsius[CL1D_RF_NUM_TEMP_CALIBR];/*TEMP:8 */
    kal_uint16 ChanNum[CL1D_RF_NUM_FREQ_CALIBR];/*FREQ:15 */
    CL1D_RF_TEMP_FREQ_COMP_DATA_T TxPdetCouplerGainComp[CL1D_RF_PA_MODE_NUM];/*PA mode:3 */
}CL1D_RF_DET_COUPLE_LOSS_COMP_T;
typedef const CL1D_RF_DET_COUPLE_LOSS_COMP_T C2K_RF_DET_COUPLE_LOSS_COMP_T;
typedef struct
{
    kal_int32 group_delay;
}CL1D_RF_AGPS_GROUP_DELAY_T;
typedef const CL1D_RF_AGPS_GROUP_DELAY_T C2K_RF_AGPS_GROUP_DELAY_T;

typedef struct
{
    kal_int16 temp;
    kal_int16 back_off;
}CL1D_RF_TX_POWER_BACK_OFF_ITEM_T;

typedef struct
{
    CL1D_RF_TX_POWER_BACK_OFF_ITEM_T tbl[CL1D_RF_TX_POWER_BACK_OFF_TEMP_NUM];
}CL1D_RF_TX_POWER_BACK_OFF_T;
typedef const CL1D_RF_TX_POWER_BACK_OFF_T C2K_RF_TX_POWER_BACK_OFF_T;

/*sar data structure */
typedef enum{
	C2K_SAR_LANT_1 = 0,
	C2K_SAR_UANT,
	C2K_SAR_LANT_2,
	C2K_SAR_TX_ANT_NUM,
	C2K_SAR_TX_ANT_NULL =C2K_SAR_TX_ANT_NUM
}CL1D_RF_SAR_TX_ANT_E;
typedef struct{
	kal_uint16 sar_chan_num;  											/* Unit: sar channel number */
  	kal_int16 sar_power_offset[C2K_SAR_TX_ANT_NUM][CL1D_RF_RAT_NUM];  /* SAR TX power offset, in unit of 1/32 */
}CL1D_RF_SAR_TX_POWER_OFFSET_TBL_ITEM_T;
typedef struct{
	CL1D_RF_SAR_TX_POWER_OFFSET_TBL_ITEM_T sar_tbl_item[SAR_FREQ_CALIBR_NUM];
}CL1D_RF_SAR_TX_POWER_OFFSET_TBL_T;
typedef struct{
	CL1D_RF_SAR_TX_POWER_OFFSET_TBL_T sar_tbl[SAR_TX_POWER_OFFSET_TABLE_NUM];
}CL1D_RF_SAR_TX_POWER_OFFSET_T;
typedef const CL1D_RF_SAR_TX_POWER_OFFSET_T C2K_RF_SAR_TX_POWER_OFFSET_T;
#endif /* _CL1_RF_PUBLIC_H_ */

