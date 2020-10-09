#ifndef _FEC_W_TX_MT6293_H_
#define _FEC_W_TX_MT6293_H_


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

#endif //#ifndef _FEC_HW_REG_MT6291_H_
#define FEC_WTPC_CUIF_CU_REG_REG_BASE                                           (0x00070000)
#define FEC_WTPC_TX_CUIF(n)                                                     ((APBADDR32)(FEC_WTPC_CUIF_CU_REG_REG_BASE + (n)*4))   //fake cuif addr for psuedo code

#define FEC_WTPC_CUIF_CU_REG_end                                                (FEC_LTPC_CUIF_CU_REG_REG_BASE + 0x0270)

//----------- FEC_W_TX calibration table ---------
#define WFEC_TPC_PA_VCC_NUM             (8)
#define WFEC_TPC_PA_MODE_NUM            (3)
#define WFEC_TPC_PA_ET_NUM              (2)
#define WFEC_TPC_CFR_TEMP_NUM           (4)
#define WFEC_TPC_MCS_LUT_NUM            (6)
#define WFEC_MMRFC_TX_PGA_A_GAIN_STEPS  (30) //G0~G11,G12a~G20a are not used
#define WFEC_MMRFC_TX_PGA_B_GAIN_STEPS  (21) //G12b~G21b,G22~G28, actually 17 levels, 4 level reserved
#define WFEC_MMRFC_TX_DET_GAIN_STEPS    (15)
#define WFEC_MIPI_CW_NUM                (108) //9*6*2=108 word(9 levels * 6 CW per MIPI event max * (high+low)part)
#define WFEC_MIPI_TPC_SECTION_NUM       (9)

//----------- FEC_W_TX calibration structure ---------
typedef struct
{
   UINT32 PA_LUT_A_INPUT_0[WFEC_TPC_PA_ET_NUM];
   UINT32 PA_LUT_B_INPUT_0[WFEC_TPC_PA_VCC_NUM];
   UINT32 PA_LUT_C_INPUT_0[WFEC_TPC_PA_VCC_NUM];
   UINT32 CPL_LUT_GCPL[WFEC_TPC_PA_MODE_NUM];
   UINT32 PA_CPL_LUT_CHECK;
}WFEC_TPC_PA_CPL_LUT;

typedef struct
{
   UINT32 CFR_R99_INPUT_0[WFEC_TPC_CFR_TEMP_NUM];
   UINT32 CFR_QPSK_INPUT_0[WFEC_TPC_CFR_TEMP_NUM];
   UINT32 CFR_16QAM_INPUT0[WFEC_TPC_CFR_TEMP_NUM];
   UINT32 MCS_LUT_0[WFEC_TPC_MCS_LUT_NUM];
   UINT32 CFR_MCS_LUT_CHECK;
}WFEC_TPC_CFR_MCS_LUT;

typedef struct
{
   UINT32 TXPGA_LUT_GPGA_A_0[WFEC_MMRFC_TX_PGA_A_GAIN_STEPS];
   UINT32 TXPGA_LUT_N_A_0[1];
   UINT32 TXPGA_LUT_GPGA_B_0[WFEC_MMRFC_TX_PGA_B_GAIN_STEPS];
   UINT32 TXPGA_LUT_N_B_0[1];
   UINT32 DET_LUT_GDET_0[WFEC_MMRFC_TX_DET_GAIN_STEPS];
   UINT32 DET_LUT_N_0[1];
   UINT32 DPD_LUT_NORM_FACTOR_0[WFEC_MIPI_TPC_SECTION_NUM]; //8+1 for off power
   UINT32 ET_TABLE_0[WFEC_TPC_PA_ET_NUM];
   UINT32 TXPGA_LUT_CFG_A_B_0[WFEC_MMRFC_TX_PGA_A_GAIN_STEPS+1];  //30+1 for off power
   UINT32 PA_LUT_MODE_A_0[WFEC_TPC_PA_ET_NUM];
   UINT32 PA_LUT_N_A_0[1];
   UINT32 PA_LUT_MODE_B_0[WFEC_TPC_PA_VCC_NUM];
   UINT32 PA_LUT_N_B_0[1];
   UINT32 PA_LUT_MODE_C_0[WFEC_TPC_PA_VCC_NUM];
   UINT32 PA_LUT_N_C_0[1];
   UINT32 TH_OP_A2D_D2A_0[1];
   UINT32 TH_OP_D2E_E2D_0[1];
   UINT32 PGA_LUT_CHECK;
}WFEC_TPC_PGA_LUT;

typedef struct
{
   UINT32 MIPI_PA_APT_0[WFEC_MIPI_CW_NUM];
   UINT32 MIPI_PA_DPD_0[WFEC_MIPI_CW_NUM];
   UINT32 MIPI_PA_ETM_IN_APT_MODE_0[WFEC_MIPI_CW_NUM];
   UINT32 MIPI_PA_ETM_IN_DPD_MODE_0[WFEC_MIPI_CW_NUM];
   UINT32 BSI_PMIC_APT_0[WFEC_MIPI_TPC_SECTION_NUM];
   UINT32 BSI_PMIC_DPD_0[WFEC_MIPI_TPC_SECTION_NUM];
   UINT32 BSI_PGA_A_CW_0[(WFEC_MMRFC_TX_PGA_A_GAIN_STEPS+1)*3];
   UINT32 BSI_PGA_B_CW_0[(WFEC_MMRFC_TX_PGA_B_GAIN_STEPS+1)*3];
   UINT32 BSI_DET_CW_0[WFEC_MMRFC_TX_DET_GAIN_STEPS];
   UINT32 APC_APT_DPD_0[WFEC_MIPI_TPC_SECTION_NUM];
   UINT32 VM_APT_DPD_0[WFEC_MIPI_TPC_SECTION_NUM];
   UINT32 CW_LUT_CHECK;
}WFEC_TPC_CW_LUT;

// ---------- FEC_W_TX word-offset  ----------
#define FEC_WTPC_CUIF_O_UPC1_OFFSET(i)                                                    (0)
#define FEC_WTPC_CUIF_O_UPC2_OFFSET(i)                                                    (1)
#define FEC_WTPC_CUIF_O_PCFE2_OFFSET(i)                                                   (2)
#define FEC_WTPC_CUIF_O_PDP1_PSP1_OFFSET(i)                                               (3)
#define FEC_WTPC_CUIF_O_PDP2_PSP1_OFFSET(i)                                               (4)
#define FEC_WTPC_CUIF_O_PDQ1_PSQ1_OFFSET(i)                                               (5)
#define FEC_WTPC_CUIF_O_PDQ2_PSQ1_OFFSET(i)                                               (6)
#define FEC_WTPC_CUIF_O_PSP1_SLOTEN(i)                                                    (7)
#define FEC_WTPC_CUIF_O_HSDPCCH_SLOT_EN(i)                                                (8)
#define FEC_WTPC_CUIF_O_HSDPCCH_SYM_OFFSET(i)                                             (9)
#define FEC_WTPC_CUIF_O_PS_CON(i)                                                         (10)
#define FEC_WTPC_CUIF_O_PSP1_OFFSETn(i)                                                   (11 + (i))
#define FEC_WTPC_CUIF_O_PSP2_OFFSET(i)                                                    (14)
#define FEC_WTPC_CUIF_O_PSQ1_OFFSET(i)                                                    (15)
#define FEC_WTPC_CUIF_O_PSQ2_OFFSET(i)                                                    (16)
#define FEC_WTPC_CUIF_O_PS_LO_CON1(i)                                                     (17)
#define FEC_WTPC_CUIF_O_PS_LO_CON2(i)                                                     (18)
#define FEC_WTPC_CUIF_O_PS_LO_CON3(i)                                                     (19 + (i))
#define FEC_WTPC_CUIF_O_PS_LO_CON4(i)                                                     (21 + (i))
#define FEC_WTPC_CUIF_O_PRACH_STATUS(i)                                                   (23)
#define FEC_WTPC_CUIF_O_UPC_RACH_ST_RF(i)                                                 (24)
#define FEC_WTPC_CUIF_O_UPC_RACH_SP_RF(i)                                                 (25)
#define FEC_WTPC_CUIF_O_UPC_RACH_MSG_ST_RF(i)                                             (26)
#define FEC_WTPC_CUIF_O_UPC_RACH_MSG_SP_RF(i)                                             (27)
#define FEC_WTPC_CUIF_O_UPC_RACH_PRE_ST_RF(i)                                             (28)
#define FEC_WTPC_CUIF_O_UPC_RACH_PRE_SP_RF(i)                                             (29)
#define FEC_WTPC_CUIF_O_FREQ_L1D(i)                                                       (30)
#define FEC_WTPC_CUIF_O_FREQ_L1RFD(i)                                                     (31)
#define FEC_WTPC_CUIF_O_TMP_L1RFD(i)                                                      (32)
#define FEC_WTPC_CUIF_O_CUIF_READY(i)                                                     (33)
#define FEC_WTPC_CUIF_O_L1_DDPC_SET0(i)                                                   (34 + (i))
#define FEC_WTPC_CUIF_O_L1_DDPC_SET1(i)                                                   (36 + (i))
#define FEC_WTPC_CUIF_O_UCHEN_FRM(i)                                                      (38)
#define FEC_WTPC_CUIF_O_EMI_ADDR0(i)                                                      (39)
#define FEC_WTPC_CUIF_O_EMI_ADDR1(i)                                                      (40)
#define FEC_WTPC_CUIF_O_EMI_ADDR2(i)                                                      (41)
#define FEC_WTPC_CUIF_O_EMI_ADDR3(i)                                                      (42)
#define FEC_WTPC_CUIF_O_EMI_TABLE_SIZE0(i)                                                (43)
#define FEC_WTPC_CUIF_O_EMI_TABLE_SIZE1(i)                                                (44)
#define FEC_WTPC_CUIF_O_bypass_et(i)                                                      (46)
#define FEC_WTPC_CUIF_O_bypass_dpd(i)                                                     (47)
#define FEC_WTPC_CUIF_O_sync_ID(i)                                                        (48)
#define FEC_WTPC_CUIF_O_WTX_BOOT_UP_STA(i)                                                (49)
#define FEC_WTPC_CUIF_O_FIX_GAIN_PA(i)                                                    (52)
#define FEC_WTPC_CUIF_O_FIX_GAIN_APC_VM(i)                                                (53)
#define FEC_WTPC_CUIF_O_FIX_GAIN_PGA(i)                                                   (54)
#define FEC_WTPC_CUIF_O_FIX_GAIN_GBB(i)                                                   (55)
#define FEC_WTPC_CUIF_O_FIX_GAIN_NORM(i)                                                  (56)
#define FEC_WTPC_CUIF_O_FIX_GAIN_L1_DFE(i)                                                (57)
#define FEC_WTPC_CUIF_O_PRACH_L1_DPCHGAIN(i)                                              (64)
#define FEC_WTPC_CUIF_O_PRACH_L1_PTAR1(i)                                                 (65)
#define FEC_WTPC_CUIF_O_PRACH_L1_PTAR2(i)                                                 (66)
#define FEC_WTPC_CUIF_O_PRACH_TXCRP_NORM_PRE(i)                                           (67)
#define FEC_WTPC_CUIF_O_PRACH_TXCRP_NORM_MSG(i)                                           (68)
#define FEC_WTPC_CUIF_O_PRACH_L1_ET_DPD_DATA_n(i)                                         (69 + (i))
#define FEC_WTPC_CUIF_O_SW_L1_TPC_PTAR(i)                                                 (84)
#define FEC_WTPC_CUIF_O_SW_EN_CONTROL(i)                                                  (85)
#define FEC_WTPC_CUIF_O_SW_L1_TPC_PPEAK(i)                                                (86)
#define FEC_WTPC_CUIF_O_SW_CRP_BETA_HA(i)                                                 (87)
#define FEC_WTPC_CUIF_O_SW_RAKE(i)                                                        (88)
#define FEC_WTPC_CUIF_O_SW_GC_CONTROL(i)                                                  (89)
#define FEC_WTPC_CUIF_O_SW_TXK_DDPC_0(i)                                                  (90)
#define FEC_WTPC_CUIF_O_SW_TXK_DDPC_1(i)                                                  (91)
#define FEC_WTPC_CUIF_O_SW_L1_ET_DPD_DATA_n(i)                                            (92)
#define FEC_WTPC_CUIF_O_SW_TXCRP_NORM_P(i)                                                (93)
#define FEC_WTPC_CUIF_O_OFF_L1_PA(i)                                                      (104)
#define FEC_WTPC_CUIF_O_OFF_L1_PGA(i)                                                     (105)
#define FEC_WTPC_CUIF_O_OFF_L1_GTX_BB(i)                                                  (106)
#define FEC_WTPC_CUIF_O_OFF_L1_ET_DPD_DATA(i)                                             (107)
#define FEC_WTPC_CUIF_O_FRAME_TPC_SLOT0_Cn(i)                                             (112)
#define FEC_WTPC_CUIF_O_FRAME_TPC_SLOT1_Cn(i)                                             (113)
#define FEC_WTPC_CUIF_O_FRAME_TPC_BETAUD_MIN(i)                                           (114)
#define FEC_WTPC_CUIF_O_FRAME_TPC_CPC_ENABLE(i)                                           (115)
#define FEC_WTPC_CUIF_O_FRAME_TPC_UPC_SLOTEN_C0(i)                                        (116)
#define FEC_WTPC_CUIF_O_FRAME_TPC_PAR_Cn(i)                                               (117)
#define FEC_WTPC_CUIF_O_FRAME_TPC_DAC_TAR_DBn(i)                                          (118 + (i))
#define FEC_WTPC_CUIF_O_FRAME_TPC_PSEUDO_TPCIN(i)                                         (121)
#define FEC_WTPC_CUIF_O_FRAME_TPC_ASPOW(i)                                                (122)
#define FEC_WTPC_CUIF_O_FRAME_TPC_POWNET(i)                                               (123)
#define FEC_WTPC_CUIF_O_FRAME_TPC_RPILOT(i)                                               (124)
#define FEC_WTPC_CUIF_O_FRAME_TPC_DPDCH_CNFGEN(i)                                         (125)
#define FEC_WTPC_CUIF_O_FRAME_TPC_DPCHGAIN_n(i)                                           (126)
#define FEC_WTPC_CUIF_O_FRAME_ATX_STATIC_INPUT0(i)                                        (132)
#define FEC_WTPC_CUIF_O_FRAME_ATX_STATIC_INPUT1(i)                                        (133)
#define FEC_WTPC_CUIF_O_FRAME_ATX_DYNAMIC_INPUT0(i)                                       (134)
#define FEC_WTPC_CUIF_O_FRAME_TXK_INPUT0_0(i)                                             (135)
#define FEC_WTPC_CUIF_O_SFRM_TPC_UBETAUCn(i)                                              (136 + (i))
#define FEC_WTPC_CUIF_O_SFRM_TPC_UBETAUD_m_SF_k(i)                                        (141 + (i))
#define FEC_WTPC_CUIF_O_SFRM_TPC_UCHENn(i)                                                (161 + (i))
#define FEC_WTPC_CUIF_O_SLT_TPC_CPC_SLOT0_Cn(i)                                           (209)
#define FEC_WTPC_CUIF_O_SLT_TPC_CPC_SLOT1_Cn(i)                                           (210)
#define FEC_WTPC_CUIF_O_SLT_TPC_CPC_SLOT_EN_Cn(i)                                         (211)
#define FEC_WTPC_CUIF_O_PCFE1_INPUT0_P(i)                                                 (212)
#define FEC_WTPC_CUIF_O_PCFE1_INPUT1_P(i)                                                 (213)
#define FEC_WTPC_CUIF_O_PCFE1_INPUT0_Q(i)                                                 (214)
#define FEC_WTPC_CUIF_O_PCFE1_INPUT1_Q(i)                                                 (215)
#define FEC_WTPC_CUIF_O_ATX_S_INPUT0(i)                                                   (216)
#define FEC_WTPC_CUIF_O_CALCULATE_SLOT(i)                                                 (217)
#define FEC_WTPC_CUIF_O_INI_TPC_RAT_TYPE(i)                                               (288)
#define FEC_WTPC_CUIF_O_INI_TPC_MODE(i)                                                   (289)
#define FEC_WTPC_CUIF_O_INI_TPC_PINI(i)                                                   (290)
#define FEC_WTPC_CUIF_O_INI_TPC_DCOMP(i)                                                  (291)
#define FEC_WTPC_CUIF_O_INI_TPC_MPRCOEFn(i)                                               (292 + (i))
#define FEC_WTPC_CUIF_O_INI_ATX_STATIC_INPUT0(i)                                          (302)
#define FEC_WTPC_CUIF_O_INI_ATX_STATIC_INPUT1(i)                                          (303)
#define FEC_WTPC_CUIF_O_INI_ATX_STATIC_INPUT2(i)                                          (304)
#define FEC_WTPC_CUIF_O_INI_ATX_STATIC_INPUT3(i)                                          (305)
#define FEC_WTPC_CUIF_O_INI_ATX_STATIC_INPUT4(i)                                          (306)
#define FEC_WTPC_CUIF_O_INI_ATX_STATIC_INPUT5(i)                                          (307)
#define FEC_WTPC_CUIF_O_INI_ATX_STATIC_INPUT6(i)                                          (308)
#define FEC_WTPC_CUIF_O_INI_ATX_DYNAMIC_INPUT0_0(i)                                       (309)
#define FEC_WTPC_CUIF_O_INI_ATX_DYNAMIC_INPUT0_1(i)                                       (310)
#define FEC_WTPC_CUIF_O_INI_ATX_DYNAMIC_INPUT0(i)                                         (311)
#define FEC_WTPC_CUIF_O_INI_PCFE1_INPUT0_P(i)                                             (312)
#define FEC_WTPC_CUIF_O_INI_PCFE1_INPUT0_Q(i)                                             (313)
#define FEC_WTPC_CUIF_O_INI_DDPC_INPUT_GROUP0(i)                                          (314)
#define FEC_WTPC_CUIF_O_INI_DDPC_INPUT_GROUP1(i)                                          (315)
#define FEC_WTPC_CUIF_O_INI_DDPC_INPUT_GROUP2(i)                                          (316)
#define FEC_WTPC_CUIF_O_INI_ILPC_INPUT0(i)                                                (317)
#define FEC_WTPC_CUIF_O_INI_ILPC_INPUT1(i)                                                (318)
#define FEC_WTPC_CUIF_O_INI_RFIC_CS_INPUT0_0(i)                                           (319)
#define FEC_WTPC_CUIF_O_INI_MIPI_LENGTH_INPUT0_0(i)                                       (320)
#define FEC_WTPC_CUIF_O_INI_MIPI_LENGTH_INPUT1_0(i)                                       (321)
#define FEC_WTPC_CUIF_O_INI_PGA_LENGTH_INPUT0_0(i)                                        (322)
#define FEC_WTPC_CUIF_O_DPD_RF_CW_MASK_INPUT0_0(i)                                        (323)
#define FEC_WTPC_CUIF_O_DET_RF_CW_MASK_INPUT0_0(i)                                        (324)
#define FEC_WTPC_CUIF_O_RPT_PRACH_STA(i)                                                  (328)
#define FEC_WTPC_CUIF_O_RPT_UBETAUD_Rm_k(i)                                               (329 + (i))
#define FEC_WTPC_CUIF_O_RPT_HBETAn(i)                                                     (341 + (i))
#define FEC_WTPC_CUIF_O_RPT_PTAR_STA(i)                                                   (344 + (i))
#define FEC_WTPC_CUIF_O_RPT_PTAR_REAL_STA(i)                                              (347 + (i))
#define FEC_WTPC_CUIF_O_RPT_ADDSC_STA0n(i)                                                (350 + (i))
#define FEC_WTPC_CUIF_O_RPT_TPC_CMD_FAKE_C0(i)                                            (353)
#define FEC_WTPC_CUIF_O_RPT_PDPCCH_COMP_STAn(i)                                           (354 + (i))
#define FEC_WTPC_CUIF_O_RPT_DDPC_RPT_P(i)                                                 (357 + (i))
#define FEC_WTPC_CUIF_O_RPT_DDPC_RPT_Q(i)                                                 (360 + (i))
#define FEC_WTPC_CUIF_O_RPT_UPC_EN_STAn(i)                                                (363 + (i))
#define FEC_WTPC_CUIF_O_DPD_LUT_NORM_FACTOR_0(i)                                          (366 + (i))
#define FEC_WTPC_CUIF_O_INJECT_STRING_EN(i)                                               (375 + (i))
#define FEC_WTPC_CUIF_O_INJECT_ASSERT_DUMP(i)                                             (376 + (i))
#define FEC_WTPC_CUIF_O_INJECT_SET_GAIN(i)                                                (377 + (i))
#define FEC_WTPC_CUIF_O_INJECT_FORCE_CONTROL(i)                                           (378 + (i))
#define FEC_WTPC_CUIF_O_MPR_SETTING_FOR_R6(i)                                             (379 + (i))
// ---------- UPC1_OFFSET bit-field ----------
#define FEC_WTPC_CUIF_P_UPC1_OFFSET_UPC1_OFFSET_FR                                        (0)
#define FEC_WTPC_CUIF_L_UPC1_OFFSET_UPC1_OFFSET_FR                                        (13)
#define FEC_WTPC_CUIF_M_UPC1_OFFSET_UPC1_OFFSET_FR                                        (0x00001FFF)

// ---------- UPC2_OFFSET bit-field ----------
#define FEC_WTPC_CUIF_P_UPC2_OFFSET_UPC2_OFFSET_FR                                        (0)
#define FEC_WTPC_CUIF_L_UPC2_OFFSET_UPC2_OFFSET_FR                                        (13)
#define FEC_WTPC_CUIF_M_UPC2_OFFSET_UPC2_OFFSET_FR                                        (0x00001FFF)

// ---------- PCFE2_OFFSET bit-field ----------
#define FEC_WTPC_CUIF_P_PCFE2_OFFSET_PCFE2_OFFSET_FR                                      (0)
#define FEC_WTPC_CUIF_L_PCFE2_OFFSET_PCFE2_OFFSET_FR                                      (13)
#define FEC_WTPC_CUIF_M_PCFE2_OFFSET_PCFE2_OFFSET_FR                                      (0x00001FFF)

// ---------- PDP1_PSP1_OFFSET bit-field ----------
#define FEC_WTPC_CUIF_P_PDP1_PSP1_OFFSET_no_use_PDP1_PSP1_OFFSET_SR                       (0)
#define FEC_WTPC_CUIF_L_PDP1_PSP1_OFFSET_no_use_PDP1_PSP1_OFFSET_SR                       (13)
#define FEC_WTPC_CUIF_M_PDP1_PSP1_OFFSET_no_use_PDP1_PSP1_OFFSET_SR                       (0x00001FFF)

// ---------- PDP2_PSP1_OFFSET bit-field ----------
#define FEC_WTPC_CUIF_P_PDP2_PSP1_OFFSET_no_use_PDP2_PSP1_OFFSET_FR                       (0)
#define FEC_WTPC_CUIF_L_PDP2_PSP1_OFFSET_no_use_PDP2_PSP1_OFFSET_FR                       (13)
#define FEC_WTPC_CUIF_M_PDP2_PSP1_OFFSET_no_use_PDP2_PSP1_OFFSET_FR                       (0x00001FFF)

