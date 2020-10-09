#ifndef __CUIF_LTE_NCM_CC_RPT_H__
#define __CUIF_LTE_NCM_CC_RPT_H__

// ----------------- CUIF_LTE_NCM_CC_RPT Register Definition -------------------
typedef volatile struct {
    kal_uint32 INFO[12];                                                                  // 0x0000..0x002C
    kal_uint32 GDE_TIME_OFFSET[6];                                                        // 0x0030..0x0044
    kal_uint32 IIR[12];                                                                   // 0x0048..0x0074
    kal_uint32 GDE_MAN_P0_CELL0;                                                          // 0x0078
    kal_uint32 GDE_MAN_P1_CELL0;                                                          // 0x007C
    kal_uint32 GDE_EXP_CELL0;                                                             // 0x0080
    kal_uint32 GDE_MAN_P0_CELL1;                                                          // 0x0084
    kal_uint32 GDE_MAN_P1_CELL1;                                                          // 0x0088
    kal_uint32 GDE_EXP_CELL1;                                                             // 0x008C
    kal_uint32 GDE_MAN_P0_CELL2;                                                          // 0x0090
    kal_uint32 GDE_MAN_P1_CELL2;                                                          // 0x0094
    kal_uint32 GDE_EXP_CELL2;                                                             // 0x0098
    kal_uint32 GDE_MAN_P0_CELL3;                                                          // 0x009C
    kal_uint32 GDE_MAN_P1_CELL3;                                                          // 0x00A0
    kal_uint32 GDE_EXP_CELL3;                                                             // 0x00A4
    kal_uint32 GDE_MAN_P0_CELL4;                                                          // 0x00A8
    kal_uint32 GDE_MAN_P1_CELL4;                                                          // 0x00AC
    kal_uint32 GDE_EXP_CELL4;                                                             // 0x00B0
    kal_uint32 GDE_MAN_P0_CELL5;                                                          // 0x00B4
    kal_uint32 GDE_MAN_P1_CELL5;                                                          // 0x00B8
    kal_uint32 GDE_EXP_CELL5;                                                             // 0x00BC
    kal_uint32 GDE_MAN_P0_CELL6;                                                          // 0x00C0
    kal_uint32 GDE_MAN_P1_CELL6;                                                          // 0x00C4
    kal_uint32 GDE_EXP_CELL6;                                                             // 0x00C8
    kal_uint32 GDE_MAN_P0_CELL7;                                                          // 0x00CC
    kal_uint32 GDE_MAN_P1_CELL7;                                                          // 0x00D0
    kal_uint32 GDE_EXP_CELL7;                                                             // 0x00D4
    kal_uint32 GDE_MAN_P0_CELL8;                                                          // 0x00D8
    kal_uint32 GDE_MAN_P1_CELL8;                                                          // 0x00DC
    kal_uint32 GDE_EXP_CELL8;                                                             // 0x00E0
    kal_uint32 GDE_MAN_P0_CELL9;                                                          // 0x00E4
    kal_uint32 GDE_MAN_P1_CELL9;                                                          // 0x00E8
    kal_uint32 GDE_EXP_CELL9;                                                             // 0x00EC
    kal_uint32 GDE_MAN_P0_CELL10;                                                         // 0x00F0
    kal_uint32 GDE_MAN_P1_CELL10;                                                         // 0x00F4
    kal_uint32 GDE_EXP_CELL10;                                                            // 0x00F8
    kal_uint32 GDE_MAN_P0_CELL11;                                                         // 0x00FC
    kal_uint32 GDE_MAN_P1_CELL11;                                                         // 0x0100
    kal_uint32 GDE_EXP_CELL11;                                                            // 0x0104
    kal_uint32 RSSI_MAN_RX0_CELL0;                                                        // 0x0108
    kal_uint32 RSSI_MAN_RX1_CELL0;                                                        // 0x010C
    kal_uint32 RSSI_EXP_CELL0;                                                            // 0x0110
    kal_uint32 RSSI_MAN_RX0_CELL1;                                                        // 0x0114
    kal_uint32 RSSI_MAN_RX1_CELL1;                                                        // 0x0118
    kal_uint32 RSSI_EXP_CELL1;                                                            // 0x011C
    kal_uint32 RSSI_MAN_RX0_CELL2;                                                        // 0x0120
    kal_uint32 RSSI_MAN_RX1_CELL2;                                                        // 0x0124
    kal_uint32 RSSI_EXP_CELL2;                                                            // 0x0128
    kal_uint32 RSSI_MAN_RX0_CELL3;                                                        // 0x012C
    kal_uint32 RSSI_MAN_RX1_CELL3;                                                        // 0x0130
    kal_uint32 RSSI_EXP_CELL3;                                                            // 0x0134
    kal_uint32 RSSI_MAN_RX0_CELL4;                                                        // 0x0138
    kal_uint32 RSSI_MAN_RX1_CELL4;                                                        // 0x013C
    kal_uint32 RSSI_EXP_CELL4;                                                            // 0x0140
    kal_uint32 RSSI_MAN_RX0_CELL5;                                                        // 0x0144
    kal_uint32 RSSI_MAN_RX1_CELL5;                                                        // 0x0148
    kal_uint32 RSSI_EXP_CELL5;                                                            // 0x014C
    kal_uint32 RSSI_MAN_RX0_CELL6;                                                        // 0x0150
    kal_uint32 RSSI_MAN_RX1_CELL6;                                                        // 0x0154
    kal_uint32 RSSI_EXP_CELL6;                                                            // 0x0158
    kal_uint32 RSSI_MAN_RX0_CELL7;                                                        // 0x015C
    kal_uint32 RSSI_MAN_RX1_CELL7;                                                        // 0x0160
    kal_uint32 RSSI_EXP_CELL7;                                                            // 0x0164
    kal_uint32 RSSI_MAN_RX0_CELL8;                                                        // 0x0168
    kal_uint32 RSSI_MAN_RX1_CELL8;                                                        // 0x016C
    kal_uint32 RSSI_EXP_CELL8;                                                            // 0x0170
    kal_uint32 RSSI_MAN_RX0_CELL9;                                                        // 0x0174
    kal_uint32 RSSI_MAN_RX1_CELL9;                                                        // 0x0178
    kal_uint32 RSSI_EXP_CELL9;                                                            // 0x017C
    kal_uint32 RSSI_MAN_RX0_CELL10;                                                       // 0x0180
    kal_uint32 RSSI_MAN_RX1_CELL10;                                                       // 0x0184
    kal_uint32 RSSI_EXP_CELL10;                                                           // 0x0188
    kal_uint32 RSSI_MAN_RX0_CELL11;                                                       // 0x018C
    kal_uint32 RSSI_MAN_RX1_CELL11;                                                       // 0x0190
    kal_uint32 RSSI_EXP_CELL11;                                                           // 0x0194
    kal_uint32 RSRP_MAN_P0_RX0_CELL0;                                                     // 0x0198
    kal_uint32 RSRP_MAN_P0_RX1_CELL0;                                                     // 0x019C
    kal_uint32 RSRP_EXP_P0_CELL0;                                                         // 0x01A0
    kal_uint32 RSRP_MAN_P1_RX0_CELL0;                                                     // 0x01A4
    kal_uint32 RSRP_MAN_P1_RX1_CELL0;                                                     // 0x01A8
    kal_uint32 RSRP_EXP_P1_CELL0;                                                         // 0x01AC
    kal_uint32 RSRP_MAN_P0_RX0_CELL1;                                                     // 0x01B0
    kal_uint32 RSRP_MAN_P0_RX1_CELL1;                                                     // 0x01B4
    kal_uint32 RSRP_EXP_P0_CELL1;                                                         // 0x01B8
    kal_uint32 RSRP_MAN_P1_RX0_CELL1;                                                     // 0x01BC
    kal_uint32 RSRP_MAN_P1_RX1_CELL1;                                                     // 0x01C0
    kal_uint32 RSRP_EXP_P1_CELL1;                                                         // 0x01C4
    kal_uint32 RSRP_MAN_P0_RX0_CELL2;                                                     // 0x01C8
    kal_uint32 RSRP_MAN_P0_RX1_CELL2;                                                     // 0x01CC
    kal_uint32 RSRP_EXP_P0_CELL2;                                                         // 0x01D0
    kal_uint32 RSRP_MAN_P1_RX0_CELL2;                                                     // 0x01D4
    kal_uint32 RSRP_MAN_P1_RX1_CELL2;                                                     // 0x01D8
    kal_uint32 RSRP_EXP_P1_CELL2;                                                         // 0x01DC
    kal_uint32 RSRP_MAN_P0_RX0_CELL3;                                                     // 0x01E0
    kal_uint32 RSRP_MAN_P0_RX1_CELL3;                                                     // 0x01E4
    kal_uint32 RSRP_EXP_P0_CELL3;                                                         // 0x01E8
    kal_uint32 RSRP_MAN_P1_RX0_CELL3;                                                     // 0x01EC
    kal_uint32 RSRP_MAN_P1_RX1_CELL3;                                                     // 0x01F0
    kal_uint32 RSRP_EXP_P1_CELL3;                                                         // 0x01F4
    kal_uint32 RSRP_MAN_P0_RX0_CELL4;                                                     // 0x01F8
    kal_uint32 RSRP_MAN_P0_RX1_CELL4;                                                     // 0x01FC
    kal_uint32 RSRP_EXP_P0_CELL4;                                                         // 0x0200
    kal_uint32 RSRP_MAN_P1_RX0_CELL4;                                                     // 0x0204
    kal_uint32 RSRP_MAN_P1_RX1_CELL4;                                                     // 0x0208
    kal_uint32 RSRP_EXP_P1_CELL4;                                                         // 0x020C
    kal_uint32 RSRP_MAN_P0_RX0_CELL5;                                                     // 0x0210
    kal_uint32 RSRP_MAN_P0_RX1_CELL5;                                                     // 0x0214
    kal_uint32 RSRP_EXP_P0_CELL5;                                                         // 0x0218
    kal_uint32 RSRP_MAN_P1_RX0_CELL5;                                                     // 0x021C
    kal_uint32 RSRP_MAN_P1_RX1_CELL5;                                                     // 0x0220
    kal_uint32 RSRP_EXP_P1_CELL5;                                                         // 0x0224
    kal_uint32 RSRP_MAN_P0_RX0_CELL6;                                                     // 0x0228
    kal_uint32 RSRP_MAN_P0_RX1_CELL6;                                                     // 0x022C
    kal_uint32 RSRP_EXP_P0_CELL6;                                                         // 0x0230
    kal_uint32 RSRP_MAN_P1_RX0_CELL6;                                                     // 0x0234
    kal_uint32 RSRP_MAN_P1_RX1_CELL6;                                                     // 0x0238
    kal_uint32 RSRP_EXP_P1_CELL6;                                                         // 0x023C
    kal_uint32 RSRP_MAN_P0_RX0_CELL7;                                                     // 0x0240
    kal_uint32 RSRP_MAN_P0_RX1_CELL7;                                                     // 0x0244
    kal_uint32 RSRP_EXP_P0_CELL7;                                                         // 0x0248
    kal_uint32 RSRP_MAN_P1_RX0_CELL7;                                                     // 0x024C
    kal_uint32 RSRP_MAN_P1_RX1_CELL7;                                                     // 0x0250
    kal_uint32 RSRP_EXP_P1_CELL7;                                                         // 0x0254
    kal_uint32 RSRP_MAN_P0_RX0_CELL8;                                                     // 0x0258
    kal_uint32 RSRP_MAN_P0_RX1_CELL8;                                                     // 0x025C
    kal_uint32 RSRP_EXP_P0_CELL8;                                                         // 0x0260
    kal_uint32 RSRP_MAN_P1_RX0_CELL8;                                                     // 0x0264
    kal_uint32 RSRP_MAN_P1_RX1_CELL8;                                                     // 0x0268
    kal_uint32 RSRP_EXP_P1_CELL8;                                                         // 0x026C
    kal_uint32 RSRP_MAN_P0_RX0_CELL9;                                                     // 0x0270
    kal_uint32 RSRP_MAN_P0_RX1_CELL9;                                                     // 0x0274
    kal_uint32 RSRP_EXP_P0_CELL9;                                                         // 0x0278
    kal_uint32 RSRP_MAN_P1_RX0_CELL9;                                                     // 0x027C
    kal_uint32 RSRP_MAN_P1_RX1_CELL9;                                                     // 0x0280
    kal_uint32 RSRP_EXP_P1_CELL9;                                                         // 0x0284
    kal_uint32 RSRP_MAN_P0_RX0_CELL10;                                                    // 0x0288
    kal_uint32 RSRP_MAN_P0_RX1_CELL10;                                                    // 0x028C
    kal_uint32 RSRP_EXP_P0_CELL10;                                                        // 0x0290
    kal_uint32 RSRP_MAN_P1_RX0_CELL10;                                                    // 0x0294
    kal_uint32 RSRP_MAN_P1_RX1_CELL10;                                                    // 0x0298
    kal_uint32 RSRP_EXP_P1_CELL10;                                                        // 0x029C
    kal_uint32 RSRP_MAN_P0_RX0_CELL11;                                                    // 0x02A0
    kal_uint32 RSRP_MAN_P0_RX1_CELL11;                                                    // 0x02A4
    kal_uint32 RSRP_EXP_P0_CELL11;                                                        // 0x02A8
    kal_uint32 RSRP_MAN_P1_RX0_CELL11;                                                    // 0x02AC
    kal_uint32 RSRP_MAN_P1_RX1_CELL11;                                                    // 0x02B0
    kal_uint32 RSRP_EXP_P1_CELL11;                                                        // 0x02B4
    kal_uint32 RSTP_MAN_P0_RX0_CELL0;                                                     // 0x02B8
    kal_uint32 RSTP_MAN_P0_RX1_CELL0;                                                     // 0x02BC
    kal_uint32 RSTP_EXP_P0_CELL0;                                                         // 0x02C0
    kal_uint32 RSTP_MAN_P1_RX0_CELL0;                                                     // 0x02C4
    kal_uint32 RSTP_MAN_P1_RX1_CELL0;                                                     // 0x02C8
    kal_uint32 RSTP_EXP_P1_CELL0;                                                         // 0x02CC
    kal_uint32 RSTP_MAN_P0_RX0_CELL1;                                                     // 0x02D0
    kal_uint32 RSTP_MAN_P0_RX1_CELL1;                                                     // 0x02D4
    kal_uint32 RSTP_EXP_P0_CELL1;                                                         // 0x02D8
    kal_uint32 RSTP_MAN_P1_RX0_CELL1;                                                     // 0x02DC
    kal_uint32 RSTP_MAN_P1_RX1_CELL1;                                                     // 0x02E0
    kal_uint32 RSTP_EXP_P1_CELL1;                                                         // 0x02E4
    kal_uint32 RSTP_MAN_P0_RX0_CELL2;                                                     // 0x02E8
    kal_uint32 RSTP_MAN_P0_RX1_CELL2;                                                     // 0x02EC
    kal_uint32 RSTP_EXP_P0_CELL2;                                                         // 0x02F0
    kal_uint32 RSTP_MAN_P1_RX0_CELL2;                                                     // 0x02F4
    kal_uint32 RSTP_MAN_P1_RX1_CELL2;                                                     // 0x02F8
    kal_uint32 RSTP_EXP_P1_CELL2;                                                         // 0x02FC
    kal_uint32 RSTP_MAN_P0_RX0_CELL3;                                                     // 0x0300
    kal_uint32 RSTP_MAN_P0_RX1_CELL3;                                                     // 0x0304
    kal_uint32 RSTP_EXP_P0_CELL3;                                                         // 0x0308
    kal_uint32 RSTP_MAN_P1_RX0_CELL3;                                                     // 0x030C
    kal_uint32 RSTP_MAN_P1_RX1_CELL3;                                                     // 0x0310
    kal_uint32 RSTP_EXP_P1_CELL3;                                                         // 0x0314
    kal_uint32 RSTP_MAN_P0_RX0_CELL4;                                                     // 0x0318
    kal_uint32 RSTP_MAN_P0_RX1_CELL4;                                                     // 0x031C
    kal_uint32 RSTP_EXP_P0_CELL4;                                                         // 0x0320
    kal_uint32 RSTP_MAN_P1_RX0_CELL4;                                                     // 0x0324
    kal_uint32 RSTP_MAN_P1_RX1_CELL4;                                                     // 0x0328
    kal_uint32 RSTP_EXP_P1_CELL4;                                                         // 0x032C
    kal_uint32 RSTP_MAN_P0_RX0_CELL5;                                                     // 0x0330
    kal_uint32 RSTP_MAN_P0_RX1_CELL5;                                                     // 0x0334
    kal_uint32 RSTP_EXP_P0_CELL5;                                                         // 0x0338
    kal_uint32 RSTP_MAN_P1_RX0_CELL5;                                                     // 0x033C
    kal_uint32 RSTP_MAN_P1_RX1_CELL5;                                                     // 0x0340
    kal_uint32 RSTP_EXP_P1_CELL5;                                                         // 0x0344
    kal_uint32 RSTP_MAN_P0_RX0_CELL6;                                                     // 0x0348
    kal_uint32 RSTP_MAN_P0_RX1_CELL6;                                                     // 0x034C
    kal_uint32 RSTP_EXP_P0_CELL6;                                                         // 0x0350
    kal_uint32 RSTP_MAN_P1_RX0_CELL6;                                                     // 0x0354
    kal_uint32 RSTP_MAN_P1_RX1_CELL6;                                                     // 0x0358
    kal_uint32 RSTP_EXP_P1_CELL6;                                                         // 0x035C
    kal_uint32 RSTP_MAN_P0_RX0_CELL7;                                                     // 0x0360
    kal_uint32 RSTP_MAN_P0_RX1_CELL7;                                                     // 0x0364
    kal_uint32 RSTP_EXP_P0_CELL7;                                                         // 0x0368
    kal_uint32 RSTP_MAN_P1_RX0_CELL7;                                                     // 0x036C
    kal_uint32 RSTP_MAN_P1_RX1_CELL7;                                                     // 0x0370
    kal_uint32 RSTP_EXP_P1_CELL7;                                                         // 0x0374
    kal_uint32 RSTP_MAN_P0_RX0_CELL8;                                                     // 0x0378
    kal_uint32 RSTP_MAN_P0_RX1_CELL8;                                                     // 0x037C
    kal_uint32 RSTP_EXP_P0_CELL8;                                                         // 0x0380
    kal_uint32 RSTP_MAN_P1_RX0_CELL8;                                                     // 0x0384
    kal_uint32 RSTP_MAN_P1_RX1_CELL8;                                                     // 0x0388
    kal_uint32 RSTP_EXP_P1_CELL8;                                                         // 0x038C
    kal_uint32 RSTP_MAN_P0_RX0_CELL9;                                                     // 0x0390
    kal_uint32 RSTP_MAN_P0_RX1_CELL9;                                                     // 0x0394
    kal_uint32 RSTP_EXP_P0_CELL9;                                                         // 0x0398
    kal_uint32 RSTP_MAN_P1_RX0_CELL9;                                                     // 0x039C
    kal_uint32 RSTP_MAN_P1_RX1_CELL9;                                                     // 0x03A0
    kal_uint32 RSTP_EXP_P1_CELL9;                                                         // 0x03A4
    kal_uint32 RSTP_MAN_P0_RX0_CELL10;                                                    // 0x03A8
    kal_uint32 RSTP_MAN_P0_RX1_CELL10;                                                    // 0x03AC
    kal_uint32 RSTP_EXP_P0_CELL10;                                                        // 0x03B0
    kal_uint32 RSTP_MAN_P1_RX0_CELL10;                                                    // 0x03B4
    kal_uint32 RSTP_MAN_P1_RX1_CELL10;                                                    // 0x03B8
    kal_uint32 RSTP_EXP_P1_CELL10;                                                        // 0x03BC
    kal_uint32 RSTP_MAN_P0_RX0_CELL11;                                                    // 0x03C0
    kal_uint32 RSTP_MAN_P0_RX1_CELL11;                                                    // 0x03C4
    kal_uint32 RSTP_EXP_P0_CELL11;                                                        // 0x03C8
    kal_uint32 RSTP_MAN_P1_RX0_CELL11;                                                    // 0x03CC
    kal_uint32 RSTP_MAN_P1_RX1_CELL11;                                                    // 0x03D0
    kal_uint32 RSTP_EXP_P1_CELL11;                                                        // 0x03D4
} CUIF_LTE_NCM_CC_RPT_REGS, *PCUIF_LTE_NCM_CC_RPT_REGS;

