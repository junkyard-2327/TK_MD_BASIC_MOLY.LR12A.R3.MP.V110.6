#ifndef _FEC_CMIF_REG_MT6293_H_
#define _FEC_CMIF_REG_MT6293_H_


#ifndef _FEC_ADDR_FORMAT_MT6293_H_
#define _FEC_ADDR_FORMAT_MT6293_H_

typedef volatile unsigned short* SRAMADDR;         /* SRAM addr is 16 bits  */
typedef volatile unsigned short  SRAMDATA;         /* SRAM data is 16 bits  */
typedef volatile unsigned short* APBADDR;          /* APB addr is 16 bits   */
typedef volatile unsigned short  APBDATA;          /* APB data is 16 bits   */
typedef volatile unsigned long*  APBADDR32;        /* APB addr is 32 bits   */
typedef volatile unsigned long   APBDATA32;        /* APB data is 32 bits   */
typedef volatile unsigned short* DPRAMADDR;        /* DPRAM addr is 16 bits */
typedef volatile signed   short* DPRAMADDR_S;      /* DPRAM addr is 16 bits */
typedef volatile unsigned short  DPRAMDATA;        /* DPRAM data is 16 bits */

#endif //#ifndef _FEC_ADDR_FORMAT_MT6293_H_


//#define FEC_LTPC_CUIF_CU_REG_REG_BASE                                           (0x00070000)
//#define FEC_LTPC_TX_CUIF(n)                                                     ((APBADDR32)(FEC_LTPC_CUIF_CU_REG_REG_BASE + (n)*4))   //fake cuif addr for psuedo code

//#define FEC_LTPC_CUIF_CU_REG_end                                                (FEC_LTPC_CUIF_CU_REG_REG_BASE + 0x0270)//


// ---------- FEC_L_RX word-offset  ----------
#define CUIF_FEC_L_RX_REG_BASE                                                       ((UINT32)FEC_WBRP_FEC_L_RX_INFO)

#define CUIF_FEC_L_RX_PARAMETER_SETTING_CTRL                                    ((APBADDR32)(CUIF_FEC_L_RX_REG_BASE + 0x00000000))
#define CUIF_FEC_L_RX_PARAMETER_SETTING_00                                      ((APBADDR32)(CUIF_FEC_L_RX_REG_BASE + 0x00000004))
#define CUIF_FEC_L_RX_PARAMETER_SETTING_01                                      ((APBADDR32)(CUIF_FEC_L_RX_REG_BASE + 0x00000008))
#define CUIF_FEC_L_RX_PARAMETER_SETTING_02                                      ((APBADDR32)(CUIF_FEC_L_RX_REG_BASE + 0x0000000C))
#define CUIF_FEC_L_RX_PARAMETER_SETTING_03                                      ((APBADDR32)(CUIF_FEC_L_RX_REG_BASE + 0x00000010))
#define CUIF_FEC_L_RX_TEST_MODE_POWER_WB_P0                                     ((APBADDR32)(CUIF_FEC_L_RX_REG_BASE + 0x00000014))
#define CUIF_FEC_L_RX_TEST_MODE_POWER_WB_P1                                     ((APBADDR32)(CUIF_FEC_L_RX_REG_BASE + 0x00000018))
#define CUIF_FEC_L_RX_TEST_MODE_POWER_IB_C0                                     ((APBADDR32)(CUIF_FEC_L_RX_REG_BASE + 0x0000001C))
#define CUIF_FEC_L_RX_TEST_MODE_POWER_IB_C1                                     ((APBADDR32)(CUIF_FEC_L_RX_REG_BASE + 0x00000020))
#define CUIF_FEC_L_RX_TEST_MODE_POWER_RS_C0                                     ((APBADDR32)(CUIF_FEC_L_RX_REG_BASE + 0x00000024))
#define CUIF_FEC_L_RX_TEST_MODE_POWER_RS_C1                                     ((APBADDR32)(CUIF_FEC_L_RX_REG_BASE + 0x00000028))
#define CUIF_FEC_L_RX_TEST_MODE_POWER_CS_C0                                     ((APBADDR32)(CUIF_FEC_L_RX_REG_BASE + 0x0000002C))
#define CUIF_FEC_L_RX_TEST_MODE_POWER_CS_C1                                     ((APBADDR32)(CUIF_FEC_L_RX_REG_BASE + 0x00000030))
#define CUIF_FEC_L_RX_TEST_MODE_RF_GAIN_P0_A0                                   ((APBADDR32)(CUIF_FEC_L_RX_REG_BASE + 0x00000034))
#define CUIF_FEC_L_RX_TEST_MODE_RF_GAIN_P0_A1                                   ((APBADDR32)(CUIF_FEC_L_RX_REG_BASE + 0x00000038))
#define CUIF_FEC_L_RX_TEST_MODE_RF_GAIN_P1_A0                                   ((APBADDR32)(CUIF_FEC_L_RX_REG_BASE + 0x0000003C))
#define CUIF_FEC_L_RX_TEST_MODE_RF_GAIN_P1_A1                                   ((APBADDR32)(CUIF_FEC_L_RX_REG_BASE + 0x00000040))
#define CUIF_FEC_L_RX_TEST_MODE_DAGC_C0                                         ((APBADDR32)(CUIF_FEC_L_RX_REG_BASE + 0x00000044))
#define CUIF_FEC_L_RX_TEST_MODE_DAGC_C1                                         ((APBADDR32)(CUIF_FEC_L_RX_REG_BASE + 0x00000048))
#define CUIF_FEC_L_RX_TEST_MODE_AGC_EXP                                         ((APBADDR32)(CUIF_FEC_L_RX_REG_BASE + 0x0000004C))
#define CUIF_FEC_L_RX_TEST_MODE_RF_DC_P0                                        ((APBADDR32)(CUIF_FEC_L_RX_REG_BASE + 0x00000050))
#define CUIF_FEC_L_RX_TEST_MODE_RF_DC_P1                                        ((APBADDR32)(CUIF_FEC_L_RX_REG_BASE + 0x00000054))
#define CUIF_FEC_L_RX_TEST_MODE_DIG_DC_P0_A0                                    ((APBADDR32)(CUIF_FEC_L_RX_REG_BASE + 0x00000058))
#define CUIF_FEC_L_RX_TEST_MODE_DIG_DC_P0_A1                                    ((APBADDR32)(CUIF_FEC_L_RX_REG_BASE + 0x0000005C))
#define CUIF_FEC_L_RX_TEST_MODE_DIG_DC_P1_A0                                    ((APBADDR32)(CUIF_FEC_L_RX_REG_BASE + 0x00000060))
#define CUIF_FEC_L_RX_TEST_MODE_DIG_DC_P1_A1                                    ((APBADDR32)(CUIF_FEC_L_RX_REG_BASE + 0x00000064))
#define CUIF_FEC_L_RX_TEST_MODE_POWER_WB_SETPT                                  ((APBADDR32)(CUIF_FEC_L_RX_REG_BASE + 0x00000068))
#define CUIF_FEC_L_RX_TEST_MODE_POWER_IB_SETPT_HI                               ((APBADDR32)(CUIF_FEC_L_RX_REG_BASE + 0x0000006C))
#define CUIF_FEC_L_RX_TEST_MODE_POWER_IB_SETPT_LO                               ((APBADDR32)(CUIF_FEC_L_RX_REG_BASE + 0x00000070))
#define CUIF_FEC_L_RX_TEST_MODE_POWER_IB_SETPT_MAX                              ((APBADDR32)(CUIF_FEC_L_RX_REG_BASE + 0x00000074))
#define CUIF_FEC_L_RX_TEST_MODE_POWER_RSSI_C0                                   ((APBADDR32)(CUIF_FEC_L_RX_REG_BASE + 0x00000078))
#define CUIF_FEC_L_RX_TEST_MODE_POWER_RSSI_C1                                   ((APBADDR32)(CUIF_FEC_L_RX_REG_BASE + 0x0000007C))
#define CUIF_FEC_L_RX_CAL_RXDATA_VALID_GENERAL                                  ((APBADDR32)(CUIF_FEC_L_RX_REG_BASE + 0x00000080))
#define CUIF_FEC_L_RX_CAL_RXDATA_DC_BURST_INFO_ADDR_P0(n)                       ((APBADDR32)(CUIF_FEC_L_RX_REG_BASE + 0x00000084 + (n)*4))   //n is from 0 to 1
#define CUIF_FEC_L_RX_CAL_RXDATA_DC_BURST_INFO_ADDR_P1(n)                       ((APBADDR32)(CUIF_FEC_L_RX_REG_BASE + 0x0000008C + (n)*4))   //n is from 0 to 1
#define CUIF_FEC_L_RX_CAL_RXDATA_PATHLOSS_BURST_INFO_ADDR_C0(n)                 ((APBADDR32)(CUIF_FEC_L_RX_REG_BASE + 0x00000094 + (n)*4))   //n is from 0 to 1
#define CUIF_FEC_L_RX_CAL_RXDATA_PATHLOSS_BURST_INFO_ADDR_C1(n)                 ((APBADDR32)(CUIF_FEC_L_RX_REG_BASE + 0x0000009C + (n)*4))   //n is from 0 to 1
#define CUIF_FEC_L_RX_GAIN_TBL_ADDR_P0_A0(n)                                    ((APBADDR32)(CUIF_FEC_L_RX_REG_BASE + 0x000000A4 + (n)*4))   //n is from 0 to 1
#define CUIF_FEC_L_RX_GAIN_TBL_ADDR_P0_A1(n)                                    ((APBADDR32)(CUIF_FEC_L_RX_REG_BASE + 0x000000AC + (n)*4))   //n is from 0 to 1
#define CUIF_FEC_L_RX_GAIN_TBL_ADDR_P1_A0(n)                                    ((APBADDR32)(CUIF_FEC_L_RX_REG_BASE + 0x000000B4 + (n)*4))   //n is from 0 to 1
#define CUIF_FEC_L_RX_GAIN_TBL_ADDR_P1_A1(n)                                    ((APBADDR32)(CUIF_FEC_L_RX_REG_BASE + 0x000000BC + (n)*4))   //n is from 0 to 1
#define CUIF_FEC_L_RX_INIT_GAIN_ADDR_C0(n)                                      ((APBADDR32)(CUIF_FEC_L_RX_REG_BASE + 0x000000C4 + (n)*4))   //n is from 0 to 1
#define CUIF_FEC_L_RX_INIT_GAIN_ADDR_C1(n)                                      ((APBADDR32)(CUIF_FEC_L_RX_REG_BASE + 0x000000CC + (n)*4))   //n is from 0 to 1
#define CUIF_FEC_L_RX_CALIBRATION_PLAN_C_INIT_GAIN_RF                           ((APBADDR32)(CUIF_FEC_L_RX_REG_BASE + 0x000000D4))
#define CUIF_FEC_L_RX_CALIBRATION_PLAN_C_INI_DIG_GAIN_C0_A0                     ((APBADDR32)(CUIF_FEC_L_RX_REG_BASE + 0x000000D8))
#define CUIF_FEC_L_RX_CALIBRATION_PLAN_C_INI_DIG_GAIN_C0_A1                     ((APBADDR32)(CUIF_FEC_L_RX_REG_BASE + 0x000000DC))
#define CUIF_FEC_L_RX_CALIBRATION_PLAN_C_INI_DIG_GAIN_C1_A0                     ((APBADDR32)(CUIF_FEC_L_RX_REG_BASE + 0x000000E0))
#define CUIF_FEC_L_RX_CALIBRATION_PLAN_C_INI_DIG_GAIN_C1_A1                     ((APBADDR32)(CUIF_FEC_L_RX_REG_BASE + 0x000000E4))
#define CUIF_FEC_L_RX_DOUBLE_BUFF_IDX(n)                                        ((APBADDR32)(CUIF_FEC_L_RX_REG_BASE + 0x000000E8 + (n)*4))   //n is from 0 to 1
#define CUIF_FEC_L_RX_FEATURE_OPTION(n)                                         ((APBADDR32)(CUIF_FEC_L_RX_REG_BASE + 0x000000F0 + (n)*4))   //n is from 0 to 1
#define CUIF_FEC_L_RX_AGC_INFO(n)                                               ((APBADDR32)(CUIF_FEC_L_RX_REG_BASE + 0x000000F8 + (n)*4))   //n is from 0 to 1
#define CUIF_FEC_L_RX_DFE_INFO(n)                                               ((APBADDR32)(CUIF_FEC_L_RX_REG_BASE + 0x00000100 + (n)*4))   //n is from 0 to 1
#define CUIF_FEC_L_RX_ELNA_BPI_P0A0(n)                                          ((APBADDR32)(CUIF_FEC_L_RX_REG_BASE + 0x00000108 + (n)*4))   //n is from 0 to 1
#define CUIF_FEC_L_RX_ELNA_BPI_P0A1(n)                                          ((APBADDR32)(CUIF_FEC_L_RX_REG_BASE + 0x00000110 + (n)*4))   //n is from 0 to 1
#define CUIF_FEC_L_RX_ELNA_BPI_P1A0(n)                                          ((APBADDR32)(CUIF_FEC_L_RX_REG_BASE + 0x00000118 + (n)*4))   //n is from 0 to 1
#define CUIF_FEC_L_RX_ELNA_BPI_P1A1(n)                                          ((APBADDR32)(CUIF_FEC_L_RX_REG_BASE + 0x00000120 + (n)*4))   //n is from 0 to 1
#define CUIF_FEC_L_RX_ELNA_MIPI_ON_P0A0(n)                                      ((APBADDR32)(CUIF_FEC_L_RX_REG_BASE + 0x00000128 + (n)*4))   //n is from 0 to 1
#define CUIF_FEC_L_RX_ELNA_MIPI_BYPASS_P0A0(n)                                  ((APBADDR32)(CUIF_FEC_L_RX_REG_BASE + 0x00000130 + (n)*4))   //n is from 0 to 1
#define CUIF_FEC_L_RX_ELNA_MIPI_ON_P0A1(n)                                      ((APBADDR32)(CUIF_FEC_L_RX_REG_BASE + 0x00000138 + (n)*4))   //n is from 0 to 1
#define CUIF_FEC_L_RX_ELNA_MIPI_BYPASS_P0A1(n)                                  ((APBADDR32)(CUIF_FEC_L_RX_REG_BASE + 0x00000140 + (n)*4))   //n is from 0 to 1
#define CUIF_FEC_L_RX_ELNA_MIPI_ON_P1A0(n)                                      ((APBADDR32)(CUIF_FEC_L_RX_REG_BASE + 0x00000148 + (n)*4))   //n is from 0 to 1
#define CUIF_FEC_L_RX_ELNA_MIPI_BYPASS_P1A0(n)                                  ((APBADDR32)(CUIF_FEC_L_RX_REG_BASE + 0x00000150 + (n)*4))   //n is from 0 to 1
#define CUIF_FEC_L_RX_ELNA_MIPI_ON_P1A1(n)                                      ((APBADDR32)(CUIF_FEC_L_RX_REG_BASE + 0x00000158 + (n)*4))   //n is from 0 to 1
#define CUIF_FEC_L_RX_ELNA_MIPI_BYPASS_P1A1(n)                                  ((APBADDR32)(CUIF_FEC_L_RX_REG_BASE + 0x00000160 + (n)*4))   //n is from 0 to 1
#define CUIF_FEC_L_RX_INTER_CM_COFIG(n)                                         ((APBADDR32)(CUIF_FEC_L_RX_REG_BASE + 0x00000168 + (n)*4))   //n is from 0 to 1
#define CUIF_FEC_L_RX_INTER_CM_RF_ON_TIME_EARLIEST(n)                           ((APBADDR32)(CUIF_FEC_L_RX_REG_BASE + 0x00000170 + (n)*4))   //n is from 0 to 1
#define CUIF_FEC_L_RX_CELL_TYPE(n)                                              ((APBADDR32)(CUIF_FEC_L_RX_REG_BASE + 0x00000178 + (n)*4))   //n is from 0 to 1
#define CUIF_FEC_L_RX_INIT_GAIN_A0_FREQ(n)                                      ((APBADDR32)(CUIF_FEC_L_RX_REG_BASE + 0x00000180 + (n)*4))   //n is from 0 to 22
#define CUIF_FEC_L_RX_INIT_GAIN_A1_FREQ(n)                                      ((APBADDR32)(CUIF_FEC_L_RX_REG_BASE + 0x000001DC + (n)*4))   //n is from 0 to 22
#define CUIF_FEC_L_RX_MEAS_START_TYPE(n)                                        ((APBADDR32)(CUIF_FEC_L_RX_REG_BASE + 0x00000238 + (n)*4))   //n is from 0 to 3
#define CUIF_FEC_L_RX_REQ_SF_TYPE(n)                                            ((APBADDR32)(CUIF_FEC_L_RX_REG_BASE + 0x00000248 + (n)*4))   //n is from 0 to 3
#define CUIF_FEC_L_RX_NORMAL_SCENARIO_CONFIG(n)                                 ((APBADDR32)(CUIF_FEC_L_RX_REG_BASE + 0x00000258 + (n)*4))   //n is from 0 to 3
#define CUIF_FEC_L_RX_OBB_FLAG(n)                                               ((APBADDR32)(CUIF_FEC_L_RX_REG_BASE + 0x00000268 + (n)*4))   //n is from 0 to 3
#define CUIF_FEC_L_RX_TPD_RESULT(n)                                             ((APBADDR32)(CUIF_FEC_L_RX_REG_BASE + 0x00000278 + (n)*4))   //n is from 0 to 3
#define CUIF_FEC_L_RX_ELC_RB_NUMBER(n)                                          ((APBADDR32)(CUIF_FEC_L_RX_REG_BASE + 0x00000288 + (n)*4))   //n is from 0 to 3
#define CUIF_FEC_L_RX_ANT_PATH_CONFIG(n)                                        ((APBADDR32)(CUIF_FEC_L_RX_REG_BASE + 0x00000298 + (n)*4))   //n is from 0 to 3
#define CUIF_FEC_L_RX_PATHLOSS_TEMP_OFFSET(n)                                   ((APBADDR32)(CUIF_FEC_L_RX_REG_BASE + 0x000002A8 + (n)*4))   //n is from 0 to 3
#define CUIF_FEC_L_RX_FWS_SFBD_C0_A0(n)                                         ((APBADDR32)(CUIF_FEC_L_RX_REG_BASE + 0x000002B8 + (n)*4))   //n is from 0 to 3
#define CUIF_FEC_L_RX_FWS_SFBD_C0_A1(n)                                         ((APBADDR32)(CUIF_FEC_L_RX_REG_BASE + 0x000002C8 + (n)*4))   //n is from 0 to 3
#define CUIF_FEC_L_RX_FWS_SFBD_C1_A0(n)                                         ((APBADDR32)(CUIF_FEC_L_RX_REG_BASE + 0x000002D8 + (n)*4))   //n is from 0 to 3
#define CUIF_FEC_L_RX_FWS_SFBD_C1_A1(n)                                         ((APBADDR32)(CUIF_FEC_L_RX_REG_BASE + 0x000002E8 + (n)*4))   //n is from 0 to 3
#define CUIF_FEC_L_RX_CMIF_LOCK_UPDATE(n)                                       ((APBADDR32)(CUIF_FEC_L_RX_REG_BASE + 0x000002F8 + (n)*4))   //n is from 0 to 3
#define CUIF_FEC_L_RX_REPORT_VLD(n)                                             ((APBADDR32)(CUIF_FEC_L_RX_REG_BASE + 0x00000308 + (n)*4))   //n is from 0 to 1
#define CUIF_FEC_L_RX_RSSI_REPORT_C0_A0(n)                                      ((APBADDR32)(CUIF_FEC_L_RX_REG_BASE + 0x00000310 + (n)*4))   //n is from 0 to 1
#define CUIF_FEC_L_RX_RSSI_REPORT_C0_A1(n)                                      ((APBADDR32)(CUIF_FEC_L_RX_REG_BASE + 0x00000318 + (n)*4))   //n is from 0 to 1
#define CUIF_FEC_L_RX_RSSI_REPORT_C1_A0(n)                                      ((APBADDR32)(CUIF_FEC_L_RX_REG_BASE + 0x00000320 + (n)*4))   //n is from 0 to 1
#define CUIF_FEC_L_RX_RSSI_REPORT_C1_A1(n)                                      ((APBADDR32)(CUIF_FEC_L_RX_REG_BASE + 0x00000328 + (n)*4))   //n is from 0 to 1
#define CUIF_FEC_L_RX_REPORT_OB_P0_A0(n)                                        ((APBADDR32)(CUIF_FEC_L_RX_REG_BASE + 0x00000330 + (n)*4))   //n is from 0 to 1
#define CUIF_FEC_L_RX_REPORT_OB_P0_A1(n)                                        ((APBADDR32)(CUIF_FEC_L_RX_REG_BASE + 0x00000338 + (n)*4))   //n is from 0 to 1
#define CUIF_FEC_L_RX_REPORT_OB_P1_A0(n)                                        ((APBADDR32)(CUIF_FEC_L_RX_REG_BASE + 0x00000340 + (n)*4))   //n is from 0 to 1
#define CUIF_FEC_L_RX_REPORT_OB_P1_A1(n)                                        ((APBADDR32)(CUIF_FEC_L_RX_REG_BASE + 0x00000348 + (n)*4))   //n is from 0 to 1
#define CUIF_FEC_L_RX_ACID_REPORT_VLD                                           ((APBADDR32)(CUIF_FEC_L_RX_REG_BASE + 0x00000350))
#define CUIF_FEC_L_RX_ACID_WB_SF0_REPORT_A0                                     ((APBADDR32)(CUIF_FEC_L_RX_REG_BASE + 0x00000354))
#define CUIF_FEC_L_RX_ACID_WB_SF0_REPORT_A1                                     ((APBADDR32)(CUIF_FEC_L_RX_REG_BASE + 0x00000358))
#define CUIF_FEC_L_RX_ACID_WB_SF1_REPORT_A0                                     ((APBADDR32)(CUIF_FEC_L_RX_REG_BASE + 0x0000035C))
#define CUIF_FEC_L_RX_ACID_WB_SF1_REPORT_A1                                     ((APBADDR32)(CUIF_FEC_L_RX_REG_BASE + 0x00000360))
#define CUIF_FEC_L_RX_ACID_IB_REPORT_A0                                         ((APBADDR32)(CUIF_FEC_L_RX_REG_BASE + 0x00000364))
#define CUIF_FEC_L_RX_ACID_IB_REPORT_A1                                         ((APBADDR32)(CUIF_FEC_L_RX_REG_BASE + 0x00000368))
#define CUIF_FEC_L_RX_ACID_WB_POS_REPORT_A0                                     ((APBADDR32)(CUIF_FEC_L_RX_REG_BASE + 0x0000036C))
#define CUIF_FEC_L_RX_ACID_WB_POS_REPORT_A1                                     ((APBADDR32)(CUIF_FEC_L_RX_REG_BASE + 0x00000370))
#define CUIF_FEC_L_RX_ACID_WB_NEG_REPORT_A0                                     ((APBADDR32)(CUIF_FEC_L_RX_REG_BASE + 0x00000374))
#define CUIF_FEC_L_RX_ACID_WB_NEG_REPORT_A1                                     ((APBADDR32)(CUIF_FEC_L_RX_REG_BASE + 0x00000378))
#define CUIF_FEC_L_RX_ACID_WB_BYPASS_REPORT_A0                                  ((APBADDR32)(CUIF_FEC_L_RX_REG_BASE + 0x0000037C))
#define CUIF_FEC_L_RX_ACID_WB_BYPASS_REPORT_A1                                  ((APBADDR32)(CUIF_FEC_L_RX_REG_BASE + 0x00000380))
#define CUIF_FEC_L_RX_INIT_GAIN_FLAG_FOR_INNER_A0                               ((APBADDR32)(CUIF_FEC_L_RX_REG_BASE + 0x00000384))
#define CUIF_FEC_L_RX_INIT_GAIN_FLAG_FOR_INNER_A1                               ((APBADDR32)(CUIF_FEC_L_RX_REG_BASE + 0x00000388))
#define CUIF_FEC_L_RX_EM_REPORT_VLD                                             ((APBADDR32)(CUIF_FEC_L_RX_REG_BASE + 0x0000038C))
#define CUIF_FEC_L_RX_EM_RF_GAIN_ABSOLUTE_C0_A0                                 ((APBADDR32)(CUIF_FEC_L_RX_REG_BASE + 0x00000390))
#define CUIF_FEC_L_RX_EM_RF_GAIN_ABSOLUTE_C0_A1                                 ((APBADDR32)(CUIF_FEC_L_RX_REG_BASE + 0x00000394))
#define CUIF_FEC_L_RX_EM_RF_GAIN_ABSOLUTE_C1_A0                                 ((APBADDR32)(CUIF_FEC_L_RX_REG_BASE + 0x00000398))
#define CUIF_FEC_L_RX_EM_RF_GAIN_ABSOLUTE_C1_A1                                 ((APBADDR32)(CUIF_FEC_L_RX_REG_BASE + 0x0000039C))
#define CUIF_FEC_L_RX_CUIF_END                                                  ((APBADDR32)(CUIF_FEC_L_RX_REG_BASE + 0x00000DF8))