// ---------- PDQ1_PSQ1_OFFSET bit-field ----------
#define FEC_WTPC_CUIF_P_PDQ1_PSQ1_OFFSET_no_use_PDQ1_PSQ1_OFFSET_FR                       (0)
#define FEC_WTPC_CUIF_L_PDQ1_PSQ1_OFFSET_no_use_PDQ1_PSQ1_OFFSET_FR                       (13)
#define FEC_WTPC_CUIF_M_PDQ1_PSQ1_OFFSET_no_use_PDQ1_PSQ1_OFFSET_FR                       (0x00001FFF)

// ---------- PDQ2_PSQ1_OFFSET bit-field ----------
#define FEC_WTPC_CUIF_P_PDQ2_PSQ1_OFFSET_no_use_PDQ2_PSQ1_OFFSET_FR                       (0)
#define FEC_WTPC_CUIF_L_PDQ2_PSQ1_OFFSET_no_use_PDQ2_PSQ1_OFFSET_FR                       (13)
#define FEC_WTPC_CUIF_M_PDQ2_PSQ1_OFFSET_no_use_PDQ2_PSQ1_OFFSET_FR                       (0x00001FFF)

// ---------- PSP1_SLOTEN bit-field ----------
#define FEC_WTPC_CUIF_P_PSP1_SLOTEN_no_use_PSP1_SLOT_EN_FR                                (0)
#define FEC_WTPC_CUIF_L_PSP1_SLOTEN_no_use_PSP1_SLOT_EN_FR                                (15)
#define FEC_WTPC_CUIF_M_PSP1_SLOTEN_no_use_PSP1_SLOT_EN_FR                                (0x00007FFF)

// ---------- HSDPCCH_SLOT_EN bit-field ----------
#define FEC_WTPC_CUIF_P_HSDPCCH_SLOT_EN_HSDPCCH_SLOT_EN_FR                                (0)
#define FEC_WTPC_CUIF_L_HSDPCCH_SLOT_EN_HSDPCCH_SLOT_EN_FR                                (15)
#define FEC_WTPC_CUIF_M_HSDPCCH_SLOT_EN_HSDPCCH_SLOT_EN_FR                                (0x00007FFF)

// ---------- HSDPCCH_SYM_OFFSET bit-field ----------
#define FEC_WTPC_CUIF_P_HSDPCCH_SYM_OFFSET_HSDPCCH_SYM_OFFSET                             (0)
#define FEC_WTPC_CUIF_L_HSDPCCH_SYM_OFFSET_HSDPCCH_SYM_OFFSET                             (4)
#define FEC_WTPC_CUIF_M_HSDPCCH_SYM_OFFSET_HSDPCCH_SYM_OFFSET                             (0x0000000F)

// ---------- PS_CON bit-field ----------
#define FEC_WTPC_CUIF_P_PS_CON_MIPI_PA_EN                                                 (12)
#define FEC_WTPC_CUIF_L_PS_CON_MIPI_PA_EN                                                 (1)
#define FEC_WTPC_CUIF_M_PS_CON_MIPI_PA_EN                                                 (0x00001000)
#define FEC_WTPC_CUIF_P_PS_CON_MIPI_ETM_EN                                                (11)
#define FEC_WTPC_CUIF_L_PS_CON_MIPI_ETM_EN                                                (1)
#define FEC_WTPC_CUIF_M_PS_CON_MIPI_ETM_EN                                                (0x00000800)
#define FEC_WTPC_CUIF_P_PS_CON_BSI_DC2DC_EN                                               (10)
#define FEC_WTPC_CUIF_L_PS_CON_BSI_DC2DC_EN                                               (1)
#define FEC_WTPC_CUIF_M_PS_CON_BSI_DC2DC_EN                                               (0x00000400)
#define FEC_WTPC_CUIF_P_PS_CON_BSI_PGA_EN                                                 (9)
#define FEC_WTPC_CUIF_L_PS_CON_BSI_PGA_EN                                                 (1)
#define FEC_WTPC_CUIF_M_PS_CON_BSI_PGA_EN                                                 (0x00000200)
#define FEC_WTPC_CUIF_P_PS_CON_BSI_DET_EN                                                 (8)
#define FEC_WTPC_CUIF_L_PS_CON_BSI_DET_EN                                                 (1)
#define FEC_WTPC_CUIF_M_PS_CON_BSI_DET_EN                                                 (0x00000100)
#define FEC_WTPC_CUIF_P_PS_CON_VM_EN                                                      (7)
#define FEC_WTPC_CUIF_L_PS_CON_VM_EN                                                      (1)
#define FEC_WTPC_CUIF_M_PS_CON_VM_EN                                                      (0x00000080)
#define FEC_WTPC_CUIF_P_PS_CON_TXDFE_BB_EN                                                (6)
#define FEC_WTPC_CUIF_L_PS_CON_TXDFE_BB_EN                                                (1)
#define FEC_WTPC_CUIF_M_PS_CON_TXDFE_BB_EN                                                (0x00000040)
#define FEC_WTPC_CUIF_P_PS_CON_TXDFE_RF_EN                                                (5)
#define FEC_WTPC_CUIF_L_PS_CON_TXDFE_RF_EN                                                (1)
#define FEC_WTPC_CUIF_M_PS_CON_TXDFE_RF_EN                                                (0x00000020)
#define FEC_WTPC_CUIF_P_PS_CON_TXET_EN                                                    (4)
#define FEC_WTPC_CUIF_L_PS_CON_TXET_EN                                                    (1)
#define FEC_WTPC_CUIF_M_PS_CON_TXET_EN                                                    (0x00000010)
#define FEC_WTPC_CUIF_P_PS_CON_TXK_ADC_ON_EN                                              (3)
#define FEC_WTPC_CUIF_L_PS_CON_TXK_ADC_ON_EN                                              (1)
#define FEC_WTPC_CUIF_M_PS_CON_TXK_ADC_ON_EN                                              (0x00000008)
#define FEC_WTPC_CUIF_P_PS_CON_TXK_ADC_OFF_EN                                             (2)
#define FEC_WTPC_CUIF_L_PS_CON_TXK_ADC_OFF_EN                                             (1)
#define FEC_WTPC_CUIF_M_PS_CON_TXK_ADC_OFF_EN                                             (0x00000004)
#define FEC_WTPC_CUIF_P_PS_CON_TXK_DDPC_EN                                                (1)
#define FEC_WTPC_CUIF_L_PS_CON_TXK_DDPC_EN                                                (1)
#define FEC_WTPC_CUIF_M_PS_CON_TXK_DDPC_EN                                                (0x00000002)
#define FEC_WTPC_CUIF_P_PS_CON_APC_EN                                                     (0)
#define FEC_WTPC_CUIF_L_PS_CON_APC_EN                                                     (1)
#define FEC_WTPC_CUIF_M_PS_CON_APC_EN                                                     (0x00000001)

// ---------- PSP1_OFFSETn bit-field ----------
#define FEC_WTPC_CUIF_P_PSP1_OFFSETn_PSP1_OFFSETn_FR                                      (0)
#define FEC_WTPC_CUIF_L_PSP1_OFFSETn_PSP1_OFFSETn_FR                                      (12)
#define FEC_WTPC_CUIF_M_PSP1_OFFSETn_PSP1_OFFSETn_FR                                      (0x00000FFF)

// ---------- PSP2_OFFSET bit-field ----------
#define FEC_WTPC_CUIF_P_PSP2_OFFSET_PSP2_OFFSET_FR                                        (0)
#define FEC_WTPC_CUIF_L_PSP2_OFFSET_PSP2_OFFSET_FR                                        (12)
#define FEC_WTPC_CUIF_M_PSP2_OFFSET_PSP2_OFFSET_FR                                        (0x00000FFF)

// ---------- PSQ1_OFFSET bit-field ----------
#define FEC_WTPC_CUIF_P_PSQ1_OFFSET_PSQ1_OFFSET_FR                                        (0)
#define FEC_WTPC_CUIF_L_PSQ1_OFFSET_PSQ1_OFFSET_FR                                        (12)
#define FEC_WTPC_CUIF_M_PSQ1_OFFSET_PSQ1_OFFSET_FR                                        (0x00000FFF)

// ---------- PSQ2_OFFSET bit-field ----------
#define FEC_WTPC_CUIF_P_PSQ2_OFFSET_PSQ2_OFFSET_FR                                        (0)
#define FEC_WTPC_CUIF_L_PSQ2_OFFSET_PSQ2_OFFSET_FR                                        (12)
#define FEC_WTPC_CUIF_M_PSQ2_OFFSET_PSQ2_OFFSET_FR                                        (0x00000FFF)

// ---------- PS_LO_CON1 bit-field ----------
#define FEC_WTPC_CUIF_P_PS_LO_CON1_MIPI_PA_OFFSET                                         (24)
#define FEC_WTPC_CUIF_L_PS_LO_CON1_MIPI_PA_OFFSET                                         (8)
#define FEC_WTPC_CUIF_M_PS_LO_CON1_MIPI_PA_OFFSET                                         (0xFF000000)
#define FEC_WTPC_CUIF_P_PS_LO_CON1_MIPI_ETM_OFFSET                                        (16)
#define FEC_WTPC_CUIF_L_PS_LO_CON1_MIPI_ETM_OFFSET                                        (8)
#define FEC_WTPC_CUIF_M_PS_LO_CON1_MIPI_ETM_OFFSET                                        (0x00FF0000)
#define FEC_WTPC_CUIF_P_PS_LO_CON1_BSI_DC2DC_OFFSET                                       (8)
#define FEC_WTPC_CUIF_L_PS_LO_CON1_BSI_DC2DC_OFFSET                                       (8)
#define FEC_WTPC_CUIF_M_PS_LO_CON1_BSI_DC2DC_OFFSET                                       (0x0000FF00)
#define FEC_WTPC_CUIF_P_PS_LO_CON1_APC_OFFSET                                             (0)
#define FEC_WTPC_CUIF_L_PS_LO_CON1_APC_OFFSET                                             (8)
#define FEC_WTPC_CUIF_M_PS_LO_CON1_APC_OFFSET                                             (0x000000FF)

// ---------- PS_LO_CON2 bit-field ----------
#define FEC_WTPC_CUIF_P_PS_LO_CON2_VM_OFFSET                                              (8)
#define FEC_WTPC_CUIF_L_PS_LO_CON2_VM_OFFSET                                              (8)
#define FEC_WTPC_CUIF_M_PS_LO_CON2_VM_OFFSET                                              (0x0000FF00)
#define FEC_WTPC_CUIF_P_PS_LO_CON2_TXET_OFFSET                                            (0)
#define FEC_WTPC_CUIF_L_PS_LO_CON2_TXET_OFFSET                                            (8)
#define FEC_WTPC_CUIF_M_PS_LO_CON2_TXET_OFFSET                                            (0x000000FF)

// ---------- PS_LO_CON3 bit-field ----------
#define FEC_WTPC_CUIF_P_PS_LO_CON3_BSI_PGA_OFFSET                                         (24)
#define FEC_WTPC_CUIF_L_PS_LO_CON3_BSI_PGA_OFFSET                                         (8)
#define FEC_WTPC_CUIF_M_PS_LO_CON3_BSI_PGA_OFFSET                                         (0xFF000000)
#define FEC_WTPC_CUIF_P_PS_LO_CON3_BSI_DET_OFFSET                                         (16)
#define FEC_WTPC_CUIF_L_PS_LO_CON3_BSI_DET_OFFSET                                         (8)
#define FEC_WTPC_CUIF_M_PS_LO_CON3_BSI_DET_OFFSET                                         (0x00FF0000)
#define FEC_WTPC_CUIF_P_PS_LO_CON3_TXDFE_BB_OFFSET                                        (8)
#define FEC_WTPC_CUIF_L_PS_LO_CON3_TXDFE_BB_OFFSET                                        (8)
#define FEC_WTPC_CUIF_M_PS_LO_CON3_TXDFE_BB_OFFSET                                        (0x0000FF00)
#define FEC_WTPC_CUIF_P_PS_LO_CON3_TXDFE_RF_OFFSET                                        (0)
#define FEC_WTPC_CUIF_L_PS_LO_CON3_TXDFE_RF_OFFSET                                        (8)
#define FEC_WTPC_CUIF_M_PS_LO_CON3_TXDFE_RF_OFFSET                                        (0x000000FF)

// ---------- PS_LO_CON4 bit-field ----------
#define FEC_WTPC_CUIF_P_PS_LO_CON4_GC_PDX_OFFSET                                          (24)
#define FEC_WTPC_CUIF_L_PS_LO_CON4_GC_PDX_OFFSET                                          (8)
#define FEC_WTPC_CUIF_M_PS_LO_CON4_GC_PDX_OFFSET                                          (0xFF000000)
#define FEC_WTPC_CUIF_P_PS_LO_CON4_TXK_ADC_ON_OFFSET                                      (16)
#define FEC_WTPC_CUIF_L_PS_LO_CON4_TXK_ADC_ON_OFFSET                                      (8)
#define FEC_WTPC_CUIF_M_PS_LO_CON4_TXK_ADC_ON_OFFSET                                      (0x00FF0000)
#define FEC_WTPC_CUIF_P_PS_LO_CON4_TXK_ADC_OFF_OFFSET                                     (8)
#define FEC_WTPC_CUIF_L_PS_LO_CON4_TXK_ADC_OFF_OFFSET                                     (8)
#define FEC_WTPC_CUIF_M_PS_LO_CON4_TXK_ADC_OFF_OFFSET                                     (0x0000FF00)
#define FEC_WTPC_CUIF_P_PS_LO_CON4_TXK_DDPC_OFFSET                                        (0)
#define FEC_WTPC_CUIF_L_PS_LO_CON4_TXK_DDPC_OFFSET                                        (8)
#define FEC_WTPC_CUIF_M_PS_LO_CON4_TXK_DDPC_OFFSET                                        (0x000000FF)

// ---------- PRACH_STATUS bit-field ----------
#define FEC_WTPC_CUIF_P_PRACH_STATUS_PRACH_COMMON_EDCH                                    (4)
#define FEC_WTPC_CUIF_L_PRACH_STATUS_PRACH_COMMON_EDCH                                    (2)
#define FEC_WTPC_CUIF_M_PRACH_STATUS_PRACH_COMMON_EDCH                                    (0x00000030)
#define FEC_WTPC_CUIF_P_PRACH_STATUS_PRACH_STATUS                                         (0)
#define FEC_WTPC_CUIF_L_PRACH_STATUS_PRACH_STATUS                                         (2)
#define FEC_WTPC_CUIF_M_PRACH_STATUS_PRACH_STATUS                                         (0x00000003)

// ---------- UPC_RACH_ST_RF bit-field ----------
#define FEC_WTPC_CUIF_P_UPC_RACH_ST_RF_RACH_ST_SLOT                                       (12)
#define FEC_WTPC_CUIF_L_UPC_RACH_ST_RF_RACH_ST_SLOT                                       (4)
#define FEC_WTPC_CUIF_M_UPC_RACH_ST_RF_RACH_ST_SLOT                                       (0x0000F000)
#define FEC_WTPC_CUIF_P_UPC_RACH_ST_RF_RACH_ST_CHIP                                       (0)
#define FEC_WTPC_CUIF_L_UPC_RACH_ST_RF_RACH_ST_CHIP                                       (12)
#define FEC_WTPC_CUIF_M_UPC_RACH_ST_RF_RACH_ST_CHIP                                       (0x00000FFF)

// ---------- UPC_RACH_SP_RF bit-field ----------
#define FEC_WTPC_CUIF_P_UPC_RACH_SP_RF_RACH_SP_SLOT                                       (12)
#define FEC_WTPC_CUIF_L_UPC_RACH_SP_RF_RACH_SP_SLOT                                       (4)
#define FEC_WTPC_CUIF_M_UPC_RACH_SP_RF_RACH_SP_SLOT                                       (0x0000F000)
#define FEC_WTPC_CUIF_P_UPC_RACH_SP_RF_RACH_SP_CHIP                                       (0)
#define FEC_WTPC_CUIF_L_UPC_RACH_SP_RF_RACH_SP_CHIP                                       (12)
#define FEC_WTPC_CUIF_M_UPC_RACH_SP_RF_RACH_SP_CHIP                                       (0x00000FFF)

// ---------- UPC_RACH_MSG_ST_RF bit-field ----------
#define FEC_WTPC_CUIF_P_UPC_RACH_MSG_ST_RF_MSG_ST_SLOT                                    (12)
#define FEC_WTPC_CUIF_L_UPC_RACH_MSG_ST_RF_MSG_ST_SLOT                                    (4)
#define FEC_WTPC_CUIF_M_UPC_RACH_MSG_ST_RF_MSG_ST_SLOT                                    (0x0000F000)
#define FEC_WTPC_CUIF_P_UPC_RACH_MSG_ST_RF_MSG_ST_CHIP                                    (0)
#define FEC_WTPC_CUIF_L_UPC_RACH_MSG_ST_RF_MSG_ST_CHIP                                    (12)
#define FEC_WTPC_CUIF_M_UPC_RACH_MSG_ST_RF_MSG_ST_CHIP                                    (0x00000FFF)

// ---------- UPC_RACH_MSG_SP_RF bit-field ----------
#define FEC_WTPC_CUIF_P_UPC_RACH_MSG_SP_RF_MSG_SP_SLOT                                    (12)
#define FEC_WTPC_CUIF_L_UPC_RACH_MSG_SP_RF_MSG_SP_SLOT                                    (4)
#define FEC_WTPC_CUIF_M_UPC_RACH_MSG_SP_RF_MSG_SP_SLOT                                    (0x0000F000)
#define FEC_WTPC_CUIF_P_UPC_RACH_MSG_SP_RF_MSG_SP_CHIP                                    (0)
#define FEC_WTPC_CUIF_L_UPC_RACH_MSG_SP_RF_MSG_SP_CHIP                                    (12)
#define FEC_WTPC_CUIF_M_UPC_RACH_MSG_SP_RF_MSG_SP_CHIP                                    (0x00000FFF)

// ---------- UPC_RACH_PRE_ST_RF bit-field ----------
#define FEC_WTPC_CUIF_P_UPC_RACH_PRE_ST_RF_PRE_ST_SLOT                                    (12)
#define FEC_WTPC_CUIF_L_UPC_RACH_PRE_ST_RF_PRE_ST_SLOT                                    (4)
#define FEC_WTPC_CUIF_M_UPC_RACH_PRE_ST_RF_PRE_ST_SLOT                                    (0x0000F000)
#define FEC_WTPC_CUIF_P_UPC_RACH_PRE_ST_RF_PRE_ST_CHIP                                    (0)
#define FEC_WTPC_CUIF_L_UPC_RACH_PRE_ST_RF_PRE_ST_CHIP                                    (12)
#define FEC_WTPC_CUIF_M_UPC_RACH_PRE_ST_RF_PRE_ST_CHIP                                    (0x00000FFF)

// ---------- UPC_RACH_PRE_SP_RF bit-field ----------
#define FEC_WTPC_CUIF_P_UPC_RACH_PRE_SP_RF_PRE_SP_SLOT                                    (12)
#define FEC_WTPC_CUIF_L_UPC_RACH_PRE_SP_RF_PRE_SP_SLOT                                    (4)
#define FEC_WTPC_CUIF_M_UPC_RACH_PRE_SP_RF_PRE_SP_SLOT                                    (0x0000F000)
#define FEC_WTPC_CUIF_P_UPC_RACH_PRE_SP_RF_PRE_SP_CHIP                                    (0)
#define FEC_WTPC_CUIF_L_UPC_RACH_PRE_SP_RF_PRE_SP_CHIP                                    (12)
#define FEC_WTPC_CUIF_M_UPC_RACH_PRE_SP_RF_PRE_SP_CHIP                                    (0x00000FFF)

// ---------- FREQ_L1D bit-field ----------
#define FEC_WTPC_CUIF_P_FREQ_L1D_BAND                                                     (16)
#define FEC_WTPC_CUIF_L_FREQ_L1D_BAND                                                     (8)
#define FEC_WTPC_CUIF_M_FREQ_L1D_BAND                                                     (0x00FF0000)
#define FEC_WTPC_CUIF_P_FREQ_L1D_UARFCN                                                   (0)
#define FEC_WTPC_CUIF_L_FREQ_L1D_UARFCN                                                   (16)
#define FEC_WTPC_CUIF_M_FREQ_L1D_UARFCN                                                   (0x0000FFFF)

// ---------- FREQ_L1RFD bit-field ----------
#define FEC_WTPC_CUIF_P_FREQ_L1RFD_PA_TABLE_CHANGE_EN                  (24)
#define FEC_WTPC_CUIF_L_FREQ_L1RFD_PA_TABLE_CHANGE_EN                   (1)
#define FEC_WTPC_CUIF_M_FREQ_L1RFD_PA_TABLE_CHANGE_EN                 (0x01000000)
#define FEC_WTPC_CUIF_P_FREQ_L1RFD_BAND                                                   (16)
#define FEC_WTPC_CUIF_L_FREQ_L1RFD_BAND                                                   (8)
#define FEC_WTPC_CUIF_M_FREQ_L1RFD_BAND                                                   (0x00FF0000)
#define FEC_WTPC_CUIF_P_FREQ_L1RFD_UARFCN                                                 (0)
#define FEC_WTPC_CUIF_L_FREQ_L1RFD_UARFCN                                                 (16)
#define FEC_WTPC_CUIF_M_FREQ_L1RFD_UARFCN                                                 (0x0000FFFF)

// ---------- TMP_L1RFD bit-field ----------
#define FEC_WTPC_CUIF_P_TMP_L1RFD_is_R99_only                                             (4)
#define FEC_WTPC_CUIF_L_TMP_L1RFD_is_R99_only                                             (1)
#define FEC_WTPC_CUIF_M_TMP_L1RFD_is_R99_only                                             (0x00000010)
#define FEC_WTPC_CUIF_P_TMP_L1RFD_TEMPERATURE_IDX                                         (0)
#define FEC_WTPC_CUIF_L_TMP_L1RFD_TEMPERATURE_IDX                                         (4)
#define FEC_WTPC_CUIF_M_TMP_L1RFD_TEMPERATURE_IDX                                         (0x0000000F)

// ---------- CUIF_READY bit-field ----------
#define FEC_WTPC_CUIF_P_CUIF_READY_no_use_L1RFD_READY                                     (16)
#define FEC_WTPC_CUIF_L_CUIF_READY_no_use_L1RFD_READY                                     (1)
#define FEC_WTPC_CUIF_M_CUIF_READY_no_use_L1RFD_READY                                     (0x00010000)
#define FEC_WTPC_CUIF_P_CUIF_READY_L1D_READY                                              (0)
#define FEC_WTPC_CUIF_L_CUIF_READY_L1D_READY                                              (1)
#define FEC_WTPC_CUIF_M_CUIF_READY_L1D_READY                                              (0x00000001)

// ---------- L1_DDPC_SET0 bit-field ----------
#define FEC_WTPC_CUIF_P_L1_DDPC_SET0_DDPC_DEC_IDX_i                                       (4)
#define FEC_WTPC_CUIF_L_L1_DDPC_SET0_DDPC_DEC_IDX_i                                       (2)
#define FEC_WTPC_CUIF_M_L1_DDPC_SET0_DDPC_DEC_IDX_i                                       (0x00000030)
#define FEC_WTPC_CUIF_P_L1_DDPC_SET0_DDPC_LEAD_BIT_i                                      (0)
#define FEC_WTPC_CUIF_L_L1_DDPC_SET0_DDPC_LEAD_BIT_i                                      (4)
#define FEC_WTPC_CUIF_M_L1_DDPC_SET0_DDPC_LEAD_BIT_i                                      (0x0000000F)