// ---------- CUIF_LTE_NCM_CC_RPT word-offset  ----------
#define O_CUIF_LTE_NCM_CC_RPT_INFO(i)                                                     (0 + (i))
#define O_CUIF_LTE_NCM_CC_RPT_GDE_TIME_OFFSET(i)                                          (12 + (i))
#define O_CUIF_LTE_NCM_CC_RPT_IIR(i)                                                      (18 + (i))
#define O_CUIF_LTE_NCM_CC_RPT_GDE_MAN_P0_CELL0                                            (30)
#define O_CUIF_LTE_NCM_CC_RPT_GDE_MAN_P1_CELL0                                            (31)
#define O_CUIF_LTE_NCM_CC_RPT_GDE_EXP_CELL0                                               (32)
#define O_CUIF_LTE_NCM_CC_RPT_GDE_MAN_P0_CELL1                                            (33)
#define O_CUIF_LTE_NCM_CC_RPT_GDE_MAN_P1_CELL1                                            (34)
#define O_CUIF_LTE_NCM_CC_RPT_GDE_EXP_CELL1                                               (35)
#define O_CUIF_LTE_NCM_CC_RPT_GDE_MAN_P0_CELL2                                            (36)
#define O_CUIF_LTE_NCM_CC_RPT_GDE_MAN_P1_CELL2                                            (37)
#define O_CUIF_LTE_NCM_CC_RPT_GDE_EXP_CELL2                                               (38)
#define O_CUIF_LTE_NCM_CC_RPT_GDE_MAN_P0_CELL3                                            (39)
#define O_CUIF_LTE_NCM_CC_RPT_GDE_MAN_P1_CELL3                                            (40)
#define O_CUIF_LTE_NCM_CC_RPT_GDE_EXP_CELL3                                               (41)
#define O_CUIF_LTE_NCM_CC_RPT_GDE_MAN_P0_CELL4                                            (42)
#define O_CUIF_LTE_NCM_CC_RPT_GDE_MAN_P1_CELL4                                            (43)
#define O_CUIF_LTE_NCM_CC_RPT_GDE_EXP_CELL4                                               (44)
#define O_CUIF_LTE_NCM_CC_RPT_GDE_MAN_P0_CELL5                                            (45)
#define O_CUIF_LTE_NCM_CC_RPT_GDE_MAN_P1_CELL5                                            (46)
#define O_CUIF_LTE_NCM_CC_RPT_GDE_EXP_CELL5                                               (47)
#define O_CUIF_LTE_NCM_CC_RPT_GDE_MAN_P0_CELL6                                            (48)
#define O_CUIF_LTE_NCM_CC_RPT_GDE_MAN_P1_CELL6                                            (49)
#define O_CUIF_LTE_NCM_CC_RPT_GDE_EXP_CELL6                                               (50)
#define O_CUIF_LTE_NCM_CC_RPT_GDE_MAN_P0_CELL7                                            (51)
#define O_CUIF_LTE_NCM_CC_RPT_GDE_MAN_P1_CELL7                                            (52)
#define O_CUIF_LTE_NCM_CC_RPT_GDE_EXP_CELL7                                               (53)
#define O_CUIF_LTE_NCM_CC_RPT_GDE_MAN_P0_CELL8                                            (54)
#define O_CUIF_LTE_NCM_CC_RPT_GDE_MAN_P1_CELL8                                            (55)
#define O_CUIF_LTE_NCM_CC_RPT_GDE_EXP_CELL8                                               (56)
#define O_CUIF_LTE_NCM_CC_RPT_GDE_MAN_P0_CELL9                                            (57)
#define O_CUIF_LTE_NCM_CC_RPT_GDE_MAN_P1_CELL9                                            (58)
#define O_CUIF_LTE_NCM_CC_RPT_GDE_EXP_CELL9                                               (59)
#define O_CUIF_LTE_NCM_CC_RPT_GDE_MAN_P0_CELL10                                           (60)
#define O_CUIF_LTE_NCM_CC_RPT_GDE_MAN_P1_CELL10                                           (61)
#define O_CUIF_LTE_NCM_CC_RPT_GDE_EXP_CELL10                                              (62)
#define O_CUIF_LTE_NCM_CC_RPT_GDE_MAN_P0_CELL11                                           (63)
#define O_CUIF_LTE_NCM_CC_RPT_GDE_MAN_P1_CELL11                                           (64)
#define O_CUIF_LTE_NCM_CC_RPT_GDE_EXP_CELL11                                              (65)
#define O_CUIF_LTE_NCM_CC_RPT_RSSI_MAN_RX0_CELL0                                          (66)
#define O_CUIF_LTE_NCM_CC_RPT_RSSI_MAN_RX1_CELL0                                          (67)
#define O_CUIF_LTE_NCM_CC_RPT_RSSI_EXP_CELL0                                              (68)
#define O_CUIF_LTE_NCM_CC_RPT_RSSI_MAN_RX0_CELL1                                          (69)
#define O_CUIF_LTE_NCM_CC_RPT_RSSI_MAN_RX1_CELL1                                          (70)
#define O_CUIF_LTE_NCM_CC_RPT_RSSI_EXP_CELL1                                              (71)
#define O_CUIF_LTE_NCM_CC_RPT_RSSI_MAN_RX0_CELL2                                          (72)
#define O_CUIF_LTE_NCM_CC_RPT_RSSI_MAN_RX1_CELL2                                          (73)
#define O_CUIF_LTE_NCM_CC_RPT_RSSI_EXP_CELL2                                              (74)
#define O_CUIF_LTE_NCM_CC_RPT_RSSI_MAN_RX0_CELL3                                          (75)
#define O_CUIF_LTE_NCM_CC_RPT_RSSI_MAN_RX1_CELL3                                          (76)
#define O_CUIF_LTE_NCM_CC_RPT_RSSI_EXP_CELL3                                              (77)
#define O_CUIF_LTE_NCM_CC_RPT_RSSI_MAN_RX0_CELL4                                          (78)
#define O_CUIF_LTE_NCM_CC_RPT_RSSI_MAN_RX1_CELL4                                          (79)
#define O_CUIF_LTE_NCM_CC_RPT_RSSI_EXP_CELL4                                              (80)
#define O_CUIF_LTE_NCM_CC_RPT_RSSI_MAN_RX0_CELL5                                          (81)
#define O_CUIF_LTE_NCM_CC_RPT_RSSI_MAN_RX1_CELL5                                          (82)
#define O_CUIF_LTE_NCM_CC_RPT_RSSI_EXP_CELL5                                              (83)
#define O_CUIF_LTE_NCM_CC_RPT_RSSI_MAN_RX0_CELL6                                          (84)
#define O_CUIF_LTE_NCM_CC_RPT_RSSI_MAN_RX1_CELL6                                          (85)
#define O_CUIF_LTE_NCM_CC_RPT_RSSI_EXP_CELL6                                              (86)
#define O_CUIF_LTE_NCM_CC_RPT_RSSI_MAN_RX0_CELL7                                          (87)
#define O_CUIF_LTE_NCM_CC_RPT_RSSI_MAN_RX1_CELL7                                          (88)
#define O_CUIF_LTE_NCM_CC_RPT_RSSI_EXP_CELL7                                              (89)
#define O_CUIF_LTE_NCM_CC_RPT_RSSI_MAN_RX0_CELL8                                          (90)
#define O_CUIF_LTE_NCM_CC_RPT_RSSI_MAN_RX1_CELL8                                          (91)
#define O_CUIF_LTE_NCM_CC_RPT_RSSI_EXP_CELL8                                              (92)
#define O_CUIF_LTE_NCM_CC_RPT_RSSI_MAN_RX0_CELL9                                          (93)
#define O_CUIF_LTE_NCM_CC_RPT_RSSI_MAN_RX1_CELL9                                          (94)
#define O_CUIF_LTE_NCM_CC_RPT_RSSI_EXP_CELL9                                              (95)
#define O_CUIF_LTE_NCM_CC_RPT_RSSI_MAN_RX0_CELL10                                         (96)
#define O_CUIF_LTE_NCM_CC_RPT_RSSI_MAN_RX1_CELL10                                         (97)
#define O_CUIF_LTE_NCM_CC_RPT_RSSI_EXP_CELL10                                             (98)
#define O_CUIF_LTE_NCM_CC_RPT_RSSI_MAN_RX0_CELL11                                         (99)
#define O_CUIF_LTE_NCM_CC_RPT_RSSI_MAN_RX1_CELL11                                         (100)
#define O_CUIF_LTE_NCM_CC_RPT_RSSI_EXP_CELL11                                             (101)
#define O_CUIF_LTE_NCM_CC_RPT_RSRP_MAN_P0_RX0_CELL0                                       (102)
#define O_CUIF_LTE_NCM_CC_RPT_RSRP_MAN_P0_RX1_CELL0                                       (103)
#define O_CUIF_LTE_NCM_CC_RPT_RSRP_EXP_P0_CELL0                                           (104)
#define O_CUIF_LTE_NCM_CC_RPT_RSRP_MAN_P1_RX0_CELL0                                       (105)
#define O_CUIF_LTE_NCM_CC_RPT_RSRP_MAN_P1_RX1_CELL0                                       (106)
#define O_CUIF_LTE_NCM_CC_RPT_RSRP_EXP_P1_CELL0                                           (107)
#define O_CUIF_LTE_NCM_CC_RPT_RSRP_MAN_P0_RX0_CELL1                                       (108)
#define O_CUIF_LTE_NCM_CC_RPT_RSRP_MAN_P0_RX1_CELL1                                       (109)
#define O_CUIF_LTE_NCM_CC_RPT_RSRP_EXP_P0_CELL1                                           (110)
#define O_CUIF_LTE_NCM_CC_RPT_RSRP_MAN_P1_RX0_CELL1                                       (111)
#define O_CUIF_LTE_NCM_CC_RPT_RSRP_MAN_P1_RX1_CELL1                                       (112)
#define O_CUIF_LTE_NCM_CC_RPT_RSRP_EXP_P1_CELL1                                           (113)
#define O_CUIF_LTE_NCM_CC_RPT_RSRP_MAN_P0_RX0_CELL2                                       (114)
#define O_CUIF_LTE_NCM_CC_RPT_RSRP_MAN_P0_RX1_CELL2                                       (115)
#define O_CUIF_LTE_NCM_CC_RPT_RSRP_EXP_P0_CELL2                                           (116)
#define O_CUIF_LTE_NCM_CC_RPT_RSRP_MAN_P1_RX0_CELL2                                       (117)
#define O_CUIF_LTE_NCM_CC_RPT_RSRP_MAN_P1_RX1_CELL2                                       (118)
#define O_CUIF_LTE_NCM_CC_RPT_RSRP_EXP_P1_CELL2                                           (119)
#define O_CUIF_LTE_NCM_CC_RPT_RSRP_MAN_P0_RX0_CELL3                                       (120)
#define O_CUIF_LTE_NCM_CC_RPT_RSRP_MAN_P0_RX1_CELL3                                       (121)
#define O_CUIF_LTE_NCM_CC_RPT_RSRP_EXP_P0_CELL3                                           (122)
#define O_CUIF_LTE_NCM_CC_RPT_RSRP_MAN_P1_RX0_CELL3                                       (123)
#define O_CUIF_LTE_NCM_CC_RPT_RSRP_MAN_P1_RX1_CELL3                                       (124)
#define O_CUIF_LTE_NCM_CC_RPT_RSRP_EXP_P1_CELL3                                           (125)
#define O_CUIF_LTE_NCM_CC_RPT_RSRP_MAN_P0_RX0_CELL4                                       (126)
#define O_CUIF_LTE_NCM_CC_RPT_RSRP_MAN_P0_RX1_CELL4                                       (127)
#define O_CUIF_LTE_NCM_CC_RPT_RSRP_EXP_P0_CELL4                                           (128)
#define O_CUIF_LTE_NCM_CC_RPT_RSRP_MAN_P1_RX0_CELL4                                       (129)
#define O_CUIF_LTE_NCM_CC_RPT_RSRP_MAN_P1_RX1_CELL4                                       (130)
#define O_CUIF_LTE_NCM_CC_RPT_RSRP_EXP_P1_CELL4                                           (131)
#define O_CUIF_LTE_NCM_CC_RPT_RSRP_MAN_P0_RX0_CELL5                                       (132)
#define O_CUIF_LTE_NCM_CC_RPT_RSRP_MAN_P0_RX1_CELL5                                       (133)
#define O_CUIF_LTE_NCM_CC_RPT_RSRP_EXP_P0_CELL5                                           (134)
#define O_CUIF_LTE_NCM_CC_RPT_RSRP_MAN_P1_RX0_CELL5                                       (135)
#define O_CUIF_LTE_NCM_CC_RPT_RSRP_MAN_P1_RX1_CELL5                                       (136)
#define O_CUIF_LTE_NCM_CC_RPT_RSRP_EXP_P1_CELL5                                           (137)
#define O_CUIF_LTE_NCM_CC_RPT_RSRP_MAN_P0_RX0_CELL6                                       (138)
#define O_CUIF_LTE_NCM_CC_RPT_RSRP_MAN_P0_RX1_CELL6                                       (139)
#define O_CUIF_LTE_NCM_CC_RPT_RSRP_EXP_P0_CELL6                                           (140)
#define O_CUIF_LTE_NCM_CC_RPT_RSRP_MAN_P1_RX0_CELL6                                       (141)
#define O_CUIF_LTE_NCM_CC_RPT_RSRP_MAN_P1_RX1_CELL6                                       (142)
#define O_CUIF_LTE_NCM_CC_RPT_RSRP_EXP_P1_CELL6                                           (143)
#define O_CUIF_LTE_NCM_CC_RPT_RSRP_MAN_P0_RX0_CELL7                                       (144)
#define O_CUIF_LTE_NCM_CC_RPT_RSRP_MAN_P0_RX1_CELL7                                       (145)
#define O_CUIF_LTE_NCM_CC_RPT_RSRP_EXP_P0_CELL7                                           (146)
#define O_CUIF_LTE_NCM_CC_RPT_RSRP_MAN_P1_RX0_CELL7                                       (147)
#define O_CUIF_LTE_NCM_CC_RPT_RSRP_MAN_P1_RX1_CELL7                                       (148)
#define O_CUIF_LTE_NCM_CC_RPT_RSRP_EXP_P1_CELL7                                           (149)
#define O_CUIF_LTE_NCM_CC_RPT_RSRP_MAN_P0_RX0_CELL8                                       (150)
#define O_CUIF_LTE_NCM_CC_RPT_RSRP_MAN_P0_RX1_CELL8                                       (151)
#define O_CUIF_LTE_NCM_CC_RPT_RSRP_EXP_P0_CELL8                                           (152)
#define O_CUIF_LTE_NCM_CC_RPT_RSRP_MAN_P1_RX0_CELL8                                       (153)
#define O_CUIF_LTE_NCM_CC_RPT_RSRP_MAN_P1_RX1_CELL8                                       (154)
#define O_CUIF_LTE_NCM_CC_RPT_RSRP_EXP_P1_CELL8                                           (155)
#define O_CUIF_LTE_NCM_CC_RPT_RSRP_MAN_P0_RX0_CELL9                                       (156)
#define O_CUIF_LTE_NCM_CC_RPT_RSRP_MAN_P0_RX1_CELL9                                       (157)
#define O_CUIF_LTE_NCM_CC_RPT_RSRP_EXP_P0_CELL9                                           (158)
#define O_CUIF_LTE_NCM_CC_RPT_RSRP_MAN_P1_RX0_CELL9                                       (159)
#define O_CUIF_LTE_NCM_CC_RPT_RSRP_MAN_P1_RX1_CELL9                                       (160)
#define O_CUIF_LTE_NCM_CC_RPT_RSRP_EXP_P1_CELL9                                           (161)
#define O_CUIF_LTE_NCM_CC_RPT_RSRP_MAN_P0_RX0_CELL10                                      (162)
#define O_CUIF_LTE_NCM_CC_RPT_RSRP_MAN_P0_RX1_CELL10                                      (163)
#define O_CUIF_LTE_NCM_CC_RPT_RSRP_EXP_P0_CELL10                                          (164)
#define O_CUIF_LTE_NCM_CC_RPT_RSRP_MAN_P1_RX0_CELL10                                      (165)
#define O_CUIF_LTE_NCM_CC_RPT_RSRP_MAN_P1_RX1_CELL10                                      (166)
#define O_CUIF_LTE_NCM_CC_RPT_RSRP_EXP_P1_CELL10                                          (167)
#define O_CUIF_LTE_NCM_CC_RPT_RSRP_MAN_P0_RX0_CELL11                                      (168)
#define O_CUIF_LTE_NCM_CC_RPT_RSRP_MAN_P0_RX1_CELL11                                      (169)
#define O_CUIF_LTE_NCM_CC_RPT_RSRP_EXP_P0_CELL11                                          (170)
#define O_CUIF_LTE_NCM_CC_RPT_RSRP_MAN_P1_RX0_CELL11                                      (171)
#define O_CUIF_LTE_NCM_CC_RPT_RSRP_MAN_P1_RX1_CELL11                                      (172)
#define O_CUIF_LTE_NCM_CC_RPT_RSRP_EXP_P1_CELL11                                          (173)
#define O_CUIF_LTE_NCM_CC_RPT_RSTP_MAN_P0_RX0_CELL0                                       (174)
#define O_CUIF_LTE_NCM_CC_RPT_RSTP_MAN_P0_RX1_CELL0                                       (175)
#define O_CUIF_LTE_NCM_CC_RPT_RSTP_EXP_P0_CELL0                                           (176)
#define O_CUIF_LTE_NCM_CC_RPT_RSTP_MAN_P1_RX0_CELL0                                       (177)
#define O_CUIF_LTE_NCM_CC_RPT_RSTP_MAN_P1_RX1_CELL0                                       (178)
#define O_CUIF_LTE_NCM_CC_RPT_RSTP_EXP_P1_CELL0                                           (179)
#define O_CUIF_LTE_NCM_CC_RPT_RSTP_MAN_P0_RX0_CELL1                                       (180)
#define O_CUIF_LTE_NCM_CC_RPT_RSTP_MAN_P0_RX1_CELL1                                       (181)
#define O_CUIF_LTE_NCM_CC_RPT_RSTP_EXP_P0_CELL1                                           (182)
#define O_CUIF_LTE_NCM_CC_RPT_RSTP_MAN_P1_RX0_CELL1                                       (183)
#define O_CUIF_LTE_NCM_CC_RPT_RSTP_MAN_P1_RX1_CELL1                                       (184)
#define O_CUIF_LTE_NCM_CC_RPT_RSTP_EXP_P1_CELL1                                           (185)
#define O_CUIF_LTE_NCM_CC_RPT_RSTP_MAN_P0_RX0_CELL2                                       (186)
#define O_CUIF_LTE_NCM_CC_RPT_RSTP_MAN_P0_RX1_CELL2                                       (187)
#define O_CUIF_LTE_NCM_CC_RPT_RSTP_EXP_P0_CELL2                                           (188)
#define O_CUIF_LTE_NCM_CC_RPT_RSTP_MAN_P1_RX0_CELL2                                       (189)
#define O_CUIF_LTE_NCM_CC_RPT_RSTP_MAN_P1_RX1_CELL2                                       (190)
#define O_CUIF_LTE_NCM_CC_RPT_RSTP_EXP_P1_CELL2                                           (191)
#define O_CUIF_LTE_NCM_CC_RPT_RSTP_MAN_P0_RX0_CELL3                                       (192)
#define O_CUIF_LTE_NCM_CC_RPT_RSTP_MAN_P0_RX1_CELL3                                       (193)
#define O_CUIF_LTE_NCM_CC_RPT_RSTP_EXP_P0_CELL3                                           (194)
#define O_CUIF_LTE_NCM_CC_RPT_RSTP_MAN_P1_RX0_CELL3                                       (195)
#define O_CUIF_LTE_NCM_CC_RPT_RSTP_MAN_P1_RX1_CELL3                                       (196)
#define O_CUIF_LTE_NCM_CC_RPT_RSTP_EXP_P1_CELL3                                           (197)
#define O_CUIF_LTE_NCM_CC_RPT_RSTP_MAN_P0_RX0_CELL4                                       (198)
#define O_CUIF_LTE_NCM_CC_RPT_RSTP_MAN_P0_RX1_CELL4                                       (199)
#define O_CUIF_LTE_NCM_CC_RPT_RSTP_EXP_P0_CELL4                                           (200)
#define O_CUIF_LTE_NCM_CC_RPT_RSTP_MAN_P1_RX0_CELL4                                       (201)
#define O_CUIF_LTE_NCM_CC_RPT_RSTP_MAN_P1_RX1_CELL4                                       (202)
#define O_CUIF_LTE_NCM_CC_RPT_RSTP_EXP_P1_CELL4                                           (203)
#define O_CUIF_LTE_NCM_CC_RPT_RSTP_MAN_P0_RX0_CELL5                                       (204)
#define O_CUIF_LTE_NCM_CC_RPT_RSTP_MAN_P0_RX1_CELL5                                       (205)
#define O_CUIF_LTE_NCM_CC_RPT_RSTP_EXP_P0_CELL5                                           (206)
#define O_CUIF_LTE_NCM_CC_RPT_RSTP_MAN_P1_RX0_CELL5                                       (207)
#define O_CUIF_LTE_NCM_CC_RPT_RSTP_MAN_P1_RX1_CELL5                                       (208)
#define O_CUIF_LTE_NCM_CC_RPT_RSTP_EXP_P1_CELL5                                           (209)
#define O_CUIF_LTE_NCM_CC_RPT_RSTP_MAN_P0_RX0_CELL6                                       (210)
#define O_CUIF_LTE_NCM_CC_RPT_RSTP_MAN_P0_RX1_CELL6                                       (211)
#define O_CUIF_LTE_NCM_CC_RPT_RSTP_EXP_P0_CELL6                                           (212)
#define O_CUIF_LTE_NCM_CC_RPT_RSTP_MAN_P1_RX0_CELL6                                       (213)
#define O_CUIF_LTE_NCM_CC_RPT_RSTP_MAN_P1_RX1_CELL6                                       (214)
#define O_CUIF_LTE_NCM_CC_RPT_RSTP_EXP_P1_CELL6                                           (215)
#define O_CUIF_LTE_NCM_CC_RPT_RSTP_MAN_P0_RX0_CELL7                                       (216)
#define O_CUIF_LTE_NCM_CC_RPT_RSTP_MAN_P0_RX1_CELL7                                       (217)
#define O_CUIF_LTE_NCM_CC_RPT_RSTP_EXP_P0_CELL7                                           (218)
#define O_CUIF_LTE_NCM_CC_RPT_RSTP_MAN_P1_RX0_CELL7                                       (219)
#define O_CUIF_LTE_NCM_CC_RPT_RSTP_MAN_P1_RX1_CELL7                                       (220)
#define O_CUIF_LTE_NCM_CC_RPT_RSTP_EXP_P1_CELL7                                           (221)
#define O_CUIF_LTE_NCM_CC_RPT_RSTP_MAN_P0_RX0_CELL8                                       (222)
#define O_CUIF_LTE_NCM_CC_RPT_RSTP_MAN_P0_RX1_CELL8                                       (223)
#define O_CUIF_LTE_NCM_CC_RPT_RSTP_EXP_P0_CELL8                                           (224)
#define O_CUIF_LTE_NCM_CC_RPT_RSTP_MAN_P1_RX0_CELL8                                       (225)
#define O_CUIF_LTE_NCM_CC_RPT_RSTP_MAN_P1_RX1_CELL8                                       (226)
#define O_CUIF_LTE_NCM_CC_RPT_RSTP_EXP_P1_CELL8                                           (227)
#define O_CUIF_LTE_NCM_CC_RPT_RSTP_MAN_P0_RX0_CELL9                                       (228)
#define O_CUIF_LTE_NCM_CC_RPT_RSTP_MAN_P0_RX1_CELL9                                       (229)
#define O_CUIF_LTE_NCM_CC_RPT_RSTP_EXP_P0_CELL9                                           (230)
#define O_CUIF_LTE_NCM_CC_RPT_RSTP_MAN_P1_RX0_CELL9                                       (231)
#define O_CUIF_LTE_NCM_CC_RPT_RSTP_MAN_P1_RX1_CELL9                                       (232)
#define O_CUIF_LTE_NCM_CC_RPT_RSTP_EXP_P1_CELL9                                           (233)
#define O_CUIF_LTE_NCM_CC_RPT_RSTP_MAN_P0_RX0_CELL10                                      (234)
#define O_CUIF_LTE_NCM_CC_RPT_RSTP_MAN_P0_RX1_CELL10                                      (235)
#define O_CUIF_LTE_NCM_CC_RPT_RSTP_EXP_P0_CELL10                                          (236)
#define O_CUIF_LTE_NCM_CC_RPT_RSTP_MAN_P1_RX0_CELL10                                      (237)
#define O_CUIF_LTE_NCM_CC_RPT_RSTP_MAN_P1_RX1_CELL10                                      (238)
#define O_CUIF_LTE_NCM_CC_RPT_RSTP_EXP_P1_CELL10                                          (239)
#define O_CUIF_LTE_NCM_CC_RPT_RSTP_MAN_P0_RX0_CELL11                                      (240)
#define O_CUIF_LTE_NCM_CC_RPT_RSTP_MAN_P0_RX1_CELL11                                      (241)
#define O_CUIF_LTE_NCM_CC_RPT_RSTP_EXP_P0_CELL11                                          (242)
#define O_CUIF_LTE_NCM_CC_RPT_RSTP_MAN_P1_RX0_CELL11                                      (243)
#define O_CUIF_LTE_NCM_CC_RPT_RSTP_MAN_P1_RX1_CELL11                                      (244)
#define O_CUIF_LTE_NCM_CC_RPT_RSTP_EXP_P1_CELL11                                          (245)

