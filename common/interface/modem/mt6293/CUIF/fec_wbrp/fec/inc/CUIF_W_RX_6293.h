#ifndef __FEC_W_RX_H__
#define __FEC_W_RX_H__


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
#endif



#define FEC_W_RX_REG_BASE                                                       ((UINT32)FEC_WBRP_FEC_W_RX_INFO)


#define WAGC_EXT_FIX_GAIN_EN                                                    ((APBADDR32)(FEC_W_RX_REG_BASE + 0x00000000))
#define WAGC_EXT_RF_GAIN                                                        ((APBADDR32)(FEC_W_RX_REG_BASE + 0x00000004))
#define WAGC_EXT_DIG_GAIN                                                       ((APBADDR32)(FEC_W_RX_REG_BASE + 0x00000008))
#define WAGC_INI_TIME(n)                                                        ((APBADDR32)(FEC_W_RX_REG_BASE + 0x0000000C + (n)*4))   //n is from 0 to 1
#define WAGC_FRAME_INDEX(n)                                                     ((APBADDR32)(FEC_W_RX_REG_BASE + 0x00000014 + (n)*4))   //n is from 0 to 1
#define WAGC_END_TIME(n)                                                        ((APBADDR32)(FEC_W_RX_REG_BASE + 0x0000001C + (n)*4))   //n is from 0 to 1
#define WAGC_INI_STA(n)                                                         ((APBADDR32)(FEC_W_RX_REG_BASE + 0x00000024 + (n)*4))   //n is from 0 to 1
#define WAGC_RX_RF_FREQUENCY(n)                                                 ((APBADDR32)(FEC_W_RX_REG_BASE + 0x0000002C + (n)*4))   //n is from 0 to 1
#define WAGC_CC_MASK(n)                                                         ((APBADDR32)(FEC_W_RX_REG_BASE + 0x00000034 + (n)*4))   //n is from 0 to 1
#define WAGC_ADJUST_SETPOINT                                                    ((APBADDR32)(FEC_W_RX_REG_BASE + 0x0000003C))
#define WAGC_ARX_CON                                                            ((APBADDR32)(FEC_W_RX_REG_BASE + 0x00000040))
#define WAGC_TPD                                                                ((APBADDR32)(FEC_W_RX_REG_BASE + 0x00000044))
#define WAGC_PATHLOSS_TEMP                                                      ((APBADDR32)(FEC_W_RX_REG_BASE + 0x00000048))
#define WAGC_PL_DATA_ADDR(n)                                                    ((APBADDR32)(FEC_W_RX_REG_BASE + 0x0000004C + (n)*4))   //n is from 0 to 1
#define WAGC_PL_DATA_LENGTH                                                     ((APBADDR32)(FEC_W_RX_REG_BASE + 0x00000054))
#define WAGC_DC_TABLE_ADDR(n)                                                   ((APBADDR32)(FEC_W_RX_REG_BASE + 0x00000058 + (n)*4))   //n is from 0 to 1
#define WAGC_DC_TABLE_LENGTH                                                    ((APBADDR32)(FEC_W_RX_REG_BASE + 0x00000060))
#define WAGC_RF_GAIN_A0(n)                                                      ((APBADDR32)(FEC_W_RX_REG_BASE + 0x00000064 + (n)*4))   //n is from 0 to 1
#define WAGC_RF_GAIN_A1(n)                                                      ((APBADDR32)(FEC_W_RX_REG_BASE + 0x0000006C + (n)*4))   //n is from 0 to 1
#define WAGC_DIG_GAIN_C0_A0(n)                                                  ((APBADDR32)(FEC_W_RX_REG_BASE + 0x00000074 + (n)*4))   //n is from 0 to 1
#define WAGC_EQ_GAIN_C0_A0(n)                                                   ((APBADDR32)(FEC_W_RX_REG_BASE + 0x0000007C + (n)*4))   //n is from 0 to 1
#define WAGC_DIG_GAIN_C0_A1(n)                                                  ((APBADDR32)(FEC_W_RX_REG_BASE + 0x00000084 + (n)*4))   //n is from 0 to 1
#define WAGC_EQ_GAIN_C0_A1(n)                                                   ((APBADDR32)(FEC_W_RX_REG_BASE + 0x0000008C + (n)*4))   //n is from 0 to 1
#define WAGC_DIG_GAIN_C1_A0(n)                                                  ((APBADDR32)(FEC_W_RX_REG_BASE + 0x00000094 + (n)*4))   //n is from 0 to 1
#define WAGC_EQ_GAIN_C1_A0(n)                                                   ((APBADDR32)(FEC_W_RX_REG_BASE + 0x0000009C + (n)*4))   //n is from 0 to 1
#define WAGC_DIG_GAIN_C1_A1(n)                                                  ((APBADDR32)(FEC_W_RX_REG_BASE + 0x000000A4 + (n)*4))   //n is from 0 to 1
#define WAGC_EQ_GAIN_C1_A1(n)                                                   ((APBADDR32)(FEC_W_RX_REG_BASE + 0x000000AC + (n)*4))   //n is from 0 to 1
#define WAGC_REPORT_VALID                                                       ((APBADDR32)(FEC_W_RX_REG_BASE + 0x000000B4))
#define WAGC_REPORT_ISR_A0                                                      ((APBADDR32)(FEC_W_RX_REG_BASE + 0x000000B8))
#define WAGC_REPORT_ISR_A1                                                      ((APBADDR32)(FEC_W_RX_REG_BASE + 0x000000BC))
#define WAGC_REPORT_RSSI_C0_A0                                                  ((APBADDR32)(FEC_W_RX_REG_BASE + 0x000000C0))
#define WAGC_REPORT_RSSI_C0_A1                                                  ((APBADDR32)(FEC_W_RX_REG_BASE + 0x000000C4))
#define WAGC_REPORT_RSSI_C1_A0                                                  ((APBADDR32)(FEC_W_RX_REG_BASE + 0x000000C8))
#define WAGC_REPORT_RSSI_C1_A1                                                  ((APBADDR32)(FEC_W_RX_REG_BASE + 0x000000CC))
#define WAGC_ELNA_BPI_A0(n)                                                     ((APBADDR32)(FEC_W_RX_REG_BASE + 0x000000D0 + (n)*4))   //n is from 0 to 1
#define WAGC_ELNA_BPI_A1(n)                                                     ((APBADDR32)(FEC_W_RX_REG_BASE + 0x000000D8 + (n)*4))   //n is from 0 to 1
#define WAGC_ELNA_MIPI_ON_A0(n)                                                 ((APBADDR32)(FEC_W_RX_REG_BASE + 0x000000E0 + (n)*4))   //n is from 0 to 1
#define WAGC_ELNA_MIPI_BYPASS_A0(n)                                             ((APBADDR32)(FEC_W_RX_REG_BASE + 0x000000E8 + (n)*4))   //n is from 0 to 1
#define WAGC_ELNA_MIPI_ON_A1(n)                                                 ((APBADDR32)(FEC_W_RX_REG_BASE + 0x000000F0 + (n)*4))   //n is from 0 to 1
#define WAGC_ELNA_MIPI_BYPASS_A1(n)                                             ((APBADDR32)(FEC_W_RX_REG_BASE + 0x000000F8 + (n)*4))   //n is from 0 to 1
#define WAGC_BACKUP_RF_GAIN_A0(n)                                               ((APBADDR32)(FEC_W_RX_REG_BASE + 0x00000100 + (n)*4))   //n is from 0 to 7
#define WAGC_BACKUP_DIG_GAIN_A0(n)                                              ((APBADDR32)(FEC_W_RX_REG_BASE + 0x00000120 + (n)*4))   //n is from 0 to 7
#define WAGC_BACKUP_EQ_GAIN_A0(n)                                               ((APBADDR32)(FEC_W_RX_REG_BASE + 0x00000140 + (n)*4))   //n is from 0 to 7
#define WAGC_BACKUP_RF_GAIN_A1(n)                                               ((APBADDR32)(FEC_W_RX_REG_BASE + 0x00000160 + (n)*4))   //n is from 0 to 7
#define WAGC_BACKUP_DIG_GAIN_A1(n)                                              ((APBADDR32)(FEC_W_RX_REG_BASE + 0x00000180 + (n)*4))   //n is from 0 to 7
#define WAGC_BACKUP_EQ_GAIN_A1(n)                                               ((APBADDR32)(FEC_W_RX_REG_BASE + 0x000001A0 + (n)*4))   //n is from 0 to 7
#define WAGC_END                                                                ((APBADDR32)(FEC_W_RX_REG_BASE + 0x000003FC))