// ---------- L1_DDPC_SET1 bit-field ----------
#define FEC_WTPC_CUIF_P_L1_DDPC_SET1_DDPC_WAIT_SAMPLE_i                                   (16)
#define FEC_WTPC_CUIF_L_L1_DDPC_SET1_DDPC_WAIT_SAMPLE_i                                   (16)
#define FEC_WTPC_CUIF_M_L1_DDPC_SET1_DDPC_WAIT_SAMPLE_i                                   (0xFFFF0000)
#define FEC_WTPC_CUIF_P_L1_DDPC_SET1_DDPC_MEAS_SAMPLE_i                                   (0)
#define FEC_WTPC_CUIF_L_L1_DDPC_SET1_DDPC_MEAS_SAMPLE_i                                   (16)
#define FEC_WTPC_CUIF_M_L1_DDPC_SET1_DDPC_MEAS_SAMPLE_i                                   (0x0000FFFF)

// ---------- UCHEN_FRM bit-field ----------
#define FEC_WTPC_CUIF_P_UCHEN_FRM_UC_C1_FRM_EN                                            (17)
#define FEC_WTPC_CUIF_L_UCHEN_FRM_UC_C1_FRM_EN                                            (1)
#define FEC_WTPC_CUIF_M_UCHEN_FRM_UC_C1_FRM_EN                                            (0x00020000)
#define FEC_WTPC_CUIF_P_UCHEN_FRM_UC_C1_UTTI                                              (16)
#define FEC_WTPC_CUIF_L_UCHEN_FRM_UC_C1_UTTI                                              (1)
#define FEC_WTPC_CUIF_M_UCHEN_FRM_UC_C1_UTTI                                              (0x00010000)
#define FEC_WTPC_CUIF_P_UCHEN_FRM_UC_C0_FRM_EN                                            (1)
#define FEC_WTPC_CUIF_L_UCHEN_FRM_UC_C0_FRM_EN                                            (1)
#define FEC_WTPC_CUIF_M_UCHEN_FRM_UC_C0_FRM_EN                                            (0x00000002)
#define FEC_WTPC_CUIF_P_UCHEN_FRM_UC_C0_UTTI                                              (0)
#define FEC_WTPC_CUIF_L_UCHEN_FRM_UC_C0_UTTI                                              (1)
#define FEC_WTPC_CUIF_M_UCHEN_FRM_UC_C0_UTTI                                              (0x00000001)

// ---------- EMI_ADDR0 bit-field ----------
#define FEC_WTPC_CUIF_P_EMI_ADDR0_PA_CPL_LUT_addr                                         (0)
#define FEC_WTPC_CUIF_L_EMI_ADDR0_PA_CPL_LUT_addr                                         (32)
#define FEC_WTPC_CUIF_M_EMI_ADDR0_PA_CPL_LUT_addr                                         (0xFFFFFFFF)

// ---------- EMI_ADDR1 bit-field ----------
#define FEC_WTPC_CUIF_P_EMI_ADDR1_CFR_MCS_LUT_addr                                        (0)
#define FEC_WTPC_CUIF_L_EMI_ADDR1_CFR_MCS_LUT_addr                                        (32)
#define FEC_WTPC_CUIF_M_EMI_ADDR1_CFR_MCS_LUT_addr                                        (0xFFFFFFFF)

// ---------- EMI_ADDR2 bit-field ----------
#define FEC_WTPC_CUIF_P_EMI_ADDR2_PGA_LUT_addr                                            (0)
#define FEC_WTPC_CUIF_L_EMI_ADDR2_PGA_LUT_addr                                            (32)
#define FEC_WTPC_CUIF_M_EMI_ADDR2_PGA_LUT_addr                                            (0xFFFFFFFF)

// ---------- EMI_ADDR3 bit-field ----------
#define FEC_WTPC_CUIF_P_EMI_ADDR3_CW_LUT_addr                                             (0)
#define FEC_WTPC_CUIF_L_EMI_ADDR3_CW_LUT_addr                                             (32)
#define FEC_WTPC_CUIF_M_EMI_ADDR3_CW_LUT_addr                                             (0xFFFFFFFF)

// ---------- EMI_TABLE_SIZE0 bit-field ----------
#define FEC_WTPC_CUIF_P_EMI_TABLE_SIZE0_PA_CPL_LUT_size                                   (16)
#define FEC_WTPC_CUIF_L_EMI_TABLE_SIZE0_PA_CPL_LUT_size                                   (16)
#define FEC_WTPC_CUIF_M_EMI_TABLE_SIZE0_PA_CPL_LUT_size                                   (0xFFFF0000)
#define FEC_WTPC_CUIF_P_EMI_TABLE_SIZE0_CFR_MCS_LUT_size                                  (0)
#define FEC_WTPC_CUIF_L_EMI_TABLE_SIZE0_CFR_MCS_LUT_size                                  (16)
#define FEC_WTPC_CUIF_M_EMI_TABLE_SIZE0_CFR_MCS_LUT_size                                  (0x0000FFFF)

// ---------- EMI_TABLE_SIZE1 bit-field ----------
#define FEC_WTPC_CUIF_P_EMI_TABLE_SIZE1_PGA_LUT_size                                      (16)
#define FEC_WTPC_CUIF_L_EMI_TABLE_SIZE1_PGA_LUT_size                                      (16)
#define FEC_WTPC_CUIF_M_EMI_TABLE_SIZE1_PGA_LUT_size                                      (0xFFFF0000)
#define FEC_WTPC_CUIF_P_EMI_TABLE_SIZE1_CW_LUT_size                                       (0)
#define FEC_WTPC_CUIF_L_EMI_TABLE_SIZE1_CW_LUT_size                                       (16)
#define FEC_WTPC_CUIF_M_EMI_TABLE_SIZE1_CW_LUT_size                                       (0x0000FFFF)

// ---------- bypass_et bit-field ----------
#define FEC_WTPC_CUIF_P_bypass_et_L1_bypass_et                                            (0)
#define FEC_WTPC_CUIF_L_bypass_et_L1_bypass_et                                            (1)
#define FEC_WTPC_CUIF_M_bypass_et_L1_bypass_et                                            (0x00000001)

// ---------- bypass_dpd bit-field ----------
#define FEC_WTPC_CUIF_P_bypass_dpd_L1_bypass_dpd                                          (0)
#define FEC_WTPC_CUIF_L_bypass_dpd_L1_bypass_dpd                                          (1)
#define FEC_WTPC_CUIF_M_bypass_dpd_L1_bypass_dpd                                          (0x00000001)

// ---------- sync_ID bit-field ----------
#define FEC_WTPC_CUIF_P_sync_ID_frame_number                                              (16)
#define FEC_WTPC_CUIF_L_sync_ID_frame_number                                              (16)
#define FEC_WTPC_CUIF_M_sync_ID_frame_number                                              (0xFFFF0000)
#define FEC_WTPC_CUIF_P_sync_ID_slot                                                      (0)
#define FEC_WTPC_CUIF_L_sync_ID_slot                                                      (16)
#define FEC_WTPC_CUIF_M_sync_ID_slot                                                      (0x0000FFFF)

// ---------- WTX_BOOT_UP_STA bit-field ----------
#define FEC_WTPC_CUIF_P_WTX_BOOT_UP_STA_boot_up_init_done                                 (0)
#define FEC_WTPC_CUIF_L_WTX_BOOT_UP_STA_boot_up_init_done                                 (1)
#define FEC_WTPC_CUIF_M_WTX_BOOT_UP_STA_boot_up_init_done                                 (0x00000001)
#define FEC_WTPC_CUIF_P_PGA_SWITCH_CAL_in_calibration_flow                                (4)
#define FEC_WTPC_CUIF_L_PGA_SWITCH_CAL_in_calibration_flow                                (1)
#define FEC_WTPC_CUIF_M_PGA_SWITCH_CAL_in_calibration_flow                                (0x00000010)
#define FEC_WTPC_CUIF_P_PGA_SWITCH_CAL_pga_select_flag                                    (0)
#define FEC_WTPC_CUIF_L_PGA_SWITCH_CAL_pga_select_flag                                    (2)
#define FEC_WTPC_CUIF_M_PGA_SWITCH_CAL_pga_select_flag                                    (0x00000003)

// ---------- FIX_GAIN_PA bit-field ----------
#define FEC_WTPC_CUIF_P_FIX_GAIN_PA_op_mode                                               (16)
#define FEC_WTPC_CUIF_L_FIX_GAIN_PA_op_mode                                               (8)
#define FEC_WTPC_CUIF_M_FIX_GAIN_PA_op_mode                                               (0x00FF0000)
#define FEC_WTPC_CUIF_P_FIX_GAIN_PA_pa_mode                                               (8)
#define FEC_WTPC_CUIF_L_FIX_GAIN_PA_pa_mode                                               (8)
#define FEC_WTPC_CUIF_M_FIX_GAIN_PA_pa_mode                                               (0x0000FF00)
#define FEC_WTPC_CUIF_P_FIX_GAIN_PA_idx_PA                                                (0)
#define FEC_WTPC_CUIF_L_FIX_GAIN_PA_idx_PA                                                (8)
#define FEC_WTPC_CUIF_M_FIX_GAIN_PA_idx_PA                                                (0x000000FF)

// ---------- FIX_GAIN_APC_VM bit-field ----------
#define FEC_WTPC_CUIF_P_FIX_GAIN_APC_VM_apc_data                                          (8)
#define FEC_WTPC_CUIF_L_FIX_GAIN_APC_VM_apc_data                                          (16)
#define FEC_WTPC_CUIF_M_FIX_GAIN_APC_VM_apc_data                                          (0x00FFFF00)
#define FEC_WTPC_CUIF_P_FIX_GAIN_APC_VM_vm                                                (0)
#define FEC_WTPC_CUIF_L_FIX_GAIN_APC_VM_vm                                                (8)
#define FEC_WTPC_CUIF_M_FIX_GAIN_APC_VM_vm                                                (0x000000FF)

// ---------- FIX_GAIN_PGA bit-field ----------
#define FEC_WTPC_CUIF_P_FIX_GAIN_PGA_pga_mode                                             (24)
#define FEC_WTPC_CUIF_L_FIX_GAIN_PGA_pga_mode                                             (8)
#define FEC_WTPC_CUIF_M_FIX_GAIN_PGA_pga_mode                                             (0xFF000000)
#define FEC_WTPC_CUIF_P_FIX_GAIN_PGA_idx_pga                                              (16)
#define FEC_WTPC_CUIF_L_FIX_GAIN_PGA_idx_pga                                              (8)
#define FEC_WTPC_CUIF_M_FIX_GAIN_PGA_idx_pga                                              (0x00FF0000)
#define FEC_WTPC_CUIF_P_FIX_GAIN_PGA_idx_det                                              (8)
#define FEC_WTPC_CUIF_L_FIX_GAIN_PGA_idx_det                                              (8)
#define FEC_WTPC_CUIF_M_FIX_GAIN_PGA_idx_det                                              (0x0000FF00)
#define FEC_WTPC_CUIF_P_FIX_GAIN_PGA_pga_cfg                                              (0)
#define FEC_WTPC_CUIF_L_FIX_GAIN_PGA_pga_cfg                                              (8)
#define FEC_WTPC_CUIF_M_FIX_GAIN_PGA_pga_cfg                                              (0x000000FF)

// ---------- FIX_GAIN_GBB bit-field ----------
#define FEC_WTPC_CUIF_P_FIX_GAIN_GBB_dpd_lut_sel                                          (16)
#define FEC_WTPC_CUIF_L_FIX_GAIN_GBB_dpd_lut_sel                                          (8)
#define FEC_WTPC_CUIF_M_FIX_GAIN_GBB_dpd_lut_sel                                          (0x00FF0000)
#define FEC_WTPC_CUIF_P_FIX_GAIN_GBB_bb_gain                                              (0)
#define FEC_WTPC_CUIF_L_FIX_GAIN_GBB_bb_gain                                              (16)
#define FEC_WTPC_CUIF_M_FIX_GAIN_GBB_bb_gain                                              (0x0000FFFF)

// ---------- FIX_GAIN_NORM bit-field ----------
#define FEC_WTPC_CUIF_P_FIX_GAIN_NORM_norm_exp                                            (16)
#define FEC_WTPC_CUIF_L_FIX_GAIN_NORM_norm_exp                                            (6)
#define FEC_WTPC_CUIF_M_FIX_GAIN_NORM_norm_exp                                            (0x003F0000)
#define FEC_WTPC_CUIF_P_FIX_GAIN_NORM_norm_man                                            (0)
#define FEC_WTPC_CUIF_L_FIX_GAIN_NORM_norm_man                                            (11)
#define FEC_WTPC_CUIF_M_FIX_GAIN_NORM_norm_man                                            (0x000007FF)

// ---------- FIX_GAIN_L1_DFE bit-field ----------
#define FEC_WTPC_CUIF_P_FIX_GAIN_L1_DFE_etdpd_norm                                        (16)
#define FEC_WTPC_CUIF_L_FIX_GAIN_L1_DFE_etdpd_norm                                        (16)
#define FEC_WTPC_CUIF_M_FIX_GAIN_L1_DFE_etdpd_norm                                        (0xFFFF0000)
#define FEC_WTPC_CUIF_P_FIX_GAIN_L1_DFE_cfr_clip_th                                       (0)
#define FEC_WTPC_CUIF_L_FIX_GAIN_L1_DFE_cfr_clip_th                                       (16)
#define FEC_WTPC_CUIF_M_FIX_GAIN_L1_DFE_cfr_clip_th                                       (0x0000FFFF)

// ---------- PRACH_L1_DPCHGAIN bit-field ----------
#define FEC_WTPC_CUIF_P_PRACH_L1_DPCHGAIN_msg_gain_wd                                     (24)
#define FEC_WTPC_CUIF_L_PRACH_L1_DPCHGAIN_msg_gain_wd                                     (8)
#define FEC_WTPC_CUIF_M_PRACH_L1_DPCHGAIN_msg_gain_wd                                     (0xFF000000)
#define FEC_WTPC_CUIF_P_PRACH_L1_DPCHGAIN_msg_gain_wc                                     (16)
#define FEC_WTPC_CUIF_L_PRACH_L1_DPCHGAIN_msg_gain_wc                                     (8)
#define FEC_WTPC_CUIF_M_PRACH_L1_DPCHGAIN_msg_gain_wc                                     (0x00FF0000)
#define FEC_WTPC_CUIF_P_PRACH_L1_DPCHGAIN_pre_gain_wd                                     (8)
#define FEC_WTPC_CUIF_L_PRACH_L1_DPCHGAIN_pre_gain_wd                                     (8)
#define FEC_WTPC_CUIF_M_PRACH_L1_DPCHGAIN_pre_gain_wd                                     (0x0000FF00)
#define FEC_WTPC_CUIF_P_PRACH_L1_DPCHGAIN_pre_gain_wc                                     (0)
#define FEC_WTPC_CUIF_L_PRACH_L1_DPCHGAIN_pre_gain_wc                                     (8)
#define FEC_WTPC_CUIF_M_PRACH_L1_DPCHGAIN_pre_gain_wc                                     (0x000000FF)

// ---------- PRACH_L1_PTAR1 bit-field ----------
#define FEC_WTPC_CUIF_P_PRACH_L1_PTAR1_ptar_1st_preamble                                  (0)
#define FEC_WTPC_CUIF_L_PRACH_L1_PTAR1_ptar_1st_preamble                                  (16)
#define FEC_WTPC_CUIF_M_PRACH_L1_PTAR1_ptar_1st_preamble                                  (0x0000FFFF)

// ---------- PRACH_L1_PTAR2 bit-field ----------
#define FEC_WTPC_CUIF_P_PRACH_L1_PTAR2_ptar_preamble                                      (16)
#define FEC_WTPC_CUIF_L_PRACH_L1_PTAR2_ptar_preamble                                      (16)
#define FEC_WTPC_CUIF_M_PRACH_L1_PTAR2_ptar_preamble                                      (0xFFFF0000)
#define FEC_WTPC_CUIF_P_PRACH_L1_PTAR2_ptar_message                                       (0)
#define FEC_WTPC_CUIF_L_PRACH_L1_PTAR2_ptar_message                                       (16)
#define FEC_WTPC_CUIF_M_PRACH_L1_PTAR2_ptar_message                                       (0x0000FFFF)

// ---------- PRACH_TXCRP_NORM_PRE bit-field ----------
#define FEC_WTPC_CUIF_P_PRACH_TXCRP_NORM_PRE_txcrp_norm_exp_pre                           (16)
#define FEC_WTPC_CUIF_L_PRACH_TXCRP_NORM_PRE_txcrp_norm_exp_pre                           (6)
#define FEC_WTPC_CUIF_M_PRACH_TXCRP_NORM_PRE_txcrp_norm_exp_pre                           (0x003F0000)
#define FEC_WTPC_CUIF_P_PRACH_TXCRP_NORM_PRE_txcrp_norm_man_pre                           (0)
#define FEC_WTPC_CUIF_L_PRACH_TXCRP_NORM_PRE_txcrp_norm_man_pre                           (11)
#define FEC_WTPC_CUIF_M_PRACH_TXCRP_NORM_PRE_txcrp_norm_man_pre                           (0x000007FF)

// ---------- PRACH_TXCRP_NORM_MSG bit-field ----------
#define FEC_WTPC_CUIF_P_PRACH_TXCRP_NORM_MSG_txcrp_norm_exp_msg                           (16)
#define FEC_WTPC_CUIF_L_PRACH_TXCRP_NORM_MSG_txcrp_norm_exp_msg                           (6)
#define FEC_WTPC_CUIF_M_PRACH_TXCRP_NORM_MSG_txcrp_norm_exp_msg                           (0x003F0000)
#define FEC_WTPC_CUIF_P_PRACH_TXCRP_NORM_MSG_txcrp_norm_man_msg                           (0)
#define FEC_WTPC_CUIF_L_PRACH_TXCRP_NORM_MSG_txcrp_norm_man_msg                           (11)
#define FEC_WTPC_CUIF_M_PRACH_TXCRP_NORM_MSG_txcrp_norm_man_msg                           (0x000007FF)

// ---------- PRACH_L1_ET_DPD_DATA_n bit-field ----------
#define FEC_WTPC_CUIF_P_PRACH_L1_ET_DPD_DATA_n_prach_l1_etdpd_norm_0                      (16)
#define FEC_WTPC_CUIF_L_PRACH_L1_ET_DPD_DATA_n_prach_l1_etdpd_norm_0                      (16)
#define FEC_WTPC_CUIF_M_PRACH_L1_ET_DPD_DATA_n_prach_l1_etdpd_norm_0                      (0xFFFF0000)
#define FEC_WTPC_CUIF_P_PRACH_L1_ET_DPD_DATA_n_prach_l1_dtrlin_0                          (0)
#define FEC_WTPC_CUIF_L_PRACH_L1_ET_DPD_DATA_n_prach_l1_dtrlin_0                          (16)
#define FEC_WTPC_CUIF_M_PRACH_L1_ET_DPD_DATA_n_prach_l1_dtrlin_0                          (0x0000FFFF)

// ---------- SW_L1_TPC_PTAR bit-field ----------
#define FEC_WTPC_CUIF_P_SW_L1_TPC_PTAR_sw_ptar_0                                          (16)
#define FEC_WTPC_CUIF_L_SW_L1_TPC_PTAR_sw_ptar_0                                          (16)
#define FEC_WTPC_CUIF_M_SW_L1_TPC_PTAR_sw_ptar_0                                          (0xFFFF0000)
#define FEC_WTPC_CUIF_P_SW_L1_TPC_PTAR_sw_ptar_2                                          (0)
#define FEC_WTPC_CUIF_L_SW_L1_TPC_PTAR_sw_ptar_2                                          (16)
#define FEC_WTPC_CUIF_M_SW_L1_TPC_PTAR_sw_ptar_2                                          (0x0000FFFF)

// ---------- SW_EN_CONTROL bit-field ----------
#define FEC_WTPC_CUIF_P_SW_EN_CONTROL_sw_beta_ha_en                                       (16)
#define FEC_WTPC_CUIF_L_SW_EN_CONTROL_sw_beta_ha_en                                       (8)
#define FEC_WTPC_CUIF_M_SW_EN_CONTROL_sw_beta_ha_en                                       (0x00FF0000)
#define FEC_WTPC_CUIF_P_SW_EN_CONTROL_sw_ddpc_out_en                                      (8)
#define FEC_WTPC_CUIF_L_SW_EN_CONTROL_sw_ddpc_out_en                                      (8)
#define FEC_WTPC_CUIF_M_SW_EN_CONTROL_sw_ddpc_out_en                                      (0x0000FF00)
#define FEC_WTPC_CUIF_P_SW_EN_CONTROL_sw_ppeak_en                                         (0)
#define FEC_WTPC_CUIF_L_SW_EN_CONTROL_sw_ppeak_en                                         (8)
#define FEC_WTPC_CUIF_M_SW_EN_CONTROL_sw_ppeak_en                                         (0x000000FF)

// ---------- SW_L1_TPC_PPEAK bit-field ----------
#define FEC_WTPC_CUIF_P_SW_L1_TPC_PPEAK_sw_ppeak_mcs_dbm                                  (16)
#define FEC_WTPC_CUIF_L_SW_L1_TPC_PPEAK_sw_ppeak_mcs_dbm                                  (16)
#define FEC_WTPC_CUIF_M_SW_L1_TPC_PPEAK_sw_ppeak_mcs_dbm                                  (0xFFFF0000)
#define FEC_WTPC_CUIF_P_SW_L1_TPC_PPEAK_sw_pset_mcs_dbm                                   (0)
#define FEC_WTPC_CUIF_L_SW_L1_TPC_PPEAK_sw_pset_mcs_dbm                                   (16)
#define FEC_WTPC_CUIF_M_SW_L1_TPC_PPEAK_sw_pset_mcs_dbm                                   (0x0000FFFF)

// ---------- SW_CRP_BETA_HA bit-field ----------
#define FEC_WTPC_CUIF_P_SW_CRP_BETA_HA_sw_beta_ha_hs_p                                    (8)
#define FEC_WTPC_CUIF_L_SW_CRP_BETA_HA_sw_beta_ha_hs_p                                    (8)
#define FEC_WTPC_CUIF_M_SW_CRP_BETA_HA_sw_beta_ha_hs_p                                    (0x0000FF00)
#define FEC_WTPC_CUIF_P_SW_CRP_BETA_HA_sw_beta_ha_hs_q                                    (0)
#define FEC_WTPC_CUIF_L_SW_CRP_BETA_HA_sw_beta_ha_hs_q                                    (8)
#define FEC_WTPC_CUIF_M_SW_CRP_BETA_HA_sw_beta_ha_hs_q                                    (0x000000FF)

// ---------- SW_RAKE bit-field ----------
#define FEC_WTPC_CUIF_P_SW_RAKE_no_use_sw_rake_en                                         (24)
#define FEC_WTPC_CUIF_L_SW_RAKE_no_use_sw_rake_en                                         (8)
#define FEC_WTPC_CUIF_M_SW_RAKE_no_use_sw_rake_en                                         (0xFF000000)
#define FEC_WTPC_CUIF_P_SW_RAKE_no_use_sw_tpc_cmd_sw                                      (16)
#define FEC_WTPC_CUIF_L_SW_RAKE_no_use_sw_tpc_cmd_sw                                      (8)
#define FEC_WTPC_CUIF_M_SW_RAKE_no_use_sw_tpc_cmd_sw                                      (0x00FF0000)
#define FEC_WTPC_CUIF_P_SW_RAKE_no_use_sw_prach_ai_sw                                     (0)
#define FEC_WTPC_CUIF_L_SW_RAKE_no_use_sw_prach_ai_sw                                     (8)
#define FEC_WTPC_CUIF_M_SW_RAKE_no_use_sw_prach_ai_sw                                     (0x000000FF)