// ---------- INFO bit-field ----------
#define P_CUIF_LTE_NCM_CC_RPT_INFO_NUM_RS_USED                                            (0)
#define L_CUIF_LTE_NCM_CC_RPT_INFO_NUM_RS_USED                                            (5)
#define M_CUIF_LTE_NCM_CC_RPT_INFO_NUM_RS_USED                                            (0x0000001F)

// ---------- GDE_TIME_OFFSET bit-field ----------
#define P_CUIF_LTE_NCM_CC_RPT_GDE_TIME_OFFSET_CELL1                                       (16)
#define L_CUIF_LTE_NCM_CC_RPT_GDE_TIME_OFFSET_CELL1                                       (16)
#define M_CUIF_LTE_NCM_CC_RPT_GDE_TIME_OFFSET_CELL1                                       (0xFFFF0000)
#define P_CUIF_LTE_NCM_CC_RPT_GDE_TIME_OFFSET_CELL0                                       (0)
#define L_CUIF_LTE_NCM_CC_RPT_GDE_TIME_OFFSET_CELL0                                       (16)
#define M_CUIF_LTE_NCM_CC_RPT_GDE_TIME_OFFSET_CELL0                                       (0x0000FFFF)

// ---------- IIR bit-field ----------
#define P_CUIF_LTE_NCM_CC_RPT_IIR_EXP                                                     (24)
#define L_CUIF_LTE_NCM_CC_RPT_IIR_EXP                                                     (8)
#define M_CUIF_LTE_NCM_CC_RPT_IIR_EXP                                                     (0xFF000000)
#define P_CUIF_LTE_NCM_CC_RPT_IIR_MAN_IMAG                                                (12)
#define L_CUIF_LTE_NCM_CC_RPT_IIR_MAN_IMAG                                                (12)
#define M_CUIF_LTE_NCM_CC_RPT_IIR_MAN_IMAG                                                (0x00FFF000)
#define P_CUIF_LTE_NCM_CC_RPT_IIR_MAN_REAL                                                (0)
#define L_CUIF_LTE_NCM_CC_RPT_IIR_MAN_REAL                                                (12)
#define M_CUIF_LTE_NCM_CC_RPT_IIR_MAN_REAL                                                (0x00000FFF)

// ---------- GDE_MAN_P0_CELL0 bit-field ----------
#define P_CUIF_LTE_NCM_CC_RPT_GDE_MAN_P0_CELL0_MAN                                        (0)
#define L_CUIF_LTE_NCM_CC_RPT_GDE_MAN_P0_CELL0_MAN                                        (32)
#define M_CUIF_LTE_NCM_CC_RPT_GDE_MAN_P0_CELL0_MAN                                        (0xFFFFFFFF)

// ---------- GDE_MAN_P1_CELL0 bit-field ----------
#define P_CUIF_LTE_NCM_CC_RPT_GDE_MAN_P1_CELL0_MAN                                        (0)
#define L_CUIF_LTE_NCM_CC_RPT_GDE_MAN_P1_CELL0_MAN                                        (32)
#define M_CUIF_LTE_NCM_CC_RPT_GDE_MAN_P1_CELL0_MAN                                        (0xFFFFFFFF)

// ---------- GDE_EXP_CELL0 bit-field ----------
#define P_CUIF_LTE_NCM_CC_RPT_GDE_EXP_CELL0_P1                                            (16)
#define L_CUIF_LTE_NCM_CC_RPT_GDE_EXP_CELL0_P1                                            (16)
#define M_CUIF_LTE_NCM_CC_RPT_GDE_EXP_CELL0_P1                                            (0xFFFF0000)
#define P_CUIF_LTE_NCM_CC_RPT_GDE_EXP_CELL0_P0                                            (0)
#define L_CUIF_LTE_NCM_CC_RPT_GDE_EXP_CELL0_P0                                            (16)
#define M_CUIF_LTE_NCM_CC_RPT_GDE_EXP_CELL0_P0                                            (0x0000FFFF)

// ---------- GDE_MAN_P0_CELL1 bit-field ----------
#define P_CUIF_LTE_NCM_CC_RPT_GDE_MAN_P0_CELL1_MAN                                        (0)
#define L_CUIF_LTE_NCM_CC_RPT_GDE_MAN_P0_CELL1_MAN                                        (32)
#define M_CUIF_LTE_NCM_CC_RPT_GDE_MAN_P0_CELL1_MAN                                        (0xFFFFFFFF)

// ---------- GDE_MAN_P1_CELL1 bit-field ----------
#define P_CUIF_LTE_NCM_CC_RPT_GDE_MAN_P1_CELL1_MAN                                        (0)
#define L_CUIF_LTE_NCM_CC_RPT_GDE_MAN_P1_CELL1_MAN                                        (32)
#define M_CUIF_LTE_NCM_CC_RPT_GDE_MAN_P1_CELL1_MAN                                        (0xFFFFFFFF)

// ---------- GDE_EXP_CELL1 bit-field ----------
#define P_CUIF_LTE_NCM_CC_RPT_GDE_EXP_CELL1_P1                                            (16)
#define L_CUIF_LTE_NCM_CC_RPT_GDE_EXP_CELL1_P1                                            (16)
#define M_CUIF_LTE_NCM_CC_RPT_GDE_EXP_CELL1_P1                                            (0xFFFF0000)
#define P_CUIF_LTE_NCM_CC_RPT_GDE_EXP_CELL1_P0                                            (0)
#define L_CUIF_LTE_NCM_CC_RPT_GDE_EXP_CELL1_P0                                            (16)
#define M_CUIF_LTE_NCM_CC_RPT_GDE_EXP_CELL1_P0                                            (0x0000FFFF)

// ---------- GDE_MAN_P0_CELL2 bit-field ----------
#define P_CUIF_LTE_NCM_CC_RPT_GDE_MAN_P0_CELL2_MAN                                        (0)
#define L_CUIF_LTE_NCM_CC_RPT_GDE_MAN_P0_CELL2_MAN                                        (32)
#define M_CUIF_LTE_NCM_CC_RPT_GDE_MAN_P0_CELL2_MAN                                        (0xFFFFFFFF)

// ---------- GDE_MAN_P1_CELL2 bit-field ----------
#define P_CUIF_LTE_NCM_CC_RPT_GDE_MAN_P1_CELL2_MAN                                        (0)
#define L_CUIF_LTE_NCM_CC_RPT_GDE_MAN_P1_CELL2_MAN                                        (32)
#define M_CUIF_LTE_NCM_CC_RPT_GDE_MAN_P1_CELL2_MAN                                        (0xFFFFFFFF)

// ---------- GDE_EXP_CELL2 bit-field ----------
#define P_CUIF_LTE_NCM_CC_RPT_GDE_EXP_CELL2_P1                                            (16)
#define L_CUIF_LTE_NCM_CC_RPT_GDE_EXP_CELL2_P1                                            (16)
#define M_CUIF_LTE_NCM_CC_RPT_GDE_EXP_CELL2_P1                                            (0xFFFF0000)
#define P_CUIF_LTE_NCM_CC_RPT_GDE_EXP_CELL2_P0                                            (0)
#define L_CUIF_LTE_NCM_CC_RPT_GDE_EXP_CELL2_P0                                            (16)
#define M_CUIF_LTE_NCM_CC_RPT_GDE_EXP_CELL2_P0                                            (0x0000FFFF)

// ---------- GDE_MAN_P0_CELL3 bit-field ----------
#define P_CUIF_LTE_NCM_CC_RPT_GDE_MAN_P0_CELL3_MAN                                        (0)
#define L_CUIF_LTE_NCM_CC_RPT_GDE_MAN_P0_CELL3_MAN                                        (32)
#define M_CUIF_LTE_NCM_CC_RPT_GDE_MAN_P0_CELL3_MAN                                        (0xFFFFFFFF)

// ---------- GDE_MAN_P1_CELL3 bit-field ----------
#define P_CUIF_LTE_NCM_CC_RPT_GDE_MAN_P1_CELL3_MAN                                        (0)
#define L_CUIF_LTE_NCM_CC_RPT_GDE_MAN_P1_CELL3_MAN                                        (32)
#define M_CUIF_LTE_NCM_CC_RPT_GDE_MAN_P1_CELL3_MAN                                        (0xFFFFFFFF)

// ---------- GDE_EXP_CELL3 bit-field ----------
#define P_CUIF_LTE_NCM_CC_RPT_GDE_EXP_CELL3_P1                                            (16)
#define L_CUIF_LTE_NCM_CC_RPT_GDE_EXP_CELL3_P1                                            (16)
#define M_CUIF_LTE_NCM_CC_RPT_GDE_EXP_CELL3_P1                                            (0xFFFF0000)
#define P_CUIF_LTE_NCM_CC_RPT_GDE_EXP_CELL3_P0                                            (0)
#define L_CUIF_LTE_NCM_CC_RPT_GDE_EXP_CELL3_P0                                            (16)
#define M_CUIF_LTE_NCM_CC_RPT_GDE_EXP_CELL3_P0                                            (0x0000FFFF)

// ---------- GDE_MAN_P0_CELL4 bit-field ----------
#define P_CUIF_LTE_NCM_CC_RPT_GDE_MAN_P0_CELL4_MAN                                        (0)
#define L_CUIF_LTE_NCM_CC_RPT_GDE_MAN_P0_CELL4_MAN                                        (32)
#define M_CUIF_LTE_NCM_CC_RPT_GDE_MAN_P0_CELL4_MAN                                        (0xFFFFFFFF)

// ---------- GDE_MAN_P1_CELL4 bit-field ----------
#define P_CUIF_LTE_NCM_CC_RPT_GDE_MAN_P1_CELL4_MAN                                        (0)
#define L_CUIF_LTE_NCM_CC_RPT_GDE_MAN_P1_CELL4_MAN                                        (32)
#define M_CUIF_LTE_NCM_CC_RPT_GDE_MAN_P1_CELL4_MAN                                        (0xFFFFFFFF)

// ---------- GDE_EXP_CELL4 bit-field ----------
#define P_CUIF_LTE_NCM_CC_RPT_GDE_EXP_CELL4_P1                                            (16)
#define L_CUIF_LTE_NCM_CC_RPT_GDE_EXP_CELL4_P1                                            (16)
#define M_CUIF_LTE_NCM_CC_RPT_GDE_EXP_CELL4_P1                                            (0xFFFF0000)
#define P_CUIF_LTE_NCM_CC_RPT_GDE_EXP_CELL4_P0                                            (0)
#define L_CUIF_LTE_NCM_CC_RPT_GDE_EXP_CELL4_P0                                            (16)
#define M_CUIF_LTE_NCM_CC_RPT_GDE_EXP_CELL4_P0                                            (0x0000FFFF)

// ---------- GDE_MAN_P0_CELL5 bit-field ----------
#define P_CUIF_LTE_NCM_CC_RPT_GDE_MAN_P0_CELL5_MAN                                        (0)
#define L_CUIF_LTE_NCM_CC_RPT_GDE_MAN_P0_CELL5_MAN                                        (32)
#define M_CUIF_LTE_NCM_CC_RPT_GDE_MAN_P0_CELL5_MAN                                        (0xFFFFFFFF)

// ---------- GDE_MAN_P1_CELL5 bit-field ----------
#define P_CUIF_LTE_NCM_CC_RPT_GDE_MAN_P1_CELL5_MAN                                        (0)
#define L_CUIF_LTE_NCM_CC_RPT_GDE_MAN_P1_CELL5_MAN                                        (32)
#define M_CUIF_LTE_NCM_CC_RPT_GDE_MAN_P1_CELL5_MAN                                        (0xFFFFFFFF)

// ---------- GDE_EXP_CELL5 bit-field ----------
#define P_CUIF_LTE_NCM_CC_RPT_GDE_EXP_CELL5_P1                                            (16)
#define L_CUIF_LTE_NCM_CC_RPT_GDE_EXP_CELL5_P1                                            (16)
#define M_CUIF_LTE_NCM_CC_RPT_GDE_EXP_CELL5_P1                                            (0xFFFF0000)
#define P_CUIF_LTE_NCM_CC_RPT_GDE_EXP_CELL5_P0                                            (0)
#define L_CUIF_LTE_NCM_CC_RPT_GDE_EXP_CELL5_P0                                            (16)
#define M_CUIF_LTE_NCM_CC_RPT_GDE_EXP_CELL5_P0                                            (0x0000FFFF)

// ---------- GDE_MAN_P0_CELL6 bit-field ----------
#define P_CUIF_LTE_NCM_CC_RPT_GDE_MAN_P0_CELL6_MAN                                        (0)
#define L_CUIF_LTE_NCM_CC_RPT_GDE_MAN_P0_CELL6_MAN                                        (32)
#define M_CUIF_LTE_NCM_CC_RPT_GDE_MAN_P0_CELL6_MAN                                        (0xFFFFFFFF)

// ---------- GDE_MAN_P1_CELL6 bit-field ----------
#define P_CUIF_LTE_NCM_CC_RPT_GDE_MAN_P1_CELL6_MAN                                        (0)
#define L_CUIF_LTE_NCM_CC_RPT_GDE_MAN_P1_CELL6_MAN                                        (32)
#define M_CUIF_LTE_NCM_CC_RPT_GDE_MAN_P1_CELL6_MAN                                        (0xFFFFFFFF)

// ---------- GDE_EXP_CELL6 bit-field ----------
#define P_CUIF_LTE_NCM_CC_RPT_GDE_EXP_CELL6_P1                                            (16)
#define L_CUIF_LTE_NCM_CC_RPT_GDE_EXP_CELL6_P1                                            (16)
#define M_CUIF_LTE_NCM_CC_RPT_GDE_EXP_CELL6_P1                                            (0xFFFF0000)
#define P_CUIF_LTE_NCM_CC_RPT_GDE_EXP_CELL6_P0                                            (0)
#define L_CUIF_LTE_NCM_CC_RPT_GDE_EXP_CELL6_P0                                            (16)
#define M_CUIF_LTE_NCM_CC_RPT_GDE_EXP_CELL6_P0                                            (0x0000FFFF)

// ---------- GDE_MAN_P0_CELL7 bit-field ----------
#define P_CUIF_LTE_NCM_CC_RPT_GDE_MAN_P0_CELL7_MAN                                        (0)
#define L_CUIF_LTE_NCM_CC_RPT_GDE_MAN_P0_CELL7_MAN                                        (32)
#define M_CUIF_LTE_NCM_CC_RPT_GDE_MAN_P0_CELL7_MAN                                        (0xFFFFFFFF)

// ---------- GDE_MAN_P1_CELL7 bit-field ----------
#define P_CUIF_LTE_NCM_CC_RPT_GDE_MAN_P1_CELL7_MAN                                        (0)
#define L_CUIF_LTE_NCM_CC_RPT_GDE_MAN_P1_CELL7_MAN                                        (32)
#define M_CUIF_LTE_NCM_CC_RPT_GDE_MAN_P1_CELL7_MAN                                        (0xFFFFFFFF)

// ---------- GDE_EXP_CELL7 bit-field ----------
#define P_CUIF_LTE_NCM_CC_RPT_GDE_EXP_CELL7_P1                                            (16)
#define L_CUIF_LTE_NCM_CC_RPT_GDE_EXP_CELL7_P1                                            (16)
#define M_CUIF_LTE_NCM_CC_RPT_GDE_EXP_CELL7_P1                                            (0xFFFF0000)
#define P_CUIF_LTE_NCM_CC_RPT_GDE_EXP_CELL7_P0                                            (0)
#define L_CUIF_LTE_NCM_CC_RPT_GDE_EXP_CELL7_P0                                            (16)
#define M_CUIF_LTE_NCM_CC_RPT_GDE_EXP_CELL7_P0                                            (0x0000FFFF)

// ---------- GDE_MAN_P0_CELL8 bit-field ----------
#define P_CUIF_LTE_NCM_CC_RPT_GDE_MAN_P0_CELL8_MAN                                        (0)
#define L_CUIF_LTE_NCM_CC_RPT_GDE_MAN_P0_CELL8_MAN                                        (32)
#define M_CUIF_LTE_NCM_CC_RPT_GDE_MAN_P0_CELL8_MAN                                        (0xFFFFFFFF)

// ---------- GDE_MAN_P1_CELL8 bit-field ----------
#define P_CUIF_LTE_NCM_CC_RPT_GDE_MAN_P1_CELL8_MAN                                        (0)
#define L_CUIF_LTE_NCM_CC_RPT_GDE_MAN_P1_CELL8_MAN                                        (32)
#define M_CUIF_LTE_NCM_CC_RPT_GDE_MAN_P1_CELL8_MAN                                        (0xFFFFFFFF)

// ---------- GDE_EXP_CELL8 bit-field ----------
#define P_CUIF_LTE_NCM_CC_RPT_GDE_EXP_CELL8_P1                                            (16)
#define L_CUIF_LTE_NCM_CC_RPT_GDE_EXP_CELL8_P1                                            (16)
#define M_CUIF_LTE_NCM_CC_RPT_GDE_EXP_CELL8_P1                                            (0xFFFF0000)
#define P_CUIF_LTE_NCM_CC_RPT_GDE_EXP_CELL8_P0                                            (0)
#define L_CUIF_LTE_NCM_CC_RPT_GDE_EXP_CELL8_P0                                            (16)
#define M_CUIF_LTE_NCM_CC_RPT_GDE_EXP_CELL8_P0                                            (0x0000FFFF)

// ---------- GDE_MAN_P0_CELL9 bit-field ----------
#define P_CUIF_LTE_NCM_CC_RPT_GDE_MAN_P0_CELL9_MAN                                        (0)
#define L_CUIF_LTE_NCM_CC_RPT_GDE_MAN_P0_CELL9_MAN                                        (32)
#define M_CUIF_LTE_NCM_CC_RPT_GDE_MAN_P0_CELL9_MAN                                        (0xFFFFFFFF)

// ---------- GDE_MAN_P1_CELL9 bit-field ----------
#define P_CUIF_LTE_NCM_CC_RPT_GDE_MAN_P1_CELL9_MAN                                        (0)
#define L_CUIF_LTE_NCM_CC_RPT_GDE_MAN_P1_CELL9_MAN                                        (32)
#define M_CUIF_LTE_NCM_CC_RPT_GDE_MAN_P1_CELL9_MAN                                        (0xFFFFFFFF)

// ---------- GDE_EXP_CELL9 bit-field ----------
#define P_CUIF_LTE_NCM_CC_RPT_GDE_EXP_CELL9_P1                                            (16)
#define L_CUIF_LTE_NCM_CC_RPT_GDE_EXP_CELL9_P1                                            (16)
#define M_CUIF_LTE_NCM_CC_RPT_GDE_EXP_CELL9_P1                                            (0xFFFF0000)
#define P_CUIF_LTE_NCM_CC_RPT_GDE_EXP_CELL9_P0                                            (0)
#define L_CUIF_LTE_NCM_CC_RPT_GDE_EXP_CELL9_P0                                            (16)
#define M_CUIF_LTE_NCM_CC_RPT_GDE_EXP_CELL9_P0                                            (0x0000FFFF)

// ---------- GDE_MAN_P0_CELL10 bit-field ----------
#define P_CUIF_LTE_NCM_CC_RPT_GDE_MAN_P0_CELL10_MAN                                       (0)
#define L_CUIF_LTE_NCM_CC_RPT_GDE_MAN_P0_CELL10_MAN                                       (32)
#define M_CUIF_LTE_NCM_CC_RPT_GDE_MAN_P0_CELL10_MAN                                       (0xFFFFFFFF)

// ---------- GDE_MAN_P1_CELL10 bit-field ----------
#define P_CUIF_LTE_NCM_CC_RPT_GDE_MAN_P1_CELL10_MAN                                       (0)
#define L_CUIF_LTE_NCM_CC_RPT_GDE_MAN_P1_CELL10_MAN                                       (32)
#define M_CUIF_LTE_NCM_CC_RPT_GDE_MAN_P1_CELL10_MAN                                       (0xFFFFFFFF)

// ---------- GDE_EXP_CELL10 bit-field ----------
#define P_CUIF_LTE_NCM_CC_RPT_GDE_EXP_CELL10_P1                                           (16)
#define L_CUIF_LTE_NCM_CC_RPT_GDE_EXP_CELL10_P1                                           (16)
#define M_CUIF_LTE_NCM_CC_RPT_GDE_EXP_CELL10_P1                                           (0xFFFF0000)
#define P_CUIF_LTE_NCM_CC_RPT_GDE_EXP_CELL10_P0                                           (0)
#define L_CUIF_LTE_NCM_CC_RPT_GDE_EXP_CELL10_P0                                           (16)
#define M_CUIF_LTE_NCM_CC_RPT_GDE_EXP_CELL10_P0                                           (0x0000FFFF)

