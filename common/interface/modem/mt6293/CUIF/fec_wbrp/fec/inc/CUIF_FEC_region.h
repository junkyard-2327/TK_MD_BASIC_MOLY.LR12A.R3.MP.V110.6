#ifndef __CUIF_FEC_region_H__
#define __CUIF_FEC_region_H__
#define FEC_L_TX_PATH_NUM 2
#define FEC_L_TX_BUFF_NUM 2
#define FEC_TPC_VCC_IDX_NUM 8
#define IDX_CFR_DYM    4
#define CFR_MODE_DYM   3
#define DPD_LUT_ENTRY_NUM    16

// ----------------- FEC_W_TX Register Definition -------------------
typedef volatile struct {
    kal_uint32 FEC_WTPC_CUIF_UPC1_OFFSET;                                                 // 0x0000
    kal_uint32 FEC_WTPC_CUIF_UPC2_OFFSET;                                                 // 0x0004
    kal_uint32 FEC_WTPC_CUIF_PCFE2_OFFSET;                                                // 0x0008
    kal_uint32 FEC_WTPC_CUIF_PDP1_PSP1_OFFSET;                                            // 0x000C
    kal_uint32 FEC_WTPC_CUIF_PDP2_PSP1_OFFSET;                                            // 0x0010
    kal_uint32 FEC_WTPC_CUIF_PDQ1_PSQ1_OFFSET;                                            // 0x0014
    kal_uint32 FEC_WTPC_CUIF_PDQ2_PSQ1_OFFSET;                                            // 0x0018
    kal_uint32 FEC_WTPC_CUIF_PSP1_SLOTEN;                                                 // 0x001C
    kal_uint32 FEC_WTPC_CUIF_HSDPCCH_SLOT_EN;                                             // 0x0020
    kal_uint32 FEC_WTPC_CUIF_HSDPCCH_SYM_OFFSET;                                          // 0x0024
    kal_uint32 FEC_WTPC_CUIF_PS_CON;                                                      // 0x0028
    kal_uint32 FEC_WTPC_CUIF_PSP1_OFFSETn[3];                                             // 0x002C..0x0034
    kal_uint32 FEC_WTPC_CUIF_PSP2_OFFSET;                                                 // 0x0038
    kal_uint32 FEC_WTPC_CUIF_PSQ1_OFFSET;                                                 // 0x003C
    kal_uint32 FEC_WTPC_CUIF_PSQ2_OFFSET;                                                 // 0x0040
    kal_uint32 FEC_WTPC_CUIF_PS_LO_CON1;                                                  // 0x0044
    kal_uint32 FEC_WTPC_CUIF_PS_LO_CON2;                                                  // 0x0048
    kal_uint32 FEC_WTPC_CUIF_PS_LO_CON3[2];                                               // 0x004C..0x0050
    kal_uint32 FEC_WTPC_CUIF_PS_LO_CON4[2];                                               // 0x0054..0x0058
    kal_uint32 FEC_WTPC_CUIF_PRACH_STATUS;                                                // 0x005C
    kal_uint32 FEC_WTPC_CUIF_UPC_RACH_ST_RF;                                              // 0x0060
    kal_uint32 FEC_WTPC_CUIF_UPC_RACH_SP_RF;                                              // 0x0064
    kal_uint32 FEC_WTPC_CUIF_UPC_RACH_MSG_ST_RF;                                          // 0x0068
    kal_uint32 FEC_WTPC_CUIF_UPC_RACH_MSG_SP_RF;                                          // 0x006C
    kal_uint32 FEC_WTPC_CUIF_UPC_RACH_PRE_ST_RF;                                          // 0x0070
    kal_uint32 FEC_WTPC_CUIF_UPC_RACH_PRE_SP_RF;                                          // 0x0074
    kal_uint32 FEC_WTPC_CUIF_FREQ_L1D;                                                    // 0x0078
    kal_uint32 FEC_WTPC_CUIF_FREQ_L1RFD;                                                  // 0x007C
    kal_uint32 FEC_WTPC_CUIF_TMP_L1RFD;                                                   // 0x0080
    kal_uint32 FEC_WTPC_CUIF_CUIF_READY;                                                  // 0x0084
    kal_uint32 FEC_WTPC_CUIF_L1_DDPC_SET0[2];                                             // 0x0088..0x008C
    kal_uint32 FEC_WTPC_CUIF_L1_DDPC_SET1[2];                                             // 0x0090..0x0094
    kal_uint32 FEC_WTPC_CUIF_UCHEN_FRM;                                                   // 0x0098
    kal_uint32 FEC_WTPC_CUIF_EMI_ADDR0;                                                   // 0x009C
    kal_uint32 FEC_WTPC_CUIF_EMI_ADDR1;                                                   // 0x00A0
    kal_uint32 FEC_WTPC_CUIF_EMI_ADDR2;                                                   // 0x00A4
    kal_uint32 FEC_WTPC_CUIF_EMI_ADDR3;                                                   // 0x00A8
    kal_uint32 FEC_WTPC_CUIF_EMI_TABLE_SIZE0;                                             // 0x00AC
    kal_uint32 FEC_WTPC_CUIF_EMI_TABLE_SIZE1;                                             // 0x00B0
    kal_uint32 FEC_WTPC_CUIF_rsv_00B4[1];                                                 // 0x00B4
    kal_uint32 FEC_WTPC_CUIF_bypass_et;                                                   // 0x00B8
    kal_uint32 FEC_WTPC_CUIF_bypass_dpd;                                                  // 0x00BC
    kal_uint32 FEC_WTPC_CUIF_sync_ID;                                                     // 0x00C0
    kal_uint32 FEC_WTPC_CUIF_WTX_BOOT_UP_STA;                                             // 0x00C4
    kal_uint32 FEC_WTPC_CUIF_PGA_SWITCH_CAL;                                              // 0x00C8
    kal_uint32 FEC_WTPC_CUIF_rsv_00CC;                                                    // 0x00CC
    kal_uint32 FEC_WTPC_CUIF_FIX_GAIN_PA;                                                 // 0x00D0
    kal_uint32 FEC_WTPC_CUIF_FIX_GAIN_APC_VM;                                             // 0x00D4
    kal_uint32 FEC_WTPC_CUIF_FIX_GAIN_PGA;                                                // 0x00D8
    kal_uint32 FEC_WTPC_CUIF_FIX_GAIN_GBB;                                                // 0x00DC
    kal_uint32 FEC_WTPC_CUIF_FIX_GAIN_NORM;                                               // 0x00E0
    kal_uint32 FEC_WTPC_CUIF_FIX_GAIN_L1_DFE;                                             // 0x00E4
    kal_uint32 FEC_WTPC_CUIF_rsv_00E8[6];                                                 // 0x00E8..0x00FC
    kal_uint32 FEC_WTPC_CUIF_PRACH_L1_DPCHGAIN;                                           // 0x0100
    kal_uint32 FEC_WTPC_CUIF_PRACH_L1_PTAR1;                                              // 0x0104
    kal_uint32 FEC_WTPC_CUIF_PRACH_L1_PTAR2;                                              // 0x0108
    kal_uint32 FEC_WTPC_CUIF_PRACH_TXCRP_NORM_PRE;                                        // 0x010C
    kal_uint32 FEC_WTPC_CUIF_PRACH_TXCRP_NORM_MSG;                                        // 0x0110
    kal_uint32 FEC_WTPC_CUIF_PRACH_L1_ET_DPD_DATA_n[3];                                   // 0x0114..0x011C
    kal_uint32 FEC_WTPC_CUIF_rsv_0120[12];                                                // 0x0120..0x014C
    kal_uint32 FEC_WTPC_CUIF_SW_L1_TPC_PTAR;                                              // 0x0150
    kal_uint32 FEC_WTPC_CUIF_SW_EN_CONTROL;                                               // 0x0154
    kal_uint32 FEC_WTPC_CUIF_SW_L1_TPC_PPEAK;                                             // 0x0158
    kal_uint32 FEC_WTPC_CUIF_SW_CRP_BETA_HA;                                              // 0x015C
    kal_uint32 FEC_WTPC_CUIF_SW_RAKE;                                                     // 0x0160
    kal_uint32 FEC_WTPC_CUIF_SW_GC_CONTROL;                                               // 0x0164
    kal_uint32 FEC_WTPC_CUIF_SW_TXK_DDPC_0;                                               // 0x0168
    kal_uint32 FEC_WTPC_CUIF_SW_TXK_DDPC_1;                                               // 0x016C
    kal_uint32 FEC_WTPC_CUIF_SW_L1_ET_DPD_DATA_n;                                         // 0x0170
    kal_uint32 FEC_WTPC_CUIF_SW_TXCRP_NORM_P;                                             // 0x0174
    kal_uint32 FEC_WTPC_CUIF_rsv_0178[10];                                                // 0x0178..0x019C
    kal_uint32 FEC_WTPC_CUIF_OFF_L1_PA;                                                   // 0x01A0
    kal_uint32 FEC_WTPC_CUIF_OFF_L1_PGA;                                                  // 0x01A4
    kal_uint32 FEC_WTPC_CUIF_OFF_L1_GTX_BB;                                               // 0x01A8
    kal_uint32 FEC_WTPC_CUIF_OFF_L1_ET_DPD_DATA;                                          // 0x01AC
    kal_uint32 FEC_WTPC_CUIF_rsv_01B0[4];                                                 // 0x01B0..0x01BC
    kal_uint32 FEC_WTPC_CUIF_FRAME_TPC_SLOT0_Cn;                                          // 0x01C0
    kal_uint32 FEC_WTPC_CUIF_FRAME_TPC_SLOT1_Cn;                                          // 0x01C4
    kal_uint32 FEC_WTPC_CUIF_FRAME_TPC_BETAUD_MIN;                                        // 0x01C8
    kal_uint32 FEC_WTPC_CUIF_FRAME_TPC_CPC_ENABLE;                                        // 0x01CC
    kal_uint32 FEC_WTPC_CUIF_FRAME_TPC_UPC_SLOTEN_C0;                                     // 0x01D0
    kal_uint32 FEC_WTPC_CUIF_FRAME_TPC_PAR_Cn;                                            // 0x01D4
    kal_uint32 FEC_WTPC_CUIF_FRAME_TPC_DAC_TAR_DBn[3];                                    // 0x01D8..0x01E0
    kal_uint32 FEC_WTPC_CUIF_FRAME_TPC_PSEUDO_TPCIN;                                      // 0x01E4
    kal_uint32 FEC_WTPC_CUIF_FRAME_TPC_ASPOW;                                             // 0x01E8
    kal_uint32 FEC_WTPC_CUIF_FRAME_TPC_POWNET;                                            // 0x01EC
    kal_uint32 FEC_WTPC_CUIF_FRAME_TPC_RPILOT;                                            // 0x01F0
    kal_uint32 FEC_WTPC_CUIF_FRAME_TPC_DPDCH_CNFGEN;                                      // 0x01F4
    kal_uint32 FEC_WTPC_CUIF_FRAME_TPC_DPCHGAIN_n;                                        // 0x01F8
    kal_uint32 FEC_WTPC_CUIF_rsv_01FC[5];                                                 // 0x01FC..0x020C
    kal_uint32 FEC_WTPC_CUIF_FRAME_ATX_STATIC_INPUT0;                                     // 0x0210
    kal_uint32 FEC_WTPC_CUIF_FRAME_ATX_STATIC_INPUT1;                                     // 0x0214
    kal_uint32 FEC_WTPC_CUIF_FRAME_ATX_DYNAMIC_INPUT0;                                    // 0x0218
    kal_uint32 FEC_WTPC_CUIF_FRAME_TXK_INPUT0_0;                                          // 0x021C
    kal_uint32 FEC_WTPC_CUIF_SFRM_TPC_UBETAUCn[5];                                        // 0x0220..0x0230
    kal_uint32 FEC_WTPC_CUIF_SFRM_TPC_UBETAUD_m_SF_k[20];                                 // 0x0234..0x0280
    kal_uint32 FEC_WTPC_CUIF_SFRM_TPC_UCHENn[5];                                          // 0x0284..0x0294
    kal_uint32 FEC_WTPC_CUIF_rsv_0298[43];                                                // 0x0298..0x0340
    kal_uint32 FEC_WTPC_CUIF_SLT_TPC_CPC_SLOT0_Cn;                                        // 0x0344
    kal_uint32 FEC_WTPC_CUIF_SLT_TPC_CPC_SLOT1_Cn;                                        // 0x0348
    kal_uint32 FEC_WTPC_CUIF_SLT_TPC_CPC_SLOT_EN_Cn;                                      // 0x034C
    kal_uint32 FEC_WTPC_CUIF_PCFE1_INPUT0_P;                                              // 0x0350
    kal_uint32 FEC_WTPC_CUIF_PCFE1_INPUT1_P;                                              // 0x0354
    kal_uint32 FEC_WTPC_CUIF_PCFE1_INPUT0_Q;                                              // 0x0358
    kal_uint32 FEC_WTPC_CUIF_PCFE1_INPUT1_Q;                                              // 0x035C
    kal_uint32 FEC_WTPC_CUIF_ATX_S_INPUT0;                                                // 0x0360
    kal_uint32 FEC_WTPC_CUIF_CALCULATE_SLOT;                                              // 0x0364
    kal_uint32 FEC_WTPC_CUIF_rsv_0368[70];                                                // 0x0368..0x047C
    kal_uint32 FEC_WTPC_CUIF_INI_TPC_RAT_TYPE;                                            // 0x0480
    kal_uint32 FEC_WTPC_CUIF_INI_TPC_MODE;                                                // 0x0484
    kal_uint32 FEC_WTPC_CUIF_INI_TPC_PINI;                                                // 0x0488
    kal_uint32 FEC_WTPC_CUIF_INI_TPC_DCOMP;                                               // 0x048C
    kal_uint32 FEC_WTPC_CUIF_INI_TPC_MPRCOEFn[10];                                        // 0x0490..0x04B4
    kal_uint32 FEC_WTPC_CUIF_INI_ATX_STATIC_INPUT0;                                       // 0x04B8
    kal_uint32 FEC_WTPC_CUIF_INI_ATX_STATIC_INPUT1;                                       // 0x04BC
    kal_uint32 FEC_WTPC_CUIF_INI_ATX_STATIC_INPUT2;                                       // 0x04C0
    kal_uint32 FEC_WTPC_CUIF_INI_ATX_STATIC_INPUT3;                                       // 0x04C4
    kal_uint32 FEC_WTPC_CUIF_INI_ATX_STATIC_INPUT4;                                       // 0x04C8
    kal_uint32 FEC_WTPC_CUIF_INI_ATX_STATIC_INPUT5;                                       // 0x04CC
    kal_uint32 FEC_WTPC_CUIF_INI_ATX_STATIC_INPUT6;                                       // 0x04D0
    kal_uint32 FEC_WTPC_CUIF_INI_ATX_DYNAMIC_INPUT0_0;                                    // 0x04D4
    kal_uint32 FEC_WTPC_CUIF_INI_ATX_DYNAMIC_INPUT0_1;                                    // 0x04D8
    kal_uint32 FEC_WTPC_CUIF_INI_ATX_DYNAMIC_INPUT0;                                      // 0x04DC
    kal_uint32 FEC_WTPC_CUIF_INI_PCFE1_INPUT0_P;                                          // 0x04E0
    kal_uint32 FEC_WTPC_CUIF_INI_PCFE1_INPUT0_Q;                                          // 0x04E4
    kal_uint32 FEC_WTPC_CUIF_INI_DDPC_INPUT_GROUP0;                                       // 0x04E8
    kal_uint32 FEC_WTPC_CUIF_INI_DDPC_INPUT_GROUP1;                                       // 0x04EC
    kal_uint32 FEC_WTPC_CUIF_INI_DDPC_INPUT_GROUP2;                                       // 0x04F0
    kal_uint32 FEC_WTPC_CUIF_INI_ILPC_INPUT0;                                             // 0x04F4
    kal_uint32 FEC_WTPC_CUIF_INI_ILPC_INPUT1;                                             // 0x04F8
    kal_uint32 FEC_WTPC_CUIF_INI_RFIC_CS_INPUT0_0;                                        // 0x04FC
    kal_uint32 FEC_WTPC_CUIF_INI_MIPI_LENGTH_INPUT0_0;                                    // 0x0500
    kal_uint32 FEC_WTPC_CUIF_INI_MIPI_LENGTH_INPUT1_0;                                    // 0x0504
    kal_uint32 FEC_WTPC_CUIF_INI_PGA_LENGTH_INPUT0_0;                                     // 0x0508
    kal_uint32 FEC_WTPC_CUIF_DPD_RF_CW_MASK_INPUT0_0;                                     // 0x050C
    kal_uint32 FEC_WTPC_CUIF_DET_RF_CW_MASK_INPUT0_0;                                     // 0x0510
    kal_uint32 FEC_WTPC_CUIF_rsv_0514[3];                                                 // 0x0514..0x051C
    kal_uint32 FEC_WTPC_CUIF_RPT_PRACH_STA;                                               // 0x0520
    kal_uint32 FEC_WTPC_CUIF_RPT_UBETAUD_Rm_k[12];                                        // 0x0524..0x0550
    kal_uint32 FEC_WTPC_CUIF_RPT_HBETAn[3];                                               // 0x0554..0x055C
    kal_uint32 FEC_WTPC_CUIF_RPT_PTAR_STA[3];                                             // 0x0560..0x0568
    kal_uint32 FEC_WTPC_CUIF_RPT_PTAR_REAL_STA[3];                                        // 0x056C..0x0574
    kal_uint32 FEC_WTPC_CUIF_RPT_ADDSC_STA0n[3];                                          // 0x0578..0x0580
    kal_uint32 FEC_WTPC_CUIF_RPT_TPC_CMD_FAKE_C0;                                         // 0x0584
    kal_uint32 FEC_WTPC_CUIF_RPT_PDPCCH_COMP_STAn[3];                                     // 0x0588..0x0590
    kal_uint32 FEC_WTPC_CUIF_RPT_DDPC_RPT_P[3];                                           // 0x0594..0x059C
    kal_uint32 FEC_WTPC_CUIF_RPT_DDPC_RPT_Q[3];                                           // 0x05A0..0x05A8
    kal_uint32 FEC_WTPC_CUIF_RPT_UPC_EN_STAn[3];                                          // 0x05AC..0x05B4
    kal_uint32 FEC_WTPC_CUIF_DPD_LUT_NORM_FACTOR_0[9];                                    // 0x05B8..0x05D8
    kal_uint32 FEC_WTPC_CUIF_INJECT_STRING_EN;                                            // 0x05DC
    kal_uint32 FEC_WTPC_CUIF_INJECT_ASSERT_DUMP;                                          // 0x05E0
    kal_uint32 FEC_WTPC_CUIF_INJECT_SET_GAIN;                                             // 0x05E4   
    kal_uint32 FEC_WTPC_CUIF_INJECT_FORCE_CONTROL;                                        // 0x05E8 
    kal_uint32 FEC_WTPC_CUIF_MPR_SETTING_FOR_R6;                                          // 0x05EC
    kal_uint32 rsv_05DC[79];                                                              // 0x05F0..0x0728  padding-tag-skip
} FEC_W_TX_INFO_t;