// ---------- SW_GC_CONTROL bit-field ----------
#define FEC_WTPC_CUIF_P_SW_GC_CONTROL_sw_dch_is_off_en                                    (24)
#define FEC_WTPC_CUIF_L_SW_GC_CONTROL_sw_dch_is_off_en                                    (8)
#define FEC_WTPC_CUIF_M_SW_GC_CONTROL_sw_dch_is_off_en                                    (0xFF000000)
#define FEC_WTPC_CUIF_P_SW_GC_CONTROL_sw_is_off_flag                                      (0)
#define FEC_WTPC_CUIF_L_SW_GC_CONTROL_sw_is_off_flag                                      (8)
#define FEC_WTPC_CUIF_M_SW_GC_CONTROL_sw_is_off_flag                                      (0x000000FF)

// ---------- SW_TXK_DDPC_0 bit-field ----------
#define FEC_WTPC_CUIF_P_SW_TXK_DDPC_0_sw_ddpc_out_1_0                                     (16)
#define FEC_WTPC_CUIF_L_SW_TXK_DDPC_0_sw_ddpc_out_1_0                                     (16)
#define FEC_WTPC_CUIF_M_SW_TXK_DDPC_0_sw_ddpc_out_1_0                                     (0xFFFF0000)
#define FEC_WTPC_CUIF_P_SW_TXK_DDPC_0_sw_ddpc_out_0_0                                     (0)
#define FEC_WTPC_CUIF_L_SW_TXK_DDPC_0_sw_ddpc_out_0_0                                     (16)
#define FEC_WTPC_CUIF_M_SW_TXK_DDPC_0_sw_ddpc_out_0_0                                     (0x0000FFFF)

// ---------- SW_TXK_DDPC_1 bit-field ----------
#define FEC_WTPC_CUIF_P_SW_TXK_DDPC_1_sw_ddpc_out_3_0                                     (16)
#define FEC_WTPC_CUIF_L_SW_TXK_DDPC_1_sw_ddpc_out_3_0                                     (16)
#define FEC_WTPC_CUIF_M_SW_TXK_DDPC_1_sw_ddpc_out_3_0                                     (0xFFFF0000)
#define FEC_WTPC_CUIF_P_SW_TXK_DDPC_1_sw_ddpc_out_2_0                                     (0)
#define FEC_WTPC_CUIF_L_SW_TXK_DDPC_1_sw_ddpc_out_2_0                                     (16)
#define FEC_WTPC_CUIF_M_SW_TXK_DDPC_1_sw_ddpc_out_2_0                                     (0x0000FFFF)

// ---------- SW_L1_ET_DPD_DATA_n bit-field ----------
#define FEC_WTPC_CUIF_P_SW_L1_ET_DPD_DATA_n_no_use_sw_l1_etdpd_norm_0                     (16)
#define FEC_WTPC_CUIF_L_SW_L1_ET_DPD_DATA_n_no_use_sw_l1_etdpd_norm_0                     (16)
#define FEC_WTPC_CUIF_M_SW_L1_ET_DPD_DATA_n_no_use_sw_l1_etdpd_norm_0                     (0xFFFF0000)
#define FEC_WTPC_CUIF_P_SW_L1_ET_DPD_DATA_n_no_use_sw_l1_dtrlin_0                         (0)
#define FEC_WTPC_CUIF_L_SW_L1_ET_DPD_DATA_n_no_use_sw_l1_dtrlin_0                         (16)
#define FEC_WTPC_CUIF_M_SW_L1_ET_DPD_DATA_n_no_use_sw_l1_dtrlin_0                         (0x0000FFFF)

// ---------- SW_TXCRP_NORM_P bit-field ----------
#define FEC_WTPC_CUIF_P_SW_TXCRP_NORM_P_txcrp_norm_exp_p                                  (16)
#define FEC_WTPC_CUIF_L_SW_TXCRP_NORM_P_txcrp_norm_exp_p                                  (6)
#define FEC_WTPC_CUIF_M_SW_TXCRP_NORM_P_txcrp_norm_exp_p                                  (0x003F0000)
#define FEC_WTPC_CUIF_P_SW_TXCRP_NORM_P_txcrp_norm_man_p                                  (0)
#define FEC_WTPC_CUIF_L_SW_TXCRP_NORM_P_txcrp_norm_man_p                                  (11)
#define FEC_WTPC_CUIF_M_SW_TXCRP_NORM_P_txcrp_norm_man_p                                  (0x000007FF)

// ---------- OFF_L1_PA bit-field ----------
#define FEC_WTPC_CUIF_P_OFF_L1_PA_no_use_off_l1_op_mode                                   (24)
#define FEC_WTPC_CUIF_L_OFF_L1_PA_no_use_off_l1_op_mode                                   (8)
#define FEC_WTPC_CUIF_M_OFF_L1_PA_no_use_off_l1_op_mode                                   (0xFF000000)
#define FEC_WTPC_CUIF_P_OFF_L1_PA_off_l1_idx_pa                                           (16)
#define FEC_WTPC_CUIF_L_OFF_L1_PA_off_l1_idx_pa                                           (8)
#define FEC_WTPC_CUIF_M_OFF_L1_PA_off_l1_idx_pa                                           (0x00FF0000)
#define FEC_WTPC_CUIF_P_OFF_L1_PA_off_l1_pa_mode                                          (8)
#define FEC_WTPC_CUIF_L_OFF_L1_PA_off_l1_pa_mode                                          (8)
#define FEC_WTPC_CUIF_M_OFF_L1_PA_off_l1_pa_mode                                          (0x0000FF00)
#define FEC_WTPC_CUIF_P_OFF_L1_PA_no_use_off_l1_pa_table_mode                             (0)
#define FEC_WTPC_CUIF_L_OFF_L1_PA_no_use_off_l1_pa_table_mode                             (8)
#define FEC_WTPC_CUIF_M_OFF_L1_PA_no_use_off_l1_pa_table_mode                             (0x000000FF)

// ---------- OFF_L1_PGA bit-field ----------
#define FEC_WTPC_CUIF_P_OFF_L1_PGA_off_l1_pga_mode                                        (16)
#define FEC_WTPC_CUIF_L_OFF_L1_PGA_off_l1_pga_mode                                        (8)
#define FEC_WTPC_CUIF_M_OFF_L1_PGA_off_l1_pga_mode                                        (0x00FF0000)
#define FEC_WTPC_CUIF_P_OFF_L1_PGA_off_l1_idx_pga                                         (8)
#define FEC_WTPC_CUIF_L_OFF_L1_PGA_off_l1_idx_pga                                         (8)
#define FEC_WTPC_CUIF_M_OFF_L1_PGA_off_l1_idx_pga                                         (0x0000FF00)
#define FEC_WTPC_CUIF_P_OFF_L1_PGA_no_use_off_l1_idx_det                                  (0)
#define FEC_WTPC_CUIF_L_OFF_L1_PGA_no_use_off_l1_idx_det                                  (8)
#define FEC_WTPC_CUIF_M_OFF_L1_PGA_no_use_off_l1_idx_det                                  (0x000000FF)

// ---------- OFF_L1_GTX_BB bit-field ----------
#define FEC_WTPC_CUIF_P_OFF_L1_GTX_BB_off_l1_gtx_bb                                       (0)
#define FEC_WTPC_CUIF_L_OFF_L1_GTX_BB_off_l1_gtx_bb                                       (16)
#define FEC_WTPC_CUIF_M_OFF_L1_GTX_BB_off_l1_gtx_bb                                       (0x0000FFFF)

// ---------- OFF_L1_ET_DPD_DATA bit-field ----------
#define FEC_WTPC_CUIF_P_OFF_L1_ET_DPD_DATA_no_use_off_l1_etdpd_norm                       (16)
#define FEC_WTPC_CUIF_L_OFF_L1_ET_DPD_DATA_no_use_off_l1_etdpd_norm                       (16)
#define FEC_WTPC_CUIF_M_OFF_L1_ET_DPD_DATA_no_use_off_l1_etdpd_norm                       (0xFFFF0000)
#define FEC_WTPC_CUIF_P_OFF_L1_ET_DPD_DATA_no_use_off_l1_dtrlin                           (0)
#define FEC_WTPC_CUIF_L_OFF_L1_ET_DPD_DATA_no_use_off_l1_dtrlin                           (16)
#define FEC_WTPC_CUIF_M_OFF_L1_ET_DPD_DATA_no_use_off_l1_dtrlin                           (0x0000FFFF)

// ---------- FRAME_TPC_SLOT0_Cn bit-field ----------
#define FEC_WTPC_CUIF_P_FRAME_TPC_SLOT0_Cn_SLOT_STA_07_FR                                 (28)
#define FEC_WTPC_CUIF_L_FRAME_TPC_SLOT0_Cn_SLOT_STA_07_FR                                 (3)
#define FEC_WTPC_CUIF_M_FRAME_TPC_SLOT0_Cn_SLOT_STA_07_FR                                 (0x70000000)
#define FEC_WTPC_CUIF_P_FRAME_TPC_SLOT0_Cn_SLOT_STA_06_FR                                 (24)
#define FEC_WTPC_CUIF_L_FRAME_TPC_SLOT0_Cn_SLOT_STA_06_FR                                 (3)
#define FEC_WTPC_CUIF_M_FRAME_TPC_SLOT0_Cn_SLOT_STA_06_FR                                 (0x07000000)
#define FEC_WTPC_CUIF_P_FRAME_TPC_SLOT0_Cn_SLOT_STA_05_FR                                 (20)
#define FEC_WTPC_CUIF_L_FRAME_TPC_SLOT0_Cn_SLOT_STA_05_FR                                 (3)
#define FEC_WTPC_CUIF_M_FRAME_TPC_SLOT0_Cn_SLOT_STA_05_FR                                 (0x00700000)
#define FEC_WTPC_CUIF_P_FRAME_TPC_SLOT0_Cn_SLOT_STA_04_FR                                 (16)
#define FEC_WTPC_CUIF_L_FRAME_TPC_SLOT0_Cn_SLOT_STA_04_FR                                 (3)
#define FEC_WTPC_CUIF_M_FRAME_TPC_SLOT0_Cn_SLOT_STA_04_FR                                 (0x00070000)
#define FEC_WTPC_CUIF_P_FRAME_TPC_SLOT0_Cn_SLOT_STA_03_FR                                 (12)
#define FEC_WTPC_CUIF_L_FRAME_TPC_SLOT0_Cn_SLOT_STA_03_FR                                 (3)
#define FEC_WTPC_CUIF_M_FRAME_TPC_SLOT0_Cn_SLOT_STA_03_FR                                 (0x00007000)
#define FEC_WTPC_CUIF_P_FRAME_TPC_SLOT0_Cn_SLOT_STA_02_FR                                 (8)
#define FEC_WTPC_CUIF_L_FRAME_TPC_SLOT0_Cn_SLOT_STA_02_FR                                 (3)
#define FEC_WTPC_CUIF_M_FRAME_TPC_SLOT0_Cn_SLOT_STA_02_FR                                 (0x00000700)
#define FEC_WTPC_CUIF_P_FRAME_TPC_SLOT0_Cn_SLOT_STA_01_FR                                 (4)
#define FEC_WTPC_CUIF_L_FRAME_TPC_SLOT0_Cn_SLOT_STA_01_FR                                 (3)
#define FEC_WTPC_CUIF_M_FRAME_TPC_SLOT0_Cn_SLOT_STA_01_FR                                 (0x00000070)
#define FEC_WTPC_CUIF_P_FRAME_TPC_SLOT0_Cn_SLOT_STA_00_FR                                 (0)
#define FEC_WTPC_CUIF_L_FRAME_TPC_SLOT0_Cn_SLOT_STA_00_FR                                 (3)
#define FEC_WTPC_CUIF_M_FRAME_TPC_SLOT0_Cn_SLOT_STA_00_FR                                 (0x00000007)

// ---------- FRAME_TPC_SLOT1_Cn bit-field ----------
#define FEC_WTPC_CUIF_P_FRAME_TPC_SLOT1_Cn_SLOT_STA_14_FR                                 (24)
#define FEC_WTPC_CUIF_L_FRAME_TPC_SLOT1_Cn_SLOT_STA_14_FR                                 (3)
#define FEC_WTPC_CUIF_M_FRAME_TPC_SLOT1_Cn_SLOT_STA_14_FR                                 (0x07000000)
#define FEC_WTPC_CUIF_P_FRAME_TPC_SLOT1_Cn_SLOT_STA_13_FR                                 (20)
#define FEC_WTPC_CUIF_L_FRAME_TPC_SLOT1_Cn_SLOT_STA_13_FR                                 (3)
#define FEC_WTPC_CUIF_M_FRAME_TPC_SLOT1_Cn_SLOT_STA_13_FR                                 (0x00700000)
#define FEC_WTPC_CUIF_P_FRAME_TPC_SLOT1_Cn_SLOT_STA_12_FR                                 (16)
#define FEC_WTPC_CUIF_L_FRAME_TPC_SLOT1_Cn_SLOT_STA_12_FR                                 (3)
#define FEC_WTPC_CUIF_M_FRAME_TPC_SLOT1_Cn_SLOT_STA_12_FR                                 (0x00070000)
#define FEC_WTPC_CUIF_P_FRAME_TPC_SLOT1_Cn_SLOT_STA_11_FR                                 (12)
#define FEC_WTPC_CUIF_L_FRAME_TPC_SLOT1_Cn_SLOT_STA_11_FR                                 (3)
#define FEC_WTPC_CUIF_M_FRAME_TPC_SLOT1_Cn_SLOT_STA_11_FR                                 (0x00007000)
#define FEC_WTPC_CUIF_P_FRAME_TPC_SLOT1_Cn_SLOT_STA_10_FR                                 (8)
#define FEC_WTPC_CUIF_L_FRAME_TPC_SLOT1_Cn_SLOT_STA_10_FR                                 (3)
#define FEC_WTPC_CUIF_M_FRAME_TPC_SLOT1_Cn_SLOT_STA_10_FR                                 (0x00000700)
#define FEC_WTPC_CUIF_P_FRAME_TPC_SLOT1_Cn_SLOT_STA_09_FR                                 (4)
#define FEC_WTPC_CUIF_L_FRAME_TPC_SLOT1_Cn_SLOT_STA_09_FR                                 (3)
#define FEC_WTPC_CUIF_M_FRAME_TPC_SLOT1_Cn_SLOT_STA_09_FR                                 (0x00000070)
#define FEC_WTPC_CUIF_P_FRAME_TPC_SLOT1_Cn_SLOT_STA_08_FR                                 (0)
#define FEC_WTPC_CUIF_L_FRAME_TPC_SLOT1_Cn_SLOT_STA_08_FR                                 (3)
#define FEC_WTPC_CUIF_M_FRAME_TPC_SLOT1_Cn_SLOT_STA_08_FR                                 (0x00000007)

// ---------- FRAME_TPC_BETAUD_MIN bit-field ----------
#define FEC_WTPC_CUIF_P_FRAME_TPC_BETAUD_MIN_BETA_UD_MIN_C0_FR                            (0)
#define FEC_WTPC_CUIF_L_FRAME_TPC_BETAUD_MIN_BETA_UD_MIN_C0_FR                            (13)
#define FEC_WTPC_CUIF_M_FRAME_TPC_BETAUD_MIN_BETA_UD_MIN_C0_FR                            (0x00001FFF)

// ---------- FRAME_TPC_CPC_ENABLE bit-field ----------
#define FEC_WTPC_CUIF_P_FRAME_TPC_CPC_ENABLE_CPC_ENABLE                                   (0)
#define FEC_WTPC_CUIF_L_FRAME_TPC_CPC_ENABLE_CPC_ENABLE                                   (1)
#define FEC_WTPC_CUIF_M_FRAME_TPC_CPC_ENABLE_CPC_ENABLE                                   (0x00000001)

// ---------- FRAME_TPC_UPC_SLOTEN_C0 bit-field ----------
#define FEC_WTPC_CUIF_P_FRAME_TPC_UPC_SLOTEN_C0_UPC_SLOT_EN_FR                            (0)
#define FEC_WTPC_CUIF_L_FRAME_TPC_UPC_SLOTEN_C0_UPC_SLOT_EN_FR                            (15)
#define FEC_WTPC_CUIF_M_FRAME_TPC_UPC_SLOTEN_C0_UPC_SLOT_EN_FR                            (0x00007FFF)

// ---------- FRAME_TPC_PAR_Cn bit-field ----------
#define FEC_WTPC_CUIF_P_FRAME_TPC_PAR_Cn_N_PILOT_FR                                       (12)
#define FEC_WTPC_CUIF_L_FRAME_TPC_PAR_Cn_N_PILOT_FR                                       (3)
#define FEC_WTPC_CUIF_M_FRAME_TPC_PAR_Cn_N_PILOT_FR                                       (0x00007000)
#define FEC_WTPC_CUIF_P_FRAME_TPC_PAR_Cn_ITP_FR                                           (8)
#define FEC_WTPC_CUIF_L_FRAME_TPC_PAR_Cn_ITP_FR                                           (1)
#define FEC_WTPC_CUIF_M_FRAME_TPC_PAR_Cn_ITP_FR                                           (0x00000100)
#define FEC_WTPC_CUIF_P_FRAME_TPC_PAR_Cn_ITP2_FR                                          (7)
#define FEC_WTPC_CUIF_L_FRAME_TPC_PAR_Cn_ITP2_FR                                          (1)
#define FEC_WTPC_CUIF_M_FRAME_TPC_PAR_Cn_ITP2_FR                                          (0x00000080)
#define FEC_WTPC_CUIF_P_FRAME_TPC_PAR_Cn_TPC_STEP_FR                                      (4)
#define FEC_WTPC_CUIF_L_FRAME_TPC_PAR_Cn_TPC_STEP_FR                                      (2)
#define FEC_WTPC_CUIF_M_FRAME_TPC_PAR_Cn_TPC_STEP_FR                                      (0x00000030)
#define FEC_WTPC_CUIF_P_FRAME_TPC_PAR_Cn_RPTPC2_STEP_FR                                   (2)
#define FEC_WTPC_CUIF_L_FRAME_TPC_PAR_Cn_RPTPC2_STEP_FR                                   (2)
#define FEC_WTPC_CUIF_M_FRAME_TPC_PAR_Cn_RPTPC2_STEP_FR                                   (0x0000000C)
#define FEC_WTPC_CUIF_P_FRAME_TPC_PAR_Cn_RPTPC_SETP_FR                                    (0)
#define FEC_WTPC_CUIF_L_FRAME_TPC_PAR_Cn_RPTPC_SETP_FR                                    (2)
#define FEC_WTPC_CUIF_M_FRAME_TPC_PAR_Cn_RPTPC_SETP_FR                                    (0x00000003)

// ---------- FRAME_TPC_DAC_TAR_DBn bit-field ----------
#define FEC_WTPC_CUIF_P_FRAME_TPC_DAC_TAR_DBn_DAC_TAR_DBm_FR_0                            (16)
#define FEC_WTPC_CUIF_L_FRAME_TPC_DAC_TAR_DBn_DAC_TAR_DBm_FR_0                            (16)
#define FEC_WTPC_CUIF_M_FRAME_TPC_DAC_TAR_DBn_DAC_TAR_DBm_FR_0                            (0xFFFF0000)
#define FEC_WTPC_CUIF_P_FRAME_TPC_DAC_TAR_DBn_DAC_TAR_DBk_FR_0                            (0)
#define FEC_WTPC_CUIF_L_FRAME_TPC_DAC_TAR_DBn_DAC_TAR_DBk_FR_0                            (16)
#define FEC_WTPC_CUIF_M_FRAME_TPC_DAC_TAR_DBn_DAC_TAR_DBk_FR_0                            (0x0000FFFF)

// ---------- FRAME_TPC_PSEUDO_TPCIN bit-field ----------
#define FEC_WTPC_CUIF_P_FRAME_TPC_PSEUDO_TPCIN_no_use_PSEUDO_TPC_EN_FR                    (31)
#define FEC_WTPC_CUIF_L_FRAME_TPC_PSEUDO_TPCIN_no_use_PSEUDO_TPC_EN_FR                    (1)
#define FEC_WTPC_CUIF_M_FRAME_TPC_PSEUDO_TPCIN_no_use_PSEUDO_TPC_EN_FR                    (0x80000000)
#define FEC_WTPC_CUIF_P_FRAME_TPC_PSEUDO_TPCIN_no_use_PSEUDO_TPC_IN_FR                    (0)
#define FEC_WTPC_CUIF_L_FRAME_TPC_PSEUDO_TPCIN_no_use_PSEUDO_TPC_IN_FR                    (30)
#define FEC_WTPC_CUIF_M_FRAME_TPC_PSEUDO_TPCIN_no_use_PSEUDO_TPC_IN_FR                    (0x3FFFFFFF)

// ---------- FRAME_TPC_ASPOW bit-field ----------
#define FEC_WTPC_CUIF_P_FRAME_TPC_ASPOW_PMAX_UE_FR                                        (16)
#define FEC_WTPC_CUIF_L_FRAME_TPC_ASPOW_PMAX_UE_FR                                        (16)
#define FEC_WTPC_CUIF_M_FRAME_TPC_ASPOW_PMAX_UE_FR                                        (0xFFFF0000)
#define FEC_WTPC_CUIF_P_FRAME_TPC_ASPOW_PMIN_UE_FR                                        (0)
#define FEC_WTPC_CUIF_L_FRAME_TPC_ASPOW_PMIN_UE_FR                                        (16)
#define FEC_WTPC_CUIF_M_FRAME_TPC_ASPOW_PMIN_UE_FR                                        (0x0000FFFF)

// ---------- FRAME_TPC_POWNET bit-field ----------
#define FEC_WTPC_CUIF_P_FRAME_TPC_POWNET_PMAX_NET_FR                                      (16)
#define FEC_WTPC_CUIF_L_FRAME_TPC_POWNET_PMAX_NET_FR                                      (16)
#define FEC_WTPC_CUIF_M_FRAME_TPC_POWNET_PMAX_NET_FR                                      (0xFFFF0000)
#define FEC_WTPC_CUIF_P_FRAME_TPC_POWNET_PMIN_NET_FR                                      (0)
#define FEC_WTPC_CUIF_L_FRAME_TPC_POWNET_PMIN_NET_FR                                      (16)
#define FEC_WTPC_CUIF_M_FRAME_TPC_POWNET_PMIN_NET_FR                                      (0x0000FFFF)

// ---------- FRAME_TPC_RPILOT bit-field ----------
#define FEC_WTPC_CUIF_P_FRAME_TPC_RPILOT_RPILOT                                           (0)
#define FEC_WTPC_CUIF_L_FRAME_TPC_RPILOT_RPILOT                                           (3)
#define FEC_WTPC_CUIF_M_FRAME_TPC_RPILOT_RPILOT                                           (0x00000007)

// ---------- FRAME_TPC_DPDCH_CNFGEN bit-field ----------
#define FEC_WTPC_CUIF_P_FRAME_TPC_DPDCH_CNFGEN_DPDCH_CNFGEN                               (0)
#define FEC_WTPC_CUIF_L_FRAME_TPC_DPDCH_CNFGEN_DPDCH_CNFGEN                               (1)
#define FEC_WTPC_CUIF_M_FRAME_TPC_DPDCH_CNFGEN_DPDCH_CNFGEN                               (0x00000001)