// ---------- GDE_MAN_P0_CELL11 bit-field ----------
#define P_CUIF_LTE_NCM_CC_RPT_GDE_MAN_P0_CELL11_MAN                                       (0)
#define L_CUIF_LTE_NCM_CC_RPT_GDE_MAN_P0_CELL11_MAN                                       (32)
#define M_CUIF_LTE_NCM_CC_RPT_GDE_MAN_P0_CELL11_MAN                                       (0xFFFFFFFF)

// ---------- GDE_MAN_P1_CELL11 bit-field ----------
#define P_CUIF_LTE_NCM_CC_RPT_GDE_MAN_P1_CELL11_MAN                                       (0)
#define L_CUIF_LTE_NCM_CC_RPT_GDE_MAN_P1_CELL11_MAN                                       (32)
#define M_CUIF_LTE_NCM_CC_RPT_GDE_MAN_P1_CELL11_MAN                                       (0xFFFFFFFF)

// ---------- GDE_EXP_CELL11 bit-field ----------
#define P_CUIF_LTE_NCM_CC_RPT_GDE_EXP_CELL11_P1                                           (16)
#define L_CUIF_LTE_NCM_CC_RPT_GDE_EXP_CELL11_P1                                           (16)
#define M_CUIF_LTE_NCM_CC_RPT_GDE_EXP_CELL11_P1                                           (0xFFFF0000)
#define P_CUIF_LTE_NCM_CC_RPT_GDE_EXP_CELL11_P0                                           (0)
#define L_CUIF_LTE_NCM_CC_RPT_GDE_EXP_CELL11_P0                                           (16)
#define M_CUIF_LTE_NCM_CC_RPT_GDE_EXP_CELL11_P0                                           (0x0000FFFF)

// ---------- RSSI_MAN_RX0_CELL0 bit-field ----------
#define P_CUIF_LTE_NCM_CC_RPT_RSSI_MAN_RX0_CELL0_MAN                                      (0)
#define L_CUIF_LTE_NCM_CC_RPT_RSSI_MAN_RX0_CELL0_MAN                                      (32)
#define M_CUIF_LTE_NCM_CC_RPT_RSSI_MAN_RX0_CELL0_MAN                                      (0xFFFFFFFF)

// ---------- RSSI_MAN_RX1_CELL0 bit-field ----------
#define P_CUIF_LTE_NCM_CC_RPT_RSSI_MAN_RX1_CELL0_MAN                                      (0)
#define L_CUIF_LTE_NCM_CC_RPT_RSSI_MAN_RX1_CELL0_MAN                                      (32)
#define M_CUIF_LTE_NCM_CC_RPT_RSSI_MAN_RX1_CELL0_MAN                                      (0xFFFFFFFF)

// ---------- RSSI_EXP_CELL0 bit-field ----------
#define P_CUIF_LTE_NCM_CC_RPT_RSSI_EXP_CELL0_RX1                                          (16)
#define L_CUIF_LTE_NCM_CC_RPT_RSSI_EXP_CELL0_RX1                                          (16)
#define M_CUIF_LTE_NCM_CC_RPT_RSSI_EXP_CELL0_RX1                                          (0xFFFF0000)
#define P_CUIF_LTE_NCM_CC_RPT_RSSI_EXP_CELL0_RX0                                          (0)
#define L_CUIF_LTE_NCM_CC_RPT_RSSI_EXP_CELL0_RX0                                          (16)
#define M_CUIF_LTE_NCM_CC_RPT_RSSI_EXP_CELL0_RX0                                          (0x0000FFFF)

// ---------- RSSI_MAN_RX0_CELL1 bit-field ----------
#define P_CUIF_LTE_NCM_CC_RPT_RSSI_MAN_RX0_CELL1_MAN                                      (0)
#define L_CUIF_LTE_NCM_CC_RPT_RSSI_MAN_RX0_CELL1_MAN                                      (32)
#define M_CUIF_LTE_NCM_CC_RPT_RSSI_MAN_RX0_CELL1_MAN                                      (0xFFFFFFFF)

// ---------- RSSI_MAN_RX1_CELL1 bit-field ----------
#define P_CUIF_LTE_NCM_CC_RPT_RSSI_MAN_RX1_CELL1_MAN                                      (0)
#define L_CUIF_LTE_NCM_CC_RPT_RSSI_MAN_RX1_CELL1_MAN                                      (32)
#define M_CUIF_LTE_NCM_CC_RPT_RSSI_MAN_RX1_CELL1_MAN                                      (0xFFFFFFFF)

// ---------- RSSI_EXP_CELL1 bit-field ----------
#define P_CUIF_LTE_NCM_CC_RPT_RSSI_EXP_CELL1_RX1                                          (16)
#define L_CUIF_LTE_NCM_CC_RPT_RSSI_EXP_CELL1_RX1                                          (16)
#define M_CUIF_LTE_NCM_CC_RPT_RSSI_EXP_CELL1_RX1                                          (0xFFFF0000)
#define P_CUIF_LTE_NCM_CC_RPT_RSSI_EXP_CELL1_RX0                                          (0)
#define L_CUIF_LTE_NCM_CC_RPT_RSSI_EXP_CELL1_RX0                                          (16)
#define M_CUIF_LTE_NCM_CC_RPT_RSSI_EXP_CELL1_RX0                                          (0x0000FFFF)

// ---------- RSSI_MAN_RX0_CELL2 bit-field ----------
#define P_CUIF_LTE_NCM_CC_RPT_RSSI_MAN_RX0_CELL2_MAN                                      (0)
#define L_CUIF_LTE_NCM_CC_RPT_RSSI_MAN_RX0_CELL2_MAN                                      (32)
#define M_CUIF_LTE_NCM_CC_RPT_RSSI_MAN_RX0_CELL2_MAN                                      (0xFFFFFFFF)

// ---------- RSSI_MAN_RX1_CELL2 bit-field ----------
#define P_CUIF_LTE_NCM_CC_RPT_RSSI_MAN_RX1_CELL2_MAN                                      (0)
#define L_CUIF_LTE_NCM_CC_RPT_RSSI_MAN_RX1_CELL2_MAN                                      (32)
#define M_CUIF_LTE_NCM_CC_RPT_RSSI_MAN_RX1_CELL2_MAN                                      (0xFFFFFFFF)

// ---------- RSSI_EXP_CELL2 bit-field ----------
#define P_CUIF_LTE_NCM_CC_RPT_RSSI_EXP_CELL2_RX1                                          (16)
#define L_CUIF_LTE_NCM_CC_RPT_RSSI_EXP_CELL2_RX1                                          (16)
#define M_CUIF_LTE_NCM_CC_RPT_RSSI_EXP_CELL2_RX1                                          (0xFFFF0000)
#define P_CUIF_LTE_NCM_CC_RPT_RSSI_EXP_CELL2_RX0                                          (0)
#define L_CUIF_LTE_NCM_CC_RPT_RSSI_EXP_CELL2_RX0                                          (16)
#define M_CUIF_LTE_NCM_CC_RPT_RSSI_EXP_CELL2_RX0                                          (0x0000FFFF)

// ---------- RSSI_MAN_RX0_CELL3 bit-field ----------
#define P_CUIF_LTE_NCM_CC_RPT_RSSI_MAN_RX0_CELL3_MAN                                      (0)
#define L_CUIF_LTE_NCM_CC_RPT_RSSI_MAN_RX0_CELL3_MAN                                      (32)
#define M_CUIF_LTE_NCM_CC_RPT_RSSI_MAN_RX0_CELL3_MAN                                      (0xFFFFFFFF)

// ---------- RSSI_MAN_RX1_CELL3 bit-field ----------
#define P_CUIF_LTE_NCM_CC_RPT_RSSI_MAN_RX1_CELL3_MAN                                      (0)
#define L_CUIF_LTE_NCM_CC_RPT_RSSI_MAN_RX1_CELL3_MAN                                      (32)
#define M_CUIF_LTE_NCM_CC_RPT_RSSI_MAN_RX1_CELL3_MAN                                      (0xFFFFFFFF)

// ---------- RSSI_EXP_CELL3 bit-field ----------
#define P_CUIF_LTE_NCM_CC_RPT_RSSI_EXP_CELL3_RX1                                          (16)
#define L_CUIF_LTE_NCM_CC_RPT_RSSI_EXP_CELL3_RX1                                          (16)
#define M_CUIF_LTE_NCM_CC_RPT_RSSI_EXP_CELL3_RX1                                          (0xFFFF0000)
#define P_CUIF_LTE_NCM_CC_RPT_RSSI_EXP_CELL3_RX0                                          (0)
#define L_CUIF_LTE_NCM_CC_RPT_RSSI_EXP_CELL3_RX0                                          (16)
#define M_CUIF_LTE_NCM_CC_RPT_RSSI_EXP_CELL3_RX0                                          (0x0000FFFF)

// ---------- RSSI_MAN_RX0_CELL4 bit-field ----------
#define P_CUIF_LTE_NCM_CC_RPT_RSSI_MAN_RX0_CELL4_MAN                                      (0)
#define L_CUIF_LTE_NCM_CC_RPT_RSSI_MAN_RX0_CELL4_MAN                                      (32)
#define M_CUIF_LTE_NCM_CC_RPT_RSSI_MAN_RX0_CELL4_MAN                                      (0xFFFFFFFF)

// ---------- RSSI_MAN_RX1_CELL4 bit-field ----------
#define P_CUIF_LTE_NCM_CC_RPT_RSSI_MAN_RX1_CELL4_MAN                                      (0)
#define L_CUIF_LTE_NCM_CC_RPT_RSSI_MAN_RX1_CELL4_MAN                                      (32)
#define M_CUIF_LTE_NCM_CC_RPT_RSSI_MAN_RX1_CELL4_MAN                                      (0xFFFFFFFF)

// ---------- RSSI_EXP_CELL4 bit-field ----------
#define P_CUIF_LTE_NCM_CC_RPT_RSSI_EXP_CELL4_RX1                                          (16)
#define L_CUIF_LTE_NCM_CC_RPT_RSSI_EXP_CELL4_RX1                                          (16)
#define M_CUIF_LTE_NCM_CC_RPT_RSSI_EXP_CELL4_RX1                                          (0xFFFF0000)
#define P_CUIF_LTE_NCM_CC_RPT_RSSI_EXP_CELL4_RX0                                          (0)
#define L_CUIF_LTE_NCM_CC_RPT_RSSI_EXP_CELL4_RX0                                          (16)
#define M_CUIF_LTE_NCM_CC_RPT_RSSI_EXP_CELL4_RX0                                          (0x0000FFFF)

// ---------- RSSI_MAN_RX0_CELL5 bit-field ----------
#define P_CUIF_LTE_NCM_CC_RPT_RSSI_MAN_RX0_CELL5_MAN                                      (0)
#define L_CUIF_LTE_NCM_CC_RPT_RSSI_MAN_RX0_CELL5_MAN                                      (32)
#define M_CUIF_LTE_NCM_CC_RPT_RSSI_MAN_RX0_CELL5_MAN                                      (0xFFFFFFFF)

// ---------- RSSI_MAN_RX1_CELL5 bit-field ----------
#define P_CUIF_LTE_NCM_CC_RPT_RSSI_MAN_RX1_CELL5_MAN                                      (0)
#define L_CUIF_LTE_NCM_CC_RPT_RSSI_MAN_RX1_CELL5_MAN                                      (32)
#define M_CUIF_LTE_NCM_CC_RPT_RSSI_MAN_RX1_CELL5_MAN                                      (0xFFFFFFFF)

// ---------- RSSI_EXP_CELL5 bit-field ----------
#define P_CUIF_LTE_NCM_CC_RPT_RSSI_EXP_CELL5_RX1                                          (16)
#define L_CUIF_LTE_NCM_CC_RPT_RSSI_EXP_CELL5_RX1                                          (16)
#define M_CUIF_LTE_NCM_CC_RPT_RSSI_EXP_CELL5_RX1                                          (0xFFFF0000)
#define P_CUIF_LTE_NCM_CC_RPT_RSSI_EXP_CELL5_RX0                                          (0)
#define L_CUIF_LTE_NCM_CC_RPT_RSSI_EXP_CELL5_RX0                                          (16)
#define M_CUIF_LTE_NCM_CC_RPT_RSSI_EXP_CELL5_RX0                                          (0x0000FFFF)

// ---------- RSSI_MAN_RX0_CELL6 bit-field ----------
#define P_CUIF_LTE_NCM_CC_RPT_RSSI_MAN_RX0_CELL6_MAN                                      (0)
#define L_CUIF_LTE_NCM_CC_RPT_RSSI_MAN_RX0_CELL6_MAN                                      (32)
#define M_CUIF_LTE_NCM_CC_RPT_RSSI_MAN_RX0_CELL6_MAN                                      (0xFFFFFFFF)

// ---------- RSSI_MAN_RX1_CELL6 bit-field ----------
#define P_CUIF_LTE_NCM_CC_RPT_RSSI_MAN_RX1_CELL6_MAN                                      (0)
#define L_CUIF_LTE_NCM_CC_RPT_RSSI_MAN_RX1_CELL6_MAN                                      (32)
#define M_CUIF_LTE_NCM_CC_RPT_RSSI_MAN_RX1_CELL6_MAN                                      (0xFFFFFFFF)

// ---------- RSSI_EXP_CELL6 bit-field ----------
#define P_CUIF_LTE_NCM_CC_RPT_RSSI_EXP_CELL6_RX1                                          (16)
#define L_CUIF_LTE_NCM_CC_RPT_RSSI_EXP_CELL6_RX1                                          (16)
#define M_CUIF_LTE_NCM_CC_RPT_RSSI_EXP_CELL6_RX1                                          (0xFFFF0000)
#define P_CUIF_LTE_NCM_CC_RPT_RSSI_EXP_CELL6_RX0                                          (0)
#define L_CUIF_LTE_NCM_CC_RPT_RSSI_EXP_CELL6_RX0                                          (16)
#define M_CUIF_LTE_NCM_CC_RPT_RSSI_EXP_CELL6_RX0                                          (0x0000FFFF)

// ---------- RSSI_MAN_RX0_CELL7 bit-field ----------
#define P_CUIF_LTE_NCM_CC_RPT_RSSI_MAN_RX0_CELL7_MAN                                      (0)
#define L_CUIF_LTE_NCM_CC_RPT_RSSI_MAN_RX0_CELL7_MAN                                      (32)
#define M_CUIF_LTE_NCM_CC_RPT_RSSI_MAN_RX0_CELL7_MAN                                      (0xFFFFFFFF)

// ---------- RSSI_MAN_RX1_CELL7 bit-field ----------
#define P_CUIF_LTE_NCM_CC_RPT_RSSI_MAN_RX1_CELL7_MAN                                      (0)
#define L_CUIF_LTE_NCM_CC_RPT_RSSI_MAN_RX1_CELL7_MAN                                      (32)
#define M_CUIF_LTE_NCM_CC_RPT_RSSI_MAN_RX1_CELL7_MAN                                      (0xFFFFFFFF)

// ---------- RSSI_EXP_CELL7 bit-field ----------
#define P_CUIF_LTE_NCM_CC_RPT_RSSI_EXP_CELL7_RX1                                          (16)
#define L_CUIF_LTE_NCM_CC_RPT_RSSI_EXP_CELL7_RX1                                          (16)
#define M_CUIF_LTE_NCM_CC_RPT_RSSI_EXP_CELL7_RX1                                          (0xFFFF0000)
#define P_CUIF_LTE_NCM_CC_RPT_RSSI_EXP_CELL7_RX0                                          (0)
#define L_CUIF_LTE_NCM_CC_RPT_RSSI_EXP_CELL7_RX0                                          (16)
#define M_CUIF_LTE_NCM_CC_RPT_RSSI_EXP_CELL7_RX0                                          (0x0000FFFF)

// ---------- RSSI_MAN_RX0_CELL8 bit-field ----------
#define P_CUIF_LTE_NCM_CC_RPT_RSSI_MAN_RX0_CELL8_MAN                                      (0)
#define L_CUIF_LTE_NCM_CC_RPT_RSSI_MAN_RX0_CELL8_MAN                                      (32)
#define M_CUIF_LTE_NCM_CC_RPT_RSSI_MAN_RX0_CELL8_MAN                                      (0xFFFFFFFF)

// ---------- RSSI_MAN_RX1_CELL8 bit-field ----------
#define P_CUIF_LTE_NCM_CC_RPT_RSSI_MAN_RX1_CELL8_MAN                                      (0)
#define L_CUIF_LTE_NCM_CC_RPT_RSSI_MAN_RX1_CELL8_MAN                                      (32)
#define M_CUIF_LTE_NCM_CC_RPT_RSSI_MAN_RX1_CELL8_MAN                                      (0xFFFFFFFF)

// ---------- RSSI_EXP_CELL8 bit-field ----------
#define P_CUIF_LTE_NCM_CC_RPT_RSSI_EXP_CELL8_RX1                                          (16)
#define L_CUIF_LTE_NCM_CC_RPT_RSSI_EXP_CELL8_RX1                                          (16)
#define M_CUIF_LTE_NCM_CC_RPT_RSSI_EXP_CELL8_RX1                                          (0xFFFF0000)
#define P_CUIF_LTE_NCM_CC_RPT_RSSI_EXP_CELL8_RX0                                          (0)
#define L_CUIF_LTE_NCM_CC_RPT_RSSI_EXP_CELL8_RX0                                          (16)
#define M_CUIF_LTE_NCM_CC_RPT_RSSI_EXP_CELL8_RX0                                          (0x0000FFFF)

// ---------- RSSI_MAN_RX0_CELL9 bit-field ----------
#define P_CUIF_LTE_NCM_CC_RPT_RSSI_MAN_RX0_CELL9_MAN                                      (0)
#define L_CUIF_LTE_NCM_CC_RPT_RSSI_MAN_RX0_CELL9_MAN                                      (32)
#define M_CUIF_LTE_NCM_CC_RPT_RSSI_MAN_RX0_CELL9_MAN                                      (0xFFFFFFFF)

// ---------- RSSI_MAN_RX1_CELL9 bit-field ----------
#define P_CUIF_LTE_NCM_CC_RPT_RSSI_MAN_RX1_CELL9_MAN                                      (0)
#define L_CUIF_LTE_NCM_CC_RPT_RSSI_MAN_RX1_CELL9_MAN                                      (32)
#define M_CUIF_LTE_NCM_CC_RPT_RSSI_MAN_RX1_CELL9_MAN                                      (0xFFFFFFFF)

// ---------- RSSI_EXP_CELL9 bit-field ----------
#define P_CUIF_LTE_NCM_CC_RPT_RSSI_EXP_CELL9_RX1                                          (16)
#define L_CUIF_LTE_NCM_CC_RPT_RSSI_EXP_CELL9_RX1                                          (16)
#define M_CUIF_LTE_NCM_CC_RPT_RSSI_EXP_CELL9_RX1                                          (0xFFFF0000)
#define P_CUIF_LTE_NCM_CC_RPT_RSSI_EXP_CELL9_RX0                                          (0)
#define L_CUIF_LTE_NCM_CC_RPT_RSSI_EXP_CELL9_RX0                                          (16)
#define M_CUIF_LTE_NCM_CC_RPT_RSSI_EXP_CELL9_RX0                                          (0x0000FFFF)

// ---------- RSSI_MAN_RX0_CELL10 bit-field ----------
#define P_CUIF_LTE_NCM_CC_RPT_RSSI_MAN_RX0_CELL10_MAN                                     (0)
#define L_CUIF_LTE_NCM_CC_RPT_RSSI_MAN_RX0_CELL10_MAN                                     (32)
#define M_CUIF_LTE_NCM_CC_RPT_RSSI_MAN_RX0_CELL10_MAN                                     (0xFFFFFFFF)

// ---------- RSSI_MAN_RX1_CELL10 bit-field ----------
#define P_CUIF_LTE_NCM_CC_RPT_RSSI_MAN_RX1_CELL10_MAN                                     (0)
#define L_CUIF_LTE_NCM_CC_RPT_RSSI_MAN_RX1_CELL10_MAN                                     (32)
#define M_CUIF_LTE_NCM_CC_RPT_RSSI_MAN_RX1_CELL10_MAN                                     (0xFFFFFFFF)

// ---------- RSSI_EXP_CELL10 bit-field ----------
#define P_CUIF_LTE_NCM_CC_RPT_RSSI_EXP_CELL10_RX1                                         (16)
#define L_CUIF_LTE_NCM_CC_RPT_RSSI_EXP_CELL10_RX1                                         (16)
#define M_CUIF_LTE_NCM_CC_RPT_RSSI_EXP_CELL10_RX1                                         (0xFFFF0000)
#define P_CUIF_LTE_NCM_CC_RPT_RSSI_EXP_CELL10_RX0                                         (0)
#define L_CUIF_LTE_NCM_CC_RPT_RSSI_EXP_CELL10_RX0                                         (16)
#define M_CUIF_LTE_NCM_CC_RPT_RSSI_EXP_CELL10_RX0                                         (0x0000FFFF)

// ---------- RSSI_MAN_RX0_CELL11 bit-field ----------
#define P_CUIF_LTE_NCM_CC_RPT_RSSI_MAN_RX0_CELL11_MAN                                     (0)
#define L_CUIF_LTE_NCM_CC_RPT_RSSI_MAN_RX0_CELL11_MAN                                     (32)
#define M_CUIF_LTE_NCM_CC_RPT_RSSI_MAN_RX0_CELL11_MAN                                     (0xFFFFFFFF)

// ---------- RSSI_MAN_RX1_CELL11 bit-field ----------
#define P_CUIF_LTE_NCM_CC_RPT_RSSI_MAN_RX1_CELL11_MAN                                     (0)
#define L_CUIF_LTE_NCM_CC_RPT_RSSI_MAN_RX1_CELL11_MAN                                     (32)
#define M_CUIF_LTE_NCM_CC_RPT_RSSI_MAN_RX1_CELL11_MAN                                     (0xFFFFFFFF)

// ---------- RSSI_EXP_CELL11 bit-field ----------
#define P_CUIF_LTE_NCM_CC_RPT_RSSI_EXP_CELL11_RX1                                         (16)
#define L_CUIF_LTE_NCM_CC_RPT_RSSI_EXP_CELL11_RX1                                         (16)
#define M_CUIF_LTE_NCM_CC_RPT_RSSI_EXP_CELL11_RX1                                         (0xFFFF0000)
#define P_CUIF_LTE_NCM_CC_RPT_RSSI_EXP_CELL11_RX0                                         (0)
#define L_CUIF_LTE_NCM_CC_RPT_RSSI_EXP_CELL11_RX0                                         (16)
#define M_CUIF_LTE_NCM_CC_RPT_RSSI_EXP_CELL11_RX0                                         (0x0000FFFF)