// ----------------- FEC_W_RX Register Definition -------------------
typedef volatile struct {
    kal_uint32 FEC_WAGC_CUIF_WAGC_EXT_FIX_GAIN_EN;                                        // 0x0000
    kal_uint32 FEC_WAGC_CUIF_WAGC_EXT_RF_GAIN;                                            // 0x0004
    kal_uint32 FEC_WAGC_CUIF_WAGC_EXT_DIG_GAIN;                                           // 0x0008
    kal_uint32 FEC_WAGC_CUIF_WAGC_INI_TIME[2];                                            // 0x000C..0x0010
    kal_uint32 FEC_WAGC_CUIF_WAGC_FRAME_INDEX[2];                                         // 0x0014..0x0018
    kal_uint32 FEC_WAGC_CUIF_WAGC_END_TIME[2];                                            // 0x001C..0x0020
    kal_uint32 FEC_WAGC_CUIF_WAGC_INI_STA[2];                                             // 0x0024..0x0028
    kal_uint32 FEC_WAGC_CUIF_WAGC_RX_RF_FREQUENCY[2];                                     // 0x002C..0x0030
    kal_uint32 FEC_WAGC_CUIF_WAGC_CC_MASK[2];                                             // 0x0034..0x0038
    kal_uint32 FEC_WAGC_CUIF_WAGC_ADJUST_SETPOINT;                                        // 0x003C
    kal_uint32 FEC_WAGC_CUIF_WAGC_ARX_CON;                                                // 0x0040
    kal_uint32 FEC_WAGC_CUIF_WAGC_TPD;                                                    // 0x0044
    kal_uint32 FEC_WAGC_CUIF_WAGC_PATHLOSS_TEMP;                                          // 0x0048
    kal_uint32 FEC_WAGC_CUIF_WAGC_PL_DATA_ADDR[2];                                        // 0x004C..0x0050
    kal_uint32 FEC_WAGC_CUIF_WAGC_PL_DATA_LENGTH;                                         // 0x0054
    kal_uint32 FEC_WAGC_CUIF_WAGC_DC_TABLE_ADDR[2];                                       // 0x0058..0x005C
    kal_uint32 FEC_WAGC_CUIF_WAGC_DC_TABLE_LENGTH;                                        // 0x0060
    kal_uint32 FEC_WAGC_CUIF_WAGC_RF_GAIN_A0[2];                                          // 0x0064..0x0068
    kal_uint32 FEC_WAGC_CUIF_WAGC_RF_GAIN_A1[2];                                          // 0x006C..0x0070
    kal_uint32 FEC_WAGC_CUIF_WAGC_DIG_GAIN_C0_A0[2];                                      // 0x0074..0x0078
    kal_uint32 FEC_WAGC_CUIF_WAGC_EQ_GAIN_C0_A0[2];                                       // 0x007C..0x0080
    kal_uint32 FEC_WAGC_CUIF_WAGC_DIG_GAIN_C0_A1[2];                                      // 0x0084..0x0088
    kal_uint32 FEC_WAGC_CUIF_WAGC_EQ_GAIN_C0_A1[2];                                       // 0x008C..0x0090
    kal_uint32 FEC_WAGC_CUIF_WAGC_DIG_GAIN_C1_A0[2];                                      // 0x0094..0x0098
    kal_uint32 FEC_WAGC_CUIF_WAGC_EQ_GAIN_C1_A0[2];                                       // 0x009C..0x00A0
    kal_uint32 FEC_WAGC_CUIF_WAGC_DIG_GAIN_C1_A1[2];                                      // 0x00A4..0x00A8
    kal_uint32 FEC_WAGC_CUIF_WAGC_EQ_GAIN_C1_A1[2];                                       // 0x00AC..0x00B0
    kal_uint32 FEC_WAGC_CUIF_WAGC_REPORT_VALID;                                           // 0x00B4
    kal_uint32 FEC_WAGC_CUIF_WAGC_REPORT_ISR_A0;                                          // 0x00B8
    kal_uint32 FEC_WAGC_CUIF_WAGC_REPORT_ISR_A1;                                          // 0x00BC
    kal_uint32 FEC_WAGC_CUIF_WAGC_REPORT_RSSI_C0_A0;                                      // 0x00C0
    kal_uint32 FEC_WAGC_CUIF_WAGC_REPORT_RSSI_C0_A1;                                      // 0x00C4
    kal_uint32 FEC_WAGC_CUIF_WAGC_REPORT_RSSI_C1_A0;                                      // 0x00C8
    kal_uint32 FEC_WAGC_CUIF_WAGC_REPORT_RSSI_C1_A1;                                      // 0x00CC
    kal_uint32 FEC_WAGC_CUIF_WAGC_ELNA_BPI_A0[2];                                         // 0x00D0..0x00D4
    kal_uint32 FEC_WAGC_CUIF_WAGC_ELNA_BPI_A1[2];                                         // 0x00D8..0x00DC
    kal_uint32 FEC_WAGC_CUIF_WAGC_ELNA_MIPI_ON_A0[2];                                     // 0x00E0..0x00E4
    kal_uint32 FEC_WAGC_CUIF_WAGC_ELNA_MIPI_BYPASS_A0[2];                                 // 0x00E8..0x00EC
    kal_uint32 FEC_WAGC_CUIF_WAGC_ELNA_MIPI_ON_A1[2];                                     // 0x00F0..0x00F4
    kal_uint32 FEC_WAGC_CUIF_WAGC_ELNA_MIPI_BYPASS_A1[2];                                 // 0x00F8..0x00FC
    kal_uint32 FEC_WAGC_CUIF_WAGC_BACKUP_RF_GAIN_A0[8];                                   // 0x0100..0x011C
    kal_uint32 FEC_WAGC_CUIF_WAGC_BACKUP_DIG_GAIN_A0[8];                                  // 0x0120..0x013C
    kal_uint32 FEC_WAGC_CUIF_WAGC_BACKUP_EQ_GAIN_A0[8];                                   // 0x0140..0x015C
    kal_uint32 FEC_WAGC_CUIF_WAGC_BACKUP_RF_GAIN_A1[8];                                   // 0x0160..0x017C
    kal_uint32 FEC_WAGC_CUIF_WAGC_BACKUP_DIG_GAIN_A1[8];                                  // 0x0180..0x019C
    kal_uint32 FEC_WAGC_CUIF_WAGC_BACKUP_EQ_GAIN_A1[8];                                   // 0x01A0..0x01BC
    kal_uint32 FEC_WAGC_CUIF_rsv_01C0[143];                                               // 0x01C0..0x03F8
    //kal_uint32 FEC_WAGC_CUIF_WAGC_END;                                                    // 0x03FC
} FEC_W_RX_INFO_t;