// ---------- FRAME_TPC_DPCHGAIN_n bit-field ----------
#define FEC_WTPC_CUIF_P_FRAME_TPC_DPCHGAIN_n_GAIN_WD                                      (8)
#define FEC_WTPC_CUIF_L_FRAME_TPC_DPCHGAIN_n_GAIN_WD                                      (8)
#define FEC_WTPC_CUIF_M_FRAME_TPC_DPCHGAIN_n_GAIN_WD                                      (0x0000FF00)
#define FEC_WTPC_CUIF_P_FRAME_TPC_DPCHGAIN_n_GAIN_WC                                      (0)
#define FEC_WTPC_CUIF_L_FRAME_TPC_DPCHGAIN_n_GAIN_WC                                      (8)
#define FEC_WTPC_CUIF_M_FRAME_TPC_DPCHGAIN_n_GAIN_WC                                      (0x000000FF)

// ---------- FRAME_ATX_STATIC_INPUT0 bit-field ----------
#define FEC_WTPC_CUIF_P_FRAME_ATX_STATIC_INPUT0_cfr_table_mode                            (8)
#define FEC_WTPC_CUIF_L_FRAME_ATX_STATIC_INPUT0_cfr_table_mode                            (8)
#define FEC_WTPC_CUIF_M_FRAME_ATX_STATIC_INPUT0_cfr_table_mode                            (0x0000FF00)
#define FEC_WTPC_CUIF_P_FRAME_ATX_STATIC_INPUT0_en_cfr                                    (0)
#define FEC_WTPC_CUIF_L_FRAME_ATX_STATIC_INPUT0_en_cfr                                    (8)
#define FEC_WTPC_CUIF_M_FRAME_ATX_STATIC_INPUT0_en_cfr                                    (0x000000FF)

// ---------- FRAME_ATX_STATIC_INPUT1 bit-field ----------
#define FEC_WTPC_CUIF_P_FRAME_ATX_STATIC_INPUT1_no_use_en                                 (16)
#define FEC_WTPC_CUIF_L_FRAME_ATX_STATIC_INPUT1_no_use_en                                 (16)
#define FEC_WTPC_CUIF_M_FRAME_ATX_STATIC_INPUT1_no_use_en                                 (0xFFFF0000)
#define FEC_WTPC_CUIF_P_FRAME_ATX_STATIC_INPUT1_no_use_en_cfr                             (8)
#define FEC_WTPC_CUIF_L_FRAME_ATX_STATIC_INPUT1_no_use_en_cfr                             (8)
#define FEC_WTPC_CUIF_M_FRAME_ATX_STATIC_INPUT1_no_use_en_cfr                             (0x0000FF00)

// ---------- FRAME_ATX_DYNAMIC_INPUT0 bit-field ----------
#define FEC_WTPC_CUIF_P_FRAME_ATX_DYNAMIC_INPUT0_no_use_force_pga_mode_p                  (8)
#define FEC_WTPC_CUIF_L_FRAME_ATX_DYNAMIC_INPUT0_no_use_force_pga_mode_p                  (8)
#define FEC_WTPC_CUIF_M_FRAME_ATX_DYNAMIC_INPUT0_no_use_force_pga_mode_p                  (0x0000FF00)
#define FEC_WTPC_CUIF_P_FRAME_ATX_DYNAMIC_INPUT0_no_use_force_pga_mode_q                  (0)
#define FEC_WTPC_CUIF_L_FRAME_ATX_DYNAMIC_INPUT0_no_use_force_pga_mode_q                  (8)
#define FEC_WTPC_CUIF_M_FRAME_ATX_DYNAMIC_INPUT0_no_use_force_pga_mode_q                  (0x000000FF)

// ---------- FRAME_TXK_INPUT0_0 bit-field ----------
#define FEC_WTPC_CUIF_P_FRAME_TXK_INPUT0_0_msel0_0                                        (24)
#define FEC_WTPC_CUIF_L_FRAME_TXK_INPUT0_0_msel0_0                                        (8)
#define FEC_WTPC_CUIF_M_FRAME_TXK_INPUT0_0_msel0_0                                        (0xFF000000)
#define FEC_WTPC_CUIF_P_FRAME_TXK_INPUT0_0_msel1_0                                        (16)
#define FEC_WTPC_CUIF_L_FRAME_TXK_INPUT0_0_msel1_0                                        (8)
#define FEC_WTPC_CUIF_M_FRAME_TXK_INPUT0_0_msel1_0                                        (0x00FF0000)
#define FEC_WTPC_CUIF_P_FRAME_TXK_INPUT0_0_msel2_0                                        (8)
#define FEC_WTPC_CUIF_L_FRAME_TXK_INPUT0_0_msel2_0                                        (8)
#define FEC_WTPC_CUIF_M_FRAME_TXK_INPUT0_0_msel2_0                                        (0x0000FF00)
#define FEC_WTPC_CUIF_P_FRAME_TXK_INPUT0_0_msel3_0                                        (0)
#define FEC_WTPC_CUIF_L_FRAME_TXK_INPUT0_0_msel3_0                                        (8)
#define FEC_WTPC_CUIF_M_FRAME_TXK_INPUT0_0_msel3_0                                        (0x000000FF)

// ---------- SFRM_TPC_UBETAUCn bit-field ----------
#define FEC_WTPC_CUIF_P_SFRM_TPC_UBETAUCn_BETA_UC_C1                                      (16)
#define FEC_WTPC_CUIF_L_SFRM_TPC_UBETAUCn_BETA_UC_C1                                      (16)
#define FEC_WTPC_CUIF_M_SFRM_TPC_UBETAUCn_BETA_UC_C1                                      (0xFFFF0000)
#define FEC_WTPC_CUIF_P_SFRM_TPC_UBETAUCn_BETA_UC_C0                                      (0)
#define FEC_WTPC_CUIF_L_SFRM_TPC_UBETAUCn_BETA_UC_C0                                      (16)
#define FEC_WTPC_CUIF_M_SFRM_TPC_UBETAUCn_BETA_UC_C0                                      (0x0000FFFF)

// ---------- SFRM_TPC_UBETAUD_m_SF_k bit-field ----------
#define FEC_WTPC_CUIF_P_SFRM_TPC_UBETAUD_m_SF_k_BETA_UDm_C1_0                             (16)
#define FEC_WTPC_CUIF_L_SFRM_TPC_UBETAUD_m_SF_k_BETA_UDm_C1_0                             (16)
#define FEC_WTPC_CUIF_M_SFRM_TPC_UBETAUD_m_SF_k_BETA_UDm_C1_0                             (0xFFFF0000)
#define FEC_WTPC_CUIF_P_SFRM_TPC_UBETAUD_m_SF_k_BETA_UDm_C0_0                             (0)
#define FEC_WTPC_CUIF_L_SFRM_TPC_UBETAUD_m_SF_k_BETA_UDm_C0_0                             (16)
#define FEC_WTPC_CUIF_M_SFRM_TPC_UBETAUD_m_SF_k_BETA_UDm_C0_0                             (0x0000FFFF)

// ---------- SFRM_TPC_UCHENn bit-field ----------
#define FEC_WTPC_CUIF_P_SFRM_TPC_UCHENn_U4PAM_C1_EN                                       (31)
#define FEC_WTPC_CUIF_L_SFRM_TPC_UCHENn_U4PAM_C1_EN                                       (1)
#define FEC_WTPC_CUIF_M_SFRM_TPC_UCHENn_U4PAM_C1_EN                                       (0x80000000)
#define FEC_WTPC_CUIF_P_SFRM_TPC_UCHENn_UDCH_C1_UD0_SF2                                   (30)
#define FEC_WTPC_CUIF_L_SFRM_TPC_UCHENn_UDCH_C1_UD0_SF2                                   (1)
#define FEC_WTPC_CUIF_M_SFRM_TPC_UCHENn_UDCH_C1_UD0_SF2                                   (0x40000000)
#define FEC_WTPC_CUIF_P_SFRM_TPC_UCHENn_UDCH_C1_EN3                                       (20)
#define FEC_WTPC_CUIF_L_SFRM_TPC_UCHENn_UDCH_C1_EN3                                       (1)
#define FEC_WTPC_CUIF_M_SFRM_TPC_UCHENn_UDCH_C1_EN3                                       (0x00100000)
#define FEC_WTPC_CUIF_P_SFRM_TPC_UCHENn_UDCH_C1_EN2                                       (19)
#define FEC_WTPC_CUIF_L_SFRM_TPC_UCHENn_UDCH_C1_EN2                                       (1)
#define FEC_WTPC_CUIF_M_SFRM_TPC_UCHENn_UDCH_C1_EN2                                       (0x00080000)
#define FEC_WTPC_CUIF_P_SFRM_TPC_UCHENn_UDCH_C1_EN1                                       (18)
#define FEC_WTPC_CUIF_L_SFRM_TPC_UCHENn_UDCH_C1_EN1                                       (1)
#define FEC_WTPC_CUIF_M_SFRM_TPC_UCHENn_UDCH_C1_EN1                                       (0x00040000)
#define FEC_WTPC_CUIF_P_SFRM_TPC_UCHENn_UDCH_C1_EN0                                       (17)
#define FEC_WTPC_CUIF_L_SFRM_TPC_UCHENn_UDCH_C1_EN0                                       (1)
#define FEC_WTPC_CUIF_M_SFRM_TPC_UCHENn_UDCH_C1_EN0                                       (0x00020000)
#define FEC_WTPC_CUIF_P_SFRM_TPC_UCHENn_UCCH_C1_EN                                        (16)
#define FEC_WTPC_CUIF_L_SFRM_TPC_UCHENn_UCCH_C1_EN                                        (1)
#define FEC_WTPC_CUIF_M_SFRM_TPC_UCHENn_UCCH_C1_EN                                        (0x00010000)
#define FEC_WTPC_CUIF_P_SFRM_TPC_UCHENn_U4PAM_C0_EN                                       (15)
#define FEC_WTPC_CUIF_L_SFRM_TPC_UCHENn_U4PAM_C0_EN                                       (1)
#define FEC_WTPC_CUIF_M_SFRM_TPC_UCHENn_U4PAM_C0_EN                                       (0x00008000)
#define FEC_WTPC_CUIF_P_SFRM_TPC_UCHENn_UDCH_C0_UD0_SF2                                   (14)
#define FEC_WTPC_CUIF_L_SFRM_TPC_UCHENn_UDCH_C0_UD0_SF2                                   (1)
#define FEC_WTPC_CUIF_M_SFRM_TPC_UCHENn_UDCH_C0_UD0_SF2                                   (0x00004000)
#define FEC_WTPC_CUIF_P_SFRM_TPC_UCHENn_UDCH_C0_EN3                                       (4)
#define FEC_WTPC_CUIF_L_SFRM_TPC_UCHENn_UDCH_C0_EN3                                       (1)
#define FEC_WTPC_CUIF_M_SFRM_TPC_UCHENn_UDCH_C0_EN3                                       (0x00000010)
#define FEC_WTPC_CUIF_P_SFRM_TPC_UCHENn_UDCH_C0_EN2                                       (3)
#define FEC_WTPC_CUIF_L_SFRM_TPC_UCHENn_UDCH_C0_EN2                                       (1)
#define FEC_WTPC_CUIF_M_SFRM_TPC_UCHENn_UDCH_C0_EN2                                       (0x00000008)
#define FEC_WTPC_CUIF_P_SFRM_TPC_UCHENn_UDCH_C0_EN1                                       (2)
#define FEC_WTPC_CUIF_L_SFRM_TPC_UCHENn_UDCH_C0_EN1                                       (1)
#define FEC_WTPC_CUIF_M_SFRM_TPC_UCHENn_UDCH_C0_EN1                                       (0x00000004)
#define FEC_WTPC_CUIF_P_SFRM_TPC_UCHENn_UDCH_C0_EN0                                       (1)
#define FEC_WTPC_CUIF_L_SFRM_TPC_UCHENn_UDCH_C0_EN0                                       (1)
#define FEC_WTPC_CUIF_M_SFRM_TPC_UCHENn_UDCH_C0_EN0                                       (0x00000002)
#define FEC_WTPC_CUIF_P_SFRM_TPC_UCHENn_UCCH_C0_EN                                        (0)
#define FEC_WTPC_CUIF_L_SFRM_TPC_UCHENn_UCCH_C0_EN                                        (1)
#define FEC_WTPC_CUIF_M_SFRM_TPC_UCHENn_UCCH_C0_EN                                        (0x00000001)

// ---------- SLT_TPC_CPC_SLOT0_Cn bit-field ----------
#define FEC_WTPC_CUIF_P_SLT_TPC_CPC_SLOT0_Cn_CPC_SLOT_STA_07                              (28)
#define FEC_WTPC_CUIF_L_SLT_TPC_CPC_SLOT0_Cn_CPC_SLOT_STA_07                              (3)
#define FEC_WTPC_CUIF_M_SLT_TPC_CPC_SLOT0_Cn_CPC_SLOT_STA_07                              (0x70000000)
#define FEC_WTPC_CUIF_P_SLT_TPC_CPC_SLOT0_Cn_CPC_SLOT_STA_06                              (24)
#define FEC_WTPC_CUIF_L_SLT_TPC_CPC_SLOT0_Cn_CPC_SLOT_STA_06                              (3)
#define FEC_WTPC_CUIF_M_SLT_TPC_CPC_SLOT0_Cn_CPC_SLOT_STA_06                              (0x07000000)
#define FEC_WTPC_CUIF_P_SLT_TPC_CPC_SLOT0_Cn_CPC_SLOT_STA_05                              (20)
#define FEC_WTPC_CUIF_L_SLT_TPC_CPC_SLOT0_Cn_CPC_SLOT_STA_05                              (3)
#define FEC_WTPC_CUIF_M_SLT_TPC_CPC_SLOT0_Cn_CPC_SLOT_STA_05                              (0x00700000)
#define FEC_WTPC_CUIF_P_SLT_TPC_CPC_SLOT0_Cn_CPC_SLOT_STA_04                              (16)
#define FEC_WTPC_CUIF_L_SLT_TPC_CPC_SLOT0_Cn_CPC_SLOT_STA_04                              (3)
#define FEC_WTPC_CUIF_M_SLT_TPC_CPC_SLOT0_Cn_CPC_SLOT_STA_04                              (0x00070000)
#define FEC_WTPC_CUIF_P_SLT_TPC_CPC_SLOT0_Cn_CPC_SLOT_STA_03                              (12)
#define FEC_WTPC_CUIF_L_SLT_TPC_CPC_SLOT0_Cn_CPC_SLOT_STA_03                              (3)
#define FEC_WTPC_CUIF_M_SLT_TPC_CPC_SLOT0_Cn_CPC_SLOT_STA_03                              (0x00007000)
#define FEC_WTPC_CUIF_P_SLT_TPC_CPC_SLOT0_Cn_CPC_SLOT_STA_02                              (8)
#define FEC_WTPC_CUIF_L_SLT_TPC_CPC_SLOT0_Cn_CPC_SLOT_STA_02                              (3)
#define FEC_WTPC_CUIF_M_SLT_TPC_CPC_SLOT0_Cn_CPC_SLOT_STA_02                              (0x00000700)
#define FEC_WTPC_CUIF_P_SLT_TPC_CPC_SLOT0_Cn_CPC_SLOT_STA_01                              (4)
#define FEC_WTPC_CUIF_L_SLT_TPC_CPC_SLOT0_Cn_CPC_SLOT_STA_01                              (3)
#define FEC_WTPC_CUIF_M_SLT_TPC_CPC_SLOT0_Cn_CPC_SLOT_STA_01                              (0x00000070)
#define FEC_WTPC_CUIF_P_SLT_TPC_CPC_SLOT0_Cn_CPC_SLOT_STA_00                              (0)
#define FEC_WTPC_CUIF_L_SLT_TPC_CPC_SLOT0_Cn_CPC_SLOT_STA_00                              (3)
#define FEC_WTPC_CUIF_M_SLT_TPC_CPC_SLOT0_Cn_CPC_SLOT_STA_00                              (0x00000007)

// ---------- SLT_TPC_CPC_SLOT1_Cn bit-field ----------
#define FEC_WTPC_CUIF_P_SLT_TPC_CPC_SLOT1_Cn_CPC_SLOT_STA_14                              (24)
#define FEC_WTPC_CUIF_L_SLT_TPC_CPC_SLOT1_Cn_CPC_SLOT_STA_14                              (3)
#define FEC_WTPC_CUIF_M_SLT_TPC_CPC_SLOT1_Cn_CPC_SLOT_STA_14                              (0x07000000)
#define FEC_WTPC_CUIF_P_SLT_TPC_CPC_SLOT1_Cn_CPC_SLOT_STA_13                              (20)
#define FEC_WTPC_CUIF_L_SLT_TPC_CPC_SLOT1_Cn_CPC_SLOT_STA_13                              (3)
#define FEC_WTPC_CUIF_M_SLT_TPC_CPC_SLOT1_Cn_CPC_SLOT_STA_13                              (0x00700000)
#define FEC_WTPC_CUIF_P_SLT_TPC_CPC_SLOT1_Cn_CPC_SLOT_STA_12                              (16)
#define FEC_WTPC_CUIF_L_SLT_TPC_CPC_SLOT1_Cn_CPC_SLOT_STA_12                              (3)
#define FEC_WTPC_CUIF_M_SLT_TPC_CPC_SLOT1_Cn_CPC_SLOT_STA_12                              (0x00070000)
#define FEC_WTPC_CUIF_P_SLT_TPC_CPC_SLOT1_Cn_CPC_SLOT_STA_11                              (12)
#define FEC_WTPC_CUIF_L_SLT_TPC_CPC_SLOT1_Cn_CPC_SLOT_STA_11                              (3)
#define FEC_WTPC_CUIF_M_SLT_TPC_CPC_SLOT1_Cn_CPC_SLOT_STA_11                              (0x00007000)
#define FEC_WTPC_CUIF_P_SLT_TPC_CPC_SLOT1_Cn_CPC_SLOT_STA_10                              (8)
#define FEC_WTPC_CUIF_L_SLT_TPC_CPC_SLOT1_Cn_CPC_SLOT_STA_10                              (3)
#define FEC_WTPC_CUIF_M_SLT_TPC_CPC_SLOT1_Cn_CPC_SLOT_STA_10                              (0x00000700)
#define FEC_WTPC_CUIF_P_SLT_TPC_CPC_SLOT1_Cn_CPC_SLOT_STA_09                              (4)
#define FEC_WTPC_CUIF_L_SLT_TPC_CPC_SLOT1_Cn_CPC_SLOT_STA_09                              (3)
#define FEC_WTPC_CUIF_M_SLT_TPC_CPC_SLOT1_Cn_CPC_SLOT_STA_09                              (0x00000070)
#define FEC_WTPC_CUIF_P_SLT_TPC_CPC_SLOT1_Cn_CPC_SLOT_STA_08                              (0)
#define FEC_WTPC_CUIF_L_SLT_TPC_CPC_SLOT1_Cn_CPC_SLOT_STA_08                              (3)
#define FEC_WTPC_CUIF_M_SLT_TPC_CPC_SLOT1_Cn_CPC_SLOT_STA_08                              (0x00000007)

// ---------- SLT_TPC_CPC_SLOT_EN_Cn bit-field ----------
#define FEC_WTPC_CUIF_P_SLT_TPC_CPC_SLOT_EN_Cn_CPC_SLOT_EN_RESET                          (16)
#define FEC_WTPC_CUIF_L_SLT_TPC_CPC_SLOT_EN_Cn_CPC_SLOT_EN_RESET                          (1)
#define FEC_WTPC_CUIF_M_SLT_TPC_CPC_SLOT_EN_Cn_CPC_SLOT_EN_RESET                          (0x00010000)
#define FEC_WTPC_CUIF_P_SLT_TPC_CPC_SLOT_EN_Cn_CPC_SLOT_EN_SET                            (0)
#define FEC_WTPC_CUIF_L_SLT_TPC_CPC_SLOT_EN_Cn_CPC_SLOT_EN_SET                            (15)
#define FEC_WTPC_CUIF_M_SLT_TPC_CPC_SLOT_EN_Cn_CPC_SLOT_EN_SET                            (0x00007FFF)

// ---------- PCFE1_INPUT0_P bit-field ----------
#define FEC_WTPC_CUIF_P_PCFE1_INPUT0_P_en_force_op_0                                      (24)
#define FEC_WTPC_CUIF_L_PCFE1_INPUT0_P_en_force_op_0                                      (8)
#define FEC_WTPC_CUIF_M_PCFE1_INPUT0_P_en_force_op_0                                      (0xFF000000)
#define FEC_WTPC_CUIF_P_PCFE1_INPUT0_P_force_op_mode_0                                    (16)
#define FEC_WTPC_CUIF_L_PCFE1_INPUT0_P_force_op_mode_0                                    (8)
#define FEC_WTPC_CUIF_M_PCFE1_INPUT0_P_force_op_mode_0                                    (0x00FF0000)
#define FEC_WTPC_CUIF_P_PCFE1_INPUT0_P_en_force_pa_table_0                                (8)
#define FEC_WTPC_CUIF_L_PCFE1_INPUT0_P_en_force_pa_table_0                                (8)
#define FEC_WTPC_CUIF_M_PCFE1_INPUT0_P_en_force_pa_table_0                                (0x0000FF00)
#define FEC_WTPC_CUIF_P_PCFE1_INPUT0_P_force_pa_table_mode_0                              (0)
#define FEC_WTPC_CUIF_L_PCFE1_INPUT0_P_force_pa_table_mode_0                              (8)
#define FEC_WTPC_CUIF_M_PCFE1_INPUT0_P_force_pa_table_mode_0                              (0x000000FF)

// ---------- PCFE1_INPUT1_P bit-field ----------
#define FEC_WTPC_CUIF_P_PCFE1_INPUT1_P_en_force_pa_index_0                                (24)
#define FEC_WTPC_CUIF_L_PCFE1_INPUT1_P_en_force_pa_index_0                                (8)
#define FEC_WTPC_CUIF_M_PCFE1_INPUT1_P_en_force_pa_index_0                                (0xFF000000)
#define FEC_WTPC_CUIF_P_PCFE1_INPUT1_P_force_idx_pa_0                                     (16)
#define FEC_WTPC_CUIF_L_PCFE1_INPUT1_P_force_idx_pa_0                                     (8)
#define FEC_WTPC_CUIF_M_PCFE1_INPUT1_P_force_idx_pa_0                                     (0x00FF0000)
#define FEC_WTPC_CUIF_P_PCFE1_INPUT1_P_bypass_et_sw_0                                     (8)
#define FEC_WTPC_CUIF_L_PCFE1_INPUT1_P_bypass_et_sw_0                                     (8)
#define FEC_WTPC_CUIF_M_PCFE1_INPUT1_P_bypass_et_sw_0                                     (0x0000FF00)
#define FEC_WTPC_CUIF_P_PCFE1_INPUT1_P_bypass_dpd_sw_0                                    (0)
#define FEC_WTPC_CUIF_L_PCFE1_INPUT1_P_bypass_dpd_sw_0                                    (8)
#define FEC_WTPC_CUIF_M_PCFE1_INPUT1_P_bypass_dpd_sw_0                                    (0x000000FF)