// ---------- RSRP_MAN_P0_RX0_CELL0 bit-field ----------
#define P_CUIF_LTE_NCM_CC_RPT_RSRP_MAN_P0_RX0_CELL0_MAN                                   (0)
#define L_CUIF_LTE_NCM_CC_RPT_RSRP_MAN_P0_RX0_CELL0_MAN                                   (32)
#define M_CUIF_LTE_NCM_CC_RPT_RSRP_MAN_P0_RX0_CELL0_MAN                                   (0xFFFFFFFF)

// ---------- RSRP_MAN_P0_RX1_CELL0 bit-field ----------
#define P_CUIF_LTE_NCM_CC_RPT_RSRP_MAN_P0_RX1_CELL0_MAN                                   (0)
#define L_CUIF_LTE_NCM_CC_RPT_RSRP_MAN_P0_RX1_CELL0_MAN                                   (32)
#define M_CUIF_LTE_NCM_CC_RPT_RSRP_MAN_P0_RX1_CELL0_MAN                                   (0xFFFFFFFF)

// ---------- RSRP_EXP_P0_CELL0 bit-field ----------
#define P_CUIF_LTE_NCM_CC_RPT_RSRP_EXP_P0_CELL0_RX1                                       (16)
#define L_CUIF_LTE_NCM_CC_RPT_RSRP_EXP_P0_CELL0_RX1                                       (16)
#define M_CUIF_LTE_NCM_CC_RPT_RSRP_EXP_P0_CELL0_RX1                                       (0xFFFF0000)
#define P_CUIF_LTE_NCM_CC_RPT_RSRP_EXP_P0_CELL0_RX0                                       (0)
#define L_CUIF_LTE_NCM_CC_RPT_RSRP_EXP_P0_CELL0_RX0                                       (16)
#define M_CUIF_LTE_NCM_CC_RPT_RSRP_EXP_P0_CELL0_RX0                                       (0x0000FFFF)

// ---------- RSRP_MAN_P1_RX0_CELL0 bit-field ----------
#define P_CUIF_LTE_NCM_CC_RPT_RSRP_MAN_P1_RX0_CELL0_MAN                                   (0)
#define L_CUIF_LTE_NCM_CC_RPT_RSRP_MAN_P1_RX0_CELL0_MAN                                   (32)
#define M_CUIF_LTE_NCM_CC_RPT_RSRP_MAN_P1_RX0_CELL0_MAN                                   (0xFFFFFFFF)

// ---------- RSRP_MAN_P1_RX1_CELL0 bit-field ----------
#define P_CUIF_LTE_NCM_CC_RPT_RSRP_MAN_P1_RX1_CELL0_MAN                                   (0)
#define L_CUIF_LTE_NCM_CC_RPT_RSRP_MAN_P1_RX1_CELL0_MAN                                   (32)
#define M_CUIF_LTE_NCM_CC_RPT_RSRP_MAN_P1_RX1_CELL0_MAN                                   (0xFFFFFFFF)

// ---------- RSRP_EXP_P1_CELL0 bit-field ----------
#define P_CUIF_LTE_NCM_CC_RPT_RSRP_EXP_P1_CELL0_RX1                                       (16)
#define L_CUIF_LTE_NCM_CC_RPT_RSRP_EXP_P1_CELL0_RX1                                       (16)
#define M_CUIF_LTE_NCM_CC_RPT_RSRP_EXP_P1_CELL0_RX1                                       (0xFFFF0000)
#define P_CUIF_LTE_NCM_CC_RPT_RSRP_EXP_P1_CELL0_RX0                                       (0)
#define L_CUIF_LTE_NCM_CC_RPT_RSRP_EXP_P1_CELL0_RX0                                       (16)
#define M_CUIF_LTE_NCM_CC_RPT_RSRP_EXP_P1_CELL0_RX0                                       (0x0000FFFF)

// ---------- RSRP_MAN_P0_RX0_CELL1 bit-field ----------
#define P_CUIF_LTE_NCM_CC_RPT_RSRP_MAN_P0_RX0_CELL1_MAN                                   (0)
#define L_CUIF_LTE_NCM_CC_RPT_RSRP_MAN_P0_RX0_CELL1_MAN                                   (32)
#define M_CUIF_LTE_NCM_CC_RPT_RSRP_MAN_P0_RX0_CELL1_MAN                                   (0xFFFFFFFF)

// ---------- RSRP_MAN_P0_RX1_CELL1 bit-field ----------
#define P_CUIF_LTE_NCM_CC_RPT_RSRP_MAN_P0_RX1_CELL1_MAN                                   (0)
#define L_CUIF_LTE_NCM_CC_RPT_RSRP_MAN_P0_RX1_CELL1_MAN                                   (32)
#define M_CUIF_LTE_NCM_CC_RPT_RSRP_MAN_P0_RX1_CELL1_MAN                                   (0xFFFFFFFF)

// ---------- RSRP_EXP_P0_CELL1 bit-field ----------
#define P_CUIF_LTE_NCM_CC_RPT_RSRP_EXP_P0_CELL1_RX1                                       (16)
#define L_CUIF_LTE_NCM_CC_RPT_RSRP_EXP_P0_CELL1_RX1                                       (16)
#define M_CUIF_LTE_NCM_CC_RPT_RSRP_EXP_P0_CELL1_RX1                                       (0xFFFF0000)
#define P_CUIF_LTE_NCM_CC_RPT_RSRP_EXP_P0_CELL1_RX0                                       (0)
#define L_CUIF_LTE_NCM_CC_RPT_RSRP_EXP_P0_CELL1_RX0                                       (16)
#define M_CUIF_LTE_NCM_CC_RPT_RSRP_EXP_P0_CELL1_RX0                                       (0x0000FFFF)

// ---------- RSRP_MAN_P1_RX0_CELL1 bit-field ----------
#define P_CUIF_LTE_NCM_CC_RPT_RSRP_MAN_P1_RX0_CELL1_MAN                                   (0)
#define L_CUIF_LTE_NCM_CC_RPT_RSRP_MAN_P1_RX0_CELL1_MAN                                   (32)
#define M_CUIF_LTE_NCM_CC_RPT_RSRP_MAN_P1_RX0_CELL1_MAN                                   (0xFFFFFFFF)

// ---------- RSRP_MAN_P1_RX1_CELL1 bit-field ----------
#define P_CUIF_LTE_NCM_CC_RPT_RSRP_MAN_P1_RX1_CELL1_MAN                                   (0)
#define L_CUIF_LTE_NCM_CC_RPT_RSRP_MAN_P1_RX1_CELL1_MAN                                   (32)
#define M_CUIF_LTE_NCM_CC_RPT_RSRP_MAN_P1_RX1_CELL1_MAN                                   (0xFFFFFFFF)

// ---------- RSRP_EXP_P1_CELL1 bit-field ----------
#define P_CUIF_LTE_NCM_CC_RPT_RSRP_EXP_P1_CELL1_RX1                                       (16)
#define L_CUIF_LTE_NCM_CC_RPT_RSRP_EXP_P1_CELL1_RX1                                       (16)
#define M_CUIF_LTE_NCM_CC_RPT_RSRP_EXP_P1_CELL1_RX1                                       (0xFFFF0000)
#define P_CUIF_LTE_NCM_CC_RPT_RSRP_EXP_P1_CELL1_RX0                                       (0)
#define L_CUIF_LTE_NCM_CC_RPT_RSRP_EXP_P1_CELL1_RX0                                       (16)
#define M_CUIF_LTE_NCM_CC_RPT_RSRP_EXP_P1_CELL1_RX0                                       (0x0000FFFF)

// ---------- RSRP_MAN_P0_RX0_CELL2 bit-field ----------
#define P_CUIF_LTE_NCM_CC_RPT_RSRP_MAN_P0_RX0_CELL2_MAN                                   (0)
#define L_CUIF_LTE_NCM_CC_RPT_RSRP_MAN_P0_RX0_CELL2_MAN                                   (32)
#define M_CUIF_LTE_NCM_CC_RPT_RSRP_MAN_P0_RX0_CELL2_MAN                                   (0xFFFFFFFF)

// ---------- RSRP_MAN_P0_RX1_CELL2 bit-field ----------
#define P_CUIF_LTE_NCM_CC_RPT_RSRP_MAN_P0_RX1_CELL2_MAN                                   (0)
#define L_CUIF_LTE_NCM_CC_RPT_RSRP_MAN_P0_RX1_CELL2_MAN                                   (32)
#define M_CUIF_LTE_NCM_CC_RPT_RSRP_MAN_P0_RX1_CELL2_MAN                                   (0xFFFFFFFF)

// ---------- RSRP_EXP_P0_CELL2 bit-field ----------
#define P_CUIF_LTE_NCM_CC_RPT_RSRP_EXP_P0_CELL2_RX1                                       (16)
#define L_CUIF_LTE_NCM_CC_RPT_RSRP_EXP_P0_CELL2_RX1                                       (16)
#define M_CUIF_LTE_NCM_CC_RPT_RSRP_EXP_P0_CELL2_RX1                                       (0xFFFF0000)
#define P_CUIF_LTE_NCM_CC_RPT_RSRP_EXP_P0_CELL2_RX0                                       (0)
#define L_CUIF_LTE_NCM_CC_RPT_RSRP_EXP_P0_CELL2_RX0                                       (16)
#define M_CUIF_LTE_NCM_CC_RPT_RSRP_EXP_P0_CELL2_RX0                                       (0x0000FFFF)

// ---------- RSRP_MAN_P1_RX0_CELL2 bit-field ----------
#define P_CUIF_LTE_NCM_CC_RPT_RSRP_MAN_P1_RX0_CELL2_MAN                                   (0)
#define L_CUIF_LTE_NCM_CC_RPT_RSRP_MAN_P1_RX0_CELL2_MAN                                   (32)
#define M_CUIF_LTE_NCM_CC_RPT_RSRP_MAN_P1_RX0_CELL2_MAN                                   (0xFFFFFFFF)

// ---------- RSRP_MAN_P1_RX1_CELL2 bit-field ----------
#define P_CUIF_LTE_NCM_CC_RPT_RSRP_MAN_P1_RX1_CELL2_MAN                                   (0)
#define L_CUIF_LTE_NCM_CC_RPT_RSRP_MAN_P1_RX1_CELL2_MAN                                   (32)
#define M_CUIF_LTE_NCM_CC_RPT_RSRP_MAN_P1_RX1_CELL2_MAN                                   (0xFFFFFFFF)

// ---------- RSRP_EXP_P1_CELL2 bit-field ----------
#define P_CUIF_LTE_NCM_CC_RPT_RSRP_EXP_P1_CELL2_RX1                                       (16)
#define L_CUIF_LTE_NCM_CC_RPT_RSRP_EXP_P1_CELL2_RX1                                       (16)
#define M_CUIF_LTE_NCM_CC_RPT_RSRP_EXP_P1_CELL2_RX1                                       (0xFFFF0000)
#define P_CUIF_LTE_NCM_CC_RPT_RSRP_EXP_P1_CELL2_RX0                                       (0)
#define L_CUIF_LTE_NCM_CC_RPT_RSRP_EXP_P1_CELL2_RX0                                       (16)
#define M_CUIF_LTE_NCM_CC_RPT_RSRP_EXP_P1_CELL2_RX0                                       (0x0000FFFF)

// ---------- RSRP_MAN_P0_RX0_CELL3 bit-field ----------
#define P_CUIF_LTE_NCM_CC_RPT_RSRP_MAN_P0_RX0_CELL3_MAN                                   (0)
#define L_CUIF_LTE_NCM_CC_RPT_RSRP_MAN_P0_RX0_CELL3_MAN                                   (32)
#define M_CUIF_LTE_NCM_CC_RPT_RSRP_MAN_P0_RX0_CELL3_MAN                                   (0xFFFFFFFF)

// ---------- RSRP_MAN_P0_RX1_CELL3 bit-field ----------
#define P_CUIF_LTE_NCM_CC_RPT_RSRP_MAN_P0_RX1_CELL3_MAN                                   (0)
#define L_CUIF_LTE_NCM_CC_RPT_RSRP_MAN_P0_RX1_CELL3_MAN                                   (32)
#define M_CUIF_LTE_NCM_CC_RPT_RSRP_MAN_P0_RX1_CELL3_MAN                                   (0xFFFFFFFF)

// ---------- RSRP_EXP_P0_CELL3 bit-field ----------
#define P_CUIF_LTE_NCM_CC_RPT_RSRP_EXP_P0_CELL3_RX1                                       (16)
#define L_CUIF_LTE_NCM_CC_RPT_RSRP_EXP_P0_CELL3_RX1                                       (16)
#define M_CUIF_LTE_NCM_CC_RPT_RSRP_EXP_P0_CELL3_RX1                                       (0xFFFF0000)
#define P_CUIF_LTE_NCM_CC_RPT_RSRP_EXP_P0_CELL3_RX0                                       (0)
#define L_CUIF_LTE_NCM_CC_RPT_RSRP_EXP_P0_CELL3_RX0                                       (16)
#define M_CUIF_LTE_NCM_CC_RPT_RSRP_EXP_P0_CELL3_RX0                                       (0x0000FFFF)

// ---------- RSRP_MAN_P1_RX0_CELL3 bit-field ----------
#define P_CUIF_LTE_NCM_CC_RPT_RSRP_MAN_P1_RX0_CELL3_MAN                                   (0)
#define L_CUIF_LTE_NCM_CC_RPT_RSRP_MAN_P1_RX0_CELL3_MAN                                   (32)
#define M_CUIF_LTE_NCM_CC_RPT_RSRP_MAN_P1_RX0_CELL3_MAN                                   (0xFFFFFFFF)

// ---------- RSRP_MAN_P1_RX1_CELL3 bit-field ----------
#define P_CUIF_LTE_NCM_CC_RPT_RSRP_MAN_P1_RX1_CELL3_MAN                                   (0)
#define L_CUIF_LTE_NCM_CC_RPT_RSRP_MAN_P1_RX1_CELL3_MAN                                   (32)
#define M_CUIF_LTE_NCM_CC_RPT_RSRP_MAN_P1_RX1_CELL3_MAN                                   (0xFFFFFFFF)

// ---------- RSRP_EXP_P1_CELL3 bit-field ----------
#define P_CUIF_LTE_NCM_CC_RPT_RSRP_EXP_P1_CELL3_RX1                                       (16)
#define L_CUIF_LTE_NCM_CC_RPT_RSRP_EXP_P1_CELL3_RX1                                       (16)
#define M_CUIF_LTE_NCM_CC_RPT_RSRP_EXP_P1_CELL3_RX1                                       (0xFFFF0000)
#define P_CUIF_LTE_NCM_CC_RPT_RSRP_EXP_P1_CELL3_RX0                                       (0)
#define L_CUIF_LTE_NCM_CC_RPT_RSRP_EXP_P1_CELL3_RX0                                       (16)
#define M_CUIF_LTE_NCM_CC_RPT_RSRP_EXP_P1_CELL3_RX0                                       (0x0000FFFF)

// ---------- RSRP_MAN_P0_RX0_CELL4 bit-field ----------
#define P_CUIF_LTE_NCM_CC_RPT_RSRP_MAN_P0_RX0_CELL4_MAN                                   (0)
#define L_CUIF_LTE_NCM_CC_RPT_RSRP_MAN_P0_RX0_CELL4_MAN                                   (32)
#define M_CUIF_LTE_NCM_CC_RPT_RSRP_MAN_P0_RX0_CELL4_MAN                                   (0xFFFFFFFF)

// ---------- RSRP_MAN_P0_RX1_CELL4 bit-field ----------
#define P_CUIF_LTE_NCM_CC_RPT_RSRP_MAN_P0_RX1_CELL4_MAN                                   (0)
#define L_CUIF_LTE_NCM_CC_RPT_RSRP_MAN_P0_RX1_CELL4_MAN                                   (32)
#define M_CUIF_LTE_NCM_CC_RPT_RSRP_MAN_P0_RX1_CELL4_MAN                                   (0xFFFFFFFF)

// ---------- RSRP_EXP_P0_CELL4 bit-field ----------
#define P_CUIF_LTE_NCM_CC_RPT_RSRP_EXP_P0_CELL4_RX1                                       (16)
#define L_CUIF_LTE_NCM_CC_RPT_RSRP_EXP_P0_CELL4_RX1                                       (16)
#define M_CUIF_LTE_NCM_CC_RPT_RSRP_EXP_P0_CELL4_RX1                                       (0xFFFF0000)
#define P_CUIF_LTE_NCM_CC_RPT_RSRP_EXP_P0_CELL4_RX0                                       (0)
#define L_CUIF_LTE_NCM_CC_RPT_RSRP_EXP_P0_CELL4_RX0                                       (16)
#define M_CUIF_LTE_NCM_CC_RPT_RSRP_EXP_P0_CELL4_RX0                                       (0x0000FFFF)

// ---------- RSRP_MAN_P1_RX0_CELL4 bit-field ----------
#define P_CUIF_LTE_NCM_CC_RPT_RSRP_MAN_P1_RX0_CELL4_MAN                                   (0)
#define L_CUIF_LTE_NCM_CC_RPT_RSRP_MAN_P1_RX0_CELL4_MAN                                   (32)
#define M_CUIF_LTE_NCM_CC_RPT_RSRP_MAN_P1_RX0_CELL4_MAN                                   (0xFFFFFFFF)

// ---------- RSRP_MAN_P1_RX1_CELL4 bit-field ----------
#define P_CUIF_LTE_NCM_CC_RPT_RSRP_MAN_P1_RX1_CELL4_MAN                                   (0)
#define L_CUIF_LTE_NCM_CC_RPT_RSRP_MAN_P1_RX1_CELL4_MAN                                   (32)
#define M_CUIF_LTE_NCM_CC_RPT_RSRP_MAN_P1_RX1_CELL4_MAN                                   (0xFFFFFFFF)

// ---------- RSRP_EXP_P1_CELL4 bit-field ----------
#define P_CUIF_LTE_NCM_CC_RPT_RSRP_EXP_P1_CELL4_RX1                                       (16)
#define L_CUIF_LTE_NCM_CC_RPT_RSRP_EXP_P1_CELL4_RX1                                       (16)
#define M_CUIF_LTE_NCM_CC_RPT_RSRP_EXP_P1_CELL4_RX1                                       (0xFFFF0000)
#define P_CUIF_LTE_NCM_CC_RPT_RSRP_EXP_P1_CELL4_RX0                                       (0)
#define L_CUIF_LTE_NCM_CC_RPT_RSRP_EXP_P1_CELL4_RX0                                       (16)
#define M_CUIF_LTE_NCM_CC_RPT_RSRP_EXP_P1_CELL4_RX0                                       (0x0000FFFF)

// ---------- RSRP_MAN_P0_RX0_CELL5 bit-field ----------
#define P_CUIF_LTE_NCM_CC_RPT_RSRP_MAN_P0_RX0_CELL5_MAN                                   (0)
#define L_CUIF_LTE_NCM_CC_RPT_RSRP_MAN_P0_RX0_CELL5_MAN                                   (32)
#define M_CUIF_LTE_NCM_CC_RPT_RSRP_MAN_P0_RX0_CELL5_MAN                                   (0xFFFFFFFF)

// ---------- RSRP_MAN_P0_RX1_CELL5 bit-field ----------
#define P_CUIF_LTE_NCM_CC_RPT_RSRP_MAN_P0_RX1_CELL5_MAN                                   (0)
#define L_CUIF_LTE_NCM_CC_RPT_RSRP_MAN_P0_RX1_CELL5_MAN                                   (32)
#define M_CUIF_LTE_NCM_CC_RPT_RSRP_MAN_P0_RX1_CELL5_MAN                                   (0xFFFFFFFF)

// ---------- RSRP_EXP_P0_CELL5 bit-field ----------
#define P_CUIF_LTE_NCM_CC_RPT_RSRP_EXP_P0_CELL5_RX1                                       (16)
#define L_CUIF_LTE_NCM_CC_RPT_RSRP_EXP_P0_CELL5_RX1                                       (16)
#define M_CUIF_LTE_NCM_CC_RPT_RSRP_EXP_P0_CELL5_RX1                                       (0xFFFF0000)
#define P_CUIF_LTE_NCM_CC_RPT_RSRP_EXP_P0_CELL5_RX0                                       (0)
#define L_CUIF_LTE_NCM_CC_RPT_RSRP_EXP_P0_CELL5_RX0                                       (16)
#define M_CUIF_LTE_NCM_CC_RPT_RSRP_EXP_P0_CELL5_RX0                                       (0x0000FFFF)

// ---------- RSRP_MAN_P1_RX0_CELL5 bit-field ----------
#define P_CUIF_LTE_NCM_CC_RPT_RSRP_MAN_P1_RX0_CELL5_MAN                                   (0)
#define L_CUIF_LTE_NCM_CC_RPT_RSRP_MAN_P1_RX0_CELL5_MAN                                   (32)
#define M_CUIF_LTE_NCM_CC_RPT_RSRP_MAN_P1_RX0_CELL5_MAN                                   (0xFFFFFFFF)

// ---------- RSRP_MAN_P1_RX1_CELL5 bit-field ----------
#define P_CUIF_LTE_NCM_CC_RPT_RSRP_MAN_P1_RX1_CELL5_MAN                                   (0)
#define L_CUIF_LTE_NCM_CC_RPT_RSRP_MAN_P1_RX1_CELL5_MAN                                   (32)
#define M_CUIF_LTE_NCM_CC_RPT_RSRP_MAN_P1_RX1_CELL5_MAN                                   (0xFFFFFFFF)

// ---------- RSRP_EXP_P1_CELL5 bit-field ----------
#define P_CUIF_LTE_NCM_CC_RPT_RSRP_EXP_P1_CELL5_RX1                                       (16)
#define L_CUIF_LTE_NCM_CC_RPT_RSRP_EXP_P1_CELL5_RX1                                       (16)
#define M_CUIF_LTE_NCM_CC_RPT_RSRP_EXP_P1_CELL5_RX1                                       (0xFFFF0000)
#define P_CUIF_LTE_NCM_CC_RPT_RSRP_EXP_P1_CELL5_RX0                                       (0)
#define L_CUIF_LTE_NCM_CC_RPT_RSRP_EXP_P1_CELL5_RX0                                       (16)
#define M_CUIF_LTE_NCM_CC_RPT_RSRP_EXP_P1_CELL5_RX0                                       (0x0000FFFF)