// ---------- WAGC_EXT_FIX_GAIN_EN bit-field ----------
#define FEC_WAGC_CUIF_P_WAGC_EXT_FIX_GAIN_EN_FIX_RF_GAIN_EN                               (1)
#define FEC_WAGC_CUIF_L_WAGC_EXT_FIX_GAIN_EN_FIX_RF_GAIN_EN                               (1)
#define FEC_WAGC_CUIF_M_WAGC_EXT_FIX_GAIN_EN_FIX_RF_GAIN_EN                               (0x00000002)
#define FEC_WAGC_CUIF_P_WAGC_EXT_FIX_GAIN_EN_FIX_DIG_GAIN_EN                              (0)
#define FEC_WAGC_CUIF_L_WAGC_EXT_FIX_GAIN_EN_FIX_DIG_GAIN_EN                              (1)
#define FEC_WAGC_CUIF_M_WAGC_EXT_FIX_GAIN_EN_FIX_DIG_GAIN_EN                              (0x00000001)

// ---------- WAGC_EXT_RF_GAIN bit-field ----------
#define FEC_WAGC_CUIF_P_WAGC_EXT_RF_GAIN_AGC_INI_STA                                      (16)
#define FEC_WAGC_CUIF_L_WAGC_EXT_RF_GAIN_AGC_INI_STA                                      (2)
#define FEC_WAGC_CUIF_M_WAGC_EXT_RF_GAIN_AGC_INI_STA                                      (0x00030000)
#define FEC_WAGC_CUIF_P_WAGC_EXT_RF_GAIN_LNA_idx                                          (8)
#define FEC_WAGC_CUIF_L_WAGC_EXT_RF_GAIN_LNA_idx                                          (4)
#define FEC_WAGC_CUIF_M_WAGC_EXT_RF_GAIN_LNA_idx                                          (0x00000F00)
#define FEC_WAGC_CUIF_P_WAGC_EXT_RF_GAIN_PGA_idx                                          (0)
#define FEC_WAGC_CUIF_L_WAGC_EXT_RF_GAIN_PGA_idx                                          (4)
#define FEC_WAGC_CUIF_M_WAGC_EXT_RF_GAIN_PGA_idx                                          (0x0000000F)

// ---------- WAGC_EXT_DIG_GAIN bit-field ----------
#define FEC_WAGC_CUIF_P_WAGC_EXT_DIG_GAIN_dig_gain_dB2                                    (16)
#define FEC_WAGC_CUIF_L_WAGC_EXT_DIG_GAIN_dig_gain_dB2                                    (11)
#define FEC_WAGC_CUIF_M_WAGC_EXT_DIG_GAIN_dig_gain_dB2                                    (0x07FF0000)


// ---------- WAGC_INI_TIME bit-field ----------
#define FEC_WAGC_CUIF_P_WAGC_INI_TIME_stime_bias                                          (16)
#define FEC_WAGC_CUIF_L_WAGC_INI_TIME_stime_bias                                          (16)
#define FEC_WAGC_CUIF_M_WAGC_INI_TIME_stime_bias                                          (0xFFFF0000)
#define FEC_WAGC_CUIF_P_WAGC_INI_TIME_slot                                                (4)
#define FEC_WAGC_CUIF_L_WAGC_INI_TIME_slot                                                (4)
#define FEC_WAGC_CUIF_M_WAGC_INI_TIME_slot                                                (0x000000F0)
#define FEC_WAGC_CUIF_P_WAGC_INI_TIME_symbol                                              (0)
#define FEC_WAGC_CUIF_L_WAGC_INI_TIME_symbol                                              (4)
#define FEC_WAGC_CUIF_M_WAGC_INI_TIME_symbol                                              (0x0000000F)

// ---------- WAGC_FRAME_INDEX bit-field ----------
#define FEC_WAGC_CUIF_P_WAGC_FRAME_INDEX_frame                                            (0)
#define FEC_WAGC_CUIF_L_WAGC_FRAME_INDEX_frame                                            (32)
#define FEC_WAGC_CUIF_M_WAGC_FRAME_INDEX_frame                                            (0xFFFFFFFF)

// ---------- WAGC_END_TIME bit-field ----------
#define FEC_WAGC_CUIF_P_WAGC_END_TIME_slot                                                (4)
#define FEC_WAGC_CUIF_L_WAGC_END_TIME_slot                                                (4)
#define FEC_WAGC_CUIF_M_WAGC_END_TIME_slot                                                (0x000000F0)
#define FEC_WAGC_CUIF_P_WAGC_END_TIME_symbol                                              (0)
#define FEC_WAGC_CUIF_L_WAGC_END_TIME_symbol                                              (4)
#define FEC_WAGC_CUIF_M_WAGC_END_TIME_symbol                                              (0x0000000F)