// ---------- PARAMETER_SETTING_CTRL bit-field ----------
#define FEC_LAGC_CUIF_P_PARAMETER_SETTING_CTRL_Fixed_gain_enable                          (0)
#define FEC_LAGC_CUIF_L_PARAMETER_SETTING_CTRL_Fixed_gain_enable                          (1)
#define FEC_LAGC_CUIF_M_PARAMETER_SETTING_CTRL_Fixed_gain_enable                          (0x00000001)

// ---------- PARAMETER_SETTING_00 bit-field ----------
#define FEC_LAGC_CUIF_P_PARAMETER_SETTING_00_Total_exp_A0_C0                              (24)
#define FEC_LAGC_CUIF_L_PARAMETER_SETTING_00_Total_exp_A0_C0                              (8)
#define FEC_LAGC_CUIF_M_PARAMETER_SETTING_00_Total_exp_A0_C0                              (0xFF000000)
#define FEC_LAGC_CUIF_P_PARAMETER_SETTING_00_Fixed_total_exp_enable_A0_C0                 (16)
#define FEC_LAGC_CUIF_L_PARAMETER_SETTING_00_Fixed_total_exp_enable_A0_C0                 (1)
#define FEC_LAGC_CUIF_M_PARAMETER_SETTING_00_Fixed_total_exp_enable_A0_C0                 (0x00010000)
#define FEC_LAGC_CUIF_P_PARAMETER_SETTING_00_PGA_gain_index_A0_P0                         (4)
#define FEC_LAGC_CUIF_L_PARAMETER_SETTING_00_PGA_gain_index_A0_P0                         (4)
#define FEC_LAGC_CUIF_M_PARAMETER_SETTING_00_PGA_gain_index_A0_P0                         (0x000000F0)
#define FEC_LAGC_CUIF_P_PARAMETER_SETTING_00_LNA_gain_index_A0_P0                         (1)
#define FEC_LAGC_CUIF_L_PARAMETER_SETTING_00_LNA_gain_index_A0_P0                         (3)
#define FEC_LAGC_CUIF_M_PARAMETER_SETTING_00_LNA_gain_index_A0_P0                         (0x0000000E)
#define FEC_LAGC_CUIF_P_PARAMETER_SETTING_00_Fixed_RF_gain_enable_A0_P0                   (0)
#define FEC_LAGC_CUIF_L_PARAMETER_SETTING_00_Fixed_RF_gain_enable_A0_P0                   (1)
#define FEC_LAGC_CUIF_M_PARAMETER_SETTING_00_Fixed_RF_gain_enable_A0_P0                   (0x00000001)

// ---------- PARAMETER_SETTING_01 bit-field ----------
#define FEC_LAGC_CUIF_P_PARAMETER_SETTING_01_Total_exp_A0_C1                              (24)
#define FEC_LAGC_CUIF_L_PARAMETER_SETTING_01_Total_exp_A0_C1                              (8)
#define FEC_LAGC_CUIF_M_PARAMETER_SETTING_01_Total_exp_A0_C1                              (0xFF000000)
#define FEC_LAGC_CUIF_P_PARAMETER_SETTING_01_Fixed_total_exp_enable_A0_C1                 (16)
#define FEC_LAGC_CUIF_L_PARAMETER_SETTING_01_Fixed_total_exp_enable_A0_C1                 (1)
#define FEC_LAGC_CUIF_M_PARAMETER_SETTING_01_Fixed_total_exp_enable_A0_C1                 (0x00010000)
#define FEC_LAGC_CUIF_P_PARAMETER_SETTING_01_PGA_gain_index_A0_P1                         (4)
#define FEC_LAGC_CUIF_L_PARAMETER_SETTING_01_PGA_gain_index_A0_P1                         (4)
#define FEC_LAGC_CUIF_M_PARAMETER_SETTING_01_PGA_gain_index_A0_P1                         (0x000000F0)
#define FEC_LAGC_CUIF_P_PARAMETER_SETTING_01_LNA_gain_index_A0_P1                         (1)
#define FEC_LAGC_CUIF_L_PARAMETER_SETTING_01_LNA_gain_index_A0_P1                         (3)
#define FEC_LAGC_CUIF_M_PARAMETER_SETTING_01_LNA_gain_index_A0_P1                         (0x0000000E)
#define FEC_LAGC_CUIF_P_PARAMETER_SETTING_01_Fixed_RF_gain_enable_A0_P1                   (0)
#define FEC_LAGC_CUIF_L_PARAMETER_SETTING_01_Fixed_RF_gain_enable_A0_P1                   (1)
#define FEC_LAGC_CUIF_M_PARAMETER_SETTING_01_Fixed_RF_gain_enable_A0_P1                   (0x00000001)

// ---------- PARAMETER_SETTING_02 bit-field ----------
#define FEC_LAGC_CUIF_P_PARAMETER_SETTING_02_Total_exp_A1_C0                              (24)
#define FEC_LAGC_CUIF_L_PARAMETER_SETTING_02_Total_exp_A1_C0                              (8)
#define FEC_LAGC_CUIF_M_PARAMETER_SETTING_02_Total_exp_A1_C0                              (0xFF000000)
#define FEC_LAGC_CUIF_P_PARAMETER_SETTING_02_Fixed_total_exp_enable_A1_C0                 (16)
#define FEC_LAGC_CUIF_L_PARAMETER_SETTING_02_Fixed_total_exp_enable_A1_C0                 (1)
#define FEC_LAGC_CUIF_M_PARAMETER_SETTING_02_Fixed_total_exp_enable_A1_C0                 (0x00010000)
#define FEC_LAGC_CUIF_P_PARAMETER_SETTING_02_PGA_gain_index_A1_P0                         (4)
#define FEC_LAGC_CUIF_L_PARAMETER_SETTING_02_PGA_gain_index_A1_P0                         (4)
#define FEC_LAGC_CUIF_M_PARAMETER_SETTING_02_PGA_gain_index_A1_P0                         (0x000000F0)
#define FEC_LAGC_CUIF_P_PARAMETER_SETTING_02_LNA_gain_index_A1_P0                         (1)
#define FEC_LAGC_CUIF_L_PARAMETER_SETTING_02_LNA_gain_index_A1_P0                         (3)
#define FEC_LAGC_CUIF_M_PARAMETER_SETTING_02_LNA_gain_index_A1_P0                         (0x0000000E)
#define FEC_LAGC_CUIF_P_PARAMETER_SETTING_02_Fixed_RF_gain_enable_A1_P0                   (0)
#define FEC_LAGC_CUIF_L_PARAMETER_SETTING_02_Fixed_RF_gain_enable_A1_P0                   (1)
#define FEC_LAGC_CUIF_M_PARAMETER_SETTING_02_Fixed_RF_gain_enable_A1_P0                   (0x00000001)

// ---------- PARAMETER_SETTING_03 bit-field ----------
#define FEC_LAGC_CUIF_P_PARAMETER_SETTING_03_Total_exp_A1_C1                              (24)
#define FEC_LAGC_CUIF_L_PARAMETER_SETTING_03_Total_exp_A1_C1                              (8)
#define FEC_LAGC_CUIF_M_PARAMETER_SETTING_03_Total_exp_A1_C1                              (0xFF000000)
#define FEC_LAGC_CUIF_P_PARAMETER_SETTING_03_Fixed_total_exp_enable_A1_C1                 (16)
#define FEC_LAGC_CUIF_L_PARAMETER_SETTING_03_Fixed_total_exp_enable_A1_C1                 (1)
#define FEC_LAGC_CUIF_M_PARAMETER_SETTING_03_Fixed_total_exp_enable_A1_C1                 (0x00010000)
#define FEC_LAGC_CUIF_P_PARAMETER_SETTING_03_PGA_gain_index_A1_P1                         (4)
#define FEC_LAGC_CUIF_L_PARAMETER_SETTING_03_PGA_gain_index_A1_P1                         (4)
#define FEC_LAGC_CUIF_M_PARAMETER_SETTING_03_PGA_gain_index_A1_P1                         (0x000000F0)
#define FEC_LAGC_CUIF_P_PARAMETER_SETTING_03_LNA_gain_index_A1_P1                         (1)
#define FEC_LAGC_CUIF_L_PARAMETER_SETTING_03_LNA_gain_index_A1_P1                         (3)
#define FEC_LAGC_CUIF_M_PARAMETER_SETTING_03_LNA_gain_index_A1_P1                         (0x0000000E)
#define FEC_LAGC_CUIF_P_PARAMETER_SETTING_03_Fixed_RF_gain_enable_A1_P1                   (0)
#define FEC_LAGC_CUIF_L_PARAMETER_SETTING_03_Fixed_RF_gain_enable_A1_P1                   (1)
#define FEC_LAGC_CUIF_M_PARAMETER_SETTING_03_Fixed_RF_gain_enable_A1_P1                   (0x00000001)

// ---------- TEST_MODE_POWER_WB_P0 bit-field ----------
#define FEC_LAGC_CUIF_P_TEST_MODE_POWER_WB_P0_Pwb_P0_A1                                   (16)
#define FEC_LAGC_CUIF_L_TEST_MODE_POWER_WB_P0_Pwb_P0_A1                                   (11)
#define FEC_LAGC_CUIF_M_TEST_MODE_POWER_WB_P0_Pwb_P0_A1                                   (0x07FF0000)
#define FEC_LAGC_CUIF_P_TEST_MODE_POWER_WB_P0_Pwb_P0_A0                                   (0)
#define FEC_LAGC_CUIF_L_TEST_MODE_POWER_WB_P0_Pwb_P0_A0                                   (11)
#define FEC_LAGC_CUIF_M_TEST_MODE_POWER_WB_P0_Pwb_P0_A0                                   (0x000007FF)

// ---------- TEST_MODE_POWER_WB_P1 bit-field ----------
#define FEC_LAGC_CUIF_P_TEST_MODE_POWER_WB_P1_Pwb_P1_A1                                   (16)
#define FEC_LAGC_CUIF_L_TEST_MODE_POWER_WB_P1_Pwb_P1_A1                                   (11)
#define FEC_LAGC_CUIF_M_TEST_MODE_POWER_WB_P1_Pwb_P1_A1                                   (0x07FF0000)
#define FEC_LAGC_CUIF_P_TEST_MODE_POWER_WB_P1_Pwb_P1_A0                                   (0)
#define FEC_LAGC_CUIF_L_TEST_MODE_POWER_WB_P1_Pwb_P1_A0                                   (11)
#define FEC_LAGC_CUIF_M_TEST_MODE_POWER_WB_P1_Pwb_P1_A0                                   (0x000007FF)

// ---------- TEST_MODE_POWER_IB_C0 bit-field ----------
#define FEC_LAGC_CUIF_P_TEST_MODE_POWER_IB_C0_Pib_C0_A1                                   (16)
#define FEC_LAGC_CUIF_L_TEST_MODE_POWER_IB_C0_Pib_C0_A1                                   (11)
#define FEC_LAGC_CUIF_M_TEST_MODE_POWER_IB_C0_Pib_C0_A1                                   (0x07FF0000)
#define FEC_LAGC_CUIF_P_TEST_MODE_POWER_IB_C0_Pib_C0_A0                                   (0)
#define FEC_LAGC_CUIF_L_TEST_MODE_POWER_IB_C0_Pib_C0_A0                                   (11)
#define FEC_LAGC_CUIF_M_TEST_MODE_POWER_IB_C0_Pib_C0_A0                                   (0x000007FF)

// ---------- TEST_MODE_POWER_IB_C1 bit-field ----------
#define FEC_LAGC_CUIF_P_TEST_MODE_POWER_IB_C1_Pib_C1_A1                                   (16)
#define FEC_LAGC_CUIF_L_TEST_MODE_POWER_IB_C1_Pib_C1_A1                                   (11)
#define FEC_LAGC_CUIF_M_TEST_MODE_POWER_IB_C1_Pib_C1_A1                                   (0x07FF0000)
#define FEC_LAGC_CUIF_P_TEST_MODE_POWER_IB_C1_Pib_C1_A0                                   (0)
#define FEC_LAGC_CUIF_L_TEST_MODE_POWER_IB_C1_Pib_C1_A0                                   (11)
#define FEC_LAGC_CUIF_M_TEST_MODE_POWER_IB_C1_Pib_C1_A0                                   (0x000007FF)

// ---------- TEST_MODE_POWER_RS_C0 bit-field ----------
#define FEC_LAGC_CUIF_P_TEST_MODE_POWER_RS_C0_Prs_C0_A1                                   (16)
#define FEC_LAGC_CUIF_L_TEST_MODE_POWER_RS_C0_Prs_C0_A1                                   (11)
#define FEC_LAGC_CUIF_M_TEST_MODE_POWER_RS_C0_Prs_C0_A1                                   (0x07FF0000)
#define FEC_LAGC_CUIF_P_TEST_MODE_POWER_RS_C0_Prs_C0_A0                                   (0)
#define FEC_LAGC_CUIF_L_TEST_MODE_POWER_RS_C0_Prs_C0_A0                                   (11)
#define FEC_LAGC_CUIF_M_TEST_MODE_POWER_RS_C0_Prs_C0_A0                                   (0x000007FF)

// ---------- TEST_MODE_POWER_RS_C1 bit-field ----------
#define FEC_LAGC_CUIF_P_TEST_MODE_POWER_RS_C1_Prs_C1_A1                                   (16)
#define FEC_LAGC_CUIF_L_TEST_MODE_POWER_RS_C1_Prs_C1_A1                                   (11)
#define FEC_LAGC_CUIF_M_TEST_MODE_POWER_RS_C1_Prs_C1_A1                                   (0x07FF0000)
#define FEC_LAGC_CUIF_P_TEST_MODE_POWER_RS_C1_Prs_C1_A0                                   (0)
#define FEC_LAGC_CUIF_L_TEST_MODE_POWER_RS_C1_Prs_C1_A0                                   (11)
#define FEC_LAGC_CUIF_M_TEST_MODE_POWER_RS_C1_Prs_C1_A0                                   (0x000007FF)

// ---------- TEST_MODE_POWER_CS_C0 bit-field ----------
#define FEC_LAGC_CUIF_P_TEST_MODE_POWER_CS_C0_Pcs_C0_A1                                   (16)
#define FEC_LAGC_CUIF_L_TEST_MODE_POWER_CS_C0_Pcs_C0_A1                                   (11)
#define FEC_LAGC_CUIF_M_TEST_MODE_POWER_CS_C0_Pcs_C0_A1                                   (0x07FF0000)
#define FEC_LAGC_CUIF_P_TEST_MODE_POWER_CS_C0_Pcs_C0_A0                                   (0)
#define FEC_LAGC_CUIF_L_TEST_MODE_POWER_CS_C0_Pcs_C0_A0                                   (11)
#define FEC_LAGC_CUIF_M_TEST_MODE_POWER_CS_C0_Pcs_C0_A0                                   (0x000007FF)

// ---------- TEST_MODE_POWER_CS_C1 bit-field ----------
#define FEC_LAGC_CUIF_P_TEST_MODE_POWER_CS_C1_Pcs_C1_A1                                   (16)
#define FEC_LAGC_CUIF_L_TEST_MODE_POWER_CS_C1_Pcs_C1_A1                                   (11)
#define FEC_LAGC_CUIF_M_TEST_MODE_POWER_CS_C1_Pcs_C1_A1                                   (0x07FF0000)
#define FEC_LAGC_CUIF_P_TEST_MODE_POWER_CS_C1_Pcs_C1_A0                                   (0)
#define FEC_LAGC_CUIF_L_TEST_MODE_POWER_CS_C1_Pcs_C1_A0                                   (11)
#define FEC_LAGC_CUIF_M_TEST_MODE_POWER_CS_C1_Pcs_C1_A0                                   (0x000007FF)

// ---------- TEST_MODE_RF_GAIN_P0_A0 bit-field ----------
#define FEC_LAGC_CUIF_P_TEST_MODE_RF_GAIN_P0_A0_GAIN_IDX                                  (16)
#define FEC_LAGC_CUIF_L_TEST_MODE_RF_GAIN_P0_A0_GAIN_IDX                                  (11)
#define FEC_LAGC_CUIF_M_TEST_MODE_RF_GAIN_P0_A0_GAIN_IDX                                  (0x07FF0000)
#define FEC_LAGC_CUIF_P_TEST_MODE_RF_GAIN_P0_A0_CW_DATA                                   (0)
#define FEC_LAGC_CUIF_L_TEST_MODE_RF_GAIN_P0_A0_CW_DATA                                   (11)
#define FEC_LAGC_CUIF_M_TEST_MODE_RF_GAIN_P0_A0_CW_DATA                                   (0x000007FF)

// ---------- TEST_MODE_RF_GAIN_P0_A1 bit-field ----------
#define FEC_LAGC_CUIF_P_TEST_MODE_RF_GAIN_P0_A1_GAIN_IDX                                  (16)
#define FEC_LAGC_CUIF_L_TEST_MODE_RF_GAIN_P0_A1_GAIN_IDX                                  (11)
#define FEC_LAGC_CUIF_M_TEST_MODE_RF_GAIN_P0_A1_GAIN_IDX                                  (0x07FF0000)
#define FEC_LAGC_CUIF_P_TEST_MODE_RF_GAIN_P0_A1_CW_DATA                                   (0)
#define FEC_LAGC_CUIF_L_TEST_MODE_RF_GAIN_P0_A1_CW_DATA                                   (11)
#define FEC_LAGC_CUIF_M_TEST_MODE_RF_GAIN_P0_A1_CW_DATA                                   (0x000007FF)