// ---------- RSRP_MAN_P0_RX0_CELL6 bit-field ----------
#define P_CUIF_LTE_NCM_CC_RPT_RSRP_MAN_P0_RX0_CELL6_MAN                                   (0)
#define L_CUIF_LTE_NCM_CC_RPT_RSRP_MAN_P0_RX0_CELL6_MAN                                   (32)
#define M_CUIF_LTE_NCM_CC_RPT_RSRP_MAN_P0_RX0_CELL6_MAN                                   (0xFFFFFFFF)

// ---------- RSRP_MAN_P0_RX1_CELL6 bit-field ----------
#define P_CUIF_LTE_NCM_CC_RPT_RSRP_MAN_P0_RX1_CELL6_MAN                                   (0)
#define L_CUIF_LTE_NCM_CC_RPT_RSRP_MAN_P0_RX1_CELL6_MAN                                   (32)
#define M_CUIF_LTE_NCM_CC_RPT_RSRP_MAN_P0_RX1_CELL6_MAN                                   (0xFFFFFFFF)

// ---------- RSRP_EXP_P0_CELL6 bit-field ----------
#define P_CUIF_LTE_NCM_CC_RPT_RSRP_EXP_P0_CELL6_RX1                                       (16)
#define L_CUIF_LTE_NCM_CC_RPT_RSRP_EXP_P0_CELL6_RX1                                       (16)
#define M_CUIF_LTE_NCM_CC_RPT_RSRP_EXP_P0_CELL6_RX1                                       (0xFFFF0000)
#define P_CUIF_LTE_NCM_CC_RPT_RSRP_EXP_P0_CELL6_RX0                                       (0)
#define L_CUIF_LTE_NCM_CC_RPT_RSRP_EXP_P0_CELL6_RX0                                       (16)
#define M_CUIF_LTE_NCM_CC_RPT_RSRP_EXP_P0_CELL6_RX0                                       (0x0000FFFF)

// ---------- RSRP_MAN_P1_RX0_CELL6 bit-field ----------
#define P_CUIF_LTE_NCM_CC_RPT_RSRP_MAN_P1_RX0_CELL6_MAN                                   (0)
#define L_CUIF_LTE_NCM_CC_RPT_RSRP_MAN_P1_RX0_CELL6_MAN                                   (32)
#define M_CUIF_LTE_NCM_CC_RPT_RSRP_MAN_P1_RX0_CELL6_MAN                                   (0xFFFFFFFF)

// ---------- RSRP_MAN_P1_RX1_CELL6 bit-field ----------
#define P_CUIF_LTE_NCM_CC_RPT_RSRP_MAN_P1_RX1_CELL6_MAN                                   (0)
#define L_CUIF_LTE_NCM_CC_RPT_RSRP_MAN_P1_RX1_CELL6_MAN                                   (32)
#define M_CUIF_LTE_NCM_CC_RPT_RSRP_MAN_P1_RX1_CELL6_MAN                                   (0xFFFFFFFF)

// ---------- RSRP_EXP_P1_CELL6 bit-field ----------
#define P_CUIF_LTE_NCM_CC_RPT_RSRP_EXP_P1_CELL6_RX1                                       (16)
#define L_CUIF_LTE_NCM_CC_RPT_RSRP_EXP_P1_CELL6_RX1                                       (16)
#define M_CUIF_LTE_NCM_CC_RPT_RSRP_EXP_P1_CELL6_RX1                                       (0xFFFF0000)
#define P_CUIF_LTE_NCM_CC_RPT_RSRP_EXP_P1_CELL6_RX0                                       (0)
#define L_CUIF_LTE_NCM_CC_RPT_RSRP_EXP_P1_CELL6_RX0                                       (16)
#define M_CUIF_LTE_NCM_CC_RPT_RSRP_EXP_P1_CELL6_RX0                                       (0x0000FFFF)

// ---------- RSRP_MAN_P0_RX0_CELL7 bit-field ----------
#define P_CUIF_LTE_NCM_CC_RPT_RSRP_MAN_P0_RX0_CELL7_MAN                                   (0)
#define L_CUIF_LTE_NCM_CC_RPT_RSRP_MAN_P0_RX0_CELL7_MAN                                   (32)
#define M_CUIF_LTE_NCM_CC_RPT_RSRP_MAN_P0_RX0_CELL7_MAN                                   (0xFFFFFFFF)

// ---------- RSRP_MAN_P0_RX1_CELL7 bit-field ----------
#define P_CUIF_LTE_NCM_CC_RPT_RSRP_MAN_P0_RX1_CELL7_MAN                                   (0)
#define L_CUIF_LTE_NCM_CC_RPT_RSRP_MAN_P0_RX1_CELL7_MAN                                   (32)
#define M_CUIF_LTE_NCM_CC_RPT_RSRP_MAN_P0_RX1_CELL7_MAN                                   (0xFFFFFFFF)

// ---------- RSRP_EXP_P0_CELL7 bit-field ----------
#define P_CUIF_LTE_NCM_CC_RPT_RSRP_EXP_P0_CELL7_RX1                                       (16)
#define L_CUIF_LTE_NCM_CC_RPT_RSRP_EXP_P0_CELL7_RX1                                       (16)
#define M_CUIF_LTE_NCM_CC_RPT_RSRP_EXP_P0_CELL7_RX1                                       (0xFFFF0000)
#define P_CUIF_LTE_NCM_CC_RPT_RSRP_EXP_P0_CELL7_RX0                                       (0)
#define L_CUIF_LTE_NCM_CC_RPT_RSRP_EXP_P0_CELL7_RX0                                       (16)
#define M_CUIF_LTE_NCM_CC_RPT_RSRP_EXP_P0_CELL7_RX0                                       (0x0000FFFF)

// ---------- RSRP_MAN_P1_RX0_CELL7 bit-field ----------
#define P_CUIF_LTE_NCM_CC_RPT_RSRP_MAN_P1_RX0_CELL7_MAN                                   (0)
#define L_CUIF_LTE_NCM_CC_RPT_RSRP_MAN_P1_RX0_CELL7_MAN                                   (32)
#define M_CUIF_LTE_NCM_CC_RPT_RSRP_MAN_P1_RX0_CELL7_MAN                                   (0xFFFFFFFF)

// ---------- RSRP_MAN_P1_RX1_CELL7 bit-field ----------
#define P_CUIF_LTE_NCM_CC_RPT_RSRP_MAN_P1_RX1_CELL7_MAN                                   (0)
#define L_CUIF_LTE_NCM_CC_RPT_RSRP_MAN_P1_RX1_CELL7_MAN                                   (32)
#define M_CUIF_LTE_NCM_CC_RPT_RSRP_MAN_P1_RX1_CELL7_MAN                                   (0xFFFFFFFF)

// ---------- RSRP_EXP_P1_CELL7 bit-field ----------
#define P_CUIF_LTE_NCM_CC_RPT_RSRP_EXP_P1_CELL7_RX1                                       (16)
#define L_CUIF_LTE_NCM_CC_RPT_RSRP_EXP_P1_CELL7_RX1                                       (16)
#define M_CUIF_LTE_NCM_CC_RPT_RSRP_EXP_P1_CELL7_RX1                                       (0xFFFF0000)
#define P_CUIF_LTE_NCM_CC_RPT_RSRP_EXP_P1_CELL7_RX0                                       (0)
#define L_CUIF_LTE_NCM_CC_RPT_RSRP_EXP_P1_CELL7_RX0                                       (16)
#define M_CUIF_LTE_NCM_CC_RPT_RSRP_EXP_P1_CELL7_RX0                                       (0x0000FFFF)

// ---------- RSRP_MAN_P0_RX0_CELL8 bit-field ----------
#define P_CUIF_LTE_NCM_CC_RPT_RSRP_MAN_P0_RX0_CELL8_MAN                                   (0)
#define L_CUIF_LTE_NCM_CC_RPT_RSRP_MAN_P0_RX0_CELL8_MAN                                   (32)
#define M_CUIF_LTE_NCM_CC_RPT_RSRP_MAN_P0_RX0_CELL8_MAN                                   (0xFFFFFFFF)

// ---------- RSRP_MAN_P0_RX1_CELL8 bit-field ----------
#define P_CUIF_LTE_NCM_CC_RPT_RSRP_MAN_P0_RX1_CELL8_MAN                                   (0)
#define L_CUIF_LTE_NCM_CC_RPT_RSRP_MAN_P0_RX1_CELL8_MAN                                   (32)
#define M_CUIF_LTE_NCM_CC_RPT_RSRP_MAN_P0_RX1_CELL8_MAN                                   (0xFFFFFFFF)

// ---------- RSRP_EXP_P0_CELL8 bit-field ----------
#define P_CUIF_LTE_NCM_CC_RPT_RSRP_EXP_P0_CELL8_RX1                                       (16)
#define L_CUIF_LTE_NCM_CC_RPT_RSRP_EXP_P0_CELL8_RX1                                       (16)
#define M_CUIF_LTE_NCM_CC_RPT_RSRP_EXP_P0_CELL8_RX1                                       (0xFFFF0000)
#define P_CUIF_LTE_NCM_CC_RPT_RSRP_EXP_P0_CELL8_RX0                                       (0)
#define L_CUIF_LTE_NCM_CC_RPT_RSRP_EXP_P0_CELL8_RX0                                       (16)
#define M_CUIF_LTE_NCM_CC_RPT_RSRP_EXP_P0_CELL8_RX0                                       (0x0000FFFF)

// ---------- RSRP_MAN_P1_RX0_CELL8 bit-field ----------
#define P_CUIF_LTE_NCM_CC_RPT_RSRP_MAN_P1_RX0_CELL8_MAN                                   (0)
#define L_CUIF_LTE_NCM_CC_RPT_RSRP_MAN_P1_RX0_CELL8_MAN                                   (32)
#define M_CUIF_LTE_NCM_CC_RPT_RSRP_MAN_P1_RX0_CELL8_MAN                                   (0xFFFFFFFF)

// ---------- RSRP_MAN_P1_RX1_CELL8 bit-field ----------
#define P_CUIF_LTE_NCM_CC_RPT_RSRP_MAN_P1_RX1_CELL8_MAN                                   (0)
#define L_CUIF_LTE_NCM_CC_RPT_RSRP_MAN_P1_RX1_CELL8_MAN                                   (32)
#define M_CUIF_LTE_NCM_CC_RPT_RSRP_MAN_P1_RX1_CELL8_MAN                                   (0xFFFFFFFF)

// ---------- RSRP_EXP_P1_CELL8 bit-field ----------
#define P_CUIF_LTE_NCM_CC_RPT_RSRP_EXP_P1_CELL8_RX1                                       (16)
#define L_CUIF_LTE_NCM_CC_RPT_RSRP_EXP_P1_CELL8_RX1                                       (16)
#define M_CUIF_LTE_NCM_CC_RPT_RSRP_EXP_P1_CELL8_RX1                                       (0xFFFF0000)
#define P_CUIF_LTE_NCM_CC_RPT_RSRP_EXP_P1_CELL8_RX0                                       (0)
#define L_CUIF_LTE_NCM_CC_RPT_RSRP_EXP_P1_CELL8_RX0                                       (16)
#define M_CUIF_LTE_NCM_CC_RPT_RSRP_EXP_P1_CELL8_RX0                                       (0x0000FFFF)

// ---------- RSRP_MAN_P0_RX0_CELL9 bit-field ----------
#define P_CUIF_LTE_NCM_CC_RPT_RSRP_MAN_P0_RX0_CELL9_MAN                                   (0)
#define L_CUIF_LTE_NCM_CC_RPT_RSRP_MAN_P0_RX0_CELL9_MAN                                   (32)
#define M_CUIF_LTE_NCM_CC_RPT_RSRP_MAN_P0_RX0_CELL9_MAN                                   (0xFFFFFFFF)

// ---------- RSRP_MAN_P0_RX1_CELL9 bit-field ----------
#define P_CUIF_LTE_NCM_CC_RPT_RSRP_MAN_P0_RX1_CELL9_MAN                                   (0)
#define L_CUIF_LTE_NCM_CC_RPT_RSRP_MAN_P0_RX1_CELL9_MAN                                   (32)
#define M_CUIF_LTE_NCM_CC_RPT_RSRP_MAN_P0_RX1_CELL9_MAN                                   (0xFFFFFFFF)

// ---------- RSRP_EXP_P0_CELL9 bit-field ----------
#define P_CUIF_LTE_NCM_CC_RPT_RSRP_EXP_P0_CELL9_RX1                                       (16)
#define L_CUIF_LTE_NCM_CC_RPT_RSRP_EXP_P0_CELL9_RX1                                       (16)
#define M_CUIF_LTE_NCM_CC_RPT_RSRP_EXP_P0_CELL9_RX1                                       (0xFFFF0000)
#define P_CUIF_LTE_NCM_CC_RPT_RSRP_EXP_P0_CELL9_RX0                                       (0)
#define L_CUIF_LTE_NCM_CC_RPT_RSRP_EXP_P0_CELL9_RX0                                       (16)
#define M_CUIF_LTE_NCM_CC_RPT_RSRP_EXP_P0_CELL9_RX0                                       (0x0000FFFF)

// ---------- RSRP_MAN_P1_RX0_CELL9 bit-field ----------
#define P_CUIF_LTE_NCM_CC_RPT_RSRP_MAN_P1_RX0_CELL9_MAN                                   (0)
#define L_CUIF_LTE_NCM_CC_RPT_RSRP_MAN_P1_RX0_CELL9_MAN                                   (32)
#define M_CUIF_LTE_NCM_CC_RPT_RSRP_MAN_P1_RX0_CELL9_MAN                                   (0xFFFFFFFF)

// ---------- RSRP_MAN_P1_RX1_CELL9 bit-field ----------
#define P_CUIF_LTE_NCM_CC_RPT_RSRP_MAN_P1_RX1_CELL9_MAN                                   (0)
#define L_CUIF_LTE_NCM_CC_RPT_RSRP_MAN_P1_RX1_CELL9_MAN                                   (32)
#define M_CUIF_LTE_NCM_CC_RPT_RSRP_MAN_P1_RX1_CELL9_MAN                                   (0xFFFFFFFF)

// ---------- RSRP_EXP_P1_CELL9 bit-field ----------
#define P_CUIF_LTE_NCM_CC_RPT_RSRP_EXP_P1_CELL9_RX1                                       (16)
#define L_CUIF_LTE_NCM_CC_RPT_RSRP_EXP_P1_CELL9_RX1                                       (16)
#define M_CUIF_LTE_NCM_CC_RPT_RSRP_EXP_P1_CELL9_RX1                                       (0xFFFF0000)
#define P_CUIF_LTE_NCM_CC_RPT_RSRP_EXP_P1_CELL9_RX0                                       (0)
#define L_CUIF_LTE_NCM_CC_RPT_RSRP_EXP_P1_CELL9_RX0                                       (16)
#define M_CUIF_LTE_NCM_CC_RPT_RSRP_EXP_P1_CELL9_RX0                                       (0x0000FFFF)

// ---------- RSRP_MAN_P0_RX0_CELL10 bit-field ----------
#define P_CUIF_LTE_NCM_CC_RPT_RSRP_MAN_P0_RX0_CELL10_MAN                                  (0)
#define L_CUIF_LTE_NCM_CC_RPT_RSRP_MAN_P0_RX0_CELL10_MAN                                  (32)
#define M_CUIF_LTE_NCM_CC_RPT_RSRP_MAN_P0_RX0_CELL10_MAN                                  (0xFFFFFFFF)

// ---------- RSRP_MAN_P0_RX1_CELL10 bit-field ----------
#define P_CUIF_LTE_NCM_CC_RPT_RSRP_MAN_P0_RX1_CELL10_MAN                                  (0)
#define L_CUIF_LTE_NCM_CC_RPT_RSRP_MAN_P0_RX1_CELL10_MAN                                  (32)
#define M_CUIF_LTE_NCM_CC_RPT_RSRP_MAN_P0_RX1_CELL10_MAN                                  (0xFFFFFFFF)

// ---------- RSRP_EXP_P0_CELL10 bit-field ----------
#define P_CUIF_LTE_NCM_CC_RPT_RSRP_EXP_P0_CELL10_RX1                                      (16)
#define L_CUIF_LTE_NCM_CC_RPT_RSRP_EXP_P0_CELL10_RX1                                      (16)
#define M_CUIF_LTE_NCM_CC_RPT_RSRP_EXP_P0_CELL10_RX1                                      (0xFFFF0000)
#define P_CUIF_LTE_NCM_CC_RPT_RSRP_EXP_P0_CELL10_RX0                                      (0)
#define L_CUIF_LTE_NCM_CC_RPT_RSRP_EXP_P0_CELL10_RX0                                      (16)
#define M_CUIF_LTE_NCM_CC_RPT_RSRP_EXP_P0_CELL10_RX0                                      (0x0000FFFF)

// ---------- RSRP_MAN_P1_RX0_CELL10 bit-field ----------
#define P_CUIF_LTE_NCM_CC_RPT_RSRP_MAN_P1_RX0_CELL10_MAN                                  (0)
#define L_CUIF_LTE_NCM_CC_RPT_RSRP_MAN_P1_RX0_CELL10_MAN                                  (32)
#define M_CUIF_LTE_NCM_CC_RPT_RSRP_MAN_P1_RX0_CELL10_MAN                                  (0xFFFFFFFF)

// ---------- RSRP_MAN_P1_RX1_CELL10 bit-field ----------
#define P_CUIF_LTE_NCM_CC_RPT_RSRP_MAN_P1_RX1_CELL10_MAN                                  (0)
#define L_CUIF_LTE_NCM_CC_RPT_RSRP_MAN_P1_RX1_CELL10_MAN                                  (32)
#define M_CUIF_LTE_NCM_CC_RPT_RSRP_MAN_P1_RX1_CELL10_MAN                                  (0xFFFFFFFF)

// ---------- RSRP_EXP_P1_CELL10 bit-field ----------
#define P_CUIF_LTE_NCM_CC_RPT_RSRP_EXP_P1_CELL10_RX1                                      (16)
#define L_CUIF_LTE_NCM_CC_RPT_RSRP_EXP_P1_CELL10_RX1                                      (16)
#define M_CUIF_LTE_NCM_CC_RPT_RSRP_EXP_P1_CELL10_RX1                                      (0xFFFF0000)
#define P_CUIF_LTE_NCM_CC_RPT_RSRP_EXP_P1_CELL10_RX0                                      (0)
#define L_CUIF_LTE_NCM_CC_RPT_RSRP_EXP_P1_CELL10_RX0                                      (16)
#define M_CUIF_LTE_NCM_CC_RPT_RSRP_EXP_P1_CELL10_RX0                                      (0x0000FFFF)

// ---------- RSRP_MAN_P0_RX0_CELL11 bit-field ----------
#define P_CUIF_LTE_NCM_CC_RPT_RSRP_MAN_P0_RX0_CELL11_MAN                                  (0)
#define L_CUIF_LTE_NCM_CC_RPT_RSRP_MAN_P0_RX0_CELL11_MAN                                  (32)
#define M_CUIF_LTE_NCM_CC_RPT_RSRP_MAN_P0_RX0_CELL11_MAN                                  (0xFFFFFFFF)

// ---------- RSRP_MAN_P0_RX1_CELL11 bit-field ----------
#define P_CUIF_LTE_NCM_CC_RPT_RSRP_MAN_P0_RX1_CELL11_MAN                                  (0)
#define L_CUIF_LTE_NCM_CC_RPT_RSRP_MAN_P0_RX1_CELL11_MAN                                  (32)
#define M_CUIF_LTE_NCM_CC_RPT_RSRP_MAN_P0_RX1_CELL11_MAN                                  (0xFFFFFFFF)

// ---------- RSRP_EXP_P0_CELL11 bit-field ----------
#define P_CUIF_LTE_NCM_CC_RPT_RSRP_EXP_P0_CELL11_RX1                                      (16)
#define L_CUIF_LTE_NCM_CC_RPT_RSRP_EXP_P0_CELL11_RX1                                      (16)
#define M_CUIF_LTE_NCM_CC_RPT_RSRP_EXP_P0_CELL11_RX1                                      (0xFFFF0000)
#define P_CUIF_LTE_NCM_CC_RPT_RSRP_EXP_P0_CELL11_RX0                                      (0)
#define L_CUIF_LTE_NCM_CC_RPT_RSRP_EXP_P0_CELL11_RX0                                      (16)
#define M_CUIF_LTE_NCM_CC_RPT_RSRP_EXP_P0_CELL11_RX0                                      (0x0000FFFF)

// ---------- RSRP_MAN_P1_RX0_CELL11 bit-field ----------
#define P_CUIF_LTE_NCM_CC_RPT_RSRP_MAN_P1_RX0_CELL11_MAN                                  (0)
#define L_CUIF_LTE_NCM_CC_RPT_RSRP_MAN_P1_RX0_CELL11_MAN                                  (32)
#define M_CUIF_LTE_NCM_CC_RPT_RSRP_MAN_P1_RX0_CELL11_MAN                                  (0xFFFFFFFF)

// ---------- RSRP_MAN_P1_RX1_CELL11 bit-field ----------
#define P_CUIF_LTE_NCM_CC_RPT_RSRP_MAN_P1_RX1_CELL11_MAN                                  (0)
#define L_CUIF_LTE_NCM_CC_RPT_RSRP_MAN_P1_RX1_CELL11_MAN                                  (32)
#define M_CUIF_LTE_NCM_CC_RPT_RSRP_MAN_P1_RX1_CELL11_MAN                                  (0xFFFFFFFF)

// ---------- RSRP_EXP_P1_CELL11 bit-field ----------
#define P_CUIF_LTE_NCM_CC_RPT_RSRP_EXP_P1_CELL11_RX1                                      (16)
#define L_CUIF_LTE_NCM_CC_RPT_RSRP_EXP_P1_CELL11_RX1                                      (16)
#define M_CUIF_LTE_NCM_CC_RPT_RSRP_EXP_P1_CELL11_RX1                                      (0xFFFF0000)
#define P_CUIF_LTE_NCM_CC_RPT_RSRP_EXP_P1_CELL11_RX0                                      (0)
#define L_CUIF_LTE_NCM_CC_RPT_RSRP_EXP_P1_CELL11_RX0                                      (16)
#define M_CUIF_LTE_NCM_CC_RPT_RSRP_EXP_P1_CELL11_RX0                                      (0x0000FFFF)