typedef volatile struct {
    kal_uint32 FEC_LAGC_CUIF_PARAMETER_SETTING_CTRL;                                      // 0x0000
    kal_uint32 FEC_LAGC_CUIF_PARAMETER_SETTING_00;                                        // 0x0004
    kal_uint32 FEC_LAGC_CUIF_PARAMETER_SETTING_01;                                        // 0x0008
    kal_uint32 FEC_LAGC_CUIF_PARAMETER_SETTING_02;                                        // 0x000C
    kal_uint32 FEC_LAGC_CUIF_PARAMETER_SETTING_03;                                        // 0x0010
    kal_uint32 FEC_LAGC_CUIF_TEST_MODE_POWER_WB_P0;                                       // 0x0014
    kal_uint32 FEC_LAGC_CUIF_TEST_MODE_POWER_WB_P1;                                       // 0x0018
    kal_uint32 FEC_LAGC_CUIF_TEST_MODE_POWER_IB_C0;                                       // 0x001C
    kal_uint32 FEC_LAGC_CUIF_TEST_MODE_POWER_IB_C1;                                       // 0x0020
    kal_uint32 FEC_LAGC_CUIF_TEST_MODE_POWER_RS_C0;                                       // 0x0024
    kal_uint32 FEC_LAGC_CUIF_TEST_MODE_POWER_RS_C1;                                       // 0x0028
    kal_uint32 FEC_LAGC_CUIF_TEST_MODE_POWER_CS_C0;                                       // 0x002C
    kal_uint32 FEC_LAGC_CUIF_TEST_MODE_POWER_CS_C1;                                       // 0x0030
    kal_uint32 FEC_LAGC_CUIF_TEST_MODE_RF_GAIN_P0_A0;                                     // 0x0034
    kal_uint32 FEC_LAGC_CUIF_TEST_MODE_RF_GAIN_P0_A1;                                     // 0x0038
    kal_uint32 FEC_LAGC_CUIF_TEST_MODE_RF_GAIN_P1_A0;                                     // 0x003C
    kal_uint32 FEC_LAGC_CUIF_TEST_MODE_RF_GAIN_P1_A1;                                     // 0x0040
    kal_uint32 FEC_LAGC_CUIF_TEST_MODE_DAGC_C0;                                           // 0x0044
    kal_uint32 FEC_LAGC_CUIF_TEST_MODE_DAGC_C1;                                           // 0x0048
    kal_uint32 FEC_LAGC_CUIF_TEST_MODE_AGC_EXP;                                           // 0x004C
    kal_uint32 FEC_LAGC_CUIF_TEST_MODE_RF_DC_P0;                                          // 0x0050
    kal_uint32 FEC_LAGC_CUIF_TEST_MODE_RF_DC_P1;                                          // 0x0054
    kal_uint32 FEC_LAGC_CUIF_TEST_MODE_DIG_DC_P0_A0;                                      // 0x0058
    kal_uint32 FEC_LAGC_CUIF_TEST_MODE_DIG_DC_P0_A1;                                      // 0x005C
    kal_uint32 FEC_LAGC_CUIF_TEST_MODE_DIG_DC_P1_A0;                                      // 0x0060
    kal_uint32 FEC_LAGC_CUIF_TEST_MODE_DIG_DC_P1_A1;                                      // 0x0064
    kal_uint32 FEC_LAGC_CUIF_TEST_MODE_POWER_WB_SETPT;                                    // 0x0068
    kal_uint32 FEC_LAGC_CUIF_TEST_MODE_POWER_IB_SETPT_HI;                                 // 0x006C
    kal_uint32 FEC_LAGC_CUIF_TEST_MODE_POWER_IB_SETPT_LO;                                 // 0x0070
    kal_uint32 FEC_LAGC_CUIF_TEST_MODE_POWER_IB_SETPT_MAX;                                // 0x0074
    kal_uint32 FEC_LAGC_CUIF_TEST_MODE_POWER_RSSI_C0;                                     // 0x0078
    kal_uint32 FEC_LAGC_CUIF_TEST_MODE_POWER_RSSI_C1;                                     // 0x007C
    kal_uint32 FEC_LAGC_CUIF_CAL_RXDATA_VALID_GENERAL;                                    // 0x0080
    kal_uint32 FEC_LAGC_CUIF_CAL_RXDATA_DC_BURST_INFO_ADDR_P0[2];                         // 0x0084..0x0088
    kal_uint32 FEC_LAGC_CUIF_CAL_RXDATA_DC_BURST_INFO_ADDR_P1[2];                         // 0x008C..0x0090
    kal_uint32 FEC_LAGC_CUIF_CAL_RXDATA_PATHLOSS_BURST_INFO_ADDR_C0[2];                   // 0x0094..0x0098
    kal_uint32 FEC_LAGC_CUIF_CAL_RXDATA_PATHLOSS_BURST_INFO_ADDR_C1[2];                   // 0x009C..0x00A0
    kal_uint32 FEC_LAGC_CUIF_GAIN_TBL_ADDR_P0_A0[2];                                      // 0x00A4..0x00A8
    kal_uint32 FEC_LAGC_CUIF_GAIN_TBL_ADDR_P0_A1[2];                                      // 0x00AC..0x00B0
    kal_uint32 FEC_LAGC_CUIF_GAIN_TBL_ADDR_P1_A0[2];                                      // 0x00B4..0x00B8
    kal_uint32 FEC_LAGC_CUIF_GAIN_TBL_ADDR_P1_A1[2];                                      // 0x00BC..0x00C0
    kal_uint32 FEC_LAGC_CUIF_INIT_GAIN_ADDR_C0[2];                                        // 0x00C4..0x00C8
    kal_uint32 FEC_LAGC_CUIF_INIT_GAIN_ADDR_C1[2];                                        // 0x00CC..0x00D0
    kal_uint32 FEC_LAGC_CUIF_CALIBRATION_PLAN_C_INIT_GAIN_RF;                             // 0x00D4
    kal_uint32 FEC_LAGC_CUIF_CALIBRATION_PLAN_C_INI_DIG_GAIN_C0_A0;                       // 0x00D8
    kal_uint32 FEC_LAGC_CUIF_CALIBRATION_PLAN_C_INI_DIG_GAIN_C0_A1;                       // 0x00DC
    kal_uint32 FEC_LAGC_CUIF_CALIBRATION_PLAN_C_INI_DIG_GAIN_C1_A0;                       // 0x00E0
    kal_uint32 FEC_LAGC_CUIF_CALIBRATION_PLAN_C_INI_DIG_GAIN_C1_A1;                       // 0x00E4
    kal_uint32 FEC_LAGC_CUIF_DOUBLE_BUFF_IDX[2];                                          // 0x00E8..0x00EC
    kal_uint32 FEC_LAGC_CUIF_FEATURE_OPTION[2];                                           // 0x00F0..0x00F4
    kal_uint32 FEC_LAGC_CUIF_AGC_INFO[2];                                                 // 0x00F8..0x00FC
    kal_uint32 FEC_LAGC_CUIF_DFE_INFO[2];                                                 // 0x0100..0x0104
    kal_uint32 FEC_LAGC_CUIF_ELNA_BPI_P0A0[2];                                            // 0x0108..0x010C
    kal_uint32 FEC_LAGC_CUIF_ELNA_BPI_P0A1[2];                                            // 0x0110..0x0114
    kal_uint32 FEC_LAGC_CUIF_ELNA_BPI_P1A0[2];                                            // 0x0118..0x011C
    kal_uint32 FEC_LAGC_CUIF_ELNA_BPI_P1A1[2];                                            // 0x0120..0x0124
    kal_uint32 FEC_LAGC_CUIF_ELNA_MIPI_ON_P0A0[2];                                        // 0x0128..0x012C
    kal_uint32 FEC_LAGC_CUIF_ELNA_MIPI_BYPASS_P0A0[2];                                    // 0x0130..0x0134
    kal_uint32 FEC_LAGC_CUIF_ELNA_MIPI_ON_P0A1[2];                                        // 0x0138..0x013C
    kal_uint32 FEC_LAGC_CUIF_ELNA_MIPI_BYPASS_P0A1[2];                                    // 0x0140..0x0144
    kal_uint32 FEC_LAGC_CUIF_ELNA_MIPI_ON_P1A0[2];                                        // 0x0148..0x014C
    kal_uint32 FEC_LAGC_CUIF_ELNA_MIPI_BYPASS_P1A0[2];                                    // 0x0150..0x0154
    kal_uint32 FEC_LAGC_CUIF_ELNA_MIPI_ON_P1A1[2];                                        // 0x0158..0x015C
    kal_uint32 FEC_LAGC_CUIF_ELNA_MIPI_BYPASS_P1A1[2];                                    // 0x0160..0x0164
    kal_uint32 FEC_LAGC_CUIF_INTER_CM_COFIG[2];                                           // 0x0168..0x016C
    kal_uint32 FEC_LAGC_CUIF_INTER_CM_RF_ON_TIME_EARLIEST[2];                             // 0x0170..0x0174
    kal_uint32 FEC_LAGC_CUIF_CELL_TYPE[2];                                                // 0x0178..0x017C
    kal_uint32 FEC_LAGC_CUIF_INIT_GAIN_A0_FREQ[23];                                       // 0x0180..0x01D8
    kal_uint32 FEC_LAGC_CUIF_INIT_GAIN_A1_FREQ[23];                                       // 0x01DC..0x0234
    kal_uint32 FEC_LAGC_CUIF_MEAS_START_TYPE[4];                                          // 0x0238..0x0244
    kal_uint32 FEC_LAGC_CUIF_REQ_SF_TYPE[4];                                              // 0x0248..0x0254
    kal_uint32 FEC_LAGC_CUIF_NORMAL_SCENARIO_CONFIG[4];                                   // 0x0258..0x0264
    kal_uint32 FEC_LAGC_CUIF_OBB_FLAG[4];                                                 // 0x0268..0x0274
    kal_uint32 FEC_LAGC_CUIF_TPD_RESULT[4];                                               // 0x0278..0x0284
    kal_uint32 FEC_LAGC_CUIF_ELC_RB_NUMBER[4];                                            // 0x0288..0x0294
    kal_uint32 FEC_LAGC_CUIF_ANT_PATH_CONFIG[4];                                          // 0x0298..0x02A4
    kal_uint32 FEC_LAGC_CUIF_PATHLOSS_TEMP_OFFSET[4];                                     // 0x02A8..0x02B4
    kal_uint32 FEC_LAGC_CUIF_FWS_SFBD_C0_A0[4];                                           // 0x02B8..0x02C4
    kal_uint32 FEC_LAGC_CUIF_FWS_SFBD_C0_A1[4];                                           // 0x02C8..0x02D4
    kal_uint32 FEC_LAGC_CUIF_FWS_SFBD_C1_A0[4];                                           // 0x02D8..0x02E4
    kal_uint32 FEC_LAGC_CUIF_FWS_SFBD_C1_A1[4];                                           // 0x02E8..0x02F4
    kal_uint32 FEC_LAGC_CUIF_CMIF_LOCK_UPDATE[4];                                         // 0x02F8..0x0304
    kal_uint32 FEC_LAGC_CUIF_REPORT_VLD[2];                                               // 0x0308..0x030C
    kal_uint32 FEC_LAGC_CUIF_RSSI_REPORT_C0_A0[2];                                        // 0x0310..0x0314
    kal_uint32 FEC_LAGC_CUIF_RSSI_REPORT_C0_A1[2];                                        // 0x0318..0x031C
    kal_uint32 FEC_LAGC_CUIF_RSSI_REPORT_C1_A0[2];                                        // 0x0320..0x0324
    kal_uint32 FEC_LAGC_CUIF_RSSI_REPORT_C1_A1[2];                                        // 0x0328..0x032C
    kal_uint32 FEC_LAGC_CUIF_REPORT_OB_P0_A0[2];                                          // 0x0330..0x0334
    kal_uint32 FEC_LAGC_CUIF_REPORT_OB_P0_A1[2];                                          // 0x0338..0x033C
    kal_uint32 FEC_LAGC_CUIF_REPORT_OB_P1_A0[2];                                          // 0x0340..0x0344
    kal_uint32 FEC_LAGC_CUIF_REPORT_OB_P1_A1[2];                                          // 0x0348..0x034C
    kal_uint32 FEC_LAGC_CUIF_ACID_REPORT_VLD;                                             // 0x0350
    kal_uint32 FEC_LAGC_CUIF_ACID_WB_SF0_REPORT_A0;                                       // 0x0354
    kal_uint32 FEC_LAGC_CUIF_ACID_WB_SF0_REPORT_A1;                                       // 0x0358
    kal_uint32 FEC_LAGC_CUIF_ACID_WB_SF1_REPORT_A0;                                       // 0x035C
    kal_uint32 FEC_LAGC_CUIF_ACID_WB_SF1_REPORT_A1;                                       // 0x0360
    kal_uint32 FEC_LAGC_CUIF_ACID_IB_REPORT_A0;                                           // 0x0364
    kal_uint32 FEC_LAGC_CUIF_ACID_IB_REPORT_A1;                                           // 0x0368
    kal_uint32 FEC_LAGC_CUIF_ACID_WB_POS_REPORT_A0;                                       // 0x036C
    kal_uint32 FEC_LAGC_CUIF_ACID_WB_POS_REPORT_A1;                                       // 0x0370
    kal_uint32 FEC_LAGC_CUIF_ACID_WB_NEG_REPORT_A0;                                       // 0x0374
    kal_uint32 FEC_LAGC_CUIF_ACID_WB_NEG_REPORT_A1;                                       // 0x0378
    kal_uint32 FEC_LAGC_CUIF_ACID_WB_BYPASS_REPORT_A0;                                    // 0x037C
    kal_uint32 FEC_LAGC_CUIF_ACID_WB_BYPASS_REPORT_A1;                                    // 0x0380
    kal_uint32 FEC_LAGC_CUIF_INIT_GAIN_FLAG_FOR_INNER_A0;                                 // 0x0384
    kal_uint32 FEC_LAGC_CUIF_INIT_GAIN_FLAG_FOR_INNER_A1;                                 // 0x0388
    kal_uint32 FEC_LAGC_CUIF_EM_REPORT_VLD;                                               // 0x038C
    kal_uint32 FEC_LAGC_CUIF_EM_RF_GAIN_ABSOLUTE_C0_A0;                                   // 0x0390
    kal_uint32 FEC_LAGC_CUIF_EM_RF_GAIN_ABSOLUTE_C0_A1;                                   // 0x0394
    kal_uint32 FEC_LAGC_CUIF_EM_RF_GAIN_ABSOLUTE_C1_A0;                                   // 0x0398
    kal_uint32 FEC_LAGC_CUIF_EM_RF_GAIN_ABSOLUTE_C1_A1;                                   // 0x039C
    kal_uint32 FEC_LAGC_CUIF_rsv_03A0[662];                                               // 0x03A0..0x0DF4
    kal_uint32 FEC_LAGC_CUIF_CUIF_END;                                                    // 0x0DF8
} FEC_L_RX_INFO_t;