// ---------- TEST_MODE_RF_GAIN_P1_A0 bit-field ----------
#define FEC_LAGC_CUIF_P_TEST_MODE_RF_GAIN_P1_A0_GAIN_IDX                                  (16)
#define FEC_LAGC_CUIF_L_TEST_MODE_RF_GAIN_P1_A0_GAIN_IDX                                  (11)
#define FEC_LAGC_CUIF_M_TEST_MODE_RF_GAIN_P1_A0_GAIN_IDX                                  (0x07FF0000)
#define FEC_LAGC_CUIF_P_TEST_MODE_RF_GAIN_P1_A0_CW_DATA                                   (0)
#define FEC_LAGC_CUIF_L_TEST_MODE_RF_GAIN_P1_A0_CW_DATA                                   (11)
#define FEC_LAGC_CUIF_M_TEST_MODE_RF_GAIN_P1_A0_CW_DATA                                   (0x000007FF)

// ---------- TEST_MODE_RF_GAIN_P1_A1 bit-field ----------
#define FEC_LAGC_CUIF_P_TEST_MODE_RF_GAIN_P1_A1_GAIN_IDX                                  (16)
#define FEC_LAGC_CUIF_L_TEST_MODE_RF_GAIN_P1_A1_GAIN_IDX                                  (11)
#define FEC_LAGC_CUIF_M_TEST_MODE_RF_GAIN_P1_A1_GAIN_IDX                                  (0x07FF0000)
#define FEC_LAGC_CUIF_P_TEST_MODE_RF_GAIN_P1_A1_CW_DATA                                   (0)
#define FEC_LAGC_CUIF_L_TEST_MODE_RF_GAIN_P1_A1_CW_DATA                                   (11)
#define FEC_LAGC_CUIF_M_TEST_MODE_RF_GAIN_P1_A1_CW_DATA                                   (0x000007FF)

// ---------- TEST_MODE_DAGC_C0 bit-field ----------
#define FEC_LAGC_CUIF_P_TEST_MODE_DAGC_C0_DAGC_dB2_C0_A1                                  (16)
#define FEC_LAGC_CUIF_L_TEST_MODE_DAGC_C0_DAGC_dB2_C0_A1                                  (11)
#define FEC_LAGC_CUIF_M_TEST_MODE_DAGC_C0_DAGC_dB2_C0_A1                                  (0x07FF0000)
#define FEC_LAGC_CUIF_P_TEST_MODE_DAGC_C0_DAGC_dB2_C0_A0                                  (0)
#define FEC_LAGC_CUIF_L_TEST_MODE_DAGC_C0_DAGC_dB2_C0_A0                                  (11)
#define FEC_LAGC_CUIF_M_TEST_MODE_DAGC_C0_DAGC_dB2_C0_A0                                  (0x000007FF)

// ---------- TEST_MODE_DAGC_C1 bit-field ----------
#define FEC_LAGC_CUIF_P_TEST_MODE_DAGC_C1_DAGC_dB2_C1_A1                                  (16)
#define FEC_LAGC_CUIF_L_TEST_MODE_DAGC_C1_DAGC_dB2_C1_A1                                  (11)
#define FEC_LAGC_CUIF_M_TEST_MODE_DAGC_C1_DAGC_dB2_C1_A1                                  (0x07FF0000)
#define FEC_LAGC_CUIF_P_TEST_MODE_DAGC_C1_DAGC_dB2_C1_A0                                  (0)
#define FEC_LAGC_CUIF_L_TEST_MODE_DAGC_C1_DAGC_dB2_C1_A0                                  (11)
#define FEC_LAGC_CUIF_M_TEST_MODE_DAGC_C1_DAGC_dB2_C1_A0                                  (0x000007FF)

// ---------- TEST_MODE_AGC_EXP bit-field ----------
#define FEC_LAGC_CUIF_P_TEST_MODE_AGC_EXP_EXP_C1_A1                                       (24)
#define FEC_LAGC_CUIF_L_TEST_MODE_AGC_EXP_EXP_C1_A1                                       (5)
#define FEC_LAGC_CUIF_M_TEST_MODE_AGC_EXP_EXP_C1_A1                                       (0x1F000000)
#define FEC_LAGC_CUIF_P_TEST_MODE_AGC_EXP_EXP_C1_A0                                       (16)
#define FEC_LAGC_CUIF_L_TEST_MODE_AGC_EXP_EXP_C1_A0                                       (5)
#define FEC_LAGC_CUIF_M_TEST_MODE_AGC_EXP_EXP_C1_A0                                       (0x001F0000)
#define FEC_LAGC_CUIF_P_TEST_MODE_AGC_EXP_EXP_C0_A1                                       (8)
#define FEC_LAGC_CUIF_L_TEST_MODE_AGC_EXP_EXP_C0_A1                                       (5)
#define FEC_LAGC_CUIF_M_TEST_MODE_AGC_EXP_EXP_C0_A1                                       (0x00001F00)
#define FEC_LAGC_CUIF_P_TEST_MODE_AGC_EXP_EXP_C0_A0                                       (0)
#define FEC_LAGC_CUIF_L_TEST_MODE_AGC_EXP_EXP_C0_A0                                       (5)
#define FEC_LAGC_CUIF_M_TEST_MODE_AGC_EXP_EXP_C0_A0                                       (0x0000001F)

// ---------- TEST_MODE_RF_DC_P0 bit-field ----------
#define FEC_LAGC_CUIF_P_TEST_MODE_RF_DC_P0_CW_DATA_P0_A1                                  (16)
#define FEC_LAGC_CUIF_L_TEST_MODE_RF_DC_P0_CW_DATA_P0_A1                                  (15)
#define FEC_LAGC_CUIF_M_TEST_MODE_RF_DC_P0_CW_DATA_P0_A1                                  (0x7FFF0000)
#define FEC_LAGC_CUIF_P_TEST_MODE_RF_DC_P0_CW_DATA_P0_A0                                  (0)
#define FEC_LAGC_CUIF_L_TEST_MODE_RF_DC_P0_CW_DATA_P0_A0                                  (15)
#define FEC_LAGC_CUIF_M_TEST_MODE_RF_DC_P0_CW_DATA_P0_A0                                  (0x00007FFF)

// ---------- TEST_MODE_RF_DC_P1 bit-field ----------
#define FEC_LAGC_CUIF_P_TEST_MODE_RF_DC_P1_CW_DATA_P1_A1                                  (16)
#define FEC_LAGC_CUIF_L_TEST_MODE_RF_DC_P1_CW_DATA_P1_A1                                  (15)
#define FEC_LAGC_CUIF_M_TEST_MODE_RF_DC_P1_CW_DATA_P1_A1                                  (0x7FFF0000)
#define FEC_LAGC_CUIF_P_TEST_MODE_RF_DC_P1_CW_DATA_P1_A0                                  (0)
#define FEC_LAGC_CUIF_L_TEST_MODE_RF_DC_P1_CW_DATA_P1_A0                                  (15)
#define FEC_LAGC_CUIF_M_TEST_MODE_RF_DC_P1_CW_DATA_P1_A0                                  (0x00007FFF)

// ---------- TEST_MODE_DIG_DC_P0_A0 bit-field ----------
#define FEC_LAGC_CUIF_P_TEST_MODE_DIG_DC_P0_A0_DIG_DC_I_P0_A0                             (16)
#define FEC_LAGC_CUIF_L_TEST_MODE_DIG_DC_P0_A0_DIG_DC_I_P0_A0                             (16)
#define FEC_LAGC_CUIF_M_TEST_MODE_DIG_DC_P0_A0_DIG_DC_I_P0_A0                             (0xFFFF0000)
#define FEC_LAGC_CUIF_P_TEST_MODE_DIG_DC_P0_A0_DIG_DC_Q_P0_A0                             (0)
#define FEC_LAGC_CUIF_L_TEST_MODE_DIG_DC_P0_A0_DIG_DC_Q_P0_A0                             (16)
#define FEC_LAGC_CUIF_M_TEST_MODE_DIG_DC_P0_A0_DIG_DC_Q_P0_A0                             (0x0000FFFF)

// ---------- TEST_MODE_DIG_DC_P0_A1 bit-field ----------
#define FEC_LAGC_CUIF_P_TEST_MODE_DIG_DC_P0_A1_DIG_DC_I_P0_A1                             (16)
#define FEC_LAGC_CUIF_L_TEST_MODE_DIG_DC_P0_A1_DIG_DC_I_P0_A1                             (16)
#define FEC_LAGC_CUIF_M_TEST_MODE_DIG_DC_P0_A1_DIG_DC_I_P0_A1                             (0xFFFF0000)
#define FEC_LAGC_CUIF_P_TEST_MODE_DIG_DC_P0_A1_DIG_DC_Q_P0_A1                             (0)
#define FEC_LAGC_CUIF_L_TEST_MODE_DIG_DC_P0_A1_DIG_DC_Q_P0_A1                             (16)
#define FEC_LAGC_CUIF_M_TEST_MODE_DIG_DC_P0_A1_DIG_DC_Q_P0_A1                             (0x0000FFFF)

// ---------- TEST_MODE_DIG_DC_P1_A0 bit-field ----------
#define FEC_LAGC_CUIF_P_TEST_MODE_DIG_DC_P1_A0_DIG_DC_I_P1_A0                             (16)
#define FEC_LAGC_CUIF_L_TEST_MODE_DIG_DC_P1_A0_DIG_DC_I_P1_A0                             (16)
#define FEC_LAGC_CUIF_M_TEST_MODE_DIG_DC_P1_A0_DIG_DC_I_P1_A0                             (0xFFFF0000)
#define FEC_LAGC_CUIF_P_TEST_MODE_DIG_DC_P1_A0_DIG_DC_Q_P1_A0                             (0)
#define FEC_LAGC_CUIF_L_TEST_MODE_DIG_DC_P1_A0_DIG_DC_Q_P1_A0                             (16)
#define FEC_LAGC_CUIF_M_TEST_MODE_DIG_DC_P1_A0_DIG_DC_Q_P1_A0                             (0x0000FFFF)

// ---------- TEST_MODE_DIG_DC_P1_A1 bit-field ----------
#define FEC_LAGC_CUIF_P_TEST_MODE_DIG_DC_P1_A1_DIG_DC_I_P1_A1                             (16)
#define FEC_LAGC_CUIF_L_TEST_MODE_DIG_DC_P1_A1_DIG_DC_I_P1_A1                             (16)
#define FEC_LAGC_CUIF_M_TEST_MODE_DIG_DC_P1_A1_DIG_DC_I_P1_A1                             (0xFFFF0000)
#define FEC_LAGC_CUIF_P_TEST_MODE_DIG_DC_P1_A1_DIG_DC_Q_P1_A1                             (0)
#define FEC_LAGC_CUIF_L_TEST_MODE_DIG_DC_P1_A1_DIG_DC_Q_P1_A1                             (16)
#define FEC_LAGC_CUIF_M_TEST_MODE_DIG_DC_P1_A1_DIG_DC_Q_P1_A1                             (0x0000FFFF)

// ---------- TEST_MODE_POWER_WB_SETPT bit-field ----------
#define FEC_LAGC_CUIF_P_TEST_MODE_POWER_WB_SETPT_Pwb_setpt_P1                             (16)
#define FEC_LAGC_CUIF_L_TEST_MODE_POWER_WB_SETPT_Pwb_setpt_P1                             (11)
#define FEC_LAGC_CUIF_M_TEST_MODE_POWER_WB_SETPT_Pwb_setpt_P1                             (0x07FF0000)
#define FEC_LAGC_CUIF_P_TEST_MODE_POWER_WB_SETPT_Pwb_setpt_P0                             (0)
#define FEC_LAGC_CUIF_L_TEST_MODE_POWER_WB_SETPT_Pwb_setpt_P0                             (11)
#define FEC_LAGC_CUIF_M_TEST_MODE_POWER_WB_SETPT_Pwb_setpt_P0                             (0x000007FF)

// ---------- TEST_MODE_POWER_IB_SETPT_HI bit-field ----------
#define FEC_LAGC_CUIF_P_TEST_MODE_POWER_IB_SETPT_HI_Pib_setpt_hi_P1                       (16)
#define FEC_LAGC_CUIF_L_TEST_MODE_POWER_IB_SETPT_HI_Pib_setpt_hi_P1                       (11)
#define FEC_LAGC_CUIF_M_TEST_MODE_POWER_IB_SETPT_HI_Pib_setpt_hi_P1                       (0x07FF0000)
#define FEC_LAGC_CUIF_P_TEST_MODE_POWER_IB_SETPT_HI_Pib_setpt_hi_P0                       (0)
#define FEC_LAGC_CUIF_L_TEST_MODE_POWER_IB_SETPT_HI_Pib_setpt_hi_P0                       (11)
#define FEC_LAGC_CUIF_M_TEST_MODE_POWER_IB_SETPT_HI_Pib_setpt_hi_P0                       (0x000007FF)

// ---------- TEST_MODE_POWER_IB_SETPT_LO bit-field ----------
#define FEC_LAGC_CUIF_P_TEST_MODE_POWER_IB_SETPT_LO_Pib_setpt_lo_P1                       (16)
#define FEC_LAGC_CUIF_L_TEST_MODE_POWER_IB_SETPT_LO_Pib_setpt_lo_P1                       (11)
#define FEC_LAGC_CUIF_M_TEST_MODE_POWER_IB_SETPT_LO_Pib_setpt_lo_P1                       (0x07FF0000)
#define FEC_LAGC_CUIF_P_TEST_MODE_POWER_IB_SETPT_LO_Pib_setpt_lo_P0                       (0)
#define FEC_LAGC_CUIF_L_TEST_MODE_POWER_IB_SETPT_LO_Pib_setpt_lo_P0                       (11)
#define FEC_LAGC_CUIF_M_TEST_MODE_POWER_IB_SETPT_LO_Pib_setpt_lo_P0                       (0x000007FF)

// ---------- TEST_MODE_POWER_IB_SETPT_MAX bit-field ----------
#define FEC_LAGC_CUIF_P_TEST_MODE_POWER_IB_SETPT_MAX_Pib_setpt_max_P1                     (16)
#define FEC_LAGC_CUIF_L_TEST_MODE_POWER_IB_SETPT_MAX_Pib_setpt_max_P1                     (11)
#define FEC_LAGC_CUIF_M_TEST_MODE_POWER_IB_SETPT_MAX_Pib_setpt_max_P1                     (0x07FF0000)
#define FEC_LAGC_CUIF_P_TEST_MODE_POWER_IB_SETPT_MAX_Pib_setpt_max_P0                     (0)
#define FEC_LAGC_CUIF_L_TEST_MODE_POWER_IB_SETPT_MAX_Pib_setpt_max_P0                     (11)
#define FEC_LAGC_CUIF_M_TEST_MODE_POWER_IB_SETPT_MAX_Pib_setpt_max_P0                     (0x000007FF)

// ---------- TEST_MODE_POWER_RSSI_C0 bit-field ----------
#define FEC_LAGC_CUIF_P_TEST_MODE_POWER_RSSI_C0_RSSI_C0_A1                                (16)
#define FEC_LAGC_CUIF_L_TEST_MODE_POWER_RSSI_C0_RSSI_C0_A1                                (16)
#define FEC_LAGC_CUIF_M_TEST_MODE_POWER_RSSI_C0_RSSI_C0_A1                                (0xFFFF0000)
#define FEC_LAGC_CUIF_P_TEST_MODE_POWER_RSSI_C0_RSSI_C0_A0                                (0)
#define FEC_LAGC_CUIF_L_TEST_MODE_POWER_RSSI_C0_RSSI_C0_A0                                (16)
#define FEC_LAGC_CUIF_M_TEST_MODE_POWER_RSSI_C0_RSSI_C0_A0                                (0x0000FFFF)

// ---------- TEST_MODE_POWER_RSSI_C1 bit-field ----------
#define FEC_LAGC_CUIF_P_TEST_MODE_POWER_RSSI_C1_RSSI_C1_A1                                (16)
#define FEC_LAGC_CUIF_L_TEST_MODE_POWER_RSSI_C1_RSSI_C1_A1                                (16)
#define FEC_LAGC_CUIF_M_TEST_MODE_POWER_RSSI_C1_RSSI_C1_A1                                (0xFFFF0000)
#define FEC_LAGC_CUIF_P_TEST_MODE_POWER_RSSI_C1_RSSI_C1_A0                                (0)
#define FEC_LAGC_CUIF_L_TEST_MODE_POWER_RSSI_C1_RSSI_C1_A0                                (16)
#define FEC_LAGC_CUIF_M_TEST_MODE_POWER_RSSI_C1_RSSI_C1_A0                                (0x0000FFFF)

// ---------- CAL_RXDATA_VALID_GENERAL bit-field ----------
#define FEC_LAGC_CUIF_P_CAL_RXDATA_VALID_GENERAL_GAIN_TBL_VALID_C1_A1                     (9)
#define FEC_LAGC_CUIF_L_CAL_RXDATA_VALID_GENERAL_GAIN_TBL_VALID_C1_A1                     (1)
#define FEC_LAGC_CUIF_M_CAL_RXDATA_VALID_GENERAL_GAIN_TBL_VALID_C1_A1                     (0x00000200)
#define FEC_LAGC_CUIF_P_CAL_RXDATA_VALID_GENERAL_GAIN_TBL_VALID_C1_A0                     (8)
#define FEC_LAGC_CUIF_L_CAL_RXDATA_VALID_GENERAL_GAIN_TBL_VALID_C1_A0                     (1)
#define FEC_LAGC_CUIF_M_CAL_RXDATA_VALID_GENERAL_GAIN_TBL_VALID_C1_A0                     (0x00000100)
#define FEC_LAGC_CUIF_P_CAL_RXDATA_VALID_GENERAL_GAIN_TBL_VALID_C0_A1                     (7)
#define FEC_LAGC_CUIF_L_CAL_RXDATA_VALID_GENERAL_GAIN_TBL_VALID_C0_A1                     (1)
#define FEC_LAGC_CUIF_M_CAL_RXDATA_VALID_GENERAL_GAIN_TBL_VALID_C0_A1                     (0x00000080)
#define FEC_LAGC_CUIF_P_CAL_RXDATA_VALID_GENERAL_GAIN_TBL_VALID_C0_A0                     (6)
#define FEC_LAGC_CUIF_L_CAL_RXDATA_VALID_GENERAL_GAIN_TBL_VALID_C0_A0                     (1)
#define FEC_LAGC_CUIF_M_CAL_RXDATA_VALID_GENERAL_GAIN_TBL_VALID_C0_A0                     (0x00000040)
#define FEC_LAGC_CUIF_P_CAL_RXDATA_VALID_GENERAL_PL_TEMP_VALID_C1                         (5)
#define FEC_LAGC_CUIF_L_CAL_RXDATA_VALID_GENERAL_PL_TEMP_VALID_C1                         (1)
#define FEC_LAGC_CUIF_M_CAL_RXDATA_VALID_GENERAL_PL_TEMP_VALID_C1                         (0x00000020)
#define FEC_LAGC_CUIF_P_CAL_RXDATA_VALID_GENERAL_PL_TEMP_VALID_C0                         (4)
#define FEC_LAGC_CUIF_L_CAL_RXDATA_VALID_GENERAL_PL_TEMP_VALID_C0                         (1)
#define FEC_LAGC_CUIF_M_CAL_RXDATA_VALID_GENERAL_PL_TEMP_VALID_C0                         (0x00000010)
#define FEC_LAGC_CUIF_P_CAL_RXDATA_VALID_GENERAL_PL_VALID_C1                              (3)
#define FEC_LAGC_CUIF_L_CAL_RXDATA_VALID_GENERAL_PL_VALID_C1                              (1)
#define FEC_LAGC_CUIF_M_CAL_RXDATA_VALID_GENERAL_PL_VALID_C1                              (0x00000008)
#define FEC_LAGC_CUIF_P_CAL_RXDATA_VALID_GENERAL_PL_VALID_C0                              (2)
#define FEC_LAGC_CUIF_L_CAL_RXDATA_VALID_GENERAL_PL_VALID_C0                              (1)
#define FEC_LAGC_CUIF_M_CAL_RXDATA_VALID_GENERAL_PL_VALID_C0                              (0x00000004)
#define FEC_LAGC_CUIF_P_CAL_RXDATA_VALID_GENERAL_DC_VALID_C1                              (1)
#define FEC_LAGC_CUIF_L_CAL_RXDATA_VALID_GENERAL_DC_VALID_C1                              (1)
#define FEC_LAGC_CUIF_M_CAL_RXDATA_VALID_GENERAL_DC_VALID_C1                              (0x00000002)
#define FEC_LAGC_CUIF_P_CAL_RXDATA_VALID_GENERAL_DC_VALID_C0                              (0)
#define FEC_LAGC_CUIF_L_CAL_RXDATA_VALID_GENERAL_DC_VALID_C0                              (1)
#define FEC_LAGC_CUIF_M_CAL_RXDATA_VALID_GENERAL_DC_VALID_C0                              (0x00000001)