// ---------- PCFE1_INPUT0_Q bit-field ----------
#define FEC_WTPC_CUIF_P_PCFE1_INPUT0_Q_en_force_op_2                                      (24)
#define FEC_WTPC_CUIF_L_PCFE1_INPUT0_Q_en_force_op_2                                      (8)
#define FEC_WTPC_CUIF_M_PCFE1_INPUT0_Q_en_force_op_2                                      (0xFF000000)
#define FEC_WTPC_CUIF_P_PCFE1_INPUT0_Q_force_op_mode_2                                    (16)
#define FEC_WTPC_CUIF_L_PCFE1_INPUT0_Q_force_op_mode_2                                    (8)
#define FEC_WTPC_CUIF_M_PCFE1_INPUT0_Q_force_op_mode_2                                    (0x00FF0000)
#define FEC_WTPC_CUIF_P_PCFE1_INPUT0_Q_en_force_pa_table_2                                (8)
#define FEC_WTPC_CUIF_L_PCFE1_INPUT0_Q_en_force_pa_table_2                                (8)
#define FEC_WTPC_CUIF_M_PCFE1_INPUT0_Q_en_force_pa_table_2                                (0x0000FF00)
#define FEC_WTPC_CUIF_P_PCFE1_INPUT0_Q_force_pa_table_mode_2                              (0)
#define FEC_WTPC_CUIF_L_PCFE1_INPUT0_Q_force_pa_table_mode_2                              (8)
#define FEC_WTPC_CUIF_M_PCFE1_INPUT0_Q_force_pa_table_mode_2                              (0x000000FF)

// ---------- PCFE1_INPUT1_Q bit-field ----------
#define FEC_WTPC_CUIF_P_PCFE1_INPUT1_Q_en_force_pa_index_2                                (24)
#define FEC_WTPC_CUIF_L_PCFE1_INPUT1_Q_en_force_pa_index_2                                (8)
#define FEC_WTPC_CUIF_M_PCFE1_INPUT1_Q_en_force_pa_index_2                                (0xFF000000)
#define FEC_WTPC_CUIF_P_PCFE1_INPUT1_Q_force_idx_pa_2                                     (16)
#define FEC_WTPC_CUIF_L_PCFE1_INPUT1_Q_force_idx_pa_2                                     (8)
#define FEC_WTPC_CUIF_M_PCFE1_INPUT1_Q_force_idx_pa_2                                     (0x00FF0000)
#define FEC_WTPC_CUIF_P_PCFE1_INPUT1_Q_bypass_et_sw_2                                     (8)
#define FEC_WTPC_CUIF_L_PCFE1_INPUT1_Q_bypass_et_sw_2                                     (8)
#define FEC_WTPC_CUIF_M_PCFE1_INPUT1_Q_bypass_et_sw_2                                     (0x0000FF00)
#define FEC_WTPC_CUIF_P_PCFE1_INPUT1_Q_bypass_dpd_sw_2                                    (0)
#define FEC_WTPC_CUIF_L_PCFE1_INPUT1_Q_bypass_dpd_sw_2                                    (8)
#define FEC_WTPC_CUIF_M_PCFE1_INPUT1_Q_bypass_dpd_sw_2                                    (0x000000FF)

// ---------- ATX_S_INPUT0 bit-field ----------
#define FEC_WTPC_CUIF_P_ATX_S_INPUT0_gthermal_bkf_db_sw                                   (16)
#define FEC_WTPC_CUIF_L_ATX_S_INPUT0_gthermal_bkf_db_sw                                   (16)
#define FEC_WTPC_CUIF_M_ATX_S_INPUT0_gthermal_bkf_db_sw                                   (0xFFFF0000)
#define FEC_WTPC_CUIF_P_ATX_S_INPUT0_gop_mode_ofs_db_sw                                   (0)
#define FEC_WTPC_CUIF_L_ATX_S_INPUT0_gop_mode_ofs_db_sw                                   (16)
#define FEC_WTPC_CUIF_M_ATX_S_INPUT0_gop_mode_ofs_db_sw                                   (0x0000FFFF)

// ---------- CALCULATE_SLOT bit-field ----------
#define FEC_WTPC_CUIF_P_CALCULATE_SLOT_hsdpcch_slot_en                                    (8)
#define FEC_WTPC_CUIF_L_CALCULATE_SLOT_hsdpcch_slot_en                                    (8)
#define FEC_WTPC_CUIF_M_CALCULATE_SLOT_hsdpcch_slot_en                                    (0x0000FF00)
#define FEC_WTPC_CUIF_P_CALCULATE_SLOT_calculate_slot                                     (0)
#define FEC_WTPC_CUIF_L_CALCULATE_SLOT_calculate_slot                                     (8)
#define FEC_WTPC_CUIF_M_CALCULATE_SLOT_calculate_slot                                     (0x000000FF)

// ---------- INI_TPC_RAT_TYPE bit-field ----------
#define FEC_WTPC_CUIF_P_INI_TPC_RAT_TYPE_rat_type                                         (0)
#define FEC_WTPC_CUIF_L_INI_TPC_RAT_TYPE_rat_type                                         (8)
#define FEC_WTPC_CUIF_M_INI_TPC_RAT_TYPE_rat_type                                         (0x000000FF)

// ---------- INI_TPC_MODE bit-field ----------
#define FEC_WTPC_CUIF_P_INI_TPC_MODE_fdd_mode                                             (0)
#define FEC_WTPC_CUIF_L_INI_TPC_MODE_fdd_mode                                             (8)
#define FEC_WTPC_CUIF_M_INI_TPC_MODE_fdd_mode                                             (0x000000FF)

// ---------- INI_TPC_PINI bit-field ----------
#define FEC_WTPC_CUIF_P_INI_TPC_PINI_TX_PINI_EN                                           (24)
#define FEC_WTPC_CUIF_L_INI_TPC_PINI_TX_PINI_EN                                           (8)
#define FEC_WTPC_CUIF_M_INI_TPC_PINI_TX_PINI_EN                                           (0xFF000000)
#define FEC_WTPC_CUIF_P_INI_TPC_PINI_PA_INI_FR                                            (16)
#define FEC_WTPC_CUIF_L_INI_TPC_PINI_PA_INI_FR                                            (8)
#define FEC_WTPC_CUIF_M_INI_TPC_PINI_PA_INI_FR                                            (0x00FF0000)
#define FEC_WTPC_CUIF_P_INI_TPC_PINI_PINI_FR                                              (0)
#define FEC_WTPC_CUIF_L_INI_TPC_PINI_PINI_FR                                              (16)
#define FEC_WTPC_CUIF_M_INI_TPC_PINI_PINI_FR                                              (0x0000FFFF)

// ---------- INI_TPC_DCOMP bit-field ----------
#define FEC_WTPC_CUIF_P_INI_TPC_DCOMP_D_COMP                                              (0)
#define FEC_WTPC_CUIF_L_INI_TPC_DCOMP_D_COMP                                              (16)
#define FEC_WTPC_CUIF_M_INI_TPC_DCOMP_D_COMP                                              (0x0000FFFF)

// ---------- INI_TPC_MPRCOEFn bit-field ----------
#define FEC_WTPC_CUIF_P_INI_TPC_MPRCOEFn_MPR_COEF_CASE_n_A_0                              (16)
#define FEC_WTPC_CUIF_L_INI_TPC_MPRCOEFn_MPR_COEF_CASE_n_A_0                              (16)
#define FEC_WTPC_CUIF_M_INI_TPC_MPRCOEFn_MPR_COEF_CASE_n_A_0                              (0xFFFF0000)
#define FEC_WTPC_CUIF_P_INI_TPC_MPRCOEFn_MPR_COEF_CASE_n_B_0                              (0)
#define FEC_WTPC_CUIF_L_INI_TPC_MPRCOEFn_MPR_COEF_CASE_n_B_0                              (16)
#define FEC_WTPC_CUIF_M_INI_TPC_MPRCOEFn_MPR_COEF_CASE_n_B_0                              (0x0000FFFF)

// ---------- INI_ATX_STATIC_INPUT0 bit-field ----------
#define FEC_WTPC_CUIF_P_INI_ATX_STATIC_INPUT0_gtxiq_bkf_db_sw                             (0)
#define FEC_WTPC_CUIF_L_INI_ATX_STATIC_INPUT0_gtxiq_bkf_db_sw                             (16)
#define FEC_WTPC_CUIF_M_INI_ATX_STATIC_INPUT0_gtxiq_bkf_db_sw                             (0x0000FFFF)

// ---------- INI_ATX_STATIC_INPUT1 bit-field ----------
#define FEC_WTPC_CUIF_P_INI_ATX_STATIC_INPUT1_pset_adc_dbm_sw                             (16)
#define FEC_WTPC_CUIF_L_INI_ATX_STATIC_INPUT1_pset_adc_dbm_sw                             (16)
#define FEC_WTPC_CUIF_M_INI_ATX_STATIC_INPUT1_pset_adc_dbm_sw                             (0xFFFF0000)
#define FEC_WTPC_CUIF_P_INI_ATX_STATIC_INPUT1_pset_ref_dbm_sw                             (0)
#define FEC_WTPC_CUIF_L_INI_ATX_STATIC_INPUT1_pset_ref_dbm_sw                             (16)
#define FEC_WTPC_CUIF_M_INI_ATX_STATIC_INPUT1_pset_ref_dbm_sw                             (0x0000FFFF)

// ---------- INI_ATX_STATIC_INPUT2 bit-field ----------
#define FEC_WTPC_CUIF_P_INI_ATX_STATIC_INPUT2_gtx_bb_max_db_sw                            (16)
#define FEC_WTPC_CUIF_L_INI_ATX_STATIC_INPUT2_gtx_bb_max_db_sw                            (16)
#define FEC_WTPC_CUIF_M_INI_ATX_STATIC_INPUT2_gtx_bb_max_db_sw                            (0xFFFF0000)
#define FEC_WTPC_CUIF_P_INI_ATX_STATIC_INPUT2_gtx_bb_min_db_sw                            (0)
#define FEC_WTPC_CUIF_L_INI_ATX_STATIC_INPUT2_gtx_bb_min_db_sw                            (16)
#define FEC_WTPC_CUIF_M_INI_ATX_STATIC_INPUT2_gtx_bb_min_db_sw                            (0x0000FFFF)

// ---------- INI_ATX_STATIC_INPUT3 bit-field ----------
#define FEC_WTPC_CUIF_P_INI_ATX_STATIC_INPUT3_gtx_pga_max_db_sw                           (16)
#define FEC_WTPC_CUIF_L_INI_ATX_STATIC_INPUT3_gtx_pga_max_db_sw                           (16)
#define FEC_WTPC_CUIF_M_INI_ATX_STATIC_INPUT3_gtx_pga_max_db_sw                           (0xFFFF0000)
#define FEC_WTPC_CUIF_P_INI_ATX_STATIC_INPUT3_gtx_pga_min_db_sw                           (0)
#define FEC_WTPC_CUIF_L_INI_ATX_STATIC_INPUT3_gtx_pga_min_db_sw                           (16)
#define FEC_WTPC_CUIF_M_INI_ATX_STATIC_INPUT3_gtx_pga_min_db_sw                           (0x0000FFFF)

// ---------- INI_ATX_STATIC_INPUT4 bit-field ----------
#define FEC_WTPC_CUIF_P_INI_ATX_STATIC_INPUT4_gdet_rf_max_db_sw                           (16)
#define FEC_WTPC_CUIF_L_INI_ATX_STATIC_INPUT4_gdet_rf_max_db_sw                           (16)
#define FEC_WTPC_CUIF_M_INI_ATX_STATIC_INPUT4_gdet_rf_max_db_sw                           (0xFFFF0000)
#define FEC_WTPC_CUIF_P_INI_ATX_STATIC_INPUT4_gdet_rf_min_db_sw                           (0)
#define FEC_WTPC_CUIF_L_INI_ATX_STATIC_INPUT4_gdet_rf_min_db_sw                           (16)
#define FEC_WTPC_CUIF_M_INI_ATX_STATIC_INPUT4_gdet_rf_min_db_sw                           (0x0000FFFF)

// ---------- INI_ATX_STATIC_INPUT5 bit-field ----------
#define FEC_WTPC_CUIF_P_INI_ATX_STATIC_INPUT5_no_use_idx_etdbb_rb_sw                      (16)
#define FEC_WTPC_CUIF_L_INI_ATX_STATIC_INPUT5_no_use_idx_etdbb_rb_sw                      (16)
#define FEC_WTPC_CUIF_M_INI_ATX_STATIC_INPUT5_no_use_idx_etdbb_rb_sw                      (0xFFFF0000)
#define FEC_WTPC_CUIF_P_INI_ATX_STATIC_INPUT5_select_default_dpdlut_sw                    (0)
#define FEC_WTPC_CUIF_L_INI_ATX_STATIC_INPUT5_select_default_dpdlut_sw                    (8)
#define FEC_WTPC_CUIF_M_INI_ATX_STATIC_INPUT5_select_default_dpdlut_sw                    (0x000000FF)

// ---------- INI_ATX_STATIC_INPUT6 bit-field ----------
#define FEC_WTPC_CUIF_P_INI_ATX_STATIC_INPUT6_gdet_ofs_db_sw                              (0)
#define FEC_WTPC_CUIF_L_INI_ATX_STATIC_INPUT6_gdet_ofs_db_sw                              (16)
#define FEC_WTPC_CUIF_M_INI_ATX_STATIC_INPUT6_gdet_ofs_db_sw                              (0x0000FFFF)

// ---------- INI_ATX_DYNAMIC_INPUT0_0 bit-field ----------
#define FEC_WTPC_CUIF_P_INI_ATX_DYNAMIC_INPUT0_0_en_in_slot_corr_sw_0                     (24)
#define FEC_WTPC_CUIF_L_INI_ATX_DYNAMIC_INPUT0_0_en_in_slot_corr_sw_0                     (8)
#define FEC_WTPC_CUIF_M_INI_ATX_DYNAMIC_INPUT0_0_en_in_slot_corr_sw_0                     (0xFF000000)
#define FEC_WTPC_CUIF_P_INI_ATX_DYNAMIC_INPUT0_0_pga_select_method_0                      (16)
#define FEC_WTPC_CUIF_L_INI_ATX_DYNAMIC_INPUT0_0_pga_select_method_0                      (8)
#define FEC_WTPC_CUIF_M_INI_ATX_DYNAMIC_INPUT0_0_pga_select_method_0                      (0x00FF0000)
#define FEC_WTPC_CUIF_P_INI_ATX_DYNAMIC_INPUT0_0_pth_ilpc_dbm_0                           (0)
#define FEC_WTPC_CUIF_L_INI_ATX_DYNAMIC_INPUT0_0_pth_ilpc_dbm_0                           (16)
#define FEC_WTPC_CUIF_M_INI_ATX_DYNAMIC_INPUT0_0_pth_ilpc_dbm_0                           (0x0000FFFF)

// ---------- INI_ATX_DYNAMIC_INPUT0_1 bit-field ----------
#define FEC_WTPC_CUIF_P_INI_ATX_DYNAMIC_INPUT0_1_en_in_slot_corr_sw_2                     (24)
#define FEC_WTPC_CUIF_L_INI_ATX_DYNAMIC_INPUT0_1_en_in_slot_corr_sw_2                     (8)
#define FEC_WTPC_CUIF_M_INI_ATX_DYNAMIC_INPUT0_1_en_in_slot_corr_sw_2                     (0xFF000000)
#define FEC_WTPC_CUIF_P_INI_ATX_DYNAMIC_INPUT0_1_pga_select_method_2                      (16)
#define FEC_WTPC_CUIF_L_INI_ATX_DYNAMIC_INPUT0_1_pga_select_method_2                      (8)
#define FEC_WTPC_CUIF_M_INI_ATX_DYNAMIC_INPUT0_1_pga_select_method_2                      (0x00FF0000)
#define FEC_WTPC_CUIF_P_INI_ATX_DYNAMIC_INPUT0_1_pth_ilpc_dbm_2                           (0)
#define FEC_WTPC_CUIF_L_INI_ATX_DYNAMIC_INPUT0_1_pth_ilpc_dbm_2                           (16)
#define FEC_WTPC_CUIF_M_INI_ATX_DYNAMIC_INPUT0_1_pth_ilpc_dbm_2                           (0x0000FFFF)

// ---------- INI_ATX_DYNAMIC_INPUT0 bit-field ----------
#define FEC_WTPC_CUIF_P_INI_ATX_DYNAMIC_INPUT0_ptar_offset_sw_0                           (16)
#define FEC_WTPC_CUIF_L_INI_ATX_DYNAMIC_INPUT0_ptar_offset_sw_0                           (16)
#define FEC_WTPC_CUIF_M_INI_ATX_DYNAMIC_INPUT0_ptar_offset_sw_0                           (0xFFFF0000)
#define FEC_WTPC_CUIF_P_INI_ATX_DYNAMIC_INPUT0_th_cmeas_db_0                              (0)
#define FEC_WTPC_CUIF_L_INI_ATX_DYNAMIC_INPUT0_th_cmeas_db_0                              (16)
#define FEC_WTPC_CUIF_M_INI_ATX_DYNAMIC_INPUT0_th_cmeas_db_0                              (0x0000FFFF)

// ---------- INI_PCFE1_INPUT0_P bit-field ----------
#define FEC_WTPC_CUIF_P_INI_PCFE1_INPUT0_P_en_pa_swpt_shift_0                             (16)
#define FEC_WTPC_CUIF_L_INI_PCFE1_INPUT0_P_en_pa_swpt_shift_0                             (8)
#define FEC_WTPC_CUIF_M_INI_PCFE1_INPUT0_P_en_pa_swpt_shift_0                             (0x00FF0000)
#define FEC_WTPC_CUIF_P_INI_PCFE1_INPUT0_P_pa_swpt_shift_pth_0                            (0)
#define FEC_WTPC_CUIF_L_INI_PCFE1_INPUT0_P_pa_swpt_shift_pth_0                            (16)
#define FEC_WTPC_CUIF_M_INI_PCFE1_INPUT0_P_pa_swpt_shift_pth_0                            (0x0000FFFF)

// ---------- INI_PCFE1_INPUT0_Q bit-field ----------
#define FEC_WTPC_CUIF_P_INI_PCFE1_INPUT0_Q_en_pa_swpt_shift_2                             (16)
#define FEC_WTPC_CUIF_L_INI_PCFE1_INPUT0_Q_en_pa_swpt_shift_2                             (8)
#define FEC_WTPC_CUIF_M_INI_PCFE1_INPUT0_Q_en_pa_swpt_shift_2                             (0x00FF0000)
#define FEC_WTPC_CUIF_P_INI_PCFE1_INPUT0_Q_pa_swpt_shift_pth_2                            (0)
#define FEC_WTPC_CUIF_L_INI_PCFE1_INPUT0_Q_pa_swpt_shift_pth_2                            (16)
#define FEC_WTPC_CUIF_M_INI_PCFE1_INPUT0_Q_pa_swpt_shift_pth_2                            (0x0000FFFF)

// ---------- INI_DDPC_INPUT_GROUP0 bit-field ----------
#define FEC_WTPC_CUIF_P_INI_DDPC_INPUT_GROUP0_ddpc_nor_period_0                           (16)
#define FEC_WTPC_CUIF_L_INI_DDPC_INPUT_GROUP0_ddpc_nor_period_0                           (16)
#define FEC_WTPC_CUIF_M_INI_DDPC_INPUT_GROUP0_ddpc_nor_period_0                           (0xFFFF0000)
#define FEC_WTPC_CUIF_P_INI_DDPC_INPUT_GROUP0_ddpc_nor_period_1                           (0)
#define FEC_WTPC_CUIF_L_INI_DDPC_INPUT_GROUP0_ddpc_nor_period_1                           (16)
#define FEC_WTPC_CUIF_M_INI_DDPC_INPUT_GROUP0_ddpc_nor_period_1                           (0x0000FFFF)

// ---------- INI_DDPC_INPUT_GROUP1 bit-field ----------
#define FEC_WTPC_CUIF_P_INI_DDPC_INPUT_GROUP1_ddpc_nor_period_2                           (16)
#define FEC_WTPC_CUIF_L_INI_DDPC_INPUT_GROUP1_ddpc_nor_period_2                           (16)
#define FEC_WTPC_CUIF_M_INI_DDPC_INPUT_GROUP1_ddpc_nor_period_2                           (0xFFFF0000)
#define FEC_WTPC_CUIF_P_INI_DDPC_INPUT_GROUP1_ddpc_nor_period_3                           (0)
#define FEC_WTPC_CUIF_L_INI_DDPC_INPUT_GROUP1_ddpc_nor_period_3                           (16)
#define FEC_WTPC_CUIF_M_INI_DDPC_INPUT_GROUP1_ddpc_nor_period_3                           (0x0000FFFF)

// ---------- INI_DDPC_INPUT_GROUP2 bit-field ----------
#define FEC_WTPC_CUIF_P_INI_DDPC_INPUT_GROUP2_meas_term_0                                 (24)
#define FEC_WTPC_CUIF_L_INI_DDPC_INPUT_GROUP2_meas_term_0                                 (8)
#define FEC_WTPC_CUIF_M_INI_DDPC_INPUT_GROUP2_meas_term_0                                 (0xFF000000)
#define FEC_WTPC_CUIF_P_INI_DDPC_INPUT_GROUP2_meas_term_1                                 (16)
#define FEC_WTPC_CUIF_L_INI_DDPC_INPUT_GROUP2_meas_term_1                                 (8)
#define FEC_WTPC_CUIF_M_INI_DDPC_INPUT_GROUP2_meas_term_1                                 (0x00FF0000)
#define FEC_WTPC_CUIF_P_INI_DDPC_INPUT_GROUP2_meas_term_2                                 (8)
#define FEC_WTPC_CUIF_L_INI_DDPC_INPUT_GROUP2_meas_term_2                                 (8)
#define FEC_WTPC_CUIF_M_INI_DDPC_INPUT_GROUP2_meas_term_2                                 (0x0000FF00)
#define FEC_WTPC_CUIF_P_INI_DDPC_INPUT_GROUP2_meas_term_3                                 (0)
#define FEC_WTPC_CUIF_L_INI_DDPC_INPUT_GROUP2_meas_term_3                                 (8)
#define FEC_WTPC_CUIF_M_INI_DDPC_INPUT_GROUP2_meas_term_3                                 (0x000000FF)

// ---------- INI_ILPC_INPUT0 bit-field ----------
#define FEC_WTPC_CUIF_P_INI_ILPC_INPUT0_gstep_th                                          (16)
#define FEC_WTPC_CUIF_L_INI_ILPC_INPUT0_gstep_th                                          (16)
#define FEC_WTPC_CUIF_M_INI_ILPC_INPUT0_gstep_th                                          (0xFFFF0000)
#define FEC_WTPC_CUIF_P_INI_ILPC_INPUT0_derr                                              (8)
#define FEC_WTPC_CUIF_L_INI_ILPC_INPUT0_derr                                              (8)
#define FEC_WTPC_CUIF_M_INI_ILPC_INPUT0_derr                                              (0x0000FF00)
#define FEC_WTPC_CUIF_P_INI_ILPC_INPUT0_alpha                                             (0)
#define FEC_WTPC_CUIF_L_INI_ILPC_INPUT0_alpha                                             (8)
#define FEC_WTPC_CUIF_M_INI_ILPC_INPUT0_alpha                                             (0x000000FF)

// ---------- INI_ILPC_INPUT1 bit-field ----------
#define FEC_WTPC_CUIF_P_INI_ILPC_INPUT1_disable_ilpc                                      (0)
#define FEC_WTPC_CUIF_L_INI_ILPC_INPUT1_disable_ilpc                                      (8)
#define FEC_WTPC_CUIF_M_INI_ILPC_INPUT1_disable_ilpc                                      (0x000000FF)