// ---------- WAGC_INI_STA bit-field ----------
#define FEC_WAGC_CUIF_P_WAGC_INI_STA_ELNA_2nd_saw_A1                                      (25)
#define FEC_WAGC_CUIF_L_WAGC_INI_STA_ELNA_2nd_saw_A1                                      (1)
#define FEC_WAGC_CUIF_M_WAGC_INI_STA_ELNA_2nd_saw_A1                                      (0x02000000)
#define FEC_WAGC_CUIF_P_WAGC_INI_STA_ELNA_sel_A1                                          (24)
#define FEC_WAGC_CUIF_L_WAGC_INI_STA_ELNA_sel_A1                                          (1)
#define FEC_WAGC_CUIF_M_WAGC_INI_STA_ELNA_sel_A1                                          (0x01000000)
#define FEC_WAGC_CUIF_P_WAGC_INI_STA_ELNA_MODE_A1                                         (23)
#define FEC_WAGC_CUIF_L_WAGC_INI_STA_ELNA_MODE_A1                                         (1)
#define FEC_WAGC_CUIF_M_WAGC_INI_STA_ELNA_MODE_A1                                         (0x00800000)
#define FEC_WAGC_CUIF_P_WAGC_INI_STA_ELNA_EN_A1                                           (22)
#define FEC_WAGC_CUIF_L_WAGC_INI_STA_ELNA_EN_A1                                           (1)
#define FEC_WAGC_CUIF_M_WAGC_INI_STA_ELNA_EN_A1                                           (0x00400000)
#define FEC_WAGC_CUIF_P_WAGC_INI_STA_ELNA_2nd_saw_A0                                      (21)
#define FEC_WAGC_CUIF_L_WAGC_INI_STA_ELNA_2nd_saw_A0                                      (1)
#define FEC_WAGC_CUIF_M_WAGC_INI_STA_ELNA_2nd_saw_A0                                      (0x00200000)
#define FEC_WAGC_CUIF_P_WAGC_INI_STA_ELNA_sel_A0                                          (20)
#define FEC_WAGC_CUIF_L_WAGC_INI_STA_ELNA_sel_A0                                          (1)
#define FEC_WAGC_CUIF_M_WAGC_INI_STA_ELNA_sel_A0                                          (0x00100000)
#define FEC_WAGC_CUIF_P_WAGC_INI_STA_ELNA_MODE_A0                                         (19)
#define FEC_WAGC_CUIF_L_WAGC_INI_STA_ELNA_MODE_A0                                         (1)
#define FEC_WAGC_CUIF_M_WAGC_INI_STA_ELNA_MODE_A0                                         (0x00080000)
#define FEC_WAGC_CUIF_P_WAGC_INI_STA_ELNA_EN_A0                                           (18)
#define FEC_WAGC_CUIF_L_WAGC_INI_STA_ELNA_EN_A0                                           (1)
#define FEC_WAGC_CUIF_M_WAGC_INI_STA_ELNA_EN_A0                                           (0x00040000)
#define FEC_WAGC_CUIF_P_WAGC_INI_STA_Tier1_mode                                           (16)
#define FEC_WAGC_CUIF_L_WAGC_INI_STA_Tier1_mode                                           (1)
#define FEC_WAGC_CUIF_M_WAGC_INI_STA_Tier1_mode                                           (0x00010000)
#define FEC_WAGC_CUIF_P_WAGC_INI_STA_init_rf_gain_sel                                     (11)
#define FEC_WAGC_CUIF_L_WAGC_INI_STA_init_rf_gain_sel                                     (1)
#define FEC_WAGC_CUIF_M_WAGC_INI_STA_init_rf_gain_sel                                     (0x00000800)
#define FEC_WAGC_CUIF_P_WAGC_INI_STA_agc_no_tracking                                      (10)
#define FEC_WAGC_CUIF_L_WAGC_INI_STA_agc_no_tracking                                      (1)
#define FEC_WAGC_CUIF_M_WAGC_INI_STA_agc_no_tracking                                      (0x00000400)
#define FEC_WAGC_CUIF_P_WAGC_INI_STA_c_sel                                                (9)
#define FEC_WAGC_CUIF_L_WAGC_INI_STA_c_sel                                                (1)
#define FEC_WAGC_CUIF_M_WAGC_INI_STA_c_sel                                                (0x00000200)
#define FEC_WAGC_CUIF_P_WAGC_INI_STA_IQ_SWAP                                              (8)
#define FEC_WAGC_CUIF_L_WAGC_INI_STA_IQ_SWAP                                              (1)
#define FEC_WAGC_CUIF_M_WAGC_INI_STA_IQ_SWAP                                              (0x00000100)
#define FEC_WAGC_CUIF_P_WAGC_INI_STA_AGC_FREQUENCY_INDEX                                  (5)
#define FEC_WAGC_CUIF_L_WAGC_INI_STA_AGC_FREQUENCY_INDEX                                  (3)
#define FEC_WAGC_CUIF_M_WAGC_INI_STA_AGC_FREQUENCY_INDEX                                  (0x000000E0)
#define FEC_WAGC_CUIF_P_WAGC_INI_STA_AGC_ANT_STA                                          (2)
#define FEC_WAGC_CUIF_L_WAGC_INI_STA_AGC_ANT_STA                                          (2)
#define FEC_WAGC_CUIF_M_WAGC_INI_STA_AGC_ANT_STA                                          (0x0000000C)
#define FEC_WAGC_CUIF_P_WAGC_INI_STA_C1                                                   (1)
#define FEC_WAGC_CUIF_L_WAGC_INI_STA_C1                                                   (1)
#define FEC_WAGC_CUIF_M_WAGC_INI_STA_C1                                                   (0x00000002)
#define FEC_WAGC_CUIF_P_WAGC_INI_STA_C0                                                   (0)
#define FEC_WAGC_CUIF_L_WAGC_INI_STA_C0                                                   (1)
#define FEC_WAGC_CUIF_M_WAGC_INI_STA_C0                                                   (0x00000001)

// ---------- WAGC_RX_RF_FREQUENCY bit-field ----------
#define FEC_WAGC_CUIF_P_WAGC_RX_RF_FREQUENCY_FREQ                                         (0)
#define FEC_WAGC_CUIF_L_WAGC_RX_RF_FREQUENCY_FREQ                                         (32)
#define FEC_WAGC_CUIF_M_WAGC_RX_RF_FREQUENCY_FREQ                                         (0xFFFFFFFF)

// ---------- WAGC_CC_MASK bit-field ----------
#define FEC_WAGC_CUIF_P_WAGC_CC_MASK_C1                                                   (1)
#define FEC_WAGC_CUIF_L_WAGC_CC_MASK_C1                                                   (1)
#define FEC_WAGC_CUIF_M_WAGC_CC_MASK_C1                                                   (0x00000002)
#define FEC_WAGC_CUIF_P_WAGC_CC_MASK_C0                                                   (0)
#define FEC_WAGC_CUIF_L_WAGC_CC_MASK_C0                                                   (1)
#define FEC_WAGC_CUIF_M_WAGC_CC_MASK_C0                                                   (0x00000001)