// ---------- RSTP_MAN_P0_RX0_CELL0 bit-field ----------
#define P_CUIF_LTE_NCM_CC_RPT_RSTP_MAN_P0_RX0_CELL0_MAN                                   (0)
#define L_CUIF_LTE_NCM_CC_RPT_RSTP_MAN_P0_RX0_CELL0_MAN                                   (32)
#define M_CUIF_LTE_NCM_CC_RPT_RSTP_MAN_P0_RX0_CELL0_MAN                                   (0xFFFFFFFF)

// ---------- RSTP_MAN_P0_RX1_CELL0 bit-field ----------
#define P_CUIF_LTE_NCM_CC_RPT_RSTP_MAN_P0_RX1_CELL0_MAN                                   (0)
#define L_CUIF_LTE_NCM_CC_RPT_RSTP_MAN_P0_RX1_CELL0_MAN                                   (32)
#define M_CUIF_LTE_NCM_CC_RPT_RSTP_MAN_P0_RX1_CELL0_MAN                                   (0xFFFFFFFF)

// ---------- RSTP_EXP_P0_CELL0 bit-field ----------
#define P_CUIF_LTE_NCM_CC_RPT_RSTP_EXP_P0_CELL0_RX1                                       (16)
#define L_CUIF_LTE_NCM_CC_RPT_RSTP_EXP_P0_CELL0_RX1                                       (16)
#define M_CUIF_LTE_NCM_CC_RPT_RSTP_EXP_P0_CELL0_RX1                                       (0xFFFF0000)
#define P_CUIF_LTE_NCM_CC_RPT_RSTP_EXP_P0_CELL0_RX0                                       (0)
#define L_CUIF_LTE_NCM_CC_RPT_RSTP_EXP_P0_CELL0_RX0                                       (16)
#define M_CUIF_LTE_NCM_CC_RPT_RSTP_EXP_P0_CELL0_RX0                                       (0x0000FFFF)

// ---------- RSTP_MAN_P1_RX0_CELL0 bit-field ----------
#define P_CUIF_LTE_NCM_CC_RPT_RSTP_MAN_P1_RX0_CELL0_MAN                                   (0)
#define L_CUIF_LTE_NCM_CC_RPT_RSTP_MAN_P1_RX0_CELL0_MAN                                   (32)
#define M_CUIF_LTE_NCM_CC_RPT_RSTP_MAN_P1_RX0_CELL0_MAN                                   (0xFFFFFFFF)

// ---------- RSTP_MAN_P1_RX1_CELL0 bit-field ----------
#define P_CUIF_LTE_NCM_CC_RPT_RSTP_MAN_P1_RX1_CELL0_MAN                                   (0)
#define L_CUIF_LTE_NCM_CC_RPT_RSTP_MAN_P1_RX1_CELL0_MAN                                   (32)
#define M_CUIF_LTE_NCM_CC_RPT_RSTP_MAN_P1_RX1_CELL0_MAN                                   (0xFFFFFFFF)

// ---------- RSTP_EXP_P1_CELL0 bit-field ----------
#define P_CUIF_LTE_NCM_CC_RPT_RSTP_EXP_P1_CELL0_RX1                                       (16)
#define L_CUIF_LTE_NCM_CC_RPT_RSTP_EXP_P1_CELL0_RX1                                       (16)
#define M_CUIF_LTE_NCM_CC_RPT_RSTP_EXP_P1_CELL0_RX1                                       (0xFFFF0000)
#define P_CUIF_LTE_NCM_CC_RPT_RSTP_EXP_P1_CELL0_RX0                                       (0)
#define L_CUIF_LTE_NCM_CC_RPT_RSTP_EXP_P1_CELL0_RX0                                       (16)
#define M_CUIF_LTE_NCM_CC_RPT_RSTP_EXP_P1_CELL0_RX0                                       (0x0000FFFF)

// ---------- RSTP_MAN_P0_RX0_CELL1 bit-field ----------
#define P_CUIF_LTE_NCM_CC_RPT_RSTP_MAN_P0_RX0_CELL1_MAN                                   (0)
#define L_CUIF_LTE_NCM_CC_RPT_RSTP_MAN_P0_RX0_CELL1_MAN                                   (32)
#define M_CUIF_LTE_NCM_CC_RPT_RSTP_MAN_P0_RX0_CELL1_MAN                                   (0xFFFFFFFF)

// ---------- RSTP_MAN_P0_RX1_CELL1 bit-field ----------
#define P_CUIF_LTE_NCM_CC_RPT_RSTP_MAN_P0_RX1_CELL1_MAN                                   (0)
#define L_CUIF_LTE_NCM_CC_RPT_RSTP_MAN_P0_RX1_CELL1_MAN                                   (32)
#define M_CUIF_LTE_NCM_CC_RPT_RSTP_MAN_P0_RX1_CELL1_MAN                                   (0xFFFFFFFF)

// ---------- RSTP_EXP_P0_CELL1 bit-field ----------
#define P_CUIF_LTE_NCM_CC_RPT_RSTP_EXP_P0_CELL1_RX1                                       (16)
#define L_CUIF_LTE_NCM_CC_RPT_RSTP_EXP_P0_CELL1_RX1                                       (16)
#define M_CUIF_LTE_NCM_CC_RPT_RSTP_EXP_P0_CELL1_RX1                                       (0xFFFF0000)
#define P_CUIF_LTE_NCM_CC_RPT_RSTP_EXP_P0_CELL1_RX0                                       (0)
#define L_CUIF_LTE_NCM_CC_RPT_RSTP_EXP_P0_CELL1_RX0                                       (16)
#define M_CUIF_LTE_NCM_CC_RPT_RSTP_EXP_P0_CELL1_RX0                                       (0x0000FFFF)

// ---------- RSTP_MAN_P1_RX0_CELL1 bit-field ----------
#define P_CUIF_LTE_NCM_CC_RPT_RSTP_MAN_P1_RX0_CELL1_MAN                                   (0)
#define L_CUIF_LTE_NCM_CC_RPT_RSTP_MAN_P1_RX0_CELL1_MAN                                   (32)
#define M_CUIF_LTE_NCM_CC_RPT_RSTP_MAN_P1_RX0_CELL1_MAN                                   (0xFFFFFFFF)

// ---------- RSTP_MAN_P1_RX1_CELL1 bit-field ----------
#define P_CUIF_LTE_NCM_CC_RPT_RSTP_MAN_P1_RX1_CELL1_MAN                                   (0)
#define L_CUIF_LTE_NCM_CC_RPT_RSTP_MAN_P1_RX1_CELL1_MAN                                   (32)
#define M_CUIF_LTE_NCM_CC_RPT_RSTP_MAN_P1_RX1_CELL1_MAN                                   (0xFFFFFFFF)

// ---------- RSTP_EXP_P1_CELL1 bit-field ----------
#define P_CUIF_LTE_NCM_CC_RPT_RSTP_EXP_P1_CELL1_RX1                                       (16)
#define L_CUIF_LTE_NCM_CC_RPT_RSTP_EXP_P1_CELL1_RX1                                       (16)
#define M_CUIF_LTE_NCM_CC_RPT_RSTP_EXP_P1_CELL1_RX1                                       (0xFFFF0000)
#define P_CUIF_LTE_NCM_CC_RPT_RSTP_EXP_P1_CELL1_RX0                                       (0)
#define L_CUIF_LTE_NCM_CC_RPT_RSTP_EXP_P1_CELL1_RX0                                       (16)
#define M_CUIF_LTE_NCM_CC_RPT_RSTP_EXP_P1_CELL1_RX0                                       (0x0000FFFF)

// ---------- RSTP_MAN_P0_RX0_CELL2 bit-field ----------
#define P_CUIF_LTE_NCM_CC_RPT_RSTP_MAN_P0_RX0_CELL2_MAN                                   (0)
#define L_CUIF_LTE_NCM_CC_RPT_RSTP_MAN_P0_RX0_CELL2_MAN                                   (32)
#define M_CUIF_LTE_NCM_CC_RPT_RSTP_MAN_P0_RX0_CELL2_MAN                                   (0xFFFFFFFF)

// ---------- RSTP_MAN_P0_RX1_CELL2 bit-field ----------
#define P_CUIF_LTE_NCM_CC_RPT_RSTP_MAN_P0_RX1_CELL2_MAN                                   (0)
#define L_CUIF_LTE_NCM_CC_RPT_RSTP_MAN_P0_RX1_CELL2_MAN                                   (32)
#define M_CUIF_LTE_NCM_CC_RPT_RSTP_MAN_P0_RX1_CELL2_MAN                                   (0xFFFFFFFF)

// ---------- RSTP_EXP_P0_CELL2 bit-field ----------
#define P_CUIF_LTE_NCM_CC_RPT_RSTP_EXP_P0_CELL2_RX1                                       (16)
#define L_CUIF_LTE_NCM_CC_RPT_RSTP_EXP_P0_CELL2_RX1                                       (16)
#define M_CUIF_LTE_NCM_CC_RPT_RSTP_EXP_P0_CELL2_RX1                                       (0xFFFF0000)
#define P_CUIF_LTE_NCM_CC_RPT_RSTP_EXP_P0_CELL2_RX0                                       (0)
#define L_CUIF_LTE_NCM_CC_RPT_RSTP_EXP_P0_CELL2_RX0                                       (16)
#define M_CUIF_LTE_NCM_CC_RPT_RSTP_EXP_P0_CELL2_RX0                                       (0x0000FFFF)

// ---------- RSTP_MAN_P1_RX0_CELL2 bit-field ----------
#define P_CUIF_LTE_NCM_CC_RPT_RSTP_MAN_P1_RX0_CELL2_MAN                                   (0)
#define L_CUIF_LTE_NCM_CC_RPT_RSTP_MAN_P1_RX0_CELL2_MAN                                   (32)
#define M_CUIF_LTE_NCM_CC_RPT_RSTP_MAN_P1_RX0_CELL2_MAN                                   (0xFFFFFFFF)

// ---------- RSTP_MAN_P1_RX1_CELL2 bit-field ----------
#define P_CUIF_LTE_NCM_CC_RPT_RSTP_MAN_P1_RX1_CELL2_MAN                                   (0)
#define L_CUIF_LTE_NCM_CC_RPT_RSTP_MAN_P1_RX1_CELL2_MAN                                   (32)
#define M_CUIF_LTE_NCM_CC_RPT_RSTP_MAN_P1_RX1_CELL2_MAN                                   (0xFFFFFFFF)

// ---------- RSTP_EXP_P1_CELL2 bit-field ----------
#define P_CUIF_LTE_NCM_CC_RPT_RSTP_EXP_P1_CELL2_RX1                                       (16)
#define L_CUIF_LTE_NCM_CC_RPT_RSTP_EXP_P1_CELL2_RX1                                       (16)
#define M_CUIF_LTE_NCM_CC_RPT_RSTP_EXP_P1_CELL2_RX1                                       (0xFFFF0000)
#define P_CUIF_LTE_NCM_CC_RPT_RSTP_EXP_P1_CELL2_RX0                                       (0)
#define L_CUIF_LTE_NCM_CC_RPT_RSTP_EXP_P1_CELL2_RX0                                       (16)
#define M_CUIF_LTE_NCM_CC_RPT_RSTP_EXP_P1_CELL2_RX0                                       (0x0000FFFF)

// ---------- RSTP_MAN_P0_RX0_CELL3 bit-field ----------
#define P_CUIF_LTE_NCM_CC_RPT_RSTP_MAN_P0_RX0_CELL3_MAN                                   (0)
#define L_CUIF_LTE_NCM_CC_RPT_RSTP_MAN_P0_RX0_CELL3_MAN                                   (32)
#define M_CUIF_LTE_NCM_CC_RPT_RSTP_MAN_P0_RX0_CELL3_MAN                                   (0xFFFFFFFF)

// ---------- RSTP_MAN_P0_RX1_CELL3 bit-field ----------
#define P_CUIF_LTE_NCM_CC_RPT_RSTP_MAN_P0_RX1_CELL3_MAN                                   (0)
#define L_CUIF_LTE_NCM_CC_RPT_RSTP_MAN_P0_RX1_CELL3_MAN                                   (32)
#define M_CUIF_LTE_NCM_CC_RPT_RSTP_MAN_P0_RX1_CELL3_MAN                                   (0xFFFFFFFF)

// ---------- RSTP_EXP_P0_CELL3 bit-field ----------
#define P_CUIF_LTE_NCM_CC_RPT_RSTP_EXP_P0_CELL3_RX1                                       (16)
#define L_CUIF_LTE_NCM_CC_RPT_RSTP_EXP_P0_CELL3_RX1                                       (16)
#define M_CUIF_LTE_NCM_CC_RPT_RSTP_EXP_P0_CELL3_RX1                                       (0xFFFF0000)
#define P_CUIF_LTE_NCM_CC_RPT_RSTP_EXP_P0_CELL3_RX0                                       (0)
#define L_CUIF_LTE_NCM_CC_RPT_RSTP_EXP_P0_CELL3_RX0                                       (16)
#define M_CUIF_LTE_NCM_CC_RPT_RSTP_EXP_P0_CELL3_RX0                                       (0x0000FFFF)

// ---------- RSTP_MAN_P1_RX0_CELL3 bit-field ----------
#define P_CUIF_LTE_NCM_CC_RPT_RSTP_MAN_P1_RX0_CELL3_MAN                                   (0)
#define L_CUIF_LTE_NCM_CC_RPT_RSTP_MAN_P1_RX0_CELL3_MAN                                   (32)
#define M_CUIF_LTE_NCM_CC_RPT_RSTP_MAN_P1_RX0_CELL3_MAN                                   (0xFFFFFFFF)

// ---------- RSTP_MAN_P1_RX1_CELL3 bit-field ----------
#define P_CUIF_LTE_NCM_CC_RPT_RSTP_MAN_P1_RX1_CELL3_MAN                                   (0)
#define L_CUIF_LTE_NCM_CC_RPT_RSTP_MAN_P1_RX1_CELL3_MAN                                   (32)
#define M_CUIF_LTE_NCM_CC_RPT_RSTP_MAN_P1_RX1_CELL3_MAN                                   (0xFFFFFFFF)

// ---------- RSTP_EXP_P1_CELL3 bit-field ----------
#define P_CUIF_LTE_NCM_CC_RPT_RSTP_EXP_P1_CELL3_RX1                                       (16)
#define L_CUIF_LTE_NCM_CC_RPT_RSTP_EXP_P1_CELL3_RX1                                       (16)
#define M_CUIF_LTE_NCM_CC_RPT_RSTP_EXP_P1_CELL3_RX1                                       (0xFFFF0000)
#define P_CUIF_LTE_NCM_CC_RPT_RSTP_EXP_P1_CELL3_RX0                                       (0)
#define L_CUIF_LTE_NCM_CC_RPT_RSTP_EXP_P1_CELL3_RX0                                       (16)
#define M_CUIF_LTE_NCM_CC_RPT_RSTP_EXP_P1_CELL3_RX0                                       (0x0000FFFF)

// ---------- RSTP_MAN_P0_RX0_CELL4 bit-field ----------
#define P_CUIF_LTE_NCM_CC_RPT_RSTP_MAN_P0_RX0_CELL4_MAN                                   (0)
#define L_CUIF_LTE_NCM_CC_RPT_RSTP_MAN_P0_RX0_CELL4_MAN                                   (32)
#define M_CUIF_LTE_NCM_CC_RPT_RSTP_MAN_P0_RX0_CELL4_MAN                                   (0xFFFFFFFF)

// ---------- RSTP_MAN_P0_RX1_CELL4 bit-field ----------
#define P_CUIF_LTE_NCM_CC_RPT_RSTP_MAN_P0_RX1_CELL4_MAN                                   (0)
#define L_CUIF_LTE_NCM_CC_RPT_RSTP_MAN_P0_RX1_CELL4_MAN                                   (32)
#define M_CUIF_LTE_NCM_CC_RPT_RSTP_MAN_P0_RX1_CELL4_MAN                                   (0xFFFFFFFF)

// ---------- RSTP_EXP_P0_CELL4 bit-field ----------
#define P_CUIF_LTE_NCM_CC_RPT_RSTP_EXP_P0_CELL4_RX1                                       (16)
#define L_CUIF_LTE_NCM_CC_RPT_RSTP_EXP_P0_CELL4_RX1                                       (16)
#define M_CUIF_LTE_NCM_CC_RPT_RSTP_EXP_P0_CELL4_RX1                                       (0xFFFF0000)
#define P_CUIF_LTE_NCM_CC_RPT_RSTP_EXP_P0_CELL4_RX0                                       (0)
#define L_CUIF_LTE_NCM_CC_RPT_RSTP_EXP_P0_CELL4_RX0                                       (16)
#define M_CUIF_LTE_NCM_CC_RPT_RSTP_EXP_P0_CELL4_RX0                                       (0x0000FFFF)

// ---------- RSTP_MAN_P1_RX0_CELL4 bit-field ----------
#define P_CUIF_LTE_NCM_CC_RPT_RSTP_MAN_P1_RX0_CELL4_MAN                                   (0)
#define L_CUIF_LTE_NCM_CC_RPT_RSTP_MAN_P1_RX0_CELL4_MAN                                   (32)
#define M_CUIF_LTE_NCM_CC_RPT_RSTP_MAN_P1_RX0_CELL4_MAN                                   (0xFFFFFFFF)

// ---------- RSTP_MAN_P1_RX1_CELL4 bit-field ----------
#define P_CUIF_LTE_NCM_CC_RPT_RSTP_MAN_P1_RX1_CELL4_MAN                                   (0)
#define L_CUIF_LTE_NCM_CC_RPT_RSTP_MAN_P1_RX1_CELL4_MAN                                   (32)
#define M_CUIF_LTE_NCM_CC_RPT_RSTP_MAN_P1_RX1_CELL4_MAN                                   (0xFFFFFFFF)

// ---------- RSTP_EXP_P1_CELL4 bit-field ----------
#define P_CUIF_LTE_NCM_CC_RPT_RSTP_EXP_P1_CELL4_RX1                                       (16)
#define L_CUIF_LTE_NCM_CC_RPT_RSTP_EXP_P1_CELL4_RX1                                       (16)
#define M_CUIF_LTE_NCM_CC_RPT_RSTP_EXP_P1_CELL4_RX1                                       (0xFFFF0000)
#define P_CUIF_LTE_NCM_CC_RPT_RSTP_EXP_P1_CELL4_RX0                                       (0)
#define L_CUIF_LTE_NCM_CC_RPT_RSTP_EXP_P1_CELL4_RX0                                       (16)
#define M_CUIF_LTE_NCM_CC_RPT_RSTP_EXP_P1_CELL4_RX0                                       (0x0000FFFF)

// ---------- RSTP_MAN_P0_RX0_CELL5 bit-field ----------
#define P_CUIF_LTE_NCM_CC_RPT_RSTP_MAN_P0_RX0_CELL5_MAN                                   (0)
#define L_CUIF_LTE_NCM_CC_RPT_RSTP_MAN_P0_RX0_CELL5_MAN                                   (32)
#define M_CUIF_LTE_NCM_CC_RPT_RSTP_MAN_P0_RX0_CELL5_MAN                                   (0xFFFFFFFF)

// ---------- RSTP_MAN_P0_RX1_CELL5 bit-field ----------
#define P_CUIF_LTE_NCM_CC_RPT_RSTP_MAN_P0_RX1_CELL5_MAN                                   (0)
#define L_CUIF_LTE_NCM_CC_RPT_RSTP_MAN_P0_RX1_CELL5_MAN                                   (32)
#define M_CUIF_LTE_NCM_CC_RPT_RSTP_MAN_P0_RX1_CELL5_MAN                                   (0xFFFFFFFF)

// ---------- RSTP_EXP_P0_CELL5 bit-field ----------
#define P_CUIF_LTE_NCM_CC_RPT_RSTP_EXP_P0_CELL5_RX1                                       (16)
#define L_CUIF_LTE_NCM_CC_RPT_RSTP_EXP_P0_CELL5_RX1                                       (16)
#define M_CUIF_LTE_NCM_CC_RPT_RSTP_EXP_P0_CELL5_RX1                                       (0xFFFF0000)
#define P_CUIF_LTE_NCM_CC_RPT_RSTP_EXP_P0_CELL5_RX0                                       (0)
#define L_CUIF_LTE_NCM_CC_RPT_RSTP_EXP_P0_CELL5_RX0                                       (16)
#define M_CUIF_LTE_NCM_CC_RPT_RSTP_EXP_P0_CELL5_RX0                                       (0x0000FFFF)

// ---------- RSTP_MAN_P1_RX0_CELL5 bit-field ----------
#define P_CUIF_LTE_NCM_CC_RPT_RSTP_MAN_P1_RX0_CELL5_MAN                                   (0)
#define L_CUIF_LTE_NCM_CC_RPT_RSTP_MAN_P1_RX0_CELL5_MAN                                   (32)
#define M_CUIF_LTE_NCM_CC_RPT_RSTP_MAN_P1_RX0_CELL5_MAN                                   (0xFFFFFFFF)

// ---------- RSTP_MAN_P1_RX1_CELL5 bit-field ----------
#define P_CUIF_LTE_NCM_CC_RPT_RSTP_MAN_P1_RX1_CELL5_MAN                                   (0)
#define L_CUIF_LTE_NCM_CC_RPT_RSTP_MAN_P1_RX1_CELL5_MAN                                   (32)
#define M_CUIF_LTE_NCM_CC_RPT_RSTP_MAN_P1_RX1_CELL5_MAN                                   (0xFFFFFFFF)

// ---------- RSTP_EXP_P1_CELL5 bit-field ----------
#define P_CUIF_LTE_NCM_CC_RPT_RSTP_EXP_P1_CELL5_RX1                                       (16)
#define L_CUIF_LTE_NCM_CC_RPT_RSTP_EXP_P1_CELL5_RX1                                       (16)
#define M_CUIF_LTE_NCM_CC_RPT_RSTP_EXP_P1_CELL5_RX1                                       (0xFFFF0000)
#define P_CUIF_LTE_NCM_CC_RPT_RSTP_EXP_P1_CELL5_RX0                                       (0)
#define L_CUIF_LTE_NCM_CC_RPT_RSTP_EXP_P1_CELL5_RX0                                       (16)
#define M_CUIF_LTE_NCM_CC_RPT_RSTP_EXP_P1_CELL5_RX0                                       (0x0000FFFF)