// ---------- INI_RFIC_CS_INPUT0_0 bit-field ----------
#define FEC_WTPC_CUIF_P_INI_RFIC_CS_INPUT0_0_rfic_cs_0                                    (0)
#define FEC_WTPC_CUIF_L_INI_RFIC_CS_INPUT0_0_rfic_cs_0                                    (8)
#define FEC_WTPC_CUIF_M_INI_RFIC_CS_INPUT0_0_rfic_cs_0                                    (0x000000FF)

// ---------- INI_MIPI_LENGTH_INPUT0_0 bit-field ----------
#define FEC_WTPC_CUIF_P_INI_MIPI_LENGTH_INPUT0_0_mipi_length_apt_0                        (16)
#define FEC_WTPC_CUIF_L_INI_MIPI_LENGTH_INPUT0_0_mipi_length_apt_0                        (8)
#define FEC_WTPC_CUIF_M_INI_MIPI_LENGTH_INPUT0_0_mipi_length_apt_0                        (0x00FF0000)
#define FEC_WTPC_CUIF_P_INI_MIPI_LENGTH_INPUT0_0_mipi_length_dpd_0                        (8)
#define FEC_WTPC_CUIF_L_INI_MIPI_LENGTH_INPUT0_0_mipi_length_dpd_0                        (8)
#define FEC_WTPC_CUIF_M_INI_MIPI_LENGTH_INPUT0_0_mipi_length_dpd_0                        (0x0000FF00)
#define FEC_WTPC_CUIF_P_INI_MIPI_LENGTH_INPUT0_0_mipi_length_et_0                         (0)
#define FEC_WTPC_CUIF_L_INI_MIPI_LENGTH_INPUT0_0_mipi_length_et_0                         (8)
#define FEC_WTPC_CUIF_M_INI_MIPI_LENGTH_INPUT0_0_mipi_length_et_0                         (0x000000FF)

// ---------- INI_MIPI_LENGTH_INPUT1_0 bit-field ----------
#define FEC_WTPC_CUIF_P_INI_MIPI_LENGTH_INPUT1_0_etm_mipi_length_apt_0                    (16)
#define FEC_WTPC_CUIF_L_INI_MIPI_LENGTH_INPUT1_0_etm_mipi_length_apt_0                    (8)
#define FEC_WTPC_CUIF_M_INI_MIPI_LENGTH_INPUT1_0_etm_mipi_length_apt_0                    (0x00FF0000)
#define FEC_WTPC_CUIF_P_INI_MIPI_LENGTH_INPUT1_0_etm_mipi_length_dpd_0                    (8)
#define FEC_WTPC_CUIF_L_INI_MIPI_LENGTH_INPUT1_0_etm_mipi_length_dpd_0                    (8)
#define FEC_WTPC_CUIF_M_INI_MIPI_LENGTH_INPUT1_0_etm_mipi_length_dpd_0                    (0x0000FF00)
#define FEC_WTPC_CUIF_P_INI_MIPI_LENGTH_INPUT1_0_etm_mipi_length_et_0                     (0)
#define FEC_WTPC_CUIF_L_INI_MIPI_LENGTH_INPUT1_0_etm_mipi_length_et_0                     (8)
#define FEC_WTPC_CUIF_M_INI_MIPI_LENGTH_INPUT1_0_etm_mipi_length_et_0                     (0x000000FF)

// ---------- INI_PGA_LENGTH_INPUT0_0 bit-field ----------
#define FEC_WTPC_CUIF_P_INI_PGA_LENGTH_INPUT0_0_pga_length_0                              (0)
#define FEC_WTPC_CUIF_L_INI_PGA_LENGTH_INPUT0_0_pga_length_0                              (8)
#define FEC_WTPC_CUIF_M_INI_PGA_LENGTH_INPUT0_0_pga_length_0                              (0x000000FF)

// ---------- DPD_RF_CW_MASK_INPUT0_0 bit-field ----------
#define FEC_WTPC_CUIF_P_DPD_RF_CW_MASK_INPUT0_0_dpd_rf_cw_mask_0                          (0)
#define FEC_WTPC_CUIF_L_DPD_RF_CW_MASK_INPUT0_0_dpd_rf_cw_mask_0                          (32)
#define FEC_WTPC_CUIF_M_DPD_RF_CW_MASK_INPUT0_0_dpd_rf_cw_mask_0                          (0xFFFFFFFF)

// ---------- DET_RF_CW_MASK_INPUT0_0 bit-field ----------
#define FEC_WTPC_CUIF_P_DET_RF_CW_MASK_INPUT0_0_det_rf_cw_mask_0                          (0)
#define FEC_WTPC_CUIF_L_DET_RF_CW_MASK_INPUT0_0_det_rf_cw_mask_0                          (32)
#define FEC_WTPC_CUIF_M_DET_RF_CW_MASK_INPUT0_0_det_rf_cw_mask_0                          (0xFFFFFFFF)

// ---------- RPT_PRACH_STA bit-field ----------
#define FEC_WTPC_CUIF_P_RPT_PRACH_STA_rach_msg                                            (8)
#define FEC_WTPC_CUIF_L_RPT_PRACH_STA_rach_msg                                            (8)
#define FEC_WTPC_CUIF_M_RPT_PRACH_STA_rach_msg                                            (0x0000FF00)
#define FEC_WTPC_CUIF_P_RPT_PRACH_STA_rach_pre                                            (0)
#define FEC_WTPC_CUIF_L_RPT_PRACH_STA_rach_pre                                            (8)
#define FEC_WTPC_CUIF_M_RPT_PRACH_STA_rach_pre                                            (0x000000FF)

// ---------- RPT_UBETAUD_Rm_k bit-field ----------
#define FEC_WTPC_CUIF_P_RPT_UBETAUD_Rm_k_BETA_UDIRm_C1                                    (16)
#define FEC_WTPC_CUIF_L_RPT_UBETAUD_Rm_k_BETA_UDIRm_C1                                    (16)
#define FEC_WTPC_CUIF_M_RPT_UBETAUD_Rm_k_BETA_UDIRm_C1                                    (0xFFFF0000)
#define FEC_WTPC_CUIF_P_RPT_UBETAUD_Rm_k_BETA_UDIRm_C0                                    (0)
#define FEC_WTPC_CUIF_L_RPT_UBETAUD_Rm_k_BETA_UDIRm_C0                                    (16)
#define FEC_WTPC_CUIF_M_RPT_UBETAUD_Rm_k_BETA_UDIRm_C0                                    (0x0000FFFF)

// ---------- RPT_HBETAn bit-field ----------
#define FEC_WTPC_CUIF_P_RPT_HBETAn_BETA_HSQ                                               (16)
#define FEC_WTPC_CUIF_L_RPT_HBETAn_BETA_HSQ                                               (16)
#define FEC_WTPC_CUIF_M_RPT_HBETAn_BETA_HSQ                                               (0xFFFF0000)
#define FEC_WTPC_CUIF_P_RPT_HBETAn_BETA_HSP                                               (0)
#define FEC_WTPC_CUIF_L_RPT_HBETAn_BETA_HSP                                               (16)
#define FEC_WTPC_CUIF_M_RPT_HBETAn_BETA_HSP                                               (0x0000FFFF)

// ---------- RPT_PTAR_STA bit-field ----------
#define FEC_WTPC_CUIF_P_RPT_PTAR_STA_PTAR_Q_SR                                            (16)
#define FEC_WTPC_CUIF_L_RPT_PTAR_STA_PTAR_Q_SR                                            (16)
#define FEC_WTPC_CUIF_M_RPT_PTAR_STA_PTAR_Q_SR                                            (0xFFFF0000)
#define FEC_WTPC_CUIF_P_RPT_PTAR_STA_PTAR_P_SR                                            (0)
#define FEC_WTPC_CUIF_L_RPT_PTAR_STA_PTAR_P_SR                                            (16)
#define FEC_WTPC_CUIF_M_RPT_PTAR_STA_PTAR_P_SR                                            (0x0000FFFF)

// ---------- RPT_PTAR_REAL_STA bit-field ----------
#define FEC_WTPC_CUIF_P_RPT_PTAR_REAL_STA_PTAR_REALQ_SR                                   (16)
#define FEC_WTPC_CUIF_L_RPT_PTAR_REAL_STA_PTAR_REALQ_SR                                   (16)
#define FEC_WTPC_CUIF_M_RPT_PTAR_REAL_STA_PTAR_REALQ_SR                                   (0xFFFF0000)
#define FEC_WTPC_CUIF_P_RPT_PTAR_REAL_STA_PTAR_REALP_SR                                   (0)
#define FEC_WTPC_CUIF_L_RPT_PTAR_REAL_STA_PTAR_REALP_SR                                   (16)
#define FEC_WTPC_CUIF_M_RPT_PTAR_REAL_STA_PTAR_REALP_SR                                   (0x0000FFFF)

// ---------- RPT_ADDSC_STA0n bit-field ----------
#define FEC_WTPC_CUIF_P_RPT_ADDSC_STA0n_PMAX_MPR_FLAG                                     (16)
#define FEC_WTPC_CUIF_L_RPT_ADDSC_STA0n_PMAX_MPR_FLAG                                     (8)
#define FEC_WTPC_CUIF_M_RPT_ADDSC_STA0n_PMAX_MPR_FLAG                                     (0x00FF0000)
#define FEC_WTPC_CUIF_P_RPT_ADDSC_STA0n_PMIN_FLAG                                         (8)
#define FEC_WTPC_CUIF_L_RPT_ADDSC_STA0n_PMIN_FLAG                                         (8)
#define FEC_WTPC_CUIF_M_RPT_ADDSC_STA0n_PMIN_FLAG                                         (0x0000FF00)
#define FEC_WTPC_CUIF_P_RPT_ADDSC_STA0n_PMIN_UE_FLAG                                      (0)
#define FEC_WTPC_CUIF_L_RPT_ADDSC_STA0n_PMIN_UE_FLAG                                      (8)
#define FEC_WTPC_CUIF_M_RPT_ADDSC_STA0n_PMIN_UE_FLAG                                      (0x000000FF)

// ---------- RPT_TPC_CMD_FAKE_C0 bit-field ----------
#define FEC_WTPC_CUIF_P_RPT_TPC_CMD_FAKE_C0_C0_FLAG                                       (0)
#define FEC_WTPC_CUIF_L_RPT_TPC_CMD_FAKE_C0_C0_FLAG                                       (16)
#define FEC_WTPC_CUIF_M_RPT_TPC_CMD_FAKE_C0_C0_FLAG                                       (0x0000FFFF)

// ---------- RPT_PDPCCH_COMP_STAn bit-field ----------
#define FEC_WTPC_CUIF_P_RPT_PDPCCH_COMP_STAn_PDPCCH_C0_SR                                 (16)
#define FEC_WTPC_CUIF_L_RPT_PDPCCH_COMP_STAn_PDPCCH_C0_SR                                 (16)
#define FEC_WTPC_CUIF_M_RPT_PDPCCH_COMP_STAn_PDPCCH_C0_SR                                 (0xFFFF0000)
#define FEC_WTPC_CUIF_P_RPT_PDPCCH_COMP_STAn_PDPCCH_COMP_C0_SR                            (0)
#define FEC_WTPC_CUIF_L_RPT_PDPCCH_COMP_STAn_PDPCCH_COMP_C0_SR                            (16)
#define FEC_WTPC_CUIF_M_RPT_PDPCCH_COMP_STAn_PDPCCH_COMP_C0_SR                            (0x0000FFFF)

// ---------- RPT_DDPC_RPT_P bit-field ----------
#define FEC_WTPC_CUIF_P_RPT_DDPC_RPT_P_TXPWR_MEAS_P1                                      (16)
#define FEC_WTPC_CUIF_L_RPT_DDPC_RPT_P_TXPWR_MEAS_P1                                      (16)
#define FEC_WTPC_CUIF_M_RPT_DDPC_RPT_P_TXPWR_MEAS_P1                                      (0xFFFF0000)
#define FEC_WTPC_CUIF_P_RPT_DDPC_RPT_P_TXPWR_MEAS_P0                                      (0)
#define FEC_WTPC_CUIF_L_RPT_DDPC_RPT_P_TXPWR_MEAS_P0                                      (16)
#define FEC_WTPC_CUIF_M_RPT_DDPC_RPT_P_TXPWR_MEAS_P0                                      (0x0000FFFF)

// ---------- RPT_DDPC_RPT_Q bit-field ----------
#define FEC_WTPC_CUIF_P_RPT_DDPC_RPT_Q_TXPWR_MEAS_Q1                                      (16)
#define FEC_WTPC_CUIF_L_RPT_DDPC_RPT_Q_TXPWR_MEAS_Q1                                      (16)
#define FEC_WTPC_CUIF_M_RPT_DDPC_RPT_Q_TXPWR_MEAS_Q1                                      (0xFFFF0000)
#define FEC_WTPC_CUIF_P_RPT_DDPC_RPT_Q_TXPWR_MEAS_Q0                                      (0)
#define FEC_WTPC_CUIF_L_RPT_DDPC_RPT_Q_TXPWR_MEAS_Q0                                      (16)
#define FEC_WTPC_CUIF_M_RPT_DDPC_RPT_Q_TXPWR_MEAS_Q0                                      (0x0000FFFF)

// ---------- RPT_UPC_EN_STAn bit-field ----------
#define FEC_WTPC_CUIF_P_RPT_UPC_EN_STAn_PDQ_EN_STA_SR                                     (9)
#define FEC_WTPC_CUIF_L_RPT_UPC_EN_STAn_PDQ_EN_STA_SR                                     (1)
#define FEC_WTPC_CUIF_M_RPT_UPC_EN_STAn_PDQ_EN_STA_SR                                     (0x00000200)
#define FEC_WTPC_CUIF_P_RPT_UPC_EN_STAn_PSQ_EN_STA_SR                                     (8)
#define FEC_WTPC_CUIF_L_RPT_UPC_EN_STAn_PSQ_EN_STA_SR                                     (1)
#define FEC_WTPC_CUIF_M_RPT_UPC_EN_STAn_PSQ_EN_STA_SR                                     (0x00000100)
#define FEC_WTPC_CUIF_P_RPT_UPC_EN_STAn_PDP_EN_STA_SR                                     (5)
#define FEC_WTPC_CUIF_L_RPT_UPC_EN_STAn_PDP_EN_STA_SR                                     (1)
#define FEC_WTPC_CUIF_M_RPT_UPC_EN_STAn_PDP_EN_STA_SR                                     (0x00000020)
#define FEC_WTPC_CUIF_P_RPT_UPC_EN_STAn_PSP_EN_STA_SR                                     (4)
#define FEC_WTPC_CUIF_L_RPT_UPC_EN_STAn_PSP_EN_STA_SR                                     (1)
#define FEC_WTPC_CUIF_M_RPT_UPC_EN_STAn_PSP_EN_STA_SR                                     (0x00000010)
#define FEC_WTPC_CUIF_P_RPT_UPC_EN_STAn_POW_CAL_EN_SR                                     (1)
#define FEC_WTPC_CUIF_L_RPT_UPC_EN_STAn_POW_CAL_EN_SR                                     (1)
#define FEC_WTPC_CUIF_M_RPT_UPC_EN_STAn_POW_CAL_EN_SR                                     (0x00000002)
#define FEC_WTPC_CUIF_P_RPT_UPC_EN_STAn_UPC_ON_SR                                         (0)
#define FEC_WTPC_CUIF_L_RPT_UPC_EN_STAn_UPC_ON_SR                                         (1)
#define FEC_WTPC_CUIF_M_RPT_UPC_EN_STAn_UPC_ON_SR                                         (0x00000001)

// ---------- DPD_LUT_NORM_FACTOR_0 bit-field ----------
#define FEC_WTPC_CUIF_P_DPD_LUT_NORM_FACTOR_0_dpd_lut_norm_factor_0                       (0)
#define FEC_WTPC_CUIF_L_DPD_LUT_NORM_FACTOR_0_dpd_lut_norm_factor_0                       (16)
#define FEC_WTPC_CUIF_M_DPD_LUT_NORM_FACTOR_0_dpd_lut_norm_factor_0                       (0x0000FFFF)
// ---------- INJECT_STRING_EN bit-field ----------
#define FEC_WTPC_CUIF_P_INJECT_STRING_EN_ASSERT_DUMP_FLAG                                 (0)
#define FEC_WTPC_CUIF_L_INJECT_STRING_EN_ASSERT_DUMP_FLAG                                 (4)
#define FEC_WTPC_CUIF_M_INJECT_STRING_EN_ASSERT_DUMP_FLAG                                 (0x0000000F)
#define FEC_WTPC_CUIF_P_INJECT_STRING_EN_SET_GAIN_FLAG                                    (4)
#define FEC_WTPC_CUIF_L_INJECT_STRING_EN_SET_GAIN_FLAG                                    (4)
#define FEC_WTPC_CUIF_M_INJECT_STRING_EN_SET_GAIN_FLAG                                    (0x000000F0)
#define FEC_WTPC_CUIF_P_INJECT_STRING_EN_FORCE_CONTROL_FLAG                               (8)
#define FEC_WTPC_CUIF_L_INJECT_STRING_EN_FORCE_CONTROL_FLAG                               (4)
#define FEC_WTPC_CUIF_M_INJECT_STRING_EN_FORCE_CONTROL_FLAG                               (0x00000F00)
// ---------- INJECT_ASSERT_DUMP bit-field ----------
#define FEC_WTPC_CUIF_P_INJECT_ASSERT_DUMP_TXK_SETTING                                    (0)
#define FEC_WTPC_CUIF_L_INJECT_ASSERT_DUMP_TXK_SETTING                                    (1)
#define FEC_WTPC_CUIF_M_INJECT_ASSERT_DUMP_TXK_SETTING                                    (0x00000001)
#define FEC_WTPC_CUIF_P_INJECT_ASSERT_DUMP_RESET                                          (31)
#define FEC_WTPC_CUIF_L_INJECT_ASSERT_DUMP_RESET                                          (1)
#define FEC_WTPC_CUIF_M_INJECT_ASSERT_DUMP_RESET                                          (0x80000000)

// ---------- INJECT_SET_GAIN bit-field ----------
#define FEC_WTPC_CUIF_P_INJECT_SET_GAIN_FIXED_GAIN_MODE                                   (0)
#define FEC_WTPC_CUIF_L_INJECT_SET_GAIN_FIXED_GAIN_MODE                                   (1)
#define FEC_WTPC_CUIF_M_INJECT_SET_GAIN_FIXED_GAIN_MODE                                   (0x00000001)
#define FEC_WTPC_CUIF_P_INJECT_SET_GAIN_UNIT_BB_GAIN                                      (1)
#define FEC_WTPC_CUIF_L_INJECT_SET_GAIN_UNIT_BB_GAIN                                      (1)
#define FEC_WTPC_CUIF_M_INJECT_SET_GAIN_UNIT_BB_GAIN                                      (0x00000002)
#define FEC_WTPC_CUIF_P_INJECT_SET_GAIN_RESET                                             (31)
#define FEC_WTPC_CUIF_L_INJECT_SET_GAIN_RESET                                             (1)
#define FEC_WTPC_CUIF_M_INJECT_SET_GAIN_RESET                                             (0x80000000)

// ---------- INJECT_FORCE_CONTROL bit-field ----------
#define FEC_WTPC_CUIF_P_INJECT_FORCE_CONTROL_DISABLE_ILPC                                 (0)
#define FEC_WTPC_CUIF_L_INJECT_FORCE_CONTROL_DISABLE_ILPC                                 (1)
#define FEC_WTPC_CUIF_M_INJECT_FORCE_CONTROL_DISABLE_ILPC                                 (0x00000001)
#define FEC_WTPC_CUIF_P_INJECT_FORCE_CONTROL_DISABLE_INSLOT_CORRECTION                    (1)
#define FEC_WTPC_CUIF_L_INJECT_FORCE_CONTROL_DISABLE_INSLOT_CORRECTION                    (1)
#define FEC_WTPC_CUIF_M_INJECT_FORCE_CONTROL_DISABLE_INSLOT_CORRECTION                    (0x00000002)
#define FEC_WTPC_CUIF_P_INJECT_FORCE_CONTROL_DISABLE_NEXT_SLOT_CORRECTION                 (2)
#define FEC_WTPC_CUIF_L_INJECT_FORCE_CONTROL_DISABLE_NEXT_SLOT_CORRECTION                 (1)
#define FEC_WTPC_CUIF_M_INJECT_FORCE_CONTROL_DISABLE_NEXT_SLOT_CORRECTION                 (0x00000004)
#define FEC_WTPC_CUIF_P_INJECT_FORCE_CONTROL_DISABLE_OTFC                                 (3)
#define FEC_WTPC_CUIF_L_INJECT_FORCE_CONTROL_DISABLE_OTFC                                 (1)
#define FEC_WTPC_CUIF_M_INJECT_FORCE_CONTROL_DISABLE_OTFC                                 (0x00000008)
#define FEC_WTPC_CUIF_P_INJECT_FORCE_CONTROL_FORCE_APT_MODE                               (4)
#define FEC_WTPC_CUIF_L_INJECT_FORCE_CONTROL_FORCE_APT_MODE                               (1)
#define FEC_WTPC_CUIF_M_INJECT_FORCE_CONTROL_FORCE_APT_MODE                               (0x00000010)
#define FEC_WTPC_CUIF_P_INJECT_FORCE_CONTROL_RESET                                        (31)
#define FEC_WTPC_CUIF_L_INJECT_FORCE_CONTROL_RESET                                        (1)
#define FEC_WTPC_CUIF_M_INJECT_FORCE_CONTROL_RESET                                        (0x80000000)
//---------- MPR_SETTING_FOR_R6 bit-field ----------
#define FEC_WTPC_CUIF_P_MPR_SETTING_FOR_R6_MPR_tuning_en                                  (0)
#define FEC_WTPC_CUIF_L_MPR_SETTING_FOR_R6_MPR_tuning_en                                  (1)
#define FEC_WTPC_CUIF_M_MPR_SETTING_FOR_R6_MPR_tuning_en                                  (0x00000001)
#define FEC_WTPC_CUIF_P_MPR_SETTING_FOR_R6_subtest1_value                                 (1)
#define FEC_WTPC_CUIF_L_MPR_SETTING_FOR_R6_subtest1_value                                 (4)
#define FEC_WTPC_CUIF_M_MPR_SETTING_FOR_R6_subtest1_value                                 (0x0000001E)
#define FEC_WTPC_CUIF_P_MPR_SETTING_FOR_R6_subtest2_value                                 (5)
#define FEC_WTPC_CUIF_L_MPR_SETTING_FOR_R6_subtest2_value                                 (4)
#define FEC_WTPC_CUIF_M_MPR_SETTING_FOR_R6_subtest2_value                                 (0x000001E0)
#define FEC_WTPC_CUIF_P_MPR_SETTING_FOR_R6_subtest3_value                                 (9)
#define FEC_WTPC_CUIF_L_MPR_SETTING_FOR_R6_subtest3_value                                 (4)
#define FEC_WTPC_CUIF_M_MPR_SETTING_FOR_R6_subtest3_value                                 (0x00001E00)
#define FEC_WTPC_CUIF_P_MPR_SETTING_FOR_R6_subtest4_value                                 (13)
#define FEC_WTPC_CUIF_L_MPR_SETTING_FOR_R6_subtest4_value                                 (4)
#define FEC_WTPC_CUIF_M_MPR_SETTING_FOR_R6_subtest4_value                                 (0x0001E000)
#define FEC_WTPC_CUIF_P_MPR_SETTING_FOR_R6_subtest5_value                                 (17)
#define FEC_WTPC_CUIF_L_MPR_SETTING_FOR_R6_subtest5_value                                 (4)
#define FEC_WTPC_CUIF_M_MPR_SETTING_FOR_R6_subtest5_value                                 (0x001E0000)
//----------- FEC_W_TX calibration table ---------