// ----------------- FEC_L_TX_L01 Register Definition -------------------
typedef volatile struct {
    kal_uint32 FEC_LTPC_CUIF_SUB_CONTROL_INPUT0;                                          // 0x0000
    kal_uint32 FEC_LTPC_CUIF_SUB_CONTROL_INPUT1;                                          // 0x0004
    kal_uint32 FEC_LTPC_CUIF_SUB_CONTROL_INPUT2;                                          // 0x0008
    kal_uint32 FEC_LTPC_CUIF_TX_SF_CC_INFO;                                               // 0x000C
    kal_uint32 FEC_LTPC_CUIF_TX_SF_PARAMS0;                                               // 0x0010
    kal_uint32 FEC_LTPC_CUIF_TX_SF_PARAMS1;                                               // 0x0014
    kal_uint32 FEC_LTPC_CUIF_TX_SF_PARAMS2;                                               // 0x0018
    kal_uint32 FEC_LTPC_CUIF_TX_SF_PARAMS3;                                               // 0x001C
    kal_uint32 FEC_LTPC_CUIF_TX_SF_CH0;                                                   // 0x0020
    kal_uint32 FEC_LTPC_CUIF_TX_SF_CH1;                                                   // 0x0024
    kal_uint32 FEC_LTPC_CUIF_TX_CANCELREQ;                                                // 0x0028
    kal_uint32 FEC_LTPC_CUIF_DBG_FORCE_OP_INPUT;                                          // 0x002C
    kal_uint32 FEC_LTPC_CUIF_DBG_FORCE_PA_INPUT;                                          // 0x0030
    kal_uint32 FEC_LTPC_CUIF_DBG_FORCE_PGA_INPUT;                                         // 0x0034
    kal_uint32 FEC_LTPC_CUIF_CUIF_READY;                                                  // 0x0038
    kal_uint32 FEC_LTPC_CUIF_TXREQ_CUIF_READY;                                            // 0x003C
    kal_uint32 FEC_LTPC_CUIF_TEST_CASE;                                                   // 0x0040
    kal_uint32 FEC_LTPC_CUIF_ANT_OUT_PWR_RPT;                                             // 0x0044
    kal_uint32 FEC_LTPC_CUIF_ATX_D_GTHERMAL_PARAMS;                                       // 0x0048
    kal_uint32 FEC_LTPC_CUIF_ATX_D_BB_BKF_APT;                                            // 0x004C
    kal_uint32 FEC_LTPC_CUIF_ATX_D_BB_BKF_DPD;                                            // 0x0050
    kal_uint32 FEC_LTPC_CUIF_ATX_D_BB_BKF_ET;                                             // 0x0054
    kal_uint32 FEC_LTPC_CUIF_ATX_D_BB_BKF_THRES;                                          // 0x0058
    kal_uint32 FEC_LTPC_CUIF_ATX_D_PTAR_OFFSET;                                           // 0x005C
    kal_uint32 FEC_LTPC_CUIF_PCFE1_MC_PA_SHIFT;                                           // 0x0060
    kal_uint32 FEC_LTPC_CUIF_PCFE2_PA_INPUT1[4];                                          // 0x0064..0x0070
    kal_uint32 FEC_LTPC_CUIF_ATX_INPUT0[4];                                               // 0x0074..0x0080
    kal_uint32 FEC_LTPC_CUIF_PCFE2_INPUT0[4];                                             // 0x0080..0x008C
    kal_uint32 FEC_LTPC_CUIF_PCFE2_INPUT1[4];                                             // 0x0090..0x009C
    kal_uint32 FEC_LTPC_CUIF_PCFE2_INPUT2[4];                                             // 0x00A0..0x00AC
    kal_uint32 FEC_LTPC_CUIF_PCFE2_INPUT3[4];                                             // 0x00B0..0x00BC
    kal_uint32 FEC_LTPC_CUIF_TEST_PA0[4];                                                 // 0x00C0..0x00CC
    kal_uint32 FEC_LTPC_CUIF_TEST_PA1[4];                                                 // 0x00D0..0x00DC
    kal_uint32 FEC_LTPC_CUIF_TEST_DET[4];                                                 // 0x00E0..0x00EC
    kal_uint32 FEC_LTPC_CUIF_TEST_PGA[4];                                                 // 0x00F0..0x00FC
    kal_uint32 FEC_LTPC_CUIF_TEST_GTX_BB[4];                                              // 0x0100..0x010C
    kal_uint32 FEC_LTPC_CUIF_TEST_CPL[4];                                                 // 0x0110..0x011C
    kal_uint32 FEC_LTPC_CUIF_TEST_SIB_DUMP;                                               // 0x013C
    kal_uint32 FEC_LTPC_CUIF_OP_RPT;                                                      
    kal_uint32 FEC_LTPC_CUIF_ET_SO_CON0[4];                                               
    kal_uint32 FEC_LTPC_CUIF_ET_SO_CON1;                                                  
    kal_uint32 FEC_LTPC_CUIF_ET_SO_RPT;                                                   
    kal_uint32 FEC_LTPC_CUIF_ET_CAL_CON;                                                  
} FEC_L_TX_L01_INFO_t;