// ---------- CAL_RXDATA_DC_BURST_INFO_ADDR_P0 bit-field ----------
#define FEC_LAGC_CUIF_P_CAL_RXDATA_DC_BURST_INFO_ADDR_P0_SOURCE_ADDR_P0                   (0)
#define FEC_LAGC_CUIF_L_CAL_RXDATA_DC_BURST_INFO_ADDR_P0_SOURCE_ADDR_P0                   (32)
#define FEC_LAGC_CUIF_M_CAL_RXDATA_DC_BURST_INFO_ADDR_P0_SOURCE_ADDR_P0                   (0xFFFFFFFF)

// ---------- CAL_RXDATA_DC_BURST_INFO_ADDR_P1 bit-field ----------
#define FEC_LAGC_CUIF_P_CAL_RXDATA_DC_BURST_INFO_ADDR_P1_SOURCE_ADDR_P1                   (0)
#define FEC_LAGC_CUIF_L_CAL_RXDATA_DC_BURST_INFO_ADDR_P1_SOURCE_ADDR_P1                   (32)
#define FEC_LAGC_CUIF_M_CAL_RXDATA_DC_BURST_INFO_ADDR_P1_SOURCE_ADDR_P1                   (0xFFFFFFFF)

// ---------- CAL_RXDATA_PATHLOSS_BURST_INFO_ADDR_C0 bit-field ----------
#define FEC_LAGC_CUIF_P_CAL_RXDATA_PATHLOSS_BURST_INFO_ADDR_C0_SOURCE_ADDR_C0             (0)
#define FEC_LAGC_CUIF_L_CAL_RXDATA_PATHLOSS_BURST_INFO_ADDR_C0_SOURCE_ADDR_C0             (32)
#define FEC_LAGC_CUIF_M_CAL_RXDATA_PATHLOSS_BURST_INFO_ADDR_C0_SOURCE_ADDR_C0             (0xFFFFFFFF)

// ---------- CAL_RXDATA_PATHLOSS_BURST_INFO_ADDR_C1 bit-field ----------
#define FEC_LAGC_CUIF_P_CAL_RXDATA_PATHLOSS_BURST_INFO_ADDR_C1_SOURCE_ADDR_C1             (0)
#define FEC_LAGC_CUIF_L_CAL_RXDATA_PATHLOSS_BURST_INFO_ADDR_C1_SOURCE_ADDR_C1             (32)
#define FEC_LAGC_CUIF_M_CAL_RXDATA_PATHLOSS_BURST_INFO_ADDR_C1_SOURCE_ADDR_C1             (0xFFFFFFFF)

// ---------- GAIN_TBL_ADDR_P0_A0 bit-field ----------
#define FEC_LAGC_CUIF_P_GAIN_TBL_ADDR_P0_A0_SOURPE_ADDR_P0_A0                             (0)
#define FEC_LAGC_CUIF_L_GAIN_TBL_ADDR_P0_A0_SOURPE_ADDR_P0_A0                             (32)
#define FEC_LAGC_CUIF_M_GAIN_TBL_ADDR_P0_A0_SOURPE_ADDR_P0_A0                             (0xFFFFFFFF)

// ---------- GAIN_TBL_ADDR_P0_A1 bit-field ----------
#define FEC_LAGC_CUIF_P_GAIN_TBL_ADDR_P0_A1_SOURPE_ADDR_P0_A1                             (0)
#define FEC_LAGC_CUIF_L_GAIN_TBL_ADDR_P0_A1_SOURPE_ADDR_P0_A1                             (32)
#define FEC_LAGC_CUIF_M_GAIN_TBL_ADDR_P0_A1_SOURPE_ADDR_P0_A1                             (0xFFFFFFFF)

// ---------- GAIN_TBL_ADDR_P1_A0 bit-field ----------
#define FEC_LAGC_CUIF_P_GAIN_TBL_ADDR_P1_A0_SOURPE_ADDR_P1_A0                             (0)
#define FEC_LAGC_CUIF_L_GAIN_TBL_ADDR_P1_A0_SOURPE_ADDR_P1_A0                             (32)
#define FEC_LAGC_CUIF_M_GAIN_TBL_ADDR_P1_A0_SOURPE_ADDR_P1_A0                             (0xFFFFFFFF)

// ---------- GAIN_TBL_ADDR_P1_A1 bit-field ----------
#define FEC_LAGC_CUIF_P_GAIN_TBL_ADDR_P1_A1_SOURPE_ADDR_P1_A1                             (0)
#define FEC_LAGC_CUIF_L_GAIN_TBL_ADDR_P1_A1_SOURPE_ADDR_P1_A1                             (32)
#define FEC_LAGC_CUIF_M_GAIN_TBL_ADDR_P1_A1_SOURPE_ADDR_P1_A1                             (0xFFFFFFFF)

// ---------- INIT_GAIN_ADDR_C0 bit-field ----------
#define FEC_LAGC_CUIF_P_INIT_GAIN_ADDR_C0_SOURCE_ADDR_C0                                  (0)
#define FEC_LAGC_CUIF_L_INIT_GAIN_ADDR_C0_SOURCE_ADDR_C0                                  (32)
#define FEC_LAGC_CUIF_M_INIT_GAIN_ADDR_C0_SOURCE_ADDR_C0                                  (0xFFFFFFFF)

// ---------- INIT_GAIN_ADDR_C1 bit-field ----------
#define FEC_LAGC_CUIF_P_INIT_GAIN_ADDR_C1_SOURCE_ADDR_C1                                  (0)
#define FEC_LAGC_CUIF_L_INIT_GAIN_ADDR_C1_SOURCE_ADDR_C1                                  (32)
#define FEC_LAGC_CUIF_M_INIT_GAIN_ADDR_C1_SOURCE_ADDR_C1                                  (0xFFFFFFFF)

// ---------- CALIBRATION_PLAN_C_INIT_GAIN_RF bit-field ----------
#define FEC_LAGC_CUIF_P_CALIBRATION_PLAN_C_INIT_GAIN_RF_LNA_idx_P1_A1                     (28)
#define FEC_LAGC_CUIF_L_CALIBRATION_PLAN_C_INIT_GAIN_RF_LNA_idx_P1_A1                     (4)
#define FEC_LAGC_CUIF_M_CALIBRATION_PLAN_C_INIT_GAIN_RF_LNA_idx_P1_A1                     (0xF0000000)
#define FEC_LAGC_CUIF_P_CALIBRATION_PLAN_C_INIT_GAIN_RF_pga_idx_P1_A1                     (24)
#define FEC_LAGC_CUIF_L_CALIBRATION_PLAN_C_INIT_GAIN_RF_pga_idx_P1_A1                     (4)
#define FEC_LAGC_CUIF_M_CALIBRATION_PLAN_C_INIT_GAIN_RF_pga_idx_P1_A1                     (0x0F000000)
#define FEC_LAGC_CUIF_P_CALIBRATION_PLAN_C_INIT_GAIN_RF_LNA_idx_P1_A0                     (20)
#define FEC_LAGC_CUIF_L_CALIBRATION_PLAN_C_INIT_GAIN_RF_LNA_idx_P1_A0                     (4)
#define FEC_LAGC_CUIF_M_CALIBRATION_PLAN_C_INIT_GAIN_RF_LNA_idx_P1_A0                     (0x00F00000)
#define FEC_LAGC_CUIF_P_CALIBRATION_PLAN_C_INIT_GAIN_RF_pga_idx_P1_A0                     (16)
#define FEC_LAGC_CUIF_L_CALIBRATION_PLAN_C_INIT_GAIN_RF_pga_idx_P1_A0                     (4)
#define FEC_LAGC_CUIF_M_CALIBRATION_PLAN_C_INIT_GAIN_RF_pga_idx_P1_A0                     (0x000F0000)
#define FEC_LAGC_CUIF_P_CALIBRATION_PLAN_C_INIT_GAIN_RF_LNA_idx_P0_A1                     (12)
#define FEC_LAGC_CUIF_L_CALIBRATION_PLAN_C_INIT_GAIN_RF_LNA_idx_P0_A1                     (4)
#define FEC_LAGC_CUIF_M_CALIBRATION_PLAN_C_INIT_GAIN_RF_LNA_idx_P0_A1                     (0x0000F000)
#define FEC_LAGC_CUIF_P_CALIBRATION_PLAN_C_INIT_GAIN_RF_pga_idx_P0_A1                     (8)
#define FEC_LAGC_CUIF_L_CALIBRATION_PLAN_C_INIT_GAIN_RF_pga_idx_P0_A1                     (4)
#define FEC_LAGC_CUIF_M_CALIBRATION_PLAN_C_INIT_GAIN_RF_pga_idx_P0_A1                     (0x00000F00)
#define FEC_LAGC_CUIF_P_CALIBRATION_PLAN_C_INIT_GAIN_RF_LNA_idx_P0_A0                     (4)
#define FEC_LAGC_CUIF_L_CALIBRATION_PLAN_C_INIT_GAIN_RF_LNA_idx_P0_A0                     (4)
#define FEC_LAGC_CUIF_M_CALIBRATION_PLAN_C_INIT_GAIN_RF_LNA_idx_P0_A0                     (0x000000F0)
#define FEC_LAGC_CUIF_P_CALIBRATION_PLAN_C_INIT_GAIN_RF_pga_idx_P0_A0                     (0)
#define FEC_LAGC_CUIF_L_CALIBRATION_PLAN_C_INIT_GAIN_RF_pga_idx_P0_A0                     (4)
#define FEC_LAGC_CUIF_M_CALIBRATION_PLAN_C_INIT_GAIN_RF_pga_idx_P0_A0                     (0x0000000F)

// ---------- CALIBRATION_PLAN_C_INI_DIG_GAIN_C0_A0 bit-field ----------
#define FEC_LAGC_CUIF_P_CALIBRATION_PLAN_C_INI_DIG_GAIN_C0_A0_DB2                         (20)
#define FEC_LAGC_CUIF_L_CALIBRATION_PLAN_C_INI_DIG_GAIN_C0_A0_DB2                         (11)
#define FEC_LAGC_CUIF_M_CALIBRATION_PLAN_C_INI_DIG_GAIN_C0_A0_DB2                         (0x7FF00000)
#define FEC_LAGC_CUIF_P_CALIBRATION_PLAN_C_INI_DIG_GAIN_C0_A0_EXP                         (16)
#define FEC_LAGC_CUIF_L_CALIBRATION_PLAN_C_INI_DIG_GAIN_C0_A0_EXP                         (3)
#define FEC_LAGC_CUIF_M_CALIBRATION_PLAN_C_INI_DIG_GAIN_C0_A0_EXP                         (0x00070000)
#define FEC_LAGC_CUIF_P_CALIBRATION_PLAN_C_INI_DIG_GAIN_C0_A0_MAN                         (0)
#define FEC_LAGC_CUIF_L_CALIBRATION_PLAN_C_INI_DIG_GAIN_C0_A0_MAN                         (8)
#define FEC_LAGC_CUIF_M_CALIBRATION_PLAN_C_INI_DIG_GAIN_C0_A0_MAN                         (0x000000FF)

// ---------- CALIBRATION_PLAN_C_INI_DIG_GAIN_C0_A1 bit-field ----------
#define FEC_LAGC_CUIF_P_CALIBRATION_PLAN_C_INI_DIG_GAIN_C0_A1_DB2                         (20)
#define FEC_LAGC_CUIF_L_CALIBRATION_PLAN_C_INI_DIG_GAIN_C0_A1_DB2                         (11)
#define FEC_LAGC_CUIF_M_CALIBRATION_PLAN_C_INI_DIG_GAIN_C0_A1_DB2                         (0x7FF00000)
#define FEC_LAGC_CUIF_P_CALIBRATION_PLAN_C_INI_DIG_GAIN_C0_A1_EXP                         (16)
#define FEC_LAGC_CUIF_L_CALIBRATION_PLAN_C_INI_DIG_GAIN_C0_A1_EXP                         (3)
#define FEC_LAGC_CUIF_M_CALIBRATION_PLAN_C_INI_DIG_GAIN_C0_A1_EXP                         (0x00070000)
#define FEC_LAGC_CUIF_P_CALIBRATION_PLAN_C_INI_DIG_GAIN_C0_A1_MAN                         (0)
#define FEC_LAGC_CUIF_L_CALIBRATION_PLAN_C_INI_DIG_GAIN_C0_A1_MAN                         (8)
#define FEC_LAGC_CUIF_M_CALIBRATION_PLAN_C_INI_DIG_GAIN_C0_A1_MAN                         (0x000000FF)

// ---------- CALIBRATION_PLAN_C_INI_DIG_GAIN_C1_A0 bit-field ----------
#define FEC_LAGC_CUIF_P_CALIBRATION_PLAN_C_INI_DIG_GAIN_C1_A0_DB2                         (20)
#define FEC_LAGC_CUIF_L_CALIBRATION_PLAN_C_INI_DIG_GAIN_C1_A0_DB2                         (11)
#define FEC_LAGC_CUIF_M_CALIBRATION_PLAN_C_INI_DIG_GAIN_C1_A0_DB2                         (0x7FF00000)
#define FEC_LAGC_CUIF_P_CALIBRATION_PLAN_C_INI_DIG_GAIN_C1_A0_EXP                         (16)
#define FEC_LAGC_CUIF_L_CALIBRATION_PLAN_C_INI_DIG_GAIN_C1_A0_EXP                         (3)
#define FEC_LAGC_CUIF_M_CALIBRATION_PLAN_C_INI_DIG_GAIN_C1_A0_EXP                         (0x00070000)
#define FEC_LAGC_CUIF_P_CALIBRATION_PLAN_C_INI_DIG_GAIN_C1_A0_MAN                         (0)
#define FEC_LAGC_CUIF_L_CALIBRATION_PLAN_C_INI_DIG_GAIN_C1_A0_MAN                         (8)
#define FEC_LAGC_CUIF_M_CALIBRATION_PLAN_C_INI_DIG_GAIN_C1_A0_MAN                         (0x000000FF)

// ---------- CALIBRATION_PLAN_C_INI_DIG_GAIN_C1_A1 bit-field ----------
#define FEC_LAGC_CUIF_P_CALIBRATION_PLAN_C_INI_DIG_GAIN_C1_A1_DB2                         (20)
#define FEC_LAGC_CUIF_L_CALIBRATION_PLAN_C_INI_DIG_GAIN_C1_A1_DB2                         (11)
#define FEC_LAGC_CUIF_M_CALIBRATION_PLAN_C_INI_DIG_GAIN_C1_A1_DB2                         (0x7FF00000)
#define FEC_LAGC_CUIF_P_CALIBRATION_PLAN_C_INI_DIG_GAIN_C1_A1_EXP                         (16)
#define FEC_LAGC_CUIF_L_CALIBRATION_PLAN_C_INI_DIG_GAIN_C1_A1_EXP                         (3)
#define FEC_LAGC_CUIF_M_CALIBRATION_PLAN_C_INI_DIG_GAIN_C1_A1_EXP                         (0x00070000)
#define FEC_LAGC_CUIF_P_CALIBRATION_PLAN_C_INI_DIG_GAIN_C1_A1_MAN                         (0)
#define FEC_LAGC_CUIF_L_CALIBRATION_PLAN_C_INI_DIG_GAIN_C1_A1_MAN                         (8)
#define FEC_LAGC_CUIF_M_CALIBRATION_PLAN_C_INI_DIG_GAIN_C1_A1_MAN                         (0x000000FF)

// ---------- DOUBLE_BUFF_IDX bit-field ----------
#define FEC_LAGC_CUIF_P_DOUBLE_BUFF_IDX_BUFF_IDX                                          (0)
#define FEC_LAGC_CUIF_L_DOUBLE_BUFF_IDX_BUFF_IDX                                          (1)
#define FEC_LAGC_CUIF_M_DOUBLE_BUFF_IDX_BUFF_IDX                                          (0x00000001)

// ---------- FEATURE_OPTION bit-field ----------
#define FEC_LAGC_CUIF_P_FEATURE_OPTION_ELC_EN                                             (7)
#define FEC_LAGC_CUIF_L_FEATURE_OPTION_ELC_EN                                             (1)
#define FEC_LAGC_CUIF_M_FEATURE_OPTION_ELC_EN                                             (0x00000080)
#define FEC_LAGC_CUIF_P_FEATURE_OPTION_CALIBRATION_PLAN_C                                 (6)
#define FEC_LAGC_CUIF_L_FEATURE_OPTION_CALIBRATION_PLAN_C                                 (1)
#define FEC_LAGC_CUIF_M_FEATURE_OPTION_CALIBRATION_PLAN_C                                 (0x00000040)
#define FEC_LAGC_CUIF_P_FEATURE_OPTION_DPDT_swap_P1                                       (5)
#define FEC_LAGC_CUIF_L_FEATURE_OPTION_DPDT_swap_P1                                       (1)
#define FEC_LAGC_CUIF_M_FEATURE_OPTION_DPDT_swap_P1                                       (0x00000020)
#define FEC_LAGC_CUIF_P_FEATURE_OPTION_DPDT_swap_P0                                       (4)
#define FEC_LAGC_CUIF_L_FEATURE_OPTION_DPDT_swap_P0                                       (1)
#define FEC_LAGC_CUIF_M_FEATURE_OPTION_DPDT_swap_P0                                       (0x00000010)
#define FEC_LAGC_CUIF_P_FEATURE_OPTION_TDB_swap_C1                                        (3)
#define FEC_LAGC_CUIF_L_FEATURE_OPTION_TDB_swap_C1                                        (1)
#define FEC_LAGC_CUIF_M_FEATURE_OPTION_TDB_swap_C1                                        (0x00000008)
#define FEC_LAGC_CUIF_P_FEATURE_OPTION_TDB_swap_C0                                        (2)
#define FEC_LAGC_CUIF_L_FEATURE_OPTION_TDB_swap_C0                                        (1)
#define FEC_LAGC_CUIF_M_FEATURE_OPTION_TDB_swap_C0                                        (0x00000004)
#define FEC_LAGC_CUIF_P_FEATURE_OPTION_DC_IQ_SWAP                                         (1)
#define FEC_LAGC_CUIF_L_FEATURE_OPTION_DC_IQ_SWAP                                         (1)
#define FEC_LAGC_CUIF_M_FEATURE_OPTION_DC_IQ_SWAP                                         (0x00000002)
#define FEC_LAGC_CUIF_P_FEATURE_OPTION_TEST_MODE_MONITOR_DUMP                             (0)
#define FEC_LAGC_CUIF_L_FEATURE_OPTION_TEST_MODE_MONITOR_DUMP                             (1)
#define FEC_LAGC_CUIF_M_FEATURE_OPTION_TEST_MODE_MONITOR_DUMP                             (0x00000001)