// ---------- WAGC_ADJUST_SETPOINT bit-field ----------
#define FEC_WAGC_CUIF_P_WAGC_ADJUST_SETPOINT_C1                                           (8)
#define FEC_WAGC_CUIF_L_WAGC_ADJUST_SETPOINT_C1                                           (1)
#define FEC_WAGC_CUIF_M_WAGC_ADJUST_SETPOINT_C1                                           (0x00000100)
#define FEC_WAGC_CUIF_P_WAGC_ADJUST_SETPOINT_C0                                           (0)
#define FEC_WAGC_CUIF_L_WAGC_ADJUST_SETPOINT_C0                                           (1)
#define FEC_WAGC_CUIF_M_WAGC_ADJUST_SETPOINT_C0                                           (0x00000001)

// ---------- WAGC_ARX_CON bit-field ----------
#define FEC_WAGC_CUIF_P_WAGC_ARX_CON_LPM_MODE                                             (24)
#define FEC_WAGC_CUIF_L_WAGC_ARX_CON_LPM_MODE                                             (1)
#define FEC_WAGC_CUIF_M_WAGC_ARX_CON_LPM_MODE                                             (0x01000000)
#define FEC_WAGC_CUIF_P_WAGC_ARX_CON_ARX_CHANGE_FLAG                                      (8)
#define FEC_WAGC_CUIF_L_WAGC_ARX_CON_ARX_CHANGE_FLAG                                      (1)
#define FEC_WAGC_CUIF_M_WAGC_ARX_CON_ARX_CHANGE_FLAG                                      (0x00000100)
#define FEC_WAGC_CUIF_P_WAGC_ARX_CON_GAIN_LPM_EN                                          (0)
#define FEC_WAGC_CUIF_L_WAGC_ARX_CON_GAIN_LPM_EN                                          (1)
#define FEC_WAGC_CUIF_M_WAGC_ARX_CON_GAIN_LPM_EN                                          (0x00000001)

// ---------- WAGC_TPD bit-field ----------
#define FEC_WAGC_CUIF_P_WAGC_TPD_A0_TPD_VLD                                               (19)
#define FEC_WAGC_CUIF_L_WAGC_TPD_A0_TPD_VLD                                               (1)
#define FEC_WAGC_CUIF_M_WAGC_TPD_A0_TPD_VLD                                               (0x00080000)
#define FEC_WAGC_CUIF_P_WAGC_TPD_A1_TPD_VLD                                               (18)
#define FEC_WAGC_CUIF_L_WAGC_TPD_A1_TPD_VLD                                               (1)
#define FEC_WAGC_CUIF_M_WAGC_TPD_A1_TPD_VLD                                               (0x00040000)
#define FEC_WAGC_CUIF_P_WAGC_TPD_A0_TPD                                                   (12)
#define FEC_WAGC_CUIF_L_WAGC_TPD_A0_TPD                                                   (6)
#define FEC_WAGC_CUIF_M_WAGC_TPD_A0_TPD                                                   (0x0003F000)
#define FEC_WAGC_CUIF_P_WAGC_TPD_A1_TPD                                                   (6)
#define FEC_WAGC_CUIF_L_WAGC_TPD_A1_TPD                                                   (6)
#define FEC_WAGC_CUIF_M_WAGC_TPD_A1_TPD                                                   (0x00000FC0)

// ---------- WAGC_PATHLOSS_TEMP bit-field ----------
#define FEC_WAGC_CUIF_P_WAGC_PATHLOSS_TEMP_A1_PL_TEMP_OFFSET                              (16)
#define FEC_WAGC_CUIF_L_WAGC_PATHLOSS_TEMP_A1_PL_TEMP_OFFSET                              (16)
#define FEC_WAGC_CUIF_M_WAGC_PATHLOSS_TEMP_A1_PL_TEMP_OFFSET                              (0xFFFF0000)
#define FEC_WAGC_CUIF_P_WAGC_PATHLOSS_TEMP_A0_PL_TEMP_OFFSET                              (0)
#define FEC_WAGC_CUIF_L_WAGC_PATHLOSS_TEMP_A0_PL_TEMP_OFFSET                              (16)
#define FEC_WAGC_CUIF_M_WAGC_PATHLOSS_TEMP_A0_PL_TEMP_OFFSET                              (0x0000FFFF)

// ---------- WAGC_PL_DATA_ADDR bit-field ----------
#define FEC_WAGC_CUIF_P_WAGC_PL_DATA_ADDR_ADDRESS                                         (0)
#define FEC_WAGC_CUIF_L_WAGC_PL_DATA_ADDR_ADDRESS                                         (32)
#define FEC_WAGC_CUIF_M_WAGC_PL_DATA_ADDR_ADDRESS                                         (0xFFFFFFFF)

// ---------- WAGC_PL_DATA_LENGTH bit-field ----------
#define FEC_WAGC_CUIF_P_WAGC_PL_DATA_LENGTH_LENGTH                                        (0)
#define FEC_WAGC_CUIF_L_WAGC_PL_DATA_LENGTH_LENGTH                                        (32)
#define FEC_WAGC_CUIF_M_WAGC_PL_DATA_LENGTH_LENGTH                                        (0xFFFFFFFF)

// ---------- WAGC_DC_TABLE_ADDR bit-field ----------
#define FEC_WAGC_CUIF_P_WAGC_DC_TABLE_ADDR_ADDRESS                                        (0)
#define FEC_WAGC_CUIF_L_WAGC_DC_TABLE_ADDR_ADDRESS                                        (32)
#define FEC_WAGC_CUIF_M_WAGC_DC_TABLE_ADDR_ADDRESS                                        (0xFFFFFFFF)

// ---------- WAGC_DC_TABLE_LENGTH bit-field ----------
#define FEC_WAGC_CUIF_P_WAGC_DC_TABLE_LENGTH_LENGTH                                       (0)
#define FEC_WAGC_CUIF_L_WAGC_DC_TABLE_LENGTH_LENGTH                                       (32)
#define FEC_WAGC_CUIF_M_WAGC_DC_TABLE_LENGTH_LENGTH                                       (0xFFFFFFFF)