typedef volatile struct {
    kal_uint32 FEC_LTPC_CUIF_INI_PCFE2_INPUT1;                                            // 0x0000
    kal_uint32 FEC_LTPC_CUIF_INI_PCFE2_INPUT2;                                            // 0x0004
    kal_uint32 FEC_LTPC_CUIF_INI_PCFE2_INPUT3;                                            // 0x0008
    kal_uint32 FEC_LTPC_CUIF_INI_PCFE2_INPUT4;                                            // 0x000C
    kal_uint32 FEC_LTPC_CUIF_INI_PCFE2_INPUT5;                                            // 0x0010
    kal_uint32 FEC_LTPC_CUIF_INI_PCFE2_INPUT6;                                            // 0x0014
    kal_uint32 FEC_LTPC_CUIF_INI_DDPC_INPUT0;                                             // 0x0018
    kal_uint32 FEC_LTPC_CUIF_INI_DDPC_INPUT1;                                             // 0x001C
    kal_uint32 FEC_LTPC_CUIF_INI_DDPC_INPUT2;                                             // 0x0020
    kal_uint32 FEC_LTPC_CUIF_INI_RFIC_CS_INPUT0;                                          // 0x0024
    kal_uint32 FEC_LTPC_CUIF_INI_PGA_LENGTH_INPUT0;                                       // 0x0028
    kal_uint32 FEC_LTPC_CUIF_INI_PMIC_LENGTH_INPUT0;                                      // 
    kal_uint32 FEC_LTPC_CUIF_INI_MIPI_LENGTH_INPUT0;                                      // 0x002C
    kal_uint32 FEC_LTPC_CUIF_INI_MIPI_LENGTH_INPUT1;                                      // 0x0030
    kal_uint32 FEC_LTPC_CUIF_INIT_ROUTE_INFO0;                                            // 0x0034
    kal_uint32 FEC_LTPC_CUIF_INI_CAL_DL_INFO0;                                            // 0x0038
    kal_uint32 FEC_LTPC_CUIF_INI_CAL_DL_INFO1;                                            // 0x003C
    kal_uint32 FEC_LTPC_CUIF_INI_CAL_DL_INFO2;                                            // 0x0040
    kal_uint32 FEC_LTPC_CUIF_INI_CAL_DL_INFO3;                                            // 0x0044
    kal_uint32 FEC_LTPC_CUIF_INI_CAL_DL_INFO4;                                            // 0x0048
    kal_uint32 FEC_LTPC_CUIF_INI_TX_INIT_END_INFO;                                        // 0x004C
    kal_uint32 FEC_LTPC_CUIF_INI_NRT_UPDATE;                                              // 0x0050
    kal_uint32 FEC_LTPC_CUIF_INI_CALDL_CHK;                                               // 0x0054
    kal_uint32 FEC_LTPC_CUIF_INI_INIT_END_CHK;                                            // 0x0058
    kal_uint32 FEC_LTPC_CUIF_TESTMODE_CHANNEL_BMP_SLOT0;                                  // 0x005C
    kal_uint32 FEC_LTPC_CUIF_TESTMODE_POUT_RB_SLOT0;                                      // 0x0060
    kal_uint32 FEC_LTPC_CUIF_TESTMODE_PA_RF_SLOT0;                                        // 0x0064
    kal_uint32 FEC_LTPC_CUIF_TESTMODE_GBB2_COMP_ER_SLOT0;                                 // 0x0068
    kal_uint32 FEC_LTPC_CUIF_TESTMODE_CHANNEL_BMP_SLOT1;                                  // 0x006C
    kal_uint32 FEC_LTPC_CUIF_TESTMODE_POUT_RB_SLOT1;                                      // 0x0070
    kal_uint32 FEC_LTPC_CUIF_TESTMODE_PA_RF_SLOT1;                                        // 0x0074
    kal_uint32 FEC_LTPC_CUIF_TESTMODE_GBB2_COMP_ER_SLOT1;                                 // 0x0078
    kal_uint32 FEC_LTPC_CUIF_TESTMODE_CHANNEL_BMP_SYM12;                                  // 0x007C
    kal_uint32 FEC_LTPC_CUIF_TESTMODE_POUT_RB_SYM12;                                      // 0x0080
    kal_uint32 FEC_LTPC_CUIF_TESTMODE_PA_RF_SYM12;                                        // 0x0084
    kal_uint32 FEC_LTPC_CUIF_TESTMODE_GBB2_COMP_ER_SYM12;                                 // 0x0088
    kal_uint32 FEC_LTPC_CUIF_TESTMODE_CHANNEL_BMP_SYM13;                                  // 0x008C
    kal_uint32 FEC_LTPC_CUIF_TESTMODE_POUT_RB_SYM13;                                      // 0x0090
    kal_uint32 FEC_LTPC_CUIF_TESTMODE_PA_RF_SYM13;                                        // 0x0094
    kal_uint32 FEC_LTPC_CUIF_TESTMODE_GBB2_COMP_ER_SYM13;                                 // 0x0098
    kal_uint32 FEC_LTPC_CUIF_TEMP_CHANGE_FLAG;                                            // 0x009C
    kal_uint32 FEC_LTPC_CUIF_OFF_PMIC_CHANGE_FLAG;                                        // 0x00A0
    kal_uint32 FEC_LTPC_CUIF_OFF_PMIC_CW_H;                                               // 0x00A4
    kal_uint32 FEC_LTPC_CUIF_OFF_PMIC_CW_L;                                               // 0x00A8
    kal_uint32 FEC_LTPC_CUIF_POWER_LIMIT_THRES;                                           // 0x00AC
    kal_uint32 FEC_LTPC_CUIF_GAIN_RPT;                                                    // 0x00B0
    kal_uint32 FEC_LTPC_CUIF_GAIN2_RPT;                                                   // 0x00B4
    kal_uint32 FEC_LTPC_CUIF_MEAS_RPT;                                                    // 0x00B8
    kal_uint32 FEC_LTPC_CUIF_IDX_RPT;                                                     // 0x00BC
    kal_uint32 FEC_LTPC_CUIF_TEMP_DEGREE;                                                 // 0x00C0
    kal_uint32 FEC_LTPC_CUIF_PA_CPL_H_TEMP_COMP;                                          // 0x00C4
    kal_uint32 FEC_LTPC_CUIF_PA_CPL_M_TEMP_COMP;                                          // 0x00C8
    kal_uint32 FEC_LTPC_CUIF_PA_CPL_L_TEMP_COMP;                                          // 0x00CC
} FEC_L_TX_P01_INFO_t;

typedef volatile struct
{
    kal_uint32  PA_LUT_N;                         /* (U4.0) */
    kal_int16  PA_LUT_Pth[FEC_TPC_VCC_IDX_NUM];  /* (S6.5) */
    kal_int16  PA_LUT_Gpa[FEC_TPC_VCC_IDX_NUM];  /* (S6.5) */
    kal_uint16  PA_LUT_mode[FEC_TPC_VCC_IDX_NUM]; /* (U2.0) */
}LTE_TX_FEC_PA_TABLE_T;// 52byte = 13word  //13word