// ---------- RSTP_MAN_P0_RX0_CELL6 bit-field ----------
#define P_CUIF_LTE_NCM_CC_RPT_RSTP_MAN_P0_RX0_CELL6_MAN                                   (0)
#define L_CUIF_LTE_NCM_CC_RPT_RSTP_MAN_P0_RX0_CELL6_MAN                                   (32)
#define M_CUIF_LTE_NCM_CC_RPT_RSTP_MAN_P0_RX0_CELL6_MAN                                   (0xFFFFFFFF)

// ---------- RSTP_MAN_P0_RX1_CELL6 bit-field ----------
#define P_CUIF_LTE_NCM_CC_RPT_RSTP_MAN_P0_RX1_CELL6_MAN                                   (0)
#define L_CUIF_LTE_NCM_CC_RPT_RSTP_MAN_P0_RX1_CELL6_MAN                                   (32)
#define M_CUIF_LTE_NCM_CC_RPT_RSTP_MAN_P0_RX1_CELL6_MAN                                   (0xFFFFFFFF)

// ---------- RSTP_EXP_P0_CELL6 bit-field ----------
#define P_CUIF_LTE_NCM_CC_RPT_RSTP_EXP_P0_CELL6_RX1                                       (16)
#define L_CUIF_LTE_NCM_CC_RPT_RSTP_EXP_P0_CELL6_RX1                                       (16)
#define M_CUIF_LTE_NCM_CC_RPT_RSTP_EXP_P0_CELL6_RX1                                       (0xFFFF0000)
#define P_CUIF_LTE_NCM_CC_RPT_RSTP_EXP_P0_CELL6_RX0                                       (0)
#define L_CUIF_LTE_NCM_CC_RPT_RSTP_EXP_P0_CELL6_RX0                                       (16)
#define M_CUIF_LTE_NCM_CC_RPT_RSTP_EXP_P0_CELL6_RX0                                       (0x0000FFFF)

// ---------- RSTP_MAN_P1_RX0_CELL6 bit-field ----------
#define P_CUIF_LTE_NCM_CC_RPT_RSTP_MAN_P1_RX0_CELL6_MAN                                   (0)
#define L_CUIF_LTE_NCM_CC_RPT_RSTP_MAN_P1_RX0_CELL6_MAN                                   (32)
#define M_CUIF_LTE_NCM_CC_RPT_RSTP_MAN_P1_RX0_CELL6_MAN                                   (0xFFFFFFFF)

// ---------- RSTP_MAN_P1_RX1_CELL6 bit-field ----------
#define P_CUIF_LTE_NCM_CC_RPT_RSTP_MAN_P1_RX1_CELL6_MAN                                   (0)
#define L_CUIF_LTE_NCM_CC_RPT_RSTP_MAN_P1_RX1_CELL6_MAN                                   (32)
#define M_CUIF_LTE_NCM_CC_RPT_RSTP_MAN_P1_RX1_CELL6_MAN                                   (0xFFFFFFFF)

// ---------- RSTP_EXP_P1_CELL6 bit-field ----------
#define P_CUIF_LTE_NCM_CC_RPT_RSTP_EXP_P1_CELL6_RX1                                       (16)
#define L_CUIF_LTE_NCM_CC_RPT_RSTP_EXP_P1_CELL6_RX1                                       (16)
#define M_CUIF_LTE_NCM_CC_RPT_RSTP_EXP_P1_CELL6_RX1                                       (0xFFFF0000)
#define P_CUIF_LTE_NCM_CC_RPT_RSTP_EXP_P1_CELL6_RX0                                       (0)
#define L_CUIF_LTE_NCM_CC_RPT_RSTP_EXP_P1_CELL6_RX0                                       (16)
#define M_CUIF_LTE_NCM_CC_RPT_RSTP_EXP_P1_CELL6_RX0                                       (0x0000FFFF)

// ---------- RSTP_MAN_P0_RX0_CELL7 bit-field ----------
#define P_CUIF_LTE_NCM_CC_RPT_RSTP_MAN_P0_RX0_CELL7_MAN                                   (0)
#define L_CUIF_LTE_NCM_CC_RPT_RSTP_MAN_P0_RX0_CELL7_MAN                                   (32)
#define M_CUIF_LTE_NCM_CC_RPT_RSTP_MAN_P0_RX0_CELL7_MAN                                   (0xFFFFFFFF)

// ---------- RSTP_MAN_P0_RX1_CELL7 bit-field ----------
#define P_CUIF_LTE_NCM_CC_RPT_RSTP_MAN_P0_RX1_CELL7_MAN                                   (0)
#define L_CUIF_LTE_NCM_CC_RPT_RSTP_MAN_P0_RX1_CELL7_MAN                                   (32)
#define M_CUIF_LTE_NCM_CC_RPT_RSTP_MAN_P0_RX1_CELL7_MAN                                   (0xFFFFFFFF)

// ---------- RSTP_EXP_P0_CELL7 bit-field ----------
#define P_CUIF_LTE_NCM_CC_RPT_RSTP_EXP_P0_CELL7_RX1                                       (16)
#define L_CUIF_LTE_NCM_CC_RPT_RSTP_EXP_P0_CELL7_RX1                                       (16)
#define M_CUIF_LTE_NCM_CC_RPT_RSTP_EXP_P0_CELL7_RX1                                       (0xFFFF0000)
#define P_CUIF_LTE_NCM_CC_RPT_RSTP_EXP_P0_CELL7_RX0                                       (0)
#define L_CUIF_LTE_NCM_CC_RPT_RSTP_EXP_P0_CELL7_RX0                                       (16)
#define M_CUIF_LTE_NCM_CC_RPT_RSTP_EXP_P0_CELL7_RX0                                       (0x0000FFFF)

// ---------- RSTP_MAN_P1_RX0_CELL7 bit-field ----------
#define P_CUIF_LTE_NCM_CC_RPT_RSTP_MAN_P1_RX0_CELL7_MAN                                   (0)
#define L_CUIF_LTE_NCM_CC_RPT_RSTP_MAN_P1_RX0_CELL7_MAN                                   (32)
#define M_CUIF_LTE_NCM_CC_RPT_RSTP_MAN_P1_RX0_CELL7_MAN                                   (0xFFFFFFFF)

// ---------- RSTP_MAN_P1_RX1_CELL7 bit-field ----------
#define P_CUIF_LTE_NCM_CC_RPT_RSTP_MAN_P1_RX1_CELL7_MAN                                   (0)
#define L_CUIF_LTE_NCM_CC_RPT_RSTP_MAN_P1_RX1_CELL7_MAN                                   (32)
#define M_CUIF_LTE_NCM_CC_RPT_RSTP_MAN_P1_RX1_CELL7_MAN                                   (0xFFFFFFFF)

// ---------- RSTP_EXP_P1_CELL7 bit-field ----------
#define P_CUIF_LTE_NCM_CC_RPT_RSTP_EXP_P1_CELL7_RX1                                       (16)
#define L_CUIF_LTE_NCM_CC_RPT_RSTP_EXP_P1_CELL7_RX1                                       (16)
#define M_CUIF_LTE_NCM_CC_RPT_RSTP_EXP_P1_CELL7_RX1                                       (0xFFFF0000)
#define P_CUIF_LTE_NCM_CC_RPT_RSTP_EXP_P1_CELL7_RX0                                       (0)
#define L_CUIF_LTE_NCM_CC_RPT_RSTP_EXP_P1_CELL7_RX0                                       (16)
#define M_CUIF_LTE_NCM_CC_RPT_RSTP_EXP_P1_CELL7_RX0                                       (0x0000FFFF)

// ---------- RSTP_MAN_P0_RX0_CELL8 bit-field ----------
#define P_CUIF_LTE_NCM_CC_RPT_RSTP_MAN_P0_RX0_CELL8_MAN                                   (0)
#define L_CUIF_LTE_NCM_CC_RPT_RSTP_MAN_P0_RX0_CELL8_MAN                                   (32)
#define M_CUIF_LTE_NCM_CC_RPT_RSTP_MAN_P0_RX0_CELL8_MAN                                   (0xFFFFFFFF)

// ---------- RSTP_MAN_P0_RX1_CELL8 bit-field ----------
#define P_CUIF_LTE_NCM_CC_RPT_RSTP_MAN_P0_RX1_CELL8_MAN                                   (0)
#define L_CUIF_LTE_NCM_CC_RPT_RSTP_MAN_P0_RX1_CELL8_MAN                                   (32)
#define M_CUIF_LTE_NCM_CC_RPT_RSTP_MAN_P0_RX1_CELL8_MAN                                   (0xFFFFFFFF)

// ---------- RSTP_EXP_P0_CELL8 bit-field ----------
#define P_CUIF_LTE_NCM_CC_RPT_RSTP_EXP_P0_CELL8_RX1                                       (16)
#define L_CUIF_LTE_NCM_CC_RPT_RSTP_EXP_P0_CELL8_RX1                                       (16)
#define M_CUIF_LTE_NCM_CC_RPT_RSTP_EXP_P0_CELL8_RX1                                       (0xFFFF0000)
#define P_CUIF_LTE_NCM_CC_RPT_RSTP_EXP_P0_CELL8_RX0                                       (0)
#define L_CUIF_LTE_NCM_CC_RPT_RSTP_EXP_P0_CELL8_RX0                                       (16)
#define M_CUIF_LTE_NCM_CC_RPT_RSTP_EXP_P0_CELL8_RX0                                       (0x0000FFFF)

// ---------- RSTP_MAN_P1_RX0_CELL8 bit-field ----------
#define P_CUIF_LTE_NCM_CC_RPT_RSTP_MAN_P1_RX0_CELL8_MAN                                   (0)
#define L_CUIF_LTE_NCM_CC_RPT_RSTP_MAN_P1_RX0_CELL8_MAN                                   (32)
#define M_CUIF_LTE_NCM_CC_RPT_RSTP_MAN_P1_RX0_CELL8_MAN                                   (0xFFFFFFFF)

// ---------- RSTP_MAN_P1_RX1_CELL8 bit-field ----------
#define P_CUIF_LTE_NCM_CC_RPT_RSTP_MAN_P1_RX1_CELL8_MAN                                   (0)
#define L_CUIF_LTE_NCM_CC_RPT_RSTP_MAN_P1_RX1_CELL8_MAN                                   (32)
#define M_CUIF_LTE_NCM_CC_RPT_RSTP_MAN_P1_RX1_CELL8_MAN                                   (0xFFFFFFFF)

// ---------- RSTP_EXP_P1_CELL8 bit-field ----------
#define P_CUIF_LTE_NCM_CC_RPT_RSTP_EXP_P1_CELL8_RX1                                       (16)
#define L_CUIF_LTE_NCM_CC_RPT_RSTP_EXP_P1_CELL8_RX1                                       (16)
#define M_CUIF_LTE_NCM_CC_RPT_RSTP_EXP_P1_CELL8_RX1                                       (0xFFFF0000)
#define P_CUIF_LTE_NCM_CC_RPT_RSTP_EXP_P1_CELL8_RX0                                       (0)
#define L_CUIF_LTE_NCM_CC_RPT_RSTP_EXP_P1_CELL8_RX0                                       (16)
#define M_CUIF_LTE_NCM_CC_RPT_RSTP_EXP_P1_CELL8_RX0                                       (0x0000FFFF)

// ---------- RSTP_MAN_P0_RX0_CELL9 bit-field ----------
#define P_CUIF_LTE_NCM_CC_RPT_RSTP_MAN_P0_RX0_CELL9_MAN                                   (0)
#define L_CUIF_LTE_NCM_CC_RPT_RSTP_MAN_P0_RX0_CELL9_MAN                                   (32)
#define M_CUIF_LTE_NCM_CC_RPT_RSTP_MAN_P0_RX0_CELL9_MAN                                   (0xFFFFFFFF)

// ---------- RSTP_MAN_P0_RX1_CELL9 bit-field ----------
#define P_CUIF_LTE_NCM_CC_RPT_RSTP_MAN_P0_RX1_CELL9_MAN                                   (0)
#define L_CUIF_LTE_NCM_CC_RPT_RSTP_MAN_P0_RX1_CELL9_MAN                                   (32)
#define M_CUIF_LTE_NCM_CC_RPT_RSTP_MAN_P0_RX1_CELL9_MAN                                   (0xFFFFFFFF)

// ---------- RSTP_EXP_P0_CELL9 bit-field ----------
#define P_CUIF_LTE_NCM_CC_RPT_RSTP_EXP_P0_CELL9_RX1                                       (16)
#define L_CUIF_LTE_NCM_CC_RPT_RSTP_EXP_P0_CELL9_RX1                                       (16)
#define M_CUIF_LTE_NCM_CC_RPT_RSTP_EXP_P0_CELL9_RX1                                       (0xFFFF0000)
#define P_CUIF_LTE_NCM_CC_RPT_RSTP_EXP_P0_CELL9_RX0                                       (0)
#define L_CUIF_LTE_NCM_CC_RPT_RSTP_EXP_P0_CELL9_RX0                                       (16)
#define M_CUIF_LTE_NCM_CC_RPT_RSTP_EXP_P0_CELL9_RX0                                       (0x0000FFFF)

// ---------- RSTP_MAN_P1_RX0_CELL9 bit-field ----------
#define P_CUIF_LTE_NCM_CC_RPT_RSTP_MAN_P1_RX0_CELL9_MAN                                   (0)
#define L_CUIF_LTE_NCM_CC_RPT_RSTP_MAN_P1_RX0_CELL9_MAN                                   (32)
#define M_CUIF_LTE_NCM_CC_RPT_RSTP_MAN_P1_RX0_CELL9_MAN                                   (0xFFFFFFFF)

// ---------- RSTP_MAN_P1_RX1_CELL9 bit-field ----------
#define P_CUIF_LTE_NCM_CC_RPT_RSTP_MAN_P1_RX1_CELL9_MAN                                   (0)
#define L_CUIF_LTE_NCM_CC_RPT_RSTP_MAN_P1_RX1_CELL9_MAN                                   (32)
#define M_CUIF_LTE_NCM_CC_RPT_RSTP_MAN_P1_RX1_CELL9_MAN                                   (0xFFFFFFFF)

// ---------- RSTP_EXP_P1_CELL9 bit-field ----------
#define P_CUIF_LTE_NCM_CC_RPT_RSTP_EXP_P1_CELL9_RX1                                       (16)
#define L_CUIF_LTE_NCM_CC_RPT_RSTP_EXP_P1_CELL9_RX1                                       (16)
#define M_CUIF_LTE_NCM_CC_RPT_RSTP_EXP_P1_CELL9_RX1                                       (0xFFFF0000)
#define P_CUIF_LTE_NCM_CC_RPT_RSTP_EXP_P1_CELL9_RX0                                       (0)
#define L_CUIF_LTE_NCM_CC_RPT_RSTP_EXP_P1_CELL9_RX0                                       (16)
#define M_CUIF_LTE_NCM_CC_RPT_RSTP_EXP_P1_CELL9_RX0                                       (0x0000FFFF)

// ---------- RSTP_MAN_P0_RX0_CELL10 bit-field ----------
#define P_CUIF_LTE_NCM_CC_RPT_RSTP_MAN_P0_RX0_CELL10_MAN                                  (0)
#define L_CUIF_LTE_NCM_CC_RPT_RSTP_MAN_P0_RX0_CELL10_MAN                                  (32)
#define M_CUIF_LTE_NCM_CC_RPT_RSTP_MAN_P0_RX0_CELL10_MAN                                  (0xFFFFFFFF)

// ---------- RSTP_MAN_P0_RX1_CELL10 bit-field ----------
#define P_CUIF_LTE_NCM_CC_RPT_RSTP_MAN_P0_RX1_CELL10_MAN                                  (0)
#define L_CUIF_LTE_NCM_CC_RPT_RSTP_MAN_P0_RX1_CELL10_MAN                                  (32)
#define M_CUIF_LTE_NCM_CC_RPT_RSTP_MAN_P0_RX1_CELL10_MAN                                  (0xFFFFFFFF)

// ---------- RSTP_EXP_P0_CELL10 bit-field ----------
#define P_CUIF_LTE_NCM_CC_RPT_RSTP_EXP_P0_CELL10_RX1                                      (16)
#define L_CUIF_LTE_NCM_CC_RPT_RSTP_EXP_P0_CELL10_RX1                                      (16)
#define M_CUIF_LTE_NCM_CC_RPT_RSTP_EXP_P0_CELL10_RX1                                      (0xFFFF0000)
#define P_CUIF_LTE_NCM_CC_RPT_RSTP_EXP_P0_CELL10_RX0                                      (0)
#define L_CUIF_LTE_NCM_CC_RPT_RSTP_EXP_P0_CELL10_RX0                                      (16)
#define M_CUIF_LTE_NCM_CC_RPT_RSTP_EXP_P0_CELL10_RX0                                      (0x0000FFFF)

// ---------- RSTP_MAN_P1_RX0_CELL10 bit-field ----------
#define P_CUIF_LTE_NCM_CC_RPT_RSTP_MAN_P1_RX0_CELL10_MAN                                  (0)
#define L_CUIF_LTE_NCM_CC_RPT_RSTP_MAN_P1_RX0_CELL10_MAN                                  (32)
#define M_CUIF_LTE_NCM_CC_RPT_RSTP_MAN_P1_RX0_CELL10_MAN                                  (0xFFFFFFFF)

// ---------- RSTP_MAN_P1_RX1_CELL10 bit-field ----------
#define P_CUIF_LTE_NCM_CC_RPT_RSTP_MAN_P1_RX1_CELL10_MAN                                  (0)
#define L_CUIF_LTE_NCM_CC_RPT_RSTP_MAN_P1_RX1_CELL10_MAN                                  (32)
#define M_CUIF_LTE_NCM_CC_RPT_RSTP_MAN_P1_RX1_CELL10_MAN                                  (0xFFFFFFFF)

// ---------- RSTP_EXP_P1_CELL10 bit-field ----------
#define P_CUIF_LTE_NCM_CC_RPT_RSTP_EXP_P1_CELL10_RX1                                      (16)
#define L_CUIF_LTE_NCM_CC_RPT_RSTP_EXP_P1_CELL10_RX1                                      (16)
#define M_CUIF_LTE_NCM_CC_RPT_RSTP_EXP_P1_CELL10_RX1                                      (0xFFFF0000)
#define P_CUIF_LTE_NCM_CC_RPT_RSTP_EXP_P1_CELL10_RX0                                      (0)
#define L_CUIF_LTE_NCM_CC_RPT_RSTP_EXP_P1_CELL10_RX0                                      (16)
#define M_CUIF_LTE_NCM_CC_RPT_RSTP_EXP_P1_CELL10_RX0                                      (0x0000FFFF)

// ---------- RSTP_MAN_P0_RX0_CELL11 bit-field ----------
#define P_CUIF_LTE_NCM_CC_RPT_RSTP_MAN_P0_RX0_CELL11_MAN                                  (0)
#define L_CUIF_LTE_NCM_CC_RPT_RSTP_MAN_P0_RX0_CELL11_MAN                                  (32)
#define M_CUIF_LTE_NCM_CC_RPT_RSTP_MAN_P0_RX0_CELL11_MAN                                  (0xFFFFFFFF)

// ---------- RSTP_MAN_P0_RX1_CELL11 bit-field ----------
#define P_CUIF_LTE_NCM_CC_RPT_RSTP_MAN_P0_RX1_CELL11_MAN                                  (0)
#define L_CUIF_LTE_NCM_CC_RPT_RSTP_MAN_P0_RX1_CELL11_MAN                                  (32)
#define M_CUIF_LTE_NCM_CC_RPT_RSTP_MAN_P0_RX1_CELL11_MAN                                  (0xFFFFFFFF)

// ---------- RSTP_EXP_P0_CELL11 bit-field ----------
#define P_CUIF_LTE_NCM_CC_RPT_RSTP_EXP_P0_CELL11_RX1                                      (16)
#define L_CUIF_LTE_NCM_CC_RPT_RSTP_EXP_P0_CELL11_RX1                                      (16)
#define M_CUIF_LTE_NCM_CC_RPT_RSTP_EXP_P0_CELL11_RX1                                      (0xFFFF0000)
#define P_CUIF_LTE_NCM_CC_RPT_RSTP_EXP_P0_CELL11_RX0                                      (0)
#define L_CUIF_LTE_NCM_CC_RPT_RSTP_EXP_P0_CELL11_RX0                                      (16)
#define M_CUIF_LTE_NCM_CC_RPT_RSTP_EXP_P0_CELL11_RX0                                      (0x0000FFFF)

// ---------- RSTP_MAN_P1_RX0_CELL11 bit-field ----------
#define P_CUIF_LTE_NCM_CC_RPT_RSTP_MAN_P1_RX0_CELL11_MAN                                  (0)
#define L_CUIF_LTE_NCM_CC_RPT_RSTP_MAN_P1_RX0_CELL11_MAN                                  (32)
#define M_CUIF_LTE_NCM_CC_RPT_RSTP_MAN_P1_RX0_CELL11_MAN                                  (0xFFFFFFFF)

// ---------- RSTP_MAN_P1_RX1_CELL11 bit-field ----------
#define P_CUIF_LTE_NCM_CC_RPT_RSTP_MAN_P1_RX1_CELL11_MAN                                  (0)
#define L_CUIF_LTE_NCM_CC_RPT_RSTP_MAN_P1_RX1_CELL11_MAN                                  (32)
#define M_CUIF_LTE_NCM_CC_RPT_RSTP_MAN_P1_RX1_CELL11_MAN                                  (0xFFFFFFFF)

// ---------- RSTP_EXP_P1_CELL11 bit-field ----------
#define P_CUIF_LTE_NCM_CC_RPT_RSTP_EXP_P1_CELL11_RX1                                      (16)
#define L_CUIF_LTE_NCM_CC_RPT_RSTP_EXP_P1_CELL11_RX1                                      (16)
#define M_CUIF_LTE_NCM_CC_RPT_RSTP_EXP_P1_CELL11_RX1                                      (0xFFFF0000)
#define P_CUIF_LTE_NCM_CC_RPT_RSTP_EXP_P1_CELL11_RX0                                      (0)
#define L_CUIF_LTE_NCM_CC_RPT_RSTP_EXP_P1_CELL11_RX0                                      (16)
#define M_CUIF_LTE_NCM_CC_RPT_RSTP_EXP_P1_CELL11_RX0                                      (0x0000FFFF)

#endif // __CUIF_LTE_NCM_CC_RPT_H__