// ---------- WAGC_RF_GAIN_A0 bit-field ----------
#define FEC_WAGC_CUIF_P_WAGC_RF_GAIN_A0_AGC_INI_STA                                       (16)
#define FEC_WAGC_CUIF_L_WAGC_RF_GAIN_A0_AGC_INI_STA                                       (2)
#define FEC_WAGC_CUIF_M_WAGC_RF_GAIN_A0_AGC_INI_STA                                       (0x00030000)
#define FEC_WAGC_CUIF_P_WAGC_RF_GAIN_A0_LNA_idx                                           (8)
#define FEC_WAGC_CUIF_L_WAGC_RF_GAIN_A0_LNA_idx                                           (4)
#define FEC_WAGC_CUIF_M_WAGC_RF_GAIN_A0_LNA_idx                                           (0x00000F00)
#define FEC_WAGC_CUIF_P_WAGC_RF_GAIN_A0_PGA_idx                                           (0)
#define FEC_WAGC_CUIF_L_WAGC_RF_GAIN_A0_PGA_idx                                           (4)
#define FEC_WAGC_CUIF_M_WAGC_RF_GAIN_A0_PGA_idx                                           (0x0000000F)

// ---------- WAGC_RF_GAIN_A1 bit-field ----------
#define FEC_WAGC_CUIF_P_WAGC_RF_GAIN_A1_AGC_INI_STA                                       (16)
#define FEC_WAGC_CUIF_L_WAGC_RF_GAIN_A1_AGC_INI_STA                                       (2)
#define FEC_WAGC_CUIF_M_WAGC_RF_GAIN_A1_AGC_INI_STA                                       (0x00030000)
#define FEC_WAGC_CUIF_P_WAGC_RF_GAIN_A1_LNA_idx                                           (8)
#define FEC_WAGC_CUIF_L_WAGC_RF_GAIN_A1_LNA_idx                                           (4)
#define FEC_WAGC_CUIF_M_WAGC_RF_GAIN_A1_LNA_idx                                           (0x00000F00)
#define FEC_WAGC_CUIF_P_WAGC_RF_GAIN_A1_PGA_idx                                           (0)
#define FEC_WAGC_CUIF_L_WAGC_RF_GAIN_A1_PGA_idx                                           (4)
#define FEC_WAGC_CUIF_M_WAGC_RF_GAIN_A1_PGA_idx                                           (0x0000000F)

// ---------- WAGC_DIG_GAIN_C0_A0 bit-field ----------
#define FEC_WAGC_CUIF_P_WAGC_DIG_GAIN_C0_A0_dig_gain_dB2                                  (16)
#define FEC_WAGC_CUIF_L_WAGC_DIG_GAIN_C0_A0_dig_gain_dB2                                  (11)
#define FEC_WAGC_CUIF_M_WAGC_DIG_GAIN_C0_A0_dig_gain_dB2                                  (0x07FF0000)
#define FEC_WAGC_CUIF_P_WAGC_DIG_GAIN_C0_A0_RSSI_IN                                       (0)
#define FEC_WAGC_CUIF_L_WAGC_DIG_GAIN_C0_A0_RSSI_IN                                       (15)
#define FEC_WAGC_CUIF_M_WAGC_DIG_GAIN_C0_A0_RSSI_IN                                       (0x00007FFF)

// ---------- WAGC_EQ_GAIN_C0_A0 bit-field ----------
#define FEC_WAGC_CUIF_P_WAGC_EQ_GAIN_C0_A0_RF_EQ                                          (16)
#define FEC_WAGC_CUIF_L_WAGC_EQ_GAIN_C0_A0_RF_EQ                                          (5)
#define FEC_WAGC_CUIF_M_WAGC_EQ_GAIN_C0_A0_RF_EQ                                          (0x001F0000)
#define FEC_WAGC_CUIF_P_WAGC_EQ_GAIN_C0_A0_DIG_EQ                                         (0)
#define FEC_WAGC_CUIF_L_WAGC_EQ_GAIN_C0_A0_DIG_EQ                                         (10)
#define FEC_WAGC_CUIF_M_WAGC_EQ_GAIN_C0_A0_DIG_EQ                                         (0x000003FF)

// ---------- WAGC_DIG_GAIN_C0_A1 bit-field ----------
#define FEC_WAGC_CUIF_P_WAGC_DIG_GAIN_C0_A1_dig_gain_dB2                                  (16)
#define FEC_WAGC_CUIF_L_WAGC_DIG_GAIN_C0_A1_dig_gain_dB2                                  (11)
#define FEC_WAGC_CUIF_M_WAGC_DIG_GAIN_C0_A1_dig_gain_dB2                                  (0x07FF0000)
#define FEC_WAGC_CUIF_P_WAGC_DIG_GAIN_C0_A1_RSSI_IN                                       (0)
#define FEC_WAGC_CUIF_L_WAGC_DIG_GAIN_C0_A1_RSSI_IN                                       (15)
#define FEC_WAGC_CUIF_M_WAGC_DIG_GAIN_C0_A1_RSSI_IN                                       (0x00007FFF)

// ---------- WAGC_EQ_GAIN_C0_A1 bit-field ----------
#define FEC_WAGC_CUIF_P_WAGC_EQ_GAIN_C0_A1_RF_EQ                                          (16)
#define FEC_WAGC_CUIF_L_WAGC_EQ_GAIN_C0_A1_RF_EQ                                          (5)
#define FEC_WAGC_CUIF_M_WAGC_EQ_GAIN_C0_A1_RF_EQ                                          (0x001F0000)
#define FEC_WAGC_CUIF_P_WAGC_EQ_GAIN_C0_A1_DIG_EQ                                         (0)
#define FEC_WAGC_CUIF_L_WAGC_EQ_GAIN_C0_A1_DIG_EQ                                         (10)
#define FEC_WAGC_CUIF_M_WAGC_EQ_GAIN_C0_A1_DIG_EQ                                         (0x000003FF)

// ---------- WAGC_DIG_GAIN_C1_A0 bit-field ----------
#define FEC_WAGC_CUIF_P_WAGC_DIG_GAIN_C1_A0_dig_gain_dB2                                  (16)
#define FEC_WAGC_CUIF_L_WAGC_DIG_GAIN_C1_A0_dig_gain_dB2                                  (11)
#define FEC_WAGC_CUIF_M_WAGC_DIG_GAIN_C1_A0_dig_gain_dB2                                  (0x07FF0000)
#define FEC_WAGC_CUIF_P_WAGC_DIG_GAIN_C1_A0_RSSI_IN                                       (0)
#define FEC_WAGC_CUIF_L_WAGC_DIG_GAIN_C1_A0_RSSI_IN                                       (15)
#define FEC_WAGC_CUIF_M_WAGC_DIG_GAIN_C1_A0_RSSI_IN                                       (0x00007FFF)

// ---------- WAGC_EQ_GAIN_C1_A0 bit-field ----------
#define FEC_WAGC_CUIF_P_WAGC_EQ_GAIN_C1_A0_RF_EQ                                          (16)
#define FEC_WAGC_CUIF_L_WAGC_EQ_GAIN_C1_A0_RF_EQ                                          (5)
#define FEC_WAGC_CUIF_M_WAGC_EQ_GAIN_C1_A0_RF_EQ                                          (0x001F0000)
#define FEC_WAGC_CUIF_P_WAGC_EQ_GAIN_C1_A0_DIG_EQ                                         (0)
#define FEC_WAGC_CUIF_L_WAGC_EQ_GAIN_C1_A0_DIG_EQ                                         (10)
#define FEC_WAGC_CUIF_M_WAGC_EQ_GAIN_C1_A0_DIG_EQ                                         (0x000003FF)