typedef volatile struct
{
    kal_int16  th_op_a2d; /* (S6.5) */
    kal_int16  th_op_d2a; /* (S6.5) */
    kal_int16  th_op_d2e; /* (S6.5) */
    kal_int16  th_op_e2d; /* (S6.5) */
}LTE_TX_FEC_OP_T;// 8byte = 2word

typedef volatile struct
{
   kal_uint32  TH_RB_length_0;
   kal_uint32  TH_RB_length_1;
   kal_int32  BB_bkf_APT_sRB_dB;
   kal_int32  BB_bkf_DPD_sRB_dB_0;   
   kal_int32  BB_bkf_DPD_sRB_dB_1;
   kal_int32  BB_bkf_ET_sRB_dB_0;
   kal_int32  BB_bkf_ET_sRB_dB_1;
}TPC_POW_BACKOFF_st;// 12byte = 3word //7word

typedef volatile struct
{
    kal_int16 CFR_LUT_Ppeak[CFR_MODE_DYM][IDX_CFR_DYM];/*S3.5*/    
    kal_int16 CFR_LUT_Gcfr[CFR_MODE_DYM][IDX_CFR_DYM];/*S3.5*/
    kal_int16 CFR_LUT_Gcfr_dB_r[CFR_MODE_DYM][IDX_CFR_DYM];/*S3.5*/
}LTE_TX_FEC_CFR_TABLE_T;//18 word

typedef volatile struct
{
    kal_int16 dpd_lut_norm_factor[FEC_TPC_VCC_IDX_NUM];  /*S7.5*/    
}LTE_TX_FEC_DPD_LUT_NORM_FACTOR_T;// 16byte = 4word

typedef volatile struct
{
   //By SF latch
   kal_uint8 flag_AMLUT_interp;
   kal_uint8 flag_Ui_norm;
   kal_uint8 flag_amlut_o_norm;
   kal_uint8 flag_reserved[1];
   
   //By SF rate latch
   kal_uint8  en_ctde;
   kal_uint8  en_ftde;
   kal_uint8  en_otfc_am;
   kal_uint8  en_otfc_pm;
   
   //By SF rate latch and update
   kal_uint8  meas_state;
   kal_uint8  abort_state;

   //DPD Lab Vcc
   //Reuse org EMI addr CUIF: FEC_LTPC_CUIF_INI_CAL_DL_INFO2~5 (FEC_LTPC_CUIF_INI_CAL_DL_INFO5 @FEC_L_TX_COM_INFO_t)
   //By SF rate latch
   //Maybe use FSM but not trig flag because L1TPC will merge PA temp change flag
   kal_uint8  dpd_lab_vcc_update_state;  //Enum FSM: Let L1 knows FEC DMA done, L1 can update new LUT idx table
   kal_uint8  trig_dpd_lab_vcc_update;
}LTE_TPC_DPD_OTFC_CTRL_T;  //32+32+16+8+8=64b=3WORD

typedef volatile struct
{
   //By SF latch
   kal_uint16 max_am_UpdateStep;
   kal_uint16 min_am_UpdateStep;
   kal_uint8  roll_factor;
   kal_uint8  Nb_shift_pm_ss;
   kal_uint8  reserved[2]; 

   //NRT update TXK reg
   kal_uint32 REF_DFE_DELAY;

   //FEC requests L1: FEC_CAN_SCH_MEAS_STA
   kal_uint8 meas_sf_num;
   kal_uint8 meas_lut_idx;
   kal_uint8 fec_wait_am_flag;
   kal_uint8 fec_wait_pm_flag;

   //L1 sends to FEC: L1_SEND_AMPM_LUT_STA
   kal_uint8 am_lut_old[DPD_LUT_ENTRY_NUM];
   kal_int8  pm_lut_old[DPD_LUT_ENTRY_NUM];

   //FEC reports to L1: FEC_POST_PROC_STA
   kal_uint8 update_lut_idx;
   kal_uint8 fec_update_am_flag;  //L1 uses this flag to decide whether to write buf (to TXDFE SRAM)
   kal_uint8 fec_update_pm_flag;  //L1 uses this flag to decide whether to write buf (to TXDFE SRAM)
   kal_uint8 fec_bypass_algo;     //L1 uses this flag to decide whether to write buf (to TXDFE SRAM)
   kal_uint8 am_lut_new[DPD_LUT_ENTRY_NUM];
   kal_int8  pm_lut_new[DPD_LUT_ENTRY_NUM];
}LTE_TPC_DPD_OTFC_DATA_T;  //64+32+128*2+32+128*2=20WORD

typedef volatile struct
{
    //4G by SF latch, 3G by slot latch
    kal_uint8 flag_AMLUT_interp;
    kal_uint8 flag_Ui_norm;
    kal_uint8 flag_amlut_o_norm;
    kal_uint8 flag_reserved[1];

   
   //By slot rate latch
   kal_uint8  en_ctde;
   kal_uint8  en_ftde;
   kal_uint8  en_otfc_am;
   kal_uint8  en_otfc_pm;
   
   //By slot rate latch and update
   kal_uint8  meas_state;
   kal_uint8  abort_state;

   kal_uint8  dummy_1;  
   kal_uint8  dummy_2;
}WCDMA_TPC_DPD_OTFC_CTRL_T;  //32+16+8+8=64b=2WORD

typedef volatile struct
{
   //4G by SF latch, 3G by slot latch
   kal_uint16 max_am_UpdateStep;
   kal_uint16 min_am_UpdateStep;
   kal_uint8  roll_factor;
   kal_uint8  Nb_shift_pm_ss;
   kal_uint8  reserved[2]; 
   
   //FEC requests L1: FEC_CAN_SCH_MEAS_STA
   kal_uint8 meas_slot_num;  //For L1 debug, 3G: slot
   kal_uint8 meas_lut_idx;
   kal_uint8 fec_wait_am_flag;
   kal_uint8 fec_wait_pm_flag;

   //L1 sends to FEC: L1_SEND_AMPM_LUT_STA
   kal_uint8 am_lut_old[DPD_LUT_ENTRY_NUM];
   kal_int8  pm_lut_old[DPD_LUT_ENTRY_NUM];

   //FEC reports to L1: FEC_POST_PROC_STA
   kal_uint8 update_lut_idx;
   kal_uint8 fec_update_am_flag;  //L1 uses this flag to decide whether to write buf (to TXDFE SRAM)
   kal_uint8 fec_update_pm_flag;  //L1 uses this flag to decide whether to write buf (to TXDFE SRAM)
   kal_uint8 fec_bypass_algo;     //L1 uses this flag to decide whether to write buf (to TXDFE SRAM)
   kal_uint8 am_lut_new[DPD_LUT_ENTRY_NUM];
   kal_int8  pm_lut_new[DPD_LUT_ENTRY_NUM];
}WCDMA_TPC_DPD_OTFC_DATA_T;  //32+128*2+32+128*2=18WORD

typedef volatile struct {
    kal_uint32 FEC_LTPC_CUIF_CON_ATX_D_GTHERMAL_PARAMS0;                                  // 0x0000
    kal_uint32 FEC_LTPC_CUIF_CON_ATX_D_GTHERMAL_PARAMS1;                                  // 0x0004
} LTE_ATX_L01_INFO_t;

typedef volatile struct {
    kal_uint32 FEC_LTPC_CUIF_INI_CC_PARAM0;                                               // 0x0000
    kal_uint32 FEC_LTPC_CUIF_INI_CAL_DL_INFO5;                                            // 0x0004
    kal_uint32 FEC_LTPC_CUIF_INI_FEC_TX_BOOT_CHK;                                         // 0x0008
    kal_uint32 FEC_LTPC_CUIF_FEC_TX_TPC_PHYTEST_MODE;                                     // 0x000C
    kal_uint32 FEC_LTPC_CUIF_FEC_TX_TPC_RF_SELECT;                                        // 0x0010 //0:PGA A + PGA B(6177L) 1: PGA A only(6173)--> fill this cuif before nrt
    kal_uint32 FEC_LTPC_CUIF_FEC_TX_TPC_DDL_MODE;                                         // 0x0010 // DDL is meta mode(1) or normal(0) mode
    kal_uint32 FEC_LTPC_CUIF_INI_CAL_DL_INFO6;                                            // 0x0018
    kal_uint32 FEC_LTPC_CUIF_INI_CAL_DL_INFO7;                                            // 0x001C
    kal_uint32 FEC_LTPC_CUIF_ET_SO_GEN_CON;                                               // 0x0020
    kal_uint32 FEC_LTPC_CUIF_ET_POUT_MAX;                                                 // 0x0024
} FEC_L_TX_COM_INFO_t;

typedef volatile struct {
    kal_uint32 FEC_LTPC_CUIF_RESORT_EN;                                                   // 0x0000
    kal_uint32 FEC_LTPC_CUIF_RESORT_OFS_GLO0_0;                                           // 0x0004
    kal_uint32 FEC_LTPC_CUIF_RESORT_OFS_GLO0_1;                                           // 0x0008
    kal_uint32 FEC_LTPC_CUIF_RESORT_OFS_GLO1_0;                                           // 0x000C
    kal_uint32 FEC_LTPC_CUIF_RESORT_OFS_GLO1_1;                                           // 0x0010
} FEC_L_TX_RESORT_INFO_t;

typedef volatile struct {
    kal_uint32 FEC_LTPC_CUIF_INJECT_STRING_EN;                                            // 0x0000
    kal_uint32 FEC_LTPC_CUIF_INJECT_ASSERT_DUMP;                                          // 0x0004
    kal_uint32 FEC_LTPC_CUIF_INJECT_SET_GAIN;                                             // 0x0008
    kal_uint32 FEC_LTPC_CUIF_INJECT_FORCE_CONTOL;                                         // 0x000C
} FEC_L_TX_INJECT_STRING_INFO_t;