// ---------- AGC_INFO bit-field ----------
#define FEC_LAGC_CUIF_P_AGC_INFO_IIP2_BQ_GAIN_LIMIT_FLAG                                  (23)
#define FEC_LAGC_CUIF_L_AGC_INFO_IIP2_BQ_GAIN_LIMIT_FLAG                                  (1)
#define FEC_LAGC_CUIF_M_AGC_INFO_IIP2_BQ_GAIN_LIMIT_FLAG                                  (0x00800000)
#define FEC_LAGC_CUIF_P_AGC_INFO_ELNA_2nd_saw_P1A1                                        (22)
#define FEC_LAGC_CUIF_L_AGC_INFO_ELNA_2nd_saw_P1A1                                        (1)
#define FEC_LAGC_CUIF_M_AGC_INFO_ELNA_2nd_saw_P1A1                                        (0x00400000)
#define FEC_LAGC_CUIF_P_AGC_INFO_ELNA_sel_P1A1                                            (21)
#define FEC_LAGC_CUIF_L_AGC_INFO_ELNA_sel_P1A1                                            (1)
#define FEC_LAGC_CUIF_M_AGC_INFO_ELNA_sel_P1A1                                            (0x00200000)
#define FEC_LAGC_CUIF_P_AGC_INFO_ELNA_MODE_P1A1                                           (20)
#define FEC_LAGC_CUIF_L_AGC_INFO_ELNA_MODE_P1A1                                           (1)
#define FEC_LAGC_CUIF_M_AGC_INFO_ELNA_MODE_P1A1                                           (0x00100000)
#define FEC_LAGC_CUIF_P_AGC_INFO_ELNA_EN_P1A1                                             (19)
#define FEC_LAGC_CUIF_L_AGC_INFO_ELNA_EN_P1A1                                             (1)
#define FEC_LAGC_CUIF_M_AGC_INFO_ELNA_EN_P1A1                                             (0x00080000)
#define FEC_LAGC_CUIF_P_AGC_INFO_ELNA_2nd_saw_P1A0                                        (18)
#define FEC_LAGC_CUIF_L_AGC_INFO_ELNA_2nd_saw_P1A0                                        (1)
#define FEC_LAGC_CUIF_M_AGC_INFO_ELNA_2nd_saw_P1A0                                        (0x00040000)
#define FEC_LAGC_CUIF_P_AGC_INFO_ELNA_sel_P1A0                                            (17)
#define FEC_LAGC_CUIF_L_AGC_INFO_ELNA_sel_P1A0                                            (1)
#define FEC_LAGC_CUIF_M_AGC_INFO_ELNA_sel_P1A0                                            (0x00020000)
#define FEC_LAGC_CUIF_P_AGC_INFO_ELNA_MODE_P1A0                                           (16)
#define FEC_LAGC_CUIF_L_AGC_INFO_ELNA_MODE_P1A0                                           (1)
#define FEC_LAGC_CUIF_M_AGC_INFO_ELNA_MODE_P1A0                                           (0x00010000)
#define FEC_LAGC_CUIF_P_AGC_INFO_ELNA_EN_P1A0                                             (15)
#define FEC_LAGC_CUIF_L_AGC_INFO_ELNA_EN_P1A0                                             (1)
#define FEC_LAGC_CUIF_M_AGC_INFO_ELNA_EN_P1A0                                             (0x00008000)
#define FEC_LAGC_CUIF_P_AGC_INFO_ELNA_2nd_saw_P0A1                                        (14)
#define FEC_LAGC_CUIF_L_AGC_INFO_ELNA_2nd_saw_P0A1                                        (1)
#define FEC_LAGC_CUIF_M_AGC_INFO_ELNA_2nd_saw_P0A1                                        (0x00004000)
#define FEC_LAGC_CUIF_P_AGC_INFO_ELNA_sel_P0A1                                            (13)
#define FEC_LAGC_CUIF_L_AGC_INFO_ELNA_sel_P0A1                                            (1)
#define FEC_LAGC_CUIF_M_AGC_INFO_ELNA_sel_P0A1                                            (0x00002000)
#define FEC_LAGC_CUIF_P_AGC_INFO_ELNA_MODE_P0A1                                           (12)
#define FEC_LAGC_CUIF_L_AGC_INFO_ELNA_MODE_P0A1                                           (1)
#define FEC_LAGC_CUIF_M_AGC_INFO_ELNA_MODE_P0A1                                           (0x00001000)
#define FEC_LAGC_CUIF_P_AGC_INFO_ELNA_EN_P0A1                                             (11)
#define FEC_LAGC_CUIF_L_AGC_INFO_ELNA_EN_P0A1                                             (1)
#define FEC_LAGC_CUIF_M_AGC_INFO_ELNA_EN_P0A1                                             (0x00000800)
#define FEC_LAGC_CUIF_P_AGC_INFO_ELNA_2nd_saw_P0A0                                        (10)
#define FEC_LAGC_CUIF_L_AGC_INFO_ELNA_2nd_saw_P0A0                                        (1)
#define FEC_LAGC_CUIF_M_AGC_INFO_ELNA_2nd_saw_P0A0                                        (0x00000400)
#define FEC_LAGC_CUIF_P_AGC_INFO_ELNA_sel_P0A0                                            (9)
#define FEC_LAGC_CUIF_L_AGC_INFO_ELNA_sel_P0A0                                            (1)
#define FEC_LAGC_CUIF_M_AGC_INFO_ELNA_sel_P0A0                                            (0x00000200)
#define FEC_LAGC_CUIF_P_AGC_INFO_ELNA_MODE_P0A0                                           (8)
#define FEC_LAGC_CUIF_L_AGC_INFO_ELNA_MODE_P0A0                                           (1)
#define FEC_LAGC_CUIF_M_AGC_INFO_ELNA_MODE_P0A0                                           (0x00000100)
#define FEC_LAGC_CUIF_P_AGC_INFO_ELNA_EN_P0A0                                             (7)
#define FEC_LAGC_CUIF_L_AGC_INFO_ELNA_EN_P0A0                                             (1)
#define FEC_LAGC_CUIF_M_AGC_INFO_ELNA_EN_P0A0                                             (0x00000080)
#define FEC_LAGC_CUIF_P_AGC_INFO_Tier1_mode_en_P1A1                                       (6)
#define FEC_LAGC_CUIF_L_AGC_INFO_Tier1_mode_en_P1A1                                       (1)
#define FEC_LAGC_CUIF_M_AGC_INFO_Tier1_mode_en_P1A1                                       (0x00000040)
#define FEC_LAGC_CUIF_P_AGC_INFO_Tier1_mode_en_P1A0                                       (5)
#define FEC_LAGC_CUIF_L_AGC_INFO_Tier1_mode_en_P1A0                                       (1)
#define FEC_LAGC_CUIF_M_AGC_INFO_Tier1_mode_en_P1A0                                       (0x00000020)
#define FEC_LAGC_CUIF_P_AGC_INFO_Tier1_mode_en_P0A1                                       (4)
#define FEC_LAGC_CUIF_L_AGC_INFO_Tier1_mode_en_P0A1                                       (1)
#define FEC_LAGC_CUIF_M_AGC_INFO_Tier1_mode_en_P0A1                                       (0x00000010)
#define FEC_LAGC_CUIF_P_AGC_INFO_Tier1_mode_en_P0A0                                       (3)
#define FEC_LAGC_CUIF_L_AGC_INFO_Tier1_mode_en_P0A0                                       (1)
#define FEC_LAGC_CUIF_M_AGC_INFO_Tier1_mode_en_P0A0                                       (0x00000008)
#define FEC_LAGC_CUIF_P_AGC_INFO_Sawless_en_P1                                            (2)
#define FEC_LAGC_CUIF_L_AGC_INFO_Sawless_en_P1                                            (1)
#define FEC_LAGC_CUIF_M_AGC_INFO_Sawless_en_P1                                            (0x00000004)
#define FEC_LAGC_CUIF_P_AGC_INFO_Sawless_en_P0                                            (1)
#define FEC_LAGC_CUIF_L_AGC_INFO_Sawless_en_P0                                            (1)
#define FEC_LAGC_CUIF_M_AGC_INFO_Sawless_en_P0                                            (0x00000002)
#define FEC_LAGC_CUIF_P_AGC_INFO_TPD_EN                                                   (0)
#define FEC_LAGC_CUIF_L_AGC_INFO_TPD_EN                                                   (1)
#define FEC_LAGC_CUIF_M_AGC_INFO_TPD_EN                                                   (0x00000001)

// ---------- DFE_INFO bit-field ----------
#define FEC_LAGC_CUIF_P_DFE_INFO_HB_LB_P1                                                 (3)
#define FEC_LAGC_CUIF_L_DFE_INFO_HB_LB_P1                                                 (1)
#define FEC_LAGC_CUIF_M_DFE_INFO_HB_LB_P1                                                 (0x00000008)
#define FEC_LAGC_CUIF_P_DFE_INFO_HB_LB_P0                                                 (2)
#define FEC_LAGC_CUIF_L_DFE_INFO_HB_LB_P0                                                 (1)
#define FEC_LAGC_CUIF_M_DFE_INFO_HB_LB_P0                                                 (0x00000004)
#define FEC_LAGC_CUIF_P_DFE_INFO_P1_FC_CA_CFG                                             (1)
#define FEC_LAGC_CUIF_L_DFE_INFO_P1_FC_CA_CFG                                             (1)
#define FEC_LAGC_CUIF_M_DFE_INFO_P1_FC_CA_CFG                                             (0x00000002)
#define FEC_LAGC_CUIF_P_DFE_INFO_P0_FC_CA_CFG                                             (0)
#define FEC_LAGC_CUIF_L_DFE_INFO_P0_FC_CA_CFG                                             (1)
#define FEC_LAGC_CUIF_M_DFE_INFO_P0_FC_CA_CFG                                             (0x00000001)

// ---------- ELNA_BPI_P0A0 bit-field ----------
#define FEC_LAGC_CUIF_P_ELNA_BPI_P0A0_bypass_cw                                           (24)
#define FEC_LAGC_CUIF_L_ELNA_BPI_P0A0_bypass_cw                                           (2)
#define FEC_LAGC_CUIF_M_ELNA_BPI_P0A0_bypass_cw                                           (0x03000000)
#define FEC_LAGC_CUIF_P_ELNA_BPI_P0A0_on_cw                                               (16)
#define FEC_LAGC_CUIF_L_ELNA_BPI_P0A0_on_cw                                               (2)
#define FEC_LAGC_CUIF_M_ELNA_BPI_P0A0_on_cw                                               (0x00030000)
#define FEC_LAGC_CUIF_P_ELNA_BPI_P0A0_pin2_sel                                            (8)
#define FEC_LAGC_CUIF_L_ELNA_BPI_P0A0_pin2_sel                                            (5)
#define FEC_LAGC_CUIF_M_ELNA_BPI_P0A0_pin2_sel                                            (0x00001F00)
#define FEC_LAGC_CUIF_P_ELNA_BPI_P0A0_pin1_sel                                            (0)
#define FEC_LAGC_CUIF_L_ELNA_BPI_P0A0_pin1_sel                                            (5)
#define FEC_LAGC_CUIF_M_ELNA_BPI_P0A0_pin1_sel                                            (0x0000001F)

// ---------- ELNA_BPI_P0A1 bit-field ----------
#define FEC_LAGC_CUIF_P_ELNA_BPI_P0A1_bypass_cw                                           (24)
#define FEC_LAGC_CUIF_L_ELNA_BPI_P0A1_bypass_cw                                           (2)
#define FEC_LAGC_CUIF_M_ELNA_BPI_P0A1_bypass_cw                                           (0x03000000)
#define FEC_LAGC_CUIF_P_ELNA_BPI_P0A1_on_cw                                               (16)
#define FEC_LAGC_CUIF_L_ELNA_BPI_P0A1_on_cw                                               (2)
#define FEC_LAGC_CUIF_M_ELNA_BPI_P0A1_on_cw                                               (0x00030000)
#define FEC_LAGC_CUIF_P_ELNA_BPI_P0A1_pin2_sel                                            (8)
#define FEC_LAGC_CUIF_L_ELNA_BPI_P0A1_pin2_sel                                            (5)
#define FEC_LAGC_CUIF_M_ELNA_BPI_P0A1_pin2_sel                                            (0x00001F00)
#define FEC_LAGC_CUIF_P_ELNA_BPI_P0A1_pin1_sel                                            (0)
#define FEC_LAGC_CUIF_L_ELNA_BPI_P0A1_pin1_sel                                            (5)
#define FEC_LAGC_CUIF_M_ELNA_BPI_P0A1_pin1_sel                                            (0x0000001F)

// ---------- ELNA_BPI_P1A0 bit-field ----------
#define FEC_LAGC_CUIF_P_ELNA_BPI_P1A0_bypass_cw                                           (24)
#define FEC_LAGC_CUIF_L_ELNA_BPI_P1A0_bypass_cw                                           (2)
#define FEC_LAGC_CUIF_M_ELNA_BPI_P1A0_bypass_cw                                           (0x03000000)
#define FEC_LAGC_CUIF_P_ELNA_BPI_P1A0_on_cw                                               (16)
#define FEC_LAGC_CUIF_L_ELNA_BPI_P1A0_on_cw                                               (2)
#define FEC_LAGC_CUIF_M_ELNA_BPI_P1A0_on_cw                                               (0x00030000)
#define FEC_LAGC_CUIF_P_ELNA_BPI_P1A0_pin2_sel                                            (8)
#define FEC_LAGC_CUIF_L_ELNA_BPI_P1A0_pin2_sel                                            (5)
#define FEC_LAGC_CUIF_M_ELNA_BPI_P1A0_pin2_sel                                            (0x00001F00)
#define FEC_LAGC_CUIF_P_ELNA_BPI_P1A0_pin1_sel                                            (0)
#define FEC_LAGC_CUIF_L_ELNA_BPI_P1A0_pin1_sel                                            (5)
#define FEC_LAGC_CUIF_M_ELNA_BPI_P1A0_pin1_sel                                            (0x0000001F)

// ---------- ELNA_BPI_P1A1 bit-field ----------
#define FEC_LAGC_CUIF_P_ELNA_BPI_P1A1_bypass_cw                                           (24)
#define FEC_LAGC_CUIF_L_ELNA_BPI_P1A1_bypass_cw                                           (2)
#define FEC_LAGC_CUIF_M_ELNA_BPI_P1A1_bypass_cw                                           (0x03000000)
#define FEC_LAGC_CUIF_P_ELNA_BPI_P1A1_on_cw                                               (16)
#define FEC_LAGC_CUIF_L_ELNA_BPI_P1A1_on_cw                                               (2)
#define FEC_LAGC_CUIF_M_ELNA_BPI_P1A1_on_cw                                               (0x00030000)
#define FEC_LAGC_CUIF_P_ELNA_BPI_P1A1_pin2_sel                                            (8)
#define FEC_LAGC_CUIF_L_ELNA_BPI_P1A1_pin2_sel                                            (5)
#define FEC_LAGC_CUIF_M_ELNA_BPI_P1A1_pin2_sel                                            (0x00001F00)
#define FEC_LAGC_CUIF_P_ELNA_BPI_P1A1_pin1_sel                                            (0)
#define FEC_LAGC_CUIF_L_ELNA_BPI_P1A1_pin1_sel                                            (5)
#define FEC_LAGC_CUIF_M_ELNA_BPI_P1A1_pin1_sel                                            (0x0000001F)

// ---------- ELNA_MIPI_ON_P0A0 bit-field ----------
#define FEC_LAGC_CUIF_P_ELNA_MIPI_ON_P0A0_port_sel                                        (24)
#define FEC_LAGC_CUIF_L_ELNA_MIPI_ON_P0A0_port_sel                                        (3)
#define FEC_LAGC_CUIF_M_ELNA_MIPI_ON_P0A0_port_sel                                        (0x07000000)
#define FEC_LAGC_CUIF_P_ELNA_MIPI_ON_P0A0_mipi_cw                                         (0)
#define FEC_LAGC_CUIF_L_ELNA_MIPI_ON_P0A0_mipi_cw                                         (22)
#define FEC_LAGC_CUIF_M_ELNA_MIPI_ON_P0A0_mipi_cw                                         (0x003FFFFF)

// ---------- ELNA_MIPI_BYPASS_P0A0 bit-field ----------
#define FEC_LAGC_CUIF_P_ELNA_MIPI_BYPASS_P0A0_port_sel                                    (24)
#define FEC_LAGC_CUIF_L_ELNA_MIPI_BYPASS_P0A0_port_sel                                    (3)
#define FEC_LAGC_CUIF_M_ELNA_MIPI_BYPASS_P0A0_port_sel                                    (0x07000000)
#define FEC_LAGC_CUIF_P_ELNA_MIPI_BYPASS_P0A0_mipi_cw                                     (0)
#define FEC_LAGC_CUIF_L_ELNA_MIPI_BYPASS_P0A0_mipi_cw                                     (22)
#define FEC_LAGC_CUIF_M_ELNA_MIPI_BYPASS_P0A0_mipi_cw                                     (0x003FFFFF)

// ---------- ELNA_MIPI_ON_P0A1 bit-field ----------
#define FEC_LAGC_CUIF_P_ELNA_MIPI_ON_P0A1_port_sel                                        (24)
#define FEC_LAGC_CUIF_L_ELNA_MIPI_ON_P0A1_port_sel                                        (3)
#define FEC_LAGC_CUIF_M_ELNA_MIPI_ON_P0A1_port_sel                                        (0x07000000)
#define FEC_LAGC_CUIF_P_ELNA_MIPI_ON_P0A1_mipi_cw                                         (0)
#define FEC_LAGC_CUIF_L_ELNA_MIPI_ON_P0A1_mipi_cw                                         (22)
#define FEC_LAGC_CUIF_M_ELNA_MIPI_ON_P0A1_mipi_cw                                         (0x003FFFFF)

// ---------- ELNA_MIPI_BYPASS_P0A1 bit-field ----------
#define FEC_LAGC_CUIF_P_ELNA_MIPI_BYPASS_P0A1_port_sel                                    (24)
#define FEC_LAGC_CUIF_L_ELNA_MIPI_BYPASS_P0A1_port_sel                                    (3)
#define FEC_LAGC_CUIF_M_ELNA_MIPI_BYPASS_P0A1_port_sel                                    (0x07000000)
#define FEC_LAGC_CUIF_P_ELNA_MIPI_BYPASS_P0A1_mipi_cw                                     (0)
#define FEC_LAGC_CUIF_L_ELNA_MIPI_BYPASS_P0A1_mipi_cw                                     (22)
#define FEC_LAGC_CUIF_M_ELNA_MIPI_BYPASS_P0A1_mipi_cw                                     (0x003FFFFF)

// ---------- ELNA_MIPI_ON_P1A0 bit-field ----------
#define FEC_LAGC_CUIF_P_ELNA_MIPI_ON_P1A0_port_sel                                        (24)
#define FEC_LAGC_CUIF_L_ELNA_MIPI_ON_P1A0_port_sel                                        (3)
#define FEC_LAGC_CUIF_M_ELNA_MIPI_ON_P1A0_port_sel                                        (0x07000000)
#define FEC_LAGC_CUIF_P_ELNA_MIPI_ON_P1A0_mipi_cw                                         (0)
#define FEC_LAGC_CUIF_L_ELNA_MIPI_ON_P1A0_mipi_cw                                         (22)
#define FEC_LAGC_CUIF_M_ELNA_MIPI_ON_P1A0_mipi_cw                                         (0x003FFFFF)

// ---------- ELNA_MIPI_BYPASS_P1A0 bit-field ----------
#define FEC_LAGC_CUIF_P_ELNA_MIPI_BYPASS_P1A0_port_sel                                    (24)
#define FEC_LAGC_CUIF_L_ELNA_MIPI_BYPASS_P1A0_port_sel                                    (3)
#define FEC_LAGC_CUIF_M_ELNA_MIPI_BYPASS_P1A0_port_sel                                    (0x07000000)
#define FEC_LAGC_CUIF_P_ELNA_MIPI_BYPASS_P1A0_mipi_cw                                     (0)
#define FEC_LAGC_CUIF_L_ELNA_MIPI_BYPASS_P1A0_mipi_cw                                     (22)
#define FEC_LAGC_CUIF_M_ELNA_MIPI_BYPASS_P1A0_mipi_cw                                     (0x003FFFFF)

// ---------- ELNA_MIPI_ON_P1A1 bit-field ----------
#define FEC_LAGC_CUIF_P_ELNA_MIPI_ON_P1A1_port_sel                                        (24)
#define FEC_LAGC_CUIF_L_ELNA_MIPI_ON_P1A1_port_sel                                        (3)
#define FEC_LAGC_CUIF_M_ELNA_MIPI_ON_P1A1_port_sel                                        (0x07000000)
#define FEC_LAGC_CUIF_P_ELNA_MIPI_ON_P1A1_mipi_cw                                         (0)
#define FEC_LAGC_CUIF_L_ELNA_MIPI_ON_P1A1_mipi_cw                                         (22)
#define FEC_LAGC_CUIF_M_ELNA_MIPI_ON_P1A1_mipi_cw                                         (0x003FFFFF)

// ---------- ELNA_MIPI_BYPASS_P1A1 bit-field ----------
#define FEC_LAGC_CUIF_P_ELNA_MIPI_BYPASS_P1A1_port_sel                                    (24)
#define FEC_LAGC_CUIF_L_ELNA_MIPI_BYPASS_P1A1_port_sel                                    (3)
#define FEC_LAGC_CUIF_M_ELNA_MIPI_BYPASS_P1A1_port_sel                                    (0x07000000)
#define FEC_LAGC_CUIF_P_ELNA_MIPI_BYPASS_P1A1_mipi_cw                                     (0)
#define FEC_LAGC_CUIF_L_ELNA_MIPI_BYPASS_P1A1_mipi_cw                                     (22)
#define FEC_LAGC_CUIF_M_ELNA_MIPI_BYPASS_P1A1_mipi_cw                                     (0x003FFFFF)

// ---------- INTER_CM_COFIG bit-field ----------
#define FEC_LAGC_CUIF_P_INTER_CM_COFIG_TRK_SYM_MAP_C0                                     (0)
#define FEC_LAGC_CUIF_L_INTER_CM_COFIG_TRK_SYM_MAP_C0                                     (14)
#define FEC_LAGC_CUIF_M_INTER_CM_COFIG_TRK_SYM_MAP_C0                                     (0x00003FFF)

// ---------- INTER_CM_RF_ON_TIME_EARLIEST bit-field ----------
#define FEC_LAGC_CUIF_P_INTER_CM_RF_ON_TIME_EARLIEST_S_CNT                                (0)
#define FEC_LAGC_CUIF_L_INTER_CM_RF_ON_TIME_EARLIEST_S_CNT                                (32)
#define FEC_LAGC_CUIF_M_INTER_CM_RF_ON_TIME_EARLIEST_S_CNT                                (0xFFFFFFFF)