// ---------- WAGC_DIG_GAIN_C1_A1 bit-field ----------
#define FEC_WAGC_CUIF_P_WAGC_DIG_GAIN_C1_A1_dig_gain_dB2                                  (16)
#define FEC_WAGC_CUIF_L_WAGC_DIG_GAIN_C1_A1_dig_gain_dB2                                  (11)
#define FEC_WAGC_CUIF_M_WAGC_DIG_GAIN_C1_A1_dig_gain_dB2                                  (0x07FF0000)
#define FEC_WAGC_CUIF_P_WAGC_DIG_GAIN_C1_A1_RSSI_IN                                       (0)
#define FEC_WAGC_CUIF_L_WAGC_DIG_GAIN_C1_A1_RSSI_IN                                       (15)
#define FEC_WAGC_CUIF_M_WAGC_DIG_GAIN_C1_A1_RSSI_IN                                       (0x00007FFF)

// ---------- WAGC_EQ_GAIN_C1_A1 bit-field ----------
#define FEC_WAGC_CUIF_P_WAGC_EQ_GAIN_C1_A1_RF_EQ                                          (16)
#define FEC_WAGC_CUIF_L_WAGC_EQ_GAIN_C1_A1_RF_EQ                                          (5)
#define FEC_WAGC_CUIF_M_WAGC_EQ_GAIN_C1_A1_RF_EQ                                          (0x001F0000)
#define FEC_WAGC_CUIF_P_WAGC_EQ_GAIN_C1_A1_DIG_EQ                                         (0)
#define FEC_WAGC_CUIF_L_WAGC_EQ_GAIN_C1_A1_DIG_EQ                                         (10)
#define FEC_WAGC_CUIF_M_WAGC_EQ_GAIN_C1_A1_DIG_EQ                                         (0x000003FF)

// ---------- WAGC_REPORT_VALID bit-field ----------
#define FEC_WAGC_CUIF_P_WAGC_REPORT_VALID_RSSI_OUT_C1_A1_VALID                            (5)
#define FEC_WAGC_CUIF_L_WAGC_REPORT_VALID_RSSI_OUT_C1_A1_VALID                            (1)
#define FEC_WAGC_CUIF_M_WAGC_REPORT_VALID_RSSI_OUT_C1_A1_VALID                            (0x00000020)
#define FEC_WAGC_CUIF_P_WAGC_REPORT_VALID_RSSI_OUT_C0_A1_VALID                            (4)
#define FEC_WAGC_CUIF_L_WAGC_REPORT_VALID_RSSI_OUT_C0_A1_VALID                            (1)
#define FEC_WAGC_CUIF_M_WAGC_REPORT_VALID_RSSI_OUT_C0_A1_VALID                            (0x00000010)
#define FEC_WAGC_CUIF_P_WAGC_REPORT_VALID_RSSI_OUT_C1_A0_VALID                            (3)
#define FEC_WAGC_CUIF_L_WAGC_REPORT_VALID_RSSI_OUT_C1_A0_VALID                            (1)
#define FEC_WAGC_CUIF_M_WAGC_REPORT_VALID_RSSI_OUT_C1_A0_VALID                            (0x00000008)
#define FEC_WAGC_CUIF_P_WAGC_REPORT_VALID_RSSI_OUT_C0_A0_VALID                            (2)
#define FEC_WAGC_CUIF_L_WAGC_REPORT_VALID_RSSI_OUT_C0_A0_VALID                            (1)
#define FEC_WAGC_CUIF_M_WAGC_REPORT_VALID_RSSI_OUT_C0_A0_VALID                            (0x00000004)
#define FEC_WAGC_CUIF_P_WAGC_REPORT_VALID_A1_ISR_PWR_VLD                                   (1)
#define FEC_WAGC_CUIF_L_WAGC_REPORT_VALID_A1_ISR_PWR_VLD                                   (1)
#define FEC_WAGC_CUIF_M_WAGC_REPORT_VALID_A1_ISR_PWR_VLD                                   (0x00000002)
#define FEC_WAGC_CUIF_P_WAGC_REPORT_VALID_A0_ISR_PWR_VLD                                   (0)
#define FEC_WAGC_CUIF_L_WAGC_REPORT_VALID_A0_ISR_PWR_VLD                                   (1)
#define FEC_WAGC_CUIF_M_WAGC_REPORT_VALID_A0_ISR_PWR_VLD                                   (0x00000001)

// ---------- WAGC_REPORT_ISR bit-field ----------
#define FEC_WAGC_CUIF_P_WAGC_REPORT_ISR_PWR                                               (0)
#define FEC_WAGC_CUIF_L_WAGC_REPORT_ISR_PWR                                               (11)
#define FEC_WAGC_CUIF_M_WAGC_REPORT_ISR_PWR                                               (0x000007FF)

// ---------- WAGC_REPORT_RSSI_C0_A0 bit-field ----------
#define FEC_WAGC_CUIF_P_WAGC_REPORT_RSSI_C0_A0_RSSI_OUT_C0_A0                             (0)
#define FEC_WAGC_CUIF_L_WAGC_REPORT_RSSI_C0_A0_RSSI_OUT_C0_A0                             (10)
#define FEC_WAGC_CUIF_M_WAGC_REPORT_RSSI_C0_A0_RSSI_OUT_C0_A0                             (0x000003FF)

// ---------- WAGC_REPORT_RSSI_C0_A1 bit-field ----------
#define FEC_WAGC_CUIF_P_WAGC_REPORT_RSSI_C0_A1_RSSI_OUT_C0_A1                             (0)
#define FEC_WAGC_CUIF_L_WAGC_REPORT_RSSI_C0_A1_RSSI_OUT_C0_A1                             (10)
#define FEC_WAGC_CUIF_M_WAGC_REPORT_RSSI_C0_A1_RSSI_OUT_C0_A1                             (0x000003FF)

// ---------- WAGC_REPORT_RSSI_C1_A0 bit-field ----------
#define FEC_WAGC_CUIF_P_WAGC_REPORT_RSSI_C1_A0_RSSI_OUT_C1_A0                             (0)
#define FEC_WAGC_CUIF_L_WAGC_REPORT_RSSI_C1_A0_RSSI_OUT_C1_A0                             (10)
#define FEC_WAGC_CUIF_M_WAGC_REPORT_RSSI_C1_A0_RSSI_OUT_C1_A0                             (0x000003FF)