typedef volatile struct {
    /* framework and algo related cuif = 382 words*/
    FEC_L_TX_RESORT_INFO_t fec_l_tx_resort;//5
    FEC_L_TX_INJECT_STRING_INFO_t fec_l_tx_inject_string; //4
    FEC_L_TX_L01_INFO_t fec_l_tx_L01[FEC_L_TX_PATH_NUM][FEC_L_TX_BUFF_NUM];//81*2*2=324
    FEC_L_TX_P01_INFO_t fec_l_tx_P01[FEC_L_TX_PATH_NUM];// 52*2 = 104
    FEC_L_TX_COM_INFO_t fec_l_tx_COM;// 9

    /*ATX PCFE1 ALGO related table Size = 136 words*/
    LTE_TX_FEC_PA_TABLE_T fec_l_tx_PA_Table_APT_struct[FEC_L_TX_PATH_NUM]; // 13 * 2 =26
    LTE_TX_FEC_PA_TABLE_T fec_l_tx_PA_Table_DPD_struct[FEC_L_TX_PATH_NUM]; // 13 * 2 =26 
    LTE_TX_FEC_PA_TABLE_T fec_l_tx_PA_Table_ET_struct[FEC_L_TX_PATH_NUM];  // 13 * 2 =26 
    LTE_TX_FEC_OP_T fec_l_tx_OP_struct[FEC_L_TX_PATH_NUM]; // 2*2 = 4
    LTE_TX_FEC_CFR_TABLE_T fec_l_tx_cfr_table[FEC_L_TX_PATH_NUM];// 18*2 = 36
    TPC_POW_BACKOFF_st fec_l_tx_pow_backoff_struct[FEC_L_TX_PATH_NUM]; //7*2=14
    LTE_ATX_L01_INFO_t fec_l_atx_L01[FEC_L_TX_BUFF_NUM];//2*2=4

    /*DPD related table Size = 8 words*/
    LTE_TX_FEC_DPD_LUT_NORM_FACTOR_T fec_l_tx_dpd_lut_norm_factor_struct[FEC_L_TX_PATH_NUM]; // 4 * 2 = 8

    /*DPD Lab Vcc related table Size = 50 words*/
    //LTE_TX_FEC_PA_TABLE_T            fec_l_tx_PA_Table_DPD_struct_lab       [FEC_L_TX_PATH_NUM]; // 13 * 2 = 26, must be new CUIF (algo ptr switch)
    //LTE_TX_FEC_DPD_LUT_NORM_FACTOR_T fec_l_tx_dpd_lut_norm_factor_struct_lab[FEC_L_TX_PATH_NUM]; //  4 * 2 =  8, or overwrite org CUIF: fec_l_tx_dpd_lut_norm_factor_struct

    kal_uint32 fec_l_tx_temp[2];
}FEC_L_TX_INFO_t;

typedef volatile struct {
    kal_uint32 FEC_MMTX_CUIF_MM_TX_RAT;                                                   // 0x0000

    LTE_TPC_DPD_OTFC_CTRL_T l_dpd_otfc_ctrl[FEC_L_TX_PATH_NUM];  //  3 * 2 =  4 
    LTE_TPC_DPD_OTFC_DATA_T l_dpd_otfc_data[FEC_L_TX_PATH_NUM];  // 20 * 2 = 40

    WCDMA_TPC_DPD_OTFC_CTRL_T w_dpd_otfc_ctrl[1];
    WCDMA_TPC_DPD_OTFC_DATA_T w_dpd_otfc_data[1];
} FEC_M_TX_INFO_t;

// ----------------- FEC_C_TX Register Definition -------------------
typedef volatile struct {
    /* CL1D_RF_TPC_INIT_CMD */
    kal_uint32 FEC_CTPC_CUIF_INIT_RAT_TYPE;                                             // 0xXXXX
    kal_uint32 FEC_CTPC_CUIF_PA_VDD_SETUP_TIME;                                         // 0xXXXX
    kal_uint32 FEC_CTPC_CUIF_PA_SETUP_TIME;                                             // 0xXXXX
    kal_uint32 FEC_CTPC_CUIF_PGA_SETUP_TIME;                                            // 0xXXXX
    kal_uint32 FEC_CTPC_CUIF_GBB_SETUP_TIME;                                            // 0xXXXX
    kal_uint32 FEC_CTPC_CUIF_DDPC_MEAS_TIME;                                            // 0xXXXX
    kal_uint32 FEC_CTPC_CUIF_PWR_MAX_ORG;
    kal_uint32 FEC_CTPC_CUIF_PWR_MIN_ORG;
    kal_uint32 FEC_CTPC_CUIF_EMI_ADDR0;
    kal_uint32 FEC_CTPC_CUIF_EMI_ADDR1;
    kal_uint32 FEC_CTPC_CUIF_EMI_ADDR2;
    kal_uint32 FEC_CTPC_CUIF_EMI_ADDR3;
    kal_uint32 FEC_CTPC_CUIF_EMI_TABLE_SIZE0;
    kal_uint32 FEC_CTPC_CUIF_EMI_TABLE_SIZE1;
    kal_uint32 FEC_CTPC_CUIF_EMI_TABLE_SIZE2;
    kal_uint32 FEC_CTPC_CUIF_EMI_TABLE_SIZE3;
    kal_uint32 FEC_CTPC_CUIF_THERMAL_BACKOFF;
	kal_uint32 FEC_CTPC_CUIF_MIPI_CW_LENGTH;
	kal_uint32 FEC_CTPC_CUIF_PGA_VALID_NUM;
	kal_uint32 FEC_CTPC_CUIF_TX_POWER_OFFSET;
	kal_uint32 FEC_CTPC_CUIF_DDPC_DISABLE;
    /* CL1D_RF_TX_ON_CMD */
    kal_uint32 FEC_CTPC_CUIF_ON_RAT_TYPE;
    kal_uint32 FEC_CTPC_CUIF_CTRL_MODE;                                                 // 0xXXXX
    kal_uint32 FEC_CTPC_CUIF_PA_VDD_TYPE;                                               // 0xXXXX
    kal_uint32 FEC_CTPC_CUIF_PA_CTRL_TYPE;                                              // 0xXXXX
    kal_uint32 FEC_CTPC_CUIF_ON_START_OFFSET;
    kal_uint32 FEC_CTPC_CUIF_FREQ;
    kal_uint32 FEC_CTPC_CUIF_FREQ_BAND_TYPE;
    kal_uint32 FEC_CTPC_CUIF_RF_BSI_PORT_SEL;
    kal_uint32 FEC_CTPC_CUIF_PA_MIPI_PORT_SEL;
    kal_uint32 FEC_CTPC_CUIF_PA_PMIC_PORT_SEL;
    kal_uint32 FEC_CTPC_CUIF_PWR_REF;
    kal_uint32 FEC_CTPC_CUIF_RSSI_COMP;
    kal_uint32 FEC_CTPC_CUIF_OL_CORR_GAIN;
    kal_uint32 FEC_CTPC_CUIF_OL_MAX_SLEW;
    kal_uint32 FEC_CTPC_CUIF_RPC_COMB_THR;
    kal_uint32 FEC_CTPC_CUIF_TXAGC_SW_MODE_CTRL;
    kal_uint32 FEC_CTPC_CUIF_DIV_ONLY_EN;
    /* CL1D_RF_TX_OFF_CMD */
    kal_uint32 FEC_CTPC_CUIF_OFF_RAT_TYPE;
    kal_uint32 FEC_CTPC_CUIF_OFF_START_OFFSET;
    /* CL1D_RF_TX_GATE_CMD */
    kal_uint32 FEC_CTPC_CUIF_GATE_START_OFFSET;
    kal_uint32 FEC_CTPC_CUIF_GATE_STATUS;

    /* CL1D_RF_TPC_CFG_COMMON */
    kal_uint32 FEC_CTPC_CUIF_TPC_CFG_BUF_RD_SEL;
    kal_uint32 FEC_CTPC_CUIF_TPC_CFG_BUF_VLD[2];
    /******* CL1D_RF_TPC_CFG  **************/
    kal_uint32 FEC_CTPC_CUIF_TPC_CFG_CMD_VLD[2];
    kal_uint32 FEC_CTPC_CUIF_TPC_CFG_CMD_TYPE[2];
    /* CL1D_RF_TPC_CFG_EVDO_CMD */
    kal_uint32 FEC_CTPC_CUIF_EVDO_START_OFFSET[2];
    kal_uint32 FEC_CTPC_CUIF_EVDO_CL_VALID[2];
    kal_uint32 FEC_CTPC_CUIF_EVDO_CL_STEP_UP[2];
    kal_uint32 FEC_CTPC_CUIF_EVDO_CL_STEP_DW[2];
    kal_uint32 FEC_CTPC_CUIF_EVDO_CL_ADJ_MAX[2];
    kal_uint32 FEC_CTPC_CUIF_EVDO_CL_ADJ_MIN[2];
    kal_uint32 FEC_CTPC_CUIF_EVDO_PWR_MAX_ADJ[2];
    kal_uint32 FEC_CTPC_CUIF_EVDO_RPC_BIT_SW[2];
    kal_uint32 FEC_CTPC_CUIF_EVDO_KS_VALUE_SW[2];
    /* CL1D_RF_TPC_CFG_1XRTT_CMD */
    kal_uint32 FEC_CTPC_CUIF_RTT_START_OFFSET[2];
    kal_uint32 FEC_CTPC_CUIF_RTT_HPCG_PCTRL_EN[2];
    kal_uint32 FEC_CTPC_CUIF_RTT_PCG_VALID[2];
    kal_uint32 FEC_CTPC_CUIF_RTT_CL_STEP_UP[2];
    kal_uint32 FEC_CTPC_CUIF_RTT_CL_STEP_DW[2];
    kal_uint32 FEC_CTPC_CUIF_RTT_CL_ADJ_MAX[2];
    kal_uint32 FEC_CTPC_CUIF_RTT_CL_ADJ_MIN[2];
    kal_uint32 FEC_CTPC_CUIF_RTT_PWR_MAX_ADJ[2];
    kal_uint32 FEC_CTPC_CUIF_RTT_RPC_BIT_SW[2];
    kal_uint32 FEC_CTPC_CUIF_RTT_KS_VALUE_SW[2];
    kal_uint32 FEC_CTPC_CUIF_RTT_RPC_SYM_POS_SW[2];
    /* CL1D_RF_TPC_CFG_TST_FIX_POWER_CMD */
    kal_uint32 FEC_CTPC_CUIF_FIX_RAT_TYPE;
    kal_uint32 FEC_CTPC_CUIF_FIX_START_OFFSET;
    kal_uint32 FEC_CTPC_CUIF_FIX_TARGET_POWER;
    kal_uint32 FEC_CTPC_CUIF_FIX_ILPC_EN;
    kal_uint32 FEC_CTPC_CUIF_FIX_PA_CTRL_MODE;
    /* CL1D_RF_TPC_CFG_TST_MANUAL_POWER_CMD */
    kal_uint32 FEC_CTPC_CUIF_MAN_RAT_TYPE;
    kal_uint32 FEC_CTPC_CUIF_MAN_START_OFFSET;
    kal_uint32 FEC_CTPC_CUIF_MAN_TARGET_POWER;
    kal_uint32 FEC_CTPC_CUIF_MAN_CPL_GAIN;
    kal_uint32 FEC_CTPC_CUIF_MAN_ILPC_EN;
    kal_uint32 FEC_CTPC_CUIF_MAN_PA_CTRL_MODE;
    kal_uint32 FEC_CTPC_CUIF_MAN_PA_TBL_IDX;
    kal_uint32 FEC_CTPC_CUIF_MAN_REF_TARGET_POWER;
    kal_uint32 FEC_CTPC_CUIF_MAN_PA_GAIN;
    kal_uint32 FEC_CTPC_CUIF_MAN_PA_MODE;
    kal_uint32 FEC_CTPC_CUIF_MAN_PA_VDD_PMIC_CW;
    kal_uint32 FEC_CTPC_CUIF_MAN_PA_VM0;
    kal_uint32 FEC_CTPC_CUIF_MAN_PA_VM1;
    kal_uint32 FEC_CTPC_CUIF_MAN_DPD_AM;
    kal_uint32 FEC_CTPC_CUIF_MAN_DPD_PM;
    /* CL1D_RF_TPC_DBG_CMD */
    kal_uint32 FEC_CTPC_CUIF_DBG_RAT_TYPE;
    kal_uint32 FEC_CTPC_CUIF_DBG_SLOT_PCG_NU;
    kal_uint32 FEC_CTPC_CUIF_DBG_OP_MODE;
    kal_uint32 FEC_CTPC_CUIF_DBG_TX_POWER_CALC;
    kal_uint32 FEC_CTPC_CUIF_DBG_TX_POWER_MEAS;
    kal_uint32 FEC_CTPC_CUIF_DBG_IDX_PA;
    kal_uint32 FEC_CTPC_CUIF_DBG_PA_MODE;
    kal_uint32 FEC_CTPC_CUIF_DBG_PA_TABLE_MODE;
    kal_uint32 FEC_CTPC_CUIF_DBG_PA_GAIN;
    kal_uint32 FEC_CTPC_CUIF_DBG_IDX_PGA;
    kal_uint32 FEC_CTPC_CUIF_DBG_PGA_TABLE_MODE;
    kal_uint32 FEC_CTPC_CUIF_DBG_PGA_GAIN;
    kal_uint32 FEC_CTPC_CUIF_DBG_IDX_BB;
    kal_uint32 FEC_CTPC_CUIF_DBG_BB_GAIN;
    kal_uint32 FEC_CTPC_CUIF_DBG_IDX_CPL;
    kal_uint32 FEC_CTPC_CUIF_DBG_CPL_GAIN;
	kal_uint32 FEC_CTPC_CUIF_DBG_IDX_DET_PGA;
    kal_uint32 FEC_CTPC_CUIF_DBG_DET_PGA_GAIN;
    kal_uint32 FEC_CTPC_CUIF_DBG_CL_ACCUM_PRE;
    kal_uint32 FEC_CTPC_CUIF_DBG_OL_RX_PWR_FILTER_PRE;
    kal_uint32 FEC_CTPC_CUIF_DBG_PWR_MAX;
    kal_uint32 FEC_CTPC_CUIF_DBG_TARGET_PWR[2];
    kal_uint32 FEC_CTPC_CUIF_DBG_MAX_LIMIT_THD_CLIP;
    kal_uint32 FEC_CTPC_CUIF_DBG_KS[2];
    kal_uint32 FEC_CTPC_CUIF_DBG_RPC_SYM_POS;
    kal_uint32 FEC_CTPC_CUIF_DBG_TX_UPC_TRIG;
    kal_uint32 FEC_CTPC_CUIF_DBG_RPC_BIT;
    /* CL1D_RF_TX_CAL_DL_QUERY_CMD */
    kal_uint32 FEC_CTPC_CUIF_CAL_TEMP_COMP_VLD;
    /* CL1D_RF_TEST_QUERY_CMD */
    kal_uint32 FEC_CTPC_CUIF_TST_RAT_TYPE;
    kal_uint32 FEC_CTPC_CUIF_TST_MODE_EN;
    /* CL1D_RF_TPC_CFG_TST_FDB_CMD */
    kal_uint32 FEC_CTPC_CUIF_FDB_NORM_GAIN_IDX;
    kal_uint32 FEC_CTPC_CUIF_FDB_NORM_GAIN;
    kal_uint32 FEC_CTPC_CUIF_DPD_EN;
	kal_uint32 rsv_aera[113];                //padding
} FEC_C_TX_INFO_t;