// ---------- CELL_TYPE bit-field ----------
#define FEC_LAGC_CUIF_P_CELL_TYPE_C1_CBW                                                  (24)
#define FEC_LAGC_CUIF_L_CELL_TYPE_C1_CBW                                                  (3)
#define FEC_LAGC_CUIF_M_CELL_TYPE_C1_CBW                                                  (0x07000000)
#define FEC_LAGC_CUIF_P_CELL_TYPE_C0_CBW                                                  (16)
#define FEC_LAGC_CUIF_L_CELL_TYPE_C0_CBW                                                  (3)
#define FEC_LAGC_CUIF_M_CELL_TYPE_C0_CBW                                                  (0x00070000)
#define FEC_LAGC_CUIF_P_CELL_TYPE_C1_DUPLEX_TYPE                                          (9)
#define FEC_LAGC_CUIF_L_CELL_TYPE_C1_DUPLEX_TYPE                                          (1)
#define FEC_LAGC_CUIF_M_CELL_TYPE_C1_DUPLEX_TYPE                                          (0x00000200)
#define FEC_LAGC_CUIF_P_CELL_TYPE_C0_DUPLEX_TYPE                                          (8)
#define FEC_LAGC_CUIF_L_CELL_TYPE_C0_DUPLEX_TYPE                                          (1)
#define FEC_LAGC_CUIF_M_CELL_TYPE_C0_DUPLEX_TYPE                                          (0x00000100)
#define FEC_LAGC_CUIF_P_CELL_TYPE_C1_CP_TYPE                                              (1)
#define FEC_LAGC_CUIF_L_CELL_TYPE_C1_CP_TYPE                                              (1)
#define FEC_LAGC_CUIF_M_CELL_TYPE_C1_CP_TYPE                                              (0x00000002)
#define FEC_LAGC_CUIF_P_CELL_TYPE_C0_CP_TYPE                                              (0)
#define FEC_LAGC_CUIF_L_CELL_TYPE_C0_CP_TYPE                                              (1)
#define FEC_LAGC_CUIF_M_CELL_TYPE_C0_CP_TYPE                                              (0x00000001)

// ---------- INIT_GAIN_A0_FREQ bit-field ----------
#define FEC_LAGC_CUIF_P_INIT_GAIN_A0_FREQ_TOTAL_EXP                                       (24)
#define FEC_LAGC_CUIF_L_INIT_GAIN_A0_FREQ_TOTAL_EXP                                       (8)
#define FEC_LAGC_CUIF_M_INIT_GAIN_A0_FREQ_TOTAL_EXP                                       (0xFF000000)
#define FEC_LAGC_CUIF_P_INIT_GAIN_A0_FREQ_DB2_CS_DIG_GAIN                                 (8)
#define FEC_LAGC_CUIF_L_INIT_GAIN_A0_FREQ_DB2_CS_DIG_GAIN                                 (16)
#define FEC_LAGC_CUIF_M_INIT_GAIN_A0_FREQ_DB2_CS_DIG_GAIN                                 (0x00FFFF00)
#define FEC_LAGC_CUIF_P_INIT_GAIN_A0_FREQ_lna_idx                                         (4)
#define FEC_LAGC_CUIF_L_INIT_GAIN_A0_FREQ_lna_idx                                         (4)
#define FEC_LAGC_CUIF_M_INIT_GAIN_A0_FREQ_lna_idx                                         (0x000000F0)
#define FEC_LAGC_CUIF_P_INIT_GAIN_A0_FREQ_pga_idx                                         (0)
#define FEC_LAGC_CUIF_L_INIT_GAIN_A0_FREQ_pga_idx                                         (4)
#define FEC_LAGC_CUIF_M_INIT_GAIN_A0_FREQ_pga_idx                                         (0x0000000F)

// ---------- INIT_GAIN_A1_FREQ bit-field ----------
#define FEC_LAGC_CUIF_P_INIT_GAIN_A1_FREQ_TOTAL_EXP                                       (24)
#define FEC_LAGC_CUIF_L_INIT_GAIN_A1_FREQ_TOTAL_EXP                                       (8)
#define FEC_LAGC_CUIF_M_INIT_GAIN_A1_FREQ_TOTAL_EXP                                       (0xFF000000)
#define FEC_LAGC_CUIF_P_INIT_GAIN_A1_FREQ_DB2_CS_DIG_GAIN                                 (8)
#define FEC_LAGC_CUIF_L_INIT_GAIN_A1_FREQ_DB2_CS_DIG_GAIN                                 (16)
#define FEC_LAGC_CUIF_M_INIT_GAIN_A1_FREQ_DB2_CS_DIG_GAIN                                 (0x00FFFF00)
#define FEC_LAGC_CUIF_P_INIT_GAIN_A1_FREQ_lna_idx                                         (4)
#define FEC_LAGC_CUIF_L_INIT_GAIN_A1_FREQ_lna_idx                                         (4)
#define FEC_LAGC_CUIF_M_INIT_GAIN_A1_FREQ_lna_idx                                         (0x000000F0)
#define FEC_LAGC_CUIF_P_INIT_GAIN_A1_FREQ_pga_idx                                         (0)
#define FEC_LAGC_CUIF_L_INIT_GAIN_A1_FREQ_pga_idx                                         (4)
#define FEC_LAGC_CUIF_M_INIT_GAIN_A1_FREQ_pga_idx                                         (0x0000000F)

// ---------- MEAS_START_TYPE bit-field ----------
#define FEC_LAGC_CUIF_P_MEAS_START_TYPE_ACID_SF                                           (28)
#define FEC_LAGC_CUIF_L_MEAS_START_TYPE_ACID_SF                                           (1)
#define FEC_LAGC_CUIF_M_MEAS_START_TYPE_ACID_SF                                           (0x10000000)
#define FEC_LAGC_CUIF_P_MEAS_START_TYPE_ACID_bitmap                                       (26)
#define FEC_LAGC_CUIF_L_MEAS_START_TYPE_ACID_bitmap                                       (2)
#define FEC_LAGC_CUIF_M_MEAS_START_TYPE_ACID_bitmap                                       (0x0C000000)
#define FEC_LAGC_CUIF_P_MEAS_START_TYPE_ACID_EN                                           (25)
#define FEC_LAGC_CUIF_L_MEAS_START_TYPE_ACID_EN                                           (1)
#define FEC_LAGC_CUIF_M_MEAS_START_TYPE_ACID_EN                                           (0x02000000)
#define FEC_LAGC_CUIF_P_MEAS_START_TYPE_CLR_FIRST_TIME_C1                                 (21)
#define FEC_LAGC_CUIF_L_MEAS_START_TYPE_CLR_FIRST_TIME_C1                                 (1)
#define FEC_LAGC_CUIF_M_MEAS_START_TYPE_CLR_FIRST_TIME_C1                                 (0x00200000)
#define FEC_LAGC_CUIF_P_MEAS_START_TYPE_CLR_FIRST_TIME_C0                                 (20)
#define FEC_LAGC_CUIF_L_MEAS_START_TYPE_CLR_FIRST_TIME_C0                                 (1)
#define FEC_LAGC_CUIF_M_MEAS_START_TYPE_CLR_FIRST_TIME_C0                                 (0x00100000)
#define FEC_LAGC_CUIF_P_MEAS_START_TYPE_C1_EN                                             (18)
#define FEC_LAGC_CUIF_L_MEAS_START_TYPE_C1_EN                                             (2)
#define FEC_LAGC_CUIF_M_MEAS_START_TYPE_C1_EN                                             (0x000C0000)
#define FEC_LAGC_CUIF_P_MEAS_START_TYPE_C0_EN                                             (16)
#define FEC_LAGC_CUIF_L_MEAS_START_TYPE_C0_EN                                             (2)
#define FEC_LAGC_CUIF_M_MEAS_START_TYPE_C0_EN                                             (0x00030000)
#define FEC_LAGC_CUIF_P_MEAS_START_TYPE_AGC_MODE_C1                                       (4)
#define FEC_LAGC_CUIF_L_MEAS_START_TYPE_AGC_MODE_C1                                       (4)
#define FEC_LAGC_CUIF_M_MEAS_START_TYPE_AGC_MODE_C1                                       (0x000000F0)
#define FEC_LAGC_CUIF_P_MEAS_START_TYPE_AGC_MODE_C0                                       (0)
#define FEC_LAGC_CUIF_L_MEAS_START_TYPE_AGC_MODE_C0                                       (4)
#define FEC_LAGC_CUIF_M_MEAS_START_TYPE_AGC_MODE_C0                                       (0x0000000F)

// ---------- REQ_SF_TYPE bit-field ----------
#define FEC_LAGC_CUIF_P_REQ_SF_TYPE_C1_SF_TYPE                                            (24)
#define FEC_LAGC_CUIF_L_REQ_SF_TYPE_C1_SF_TYPE                                            (2)
#define FEC_LAGC_CUIF_M_REQ_SF_TYPE_C1_SF_TYPE                                            (0x03000000)
#define FEC_LAGC_CUIF_P_REQ_SF_TYPE_C0_SF_TYPE                                            (16)
#define FEC_LAGC_CUIF_L_REQ_SF_TYPE_C0_SF_TYPE                                            (2)
#define FEC_LAGC_CUIF_M_REQ_SF_TYPE_C0_SF_TYPE                                            (0x00030000)
#define FEC_LAGC_CUIF_P_REQ_SF_TYPE_PSCAN_TYPE                                            (8)
#define FEC_LAGC_CUIF_L_REQ_SF_TYPE_PSCAN_TYPE                                            (2)
#define FEC_LAGC_CUIF_M_REQ_SF_TYPE_PSCAN_TYPE                                            (0x00000300)
#define FEC_LAGC_CUIF_P_REQ_SF_TYPE_C1_CS_REQ                                             (6)
#define FEC_LAGC_CUIF_L_REQ_SF_TYPE_C1_CS_REQ                                             (1)
#define FEC_LAGC_CUIF_M_REQ_SF_TYPE_C1_CS_REQ                                             (0x00000040)
#define FEC_LAGC_CUIF_P_REQ_SF_TYPE_C1_RX_REQ                                             (4)
#define FEC_LAGC_CUIF_L_REQ_SF_TYPE_C1_RX_REQ                                             (1)
#define FEC_LAGC_CUIF_M_REQ_SF_TYPE_C1_RX_REQ                                             (0x00000010)
#define FEC_LAGC_CUIF_P_REQ_SF_TYPE_C0_CS_REQ                                             (2)
#define FEC_LAGC_CUIF_L_REQ_SF_TYPE_C0_CS_REQ                                             (1)
#define FEC_LAGC_CUIF_M_REQ_SF_TYPE_C0_CS_REQ                                             (0x00000004)
#define FEC_LAGC_CUIF_P_REQ_SF_TYPE_C0_RX_REQ                                             (0)
#define FEC_LAGC_CUIF_L_REQ_SF_TYPE_C0_RX_REQ                                             (1)
#define FEC_LAGC_CUIF_M_REQ_SF_TYPE_C0_RX_REQ                                             (0x00000001)

// ---------- NORMAL_SCENARIO_CONFIG bit-field ----------
#define FEC_LAGC_CUIF_P_NORMAL_SCENARIO_CONFIG_ARX_RX_MODE_EN_P1_A1                       (26)
#define FEC_LAGC_CUIF_L_NORMAL_SCENARIO_CONFIG_ARX_RX_MODE_EN_P1_A1                       (3)
#define FEC_LAGC_CUIF_M_NORMAL_SCENARIO_CONFIG_ARX_RX_MODE_EN_P1_A1                       (0x1C000000)
#define FEC_LAGC_CUIF_P_NORMAL_SCENARIO_CONFIG_ARX_RX_MODE_EN_P1_A0                       (23)
#define FEC_LAGC_CUIF_L_NORMAL_SCENARIO_CONFIG_ARX_RX_MODE_EN_P1_A0                       (3)
#define FEC_LAGC_CUIF_M_NORMAL_SCENARIO_CONFIG_ARX_RX_MODE_EN_P1_A0                       (0x03800000)
#define FEC_LAGC_CUIF_P_NORMAL_SCENARIO_CONFIG_ARX_RX_MODE_EN_P0_A1                       (20)
#define FEC_LAGC_CUIF_L_NORMAL_SCENARIO_CONFIG_ARX_RX_MODE_EN_P0_A1                       (3)
#define FEC_LAGC_CUIF_M_NORMAL_SCENARIO_CONFIG_ARX_RX_MODE_EN_P0_A1                       (0x00700000)
#define FEC_LAGC_CUIF_P_NORMAL_SCENARIO_CONFIG_ARX_RX_MODE_EN_P0_A0                       (17)
#define FEC_LAGC_CUIF_L_NORMAL_SCENARIO_CONFIG_ARX_RX_MODE_EN_P0_A0                       (3)
#define FEC_LAGC_CUIF_M_NORMAL_SCENARIO_CONFIG_ARX_RX_MODE_EN_P0_A0                       (0x000E0000)
#define FEC_LAGC_CUIF_P_NORMAL_SCENARIO_CONFIG_ARX_MEAS_TRIG_EN                           (16)
#define FEC_LAGC_CUIF_L_NORMAL_SCENARIO_CONFIG_ARX_MEAS_TRIG_EN                           (1)
#define FEC_LAGC_CUIF_M_NORMAL_SCENARIO_CONFIG_ARX_MEAS_TRIG_EN                           (0x00010000)
#define FEC_LAGC_CUIF_P_NORMAL_SCENARIO_CONFIG_C1_LPM_CFG                                 (4)
#define FEC_LAGC_CUIF_L_NORMAL_SCENARIO_CONFIG_C1_LPM_CFG                                 (3)
#define FEC_LAGC_CUIF_M_NORMAL_SCENARIO_CONFIG_C1_LPM_CFG                                 (0x00000070)
#define FEC_LAGC_CUIF_P_NORMAL_SCENARIO_CONFIG_C0_LPM_CFG                                 (0)
#define FEC_LAGC_CUIF_L_NORMAL_SCENARIO_CONFIG_C0_LPM_CFG                                 (3)
#define FEC_LAGC_CUIF_M_NORMAL_SCENARIO_CONFIG_C0_LPM_CFG                                 (0x00000007)

// ---------- OBB_FLAG bit-field ----------
#define FEC_LAGC_CUIF_P_OBB_FLAG_OBB_FLAG_P1A1                                            (3)
#define FEC_LAGC_CUIF_L_OBB_FLAG_OBB_FLAG_P1A1                                            (1)
#define FEC_LAGC_CUIF_M_OBB_FLAG_OBB_FLAG_P1A1                                            (0x00000008)
#define FEC_LAGC_CUIF_P_OBB_FLAG_OBB_FLAG_P1A0                                            (2)
#define FEC_LAGC_CUIF_L_OBB_FLAG_OBB_FLAG_P1A0                                            (1)
#define FEC_LAGC_CUIF_M_OBB_FLAG_OBB_FLAG_P1A0                                            (0x00000004)
#define FEC_LAGC_CUIF_P_OBB_FLAG_OBB_FLAG_P0A1                                            (1)
#define FEC_LAGC_CUIF_L_OBB_FLAG_OBB_FLAG_P0A1                                            (1)
#define FEC_LAGC_CUIF_M_OBB_FLAG_OBB_FLAG_P0A1                                            (0x00000002)
#define FEC_LAGC_CUIF_P_OBB_FLAG_OBB_FLAG_P0A0                                            (0)
#define FEC_LAGC_CUIF_L_OBB_FLAG_OBB_FLAG_P0A0                                            (1)
#define FEC_LAGC_CUIF_M_OBB_FLAG_OBB_FLAG_P0A0                                            (0x00000001)

// ---------- TPD_RESULT bit-field ----------
#define FEC_LAGC_CUIF_P_TPD_RESULT_TPD_ready_bit_P1A1                                     (27)
#define FEC_LAGC_CUIF_L_TPD_RESULT_TPD_ready_bit_P1A1                                     (1)
#define FEC_LAGC_CUIF_M_TPD_RESULT_TPD_ready_bit_P1A1                                     (0x08000000)
#define FEC_LAGC_CUIF_P_TPD_RESULT_TPD_P1A1                                               (21)
#define FEC_LAGC_CUIF_L_TPD_RESULT_TPD_P1A1                                               (6)
#define FEC_LAGC_CUIF_M_TPD_RESULT_TPD_P1A1                                               (0x07E00000)
#define FEC_LAGC_CUIF_P_TPD_RESULT_TPD_ready_bit_P1A0                                     (20)
#define FEC_LAGC_CUIF_L_TPD_RESULT_TPD_ready_bit_P1A0                                     (1)
#define FEC_LAGC_CUIF_M_TPD_RESULT_TPD_ready_bit_P1A0                                     (0x00100000)
#define FEC_LAGC_CUIF_P_TPD_RESULT_TPD_P1A0                                               (14)
#define FEC_LAGC_CUIF_L_TPD_RESULT_TPD_P1A0                                               (6)
#define FEC_LAGC_CUIF_M_TPD_RESULT_TPD_P1A0                                               (0x000FC000)
#define FEC_LAGC_CUIF_P_TPD_RESULT_TPD_ready_bit_P0A1                                     (13)
#define FEC_LAGC_CUIF_L_TPD_RESULT_TPD_ready_bit_P0A1                                     (1)
#define FEC_LAGC_CUIF_M_TPD_RESULT_TPD_ready_bit_P0A1                                     (0x00002000)
#define FEC_LAGC_CUIF_P_TPD_RESULT_TPD_P0A1                                               (7)
#define FEC_LAGC_CUIF_L_TPD_RESULT_TPD_P0A1                                               (6)
#define FEC_LAGC_CUIF_M_TPD_RESULT_TPD_P0A1                                               (0x00001F80)
#define FEC_LAGC_CUIF_P_TPD_RESULT_TPD_ready_bit_P0A0                                     (6)
#define FEC_LAGC_CUIF_L_TPD_RESULT_TPD_ready_bit_P0A0                                     (1)
#define FEC_LAGC_CUIF_M_TPD_RESULT_TPD_ready_bit_P0A0                                     (0x00000040)
#define FEC_LAGC_CUIF_P_TPD_RESULT_TPD_P0A0                                               (0)
#define FEC_LAGC_CUIF_L_TPD_RESULT_TPD_P0A0                                               (6)
#define FEC_LAGC_CUIF_M_TPD_RESULT_TPD_P0A0                                               (0x0000003F)

// ---------- ELC_RB_NUMBER bit-field ----------
#define FEC_LAGC_CUIF_P_ELC_RB_NUMBER_RB_number_CC1                                       (11)
#define FEC_LAGC_CUIF_L_ELC_RB_NUMBER_RB_number_CC1                                       (7)
#define FEC_LAGC_CUIF_M_ELC_RB_NUMBER_RB_number_CC1                                       (0x0003F800)
#define FEC_LAGC_CUIF_P_ELC_RB_NUMBER_RB_number_CC0                                       (4)
#define FEC_LAGC_CUIF_L_ELC_RB_NUMBER_RB_number_CC0                                       (7)
#define FEC_LAGC_CUIF_M_ELC_RB_NUMBER_RB_number_CC0                                       (0x000007F0)
#define FEC_LAGC_CUIF_P_ELC_RB_NUMBER_TX_NUM_C1                                           (2)
#define FEC_LAGC_CUIF_L_ELC_RB_NUMBER_TX_NUM_C1                                           (2)
#define FEC_LAGC_CUIF_M_ELC_RB_NUMBER_TX_NUM_C1                                           (0x0000000C)
#define FEC_LAGC_CUIF_P_ELC_RB_NUMBER_TX_NUM_C0                                           (0)
#define FEC_LAGC_CUIF_L_ELC_RB_NUMBER_TX_NUM_C0                                           (2)
#define FEC_LAGC_CUIF_M_ELC_RB_NUMBER_TX_NUM_C0                                           (0x00000003)