// ---------- WAGC_REPORT_RSSI_C1_A1 bit-field ----------
#define FEC_WAGC_CUIF_P_WAGC_REPORT_RSSI_C1_A1_RSSI_OUT_C1_A1                             (0)
#define FEC_WAGC_CUIF_L_WAGC_REPORT_RSSI_C1_A1_RSSI_OUT_C1_A1                             (10)
#define FEC_WAGC_CUIF_M_WAGC_REPORT_RSSI_C1_A1_RSSI_OUT_C1_A1                             (0x000003FF)

// ---------- WAGC_ELNA_BPI_A0 bit-field ----------
#define FEC_WAGC_CUIF_P_WAGC_ELNA_BPI_A0_bypass_cw                                        (24)
#define FEC_WAGC_CUIF_L_WAGC_ELNA_BPI_A0_bypass_cw                                        (2)
#define FEC_WAGC_CUIF_M_WAGC_ELNA_BPI_A0_bypass_cw                                        (0x03000000)
#define FEC_WAGC_CUIF_P_WAGC_ELNA_BPI_A0_on_cw                                            (16)
#define FEC_WAGC_CUIF_L_WAGC_ELNA_BPI_A0_on_cw                                            (2)
#define FEC_WAGC_CUIF_M_WAGC_ELNA_BPI_A0_on_cw                                            (0x00030000)
#define FEC_WAGC_CUIF_P_WAGC_ELNA_BPI_A0_pin2_sel                                         (8)
#define FEC_WAGC_CUIF_L_WAGC_ELNA_BPI_A0_pin2_sel                                         (5)
#define FEC_WAGC_CUIF_M_WAGC_ELNA_BPI_A0_pin2_sel                                         (0x00001F00)
#define FEC_WAGC_CUIF_P_WAGC_ELNA_BPI_A0_pin1_sel                                         (0)
#define FEC_WAGC_CUIF_L_WAGC_ELNA_BPI_A0_pin1_sel                                         (5)
#define FEC_WAGC_CUIF_M_WAGC_ELNA_BPI_A0_pin1_sel                                         (0x0000001F)

// ---------- WAGC_ELNA_BPI_A1 bit-field ----------
#define FEC_WAGC_CUIF_P_WAGC_ELNA_BPI_A1_bypass_cw                                        (24)
#define FEC_WAGC_CUIF_L_WAGC_ELNA_BPI_A1_bypass_cw                                        (2)
#define FEC_WAGC_CUIF_M_WAGC_ELNA_BPI_A1_bypass_cw                                        (0x03000000)
#define FEC_WAGC_CUIF_P_WAGC_ELNA_BPI_A1_on_cw                                            (16)
#define FEC_WAGC_CUIF_L_WAGC_ELNA_BPI_A1_on_cw                                            (2)
#define FEC_WAGC_CUIF_M_WAGC_ELNA_BPI_A1_on_cw                                            (0x00030000)
#define FEC_WAGC_CUIF_P_WAGC_ELNA_BPI_A1_pin2_sel                                         (8)
#define FEC_WAGC_CUIF_L_WAGC_ELNA_BPI_A1_pin2_sel                                         (5)
#define FEC_WAGC_CUIF_M_WAGC_ELNA_BPI_A1_pin2_sel                                         (0x00001F00)
#define FEC_WAGC_CUIF_P_WAGC_ELNA_BPI_A1_pin1_sel                                         (0)
#define FEC_WAGC_CUIF_L_WAGC_ELNA_BPI_A1_pin1_sel                                         (5)
#define FEC_WAGC_CUIF_M_WAGC_ELNA_BPI_A1_pin1_sel                                         (0x0000001F)

// ---------- WAGC_ELNA_MIPI_ON_A0 bit-field ----------
#define FEC_WAGC_CUIF_P_WAGC_ELNA_MIPI_ON_A0_port_sel                                     (24)
#define FEC_WAGC_CUIF_L_WAGC_ELNA_MIPI_ON_A0_port_sel                                     (3)
#define FEC_WAGC_CUIF_M_WAGC_ELNA_MIPI_ON_A0_port_sel                                     (0x07000000)
#define FEC_WAGC_CUIF_P_WAGC_ELNA_MIPI_ON_A0_mipi_cw                                      (0)
#define FEC_WAGC_CUIF_L_WAGC_ELNA_MIPI_ON_A0_mipi_cw                                      (22)
#define FEC_WAGC_CUIF_M_WAGC_ELNA_MIPI_ON_A0_mipi_cw                                      (0x003FFFFF)

// ---------- WAGC_ELNA_MIPI_BYPASS_A0 bit-field ----------
#define FEC_WAGC_CUIF_P_WAGC_ELNA_MIPI_BYPASS_A0_port_sel                                 (24)
#define FEC_WAGC_CUIF_L_WAGC_ELNA_MIPI_BYPASS_A0_port_sel                                 (3)
#define FEC_WAGC_CUIF_M_WAGC_ELNA_MIPI_BYPASS_A0_port_sel                                 (0x07000000)
#define FEC_WAGC_CUIF_P_WAGC_ELNA_MIPI_BYPASS_A0_mipi_cw                                  (0)
#define FEC_WAGC_CUIF_L_WAGC_ELNA_MIPI_BYPASS_A0_mipi_cw                                  (22)
#define FEC_WAGC_CUIF_M_WAGC_ELNA_MIPI_BYPASS_A0_mipi_cw                                  (0x003FFFFF)

// ---------- WAGC_ELNA_MIPI_ON_A1 bit-field ----------
#define FEC_WAGC_CUIF_P_WAGC_ELNA_MIPI_ON_A1_port_sel                                     (24)
#define FEC_WAGC_CUIF_L_WAGC_ELNA_MIPI_ON_A1_port_sel                                     (3)
#define FEC_WAGC_CUIF_M_WAGC_ELNA_MIPI_ON_A1_port_sel                                     (0x07000000)
#define FEC_WAGC_CUIF_P_WAGC_ELNA_MIPI_ON_A1_mipi_cw                                      (0)
#define FEC_WAGC_CUIF_L_WAGC_ELNA_MIPI_ON_A1_mipi_cw                                      (22)
#define FEC_WAGC_CUIF_M_WAGC_ELNA_MIPI_ON_A1_mipi_cw                                      (0x003FFFFF)

// ---------- WAGC_ELNA_MIPI_BYPASS_A1 bit-field ----------
#define FEC_WAGC_CUIF_P_WAGC_ELNA_MIPI_BYPASS_A1_port_sel                                 (24)
#define FEC_WAGC_CUIF_L_WAGC_ELNA_MIPI_BYPASS_A1_port_sel                                 (3)
#define FEC_WAGC_CUIF_M_WAGC_ELNA_MIPI_BYPASS_A1_port_sel                                 (0x07000000)
#define FEC_WAGC_CUIF_P_WAGC_ELNA_MIPI_BYPASS_A1_mipi_cw                                  (0)
#define FEC_WAGC_CUIF_L_WAGC_ELNA_MIPI_BYPASS_A1_mipi_cw                                  (22)
#define FEC_WAGC_CUIF_M_WAGC_ELNA_MIPI_BYPASS_A1_mipi_cw                                  (0x003FFFFF)