// ----------------- FEC_C_RX Register Definition -------------------
/* FEC_C_RX_INIT_sub */
typedef volatile struct {
    kal_uint32 FEC_CAGC_CUIF_INI_BUF_VLD;
    kal_uint32 FEC_CAGC_CUIF_INI_TIME[3];                //by rx path
    kal_uint32 FEC_CAGC_CUIF_AGC_INI_EN[3];              //by rx path
    kal_uint32 FEC_CAGC_CUIF_INI_STA[3];                 //by rx path
    kal_uint32 FEC_CAGC_CUIF_ELNA_SEL[3];                //by rx path
    kal_uint32 FEC_CAGC_CUIF_ELNA_BPI_PIN_SEL_ON[3];     //by rx path
    kal_uint32 FEC_CAGC_CUIF_ELNA_BPI_PIN_SEL_BYPASS[3]; //by rx path
    kal_uint32 FEC_CAGC_CUIF_ELNA_MIPI_CW_ON[3];         //by rx path
    kal_uint32 FEC_CAGC_CUIF_ELNA_MIPI_CW_BYPASS[3];     //by rx path
    kal_uint32 FEC_CAGC_CUIF_INI_CELL_IDX[3];            //by rx path
    kal_uint32 FEC_CAGC_CUIF_PL_DATA_ADDR;
    kal_uint32 FEC_CAGC_CUIF_PL_DATA_LENGTH;
    kal_uint32 FEC_CAGC_CUIF_DC_TABLE_ADDR[3];
    kal_uint32 FEC_CAGC_CUIF_DC_TABLE_LENGTH;
	kal_uint32 FEC_CAGC_CUIF_LNA_GAIN_TABLE_ADDR[3];
    kal_uint32 FEC_CAGC_CUIF_LNA_GAIN_TABLE_LENGTH;
} FEC_C_RX_INIT_BUF_t;

typedef volatile struct {
    kal_uint32          FEC_CAGC_CUIF_INI_BUF_RD_PTR;
    FEC_C_RX_INIT_BUF_t FEC_CAGC_CUIF_INI_BUF[2];            //by double buffer
} FEC_C_RX_INIT_t;

/* FEC_C_RX_SCH_sub */
typedef volatile struct {
    kal_uint32 FEC_CAGC_CUIF_CFG_BUF_VLD;
    kal_uint32 FEC_CAGC_CUIF_CFG_VLD[3];                     //by rx path
    kal_uint32 FEC_CAGC_CUIF_CFG_TIME[3];                    //by rx path
    kal_uint32 FEC_CAGC_CUIF_CFG[3];                         //by rx path
    kal_uint32 FEC_CAGC_CUIF_CFG_RSSI_AVG_START_TIME[3];
    kal_uint32 FEC_CAGC_CUIF_CFG_RSSI_AVG_STOP_TIME[3];
} FEC_C_RX_SCH_BUF_t;

typedef volatile struct {
    kal_uint32         FEC_CAGC_CUIF_CFG_BUF_RD_PTR;
    FEC_C_RX_SCH_BUF_t FEC_CAGC_CUIF_CFG_BUF[2];            //by double buffer
} FEC_C_RX_SCH_t;

/* FEC_C_RX_END_sub */
typedef volatile struct {
    kal_uint32 FEC_CAGC_CUIF_END_TIME[3];                   //by rx path
    kal_uint32 FEC_CAGC_CUIF_END_EN[3];                     //by rx path
    kal_uint32 FEC_CAGC_CUIF_END_CELL_IDX[3];               //by rx path
} FEC_C_RX_END_t;

/* FEC_C_RX_COMMON_sub */
typedef volatile struct {
    kal_uint32 FEC_CAGC_CUIF_SW_MODE;
    kal_uint32 FEC_CAGC_CUIF_IQ_SWAP;
    kal_uint32 FEC_CAGC_CUIF_PL_TEMP_COMP_DATA_ADDR;
    kal_uint32 FEC_CAGC_CUIF_PL_TEMP_COMP_DATA_LENGTH;
    kal_uint32 FEC_CAGC_CUIF_INI_RF_GAIN[3];                 //by rx path
    kal_uint32 FEC_CAGC_CUIF_INI_DIG_GAIN[3];                //by rx path
    kal_uint32 FEC_CAGC_CUIF_INI_RSSI[3];                    //by rx path
    kal_uint32 FEC_CAGC_CUIF_TEMP_IDX;
} FEC_C_RX_COMMON_t;


typedef volatile struct {
    /* FEC_C_RX_INT_SCH_COMMMON of 1X & DO*/
    FEC_C_RX_COMMON_t FEC_CAGC_CUIF_COMMON[2];
    /* FEC_C_RX_INIT of 1X & DO */
    FEC_C_RX_INIT_t   FEC_CAGC_CUIF_INIT[2];
    /* FEC_C_RX_SCH of 1X & DO */
    FEC_C_RX_SCH_t    FEC_CAGC_CUIF_SCH[2];
    /* FEC_C_RX_END of 1X & DO */
    FEC_C_RX_END_t    FEC_CAGC_CUIF_END[2];
	kal_uint32        rsv_aera[109];                //padding
} FEC_C_RX_INFO_t;

typedef volatile struct {
    FEC_W_TX_INFO_t   fec_w_tx_cuif;
    kal_uint32        fec_w_tx_region_end;
    FEC_W_RX_INFO_t   fec_w_rx_cuif;
    kal_uint32        fec_w_rx_region_end;
    FEC_L_TX_INFO_t   fec_l_tx_cuif;
    kal_uint32        fec_l_tx_region_end;  
    FEC_L_RX_INFO_t   fec_l_rx_cuif;  
    kal_uint32        fec_l_rx_region_end;
    FEC_M_TX_INFO_t   fec_m_tx_cuif;
    kal_uint32        fec_m_tx_region_end;
    FEC_C_TX_INFO_t   fec_c_tx_cuif;
	kal_uint32        fec_c_tx_region_end;
    FEC_C_RX_INFO_t   fec_c_rx_cuif;
	kal_uint32        fec_c_rx_region_end;
} CUIF_FEC_region;

#endif // __CUIF_SS_region_H__