// ---------- PA_LUT_A_INPUT_0 bit-field ----------
#define FEC_WTPC_CUIF_P_PA_LUT_A_INPUT_0_pa_lut_pth_a_0                                   (16)
#define FEC_WTPC_CUIF_L_PA_LUT_A_INPUT_0_pa_lut_pth_a_0                                   (16)
#define FEC_WTPC_CUIF_M_PA_LUT_A_INPUT_0_pa_lut_pth_a_0                                   (0xFFFF0000)
#define FEC_WTPC_CUIF_P_PA_LUT_A_INPUT_0_pa_lut_gpa_a_0                                   (0)
#define FEC_WTPC_CUIF_L_PA_LUT_A_INPUT_0_pa_lut_gpa_a_0                                   (16)
#define FEC_WTPC_CUIF_M_PA_LUT_A_INPUT_0_pa_lut_gpa_a_0                                   (0x0000FFFF)

// ---------- PA_LUT_B_INPUT_0 bit-field ----------
#define FEC_WTPC_CUIF_P_PA_LUT_B_INPUT_0_pa_lut_pth_b_0                                   (16)
#define FEC_WTPC_CUIF_L_PA_LUT_B_INPUT_0_pa_lut_pth_b_0                                   (16)
#define FEC_WTPC_CUIF_M_PA_LUT_B_INPUT_0_pa_lut_pth_b_0                                   (0xFFFF0000)
#define FEC_WTPC_CUIF_P_PA_LUT_B_INPUT_0_pa_lut_gpa_b_0                                   (0)
#define FEC_WTPC_CUIF_L_PA_LUT_B_INPUT_0_pa_lut_gpa_b_0                                   (16)
#define FEC_WTPC_CUIF_M_PA_LUT_B_INPUT_0_pa_lut_gpa_b_0                                   (0x0000FFFF)

// ---------- PA_LUT_C_INPUT_0 bit-field ----------
#define FEC_WTPC_CUIF_P_PA_LUT_C_INPUT_0_pa_lut_pth_c_0                                   (16)
#define FEC_WTPC_CUIF_L_PA_LUT_C_INPUT_0_pa_lut_pth_c_0                                   (16)
#define FEC_WTPC_CUIF_M_PA_LUT_C_INPUT_0_pa_lut_pth_c_0                                   (0xFFFF0000)
#define FEC_WTPC_CUIF_P_PA_LUT_C_INPUT_0_pa_lut_gpa_c_0                                   (0)
#define FEC_WTPC_CUIF_L_PA_LUT_C_INPUT_0_pa_lut_gpa_c_0                                   (16)
#define FEC_WTPC_CUIF_M_PA_LUT_C_INPUT_0_pa_lut_gpa_c_0                                   (0x0000FFFF)

// ---------- CPL_LUT_GCPL_0 bit-field ----------
#define FEC_WTPC_CUIF_P_CPL_LUT_GCPL_0_cpl_lut_gcpl_0                                     (0)
#define FEC_WTPC_CUIF_L_CPL_LUT_GCPL_0_cpl_lut_gcpl_0                                     (16)
#define FEC_WTPC_CUIF_M_CPL_LUT_GCPL_0_cpl_lut_gcpl_0                                     (0x0000FFFF)

// ---------- PA_CPL_LUT_CHECK bit-field ----------
#define FEC_WTPC_CUIF_P_PA_CPL_LUT_CHECK_check_value                                      (0)
#define FEC_WTPC_CUIF_L_PA_CPL_LUT_CHECK_check_value                                      (32)
#define FEC_WTPC_CUIF_M_PA_CPL_LUT_CHECK_check_value                                      (0xFFFFFFFF)

// ---------- CFR_R99_INPUT_0 bit-field ----------
#define FEC_WTPC_CUIF_P_CFR_R99_INPUT_0_cfr_r99_papr_0                                    (16)
#define FEC_WTPC_CUIF_L_CFR_R99_INPUT_0_cfr_r99_papr_0                                    (16)
#define FEC_WTPC_CUIF_M_CFR_R99_INPUT_0_cfr_r99_papr_0                                    (0xFFFF0000)
#define FEC_WTPC_CUIF_P_CFR_R99_INPUT_0_cfr_r99_gcfr_0                                    (0)
#define FEC_WTPC_CUIF_L_CFR_R99_INPUT_0_cfr_r99_gcfr_0                                    (16)
#define FEC_WTPC_CUIF_M_CFR_R99_INPUT_0_cfr_r99_gcfr_0                                    (0x0000FFFF)

// ---------- CFR_QPSK_INPUT_0 bit-field ----------
#define FEC_WTPC_CUIF_P_CFR_QPSK_INPUT_0_cfr_qpsk_papr_0                                  (16)
#define FEC_WTPC_CUIF_L_CFR_QPSK_INPUT_0_cfr_qpsk_papr_0                                  (16)
#define FEC_WTPC_CUIF_M_CFR_QPSK_INPUT_0_cfr_qpsk_papr_0                                  (0xFFFF0000)
#define FEC_WTPC_CUIF_P_CFR_QPSK_INPUT_0_cfr_qpsk_gcfr_0                                  (0)
#define FEC_WTPC_CUIF_L_CFR_QPSK_INPUT_0_cfr_qpsk_gcfr_0                                  (16)
#define FEC_WTPC_CUIF_M_CFR_QPSK_INPUT_0_cfr_qpsk_gcfr_0                                  (0x0000FFFF)

// ---------- CFR_16QAM_INPUT_0 bit-field ----------
#define FEC_WTPC_CUIF_P_CFR_16QAM_INPUT_0_cfr_16q_papr_0                                  (16)
#define FEC_WTPC_CUIF_L_CFR_16QAM_INPUT_0_cfr_16q_papr_0                                  (16)
#define FEC_WTPC_CUIF_M_CFR_16QAM_INPUT_0_cfr_16q_papr_0                                  (0xFFFF0000)
#define FEC_WTPC_CUIF_P_CFR_16QAM_INPUT_0_cfr_16q_gcfr_0                                  (0)
#define FEC_WTPC_CUIF_L_CFR_16QAM_INPUT_0_cfr_16q_gcfr_0                                  (16)
#define FEC_WTPC_CUIF_M_CFR_16QAM_INPUT_0_cfr_16q_gcfr_0                                  (0x0000FFFF)

// ---------- MCS_LUT_0 bit-field ----------
#define FEC_WTPC_CUIF_P_MCS_LUT_0_peak_lut_mcs_dbm_0                                      (16)
#define FEC_WTPC_CUIF_L_MCS_LUT_0_peak_lut_mcs_dbm_0                                      (16)
#define FEC_WTPC_CUIF_M_MCS_LUT_0_peak_lut_mcs_dbm_0                                      (0xFFFF0000)
#define FEC_WTPC_CUIF_P_MCS_LUT_0_pset_lut_mcs_dbm_0                                      (0)
#define FEC_WTPC_CUIF_L_MCS_LUT_0_pset_lut_mcs_dbm_0                                      (16)
#define FEC_WTPC_CUIF_M_MCS_LUT_0_pset_lut_mcs_dbm_0                                      (0x0000FFFF)

// ---------- CFR_MCS_LUT_CHECK bit-field ----------
#define FEC_WTPC_CUIF_P_CFR_MCS_LUT_CHECK_check_value                                     (0)
#define FEC_WTPC_CUIF_L_CFR_MCS_LUT_CHECK_check_value                                     (32)
#define FEC_WTPC_CUIF_M_CFR_MCS_LUT_CHECK_check_value                                     (0xFFFFFFFF)

// ---------- TXPGA_LUT_GPGA_A_0 bit-field ----------
#define FEC_WTPC_CUIF_P_TXPGA_LUT_GPGA_A_0_txpga_lut_gpga_a_0                             (0)
#define FEC_WTPC_CUIF_L_TXPGA_LUT_GPGA_A_0_txpga_lut_gpga_a_0                             (16)
#define FEC_WTPC_CUIF_M_TXPGA_LUT_GPGA_A_0_txpga_lut_gpga_a_0                             (0x0000FFFF)

// ---------- TXPGA_LUT_N_A_0 bit-field ----------
#define FEC_WTPC_CUIF_P_TXPGA_LUT_N_A_0_txpga_lut_n_a_0                                   (0)
#define FEC_WTPC_CUIF_L_TXPGA_LUT_N_A_0_txpga_lut_n_a_0                                   (8)
#define FEC_WTPC_CUIF_M_TXPGA_LUT_N_A_0_txpga_lut_n_a_0                                   (0x000000FF)

// ---------- TXPGA_LUT_GPGA_B_0 bit-field ----------
#define FEC_WTPC_CUIF_P_TXPGA_LUT_GPGA_B_0_txpga_lut_gpga_b_0                             (0)
#define FEC_WTPC_CUIF_L_TXPGA_LUT_GPGA_B_0_txpga_lut_gpga_b_0                             (16)
#define FEC_WTPC_CUIF_M_TXPGA_LUT_GPGA_B_0_txpga_lut_gpga_b_0                             (0x0000FFFF)

// ---------- TXPGA_LUT_N_B_0 bit-field ----------
#define FEC_WTPC_CUIF_P_TXPGA_LUT_N_B_0_txpga_lut_n_b_0                                   (0)
#define FEC_WTPC_CUIF_L_TXPGA_LUT_N_B_0_txpga_lut_n_b_0                                   (8)
#define FEC_WTPC_CUIF_M_TXPGA_LUT_N_B_0_txpga_lut_n_b_0                                   (0x000000FF)

// ---------- DET_LUT_GDET_0 bit-field ----------
#define FEC_WTPC_CUIF_P_DET_LUT_GDET_0_det_lut_gdet_0                                     (0)
#define FEC_WTPC_CUIF_L_DET_LUT_GDET_0_det_lut_gdet_0                                     (16)
#define FEC_WTPC_CUIF_M_DET_LUT_GDET_0_det_lut_gdet_0                                     (0x0000FFFF)

// ---------- DET_LUT_N_0 bit-field ----------
#define FEC_WTPC_CUIF_P_DET_LUT_N_0_det_lut_n_0                                           (0)
#define FEC_WTPC_CUIF_L_DET_LUT_N_0_det_lut_n_0                                           (8)
#define FEC_WTPC_CUIF_M_DET_LUT_N_0_det_lut_n_0                                           (0x000000FF)

// ---------- DPD_LUT_NORM_FACTOR_0 bit-field ----------
#define FEC_WTPC_CUIF_P_DPD_LUT_NORM_FACTOR_0_dpd_lut_norm_factor_0                       (0)
#define FEC_WTPC_CUIF_L_DPD_LUT_NORM_FACTOR_0_dpd_lut_norm_factor_0                       (16)
#define FEC_WTPC_CUIF_M_DPD_LUT_NORM_FACTOR_0_dpd_lut_norm_factor_0                       (0x0000FFFF)

// ---------- ET_TABLE_0 bit-field ----------
#define FEC_WTPC_CUIF_P_ET_TABLE_0_get_pout_gain_offset_tab_0                             (16)
#define FEC_WTPC_CUIF_L_ET_TABLE_0_get_pout_gain_offset_tab_0                             (16)
#define FEC_WTPC_CUIF_M_ET_TABLE_0_get_pout_gain_offset_tab_0                             (0xFFFF0000)
#define FEC_WTPC_CUIF_P_ET_TABLE_0_petk_lut_out_max_tab_0                                 (0)
#define FEC_WTPC_CUIF_L_ET_TABLE_0_petk_lut_out_max_tab_0                                 (16)
#define FEC_WTPC_CUIF_M_ET_TABLE_0_petk_lut_out_max_tab_0                                 (0x0000FFFF)

// ---------- TXPGA_LUT_CFG_A_B_0 bit-field ----------
#define FEC_WTPC_CUIF_P_TXPGA_LUT_CFG_A_B_0_txpga_lut_cfg_a_0                             (8)
#define FEC_WTPC_CUIF_L_TXPGA_LUT_CFG_A_B_0_txpga_lut_cfg_a_0                             (8)
#define FEC_WTPC_CUIF_M_TXPGA_LUT_CFG_A_B_0_txpga_lut_cfg_a_0                             (0x0000FF00)
#define FEC_WTPC_CUIF_P_TXPGA_LUT_CFG_A_B_0_txpga_lut_cfg_b_0                             (0)
#define FEC_WTPC_CUIF_L_TXPGA_LUT_CFG_A_B_0_txpga_lut_cfg_b_0                             (8)
#define FEC_WTPC_CUIF_M_TXPGA_LUT_CFG_A_B_0_txpga_lut_cfg_b_0                             (0x000000FF)

// ---------- PA_LUT_MODE_A_0 bit-field ----------
#define FEC_WTPC_CUIF_P_PA_LUT_MODE_A_0_pa_lut_mode_a_0                                   (0)
#define FEC_WTPC_CUIF_L_PA_LUT_MODE_A_0_pa_lut_mode_a_0                                   (8)
#define FEC_WTPC_CUIF_M_PA_LUT_MODE_A_0_pa_lut_mode_a_0                                   (0x000000FF)

// ---------- PA_LUT_N_A_0 bit-field ----------
#define FEC_WTPC_CUIF_P_PA_LUT_N_A_0_pa_lut_n_a_0                                         (0)
#define FEC_WTPC_CUIF_L_PA_LUT_N_A_0_pa_lut_n_a_0                                         (8)
#define FEC_WTPC_CUIF_M_PA_LUT_N_A_0_pa_lut_n_a_0                                         (0x000000FF)

// ---------- PA_LUT_MODE_B_0 bit-field ----------
#define FEC_WTPC_CUIF_P_PA_LUT_MODE_B_0_pa_lut_mode_b_0                                   (0)
#define FEC_WTPC_CUIF_L_PA_LUT_MODE_B_0_pa_lut_mode_b_0                                   (8)
#define FEC_WTPC_CUIF_M_PA_LUT_MODE_B_0_pa_lut_mode_b_0                                   (0x000000FF)

// ---------- PA_LUT_N_B_0 bit-field ----------
#define FEC_WTPC_CUIF_P_PA_LUT_N_B_0_pa_lut_n_b_0                                         (0)
#define FEC_WTPC_CUIF_L_PA_LUT_N_B_0_pa_lut_n_b_0                                         (8)
#define FEC_WTPC_CUIF_M_PA_LUT_N_B_0_pa_lut_n_b_0                                         (0x000000FF)

// ---------- PA_LUT_MODE_C_0 bit-field ----------
#define FEC_WTPC_CUIF_P_PA_LUT_MODE_C_0_pa_lut_mode_c_0                                   (0)
#define FEC_WTPC_CUIF_L_PA_LUT_MODE_C_0_pa_lut_mode_c_0                                   (8)
#define FEC_WTPC_CUIF_M_PA_LUT_MODE_C_0_pa_lut_mode_c_0                                   (0x000000FF)

// ---------- PA_LUT_N_C_0 bit-field ----------
#define FEC_WTPC_CUIF_P_PA_LUT_N_C_0_pa_lut_n_c_0                                         (0)
#define FEC_WTPC_CUIF_L_PA_LUT_N_C_0_pa_lut_n_c_0                                         (8)
#define FEC_WTPC_CUIF_M_PA_LUT_N_C_0_pa_lut_n_c_0                                         (0x000000FF)

// ---------- TH_OP_A2D_D2A_0 bit-field ----------
#define FEC_WTPC_CUIF_P_TH_OP_A2D_D2A_0_th_op_a2d_0                                       (16)
#define FEC_WTPC_CUIF_L_TH_OP_A2D_D2A_0_th_op_a2d_0                                       (16)
#define FEC_WTPC_CUIF_M_TH_OP_A2D_D2A_0_th_op_a2d_0                                       (0xFFFF0000)
#define FEC_WTPC_CUIF_P_TH_OP_A2D_D2A_0_th_op_d2a_0                                       (0)
#define FEC_WTPC_CUIF_L_TH_OP_A2D_D2A_0_th_op_d2a_0                                       (16)
#define FEC_WTPC_CUIF_M_TH_OP_A2D_D2A_0_th_op_d2a_0                                       (0x0000FFFF)

// ---------- TH_OP_D2E_E2D_0 bit-field ----------
#define FEC_WTPC_CUIF_P_TH_OP_D2E_E2D_0_th_op_d2e_0                                       (16)
#define FEC_WTPC_CUIF_L_TH_OP_D2E_E2D_0_th_op_d2e_0                                       (16)
#define FEC_WTPC_CUIF_M_TH_OP_D2E_E2D_0_th_op_d2e_0                                       (0xFFFF0000)
#define FEC_WTPC_CUIF_P_TH_OP_D2E_E2D_0_th_op_e2d_0                                       (0)
#define FEC_WTPC_CUIF_L_TH_OP_D2E_E2D_0_th_op_e2d_0                                       (16)
#define FEC_WTPC_CUIF_M_TH_OP_D2E_E2D_0_th_op_e2d_0                                       (0x0000FFFF)

// ---------- PGA_LUT_CHECK bit-field ----------
#define FEC_WTPC_CUIF_P_PGA_LUT_CHECK_check_value                                         (0)
#define FEC_WTPC_CUIF_L_PGA_LUT_CHECK_check_value                                         (32)
#define FEC_WTPC_CUIF_M_PGA_LUT_CHECK_check_value                                         (0xFFFFFFFF)

// ---------- MIPI_PA_APT_0 bit-field ----------
#define FEC_WTPC_CUIF_P_MIPI_PA_APT_0_mipi_apt_cw_0                                       (0)
#define FEC_WTPC_CUIF_L_MIPI_PA_APT_0_mipi_apt_cw_0                                       (32)
#define FEC_WTPC_CUIF_M_MIPI_PA_APT_0_mipi_apt_cw_0                                       (0xFFFFFFFF)

// ---------- MIPI_PA_DPD_0 bit-field ----------
#define FEC_WTPC_CUIF_P_MIPI_PA_DPD_0_mipi_dpd_cw_0                                       (0)
#define FEC_WTPC_CUIF_L_MIPI_PA_DPD_0_mipi_dpd_cw_0                                       (32)
#define FEC_WTPC_CUIF_M_MIPI_PA_DPD_0_mipi_dpd_cw_0                                       (0xFFFFFFFF)

// ---------- MIPI_PA_ETM_IN_APT_MODE_0 bit-field ----------
#define FEC_WTPC_CUIF_P_MIPI_PA_ETM_IN_APT_MODE_0_mipi_etm_in_apt_cw_0                    (0)
#define FEC_WTPC_CUIF_L_MIPI_PA_ETM_IN_APT_MODE_0_mipi_etm_in_apt_cw_0                    (32)
#define FEC_WTPC_CUIF_M_MIPI_PA_ETM_IN_APT_MODE_0_mipi_etm_in_apt_cw_0                    (0xFFFFFFFF)

// ---------- MIPI_PA_ETM_IN_DPD_MODE_0 bit-field ----------
#define FEC_WTPC_CUIF_P_MIPI_PA_ETM_IN_DPD_MODE_0_mipi_etm_in_dpd_cw_0                    (0)
#define FEC_WTPC_CUIF_L_MIPI_PA_ETM_IN_DPD_MODE_0_mipi_etm_in_dpd_cw_0                    (32)
#define FEC_WTPC_CUIF_M_MIPI_PA_ETM_IN_DPD_MODE_0_mipi_etm_in_dpd_cw_0                    (0xFFFFFFFF)

// ---------- BSI_PMIC_APT_0 bit-field ----------
#define FEC_WTPC_CUIF_P_BSI_PMIC_APT_0_bsi_pmic_apt_0                                     (0)
#define FEC_WTPC_CUIF_L_BSI_PMIC_APT_0_bsi_pmic_apt_0                                     (32)
#define FEC_WTPC_CUIF_M_BSI_PMIC_APT_0_bsi_pmic_apt_0                                     (0xFFFFFFFF)

// ---------- BSI_PMIC_DPD_0 bit-field ----------
#define FEC_WTPC_CUIF_P_BSI_PMIC_DPD_0_bsi_pmic_dpd_0                                     (0)
#define FEC_WTPC_CUIF_L_BSI_PMIC_DPD_0_bsi_pmic_dpd_0                                     (32)
#define FEC_WTPC_CUIF_M_BSI_PMIC_DPD_0_bsi_pmic_dpd_0                                     (0xFFFFFFFF)

// ---------- BSI_PGA_A_CW_0 bit-field ----------
#define FEC_WTPC_CUIF_P_BSI_PGA_A_CW_0_bsi_pga_a_cw_0                                     (0)
#define FEC_WTPC_CUIF_L_BSI_PGA_A_CW_0_bsi_pga_a_cw_0                                     (32)
#define FEC_WTPC_CUIF_M_BSI_PGA_A_CW_0_bsi_pga_a_cw_0                                     (0xFFFFFFFF)

// ---------- BSI_PGA_B_CW_0 bit-field ----------
#define FEC_WTPC_CUIF_P_BSI_PGA_B_CW_0_bsi_pga_b_cw_0                                     (0)
#define FEC_WTPC_CUIF_L_BSI_PGA_B_CW_0_bsi_pga_b_cw_0                                     (32)
#define FEC_WTPC_CUIF_M_BSI_PGA_B_CW_0_bsi_pga_b_cw_0                                     (0xFFFFFFFF)

// ---------- BSI_DET_CW_0 bit-field ----------
#define FEC_WTPC_CUIF_P_BSI_DET_CW_0_bsi_det_cw_0                                         (0)
#define FEC_WTPC_CUIF_L_BSI_DET_CW_0_bsi_det_cw_0                                         (32)
#define FEC_WTPC_CUIF_M_BSI_DET_CW_0_bsi_det_cw_0                                         (0xFFFFFFFF)

// ---------- APC_APT_DPD_0 bit-field ----------
#define FEC_WTPC_CUIF_P_APC_APT_DPD_0_apc_dpd_0                                           (16)
#define FEC_WTPC_CUIF_L_APC_APT_DPD_0_apc_dpd_0                                           (16)
#define FEC_WTPC_CUIF_M_APC_APT_DPD_0_apc_dpd_0                                           (0xFFFF0000)
#define FEC_WTPC_CUIF_P_APC_APT_DPD_0_apc_apt_0                                           (0)
#define FEC_WTPC_CUIF_L_APC_APT_DPD_0_apc_apt_0                                           (16)
#define FEC_WTPC_CUIF_M_APC_APT_DPD_0_apc_apt_0                                           (0x0000FFFF)

// ---------- VM_APT_DPD_0 bit-field ----------
#define FEC_WTPC_CUIF_P_VM_APT_DPD_0_vm_dpd_0                                             (8)
#define FEC_WTPC_CUIF_L_VM_APT_DPD_0_vm_dpd_0                                             (8)
#define FEC_WTPC_CUIF_M_VM_APT_DPD_0_vm_dpd_0                                             (0x0000FF00)
#define FEC_WTPC_CUIF_P_VM_APT_DPD_0_vm_apt_0                                             (0)
#define FEC_WTPC_CUIF_L_VM_APT_DPD_0_vm_apt_0                                             (8)
#define FEC_WTPC_CUIF_M_VM_APT_DPD_0_vm_apt_0                                             (0x000000FF)

// ---------- CW_LUT_CHECK bit-field ----------
#define FEC_WTPC_CUIF_P_CW_LUT_CHECK_check_value                                          (0)
#define FEC_WTPC_CUIF_L_CW_LUT_CHECK_check_value                                          (32)
#define FEC_WTPC_CUIF_M_CW_LUT_CHECK_check_value                                          (0xFFFFFFFF)

#endif // __FEC_W_TX_H__