// ---------- ANT_PATH_CONFIG bit-field ----------
#define FEC_LAGC_CUIF_P_ANT_PATH_CONFIG_C1_SRX_PATH                                       (29)
#define FEC_LAGC_CUIF_L_ANT_PATH_CONFIG_C1_SRX_PATH                                       (1)
#define FEC_LAGC_CUIF_M_ANT_PATH_CONFIG_C1_SRX_PATH                                       (0x20000000)
#define FEC_LAGC_CUIF_P_ANT_PATH_CONFIG_C0_SRX_PATH                                       (28)
#define FEC_LAGC_CUIF_L_ANT_PATH_CONFIG_C0_SRX_PATH                                       (1)
#define FEC_LAGC_CUIF_M_ANT_PATH_CONFIG_C0_SRX_PATH                                       (0x10000000)
#define FEC_LAGC_CUIF_P_ANT_PATH_CONFIG_C1_LNA_PATH                                       (27)
#define FEC_LAGC_CUIF_L_ANT_PATH_CONFIG_C1_LNA_PATH                                       (1)
#define FEC_LAGC_CUIF_M_ANT_PATH_CONFIG_C1_LNA_PATH                                       (0x08000000)
#define FEC_LAGC_CUIF_P_ANT_PATH_CONFIG_C0_LNA_PATH                                       (26)
#define FEC_LAGC_CUIF_L_ANT_PATH_CONFIG_C0_LNA_PATH                                       (1)
#define FEC_LAGC_CUIF_M_ANT_PATH_CONFIG_C0_LNA_PATH                                       (0x04000000)
#define FEC_LAGC_CUIF_P_ANT_PATH_CONFIG_C1_ANT1_ON                                        (25)
#define FEC_LAGC_CUIF_L_ANT_PATH_CONFIG_C1_ANT1_ON                                        (1)
#define FEC_LAGC_CUIF_M_ANT_PATH_CONFIG_C1_ANT1_ON                                        (0x02000000)
#define FEC_LAGC_CUIF_P_ANT_PATH_CONFIG_C1_ANT0_ON                                        (24)
#define FEC_LAGC_CUIF_L_ANT_PATH_CONFIG_C1_ANT0_ON                                        (1)
#define FEC_LAGC_CUIF_M_ANT_PATH_CONFIG_C1_ANT0_ON                                        (0x01000000)
#define FEC_LAGC_CUIF_P_ANT_PATH_CONFIG_C0_ANT1_ON                                        (17)
#define FEC_LAGC_CUIF_L_ANT_PATH_CONFIG_C0_ANT1_ON                                        (1)
#define FEC_LAGC_CUIF_M_ANT_PATH_CONFIG_C0_ANT1_ON                                        (0x00020000)
#define FEC_LAGC_CUIF_P_ANT_PATH_CONFIG_C0_ANT0_ON                                        (16)
#define FEC_LAGC_CUIF_L_ANT_PATH_CONFIG_C0_ANT0_ON                                        (1)
#define FEC_LAGC_CUIF_M_ANT_PATH_CONFIG_C0_ANT0_ON                                        (0x00010000)
#define FEC_LAGC_CUIF_P_ANT_PATH_CONFIG_C1_QDL_PATH_EN                                    (13)
#define FEC_LAGC_CUIF_L_ANT_PATH_CONFIG_C1_QDL_PATH_EN                                    (1)
#define FEC_LAGC_CUIF_M_ANT_PATH_CONFIG_C1_QDL_PATH_EN                                    (0x00002000)
#define FEC_LAGC_CUIF_P_ANT_PATH_CONFIG_C0_QDL_PATH_EN                                    (12)
#define FEC_LAGC_CUIF_L_ANT_PATH_CONFIG_C0_QDL_PATH_EN                                    (1)
#define FEC_LAGC_CUIF_M_ANT_PATH_CONFIG_C0_QDL_PATH_EN                                    (0x00001000)
#define FEC_LAGC_CUIF_P_ANT_PATH_CONFIG_P1_RF_BW                                          (8)
#define FEC_LAGC_CUIF_L_ANT_PATH_CONFIG_P1_RF_BW                                          (4)
#define FEC_LAGC_CUIF_M_ANT_PATH_CONFIG_P1_RF_BW                                          (0x00000F00)
#define FEC_LAGC_CUIF_P_ANT_PATH_CONFIG_P0_RF_BW                                          (4)
#define FEC_LAGC_CUIF_L_ANT_PATH_CONFIG_P0_RF_BW                                          (4)
#define FEC_LAGC_CUIF_M_ANT_PATH_CONFIG_P0_RF_BW                                          (0x000000F0)
#define FEC_LAGC_CUIF_P_ANT_PATH_CONFIG_PATH1_C1_EN                                       (3)
#define FEC_LAGC_CUIF_L_ANT_PATH_CONFIG_PATH1_C1_EN                                       (1)
#define FEC_LAGC_CUIF_M_ANT_PATH_CONFIG_PATH1_C1_EN                                       (0x00000008)
#define FEC_LAGC_CUIF_P_ANT_PATH_CONFIG_PATH1_C0_EN                                       (2)
#define FEC_LAGC_CUIF_L_ANT_PATH_CONFIG_PATH1_C0_EN                                       (1)
#define FEC_LAGC_CUIF_M_ANT_PATH_CONFIG_PATH1_C0_EN                                       (0x00000004)
#define FEC_LAGC_CUIF_P_ANT_PATH_CONFIG_PATH0_C1_EN                                       (1)
#define FEC_LAGC_CUIF_L_ANT_PATH_CONFIG_PATH0_C1_EN                                       (1)
#define FEC_LAGC_CUIF_M_ANT_PATH_CONFIG_PATH0_C1_EN                                       (0x00000002)
#define FEC_LAGC_CUIF_P_ANT_PATH_CONFIG_PATH0_C0_EN                                       (0)
#define FEC_LAGC_CUIF_L_ANT_PATH_CONFIG_PATH0_C0_EN                                       (1)
#define FEC_LAGC_CUIF_M_ANT_PATH_CONFIG_PATH0_C0_EN                                       (0x00000001)

// ---------- PATHLOSS_TEMP_OFFSET bit-field ----------
#define FEC_LAGC_CUIF_P_PATHLOSS_TEMP_OFFSET_P1                                           (16)
#define FEC_LAGC_CUIF_L_PATHLOSS_TEMP_OFFSET_P1                                           (16)
#define FEC_LAGC_CUIF_M_PATHLOSS_TEMP_OFFSET_P1                                           (0xFFFF0000)
#define FEC_LAGC_CUIF_P_PATHLOSS_TEMP_OFFSET_P0                                           (0)
#define FEC_LAGC_CUIF_L_PATHLOSS_TEMP_OFFSET_P0                                           (16)
#define FEC_LAGC_CUIF_M_PATHLOSS_TEMP_OFFSET_P0                                           (0x0000FFFF)

// ---------- FWS_SFBD_C0_A0 bit-field ----------
#define FEC_LAGC_CUIF_P_FWS_SFBD_C0_A0_S_CNT                                              (0)
#define FEC_LAGC_CUIF_L_FWS_SFBD_C0_A0_S_CNT                                              (32)
#define FEC_LAGC_CUIF_M_FWS_SFBD_C0_A0_S_CNT                                              (0xFFFFFFFF)

// ---------- FWS_SFBD_C0_A1 bit-field ----------
#define FEC_LAGC_CUIF_P_FWS_SFBD_C0_A1_S_CNT                                              (0)
#define FEC_LAGC_CUIF_L_FWS_SFBD_C0_A1_S_CNT                                              (32)
#define FEC_LAGC_CUIF_M_FWS_SFBD_C0_A1_S_CNT                                              (0xFFFFFFFF)

// ---------- FWS_SFBD_C1_A0 bit-field ----------
#define FEC_LAGC_CUIF_P_FWS_SFBD_C1_A0_S_CNT                                              (0)
#define FEC_LAGC_CUIF_L_FWS_SFBD_C1_A0_S_CNT                                              (32)
#define FEC_LAGC_CUIF_M_FWS_SFBD_C1_A0_S_CNT                                              (0xFFFFFFFF)

// ---------- FWS_SFBD_C1_A1 bit-field ----------
#define FEC_LAGC_CUIF_P_FWS_SFBD_C1_A1_S_CNT                                              (0)
#define FEC_LAGC_CUIF_L_FWS_SFBD_C1_A1_S_CNT                                              (32)
#define FEC_LAGC_CUIF_M_FWS_SFBD_C1_A1_S_CNT                                              (0xFFFFFFFF)

// ---------- CMIF_LOCK_UPDATE bit-field ----------
#define FEC_LAGC_CUIF_P_CMIF_LOCK_UPDATE_LOCK_SYNC                                        (0)
#define FEC_LAGC_CUIF_L_CMIF_LOCK_UPDATE_LOCK_SYNC                                        (2)
#define FEC_LAGC_CUIF_M_CMIF_LOCK_UPDATE_LOCK_SYNC                                        (0x00000003)

// ---------- REPORT_VLD bit-field ----------
#define FEC_LAGC_CUIF_P_REPORT_VLD_OB_P1_A1_VLD                                           (7)
#define FEC_LAGC_CUIF_L_REPORT_VLD_OB_P1_A1_VLD                                           (1)
#define FEC_LAGC_CUIF_M_REPORT_VLD_OB_P1_A1_VLD                                           (0x00000080)
#define FEC_LAGC_CUIF_P_REPORT_VLD_OB_P1_A0_VLD                                           (6)
#define FEC_LAGC_CUIF_L_REPORT_VLD_OB_P1_A0_VLD                                           (1)
#define FEC_LAGC_CUIF_M_REPORT_VLD_OB_P1_A0_VLD                                           (0x00000040)
#define FEC_LAGC_CUIF_P_REPORT_VLD_OB_P0_A1_VLD                                           (5)
#define FEC_LAGC_CUIF_L_REPORT_VLD_OB_P0_A1_VLD                                           (1)
#define FEC_LAGC_CUIF_M_REPORT_VLD_OB_P0_A1_VLD                                           (0x00000020)
#define FEC_LAGC_CUIF_P_REPORT_VLD_OB_P0_A0_VLD                                           (4)
#define FEC_LAGC_CUIF_L_REPORT_VLD_OB_P0_A0_VLD                                           (1)
#define FEC_LAGC_CUIF_M_REPORT_VLD_OB_P0_A0_VLD                                           (0x00000010)
#define FEC_LAGC_CUIF_P_REPORT_VLD_RSSI_C1_A1_VLD                                         (3)
#define FEC_LAGC_CUIF_L_REPORT_VLD_RSSI_C1_A1_VLD                                         (1)
#define FEC_LAGC_CUIF_M_REPORT_VLD_RSSI_C1_A1_VLD                                         (0x00000008)
#define FEC_LAGC_CUIF_P_REPORT_VLD_RSSI_C1_A0_VLD                                         (2)
#define FEC_LAGC_CUIF_L_REPORT_VLD_RSSI_C1_A0_VLD                                         (1)
#define FEC_LAGC_CUIF_M_REPORT_VLD_RSSI_C1_A0_VLD                                         (0x00000004)
#define FEC_LAGC_CUIF_P_REPORT_VLD_RSSI_C0_A1_VLD                                         (1)
#define FEC_LAGC_CUIF_L_REPORT_VLD_RSSI_C0_A1_VLD                                         (1)
#define FEC_LAGC_CUIF_M_REPORT_VLD_RSSI_C0_A1_VLD                                         (0x00000002)
#define FEC_LAGC_CUIF_P_REPORT_VLD_RSSI_C0_A0_VLD                                         (0)
#define FEC_LAGC_CUIF_L_REPORT_VLD_RSSI_C0_A0_VLD                                         (1)
#define FEC_LAGC_CUIF_M_REPORT_VLD_RSSI_C0_A0_VLD                                         (0x00000001)

// ---------- RSSI_REPORT_C0_A0 bit-field ----------
#define FEC_LAGC_CUIF_P_RSSI_REPORT_C0_A0_RSSI_DBM                                        (0)
#define FEC_LAGC_CUIF_L_RSSI_REPORT_C0_A0_RSSI_DBM                                        (16)
#define FEC_LAGC_CUIF_M_RSSI_REPORT_C0_A0_RSSI_DBM                                        (0x0000FFFF)

// ---------- RSSI_REPORT_C0_A1 bit-field ----------
#define FEC_LAGC_CUIF_P_RSSI_REPORT_C0_A1_RSSI_DBM                                        (0)
#define FEC_LAGC_CUIF_L_RSSI_REPORT_C0_A1_RSSI_DBM                                        (16)
#define FEC_LAGC_CUIF_M_RSSI_REPORT_C0_A1_RSSI_DBM                                        (0x0000FFFF)

// ---------- RSSI_REPORT_C1_A0 bit-field ----------
#define FEC_LAGC_CUIF_P_RSSI_REPORT_C1_A0_RSSI_DBM                                        (0)
#define FEC_LAGC_CUIF_L_RSSI_REPORT_C1_A0_RSSI_DBM                                        (16)
#define FEC_LAGC_CUIF_M_RSSI_REPORT_C1_A0_RSSI_DBM                                        (0x0000FFFF)

// ---------- RSSI_REPORT_C1_A1 bit-field ----------
#define FEC_LAGC_CUIF_P_RSSI_REPORT_C1_A1_RSSI_DBM                                        (0)
#define FEC_LAGC_CUIF_L_RSSI_REPORT_C1_A1_RSSI_DBM                                        (16)
#define FEC_LAGC_CUIF_M_RSSI_REPORT_C1_A1_RSSI_DBM                                        (0x0000FFFF)

// ---------- REPORT_OB_P0_A0 bit-field ----------
#define FEC_LAGC_CUIF_P_REPORT_OB_P0_A0_OB                                                (0)
#define FEC_LAGC_CUIF_L_REPORT_OB_P0_A0_OB                                                (32)
#define FEC_LAGC_CUIF_M_REPORT_OB_P0_A0_OB                                                (0xFFFFFFFF)

// ---------- REPORT_OB_P0_A1 bit-field ----------
#define FEC_LAGC_CUIF_P_REPORT_OB_P0_A1_OB                                                (0)
#define FEC_LAGC_CUIF_L_REPORT_OB_P0_A1_OB                                                (32)
#define FEC_LAGC_CUIF_M_REPORT_OB_P0_A1_OB                                                (0xFFFFFFFF)

// ---------- REPORT_OB_P1_A0 bit-field ----------
#define FEC_LAGC_CUIF_P_REPORT_OB_P1_A0_OB                                                (0)
#define FEC_LAGC_CUIF_L_REPORT_OB_P1_A0_OB                                                (32)
#define FEC_LAGC_CUIF_M_REPORT_OB_P1_A0_OB                                                (0xFFFFFFFF)

// ---------- REPORT_OB_P1_A1 bit-field ----------
#define FEC_LAGC_CUIF_P_REPORT_OB_P1_A1_OB                                                (0)
#define FEC_LAGC_CUIF_L_REPORT_OB_P1_A1_OB                                                (32)
#define FEC_LAGC_CUIF_M_REPORT_OB_P1_A1_OB                                                (0xFFFFFFFF)

// ---------- ACID_REPORT_VLD bit-field ----------
#define FEC_LAGC_CUIF_P_ACID_REPORT_VLD_ACID_WB_BYPASS_A1_VLD                             (11)
#define FEC_LAGC_CUIF_L_ACID_REPORT_VLD_ACID_WB_BYPASS_A1_VLD                             (1)
#define FEC_LAGC_CUIF_M_ACID_REPORT_VLD_ACID_WB_BYPASS_A1_VLD                             (0x00000800)
#define FEC_LAGC_CUIF_P_ACID_REPORT_VLD_ACID_WB_BYPASS_A0_VLD                             (10)
#define FEC_LAGC_CUIF_L_ACID_REPORT_VLD_ACID_WB_BYPASS_A0_VLD                             (1)
#define FEC_LAGC_CUIF_M_ACID_REPORT_VLD_ACID_WB_BYPASS_A0_VLD                             (0x00000400)
#define FEC_LAGC_CUIF_P_ACID_REPORT_VLD_ACID_WB_NEG_A1_VLD                                (9)
#define FEC_LAGC_CUIF_L_ACID_REPORT_VLD_ACID_WB_NEG_A1_VLD                                (1)
#define FEC_LAGC_CUIF_M_ACID_REPORT_VLD_ACID_WB_NEG_A1_VLD                                (0x00000200)
#define FEC_LAGC_CUIF_P_ACID_REPORT_VLD_ACID_WB_NEG_A0_VLD                                (8)
#define FEC_LAGC_CUIF_L_ACID_REPORT_VLD_ACID_WB_NEG_A0_VLD                                (1)
#define FEC_LAGC_CUIF_M_ACID_REPORT_VLD_ACID_WB_NEG_A0_VLD                                (0x00000100)
#define FEC_LAGC_CUIF_P_ACID_REPORT_VLD_ACID_WB_POS_A1_VLD                                (7)
#define FEC_LAGC_CUIF_L_ACID_REPORT_VLD_ACID_WB_POS_A1_VLD                                (1)
#define FEC_LAGC_CUIF_M_ACID_REPORT_VLD_ACID_WB_POS_A1_VLD                                (0x00000080)
#define FEC_LAGC_CUIF_P_ACID_REPORT_VLD_ACID_WB_POS_A0_VLD                                (6)
#define FEC_LAGC_CUIF_L_ACID_REPORT_VLD_ACID_WB_POS_A0_VLD                                (1)
#define FEC_LAGC_CUIF_M_ACID_REPORT_VLD_ACID_WB_POS_A0_VLD                                (0x00000040)
#define FEC_LAGC_CUIF_P_ACID_REPORT_VLD_ACID_IB_A1_VLD                                    (5)
#define FEC_LAGC_CUIF_L_ACID_REPORT_VLD_ACID_IB_A1_VLD                                    (1)
#define FEC_LAGC_CUIF_M_ACID_REPORT_VLD_ACID_IB_A1_VLD                                    (0x00000020)
#define FEC_LAGC_CUIF_P_ACID_REPORT_VLD_ACID_IB_A0_VLD                                    (4)
#define FEC_LAGC_CUIF_L_ACID_REPORT_VLD_ACID_IB_A0_VLD                                    (1)
#define FEC_LAGC_CUIF_M_ACID_REPORT_VLD_ACID_IB_A0_VLD                                    (0x00000010)
#define FEC_LAGC_CUIF_P_ACID_REPORT_VLD_ACID_WB_SF1_A1_VLD                                (3)
#define FEC_LAGC_CUIF_L_ACID_REPORT_VLD_ACID_WB_SF1_A1_VLD                                (1)
#define FEC_LAGC_CUIF_M_ACID_REPORT_VLD_ACID_WB_SF1_A1_VLD                                (0x00000008)
#define FEC_LAGC_CUIF_P_ACID_REPORT_VLD_ACID_WB_SF1_A0_VLD                                (2)
#define FEC_LAGC_CUIF_L_ACID_REPORT_VLD_ACID_WB_SF1_A0_VLD                                (1)
#define FEC_LAGC_CUIF_M_ACID_REPORT_VLD_ACID_WB_SF1_A0_VLD                                (0x00000004)
#define FEC_LAGC_CUIF_P_ACID_REPORT_VLD_ACID_WB_SF0_A1_VLD                                (1)
#define FEC_LAGC_CUIF_L_ACID_REPORT_VLD_ACID_WB_SF0_A1_VLD                                (1)
#define FEC_LAGC_CUIF_M_ACID_REPORT_VLD_ACID_WB_SF0_A1_VLD                                (0x00000002)
#define FEC_LAGC_CUIF_P_ACID_REPORT_VLD_ACID_WB_SF0_A0_VLD                                (0)
#define FEC_LAGC_CUIF_L_ACID_REPORT_VLD_ACID_WB_SF0_A0_VLD                                (1)
#define FEC_LAGC_CUIF_M_ACID_REPORT_VLD_ACID_WB_SF0_A0_VLD                                (0x00000001)

// ---------- ACID_WB_SF0_REPORT_A0 bit-field ----------
#define FEC_LAGC_CUIF_P_ACID_WB_SF0_REPORT_A0_WB_COMP                                     (0)
#define FEC_LAGC_CUIF_L_ACID_WB_SF0_REPORT_A0_WB_COMP                                     (11)
#define FEC_LAGC_CUIF_M_ACID_WB_SF0_REPORT_A0_WB_COMP                                     (0x000007FF)

// ---------- ACID_WB_SF0_REPORT_A1 bit-field ----------
#define FEC_LAGC_CUIF_P_ACID_WB_SF0_REPORT_A1_WB_COMP                                     (0)
#define FEC_LAGC_CUIF_L_ACID_WB_SF0_REPORT_A1_WB_COMP                                     (11)
#define FEC_LAGC_CUIF_M_ACID_WB_SF0_REPORT_A1_WB_COMP                                     (0x000007FF)

// ---------- ACID_WB_SF1_REPORT_A0 bit-field ----------
#define FEC_LAGC_CUIF_P_ACID_WB_SF1_REPORT_A0_WB_COMP                                     (0)
#define FEC_LAGC_CUIF_L_ACID_WB_SF1_REPORT_A0_WB_COMP                                     (11)
#define FEC_LAGC_CUIF_M_ACID_WB_SF1_REPORT_A0_WB_COMP                                     (0x000007FF)

// ---------- ACID_WB_SF1_REPORT_A1 bit-field ----------
#define FEC_LAGC_CUIF_P_ACID_WB_SF1_REPORT_A1_WB_COMP                                     (0)
#define FEC_LAGC_CUIF_L_ACID_WB_SF1_REPORT_A1_WB_COMP                                     (11)
#define FEC_LAGC_CUIF_M_ACID_WB_SF1_REPORT_A1_WB_COMP                                     (0x000007FF)

// ---------- ACID_IB_REPORT_A0 bit-field ----------
#define FEC_LAGC_CUIF_P_ACID_IB_REPORT_A0_IB_COMP                                         (0)
#define FEC_LAGC_CUIF_L_ACID_IB_REPORT_A0_IB_COMP                                         (11)
#define FEC_LAGC_CUIF_M_ACID_IB_REPORT_A0_IB_COMP                                         (0x000007FF)

// ---------- ACID_IB_REPORT_A1 bit-field ----------
#define FEC_LAGC_CUIF_P_ACID_IB_REPORT_A1_IB_COMP                                         (0)
#define FEC_LAGC_CUIF_L_ACID_IB_REPORT_A1_IB_COMP                                         (11)
#define FEC_LAGC_CUIF_M_ACID_IB_REPORT_A1_IB_COMP                                         (0x000007FF)

// ---------- ACID_WB_POS_REPORT_A0 bit-field ----------
#define FEC_LAGC_CUIF_P_ACID_WB_POS_REPORT_A0_WB_FILTER_POS                               (0)
#define FEC_LAGC_CUIF_L_ACID_WB_POS_REPORT_A0_WB_FILTER_POS                               (11)
#define FEC_LAGC_CUIF_M_ACID_WB_POS_REPORT_A0_WB_FILTER_POS                               (0x000007FF)