// ---------- WAGC_BACKUP_RF_GAIN_A0 bit-field ----------
#define FEC_WAGC_CUIF_P_WAGC_BACKUP_RF_GAIN_A0_AGC_INI_STA                                (16)
#define FEC_WAGC_CUIF_L_WAGC_BACKUP_RF_GAIN_A0_AGC_INI_STA                                (2)
#define FEC_WAGC_CUIF_M_WAGC_BACKUP_RF_GAIN_A0_AGC_INI_STA                                (0x00030000)
#define FEC_WAGC_CUIF_P_WAGC_BACKUP_RF_GAIN_A0_LNA_idx                                    (8)
#define FEC_WAGC_CUIF_L_WAGC_BACKUP_RF_GAIN_A0_LNA_idx                                    (4)
#define FEC_WAGC_CUIF_M_WAGC_BACKUP_RF_GAIN_A0_LNA_idx                                    (0x00000F00)
#define FEC_WAGC_CUIF_P_WAGC_BACKUP_RF_GAIN_A0_PGA_idx                                    (0)
#define FEC_WAGC_CUIF_L_WAGC_BACKUP_RF_GAIN_A0_PGA_idx                                    (4)
#define FEC_WAGC_CUIF_M_WAGC_BACKUP_RF_GAIN_A0_PGA_idx                                    (0x0000000F)

// ---------- WAGC_BACKUP_DIG_GAIN_A0 bit-field ----------
#define FEC_WAGC_CUIF_P_WAGC_BACKUP_DIG_GAIN_A0_dig_gain_dB2                              (16)
#define FEC_WAGC_CUIF_L_WAGC_BACKUP_DIG_GAIN_A0_dig_gain_dB2                              (11)
#define FEC_WAGC_CUIF_M_WAGC_BACKUP_DIG_GAIN_A0_dig_gain_dB2                              (0x07FF0000)
#define FEC_WAGC_CUIF_P_WAGC_BACKUP_DIG_GAIN_A0_RSSI_IN                                   (0)
#define FEC_WAGC_CUIF_L_WAGC_BACKUP_DIG_GAIN_A0_RSSI_IN                                   (15)
#define FEC_WAGC_CUIF_M_WAGC_BACKUP_DIG_GAIN_A0_RSSI_IN                                   (0x00007FFF)

// ---------- WAGC_BACKUP_EQ_GAIN_A0 bit-field ----------
#define FEC_WAGC_CUIF_P_WAGC_BACKUP_EQ_GAIN_A0_RF_EQ                                      (16)
#define FEC_WAGC_CUIF_L_WAGC_BACKUP_EQ_GAIN_A0_RF_EQ                                      (5)
#define FEC_WAGC_CUIF_M_WAGC_BACKUP_EQ_GAIN_A0_RF_EQ                                      (0x001F0000)
#define FEC_WAGC_CUIF_P_WAGC_BACKUP_EQ_GAIN_A0_DIG_EQ                                     (0)
#define FEC_WAGC_CUIF_L_WAGC_BACKUP_EQ_GAIN_A0_DIG_EQ                                     (10)
#define FEC_WAGC_CUIF_M_WAGC_BACKUP_EQ_GAIN_A0_DIG_EQ                                     (0x000003FF)

// ---------- WAGC_BACKUP_RF_GAIN_A1 bit-field ----------
#define FEC_WAGC_CUIF_P_WAGC_BACKUP_RF_GAIN_A1_AGC_INI_STA                                (16)
#define FEC_WAGC_CUIF_L_WAGC_BACKUP_RF_GAIN_A1_AGC_INI_STA                                (2)
#define FEC_WAGC_CUIF_M_WAGC_BACKUP_RF_GAIN_A1_AGC_INI_STA                                (0x00030000)
#define FEC_WAGC_CUIF_P_WAGC_BACKUP_RF_GAIN_A1_LNA_idx                                    (8)
#define FEC_WAGC_CUIF_L_WAGC_BACKUP_RF_GAIN_A1_LNA_idx                                    (4)
#define FEC_WAGC_CUIF_M_WAGC_BACKUP_RF_GAIN_A1_LNA_idx                                    (0x00000F00)
#define FEC_WAGC_CUIF_P_WAGC_BACKUP_RF_GAIN_A1_PGA_idx                                    (0)
#define FEC_WAGC_CUIF_L_WAGC_BACKUP_RF_GAIN_A1_PGA_idx                                    (4)
#define FEC_WAGC_CUIF_M_WAGC_BACKUP_RF_GAIN_A1_PGA_idx                                    (0x0000000F)

// ---------- WAGC_BACKUP_DIG_GAIN_A1 bit-field ----------
#define FEC_WAGC_CUIF_P_WAGC_BACKUP_DIG_GAIN_A1_dig_gain_dB2                              (16)
#define FEC_WAGC_CUIF_L_WAGC_BACKUP_DIG_GAIN_A1_dig_gain_dB2                              (11)
#define FEC_WAGC_CUIF_M_WAGC_BACKUP_DIG_GAIN_A1_dig_gain_dB2                              (0x07FF0000)
#define FEC_WAGC_CUIF_P_WAGC_BACKUP_DIG_GAIN_A1_RSSI_IN                                   (0)
#define FEC_WAGC_CUIF_L_WAGC_BACKUP_DIG_GAIN_A1_RSSI_IN                                   (15)
#define FEC_WAGC_CUIF_M_WAGC_BACKUP_DIG_GAIN_A1_RSSI_IN                                   (0x00007FFF)

// ---------- WAGC_BACKUP_EQ_GAIN_A1 bit-field ----------
#define FEC_WAGC_CUIF_P_WAGC_BACKUP_EQ_GAIN_A1_RF_EQ                                      (16)
#define FEC_WAGC_CUIF_L_WAGC_BACKUP_EQ_GAIN_A1_RF_EQ                                      (5)
#define FEC_WAGC_CUIF_M_WAGC_BACKUP_EQ_GAIN_A1_RF_EQ                                      (0x001F0000)
#define FEC_WAGC_CUIF_P_WAGC_BACKUP_EQ_GAIN_A1_DIG_EQ                                     (0)
#define FEC_WAGC_CUIF_L_WAGC_BACKUP_EQ_GAIN_A1_DIG_EQ                                     (10)
#define FEC_WAGC_CUIF_M_WAGC_BACKUP_EQ_GAIN_A1_DIG_EQ                                     (0x000003FF)

#endif // __FEC_W_RX_H__
