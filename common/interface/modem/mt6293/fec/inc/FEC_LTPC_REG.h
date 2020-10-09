#ifndef __FEC_LTPC_REG__
#define __FEC_LTPC_REG__

#if defined(__USIP_FEC_PAE__)
#define FEC_WLTPC_TPC_REG_BASE                                                  (0xBF600000) //fake 
#define FEC_LTPC_TXK_SLV_REG_P1_BASE                                            (0xBF458000) //fake TXK LTE P1
#define FEC_LTPC_TXK_SLV_REG_BASE                                               (0xBF448000) //fake
#define FEC_LTPC_GC_REG_REG_BASE                                                (0xBF400000) //fake
#else
#define FEC_WLTPC_TPC_REG_BASE                                                  (0xB8380000) //tpc_reg.xls
#define FEC_LTPC_TXK_SLV_REG_P1_BASE                                            (0xB8458000) //TXK LTE P1
#define FEC_LTPC_TXK_SLV_REG_BASE                                               (0xB8448000) //TXK LTE P0
#define FEC_LTPC_GC_REG_REG_BASE                                                (0xB8240000) //tpc_gc_guif_4GLTE_XXXXXXXX.xls
#endif

/* TPC REG Start */
#define FEC_WLTPC_TPC_RATE                                                      ((APBADDR32)(FEC_WLTPC_TPC_REG_BASE + 0x0000))
#define FEC_WLTPC_TPC_GC_CON                                                    ((APBADDR32)(FEC_WLTPC_TPC_REG_BASE + 0x0020))
#define FEC_WLTPC_TPC_GC_DBG_CON0                                               ((APBADDR32)(FEC_WLTPC_TPC_REG_BASE + 0x0024))
#define FEC_WLTPC_TPC_GC_DBG_CON1                                               ((APBADDR32)(FEC_WLTPC_TPC_REG_BASE + 0x0028))
#define FEC_WLTPC_TPC_TRG_CON                                                   ((APBADDR32)(FEC_WLTPC_TPC_REG_BASE + 0x0040))
#define FEC_WLTPC_TPC_TQ_TRG                                                    ((APBADDR32)(FEC_WLTPC_TPC_REG_BASE + 0x0050))
#define FEC_WLTPC_TPC_EXTIF_CON                                                 ((APBADDR32)(FEC_WLTPC_TPC_REG_BASE + 0x0080))
#define FEC_WLTPC_TPC_TQ_RACH_JUMP_ADDR0                                        ((APBADDR32)(FEC_WLTPC_TPC_REG_BASE + 0x0100))
#define FEC_WLTPC_TPC_TQ_RACH_JUMP_ADDR1                                        ((APBADDR32)(FEC_WLTPC_TPC_REG_BASE + 0x0104))
#define FEC_WLTPC_TPC_TQ_DCH_JUMP_ADDR                                          ((APBADDR32)(FEC_WLTPC_TPC_REG_BASE + 0x0110))
#define FEC_WLTPC_TPC_GC_TRG(n)                                                 ((APBADDR32)(FEC_WLTPC_TPC_REG_BASE + 0x0200 + (n)* 4))   //n is from 0 to 23
#define FEC_WLTPC_TPC_DMA_TRG(n)                                                ((APBADDR32)(FEC_WLTPC_TPC_REG_BASE + 0x0300 + (n)* 4))   //n is from 0 to 8
#define FEC_WLTPC_TPC_SW_IRQ0_CON                                               ((APBADDR32)(FEC_WLTPC_TPC_REG_BASE + 0x0400))
#define FEC_WLTPC_TPC_SW_IRQ0_i_CON(n)                                          ((APBADDR32)(FEC_WLTPC_TPC_REG_BASE + 0x0408 + (n)* 4))   //n is from 0 to 5
#define FEC_WLTPC_TPC_SW_IRQ1_CON                                               ((APBADDR32)(FEC_WLTPC_TPC_REG_BASE + 0x0420))
#define FEC_WLTPC_TPC_SW_IRQ1_i_CON(n)                                          ((APBADDR32)(FEC_WLTPC_TPC_REG_BASE + 0x0428 + (n)* 4))   //n is from 0 to 5
#define FEC_WLTPC_TPC_SW_IRQ2_CON                                               ((APBADDR32)(FEC_WLTPC_TPC_REG_BASE + 0x0440))
#define FEC_WLTPC_TPC_SW_IRQ2_i_CON(n)                                          ((APBADDR32)(FEC_WLTPC_TPC_REG_BASE + 0x0448 + (n)* 4))   //n is from 0 to 5
#define FEC_WLTPC_TPC_SW_IRQ3_CON                                               ((APBADDR32)(FEC_WLTPC_TPC_REG_BASE + 0x0460))
#define FEC_WLTPC_TPC_SW_IRQ3_i_CON(n)                                          ((APBADDR32)(FEC_WLTPC_TPC_REG_BASE + 0x0468 + (n)* 4))   //n is from 0 to 5
#define FEC_WLTPC_TPC_SW_IRQ4_CON                                               ((APBADDR32)(FEC_WLTPC_TPC_REG_BASE + 0x0480))
#define FEC_WLTPC_TPC_SW_IRQ4_i_CON(n)                                          ((APBADDR32)(FEC_WLTPC_TPC_REG_BASE + 0x0488 + (n)* 4))   //n is from 0 to 5
#define FEC_WLTPC_TPC_SW_IRQ5_CON                                               ((APBADDR32)(FEC_WLTPC_TPC_REG_BASE + 0x04A0))
#define FEC_WLTPC_TPC_SW_IRQ5_i_CON(n)                                          ((APBADDR32)(FEC_WLTPC_TPC_REG_BASE + 0x04A8 + (n)* 4))   //n is from 0 to 5
#define FEC_WLTPC_TPC_GC_IRQ0_CON                                               ((APBADDR32)(FEC_WLTPC_TPC_REG_BASE + 0x0500))
#define FEC_WLTPC_TPC_EXTIF_ADD_OFFSET                                          ((APBADDR32)(FEC_WLTPC_TPC_REG_BASE + 0x0800))
#define FEC_WLTPC_TPC_EXTIF_ADD_OFFSET0_P0                                      ((APBADDR32)(FEC_WLTPC_TPC_REG_BASE + 0x0810))
#define FEC_WLTPC_TPC_EXTIF_ADD_OFFSET1_P0                                      ((APBADDR32)(FEC_WLTPC_TPC_REG_BASE + 0x0814))
#define FEC_WLTPC_TPC_EXTIF_ADD_OFFSET2_P0                                      ((APBADDR32)(FEC_WLTPC_TPC_REG_BASE + 0x0818))
#define FEC_WLTPC_TPC_EXTIF_ADD_OFFSET0_P1                                      ((APBADDR32)(FEC_WLTPC_TPC_REG_BASE + 0x0830))
#define FEC_WLTPC_TPC_EXTIF_ADD_OFFSET1_P1                                      ((APBADDR32)(FEC_WLTPC_TPC_REG_BASE + 0x0834))
#define FEC_WLTPC_TPC_EXTIF_ADD_OFFSET2_P1                                      ((APBADDR32)(FEC_WLTPC_TPC_REG_BASE + 0x0838))
#define FEC_WLTPC_TPC_W_TTR_TIME_MON                                            ((APBADDR32)(FEC_WLTPC_TPC_REG_BASE + 0x0900))
#define FEC_WLTPC_TPC_L_TIMER_TIME_MON                                          ((APBADDR32)(FEC_WLTPC_TPC_REG_BASE + 0x0904))
#define FEC_WLTPC_TPC_C1X_TTR_TIME_MON                                          ((APBADDR32)(FEC_WLTPC_TPC_REG_BASE + 0x0908))
#define FEC_WLTPC_TPC_CDO_TTR_TIME_MON                                          ((APBADDR32)(FEC_WLTPC_TPC_REG_BASE + 0x090c))
#define FEC_WLTPC_TPC_TQ_MON(n)                                                 ((APBADDR32)(FEC_WLTPC_TPC_REG_BASE + 0x0920 + (n)* 4))   //n is from 0 to 3
#define FEC_WLTPC_TPC_P0_LO_MON                                                 ((APBADDR32)(FEC_WLTPC_TPC_REG_BASE + 0x0930))
#define FEC_WLTPC_TPC_P1_LO_MON                                                 ((APBADDR32)(FEC_WLTPC_TPC_REG_BASE + 0x0934))
#define FEC_WLTPC_TPC_TQ_CNT_MON0(n)                                            ((APBADDR32)(FEC_WLTPC_TPC_REG_BASE + 0x0940 + (n)* 4))   //n is from 0 to 3
#define FEC_WLTPC_TPC_TQ_CNT_MON1(n)                                            ((APBADDR32)(FEC_WLTPC_TPC_REG_BASE + 0x0950 + (n)* 4))   //n is from 0 to 3
#define FEC_WLTPC_TPC_TQ_CNT_MON2(n)                                            ((APBADDR32)(FEC_WLTPC_TPC_REG_BASE + 0x0960 + (n)* 4))   //n is from 0 to 3
#define FEC_WLTPC_TPC_TQ_CNT_MON3(n)                                            ((APBADDR32)(FEC_WLTPC_TPC_REG_BASE + 0x0970 + (n)* 4))   //n is from 0 to 3
#define FEC_WLTPC_TPC_MIPI_BSI_REQ_ACK_MON                                      ((APBADDR32)(FEC_WLTPC_TPC_REG_BASE + 0x0980))
#define FEC_WLTPC_TPC_MIPI_DATA_MON0                                            ((APBADDR32)(FEC_WLTPC_TPC_REG_BASE + 0x0984))
#define FEC_WLTPC_TPC_MIPI_DATA_MON1                                            ((APBADDR32)(FEC_WLTPC_TPC_REG_BASE + 0x0988))
#define FEC_WLTPC_TPC_MIPI_DATA_MON2                                            ((APBADDR32)(FEC_WLTPC_TPC_REG_BASE + 0x098C))
#define FEC_WLTPC_TPC_MIPI_DATA_MON3                                            ((APBADDR32)(FEC_WLTPC_TPC_REG_BASE + 0x0990))
#define FEC_WLTPC_TPC_MIPI_DATA_MON4                                            ((APBADDR32)(FEC_WLTPC_TPC_REG_BASE + 0x0994))
#define FEC_WLTPC_TPC_MIPI_DATA_MON5                                            ((APBADDR32)(FEC_WLTPC_TPC_REG_BASE + 0x0998))
#define FEC_WLTPC_TPC_MIPI_DATA_MON6                                            ((APBADDR32)(FEC_WLTPC_TPC_REG_BASE + 0x099C))
#define FEC_WLTPC_TPC_MIPI_DATA_MON7                                            ((APBADDR32)(FEC_WLTPC_TPC_REG_BASE + 0x09A0))
#define FEC_WLTPC_TPC_BSI_DATA_RFIC_MON                                         ((APBADDR32)(FEC_WLTPC_TPC_REG_BASE + 0x09B4))
#define FEC_WLTPC_TPC_BSI_DATA_PMIC_MON                                         ((APBADDR32)(FEC_WLTPC_TPC_REG_BASE + 0x09B8))
#define FEC_WLTPC_GC_R0_DBG_MON                                                 ((APBADDR32)(FEC_WLTPC_TPC_REG_BASE + 0x09D0))
#define FEC_WLTPC_GC_R1_DBG_MON                                                 ((APBADDR32)(FEC_WLTPC_TPC_REG_BASE + 0x09D4))
#define FEC_WLTPC_GC_R2_DBG_MON                                                 ((APBADDR32)(FEC_WLTPC_TPC_REG_BASE + 0x09D8))
#define FEC_WLTPC_GC_R3_DBG_MON                                                 ((APBADDR32)(FEC_WLTPC_TPC_REG_BASE + 0x09DC))
#define FEC_WLTPC_GC_AR0_DBG_MON                                                ((APBADDR32)(FEC_WLTPC_TPC_REG_BASE + 0x09E0))
#define FEC_WLTPC_GC_AR1_DBG_MON                                                ((APBADDR32)(FEC_WLTPC_TPC_REG_BASE + 0x09E4))
#define FEC_WLTPC_GC_BC_DBG_MON                                                 ((APBADDR32)(FEC_WLTPC_TPC_REG_BASE + 0x09E8))
#define FEC_WLTPC_GC_CORE_DEC_DATA_DBG_MON                                      ((APBADDR32)(FEC_WLTPC_TPC_REG_BASE + 0x09EC))
#define FEC_WLTPC_TPC_GC_DBG_STATUS_MON0                                        ((APBADDR32)(FEC_WLTPC_TPC_REG_BASE + 0x09F0))
#define FEC_WLTPC_TPC_GC_DBG_STATUS_MON1                                        ((APBADDR32)(FEC_WLTPC_TPC_REG_BASE + 0x09F4))
#define FEC_WLTPC_TPC_IRQ_MON                                                   ((APBADDR32)(FEC_WLTPC_TPC_REG_BASE + 0x0B00))

#define FEC_WLTPC_TPC_SW_IRQ0_CON_TPC_TRG_SW_IRQ0_CLR_TGL_LSB                   (8)
#define FEC_WLTPC_TPC_SW_IRQ0_CON_TPC_TRG_SW_IRQ0_CLR_TGL_WIDTH                 (6)
#define FEC_WLTPC_TPC_SW_IRQ0_CON_TPC_TRG_SW_IRQ0_CLR_TGL_MASK                  (0x00003F00)

#define FEC_WLTPC_TPC_SW_IRQ0_CON_TPC_TRG_SW_IRQ0_STA_LSB                       (0)
#define FEC_WLTPC_TPC_SW_IRQ0_CON_TPC_TRG_SW_IRQ0_STA_WIDTH                     (6)
#define FEC_WLTPC_TPC_SW_IRQ0_CON_TPC_TRG_SW_IRQ0_STA_MASK                      (0x0000003F)

#define FEC_WLTPC_TPC_SW_IRQ0_i_CON_TPC_TRG_SW_IRQ0_CNT_LSB                     (28)
#define FEC_WLTPC_TPC_SW_IRQ0_i_CON_TPC_TRG_SW_IRQ0_CNT_WIDTH                   (2)
#define FEC_WLTPC_TPC_SW_IRQ0_i_CON_TPC_TRG_SW_IRQ0_CNT_MASK                    (0x30000000)

#define FEC_WLTPC_TPC_SW_IRQ0_i_CON_TPC_TRG_SW_IRQ0_IMM_TGL_LSB                 (22)
#define FEC_WLTPC_TPC_SW_IRQ0_i_CON_TPC_TRG_SW_IRQ0_IMM_TGL_WIDTH               (1)
#define FEC_WLTPC_TPC_SW_IRQ0_i_CON_TPC_TRG_SW_IRQ0_IMM_TGL_MASK                (0x00400000)
#define FEC_WLTPC_TPC_SW_IRQ0_i_CON_TPC_TRG_SW_IRQ0_IMM_TGL_BIT                 (0x00400000)

#define FEC_WLTPC_TPC_SW_IRQ0_i_CON_TPC_TRG_SW_IRQ0_TGL_LSB                     (21)
#define FEC_WLTPC_TPC_SW_IRQ0_i_CON_TPC_TRG_SW_IRQ0_TGL_WIDTH                   (1)
#define FEC_WLTPC_TPC_SW_IRQ0_i_CON_TPC_TRG_SW_IRQ0_TGL_MASK                    (0x00200000)
#define FEC_WLTPC_TPC_SW_IRQ0_i_CON_TPC_TRG_SW_IRQ0_TGL_BIT                     (0x00200000)

#define FEC_WLTPC_TPC_SW_IRQ0_i_CON_TPC_TRG_SW_IRQ0_EN_LSB                      (20)
#define FEC_WLTPC_TPC_SW_IRQ0_i_CON_TPC_TRG_SW_IRQ0_EN_WIDTH                    (1)
#define FEC_WLTPC_TPC_SW_IRQ0_i_CON_TPC_TRG_SW_IRQ0_EN_MASK                     (0x00100000)
#define FEC_WLTPC_TPC_SW_IRQ0_i_CON_TPC_TRG_SW_IRQ0_EN_BIT                      (0x00100000)

#define FEC_WLTPC_TPC_SW_IRQ0_i_CON_TPC_TRG_SW_IRQ0_TIME_LSB                    (0)
#define FEC_WLTPC_TPC_SW_IRQ0_i_CON_TPC_TRG_SW_IRQ0_TIME_WIDTH                  (16)
#define FEC_WLTPC_TPC_SW_IRQ0_i_CON_TPC_TRG_SW_IRQ0_TIME_MASK                   (0x0000FFFF)

#define FEC_WLTPC_TPC_SW_IRQ1_CON_TPC_TRG_SW_IRQ1_CLR_TGL_LSB                   (8)
#define FEC_WLTPC_TPC_SW_IRQ1_CON_TPC_TRG_SW_IRQ1_CLR_TGL_WIDTH                 (6)
#define FEC_WLTPC_TPC_SW_IRQ1_CON_TPC_TRG_SW_IRQ1_CLR_TGL_MASK                  (0x00003F00)

#define FEC_WLTPC_TPC_SW_IRQ1_CON_TPC_TRG_SW_IRQ1_STA_LSB                       (0)
#define FEC_WLTPC_TPC_SW_IRQ1_CON_TPC_TRG_SW_IRQ1_STA_WIDTH                     (6)
#define FEC_WLTPC_TPC_SW_IRQ1_CON_TPC_TRG_SW_IRQ1_STA_MASK                      (0x0000003F)

#define FEC_WLTPC_TPC_SW_IRQ1_i_CON_TPC_TRG_SW_IRQ1_CNT_LSB                     (28)
#define FEC_WLTPC_TPC_SW_IRQ1_i_CON_TPC_TRG_SW_IRQ1_CNT_WIDTH                   (2)
#define FEC_WLTPC_TPC_SW_IRQ1_i_CON_TPC_TRG_SW_IRQ1_CNT_MASK                    (0x30000000)

#define FEC_WLTPC_TPC_SW_IRQ1_i_CON_TPC_TRG_SW_IRQ1_IMM_TGL_LSB                 (22)
#define FEC_WLTPC_TPC_SW_IRQ1_i_CON_TPC_TRG_SW_IRQ1_IMM_TGL_WIDTH               (1)
#define FEC_WLTPC_TPC_SW_IRQ1_i_CON_TPC_TRG_SW_IRQ1_IMM_TGL_MASK                (0x00400000)
#define FEC_WLTPC_TPC_SW_IRQ1_i_CON_TPC_TRG_SW_IRQ1_IMM_TGL_BIT                 (0x00400000)

#define FEC_WLTPC_TPC_SW_IRQ1_i_CON_TPC_TRG_SW_IRQ1_TGL_LSB                     (21)
#define FEC_WLTPC_TPC_SW_IRQ1_i_CON_TPC_TRG_SW_IRQ1_TGL_WIDTH                   (1)
#define FEC_WLTPC_TPC_SW_IRQ1_i_CON_TPC_TRG_SW_IRQ1_TGL_MASK                    (0x00200000)
#define FEC_WLTPC_TPC_SW_IRQ1_i_CON_TPC_TRG_SW_IRQ1_TGL_BIT                     (0x00200000)

#define FEC_WLTPC_TPC_SW_IRQ1_i_CON_TPC_TRG_SW_IRQ1_EN_LSB                      (20)
#define FEC_WLTPC_TPC_SW_IRQ1_i_CON_TPC_TRG_SW_IRQ1_EN_WIDTH                    (1)
#define FEC_WLTPC_TPC_SW_IRQ1_i_CON_TPC_TRG_SW_IRQ1_EN_MASK                     (0x00100000)
#define FEC_WLTPC_TPC_SW_IRQ1_i_CON_TPC_TRG_SW_IRQ1_EN_BIT                      (0x00100000)

#define FEC_WLTPC_TPC_SW_IRQ1_i_CON_TPC_TRG_SW_IRQ1_TIME_LSB                    (0)
#define FEC_WLTPC_TPC_SW_IRQ1_i_CON_TPC_TRG_SW_IRQ1_TIME_WIDTH                  (16)
#define FEC_WLTPC_TPC_SW_IRQ1_i_CON_TPC_TRG_SW_IRQ1_TIME_MASK                   (0x0000FFFF)

#define FEC_WLTPC_TPC_SW_IRQ2_CON_TPC_TRG_SW_IRQ2_CLR_TGL_LSB                   (8)
#define FEC_WLTPC_TPC_SW_IRQ2_CON_TPC_TRG_SW_IRQ2_CLR_TGL_WIDTH                 (6)
#define FEC_WLTPC_TPC_SW_IRQ2_CON_TPC_TRG_SW_IRQ2_CLR_TGL_MASK                  (0x00003F00)

#define FEC_WLTPC_TPC_SW_IRQ2_CON_TPC_TRG_SW_IRQ2_STA_LSB                       (0)
#define FEC_WLTPC_TPC_SW_IRQ2_CON_TPC_TRG_SW_IRQ2_STA_WIDTH                     (6)
#define FEC_WLTPC_TPC_SW_IRQ2_CON_TPC_TRG_SW_IRQ2_STA_MASK                      (0x0000003F)

#define FEC_WLTPC_TPC_SW_IRQ2_i_CON_TPC_TRG_SW_IRQ2_CNT_LSB                     (28)
#define FEC_WLTPC_TPC_SW_IRQ2_i_CON_TPC_TRG_SW_IRQ2_CNT_WIDTH                   (2)
#define FEC_WLTPC_TPC_SW_IRQ2_i_CON_TPC_TRG_SW_IRQ2_CNT_MASK                    (0x30000000)

#define FEC_WLTPC_TPC_SW_IRQ2_i_CON_TPC_TRG_SW_IRQ2_IMM_TGL_LSB                 (22)
#define FEC_WLTPC_TPC_SW_IRQ2_i_CON_TPC_TRG_SW_IRQ2_IMM_TGL_WIDTH               (1)
#define FEC_WLTPC_TPC_SW_IRQ2_i_CON_TPC_TRG_SW_IRQ2_IMM_TGL_MASK                (0x00400000)
#define FEC_WLTPC_TPC_SW_IRQ2_i_CON_TPC_TRG_SW_IRQ2_IMM_TGL_BIT                 (0x00400000)

#define FEC_WLTPC_TPC_SW_IRQ2_i_CON_TPC_TRG_SW_IRQ2_TGL_LSB                     (21)
#define FEC_WLTPC_TPC_SW_IRQ2_i_CON_TPC_TRG_SW_IRQ2_TGL_WIDTH                   (1)
#define FEC_WLTPC_TPC_SW_IRQ2_i_CON_TPC_TRG_SW_IRQ2_TGL_MASK                    (0x00200000)
#define FEC_WLTPC_TPC_SW_IRQ2_i_CON_TPC_TRG_SW_IRQ2_TGL_BIT                     (0x00200000)

#define FEC_WLTPC_TPC_SW_IRQ2_i_CON_TPC_TRG_SW_IRQ2_EN_LSB                      (20)
#define FEC_WLTPC_TPC_SW_IRQ2_i_CON_TPC_TRG_SW_IRQ2_EN_WIDTH                    (1)
#define FEC_WLTPC_TPC_SW_IRQ2_i_CON_TPC_TRG_SW_IRQ2_EN_MASK                     (0x00100000)
#define FEC_WLTPC_TPC_SW_IRQ2_i_CON_TPC_TRG_SW_IRQ2_EN_BIT                      (0x00100000)

#define FEC_WLTPC_TPC_SW_IRQ2_i_CON_TPC_TRG_SW_IRQ2_TIME_LSB                    (0)
#define FEC_WLTPC_TPC_SW_IRQ2_i_CON_TPC_TRG_SW_IRQ2_TIME_WIDTH                  (16)
#define FEC_WLTPC_TPC_SW_IRQ2_i_CON_TPC_TRG_SW_IRQ2_TIME_MASK                   (0x0000FFFF)

#define FEC_WLTPC_TPC_SW_IRQ3_CON_TPC_TRG_SW_IRQ3_CLR_TGL_LSB                   (8)
#define FEC_WLTPC_TPC_SW_IRQ3_CON_TPC_TRG_SW_IRQ3_CLR_TGL_WIDTH                 (6)
#define FEC_WLTPC_TPC_SW_IRQ3_CON_TPC_TRG_SW_IRQ3_CLR_TGL_MASK                  (0x00003F00)

#define FEC_WLTPC_TPC_SW_IRQ3_CON_TPC_TRG_SW_IRQ3_STA_LSB                       (0)
#define FEC_WLTPC_TPC_SW_IRQ3_CON_TPC_TRG_SW_IRQ3_STA_WIDTH                     (6)
#define FEC_WLTPC_TPC_SW_IRQ3_CON_TPC_TRG_SW_IRQ3_STA_MASK                      (0x0000003F)

#define FEC_WLTPC_TPC_SW_IRQ3_i_CON_TPC_TRG_SW_IRQ3_CNT_LSB                     (28)
#define FEC_WLTPC_TPC_SW_IRQ3_i_CON_TPC_TRG_SW_IRQ3_CNT_WIDTH                   (2)
#define FEC_WLTPC_TPC_SW_IRQ3_i_CON_TPC_TRG_SW_IRQ3_CNT_MASK                    (0x30000000)

#define FEC_WLTPC_TPC_SW_IRQ3_i_CON_TPC_TRG_SW_IRQ3_IMM_TGL_LSB                 (22)
#define FEC_WLTPC_TPC_SW_IRQ3_i_CON_TPC_TRG_SW_IRQ3_IMM_TGL_WIDTH               (1)
#define FEC_WLTPC_TPC_SW_IRQ3_i_CON_TPC_TRG_SW_IRQ3_IMM_TGL_MASK                (0x00400000)
#define FEC_WLTPC_TPC_SW_IRQ3_i_CON_TPC_TRG_SW_IRQ3_IMM_TGL_BIT                 (0x00400000)

#define FEC_WLTPC_TPC_SW_IRQ3_i_CON_TPC_TRG_SW_IRQ3_TGL_LSB                     (21)
#define FEC_WLTPC_TPC_SW_IRQ3_i_CON_TPC_TRG_SW_IRQ3_TGL_WIDTH                   (1)
#define FEC_WLTPC_TPC_SW_IRQ3_i_CON_TPC_TRG_SW_IRQ3_TGL_MASK                    (0x00200000)
#define FEC_WLTPC_TPC_SW_IRQ3_i_CON_TPC_TRG_SW_IRQ3_TGL_BIT                     (0x00200000)

#define FEC_WLTPC_TPC_SW_IRQ3_i_CON_TPC_TRG_SW_IRQ3_EN_LSB                      (20)
#define FEC_WLTPC_TPC_SW_IRQ3_i_CON_TPC_TRG_SW_IRQ3_EN_WIDTH                    (1)
#define FEC_WLTPC_TPC_SW_IRQ3_i_CON_TPC_TRG_SW_IRQ3_EN_MASK                     (0x00100000)
#define FEC_WLTPC_TPC_SW_IRQ3_i_CON_TPC_TRG_SW_IRQ3_EN_BIT                      (0x00100000)

#define FEC_WLTPC_TPC_SW_IRQ3_i_CON_TPC_TRG_SW_IRQ3_TIME_LSB                    (0)
#define FEC_WLTPC_TPC_SW_IRQ3_i_CON_TPC_TRG_SW_IRQ3_TIME_WIDTH                  (16)
#define FEC_WLTPC_TPC_SW_IRQ3_i_CON_TPC_TRG_SW_IRQ3_TIME_MASK                   (0x0000FFFF)

#define FEC_WLTPC_TPC_SW_IRQ4_CON_TPC_TRG_SW_IRQ4_CLR_TGL_LSB                   (8)
#define FEC_WLTPC_TPC_SW_IRQ4_CON_TPC_TRG_SW_IRQ4_CLR_TGL_WIDTH                 (6)
#define FEC_WLTPC_TPC_SW_IRQ4_CON_TPC_TRG_SW_IRQ4_CLR_TGL_MASK                  (0x00003F00)

#define FEC_WLTPC_TPC_SW_IRQ4_CON_TPC_TRG_SW_IRQ4_STA_LSB                       (0)
#define FEC_WLTPC_TPC_SW_IRQ4_CON_TPC_TRG_SW_IRQ4_STA_WIDTH                     (6)
#define FEC_WLTPC_TPC_SW_IRQ4_CON_TPC_TRG_SW_IRQ4_STA_MASK                      (0x0000003F)

#define FEC_WLTPC_TPC_SW_IRQ4_i_CON_TPC_TRG_SW_IRQ4_CNT_LSB                     (28)
#define FEC_WLTPC_TPC_SW_IRQ4_i_CON_TPC_TRG_SW_IRQ4_CNT_WIDTH                   (2)
#define FEC_WLTPC_TPC_SW_IRQ4_i_CON_TPC_TRG_SW_IRQ4_CNT_MASK                    (0x30000000)

#define FEC_WLTPC_TPC_SW_IRQ4_i_CON_TPC_TRG_SW_IRQ4_IMM_TGL_LSB                 (22)
#define FEC_WLTPC_TPC_SW_IRQ4_i_CON_TPC_TRG_SW_IRQ4_IMM_TGL_WIDTH               (1)
#define FEC_WLTPC_TPC_SW_IRQ4_i_CON_TPC_TRG_SW_IRQ4_IMM_TGL_MASK                (0x00400000)
#define FEC_WLTPC_TPC_SW_IRQ4_i_CON_TPC_TRG_SW_IRQ4_IMM_TGL_BIT                 (0x00400000)

#define FEC_WLTPC_TPC_SW_IRQ4_i_CON_TPC_TRG_SW_IRQ4_TGL_LSB                     (21)
#define FEC_WLTPC_TPC_SW_IRQ4_i_CON_TPC_TRG_SW_IRQ4_TGL_WIDTH                   (1)
#define FEC_WLTPC_TPC_SW_IRQ4_i_CON_TPC_TRG_SW_IRQ4_TGL_MASK                    (0x00200000)
#define FEC_WLTPC_TPC_SW_IRQ4_i_CON_TPC_TRG_SW_IRQ4_TGL_BIT                     (0x00200000)

#define FEC_WLTPC_TPC_SW_IRQ4_i_CON_TPC_TRG_SW_IRQ4_EN_LSB                      (20)
#define FEC_WLTPC_TPC_SW_IRQ4_i_CON_TPC_TRG_SW_IRQ4_EN_WIDTH                    (1)
#define FEC_WLTPC_TPC_SW_IRQ4_i_CON_TPC_TRG_SW_IRQ4_EN_MASK                     (0x00100000)
#define FEC_WLTPC_TPC_SW_IRQ4_i_CON_TPC_TRG_SW_IRQ4_EN_BIT                      (0x00100000)

#define FEC_WLTPC_TPC_SW_IRQ4_i_CON_TPC_TRG_SW_IRQ4_TIME_LSB                    (0)
#define FEC_WLTPC_TPC_SW_IRQ4_i_CON_TPC_TRG_SW_IRQ4_TIME_WIDTH                  (16)
#define FEC_WLTPC_TPC_SW_IRQ4_i_CON_TPC_TRG_SW_IRQ4_TIME_MASK                   (0x0000FFFF)

#define FEC_WLTPC_TPC_SW_IRQ5_CON_TPC_TRG_SW_IRQ5_CLR_TGL_LSB                   (8)
#define FEC_WLTPC_TPC_SW_IRQ5_CON_TPC_TRG_SW_IRQ5_CLR_TGL_WIDTH                 (6)
#define FEC_WLTPC_TPC_SW_IRQ5_CON_TPC_TRG_SW_IRQ5_CLR_TGL_MASK                  (0x00003F00)

#define FEC_WLTPC_TPC_SW_IRQ5_CON_TPC_TRG_SW_IRQ5_STA_LSB                       (0)
#define FEC_WLTPC_TPC_SW_IRQ5_CON_TPC_TRG_SW_IRQ5_STA_WIDTH                     (6)
#define FEC_WLTPC_TPC_SW_IRQ5_CON_TPC_TRG_SW_IRQ5_STA_MASK                      (0x0000003F)

#define FEC_WLTPC_TPC_SW_IRQ5_i_CON_TPC_TRG_SW_IRQ5_CNT_LSB                     (28)
#define FEC_WLTPC_TPC_SW_IRQ5_i_CON_TPC_TRG_SW_IRQ5_CNT_WIDTH                   (2)
#define FEC_WLTPC_TPC_SW_IRQ5_i_CON_TPC_TRG_SW_IRQ5_CNT_MASK                    (0x30000000)

#define FEC_WLTPC_TPC_SW_IRQ5_i_CON_TPC_TRG_SW_IRQ5_IMM_TGL_LSB                 (22)
#define FEC_WLTPC_TPC_SW_IRQ5_i_CON_TPC_TRG_SW_IRQ5_IMM_TGL_WIDTH               (1)
#define FEC_WLTPC_TPC_SW_IRQ5_i_CON_TPC_TRG_SW_IRQ5_IMM_TGL_MASK                (0x00400000)
#define FEC_WLTPC_TPC_SW_IRQ5_i_CON_TPC_TRG_SW_IRQ5_IMM_TGL_BIT                 (0x00400000)

#define FEC_WLTPC_TPC_SW_IRQ5_i_CON_TPC_TRG_SW_IRQ5_TGL_LSB                     (21)
#define FEC_WLTPC_TPC_SW_IRQ5_i_CON_TPC_TRG_SW_IRQ5_TGL_WIDTH                   (1)
#define FEC_WLTPC_TPC_SW_IRQ5_i_CON_TPC_TRG_SW_IRQ5_TGL_MASK                    (0x00200000)
#define FEC_WLTPC_TPC_SW_IRQ5_i_CON_TPC_TRG_SW_IRQ5_TGL_BIT                     (0x00200000)

#define FEC_WLTPC_TPC_SW_IRQ5_i_CON_TPC_TRG_SW_IRQ5_EN_LSB                      (20)
#define FEC_WLTPC_TPC_SW_IRQ5_i_CON_TPC_TRG_SW_IRQ5_EN_WIDTH                    (1)
#define FEC_WLTPC_TPC_SW_IRQ5_i_CON_TPC_TRG_SW_IRQ5_EN_MASK                     (0x00100000)
#define FEC_WLTPC_TPC_SW_IRQ5_i_CON_TPC_TRG_SW_IRQ5_EN_BIT                      (0x00100000)

#define FEC_WLTPC_TPC_SW_IRQ5_i_CON_TPC_TRG_SW_IRQ5_TIME_LSB                    (0)
#define FEC_WLTPC_TPC_SW_IRQ5_i_CON_TPC_TRG_SW_IRQ5_TIME_WIDTH                  (16)
#define FEC_WLTPC_TPC_SW_IRQ5_i_CON_TPC_TRG_SW_IRQ5_TIME_MASK                   (0x0000FFFF)

#define FEC_WLTPC_TPC_GC_IRQ0_CON_TPC_TRG_GC_P1_IRQ0_CLR_TGL_LSB                (20)
#define FEC_WLTPC_TPC_GC_IRQ0_CON_TPC_TRG_GC_P1_IRQ0_CLR_TGL_WIDTH              (4)
#define FEC_WLTPC_TPC_GC_IRQ0_CON_TPC_TRG_GC_P1_IRQ0_CLR_TGL_MASK               (0x00F00000)

#define FEC_WLTPC_TPC_GC_IRQ0_CON_TPC_TRG_GC_P0_IRQ0_CLR_TGL_LSB                (16)
#define FEC_WLTPC_TPC_GC_IRQ0_CON_TPC_TRG_GC_P0_IRQ0_CLR_TGL_WIDTH              (4)
#define FEC_WLTPC_TPC_GC_IRQ0_CON_TPC_TRG_GC_P0_IRQ0_CLR_TGL_MASK               (0x000F0000)

#define FEC_WLTPC_TPC_GC_IRQ0_CON_TPC_TRG_GC_P1_IRQ0_STA_LSB                    (4)
#define FEC_WLTPC_TPC_GC_IRQ0_CON_TPC_TRG_GC_P1_IRQ0_STA_WIDTH                  (4)
#define FEC_WLTPC_TPC_GC_IRQ0_CON_TPC_TRG_GC_P1_IRQ0_STA_MASK                   (0x000000F0)

#define FEC_WLTPC_TPC_GC_IRQ0_CON_TPC_TRG_GC_P0_IRQ0_STA_LSB                    (0)
#define FEC_WLTPC_TPC_GC_IRQ0_CON_TPC_TRG_GC_P0_IRQ0_STA_WIDTH                  (4)
#define FEC_WLTPC_TPC_GC_IRQ0_CON_TPC_TRG_GC_P0_IRQ0_STA_MASK                   (0x0000000F)

#define FEC_WLTPC_TPC_EXTIF_ADD_OFFSET_TPC_EXTIF_ADDR_OFFSET1_LSB               (8)
#define FEC_WLTPC_TPC_EXTIF_ADD_OFFSET_TPC_EXTIF_ADDR_OFFSET1_WIDTH             (6)
#define FEC_WLTPC_TPC_EXTIF_ADD_OFFSET_TPC_EXTIF_ADDR_OFFSET1_MASK              (0x00003F00)

#define FEC_WLTPC_TPC_EXTIF_ADD_OFFSET_TPC_EXTIF_ADDR_OFFSET0_LSB               (0)
#define FEC_WLTPC_TPC_EXTIF_ADD_OFFSET_TPC_EXTIF_ADDR_OFFSET0_WIDTH             (6)
#define FEC_WLTPC_TPC_EXTIF_ADD_OFFSET_TPC_EXTIF_ADDR_OFFSET0_MASK              (0x0000003F)

#define FEC_WLTPC_TPC_EXTIF_ADD_OFFSET0_P0_TPC_EXTIF_BSI_P0_BUS_REQ_ADD_OFFSET_LSB (18)
#define FEC_WLTPC_TPC_EXTIF_ADD_OFFSET0_P0_TPC_EXTIF_BSI_P0_BUS_REQ_ADD_OFFSET_WIDTH (14)
#define FEC_WLTPC_TPC_EXTIF_ADD_OFFSET0_P0_TPC_EXTIF_BSI_P0_BUS_REQ_ADD_OFFSET_MASK (0xFFFC0000)

#define FEC_WLTPC_TPC_EXTIF_ADD_OFFSET0_P0_TPC_EXTIF_MIPI_P0_BUS_REQ_ADD_OFFSET_LSB (2)
#define FEC_WLTPC_TPC_EXTIF_ADD_OFFSET0_P0_TPC_EXTIF_MIPI_P0_BUS_REQ_ADD_OFFSET_WIDTH (14)
#define FEC_WLTPC_TPC_EXTIF_ADD_OFFSET0_P0_TPC_EXTIF_MIPI_P0_BUS_REQ_ADD_OFFSET_MASK (0x0000FFFC)

#define FEC_WLTPC_TPC_EXTIF_ADD_OFFSET1_P0_TPC_EXTIF_TXDFE_BB_P0_REQ_ADDR_LSB   (18)
#define FEC_WLTPC_TPC_EXTIF_ADD_OFFSET1_P0_TPC_EXTIF_TXDFE_BB_P0_REQ_ADDR_WIDTH (14)
#define FEC_WLTPC_TPC_EXTIF_ADD_OFFSET1_P0_TPC_EXTIF_TXDFE_BB_P0_REQ_ADDR_MASK  (0xFFFC0000)

#define FEC_WLTPC_TPC_EXTIF_ADD_OFFSET1_P0_TPC_EXTIF_TXDFE_RF_P0_REQ_ADDR_LSB   (2)
#define FEC_WLTPC_TPC_EXTIF_ADD_OFFSET1_P0_TPC_EXTIF_TXDFE_RF_P0_REQ_ADDR_WIDTH (14)
#define FEC_WLTPC_TPC_EXTIF_ADD_OFFSET1_P0_TPC_EXTIF_TXDFE_RF_P0_REQ_ADDR_MASK  (0x0000FFFC)

#define FEC_WLTPC_TPC_EXTIF_ADD_OFFSET2_P0_TPC_EXTIF_TXK_P0_REQ_ADDR_LSB        (18)
#define FEC_WLTPC_TPC_EXTIF_ADD_OFFSET2_P0_TPC_EXTIF_TXK_P0_REQ_ADDR_WIDTH      (14)
#define FEC_WLTPC_TPC_EXTIF_ADD_OFFSET2_P0_TPC_EXTIF_TXK_P0_REQ_ADDR_MASK       (0xFFFC0000)

#define FEC_WLTPC_TPC_EXTIF_ADD_OFFSET2_P0_TPC_EXTIF_TXET_P0_REQ_ADDR_LSB       (2)
#define FEC_WLTPC_TPC_EXTIF_ADD_OFFSET2_P0_TPC_EXTIF_TXET_P0_REQ_ADDR_WIDTH     (14)
#define FEC_WLTPC_TPC_EXTIF_ADD_OFFSET2_P0_TPC_EXTIF_TXET_P0_REQ_ADDR_MASK      (0x0000FFFC)

#define FEC_WLTPC_TPC_EXTIF_ADD_OFFSET0_P1_TPC_EXTIF_BSI_P1_BUS_REQ_ADD_OFFSET_LSB (18)
#define FEC_WLTPC_TPC_EXTIF_ADD_OFFSET0_P1_TPC_EXTIF_BSI_P1_BUS_REQ_ADD_OFFSET_WIDTH (14)
#define FEC_WLTPC_TPC_EXTIF_ADD_OFFSET0_P1_TPC_EXTIF_BSI_P1_BUS_REQ_ADD_OFFSET_MASK (0xFFFC0000)

#define FEC_WLTPC_TPC_EXTIF_ADD_OFFSET0_P1_TPC_EXTIF_MIPI_P1_BUS_REQ_ADD_OFFSET_LSB (2)
#define FEC_WLTPC_TPC_EXTIF_ADD_OFFSET0_P1_TPC_EXTIF_MIPI_P1_BUS_REQ_ADD_OFFSET_WIDTH (14)
#define FEC_WLTPC_TPC_EXTIF_ADD_OFFSET0_P1_TPC_EXTIF_MIPI_P1_BUS_REQ_ADD_OFFSET_MASK (0x0000FFFC)

#define FEC_WLTPC_TPC_EXTIF_ADD_OFFSET1_P1_TPC_EXTIF_TXDFE_BB_P1_REQ_ADDR_LSB   (18)
#define FEC_WLTPC_TPC_EXTIF_ADD_OFFSET1_P1_TPC_EXTIF_TXDFE_BB_P1_REQ_ADDR_WIDTH (14)
#define FEC_WLTPC_TPC_EXTIF_ADD_OFFSET1_P1_TPC_EXTIF_TXDFE_BB_P1_REQ_ADDR_MASK  (0xFFFC0000)

#define FEC_WLTPC_TPC_EXTIF_ADD_OFFSET1_P1_TPC_EXTIF_TXDFE_RF_P1_REQ_ADDR_LSB   (2)
#define FEC_WLTPC_TPC_EXTIF_ADD_OFFSET1_P1_TPC_EXTIF_TXDFE_RF_P1_REQ_ADDR_WIDTH (14)
#define FEC_WLTPC_TPC_EXTIF_ADD_OFFSET1_P1_TPC_EXTIF_TXDFE_RF_P1_REQ_ADDR_MASK  (0x0000FFFC)

#define FEC_WLTPC_TPC_EXTIF_ADD_OFFSET2_P1_TPC_EXTIF_TXK_P1_REQ_ADDR_LSB        (18)
#define FEC_WLTPC_TPC_EXTIF_ADD_OFFSET2_P1_TPC_EXTIF_TXK_P1_REQ_ADDR_WIDTH      (14)
#define FEC_WLTPC_TPC_EXTIF_ADD_OFFSET2_P1_TPC_EXTIF_TXK_P1_REQ_ADDR_MASK       (0xFFFC0000)

#define FEC_WLTPC_TPC_EXTIF_ADD_OFFSET2_P1_TPC_EXTIF_TXET_P1_REQ_ADDR_LSB       (2)
#define FEC_WLTPC_TPC_EXTIF_ADD_OFFSET2_P1_TPC_EXTIF_TXET_P1_REQ_ADDR_WIDTH     (14)
#define FEC_WLTPC_TPC_EXTIF_ADD_OFFSET2_P1_TPC_EXTIF_TXET_P1_REQ_ADDR_MASK      (0x0000FFFC)

#define FEC_WLTPC_TPC_W_TTR_TIME_MON_FDD_TTR_SLOT_CNT_LSB                       (12)
#define FEC_WLTPC_TPC_W_TTR_TIME_MON_FDD_TTR_SLOT_CNT_WIDTH                     (4)
#define FEC_WLTPC_TPC_W_TTR_TIME_MON_FDD_TTR_SLOT_CNT_MASK                      (0x0000F000)

#define FEC_WLTPC_TPC_W_TTR_TIME_MON_FDD_TTR_CHIP_CNT_LSB                       (0)
#define FEC_WLTPC_TPC_W_TTR_TIME_MON_FDD_TTR_CHIP_CNT_WIDTH                     (12)
#define FEC_WLTPC_TPC_W_TTR_TIME_MON_FDD_TTR_CHIP_CNT_MASK                      (0x00000FFF)

#define FEC_WLTPC_TPC_L_TIMER_TIME_MON_LTE_TIMER_S_TIME_LSB                     (0)
#define FEC_WLTPC_TPC_L_TIMER_TIME_MON_LTE_TIMER_S_TIME_WIDTH                   (20)
#define FEC_WLTPC_TPC_L_TIMER_TIME_MON_LTE_TIMER_S_TIME_MASK                    (0x000FFFFF)

#define FEC_WLTPC_TPC_C1X_TTR_TIME_MON_C1X_TTR_S_TIME_LSB                       (0)
#define FEC_WLTPC_TPC_C1X_TTR_TIME_MON_C1X_TTR_S_TIME_WIDTH                     (20)
#define FEC_WLTPC_TPC_C1X_TTR_TIME_MON_C1X_TTR_S_TIME_MASK                      (0x000FFFFF)

#define FEC_WLTPC_TPC_CDO_TTR_TIME_MON_CDO_TTR_S_TIME_LSB                       (0)
#define FEC_WLTPC_TPC_CDO_TTR_TIME_MON_CDO_TTR_S_TIME_WIDTH                     (20)
#define FEC_WLTPC_TPC_CDO_TTR_TIME_MON_CDO_TTR_S_TIME_MASK                      (0x000FFFFF)

#define FEC_WLTPC_TPC_TQ_MON_TPC_TQ_LO_REQ_LSB                                  (6)
#define FEC_WLTPC_TPC_TQ_MON_TPC_TQ_LO_REQ_WIDTH                                (1)
#define FEC_WLTPC_TPC_TQ_MON_TPC_TQ_LO_REQ_MASK                                 (0x00000040)
#define FEC_WLTPC_TPC_TQ_MON_TPC_TQ_LO_REQ_BIT                                  (0x00000040)

#define FEC_WLTPC_TPC_TQ_MON_TPC_TQ_GLO_REQ_LSB                                 (5)
#define FEC_WLTPC_TPC_TQ_MON_TPC_TQ_GLO_REQ_WIDTH                               (1)
#define FEC_WLTPC_TPC_TQ_MON_TPC_TQ_GLO_REQ_MASK                                (0x00000020)
#define FEC_WLTPC_TPC_TQ_MON_TPC_TQ_GLO_REQ_BIT                                 (0x00000020)

#define FEC_WLTPC_TPC_TQ_MON_TPC_TQ_CNT_MEM_REQ_LSB                             (4)
#define FEC_WLTPC_TPC_TQ_MON_TPC_TQ_CNT_MEM_REQ_WIDTH                           (1)
#define FEC_WLTPC_TPC_TQ_MON_TPC_TQ_CNT_MEM_REQ_MASK                            (0x00000010)
#define FEC_WLTPC_TPC_TQ_MON_TPC_TQ_CNT_MEM_REQ_BIT                             (0x00000010)

#define FEC_WLTPC_TPC_TQ_MON_TPC_TQ_GLO_CNT_LSB                                 (0)
#define FEC_WLTPC_TPC_TQ_MON_TPC_TQ_GLO_CNT_WIDTH                               (4)
#define FEC_WLTPC_TPC_TQ_MON_TPC_TQ_GLO_CNT_MASK                                (0x0000000F)

#define FEC_WLTPC_TPC_P0_LO_MON_TQ_GC_P0_TRG_CNT_LSB                            (24)
#define FEC_WLTPC_TPC_P0_LO_MON_TQ_GC_P0_TRG_CNT_WIDTH                          (4)
#define FEC_WLTPC_TPC_P0_LO_MON_TQ_GC_P0_TRG_CNT_MASK                           (0x0F000000)

#define FEC_WLTPC_TPC_P0_LO_MON_APC_P0_TRG_CNT_LSB                              (20)
#define FEC_WLTPC_TPC_P0_LO_MON_APC_P0_TRG_CNT_WIDTH                            (4)
#define FEC_WLTPC_TPC_P0_LO_MON_APC_P0_TRG_CNT_MASK                             (0x00F00000)

#define FEC_WLTPC_TPC_P0_LO_MON_DDPC_P0_TRG_CNT_LSB                             (16)
#define FEC_WLTPC_TPC_P0_LO_MON_DDPC_P0_TRG_CNT_WIDTH                           (4)
#define FEC_WLTPC_TPC_P0_LO_MON_DDPC_P0_TRG_CNT_MASK                            (0x000F0000)

#define FEC_WLTPC_TPC_P0_LO_MON_TXDFE_P0_TRG_CNT_LSB                            (12)
#define FEC_WLTPC_TPC_P0_LO_MON_TXDFE_P0_TRG_CNT_WIDTH                          (4)
#define FEC_WLTPC_TPC_P0_LO_MON_TXDFE_P0_TRG_CNT_MASK                           (0x0000F000)

#define FEC_WLTPC_TPC_P0_LO_MON_BPI_P0_TRG_CNT_LSB                              (8)
#define FEC_WLTPC_TPC_P0_LO_MON_BPI_P0_TRG_CNT_WIDTH                            (4)
#define FEC_WLTPC_TPC_P0_LO_MON_BPI_P0_TRG_CNT_MASK                             (0x00000F00)

#define FEC_WLTPC_TPC_P0_LO_MON_BSI_P0_TRG_CNT_LSB                              (4)
#define FEC_WLTPC_TPC_P0_LO_MON_BSI_P0_TRG_CNT_WIDTH                            (4)
#define FEC_WLTPC_TPC_P0_LO_MON_BSI_P0_TRG_CNT_MASK                             (0x000000F0)

#define FEC_WLTPC_TPC_P0_LO_MON_MIPI_P0_TRG_CNT_LSB                             (0)
#define FEC_WLTPC_TPC_P0_LO_MON_MIPI_P0_TRG_CNT_WIDTH                           (4)
#define FEC_WLTPC_TPC_P0_LO_MON_MIPI_P0_TRG_CNT_MASK                            (0x0000000F)

#define FEC_WLTPC_TPC_P1_LO_MON_TQ_GC_P1_TRG_CNT_LSB                            (24)
#define FEC_WLTPC_TPC_P1_LO_MON_TQ_GC_P1_TRG_CNT_WIDTH                          (4)
#define FEC_WLTPC_TPC_P1_LO_MON_TQ_GC_P1_TRG_CNT_MASK                           (0x0F000000)

#define FEC_WLTPC_TPC_P1_LO_MON_APC_P1_TRG_CNT_LSB                              (20)
#define FEC_WLTPC_TPC_P1_LO_MON_APC_P1_TRG_CNT_WIDTH                            (4)
#define FEC_WLTPC_TPC_P1_LO_MON_APC_P1_TRG_CNT_MASK                             (0x00F00000)

#define FEC_WLTPC_TPC_P1_LO_MON_DDPC_P1_TRG_CNT_LSB                             (16)
#define FEC_WLTPC_TPC_P1_LO_MON_DDPC_P1_TRG_CNT_WIDTH                           (4)
#define FEC_WLTPC_TPC_P1_LO_MON_DDPC_P1_TRG_CNT_MASK                            (0x000F0000)

#define FEC_WLTPC_TPC_P1_LO_MON_TXDFE_P1_TRG_CNT_LSB                            (12)
#define FEC_WLTPC_TPC_P1_LO_MON_TXDFE_P1_TRG_CNT_WIDTH                          (4)
#define FEC_WLTPC_TPC_P1_LO_MON_TXDFE_P1_TRG_CNT_MASK                           (0x0000F000)

#define FEC_WLTPC_TPC_P1_LO_MON_BPI_P1_TRG_CNT_LSB                              (8)
#define FEC_WLTPC_TPC_P1_LO_MON_BPI_P1_TRG_CNT_WIDTH                            (4)
#define FEC_WLTPC_TPC_P1_LO_MON_BPI_P1_TRG_CNT_MASK                             (0x00000F00)

#define FEC_WLTPC_TPC_P1_LO_MON_BSI_P1_TRG_CNT_LSB                              (4)
#define FEC_WLTPC_TPC_P1_LO_MON_BSI_P1_TRG_CNT_WIDTH                            (4)
#define FEC_WLTPC_TPC_P1_LO_MON_BSI_P1_TRG_CNT_MASK                             (0x000000F0)

#define FEC_WLTPC_TPC_P1_LO_MON_MIPI_P1_TRG_CNT_LSB                             (0)
#define FEC_WLTPC_TPC_P1_LO_MON_MIPI_P1_TRG_CNT_WIDTH                           (4)
#define FEC_WLTPC_TPC_P1_LO_MON_MIPI_P1_TRG_CNT_MASK                            (0x0000000F)
/* TPC REG End */

/* L TXK Start */
#define FEC_LTPC_TXK_CTRL_SW_CON0                                               ((APBADDR32)(FEC_LTPC_TXK_SLV_REG_BASE + 0x0004))
#define FEC_LTPC_TXK_CTRL_SW_CON1                                               ((APBADDR32)(FEC_LTPC_TXK_SLV_REG_BASE + 0x0008))
#define FEC_LTPC_TXK_CTRL_CNT_SEL                                               ((APBADDR32)(FEC_LTPC_TXK_SLV_REG_BASE + 0x000C))
#define FEC_LTPC_TXK_OTFC_SW_TRG0                                               ((APBADDR32)(FEC_LTPC_TXK_SLV_REG_BASE + 0x0010))
#define FEC_LTPC_TXK_LOG_CON0                                                   ((APBADDR32)(FEC_LTPC_TXK_SLV_REG_BASE + 0x0014))
#define FEC_LTPC_TXK_LOG_CON1                                                   ((APBADDR32)(FEC_LTPC_TXK_SLV_REG_BASE + 0x0018))
#define FEC_LTPC_TXK_SC_IN_SW0                                                  ((APBADDR32)(FEC_LTPC_TXK_SLV_REG_BASE + 0x001C))
#define FEC_LTPC_TXK_SC_IN_SW1                                                  ((APBADDR32)(FEC_LTPC_TXK_SLV_REG_BASE + 0x0020))
#define FEC_LTPC_TXK_TTG_CON                                                    ((APBADDR32)(FEC_LTPC_TXK_SLV_REG_BASE + 0x0040))
#define FEC_LTPC_TXK_TTG_SW_TRG                                                 ((APBADDR32)(FEC_LTPC_TXK_SLV_REG_BASE + 0x0044))
#define FEC_LTPC_TXK_TTG_SW_CON                                                 ((APBADDR32)(FEC_LTPC_TXK_SLV_REG_BASE + 0x0048))
#define FEC_LTPC_TXK_TRG_AD                                                     ((APBADDR32)(FEC_LTPC_TXK_SLV_REG_BASE + 0x0050))
#define FEC_LTPC_TXK_TRG_L_DETADC_SET0                                          ((APBADDR32)(FEC_LTPC_TXK_SLV_REG_BASE + 0x0054))
#define FEC_LTPC_TXK_TRG_T_DETADC_SET                                           ((APBADDR32)(FEC_LTPC_TXK_SLV_REG_BASE + 0x0058))
#define FEC_LTPC_TXK_TRG_W_DETADC_SET                                           ((APBADDR32)(FEC_LTPC_TXK_SLV_REG_BASE + 0x005C))
#define FEC_LTPC_TXK_TRG_C_1X_DETADC_SET                                        ((APBADDR32)(FEC_LTPC_TXK_SLV_REG_BASE + 0x0060))
#define FEC_LTPC_TXK_TRG_C_DO_DETADC_SET                                        ((APBADDR32)(FEC_LTPC_TXK_SLV_REG_BASE + 0x0064))
#define FEC_LTPC_TXK_TRG_GLO_CON0(n)                                            ((APBADDR32)(FEC_LTPC_TXK_SLV_REG_BASE + 0x0100 + (n)* 4))   //n is from 0 to 4
#define FEC_LTPC_TXK_TRG_GLO_CON1(n)                                            ((APBADDR32)(FEC_LTPC_TXK_SLV_REG_BASE + 0x0130 + (n)* 4))   //n is from 0 to 4
#define FEC_LTPC_TXK_TRG_GLO_CON2(n)                                            ((APBADDR32)(FEC_LTPC_TXK_SLV_REG_BASE + 0x0160 + (n)* 4))   //n is from 0 to 4
#define FEC_LTPC_REF_DFE_CON                                                    ((APBADDR32)(FEC_LTPC_TXK_SLV_REG_BASE + 0x0200))
#define FEC_LTPC_REF_DFE_DELAY                                                  ((APBADDR32)(FEC_LTPC_TXK_SLV_REG_BASE + 0x0204))
#define FEC_LTPC_REF_DFE_DELAY_SW                                               ((APBADDR32)(FEC_LTPC_TXK_SLV_REG_BASE + 0x0208))
#define FEC_LTPC_REF_DFE_DELAY_RESULT                                           ((APBADDR32)(FEC_LTPC_TXK_SLV_REG_BASE + 0x020C))
#define FEC_LTPC_DET_DFE_CON                                                    ((APBADDR32)(FEC_LTPC_TXK_SLV_REG_BASE + 0x0300))
#define FEC_LTPC_DET_DC_COMP(n)                                                 ((APBADDR32)(FEC_LTPC_TXK_SLV_REG_BASE + 0x0304 + (n)* 4))   //n is from 0 to 14
#define FEC_LTPC_DET_DC_COMP_OFST(n)                                            ((APBADDR32)(FEC_LTPC_TXK_SLV_REG_BASE + 0x0354 + (n)* 4))   //n is from 0 to 14
#define FEC_LTPC_DET_FIIQ_COMP0                                                 ((APBADDR32)(FEC_LTPC_TXK_SLV_REG_BASE + 0x03A4))
#define FEC_LTPC_DET_FIIQ_COMP1                                                 ((APBADDR32)(FEC_LTPC_TXK_SLV_REG_BASE + 0x03A8))
#define FEC_LTPC_DET_EQLPF_0_MID_C                                              ((APBADDR32)(FEC_LTPC_TXK_SLV_REG_BASE + 0x03AC))
#define FEC_LTPC_DET_EQLPF_1_MID_C                                              ((APBADDR32)(FEC_LTPC_TXK_SLV_REG_BASE + 0x03B0))
#define FEC_LTPC_DET_EQLPF_2_MID_C                                              ((APBADDR32)(FEC_LTPC_TXK_SLV_REG_BASE + 0x03B4))
#define FEC_LTPC_DET_EQLPF_3_MID_C                                              ((APBADDR32)(FEC_LTPC_TXK_SLV_REG_BASE + 0x03B8))
#define FEC_LTPC_DET_EQLPF_4_MID_C                                              ((APBADDR32)(FEC_LTPC_TXK_SLV_REG_BASE + 0x03BC))
#define FEC_LTPC_DET_EQLPF_5_MID_C                                              ((APBADDR32)(FEC_LTPC_TXK_SLV_REG_BASE + 0x03C0))
#define FEC_LTPC_DET_EQLPF_6_MID_C                                              ((APBADDR32)(FEC_LTPC_TXK_SLV_REG_BASE + 0x03C4))
#define FEC_LTPC_DET_EQLPF_7_MID_C                                              ((APBADDR32)(FEC_LTPC_TXK_SLV_REG_BASE + 0x03C8))
#define FEC_LTPC_DET_EQLPF_8_MID_C                                              ((APBADDR32)(FEC_LTPC_TXK_SLV_REG_BASE + 0x03CC))
#define FEC_LTPC_DET_EQLPF_9_MID_C                                              ((APBADDR32)(FEC_LTPC_TXK_SLV_REG_BASE + 0x03D0))
#define FEC_LTPC_DET_EQLPF_10_MID_C                                             ((APBADDR32)(FEC_LTPC_TXK_SLV_REG_BASE + 0x03D4))
#define FEC_LTPC_DET_EQLPF_0_LOW_C                                              ((APBADDR32)(FEC_LTPC_TXK_SLV_REG_BASE + 0x03D8))
#define FEC_LTPC_DET_EQLPF_1_LOW_C                                              ((APBADDR32)(FEC_LTPC_TXK_SLV_REG_BASE + 0x03DC))
#define FEC_LTPC_DET_EQLPF_2_LOW_C                                              ((APBADDR32)(FEC_LTPC_TXK_SLV_REG_BASE + 0x03E0))
#define FEC_LTPC_DET_EQLPF_3_LOW_C                                              ((APBADDR32)(FEC_LTPC_TXK_SLV_REG_BASE + 0x03E4))
#define FEC_LTPC_DET_EQLPF_4_LOW_C                                              ((APBADDR32)(FEC_LTPC_TXK_SLV_REG_BASE + 0x03E8))
#define FEC_LTPC_DET_EQLPF_5_LOW_C                                              ((APBADDR32)(FEC_LTPC_TXK_SLV_REG_BASE + 0x03EC))
#define FEC_LTPC_DET_EQLPF_6_LOW_C                                              ((APBADDR32)(FEC_LTPC_TXK_SLV_REG_BASE + 0x03F0))
#define FEC_LTPC_DET_EQLPF_7_LOW_C                                              ((APBADDR32)(FEC_LTPC_TXK_SLV_REG_BASE + 0x03F4))
#define FEC_LTPC_DET_EQLPF_8_LOW_C                                              ((APBADDR32)(FEC_LTPC_TXK_SLV_REG_BASE + 0x03F8))
#define FEC_LTPC_DET_EQLPF_9_LOW_C                                              ((APBADDR32)(FEC_LTPC_TXK_SLV_REG_BASE + 0x03FC))
#define FEC_LTPC_DET_EQLPF_10_LOW_C                                             ((APBADDR32)(FEC_LTPC_TXK_SLV_REG_BASE + 0x0400))
#define FEC_LTPC_DET_EQLPF_SCALE                                                ((APBADDR32)(FEC_LTPC_TXK_SLV_REG_BASE + 0x0404))
#define FEC_LTPC_DET_READY_BIT_CON                                              ((APBADDR32)(FEC_LTPC_TXK_SLV_REG_BASE + 0x0408))
#define FEC_LTPC_DET_DBG0                                                       ((APBADDR32)(FEC_LTPC_TXK_SLV_REG_BASE + 0x040C))
#define FEC_LTPC_DET_DBG1                                                       ((APBADDR32)(FEC_LTPC_TXK_SLV_REG_BASE + 0x0410))
#define FEC_LTPC_DET_DBG2                                                       ((APBADDR32)(FEC_LTPC_TXK_SLV_REG_BASE + 0x0414))
#define FEC_LTPC_RFK_CON0                                                       ((APBADDR32)(FEC_LTPC_TXK_SLV_REG_BASE + 0x0500))
#define FEC_LTPC_RFK_CON1                                                       ((APBADDR32)(FEC_LTPC_TXK_SLV_REG_BASE + 0x0504))
#define FEC_LTPC_RFK_NCO_0                                                      ((APBADDR32)(FEC_LTPC_TXK_SLV_REG_BASE + 0x0508))
#define FEC_LTPC_RFK_NCO_1                                                      ((APBADDR32)(FEC_LTPC_TXK_SLV_REG_BASE + 0x050C))
#define FEC_LTPC_RFK_RESULT_DET_ACC_I_SQR_0                                     ((APBADDR32)(FEC_LTPC_TXK_SLV_REG_BASE + 0x0510))
#define FEC_LTPC_RFK_RESULT_DET_ACC_Q_SQR_0                                     ((APBADDR32)(FEC_LTPC_TXK_SLV_REG_BASE + 0x0514))
#define FEC_LTPC_RFK_RESULT_DET_ACC_I_0                                         ((APBADDR32)(FEC_LTPC_TXK_SLV_REG_BASE + 0x0518))
#define FEC_LTPC_RFK_RESULT_DET_ACC_Q_0                                         ((APBADDR32)(FEC_LTPC_TXK_SLV_REG_BASE + 0x051C))
#define FEC_LTPC_RFK_RESULT_DET_ACC_IQ_0                                        ((APBADDR32)(FEC_LTPC_TXK_SLV_REG_BASE + 0x0520))
#define FEC_LTPC_RFK_RESULT_DET_ACC_I_SQR_1                                     ((APBADDR32)(FEC_LTPC_TXK_SLV_REG_BASE + 0x0524))
#define FEC_LTPC_RFK_RESULT_DET_ACC_Q_SQR_1                                     ((APBADDR32)(FEC_LTPC_TXK_SLV_REG_BASE + 0x0528))
#define FEC_LTPC_RFK_RESULT_DET_ACC_I_1                                         ((APBADDR32)(FEC_LTPC_TXK_SLV_REG_BASE + 0x052C))
#define FEC_LTPC_RFK_RESULT_DET_ACC_Q_1                                         ((APBADDR32)(FEC_LTPC_TXK_SLV_REG_BASE + 0x0530))
#define FEC_LTPC_RFK_RESULT_DET_ACC_IQ_1                                        ((APBADDR32)(FEC_LTPC_TXK_SLV_REG_BASE + 0x0534))
#define FEC_LTPC_RFK_RESULT_NCO_ACC_I_P0                                        ((APBADDR32)(FEC_LTPC_TXK_SLV_REG_BASE + 0x0538))
#define FEC_LTPC_RFK_RESULT_NCO_ACC_I_N0                                        ((APBADDR32)(FEC_LTPC_TXK_SLV_REG_BASE + 0x053C))
#define FEC_LTPC_RFK_RESULT_NCO_ACC_Q_P0                                        ((APBADDR32)(FEC_LTPC_TXK_SLV_REG_BASE + 0x0540))
#define FEC_LTPC_RFK_RESULT_NCO_ACC_Q_N0                                        ((APBADDR32)(FEC_LTPC_TXK_SLV_REG_BASE + 0x0544))
#define FEC_LTPC_RFK_RESULT_ACC_I_0                                             ((APBADDR32)(FEC_LTPC_TXK_SLV_REG_BASE + 0x0548))
#define FEC_LTPC_RFK_RESULT_ACC_Q_0                                             ((APBADDR32)(FEC_LTPC_TXK_SLV_REG_BASE + 0x054C))
#define FEC_LTPC_RFK_RESULT_NCO_ACC_I_P1                                        ((APBADDR32)(FEC_LTPC_TXK_SLV_REG_BASE + 0x0550))
#define FEC_LTPC_RFK_RESULT_NCO_ACC_I_N1                                        ((APBADDR32)(FEC_LTPC_TXK_SLV_REG_BASE + 0x0554))
#define FEC_LTPC_RFK_RESULT_NCO_ACC_Q_P1                                        ((APBADDR32)(FEC_LTPC_TXK_SLV_REG_BASE + 0x0558))
#define FEC_LTPC_RFK_RESULT_NCO_ACC_Q_N1                                        ((APBADDR32)(FEC_LTPC_TXK_SLV_REG_BASE + 0x055C))
#define FEC_LTPC_RFK_RESULT_ACC_I_1                                             ((APBADDR32)(FEC_LTPC_TXK_SLV_REG_BASE + 0x0560))
#define FEC_LTPC_RFK_RESULT_ACC_Q_1                                             ((APBADDR32)(FEC_LTPC_TXK_SLV_REG_BASE + 0x0564))
#define FEC_LTPC_DDPC_SET0(n)                                                   ((APBADDR32)(FEC_LTPC_TXK_SLV_REG_BASE + 0x0600 + (n)* 4))   //n is from 0 to 3
#define FEC_LTPC_DDPC_SET1(n)                                                   ((APBADDR32)(FEC_LTPC_TXK_SLV_REG_BASE + 0x0620 + (n)* 4))   //n is from 0 to 3
#define FEC_LTPC_DDPC_RESULT_DET_ACC_DC0                                        ((APBADDR32)(FEC_LTPC_TXK_SLV_REG_BASE + 0x0640))
#define FEC_LTPC_DDPC_RESULT_DET_ACC_POW0                                       ((APBADDR32)(FEC_LTPC_TXK_SLV_REG_BASE + 0x0644))
#define FEC_LTPC_DDPC_RESULT_REF_ACC_DC0                                        ((APBADDR32)(FEC_LTPC_TXK_SLV_REG_BASE + 0x0648))
#define FEC_LTPC_DDPC_RESULT_REF_ACC_POW0                                       ((APBADDR32)(FEC_LTPC_TXK_SLV_REG_BASE + 0x064C))
#define FEC_LTPC_GD_CON0                                                        ((APBADDR32)(FEC_LTPC_TXK_SLV_REG_BASE + 0x0700))
#define FEC_LTPC_GD_CON1                                                        ((APBADDR32)(FEC_LTPC_TXK_SLV_REG_BASE + 0x0704))
#define FEC_LTPC_GD_RESULT_DET_DC_I                                             ((APBADDR32)(FEC_LTPC_TXK_SLV_REG_BASE + 0x0708))
#define FEC_LTPC_GD_RESULT_DET_DC_Q                                             ((APBADDR32)(FEC_LTPC_TXK_SLV_REG_BASE + 0x070C))
#define FEC_LTPC_GD_RESULT_DET_POW                                              ((APBADDR32)(FEC_LTPC_TXK_SLV_REG_BASE + 0x0710))
#define FEC_LTPC_GD_RESULT_REF_DC_I                                             ((APBADDR32)(FEC_LTPC_TXK_SLV_REG_BASE + 0x0714))
#define FEC_LTPC_GD_RESULT_REF_DC_Q                                             ((APBADDR32)(FEC_LTPC_TXK_SLV_REG_BASE + 0x0718))
#define FEC_LTPC_GD_RESULT_REF_POW                                              ((APBADDR32)(FEC_LTPC_TXK_SLV_REG_BASE + 0x071C))
#define FEC_LTPC_GD_RESULT_CORR_I                                               ((APBADDR32)(FEC_LTPC_TXK_SLV_REG_BASE + 0x0720))
#define FEC_LTPC_GD_RESULT_CORR_Q                                               ((APBADDR32)(FEC_LTPC_TXK_SLV_REG_BASE + 0x0724))
#define FEC_LTPC_TDE_OTFC_COARSE_CON0                                           ((APBADDR32)(FEC_LTPC_TXK_SLV_REG_BASE + 0x0800))
#define FEC_LTPC_TDE_OTFC_COARSE_CON1                                           ((APBADDR32)(FEC_LTPC_TXK_SLV_REG_BASE + 0x0804))
#define FEC_LTPC_TDE_OTFC_COARSE_CON2                                           ((APBADDR32)(FEC_LTPC_TXK_SLV_REG_BASE + 0x0808))
#define FEC_LTPC_TDE_OTFC_FINE_CON0                                             ((APBADDR32)(FEC_LTPC_TXK_SLV_REG_BASE + 0x080C))
#define FEC_LTPC_TDE_OTFC_FINE_CON1                                             ((APBADDR32)(FEC_LTPC_TXK_SLV_REG_BASE + 0x0810))
#define FEC_LTPC_TDE_OTFC_FINE_CON2                                             ((APBADDR32)(FEC_LTPC_TXK_SLV_REG_BASE + 0x0818))
#define FEC_LTPC_TDE_OTFC_DEALY_EST                                             ((APBADDR32)(FEC_LTPC_TXK_SLV_REG_BASE + 0x081C))
#define FEC_LTPC_TDE_OTFC_DEALY_EST_DETAIL                                      ((APBADDR32)(FEC_LTPC_TXK_SLV_REG_BASE + 0x0820))
#define FEC_LTPC_TDE_OTFC_CORR_HW0                                              ((APBADDR32)(FEC_LTPC_TXK_SLV_REG_BASE + 0x0824))
#define FEC_LTPC_TDE_OTFC_CORR_HW1                                              ((APBADDR32)(FEC_LTPC_TXK_SLV_REG_BASE + 0x0828))
#define FEC_LTPC_TDE_OTFC_CORR_HW2                                              ((APBADDR32)(FEC_LTPC_TXK_SLV_REG_BASE + 0x082C))
#define FEC_LTPC_TDE_OTFC_POW_T                                                 ((APBADDR32)(FEC_LTPC_TXK_SLV_REG_BASE + 0x0830))
#define FEC_LTPC_TDE_OTFC_DBG0                                                  ((APBADDR32)(FEC_LTPC_TXK_SLV_REG_BASE + 0x0834))
#define FEC_LTPC_TDE_OTFC_DBG1                                                  ((APBADDR32)(FEC_LTPC_TXK_SLV_REG_BASE + 0x0838))
#define FEC_LTPC_TDE_OTFC_DBG2                                                  ((APBADDR32)(FEC_LTPC_TXK_SLV_REG_BASE + 0x083C))
#define FEC_LTPC_TDE_OTFC_DBG3                                                  ((APBADDR32)(FEC_LTPC_TXK_SLV_REG_BASE + 0x0840))
#define FEC_LTPC_TDE_OTFC_DBG4                                                  ((APBADDR32)(FEC_LTPC_TXK_SLV_REG_BASE + 0x0844))
#define FEC_LTPC_TDE_OTFC_DBG5                                                  ((APBADDR32)(FEC_LTPC_TXK_SLV_REG_BASE + 0x0848))
#define FEC_LTPC_TDE_OTFC_DBG6                                                  ((APBADDR32)(FEC_LTPC_TXK_SLV_REG_BASE + 0x084C))
#define FEC_LTPC_TDE_OTFC_DBG7                                                  ((APBADDR32)(FEC_LTPC_TXK_SLV_REG_BASE + 0x0850))
#define FEC_LTPC_TDE_OTFC_DBG8                                                  ((APBADDR32)(FEC_LTPC_TXK_SLV_REG_BASE + 0x0854))
#define FEC_LTPC_TDE_OTFC_DBG9                                                  ((APBADDR32)(FEC_LTPC_TXK_SLV_REG_BASE + 0x0858))
#define FEC_LTPC_TDE_OTFC_DBG10                                                 ((APBADDR32)(FEC_LTPC_TXK_SLV_REG_BASE + 0x085C))
#define FEC_LTPC_TDE_OTFC_DBG11                                                 ((APBADDR32)(FEC_LTPC_TXK_SLV_REG_BASE + 0x0860))
#define FEC_LTPC_ETDPD_OTFC_CON0                                                ((APBADDR32)(FEC_LTPC_TXK_SLV_REG_BASE + 0x0900))
#define FEC_LTPC_ETDPD_OTFC_CON1                                                ((APBADDR32)(FEC_LTPC_TXK_SLV_REG_BASE + 0x0904))
#define FEC_LTPC_DPD_FK_CON0                                                    ((APBADDR32)(FEC_LTPC_TXK_SLV_REG_BASE + 0x0908))
#define FEC_LTPC_DPD_FK_CON1                                                    ((APBADDR32)(FEC_LTPC_TXK_SLV_REG_BASE + 0x090C))
#define FEC_LTPC_DPD_FK_RAMP_CON                                                ((APBADDR32)(FEC_LTPC_TXK_SLV_REG_BASE + 0x0910))
#define FEC_LTPC_ED_RESULT_COR_Q(n)                                             ((APBADDR32)(FEC_LTPC_TXK_SLV_REG_BASE + 0x0914 + (n)* 4))   //n is from 0 to 15
#define FEC_LTPC_ED_RESULT_COR_I(n)                                             ((APBADDR32)(FEC_LTPC_TXK_SLV_REG_BASE + 0x0954 + (n)* 4))   //n is from 0 to 15
#define FEC_LTPC_ED_RESULT_POW(n)                                               ((APBADDR32)(FEC_LTPC_TXK_SLV_REG_BASE + 0x0994 + (n)* 4))   //n is from 0 to 15
#define FEC_LTPC_ED_RESULT_COUNT(n)                                             ((APBADDR32)(FEC_LTPC_TXK_SLV_REG_BASE + 0x09D4 + (n)* 4))   //n is from 0 to 7
#define FEC_LTPC_ED_RESULT_COUNT0                                               ((APBADDR32)(FEC_LTPC_TXK_SLV_REG_BASE + 0x09D4))
#define FEC_LTPC_ED_RESULT_COUNT2                                               ((APBADDR32)(FEC_LTPC_TXK_SLV_REG_BASE + 0x09D8))
#define FEC_LTPC_ED_RESULT_COUNT4                                               ((APBADDR32)(FEC_LTPC_TXK_SLV_REG_BASE + 0x09DC))
#define FEC_LTPC_ED_RESULT_COUNT6                                               ((APBADDR32)(FEC_LTPC_TXK_SLV_REG_BASE + 0x09E0))
#define FEC_LTPC_ED_RESULT_COUNT8                                               ((APBADDR32)(FEC_LTPC_TXK_SLV_REG_BASE + 0x09E4))
#define FEC_LTPC_ED_RESULT_COUNT10                                              ((APBADDR32)(FEC_LTPC_TXK_SLV_REG_BASE + 0x09E8))
#define FEC_LTPC_ED_RESULT_COUNT12                                              ((APBADDR32)(FEC_LTPC_TXK_SLV_REG_BASE + 0x09EC))
#define FEC_LTPC_ED_RESULT_COUNT14                                              ((APBADDR32)(FEC_LTPC_TXK_SLV_REG_BASE + 0x09F0))
#define FEC_LTPC_DPD_FK_DBG0                                                    ((APBADDR32)(FEC_LTPC_TXK_SLV_REG_BASE + 0x09F4))
#define FEC_LTPC_TXK_MEAS_SC_SW0                                                ((APBADDR32)(FEC_LTPC_TXK_SLV_REG_BASE + 0x0A00))
#define FEC_LTPC_TXK_MEAS_SC_SW1                                                ((APBADDR32)(FEC_LTPC_TXK_SLV_REG_BASE + 0x0A04))
#define FEC_LTPC_SW_TRG_RESULT_ACC_0_I                                          ((APBADDR32)(FEC_LTPC_TXK_SLV_REG_BASE + 0x0A08))
#define FEC_LTPC_SW_TRG_RESULT_ACC_0_Q                                          ((APBADDR32)(FEC_LTPC_TXK_SLV_REG_BASE + 0x0A0C))
#define FEC_LTPC_SW_TRG_RESULT_ACC_1_I                                          ((APBADDR32)(FEC_LTPC_TXK_SLV_REG_BASE + 0x0A10))
#define FEC_LTPC_SW_TRG_RESULT_ACC_1_Q                                          ((APBADDR32)(FEC_LTPC_TXK_SLV_REG_BASE + 0x0A14))
#define FEC_LTPC_SW_TRG_RESULT_ACC_2_I                                          ((APBADDR32)(FEC_LTPC_TXK_SLV_REG_BASE + 0x0A18))
#define FEC_LTPC_SW_TRG_RESULT_ACC_2_Q                                          ((APBADDR32)(FEC_LTPC_TXK_SLV_REG_BASE + 0x0A1C))
#define FEC_LTPC_TXK_CAL_STATE_DBG0                                             ((APBADDR32)(FEC_LTPC_TXK_SLV_REG_BASE + 0x0B00))
#define FEC_LTPC_TXK_IO_DBG0                                                    ((APBADDR32)(FEC_LTPC_TXK_SLV_REG_BASE + 0x0B04))
#define FEC_LTPC_TXK_TTG_DBG0                                                   ((APBADDR32)(FEC_LTPC_TXK_SLV_REG_BASE + 0x0B08))
#define FEC_LTPC_TXK_TRG_GLO_DBG0                                               ((APBADDR32)(FEC_LTPC_TXK_SLV_REG_BASE + 0x0B0C))
#define FEC_LTPC_TXK_TRG_GLO_DBG1                                               ((APBADDR32)(FEC_LTPC_TXK_SLV_REG_BASE + 0x0B10))
#define FEC_LTPC_TXK_FSM_DBG0                                                   ((APBADDR32)(FEC_LTPC_TXK_SLV_REG_BASE + 0x0B14))
#define FEC_LTPC_TXK_FSM_DBG1                                                   ((APBADDR32)(FEC_LTPC_TXK_SLV_REG_BASE + 0x0B1C))
#define FEC_LTPC_TXK_FSM_DBG2                                                   ((APBADDR32)(FEC_LTPC_TXK_SLV_REG_BASE + 0x0B20))
#define FEC_LTPC_TXK_FSM_DBG3                                                   ((APBADDR32)(FEC_LTPC_TXK_SLV_REG_BASE + 0x0B24))
#define FEC_LTPC_TXK_SC_DBG0                                                    ((APBADDR32)(FEC_LTPC_TXK_SLV_REG_BASE + 0x0B28))
#define FEC_LTPC_TXK_SC_DBG1                                                    ((APBADDR32)(FEC_LTPC_TXK_SLV_REG_BASE + 0x0B2C))
#define FEC_LTPC_TXK_ACCESS_RIGHT_CON                                           ((APBADDR32)(FEC_LTPC_TXK_SLV_REG_BASE + 0x0FFC))

#define FEC_LTPC_TXK_CTRL_SW_CON0_TDE_ETDPD_WIN_FLAG_LSB                        (31)
#define FEC_LTPC_TXK_CTRL_SW_CON0_TDE_ETDPD_WIN_FLAG_WIDTH                      (1)
#define FEC_LTPC_TXK_CTRL_SW_CON0_TDE_ETDPD_WIN_FLAG_MASK                       (0x80000000)
#define FEC_LTPC_TXK_CTRL_SW_CON0_TDE_ETDPD_WIN_FLAG_BIT                        (0x80000000)

#define FEC_LTPC_TXK_CTRL_SW_CON0_INTRA_BAND_CCA_SW_LSB                         (5)
#define FEC_LTPC_TXK_CTRL_SW_CON0_INTRA_BAND_CCA_SW_WIDTH                       (1)
#define FEC_LTPC_TXK_CTRL_SW_CON0_INTRA_BAND_CCA_SW_MASK                        (0x00000020)
#define FEC_LTPC_TXK_CTRL_SW_CON0_INTRA_BAND_CCA_SW_BIT                         (0x00000020)

#define FEC_LTPC_TXK_CTRL_SW_CON0_INTRA_BAND_CCA_SWEN_LSB                       (4)
#define FEC_LTPC_TXK_CTRL_SW_CON0_INTRA_BAND_CCA_SWEN_WIDTH                     (1)
#define FEC_LTPC_TXK_CTRL_SW_CON0_INTRA_BAND_CCA_SWEN_MASK                      (0x00000010)
#define FEC_LTPC_TXK_CTRL_SW_CON0_INTRA_BAND_CCA_SWEN_BIT                       (0x00000010)

#define FEC_LTPC_TXK_CTRL_SW_CON0_DETADC_SEL_IMM_MODE_LSB                       (3)
#define FEC_LTPC_TXK_CTRL_SW_CON0_DETADC_SEL_IMM_MODE_WIDTH                     (1)
#define FEC_LTPC_TXK_CTRL_SW_CON0_DETADC_SEL_IMM_MODE_MASK                      (0x00000008)
#define FEC_LTPC_TXK_CTRL_SW_CON0_DETADC_SEL_IMM_MODE_BIT                       (0x00000008)

#define FEC_LTPC_TXK_CTRL_SW_CON0_DETADC_SEL_IMM_LSB                            (2)
#define FEC_LTPC_TXK_CTRL_SW_CON0_DETADC_SEL_IMM_WIDTH                          (1)
#define FEC_LTPC_TXK_CTRL_SW_CON0_DETADC_SEL_IMM_MASK                           (0x00000004)
#define FEC_LTPC_TXK_CTRL_SW_CON0_DETADC_SEL_IMM_BIT                            (0x00000004)

#define FEC_LTPC_TXK_CTRL_SW_CON0_TXK_MEAS_CG_SWEN_LSB                          (1)
#define FEC_LTPC_TXK_CTRL_SW_CON0_TXK_MEAS_CG_SWEN_WIDTH                        (1)
#define FEC_LTPC_TXK_CTRL_SW_CON0_TXK_MEAS_CG_SWEN_MASK                         (0x00000002)
#define FEC_LTPC_TXK_CTRL_SW_CON0_TXK_MEAS_CG_SWEN_BIT                          (0x00000002)

#define FEC_LTPC_TXK_CTRL_SW_CON0_TXK_MEAS_SWRST_LSB                            (0)
#define FEC_LTPC_TXK_CTRL_SW_CON0_TXK_MEAS_SWRST_WIDTH                          (1)
#define FEC_LTPC_TXK_CTRL_SW_CON0_TXK_MEAS_SWRST_MASK                           (0x00000001)
#define FEC_LTPC_TXK_CTRL_SW_CON0_TXK_MEAS_SWRST_BIT                            (0x00000001)

#define FEC_LTPC_TXK_CTRL_SW_CON1_ETDPD_NORM_SW_LSB                             (5)
#define FEC_LTPC_TXK_CTRL_SW_CON1_ETDPD_NORM_SW_WIDTH                           (9)
#define FEC_LTPC_TXK_CTRL_SW_CON1_ETDPD_NORM_SW_MASK                            (0x00003FE0)

#define FEC_LTPC_TXK_CTRL_SW_CON1_GAIN_IDX_SW_LSB                               (1)
#define FEC_LTPC_TXK_CTRL_SW_CON1_GAIN_IDX_SW_WIDTH                             (4)
#define FEC_LTPC_TXK_CTRL_SW_CON1_GAIN_IDX_SW_MASK                              (0x0000001E)

#define FEC_LTPC_TXK_CTRL_SW_CON1_GAIN_IDX_SWEN_LSB                             (0)
#define FEC_LTPC_TXK_CTRL_SW_CON1_GAIN_IDX_SWEN_WIDTH                           (1)
#define FEC_LTPC_TXK_CTRL_SW_CON1_GAIN_IDX_SWEN_MASK                            (0x00000001)
#define FEC_LTPC_TXK_CTRL_SW_CON1_GAIN_IDX_SWEN_BIT                             (0x00000001)

#define FEC_LTPC_TXK_CTRL_CNT_SEL_DET_AFIFO_SW_LSB                              (31)
#define FEC_LTPC_TXK_CTRL_CNT_SEL_DET_AFIFO_SW_WIDTH                            (1)
#define FEC_LTPC_TXK_CTRL_CNT_SEL_DET_AFIFO_SW_MASK                             (0x80000000)
#define FEC_LTPC_TXK_CTRL_CNT_SEL_DET_AFIFO_SW_BIT                              (0x80000000)

#define FEC_LTPC_TXK_CTRL_CNT_SEL_DET_AFIFO_SWEN_LSB                            (30)
#define FEC_LTPC_TXK_CTRL_CNT_SEL_DET_AFIFO_SWEN_WIDTH                          (1)
#define FEC_LTPC_TXK_CTRL_CNT_SEL_DET_AFIFO_SWEN_MASK                           (0x40000000)
#define FEC_LTPC_TXK_CTRL_CNT_SEL_DET_AFIFO_SWEN_BIT                            (0x40000000)

#define FEC_LTPC_TXK_CTRL_CNT_SEL_SW_TRG_CNT_SEL_LSB                            (5)
#define FEC_LTPC_TXK_CTRL_CNT_SEL_SW_TRG_CNT_SEL_WIDTH                          (1)
#define FEC_LTPC_TXK_CTRL_CNT_SEL_SW_TRG_CNT_SEL_MASK                           (0x00000020)
#define FEC_LTPC_TXK_CTRL_CNT_SEL_SW_TRG_CNT_SEL_BIT                            (0x00000020)

#define FEC_LTPC_TXK_CTRL_CNT_SEL_GD_CNT_SEL_LSB                                (4)
#define FEC_LTPC_TXK_CTRL_CNT_SEL_GD_CNT_SEL_WIDTH                              (1)
#define FEC_LTPC_TXK_CTRL_CNT_SEL_GD_CNT_SEL_MASK                               (0x00000010)
#define FEC_LTPC_TXK_CTRL_CNT_SEL_GD_CNT_SEL_BIT                                (0x00000010)

#define FEC_LTPC_TXK_CTRL_CNT_SEL_DDPC_CNT_SEL_LSB                              (3)
#define FEC_LTPC_TXK_CTRL_CNT_SEL_DDPC_CNT_SEL_WIDTH                            (1)
#define FEC_LTPC_TXK_CTRL_CNT_SEL_DDPC_CNT_SEL_MASK                             (0x00000008)
#define FEC_LTPC_TXK_CTRL_CNT_SEL_DDPC_CNT_SEL_BIT                              (0x00000008)

#define FEC_LTPC_TXK_CTRL_CNT_SEL_TDE_CNT_SEL_LSB                               (2)
#define FEC_LTPC_TXK_CTRL_CNT_SEL_TDE_CNT_SEL_WIDTH                             (1)
#define FEC_LTPC_TXK_CTRL_CNT_SEL_TDE_CNT_SEL_MASK                              (0x00000004)
#define FEC_LTPC_TXK_CTRL_CNT_SEL_TDE_CNT_SEL_BIT                               (0x00000004)

#define FEC_LTPC_TXK_CTRL_CNT_SEL_ETDPD_CNT_SEL_LSB                             (1)
#define FEC_LTPC_TXK_CTRL_CNT_SEL_ETDPD_CNT_SEL_WIDTH                           (1)
#define FEC_LTPC_TXK_CTRL_CNT_SEL_ETDPD_CNT_SEL_MASK                            (0x00000002)
#define FEC_LTPC_TXK_CTRL_CNT_SEL_ETDPD_CNT_SEL_BIT                             (0x00000002)

#define FEC_LTPC_TXK_CTRL_CNT_SEL_RFK_CNT_SEL_LSB                               (0)
#define FEC_LTPC_TXK_CTRL_CNT_SEL_RFK_CNT_SEL_WIDTH                             (1)
#define FEC_LTPC_TXK_CTRL_CNT_SEL_RFK_CNT_SEL_MASK                              (0x00000001)
#define FEC_LTPC_TXK_CTRL_CNT_SEL_RFK_CNT_SEL_BIT                               (0x00000001)

#define FEC_LTPC_TXK_OTFC_SW_TRG0_GD_TRG_TGL_LSB                                (7)
#define FEC_LTPC_TXK_OTFC_SW_TRG0_GD_TRG_TGL_WIDTH                              (1)
#define FEC_LTPC_TXK_OTFC_SW_TRG0_GD_TRG_TGL_MASK                               (0x00000080)
#define FEC_LTPC_TXK_OTFC_SW_TRG0_GD_TRG_TGL_BIT                                (0x00000080)

#define FEC_LTPC_TXK_OTFC_SW_TRG0_TDE_COARSE_TRG_TGL_LSB                        (6)
#define FEC_LTPC_TXK_OTFC_SW_TRG0_TDE_COARSE_TRG_TGL_WIDTH                      (1)
#define FEC_LTPC_TXK_OTFC_SW_TRG0_TDE_COARSE_TRG_TGL_MASK                       (0x00000040)
#define FEC_LTPC_TXK_OTFC_SW_TRG0_TDE_COARSE_TRG_TGL_BIT                        (0x00000040)

#define FEC_LTPC_TXK_OTFC_SW_TRG0_TDE_FINE_TRG_TGL_LSB                          (5)
#define FEC_LTPC_TXK_OTFC_SW_TRG0_TDE_FINE_TRG_TGL_WIDTH                        (1)
#define FEC_LTPC_TXK_OTFC_SW_TRG0_TDE_FINE_TRG_TGL_MASK                         (0x00000020)
#define FEC_LTPC_TXK_OTFC_SW_TRG0_TDE_FINE_TRG_TGL_BIT                          (0x00000020)

#define FEC_LTPC_TXK_OTFC_SW_TRG0_ETDPD_TRG_TGL_LSB                             (4)
#define FEC_LTPC_TXK_OTFC_SW_TRG0_ETDPD_TRG_TGL_WIDTH                           (1)
#define FEC_LTPC_TXK_OTFC_SW_TRG0_ETDPD_TRG_TGL_MASK                            (0x00000010)
#define FEC_LTPC_TXK_OTFC_SW_TRG0_ETDPD_TRG_TGL_BIT                             (0x00000010)

#define FEC_LTPC_TXK_OTFC_SW_TRG0_DDPC_TRG_TGL_LSB                              (3)
#define FEC_LTPC_TXK_OTFC_SW_TRG0_DDPC_TRG_TGL_WIDTH                            (1)
#define FEC_LTPC_TXK_OTFC_SW_TRG0_DDPC_TRG_TGL_MASK                             (0x00000008)
#define FEC_LTPC_TXK_OTFC_SW_TRG0_DDPC_TRG_TGL_BIT                              (0x00000008)

#define FEC_LTPC_TXK_OTFC_SW_TRG0_DDPC_MSEL_LSB                                 (1)
#define FEC_LTPC_TXK_OTFC_SW_TRG0_DDPC_MSEL_WIDTH                               (2)
#define FEC_LTPC_TXK_OTFC_SW_TRG0_DDPC_MSEL_MASK                                (0x00000006)

#define FEC_LTPC_TXK_OTFC_SW_TRG0_DDPC_TRG_SWEN_LSB                             (0)
#define FEC_LTPC_TXK_OTFC_SW_TRG0_DDPC_TRG_SWEN_WIDTH                           (1)
#define FEC_LTPC_TXK_OTFC_SW_TRG0_DDPC_TRG_SWEN_MASK                            (0x00000001)
#define FEC_LTPC_TXK_OTFC_SW_TRG0_DDPC_TRG_SWEN_BIT                             (0x00000001)

#define FEC_LTPC_TXK_LOG_CON0_LOG_TXK_PATH_SEL_LSB                              (0)
#define FEC_LTPC_TXK_LOG_CON0_LOG_TXK_PATH_SEL_WIDTH                            (1)
#define FEC_LTPC_TXK_LOG_CON0_LOG_TXK_PATH_SEL_MASK                             (0x00000001)
#define FEC_LTPC_TXK_LOG_CON0_LOG_TXK_PATH_SEL_BIT                              (0x00000001)

#define FEC_LTPC_TXK_LOG_CON1_LOG_WIN_LSB                                       (31)
#define FEC_LTPC_TXK_LOG_CON1_LOG_WIN_WIDTH                                     (1)
#define FEC_LTPC_TXK_LOG_CON1_LOG_WIN_MASK                                      (0x80000000)
#define FEC_LTPC_TXK_LOG_CON1_LOG_WIN_BIT                                       (0x80000000)

#define FEC_LTPC_TXK_LOG_CON1_LOG_MUX_LSB                                       (0)
#define FEC_LTPC_TXK_LOG_CON1_LOG_MUX_WIDTH                                     (2)
#define FEC_LTPC_TXK_LOG_CON1_LOG_MUX_MASK                                      (0x00000003)

#define FEC_LTPC_TXK_SC_IN_SW0_SC_DET_DATA_IN_Q_SW_LSB                          (16)
#define FEC_LTPC_TXK_SC_IN_SW0_SC_DET_DATA_IN_Q_SW_WIDTH                        (10)
#define FEC_LTPC_TXK_SC_IN_SW0_SC_DET_DATA_IN_Q_SW_MASK                         (0x03FF0000)

#define FEC_LTPC_TXK_SC_IN_SW0_SC_DET_DATA_IN_I_SW_LSB                          (0)
#define FEC_LTPC_TXK_SC_IN_SW0_SC_DET_DATA_IN_I_SW_WIDTH                        (10)
#define FEC_LTPC_TXK_SC_IN_SW0_SC_DET_DATA_IN_I_SW_MASK                         (0x000003FF)

#define FEC_LTPC_TXK_SC_IN_SW1_SC_DATA_IN_SWEN_LSB                              (31)
#define FEC_LTPC_TXK_SC_IN_SW1_SC_DATA_IN_SWEN_WIDTH                            (1)
#define FEC_LTPC_TXK_SC_IN_SW1_SC_DATA_IN_SWEN_MASK                             (0x80000000)
#define FEC_LTPC_TXK_SC_IN_SW1_SC_DATA_IN_SWEN_BIT                              (0x80000000)

#define FEC_LTPC_TXK_SC_IN_SW1_SC_REF_DATA_IN_Q_SW_LSB                          (16)
#define FEC_LTPC_TXK_SC_IN_SW1_SC_REF_DATA_IN_Q_SW_WIDTH                        (10)
#define FEC_LTPC_TXK_SC_IN_SW1_SC_REF_DATA_IN_Q_SW_MASK                         (0x03FF0000)

#define FEC_LTPC_TXK_SC_IN_SW1_SC_REF_DATA_IN_I_SW_LSB                          (0)
#define FEC_LTPC_TXK_SC_IN_SW1_SC_REF_DATA_IN_I_SW_WIDTH                        (10)
#define FEC_LTPC_TXK_SC_IN_SW1_SC_REF_DATA_IN_I_SW_MASK                         (0x000003FF)

#define FEC_LTPC_TXK_TTG_CON_TONE_LEN_LSB                                       (0)
#define FEC_LTPC_TXK_TTG_CON_TONE_LEN_WIDTH                                     (25)
#define FEC_LTPC_TXK_TTG_CON_TONE_LEN_MASK                                      (0x01FFFFFF)

#define FEC_LTPC_TXK_TTG_SW_TRG_RFK_2PATH_SEL_LSB                               (7)
#define FEC_LTPC_TXK_TTG_SW_TRG_RFK_2PATH_SEL_WIDTH                             (2)
#define FEC_LTPC_TXK_TTG_SW_TRG_RFK_2PATH_SEL_MASK                              (0x00000180)

#define FEC_LTPC_TXK_TTG_SW_TRG_ET_FAT_TRG_TGL_LSB                              (6)
#define FEC_LTPC_TXK_TTG_SW_TRG_ET_FAT_TRG_TGL_WIDTH                            (1)
#define FEC_LTPC_TXK_TTG_SW_TRG_ET_FAT_TRG_TGL_MASK                             (0x00000040)
#define FEC_LTPC_TXK_TTG_SW_TRG_ET_FAT_TRG_TGL_BIT                              (0x00000040)

#define FEC_LTPC_TXK_TTG_SW_TRG_DPD_FAT_TRG_TGL_LSB                             (5)
#define FEC_LTPC_TXK_TTG_SW_TRG_DPD_FAT_TRG_TGL_WIDTH                           (1)
#define FEC_LTPC_TXK_TTG_SW_TRG_DPD_FAT_TRG_TGL_MASK                            (0x00000020)
#define FEC_LTPC_TXK_TTG_SW_TRG_DPD_FAT_TRG_TGL_BIT                             (0x00000020)

#define FEC_LTPC_TXK_TTG_SW_TRG_TXK_2TONE_SEL_LSB                               (4)
#define FEC_LTPC_TXK_TTG_SW_TRG_TXK_2TONE_SEL_WIDTH                             (1)
#define FEC_LTPC_TXK_TTG_SW_TRG_TXK_2TONE_SEL_MASK                              (0x00000010)
#define FEC_LTPC_TXK_TTG_SW_TRG_TXK_2TONE_SEL_BIT                               (0x00000010)

#define FEC_LTPC_TXK_TTG_SW_TRG_TXK_2TONE_TRG_TGL_LSB                           (3)
#define FEC_LTPC_TXK_TTG_SW_TRG_TXK_2TONE_TRG_TGL_WIDTH                         (1)
#define FEC_LTPC_TXK_TTG_SW_TRG_TXK_2TONE_TRG_TGL_MASK                          (0x00000008)
#define FEC_LTPC_TXK_TTG_SW_TRG_TXK_2TONE_TRG_TGL_BIT                           (0x00000008)

#define FEC_LTPC_TXK_TTG_SW_TRG_TXK_1TONE_1_TRG_TGL_LSB                         (2)
#define FEC_LTPC_TXK_TTG_SW_TRG_TXK_1TONE_1_TRG_TGL_WIDTH                       (1)
#define FEC_LTPC_TXK_TTG_SW_TRG_TXK_1TONE_1_TRG_TGL_MASK                        (0x00000004)
#define FEC_LTPC_TXK_TTG_SW_TRG_TXK_1TONE_1_TRG_TGL_BIT                         (0x00000004)

#define FEC_LTPC_TXK_TTG_SW_TRG_TXK_1TONE_0_TRG_TGL_LSB                         (1)
#define FEC_LTPC_TXK_TTG_SW_TRG_TXK_1TONE_0_TRG_TGL_WIDTH                       (1)
#define FEC_LTPC_TXK_TTG_SW_TRG_TXK_1TONE_0_TRG_TGL_MASK                        (0x00000002)
#define FEC_LTPC_TXK_TTG_SW_TRG_TXK_1TONE_0_TRG_TGL_BIT                         (0x00000002)

#define FEC_LTPC_TXK_TTG_SW_TRG_DET_TRG_TGL_LSB                                 (0)
#define FEC_LTPC_TXK_TTG_SW_TRG_DET_TRG_TGL_WIDTH                               (1)
#define FEC_LTPC_TXK_TTG_SW_TRG_DET_TRG_TGL_MASK                                (0x00000001)
#define FEC_LTPC_TXK_TTG_SW_TRG_DET_TRG_TGL_BIT                                 (0x00000001)

#define FEC_LTPC_TXK_TTG_SW_CON_TONE_SEL_SW_LSB                                 (24)
#define FEC_LTPC_TXK_TTG_SW_CON_TONE_SEL_SW_WIDTH                               (3)
#define FEC_LTPC_TXK_TTG_SW_CON_TONE_SEL_SW_MASK                                (0x07000000)

#define FEC_LTPC_TXK_TTG_SW_CON_TONE_WIN_SW_LSB                                 (23)
#define FEC_LTPC_TXK_TTG_SW_CON_TONE_WIN_SW_WIDTH                               (1)
#define FEC_LTPC_TXK_TTG_SW_CON_TONE_WIN_SW_MASK                                (0x00800000)
#define FEC_LTPC_TXK_TTG_SW_CON_TONE_WIN_SW_BIT                                 (0x00800000)

#define FEC_LTPC_TXK_TTG_SW_CON_TONE_SWEN_LSB                                   (22)
#define FEC_LTPC_TXK_TTG_SW_CON_TONE_SWEN_WIDTH                                 (1)
#define FEC_LTPC_TXK_TTG_SW_CON_TONE_SWEN_MASK                                  (0x00400000)
#define FEC_LTPC_TXK_TTG_SW_CON_TONE_SWEN_BIT                                   (0x00400000)

#define FEC_LTPC_TXK_TTG_SW_CON_MEAS_SEL_SW_LSB                                 (21)
#define FEC_LTPC_TXK_TTG_SW_CON_MEAS_SEL_SW_WIDTH                               (1)
#define FEC_LTPC_TXK_TTG_SW_CON_MEAS_SEL_SW_MASK                                (0x00200000)
#define FEC_LTPC_TXK_TTG_SW_CON_MEAS_SEL_SW_BIT                                 (0x00200000)

#define FEC_LTPC_TXK_TTG_SW_CON_MEAS_SEL_SWEN_LSB                               (20)
#define FEC_LTPC_TXK_TTG_SW_CON_MEAS_SEL_SWEN_WIDTH                             (1)
#define FEC_LTPC_TXK_TTG_SW_CON_MEAS_SEL_SWEN_MASK                              (0x00100000)
#define FEC_LTPC_TXK_TTG_SW_CON_MEAS_SEL_SWEN_BIT                               (0x00100000)

#define FEC_LTPC_TXK_TTG_SW_CON_TXK_MEAS_SEL_STEP_SW_LSB                        (11)
#define FEC_LTPC_TXK_TTG_SW_CON_TXK_MEAS_SEL_STEP_SW_WIDTH                      (1)
#define FEC_LTPC_TXK_TTG_SW_CON_TXK_MEAS_SEL_STEP_SW_MASK                       (0x00000800)
#define FEC_LTPC_TXK_TTG_SW_CON_TXK_MEAS_SEL_STEP_SW_BIT                        (0x00000800)

#define FEC_LTPC_TXK_TTG_SW_CON_TXK_MEAS_SEL_INI_SW_LSB                         (10)
#define FEC_LTPC_TXK_TTG_SW_CON_TXK_MEAS_SEL_INI_SW_WIDTH                       (1)
#define FEC_LTPC_TXK_TTG_SW_CON_TXK_MEAS_SEL_INI_SW_MASK                        (0x00000400)
#define FEC_LTPC_TXK_TTG_SW_CON_TXK_MEAS_SEL_INI_SW_BIT                         (0x00000400)

#define FEC_LTPC_TXK_TTG_SW_CON_DFE_TONE_SEL_STEP_SW_LSB                        (7)
#define FEC_LTPC_TXK_TTG_SW_CON_DFE_TONE_SEL_STEP_SW_WIDTH                      (3)
#define FEC_LTPC_TXK_TTG_SW_CON_DFE_TONE_SEL_STEP_SW_MASK                       (0x00000380)

#define FEC_LTPC_TXK_TTG_SW_CON_DFE_TONE_SEL_INI_SW_LSB                         (4)
#define FEC_LTPC_TXK_TTG_SW_CON_DFE_TONE_SEL_INI_SW_WIDTH                       (3)
#define FEC_LTPC_TXK_TTG_SW_CON_DFE_TONE_SEL_INI_SW_MASK                        (0x00000070)

#define FEC_LTPC_TXK_TTG_SW_CON_DFE_TONE_NUM_SW_LSB                             (2)
#define FEC_LTPC_TXK_TTG_SW_CON_DFE_TONE_NUM_SW_WIDTH                           (2)
#define FEC_LTPC_TXK_TTG_SW_CON_DFE_TONE_NUM_SW_MASK                            (0x0000000C)

#define FEC_LTPC_TXK_TTG_SW_CON_DFE_TONE_EN_SW_LSB                              (1)
#define FEC_LTPC_TXK_TTG_SW_CON_DFE_TONE_EN_SW_WIDTH                            (1)
#define FEC_LTPC_TXK_TTG_SW_CON_DFE_TONE_EN_SW_MASK                             (0x00000002)
#define FEC_LTPC_TXK_TTG_SW_CON_DFE_TONE_EN_SW_BIT                              (0x00000002)

#define FEC_LTPC_TXK_TTG_SW_CON_SEL_SET_SWEN_LSB                                (0)
#define FEC_LTPC_TXK_TTG_SW_CON_SEL_SET_SWEN_WIDTH                              (1)
#define FEC_LTPC_TXK_TTG_SW_CON_SEL_SET_SWEN_MASK                               (0x00000001)
#define FEC_LTPC_TXK_TTG_SW_CON_SEL_SET_SWEN_BIT                                (0x00000001)

#define FEC_LTPC_TXK_TRG_AD_DETADC_EN_LSB                                       (10)
#define FEC_LTPC_TXK_TRG_AD_DETADC_EN_WIDTH                                     (1)
#define FEC_LTPC_TXK_TRG_AD_DETADC_EN_MASK                                      (0x00000400)
#define FEC_LTPC_TXK_TRG_AD_DETADC_EN_BIT                                       (0x00000400)

#define FEC_LTPC_TXK_TRG_AD_DETADC_TIMER_SEL_LSB                                (5)
#define FEC_LTPC_TXK_TRG_AD_DETADC_TIMER_SEL_WIDTH                              (5)
#define FEC_LTPC_TXK_TRG_AD_DETADC_TIMER_SEL_MASK                               (0x000003E0)

#define FEC_LTPC_TXK_TRG_AD_OTF_DETADC_TRG_TGL_LSB                              (4)
#define FEC_LTPC_TXK_TRG_AD_OTF_DETADC_TRG_TGL_WIDTH                            (1)
#define FEC_LTPC_TXK_TRG_AD_OTF_DETADC_TRG_TGL_MASK                             (0x00000010)
#define FEC_LTPC_TXK_TRG_AD_OTF_DETADC_TRG_TGL_BIT                              (0x00000010)

#define FEC_LTPC_TXK_TRG_AD_DETADC_CK_DIV_LSB                                   (1)
#define FEC_LTPC_TXK_TRG_AD_DETADC_CK_DIV_WIDTH                                 (3)
#define FEC_LTPC_TXK_TRG_AD_DETADC_CK_DIV_MASK                                  (0x0000000E)

#define FEC_LTPC_TXK_TRG_AD_DETADC_EN_SW_LSB                                    (0)
#define FEC_LTPC_TXK_TRG_AD_DETADC_EN_SW_WIDTH                                  (1)
#define FEC_LTPC_TXK_TRG_AD_DETADC_EN_SW_MASK                                   (0x00000001)
#define FEC_LTPC_TXK_TRG_AD_DETADC_EN_SW_BIT                                    (0x00000001)

#define FEC_LTPC_TXK_TRG_L_DETADC_SET0_L_OTF_GLO_8TS_OFF_LSB                    (16)
#define FEC_LTPC_TXK_TRG_L_DETADC_SET0_L_OTF_GLO_8TS_OFF_WIDTH                  (13)
#define FEC_LTPC_TXK_TRG_L_DETADC_SET0_L_OTF_GLO_8TS_OFF_MASK                   (0x1FFF0000)

#define FEC_LTPC_TXK_TRG_L_DETADC_SET0_L_OTF_GLO_8TS_ON_LSB                     (0)
#define FEC_LTPC_TXK_TRG_L_DETADC_SET0_L_OTF_GLO_8TS_ON_WIDTH                   (13)
#define FEC_LTPC_TXK_TRG_L_DETADC_SET0_L_OTF_GLO_8TS_ON_MASK                    (0x00001FFF)

#define FEC_LTPC_TXK_TRG_T_DETADC_SET_T_OTF_GLO_CHIP_OFF_LSB                    (16)
#define FEC_LTPC_TXK_TRG_T_DETADC_SET_T_OTF_GLO_CHIP_OFF_WIDTH                  (13)
#define FEC_LTPC_TXK_TRG_T_DETADC_SET_T_OTF_GLO_CHIP_OFF_MASK                   (0x1FFF0000)

#define FEC_LTPC_TXK_TRG_T_DETADC_SET_T_OTF_GLO_CHIP_ON_LSB                     (0)
#define FEC_LTPC_TXK_TRG_T_DETADC_SET_T_OTF_GLO_CHIP_ON_WIDTH                   (13)
#define FEC_LTPC_TXK_TRG_T_DETADC_SET_T_OTF_GLO_CHIP_ON_MASK                    (0x00001FFF)

#define FEC_LTPC_TXK_TRG_W_DETADC_SET_W_OTF_GLO_CHIP_OFF_LSB                    (12)
#define FEC_LTPC_TXK_TRG_W_DETADC_SET_W_OTF_GLO_CHIP_OFF_WIDTH                  (12)
#define FEC_LTPC_TXK_TRG_W_DETADC_SET_W_OTF_GLO_CHIP_OFF_MASK                   (0x00FFF000)

#define FEC_LTPC_TXK_TRG_W_DETADC_SET_W_OTF_GLO_CHIP_ON_LSB                     (0)
#define FEC_LTPC_TXK_TRG_W_DETADC_SET_W_OTF_GLO_CHIP_ON_WIDTH                   (12)
#define FEC_LTPC_TXK_TRG_W_DETADC_SET_W_OTF_GLO_CHIP_ON_MASK                    (0x00000FFF)

#define FEC_LTPC_TXK_TRG_C_1X_DETADC_SET_C_1X_OTF_GLO_CHIP_OFF_LSB              (16)
#define FEC_LTPC_TXK_TRG_C_1X_DETADC_SET_C_1X_OTF_GLO_CHIP_OFF_WIDTH            (15)
#define FEC_LTPC_TXK_TRG_C_1X_DETADC_SET_C_1X_OTF_GLO_CHIP_OFF_MASK             (0x7FFF0000)

#define FEC_LTPC_TXK_TRG_C_1X_DETADC_SET_C_1X_OTF_GLO_CHIP_ON_LSB               (0)
#define FEC_LTPC_TXK_TRG_C_1X_DETADC_SET_C_1X_OTF_GLO_CHIP_ON_WIDTH             (15)
#define FEC_LTPC_TXK_TRG_C_1X_DETADC_SET_C_1X_OTF_GLO_CHIP_ON_MASK              (0x00007FFF)

#define FEC_LTPC_TXK_TRG_C_DO_DETADC_SET_C_DO_OTF_GLO_CHIP_OFF_LSB              (16)
#define FEC_LTPC_TXK_TRG_C_DO_DETADC_SET_C_DO_OTF_GLO_CHIP_OFF_WIDTH            (15)
#define FEC_LTPC_TXK_TRG_C_DO_DETADC_SET_C_DO_OTF_GLO_CHIP_OFF_MASK             (0x7FFF0000)

#define FEC_LTPC_TXK_TRG_C_DO_DETADC_SET_C_DO_OTF_GLO_CHIP_ON_LSB               (0)
#define FEC_LTPC_TXK_TRG_C_DO_DETADC_SET_C_DO_OTF_GLO_CHIP_ON_WIDTH             (15)
#define FEC_LTPC_TXK_TRG_C_DO_DETADC_SET_C_DO_OTF_GLO_CHIP_ON_MASK              (0x00007FFF)

#define FEC_LTPC_TXK_TRG_GLO_CON0_GLOi_L_GLO_8TS_LSB                            (16)
#define FEC_LTPC_TXK_TRG_GLO_CON0_GLOi_L_GLO_8TS_WIDTH                          (13)
#define FEC_LTPC_TXK_TRG_GLO_CON0_GLOi_L_GLO_8TS_MASK                           (0x1FFF0000)

#define FEC_LTPC_TXK_TRG_GLO_CON0_GLOi_GLO_CNT_RST_LSB                          (9)
#define FEC_LTPC_TXK_TRG_GLO_CON0_GLOi_GLO_CNT_RST_WIDTH                        (1)
#define FEC_LTPC_TXK_TRG_GLO_CON0_GLOi_GLO_CNT_RST_MASK                         (0x00000200)
#define FEC_LTPC_TXK_TRG_GLO_CON0_GLOi_GLO_CNT_RST_BIT                          (0x00000200)

#define FEC_LTPC_TXK_TRG_GLO_CON0_GLOi_TIMER_SEL_LSB                            (4)
#define FEC_LTPC_TXK_TRG_GLO_CON0_GLOi_TIMER_SEL_WIDTH                          (5)
#define FEC_LTPC_TXK_TRG_GLO_CON0_GLOi_TIMER_SEL_MASK                           (0x000001F0)

#define FEC_LTPC_TXK_TRG_GLO_CON0_GLOi_MODE_SEL_LSB                             (1)
#define FEC_LTPC_TXK_TRG_GLO_CON0_GLOi_MODE_SEL_WIDTH                           (3)
#define FEC_LTPC_TXK_TRG_GLO_CON0_GLOi_MODE_SEL_MASK                            (0x0000000E)

#define FEC_LTPC_TXK_TRG_GLO_CON0_GLOi_TRG_TGL_LSB                              (0)
#define FEC_LTPC_TXK_TRG_GLO_CON0_GLOi_TRG_TGL_WIDTH                            (1)
#define FEC_LTPC_TXK_TRG_GLO_CON0_GLOi_TRG_TGL_MASK                             (0x00000001)
#define FEC_LTPC_TXK_TRG_GLO_CON0_GLOi_TRG_TGL_BIT                              (0x00000001)

#define FEC_LTPC_TXK_TRG_GLO_CON1_GLOi_W_GLO_SLOT_LSB                           (25)
#define FEC_LTPC_TXK_TRG_GLO_CON1_GLOi_W_GLO_SLOT_WIDTH                         (4)
#define FEC_LTPC_TXK_TRG_GLO_CON1_GLOi_W_GLO_SLOT_MASK                          (0x1E000000)

#define FEC_LTPC_TXK_TRG_GLO_CON1_GLOi_W_GLO_CHIP_LSB                           (13)
#define FEC_LTPC_TXK_TRG_GLO_CON1_GLOi_W_GLO_CHIP_WIDTH                         (12)
#define FEC_LTPC_TXK_TRG_GLO_CON1_GLOi_W_GLO_CHIP_MASK                          (0x01FFE000)

#define FEC_LTPC_TXK_TRG_GLO_CON1_GLOi_T_GLO_CHIP_LSB                           (0)
#define FEC_LTPC_TXK_TRG_GLO_CON1_GLOi_T_GLO_CHIP_WIDTH                         (13)
#define FEC_LTPC_TXK_TRG_GLO_CON1_GLOi_T_GLO_CHIP_MASK                          (0x00001FFF)

#define FEC_LTPC_TXK_TRG_GLO_CON2_GLOi_C_DO_GLO_CHIP_LSB                        (16)
#define FEC_LTPC_TXK_TRG_GLO_CON2_GLOi_C_DO_GLO_CHIP_WIDTH                      (15)
#define FEC_LTPC_TXK_TRG_GLO_CON2_GLOi_C_DO_GLO_CHIP_MASK                       (0x7FFF0000)

#define FEC_LTPC_TXK_TRG_GLO_CON2_GLOi_C_1X_GLO_CHIP_LSB                        (0)
#define FEC_LTPC_TXK_TRG_GLO_CON2_GLOi_C_1X_GLO_CHIP_WIDTH                      (15)
#define FEC_LTPC_TXK_TRG_GLO_CON2_GLOi_C_1X_GLO_CHIP_MASK                       (0x00007FFF)

#define FEC_LTPC_REF_DFE_CON_REF_NCO_EN_LSB                                     (1)
#define FEC_LTPC_REF_DFE_CON_REF_NCO_EN_WIDTH                                   (1)
#define FEC_LTPC_REF_DFE_CON_REF_NCO_EN_MASK                                    (0x00000002)
#define FEC_LTPC_REF_DFE_CON_REF_NCO_EN_BIT                                     (0x00000002)

#define FEC_LTPC_REF_DFE_CON_REF_SHIFT_X_LSB                                    (0)
#define FEC_LTPC_REF_DFE_CON_REF_SHIFT_X_WIDTH                                  (1)
#define FEC_LTPC_REF_DFE_CON_REF_SHIFT_X_MASK                                   (0x00000001)
#define FEC_LTPC_REF_DFE_CON_REF_SHIFT_X_BIT                                    (0x00000001)

#define FEC_LTPC_REF_DFE_DELAY_GD_TR_SWEN_LSB                                   (16)
#define FEC_LTPC_REF_DFE_DELAY_GD_TR_SWEN_WIDTH                                 (1)
#define FEC_LTPC_REF_DFE_DELAY_GD_TR_SWEN_MASK                                  (0x00010000)
#define FEC_LTPC_REF_DFE_DELAY_GD_TR_SWEN_BIT                                   (0x00010000)

#define FEC_LTPC_REF_DFE_DELAY_DDPC_TR_SWEN_LSB                                 (15)
#define FEC_LTPC_REF_DFE_DELAY_DDPC_TR_SWEN_WIDTH                               (1)
#define FEC_LTPC_REF_DFE_DELAY_DDPC_TR_SWEN_MASK                                (0x00008000)
#define FEC_LTPC_REF_DFE_DELAY_DDPC_TR_SWEN_BIT                                 (0x00008000)

#define FEC_LTPC_REF_DFE_DELAY_REF_TR_IN_LSB                                    (0)
#define FEC_LTPC_REF_DFE_DELAY_REF_TR_IN_WIDTH                                  (15)
#define FEC_LTPC_REF_DFE_DELAY_REF_TR_IN_MASK                                   (0x00007FFF)

#define FEC_LTPC_REF_DFE_DELAY_SW_REF_TRF_SW_LSB                                (9)
#define FEC_LTPC_REF_DFE_DELAY_SW_REF_TRF_SW_WIDTH                              (8)
#define FEC_LTPC_REF_DFE_DELAY_SW_REF_TRF_SW_MASK                               (0x0001FE00)

#define FEC_LTPC_REF_DFE_DELAY_SW_REF_TRI_SW_LSB                                (1)
#define FEC_LTPC_REF_DFE_DELAY_SW_REF_TRI_SW_WIDTH                              (7)
#define FEC_LTPC_REF_DFE_DELAY_SW_REF_TRI_SW_MASK                               (0x000000FE)

#define FEC_LTPC_REF_DFE_DELAY_SW_REF_TR_SWEN_LSB                               (0)
#define FEC_LTPC_REF_DFE_DELAY_SW_REF_TR_SWEN_WIDTH                             (1)
#define FEC_LTPC_REF_DFE_DELAY_SW_REF_TR_SWEN_MASK                              (0x00000001)
#define FEC_LTPC_REF_DFE_DELAY_SW_REF_TR_SWEN_BIT                               (0x00000001)

#define FEC_LTPC_REF_DFE_DELAY_RESULT_REF_TR_SIGN_BIT_HW_LSB                    (15)
#define FEC_LTPC_REF_DFE_DELAY_RESULT_REF_TR_SIGN_BIT_HW_WIDTH                  (1)
#define FEC_LTPC_REF_DFE_DELAY_RESULT_REF_TR_SIGN_BIT_HW_MASK                   (0x00008000)
#define FEC_LTPC_REF_DFE_DELAY_RESULT_REF_TR_SIGN_BIT_HW_BIT                    (0x00008000)

#define FEC_LTPC_REF_DFE_DELAY_RESULT_REF_TRI_HW_LSB                            (8)
#define FEC_LTPC_REF_DFE_DELAY_RESULT_REF_TRI_HW_WIDTH                          (7)
#define FEC_LTPC_REF_DFE_DELAY_RESULT_REF_TRI_HW_MASK                           (0x00007F00)

#define FEC_LTPC_REF_DFE_DELAY_RESULT_REF_TRF_HW_LSB                            (0)
#define FEC_LTPC_REF_DFE_DELAY_RESULT_REF_TRF_HW_WIDTH                          (8)
#define FEC_LTPC_REF_DFE_DELAY_RESULT_REF_TRF_HW_MASK                           (0x000000FF)

#define FEC_LTPC_DET_DFE_CON_DET_TXDFE_LP_EN_LSB                                (10)
#define FEC_LTPC_DET_DFE_CON_DET_TXDFE_LP_EN_WIDTH                              (1)
#define FEC_LTPC_DET_DFE_CON_DET_TXDFE_LP_EN_MASK                               (0x00000400)
#define FEC_LTPC_DET_DFE_CON_DET_TXDFE_LP_EN_BIT                                (0x00000400)

#define FEC_LTPC_DET_DFE_CON_DET_EQLPF_EN_LSB                                   (9)
#define FEC_LTPC_DET_DFE_CON_DET_EQLPF_EN_WIDTH                                 (1)
#define FEC_LTPC_DET_DFE_CON_DET_EQLPF_EN_MASK                                  (0x00000200)
#define FEC_LTPC_DET_DFE_CON_DET_EQLPF_EN_BIT                                   (0x00000200)

#define FEC_LTPC_DET_DFE_CON_DETK_WITH_CMP_LSB                                  (8)
#define FEC_LTPC_DET_DFE_CON_DETK_WITH_CMP_WIDTH                                (1)
#define FEC_LTPC_DET_DFE_CON_DETK_WITH_CMP_MASK                                 (0x00000100)
#define FEC_LTPC_DET_DFE_CON_DETK_WITH_CMP_BIT                                  (0x00000100)

#define FEC_LTPC_DET_DFE_CON_DET_Q_INV_EN_LSB                                   (7)
#define FEC_LTPC_DET_DFE_CON_DET_Q_INV_EN_WIDTH                                 (1)
#define FEC_LTPC_DET_DFE_CON_DET_Q_INV_EN_MASK                                  (0x00000080)
#define FEC_LTPC_DET_DFE_CON_DET_Q_INV_EN_BIT                                   (0x00000080)

#define FEC_LTPC_DET_DFE_CON_DET_CIC_SCALE_LSB                                  (3)
#define FEC_LTPC_DET_DFE_CON_DET_CIC_SCALE_WIDTH                                (4)
#define FEC_LTPC_DET_DFE_CON_DET_CIC_SCALE_MASK                                 (0x00000078)

#define FEC_LTPC_DET_DFE_CON_DET_CIC_DCM_LSB                                    (0)
#define FEC_LTPC_DET_DFE_CON_DET_CIC_DCM_WIDTH                                  (3)
#define FEC_LTPC_DET_DFE_CON_DET_CIC_DCM_MASK                                   (0x00000007)

#define FEC_LTPC_DET_DC_COMP_DET_DC_Gi_CMP_Q_LSB                                (16)
#define FEC_LTPC_DET_DC_COMP_DET_DC_Gi_CMP_Q_WIDTH                              (10)
#define FEC_LTPC_DET_DC_COMP_DET_DC_Gi_CMP_Q_MASK                               (0x03FF0000)

#define FEC_LTPC_DET_DC_COMP_DET_DC_Gi_CMP_I_LSB                                (0)
#define FEC_LTPC_DET_DC_COMP_DET_DC_Gi_CMP_I_WIDTH                              (10)
#define FEC_LTPC_DET_DC_COMP_DET_DC_Gi_CMP_I_MASK                               (0x000003FF)

#define FEC_LTPC_DET_DC_COMP_OFST_DET_DC_Gi_CMP_OFST_Q_LSB                      (16)
#define FEC_LTPC_DET_DC_COMP_OFST_DET_DC_Gi_CMP_OFST_Q_WIDTH                    (10)
#define FEC_LTPC_DET_DC_COMP_OFST_DET_DC_Gi_CMP_OFST_Q_MASK                     (0x03FF0000)

#define FEC_LTPC_DET_DC_COMP_OFST_DET_DC_Gi_CMP_OFST_I_LSB                      (0)
#define FEC_LTPC_DET_DC_COMP_OFST_DET_DC_Gi_CMP_OFST_I_WIDTH                    (10)
#define FEC_LTPC_DET_DC_COMP_OFST_DET_DC_Gi_CMP_OFST_I_MASK                     (0x000003FF)

#define FEC_LTPC_DET_FIIQ_COMP0_DET_FIIQ_MID_GAIN_CMP_LSB                       (7)
#define FEC_LTPC_DET_FIIQ_COMP0_DET_FIIQ_MID_GAIN_CMP_WIDTH                     (8)
#define FEC_LTPC_DET_FIIQ_COMP0_DET_FIIQ_MID_GAIN_CMP_MASK                      (0x00007F80)

#define FEC_LTPC_DET_FIIQ_COMP0_DET_FIIQ_MID_PHASE_CMP_LSB                      (0)
#define FEC_LTPC_DET_FIIQ_COMP0_DET_FIIQ_MID_PHASE_CMP_WIDTH                    (7)
#define FEC_LTPC_DET_FIIQ_COMP0_DET_FIIQ_MID_PHASE_CMP_MASK                     (0x0000007F)

#define FEC_LTPC_DET_FIIQ_COMP1_DET_FIIQ_LOW_GAIN_CMP_LSB                       (7)
#define FEC_LTPC_DET_FIIQ_COMP1_DET_FIIQ_LOW_GAIN_CMP_WIDTH                     (8)
#define FEC_LTPC_DET_FIIQ_COMP1_DET_FIIQ_LOW_GAIN_CMP_MASK                      (0x00007F80)

#define FEC_LTPC_DET_FIIQ_COMP1_DET_FIIQ_LOW_PHASE_CMP_LSB                      (0)
#define FEC_LTPC_DET_FIIQ_COMP1_DET_FIIQ_LOW_PHASE_CMP_WIDTH                    (7)
#define FEC_LTPC_DET_FIIQ_COMP1_DET_FIIQ_LOW_PHASE_CMP_MASK                     (0x0000007F)

#define FEC_LTPC_DET_EQLPF_0_MID_C_DET_EQLPF_Q_MID_C0_LSB                       (16)
#define FEC_LTPC_DET_EQLPF_0_MID_C_DET_EQLPF_Q_MID_C0_WIDTH                     (12)
#define FEC_LTPC_DET_EQLPF_0_MID_C_DET_EQLPF_Q_MID_C0_MASK                      (0x0FFF0000)

#define FEC_LTPC_DET_EQLPF_0_MID_C_DET_EQLPF_I_MID_C0_LSB                       (0)
#define FEC_LTPC_DET_EQLPF_0_MID_C_DET_EQLPF_I_MID_C0_WIDTH                     (12)
#define FEC_LTPC_DET_EQLPF_0_MID_C_DET_EQLPF_I_MID_C0_MASK                      (0x00000FFF)

#define FEC_LTPC_DET_EQLPF_1_MID_C_DET_EQLPF_Q_MID_C1_LSB                       (16)
#define FEC_LTPC_DET_EQLPF_1_MID_C_DET_EQLPF_Q_MID_C1_WIDTH                     (12)
#define FEC_LTPC_DET_EQLPF_1_MID_C_DET_EQLPF_Q_MID_C1_MASK                      (0x0FFF0000)

#define FEC_LTPC_DET_EQLPF_1_MID_C_DET_EQLPF_I_MID_C1_LSB                       (0)
#define FEC_LTPC_DET_EQLPF_1_MID_C_DET_EQLPF_I_MID_C1_WIDTH                     (12)
#define FEC_LTPC_DET_EQLPF_1_MID_C_DET_EQLPF_I_MID_C1_MASK                      (0x00000FFF)

#define FEC_LTPC_DET_EQLPF_2_MID_C_DET_EQLPF_Q_MID_C2_LSB                       (16)
#define FEC_LTPC_DET_EQLPF_2_MID_C_DET_EQLPF_Q_MID_C2_WIDTH                     (12)
#define FEC_LTPC_DET_EQLPF_2_MID_C_DET_EQLPF_Q_MID_C2_MASK                      (0x0FFF0000)

#define FEC_LTPC_DET_EQLPF_2_MID_C_DET_EQLPF_I_MID_C2_LSB                       (0)
#define FEC_LTPC_DET_EQLPF_2_MID_C_DET_EQLPF_I_MID_C2_WIDTH                     (12)
#define FEC_LTPC_DET_EQLPF_2_MID_C_DET_EQLPF_I_MID_C2_MASK                      (0x00000FFF)

#define FEC_LTPC_DET_EQLPF_3_MID_C_DET_EQLPF_Q_MID_C3_LSB                       (16)
#define FEC_LTPC_DET_EQLPF_3_MID_C_DET_EQLPF_Q_MID_C3_WIDTH                     (12)
#define FEC_LTPC_DET_EQLPF_3_MID_C_DET_EQLPF_Q_MID_C3_MASK                      (0x0FFF0000)

#define FEC_LTPC_DET_EQLPF_3_MID_C_DET_EQLPF_I_MID_C3_LSB                       (0)
#define FEC_LTPC_DET_EQLPF_3_MID_C_DET_EQLPF_I_MID_C3_WIDTH                     (12)
#define FEC_LTPC_DET_EQLPF_3_MID_C_DET_EQLPF_I_MID_C3_MASK                      (0x00000FFF)

#define FEC_LTPC_DET_EQLPF_4_MID_C_DET_EQLPF_Q_MID_C4_LSB                       (16)
#define FEC_LTPC_DET_EQLPF_4_MID_C_DET_EQLPF_Q_MID_C4_WIDTH                     (12)
#define FEC_LTPC_DET_EQLPF_4_MID_C_DET_EQLPF_Q_MID_C4_MASK                      (0x0FFF0000)

#define FEC_LTPC_DET_EQLPF_4_MID_C_DET_EQLPF_I_MID_C4_LSB                       (0)
#define FEC_LTPC_DET_EQLPF_4_MID_C_DET_EQLPF_I_MID_C4_WIDTH                     (12)
#define FEC_LTPC_DET_EQLPF_4_MID_C_DET_EQLPF_I_MID_C4_MASK                      (0x00000FFF)

#define FEC_LTPC_DET_EQLPF_5_MID_C_DET_EQLPF_Q_MID_C5_LSB                       (16)
#define FEC_LTPC_DET_EQLPF_5_MID_C_DET_EQLPF_Q_MID_C5_WIDTH                     (12)
#define FEC_LTPC_DET_EQLPF_5_MID_C_DET_EQLPF_Q_MID_C5_MASK                      (0x0FFF0000)

#define FEC_LTPC_DET_EQLPF_5_MID_C_DET_EQLPF_I_MID_C5_LSB                       (0)
#define FEC_LTPC_DET_EQLPF_5_MID_C_DET_EQLPF_I_MID_C5_WIDTH                     (12)
#define FEC_LTPC_DET_EQLPF_5_MID_C_DET_EQLPF_I_MID_C5_MASK                      (0x00000FFF)

#define FEC_LTPC_DET_EQLPF_6_MID_C_DET_EQLPF_Q_MID_C6_LSB                       (16)
#define FEC_LTPC_DET_EQLPF_6_MID_C_DET_EQLPF_Q_MID_C6_WIDTH                     (12)
#define FEC_LTPC_DET_EQLPF_6_MID_C_DET_EQLPF_Q_MID_C6_MASK                      (0x0FFF0000)

#define FEC_LTPC_DET_EQLPF_6_MID_C_DET_EQLPF_I_MID_C6_LSB                       (0)
#define FEC_LTPC_DET_EQLPF_6_MID_C_DET_EQLPF_I_MID_C6_WIDTH                     (12)
#define FEC_LTPC_DET_EQLPF_6_MID_C_DET_EQLPF_I_MID_C6_MASK                      (0x00000FFF)

#define FEC_LTPC_DET_EQLPF_7_MID_C_DET_EQLPF_Q_MID_C7_LSB                       (16)
#define FEC_LTPC_DET_EQLPF_7_MID_C_DET_EQLPF_Q_MID_C7_WIDTH                     (12)
#define FEC_LTPC_DET_EQLPF_7_MID_C_DET_EQLPF_Q_MID_C7_MASK                      (0x0FFF0000)

#define FEC_LTPC_DET_EQLPF_7_MID_C_DET_EQLPF_I_MID_C7_LSB                       (0)
#define FEC_LTPC_DET_EQLPF_7_MID_C_DET_EQLPF_I_MID_C7_WIDTH                     (12)
#define FEC_LTPC_DET_EQLPF_7_MID_C_DET_EQLPF_I_MID_C7_MASK                      (0x00000FFF)

#define FEC_LTPC_DET_EQLPF_8_MID_C_DET_EQLPF_Q_MID_C8_LSB                       (16)
#define FEC_LTPC_DET_EQLPF_8_MID_C_DET_EQLPF_Q_MID_C8_WIDTH                     (12)
#define FEC_LTPC_DET_EQLPF_8_MID_C_DET_EQLPF_Q_MID_C8_MASK                      (0x0FFF0000)

#define FEC_LTPC_DET_EQLPF_8_MID_C_DET_EQLPF_I_MID_C8_LSB                       (0)
#define FEC_LTPC_DET_EQLPF_8_MID_C_DET_EQLPF_I_MID_C8_WIDTH                     (12)
#define FEC_LTPC_DET_EQLPF_8_MID_C_DET_EQLPF_I_MID_C8_MASK                      (0x00000FFF)

#define FEC_LTPC_DET_EQLPF_9_MID_C_DET_EQLPF_Q_MID_C9_LSB                       (16)
#define FEC_LTPC_DET_EQLPF_9_MID_C_DET_EQLPF_Q_MID_C9_WIDTH                     (12)
#define FEC_LTPC_DET_EQLPF_9_MID_C_DET_EQLPF_Q_MID_C9_MASK                      (0x0FFF0000)

#define FEC_LTPC_DET_EQLPF_9_MID_C_DET_EQLPF_I_MID_C9_LSB                       (0)
#define FEC_LTPC_DET_EQLPF_9_MID_C_DET_EQLPF_I_MID_C9_WIDTH                     (12)
#define FEC_LTPC_DET_EQLPF_9_MID_C_DET_EQLPF_I_MID_C9_MASK                      (0x00000FFF)

#define FEC_LTPC_DET_EQLPF_10_MID_C_DET_EQLPF_Q_MID_C10_LSB                     (16)
#define FEC_LTPC_DET_EQLPF_10_MID_C_DET_EQLPF_Q_MID_C10_WIDTH                   (12)
#define FEC_LTPC_DET_EQLPF_10_MID_C_DET_EQLPF_Q_MID_C10_MASK                    (0x0FFF0000)

#define FEC_LTPC_DET_EQLPF_10_MID_C_DET_EQLPF_I_MID_C10_LSB                     (0)
#define FEC_LTPC_DET_EQLPF_10_MID_C_DET_EQLPF_I_MID_C10_WIDTH                   (12)
#define FEC_LTPC_DET_EQLPF_10_MID_C_DET_EQLPF_I_MID_C10_MASK                    (0x00000FFF)

#define FEC_LTPC_DET_EQLPF_0_LOW_C_DET_EQLPF_Q_LOW_C0_LSB                       (16)
#define FEC_LTPC_DET_EQLPF_0_LOW_C_DET_EQLPF_Q_LOW_C0_WIDTH                     (12)
#define FEC_LTPC_DET_EQLPF_0_LOW_C_DET_EQLPF_Q_LOW_C0_MASK                      (0x0FFF0000)

#define FEC_LTPC_DET_EQLPF_0_LOW_C_DET_EQLPF_I_LOW_C0_LSB                       (0)
#define FEC_LTPC_DET_EQLPF_0_LOW_C_DET_EQLPF_I_LOW_C0_WIDTH                     (12)
#define FEC_LTPC_DET_EQLPF_0_LOW_C_DET_EQLPF_I_LOW_C0_MASK                      (0x00000FFF)

#define FEC_LTPC_DET_EQLPF_1_LOW_C_DET_EQLPF_Q_LOW_C1_LSB                       (16)
#define FEC_LTPC_DET_EQLPF_1_LOW_C_DET_EQLPF_Q_LOW_C1_WIDTH                     (12)
#define FEC_LTPC_DET_EQLPF_1_LOW_C_DET_EQLPF_Q_LOW_C1_MASK                      (0x0FFF0000)

#define FEC_LTPC_DET_EQLPF_1_LOW_C_DET_EQLPF_I_LOW_C1_LSB                       (0)
#define FEC_LTPC_DET_EQLPF_1_LOW_C_DET_EQLPF_I_LOW_C1_WIDTH                     (12)
#define FEC_LTPC_DET_EQLPF_1_LOW_C_DET_EQLPF_I_LOW_C1_MASK                      (0x00000FFF)

#define FEC_LTPC_DET_EQLPF_2_LOW_C_DET_EQLPF_Q_LOW_C2_LSB                       (16)
#define FEC_LTPC_DET_EQLPF_2_LOW_C_DET_EQLPF_Q_LOW_C2_WIDTH                     (12)
#define FEC_LTPC_DET_EQLPF_2_LOW_C_DET_EQLPF_Q_LOW_C2_MASK                      (0x0FFF0000)

#define FEC_LTPC_DET_EQLPF_2_LOW_C_DET_EQLPF_I_LOW_C2_LSB                       (0)
#define FEC_LTPC_DET_EQLPF_2_LOW_C_DET_EQLPF_I_LOW_C2_WIDTH                     (12)
#define FEC_LTPC_DET_EQLPF_2_LOW_C_DET_EQLPF_I_LOW_C2_MASK                      (0x00000FFF)

#define FEC_LTPC_DET_EQLPF_3_LOW_C_DET_EQLPF_Q_LOW_C3_LSB                       (16)
#define FEC_LTPC_DET_EQLPF_3_LOW_C_DET_EQLPF_Q_LOW_C3_WIDTH                     (12)
#define FEC_LTPC_DET_EQLPF_3_LOW_C_DET_EQLPF_Q_LOW_C3_MASK                      (0x0FFF0000)

#define FEC_LTPC_DET_EQLPF_3_LOW_C_DET_EQLPF_I_LOW_C3_LSB                       (0)
#define FEC_LTPC_DET_EQLPF_3_LOW_C_DET_EQLPF_I_LOW_C3_WIDTH                     (12)
#define FEC_LTPC_DET_EQLPF_3_LOW_C_DET_EQLPF_I_LOW_C3_MASK                      (0x00000FFF)

#define FEC_LTPC_DET_EQLPF_4_LOW_C_DET_EQLPF_Q_LOW_C4_LSB                       (16)
#define FEC_LTPC_DET_EQLPF_4_LOW_C_DET_EQLPF_Q_LOW_C4_WIDTH                     (12)
#define FEC_LTPC_DET_EQLPF_4_LOW_C_DET_EQLPF_Q_LOW_C4_MASK                      (0x0FFF0000)

#define FEC_LTPC_DET_EQLPF_4_LOW_C_DET_EQLPF_I_LOW_C4_LSB                       (0)
#define FEC_LTPC_DET_EQLPF_4_LOW_C_DET_EQLPF_I_LOW_C4_WIDTH                     (12)
#define FEC_LTPC_DET_EQLPF_4_LOW_C_DET_EQLPF_I_LOW_C4_MASK                      (0x00000FFF)

#define FEC_LTPC_DET_EQLPF_5_LOW_C_DET_EQLPF_Q_LOW_C5_LSB                       (16)
#define FEC_LTPC_DET_EQLPF_5_LOW_C_DET_EQLPF_Q_LOW_C5_WIDTH                     (12)
#define FEC_LTPC_DET_EQLPF_5_LOW_C_DET_EQLPF_Q_LOW_C5_MASK                      (0x0FFF0000)

#define FEC_LTPC_DET_EQLPF_5_LOW_C_DET_EQLPF_I_LOW_C5_LSB                       (0)
#define FEC_LTPC_DET_EQLPF_5_LOW_C_DET_EQLPF_I_LOW_C5_WIDTH                     (12)
#define FEC_LTPC_DET_EQLPF_5_LOW_C_DET_EQLPF_I_LOW_C5_MASK                      (0x00000FFF)

#define FEC_LTPC_DET_EQLPF_6_LOW_C_DET_EQLPF_Q_LOW_C6_LSB                       (16)
#define FEC_LTPC_DET_EQLPF_6_LOW_C_DET_EQLPF_Q_LOW_C6_WIDTH                     (12)
#define FEC_LTPC_DET_EQLPF_6_LOW_C_DET_EQLPF_Q_LOW_C6_MASK                      (0x0FFF0000)

#define FEC_LTPC_DET_EQLPF_6_LOW_C_DET_EQLPF_I_LOW_C6_LSB                       (0)
#define FEC_LTPC_DET_EQLPF_6_LOW_C_DET_EQLPF_I_LOW_C6_WIDTH                     (12)
#define FEC_LTPC_DET_EQLPF_6_LOW_C_DET_EQLPF_I_LOW_C6_MASK                      (0x00000FFF)

#define FEC_LTPC_DET_EQLPF_7_LOW_C_DET_EQLPF_Q_LOW_C7_LSB                       (16)
#define FEC_LTPC_DET_EQLPF_7_LOW_C_DET_EQLPF_Q_LOW_C7_WIDTH                     (12)
#define FEC_LTPC_DET_EQLPF_7_LOW_C_DET_EQLPF_Q_LOW_C7_MASK                      (0x0FFF0000)

#define FEC_LTPC_DET_EQLPF_7_LOW_C_DET_EQLPF_I_LOW_C7_LSB                       (0)
#define FEC_LTPC_DET_EQLPF_7_LOW_C_DET_EQLPF_I_LOW_C7_WIDTH                     (12)
#define FEC_LTPC_DET_EQLPF_7_LOW_C_DET_EQLPF_I_LOW_C7_MASK                      (0x00000FFF)

#define FEC_LTPC_DET_EQLPF_8_LOW_C_DET_EQLPF_Q_LOW_C8_LSB                       (16)
#define FEC_LTPC_DET_EQLPF_8_LOW_C_DET_EQLPF_Q_LOW_C8_WIDTH                     (12)
#define FEC_LTPC_DET_EQLPF_8_LOW_C_DET_EQLPF_Q_LOW_C8_MASK                      (0x0FFF0000)

#define FEC_LTPC_DET_EQLPF_8_LOW_C_DET_EQLPF_I_LOW_C8_LSB                       (0)
#define FEC_LTPC_DET_EQLPF_8_LOW_C_DET_EQLPF_I_LOW_C8_WIDTH                     (12)
#define FEC_LTPC_DET_EQLPF_8_LOW_C_DET_EQLPF_I_LOW_C8_MASK                      (0x00000FFF)

#define FEC_LTPC_DET_EQLPF_9_LOW_C_DET_EQLPF_Q_LOW_C9_LSB                       (16)
#define FEC_LTPC_DET_EQLPF_9_LOW_C_DET_EQLPF_Q_LOW_C9_WIDTH                     (12)
#define FEC_LTPC_DET_EQLPF_9_LOW_C_DET_EQLPF_Q_LOW_C9_MASK                      (0x0FFF0000)

#define FEC_LTPC_DET_EQLPF_9_LOW_C_DET_EQLPF_I_LOW_C9_LSB                       (0)
#define FEC_LTPC_DET_EQLPF_9_LOW_C_DET_EQLPF_I_LOW_C9_WIDTH                     (12)
#define FEC_LTPC_DET_EQLPF_9_LOW_C_DET_EQLPF_I_LOW_C9_MASK                      (0x00000FFF)

#define FEC_LTPC_DET_EQLPF_10_LOW_C_DET_EQLPF_Q_LOW_C10_LSB                     (16)
#define FEC_LTPC_DET_EQLPF_10_LOW_C_DET_EQLPF_Q_LOW_C10_WIDTH                   (12)
#define FEC_LTPC_DET_EQLPF_10_LOW_C_DET_EQLPF_Q_LOW_C10_MASK                    (0x0FFF0000)

#define FEC_LTPC_DET_EQLPF_10_LOW_C_DET_EQLPF_I_LOW_C10_LSB                     (0)
#define FEC_LTPC_DET_EQLPF_10_LOW_C_DET_EQLPF_I_LOW_C10_WIDTH                   (12)
#define FEC_LTPC_DET_EQLPF_10_LOW_C_DET_EQLPF_I_LOW_C10_MASK                    (0x00000FFF)

#define FEC_LTPC_DET_EQLPF_SCALE_DET_EQLPF_Q_LOW_SCALE_LSB                      (12)
#define FEC_LTPC_DET_EQLPF_SCALE_DET_EQLPF_Q_LOW_SCALE_WIDTH                    (4)
#define FEC_LTPC_DET_EQLPF_SCALE_DET_EQLPF_Q_LOW_SCALE_MASK                     (0x0000F000)

#define FEC_LTPC_DET_EQLPF_SCALE_DET_EQLPF_I_LOW_SCALE_LSB                      (8)
#define FEC_LTPC_DET_EQLPF_SCALE_DET_EQLPF_I_LOW_SCALE_WIDTH                    (4)
#define FEC_LTPC_DET_EQLPF_SCALE_DET_EQLPF_I_LOW_SCALE_MASK                     (0x00000F00)

#define FEC_LTPC_DET_EQLPF_SCALE_DET_EQLPF_Q_MID_SCALE_LSB                      (4)
#define FEC_LTPC_DET_EQLPF_SCALE_DET_EQLPF_Q_MID_SCALE_WIDTH                    (4)
#define FEC_LTPC_DET_EQLPF_SCALE_DET_EQLPF_Q_MID_SCALE_MASK                     (0x000000F0)

#define FEC_LTPC_DET_EQLPF_SCALE_DET_EQLPF_I_MID_SCALE_LSB                      (0)
#define FEC_LTPC_DET_EQLPF_SCALE_DET_EQLPF_I_MID_SCALE_WIDTH                    (4)
#define FEC_LTPC_DET_EQLPF_SCALE_DET_EQLPF_I_MID_SCALE_MASK                     (0x0000000F)

#define FEC_LTPC_DET_READY_BIT_CON_DET_DC_CMP_OFST_READY_ASSERT_CLR_LSB         (3)
#define FEC_LTPC_DET_READY_BIT_CON_DET_DC_CMP_OFST_READY_ASSERT_CLR_WIDTH       (1)
#define FEC_LTPC_DET_READY_BIT_CON_DET_DC_CMP_OFST_READY_ASSERT_CLR_MASK        (0x00000008)
#define FEC_LTPC_DET_READY_BIT_CON_DET_DC_CMP_OFST_READY_ASSERT_CLR_BIT         (0x00000008)

#define FEC_LTPC_DET_READY_BIT_CON_DET_DC_CMP_OFST_READY_LSB                    (2)
#define FEC_LTPC_DET_READY_BIT_CON_DET_DC_CMP_OFST_READY_WIDTH                  (1)
#define FEC_LTPC_DET_READY_BIT_CON_DET_DC_CMP_OFST_READY_MASK                   (0x00000004)
#define FEC_LTPC_DET_READY_BIT_CON_DET_DC_CMP_OFST_READY_BIT                    (0x00000004)

#define FEC_LTPC_DET_READY_BIT_CON_TXK_CONFIG_READY_ASSERT_CLR_LSB              (1)
#define FEC_LTPC_DET_READY_BIT_CON_TXK_CONFIG_READY_ASSERT_CLR_WIDTH            (1)
#define FEC_LTPC_DET_READY_BIT_CON_TXK_CONFIG_READY_ASSERT_CLR_MASK             (0x00000002)
#define FEC_LTPC_DET_READY_BIT_CON_TXK_CONFIG_READY_ASSERT_CLR_BIT              (0x00000002)

#define FEC_LTPC_DET_READY_BIT_CON_TXK_CONFIG_READY_LSB                         (0)
#define FEC_LTPC_DET_READY_BIT_CON_TXK_CONFIG_READY_WIDTH                       (1)
#define FEC_LTPC_DET_READY_BIT_CON_TXK_CONFIG_READY_MASK                        (0x00000001)
#define FEC_LTPC_DET_READY_BIT_CON_TXK_CONFIG_READY_BIT                         (0x00000001)

#define FEC_LTPC_DET_DBG0_DET_DC_CMP_OFST_ASSERT_LSB                            (1)
#define FEC_LTPC_DET_DBG0_DET_DC_CMP_OFST_ASSERT_WIDTH                          (1)
#define FEC_LTPC_DET_DBG0_DET_DC_CMP_OFST_ASSERT_MASK                           (0x00000002)
#define FEC_LTPC_DET_DBG0_DET_DC_CMP_OFST_ASSERT_BIT                            (0x00000002)

#define FEC_LTPC_DET_DBG0_TXK_CONFIG_ASSERT_LSB                                 (0)
#define FEC_LTPC_DET_DBG0_TXK_CONFIG_ASSERT_WIDTH                               (1)
#define FEC_LTPC_DET_DBG0_TXK_CONFIG_ASSERT_MASK                                (0x00000001)
#define FEC_LTPC_DET_DBG0_TXK_CONFIG_ASSERT_BIT                                 (0x00000001)

#define FEC_LTPC_DET_DBG1_DET_DC_CMP_Q_LSB                                      (16)
#define FEC_LTPC_DET_DBG1_DET_DC_CMP_Q_WIDTH                                    (10)
#define FEC_LTPC_DET_DBG1_DET_DC_CMP_Q_MASK                                     (0x03FF0000)

#define FEC_LTPC_DET_DBG1_DET_DC_CMP_I_LSB                                      (0)
#define FEC_LTPC_DET_DBG1_DET_DC_CMP_I_WIDTH                                    (10)
#define FEC_LTPC_DET_DBG1_DET_DC_CMP_I_MASK                                     (0x000003FF)

#define FEC_LTPC_DET_DBG2_DET_FIIQ_GAIN_CMP_LSB                                 (7)
#define FEC_LTPC_DET_DBG2_DET_FIIQ_GAIN_CMP_WIDTH                               (8)
#define FEC_LTPC_DET_DBG2_DET_FIIQ_GAIN_CMP_MASK                                (0x00007F80)

#define FEC_LTPC_DET_DBG2_DET_FIIQ_PHASE_CMP_LSB                                (0)
#define FEC_LTPC_DET_DBG2_DET_FIIQ_PHASE_CMP_WIDTH                              (7)
#define FEC_LTPC_DET_DBG2_DET_FIIQ_PHASE_CMP_MASK                               (0x0000007F)

#define FEC_LTPC_RFK_CON0_RFK_WAIT_SAMPLE_LSB                                   (16)
#define FEC_LTPC_RFK_CON0_RFK_WAIT_SAMPLE_WIDTH                                 (16)
#define FEC_LTPC_RFK_CON0_RFK_WAIT_SAMPLE_MASK                                  (0xFFFF0000)

#define FEC_LTPC_RFK_CON0_RFK_MEAS_SAMPLE_LSB                                   (0)
#define FEC_LTPC_RFK_CON0_RFK_MEAS_SAMPLE_WIDTH                                 (16)
#define FEC_LTPC_RFK_CON0_RFK_MEAS_SAMPLE_MASK                                  (0x0000FFFF)

#define FEC_LTPC_RFK_CON1_RFK_DET_TR_LEN_LSB                                    (0)
#define FEC_LTPC_RFK_CON1_RFK_DET_TR_LEN_WIDTH                                  (3)
#define FEC_LTPC_RFK_CON1_RFK_DET_TR_LEN_MASK                                   (0x00000007)

#define FEC_LTPC_RFK_NCO_0_RFK_PHI_0_LSB                                        (0)
#define FEC_LTPC_RFK_NCO_0_RFK_PHI_0_WIDTH                                      (22)
#define FEC_LTPC_RFK_NCO_0_RFK_PHI_0_MASK                                       (0x003FFFFF)

#define FEC_LTPC_RFK_NCO_1_RFK_PHI_1_LSB                                        (0)
#define FEC_LTPC_RFK_NCO_1_RFK_PHI_1_WIDTH                                      (22)
#define FEC_LTPC_RFK_NCO_1_RFK_PHI_1_MASK                                       (0x003FFFFF)

#define FEC_LTPC_RFK_RESULT_DET_ACC_I_SQR_0_DET_ACC_I_SQR_0_LSB                 (0)
#define FEC_LTPC_RFK_RESULT_DET_ACC_I_SQR_0_DET_ACC_I_SQR_0_WIDTH               (28)
#define FEC_LTPC_RFK_RESULT_DET_ACC_I_SQR_0_DET_ACC_I_SQR_0_MASK                (0x0FFFFFFF)

#define FEC_LTPC_RFK_RESULT_DET_ACC_Q_SQR_0_DET_ACC_Q_SQR_0_LSB                 (0)
#define FEC_LTPC_RFK_RESULT_DET_ACC_Q_SQR_0_DET_ACC_Q_SQR_0_WIDTH               (28)
#define FEC_LTPC_RFK_RESULT_DET_ACC_Q_SQR_0_DET_ACC_Q_SQR_0_MASK                (0x0FFFFFFF)

#define FEC_LTPC_RFK_RESULT_DET_ACC_I_0_DET_ACC_I_0_LSB                         (0)
#define FEC_LTPC_RFK_RESULT_DET_ACC_I_0_DET_ACC_I_0_WIDTH                       (28)
#define FEC_LTPC_RFK_RESULT_DET_ACC_I_0_DET_ACC_I_0_MASK                        (0x0FFFFFFF)

#define FEC_LTPC_RFK_RESULT_DET_ACC_Q_0_DET_ACC_Q_0_LSB                         (0)
#define FEC_LTPC_RFK_RESULT_DET_ACC_Q_0_DET_ACC_Q_0_WIDTH                       (28)
#define FEC_LTPC_RFK_RESULT_DET_ACC_Q_0_DET_ACC_Q_0_MASK                        (0x0FFFFFFF)

#define FEC_LTPC_RFK_RESULT_DET_ACC_IQ_0_DET_ACC_IQ_0_LSB                       (0)
#define FEC_LTPC_RFK_RESULT_DET_ACC_IQ_0_DET_ACC_IQ_0_WIDTH                     (28)
#define FEC_LTPC_RFK_RESULT_DET_ACC_IQ_0_DET_ACC_IQ_0_MASK                      (0x0FFFFFFF)

#define FEC_LTPC_RFK_RESULT_DET_ACC_I_SQR_1_DET_ACC_I_SQR_1_LSB                 (0)
#define FEC_LTPC_RFK_RESULT_DET_ACC_I_SQR_1_DET_ACC_I_SQR_1_WIDTH               (28)
#define FEC_LTPC_RFK_RESULT_DET_ACC_I_SQR_1_DET_ACC_I_SQR_1_MASK                (0x0FFFFFFF)

#define FEC_LTPC_RFK_RESULT_DET_ACC_Q_SQR_1_DET_ACC_Q_SQR_1_LSB                 (0)
#define FEC_LTPC_RFK_RESULT_DET_ACC_Q_SQR_1_DET_ACC_Q_SQR_1_WIDTH               (28)
#define FEC_LTPC_RFK_RESULT_DET_ACC_Q_SQR_1_DET_ACC_Q_SQR_1_MASK                (0x0FFFFFFF)

#define FEC_LTPC_RFK_RESULT_DET_ACC_I_1_DET_ACC_I_1_LSB                         (0)
#define FEC_LTPC_RFK_RESULT_DET_ACC_I_1_DET_ACC_I_1_WIDTH                       (28)
#define FEC_LTPC_RFK_RESULT_DET_ACC_I_1_DET_ACC_I_1_MASK                        (0x0FFFFFFF)

#define FEC_LTPC_RFK_RESULT_DET_ACC_Q_1_DET_ACC_Q_1_LSB                         (0)
#define FEC_LTPC_RFK_RESULT_DET_ACC_Q_1_DET_ACC_Q_1_WIDTH                       (28)
#define FEC_LTPC_RFK_RESULT_DET_ACC_Q_1_DET_ACC_Q_1_MASK                        (0x0FFFFFFF)

#define FEC_LTPC_RFK_RESULT_DET_ACC_IQ_1_DET_ACC_IQ_1_LSB                       (0)
#define FEC_LTPC_RFK_RESULT_DET_ACC_IQ_1_DET_ACC_IQ_1_WIDTH                     (28)
#define FEC_LTPC_RFK_RESULT_DET_ACC_IQ_1_DET_ACC_IQ_1_MASK                      (0x0FFFFFFF)

#define FEC_LTPC_RFK_RESULT_NCO_ACC_I_P0_RFK_NCO_ACC_I_P0_LSB                   (0)
#define FEC_LTPC_RFK_RESULT_NCO_ACC_I_P0_RFK_NCO_ACC_I_P0_WIDTH                 (28)
#define FEC_LTPC_RFK_RESULT_NCO_ACC_I_P0_RFK_NCO_ACC_I_P0_MASK                  (0x0FFFFFFF)

#define FEC_LTPC_RFK_RESULT_NCO_ACC_I_N0_RFK_NCO_ACC_I_N0_LSB                   (0)
#define FEC_LTPC_RFK_RESULT_NCO_ACC_I_N0_RFK_NCO_ACC_I_N0_WIDTH                 (28)
#define FEC_LTPC_RFK_RESULT_NCO_ACC_I_N0_RFK_NCO_ACC_I_N0_MASK                  (0x0FFFFFFF)

#define FEC_LTPC_RFK_RESULT_NCO_ACC_Q_P0_RFK_NCO_ACC_Q_P0_LSB                   (0)
#define FEC_LTPC_RFK_RESULT_NCO_ACC_Q_P0_RFK_NCO_ACC_Q_P0_WIDTH                 (28)
#define FEC_LTPC_RFK_RESULT_NCO_ACC_Q_P0_RFK_NCO_ACC_Q_P0_MASK                  (0x0FFFFFFF)

#define FEC_LTPC_RFK_RESULT_NCO_ACC_Q_N0_RFK_NCO_ACC_Q_N0_LSB                   (0)
#define FEC_LTPC_RFK_RESULT_NCO_ACC_Q_N0_RFK_NCO_ACC_Q_N0_WIDTH                 (28)
#define FEC_LTPC_RFK_RESULT_NCO_ACC_Q_N0_RFK_NCO_ACC_Q_N0_MASK                  (0x0FFFFFFF)

#define FEC_LTPC_RFK_RESULT_ACC_I_0_RFK_ACC_I_0_LSB                             (0)
#define FEC_LTPC_RFK_RESULT_ACC_I_0_RFK_ACC_I_0_WIDTH                           (28)
#define FEC_LTPC_RFK_RESULT_ACC_I_0_RFK_ACC_I_0_MASK                            (0x0FFFFFFF)

#define FEC_LTPC_RFK_RESULT_ACC_Q_0_RFK_ACC_Q_0_LSB                             (0)
#define FEC_LTPC_RFK_RESULT_ACC_Q_0_RFK_ACC_Q_0_WIDTH                           (28)
#define FEC_LTPC_RFK_RESULT_ACC_Q_0_RFK_ACC_Q_0_MASK                            (0x0FFFFFFF)

#define FEC_LTPC_RFK_RESULT_NCO_ACC_I_P1_RFK_NCO_ACC_I_P1_LSB                   (0)
#define FEC_LTPC_RFK_RESULT_NCO_ACC_I_P1_RFK_NCO_ACC_I_P1_WIDTH                 (28)
#define FEC_LTPC_RFK_RESULT_NCO_ACC_I_P1_RFK_NCO_ACC_I_P1_MASK                  (0x0FFFFFFF)

#define FEC_LTPC_RFK_RESULT_NCO_ACC_I_N1_RFK_NCO_ACC_I_N1_LSB                   (0)
#define FEC_LTPC_RFK_RESULT_NCO_ACC_I_N1_RFK_NCO_ACC_I_N1_WIDTH                 (28)
#define FEC_LTPC_RFK_RESULT_NCO_ACC_I_N1_RFK_NCO_ACC_I_N1_MASK                  (0x0FFFFFFF)

#define FEC_LTPC_RFK_RESULT_NCO_ACC_Q_P1_RFK_NCO_ACC_Q_P1_LSB                   (0)
#define FEC_LTPC_RFK_RESULT_NCO_ACC_Q_P1_RFK_NCO_ACC_Q_P1_WIDTH                 (28)
#define FEC_LTPC_RFK_RESULT_NCO_ACC_Q_P1_RFK_NCO_ACC_Q_P1_MASK                  (0x0FFFFFFF)

#define FEC_LTPC_RFK_RESULT_NCO_ACC_Q_N1_RFK_NCO_ACC_Q_N1_LSB                   (0)
#define FEC_LTPC_RFK_RESULT_NCO_ACC_Q_N1_RFK_NCO_ACC_Q_N1_WIDTH                 (28)
#define FEC_LTPC_RFK_RESULT_NCO_ACC_Q_N1_RFK_NCO_ACC_Q_N1_MASK                  (0x0FFFFFFF)

#define FEC_LTPC_RFK_RESULT_ACC_I_1_RFK_ACC_I_1_LSB                             (0)
#define FEC_LTPC_RFK_RESULT_ACC_I_1_RFK_ACC_I_1_WIDTH                           (28)
#define FEC_LTPC_RFK_RESULT_ACC_I_1_RFK_ACC_I_1_MASK                            (0x0FFFFFFF)

#define FEC_LTPC_RFK_RESULT_ACC_Q_1_RFK_ACC_Q_1_LSB                             (0)
#define FEC_LTPC_RFK_RESULT_ACC_Q_1_RFK_ACC_Q_1_WIDTH                           (28)
#define FEC_LTPC_RFK_RESULT_ACC_Q_1_RFK_ACC_Q_1_MASK                            (0x0FFFFFFF)

#define FEC_LTPC_DDPC_SET0_DDPC_DEC_IDX_i_LSB                                   (4)
#define FEC_LTPC_DDPC_SET0_DDPC_DEC_IDX_i_WIDTH                                 (2)
#define FEC_LTPC_DDPC_SET0_DDPC_DEC_IDX_i_MASK                                  (0x00000030)

#define FEC_LTPC_DDPC_SET0_DDPC_LEAD_BIT_i_LSB                                  (0)
#define FEC_LTPC_DDPC_SET0_DDPC_LEAD_BIT_i_WIDTH                                (3)
#define FEC_LTPC_DDPC_SET0_DDPC_LEAD_BIT_i_MASK                                 (0x00000007)

#define FEC_LTPC_DDPC_SET1_DDPC_WAIT_SAMPLE_i_LSB                               (16)
#define FEC_LTPC_DDPC_SET1_DDPC_WAIT_SAMPLE_i_WIDTH                             (16)
#define FEC_LTPC_DDPC_SET1_DDPC_WAIT_SAMPLE_i_MASK                              (0xFFFF0000)

#define FEC_LTPC_DDPC_SET1_DDPC_MEAS_SAMPLE_i_LSB                               (0)
#define FEC_LTPC_DDPC_SET1_DDPC_MEAS_SAMPLE_i_WIDTH                             (16)
#define FEC_LTPC_DDPC_SET1_DDPC_MEAS_SAMPLE_i_MASK                              (0x0000FFFF)

#define FEC_LTPC_DDPC_RESULT_DET_ACC_DC0_DDPC_DET_ACC_Q0_LSB                    (16)
#define FEC_LTPC_DDPC_RESULT_DET_ACC_DC0_DDPC_DET_ACC_Q0_WIDTH                  (12)
#define FEC_LTPC_DDPC_RESULT_DET_ACC_DC0_DDPC_DET_ACC_Q0_MASK                   (0x0FFF0000)

#define FEC_LTPC_DDPC_RESULT_DET_ACC_DC0_DDPC_DET_ACC_I0_LSB                    (0)
#define FEC_LTPC_DDPC_RESULT_DET_ACC_DC0_DDPC_DET_ACC_I0_WIDTH                  (12)
#define FEC_LTPC_DDPC_RESULT_DET_ACC_DC0_DDPC_DET_ACC_I0_MASK                   (0x00000FFF)

#define FEC_LTPC_DDPC_RESULT_DET_ACC_POW0_DDPC_DET_ACC_IQ0_LSB                  (0)
#define FEC_LTPC_DDPC_RESULT_DET_ACC_POW0_DDPC_DET_ACC_IQ0_WIDTH                (23)
#define FEC_LTPC_DDPC_RESULT_DET_ACC_POW0_DDPC_DET_ACC_IQ0_MASK                 (0x007FFFFF)

#define FEC_LTPC_DDPC_RESULT_REF_ACC_DC0_DDPC_REF_ACC_Q0_LSB                    (16)
#define FEC_LTPC_DDPC_RESULT_REF_ACC_DC0_DDPC_REF_ACC_Q0_WIDTH                  (12)
#define FEC_LTPC_DDPC_RESULT_REF_ACC_DC0_DDPC_REF_ACC_Q0_MASK                   (0x0FFF0000)

#define FEC_LTPC_DDPC_RESULT_REF_ACC_DC0_DDPC_REF_ACC_I0_LSB                    (0)
#define FEC_LTPC_DDPC_RESULT_REF_ACC_DC0_DDPC_REF_ACC_I0_WIDTH                  (12)
#define FEC_LTPC_DDPC_RESULT_REF_ACC_DC0_DDPC_REF_ACC_I0_MASK                   (0x00000FFF)

#define FEC_LTPC_DDPC_RESULT_REF_ACC_POW0_DDPC_REF_ACC_IQ0_LSB                  (0)
#define FEC_LTPC_DDPC_RESULT_REF_ACC_POW0_DDPC_REF_ACC_IQ0_WIDTH                (23)
#define FEC_LTPC_DDPC_RESULT_REF_ACC_POW0_DDPC_REF_ACC_IQ0_MASK                 (0x007FFFFF)

#define FEC_LTPC_GD_CON0_GD_WAIT_SAMPLE_LSB                                     (16)
#define FEC_LTPC_GD_CON0_GD_WAIT_SAMPLE_WIDTH                                   (16)
#define FEC_LTPC_GD_CON0_GD_WAIT_SAMPLE_MASK                                    (0xFFFF0000)

#define FEC_LTPC_GD_CON0_GD_MEAS_SAMPLE_LSB                                     (0)
#define FEC_LTPC_GD_CON0_GD_MEAS_SAMPLE_WIDTH                                   (16)
#define FEC_LTPC_GD_CON0_GD_MEAS_SAMPLE_MASK                                    (0x0000FFFF)

#define FEC_LTPC_GD_CON1_GD_SHIFT_LSB                                           (0)
#define FEC_LTPC_GD_CON1_GD_SHIFT_WIDTH                                         (3)
#define FEC_LTPC_GD_CON1_GD_SHIFT_MASK                                          (0x00000007)

#define FEC_LTPC_GD_RESULT_DET_DC_I_GD_DET_DC_I_LSB                             (0)
#define FEC_LTPC_GD_RESULT_DET_DC_I_GD_DET_DC_I_WIDTH                           (28)
#define FEC_LTPC_GD_RESULT_DET_DC_I_GD_DET_DC_I_MASK                            (0x0FFFFFFF)

#define FEC_LTPC_GD_RESULT_DET_DC_Q_GD_DET_DC_Q_LSB                             (0)
#define FEC_LTPC_GD_RESULT_DET_DC_Q_GD_DET_DC_Q_WIDTH                           (28)
#define FEC_LTPC_GD_RESULT_DET_DC_Q_GD_DET_DC_Q_MASK                            (0x0FFFFFFF)

#define FEC_LTPC_GD_RESULT_DET_POW_GD_DET_POW_LSB                               (0)
#define FEC_LTPC_GD_RESULT_DET_POW_GD_DET_POW_WIDTH                             (28)
#define FEC_LTPC_GD_RESULT_DET_POW_GD_DET_POW_MASK                              (0x0FFFFFFF)

#define FEC_LTPC_GD_RESULT_REF_DC_I_GD_REF_DC_I_LSB                             (0)
#define FEC_LTPC_GD_RESULT_REF_DC_I_GD_REF_DC_I_WIDTH                           (28)
#define FEC_LTPC_GD_RESULT_REF_DC_I_GD_REF_DC_I_MASK                            (0x0FFFFFFF)

#define FEC_LTPC_GD_RESULT_REF_DC_Q_GD_REF_DC_Q_LSB                             (0)
#define FEC_LTPC_GD_RESULT_REF_DC_Q_GD_REF_DC_Q_WIDTH                           (28)
#define FEC_LTPC_GD_RESULT_REF_DC_Q_GD_REF_DC_Q_MASK                            (0x0FFFFFFF)

#define FEC_LTPC_GD_RESULT_REF_POW_GD_REF_POW_LSB                               (0)
#define FEC_LTPC_GD_RESULT_REF_POW_GD_REF_POW_WIDTH                             (28)
#define FEC_LTPC_GD_RESULT_REF_POW_GD_REF_POW_MASK                              (0x0FFFFFFF)

#define FEC_LTPC_GD_RESULT_CORR_I_GD_CORR_I_LSB                                 (0)
#define FEC_LTPC_GD_RESULT_CORR_I_GD_CORR_I_WIDTH                               (28)
#define FEC_LTPC_GD_RESULT_CORR_I_GD_CORR_I_MASK                                (0x0FFFFFFF)

#define FEC_LTPC_GD_RESULT_CORR_Q_GD_CORR_Q_LSB                                 (0)
#define FEC_LTPC_GD_RESULT_CORR_Q_GD_CORR_Q_WIDTH                               (28)
#define FEC_LTPC_GD_RESULT_CORR_Q_GD_CORR_Q_MASK                                (0x0FFFFFFF)

#define FEC_LTPC_TDE_OTFC_COARSE_CON0_TDE_COARSE_WAIT_SAMPLE_LSB                (16)
#define FEC_LTPC_TDE_OTFC_COARSE_CON0_TDE_COARSE_WAIT_SAMPLE_WIDTH              (16)
#define FEC_LTPC_TDE_OTFC_COARSE_CON0_TDE_COARSE_WAIT_SAMPLE_MASK               (0xFFFF0000)

#define FEC_LTPC_TDE_OTFC_COARSE_CON0_TDE_COARSE_MEAS_SAMPLE_LSB                (0)
#define FEC_LTPC_TDE_OTFC_COARSE_CON0_TDE_COARSE_MEAS_SAMPLE_WIDTH              (16)
#define FEC_LTPC_TDE_OTFC_COARSE_CON0_TDE_COARSE_MEAS_SAMPLE_MASK               (0x0000FFFF)

#define FEC_LTPC_TDE_OTFC_COARSE_CON1_TDE_COARSE_DEC_IDX_LSB                    (4)
#define FEC_LTPC_TDE_OTFC_COARSE_CON1_TDE_COARSE_DEC_IDX_WIDTH                  (2)
#define FEC_LTPC_TDE_OTFC_COARSE_CON1_TDE_COARSE_DEC_IDX_MASK                   (0x00000030)

#define FEC_LTPC_TDE_OTFC_COARSE_CON1_TDE_COARSE_STEP_IDX_LSB                   (3)
#define FEC_LTPC_TDE_OTFC_COARSE_CON1_TDE_COARSE_STEP_IDX_WIDTH                 (1)
#define FEC_LTPC_TDE_OTFC_COARSE_CON1_TDE_COARSE_STEP_IDX_MASK                  (0x00000008)
#define FEC_LTPC_TDE_OTFC_COARSE_CON1_TDE_COARSE_STEP_IDX_BIT                   (0x00000008)

#define FEC_LTPC_TDE_OTFC_COARSE_CON1_TDE_COARSE_SHIFT_LSB                      (0)
#define FEC_LTPC_TDE_OTFC_COARSE_CON1_TDE_COARSE_SHIFT_WIDTH                    (3)
#define FEC_LTPC_TDE_OTFC_COARSE_CON1_TDE_COARSE_SHIFT_MASK                     (0x00000007)

#define FEC_LTPC_TDE_OTFC_COARSE_CON2_TDE_COARSE_NUM_LSB                        (14)
#define FEC_LTPC_TDE_OTFC_COARSE_CON2_TDE_COARSE_NUM_WIDTH                      (4)
#define FEC_LTPC_TDE_OTFC_COARSE_CON2_TDE_COARSE_NUM_MASK                       (0x0003C000)

#define FEC_LTPC_TDE_OTFC_COARSE_CON2_TDE_COARSE_SETTLE_TIME_LSB                (6)
#define FEC_LTPC_TDE_OTFC_COARSE_CON2_TDE_COARSE_SETTLE_TIME_WIDTH              (8)
#define FEC_LTPC_TDE_OTFC_COARSE_CON2_TDE_COARSE_SETTLE_TIME_MASK               (0x00003FC0)

#define FEC_LTPC_TDE_OTFC_COARSE_CON2_TDE_DELAY_REF_INIT_LSB                    (0)
#define FEC_LTPC_TDE_OTFC_COARSE_CON2_TDE_DELAY_REF_INIT_WIDTH                  (6)
#define FEC_LTPC_TDE_OTFC_COARSE_CON2_TDE_DELAY_REF_INIT_MASK                   (0x0000003F)

#define FEC_LTPC_TDE_OTFC_FINE_CON0_TDE_FINE_WAIT_SAMPLE_LSB                    (16)
#define FEC_LTPC_TDE_OTFC_FINE_CON0_TDE_FINE_WAIT_SAMPLE_WIDTH                  (16)
#define FEC_LTPC_TDE_OTFC_FINE_CON0_TDE_FINE_WAIT_SAMPLE_MASK                   (0xFFFF0000)

#define FEC_LTPC_TDE_OTFC_FINE_CON0_TDE_FINE_MEAS_SAMPLE_LSB                    (0)
#define FEC_LTPC_TDE_OTFC_FINE_CON0_TDE_FINE_MEAS_SAMPLE_WIDTH                  (16)
#define FEC_LTPC_TDE_OTFC_FINE_CON0_TDE_FINE_MEAS_SAMPLE_MASK                   (0x0000FFFF)

#define FEC_LTPC_TDE_OTFC_FINE_CON1_TDE_FINE_DEC_IDX_LSB                        (4)
#define FEC_LTPC_TDE_OTFC_FINE_CON1_TDE_FINE_DEC_IDX_WIDTH                      (2)
#define FEC_LTPC_TDE_OTFC_FINE_CON1_TDE_FINE_DEC_IDX_MASK                       (0x00000030)

#define FEC_LTPC_TDE_OTFC_FINE_CON1_TDE_FINE_STEP_IDX_LSB                       (3)
#define FEC_LTPC_TDE_OTFC_FINE_CON1_TDE_FINE_STEP_IDX_WIDTH                     (1)
#define FEC_LTPC_TDE_OTFC_FINE_CON1_TDE_FINE_STEP_IDX_MASK                      (0x00000008)
#define FEC_LTPC_TDE_OTFC_FINE_CON1_TDE_FINE_STEP_IDX_BIT                       (0x00000008)

#define FEC_LTPC_TDE_OTFC_FINE_CON1_TDE_FINE_SHIFT_LSB                          (0)
#define FEC_LTPC_TDE_OTFC_FINE_CON1_TDE_FINE_SHIFT_WIDTH                        (3)
#define FEC_LTPC_TDE_OTFC_FINE_CON1_TDE_FINE_SHIFT_MASK                         (0x00000007)

#define FEC_LTPC_TDE_OTFC_FINE_CON2_TDE_MIN_POW_LSB                             (8)
#define FEC_LTPC_TDE_OTFC_FINE_CON2_TDE_MIN_POW_WIDTH                           (7)
#define FEC_LTPC_TDE_OTFC_FINE_CON2_TDE_MIN_POW_MASK                            (0x00007F00)

#define FEC_LTPC_TDE_OTFC_FINE_CON2_TDE_MAX_DELAY_EST_LSB                       (0)
#define FEC_LTPC_TDE_OTFC_FINE_CON2_TDE_MAX_DELAY_EST_WIDTH                     (8)
#define FEC_LTPC_TDE_OTFC_FINE_CON2_TDE_MAX_DELAY_EST_MASK                      (0x000000FF)

#define FEC_LTPC_TDE_OTFC_DEALY_EST_TDE_DELAY_EST_LSB                           (0)
#define FEC_LTPC_TDE_OTFC_DEALY_EST_TDE_DELAY_EST_WIDTH                         (14)
#define FEC_LTPC_TDE_OTFC_DEALY_EST_TDE_DELAY_EST_MASK                          (0x00003FFF)

#define FEC_LTPC_TDE_OTFC_DEALY_EST_DETAIL_TDE_DELAY_EST_COARSE_LSB             (14)
#define FEC_LTPC_TDE_OTFC_DEALY_EST_DETAIL_TDE_DELAY_EST_COARSE_WIDTH           (6)
#define FEC_LTPC_TDE_OTFC_DEALY_EST_DETAIL_TDE_DELAY_EST_COARSE_MASK            (0x000FC000)

#define FEC_LTPC_TDE_OTFC_DEALY_EST_DETAIL_TDE_DELAY_EST_FINE_LSB               (0)
#define FEC_LTPC_TDE_OTFC_DEALY_EST_DETAIL_TDE_DELAY_EST_FINE_WIDTH             (14)
#define FEC_LTPC_TDE_OTFC_DEALY_EST_DETAIL_TDE_DELAY_EST_FINE_MASK              (0x00003FFF)

#define FEC_LTPC_TDE_OTFC_CORR_HW0_TDE_OTFC_CRQ_M1_T_HW_LSB                     (16)
#define FEC_LTPC_TDE_OTFC_CORR_HW0_TDE_OTFC_CRQ_M1_T_HW_WIDTH                   (14)
#define FEC_LTPC_TDE_OTFC_CORR_HW0_TDE_OTFC_CRQ_M1_T_HW_MASK                    (0x3FFF0000)

#define FEC_LTPC_TDE_OTFC_CORR_HW0_TDE_OTFC_CRI_M1_T_HW_LSB                     (0)
#define FEC_LTPC_TDE_OTFC_CORR_HW0_TDE_OTFC_CRI_M1_T_HW_WIDTH                   (14)
#define FEC_LTPC_TDE_OTFC_CORR_HW0_TDE_OTFC_CRI_M1_T_HW_MASK                    (0x00003FFF)

#define FEC_LTPC_TDE_OTFC_CORR_HW1_TDE_OTFC_CRQ_C0_T_HW_LSB                     (16)
#define FEC_LTPC_TDE_OTFC_CORR_HW1_TDE_OTFC_CRQ_C0_T_HW_WIDTH                   (14)
#define FEC_LTPC_TDE_OTFC_CORR_HW1_TDE_OTFC_CRQ_C0_T_HW_MASK                    (0x3FFF0000)

#define FEC_LTPC_TDE_OTFC_CORR_HW1_TDE_OTFC_CRI_C0_T_HW_LSB                     (0)
#define FEC_LTPC_TDE_OTFC_CORR_HW1_TDE_OTFC_CRI_C0_T_HW_WIDTH                   (14)
#define FEC_LTPC_TDE_OTFC_CORR_HW1_TDE_OTFC_CRI_C0_T_HW_MASK                    (0x00003FFF)

#define FEC_LTPC_TDE_OTFC_CORR_HW2_TDE_OTFC_CRQ_P1_T_HW_LSB                     (16)
#define FEC_LTPC_TDE_OTFC_CORR_HW2_TDE_OTFC_CRQ_P1_T_HW_WIDTH                   (14)
#define FEC_LTPC_TDE_OTFC_CORR_HW2_TDE_OTFC_CRQ_P1_T_HW_MASK                    (0x3FFF0000)

#define FEC_LTPC_TDE_OTFC_CORR_HW2_TDE_OTFC_CRI_P1_T_HW_LSB                     (0)
#define FEC_LTPC_TDE_OTFC_CORR_HW2_TDE_OTFC_CRI_P1_T_HW_WIDTH                   (14)
#define FEC_LTPC_TDE_OTFC_CORR_HW2_TDE_OTFC_CRI_P1_T_HW_MASK                    (0x00003FFF)

#define FEC_LTPC_TDE_OTFC_POW_T_TDE_OTFC_POW_DET_T_HW_LSB                       (16)
#define FEC_LTPC_TDE_OTFC_POW_T_TDE_OTFC_POW_DET_T_HW_WIDTH                     (14)
#define FEC_LTPC_TDE_OTFC_POW_T_TDE_OTFC_POW_DET_T_HW_MASK                      (0x3FFF0000)

#define FEC_LTPC_TDE_OTFC_POW_T_TDE_OTFC_POW_REF_T_HW_LSB                       (0)
#define FEC_LTPC_TDE_OTFC_POW_T_TDE_OTFC_POW_REF_T_HW_WIDTH                     (14)
#define FEC_LTPC_TDE_OTFC_POW_T_TDE_OTFC_POW_REF_T_HW_MASK                      (0x00003FFF)

#define FEC_LTPC_TDE_OTFC_DBG0_TDE_COARSE_MAX_PERF_LSB                          (0)
#define FEC_LTPC_TDE_OTFC_DBG0_TDE_COARSE_MAX_PERF_WIDTH                        (16)
#define FEC_LTPC_TDE_OTFC_DBG0_TDE_COARSE_MAX_PERF_MASK                         (0x0000FFFF)

#define FEC_LTPC_TDE_OTFC_DBG1_TDE_DBG_MUX_EN_LSB                               (4)
#define FEC_LTPC_TDE_OTFC_DBG1_TDE_DBG_MUX_EN_WIDTH                             (1)
#define FEC_LTPC_TDE_OTFC_DBG1_TDE_DBG_MUX_EN_MASK                              (0x00000010)
#define FEC_LTPC_TDE_OTFC_DBG1_TDE_DBG_MUX_EN_BIT                               (0x00000010)

#define FEC_LTPC_TDE_OTFC_DBG1_TDE_DBG_MUX_SEL_LSB                              (0)
#define FEC_LTPC_TDE_OTFC_DBG1_TDE_DBG_MUX_SEL_WIDTH                            (4)
#define FEC_LTPC_TDE_OTFC_DBG1_TDE_DBG_MUX_SEL_MASK                             (0x0000000F)

#define FEC_LTPC_TDE_OTFC_DBG2_TDE_PATH_0_LSB                                   (0)
#define FEC_LTPC_TDE_OTFC_DBG2_TDE_PATH_0_WIDTH                                 (32)
#define FEC_LTPC_TDE_OTFC_DBG2_TDE_PATH_0_MASK                                  (0xFFFFFFFF)

#define FEC_LTPC_TDE_OTFC_DBG3_TDE_PATH_1_LSB                                   (0)
#define FEC_LTPC_TDE_OTFC_DBG3_TDE_PATH_1_WIDTH                                 (32)
#define FEC_LTPC_TDE_OTFC_DBG3_TDE_PATH_1_MASK                                  (0xFFFFFFFF)

#define FEC_LTPC_TDE_OTFC_DBG4_TDE_PATH_2_LSB                                   (0)
#define FEC_LTPC_TDE_OTFC_DBG4_TDE_PATH_2_WIDTH                                 (32)
#define FEC_LTPC_TDE_OTFC_DBG4_TDE_PATH_2_MASK                                  (0xFFFFFFFF)

#define FEC_LTPC_TDE_OTFC_DBG5_TDE_PATH_3_LSB                                   (0)
#define FEC_LTPC_TDE_OTFC_DBG5_TDE_PATH_3_WIDTH                                 (32)
#define FEC_LTPC_TDE_OTFC_DBG5_TDE_PATH_3_MASK                                  (0xFFFFFFFF)

#define FEC_LTPC_TDE_OTFC_DBG6_TDE_PATH_4_LSB                                   (0)
#define FEC_LTPC_TDE_OTFC_DBG6_TDE_PATH_4_WIDTH                                 (32)
#define FEC_LTPC_TDE_OTFC_DBG6_TDE_PATH_4_MASK                                  (0xFFFFFFFF)

#define FEC_LTPC_TDE_OTFC_DBG7_TDE_PATH_5_LSB                                   (0)
#define FEC_LTPC_TDE_OTFC_DBG7_TDE_PATH_5_WIDTH                                 (32)
#define FEC_LTPC_TDE_OTFC_DBG7_TDE_PATH_5_MASK                                  (0xFFFFFFFF)

#define FEC_LTPC_TDE_OTFC_DBG8_TDE_PATH_6_LSB                                   (0)
#define FEC_LTPC_TDE_OTFC_DBG8_TDE_PATH_6_WIDTH                                 (32)
#define FEC_LTPC_TDE_OTFC_DBG8_TDE_PATH_6_MASK                                  (0xFFFFFFFF)

#define FEC_LTPC_TDE_OTFC_DBG9_TDE_PATH_7_LSB                                   (0)
#define FEC_LTPC_TDE_OTFC_DBG9_TDE_PATH_7_WIDTH                                 (32)
#define FEC_LTPC_TDE_OTFC_DBG9_TDE_PATH_7_MASK                                  (0xFFFFFFFF)

#define FEC_LTPC_TDE_OTFC_DBG10_TDE_LEAD_ONE_P1_I_HW_LSB                        (24)
#define FEC_LTPC_TDE_OTFC_DBG10_TDE_LEAD_ONE_P1_I_HW_WIDTH                      (6)
#define FEC_LTPC_TDE_OTFC_DBG10_TDE_LEAD_ONE_P1_I_HW_MASK                       (0x3F000000)

#define FEC_LTPC_TDE_OTFC_DBG10_TDE_LEAD_ONE_C0_Q_HW_LSB                        (18)
#define FEC_LTPC_TDE_OTFC_DBG10_TDE_LEAD_ONE_C0_Q_HW_WIDTH                      (6)
#define FEC_LTPC_TDE_OTFC_DBG10_TDE_LEAD_ONE_C0_Q_HW_MASK                       (0x00FC0000)

#define FEC_LTPC_TDE_OTFC_DBG10_TDE_LEAD_ONE_C0_I_HW_LSB                        (12)
#define FEC_LTPC_TDE_OTFC_DBG10_TDE_LEAD_ONE_C0_I_HW_WIDTH                      (6)
#define FEC_LTPC_TDE_OTFC_DBG10_TDE_LEAD_ONE_C0_I_HW_MASK                       (0x0003F000)

#define FEC_LTPC_TDE_OTFC_DBG10_TDE_LEAD_ONE_M1_Q_HW_LSB                        (6)
#define FEC_LTPC_TDE_OTFC_DBG10_TDE_LEAD_ONE_M1_Q_HW_WIDTH                      (6)
#define FEC_LTPC_TDE_OTFC_DBG10_TDE_LEAD_ONE_M1_Q_HW_MASK                       (0x00000FC0)

#define FEC_LTPC_TDE_OTFC_DBG10_TDE_LEAD_ONE_M1_I_HW_LSB                        (0)
#define FEC_LTPC_TDE_OTFC_DBG10_TDE_LEAD_ONE_M1_I_HW_WIDTH                      (6)
#define FEC_LTPC_TDE_OTFC_DBG10_TDE_LEAD_ONE_M1_I_HW_MASK                       (0x0000003F)

#define FEC_LTPC_TDE_OTFC_DBG11_TDE_ZERO_DENUM_FLAG_LSB                         (18)
#define FEC_LTPC_TDE_OTFC_DBG11_TDE_ZERO_DENUM_FLAG_WIDTH                       (1)
#define FEC_LTPC_TDE_OTFC_DBG11_TDE_ZERO_DENUM_FLAG_MASK                        (0x00040000)
#define FEC_LTPC_TDE_OTFC_DBG11_TDE_ZERO_DENUM_FLAG_BIT                         (0x00040000)

#define FEC_LTPC_TDE_OTFC_DBG11_TDE_LEAD_ONE_DET_HW_LSB                         (12)
#define FEC_LTPC_TDE_OTFC_DBG11_TDE_LEAD_ONE_DET_HW_WIDTH                       (6)
#define FEC_LTPC_TDE_OTFC_DBG11_TDE_LEAD_ONE_DET_HW_MASK                        (0x0003F000)

#define FEC_LTPC_TDE_OTFC_DBG11_TDE_LEAD_ONE_REF_HW_LSB                         (6)
#define FEC_LTPC_TDE_OTFC_DBG11_TDE_LEAD_ONE_REF_HW_WIDTH                       (6)
#define FEC_LTPC_TDE_OTFC_DBG11_TDE_LEAD_ONE_REF_HW_MASK                        (0x00000FC0)

#define FEC_LTPC_TDE_OTFC_DBG11_TDE_LEAD_ONE_P1_Q_HW_LSB                        (0)
#define FEC_LTPC_TDE_OTFC_DBG11_TDE_LEAD_ONE_P1_Q_HW_WIDTH                      (6)
#define FEC_LTPC_TDE_OTFC_DBG11_TDE_LEAD_ONE_P1_Q_HW_MASK                       (0x0000003F)

#define FEC_LTPC_ETDPD_OTFC_CON0_ETDPD_MEAS_SAMPLE_LSB                          (0)
#define FEC_LTPC_ETDPD_OTFC_CON0_ETDPD_MEAS_SAMPLE_WIDTH                        (17)
#define FEC_LTPC_ETDPD_OTFC_CON0_ETDPD_MEAS_SAMPLE_MASK                         (0x0001FFFF)

#define FEC_LTPC_ETDPD_OTFC_CON1_ETDPD_WAIT_SAMPLE_LSB                          (16)
#define FEC_LTPC_ETDPD_OTFC_CON1_ETDPD_WAIT_SAMPLE_WIDTH                        (16)
#define FEC_LTPC_ETDPD_OTFC_CON1_ETDPD_WAIT_SAMPLE_MASK                         (0xFFFF0000)

#define FEC_LTPC_ETDPD_OTFC_CON1_ETDPD_THRESHOLD_LSB                            (3)
#define FEC_LTPC_ETDPD_OTFC_CON1_ETDPD_THRESHOLD_WIDTH                          (4)
#define FEC_LTPC_ETDPD_OTFC_CON1_ETDPD_THRESHOLD_MASK                           (0x00000078)

#define FEC_LTPC_ETDPD_OTFC_CON1_ETDPD_SHIFT_LSB                                (0)
#define FEC_LTPC_ETDPD_OTFC_CON1_ETDPD_SHIFT_WIDTH                              (3)
#define FEC_LTPC_ETDPD_OTFC_CON1_ETDPD_SHIFT_MASK                               (0x00000007)

#define FEC_LTPC_DPD_FK_CON0_DPD_FK_WAIT_SAMPLE_LSB                             (0)
#define FEC_LTPC_DPD_FK_CON0_DPD_FK_WAIT_SAMPLE_WIDTH                           (16)
#define FEC_LTPC_DPD_FK_CON0_DPD_FK_WAIT_SAMPLE_MASK                            (0x0000FFFF)

#define FEC_LTPC_DPD_FK_CON1_DPD_FK_SHIFT_LSB                                   (0)
#define FEC_LTPC_DPD_FK_CON1_DPD_FK_SHIFT_WIDTH                                 (3)
#define FEC_LTPC_DPD_FK_CON1_DPD_FK_SHIFT_MASK                                  (0x00000007)

#define FEC_LTPC_DPD_FK_RAMP_CON_DPD_NUM_SAMPLE_LEVEL_LSB                       (9)
#define FEC_LTPC_DPD_FK_RAMP_CON_DPD_NUM_SAMPLE_LEVEL_WIDTH                     (5)
#define FEC_LTPC_DPD_FK_RAMP_CON_DPD_NUM_SAMPLE_LEVEL_MASK                      (0x00003E00)

#define FEC_LTPC_DPD_FK_RAMP_CON_DPD_NUM_RAMP_PERIOD_LSB                        (0)
#define FEC_LTPC_DPD_FK_RAMP_CON_DPD_NUM_RAMP_PERIOD_WIDTH                      (9)
#define FEC_LTPC_DPD_FK_RAMP_CON_DPD_NUM_RAMP_PERIOD_MASK                       (0x000001FF)

#define FEC_LTPC_ED_RESULT_COR_Q_ETDPD_COR_Qi_LSB                               (0)
#define FEC_LTPC_ED_RESULT_COR_Q_ETDPD_COR_Qi_WIDTH                             (28)
#define FEC_LTPC_ED_RESULT_COR_Q_ETDPD_COR_Qi_MASK                              (0x0FFFFFFF)

#define FEC_LTPC_ED_RESULT_COR_I_ETDPD_COR_Ii_LSB                               (0)
#define FEC_LTPC_ED_RESULT_COR_I_ETDPD_COR_Ii_WIDTH                             (28)
#define FEC_LTPC_ED_RESULT_COR_I_ETDPD_COR_Ii_MASK                              (0x0FFFFFFF)

#define FEC_LTPC_ED_RESULT_POW_ETDPD_POWi_LSB                                   (0)
#define FEC_LTPC_ED_RESULT_POW_ETDPD_POWi_WIDTH                                 (27)
#define FEC_LTPC_ED_RESULT_POW_ETDPD_POWi_MASK                                  (0x07FFFFFF)

#define FEC_LTPC_ED_RESULT_COUNT0_ETDPD_CNT1_LSB                                (16)
#define FEC_LTPC_ED_RESULT_COUNT0_ETDPD_CNT1_WIDTH                              (13)
#define FEC_LTPC_ED_RESULT_COUNT0_ETDPD_CNT1_MASK                               (0x1FFF0000)

#define FEC_LTPC_ED_RESULT_COUNT0_ETDPD_CNT0_LSB                                (0)
#define FEC_LTPC_ED_RESULT_COUNT0_ETDPD_CNT0_WIDTH                              (13)
#define FEC_LTPC_ED_RESULT_COUNT0_ETDPD_CNT0_MASK                               (0x00001FFF)

#define FEC_LTPC_ED_RESULT_COUNT2_ETDPD_CNT3_LSB                                (16)
#define FEC_LTPC_ED_RESULT_COUNT2_ETDPD_CNT3_WIDTH                              (13)
#define FEC_LTPC_ED_RESULT_COUNT2_ETDPD_CNT3_MASK                               (0x1FFF0000)

#define FEC_LTPC_ED_RESULT_COUNT2_ETDPD_CNT2_LSB                                (0)
#define FEC_LTPC_ED_RESULT_COUNT2_ETDPD_CNT2_WIDTH                              (13)
#define FEC_LTPC_ED_RESULT_COUNT2_ETDPD_CNT2_MASK                               (0x00001FFF)

#define FEC_LTPC_ED_RESULT_COUNT4_ETDPD_CNT5_LSB                                (16)
#define FEC_LTPC_ED_RESULT_COUNT4_ETDPD_CNT5_WIDTH                              (13)
#define FEC_LTPC_ED_RESULT_COUNT4_ETDPD_CNT5_MASK                               (0x1FFF0000)

#define FEC_LTPC_ED_RESULT_COUNT4_ETDPD_CNT4_LSB                                (0)
#define FEC_LTPC_ED_RESULT_COUNT4_ETDPD_CNT4_WIDTH                              (13)
#define FEC_LTPC_ED_RESULT_COUNT4_ETDPD_CNT4_MASK                               (0x00001FFF)

#define FEC_LTPC_ED_RESULT_COUNT6_ETDPD_CNT7_LSB                                (16)
#define FEC_LTPC_ED_RESULT_COUNT6_ETDPD_CNT7_WIDTH                              (13)
#define FEC_LTPC_ED_RESULT_COUNT6_ETDPD_CNT7_MASK                               (0x1FFF0000)

#define FEC_LTPC_ED_RESULT_COUNT6_ETDPD_CNT6_LSB                                (0)
#define FEC_LTPC_ED_RESULT_COUNT6_ETDPD_CNT6_WIDTH                              (13)
#define FEC_LTPC_ED_RESULT_COUNT6_ETDPD_CNT6_MASK                               (0x00001FFF)

#define FEC_LTPC_ED_RESULT_COUNT8_ETDPD_CNT9_LSB                                (16)
#define FEC_LTPC_ED_RESULT_COUNT8_ETDPD_CNT9_WIDTH                              (13)
#define FEC_LTPC_ED_RESULT_COUNT8_ETDPD_CNT9_MASK                               (0x1FFF0000)

#define FEC_LTPC_ED_RESULT_COUNT8_ETDPD_CNT8_LSB                                (0)
#define FEC_LTPC_ED_RESULT_COUNT8_ETDPD_CNT8_WIDTH                              (13)
#define FEC_LTPC_ED_RESULT_COUNT8_ETDPD_CNT8_MASK                               (0x00001FFF)

#define FEC_LTPC_ED_RESULT_COUNT10_ETDPD_CNT11_LSB                              (16)
#define FEC_LTPC_ED_RESULT_COUNT10_ETDPD_CNT11_WIDTH                            (13)
#define FEC_LTPC_ED_RESULT_COUNT10_ETDPD_CNT11_MASK                             (0x1FFF0000)

#define FEC_LTPC_ED_RESULT_COUNT10_ETDPD_CNT10_LSB                              (0)
#define FEC_LTPC_ED_RESULT_COUNT10_ETDPD_CNT10_WIDTH                            (13)
#define FEC_LTPC_ED_RESULT_COUNT10_ETDPD_CNT10_MASK                             (0x00001FFF)

#define FEC_LTPC_ED_RESULT_COUNT12_ETDPD_CNT13_LSB                              (16)
#define FEC_LTPC_ED_RESULT_COUNT12_ETDPD_CNT13_WIDTH                            (13)
#define FEC_LTPC_ED_RESULT_COUNT12_ETDPD_CNT13_MASK                             (0x1FFF0000)

#define FEC_LTPC_ED_RESULT_COUNT12_ETDPD_CNT12_LSB                              (0)
#define FEC_LTPC_ED_RESULT_COUNT12_ETDPD_CNT12_WIDTH                            (13)
#define FEC_LTPC_ED_RESULT_COUNT12_ETDPD_CNT12_MASK                             (0x00001FFF)

#define FEC_LTPC_ED_RESULT_COUNT14_ETDPD_CNT15_LSB                              (16)
#define FEC_LTPC_ED_RESULT_COUNT14_ETDPD_CNT15_WIDTH                            (13)
#define FEC_LTPC_ED_RESULT_COUNT14_ETDPD_CNT15_MASK                             (0x1FFF0000)

#define FEC_LTPC_ED_RESULT_COUNT14_ETDPD_CNT14_LSB                              (0)
#define FEC_LTPC_ED_RESULT_COUNT14_ETDPD_CNT14_WIDTH                            (13)
#define FEC_LTPC_ED_RESULT_COUNT14_ETDPD_CNT14_MASK                             (0x00001FFF)

#define FEC_LTPC_DPD_FK_DBG0_RAMP_FINE_CNT_LSB                                  (20)
#define FEC_LTPC_DPD_FK_DBG0_RAMP_FINE_CNT_WIDTH                                (3)
#define FEC_LTPC_DPD_FK_DBG0_RAMP_FINE_CNT_MASK                                 (0x00700000)

#define FEC_LTPC_DPD_FK_DBG0_RAMP_LEVEL_IDX_LSB                                 (15)
#define FEC_LTPC_DPD_FK_DBG0_RAMP_LEVEL_IDX_WIDTH                               (5)
#define FEC_LTPC_DPD_FK_DBG0_RAMP_LEVEL_IDX_MASK                                (0x000F8000)

#define FEC_LTPC_DPD_FK_DBG0_RAMP_SAMPLE_CNT_LSB                                (10)
#define FEC_LTPC_DPD_FK_DBG0_RAMP_SAMPLE_CNT_WIDTH                              (5)
#define FEC_LTPC_DPD_FK_DBG0_RAMP_SAMPLE_CNT_MASK                               (0x00007C00)

#define FEC_LTPC_DPD_FK_DBG0_RAMP_PERIOD_CNT_LSB                                (0)
#define FEC_LTPC_DPD_FK_DBG0_RAMP_PERIOD_CNT_WIDTH                              (10)
#define FEC_LTPC_DPD_FK_DBG0_RAMP_PERIOD_CNT_MASK                               (0x000003FF)

#define FEC_LTPC_TXK_MEAS_SC_SW0_SW_TRG_LSB                                     (24)
#define FEC_LTPC_TXK_MEAS_SC_SW0_SW_TRG_WIDTH                                   (1)
#define FEC_LTPC_TXK_MEAS_SC_SW0_SW_TRG_MASK                                    (0x01000000)
#define FEC_LTPC_TXK_MEAS_SC_SW0_SW_TRG_BIT                                     (0x01000000)

#define FEC_LTPC_TXK_MEAS_SC_SW0_PRE_PROC_DEC_IDX_SWEN_LSB                      (23)
#define FEC_LTPC_TXK_MEAS_SC_SW0_PRE_PROC_DEC_IDX_SWEN_WIDTH                    (1)
#define FEC_LTPC_TXK_MEAS_SC_SW0_PRE_PROC_DEC_IDX_SWEN_MASK                     (0x00800000)
#define FEC_LTPC_TXK_MEAS_SC_SW0_PRE_PROC_DEC_IDX_SWEN_BIT                      (0x00800000)

#define FEC_LTPC_TXK_MEAS_SC_SW0_PRE_PROC_DEC_IDX_SW_LSB                        (21)
#define FEC_LTPC_TXK_MEAS_SC_SW0_PRE_PROC_DEC_IDX_SW_WIDTH                      (2)
#define FEC_LTPC_TXK_MEAS_SC_SW0_PRE_PROC_DEC_IDX_SW_MASK                       (0x00600000)

#define FEC_LTPC_TXK_MEAS_SC_SW0_ACC_X_SHIFT_SW_LSB                             (18)
#define FEC_LTPC_TXK_MEAS_SC_SW0_ACC_X_SHIFT_SW_WIDTH                           (3)
#define FEC_LTPC_TXK_MEAS_SC_SW0_ACC_X_SHIFT_SW_MASK                            (0x001C0000)

#define FEC_LTPC_TXK_MEAS_SC_SW0_SC_SQR_APART_EN_2_SW_LSB                       (17)
#define FEC_LTPC_TXK_MEAS_SC_SW0_SC_SQR_APART_EN_2_SW_WIDTH                     (1)
#define FEC_LTPC_TXK_MEAS_SC_SW0_SC_SQR_APART_EN_2_SW_MASK                      (0x00020000)
#define FEC_LTPC_TXK_MEAS_SC_SW0_SC_SQR_APART_EN_2_SW_BIT                       (0x00020000)

#define FEC_LTPC_TXK_MEAS_SC_SW0_SC_SQR_BYPASS_EN_2_SW_LSB                      (16)
#define FEC_LTPC_TXK_MEAS_SC_SW0_SC_SQR_BYPASS_EN_2_SW_WIDTH                    (1)
#define FEC_LTPC_TXK_MEAS_SC_SW0_SC_SQR_BYPASS_EN_2_SW_MASK                     (0x00010000)
#define FEC_LTPC_TXK_MEAS_SC_SW0_SC_SQR_BYPASS_EN_2_SW_BIT                      (0x00010000)

#define FEC_LTPC_TXK_MEAS_SC_SW0_SC_SQR_APART_EN_1_SW_LSB                       (15)
#define FEC_LTPC_TXK_MEAS_SC_SW0_SC_SQR_APART_EN_1_SW_WIDTH                     (1)
#define FEC_LTPC_TXK_MEAS_SC_SW0_SC_SQR_APART_EN_1_SW_MASK                      (0x00008000)
#define FEC_LTPC_TXK_MEAS_SC_SW0_SC_SQR_APART_EN_1_SW_BIT                       (0x00008000)

#define FEC_LTPC_TXK_MEAS_SC_SW0_SC_SQR_BYPASS_EN_1_SW_LSB                      (14)
#define FEC_LTPC_TXK_MEAS_SC_SW0_SC_SQR_BYPASS_EN_1_SW_WIDTH                    (1)
#define FEC_LTPC_TXK_MEAS_SC_SW0_SC_SQR_BYPASS_EN_1_SW_MASK                     (0x00004000)
#define FEC_LTPC_TXK_MEAS_SC_SW0_SC_SQR_BYPASS_EN_1_SW_BIT                      (0x00004000)

#define FEC_LTPC_TXK_MEAS_SC_SW0_SC_SQR_APART_EN_0_SW_LSB                       (13)
#define FEC_LTPC_TXK_MEAS_SC_SW0_SC_SQR_APART_EN_0_SW_WIDTH                     (1)
#define FEC_LTPC_TXK_MEAS_SC_SW0_SC_SQR_APART_EN_0_SW_MASK                      (0x00002000)
#define FEC_LTPC_TXK_MEAS_SC_SW0_SC_SQR_APART_EN_0_SW_BIT                       (0x00002000)

#define FEC_LTPC_TXK_MEAS_SC_SW0_SC_SQR_BYPASS_EN_0_SW_LSB                      (12)
#define FEC_LTPC_TXK_MEAS_SC_SW0_SC_SQR_BYPASS_EN_0_SW_WIDTH                    (1)
#define FEC_LTPC_TXK_MEAS_SC_SW0_SC_SQR_BYPASS_EN_0_SW_MASK                     (0x00001000)
#define FEC_LTPC_TXK_MEAS_SC_SW0_SC_SQR_BYPASS_EN_0_SW_BIT                      (0x00001000)

#define FEC_LTPC_TXK_MEAS_SC_SW0_SC_MCM_BYPASS_SEL_2_SW_LSB                     (11)
#define FEC_LTPC_TXK_MEAS_SC_SW0_SC_MCM_BYPASS_SEL_2_SW_WIDTH                   (1)
#define FEC_LTPC_TXK_MEAS_SC_SW0_SC_MCM_BYPASS_SEL_2_SW_MASK                    (0x00000800)
#define FEC_LTPC_TXK_MEAS_SC_SW0_SC_MCM_BYPASS_SEL_2_SW_BIT                     (0x00000800)

#define FEC_LTPC_TXK_MEAS_SC_SW0_SC_MCM_FCN_SEL_2_SW_LSB                        (9)
#define FEC_LTPC_TXK_MEAS_SC_SW0_SC_MCM_FCN_SEL_2_SW_WIDTH                      (2)
#define FEC_LTPC_TXK_MEAS_SC_SW0_SC_MCM_FCN_SEL_2_SW_MASK                       (0x00000600)

#define FEC_LTPC_TXK_MEAS_SC_SW0_SC_MCM_BYPASS_EN_2_SW_LSB                      (8)
#define FEC_LTPC_TXK_MEAS_SC_SW0_SC_MCM_BYPASS_EN_2_SW_WIDTH                    (1)
#define FEC_LTPC_TXK_MEAS_SC_SW0_SC_MCM_BYPASS_EN_2_SW_MASK                     (0x00000100)
#define FEC_LTPC_TXK_MEAS_SC_SW0_SC_MCM_BYPASS_EN_2_SW_BIT                      (0x00000100)

#define FEC_LTPC_TXK_MEAS_SC_SW0_SC_MCM_BYPASS_SEL_1_SW_LSB                     (7)
#define FEC_LTPC_TXK_MEAS_SC_SW0_SC_MCM_BYPASS_SEL_1_SW_WIDTH                   (1)
#define FEC_LTPC_TXK_MEAS_SC_SW0_SC_MCM_BYPASS_SEL_1_SW_MASK                    (0x00000080)
#define FEC_LTPC_TXK_MEAS_SC_SW0_SC_MCM_BYPASS_SEL_1_SW_BIT                     (0x00000080)

#define FEC_LTPC_TXK_MEAS_SC_SW0_SC_MCM_FCN_SEL_1_SW_LSB                        (5)
#define FEC_LTPC_TXK_MEAS_SC_SW0_SC_MCM_FCN_SEL_1_SW_WIDTH                      (2)
#define FEC_LTPC_TXK_MEAS_SC_SW0_SC_MCM_FCN_SEL_1_SW_MASK                       (0x00000060)

#define FEC_LTPC_TXK_MEAS_SC_SW0_SC_MCM_BYPASS_EN_1_SW_LSB                      (4)
#define FEC_LTPC_TXK_MEAS_SC_SW0_SC_MCM_BYPASS_EN_1_SW_WIDTH                    (1)
#define FEC_LTPC_TXK_MEAS_SC_SW0_SC_MCM_BYPASS_EN_1_SW_MASK                     (0x00000010)
#define FEC_LTPC_TXK_MEAS_SC_SW0_SC_MCM_BYPASS_EN_1_SW_BIT                      (0x00000010)

#define FEC_LTPC_TXK_MEAS_SC_SW0_SC_MCM_BYPASS_SEL_0_SW_LSB                     (3)
#define FEC_LTPC_TXK_MEAS_SC_SW0_SC_MCM_BYPASS_SEL_0_SW_WIDTH                   (1)
#define FEC_LTPC_TXK_MEAS_SC_SW0_SC_MCM_BYPASS_SEL_0_SW_MASK                    (0x00000008)
#define FEC_LTPC_TXK_MEAS_SC_SW0_SC_MCM_BYPASS_SEL_0_SW_BIT                     (0x00000008)

#define FEC_LTPC_TXK_MEAS_SC_SW0_SC_MCM_FCN_SEL_0_SW_LSB                        (1)
#define FEC_LTPC_TXK_MEAS_SC_SW0_SC_MCM_FCN_SEL_0_SW_WIDTH                      (2)
#define FEC_LTPC_TXK_MEAS_SC_SW0_SC_MCM_FCN_SEL_0_SW_MASK                       (0x00000006)

#define FEC_LTPC_TXK_MEAS_SC_SW0_SC_MCM_BYPASS_EN_0_SW_LSB                      (0)
#define FEC_LTPC_TXK_MEAS_SC_SW0_SC_MCM_BYPASS_EN_0_SW_WIDTH                    (1)
#define FEC_LTPC_TXK_MEAS_SC_SW0_SC_MCM_BYPASS_EN_0_SW_MASK                     (0x00000001)
#define FEC_LTPC_TXK_MEAS_SC_SW0_SC_MCM_BYPASS_EN_0_SW_BIT                      (0x00000001)

#define FEC_LTPC_TXK_MEAS_SC_SW1_MEAS_SAMPLE_SW_LSB                             (16)
#define FEC_LTPC_TXK_MEAS_SC_SW1_MEAS_SAMPLE_SW_WIDTH                           (16)
#define FEC_LTPC_TXK_MEAS_SC_SW1_MEAS_SAMPLE_SW_MASK                            (0xFFFF0000)

#define FEC_LTPC_TXK_MEAS_SC_SW1_WAIT_SAMPLE_SW_LSB                             (0)
#define FEC_LTPC_TXK_MEAS_SC_SW1_WAIT_SAMPLE_SW_WIDTH                           (16)
#define FEC_LTPC_TXK_MEAS_SC_SW1_WAIT_SAMPLE_SW_MASK                            (0x0000FFFF)

#define FEC_LTPC_SW_TRG_RESULT_ACC_0_I_SW_TRG_ACC_0_I_LSB                       (0)
#define FEC_LTPC_SW_TRG_RESULT_ACC_0_I_SW_TRG_ACC_0_I_WIDTH                     (28)
#define FEC_LTPC_SW_TRG_RESULT_ACC_0_I_SW_TRG_ACC_0_I_MASK                      (0x0FFFFFFF)

#define FEC_LTPC_SW_TRG_RESULT_ACC_0_Q_SW_TRG_ACC_0_Q_LSB                       (0)
#define FEC_LTPC_SW_TRG_RESULT_ACC_0_Q_SW_TRG_ACC_0_Q_WIDTH                     (28)
#define FEC_LTPC_SW_TRG_RESULT_ACC_0_Q_SW_TRG_ACC_0_Q_MASK                      (0x0FFFFFFF)

#define FEC_LTPC_SW_TRG_RESULT_ACC_1_I_SW_TRG_ACC_1_I_LSB                       (0)
#define FEC_LTPC_SW_TRG_RESULT_ACC_1_I_SW_TRG_ACC_1_I_WIDTH                     (28)
#define FEC_LTPC_SW_TRG_RESULT_ACC_1_I_SW_TRG_ACC_1_I_MASK                      (0x0FFFFFFF)

#define FEC_LTPC_SW_TRG_RESULT_ACC_1_Q_SW_TRG_ACC_1_Q_LSB                       (0)
#define FEC_LTPC_SW_TRG_RESULT_ACC_1_Q_SW_TRG_ACC_1_Q_WIDTH                     (28)
#define FEC_LTPC_SW_TRG_RESULT_ACC_1_Q_SW_TRG_ACC_1_Q_MASK                      (0x0FFFFFFF)

#define FEC_LTPC_SW_TRG_RESULT_ACC_2_I_SW_TRG_ACC_2_I_LSB                       (0)
#define FEC_LTPC_SW_TRG_RESULT_ACC_2_I_SW_TRG_ACC_2_I_WIDTH                     (28)
#define FEC_LTPC_SW_TRG_RESULT_ACC_2_I_SW_TRG_ACC_2_I_MASK                      (0x0FFFFFFF)

#define FEC_LTPC_SW_TRG_RESULT_ACC_2_Q_SW_TRG_ACC_2_Q_LSB                       (0)
#define FEC_LTPC_SW_TRG_RESULT_ACC_2_Q_SW_TRG_ACC_2_Q_WIDTH                     (28)
#define FEC_LTPC_SW_TRG_RESULT_ACC_2_Q_SW_TRG_ACC_2_Q_MASK                      (0x0FFFFFFF)

#define FEC_LTPC_TXK_CAL_STATE_DBG0_DATA_SWAP_MUX_SEL_LSB                       (31)
#define FEC_LTPC_TXK_CAL_STATE_DBG0_DATA_SWAP_MUX_SEL_WIDTH                     (1)
#define FEC_LTPC_TXK_CAL_STATE_DBG0_DATA_SWAP_MUX_SEL_MASK                      (0x80000000)
#define FEC_LTPC_TXK_CAL_STATE_DBG0_DATA_SWAP_MUX_SEL_BIT                       (0x80000000)

#define FEC_LTPC_TXK_CAL_STATE_DBG0_DET_GAIN_IDX_LSB                            (27)
#define FEC_LTPC_TXK_CAL_STATE_DBG0_DET_GAIN_IDX_WIDTH                          (4)
#define FEC_LTPC_TXK_CAL_STATE_DBG0_DET_GAIN_IDX_MASK                           (0x78000000)

#define FEC_LTPC_TXK_CAL_STATE_DBG0_LOG_ON_LSB                                  (26)
#define FEC_LTPC_TXK_CAL_STATE_DBG0_LOG_ON_WIDTH                                (1)
#define FEC_LTPC_TXK_CAL_STATE_DBG0_LOG_ON_MASK                                 (0x04000000)
#define FEC_LTPC_TXK_CAL_STATE_DBG0_LOG_ON_BIT                                  (0x04000000)

#define FEC_LTPC_TXK_CAL_STATE_DBG0_DET_AFIFO_ON_LSB                            (25)
#define FEC_LTPC_TXK_CAL_STATE_DBG0_DET_AFIFO_ON_WIDTH                          (1)
#define FEC_LTPC_TXK_CAL_STATE_DBG0_DET_AFIFO_ON_MASK                           (0x02000000)
#define FEC_LTPC_TXK_CAL_STATE_DBG0_DET_AFIFO_ON_BIT                            (0x02000000)

#define FEC_LTPC_TXK_CAL_STATE_DBG0_DET_ON_LSB                                  (24)
#define FEC_LTPC_TXK_CAL_STATE_DBG0_DET_ON_WIDTH                                (1)
#define FEC_LTPC_TXK_CAL_STATE_DBG0_DET_ON_MASK                                 (0x01000000)
#define FEC_LTPC_TXK_CAL_STATE_DBG0_DET_ON_BIT                                  (0x01000000)

#define FEC_LTPC_TXK_CAL_STATE_DBG0_REF_ON_LSB                                  (23)
#define FEC_LTPC_TXK_CAL_STATE_DBG0_REF_ON_WIDTH                                (1)
#define FEC_LTPC_TXK_CAL_STATE_DBG0_REF_ON_MASK                                 (0x00800000)
#define FEC_LTPC_TXK_CAL_STATE_DBG0_REF_ON_BIT                                  (0x00800000)

#define FEC_LTPC_TXK_CAL_STATE_DBG0_DBG_TDE_ETDPD_WIN_LSB                       (22)
#define FEC_LTPC_TXK_CAL_STATE_DBG0_DBG_TDE_ETDPD_WIN_WIDTH                     (1)
#define FEC_LTPC_TXK_CAL_STATE_DBG0_DBG_TDE_ETDPD_WIN_MASK                      (0x00400000)
#define FEC_LTPC_TXK_CAL_STATE_DBG0_DBG_TDE_ETDPD_WIN_BIT                       (0x00400000)

#define FEC_LTPC_TXK_CAL_STATE_DBG0_DBG_SW_TRG_ON_LSB                           (21)
#define FEC_LTPC_TXK_CAL_STATE_DBG0_DBG_SW_TRG_ON_WIDTH                         (1)
#define FEC_LTPC_TXK_CAL_STATE_DBG0_DBG_SW_TRG_ON_MASK                          (0x00200000)
#define FEC_LTPC_TXK_CAL_STATE_DBG0_DBG_SW_TRG_ON_BIT                           (0x00200000)

#define FEC_LTPC_TXK_CAL_STATE_DBG0_GD_ON_LSB                                   (20)
#define FEC_LTPC_TXK_CAL_STATE_DBG0_GD_ON_WIDTH                                 (1)
#define FEC_LTPC_TXK_CAL_STATE_DBG0_GD_ON_MASK                                  (0x00100000)
#define FEC_LTPC_TXK_CAL_STATE_DBG0_GD_ON_BIT                                   (0x00100000)

#define FEC_LTPC_TXK_CAL_STATE_DBG0_TDE_COARSE_ON_LSB                           (19)
#define FEC_LTPC_TXK_CAL_STATE_DBG0_TDE_COARSE_ON_WIDTH                         (1)
#define FEC_LTPC_TXK_CAL_STATE_DBG0_TDE_COARSE_ON_MASK                          (0x00080000)
#define FEC_LTPC_TXK_CAL_STATE_DBG0_TDE_COARSE_ON_BIT                           (0x00080000)

#define FEC_LTPC_TXK_CAL_STATE_DBG0_TDE_FINE_ON_LSB                             (18)
#define FEC_LTPC_TXK_CAL_STATE_DBG0_TDE_FINE_ON_WIDTH                           (1)
#define FEC_LTPC_TXK_CAL_STATE_DBG0_TDE_FINE_ON_MASK                            (0x00040000)
#define FEC_LTPC_TXK_CAL_STATE_DBG0_TDE_FINE_ON_BIT                             (0x00040000)

#define FEC_LTPC_TXK_CAL_STATE_DBG0_DDPC_MSEL_LSB                               (16)
#define FEC_LTPC_TXK_CAL_STATE_DBG0_DDPC_MSEL_WIDTH                             (2)
#define FEC_LTPC_TXK_CAL_STATE_DBG0_DDPC_MSEL_MASK                              (0x00030000)

#define FEC_LTPC_TXK_CAL_STATE_DBG0_DDPC_ON_LSB                                 (15)
#define FEC_LTPC_TXK_CAL_STATE_DBG0_DDPC_ON_WIDTH                               (1)
#define FEC_LTPC_TXK_CAL_STATE_DBG0_DDPC_ON_MASK                                (0x00008000)
#define FEC_LTPC_TXK_CAL_STATE_DBG0_DDPC_ON_BIT                                 (0x00008000)

#define FEC_LTPC_TXK_CAL_STATE_DBG0_ETDPD_GAIN_NORM_LSB                         (6)
#define FEC_LTPC_TXK_CAL_STATE_DBG0_ETDPD_GAIN_NORM_WIDTH                       (9)
#define FEC_LTPC_TXK_CAL_STATE_DBG0_ETDPD_GAIN_NORM_MASK                        (0x00007FC0)

#define FEC_LTPC_TXK_CAL_STATE_DBG0_ETDPD_ON_LSB                                (5)
#define FEC_LTPC_TXK_CAL_STATE_DBG0_ETDPD_ON_WIDTH                              (1)
#define FEC_LTPC_TXK_CAL_STATE_DBG0_ETDPD_ON_MASK                               (0x00000020)
#define FEC_LTPC_TXK_CAL_STATE_DBG0_ETDPD_ON_BIT                                (0x00000020)

#define FEC_LTPC_TXK_CAL_STATE_DBG0_DMA_ON_LSB                                  (4)
#define FEC_LTPC_TXK_CAL_STATE_DBG0_DMA_ON_WIDTH                                (1)
#define FEC_LTPC_TXK_CAL_STATE_DBG0_DMA_ON_MASK                                 (0x00000010)
#define FEC_LTPC_TXK_CAL_STATE_DBG0_DMA_ON_BIT                                  (0x00000010)

#define FEC_LTPC_TXK_CAL_STATE_DBG0_DPD_FK_ON_LSB                               (3)
#define FEC_LTPC_TXK_CAL_STATE_DBG0_DPD_FK_ON_WIDTH                             (1)
#define FEC_LTPC_TXK_CAL_STATE_DBG0_DPD_FK_ON_MASK                              (0x00000008)
#define FEC_LTPC_TXK_CAL_STATE_DBG0_DPD_FK_ON_BIT                               (0x00000008)

#define FEC_LTPC_TXK_CAL_STATE_DBG0_TXK_MEAS_SEL_LSB                            (2)
#define FEC_LTPC_TXK_CAL_STATE_DBG0_TXK_MEAS_SEL_WIDTH                          (1)
#define FEC_LTPC_TXK_CAL_STATE_DBG0_TXK_MEAS_SEL_MASK                           (0x00000004)
#define FEC_LTPC_TXK_CAL_STATE_DBG0_TXK_MEAS_SEL_BIT                            (0x00000004)

#define FEC_LTPC_TXK_CAL_STATE_DBG0_RFK_TXK_ON_LSB                              (1)
#define FEC_LTPC_TXK_CAL_STATE_DBG0_RFK_TXK_ON_WIDTH                            (1)
#define FEC_LTPC_TXK_CAL_STATE_DBG0_RFK_TXK_ON_MASK                             (0x00000002)
#define FEC_LTPC_TXK_CAL_STATE_DBG0_RFK_TXK_ON_BIT                              (0x00000002)

#define FEC_LTPC_TXK_CAL_STATE_DBG0_RFK_DETK_ON_LSB                             (0)
#define FEC_LTPC_TXK_CAL_STATE_DBG0_RFK_DETK_ON_WIDTH                           (1)
#define FEC_LTPC_TXK_CAL_STATE_DBG0_RFK_DETK_ON_MASK                            (0x00000001)
#define FEC_LTPC_TXK_CAL_STATE_DBG0_RFK_DETK_ON_BIT                             (0x00000001)

#define FEC_LTPC_TXK_IO_DBG0_TXDFE_PATH_SWAP_LSB                                (17)
#define FEC_LTPC_TXK_IO_DBG0_TXDFE_PATH_SWAP_WIDTH                              (1)
#define FEC_LTPC_TXK_IO_DBG0_TXDFE_PATH_SWAP_MASK                               (0x00020000)
#define FEC_LTPC_TXK_IO_DBG0_TXDFE_PATH_SWAP_BIT                                (0x00020000)

#define FEC_LTPC_TXK_IO_DBG0_TPC_TXK_IDX_DET_LSB                                (13)
#define FEC_LTPC_TXK_IO_DBG0_TPC_TXK_IDX_DET_WIDTH                              (4)
#define FEC_LTPC_TXK_IO_DBG0_TPC_TXK_IDX_DET_MASK                               (0x0001E000)

#define FEC_LTPC_TXK_IO_DBG0_TPC_TXK_RF_ETDPD_NORM_LSB                          (4)
#define FEC_LTPC_TXK_IO_DBG0_TPC_TXK_RF_ETDPD_NORM_WIDTH                        (9)
#define FEC_LTPC_TXK_IO_DBG0_TPC_TXK_RF_ETDPD_NORM_MASK                         (0x00001FF0)

#define FEC_LTPC_TXK_IO_DBG0_TPC_DDPC_MSEL_LSB                                  (2)
#define FEC_LTPC_TXK_IO_DBG0_TPC_DDPC_MSEL_WIDTH                                (2)
#define FEC_LTPC_TXK_IO_DBG0_TPC_DDPC_MSEL_MASK                                 (0x0000000C)

#define FEC_LTPC_TXK_IO_DBG0_TPC_TXDET_ADC_WIN_LSB                              (1)
#define FEC_LTPC_TXK_IO_DBG0_TPC_TXDET_ADC_WIN_WIDTH                            (1)
#define FEC_LTPC_TXK_IO_DBG0_TPC_TXDET_ADC_WIN_MASK                             (0x00000002)
#define FEC_LTPC_TXK_IO_DBG0_TPC_TXDET_ADC_WIN_BIT                              (0x00000002)

#define FEC_LTPC_TXK_IO_DBG0_TXDET_ADC_WIN_LSB                                  (0)
#define FEC_LTPC_TXK_IO_DBG0_TXDET_ADC_WIN_WIDTH                                (1)
#define FEC_LTPC_TXK_IO_DBG0_TXDET_ADC_WIN_MASK                                 (0x00000001)
#define FEC_LTPC_TXK_IO_DBG0_TXDET_ADC_WIN_BIT                                  (0x00000001)

#define FEC_LTPC_TXK_TTG_DBG0_TXK_MEAS_SEL_STEP_LSB                             (26)
#define FEC_LTPC_TXK_TTG_DBG0_TXK_MEAS_SEL_STEP_WIDTH                           (1)
#define FEC_LTPC_TXK_TTG_DBG0_TXK_MEAS_SEL_STEP_MASK                            (0x04000000)
#define FEC_LTPC_TXK_TTG_DBG0_TXK_MEAS_SEL_STEP_BIT                             (0x04000000)

#define FEC_LTPC_TXK_TTG_DBG0_TXK_MEAS_SEL_INI_LSB                              (25)
#define FEC_LTPC_TXK_TTG_DBG0_TXK_MEAS_SEL_INI_WIDTH                            (1)
#define FEC_LTPC_TXK_TTG_DBG0_TXK_MEAS_SEL_INI_MASK                             (0x02000000)
#define FEC_LTPC_TXK_TTG_DBG0_TXK_MEAS_SEL_INI_BIT                              (0x02000000)

#define FEC_LTPC_TXK_TTG_DBG0_TXK_TONE_SEL_STEP_LSB                             (22)
#define FEC_LTPC_TXK_TTG_DBG0_TXK_TONE_SEL_STEP_WIDTH                           (3)
#define FEC_LTPC_TXK_TTG_DBG0_TXK_TONE_SEL_STEP_MASK                            (0x01C00000)

#define FEC_LTPC_TXK_TTG_DBG0_TXK_TONE_SEL_INI_LSB                              (19)
#define FEC_LTPC_TXK_TTG_DBG0_TXK_TONE_SEL_INI_WIDTH                            (3)
#define FEC_LTPC_TXK_TTG_DBG0_TXK_TONE_SEL_INI_MASK                             (0x00380000)

#define FEC_LTPC_TXK_TTG_DBG0_TXK_TONE_NUM_LSB                                  (17)
#define FEC_LTPC_TXK_TTG_DBG0_TXK_TONE_NUM_WIDTH                                (2)
#define FEC_LTPC_TXK_TTG_DBG0_TXK_TONE_NUM_MASK                                 (0x00060000)

#define FEC_LTPC_TXK_TTG_DBG0_TXK_TONE_EN_LSB                                   (16)
#define FEC_LTPC_TXK_TTG_DBG0_TXK_TONE_EN_WIDTH                                 (1)
#define FEC_LTPC_TXK_TTG_DBG0_TXK_TONE_EN_MASK                                  (0x00010000)
#define FEC_LTPC_TXK_TTG_DBG0_TXK_TONE_EN_BIT                                   (0x00010000)

#define FEC_LTPC_TXK_TTG_DBG0_TXDFE_TTG_SETTING_SEL_LSB                         (13)
#define FEC_LTPC_TXK_TTG_DBG0_TXDFE_TTG_SETTING_SEL_WIDTH                       (3)
#define FEC_LTPC_TXK_TTG_DBG0_TXDFE_TTG_SETTING_SEL_MASK                        (0x0000E000)

#define FEC_LTPC_TXK_TTG_DBG0_TXDFE_TTG_TONE_WIN_LSB                            (12)
#define FEC_LTPC_TXK_TTG_DBG0_TXDFE_TTG_TONE_WIN_WIDTH                          (1)
#define FEC_LTPC_TXK_TTG_DBG0_TXDFE_TTG_TONE_WIN_MASK                           (0x00001000)
#define FEC_LTPC_TXK_TTG_DBG0_TXDFE_TTG_TONE_WIN_BIT                            (0x00001000)

#define FEC_LTPC_TXK_TTG_DBG0_DBG_DPD_FAT_TRG_TGL_LSB                           (5)
#define FEC_LTPC_TXK_TTG_DBG0_DBG_DPD_FAT_TRG_TGL_WIDTH                         (1)
#define FEC_LTPC_TXK_TTG_DBG0_DBG_DPD_FAT_TRG_TGL_MASK                          (0x00000020)
#define FEC_LTPC_TXK_TTG_DBG0_DBG_DPD_FAT_TRG_TGL_BIT                           (0x00000020)

#define FEC_LTPC_TXK_TTG_DBG0_DBG_ET_FAT_TRG_TGL_LSB                            (4)
#define FEC_LTPC_TXK_TTG_DBG0_DBG_ET_FAT_TRG_TGL_WIDTH                          (1)
#define FEC_LTPC_TXK_TTG_DBG0_DBG_ET_FAT_TRG_TGL_MASK                           (0x00000010)
#define FEC_LTPC_TXK_TTG_DBG0_DBG_ET_FAT_TRG_TGL_BIT                            (0x00000010)

#define FEC_LTPC_TXK_TTG_DBG0_DBG_TXK_2TONE_TRG_TGL_LSB                         (3)
#define FEC_LTPC_TXK_TTG_DBG0_DBG_TXK_2TONE_TRG_TGL_WIDTH                       (1)
#define FEC_LTPC_TXK_TTG_DBG0_DBG_TXK_2TONE_TRG_TGL_MASK                        (0x00000008)
#define FEC_LTPC_TXK_TTG_DBG0_DBG_TXK_2TONE_TRG_TGL_BIT                         (0x00000008)

#define FEC_LTPC_TXK_TTG_DBG0_DBG_TXK_1TONE_1_TRG_TGL_LSB                       (2)
#define FEC_LTPC_TXK_TTG_DBG0_DBG_TXK_1TONE_1_TRG_TGL_WIDTH                     (1)
#define FEC_LTPC_TXK_TTG_DBG0_DBG_TXK_1TONE_1_TRG_TGL_MASK                      (0x00000004)
#define FEC_LTPC_TXK_TTG_DBG0_DBG_TXK_1TONE_1_TRG_TGL_BIT                       (0x00000004)

#define FEC_LTPC_TXK_TTG_DBG0_DBG_TXK_1TONE_0_TRG_TGL_LSB                       (1)
#define FEC_LTPC_TXK_TTG_DBG0_DBG_TXK_1TONE_0_TRG_TGL_WIDTH                     (1)
#define FEC_LTPC_TXK_TTG_DBG0_DBG_TXK_1TONE_0_TRG_TGL_MASK                      (0x00000002)
#define FEC_LTPC_TXK_TTG_DBG0_DBG_TXK_1TONE_0_TRG_TGL_BIT                       (0x00000002)

#define FEC_LTPC_TXK_TTG_DBG0_DBG_DETK_TRG_TGL_LSB                              (0)
#define FEC_LTPC_TXK_TTG_DBG0_DBG_DETK_TRG_TGL_WIDTH                            (1)
#define FEC_LTPC_TXK_TTG_DBG0_DBG_DETK_TRG_TGL_MASK                             (0x00000001)
#define FEC_LTPC_TXK_TTG_DBG0_DBG_DETK_TRG_TGL_BIT                              (0x00000001)

#define FEC_LTPC_TXK_TRG_GLO_DBG0_DBG_GLO4_CNT_LSB                              (16)
#define FEC_LTPC_TXK_TRG_GLO_DBG0_DBG_GLO4_CNT_WIDTH                            (4)
#define FEC_LTPC_TXK_TRG_GLO_DBG0_DBG_GLO4_CNT_MASK                             (0x000F0000)

#define FEC_LTPC_TXK_TRG_GLO_DBG0_DBG_GLO3_CNT_LSB                              (12)
#define FEC_LTPC_TXK_TRG_GLO_DBG0_DBG_GLO3_CNT_WIDTH                            (4)
#define FEC_LTPC_TXK_TRG_GLO_DBG0_DBG_GLO3_CNT_MASK                             (0x0000F000)

#define FEC_LTPC_TXK_TRG_GLO_DBG0_DBG_GLO2_CNT_LSB                              (8)
#define FEC_LTPC_TXK_TRG_GLO_DBG0_DBG_GLO2_CNT_WIDTH                            (4)
#define FEC_LTPC_TXK_TRG_GLO_DBG0_DBG_GLO2_CNT_MASK                             (0x00000F00)

#define FEC_LTPC_TXK_TRG_GLO_DBG0_DBG_GLO1_CNT_LSB                              (4)
#define FEC_LTPC_TXK_TRG_GLO_DBG0_DBG_GLO1_CNT_WIDTH                            (4)
#define FEC_LTPC_TXK_TRG_GLO_DBG0_DBG_GLO1_CNT_MASK                             (0x000000F0)

#define FEC_LTPC_TXK_TRG_GLO_DBG0_DBG_GLO0_CNT_LSB                              (0)
#define FEC_LTPC_TXK_TRG_GLO_DBG0_DBG_GLO0_CNT_WIDTH                            (4)
#define FEC_LTPC_TXK_TRG_GLO_DBG0_DBG_GLO0_CNT_MASK                             (0x0000000F)

#define FEC_LTPC_TXK_TRG_GLO_DBG1_DBG_TDE_COARSE_TRG_TGL_LSB                    (5)
#define FEC_LTPC_TXK_TRG_GLO_DBG1_DBG_TDE_COARSE_TRG_TGL_WIDTH                  (1)
#define FEC_LTPC_TXK_TRG_GLO_DBG1_DBG_TDE_COARSE_TRG_TGL_MASK                   (0x00000020)
#define FEC_LTPC_TXK_TRG_GLO_DBG1_DBG_TDE_COARSE_TRG_TGL_BIT                    (0x00000020)

#define FEC_LTPC_TXK_TRG_GLO_DBG1_DBG_TDE_FINE_TRG_TGL_LSB                      (4)
#define FEC_LTPC_TXK_TRG_GLO_DBG1_DBG_TDE_FINE_TRG_TGL_WIDTH                    (1)
#define FEC_LTPC_TXK_TRG_GLO_DBG1_DBG_TDE_FINE_TRG_TGL_MASK                     (0x00000010)
#define FEC_LTPC_TXK_TRG_GLO_DBG1_DBG_TDE_FINE_TRG_TGL_BIT                      (0x00000010)

#define FEC_LTPC_TXK_TRG_GLO_DBG1_DBG_GD_TRG_TGL_LSB                            (3)
#define FEC_LTPC_TXK_TRG_GLO_DBG1_DBG_GD_TRG_TGL_WIDTH                          (1)
#define FEC_LTPC_TXK_TRG_GLO_DBG1_DBG_GD_TRG_TGL_MASK                           (0x00000008)
#define FEC_LTPC_TXK_TRG_GLO_DBG1_DBG_GD_TRG_TGL_BIT                            (0x00000008)

#define FEC_LTPC_TXK_TRG_GLO_DBG1_DBG_ETDPD_TRG_TGL_LSB                         (2)
#define FEC_LTPC_TXK_TRG_GLO_DBG1_DBG_ETDPD_TRG_TGL_WIDTH                       (1)
#define FEC_LTPC_TXK_TRG_GLO_DBG1_DBG_ETDPD_TRG_TGL_MASK                        (0x00000004)
#define FEC_LTPC_TXK_TRG_GLO_DBG1_DBG_ETDPD_TRG_TGL_BIT                         (0x00000004)

#define FEC_LTPC_TXK_TRG_GLO_DBG1_DBG_DDPC_TRG_TGL_LSB                          (1)
#define FEC_LTPC_TXK_TRG_GLO_DBG1_DBG_DDPC_TRG_TGL_WIDTH                        (1)
#define FEC_LTPC_TXK_TRG_GLO_DBG1_DBG_DDPC_TRG_TGL_MASK                         (0x00000002)
#define FEC_LTPC_TXK_TRG_GLO_DBG1_DBG_DDPC_TRG_TGL_BIT                          (0x00000002)

#define FEC_LTPC_TXK_FSM_DBG0_CNT_2_HW_LOOP_CNT_LSB                             (14)
#define FEC_LTPC_TXK_FSM_DBG0_CNT_2_HW_LOOP_CNT_WIDTH                           (4)
#define FEC_LTPC_TXK_FSM_DBG0_CNT_2_HW_LOOP_CNT_MASK                            (0x0003C000)

#define FEC_LTPC_TXK_FSM_DBG0_CNT_2_NUM_DBG_LSB                                 (10)
#define FEC_LTPC_TXK_FSM_DBG0_CNT_2_NUM_DBG_WIDTH                               (4)
#define FEC_LTPC_TXK_FSM_DBG0_CNT_2_NUM_DBG_MASK                                (0x00003C00)

#define FEC_LTPC_TXK_FSM_DBG0_CNT_2_ERR_FLAG_LSB                                (9)
#define FEC_LTPC_TXK_FSM_DBG0_CNT_2_ERR_FLAG_WIDTH                              (1)
#define FEC_LTPC_TXK_FSM_DBG0_CNT_2_ERR_FLAG_MASK                               (0x00000200)
#define FEC_LTPC_TXK_FSM_DBG0_CNT_2_ERR_FLAG_BIT                                (0x00000200)

#define FEC_LTPC_TXK_FSM_DBG0_CNT_1_HW_LOOP_CNT_LSB                             (5)
#define FEC_LTPC_TXK_FSM_DBG0_CNT_1_HW_LOOP_CNT_WIDTH                           (4)
#define FEC_LTPC_TXK_FSM_DBG0_CNT_1_HW_LOOP_CNT_MASK                            (0x000001E0)

#define FEC_LTPC_TXK_FSM_DBG0_CNT_1_NUM_DBG_LSB                                 (1)
#define FEC_LTPC_TXK_FSM_DBG0_CNT_1_NUM_DBG_WIDTH                               (4)
#define FEC_LTPC_TXK_FSM_DBG0_CNT_1_NUM_DBG_MASK                                (0x0000001E)

#define FEC_LTPC_TXK_FSM_DBG0_CNT_1_ERR_FLAG_LSB                                (0)
#define FEC_LTPC_TXK_FSM_DBG0_CNT_1_ERR_FLAG_WIDTH                              (1)
#define FEC_LTPC_TXK_FSM_DBG0_CNT_1_ERR_FLAG_MASK                               (0x00000001)
#define FEC_LTPC_TXK_FSM_DBG0_CNT_1_ERR_FLAG_BIT                                (0x00000001)

#define FEC_LTPC_TXK_FSM_DBG1_CNT_2_HW_WAIT_CNT_LSB                             (16)
#define FEC_LTPC_TXK_FSM_DBG1_CNT_2_HW_WAIT_CNT_WIDTH                           (16)
#define FEC_LTPC_TXK_FSM_DBG1_CNT_2_HW_WAIT_CNT_MASK                            (0xFFFF0000)

#define FEC_LTPC_TXK_FSM_DBG1_CNT_1_HW_WAIT_CNT_LSB                             (0)
#define FEC_LTPC_TXK_FSM_DBG1_CNT_1_HW_WAIT_CNT_WIDTH                           (16)
#define FEC_LTPC_TXK_FSM_DBG1_CNT_1_HW_WAIT_CNT_MASK                            (0x0000FFFF)

#define FEC_LTPC_TXK_FSM_DBG2_CNT_1_HW_MEAS_CNT_LSB                             (0)
#define FEC_LTPC_TXK_FSM_DBG2_CNT_1_HW_MEAS_CNT_WIDTH                           (17)
#define FEC_LTPC_TXK_FSM_DBG2_CNT_1_HW_MEAS_CNT_MASK                            (0x0001FFFF)

#define FEC_LTPC_TXK_FSM_DBG3_CNT_2_HW_MEAS_CNT_LSB                             (0)
#define FEC_LTPC_TXK_FSM_DBG3_CNT_2_HW_MEAS_CNT_WIDTH                           (17)
#define FEC_LTPC_TXK_FSM_DBG3_CNT_2_HW_MEAS_CNT_MASK                            (0x0001FFFF)

#define FEC_LTPC_TXK_SC_DBG0_SC_SQR_APART_EN_2_LSB                              (17)
#define FEC_LTPC_TXK_SC_DBG0_SC_SQR_APART_EN_2_WIDTH                            (1)
#define FEC_LTPC_TXK_SC_DBG0_SC_SQR_APART_EN_2_MASK                             (0x00020000)
#define FEC_LTPC_TXK_SC_DBG0_SC_SQR_APART_EN_2_BIT                              (0x00020000)

#define FEC_LTPC_TXK_SC_DBG0_SC_SQR_BYPASS_EN_2_LSB                             (16)
#define FEC_LTPC_TXK_SC_DBG0_SC_SQR_BYPASS_EN_2_WIDTH                           (1)
#define FEC_LTPC_TXK_SC_DBG0_SC_SQR_BYPASS_EN_2_MASK                            (0x00010000)
#define FEC_LTPC_TXK_SC_DBG0_SC_SQR_BYPASS_EN_2_BIT                             (0x00010000)

#define FEC_LTPC_TXK_SC_DBG0_SC_SQR_APART_EN_1_LSB                              (15)
#define FEC_LTPC_TXK_SC_DBG0_SC_SQR_APART_EN_1_WIDTH                            (1)
#define FEC_LTPC_TXK_SC_DBG0_SC_SQR_APART_EN_1_MASK                             (0x00008000)
#define FEC_LTPC_TXK_SC_DBG0_SC_SQR_APART_EN_1_BIT                              (0x00008000)

#define FEC_LTPC_TXK_SC_DBG0_SC_SQR_BYPASS_EN_1_LSB                             (14)
#define FEC_LTPC_TXK_SC_DBG0_SC_SQR_BYPASS_EN_1_WIDTH                           (1)
#define FEC_LTPC_TXK_SC_DBG0_SC_SQR_BYPASS_EN_1_MASK                            (0x00004000)
#define FEC_LTPC_TXK_SC_DBG0_SC_SQR_BYPASS_EN_1_BIT                             (0x00004000)

#define FEC_LTPC_TXK_SC_DBG0_SC_SQR_APART_EN_0_LSB                              (13)
#define FEC_LTPC_TXK_SC_DBG0_SC_SQR_APART_EN_0_WIDTH                            (1)
#define FEC_LTPC_TXK_SC_DBG0_SC_SQR_APART_EN_0_MASK                             (0x00002000)
#define FEC_LTPC_TXK_SC_DBG0_SC_SQR_APART_EN_0_BIT                              (0x00002000)

#define FEC_LTPC_TXK_SC_DBG0_SC_SQR_BYPASS_EN_0_LSB                             (12)
#define FEC_LTPC_TXK_SC_DBG0_SC_SQR_BYPASS_EN_0_WIDTH                           (1)
#define FEC_LTPC_TXK_SC_DBG0_SC_SQR_BYPASS_EN_0_MASK                            (0x00001000)
#define FEC_LTPC_TXK_SC_DBG0_SC_SQR_BYPASS_EN_0_BIT                             (0x00001000)

#define FEC_LTPC_TXK_SC_DBG0_SC_MCM_BYPASS_SEL_2_LSB                            (11)
#define FEC_LTPC_TXK_SC_DBG0_SC_MCM_BYPASS_SEL_2_WIDTH                          (1)
#define FEC_LTPC_TXK_SC_DBG0_SC_MCM_BYPASS_SEL_2_MASK                           (0x00000800)
#define FEC_LTPC_TXK_SC_DBG0_SC_MCM_BYPASS_SEL_2_BIT                            (0x00000800)

#define FEC_LTPC_TXK_SC_DBG0_SC_MCM_FCN_SEL_2_LSB                               (9)
#define FEC_LTPC_TXK_SC_DBG0_SC_MCM_FCN_SEL_2_WIDTH                             (2)
#define FEC_LTPC_TXK_SC_DBG0_SC_MCM_FCN_SEL_2_MASK                              (0x00000600)

#define FEC_LTPC_TXK_SC_DBG0_SC_MCM_BYPASS_EN_2_LSB                             (8)
#define FEC_LTPC_TXK_SC_DBG0_SC_MCM_BYPASS_EN_2_WIDTH                           (1)
#define FEC_LTPC_TXK_SC_DBG0_SC_MCM_BYPASS_EN_2_MASK                            (0x00000100)
#define FEC_LTPC_TXK_SC_DBG0_SC_MCM_BYPASS_EN_2_BIT                             (0x00000100)

#define FEC_LTPC_TXK_SC_DBG0_SC_MCM_BYPASS_SEL_1_LSB                            (7)
#define FEC_LTPC_TXK_SC_DBG0_SC_MCM_BYPASS_SEL_1_WIDTH                          (1)
#define FEC_LTPC_TXK_SC_DBG0_SC_MCM_BYPASS_SEL_1_MASK                           (0x00000080)
#define FEC_LTPC_TXK_SC_DBG0_SC_MCM_BYPASS_SEL_1_BIT                            (0x00000080)

#define FEC_LTPC_TXK_SC_DBG0_SC_MCM_FCN_SEL_1_LSB                               (5)
#define FEC_LTPC_TXK_SC_DBG0_SC_MCM_FCN_SEL_1_WIDTH                             (2)
#define FEC_LTPC_TXK_SC_DBG0_SC_MCM_FCN_SEL_1_MASK                              (0x00000060)

#define FEC_LTPC_TXK_SC_DBG0_SC_MCM_BYPASS_EN_1_LSB                             (4)
#define FEC_LTPC_TXK_SC_DBG0_SC_MCM_BYPASS_EN_1_WIDTH                           (1)
#define FEC_LTPC_TXK_SC_DBG0_SC_MCM_BYPASS_EN_1_MASK                            (0x00000010)
#define FEC_LTPC_TXK_SC_DBG0_SC_MCM_BYPASS_EN_1_BIT                             (0x00000010)

#define FEC_LTPC_TXK_SC_DBG0_SC_MCM_BYPASS_SEL_0_LSB                            (3)
#define FEC_LTPC_TXK_SC_DBG0_SC_MCM_BYPASS_SEL_0_WIDTH                          (1)
#define FEC_LTPC_TXK_SC_DBG0_SC_MCM_BYPASS_SEL_0_MASK                           (0x00000008)
#define FEC_LTPC_TXK_SC_DBG0_SC_MCM_BYPASS_SEL_0_BIT                            (0x00000008)

#define FEC_LTPC_TXK_SC_DBG0_SC_MCM_FCN_SEL_0_LSB                               (1)
#define FEC_LTPC_TXK_SC_DBG0_SC_MCM_FCN_SEL_0_WIDTH                             (2)
#define FEC_LTPC_TXK_SC_DBG0_SC_MCM_FCN_SEL_0_MASK                              (0x00000006)

#define FEC_LTPC_TXK_SC_DBG0_SC_MCM_BYPASS_EN_0_LSB                             (0)
#define FEC_LTPC_TXK_SC_DBG0_SC_MCM_BYPASS_EN_0_WIDTH                           (1)
#define FEC_LTPC_TXK_SC_DBG0_SC_MCM_BYPASS_EN_0_MASK                            (0x00000001)
#define FEC_LTPC_TXK_SC_DBG0_SC_MCM_BYPASS_EN_0_BIT                             (0x00000001)

#define FEC_LTPC_TXK_SC_DBG1_SC_ACC_MEAS_WIN_4_LSB                              (19)
#define FEC_LTPC_TXK_SC_DBG1_SC_ACC_MEAS_WIN_4_WIDTH                            (1)
#define FEC_LTPC_TXK_SC_DBG1_SC_ACC_MEAS_WIN_4_MASK                             (0x00080000)
#define FEC_LTPC_TXK_SC_DBG1_SC_ACC_MEAS_WIN_4_BIT                              (0x00080000)

#define FEC_LTPC_TXK_SC_DBG1_SC_ACC_X_SHIFT_4_LSB                               (16)
#define FEC_LTPC_TXK_SC_DBG1_SC_ACC_X_SHIFT_4_WIDTH                             (3)
#define FEC_LTPC_TXK_SC_DBG1_SC_ACC_X_SHIFT_4_MASK                              (0x00070000)

#define FEC_LTPC_TXK_SC_DBG1_SC_ACC_MEAS_WIN_3_LSB                              (15)
#define FEC_LTPC_TXK_SC_DBG1_SC_ACC_MEAS_WIN_3_WIDTH                            (1)
#define FEC_LTPC_TXK_SC_DBG1_SC_ACC_MEAS_WIN_3_MASK                             (0x00008000)
#define FEC_LTPC_TXK_SC_DBG1_SC_ACC_MEAS_WIN_3_BIT                              (0x00008000)

#define FEC_LTPC_TXK_SC_DBG1_SC_ACC_X_SHIFT_3_LSB                               (12)
#define FEC_LTPC_TXK_SC_DBG1_SC_ACC_X_SHIFT_3_WIDTH                             (3)
#define FEC_LTPC_TXK_SC_DBG1_SC_ACC_X_SHIFT_3_MASK                              (0x00007000)

#define FEC_LTPC_TXK_SC_DBG1_SC_ACC_MEAS_WIN_2_LSB                              (11)
#define FEC_LTPC_TXK_SC_DBG1_SC_ACC_MEAS_WIN_2_WIDTH                            (1)
#define FEC_LTPC_TXK_SC_DBG1_SC_ACC_MEAS_WIN_2_MASK                             (0x00000800)
#define FEC_LTPC_TXK_SC_DBG1_SC_ACC_MEAS_WIN_2_BIT                              (0x00000800)

#define FEC_LTPC_TXK_SC_DBG1_SC_ACC_X_SHIFT_2_LSB                               (8)
#define FEC_LTPC_TXK_SC_DBG1_SC_ACC_X_SHIFT_2_WIDTH                             (3)
#define FEC_LTPC_TXK_SC_DBG1_SC_ACC_X_SHIFT_2_MASK                              (0x00000700)

#define FEC_LTPC_TXK_SC_DBG1_SC_ACC_MEAS_WIN_1_LSB                              (7)
#define FEC_LTPC_TXK_SC_DBG1_SC_ACC_MEAS_WIN_1_WIDTH                            (1)
#define FEC_LTPC_TXK_SC_DBG1_SC_ACC_MEAS_WIN_1_MASK                             (0x00000080)
#define FEC_LTPC_TXK_SC_DBG1_SC_ACC_MEAS_WIN_1_BIT                              (0x00000080)

#define FEC_LTPC_TXK_SC_DBG1_SC_ACC_X_SHIFT_1_LSB                               (4)
#define FEC_LTPC_TXK_SC_DBG1_SC_ACC_X_SHIFT_1_WIDTH                             (3)
#define FEC_LTPC_TXK_SC_DBG1_SC_ACC_X_SHIFT_1_MASK                              (0x00000070)

#define FEC_LTPC_TXK_SC_DBG1_SC_ACC_MEAS_WIN_0_LSB                              (3)
#define FEC_LTPC_TXK_SC_DBG1_SC_ACC_MEAS_WIN_0_WIDTH                            (1)
#define FEC_LTPC_TXK_SC_DBG1_SC_ACC_MEAS_WIN_0_MASK                             (0x00000008)
#define FEC_LTPC_TXK_SC_DBG1_SC_ACC_MEAS_WIN_0_BIT                              (0x00000008)

#define FEC_LTPC_TXK_SC_DBG1_SC_ACC_X_SHIFT_0_LSB                               (0)
#define FEC_LTPC_TXK_SC_DBG1_SC_ACC_X_SHIFT_0_WIDTH                             (3)
#define FEC_LTPC_TXK_SC_DBG1_SC_ACC_X_SHIFT_0_MASK                              (0x00000007)

#define FEC_LTPC_TXK_ACCESS_RIGHT_CON_TXK_ACCESS_RIGHT_LSB                      (0)
#define FEC_LTPC_TXK_ACCESS_RIGHT_CON_TXK_ACCESS_RIGHT_WIDTH                    (4)
#define FEC_LTPC_TXK_ACCESS_RIGHT_CON_TXK_ACCESS_RIGHT_MASK                     (0x0000000F)

/* 4G TXK end*/

/* tpc start*/
#define FEC_WLTPC_TPC_RATE_TPC_RAT_LSB                                          (0)
#define FEC_WLTPC_TPC_RATE_TPC_RAT_WIDTH                                        (2)
#define FEC_WLTPC_TPC_RATE_TPC_RAT_MASK                                         (0x00000003)

#define FEC_WLTPC_TPC_GC_CON_TPC_GC_DBG_TGL_LSB                                 (10)
#define FEC_WLTPC_TPC_GC_CON_TPC_GC_DBG_TGL_WIDTH                               (1)
#define FEC_WLTPC_TPC_GC_CON_TPC_GC_DBG_TGL_MASK                                (0x00000400)
#define FEC_WLTPC_TPC_GC_CON_TPC_GC_DBG_TGL_BIT                                 (0x00000400)

#define FEC_WLTPC_TPC_GC_CON_TPC_GC_DBG_CUR_SEL_EN_LSB                          (9)
#define FEC_WLTPC_TPC_GC_CON_TPC_GC_DBG_CUR_SEL_EN_WIDTH                        (1)
#define FEC_WLTPC_TPC_GC_CON_TPC_GC_DBG_CUR_SEL_EN_MASK                         (0x00000200)
#define FEC_WLTPC_TPC_GC_CON_TPC_GC_DBG_CUR_SEL_EN_BIT                          (0x00000200)

#define FEC_WLTPC_TPC_GC_CON_TPC_GC_DBG_MODE_LSB                                (8)
#define FEC_WLTPC_TPC_GC_CON_TPC_GC_DBG_MODE_WIDTH                              (1)
#define FEC_WLTPC_TPC_GC_CON_TPC_GC_DBG_MODE_MASK                               (0x00000100)
#define FEC_WLTPC_TPC_GC_CON_TPC_GC_DBG_MODE_BIT                                (0x00000100)

#define FEC_WLTPC_TPC_GC_CON_TPC_GC_RST_LSB                                     (2)
#define FEC_WLTPC_TPC_GC_CON_TPC_GC_RST_WIDTH                                   (1)
#define FEC_WLTPC_TPC_GC_CON_TPC_GC_RST_MASK                                    (0x00000004)
#define FEC_WLTPC_TPC_GC_CON_TPC_GC_RST_BIT                                     (0x00000004)

#define FEC_WLTPC_TPC_GC_CON_TPC_GC_DBG_EN_LSB                                  (1)
#define FEC_WLTPC_TPC_GC_CON_TPC_GC_DBG_EN_WIDTH                                (1)
#define FEC_WLTPC_TPC_GC_CON_TPC_GC_DBG_EN_MASK                                 (0x00000002)
#define FEC_WLTPC_TPC_GC_CON_TPC_GC_DBG_EN_BIT                                  (0x00000002)

#define FEC_WLTPC_TPC_GC_CON_TPC_GC_FSM_CTRL_LSB                                (0)
#define FEC_WLTPC_TPC_GC_CON_TPC_GC_FSM_CTRL_WIDTH                              (1)
#define FEC_WLTPC_TPC_GC_CON_TPC_GC_FSM_CTRL_MASK                               (0x00000001)
#define FEC_WLTPC_TPC_GC_CON_TPC_GC_FSM_CTRL_BIT                                (0x00000001)

#define FEC_WLTPC_TPC_GC_DBG_CON0_TPC_GC_DBG_FSM_ADDR_LSB                       (16)
#define FEC_WLTPC_TPC_GC_DBG_CON0_TPC_GC_DBG_FSM_ADDR_WIDTH                     (13)
#define FEC_WLTPC_TPC_GC_DBG_CON0_TPC_GC_DBG_FSM_ADDR_MASK                      (0x1FFF0000)

#define FEC_WLTPC_TPC_GC_DBG_CON0_TPC_GC_DBG_CUR_SEL_LSB                        (0)
#define FEC_WLTPC_TPC_GC_DBG_CON0_TPC_GC_DBG_CUR_SEL_WIDTH                      (6)
#define FEC_WLTPC_TPC_GC_DBG_CON0_TPC_GC_DBG_CUR_SEL_MASK                       (0x0000003F)

#define FEC_WLTPC_TPC_GC_DBG_CON1_TPC_GC_DBG_STEP_CNT_LSB                       (0)
#define FEC_WLTPC_TPC_GC_DBG_CON1_TPC_GC_DBG_STEP_CNT_WIDTH                     (13)
#define FEC_WLTPC_TPC_GC_DBG_CON1_TPC_GC_DBG_STEP_CNT_MASK                      (0x00001FFF)

#define FEC_WLTPC_TPC_TRG_CON_TPC_TRG_RST_LSB                                   (2)
#define FEC_WLTPC_TPC_TRG_CON_TPC_TRG_RST_WIDTH                                 (1)
#define FEC_WLTPC_TPC_TRG_CON_TPC_TRG_RST_MASK                                  (0x00000004)
#define FEC_WLTPC_TPC_TRG_CON_TPC_TRG_RST_BIT                                   (0x00000004)

#define FEC_WLTPC_TPC_TRG_CON_TPC_TQ_RST_LSB                                    (1)
#define FEC_WLTPC_TPC_TRG_CON_TPC_TQ_RST_WIDTH                                  (1)
#define FEC_WLTPC_TPC_TRG_CON_TPC_TQ_RST_MASK                                   (0x00000002)
#define FEC_WLTPC_TPC_TRG_CON_TPC_TQ_RST_BIT                                    (0x00000002)

#define FEC_WLTPC_TPC_TRG_CON_TPC_TRG_TMR_SLOT_CMPR_EN_LSB                      (0)
#define FEC_WLTPC_TPC_TRG_CON_TPC_TRG_TMR_SLOT_CMPR_EN_WIDTH                    (1)
#define FEC_WLTPC_TPC_TRG_CON_TPC_TRG_TMR_SLOT_CMPR_EN_MASK                     (0x00000001)
#define FEC_WLTPC_TPC_TRG_CON_TPC_TRG_TMR_SLOT_CMPR_EN_BIT                      (0x00000001)

#define FEC_WLTPC_TPC_TQ_TRG_TPC_TQ_TRG_TGL_LSB                                 (0)
#define FEC_WLTPC_TPC_TQ_TRG_TPC_TQ_TRG_TGL_WIDTH                               (4)
#define FEC_WLTPC_TPC_TQ_TRG_TPC_TQ_TRG_TGL_MASK                                (0x0000000F)

#define FEC_WLTPC_TPC_EXTIF_CON_TPC_APC_P1_EN_LSB                               (5)
#define FEC_WLTPC_TPC_EXTIF_CON_TPC_APC_P1_EN_WIDTH                             (1)
#define FEC_WLTPC_TPC_EXTIF_CON_TPC_APC_P1_EN_MASK                              (0x00000020)
#define FEC_WLTPC_TPC_EXTIF_CON_TPC_APC_P1_EN_BIT                               (0x00000020)

#define FEC_WLTPC_TPC_EXTIF_CON_TPC_APC_P0_EN_LSB                               (4)
#define FEC_WLTPC_TPC_EXTIF_CON_TPC_APC_P0_EN_WIDTH                             (1)
#define FEC_WLTPC_TPC_EXTIF_CON_TPC_APC_P0_EN_MASK                              (0x00000010)
#define FEC_WLTPC_TPC_EXTIF_CON_TPC_APC_P0_EN_BIT                               (0x00000010)

#define FEC_WLTPC_TPC_EXTIF_CON_TPC_EXTIF_APC_SEL_LSB                           (2)
#define FEC_WLTPC_TPC_EXTIF_CON_TPC_EXTIF_APC_SEL_WIDTH                         (1)
#define FEC_WLTPC_TPC_EXTIF_CON_TPC_EXTIF_APC_SEL_MASK                          (0x00000004)
#define FEC_WLTPC_TPC_EXTIF_CON_TPC_EXTIF_APC_SEL_BIT                           (0x00000004)

#define FEC_WLTPC_TPC_EXTIF_CON_TPC_EXTIF_VM_SEL_LSB                            (1)
#define FEC_WLTPC_TPC_EXTIF_CON_TPC_EXTIF_VM_SEL_WIDTH                          (1)
#define FEC_WLTPC_TPC_EXTIF_CON_TPC_EXTIF_VM_SEL_MASK                           (0x00000002)
#define FEC_WLTPC_TPC_EXTIF_CON_TPC_EXTIF_VM_SEL_BIT                            (0x00000002)

#define FEC_WLTPC_TPC_EXTIF_CON_TPC_EXTIF_RST_LSB                               (0)
#define FEC_WLTPC_TPC_EXTIF_CON_TPC_EXTIF_RST_WIDTH                             (1)
#define FEC_WLTPC_TPC_EXTIF_CON_TPC_EXTIF_RST_MASK                              (0x00000001)
#define FEC_WLTPC_TPC_EXTIF_CON_TPC_EXTIF_RST_BIT                               (0x00000001)

#define FEC_WLTPC_TPC_TQ_RACH_JUMP_ADDR0_TPC_TQ_RACH_NOACK_JUMP_ADDR_LSB        (16)
#define FEC_WLTPC_TPC_TQ_RACH_JUMP_ADDR0_TPC_TQ_RACH_NOACK_JUMP_ADDR_WIDTH      (10)
#define FEC_WLTPC_TPC_TQ_RACH_JUMP_ADDR0_TPC_TQ_RACH_NOACK_JUMP_ADDR_MASK       (0x03FF0000)

#define FEC_WLTPC_TPC_TQ_RACH_JUMP_ADDR0_TPC_TQ_RACH_ACK_JUMP_ADDR_LSB          (0)
#define FEC_WLTPC_TPC_TQ_RACH_JUMP_ADDR0_TPC_TQ_RACH_ACK_JUMP_ADDR_WIDTH        (10)
#define FEC_WLTPC_TPC_TQ_RACH_JUMP_ADDR0_TPC_TQ_RACH_ACK_JUMP_ADDR_MASK         (0x000003FF)

#define FEC_WLTPC_TPC_TQ_RACH_JUMP_ADDR1_TPC_TQ_RACH_NACK_JUMP_ADDR_LSB         (0)
#define FEC_WLTPC_TPC_TQ_RACH_JUMP_ADDR1_TPC_TQ_RACH_NACK_JUMP_ADDR_WIDTH       (10)
#define FEC_WLTPC_TPC_TQ_RACH_JUMP_ADDR1_TPC_TQ_RACH_NACK_JUMP_ADDR_MASK        (0x000003FF)

#define FEC_WLTPC_TPC_TQ_DCH_JUMP_ADDR_TPC_TQ_DCH_OFF_JUMP_ADDR_LSB             (16)
#define FEC_WLTPC_TPC_TQ_DCH_JUMP_ADDR_TPC_TQ_DCH_OFF_JUMP_ADDR_WIDTH           (10)
#define FEC_WLTPC_TPC_TQ_DCH_JUMP_ADDR_TPC_TQ_DCH_OFF_JUMP_ADDR_MASK            (0x03FF0000)

#define FEC_WLTPC_TPC_TQ_DCH_JUMP_ADDR_TPC_TQ_DCH_ON_JUMP_ADDR_LSB              (0)
#define FEC_WLTPC_TPC_TQ_DCH_JUMP_ADDR_TPC_TQ_DCH_ON_JUMP_ADDR_WIDTH            (10)
#define FEC_WLTPC_TPC_TQ_DCH_JUMP_ADDR_TPC_TQ_DCH_ON_JUMP_ADDR_MASK             (0x000003FF)

#define FEC_WLTPC_TPC_GC_TRG_TPC_TRG_GC_TRG_CNT_LSB                             (28)
#define FEC_WLTPC_TPC_GC_TRG_TPC_TRG_GC_TRG_CNT_WIDTH                           (2)
#define FEC_WLTPC_TPC_GC_TRG_TPC_TRG_GC_TRG_CNT_MASK                            (0x30000000)

#define FEC_WLTPC_TPC_GC_TRG_TPC_TRG_GC_TRG_IMM_TGL_LSB                         (22)
#define FEC_WLTPC_TPC_GC_TRG_TPC_TRG_GC_TRG_IMM_TGL_WIDTH                       (1)
#define FEC_WLTPC_TPC_GC_TRG_TPC_TRG_GC_TRG_IMM_TGL_MASK                        (0x00400000)
#define FEC_WLTPC_TPC_GC_TRG_TPC_TRG_GC_TRG_IMM_TGL_BIT                         (0x00400000)

#define FEC_WLTPC_TPC_GC_TRG_TPC_TRG_GC_TRG_TGL_LSB                             (21)
#define FEC_WLTPC_TPC_GC_TRG_TPC_TRG_GC_TRG_TGL_WIDTH                           (1)
#define FEC_WLTPC_TPC_GC_TRG_TPC_TRG_GC_TRG_TGL_MASK                            (0x00200000)
#define FEC_WLTPC_TPC_GC_TRG_TPC_TRG_GC_TRG_TGL_BIT                             (0x00200000)

#define FEC_WLTPC_TPC_GC_TRG_TPC_TRG_GC_TRG_EN_LSB                              (20)
#define FEC_WLTPC_TPC_GC_TRG_TPC_TRG_GC_TRG_EN_WIDTH                            (1)
#define FEC_WLTPC_TPC_GC_TRG_TPC_TRG_GC_TRG_EN_MASK                             (0x00100000)
#define FEC_WLTPC_TPC_GC_TRG_TPC_TRG_GC_TRG_EN_BIT                              (0x00100000)

#define FEC_WLTPC_TPC_GC_TRG_TPC_TRG_GC_TRG_TIME_LSB                            (0)
#define FEC_WLTPC_TPC_GC_TRG_TPC_TRG_GC_TRG_TIME_WIDTH                          (16)
#define FEC_WLTPC_TPC_GC_TRG_TPC_TRG_GC_TRG_TIME_MASK                           (0x0000FFFF)

#define FEC_WLTPC_TPC_DMA_TRG_TPC_TRG_DMA_TRG_CNT_LSB                           (28)
#define FEC_WLTPC_TPC_DMA_TRG_TPC_TRG_DMA_TRG_CNT_WIDTH                         (2)
#define FEC_WLTPC_TPC_DMA_TRG_TPC_TRG_DMA_TRG_CNT_MASK                          (0x30000000)

#define FEC_WLTPC_TPC_DMA_TRG_TPC_TRG_DMA_TRG_IMM_TGL_LSB                       (22)
#define FEC_WLTPC_TPC_DMA_TRG_TPC_TRG_DMA_TRG_IMM_TGL_WIDTH                     (1)
#define FEC_WLTPC_TPC_DMA_TRG_TPC_TRG_DMA_TRG_IMM_TGL_MASK                      (0x00400000)
#define FEC_WLTPC_TPC_DMA_TRG_TPC_TRG_DMA_TRG_IMM_TGL_BIT                       (0x00400000)

#define FEC_WLTPC_TPC_DMA_TRG_TPC_TRG_DMA_TRG_TGL_LSB                           (21)
#define FEC_WLTPC_TPC_DMA_TRG_TPC_TRG_DMA_TRG_TGL_WIDTH                         (1)
#define FEC_WLTPC_TPC_DMA_TRG_TPC_TRG_DMA_TRG_TGL_MASK                          (0x00200000)
#define FEC_WLTPC_TPC_DMA_TRG_TPC_TRG_DMA_TRG_TGL_BIT                           (0x00200000)

#define FEC_WLTPC_TPC_DMA_TRG_TPC_TRG_DMA_TRG_EN_LSB                            (20)
#define FEC_WLTPC_TPC_DMA_TRG_TPC_TRG_DMA_TRG_EN_WIDTH                          (1)
#define FEC_WLTPC_TPC_DMA_TRG_TPC_TRG_DMA_TRG_EN_MASK                           (0x00100000)
#define FEC_WLTPC_TPC_DMA_TRG_TPC_TRG_DMA_TRG_EN_BIT                            (0x00100000)

#define FEC_WLTPC_TPC_DMA_TRG_TPC_TRG_DMA_TRG_TIME_LSB                          (0)
#define FEC_WLTPC_TPC_DMA_TRG_TPC_TRG_DMA_TRG_TIME_WIDTH                        (16)
#define FEC_WLTPC_TPC_DMA_TRG_TPC_TRG_DMA_TRG_TIME_MASK                         (0x0000FFFF)

#define FEC_WLTPC_TPC_SW_IRQ0_CON_TPC_TRG_SW_IRQ0_CLR_TGL_LSB                   (8)
#define FEC_WLTPC_TPC_SW_IRQ0_CON_TPC_TRG_SW_IRQ0_CLR_TGL_WIDTH                 (6)
#define FEC_WLTPC_TPC_SW_IRQ0_CON_TPC_TRG_SW_IRQ0_CLR_TGL_MASK                  (0x00003F00)

#define FEC_WLTPC_TPC_SW_IRQ0_CON_TPC_TRG_SW_IRQ0_STA_LSB                       (0)
#define FEC_WLTPC_TPC_SW_IRQ0_CON_TPC_TRG_SW_IRQ0_STA_WIDTH                     (6)
#define FEC_WLTPC_TPC_SW_IRQ0_CON_TPC_TRG_SW_IRQ0_STA_MASK                      (0x0000003F)

#define FEC_WLTPC_TPC_SW_IRQ0_i_CON_TPC_TRG_SW_IRQ0_CNT_LSB                     (28)
#define FEC_WLTPC_TPC_SW_IRQ0_i_CON_TPC_TRG_SW_IRQ0_CNT_WIDTH                   (2)
#define FEC_WLTPC_TPC_SW_IRQ0_i_CON_TPC_TRG_SW_IRQ0_CNT_MASK                    (0x30000000)

#define FEC_WLTPC_TPC_SW_IRQ0_i_CON_TPC_TRG_SW_IRQ0_IMM_TGL_LSB                 (22)
#define FEC_WLTPC_TPC_SW_IRQ0_i_CON_TPC_TRG_SW_IRQ0_IMM_TGL_WIDTH               (1)
#define FEC_WLTPC_TPC_SW_IRQ0_i_CON_TPC_TRG_SW_IRQ0_IMM_TGL_MASK                (0x00400000)
#define FEC_WLTPC_TPC_SW_IRQ0_i_CON_TPC_TRG_SW_IRQ0_IMM_TGL_BIT                 (0x00400000)

#define FEC_WLTPC_TPC_SW_IRQ0_i_CON_TPC_TRG_SW_IRQ0_TGL_LSB                     (21)
#define FEC_WLTPC_TPC_SW_IRQ0_i_CON_TPC_TRG_SW_IRQ0_TGL_WIDTH                   (1)
#define FEC_WLTPC_TPC_SW_IRQ0_i_CON_TPC_TRG_SW_IRQ0_TGL_MASK                    (0x00200000)
#define FEC_WLTPC_TPC_SW_IRQ0_i_CON_TPC_TRG_SW_IRQ0_TGL_BIT                     (0x00200000)

#define FEC_WLTPC_TPC_SW_IRQ0_i_CON_TPC_TRG_SW_IRQ0_EN_LSB                      (20)
#define FEC_WLTPC_TPC_SW_IRQ0_i_CON_TPC_TRG_SW_IRQ0_EN_WIDTH                    (1)
#define FEC_WLTPC_TPC_SW_IRQ0_i_CON_TPC_TRG_SW_IRQ0_EN_MASK                     (0x00100000)
#define FEC_WLTPC_TPC_SW_IRQ0_i_CON_TPC_TRG_SW_IRQ0_EN_BIT                      (0x00100000)

#define FEC_WLTPC_TPC_SW_IRQ0_i_CON_TPC_TRG_SW_IRQ0_TIME_LSB                    (0)
#define FEC_WLTPC_TPC_SW_IRQ0_i_CON_TPC_TRG_SW_IRQ0_TIME_WIDTH                  (16)
#define FEC_WLTPC_TPC_SW_IRQ0_i_CON_TPC_TRG_SW_IRQ0_TIME_MASK                   (0x0000FFFF)

#define FEC_WLTPC_TPC_SW_IRQ1_CON_TPC_TRG_SW_IRQ1_CLR_TGL_LSB                   (8)
#define FEC_WLTPC_TPC_SW_IRQ1_CON_TPC_TRG_SW_IRQ1_CLR_TGL_WIDTH                 (6)
#define FEC_WLTPC_TPC_SW_IRQ1_CON_TPC_TRG_SW_IRQ1_CLR_TGL_MASK                  (0x00003F00)

#define FEC_WLTPC_TPC_SW_IRQ1_CON_TPC_TRG_SW_IRQ1_STA_LSB                       (0)
#define FEC_WLTPC_TPC_SW_IRQ1_CON_TPC_TRG_SW_IRQ1_STA_WIDTH                     (6)
#define FEC_WLTPC_TPC_SW_IRQ1_CON_TPC_TRG_SW_IRQ1_STA_MASK                      (0x0000003F)

#define FEC_WLTPC_TPC_SW_IRQ1_i_CON_TPC_TRG_SW_IRQ1_CNT_LSB                     (28)
#define FEC_WLTPC_TPC_SW_IRQ1_i_CON_TPC_TRG_SW_IRQ1_CNT_WIDTH                   (2)
#define FEC_WLTPC_TPC_SW_IRQ1_i_CON_TPC_TRG_SW_IRQ1_CNT_MASK                    (0x30000000)

#define FEC_WLTPC_TPC_SW_IRQ1_i_CON_TPC_TRG_SW_IRQ1_IMM_TGL_LSB                 (22)
#define FEC_WLTPC_TPC_SW_IRQ1_i_CON_TPC_TRG_SW_IRQ1_IMM_TGL_WIDTH               (1)
#define FEC_WLTPC_TPC_SW_IRQ1_i_CON_TPC_TRG_SW_IRQ1_IMM_TGL_MASK                (0x00400000)
#define FEC_WLTPC_TPC_SW_IRQ1_i_CON_TPC_TRG_SW_IRQ1_IMM_TGL_BIT                 (0x00400000)

#define FEC_WLTPC_TPC_SW_IRQ1_i_CON_TPC_TRG_SW_IRQ1_TGL_LSB                     (21)
#define FEC_WLTPC_TPC_SW_IRQ1_i_CON_TPC_TRG_SW_IRQ1_TGL_WIDTH                   (1)
#define FEC_WLTPC_TPC_SW_IRQ1_i_CON_TPC_TRG_SW_IRQ1_TGL_MASK                    (0x00200000)
#define FEC_WLTPC_TPC_SW_IRQ1_i_CON_TPC_TRG_SW_IRQ1_TGL_BIT                     (0x00200000)

#define FEC_WLTPC_TPC_SW_IRQ1_i_CON_TPC_TRG_SW_IRQ1_EN_LSB                      (20)
#define FEC_WLTPC_TPC_SW_IRQ1_i_CON_TPC_TRG_SW_IRQ1_EN_WIDTH                    (1)
#define FEC_WLTPC_TPC_SW_IRQ1_i_CON_TPC_TRG_SW_IRQ1_EN_MASK                     (0x00100000)
#define FEC_WLTPC_TPC_SW_IRQ1_i_CON_TPC_TRG_SW_IRQ1_EN_BIT                      (0x00100000)

#define FEC_WLTPC_TPC_SW_IRQ1_i_CON_TPC_TRG_SW_IRQ1_TIME_LSB                    (0)
#define FEC_WLTPC_TPC_SW_IRQ1_i_CON_TPC_TRG_SW_IRQ1_TIME_WIDTH                  (16)
#define FEC_WLTPC_TPC_SW_IRQ1_i_CON_TPC_TRG_SW_IRQ1_TIME_MASK                   (0x0000FFFF)

#define FEC_WLTPC_TPC_SW_IRQ2_CON_TPC_TRG_SW_IRQ2_CLR_TGL_LSB                   (8)
#define FEC_WLTPC_TPC_SW_IRQ2_CON_TPC_TRG_SW_IRQ2_CLR_TGL_WIDTH                 (6)
#define FEC_WLTPC_TPC_SW_IRQ2_CON_TPC_TRG_SW_IRQ2_CLR_TGL_MASK                  (0x00003F00)

#define FEC_WLTPC_TPC_SW_IRQ2_CON_TPC_TRG_SW_IRQ2_STA_LSB                       (0)
#define FEC_WLTPC_TPC_SW_IRQ2_CON_TPC_TRG_SW_IRQ2_STA_WIDTH                     (6)
#define FEC_WLTPC_TPC_SW_IRQ2_CON_TPC_TRG_SW_IRQ2_STA_MASK                      (0x0000003F)

#define FEC_WLTPC_TPC_SW_IRQ2_i_CON_TPC_TRG_SW_IRQ2_CNT_LSB                     (28)
#define FEC_WLTPC_TPC_SW_IRQ2_i_CON_TPC_TRG_SW_IRQ2_CNT_WIDTH                   (2)
#define FEC_WLTPC_TPC_SW_IRQ2_i_CON_TPC_TRG_SW_IRQ2_CNT_MASK                    (0x30000000)

#define FEC_WLTPC_TPC_SW_IRQ2_i_CON_TPC_TRG_SW_IRQ2_IMM_TGL_LSB                 (22)
#define FEC_WLTPC_TPC_SW_IRQ2_i_CON_TPC_TRG_SW_IRQ2_IMM_TGL_WIDTH               (1)
#define FEC_WLTPC_TPC_SW_IRQ2_i_CON_TPC_TRG_SW_IRQ2_IMM_TGL_MASK                (0x00400000)
#define FEC_WLTPC_TPC_SW_IRQ2_i_CON_TPC_TRG_SW_IRQ2_IMM_TGL_BIT                 (0x00400000)

#define FEC_WLTPC_TPC_SW_IRQ2_i_CON_TPC_TRG_SW_IRQ2_TGL_LSB                     (21)
#define FEC_WLTPC_TPC_SW_IRQ2_i_CON_TPC_TRG_SW_IRQ2_TGL_WIDTH                   (1)
#define FEC_WLTPC_TPC_SW_IRQ2_i_CON_TPC_TRG_SW_IRQ2_TGL_MASK                    (0x00200000)
#define FEC_WLTPC_TPC_SW_IRQ2_i_CON_TPC_TRG_SW_IRQ2_TGL_BIT                     (0x00200000)

#define FEC_WLTPC_TPC_SW_IRQ2_i_CON_TPC_TRG_SW_IRQ2_EN_LSB                      (20)
#define FEC_WLTPC_TPC_SW_IRQ2_i_CON_TPC_TRG_SW_IRQ2_EN_WIDTH                    (1)
#define FEC_WLTPC_TPC_SW_IRQ2_i_CON_TPC_TRG_SW_IRQ2_EN_MASK                     (0x00100000)
#define FEC_WLTPC_TPC_SW_IRQ2_i_CON_TPC_TRG_SW_IRQ2_EN_BIT                      (0x00100000)

#define FEC_WLTPC_TPC_SW_IRQ2_i_CON_TPC_TRG_SW_IRQ2_TIME_LSB                    (0)
#define FEC_WLTPC_TPC_SW_IRQ2_i_CON_TPC_TRG_SW_IRQ2_TIME_WIDTH                  (16)
#define FEC_WLTPC_TPC_SW_IRQ2_i_CON_TPC_TRG_SW_IRQ2_TIME_MASK                   (0x0000FFFF)

#define FEC_WLTPC_TPC_SW_IRQ3_CON_TPC_TRG_SW_IRQ3_CLR_TGL_LSB                   (8)
#define FEC_WLTPC_TPC_SW_IRQ3_CON_TPC_TRG_SW_IRQ3_CLR_TGL_WIDTH                 (6)
#define FEC_WLTPC_TPC_SW_IRQ3_CON_TPC_TRG_SW_IRQ3_CLR_TGL_MASK                  (0x00003F00)

#define FEC_WLTPC_TPC_SW_IRQ3_CON_TPC_TRG_SW_IRQ3_STA_LSB                       (0)
#define FEC_WLTPC_TPC_SW_IRQ3_CON_TPC_TRG_SW_IRQ3_STA_WIDTH                     (6)
#define FEC_WLTPC_TPC_SW_IRQ3_CON_TPC_TRG_SW_IRQ3_STA_MASK                      (0x0000003F)

#define FEC_WLTPC_TPC_SW_IRQ3_i_CON_TPC_TRG_SW_IRQ3_CNT_LSB                     (28)
#define FEC_WLTPC_TPC_SW_IRQ3_i_CON_TPC_TRG_SW_IRQ3_CNT_WIDTH                   (2)
#define FEC_WLTPC_TPC_SW_IRQ3_i_CON_TPC_TRG_SW_IRQ3_CNT_MASK                    (0x30000000)

#define FEC_WLTPC_TPC_SW_IRQ3_i_CON_TPC_TRG_SW_IRQ3_IMM_TGL_LSB                 (22)
#define FEC_WLTPC_TPC_SW_IRQ3_i_CON_TPC_TRG_SW_IRQ3_IMM_TGL_WIDTH               (1)
#define FEC_WLTPC_TPC_SW_IRQ3_i_CON_TPC_TRG_SW_IRQ3_IMM_TGL_MASK                (0x00400000)
#define FEC_WLTPC_TPC_SW_IRQ3_i_CON_TPC_TRG_SW_IRQ3_IMM_TGL_BIT                 (0x00400000)

#define FEC_WLTPC_TPC_SW_IRQ3_i_CON_TPC_TRG_SW_IRQ3_TGL_LSB                     (21)
#define FEC_WLTPC_TPC_SW_IRQ3_i_CON_TPC_TRG_SW_IRQ3_TGL_WIDTH                   (1)
#define FEC_WLTPC_TPC_SW_IRQ3_i_CON_TPC_TRG_SW_IRQ3_TGL_MASK                    (0x00200000)
#define FEC_WLTPC_TPC_SW_IRQ3_i_CON_TPC_TRG_SW_IRQ3_TGL_BIT                     (0x00200000)

#define FEC_WLTPC_TPC_SW_IRQ3_i_CON_TPC_TRG_SW_IRQ3_EN_LSB                      (20)
#define FEC_WLTPC_TPC_SW_IRQ3_i_CON_TPC_TRG_SW_IRQ3_EN_WIDTH                    (1)
#define FEC_WLTPC_TPC_SW_IRQ3_i_CON_TPC_TRG_SW_IRQ3_EN_MASK                     (0x00100000)
#define FEC_WLTPC_TPC_SW_IRQ3_i_CON_TPC_TRG_SW_IRQ3_EN_BIT                      (0x00100000)

#define FEC_WLTPC_TPC_SW_IRQ3_i_CON_TPC_TRG_SW_IRQ3_TIME_LSB                    (0)
#define FEC_WLTPC_TPC_SW_IRQ3_i_CON_TPC_TRG_SW_IRQ3_TIME_WIDTH                  (16)
#define FEC_WLTPC_TPC_SW_IRQ3_i_CON_TPC_TRG_SW_IRQ3_TIME_MASK                   (0x0000FFFF)

#define FEC_WLTPC_TPC_SW_IRQ4_CON_TPC_TRG_SW_IRQ4_CLR_TGL_LSB                   (8)
#define FEC_WLTPC_TPC_SW_IRQ4_CON_TPC_TRG_SW_IRQ4_CLR_TGL_WIDTH                 (6)
#define FEC_WLTPC_TPC_SW_IRQ4_CON_TPC_TRG_SW_IRQ4_CLR_TGL_MASK                  (0x00003F00)

#define FEC_WLTPC_TPC_SW_IRQ4_CON_TPC_TRG_SW_IRQ4_STA_LSB                       (0)
#define FEC_WLTPC_TPC_SW_IRQ4_CON_TPC_TRG_SW_IRQ4_STA_WIDTH                     (6)
#define FEC_WLTPC_TPC_SW_IRQ4_CON_TPC_TRG_SW_IRQ4_STA_MASK                      (0x0000003F)

#define FEC_WLTPC_TPC_SW_IRQ4_i_CON_TPC_TRG_SW_IRQ4_CNT_LSB                     (28)
#define FEC_WLTPC_TPC_SW_IRQ4_i_CON_TPC_TRG_SW_IRQ4_CNT_WIDTH                   (2)
#define FEC_WLTPC_TPC_SW_IRQ4_i_CON_TPC_TRG_SW_IRQ4_CNT_MASK                    (0x30000000)

#define FEC_WLTPC_TPC_SW_IRQ4_i_CON_TPC_TRG_SW_IRQ4_IMM_TGL_LSB                 (22)
#define FEC_WLTPC_TPC_SW_IRQ4_i_CON_TPC_TRG_SW_IRQ4_IMM_TGL_WIDTH               (1)
#define FEC_WLTPC_TPC_SW_IRQ4_i_CON_TPC_TRG_SW_IRQ4_IMM_TGL_MASK                (0x00400000)
#define FEC_WLTPC_TPC_SW_IRQ4_i_CON_TPC_TRG_SW_IRQ4_IMM_TGL_BIT                 (0x00400000)

#define FEC_WLTPC_TPC_SW_IRQ4_i_CON_TPC_TRG_SW_IRQ4_TGL_LSB                     (21)
#define FEC_WLTPC_TPC_SW_IRQ4_i_CON_TPC_TRG_SW_IRQ4_TGL_WIDTH                   (1)
#define FEC_WLTPC_TPC_SW_IRQ4_i_CON_TPC_TRG_SW_IRQ4_TGL_MASK                    (0x00200000)
#define FEC_WLTPC_TPC_SW_IRQ4_i_CON_TPC_TRG_SW_IRQ4_TGL_BIT                     (0x00200000)

#define FEC_WLTPC_TPC_SW_IRQ4_i_CON_TPC_TRG_SW_IRQ4_EN_LSB                      (20)
#define FEC_WLTPC_TPC_SW_IRQ4_i_CON_TPC_TRG_SW_IRQ4_EN_WIDTH                    (1)
#define FEC_WLTPC_TPC_SW_IRQ4_i_CON_TPC_TRG_SW_IRQ4_EN_MASK                     (0x00100000)
#define FEC_WLTPC_TPC_SW_IRQ4_i_CON_TPC_TRG_SW_IRQ4_EN_BIT                      (0x00100000)

#define FEC_WLTPC_TPC_SW_IRQ4_i_CON_TPC_TRG_SW_IRQ4_TIME_LSB                    (0)
#define FEC_WLTPC_TPC_SW_IRQ4_i_CON_TPC_TRG_SW_IRQ4_TIME_WIDTH                  (16)
#define FEC_WLTPC_TPC_SW_IRQ4_i_CON_TPC_TRG_SW_IRQ4_TIME_MASK                   (0x0000FFFF)

#define FEC_WLTPC_TPC_SW_IRQ5_CON_TPC_TRG_SW_IRQ5_CLR_TGL_LSB                   (8)
#define FEC_WLTPC_TPC_SW_IRQ5_CON_TPC_TRG_SW_IRQ5_CLR_TGL_WIDTH                 (6)
#define FEC_WLTPC_TPC_SW_IRQ5_CON_TPC_TRG_SW_IRQ5_CLR_TGL_MASK                  (0x00003F00)

#define FEC_WLTPC_TPC_SW_IRQ5_CON_TPC_TRG_SW_IRQ5_STA_LSB                       (0)
#define FEC_WLTPC_TPC_SW_IRQ5_CON_TPC_TRG_SW_IRQ5_STA_WIDTH                     (6)
#define FEC_WLTPC_TPC_SW_IRQ5_CON_TPC_TRG_SW_IRQ5_STA_MASK                      (0x0000003F)

#define FEC_WLTPC_TPC_SW_IRQ5_i_CON_TPC_TRG_SW_IRQ5_CNT_LSB                     (28)
#define FEC_WLTPC_TPC_SW_IRQ5_i_CON_TPC_TRG_SW_IRQ5_CNT_WIDTH                   (2)
#define FEC_WLTPC_TPC_SW_IRQ5_i_CON_TPC_TRG_SW_IRQ5_CNT_MASK                    (0x30000000)

#define FEC_WLTPC_TPC_SW_IRQ5_i_CON_TPC_TRG_SW_IRQ5_IMM_TGL_LSB                 (22)
#define FEC_WLTPC_TPC_SW_IRQ5_i_CON_TPC_TRG_SW_IRQ5_IMM_TGL_WIDTH               (1)
#define FEC_WLTPC_TPC_SW_IRQ5_i_CON_TPC_TRG_SW_IRQ5_IMM_TGL_MASK                (0x00400000)
#define FEC_WLTPC_TPC_SW_IRQ5_i_CON_TPC_TRG_SW_IRQ5_IMM_TGL_BIT                 (0x00400000)

#define FEC_WLTPC_TPC_SW_IRQ5_i_CON_TPC_TRG_SW_IRQ5_TGL_LSB                     (21)
#define FEC_WLTPC_TPC_SW_IRQ5_i_CON_TPC_TRG_SW_IRQ5_TGL_WIDTH                   (1)
#define FEC_WLTPC_TPC_SW_IRQ5_i_CON_TPC_TRG_SW_IRQ5_TGL_MASK                    (0x00200000)
#define FEC_WLTPC_TPC_SW_IRQ5_i_CON_TPC_TRG_SW_IRQ5_TGL_BIT                     (0x00200000)

#define FEC_WLTPC_TPC_SW_IRQ5_i_CON_TPC_TRG_SW_IRQ5_EN_LSB                      (20)
#define FEC_WLTPC_TPC_SW_IRQ5_i_CON_TPC_TRG_SW_IRQ5_EN_WIDTH                    (1)
#define FEC_WLTPC_TPC_SW_IRQ5_i_CON_TPC_TRG_SW_IRQ5_EN_MASK                     (0x00100000)
#define FEC_WLTPC_TPC_SW_IRQ5_i_CON_TPC_TRG_SW_IRQ5_EN_BIT                      (0x00100000)

#define FEC_WLTPC_TPC_SW_IRQ5_i_CON_TPC_TRG_SW_IRQ5_TIME_LSB                    (0)
#define FEC_WLTPC_TPC_SW_IRQ5_i_CON_TPC_TRG_SW_IRQ5_TIME_WIDTH                  (16)
#define FEC_WLTPC_TPC_SW_IRQ5_i_CON_TPC_TRG_SW_IRQ5_TIME_MASK                   (0x0000FFFF)

#define FEC_WLTPC_TPC_GC_IRQ0_CON_TPC_TRG_GC_P1_IRQ0_CLR_TGL_LSB                (20)
#define FEC_WLTPC_TPC_GC_IRQ0_CON_TPC_TRG_GC_P1_IRQ0_CLR_TGL_WIDTH              (4)
#define FEC_WLTPC_TPC_GC_IRQ0_CON_TPC_TRG_GC_P1_IRQ0_CLR_TGL_MASK               (0x00F00000)

#define FEC_WLTPC_TPC_GC_IRQ0_CON_TPC_TRG_GC_P0_IRQ0_CLR_TGL_LSB                (16)
#define FEC_WLTPC_TPC_GC_IRQ0_CON_TPC_TRG_GC_P0_IRQ0_CLR_TGL_WIDTH              (4)
#define FEC_WLTPC_TPC_GC_IRQ0_CON_TPC_TRG_GC_P0_IRQ0_CLR_TGL_MASK               (0x000F0000)

#define FEC_WLTPC_TPC_GC_IRQ0_CON_TPC_TRG_GC_P1_IRQ0_STA_LSB                    (4)
#define FEC_WLTPC_TPC_GC_IRQ0_CON_TPC_TRG_GC_P1_IRQ0_STA_WIDTH                  (4)
#define FEC_WLTPC_TPC_GC_IRQ0_CON_TPC_TRG_GC_P1_IRQ0_STA_MASK                   (0x000000F0)

#define FEC_WLTPC_TPC_GC_IRQ0_CON_TPC_TRG_GC_P0_IRQ0_STA_LSB                    (0)
#define FEC_WLTPC_TPC_GC_IRQ0_CON_TPC_TRG_GC_P0_IRQ0_STA_WIDTH                  (4)
#define FEC_WLTPC_TPC_GC_IRQ0_CON_TPC_TRG_GC_P0_IRQ0_STA_MASK                   (0x0000000F)

#define FEC_WLTPC_TPC_EXTIF_ADD_OFFSET_TPC_EXTIF_ADDR_OFFSET1_LSB               (8)
#define FEC_WLTPC_TPC_EXTIF_ADD_OFFSET_TPC_EXTIF_ADDR_OFFSET1_WIDTH             (6)
#define FEC_WLTPC_TPC_EXTIF_ADD_OFFSET_TPC_EXTIF_ADDR_OFFSET1_MASK              (0x00003F00)

#define FEC_WLTPC_TPC_EXTIF_ADD_OFFSET_TPC_EXTIF_ADDR_OFFSET0_LSB               (0)
#define FEC_WLTPC_TPC_EXTIF_ADD_OFFSET_TPC_EXTIF_ADDR_OFFSET0_WIDTH             (6)
#define FEC_WLTPC_TPC_EXTIF_ADD_OFFSET_TPC_EXTIF_ADDR_OFFSET0_MASK              (0x0000003F)

#define FEC_WLTPC_TPC_EXTIF_ADD_OFFSET0_P0_TPC_EXTIF_BSI_P0_BUS_REQ_ADD_OFFSET_LSB (18)
#define FEC_WLTPC_TPC_EXTIF_ADD_OFFSET0_P0_TPC_EXTIF_BSI_P0_BUS_REQ_ADD_OFFSET_WIDTH (14)
#define FEC_WLTPC_TPC_EXTIF_ADD_OFFSET0_P0_TPC_EXTIF_BSI_P0_BUS_REQ_ADD_OFFSET_MASK (0xFFFC0000)

#define FEC_WLTPC_TPC_EXTIF_ADD_OFFSET0_P0_TPC_EXTIF_MIPI_P0_BUS_REQ_ADD_OFFSET_LSB (2)
#define FEC_WLTPC_TPC_EXTIF_ADD_OFFSET0_P0_TPC_EXTIF_MIPI_P0_BUS_REQ_ADD_OFFSET_WIDTH (14)
#define FEC_WLTPC_TPC_EXTIF_ADD_OFFSET0_P0_TPC_EXTIF_MIPI_P0_BUS_REQ_ADD_OFFSET_MASK (0x0000FFFC)

#define FEC_WLTPC_TPC_EXTIF_ADD_OFFSET1_P0_TPC_EXTIF_TXDFE_BB_P0_REQ_ADDR_LSB   (18)
#define FEC_WLTPC_TPC_EXTIF_ADD_OFFSET1_P0_TPC_EXTIF_TXDFE_BB_P0_REQ_ADDR_WIDTH (14)
#define FEC_WLTPC_TPC_EXTIF_ADD_OFFSET1_P0_TPC_EXTIF_TXDFE_BB_P0_REQ_ADDR_MASK  (0xFFFC0000)

#define FEC_WLTPC_TPC_EXTIF_ADD_OFFSET1_P0_TPC_EXTIF_TXDFE_RF_P0_REQ_ADDR_LSB   (2)
#define FEC_WLTPC_TPC_EXTIF_ADD_OFFSET1_P0_TPC_EXTIF_TXDFE_RF_P0_REQ_ADDR_WIDTH (14)
#define FEC_WLTPC_TPC_EXTIF_ADD_OFFSET1_P0_TPC_EXTIF_TXDFE_RF_P0_REQ_ADDR_MASK  (0x0000FFFC)

#define FEC_WLTPC_TPC_EXTIF_ADD_OFFSET2_P0_TPC_EXTIF_TXK_P0_REQ_ADDR_LSB        (18)
#define FEC_WLTPC_TPC_EXTIF_ADD_OFFSET2_P0_TPC_EXTIF_TXK_P0_REQ_ADDR_WIDTH      (14)
#define FEC_WLTPC_TPC_EXTIF_ADD_OFFSET2_P0_TPC_EXTIF_TXK_P0_REQ_ADDR_MASK       (0xFFFC0000)

#define FEC_WLTPC_TPC_EXTIF_ADD_OFFSET2_P0_TPC_EXTIF_TXET_P0_REQ_ADDR_LSB       (2)
#define FEC_WLTPC_TPC_EXTIF_ADD_OFFSET2_P0_TPC_EXTIF_TXET_P0_REQ_ADDR_WIDTH     (14)
#define FEC_WLTPC_TPC_EXTIF_ADD_OFFSET2_P0_TPC_EXTIF_TXET_P0_REQ_ADDR_MASK      (0x0000FFFC)

#define FEC_WLTPC_TPC_EXTIF_ADD_OFFSET0_P1_TPC_EXTIF_BSI_P1_BUS_REQ_ADD_OFFSET_LSB (18)
#define FEC_WLTPC_TPC_EXTIF_ADD_OFFSET0_P1_TPC_EXTIF_BSI_P1_BUS_REQ_ADD_OFFSET_WIDTH (14)
#define FEC_WLTPC_TPC_EXTIF_ADD_OFFSET0_P1_TPC_EXTIF_BSI_P1_BUS_REQ_ADD_OFFSET_MASK (0xFFFC0000)

#define FEC_WLTPC_TPC_EXTIF_ADD_OFFSET0_P1_TPC_EXTIF_MIPI_P1_BUS_REQ_ADD_OFFSET_LSB (2)
#define FEC_WLTPC_TPC_EXTIF_ADD_OFFSET0_P1_TPC_EXTIF_MIPI_P1_BUS_REQ_ADD_OFFSET_WIDTH (14)
#define FEC_WLTPC_TPC_EXTIF_ADD_OFFSET0_P1_TPC_EXTIF_MIPI_P1_BUS_REQ_ADD_OFFSET_MASK (0x0000FFFC)

#define FEC_WLTPC_TPC_EXTIF_ADD_OFFSET1_P1_TPC_EXTIF_TXDFE_BB_P1_REQ_ADDR_LSB   (18)
#define FEC_WLTPC_TPC_EXTIF_ADD_OFFSET1_P1_TPC_EXTIF_TXDFE_BB_P1_REQ_ADDR_WIDTH (14)
#define FEC_WLTPC_TPC_EXTIF_ADD_OFFSET1_P1_TPC_EXTIF_TXDFE_BB_P1_REQ_ADDR_MASK  (0xFFFC0000)

#define FEC_WLTPC_TPC_EXTIF_ADD_OFFSET1_P1_TPC_EXTIF_TXDFE_RF_P1_REQ_ADDR_LSB   (2)
#define FEC_WLTPC_TPC_EXTIF_ADD_OFFSET1_P1_TPC_EXTIF_TXDFE_RF_P1_REQ_ADDR_WIDTH (14)
#define FEC_WLTPC_TPC_EXTIF_ADD_OFFSET1_P1_TPC_EXTIF_TXDFE_RF_P1_REQ_ADDR_MASK  (0x0000FFFC)

#define FEC_WLTPC_TPC_EXTIF_ADD_OFFSET2_P1_TPC_EXTIF_TXK_P1_REQ_ADDR_LSB        (18)
#define FEC_WLTPC_TPC_EXTIF_ADD_OFFSET2_P1_TPC_EXTIF_TXK_P1_REQ_ADDR_WIDTH      (14)
#define FEC_WLTPC_TPC_EXTIF_ADD_OFFSET2_P1_TPC_EXTIF_TXK_P1_REQ_ADDR_MASK       (0xFFFC0000)

#define FEC_WLTPC_TPC_EXTIF_ADD_OFFSET2_P1_TPC_EXTIF_TXET_P1_REQ_ADDR_LSB       (2)
#define FEC_WLTPC_TPC_EXTIF_ADD_OFFSET2_P1_TPC_EXTIF_TXET_P1_REQ_ADDR_WIDTH     (14)
#define FEC_WLTPC_TPC_EXTIF_ADD_OFFSET2_P1_TPC_EXTIF_TXET_P1_REQ_ADDR_MASK      (0x0000FFFC)

#define FEC_WLTPC_TPC_W_TTR_TIME_MON_FDD_TTR_SLOT_CNT_LSB                       (12)
#define FEC_WLTPC_TPC_W_TTR_TIME_MON_FDD_TTR_SLOT_CNT_WIDTH                     (4)
#define FEC_WLTPC_TPC_W_TTR_TIME_MON_FDD_TTR_SLOT_CNT_MASK                      (0x0000F000)

#define FEC_WLTPC_TPC_W_TTR_TIME_MON_FDD_TTR_CHIP_CNT_LSB                       (0)
#define FEC_WLTPC_TPC_W_TTR_TIME_MON_FDD_TTR_CHIP_CNT_WIDTH                     (12)
#define FEC_WLTPC_TPC_W_TTR_TIME_MON_FDD_TTR_CHIP_CNT_MASK                      (0x00000FFF)

#define FEC_WLTPC_TPC_L_TIMER_TIME_MON_LTE_TIMER_S_TIME_LSB                     (0)
#define FEC_WLTPC_TPC_L_TIMER_TIME_MON_LTE_TIMER_S_TIME_WIDTH                   (20)
#define FEC_WLTPC_TPC_L_TIMER_TIME_MON_LTE_TIMER_S_TIME_MASK                    (0x000FFFFF)

#define FEC_WLTPC_TPC_C1X_TTR_TIME_MON_C1X_TTR_S_TIME_LSB                       (0)
#define FEC_WLTPC_TPC_C1X_TTR_TIME_MON_C1X_TTR_S_TIME_WIDTH                     (20)
#define FEC_WLTPC_TPC_C1X_TTR_TIME_MON_C1X_TTR_S_TIME_MASK                      (0x000FFFFF)

#define FEC_WLTPC_TPC_CDO_TTR_TIME_MON_CDO_TTR_S_TIME_LSB                       (0)
#define FEC_WLTPC_TPC_CDO_TTR_TIME_MON_CDO_TTR_S_TIME_WIDTH                     (20)
#define FEC_WLTPC_TPC_CDO_TTR_TIME_MON_CDO_TTR_S_TIME_MASK                      (0x000FFFFF)

#define FEC_WLTPC_TPC_TQ_MON_TPC_TQ_LO_REQ_LSB                                  (6)
#define FEC_WLTPC_TPC_TQ_MON_TPC_TQ_LO_REQ_WIDTH                                (1)
#define FEC_WLTPC_TPC_TQ_MON_TPC_TQ_LO_REQ_MASK                                 (0x00000040)
#define FEC_WLTPC_TPC_TQ_MON_TPC_TQ_LO_REQ_BIT                                  (0x00000040)

#define FEC_WLTPC_TPC_TQ_MON_TPC_TQ_GLO_REQ_LSB                                 (5)
#define FEC_WLTPC_TPC_TQ_MON_TPC_TQ_GLO_REQ_WIDTH                               (1)
#define FEC_WLTPC_TPC_TQ_MON_TPC_TQ_GLO_REQ_MASK                                (0x00000020)
#define FEC_WLTPC_TPC_TQ_MON_TPC_TQ_GLO_REQ_BIT                                 (0x00000020)

#define FEC_WLTPC_TPC_TQ_MON_TPC_TQ_CNT_MEM_REQ_LSB                             (4)
#define FEC_WLTPC_TPC_TQ_MON_TPC_TQ_CNT_MEM_REQ_WIDTH                           (1)
#define FEC_WLTPC_TPC_TQ_MON_TPC_TQ_CNT_MEM_REQ_MASK                            (0x00000010)
#define FEC_WLTPC_TPC_TQ_MON_TPC_TQ_CNT_MEM_REQ_BIT                             (0x00000010)

#define FEC_WLTPC_TPC_TQ_MON_TPC_TQ_GLO_CNT_LSB                                 (0)
#define FEC_WLTPC_TPC_TQ_MON_TPC_TQ_GLO_CNT_WIDTH                               (4)
#define FEC_WLTPC_TPC_TQ_MON_TPC_TQ_GLO_CNT_MASK                                (0x0000000F)

#define FEC_WLTPC_TPC_P0_LO_MON_TQ_GC_P0_TRG_CNT_LSB                            (24)
#define FEC_WLTPC_TPC_P0_LO_MON_TQ_GC_P0_TRG_CNT_WIDTH                          (4)
#define FEC_WLTPC_TPC_P0_LO_MON_TQ_GC_P0_TRG_CNT_MASK                           (0x0F000000)

#define FEC_WLTPC_TPC_P0_LO_MON_APC_P0_TRG_CNT_LSB                              (20)
#define FEC_WLTPC_TPC_P0_LO_MON_APC_P0_TRG_CNT_WIDTH                            (4)
#define FEC_WLTPC_TPC_P0_LO_MON_APC_P0_TRG_CNT_MASK                             (0x00F00000)

#define FEC_WLTPC_TPC_P0_LO_MON_DDPC_P0_TRG_CNT_LSB                             (16)
#define FEC_WLTPC_TPC_P0_LO_MON_DDPC_P0_TRG_CNT_WIDTH                           (4)
#define FEC_WLTPC_TPC_P0_LO_MON_DDPC_P0_TRG_CNT_MASK                            (0x000F0000)

#define FEC_WLTPC_TPC_P0_LO_MON_TXDFE_P0_TRG_CNT_LSB                            (12)
#define FEC_WLTPC_TPC_P0_LO_MON_TXDFE_P0_TRG_CNT_WIDTH                          (4)
#define FEC_WLTPC_TPC_P0_LO_MON_TXDFE_P0_TRG_CNT_MASK                           (0x0000F000)

#define FEC_WLTPC_TPC_P0_LO_MON_BPI_P0_TRG_CNT_LSB                              (8)
#define FEC_WLTPC_TPC_P0_LO_MON_BPI_P0_TRG_CNT_WIDTH                            (4)
#define FEC_WLTPC_TPC_P0_LO_MON_BPI_P0_TRG_CNT_MASK                             (0x00000F00)

#define FEC_WLTPC_TPC_P0_LO_MON_BSI_P0_TRG_CNT_LSB                              (4)
#define FEC_WLTPC_TPC_P0_LO_MON_BSI_P0_TRG_CNT_WIDTH                            (4)
#define FEC_WLTPC_TPC_P0_LO_MON_BSI_P0_TRG_CNT_MASK                             (0x000000F0)

#define FEC_WLTPC_TPC_P0_LO_MON_MIPI_P0_TRG_CNT_LSB                             (0)
#define FEC_WLTPC_TPC_P0_LO_MON_MIPI_P0_TRG_CNT_WIDTH                           (4)
#define FEC_WLTPC_TPC_P0_LO_MON_MIPI_P0_TRG_CNT_MASK                            (0x0000000F)

#define FEC_WLTPC_TPC_P1_LO_MON_TQ_GC_P1_TRG_CNT_LSB                            (24)
#define FEC_WLTPC_TPC_P1_LO_MON_TQ_GC_P1_TRG_CNT_WIDTH                          (4)
#define FEC_WLTPC_TPC_P1_LO_MON_TQ_GC_P1_TRG_CNT_MASK                           (0x0F000000)

#define FEC_WLTPC_TPC_P1_LO_MON_APC_P1_TRG_CNT_LSB                              (20)
#define FEC_WLTPC_TPC_P1_LO_MON_APC_P1_TRG_CNT_WIDTH                            (4)
#define FEC_WLTPC_TPC_P1_LO_MON_APC_P1_TRG_CNT_MASK                             (0x00F00000)

#define FEC_WLTPC_TPC_P1_LO_MON_DDPC_P1_TRG_CNT_LSB                             (16)
#define FEC_WLTPC_TPC_P1_LO_MON_DDPC_P1_TRG_CNT_WIDTH                           (4)
#define FEC_WLTPC_TPC_P1_LO_MON_DDPC_P1_TRG_CNT_MASK                            (0x000F0000)

#define FEC_WLTPC_TPC_P1_LO_MON_TXDFE_P1_TRG_CNT_LSB                            (12)
#define FEC_WLTPC_TPC_P1_LO_MON_TXDFE_P1_TRG_CNT_WIDTH                          (4)
#define FEC_WLTPC_TPC_P1_LO_MON_TXDFE_P1_TRG_CNT_MASK                           (0x0000F000)

#define FEC_WLTPC_TPC_P1_LO_MON_BPI_P1_TRG_CNT_LSB                              (8)
#define FEC_WLTPC_TPC_P1_LO_MON_BPI_P1_TRG_CNT_WIDTH                            (4)
#define FEC_WLTPC_TPC_P1_LO_MON_BPI_P1_TRG_CNT_MASK                             (0x00000F00)

#define FEC_WLTPC_TPC_P1_LO_MON_BSI_P1_TRG_CNT_LSB                              (4)
#define FEC_WLTPC_TPC_P1_LO_MON_BSI_P1_TRG_CNT_WIDTH                            (4)
#define FEC_WLTPC_TPC_P1_LO_MON_BSI_P1_TRG_CNT_MASK                             (0x000000F0)

#define FEC_WLTPC_TPC_P1_LO_MON_MIPI_P1_TRG_CNT_LSB                             (0)
#define FEC_WLTPC_TPC_P1_LO_MON_MIPI_P1_TRG_CNT_WIDTH                           (4)
#define FEC_WLTPC_TPC_P1_LO_MON_MIPI_P1_TRG_CNT_MASK                            (0x0000000F)

#define FEC_WLTPC_TPC_TQ_CNT_MON0_TPC_TQ_CNT_LSB                                (0)
#define FEC_WLTPC_TPC_TQ_CNT_MON0_TPC_TQ_CNT_WIDTH                              (10)
#define FEC_WLTPC_TPC_TQ_CNT_MON0_TPC_TQ_CNT_MASK                               (0x000003FF)

#define FEC_WLTPC_TPC_TQ_CNT_MON1_TPC_TQ_CNT_PRE0_LSB                           (0)
#define FEC_WLTPC_TPC_TQ_CNT_MON1_TPC_TQ_CNT_PRE0_WIDTH                         (10)
#define FEC_WLTPC_TPC_TQ_CNT_MON1_TPC_TQ_CNT_PRE0_MASK                          (0x000003FF)

#define FEC_WLTPC_TPC_TQ_CNT_MON2_TPC_TQ_CNT_PRE1_LSB                           (0)
#define FEC_WLTPC_TPC_TQ_CNT_MON2_TPC_TQ_CNT_PRE1_WIDTH                         (10)
#define FEC_WLTPC_TPC_TQ_CNT_MON2_TPC_TQ_CNT_PRE1_MASK                          (0x000003FF)

#define FEC_WLTPC_TPC_TQ_CNT_MON3_TPC_TQ_CNT_PRE2_LSB                           (0)
#define FEC_WLTPC_TPC_TQ_CNT_MON3_TPC_TQ_CNT_PRE2_WIDTH                         (10)
#define FEC_WLTPC_TPC_TQ_CNT_MON3_TPC_TQ_CNT_PRE2_MASK                          (0x000003FF)

#define FEC_WLTPC_TPC_MIPI_BSI_REQ_ACK_MON_BSI_ACK_LSB                          (20)
#define FEC_WLTPC_TPC_MIPI_BSI_REQ_ACK_MON_BSI_ACK_WIDTH                        (2)
#define FEC_WLTPC_TPC_MIPI_BSI_REQ_ACK_MON_BSI_ACK_MASK                         (0x00300000)

#define FEC_WLTPC_TPC_MIPI_BSI_REQ_ACK_MON_BSI_REQ_LSB                          (16)
#define FEC_WLTPC_TPC_MIPI_BSI_REQ_ACK_MON_BSI_REQ_WIDTH                        (2)
#define FEC_WLTPC_TPC_MIPI_BSI_REQ_ACK_MON_BSI_REQ_MASK                         (0x00030000)

#define FEC_WLTPC_TPC_MIPI_BSI_REQ_ACK_MON_MIPI_ACK_LSB                         (8)
#define FEC_WLTPC_TPC_MIPI_BSI_REQ_ACK_MON_MIPI_ACK_WIDTH                       (8)
#define FEC_WLTPC_TPC_MIPI_BSI_REQ_ACK_MON_MIPI_ACK_MASK                        (0x0000FF00)

#define FEC_WLTPC_TPC_MIPI_BSI_REQ_ACK_MON_MIPI_REQ_LSB                         (0)
#define FEC_WLTPC_TPC_MIPI_BSI_REQ_ACK_MON_MIPI_REQ_WIDTH                       (8)
#define FEC_WLTPC_TPC_MIPI_BSI_REQ_ACK_MON_MIPI_REQ_MASK                        (0x000000FF)

#define FEC_WLTPC_TPC_MIPI_DATA_MON0_TPC_BSI_WDATA_MIPI0_LSB                    (0)
#define FEC_WLTPC_TPC_MIPI_DATA_MON0_TPC_BSI_WDATA_MIPI0_WIDTH                  (32)
#define FEC_WLTPC_TPC_MIPI_DATA_MON0_TPC_BSI_WDATA_MIPI0_MASK                   (0xFFFFFFFF)

#define FEC_WLTPC_TPC_MIPI_DATA_MON1_TPC_BSI_WDATA_MIPI1_LSB                    (0)
#define FEC_WLTPC_TPC_MIPI_DATA_MON1_TPC_BSI_WDATA_MIPI1_WIDTH                  (32)
#define FEC_WLTPC_TPC_MIPI_DATA_MON1_TPC_BSI_WDATA_MIPI1_MASK                   (0xFFFFFFFF)

#define FEC_WLTPC_TPC_MIPI_DATA_MON2_TPC_BSI_WDATA_MIPI2_LSB                    (0)
#define FEC_WLTPC_TPC_MIPI_DATA_MON2_TPC_BSI_WDATA_MIPI2_WIDTH                  (32)
#define FEC_WLTPC_TPC_MIPI_DATA_MON2_TPC_BSI_WDATA_MIPI2_MASK                   (0xFFFFFFFF)

#define FEC_WLTPC_TPC_MIPI_DATA_MON3_TPC_BSI_WDATA_MIPI3_LSB                    (0)
#define FEC_WLTPC_TPC_MIPI_DATA_MON3_TPC_BSI_WDATA_MIPI3_WIDTH                  (32)
#define FEC_WLTPC_TPC_MIPI_DATA_MON3_TPC_BSI_WDATA_MIPI3_MASK                   (0xFFFFFFFF)

#define FEC_WLTPC_TPC_MIPI_DATA_MON4_TPC_BSI_WDATA_MIPI4_LSB                    (0)
#define FEC_WLTPC_TPC_MIPI_DATA_MON4_TPC_BSI_WDATA_MIPI4_WIDTH                  (32)
#define FEC_WLTPC_TPC_MIPI_DATA_MON4_TPC_BSI_WDATA_MIPI4_MASK                   (0xFFFFFFFF)

#define FEC_WLTPC_TPC_MIPI_DATA_MON5_TPC_BSI_WDATA_MIPI5_LSB                    (0)
#define FEC_WLTPC_TPC_MIPI_DATA_MON5_TPC_BSI_WDATA_MIPI5_WIDTH                  (32)
#define FEC_WLTPC_TPC_MIPI_DATA_MON5_TPC_BSI_WDATA_MIPI5_MASK                   (0xFFFFFFFF)

#define FEC_WLTPC_TPC_MIPI_DATA_MON6_TPC_BSI_WDATA_MIPI6_LSB                    (0)
#define FEC_WLTPC_TPC_MIPI_DATA_MON6_TPC_BSI_WDATA_MIPI6_WIDTH                  (32)
#define FEC_WLTPC_TPC_MIPI_DATA_MON6_TPC_BSI_WDATA_MIPI6_MASK                   (0xFFFFFFFF)

#define FEC_WLTPC_TPC_MIPI_DATA_MON7_TPC_BSI_WDATA_MIPI7_LSB                    (0)
#define FEC_WLTPC_TPC_MIPI_DATA_MON7_TPC_BSI_WDATA_MIPI7_WIDTH                  (32)
#define FEC_WLTPC_TPC_MIPI_DATA_MON7_TPC_BSI_WDATA_MIPI7_MASK                   (0xFFFFFFFF)

#define FEC_WLTPC_TPC_BSI_DATA_RFIC_MON_TPC_BSI_WDATA_RFIC_LSB                  (0)
#define FEC_WLTPC_TPC_BSI_DATA_RFIC_MON_TPC_BSI_WDATA_RFIC_WIDTH                (32)
#define FEC_WLTPC_TPC_BSI_DATA_RFIC_MON_TPC_BSI_WDATA_RFIC_MASK                 (0xFFFFFFFF)

#define FEC_WLTPC_TPC_BSI_DATA_PMIC_MON_TPC_BSI_WDATA_PMIC_LSB                  (0)
#define FEC_WLTPC_TPC_BSI_DATA_PMIC_MON_TPC_BSI_WDATA_PMIC_WIDTH                (32)
#define FEC_WLTPC_TPC_BSI_DATA_PMIC_MON_TPC_BSI_WDATA_PMIC_MASK                 (0xFFFFFFFF)

#define FEC_WLTPC_GC_R0_DBG_MON_GC_R0_LSB                                       (0)
#define FEC_WLTPC_GC_R0_DBG_MON_GC_R0_WIDTH                                     (32)
#define FEC_WLTPC_GC_R0_DBG_MON_GC_R0_MASK                                      (0xFFFFFFFF)

#define FEC_WLTPC_GC_R1_DBG_MON_GC_R1_LSB                                       (0)
#define FEC_WLTPC_GC_R1_DBG_MON_GC_R1_WIDTH                                     (32)
#define FEC_WLTPC_GC_R1_DBG_MON_GC_R1_MASK                                      (0xFFFFFFFF)

#define FEC_WLTPC_GC_R2_DBG_MON_GC_R2_LSB                                       (0)
#define FEC_WLTPC_GC_R2_DBG_MON_GC_R2_WIDTH                                     (32)
#define FEC_WLTPC_GC_R2_DBG_MON_GC_R2_MASK                                      (0xFFFFFFFF)

#define FEC_WLTPC_GC_R3_DBG_MON_GC_R3_LSB                                       (0)
#define FEC_WLTPC_GC_R3_DBG_MON_GC_R3_WIDTH                                     (32)
#define FEC_WLTPC_GC_R3_DBG_MON_GC_R3_MASK                                      (0xFFFFFFFF)

#define FEC_WLTPC_GC_AR0_DBG_MON_GC_AR0_LSB                                     (0)
#define FEC_WLTPC_GC_AR0_DBG_MON_GC_AR0_WIDTH                                   (32)
#define FEC_WLTPC_GC_AR0_DBG_MON_GC_AR0_MASK                                    (0xFFFFFFFF)

#define FEC_WLTPC_GC_AR1_DBG_MON_GC_AR1_LSB                                     (0)
#define FEC_WLTPC_GC_AR1_DBG_MON_GC_AR1_WIDTH                                   (32)
#define FEC_WLTPC_GC_AR1_DBG_MON_GC_AR1_MASK                                    (0xFFFFFFFF)

#define FEC_WLTPC_GC_BC_DBG_MON_GC_BC_LSB                                       (0)
#define FEC_WLTPC_GC_BC_DBG_MON_GC_BC_WIDTH                                     (32)
#define FEC_WLTPC_GC_BC_DBG_MON_GC_BC_MASK                                      (0xFFFFFFFF)

#define FEC_WLTPC_GC_CORE_DEC_DATA_DBG_MON_GC_CORE_DEC_DATA_LSB                 (0)
#define FEC_WLTPC_GC_CORE_DEC_DATA_DBG_MON_GC_CORE_DEC_DATA_WIDTH               (22)
#define FEC_WLTPC_GC_CORE_DEC_DATA_DBG_MON_GC_CORE_DEC_DATA_MASK                (0x003FFFFF)

#define FEC_WLTPC_TPC_GC_DBG_STATUS_MON0_GC_TRG_STATUS0_LSB                     (0)
#define FEC_WLTPC_TPC_GC_DBG_STATUS_MON0_GC_TRG_STATUS0_WIDTH                   (32)
#define FEC_WLTPC_TPC_GC_DBG_STATUS_MON0_GC_TRG_STATUS0_MASK                    (0xFFFFFFFF)

#define FEC_WLTPC_TPC_GC_DBG_STATUS_MON1_GC_TRG_SEL_LSB                         (24)
#define FEC_WLTPC_TPC_GC_DBG_STATUS_MON1_GC_TRG_SEL_WIDTH                       (6)
#define FEC_WLTPC_TPC_GC_DBG_STATUS_MON1_GC_TRG_SEL_MASK                        (0x3F000000)

#define FEC_WLTPC_TPC_GC_DBG_STATUS_MON1_GC_DBG_WIN_LSB                         (16)
#define FEC_WLTPC_TPC_GC_DBG_STATUS_MON1_GC_DBG_WIN_WIDTH                       (1)
#define FEC_WLTPC_TPC_GC_DBG_STATUS_MON1_GC_DBG_WIN_MASK                        (0x00010000)
#define FEC_WLTPC_TPC_GC_DBG_STATUS_MON1_GC_DBG_WIN_BIT                         (0x00010000)

#define FEC_WLTPC_TPC_GC_DBG_STATUS_MON1_GC_TRG_STATUS1_LSB                     (0)
#define FEC_WLTPC_TPC_GC_DBG_STATUS_MON1_GC_TRG_STATUS1_WIDTH                   (1)
#define FEC_WLTPC_TPC_GC_DBG_STATUS_MON1_GC_TRG_STATUS1_MASK                    (0x00000001)
#define FEC_WLTPC_TPC_GC_DBG_STATUS_MON1_GC_TRG_STATUS1_BIT                     (0x00000001)

#define FEC_WLTPC_TPC_IRQ_MON_TPC_DMA_IRQ_LSB                                   (8)
#define FEC_WLTPC_TPC_IRQ_MON_TPC_DMA_IRQ_WIDTH                                 (1)
#define FEC_WLTPC_TPC_IRQ_MON_TPC_DMA_IRQ_MASK                                  (0x00000100)
#define FEC_WLTPC_TPC_IRQ_MON_TPC_DMA_IRQ_BIT                                   (0x00000100)

#define FEC_WLTPC_TPC_IRQ_MON_TPC_TRG_IRQ_LSB                                   (0)
#define FEC_WLTPC_TPC_IRQ_MON_TPC_TRG_IRQ_WIDTH                                 (6)
#define FEC_WLTPC_TPC_IRQ_MON_TPC_TRG_IRQ_MASK                                  (0x0000003F)
/* L TXK end */

/* L_guif_start */
#define FEC_LTPC_ADDR_MIPI_PA_GROUP0_0                                          ((APBADDR32)(FEC_LTPC_GC_REG_REG_BASE + 0x0780))
#define FEC_LTPC_ADDR_MIPI_PA_GROUP0_1                                          ((APBADDR32)(FEC_LTPC_GC_REG_REG_BASE + 0x0784))
#define FEC_LTPC_ADDR_MIPI_PA_GROUP0_2                                          ((APBADDR32)(FEC_LTPC_GC_REG_REG_BASE + 0x0788))
#define FEC_LTPC_ADDR_MIPI_PA_GROUP0_3                                          ((APBADDR32)(FEC_LTPC_GC_REG_REG_BASE + 0x078C))
#define FEC_LTPC_ADDR_MIPI_ETM_GROUP0_0                                         ((APBADDR32)(FEC_LTPC_GC_REG_REG_BASE + 0x0790))
#define FEC_LTPC_ADDR_MIPI_ETM_GROUP0_1                                         ((APBADDR32)(FEC_LTPC_GC_REG_REG_BASE + 0x0794))
#define FEC_LTPC_ADDR_MIPI_ETM_GROUP0_2                                         ((APBADDR32)(FEC_LTPC_GC_REG_REG_BASE + 0x0798))
#define FEC_LTPC_ADDR_MIPI_ETM_GROUP0_3                                         ((APBADDR32)(FEC_LTPC_GC_REG_REG_BASE + 0x079C))
#define FEC_LTPC_ADDR_MIPI_ETM_GROUP1_0                                         ((APBADDR32)(FEC_LTPC_GC_REG_REG_BASE + 0x07A0))
#define FEC_LTPC_ADDR_MIPI_ETM_GROUP1_1                                         ((APBADDR32)(FEC_LTPC_GC_REG_REG_BASE + 0x07A4))
#define FEC_LTPC_ADDR_MIPI_ETM_GROUP1_2                                         ((APBADDR32)(FEC_LTPC_GC_REG_REG_BASE + 0x07A8))
#define FEC_LTPC_ADDR_MIPI_ETM_GROUP1_3                                         ((APBADDR32)(FEC_LTPC_GC_REG_REG_BASE + 0x07AC))
#define FEC_LTPC_ADDR_MIPI_ETM_GROUP2_0                                         ((APBADDR32)(FEC_LTPC_GC_REG_REG_BASE + 0x07B0))
#define FEC_LTPC_ADDR_MIPI_ETM_GROUP2_1                                         ((APBADDR32)(FEC_LTPC_GC_REG_REG_BASE + 0x07B4))
#define FEC_LTPC_ADDR_MIPI_ETM_GROUP2_2                                         ((APBADDR32)(FEC_LTPC_GC_REG_REG_BASE + 0x07B8))
#define FEC_LTPC_ADDR_MIPI_ETM_GROUP2_3                                         ((APBADDR32)(FEC_LTPC_GC_REG_REG_BASE + 0x07BC))
#define FEC_LTPC_ADDR_PMIC_GROUP0_0                                             ((APBADDR32)(FEC_LTPC_GC_REG_REG_BASE + 0x07C0))
#define FEC_LTPC_ADDR_PMIC_GROUP0_1                                             ((APBADDR32)(FEC_LTPC_GC_REG_REG_BASE + 0x07C4))
#define FEC_LTPC_ADDR_PMIC_GROUP0_2                                             ((APBADDR32)(FEC_LTPC_GC_REG_REG_BASE + 0x07C8))
#define FEC_LTPC_ADDR_PMIC_GROUP0_3                                             ((APBADDR32)(FEC_LTPC_GC_REG_REG_BASE + 0x07CC))
#define FEC_LTPC_ADDR_PGA_GROUP0_0                                              ((APBADDR32)(FEC_LTPC_GC_REG_REG_BASE + 0x07D0))
#define FEC_LTPC_ADDR_PGA_GROUP0_1                                              ((APBADDR32)(FEC_LTPC_GC_REG_REG_BASE + 0x07D4))
#define FEC_LTPC_ADDR_PGA_GROUP0_2                                              ((APBADDR32)(FEC_LTPC_GC_REG_REG_BASE + 0x07D8))
#define FEC_LTPC_ADDR_PGA_GROUP0_3                                              ((APBADDR32)(FEC_LTPC_GC_REG_REG_BASE + 0x07DC))
#define FEC_LTPC_ADDR_PGA_DET_GROUP0_0                                          ((APBADDR32)(FEC_LTPC_GC_REG_REG_BASE + 0x07E0))
#define FEC_LTPC_ADDR_PGA_DET_GROUP0_1                                          ((APBADDR32)(FEC_LTPC_GC_REG_REG_BASE + 0x07E4))
#define FEC_LTPC_ADDR_PGA_DET_GROUP0_2                                          ((APBADDR32)(FEC_LTPC_GC_REG_REG_BASE + 0x07E8))
#define FEC_LTPC_ADDR_PGA_DET_GROUP0_3                                          ((APBADDR32)(FEC_LTPC_GC_REG_REG_BASE + 0x07EC))
#define FEC_LTPC_ADDR_PA_A_HEAD_0                                               ((APBADDR32)(FEC_LTPC_GC_REG_REG_BASE + 0x07F0))
#define FEC_LTPC_ADDR_PA_B_HEAD_0                                               ((APBADDR32)(FEC_LTPC_GC_REG_REG_BASE + 0x07F4))
#define FEC_LTPC_ADDR_PA_C_HEAD_0                                               ((APBADDR32)(FEC_LTPC_GC_REG_REG_BASE + 0x07F8))
#define FEC_LTPC_ADDR_PGA_HEAD_0                                                ((APBADDR32)(FEC_LTPC_GC_REG_REG_BASE + 0x07FC))
#define FEC_LTPC_SW_TXK_DDPC_CTRL                                               ((APBADDR32)(FEC_LTPC_GC_REG_REG_BASE + 0x0800))
#define FEC_LTPC_SW_TXK_DDPC_0                                                  ((APBADDR32)(FEC_LTPC_GC_REG_REG_BASE + 0x0804))
#define FEC_LTPC_SW_TXK_DDPC_1                                                  ((APBADDR32)(FEC_LTPC_GC_REG_REG_BASE + 0x0808))
#define FEC_LTPC_SUB_CONTROL_INPUT0_0                                           ((APBADDR32)(FEC_LTPC_GC_REG_REG_BASE + 0x0810))
#define FEC_LTPC_SUB_CONTROL_INPUT1_0                                           ((APBADDR32)(FEC_LTPC_GC_REG_REG_BASE + 0x0814))
#define FEC_LTPC_SUB_CONTROL_INPUT2_0                                           ((APBADDR32)(FEC_LTPC_GC_REG_REG_BASE + 0x0818))
#define FEC_LTPC_PCFE2_PA_INPUT0_0_0                                            ((APBADDR32)(FEC_LTPC_GC_REG_REG_BASE + 0x0820))
#define FEC_LTPC_PCFE2_PA_INPUT1_0_0                                            ((APBADDR32)(FEC_LTPC_GC_REG_REG_BASE + 0x0824))
#define FEC_LTPC_PCFE2_PA_INPUT2_0_0                                            ((APBADDR32)(FEC_LTPC_GC_REG_REG_BASE + 0x0828))
#define FEC_LTPC_PCFE2_PA_INPUT0_2_0                                            ((APBADDR32)(FEC_LTPC_GC_REG_REG_BASE + 0x0840))
#define FEC_LTPC_PCFE2_PA_INPUT1_2_0                                            ((APBADDR32)(FEC_LTPC_GC_REG_REG_BASE + 0x0844))
#define FEC_LTPC_PCFE2_PA_INPUT2_2_0                                            ((APBADDR32)(FEC_LTPC_GC_REG_REG_BASE + 0x0848))
#define FEC_LTPC_PCFE2_PA_INPUT0_3_0                                            ((APBADDR32)(FEC_LTPC_GC_REG_REG_BASE + 0x0860))
#define FEC_LTPC_PCFE2_PA_INPUT1_3_0                                            ((APBADDR32)(FEC_LTPC_GC_REG_REG_BASE + 0x0864))
#define FEC_LTPC_PCFE2_PA_INPUT2_3_0                                            ((APBADDR32)(FEC_LTPC_GC_REG_REG_BASE + 0x0868))
#define FEC_LTPC_PCFE2_INPUT0_0_0                                               ((APBADDR32)(FEC_LTPC_GC_REG_REG_BASE + 0x0880))
#define FEC_LTPC_PCFE2_INPUT1_0_0                                               ((APBADDR32)(FEC_LTPC_GC_REG_REG_BASE + 0x0884))
#define FEC_LTPC_PCFE2_INPUT2_0_0                                               ((APBADDR32)(FEC_LTPC_GC_REG_REG_BASE + 0x0888))
#define FEC_LTPC_PCFE2_INPUT3_0_0                                               ((APBADDR32)(FEC_LTPC_GC_REG_REG_BASE + 0x088C))
#define FEC_LTPC_PSET_DAC_ADC_INPUT0_0_0                                        ((APBADDR32)(FEC_LTPC_GC_REG_REG_BASE + 0x0890))
#define FEC_LTPC_ILPC_INPUT0_0_0                                                ((APBADDR32)(FEC_LTPC_GC_REG_REG_BASE + 0x0894))
#define FEC_LTPC_DPD_ET_INPUT0_0_0                                              ((APBADDR32)(FEC_LTPC_GC_REG_REG_BASE + 0x0898))
#define FEC_LTPC_TXDFE_BB_INPUT0_0_0                                            ((APBADDR32)(FEC_LTPC_GC_REG_REG_BASE + 0x089C))
#define FEC_LTPC_DET_RF_WIN_MASK_INPUT0_0_0                                     ((APBADDR32)(FEC_LTPC_GC_REG_REG_BASE + 0x08A0))
#define FEC_LTPC_DPD_RF_CW_MASK_INPUT0_0_0                                      ((APBADDR32)(FEC_LTPC_GC_REG_REG_BASE + 0x08A4))
#define FEC_LTPC_PCFE2_DAC_INPUT0_0_0                                           ((APBADDR32)(FEC_LTPC_GC_REG_REG_BASE + 0x08A8))
#define FEC_LTPC_DDPC_INPUT_GROUP_0_0                                           ((APBADDR32)(FEC_LTPC_GC_REG_REG_BASE + 0x08AC))
#define FEC_LTPC_PCFE2_INPUT0_1_0                                               ((APBADDR32)(FEC_LTPC_GC_REG_REG_BASE + 0x08B0))
#define FEC_LTPC_PCFE2_INPUT1_1_0                                               ((APBADDR32)(FEC_LTPC_GC_REG_REG_BASE + 0x08B4))
#define FEC_LTPC_PCFE2_INPUT2_1_0                                               ((APBADDR32)(FEC_LTPC_GC_REG_REG_BASE + 0x08B8))
#define FEC_LTPC_PCFE2_INPUT3_1_0                                               ((APBADDR32)(FEC_LTPC_GC_REG_REG_BASE + 0x08BC))
#define FEC_LTPC_PSET_DAC_ADC_INPUT0_1_0                                        ((APBADDR32)(FEC_LTPC_GC_REG_REG_BASE + 0x08C0))
#define FEC_LTPC_ILPC_INPUT0_1_0                                                ((APBADDR32)(FEC_LTPC_GC_REG_REG_BASE + 0x08C4))
#define FEC_LTPC_DPD_ET_INPUT0_1_0                                              ((APBADDR32)(FEC_LTPC_GC_REG_REG_BASE + 0x08C8))
#define FEC_LTPC_TXDFE_BB_INPUT0_1_0                                            ((APBADDR32)(FEC_LTPC_GC_REG_REG_BASE + 0x08CC))
#define FEC_LTPC_DET_RF_WIN_MASK_INPUT0_1_0                                     ((APBADDR32)(FEC_LTPC_GC_REG_REG_BASE + 0x08D0))
#define FEC_LTPC_DPD_RF_CW_MASK_INPUT0_1_0                                      ((APBADDR32)(FEC_LTPC_GC_REG_REG_BASE + 0x08D4))
#define FEC_LTPC_PCFE2_DAC_INPUT0_1_0                                           ((APBADDR32)(FEC_LTPC_GC_REG_REG_BASE + 0x08D8))
#define FEC_LTPC_DDPC_INPUT_GROUP_1_0                                           ((APBADDR32)(FEC_LTPC_GC_REG_REG_BASE + 0x08DC))
#define FEC_LTPC_PCFE2_INPUT0_2_0                                               ((APBADDR32)(FEC_LTPC_GC_REG_REG_BASE + 0x08E0))
#define FEC_LTPC_PCFE2_INPUT1_2_0                                               ((APBADDR32)(FEC_LTPC_GC_REG_REG_BASE + 0x08E4))
#define FEC_LTPC_PSET_DAC_ADC_INPUT0_2_0                                        ((APBADDR32)(FEC_LTPC_GC_REG_REG_BASE + 0x08E8))
#define FEC_LTPC_ILPC_INPUT0_2_0                                                ((APBADDR32)(FEC_LTPC_GC_REG_REG_BASE + 0x08EC))
#define FEC_LTPC_DPD_ET_INPUT0_2_0                                              ((APBADDR32)(FEC_LTPC_GC_REG_REG_BASE + 0x08F0))
#define FEC_LTPC_TXDFE_BB_INPUT0_2_0                                            ((APBADDR32)(FEC_LTPC_GC_REG_REG_BASE + 0x08F4))
#define FEC_LTPC_DET_RF_WIN_MASK_INPUT0_2_0                                     ((APBADDR32)(FEC_LTPC_GC_REG_REG_BASE + 0x08F8))
#define FEC_LTPC_DPD_RF_CW_MASK_INPUT0_2_0                                      ((APBADDR32)(FEC_LTPC_GC_REG_REG_BASE + 0x08FC))
#define FEC_LTPC_PCFE2_DAC_INPUT0_2_0                                           ((APBADDR32)(FEC_LTPC_GC_REG_REG_BASE + 0x0900))
#define FEC_LTPC_DDPC_INPUT_GROUP_2_0                                           ((APBADDR32)(FEC_LTPC_GC_REG_REG_BASE + 0x0904))
#define FEC_LTPC_PCFE2_INPUT0_3_0                                               ((APBADDR32)(FEC_LTPC_GC_REG_REG_BASE + 0x0908))
#define FEC_LTPC_PCFE2_INPUT1_3_0                                               ((APBADDR32)(FEC_LTPC_GC_REG_REG_BASE + 0x090C))
#define FEC_LTPC_PSET_DAC_ADC_INPUT0_3_0                                        ((APBADDR32)(FEC_LTPC_GC_REG_REG_BASE + 0x0910))
#define FEC_LTPC_ILPC_INPUT0_3_0                                                ((APBADDR32)(FEC_LTPC_GC_REG_REG_BASE + 0x0914))
#define FEC_LTPC_DPD_ET_INPUT0_3_0                                              ((APBADDR32)(FEC_LTPC_GC_REG_REG_BASE + 0x0918))
#define FEC_LTPC_TXDFE_BB_INPUT0_3_0                                            ((APBADDR32)(FEC_LTPC_GC_REG_REG_BASE + 0x091C))
#define FEC_LTPC_DET_RF_WIN_MASK_INPUT0_3_0                                     ((APBADDR32)(FEC_LTPC_GC_REG_REG_BASE + 0x0920))
#define FEC_LTPC_DPD_RF_CW_MASK_INPUT0_3_0                                      ((APBADDR32)(FEC_LTPC_GC_REG_REG_BASE + 0x0924))
#define FEC_LTPC_PCFE2_DAC_INPUT0_3_0                                           ((APBADDR32)(FEC_LTPC_GC_REG_REG_BASE + 0x0928))
#define FEC_LTPC_DDPC_INPUT_GROUP_3_0                                           ((APBADDR32)(FEC_LTPC_GC_REG_REG_BASE + 0x092C))
#define FEC_LTPC_BLANK_L1_PA_0                                                  ((APBADDR32)(FEC_LTPC_GC_REG_REG_BASE + 0x0930))
#define FEC_LTPC_BLANK_L1_PGA_0                                                 ((APBADDR32)(FEC_LTPC_GC_REG_REG_BASE + 0x0934))
#define FEC_LTPC_BLANK_L1_GTX_BB_DB_0                                           ((APBADDR32)(FEC_LTPC_GC_REG_REG_BASE + 0x0938))
#define FEC_LTPC_BLANK_L1_ET_DPD_DATA_0                                         ((APBADDR32)(FEC_LTPC_GC_REG_REG_BASE + 0x093C))
#define FEC_LTPC_BLANK_L1_ET_DPD_CONTROL_0                                      ((APBADDR32)(FEC_LTPC_GC_REG_REG_BASE + 0x0940))
#define FEC_LTPC_INI_PCFE2_INPUT0_0                                             ((APBADDR32)(FEC_LTPC_GC_REG_REG_BASE + 0x0948))
#define FEC_LTPC_INI_PCFE2_INPUT1_0                                             ((APBADDR32)(FEC_LTPC_GC_REG_REG_BASE + 0x094C))
#define FEC_LTPC_INI_PCFE2_INPUT2_0                                             ((APBADDR32)(FEC_LTPC_GC_REG_REG_BASE + 0x0950))
#define FEC_LTPC_INI_PCFE2_INPUT3_0                                             ((APBADDR32)(FEC_LTPC_GC_REG_REG_BASE + 0x0954))
#define FEC_LTPC_INI_PCFE2_INPUT4_0                                             ((APBADDR32)(FEC_LTPC_GC_REG_REG_BASE + 0x0958))
#define FEC_LTPC_INI_DDPC_INPUT0_0                                              ((APBADDR32)(FEC_LTPC_GC_REG_REG_BASE + 0x0968))
#define FEC_LTPC_INI_DDPC_INPUT1_0                                              ((APBADDR32)(FEC_LTPC_GC_REG_REG_BASE + 0x096C))
#define FEC_LTPC_INI_DDPC_INPUT2_0                                              ((APBADDR32)(FEC_LTPC_GC_REG_REG_BASE + 0x0970))
#define FEC_LTPC_INI_ILPC_INPUT0_0                                              ((APBADDR32)(FEC_LTPC_GC_REG_REG_BASE + 0x0974))
#define FEC_LTPC_INI_ILPC_INPUT1_0                                              ((APBADDR32)(FEC_LTPC_GC_REG_REG_BASE + 0x0978))
#define FEC_LTPC_INI_ILPC_INPUT2_0                                              ((APBADDR32)(FEC_LTPC_GC_REG_REG_BASE + 0x097C))
#define FEC_LTPC_INI_ET_INPUT0_0                                                ((APBADDR32)(FEC_LTPC_GC_REG_REG_BASE + 0x0988))
#define FEC_LTPC_INI_TXK_INPUT0_0                                               ((APBADDR32)(FEC_LTPC_GC_REG_REG_BASE + 0x098C))
#define FEC_LTPC_INI_RFIC_CS_INPUT0_0                                           ((APBADDR32)(FEC_LTPC_GC_REG_REG_BASE + 0x0990))
#define FEC_LTPC_INI_MIPI_LENGTH_INPUT0_0                                       ((APBADDR32)(FEC_LTPC_GC_REG_REG_BASE + 0x0994))
#define FEC_LTPC_INI_MIPI_LENGTH_INPUT1_0                                       ((APBADDR32)(FEC_LTPC_GC_REG_REG_BASE + 0x0998))
#define FEC_LTPC_INI_PGA_LENGTH_INPUT0_0                                        ((APBADDR32)(FEC_LTPC_GC_REG_REG_BASE + 0x099C))
#define FEC_LTPC_INI_PMIC_LENGTH_INPUT0_0                                       ((APBADDR32)(FEC_LTPC_GC_REG_REG_BASE + 0x09A0))

#define FEC_LTPC_PA_A_TABLE_0(n)                                                ((APBADDR32)(FEC_LTPC_GC_REG_REG_BASE + 0x09B0 + (n)* 4))   //n is from 0 to 167
#define FEC_LTPC_PA_SB_NUM_A_0                                                  ((APBADDR32)(FEC_LTPC_GC_REG_REG_BASE + 0x0C50))
#define FEC_LTPC_PA_B_TABLE_0(n)                                                ((APBADDR32)(FEC_LTPC_GC_REG_REG_BASE + 0x0C54 + (n)* 4))   //n is from 0 to 167
#define FEC_LTPC_PA_SB_NUM_B_0                                                  ((APBADDR32)(FEC_LTPC_GC_REG_REG_BASE + 0x0EF4))
#define FEC_LTPC_PA_C_TABLE_0(n)                                                ((APBADDR32)(FEC_LTPC_GC_REG_REG_BASE + 0x0EF8 + (n)* 4))   //n is from 0 to 167
#define FEC_LTPC_PA_SB_NUM_C_0                                                  ((APBADDR32)(FEC_LTPC_GC_REG_REG_BASE + 0x1198))
#define FEC_LTPC_CPL_TABLE_0(n)                                                 ((APBADDR32)(FEC_LTPC_GC_REG_REG_BASE + 0x119C + (n)* 4))   //n is from 0 to 62
#define FEC_LTPC_CPL_SB_NUM_0                                                   ((APBADDR32)(FEC_LTPC_GC_REG_REG_BASE + 0x1298))
#define FEC_LTPC_CPL_LUT_GCPL_0(n)                                              ((APBADDR32)(FEC_LTPC_GC_REG_REG_BASE + 0x129C + (n)* 4))   //n is from 0 to 2
#define FEC_LTPC_TXPGA_LUT_GPGA_A_0(n)                                          ((APBADDR32)(FEC_LTPC_GC_REG_REG_BASE + 0x1330 + (n)* 4))   //n is from 0 to 29
#define FEC_LTPC_TXPGA_LUT_N_A_0                                                ((APBADDR32)(FEC_LTPC_GC_REG_REG_BASE + 0x13A8))
#define FEC_LTPC_TXPGA_LUT_GPGA_B_0(n)                                          ((APBADDR32)(FEC_LTPC_GC_REG_REG_BASE + 0x13AC + (n)* 4))   //n is from 0 to 20
#define FEC_LTPC_TXPGA_LUT_N_B_0                                                ((APBADDR32)(FEC_LTPC_GC_REG_REG_BASE + 0x1400))
#define FEC_LTPC_RES_TABLE_0(n)                                                 ((APBADDR32)(FEC_LTPC_GC_REG_REG_BASE + 0x1404 + (n)* 4))   //n is from 0 to 20
#define FEC_LTPC_RES_SB_NUM_0                                                   ((APBADDR32)(FEC_LTPC_GC_REG_REG_BASE + 0x1458))
#define FEC_LTPC_DET_LUT_GDET_0(n)                                              ((APBADDR32)(FEC_LTPC_GC_REG_REG_BASE + 0x145C + (n)* 4))   //n is from 0 to 14
#define FEC_LTPC_DET_LUT_N_0                                                    ((APBADDR32)(FEC_LTPC_GC_REG_REG_BASE + 0x1498))
#define FEC_LTPC_DPD_LUT_NORM_FACTOR_0(n)                                       ((APBADDR32)(FEC_LTPC_GC_REG_REG_BASE + 0x149C + (n)* 4))   //n is from 0 to 7
#define FEC_LTPC_ET_TABLE_0(n)                                                  ((APBADDR32)(FEC_LTPC_GC_REG_REG_BASE + 0x14BC + (n)* 4))   //n is from 0 to 1
#define FEC_LTPC_TXPGA_LUT_CFG_A_B_0(n)                                         ((APBADDR32)(FEC_LTPC_GC_REG_REG_BASE + 0x14C4 + (n)* 4))   //n is from 0 to 29
#define FEC_LTPC_MIPI_APT_0(n)                                                  ((APBADDR32)(FEC_LTPC_GC_REG_REG_BASE + 0x1550 + (n)* 4))   //n is from 0 to 107
#define FEC_LTPC_MIPI_DPD_0(n)                                                  ((APBADDR32)(FEC_LTPC_GC_REG_REG_BASE + 0x1700 + (n)* 4))   //n is from 0 to 107
#define FEC_LTPC_BSI_PMIC_APT_0(n)                                              ((APBADDR32)(FEC_LTPC_GC_REG_REG_BASE + 0x18B0 + (n)* 4))   //n is from 0 to 26
#define FEC_LTPC_BSI_PMIC_DPD_0(n)                                              ((APBADDR32)(FEC_LTPC_GC_REG_REG_BASE + 0x191C + (n)* 4))   //n is from 0 to 26
#define FEC_LTPC_BSI_PGA_A_CW_0(n)                                              ((APBADDR32)(FEC_LTPC_GC_REG_REG_BASE + 0x1988 + (n)* 4))   //n is from 0 to 89
#define FEC_LTPC_BSI_PGA_B_CW_0(n)                                              ((APBADDR32)(FEC_LTPC_GC_REG_REG_BASE + 0x1AF0 + (n)* 4))   //n is from 0 to 62
#define FEC_LTPC_BSI_DET_CW_0(n)                                                ((APBADDR32)(FEC_LTPC_GC_REG_REG_BASE + 0x1BEC + (n)* 4))   //n is from 0 to 14
#define FEC_LTPC_APC_APT_DPD_0(n)                                               ((APBADDR32)(FEC_LTPC_GC_REG_REG_BASE + 0x1C28 + (n)* 4))   //n is from 0 to 8
#define FEC_LTPC_VM_APT_DPD_0(n)                                                ((APBADDR32)(FEC_LTPC_GC_REG_REG_BASE + 0x1C4C + (n)* 4))   //n is from 0 to 8
#define FEC_LTPC_MIPI_PA_ETM_IN_APT_MODE_0(n)                                   ((APBADDR32)(FEC_LTPC_GC_REG_REG_BASE + 0x1C90 + (n)* 4))   //n is from 0 to 107
#define FEC_LTPC_MIPI_PA_ETM_IN_DPD_MODE_0(n)                                   ((APBADDR32)(FEC_LTPC_GC_REG_REG_BASE + 0x1E40 + (n)* 4))   //n is from 0 to 107




#define FEC_LTPC_ADDR_MIPI_PA_GROUP0_0_result_mipi_pa_length0_0_LSB             (16)
#define FEC_LTPC_ADDR_MIPI_PA_GROUP0_0_result_mipi_pa_length0_0_WIDTH           (8)
#define FEC_LTPC_ADDR_MIPI_PA_GROUP0_0_result_mipi_pa_length0_0_MASK            (0x00FF0000)

#define FEC_LTPC_ADDR_MIPI_PA_GROUP0_0_result_mipi_pa_addr0_0_LSB               (0)
#define FEC_LTPC_ADDR_MIPI_PA_GROUP0_0_result_mipi_pa_addr0_0_WIDTH             (16)
#define FEC_LTPC_ADDR_MIPI_PA_GROUP0_0_result_mipi_pa_addr0_0_MASK              (0x0000FFFF)

#define FEC_LTPC_ADDR_MIPI_PA_GROUP0_1_result_mipi_pa_length0_1_LSB             (16)
#define FEC_LTPC_ADDR_MIPI_PA_GROUP0_1_result_mipi_pa_length0_1_WIDTH           (8)
#define FEC_LTPC_ADDR_MIPI_PA_GROUP0_1_result_mipi_pa_length0_1_MASK            (0x00FF0000)

#define FEC_LTPC_ADDR_MIPI_PA_GROUP0_1_result_mipi_pa_addr0_1_LSB               (0)
#define FEC_LTPC_ADDR_MIPI_PA_GROUP0_1_result_mipi_pa_addr0_1_WIDTH             (16)
#define FEC_LTPC_ADDR_MIPI_PA_GROUP0_1_result_mipi_pa_addr0_1_MASK              (0x0000FFFF)

#define FEC_LTPC_ADDR_MIPI_PA_GROUP0_2_result_mipi_pa_length0_2_LSB             (16)
#define FEC_LTPC_ADDR_MIPI_PA_GROUP0_2_result_mipi_pa_length0_2_WIDTH           (8)
#define FEC_LTPC_ADDR_MIPI_PA_GROUP0_2_result_mipi_pa_length0_2_MASK            (0x00FF0000)

#define FEC_LTPC_ADDR_MIPI_PA_GROUP0_2_result_mipi_pa_addr0_2_LSB               (0)
#define FEC_LTPC_ADDR_MIPI_PA_GROUP0_2_result_mipi_pa_addr0_2_WIDTH             (16)
#define FEC_LTPC_ADDR_MIPI_PA_GROUP0_2_result_mipi_pa_addr0_2_MASK              (0x0000FFFF)

#define FEC_LTPC_ADDR_MIPI_PA_GROUP0_3_result_mipi_pa_length0_3_LSB             (16)
#define FEC_LTPC_ADDR_MIPI_PA_GROUP0_3_result_mipi_pa_length0_3_WIDTH           (8)
#define FEC_LTPC_ADDR_MIPI_PA_GROUP0_3_result_mipi_pa_length0_3_MASK            (0x00FF0000)

#define FEC_LTPC_ADDR_MIPI_PA_GROUP0_3_result_mipi_pa_addr0_3_LSB               (0)
#define FEC_LTPC_ADDR_MIPI_PA_GROUP0_3_result_mipi_pa_addr0_3_WIDTH             (16)
#define FEC_LTPC_ADDR_MIPI_PA_GROUP0_3_result_mipi_pa_addr0_3_MASK              (0x0000FFFF)

#define FEC_LTPC_ADDR_MIPI_ETM_GROUP0_0_result_mipi_et_length0_0_LSB            (16)
#define FEC_LTPC_ADDR_MIPI_ETM_GROUP0_0_result_mipi_et_length0_0_WIDTH          (8)
#define FEC_LTPC_ADDR_MIPI_ETM_GROUP0_0_result_mipi_et_length0_0_MASK           (0x00FF0000)

#define FEC_LTPC_ADDR_MIPI_ETM_GROUP0_0_result_mipi_et_addr0_0_LSB              (0)
#define FEC_LTPC_ADDR_MIPI_ETM_GROUP0_0_result_mipi_et_addr0_0_WIDTH            (16)
#define FEC_LTPC_ADDR_MIPI_ETM_GROUP0_0_result_mipi_et_addr0_0_MASK             (0x0000FFFF)

#define FEC_LTPC_ADDR_MIPI_ETM_GROUP0_1_result_mipi_et_length0_1_LSB            (16)
#define FEC_LTPC_ADDR_MIPI_ETM_GROUP0_1_result_mipi_et_length0_1_WIDTH          (8)
#define FEC_LTPC_ADDR_MIPI_ETM_GROUP0_1_result_mipi_et_length0_1_MASK           (0x00FF0000)

#define FEC_LTPC_ADDR_MIPI_ETM_GROUP0_1_result_mipi_et_addr0_1_LSB              (0)
#define FEC_LTPC_ADDR_MIPI_ETM_GROUP0_1_result_mipi_et_addr0_1_WIDTH            (16)
#define FEC_LTPC_ADDR_MIPI_ETM_GROUP0_1_result_mipi_et_addr0_1_MASK             (0x0000FFFF)

#define FEC_LTPC_ADDR_MIPI_ETM_GROUP0_2_result_mipi_et_length0_2_LSB            (16)
#define FEC_LTPC_ADDR_MIPI_ETM_GROUP0_2_result_mipi_et_length0_2_WIDTH          (8)
#define FEC_LTPC_ADDR_MIPI_ETM_GROUP0_2_result_mipi_et_length0_2_MASK           (0x00FF0000)

#define FEC_LTPC_ADDR_MIPI_ETM_GROUP0_2_result_mipi_et_addr0_2_LSB              (0)
#define FEC_LTPC_ADDR_MIPI_ETM_GROUP0_2_result_mipi_et_addr0_2_WIDTH            (16)
#define FEC_LTPC_ADDR_MIPI_ETM_GROUP0_2_result_mipi_et_addr0_2_MASK             (0x0000FFFF)

#define FEC_LTPC_ADDR_MIPI_ETM_GROUP0_3_result_mipi_et_length0_3_LSB            (16)
#define FEC_LTPC_ADDR_MIPI_ETM_GROUP0_3_result_mipi_et_length0_3_WIDTH          (8)
#define FEC_LTPC_ADDR_MIPI_ETM_GROUP0_3_result_mipi_et_length0_3_MASK           (0x00FF0000)

#define FEC_LTPC_ADDR_MIPI_ETM_GROUP0_3_result_mipi_et_addr0_3_LSB              (0)
#define FEC_LTPC_ADDR_MIPI_ETM_GROUP0_3_result_mipi_et_addr0_3_WIDTH            (16)
#define FEC_LTPC_ADDR_MIPI_ETM_GROUP0_3_result_mipi_et_addr0_3_MASK             (0x0000FFFF)

#define FEC_LTPC_ADDR_MIPI_ETM_GROUP1_0_result_mipi_et_length1_0_LSB            (16)
#define FEC_LTPC_ADDR_MIPI_ETM_GROUP1_0_result_mipi_et_length1_0_WIDTH          (8)
#define FEC_LTPC_ADDR_MIPI_ETM_GROUP1_0_result_mipi_et_length1_0_MASK           (0x00FF0000)

#define FEC_LTPC_ADDR_MIPI_ETM_GROUP1_0_result_mipi_et_addr1_0_LSB              (0)
#define FEC_LTPC_ADDR_MIPI_ETM_GROUP1_0_result_mipi_et_addr1_0_WIDTH            (16)
#define FEC_LTPC_ADDR_MIPI_ETM_GROUP1_0_result_mipi_et_addr1_0_MASK             (0x0000FFFF)

#define FEC_LTPC_ADDR_MIPI_ETM_GROUP1_1_result_mipi_et_length1_1_LSB            (16)
#define FEC_LTPC_ADDR_MIPI_ETM_GROUP1_1_result_mipi_et_length1_1_WIDTH          (8)
#define FEC_LTPC_ADDR_MIPI_ETM_GROUP1_1_result_mipi_et_length1_1_MASK           (0x00FF0000)

#define FEC_LTPC_ADDR_MIPI_ETM_GROUP1_1_result_mipi_et_addr1_1_LSB              (0)
#define FEC_LTPC_ADDR_MIPI_ETM_GROUP1_1_result_mipi_et_addr1_1_WIDTH            (16)
#define FEC_LTPC_ADDR_MIPI_ETM_GROUP1_1_result_mipi_et_addr1_1_MASK             (0x0000FFFF)

#define FEC_LTPC_ADDR_MIPI_ETM_GROUP1_2_result_mipi_et_length1_2_LSB            (16)
#define FEC_LTPC_ADDR_MIPI_ETM_GROUP1_2_result_mipi_et_length1_2_WIDTH          (8)
#define FEC_LTPC_ADDR_MIPI_ETM_GROUP1_2_result_mipi_et_length1_2_MASK           (0x00FF0000)

#define FEC_LTPC_ADDR_MIPI_ETM_GROUP1_2_result_mipi_et_addr1_2_LSB              (0)
#define FEC_LTPC_ADDR_MIPI_ETM_GROUP1_2_result_mipi_et_addr1_2_WIDTH            (16)
#define FEC_LTPC_ADDR_MIPI_ETM_GROUP1_2_result_mipi_et_addr1_2_MASK             (0x0000FFFF)

#define FEC_LTPC_ADDR_MIPI_ETM_GROUP1_3_result_mipi_et_length1_3_LSB            (16)
#define FEC_LTPC_ADDR_MIPI_ETM_GROUP1_3_result_mipi_et_length1_3_WIDTH          (8)
#define FEC_LTPC_ADDR_MIPI_ETM_GROUP1_3_result_mipi_et_length1_3_MASK           (0x00FF0000)

#define FEC_LTPC_ADDR_MIPI_ETM_GROUP1_3_result_mipi_et_addr1_3_LSB              (0)
#define FEC_LTPC_ADDR_MIPI_ETM_GROUP1_3_result_mipi_et_addr1_3_WIDTH            (16)
#define FEC_LTPC_ADDR_MIPI_ETM_GROUP1_3_result_mipi_et_addr1_3_MASK             (0x0000FFFF)

#define FEC_LTPC_ADDR_MIPI_ETM_GROUP2_0_result_mipi_et_length2_0_LSB            (16)
#define FEC_LTPC_ADDR_MIPI_ETM_GROUP2_0_result_mipi_et_length2_0_WIDTH          (8)
#define FEC_LTPC_ADDR_MIPI_ETM_GROUP2_0_result_mipi_et_length2_0_MASK           (0x00FF0000)

#define FEC_LTPC_ADDR_MIPI_ETM_GROUP2_0_result_mipi_et_addr2_0_LSB              (0)
#define FEC_LTPC_ADDR_MIPI_ETM_GROUP2_0_result_mipi_et_addr2_0_WIDTH            (16)
#define FEC_LTPC_ADDR_MIPI_ETM_GROUP2_0_result_mipi_et_addr2_0_MASK             (0x0000FFFF)

#define FEC_LTPC_ADDR_MIPI_ETM_GROUP2_1_result_mipi_et_length2_1_LSB            (16)
#define FEC_LTPC_ADDR_MIPI_ETM_GROUP2_1_result_mipi_et_length2_1_WIDTH          (8)
#define FEC_LTPC_ADDR_MIPI_ETM_GROUP2_1_result_mipi_et_length2_1_MASK           (0x00FF0000)

#define FEC_LTPC_ADDR_MIPI_ETM_GROUP2_1_result_mipi_et_addr2_1_LSB              (0)
#define FEC_LTPC_ADDR_MIPI_ETM_GROUP2_1_result_mipi_et_addr2_1_WIDTH            (16)
#define FEC_LTPC_ADDR_MIPI_ETM_GROUP2_1_result_mipi_et_addr2_1_MASK             (0x0000FFFF)

#define FEC_LTPC_ADDR_MIPI_ETM_GROUP2_2_result_mipi_et_length2_2_LSB            (16)
#define FEC_LTPC_ADDR_MIPI_ETM_GROUP2_2_result_mipi_et_length2_2_WIDTH          (8)
#define FEC_LTPC_ADDR_MIPI_ETM_GROUP2_2_result_mipi_et_length2_2_MASK           (0x00FF0000)

#define FEC_LTPC_ADDR_MIPI_ETM_GROUP2_2_result_mipi_et_addr2_2_LSB              (0)
#define FEC_LTPC_ADDR_MIPI_ETM_GROUP2_2_result_mipi_et_addr2_2_WIDTH            (16)
#define FEC_LTPC_ADDR_MIPI_ETM_GROUP2_2_result_mipi_et_addr2_2_MASK             (0x0000FFFF)

#define FEC_LTPC_ADDR_MIPI_ETM_GROUP2_3_result_mipi_et_length2_3_LSB            (16)
#define FEC_LTPC_ADDR_MIPI_ETM_GROUP2_3_result_mipi_et_length2_3_WIDTH          (8)
#define FEC_LTPC_ADDR_MIPI_ETM_GROUP2_3_result_mipi_et_length2_3_MASK           (0x00FF0000)

#define FEC_LTPC_ADDR_MIPI_ETM_GROUP2_3_result_mipi_et_addr2_3_LSB              (0)
#define FEC_LTPC_ADDR_MIPI_ETM_GROUP2_3_result_mipi_et_addr2_3_WIDTH            (16)
#define FEC_LTPC_ADDR_MIPI_ETM_GROUP2_3_result_mipi_et_addr2_3_MASK             (0x0000FFFF)

#define FEC_LTPC_ADDR_PMIC_GROUP0_0_result_pmic_length0_0_LSB                   (16)
#define FEC_LTPC_ADDR_PMIC_GROUP0_0_result_pmic_length0_0_WIDTH                 (8)
#define FEC_LTPC_ADDR_PMIC_GROUP0_0_result_pmic_length0_0_MASK                  (0x00FF0000)

#define FEC_LTPC_ADDR_PMIC_GROUP0_0_result_pmic_addr0_0_LSB                     (0)
#define FEC_LTPC_ADDR_PMIC_GROUP0_0_result_pmic_addr0_0_WIDTH                   (16)
#define FEC_LTPC_ADDR_PMIC_GROUP0_0_result_pmic_addr0_0_MASK                    (0x0000FFFF)

#define FEC_LTPC_ADDR_PMIC_GROUP0_1_result_pmic_length1_1_LSB                   (16)
#define FEC_LTPC_ADDR_PMIC_GROUP0_1_result_pmic_length1_1_WIDTH                 (8)
#define FEC_LTPC_ADDR_PMIC_GROUP0_1_result_pmic_length1_1_MASK                  (0x00FF0000)

#define FEC_LTPC_ADDR_PMIC_GROUP0_1_result_pmic_addr1_1_LSB                     (0)
#define FEC_LTPC_ADDR_PMIC_GROUP0_1_result_pmic_addr1_1_WIDTH                   (16)
#define FEC_LTPC_ADDR_PMIC_GROUP0_1_result_pmic_addr1_1_MASK                    (0x0000FFFF)

#define FEC_LTPC_ADDR_PMIC_GROUP0_2_result_pmic_length2_2_LSB                   (16)
#define FEC_LTPC_ADDR_PMIC_GROUP0_2_result_pmic_length2_2_WIDTH                 (8)
#define FEC_LTPC_ADDR_PMIC_GROUP0_2_result_pmic_length2_2_MASK                  (0x00FF0000)

#define FEC_LTPC_ADDR_PMIC_GROUP0_2_result_pmic_addr2_2_LSB                     (0)
#define FEC_LTPC_ADDR_PMIC_GROUP0_2_result_pmic_addr2_2_WIDTH                   (16)
#define FEC_LTPC_ADDR_PMIC_GROUP0_2_result_pmic_addr2_2_MASK                    (0x0000FFFF)

#define FEC_LTPC_ADDR_PMIC_GROUP0_3_result_pmic_length3_3_LSB                   (16)
#define FEC_LTPC_ADDR_PMIC_GROUP0_3_result_pmic_length3_3_WIDTH                 (8)
#define FEC_LTPC_ADDR_PMIC_GROUP0_3_result_pmic_length3_3_MASK                  (0x00FF0000)

#define FEC_LTPC_ADDR_PMIC_GROUP0_3_result_pmic_addr3_3_LSB                     (0)
#define FEC_LTPC_ADDR_PMIC_GROUP0_3_result_pmic_addr3_3_WIDTH                   (16)
#define FEC_LTPC_ADDR_PMIC_GROUP0_3_result_pmic_addr3_3_MASK                    (0x0000FFFF)

#define FEC_LTPC_ADDR_PGA_GROUP0_0_result_pga_length0_0_LSB                     (16)
#define FEC_LTPC_ADDR_PGA_GROUP0_0_result_pga_length0_0_WIDTH                   (8)
#define FEC_LTPC_ADDR_PGA_GROUP0_0_result_pga_length0_0_MASK                    (0x00FF0000)

#define FEC_LTPC_ADDR_PGA_GROUP0_0_result_pga_addr0_0_LSB                       (0)
#define FEC_LTPC_ADDR_PGA_GROUP0_0_result_pga_addr0_0_WIDTH                     (16)
#define FEC_LTPC_ADDR_PGA_GROUP0_0_result_pga_addr0_0_MASK                      (0x0000FFFF)

#define FEC_LTPC_ADDR_PGA_GROUP0_1_result_pga_length1_1_LSB                     (16)
#define FEC_LTPC_ADDR_PGA_GROUP0_1_result_pga_length1_1_WIDTH                   (8)
#define FEC_LTPC_ADDR_PGA_GROUP0_1_result_pga_length1_1_MASK                    (0x00FF0000)

#define FEC_LTPC_ADDR_PGA_GROUP0_1_result_pga_addr1_1_LSB                       (0)
#define FEC_LTPC_ADDR_PGA_GROUP0_1_result_pga_addr1_1_WIDTH                     (16)
#define FEC_LTPC_ADDR_PGA_GROUP0_1_result_pga_addr1_1_MASK                      (0x0000FFFF)

#define FEC_LTPC_ADDR_PGA_GROUP0_2_result_pga_length2_2_LSB                     (16)
#define FEC_LTPC_ADDR_PGA_GROUP0_2_result_pga_length2_2_WIDTH                   (8)
#define FEC_LTPC_ADDR_PGA_GROUP0_2_result_pga_length2_2_MASK                    (0x00FF0000)

#define FEC_LTPC_ADDR_PGA_GROUP0_2_result_pga_addr2_2_LSB                       (0)
#define FEC_LTPC_ADDR_PGA_GROUP0_2_result_pga_addr2_2_WIDTH                     (16)
#define FEC_LTPC_ADDR_PGA_GROUP0_2_result_pga_addr2_2_MASK                      (0x0000FFFF)

#define FEC_LTPC_ADDR_PGA_GROUP0_3_result_pga_length3_3_LSB                     (16)
#define FEC_LTPC_ADDR_PGA_GROUP0_3_result_pga_length3_3_WIDTH                   (8)
#define FEC_LTPC_ADDR_PGA_GROUP0_3_result_pga_length3_3_MASK                    (0x00FF0000)

#define FEC_LTPC_ADDR_PGA_GROUP0_3_result_pga_addr3_3_LSB                       (0)
#define FEC_LTPC_ADDR_PGA_GROUP0_3_result_pga_addr3_3_WIDTH                     (16)
#define FEC_LTPC_ADDR_PGA_GROUP0_3_result_pga_addr3_3_MASK                      (0x0000FFFF)

#define FEC_LTPC_ADDR_PGA_DET_GROUP0_0_result_pga_det_length0_0_LSB             (16)
#define FEC_LTPC_ADDR_PGA_DET_GROUP0_0_result_pga_det_length0_0_WIDTH           (8)
#define FEC_LTPC_ADDR_PGA_DET_GROUP0_0_result_pga_det_length0_0_MASK            (0x00FF0000)

#define FEC_LTPC_ADDR_PGA_DET_GROUP0_0_result_pga_det_addr0_0_LSB               (0)
#define FEC_LTPC_ADDR_PGA_DET_GROUP0_0_result_pga_det_addr0_0_WIDTH             (16)
#define FEC_LTPC_ADDR_PGA_DET_GROUP0_0_result_pga_det_addr0_0_MASK              (0x0000FFFF)

#define FEC_LTPC_ADDR_PGA_DET_GROUP0_1_result_pga_det_length1_1_LSB             (16)
#define FEC_LTPC_ADDR_PGA_DET_GROUP0_1_result_pga_det_length1_1_WIDTH           (8)
#define FEC_LTPC_ADDR_PGA_DET_GROUP0_1_result_pga_det_length1_1_MASK            (0x00FF0000)

#define FEC_LTPC_ADDR_PGA_DET_GROUP0_1_result_pga_det_addr1_1_LSB               (0)
#define FEC_LTPC_ADDR_PGA_DET_GROUP0_1_result_pga_det_addr1_1_WIDTH             (16)
#define FEC_LTPC_ADDR_PGA_DET_GROUP0_1_result_pga_det_addr1_1_MASK              (0x0000FFFF)

#define FEC_LTPC_ADDR_PGA_DET_GROUP0_2_result_pga_det_length2_2_LSB             (16)
#define FEC_LTPC_ADDR_PGA_DET_GROUP0_2_result_pga_det_length2_2_WIDTH           (8)
#define FEC_LTPC_ADDR_PGA_DET_GROUP0_2_result_pga_det_length2_2_MASK            (0x00FF0000)

#define FEC_LTPC_ADDR_PGA_DET_GROUP0_2_result_pga_det_addr2_2_LSB               (0)
#define FEC_LTPC_ADDR_PGA_DET_GROUP0_2_result_pga_det_addr2_2_WIDTH             (16)
#define FEC_LTPC_ADDR_PGA_DET_GROUP0_2_result_pga_det_addr2_2_MASK              (0x0000FFFF)

#define FEC_LTPC_ADDR_PGA_DET_GROUP0_3_result_pga_det_length3_3_LSB             (16)
#define FEC_LTPC_ADDR_PGA_DET_GROUP0_3_result_pga_det_length3_3_WIDTH           (8)
#define FEC_LTPC_ADDR_PGA_DET_GROUP0_3_result_pga_det_length3_3_MASK            (0x00FF0000)

#define FEC_LTPC_ADDR_PGA_DET_GROUP0_3_result_pga_det_addr3_3_LSB               (0)
#define FEC_LTPC_ADDR_PGA_DET_GROUP0_3_result_pga_det_addr3_3_WIDTH             (16)
#define FEC_LTPC_ADDR_PGA_DET_GROUP0_3_result_pga_det_addr3_3_MASK              (0x0000FFFF)

#define FEC_LTPC_ADDR_PA_A_HEAD_0_addr_pa_lut_pth_a_0_LSB                       (16)
#define FEC_LTPC_ADDR_PA_A_HEAD_0_addr_pa_lut_pth_a_0_WIDTH                     (16)
#define FEC_LTPC_ADDR_PA_A_HEAD_0_addr_pa_lut_pth_a_0_MASK                      (0xFFFF0000)

#define FEC_LTPC_ADDR_PA_A_HEAD_0_addr_pa_lut_mode_a_0_LSB                      (0)
#define FEC_LTPC_ADDR_PA_A_HEAD_0_addr_pa_lut_mode_a_0_WIDTH                    (16)
#define FEC_LTPC_ADDR_PA_A_HEAD_0_addr_pa_lut_mode_a_0_MASK                     (0x0000FFFF)

#define FEC_LTPC_ADDR_PA_B_HEAD_0_addr_pa_lut_pth_b_0_LSB                       (16)
#define FEC_LTPC_ADDR_PA_B_HEAD_0_addr_pa_lut_pth_b_0_WIDTH                     (16)
#define FEC_LTPC_ADDR_PA_B_HEAD_0_addr_pa_lut_pth_b_0_MASK                      (0xFFFF0000)

#define FEC_LTPC_ADDR_PA_B_HEAD_0_addr_pa_lut_mode_b_0_LSB                      (0)
#define FEC_LTPC_ADDR_PA_B_HEAD_0_addr_pa_lut_mode_b_0_WIDTH                    (16)
#define FEC_LTPC_ADDR_PA_B_HEAD_0_addr_pa_lut_mode_b_0_MASK                     (0x0000FFFF)

#define FEC_LTPC_ADDR_PA_C_HEAD_0_addr_pa_lut_pth_c_0_LSB                       (16)
#define FEC_LTPC_ADDR_PA_C_HEAD_0_addr_pa_lut_pth_c_0_WIDTH                     (16)
#define FEC_LTPC_ADDR_PA_C_HEAD_0_addr_pa_lut_pth_c_0_MASK                      (0xFFFF0000)

#define FEC_LTPC_ADDR_PA_C_HEAD_0_addr_pa_lut_mode_c_0_LSB                      (0)
#define FEC_LTPC_ADDR_PA_C_HEAD_0_addr_pa_lut_mode_c_0_WIDTH                    (16)
#define FEC_LTPC_ADDR_PA_C_HEAD_0_addr_pa_lut_mode_c_0_MASK                     (0x0000FFFF)

#define FEC_LTPC_ADDR_PGA_HEAD_0_addr_txpga_lut_gpga_a_0_LSB                    (16)
#define FEC_LTPC_ADDR_PGA_HEAD_0_addr_txpga_lut_gpga_a_0_WIDTH                  (16)
#define FEC_LTPC_ADDR_PGA_HEAD_0_addr_txpga_lut_gpga_a_0_MASK                   (0xFFFF0000)

#define FEC_LTPC_ADDR_PGA_HEAD_0_addr_txpga_lut_gpga_b_0_LSB                    (0)
#define FEC_LTPC_ADDR_PGA_HEAD_0_addr_txpga_lut_gpga_b_0_WIDTH                  (16)
#define FEC_LTPC_ADDR_PGA_HEAD_0_addr_txpga_lut_gpga_b_0_MASK                   (0x0000FFFF)

#define FEC_LTPC_SW_TXK_DDPC_CTRL_sw_ddpc_out_en_LSB                            (24)
#define FEC_LTPC_SW_TXK_DDPC_CTRL_sw_ddpc_out_en_WIDTH                          (8)
#define FEC_LTPC_SW_TXK_DDPC_CTRL_sw_ddpc_out_en_MASK                           (0xFF000000)

#define FEC_LTPC_SW_TXK_DDPC_0_sw_ddpc_out_1_0_LSB                              (16)
#define FEC_LTPC_SW_TXK_DDPC_0_sw_ddpc_out_1_0_WIDTH                            (16)
#define FEC_LTPC_SW_TXK_DDPC_0_sw_ddpc_out_1_0_MASK                             (0xFFFF0000)

#define FEC_LTPC_SW_TXK_DDPC_0_sw_ddpc_out_0_0_LSB                              (0)
#define FEC_LTPC_SW_TXK_DDPC_0_sw_ddpc_out_0_0_WIDTH                            (16)
#define FEC_LTPC_SW_TXK_DDPC_0_sw_ddpc_out_0_0_MASK                             (0x0000FFFF)

#define FEC_LTPC_SW_TXK_DDPC_1_sw_ddpc_out_3_0_LSB                              (16)
#define FEC_LTPC_SW_TXK_DDPC_1_sw_ddpc_out_3_0_WIDTH                            (16)
#define FEC_LTPC_SW_TXK_DDPC_1_sw_ddpc_out_3_0_MASK                             (0xFFFF0000)

#define FEC_LTPC_SW_TXK_DDPC_1_sw_ddpc_out_2_0_LSB                              (0)
#define FEC_LTPC_SW_TXK_DDPC_1_sw_ddpc_out_2_0_WIDTH                            (16)
#define FEC_LTPC_SW_TXK_DDPC_1_sw_ddpc_out_2_0_MASK                             (0x0000FFFF)

#define FEC_LTPC_SUB_CONTROL_INPUT0_0_mode_0_LSB                                (24)
#define FEC_LTPC_SUB_CONTROL_INPUT0_0_mode_0_WIDTH                              (8)
#define FEC_LTPC_SUB_CONTROL_INPUT0_0_mode_0_MASK                               (0xFF000000)

#define FEC_LTPC_SUB_CONTROL_INPUT1_0_is_init_0_LSB                             (24)
#define FEC_LTPC_SUB_CONTROL_INPUT1_0_is_init_0_WIDTH                           (8)
#define FEC_LTPC_SUB_CONTROL_INPUT1_0_is_init_0_MASK                            (0xFF000000)

#define FEC_LTPC_SUB_CONTROL_INPUT1_0_en_pa_droop_0_LSB                         (16)
#define FEC_LTPC_SUB_CONTROL_INPUT1_0_en_pa_droop_0_WIDTH                       (8)
#define FEC_LTPC_SUB_CONTROL_INPUT1_0_en_pa_droop_0_MASK                        (0x00FF0000)

#define FEC_LTPC_SUB_CONTROL_INPUT1_0_en_cpl_droop_0_LSB                        (8)
#define FEC_LTPC_SUB_CONTROL_INPUT1_0_en_cpl_droop_0_WIDTH                      (8)
#define FEC_LTPC_SUB_CONTROL_INPUT1_0_en_cpl_droop_0_MASK                       (0x0000FF00)

#define FEC_LTPC_SUB_CONTROL_INPUT1_0_en_res_droop_0_LSB                        (0)
#define FEC_LTPC_SUB_CONTROL_INPUT1_0_en_res_droop_0_WIDTH                      (8)
#define FEC_LTPC_SUB_CONTROL_INPUT1_0_en_res_droop_0_MASK                       (0x000000FF)

#define FEC_LTPC_SUB_CONTROL_INPUT2_0_P_complement_0_LSB                        (16)
#define FEC_LTPC_SUB_CONTROL_INPUT2_0_P_complement_0_WIDTH                      (16)
#define FEC_LTPC_SUB_CONTROL_INPUT2_0_P_complement_0_MASK                       (0xFFFF0000)

#define FEC_LTPC_SUB_CONTROL_INPUT2_0_blanking_flag_0_LSB                       (8)
#define FEC_LTPC_SUB_CONTROL_INPUT2_0_blanking_flag_0_WIDTH                     (8)
#define FEC_LTPC_SUB_CONTROL_INPUT2_0_blanking_flag_0_MASK                      (0x0000FF00)

#define FEC_LTPC_SUB_CONTROL_INPUT2_0_mtag_pwr_exceed_flag_0_LSB                (0)
#define FEC_LTPC_SUB_CONTROL_INPUT2_0_mtag_pwr_exceed_flag_0_WIDTH              (8)
#define FEC_LTPC_SUB_CONTROL_INPUT2_0_mtag_pwr_exceed_flag_0_MASK               (0x000000FF)

#define FEC_LTPC_PCFE2_PA_INPUT0_0_0_op_mode_0_0_LSB                            (24)
#define FEC_LTPC_PCFE2_PA_INPUT0_0_0_op_mode_0_0_WIDTH                          (8)
#define FEC_LTPC_PCFE2_PA_INPUT0_0_0_op_mode_0_0_MASK                           (0xFF000000)

#define FEC_LTPC_PCFE2_PA_INPUT0_0_0_idx_pa_0_0_LSB                             (16)
#define FEC_LTPC_PCFE2_PA_INPUT0_0_0_idx_pa_0_0_WIDTH                           (8)
#define FEC_LTPC_PCFE2_PA_INPUT0_0_0_idx_pa_0_0_MASK                            (0x00FF0000)

#define FEC_LTPC_PCFE2_PA_INPUT0_0_0_pa_mode_0_0_LSB                            (8)
#define FEC_LTPC_PCFE2_PA_INPUT0_0_0_pa_mode_0_0_WIDTH                          (8)
#define FEC_LTPC_PCFE2_PA_INPUT0_0_0_pa_mode_0_0_MASK                           (0x0000FF00)

#define FEC_LTPC_PCFE2_PA_INPUT0_0_0_pa_table_mode_0_0_LSB                      (0)
#define FEC_LTPC_PCFE2_PA_INPUT0_0_0_pa_table_mode_0_0_WIDTH                    (8)
#define FEC_LTPC_PCFE2_PA_INPUT0_0_0_pa_table_mode_0_0_MASK                     (0x000000FF)

#define FEC_LTPC_PCFE2_PA_INPUT1_0_0_ptar_dbm_0_0_LSB                           (16)
#define FEC_LTPC_PCFE2_PA_INPUT1_0_0_ptar_dbm_0_0_WIDTH                         (16)
#define FEC_LTPC_PCFE2_PA_INPUT1_0_0_ptar_dbm_0_0_MASK                          (0xFFFF0000)

#define FEC_LTPC_PCFE2_PA_INPUT1_0_0_gpa_db_0_0_0_LSB                           (0)
#define FEC_LTPC_PCFE2_PA_INPUT1_0_0_gpa_db_0_0_0_WIDTH                         (16)
#define FEC_LTPC_PCFE2_PA_INPUT1_0_0_gpa_db_0_0_0_MASK                          (0x0000FFFF)

#define FEC_LTPC_PCFE2_PA_INPUT2_0_0_gcfr_db_0_0_LSB                            (0)
#define FEC_LTPC_PCFE2_PA_INPUT2_0_0_gcfr_db_0_0_WIDTH                          (16)
#define FEC_LTPC_PCFE2_PA_INPUT2_0_0_gcfr_db_0_0_MASK                           (0x0000FFFF)

#define FEC_LTPC_PCFE2_PA_INPUT0_2_0_op_mode_2_0_LSB                            (24)
#define FEC_LTPC_PCFE2_PA_INPUT0_2_0_op_mode_2_0_WIDTH                          (8)
#define FEC_LTPC_PCFE2_PA_INPUT0_2_0_op_mode_2_0_MASK                           (0xFF000000)

#define FEC_LTPC_PCFE2_PA_INPUT0_2_0_idx_pa_2_0_LSB                             (16)
#define FEC_LTPC_PCFE2_PA_INPUT0_2_0_idx_pa_2_0_WIDTH                           (8)
#define FEC_LTPC_PCFE2_PA_INPUT0_2_0_idx_pa_2_0_MASK                            (0x00FF0000)

#define FEC_LTPC_PCFE2_PA_INPUT0_2_0_pa_mode_2_0_LSB                            (8)
#define FEC_LTPC_PCFE2_PA_INPUT0_2_0_pa_mode_2_0_WIDTH                          (8)
#define FEC_LTPC_PCFE2_PA_INPUT0_2_0_pa_mode_2_0_MASK                           (0x0000FF00)

#define FEC_LTPC_PCFE2_PA_INPUT0_2_0_pa_table_mode_2_0_LSB                      (0)
#define FEC_LTPC_PCFE2_PA_INPUT0_2_0_pa_table_mode_2_0_WIDTH                    (8)
#define FEC_LTPC_PCFE2_PA_INPUT0_2_0_pa_table_mode_2_0_MASK                     (0x000000FF)

#define FEC_LTPC_PCFE2_PA_INPUT1_2_0_ptar_dbm_2_0_LSB                           (16)
#define FEC_LTPC_PCFE2_PA_INPUT1_2_0_ptar_dbm_2_0_WIDTH                         (16)
#define FEC_LTPC_PCFE2_PA_INPUT1_2_0_ptar_dbm_2_0_MASK                          (0xFFFF0000)

#define FEC_LTPC_PCFE2_PA_INPUT1_2_0_gpa_db_0_2_0_LSB                           (0)
#define FEC_LTPC_PCFE2_PA_INPUT1_2_0_gpa_db_0_2_0_WIDTH                         (16)
#define FEC_LTPC_PCFE2_PA_INPUT1_2_0_gpa_db_0_2_0_MASK                          (0x0000FFFF)

#define FEC_LTPC_PCFE2_PA_INPUT2_2_0_gcfr_db_2_0_LSB                            (0)
#define FEC_LTPC_PCFE2_PA_INPUT2_2_0_gcfr_db_2_0_WIDTH                          (16)
#define FEC_LTPC_PCFE2_PA_INPUT2_2_0_gcfr_db_2_0_MASK                           (0x0000FFFF)

#define FEC_LTPC_PCFE2_PA_INPUT0_3_0_op_mode_3_0_LSB                            (24)
#define FEC_LTPC_PCFE2_PA_INPUT0_3_0_op_mode_3_0_WIDTH                          (8)
#define FEC_LTPC_PCFE2_PA_INPUT0_3_0_op_mode_3_0_MASK                           (0xFF000000)

#define FEC_LTPC_PCFE2_PA_INPUT0_3_0_idx_pa_3_0_LSB                             (16)
#define FEC_LTPC_PCFE2_PA_INPUT0_3_0_idx_pa_3_0_WIDTH                           (8)
#define FEC_LTPC_PCFE2_PA_INPUT0_3_0_idx_pa_3_0_MASK                            (0x00FF0000)

#define FEC_LTPC_PCFE2_PA_INPUT0_3_0_pa_mode_3_0_LSB                            (8)
#define FEC_LTPC_PCFE2_PA_INPUT0_3_0_pa_mode_3_0_WIDTH                          (8)
#define FEC_LTPC_PCFE2_PA_INPUT0_3_0_pa_mode_3_0_MASK                           (0x0000FF00)

#define FEC_LTPC_PCFE2_PA_INPUT0_3_0_pa_table_mode_3_0_LSB                      (0)
#define FEC_LTPC_PCFE2_PA_INPUT0_3_0_pa_table_mode_3_0_WIDTH                    (8)
#define FEC_LTPC_PCFE2_PA_INPUT0_3_0_pa_table_mode_3_0_MASK                     (0x000000FF)

#define FEC_LTPC_PCFE2_PA_INPUT1_3_0_ptar_dbm_3_0_LSB                           (16)
#define FEC_LTPC_PCFE2_PA_INPUT1_3_0_ptar_dbm_3_0_WIDTH                         (16)
#define FEC_LTPC_PCFE2_PA_INPUT1_3_0_ptar_dbm_3_0_MASK                          (0xFFFF0000)

#define FEC_LTPC_PCFE2_PA_INPUT1_3_0_gpa_db_0_3_0_LSB                           (0)
#define FEC_LTPC_PCFE2_PA_INPUT1_3_0_gpa_db_0_3_0_WIDTH                         (16)
#define FEC_LTPC_PCFE2_PA_INPUT1_3_0_gpa_db_0_3_0_MASK                          (0x0000FFFF)

#define FEC_LTPC_PCFE2_PA_INPUT2_3_0_gcfr_db_3_0_LSB                            (0)
#define FEC_LTPC_PCFE2_PA_INPUT2_3_0_gcfr_db_3_0_WIDTH                          (16)
#define FEC_LTPC_PCFE2_PA_INPUT2_3_0_gcfr_db_3_0_MASK                           (0x0000FFFF)

#define FEC_LTPC_PCFE2_INPUT0_0_0_length_rb_cluster_0_0_0_LSB                   (25)
#define FEC_LTPC_PCFE2_INPUT0_0_0_length_rb_cluster_0_0_0_WIDTH                 (7)
#define FEC_LTPC_PCFE2_INPUT0_0_0_length_rb_cluster_0_0_0_MASK                  (0xFE000000)

#define FEC_LTPC_PCFE2_INPUT0_0_0_freq_start_rb_cluster_0_0_0_LSB               (16)
#define FEC_LTPC_PCFE2_INPUT0_0_0_freq_start_rb_cluster_0_0_0_WIDTH             (9)
#define FEC_LTPC_PCFE2_INPUT0_0_0_freq_start_rb_cluster_0_0_0_MASK              (0x01FF0000)

#define FEC_LTPC_PCFE2_INPUT0_0_0_length_rb_cluster_1_0_0_LSB                   (9)
#define FEC_LTPC_PCFE2_INPUT0_0_0_length_rb_cluster_1_0_0_WIDTH                 (7)
#define FEC_LTPC_PCFE2_INPUT0_0_0_length_rb_cluster_1_0_0_MASK                  (0x0000FE00)

#define FEC_LTPC_PCFE2_INPUT0_0_0_freq_start_rb_cluster_1_0_0_LSB               (0)
#define FEC_LTPC_PCFE2_INPUT0_0_0_freq_start_rb_cluster_1_0_0_WIDTH             (9)
#define FEC_LTPC_PCFE2_INPUT0_0_0_freq_start_rb_cluster_1_0_0_MASK              (0x000001FF)

#define FEC_LTPC_PCFE2_INPUT1_0_0_length_rb_cluster_2_0_0_LSB                   (25)
#define FEC_LTPC_PCFE2_INPUT1_0_0_length_rb_cluster_2_0_0_WIDTH                 (7)
#define FEC_LTPC_PCFE2_INPUT1_0_0_length_rb_cluster_2_0_0_MASK                  (0xFE000000)

#define FEC_LTPC_PCFE2_INPUT1_0_0_freq_start_rb_cluster_2_0_0_LSB               (16)
#define FEC_LTPC_PCFE2_INPUT1_0_0_freq_start_rb_cluster_2_0_0_WIDTH             (9)
#define FEC_LTPC_PCFE2_INPUT1_0_0_freq_start_rb_cluster_2_0_0_MASK              (0x01FF0000)

#define FEC_LTPC_PCFE2_INPUT1_0_0_length_rb_cluster_3_0_0_LSB                   (9)
#define FEC_LTPC_PCFE2_INPUT1_0_0_length_rb_cluster_3_0_0_WIDTH                 (7)
#define FEC_LTPC_PCFE2_INPUT1_0_0_length_rb_cluster_3_0_0_MASK                  (0x0000FE00)

#define FEC_LTPC_PCFE2_INPUT1_0_0_freq_start_rb_cluster_3_0_0_LSB               (0)
#define FEC_LTPC_PCFE2_INPUT1_0_0_freq_start_rb_cluster_3_0_0_WIDTH             (9)
#define FEC_LTPC_PCFE2_INPUT1_0_0_freq_start_rb_cluster_3_0_0_MASK              (0x000001FF)

#define FEC_LTPC_PCFE2_INPUT2_0_0_length_rb_cluster_4_0_0_LSB                   (25)
#define FEC_LTPC_PCFE2_INPUT2_0_0_length_rb_cluster_4_0_0_WIDTH                 (7)
#define FEC_LTPC_PCFE2_INPUT2_0_0_length_rb_cluster_4_0_0_MASK                  (0xFE000000)

#define FEC_LTPC_PCFE2_INPUT2_0_0_freq_start_rb_cluster_4_0_0_LSB               (16)
#define FEC_LTPC_PCFE2_INPUT2_0_0_freq_start_rb_cluster_4_0_0_WIDTH             (9)
#define FEC_LTPC_PCFE2_INPUT2_0_0_freq_start_rb_cluster_4_0_0_MASK              (0x01FF0000)

#define FEC_LTPC_PCFE2_INPUT3_0_0_all_cluster_num_0_0_LSB                       (24)
#define FEC_LTPC_PCFE2_INPUT3_0_0_all_cluster_num_0_0_WIDTH                     (8)
#define FEC_LTPC_PCFE2_INPUT3_0_0_all_cluster_num_0_0_MASK                      (0xFF000000)

#define FEC_LTPC_PCFE2_INPUT3_0_0_force_pga_mode_0_0_LSB                        (16)
#define FEC_LTPC_PCFE2_INPUT3_0_0_force_pga_mode_0_0_WIDTH                      (8)
#define FEC_LTPC_PCFE2_INPUT3_0_0_force_pga_mode_0_0_MASK                       (0x00FF0000)

#define FEC_LTPC_PCFE2_INPUT3_0_0_gilpc_ofs_db_0_0_LSB                          (0)
#define FEC_LTPC_PCFE2_INPUT3_0_0_gilpc_ofs_db_0_0_WIDTH                        (16)
#define FEC_LTPC_PCFE2_INPUT3_0_0_gilpc_ofs_db_0_0_MASK                         (0x0000FFFF)

#define FEC_LTPC_PSET_DAC_ADC_INPUT0_0_0_pset_dac_dbm_0_0_LSB                   (16)
#define FEC_LTPC_PSET_DAC_ADC_INPUT0_0_0_pset_dac_dbm_0_0_WIDTH                 (16)
#define FEC_LTPC_PSET_DAC_ADC_INPUT0_0_0_pset_dac_dbm_0_0_MASK                  (0xFFFF0000)

#define FEC_LTPC_PSET_DAC_ADC_INPUT0_0_0_pset_adc_dbm_0_0_LSB                   (0)
#define FEC_LTPC_PSET_DAC_ADC_INPUT0_0_0_pset_adc_dbm_0_0_WIDTH                 (16)
#define FEC_LTPC_PSET_DAC_ADC_INPUT0_0_0_pset_adc_dbm_0_0_MASK                  (0x0000FFFF)

#define FEC_LTPC_ILPC_INPUT0_0_0_en_in_slot_corr_0_0_LSB                        (16)
#define FEC_LTPC_ILPC_INPUT0_0_0_en_in_slot_corr_0_0_WIDTH                      (8)
#define FEC_LTPC_ILPC_INPUT0_0_0_en_in_slot_corr_0_0_MASK                       (0x00FF0000)

#define FEC_LTPC_ILPC_INPUT0_0_0_en_next_slot_corr_0_0_LSB                      (8)
#define FEC_LTPC_ILPC_INPUT0_0_0_en_next_slot_corr_0_0_WIDTH                    (8)
#define FEC_LTPC_ILPC_INPUT0_0_0_en_next_slot_corr_0_0_MASK                     (0x0000FF00)

#define FEC_LTPC_ILPC_INPUT0_0_0_flag_pa_no_change_0_0_LSB                      (0)
#define FEC_LTPC_ILPC_INPUT0_0_0_flag_pa_no_change_0_0_WIDTH                    (8)
#define FEC_LTPC_ILPC_INPUT0_0_0_flag_pa_no_change_0_0_MASK                     (0x000000FF)

#define FEC_LTPC_DPD_ET_INPUT0_0_0_select_default_dpdlut_0_0_LSB                (16)
#define FEC_LTPC_DPD_ET_INPUT0_0_0_select_default_dpdlut_0_0_WIDTH              (8)
#define FEC_LTPC_DPD_ET_INPUT0_0_0_select_default_dpdlut_0_0_MASK               (0x00FF0000)

#define FEC_LTPC_DPD_ET_INPUT0_0_0_idx_etdbb_rb_0_0_LSB                         (8)
#define FEC_LTPC_DPD_ET_INPUT0_0_0_idx_etdbb_rb_0_0_WIDTH                       (8)
#define FEC_LTPC_DPD_ET_INPUT0_0_0_idx_etdbb_rb_0_0_MASK                        (0x0000FF00)

#define FEC_LTPC_DPD_ET_INPUT0_0_0_et_bank_idx_0_0_LSB                          (0)
#define FEC_LTPC_DPD_ET_INPUT0_0_0_et_bank_idx_0_0_WIDTH                        (8)
#define FEC_LTPC_DPD_ET_INPUT0_0_0_et_bank_idx_0_0_MASK                         (0x000000FF)

#define FEC_LTPC_TXDFE_BB_INPUT0_0_0_cfr_clip_th_dbm_0_0_LSB                    (0)
#define FEC_LTPC_TXDFE_BB_INPUT0_0_0_cfr_clip_th_dbm_0_0_WIDTH                  (16)
#define FEC_LTPC_TXDFE_BB_INPUT0_0_0_cfr_clip_th_dbm_0_0_MASK                   (0x0000FFFF)

#define FEC_LTPC_DET_RF_WIN_MASK_INPUT0_0_0_det_rf_win_mask_0_0_LSB             (0)
#define FEC_LTPC_DET_RF_WIN_MASK_INPUT0_0_0_det_rf_win_mask_0_0_WIDTH           (32)
#define FEC_LTPC_DET_RF_WIN_MASK_INPUT0_0_0_det_rf_win_mask_0_0_MASK            (0xFFFFFFFF)

#define FEC_LTPC_DET_RF_WIN_MASK_INPUT0_0_0_tx_det_meas_sel_0_0_LSB             (17)
#define FEC_LTPC_DET_RF_WIN_MASK_INPUT0_0_0_tx_det_meas_sel_0_0_WIDTH           (3)
#define FEC_LTPC_DET_RF_WIN_MASK_INPUT0_0_0_tx_det_meas_sel_0_0_MASK            (0x000E0000)

#define FEC_LTPC_DPD_RF_CW_MASK_INPUT0_0_0_dpd_rf_cw_mask_0_0_LSB               (0)
#define FEC_LTPC_DPD_RF_CW_MASK_INPUT0_0_0_dpd_rf_cw_mask_0_0_WIDTH             (32)
#define FEC_LTPC_DPD_RF_CW_MASK_INPUT0_0_0_dpd_rf_cw_mask_0_0_MASK              (0xFFFFFFFF)

#define FEC_LTPC_PCFE2_DAC_INPUT0_0_0_gdac_bkf_db_0_0_LSB                       (0)
#define FEC_LTPC_PCFE2_DAC_INPUT0_0_0_gdac_bkf_db_0_0_WIDTH                     (16)
#define FEC_LTPC_PCFE2_DAC_INPUT0_0_0_gdac_bkf_db_0_0_MASK                      (0x0000FFFF)

#define FEC_LTPC_DDPC_INPUT_GROUP_0_0_disable_pcfe2_0_0_LSB                     (16)
#define FEC_LTPC_DDPC_INPUT_GROUP_0_0_disable_pcfe2_0_0_WIDTH                   (8)
#define FEC_LTPC_DDPC_INPUT_GROUP_0_0_disable_pcfe2_0_0_MASK                    (0x00FF0000)

#define FEC_LTPC_DDPC_INPUT_GROUP_0_0_disable_ilpc_0_0_LSB                      (8)
#define FEC_LTPC_DDPC_INPUT_GROUP_0_0_disable_ilpc_0_0_WIDTH                    (8)
#define FEC_LTPC_DDPC_INPUT_GROUP_0_0_disable_ilpc_0_0_MASK                     (0x0000FF00)

#define FEC_LTPC_DDPC_INPUT_GROUP_0_0_reset_ilpc_0_0_LSB                        (0)
#define FEC_LTPC_DDPC_INPUT_GROUP_0_0_reset_ilpc_0_0_WIDTH                      (8)
#define FEC_LTPC_DDPC_INPUT_GROUP_0_0_reset_ilpc_0_0_MASK                       (0x000000FF)

#define FEC_LTPC_PCFE2_INPUT0_1_0_length_rb_cluster_0_1_0_LSB                   (25)
#define FEC_LTPC_PCFE2_INPUT0_1_0_length_rb_cluster_0_1_0_WIDTH                 (7)
#define FEC_LTPC_PCFE2_INPUT0_1_0_length_rb_cluster_0_1_0_MASK                  (0xFE000000)

#define FEC_LTPC_PCFE2_INPUT0_1_0_freq_start_rb_cluster_0_1_0_LSB               (16)
#define FEC_LTPC_PCFE2_INPUT0_1_0_freq_start_rb_cluster_0_1_0_WIDTH             (9)
#define FEC_LTPC_PCFE2_INPUT0_1_0_freq_start_rb_cluster_0_1_0_MASK              (0x01FF0000)

#define FEC_LTPC_PCFE2_INPUT0_1_0_length_rb_cluster_1_1_0_LSB                   (9)
#define FEC_LTPC_PCFE2_INPUT0_1_0_length_rb_cluster_1_1_0_WIDTH                 (7)
#define FEC_LTPC_PCFE2_INPUT0_1_0_length_rb_cluster_1_1_0_MASK                  (0x0000FE00)

#define FEC_LTPC_PCFE2_INPUT0_1_0_freq_start_rb_cluster_1_1_0_LSB               (0)
#define FEC_LTPC_PCFE2_INPUT0_1_0_freq_start_rb_cluster_1_1_0_WIDTH             (9)
#define FEC_LTPC_PCFE2_INPUT0_1_0_freq_start_rb_cluster_1_1_0_MASK              (0x000001FF)

#define FEC_LTPC_PCFE2_INPUT1_1_0_length_rb_cluster_2_1_0_LSB                   (25)
#define FEC_LTPC_PCFE2_INPUT1_1_0_length_rb_cluster_2_1_0_WIDTH                 (7)
#define FEC_LTPC_PCFE2_INPUT1_1_0_length_rb_cluster_2_1_0_MASK                  (0xFE000000)

#define FEC_LTPC_PCFE2_INPUT1_1_0_freq_start_rb_cluster_2_1_0_LSB               (16)
#define FEC_LTPC_PCFE2_INPUT1_1_0_freq_start_rb_cluster_2_1_0_WIDTH             (9)
#define FEC_LTPC_PCFE2_INPUT1_1_0_freq_start_rb_cluster_2_1_0_MASK              (0x01FF0000)

#define FEC_LTPC_PCFE2_INPUT1_1_0_length_rb_cluster_3_1_0_LSB                   (9)
#define FEC_LTPC_PCFE2_INPUT1_1_0_length_rb_cluster_3_1_0_WIDTH                 (7)
#define FEC_LTPC_PCFE2_INPUT1_1_0_length_rb_cluster_3_1_0_MASK                  (0x0000FE00)

#define FEC_LTPC_PCFE2_INPUT1_1_0_freq_start_rb_cluster_3_1_0_LSB               (0)
#define FEC_LTPC_PCFE2_INPUT1_1_0_freq_start_rb_cluster_3_1_0_WIDTH             (9)
#define FEC_LTPC_PCFE2_INPUT1_1_0_freq_start_rb_cluster_3_1_0_MASK              (0x000001FF)

#define FEC_LTPC_PCFE2_INPUT2_1_0_length_rb_cluster_4_1_0_LSB                   (25)
#define FEC_LTPC_PCFE2_INPUT2_1_0_length_rb_cluster_4_1_0_WIDTH                 (7)
#define FEC_LTPC_PCFE2_INPUT2_1_0_length_rb_cluster_4_1_0_MASK                  (0xFE000000)

#define FEC_LTPC_PCFE2_INPUT2_1_0_freq_start_rb_cluster_4_1_0_LSB               (16)
#define FEC_LTPC_PCFE2_INPUT2_1_0_freq_start_rb_cluster_4_1_0_WIDTH             (9)
#define FEC_LTPC_PCFE2_INPUT2_1_0_freq_start_rb_cluster_4_1_0_MASK              (0x01FF0000)

#define FEC_LTPC_PCFE2_INPUT3_1_0_all_cluster_num_1_0_LSB                       (24)
#define FEC_LTPC_PCFE2_INPUT3_1_0_all_cluster_num_1_0_WIDTH                     (8)
#define FEC_LTPC_PCFE2_INPUT3_1_0_all_cluster_num_1_0_MASK                      (0xFF000000)

#define FEC_LTPC_PCFE2_INPUT3_1_0_force_pga_mode_1_0_LSB                        (16)
#define FEC_LTPC_PCFE2_INPUT3_1_0_force_pga_mode_1_0_WIDTH                      (8)
#define FEC_LTPC_PCFE2_INPUT3_1_0_force_pga_mode_1_0_MASK                       (0x00FF0000)

#define FEC_LTPC_PCFE2_INPUT3_1_0_gilpc_ofs_db_1_0_LSB                          (0)
#define FEC_LTPC_PCFE2_INPUT3_1_0_gilpc_ofs_db_1_0_WIDTH                        (16)
#define FEC_LTPC_PCFE2_INPUT3_1_0_gilpc_ofs_db_1_0_MASK                         (0x0000FFFF)

#define FEC_LTPC_PSET_DAC_ADC_INPUT0_1_0_pset_dac_dbm_1_0_LSB                   (16)
#define FEC_LTPC_PSET_DAC_ADC_INPUT0_1_0_pset_dac_dbm_1_0_WIDTH                 (16)
#define FEC_LTPC_PSET_DAC_ADC_INPUT0_1_0_pset_dac_dbm_1_0_MASK                  (0xFFFF0000)

#define FEC_LTPC_PSET_DAC_ADC_INPUT0_1_0_pset_adc_dbm_1_0_LSB                   (0)
#define FEC_LTPC_PSET_DAC_ADC_INPUT0_1_0_pset_adc_dbm_1_0_WIDTH                 (16)
#define FEC_LTPC_PSET_DAC_ADC_INPUT0_1_0_pset_adc_dbm_1_0_MASK                  (0x0000FFFF)

#define FEC_LTPC_ILPC_INPUT0_1_0_en_in_slot_corr_1_0_LSB                        (16)
#define FEC_LTPC_ILPC_INPUT0_1_0_en_in_slot_corr_1_0_WIDTH                      (8)
#define FEC_LTPC_ILPC_INPUT0_1_0_en_in_slot_corr_1_0_MASK                       (0x00FF0000)

#define FEC_LTPC_ILPC_INPUT0_1_0_en_next_slot_corr_1_0_LSB                      (8)
#define FEC_LTPC_ILPC_INPUT0_1_0_en_next_slot_corr_1_0_WIDTH                    (8)
#define FEC_LTPC_ILPC_INPUT0_1_0_en_next_slot_corr_1_0_MASK                     (0x0000FF00)

#define FEC_LTPC_ILPC_INPUT0_1_0_flag_pa_no_change_1_0_LSB                      (0)
#define FEC_LTPC_ILPC_INPUT0_1_0_flag_pa_no_change_1_0_WIDTH                    (8)
#define FEC_LTPC_ILPC_INPUT0_1_0_flag_pa_no_change_1_0_MASK                     (0x000000FF)

#define FEC_LTPC_DPD_ET_INPUT0_1_0_select_default_dpdlut_1_0_LSB                (16)
#define FEC_LTPC_DPD_ET_INPUT0_1_0_select_default_dpdlut_1_0_WIDTH              (8)
#define FEC_LTPC_DPD_ET_INPUT0_1_0_select_default_dpdlut_1_0_MASK               (0x00FF0000)

#define FEC_LTPC_DPD_ET_INPUT0_1_0_idx_etdbb_rb_1_0_LSB                         (8)
#define FEC_LTPC_DPD_ET_INPUT0_1_0_idx_etdbb_rb_1_0_WIDTH                       (8)
#define FEC_LTPC_DPD_ET_INPUT0_1_0_idx_etdbb_rb_1_0_MASK                        (0x0000FF00)

#define FEC_LTPC_DPD_ET_INPUT0_1_0_et_bank_idx_1_0_LSB                          (0)
#define FEC_LTPC_DPD_ET_INPUT0_1_0_et_bank_idx_1_0_WIDTH                        (8)
#define FEC_LTPC_DPD_ET_INPUT0_1_0_et_bank_idx_1_0_MASK                         (0x000000FF)

#define FEC_LTPC_TXDFE_BB_INPUT0_1_0_cfr_clip_th_dbm_1_0_LSB                    (0)
#define FEC_LTPC_TXDFE_BB_INPUT0_1_0_cfr_clip_th_dbm_1_0_WIDTH                  (16)
#define FEC_LTPC_TXDFE_BB_INPUT0_1_0_cfr_clip_th_dbm_1_0_MASK                   (0x0000FFFF)

#define FEC_LTPC_DET_RF_WIN_MASK_INPUT0_1_0_det_rf_win_mask_1_0_LSB             (0)
#define FEC_LTPC_DET_RF_WIN_MASK_INPUT0_1_0_det_rf_win_mask_1_0_WIDTH           (32)
#define FEC_LTPC_DET_RF_WIN_MASK_INPUT0_1_0_det_rf_win_mask_1_0_MASK            (0xFFFFFFFF)

#define FEC_LTPC_DPD_RF_CW_MASK_INPUT0_1_0_dpd_rf_cw_mask_1_0_LSB               (0)
#define FEC_LTPC_DPD_RF_CW_MASK_INPUT0_1_0_dpd_rf_cw_mask_1_0_WIDTH             (32)
#define FEC_LTPC_DPD_RF_CW_MASK_INPUT0_1_0_dpd_rf_cw_mask_1_0_MASK              (0xFFFFFFFF)

#define FEC_LTPC_PCFE2_DAC_INPUT0_1_0_gdac_bkf_db_1_0_LSB                       (0)
#define FEC_LTPC_PCFE2_DAC_INPUT0_1_0_gdac_bkf_db_1_0_WIDTH                     (16)
#define FEC_LTPC_PCFE2_DAC_INPUT0_1_0_gdac_bkf_db_1_0_MASK                      (0x0000FFFF)

#define FEC_LTPC_DDPC_INPUT_GROUP_1_0_disable_pcfe2_1_0_LSB                     (16)
#define FEC_LTPC_DDPC_INPUT_GROUP_1_0_disable_pcfe2_1_0_WIDTH                   (8)
#define FEC_LTPC_DDPC_INPUT_GROUP_1_0_disable_pcfe2_1_0_MASK                    (0x00FF0000)

#define FEC_LTPC_DDPC_INPUT_GROUP_1_0_disable_ilpc_1_0_LSB                      (8)
#define FEC_LTPC_DDPC_INPUT_GROUP_1_0_disable_ilpc_1_0_WIDTH                    (8)
#define FEC_LTPC_DDPC_INPUT_GROUP_1_0_disable_ilpc_1_0_MASK                     (0x0000FF00)

#define FEC_LTPC_DDPC_INPUT_GROUP_1_0_reset_ilpc_1_0_LSB                        (0)
#define FEC_LTPC_DDPC_INPUT_GROUP_1_0_reset_ilpc_1_0_WIDTH                      (8)
#define FEC_LTPC_DDPC_INPUT_GROUP_1_0_reset_ilpc_1_0_MASK                       (0x000000FF)

#define FEC_LTPC_PCFE2_INPUT0_2_0_length_rb_cluster_0_2_0_LSB                   (25)
#define FEC_LTPC_PCFE2_INPUT0_2_0_length_rb_cluster_0_2_0_WIDTH                 (7)
#define FEC_LTPC_PCFE2_INPUT0_2_0_length_rb_cluster_0_2_0_MASK                  (0xFE000000)

#define FEC_LTPC_PCFE2_INPUT0_2_0_freq_start_rb_cluster_0_2_0_LSB               (16)
#define FEC_LTPC_PCFE2_INPUT0_2_0_freq_start_rb_cluster_0_2_0_WIDTH             (9)
#define FEC_LTPC_PCFE2_INPUT0_2_0_freq_start_rb_cluster_0_2_0_MASK              (0x01FF0000)

#define FEC_LTPC_PCFE2_INPUT0_2_0_length_rb_cluster_1_2_0_LSB                   (9)
#define FEC_LTPC_PCFE2_INPUT0_2_0_length_rb_cluster_1_2_0_WIDTH                 (7)
#define FEC_LTPC_PCFE2_INPUT0_2_0_length_rb_cluster_1_2_0_MASK                  (0x0000FE00)

#define FEC_LTPC_PCFE2_INPUT0_2_0_freq_start_rb_cluster_1_2_0_LSB               (0)
#define FEC_LTPC_PCFE2_INPUT0_2_0_freq_start_rb_cluster_1_2_0_WIDTH             (9)
#define FEC_LTPC_PCFE2_INPUT0_2_0_freq_start_rb_cluster_1_2_0_MASK              (0x000001FF)

#define FEC_LTPC_PCFE2_INPUT1_2_0_all_cluster_num_2_0_LSB                       (24)
#define FEC_LTPC_PCFE2_INPUT1_2_0_all_cluster_num_2_0_WIDTH                     (8)
#define FEC_LTPC_PCFE2_INPUT1_2_0_all_cluster_num_2_0_MASK                      (0xFF000000)

#define FEC_LTPC_PCFE2_INPUT1_2_0_force_pga_mode_2_0_LSB                        (16)
#define FEC_LTPC_PCFE2_INPUT1_2_0_force_pga_mode_2_0_WIDTH                      (8)
#define FEC_LTPC_PCFE2_INPUT1_2_0_force_pga_mode_2_0_MASK                       (0x00FF0000)

#define FEC_LTPC_PCFE2_INPUT1_2_0_gilpc_ofs_db_2_0_LSB                          (0)
#define FEC_LTPC_PCFE2_INPUT1_2_0_gilpc_ofs_db_2_0_WIDTH                        (16)
#define FEC_LTPC_PCFE2_INPUT1_2_0_gilpc_ofs_db_2_0_MASK                         (0x0000FFFF)

#define FEC_LTPC_PSET_DAC_ADC_INPUT0_2_0_pset_dac_dbm_2_0_LSB                   (16)
#define FEC_LTPC_PSET_DAC_ADC_INPUT0_2_0_pset_dac_dbm_2_0_WIDTH                 (16)
#define FEC_LTPC_PSET_DAC_ADC_INPUT0_2_0_pset_dac_dbm_2_0_MASK                  (0xFFFF0000)

#define FEC_LTPC_PSET_DAC_ADC_INPUT0_2_0_pset_adc_dbm_2_0_LSB                   (0)
#define FEC_LTPC_PSET_DAC_ADC_INPUT0_2_0_pset_adc_dbm_2_0_WIDTH                 (16)
#define FEC_LTPC_PSET_DAC_ADC_INPUT0_2_0_pset_adc_dbm_2_0_MASK                  (0x0000FFFF)

#define FEC_LTPC_ILPC_INPUT0_2_0_en_in_slot_corr_2_0_LSB                        (16)
#define FEC_LTPC_ILPC_INPUT0_2_0_en_in_slot_corr_2_0_WIDTH                      (8)
#define FEC_LTPC_ILPC_INPUT0_2_0_en_in_slot_corr_2_0_MASK                       (0x00FF0000)

#define FEC_LTPC_ILPC_INPUT0_2_0_en_next_slot_corr_2_0_LSB                      (8)
#define FEC_LTPC_ILPC_INPUT0_2_0_en_next_slot_corr_2_0_WIDTH                    (8)
#define FEC_LTPC_ILPC_INPUT0_2_0_en_next_slot_corr_2_0_MASK                     (0x0000FF00)

#define FEC_LTPC_ILPC_INPUT0_2_0_flag_pa_no_change_2_0_LSB                      (0)
#define FEC_LTPC_ILPC_INPUT0_2_0_flag_pa_no_change_2_0_WIDTH                    (8)
#define FEC_LTPC_ILPC_INPUT0_2_0_flag_pa_no_change_2_0_MASK                     (0x000000FF)

#define FEC_LTPC_DPD_ET_INPUT0_2_0_select_default_dpdlut_2_0_LSB                (16)
#define FEC_LTPC_DPD_ET_INPUT0_2_0_select_default_dpdlut_2_0_WIDTH              (8)
#define FEC_LTPC_DPD_ET_INPUT0_2_0_select_default_dpdlut_2_0_MASK               (0x00FF0000)

#define FEC_LTPC_DPD_ET_INPUT0_2_0_idx_etdbb_rb_2_0_LSB                         (8)
#define FEC_LTPC_DPD_ET_INPUT0_2_0_idx_etdbb_rb_2_0_WIDTH                       (8)
#define FEC_LTPC_DPD_ET_INPUT0_2_0_idx_etdbb_rb_2_0_MASK                        (0x0000FF00)

#define FEC_LTPC_DPD_ET_INPUT0_2_0_et_bank_idx_2_0_LSB                          (0)
#define FEC_LTPC_DPD_ET_INPUT0_2_0_et_bank_idx_2_0_WIDTH                        (8)
#define FEC_LTPC_DPD_ET_INPUT0_2_0_et_bank_idx_2_0_MASK                         (0x000000FF)

#define FEC_LTPC_TXDFE_BB_INPUT0_2_0_cfr_clip_th_dbm_2_0_LSB                    (0)
#define FEC_LTPC_TXDFE_BB_INPUT0_2_0_cfr_clip_th_dbm_2_0_WIDTH                  (16)
#define FEC_LTPC_TXDFE_BB_INPUT0_2_0_cfr_clip_th_dbm_2_0_MASK                   (0x0000FFFF)

#define FEC_LTPC_DET_RF_WIN_MASK_INPUT0_2_0_det_rf_win_mask_2_0_LSB             (0)
#define FEC_LTPC_DET_RF_WIN_MASK_INPUT0_2_0_det_rf_win_mask_2_0_WIDTH           (32)
#define FEC_LTPC_DET_RF_WIN_MASK_INPUT0_2_0_det_rf_win_mask_2_0_MASK            (0xFFFFFFFF)

#define FEC_LTPC_DPD_RF_CW_MASK_INPUT0_2_0_dpd_rf_cw_mask_2_0_LSB               (0)
#define FEC_LTPC_DPD_RF_CW_MASK_INPUT0_2_0_dpd_rf_cw_mask_2_0_WIDTH             (32)
#define FEC_LTPC_DPD_RF_CW_MASK_INPUT0_2_0_dpd_rf_cw_mask_2_0_MASK              (0xFFFFFFFF)

#define FEC_LTPC_PCFE2_DAC_INPUT0_2_0_gdac_bkf_db_2_0_LSB                       (0)
#define FEC_LTPC_PCFE2_DAC_INPUT0_2_0_gdac_bkf_db_2_0_WIDTH                     (16)
#define FEC_LTPC_PCFE2_DAC_INPUT0_2_0_gdac_bkf_db_2_0_MASK                      (0x0000FFFF)

#define FEC_LTPC_DDPC_INPUT_GROUP_2_0_disable_pcfe2_2_0_LSB                     (16)
#define FEC_LTPC_DDPC_INPUT_GROUP_2_0_disable_pcfe2_2_0_WIDTH                   (8)
#define FEC_LTPC_DDPC_INPUT_GROUP_2_0_disable_pcfe2_2_0_MASK                    (0x00FF0000)

#define FEC_LTPC_DDPC_INPUT_GROUP_2_0_disable_ilpc_2_0_LSB                      (8)
#define FEC_LTPC_DDPC_INPUT_GROUP_2_0_disable_ilpc_2_0_WIDTH                    (8)
#define FEC_LTPC_DDPC_INPUT_GROUP_2_0_disable_ilpc_2_0_MASK                     (0x0000FF00)

#define FEC_LTPC_DDPC_INPUT_GROUP_2_0_reset_ilpc_2_0_LSB                        (0)
#define FEC_LTPC_DDPC_INPUT_GROUP_2_0_reset_ilpc_2_0_WIDTH                      (8)
#define FEC_LTPC_DDPC_INPUT_GROUP_2_0_reset_ilpc_2_0_MASK                       (0x000000FF)

#define FEC_LTPC_PCFE2_INPUT0_3_0_length_rb_cluster_0_3_0_LSB                   (25)
#define FEC_LTPC_PCFE2_INPUT0_3_0_length_rb_cluster_0_3_0_WIDTH                 (7)
#define FEC_LTPC_PCFE2_INPUT0_3_0_length_rb_cluster_0_3_0_MASK                  (0xFE000000)

#define FEC_LTPC_PCFE2_INPUT0_3_0_freq_start_rb_cluster_0_3_0_LSB               (16)
#define FEC_LTPC_PCFE2_INPUT0_3_0_freq_start_rb_cluster_0_3_0_WIDTH             (9)
#define FEC_LTPC_PCFE2_INPUT0_3_0_freq_start_rb_cluster_0_3_0_MASK              (0x01FF0000)

#define FEC_LTPC_PCFE2_INPUT0_3_0_length_rb_cluster_1_3_0_LSB                   (9)
#define FEC_LTPC_PCFE2_INPUT0_3_0_length_rb_cluster_1_3_0_WIDTH                 (7)
#define FEC_LTPC_PCFE2_INPUT0_3_0_length_rb_cluster_1_3_0_MASK                  (0x0000FE00)

#define FEC_LTPC_PCFE2_INPUT0_3_0_freq_start_rb_cluster_1_3_0_LSB               (0)
#define FEC_LTPC_PCFE2_INPUT0_3_0_freq_start_rb_cluster_1_3_0_WIDTH             (9)
#define FEC_LTPC_PCFE2_INPUT0_3_0_freq_start_rb_cluster_1_3_0_MASK              (0x000001FF)

#define FEC_LTPC_PCFE2_INPUT1_3_0_all_cluster_num_3_0_LSB                       (24)
#define FEC_LTPC_PCFE2_INPUT1_3_0_all_cluster_num_3_0_WIDTH                     (8)
#define FEC_LTPC_PCFE2_INPUT1_3_0_all_cluster_num_3_0_MASK                      (0xFF000000)

#define FEC_LTPC_PCFE2_INPUT1_3_0_force_pga_mode_3_0_LSB                        (16)
#define FEC_LTPC_PCFE2_INPUT1_3_0_force_pga_mode_3_0_WIDTH                      (8)
#define FEC_LTPC_PCFE2_INPUT1_3_0_force_pga_mode_3_0_MASK                       (0x00FF0000)

#define FEC_LTPC_PCFE2_INPUT1_3_0_gilpc_ofs_db_3_0_LSB                          (0)
#define FEC_LTPC_PCFE2_INPUT1_3_0_gilpc_ofs_db_3_0_WIDTH                        (16)
#define FEC_LTPC_PCFE2_INPUT1_3_0_gilpc_ofs_db_3_0_MASK                         (0x0000FFFF)

#define FEC_LTPC_PSET_DAC_ADC_INPUT0_3_0_pset_dac_dbm_3_0_LSB                   (16)
#define FEC_LTPC_PSET_DAC_ADC_INPUT0_3_0_pset_dac_dbm_3_0_WIDTH                 (16)
#define FEC_LTPC_PSET_DAC_ADC_INPUT0_3_0_pset_dac_dbm_3_0_MASK                  (0xFFFF0000)

#define FEC_LTPC_PSET_DAC_ADC_INPUT0_3_0_pset_adc_dbm_3_0_LSB                   (0)
#define FEC_LTPC_PSET_DAC_ADC_INPUT0_3_0_pset_adc_dbm_3_0_WIDTH                 (16)
#define FEC_LTPC_PSET_DAC_ADC_INPUT0_3_0_pset_adc_dbm_3_0_MASK                  (0x0000FFFF)

#define FEC_LTPC_ILPC_INPUT0_3_0_en_in_slot_corr_3_0_LSB                        (16)
#define FEC_LTPC_ILPC_INPUT0_3_0_en_in_slot_corr_3_0_WIDTH                      (8)
#define FEC_LTPC_ILPC_INPUT0_3_0_en_in_slot_corr_3_0_MASK                       (0x00FF0000)

#define FEC_LTPC_ILPC_INPUT0_3_0_en_next_slot_corr_3_0_LSB                      (8)
#define FEC_LTPC_ILPC_INPUT0_3_0_en_next_slot_corr_3_0_WIDTH                    (8)
#define FEC_LTPC_ILPC_INPUT0_3_0_en_next_slot_corr_3_0_MASK                     (0x0000FF00)

#define FEC_LTPC_ILPC_INPUT0_3_0_flag_pa_no_change_3_0_LSB                      (0)
#define FEC_LTPC_ILPC_INPUT0_3_0_flag_pa_no_change_3_0_WIDTH                    (8)
#define FEC_LTPC_ILPC_INPUT0_3_0_flag_pa_no_change_3_0_MASK                     (0x000000FF)

#define FEC_LTPC_DPD_ET_INPUT0_3_0_select_default_dpdlut_3_0_LSB                (16)
#define FEC_LTPC_DPD_ET_INPUT0_3_0_select_default_dpdlut_3_0_WIDTH              (8)
#define FEC_LTPC_DPD_ET_INPUT0_3_0_select_default_dpdlut_3_0_MASK               (0x00FF0000)

#define FEC_LTPC_DPD_ET_INPUT0_3_0_idx_etdbb_rb_3_0_LSB                         (8)
#define FEC_LTPC_DPD_ET_INPUT0_3_0_idx_etdbb_rb_3_0_WIDTH                       (8)
#define FEC_LTPC_DPD_ET_INPUT0_3_0_idx_etdbb_rb_3_0_MASK                        (0x0000FF00)

#define FEC_LTPC_DPD_ET_INPUT0_3_0_et_bank_idx_3_0_LSB                          (0)
#define FEC_LTPC_DPD_ET_INPUT0_3_0_et_bank_idx_3_0_WIDTH                        (8)
#define FEC_LTPC_DPD_ET_INPUT0_3_0_et_bank_idx_3_0_MASK                         (0x000000FF)

#define FEC_LTPC_TXDFE_BB_INPUT0_3_0_cfr_clip_th_dbm_3_0_LSB                    (0)
#define FEC_LTPC_TXDFE_BB_INPUT0_3_0_cfr_clip_th_dbm_3_0_WIDTH                  (16)
#define FEC_LTPC_TXDFE_BB_INPUT0_3_0_cfr_clip_th_dbm_3_0_MASK                   (0x0000FFFF)

#define FEC_LTPC_DET_RF_WIN_MASK_INPUT0_3_0_det_rf_win_mask_3_0_LSB             (0)
#define FEC_LTPC_DET_RF_WIN_MASK_INPUT0_3_0_det_rf_win_mask_3_0_WIDTH           (32)
#define FEC_LTPC_DET_RF_WIN_MASK_INPUT0_3_0_det_rf_win_mask_3_0_MASK            (0xFFFFFFFF)

#define FEC_LTPC_DPD_RF_CW_MASK_INPUT0_3_0_dpd_rf_cw_mask_3_0_LSB               (0)
#define FEC_LTPC_DPD_RF_CW_MASK_INPUT0_3_0_dpd_rf_cw_mask_3_0_WIDTH             (32)
#define FEC_LTPC_DPD_RF_CW_MASK_INPUT0_3_0_dpd_rf_cw_mask_3_0_MASK              (0xFFFFFFFF)

#define FEC_LTPC_PCFE2_DAC_INPUT0_3_0_gdac_bkf_db_3_0_LSB                       (0)
#define FEC_LTPC_PCFE2_DAC_INPUT0_3_0_gdac_bkf_db_3_0_WIDTH                     (16)
#define FEC_LTPC_PCFE2_DAC_INPUT0_3_0_gdac_bkf_db_3_0_MASK                      (0x0000FFFF)

#define FEC_LTPC_DDPC_INPUT_GROUP_3_0_disable_pcfe2_3_0_LSB                     (16)
#define FEC_LTPC_DDPC_INPUT_GROUP_3_0_disable_pcfe2_3_0_WIDTH                   (8)
#define FEC_LTPC_DDPC_INPUT_GROUP_3_0_disable_pcfe2_3_0_MASK                    (0x00FF0000)

#define FEC_LTPC_DDPC_INPUT_GROUP_3_0_disable_ilpc_3_0_LSB                      (8)
#define FEC_LTPC_DDPC_INPUT_GROUP_3_0_disable_ilpc_3_0_WIDTH                    (8)
#define FEC_LTPC_DDPC_INPUT_GROUP_3_0_disable_ilpc_3_0_MASK                     (0x0000FF00)

#define FEC_LTPC_DDPC_INPUT_GROUP_3_0_reset_ilpc_3_0_LSB                        (0)
#define FEC_LTPC_DDPC_INPUT_GROUP_3_0_reset_ilpc_3_0_WIDTH                      (8)
#define FEC_LTPC_DDPC_INPUT_GROUP_3_0_reset_ilpc_3_0_MASK                       (0x000000FF)

#define FEC_LTPC_BLANK_L1_PA_0_blank_l1_op_mode_0_LSB                           (24)
#define FEC_LTPC_BLANK_L1_PA_0_blank_l1_op_mode_0_WIDTH                         (8)
#define FEC_LTPC_BLANK_L1_PA_0_blank_l1_op_mode_0_MASK                          (0xFF000000)

#define FEC_LTPC_BLANK_L1_PA_0_blank_l1_idx_pa_0_LSB                            (16)
#define FEC_LTPC_BLANK_L1_PA_0_blank_l1_idx_pa_0_WIDTH                          (8)
#define FEC_LTPC_BLANK_L1_PA_0_blank_l1_idx_pa_0_MASK                           (0x00FF0000)

#define FEC_LTPC_BLANK_L1_PA_0_blank_l1_pa_mode_0_LSB                           (8)
#define FEC_LTPC_BLANK_L1_PA_0_blank_l1_pa_mode_0_WIDTH                         (8)
#define FEC_LTPC_BLANK_L1_PA_0_blank_l1_pa_mode_0_MASK                          (0x0000FF00)

#define FEC_LTPC_BLANK_L1_PA_0_blank_l1_pa_table_mode_0_LSB                     (0)
#define FEC_LTPC_BLANK_L1_PA_0_blank_l1_pa_table_mode_0_WIDTH                   (8)
#define FEC_LTPC_BLANK_L1_PA_0_blank_l1_pa_table_mode_0_MASK                    (0x000000FF)

#define FEC_LTPC_BLANK_L1_PGA_0_blank_l1_pga_mode_0_LSB                         (16)
#define FEC_LTPC_BLANK_L1_PGA_0_blank_l1_pga_mode_0_WIDTH                       (8)
#define FEC_LTPC_BLANK_L1_PGA_0_blank_l1_pga_mode_0_MASK                        (0x00FF0000)

#define FEC_LTPC_BLANK_L1_PGA_0_blank_l1_idx_pga_0_LSB                          (8)
#define FEC_LTPC_BLANK_L1_PGA_0_blank_l1_idx_pga_0_WIDTH                        (8)
#define FEC_LTPC_BLANK_L1_PGA_0_blank_l1_idx_pga_0_MASK                         (0x0000FF00)

#define FEC_LTPC_BLANK_L1_PGA_0_blank_l1_idx_det_0_LSB                          (0)
#define FEC_LTPC_BLANK_L1_PGA_0_blank_l1_idx_det_0_WIDTH                        (8)
#define FEC_LTPC_BLANK_L1_PGA_0_blank_l1_idx_det_0_MASK                         (0x000000FF)

#define FEC_LTPC_BLANK_L1_GTX_BB_DB_0_blank_l1_gtx_bb_db_0_LSB                  (0)
#define FEC_LTPC_BLANK_L1_GTX_BB_DB_0_blank_l1_gtx_bb_db_0_WIDTH                (16)
#define FEC_LTPC_BLANK_L1_GTX_BB_DB_0_blank_l1_gtx_bb_db_0_MASK                 (0x0000FFFF)

#define FEC_LTPC_BLANK_L1_ET_DPD_DATA_0_blank_l1_etdpd_norm_0_LSB               (16)
#define FEC_LTPC_BLANK_L1_ET_DPD_DATA_0_blank_l1_etdpd_norm_0_WIDTH             (16)
#define FEC_LTPC_BLANK_L1_ET_DPD_DATA_0_blank_l1_etdpd_norm_0_MASK              (0xFFFF0000)

#define FEC_LTPC_BLANK_L1_ET_DPD_DATA_0_blank_l1_dtrlin_0_LSB                   (0)
#define FEC_LTPC_BLANK_L1_ET_DPD_DATA_0_blank_l1_dtrlin_0_WIDTH                 (16)
#define FEC_LTPC_BLANK_L1_ET_DPD_DATA_0_blank_l1_dtrlin_0_MASK                  (0x0000FFFF)

#define FEC_LTPC_BLANK_L1_ET_DPD_CONTROL_0_blank_cfr_clip_th_dbm_0_LSB          (16)
#define FEC_LTPC_BLANK_L1_ET_DPD_CONTROL_0_blank_cfr_clip_th_dbm_0_WIDTH        (16)
#define FEC_LTPC_BLANK_L1_ET_DPD_CONTROL_0_blank_cfr_clip_th_dbm_0_MASK         (0xFFFF0000)

#define FEC_LTPC_BLANK_L1_ET_DPD_CONTROL_0_blank_select_default_dpdlut_0_LSB    (8)
#define FEC_LTPC_BLANK_L1_ET_DPD_CONTROL_0_blank_select_default_dpdlut_0_WIDTH  (8)
#define FEC_LTPC_BLANK_L1_ET_DPD_CONTROL_0_blank_select_default_dpdlut_0_MASK   (0x0000FF00)

#define FEC_LTPC_INI_PCFE2_INPUT0_0_gtxiq_bkf_db_0_LSB                          (16)
#define FEC_LTPC_INI_PCFE2_INPUT0_0_gtxiq_bkf_db_0_WIDTH                        (16)
#define FEC_LTPC_INI_PCFE2_INPUT0_0_gtxiq_bkf_db_0_MASK                         (0xFFFF0000)

#define FEC_LTPC_INI_PCFE2_INPUT0_0_pset_ref_dbm_set_0_LSB                      (0)
#define FEC_LTPC_INI_PCFE2_INPUT0_0_pset_ref_dbm_set_0_WIDTH                    (16)
#define FEC_LTPC_INI_PCFE2_INPUT0_0_pset_ref_dbm_set_0_MASK                     (0x0000FFFF)

#define FEC_LTPC_INI_PCFE2_INPUT1_0_gtx_bb_max_db_0_LSB                         (16)
#define FEC_LTPC_INI_PCFE2_INPUT1_0_gtx_bb_max_db_0_WIDTH                       (16)
#define FEC_LTPC_INI_PCFE2_INPUT1_0_gtx_bb_max_db_0_MASK                        (0xFFFF0000)

#define FEC_LTPC_INI_PCFE2_INPUT1_0_gtx_bb_min_db_0_LSB                         (0)
#define FEC_LTPC_INI_PCFE2_INPUT1_0_gtx_bb_min_db_0_WIDTH                       (16)
#define FEC_LTPC_INI_PCFE2_INPUT1_0_gtx_bb_min_db_0_MASK                        (0x0000FFFF)

#define FEC_LTPC_INI_PCFE2_INPUT2_0_gtx_pga_max_db_0_LSB                        (16)
#define FEC_LTPC_INI_PCFE2_INPUT2_0_gtx_pga_max_db_0_WIDTH                      (16)
#define FEC_LTPC_INI_PCFE2_INPUT2_0_gtx_pga_max_db_0_MASK                       (0xFFFF0000)

#define FEC_LTPC_INI_PCFE2_INPUT2_0_gtx_pga_min_db_0_LSB                        (0)
#define FEC_LTPC_INI_PCFE2_INPUT2_0_gtx_pga_min_db_0_WIDTH                      (16)
#define FEC_LTPC_INI_PCFE2_INPUT2_0_gtx_pga_min_db_0_MASK                       (0x0000FFFF)

#define FEC_LTPC_INI_PCFE2_INPUT3_0_gdet_rf_max_db_0_LSB                        (16)
#define FEC_LTPC_INI_PCFE2_INPUT3_0_gdet_rf_max_db_0_WIDTH                      (16)
#define FEC_LTPC_INI_PCFE2_INPUT3_0_gdet_rf_max_db_0_MASK                       (0xFFFF0000)

#define FEC_LTPC_INI_PCFE2_INPUT3_0_gdet_rf_min_db_0_LSB                        (0)
#define FEC_LTPC_INI_PCFE2_INPUT3_0_gdet_rf_min_db_0_WIDTH                      (16)
#define FEC_LTPC_INI_PCFE2_INPUT3_0_gdet_rf_min_db_0_MASK                       (0x0000FFFF)

#define FEC_LTPC_INI_PCFE2_INPUT4_0_freq_pa_carr_0_LSB                          (0)
#define FEC_LTPC_INI_PCFE2_INPUT4_0_freq_pa_carr_0_WIDTH                        (16)
#define FEC_LTPC_INI_PCFE2_INPUT4_0_freq_pa_carr_0_MASK                         (0x0000FFFF)

#define FEC_LTPC_INI_DDPC_INPUT0_0_ddpc_nor_period_0_0_LSB                      (16)
#define FEC_LTPC_INI_DDPC_INPUT0_0_ddpc_nor_period_0_0_WIDTH                    (16)
#define FEC_LTPC_INI_DDPC_INPUT0_0_ddpc_nor_period_0_0_MASK                     (0xFFFF0000)

#define FEC_LTPC_INI_DDPC_INPUT0_0_ddpc_nor_period_1_0_LSB                      (0)
#define FEC_LTPC_INI_DDPC_INPUT0_0_ddpc_nor_period_1_0_WIDTH                    (16)
#define FEC_LTPC_INI_DDPC_INPUT0_0_ddpc_nor_period_1_0_MASK                     (0x0000FFFF)

#define FEC_LTPC_INI_DDPC_INPUT1_0_ddpc_nor_period_2_0_LSB                      (16)
#define FEC_LTPC_INI_DDPC_INPUT1_0_ddpc_nor_period_2_0_WIDTH                    (16)
#define FEC_LTPC_INI_DDPC_INPUT1_0_ddpc_nor_period_2_0_MASK                     (0xFFFF0000)

#define FEC_LTPC_INI_DDPC_INPUT1_0_ddpc_nor_period_3_0_LSB                      (0)
#define FEC_LTPC_INI_DDPC_INPUT1_0_ddpc_nor_period_3_0_WIDTH                    (16)
#define FEC_LTPC_INI_DDPC_INPUT1_0_ddpc_nor_period_3_0_MASK                     (0x0000FFFF)

#define FEC_LTPC_INI_DDPC_INPUT2_0_meas_term_0_0_LSB                            (24)
#define FEC_LTPC_INI_DDPC_INPUT2_0_meas_term_0_0_WIDTH                          (8)
#define FEC_LTPC_INI_DDPC_INPUT2_0_meas_term_0_0_MASK                           (0xFF000000)

#define FEC_LTPC_INI_DDPC_INPUT2_0_meas_term_1_0_LSB                            (16)
#define FEC_LTPC_INI_DDPC_INPUT2_0_meas_term_1_0_WIDTH                          (8)
#define FEC_LTPC_INI_DDPC_INPUT2_0_meas_term_1_0_MASK                           (0x00FF0000)

#define FEC_LTPC_INI_DDPC_INPUT2_0_meas_term_2_0_LSB                            (8)
#define FEC_LTPC_INI_DDPC_INPUT2_0_meas_term_2_0_WIDTH                          (8)
#define FEC_LTPC_INI_DDPC_INPUT2_0_meas_term_2_0_MASK                           (0x0000FF00)

#define FEC_LTPC_INI_DDPC_INPUT2_0_meas_term_3_0_LSB                            (0)
#define FEC_LTPC_INI_DDPC_INPUT2_0_meas_term_3_0_WIDTH                          (8)
#define FEC_LTPC_INI_DDPC_INPUT2_0_meas_term_3_0_MASK                           (0x000000FF)

#define FEC_LTPC_INI_ILPC_INPUT0_0_rat_type_0_LSB                               (16)
#define FEC_LTPC_INI_ILPC_INPUT0_0_rat_type_0_WIDTH                             (8)
#define FEC_LTPC_INI_ILPC_INPUT0_0_rat_type_0_MASK                              (0x00FF0000)

#define FEC_LTPC_INI_ILPC_INPUT0_0_gtx_fc_db_sw_0_LSB                           (0)
#define FEC_LTPC_INI_ILPC_INPUT0_0_gtx_fc_db_sw_0_WIDTH                         (16)
#define FEC_LTPC_INI_ILPC_INPUT0_0_gtx_fc_db_sw_0_MASK                          (0x0000FFFF)

#define FEC_LTPC_INI_ILPC_INPUT0_0_no_use_gilpc_ofs_db_0_LSB                    (0)
#define FEC_LTPC_INI_ILPC_INPUT0_0_no_use_gilpc_ofs_db_0_WIDTH                  (16)
#define FEC_LTPC_INI_ILPC_INPUT0_0_no_use_gilpc_ofs_db_0_MASK                   (0x0000FFFF)

#define FEC_LTPC_INI_ILPC_INPUT1_0_gstep_th_0_LSB                               (16)
#define FEC_LTPC_INI_ILPC_INPUT1_0_gstep_th_0_WIDTH                             (16)
#define FEC_LTPC_INI_ILPC_INPUT1_0_gstep_th_0_MASK                              (0xFFFF0000)

#define FEC_LTPC_INI_ILPC_INPUT1_0_derr_0_LSB                                   (8)
#define FEC_LTPC_INI_ILPC_INPUT1_0_derr_0_WIDTH                                 (8)
#define FEC_LTPC_INI_ILPC_INPUT1_0_derr_0_MASK                                  (0x0000FF00)

#define FEC_LTPC_INI_ILPC_INPUT1_0_alpha_0_LSB                                  (0)
#define FEC_LTPC_INI_ILPC_INPUT1_0_alpha_0_WIDTH                                (8)
#define FEC_LTPC_INI_ILPC_INPUT1_0_alpha_0_MASK                                 (0x000000FF)

#define FEC_LTPC_INI_ILPC_INPUT2_0_no_use_en_cmeas_rf_0_LSB                     (16)
#define FEC_LTPC_INI_ILPC_INPUT2_0_no_use_en_cmeas_rf_0_WIDTH                   (8)
#define FEC_LTPC_INI_ILPC_INPUT2_0_no_use_en_cmeas_rf_0_MASK                    (0x00FF0000)

#define FEC_LTPC_INI_ILPC_INPUT2_0_th_cmeas_db_0_LSB                            (0)
#define FEC_LTPC_INI_ILPC_INPUT2_0_th_cmeas_db_0_WIDTH                          (16)
#define FEC_LTPC_INI_ILPC_INPUT2_0_th_cmeas_db_0_MASK                           (0x0000FFFF)

#define FEC_LTPC_INI_ET_INPUT0_0_no_use_pset_dac_et_cal_dbm_0_LSB               (16)
#define FEC_LTPC_INI_ET_INPUT0_0_no_use_pset_dac_et_cal_dbm_0_WIDTH             (16)
#define FEC_LTPC_INI_ET_INPUT0_0_no_use_pset_dac_et_cal_dbm_0_MASK              (0xFFFF0000)

#define FEC_LTPC_INI_ET_INPUT0_0_no_use_dft_db_0_LSB                            (0)
#define FEC_LTPC_INI_ET_INPUT0_0_no_use_dft_db_0_WIDTH                          (16)
#define FEC_LTPC_INI_ET_INPUT0_0_no_use_dft_db_0_MASK                           (0x0000FFFF)

#define FEC_LTPC_INI_TXK_INPUT0_0_msel0_0_LSB                                   (24)
#define FEC_LTPC_INI_TXK_INPUT0_0_msel0_0_WIDTH                                 (8)
#define FEC_LTPC_INI_TXK_INPUT0_0_msel0_0_MASK                                  (0xFF000000)

#define FEC_LTPC_INI_TXK_INPUT0_0_msel1_0_LSB                                   (16)
#define FEC_LTPC_INI_TXK_INPUT0_0_msel1_0_WIDTH                                 (8)
#define FEC_LTPC_INI_TXK_INPUT0_0_msel1_0_MASK                                  (0x00FF0000)

#define FEC_LTPC_INI_TXK_INPUT0_0_msel2_0_LSB                                   (8)
#define FEC_LTPC_INI_TXK_INPUT0_0_msel2_0_WIDTH                                 (8)
#define FEC_LTPC_INI_TXK_INPUT0_0_msel2_0_MASK                                  (0x0000FF00)

#define FEC_LTPC_INI_TXK_INPUT0_0_msel3_0_LSB                                   (0)
#define FEC_LTPC_INI_TXK_INPUT0_0_msel3_0_WIDTH                                 (8)
#define FEC_LTPC_INI_TXK_INPUT0_0_msel3_0_MASK                                  (0x000000FF)

#define FEC_LTPC_INI_RFIC_CS_INPUT0_0_rfic_cs_0_LSB                             (0)
#define FEC_LTPC_INI_RFIC_CS_INPUT0_0_rfic_cs_0_WIDTH                           (8)
#define FEC_LTPC_INI_RFIC_CS_INPUT0_0_rfic_cs_0_MASK                            (0x000000FF)

#define FEC_LTPC_INI_MIPI_LENGTH_INPUT0_0_mipi_length_apt_0_LSB                 (16)
#define FEC_LTPC_INI_MIPI_LENGTH_INPUT0_0_mipi_length_apt_0_WIDTH               (8)
#define FEC_LTPC_INI_MIPI_LENGTH_INPUT0_0_mipi_length_apt_0_MASK                (0x00FF0000)

#define FEC_LTPC_INI_MIPI_LENGTH_INPUT0_0_mipi_length_dpd_0_LSB                 (8)
#define FEC_LTPC_INI_MIPI_LENGTH_INPUT0_0_mipi_length_dpd_0_WIDTH               (8)
#define FEC_LTPC_INI_MIPI_LENGTH_INPUT0_0_mipi_length_dpd_0_MASK                (0x0000FF00)

#define FEC_LTPC_INI_MIPI_LENGTH_INPUT0_0_mipi_length_et_0_LSB                  (0)
#define FEC_LTPC_INI_MIPI_LENGTH_INPUT0_0_mipi_length_et_0_WIDTH                (8)
#define FEC_LTPC_INI_MIPI_LENGTH_INPUT0_0_mipi_length_et_0_MASK                 (0x000000FF)

#define FEC_LTPC_INI_MIPI_LENGTH_INPUT1_0_etm_mipi_length_apt_0_LSB             (16)
#define FEC_LTPC_INI_MIPI_LENGTH_INPUT1_0_etm_mipi_length_apt_0_WIDTH           (8)
#define FEC_LTPC_INI_MIPI_LENGTH_INPUT1_0_etm_mipi_length_apt_0_MASK            (0x00FF0000)

#define FEC_LTPC_INI_MIPI_LENGTH_INPUT1_0_etm_mipi_length_dpd_0_LSB             (8)
#define FEC_LTPC_INI_MIPI_LENGTH_INPUT1_0_etm_mipi_length_dpd_0_WIDTH           (8)
#define FEC_LTPC_INI_MIPI_LENGTH_INPUT1_0_etm_mipi_length_dpd_0_MASK            (0x0000FF00)

#define FEC_LTPC_INI_MIPI_LENGTH_INPUT1_0_etm_mipi_length_et_0_LSB              (0)
#define FEC_LTPC_INI_MIPI_LENGTH_INPUT1_0_etm_mipi_length_et_0_WIDTH            (8)
#define FEC_LTPC_INI_MIPI_LENGTH_INPUT1_0_etm_mipi_length_et_0_MASK             (0x000000FF)

#define FEC_LTPC_INI_PGA_LENGTH_INPUT0_0_pga_length_0_LSB                       (16)
#define FEC_LTPC_INI_PGA_LENGTH_INPUT0_0_pga_length_0_WIDTH                     (8)
#define FEC_LTPC_INI_PGA_LENGTH_INPUT0_0_pga_length_0_MASK                      (0x00FF0000)

#define FEC_LTPC_INI_PMIC_LENGTH_INPUT0_0_pmic_length_0_LSB                     (16)
#define FEC_LTPC_INI_PMIC_LENGTH_INPUT0_0_pmic_length_0_WIDTH                   (8)
#define FEC_LTPC_INI_PMIC_LENGTH_INPUT0_0_pmic_length_0_MASK                    (0x00FF0000)

#define FEC_LTPC_PA_A_TABLE_0_pa_lut_var_a_0_LSB                                (16)
#define FEC_LTPC_PA_A_TABLE_0_pa_lut_var_a_0_WIDTH                              (16)
#define FEC_LTPC_PA_A_TABLE_0_pa_lut_var_a_0_MASK                               (0xFFFF0000)

#define FEC_LTPC_PA_A_TABLE_0_pa_sb_lut_freq_a_0_LSB                            (0)
#define FEC_LTPC_PA_A_TABLE_0_pa_sb_lut_freq_a_0_WIDTH                          (16)
#define FEC_LTPC_PA_A_TABLE_0_pa_sb_lut_freq_a_0_MASK                           (0x0000FFFF)

#define FEC_LTPC_PA_SB_NUM_A_0_pa_sb_num_a_0_LSB                                (0)
#define FEC_LTPC_PA_SB_NUM_A_0_pa_sb_num_a_0_WIDTH                              (8)
#define FEC_LTPC_PA_SB_NUM_A_0_pa_sb_num_a_0_MASK                               (0x000000FF)

#define FEC_LTPC_PA_B_TABLE_0_pa_lut_var_b_0_LSB                                (16)
#define FEC_LTPC_PA_B_TABLE_0_pa_lut_var_b_0_WIDTH                              (16)
#define FEC_LTPC_PA_B_TABLE_0_pa_lut_var_b_0_MASK                               (0xFFFF0000)

#define FEC_LTPC_PA_B_TABLE_0_pa_sb_lut_freq_b_0_LSB                            (0)
#define FEC_LTPC_PA_B_TABLE_0_pa_sb_lut_freq_b_0_WIDTH                          (16)
#define FEC_LTPC_PA_B_TABLE_0_pa_sb_lut_freq_b_0_MASK                           (0x0000FFFF)

#define FEC_LTPC_PA_SB_NUM_B_0_pa_sb_num_b_0_LSB                                (0)
#define FEC_LTPC_PA_SB_NUM_B_0_pa_sb_num_b_0_WIDTH                              (8)
#define FEC_LTPC_PA_SB_NUM_B_0_pa_sb_num_b_0_MASK                               (0x000000FF)

#define FEC_LTPC_PA_C_TABLE_0_pa_lut_var_c_0_LSB                                (16)
#define FEC_LTPC_PA_C_TABLE_0_pa_lut_var_c_0_WIDTH                              (16)
#define FEC_LTPC_PA_C_TABLE_0_pa_lut_var_c_0_MASK                               (0xFFFF0000)

#define FEC_LTPC_PA_C_TABLE_0_pa_sb_lut_freq_c_0_LSB                            (0)
#define FEC_LTPC_PA_C_TABLE_0_pa_sb_lut_freq_c_0_WIDTH                          (16)
#define FEC_LTPC_PA_C_TABLE_0_pa_sb_lut_freq_c_0_MASK                           (0x0000FFFF)

#define FEC_LTPC_PA_SB_NUM_C_0_pa_sb_num_c_0_LSB                                (0)
#define FEC_LTPC_PA_SB_NUM_C_0_pa_sb_num_c_0_WIDTH                              (8)
#define FEC_LTPC_PA_SB_NUM_C_0_pa_sb_num_c_0_MASK                               (0x000000FF)

#define FEC_LTPC_CPL_TABLE_0_cpl_lut_var_0_LSB                                  (16)
#define FEC_LTPC_CPL_TABLE_0_cpl_lut_var_0_WIDTH                                (16)
#define FEC_LTPC_CPL_TABLE_0_cpl_lut_var_0_MASK                                 (0xFFFF0000)

#define FEC_LTPC_CPL_TABLE_0_cpl_sb_lut_freq_0_LSB                              (0)
#define FEC_LTPC_CPL_TABLE_0_cpl_sb_lut_freq_0_WIDTH                            (16)
#define FEC_LTPC_CPL_TABLE_0_cpl_sb_lut_freq_0_MASK                             (0x0000FFFF)

#define FEC_LTPC_CPL_SB_NUM_0_cpl_sb_num_0_LSB                                  (0)
#define FEC_LTPC_CPL_SB_NUM_0_cpl_sb_num_0_WIDTH                                (8)
#define FEC_LTPC_CPL_SB_NUM_0_cpl_sb_num_0_MASK                                 (0x000000FF)

#define FEC_LTPC_CPL_LUT_GCPL_0_cpl_lut_gcpl_0_LSB                              (0)
#define FEC_LTPC_CPL_LUT_GCPL_0_cpl_lut_gcpl_0_WIDTH                            (16)
#define FEC_LTPC_CPL_LUT_GCPL_0_cpl_lut_gcpl_0_MASK                             (0x0000FFFF)

#define FEC_LTPC_TXPGA_LUT_GPGA_A_0_txpga_lut_gpga_a_0_LSB                      (0)
#define FEC_LTPC_TXPGA_LUT_GPGA_A_0_txpga_lut_gpga_a_0_WIDTH                    (16)
#define FEC_LTPC_TXPGA_LUT_GPGA_A_0_txpga_lut_gpga_a_0_MASK                     (0x0000FFFF)

#define FEC_LTPC_TXPGA_LUT_N_A_0_txpga_lut_n_a_0_LSB                            (0)
#define FEC_LTPC_TXPGA_LUT_N_A_0_txpga_lut_n_a_0_WIDTH                          (8)
#define FEC_LTPC_TXPGA_LUT_N_A_0_txpga_lut_n_a_0_MASK                           (0x000000FF)

#define FEC_LTPC_TXPGA_LUT_GPGA_B_0_txpga_lut_gpga_b_0_LSB                      (0)
#define FEC_LTPC_TXPGA_LUT_GPGA_B_0_txpga_lut_gpga_b_0_WIDTH                    (16)
#define FEC_LTPC_TXPGA_LUT_GPGA_B_0_txpga_lut_gpga_b_0_MASK                     (0x0000FFFF)

#define FEC_LTPC_TXPGA_LUT_N_B_0_txpga_lut_n_b_0_LSB                            (0)
#define FEC_LTPC_TXPGA_LUT_N_B_0_txpga_lut_n_b_0_WIDTH                          (8)
#define FEC_LTPC_TXPGA_LUT_N_B_0_txpga_lut_n_b_0_MASK                           (0x000000FF)

#define FEC_LTPC_RES_TABLE_0_res_lut_var_0_LSB                                  (16)
#define FEC_LTPC_RES_TABLE_0_res_lut_var_0_WIDTH                                (16)
#define FEC_LTPC_RES_TABLE_0_res_lut_var_0_MASK                                 (0xFFFF0000)

#define FEC_LTPC_RES_TABLE_0_res_sb_lut_freq_0_LSB                              (0)
#define FEC_LTPC_RES_TABLE_0_res_sb_lut_freq_0_WIDTH                            (16)
#define FEC_LTPC_RES_TABLE_0_res_sb_lut_freq_0_MASK                             (0x0000FFFF)

#define FEC_LTPC_RES_SB_NUM_0_res_sb_num_0_LSB                                  (0)
#define FEC_LTPC_RES_SB_NUM_0_res_sb_num_0_WIDTH                                (8)
#define FEC_LTPC_RES_SB_NUM_0_res_sb_num_0_MASK                                 (0x000000FF)

#define FEC_LTPC_DET_LUT_GDET_0_det_lut_gdet_0_LSB                              (0)
#define FEC_LTPC_DET_LUT_GDET_0_det_lut_gdet_0_WIDTH                            (16)
#define FEC_LTPC_DET_LUT_GDET_0_det_lut_gdet_0_MASK                             (0x0000FFFF)

#define FEC_LTPC_DET_LUT_N_0_det_lut_n_0_LSB                                    (0)
#define FEC_LTPC_DET_LUT_N_0_det_lut_n_0_WIDTH                                  (8)
#define FEC_LTPC_DET_LUT_N_0_det_lut_n_0_MASK                                   (0x000000FF)

#define FEC_LTPC_DPD_LUT_NORM_FACTOR_0_dpd_lut_norm_factor_0_LSB                (0)
#define FEC_LTPC_DPD_LUT_NORM_FACTOR_0_dpd_lut_norm_factor_0_WIDTH              (16)
#define FEC_LTPC_DPD_LUT_NORM_FACTOR_0_dpd_lut_norm_factor_0_MASK               (0x0000FFFF)

#define FEC_LTPC_ET_TABLE_0_get_pout_gain_offset_tab_0_LSB                      (16)
#define FEC_LTPC_ET_TABLE_0_get_pout_gain_offset_tab_0_WIDTH                    (16)
#define FEC_LTPC_ET_TABLE_0_get_pout_gain_offset_tab_0_MASK                     (0xFFFF0000)

#define FEC_LTPC_ET_TABLE_0_petk_lut_out_max_tab_0_LSB                          (0)
#define FEC_LTPC_ET_TABLE_0_petk_lut_out_max_tab_0_WIDTH                        (16)
#define FEC_LTPC_ET_TABLE_0_petk_lut_out_max_tab_0_MASK                         (0x0000FFFF)

#define FEC_LTPC_TXPGA_LUT_CFG_A_B_0_txpga_lut_cfg_a_0_LSB                      (8)
#define FEC_LTPC_TXPGA_LUT_CFG_A_B_0_txpga_lut_cfg_a_0_WIDTH                    (8)
#define FEC_LTPC_TXPGA_LUT_CFG_A_B_0_txpga_lut_cfg_a_0_MASK                     (0x0000FF00)

#define FEC_LTPC_TXPGA_LUT_CFG_A_B_0_txpga_lut_cfg_b_0_LSB                      (0)
#define FEC_LTPC_TXPGA_LUT_CFG_A_B_0_txpga_lut_cfg_b_0_WIDTH                    (8)
#define FEC_LTPC_TXPGA_LUT_CFG_A_B_0_txpga_lut_cfg_b_0_MASK                     (0x000000FF)

#define FEC_LTPC_MIPI_APT_0_mipi_apt_cw_0_LSB                                   (0)
#define FEC_LTPC_MIPI_APT_0_mipi_apt_cw_0_WIDTH                                 (32)
#define FEC_LTPC_MIPI_APT_0_mipi_apt_cw_0_MASK                                  (0xFFFFFFFF)

#define FEC_LTPC_MIPI_DPD_0_mipi_dpd_cw_0_LSB                                   (0)
#define FEC_LTPC_MIPI_DPD_0_mipi_dpd_cw_0_WIDTH                                 (32)
#define FEC_LTPC_MIPI_DPD_0_mipi_dpd_cw_0_MASK                                  (0xFFFFFFFF)

#define FEC_LTPC_BSI_PMIC_APT_0_bsi_pmic_apt_0_LSB                              (0)
#define FEC_LTPC_BSI_PMIC_APT_0_bsi_pmic_apt_0_WIDTH                            (32)
#define FEC_LTPC_BSI_PMIC_APT_0_bsi_pmic_apt_0_MASK                             (0xFFFFFFFF)

#define FEC_LTPC_BSI_PMIC_DPD_0_bsi_pmic_dpd_0_LSB                              (0)
#define FEC_LTPC_BSI_PMIC_DPD_0_bsi_pmic_dpd_0_WIDTH                            (32)
#define FEC_LTPC_BSI_PMIC_DPD_0_bsi_pmic_dpd_0_MASK                             (0xFFFFFFFF)

#define FEC_LTPC_BSI_PGA_A_CW_0_bsi_pga_a_cw_0_LSB                              (0)
#define FEC_LTPC_BSI_PGA_A_CW_0_bsi_pga_a_cw_0_WIDTH                            (32)
#define FEC_LTPC_BSI_PGA_A_CW_0_bsi_pga_a_cw_0_MASK                             (0xFFFFFFFF)

#define FEC_LTPC_BSI_PGA_B_CW_0_bsi_pga_b_cw_0_LSB                              (0)
#define FEC_LTPC_BSI_PGA_B_CW_0_bsi_pga_b_cw_0_WIDTH                            (32)
#define FEC_LTPC_BSI_PGA_B_CW_0_bsi_pga_b_cw_0_MASK                             (0xFFFFFFFF)

#define FEC_LTPC_BSI_DET_CW_0_bsi_det_cw_0_LSB                                  (0)
#define FEC_LTPC_BSI_DET_CW_0_bsi_det_cw_0_WIDTH                                (32)
#define FEC_LTPC_BSI_DET_CW_0_bsi_det_cw_0_MASK                                 (0xFFFFFFFF)

#define FEC_LTPC_APC_APT_DPD_0_apc_dpd_0_LSB                                    (16)
#define FEC_LTPC_APC_APT_DPD_0_apc_dpd_0_WIDTH                                  (16)
#define FEC_LTPC_APC_APT_DPD_0_apc_dpd_0_MASK                                   (0xFFFF0000)

#define FEC_LTPC_APC_APT_DPD_0_apc_apt_0_LSB                                    (0)
#define FEC_LTPC_APC_APT_DPD_0_apc_apt_0_WIDTH                                  (16)
#define FEC_LTPC_APC_APT_DPD_0_apc_apt_0_MASK                                   (0x0000FFFF)

#define FEC_LTPC_VM_APT_DPD_0_vm_dpd_0_LSB                                      (8)
#define FEC_LTPC_VM_APT_DPD_0_vm_dpd_0_WIDTH                                    (8)
#define FEC_LTPC_VM_APT_DPD_0_vm_dpd_0_MASK                                     (0x0000FF00)

#define FEC_LTPC_VM_APT_DPD_0_vm_apt_0_LSB                                      (0)
#define FEC_LTPC_VM_APT_DPD_0_vm_apt_0_WIDTH                                    (8)
#define FEC_LTPC_VM_APT_DPD_0_vm_apt_0_MASK                                     (0x000000FF)

#define FEC_LTPC_MIPI_PA_ETM_IN_APT_MODE_0_mipi_etm_in_apt_cw_0_LSB             (0)
#define FEC_LTPC_MIPI_PA_ETM_IN_APT_MODE_0_mipi_etm_in_apt_cw_0_WIDTH           (32)
#define FEC_LTPC_MIPI_PA_ETM_IN_APT_MODE_0_mipi_etm_in_apt_cw_0_MASK            (0xFFFFFFFF)

#define FEC_LTPC_MIPI_PA_ETM_IN_DPD_MODE_0_mipi_etm_in_dpd_cw_0_LSB             (0)
#define FEC_LTPC_MIPI_PA_ETM_IN_DPD_MODE_0_mipi_etm_in_dpd_cw_0_WIDTH           (32)
#define FEC_LTPC_MIPI_PA_ETM_IN_DPD_MODE_0_mipi_etm_in_dpd_cw_0_MASK            (0xFFFFFFFF)

/* L_guif_end */

#endif //#ifndef __FEC_LTPC_REG__