// ---------- ACID_WB_POS_REPORT_A1 bit-field ----------
#define FEC_LAGC_CUIF_P_ACID_WB_POS_REPORT_A1_WB_FILTER_POS                               (0)
#define FEC_LAGC_CUIF_L_ACID_WB_POS_REPORT_A1_WB_FILTER_POS                               (11)
#define FEC_LAGC_CUIF_M_ACID_WB_POS_REPORT_A1_WB_FILTER_POS                               (0x000007FF)

// ---------- ACID_WB_NEG_REPORT_A0 bit-field ----------
#define FEC_LAGC_CUIF_P_ACID_WB_NEG_REPORT_A0_WB_FILTER_NEG                               (0)
#define FEC_LAGC_CUIF_L_ACID_WB_NEG_REPORT_A0_WB_FILTER_NEG                               (11)
#define FEC_LAGC_CUIF_M_ACID_WB_NEG_REPORT_A0_WB_FILTER_NEG                               (0x000007FF)

// ---------- ACID_WB_NEG_REPORT_A1 bit-field ----------
#define FEC_LAGC_CUIF_P_ACID_WB_NEG_REPORT_A1_WB_FILTER_NEG                               (0)
#define FEC_LAGC_CUIF_L_ACID_WB_NEG_REPORT_A1_WB_FILTER_NEG                               (11)
#define FEC_LAGC_CUIF_M_ACID_WB_NEG_REPORT_A1_WB_FILTER_NEG                               (0x000007FF)

// ---------- ACID_WB_BYPASS_REPORT_A0 bit-field ----------
#define FEC_LAGC_CUIF_P_ACID_WB_BYPASS_REPORT_A0_WB_FILTER_BYPASS                         (0)
#define FEC_LAGC_CUIF_L_ACID_WB_BYPASS_REPORT_A0_WB_FILTER_BYPASS                         (11)
#define FEC_LAGC_CUIF_M_ACID_WB_BYPASS_REPORT_A0_WB_FILTER_BYPASS                         (0x000007FF)

// ---------- ACID_WB_BYPASS_REPORT_A1 bit-field ----------
#define FEC_LAGC_CUIF_P_ACID_WB_BYPASS_REPORT_A1_WB_FILTER_BYPASS                         (0)
#define FEC_LAGC_CUIF_L_ACID_WB_BYPASS_REPORT_A1_WB_FILTER_BYPASS                         (11)
#define FEC_LAGC_CUIF_M_ACID_WB_BYPASS_REPORT_A1_WB_FILTER_BYPASS                         (0x000007FF)

// ---------- INIT_GAIN_FLAG_FOR_INNER_A0 bit-field ----------
#define FEC_LAGC_CUIF_P_INIT_GAIN_FLAG_FOR_INNER_A0_INIT_GAIN_FLAG                        (0)
#define FEC_LAGC_CUIF_L_INIT_GAIN_FLAG_FOR_INNER_A0_INIT_GAIN_FLAG                        (23)
#define FEC_LAGC_CUIF_M_INIT_GAIN_FLAG_FOR_INNER_A0_INIT_GAIN_FLAG                        (0x007FFFFF)

// ---------- INIT_GAIN_FLAG_FOR_INNER_A1 bit-field ----------
#define FEC_LAGC_CUIF_P_INIT_GAIN_FLAG_FOR_INNER_A1_INIT_GAIN_FLAG                        (0)
#define FEC_LAGC_CUIF_L_INIT_GAIN_FLAG_FOR_INNER_A1_INIT_GAIN_FLAG                        (23)
#define FEC_LAGC_CUIF_M_INIT_GAIN_FLAG_FOR_INNER_A1_INIT_GAIN_FLAG                        (0x007FFFFF)

// ---------- EM_REPORT_VLD bit-field ----------
#define FEC_LAGC_CUIF_P_EM_REPORT_VLD_RF_GAIN_C1_A1                                       (3)
#define FEC_LAGC_CUIF_L_EM_REPORT_VLD_RF_GAIN_C1_A1                                       (1)
#define FEC_LAGC_CUIF_M_EM_REPORT_VLD_RF_GAIN_C1_A1                                       (0x00000008)
#define FEC_LAGC_CUIF_P_EM_REPORT_VLD_RF_GAIN_C1_A0                                       (2)
#define FEC_LAGC_CUIF_L_EM_REPORT_VLD_RF_GAIN_C1_A0                                       (1)
#define FEC_LAGC_CUIF_M_EM_REPORT_VLD_RF_GAIN_C1_A0                                       (0x00000004)
#define FEC_LAGC_CUIF_P_EM_REPORT_VLD_RF_GAIN_C0_A1                                       (1)
#define FEC_LAGC_CUIF_L_EM_REPORT_VLD_RF_GAIN_C0_A1                                       (1)
#define FEC_LAGC_CUIF_M_EM_REPORT_VLD_RF_GAIN_C0_A1                                       (0x00000002)
#define FEC_LAGC_CUIF_P_EM_REPORT_VLD_RF_GAIN_C0_A0                                       (0)
#define FEC_LAGC_CUIF_L_EM_REPORT_VLD_RF_GAIN_C0_A0                                       (1)
#define FEC_LAGC_CUIF_M_EM_REPORT_VLD_RF_GAIN_C0_A0                                       (0x00000001)

// ---------- RF_GAIN_ABSOLUTE_REPORT bit-field ----------
#define FEC_LAGC_CUIF_P_EM_RF_GAIN_ABSOLUTE                                               (0)
#define FEC_LAGC_CUIF_L_EM_RF_GAIN_ABSOLUTE                                               (32)
#define FEC_LAGC_CUIF_M_EM_RF_GAIN_ABSOLUTE                                               (0xFFFFFFFF)

// ---------- CUIF_END bit-field ----------
#define FEC_LAGC_CUIF_P_CUIF_END_CUIF_End                                                 (0)
#define FEC_LAGC_CUIF_L_CUIF_END_CUIF_End                                                 (1)
#define FEC_LAGC_CUIF_M_CUIF_END_CUIF_End                                                 (0x00000001)




//*********************POST DEFINED MACRO*************************/
#define CUIF_FEC_L_RX_REPORT_OB_P_OFT                                                       (CUIF_FEC_L_RX_REPORT_OB_P1_A0(0)-CUIF_FEC_L_RX_REPORT_OB_P0_A0(0))
#define CUIF_FEC_L_RX_REPORT_OB_A_OFT                                                       (CUIF_FEC_L_RX_REPORT_OB_P0_A1(0)-CUIF_FEC_L_RX_REPORT_OB_P0_A0(0))
#define CUIF_FEC_L_RX_REPORT_OB_BUF_OFT                                                     (CUIF_FEC_L_RX_REPORT_OB_P0_A0(1)-CUIF_FEC_L_RX_REPORT_OB_P0_A0(0))
#define CUIF_FEC_L_RX_REPORT_OB_P_A_BUFF(P_idx, A_idx, Buff_idx)                            (CUIF_FEC_L_RX_REPORT_OB_P0_A0(0)+(Buff_idx)*CUIF_FEC_L_RX_REPORT_OB_BUF_OFT+(P_idx)*CUIF_FEC_L_RX_REPORT_OB_P_OFT+(A_idx)*CUIF_FEC_L_RX_REPORT_OB_A_OFT)
#define CUIF_FEC_L_RX_RSSI_REPORT_C_OFT                                                     (CUIF_FEC_L_RX_RSSI_REPORT_C1_A0(0)-CUIF_FEC_L_RX_RSSI_REPORT_C0_A0(0))
#define CUIF_FEC_L_RX_RSSI_REPORT_A_OFT                                                     (CUIF_FEC_L_RX_RSSI_REPORT_C0_A1(0)-CUIF_FEC_L_RX_RSSI_REPORT_C0_A0(0))
#define CUIF_FEC_L_RX_RSSI_REPORT_BUF_OFT                                                   (CUIF_FEC_L_RX_RSSI_REPORT_C0_A0(1)-CUIF_FEC_L_RX_RSSI_REPORT_C0_A0(0))
#define CUIF_FEC_L_RX_RSSI_REPORT_C_A_BUFF(C_idx, A_idx, Buff_idx)                          (CUIF_FEC_L_RX_RSSI_REPORT_C0_A0(0)+(Buff_idx)*CUIF_FEC_L_RX_RSSI_REPORT_BUF_OFT+(C_idx)*CUIF_FEC_L_RX_RSSI_REPORT_C_OFT+(A_idx)*CUIF_FEC_L_RX_RSSI_REPORT_A_OFT)
#define CUIF_FEC_L_RX_EM_RF_GAIN_ABSOLUTE_C_OFT                                             (CUIF_FEC_L_RX_EM_RF_GAIN_ABSOLUTE_C1_A0-CUIF_FEC_L_RX_EM_RF_GAIN_ABSOLUTE_C0_A0)
#define CUIF_FEC_L_RX_EM_RF_GAIN_ABSOLUTE_A_OFT                                             (CUIF_FEC_L_RX_EM_RF_GAIN_ABSOLUTE_C0_A1-CUIF_FEC_L_RX_EM_RF_GAIN_ABSOLUTE_C0_A0)
#define CUIF_FEC_L_RX_EM_RF_GAIN_ABSOLUTE_C_A(C_idx, A_idx)                                 (CUIF_FEC_L_RX_EM_RF_GAIN_ABSOLUTE_C0_A0+(C_idx)*CUIF_FEC_L_RX_EM_RF_GAIN_ABSOLUTE_C_OFT+(A_idx)*CUIF_FEC_L_RX_EM_RF_GAIN_ABSOLUTE_A_OFT)
#define CUIF_FEC_L_RX_ACID_WB_SF0_REPORT_A_OFT                                              (CUIF_FEC_L_RX_ACID_WB_SF0_REPORT_A1-CUIF_FEC_L_RX_ACID_WB_SF0_REPORT_A0)    
#define CUIF_FEC_L_RX_ACID_WB_SF0_REPORT_A(A_idx)                                           (CUIF_FEC_L_RX_ACID_WB_SF0_REPORT_A0+(A_idx)*CUIF_FEC_L_RX_ACID_WB_SF0_REPORT_A_OFT)
#define CUIF_FEC_L_RX_ACID_WB_SF1_REPORT_A_OFT                                              (CUIF_FEC_L_RX_ACID_WB_SF1_REPORT_A1-CUIF_FEC_L_RX_ACID_WB_SF1_REPORT_A0)    
#define CUIF_FEC_L_RX_ACID_WB_SF1_REPORT_A(A_idx)                                           (CUIF_FEC_L_RX_ACID_WB_SF1_REPORT_A0+(A_idx)*CUIF_FEC_L_RX_ACID_WB_SF1_REPORT_A_OFT)
#define CUIF_FEC_L_RX_ACID_IB_REPORT_A_OFT                                                  (CUIF_FEC_L_RX_ACID_IB_REPORT_A1-CUIF_FEC_L_RX_ACID_IB_REPORT_A0)    
#define CUIF_FEC_L_RX_ACID_IB_REPORT_A(A_idx)                                               (CUIF_FEC_L_RX_ACID_IB_REPORT_A0+(A_idx)*CUIF_FEC_L_RX_ACID_IB_REPORT_A_OFT)
#define CUIF_FEC_L_RX_ACID_WB_POS_REPORT_A_OFT                                              (CUIF_FEC_L_RX_ACID_WB_POS_REPORT_A1-CUIF_FEC_L_RX_ACID_WB_POS_REPORT_A0)    
#define CUIF_FEC_L_RX_ACID_WB_POS_REPORT_A(A_idx)                                           (CUIF_FEC_L_RX_ACID_WB_POS_REPORT_A0+(A_idx)*CUIF_FEC_L_RX_ACID_WB_POS_REPORT_A_OFT)
#define CUIF_FEC_L_RX_ACID_WB_NEG_REPORT_A_OFT                                              (CUIF_FEC_L_RX_ACID_WB_NEG_REPORT_A1-CUIF_FEC_L_RX_ACID_WB_NEG_REPORT_A0)    
#define CUIF_FEC_L_RX_ACID_WB_NEG_REPORT_A(A_idx)                                           (CUIF_FEC_L_RX_ACID_WB_NEG_REPORT_A0+(A_idx)*CUIF_FEC_L_RX_ACID_WB_NEG_REPORT_A_OFT)
#define CUIF_FEC_L_RX_ACID_WB_BYPASS_REPORT_A_OFT                                           (CUIF_FEC_L_RX_ACID_WB_BYPASS_REPORT_A1-CUIF_FEC_L_RX_ACID_WB_BYPASS_REPORT_A0)    
#define CUIF_FEC_L_RX_ACID_WB_BYPASS_REPORT_A(A_idx)                                        (CUIF_FEC_L_RX_ACID_WB_BYPASS_REPORT_A0+(A_idx)*CUIF_FEC_L_RX_ACID_WB_BYPASS_REPORT_A_OFT)
#define CUIF_FEC_L_RX_INIT_GAIN_FLAG_FOR_INNER_A_OFT                                        (CUIF_FEC_L_RX_INIT_GAIN_FLAG_FOR_INNER_A1-CUIF_FEC_L_RX_INIT_GAIN_FLAG_FOR_INNER_A0)    
#define CUIF_FEC_L_RX_INIT_GAIN_FLAG_FOR_INNER_A(A_idx)                                     (CUIF_FEC_L_RX_INIT_GAIN_FLAG_FOR_INNER_A0+(A_idx)*CUIF_FEC_L_RX_INIT_GAIN_FLAG_FOR_INNER_A_OFT)
#define CUIF_FEC_L_RX_ELNA_BPI_P_OFT                                                        (CUIF_FEC_L_RX_ELNA_BPI_P1A0(0)-CUIF_FEC_L_RX_ELNA_BPI_P0A0(0))
#define CUIF_FEC_L_RX_ELNA_BPI_A_OFT                                                        (CUIF_FEC_L_RX_ELNA_BPI_P0A1(0)-CUIF_FEC_L_RX_ELNA_BPI_P0A0(0))
#define CUIF_FEC_L_RX_ELNA_BPI_BUF_OFT                                                      (CUIF_FEC_L_RX_ELNA_BPI_P0A0(1)-CUIF_FEC_L_RX_ELNA_BPI_P0A0(0))
#define CUIF_FEC_L_RX_ELNA_BPI_P_A_BUFF(P_idx, A_idx, Buff_idx)                             (CUIF_FEC_L_RX_ELNA_BPI_P0A0(0)+(Buff_idx)*CUIF_FEC_L_RX_ELNA_BPI_BUF_OFT+(P_idx)*CUIF_FEC_L_RX_ELNA_BPI_P_OFT+(A_idx)*CUIF_FEC_L_RX_ELNA_BPI_A_OFT)      
#define CUIF_FEC_L_RX_ELNA_MIPI_BYPASS_P_OFT                                                (CUIF_FEC_L_RX_ELNA_MIPI_BYPASS_P1A0(0)-CUIF_FEC_L_RX_ELNA_MIPI_BYPASS_P0A0(0))
#define CUIF_FEC_L_RX_ELNA_MIPI_BYPASS_A_OFT                                                (CUIF_FEC_L_RX_ELNA_MIPI_BYPASS_P0A1(0)-CUIF_FEC_L_RX_ELNA_MIPI_BYPASS_P0A0(0))
#define CUIF_FEC_L_RX_ELNA_MIPI_BYPASS_BUF_OFT                                              (CUIF_FEC_L_RX_ELNA_MIPI_BYPASS_P0A0(1)-CUIF_FEC_L_RX_ELNA_MIPI_BYPASS_P0A0(0))
#define CUIF_FEC_L_RX_ELNA_MIPI_BYPASS_P_A_BUFF(P_idx, A_idx, Buff_idx)                     (CUIF_FEC_L_RX_ELNA_MIPI_BYPASS_P0A0(0)+(Buff_idx)*CUIF_FEC_L_RX_ELNA_MIPI_BYPASS_BUF_OFT+(P_idx)*CUIF_FEC_L_RX_ELNA_MIPI_BYPASS_P_OFT+(A_idx)*CUIF_FEC_L_RX_ELNA_MIPI_BYPASS_A_OFT)      
#define CUIF_FEC_L_RX_ELNA_MIPI_ON_P_OFT                                                    (CUIF_FEC_L_RX_ELNA_MIPI_ON_P1A0(0)-CUIF_FEC_L_RX_ELNA_MIPI_ON_P0A0(0))
#define CUIF_FEC_L_RX_ELNA_MIPI_ON_A_OFT                                                    (CUIF_FEC_L_RX_ELNA_MIPI_ON_P0A1(0)-CUIF_FEC_L_RX_ELNA_MIPI_ON_P0A0(0))
#define CUIF_FEC_L_RX_ELNA_MIPI_ON_BUF_OFT                                                  (CUIF_FEC_L_RX_ELNA_MIPI_ON_P0A0(1)-CUIF_FEC_L_RX_ELNA_MIPI_ON_P0A0(0))
#define CUIF_FEC_L_RX_ELNA_MIPI_ON_P_A_BUFF(P_idx, A_idx, Buff_idx)                         (CUIF_FEC_L_RX_ELNA_MIPI_ON_P0A0(0)+(Buff_idx)*CUIF_FEC_L_RX_ELNA_MIPI_ON_BUF_OFT+(P_idx)*CUIF_FEC_L_RX_ELNA_MIPI_ON_P_OFT+(A_idx)*CUIF_FEC_L_RX_ELNA_MIPI_ON_A_OFT)      
#define CUIF_FEC_L_RX_CAL_RXDATA_DC_BURST_INFO_ADDR_P_OFT                                   (CUIF_FEC_L_RX_CAL_RXDATA_DC_BURST_INFO_ADDR_P1(0)-CUIF_FEC_L_RX_CAL_RXDATA_DC_BURST_INFO_ADDR_P0(0))    
#define CUIF_FEC_L_RX_CAL_RXDATA_DC_BURST_INFO_ADDR_BUF_OFT                                 (CUIF_FEC_L_RX_CAL_RXDATA_DC_BURST_INFO_ADDR_P0(1)-CUIF_FEC_L_RX_CAL_RXDATA_DC_BURST_INFO_ADDR_P0(0))
#define CUIF_FEC_L_RX_CAL_RXDATA_DC_BURST_INFO_ADDR(P_idx, Buff_idx)                        (CUIF_FEC_L_RX_CAL_RXDATA_DC_BURST_INFO_ADDR_P0(0)+(Buff_idx)*CUIF_FEC_L_RX_CAL_RXDATA_DC_BURST_INFO_ADDR_BUF_OFT+(P_idx)*CUIF_FEC_L_RX_CAL_RXDATA_DC_BURST_INFO_ADDR_P_OFT)
#define CUIF_FEC_L_RX_CAL_RXDATA_PATHLOSS_BURST_INFO_ADDR_C_OFT                             (CUIF_FEC_L_RX_CAL_RXDATA_PATHLOSS_BURST_INFO_ADDR_C1(0)-CUIF_FEC_L_RX_CAL_RXDATA_PATHLOSS_BURST_INFO_ADDR_C0(0))    
#define CUIF_FEC_L_RX_CAL_RXDATA_PATHLOSS_BURST_INFO_ADDR_BUF_OFT                           (CUIF_FEC_L_RX_CAL_RXDATA_PATHLOSS_BURST_INFO_ADDR_C0(1)-CUIF_FEC_L_RX_CAL_RXDATA_PATHLOSS_BURST_INFO_ADDR_C0(0))
#define CUIF_FEC_L_RX_CAL_RXDATA_PATHLOSS_BURST_INFO_ADDR(C_idx, Buff_idx)                  (CUIF_FEC_L_RX_CAL_RXDATA_PATHLOSS_BURST_INFO_ADDR_C0(0)+(Buff_idx)*CUIF_FEC_L_RX_CAL_RXDATA_PATHLOSS_BURST_INFO_ADDR_BUF_OFT+(C_idx)*CUIF_FEC_L_RX_CAL_RXDATA_PATHLOSS_BURST_INFO_ADDR_C_OFT)
#define CUIF_FEC_L_RX_GAIN_TBL_ADDR_P_OFT                                                   (CUIF_FEC_L_RX_GAIN_TBL_ADDR_P1_A0(0)-CUIF_FEC_L_RX_GAIN_TBL_ADDR_P0_A0(0))
#define CUIF_FEC_L_RX_GAIN_TBL_ADDR_A_OFT                                                   (CUIF_FEC_L_RX_GAIN_TBL_ADDR_P0_A1(0)-CUIF_FEC_L_RX_GAIN_TBL_ADDR_P0_A0(0))
#define CUIF_FEC_L_RX_GAIN_TBL_ADDR_BUF_OFT                                                 (CUIF_FEC_L_RX_GAIN_TBL_ADDR_P0_A0(1)-CUIF_FEC_L_RX_GAIN_TBL_ADDR_P0_A0(0))
#define CUIF_FEC_L_RX_GAIN_TBL_ADDR_P_A_BUFF(P_idx, A_idx, Buff_idx)                        (CUIF_FEC_L_RX_GAIN_TBL_ADDR_P0_A0(0)+(Buff_idx)*CUIF_FEC_L_RX_GAIN_TBL_ADDR_BUF_OFT+(P_idx)*CUIF_FEC_L_RX_GAIN_TBL_ADDR_P_OFT+(A_idx)*CUIF_FEC_L_RX_GAIN_TBL_ADDR_A_OFT)      

#endif //ifndef _FEC_CMIF_REG_MT6293_H_
