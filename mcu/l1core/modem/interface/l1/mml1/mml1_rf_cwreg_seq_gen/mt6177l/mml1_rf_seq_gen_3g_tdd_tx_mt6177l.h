#ifndef __MMRFSEQGEN_3G_TDD_TX_MT6177L_H__
#define __MMRFSEQGEN_3G_TDD_TX_MT6177L_H__
#define MMRF_CW_ADDR_LSB           (20)
#define MMRF_CW_DATA_MASK          (0x000FFFFF)
#define MMRF_CW_PACK(aDDR, vALUE)  (((aDDR << MMRF_CW_ADDR_LSB)) | (vALUE & MMRF_CW_DATA_MASK))

#define SEQ_TDSCDMA_3G_TDD_TX_B2SL_SRX1_COUNT (1)

#define SEQ_TDSCDMA_3G_TDD_TX_SL2W_SRX1_COUNT (25)

#define SEQ_TDSCDMA_3G_TDD_TX_W2B_SRX1_COUNT (1)

#define SEQ_TDSCDMA_3G_TDD_TX_GAIN_CHANGE_COUNT (2)

#define SEQ_TDSCDMA_3G_TDD_TX_PF0_COUNT (1)

#define SEQ_TDSCDMA_3G_TDD_TX_PF1_COUNT (1)

#define SEQ_TDSCDMA_3G_TDD_TX_B2SL_SRX2_COUNT (1)

#define SEQ_TDSCDMA_3G_TDD_TX_SL2W_SRX2_COUNT (25)

#define SEQ_TDSCDMA_3G_TDD_TX_W2B_SRX2_COUNT (1)

#define SEQ_TDSCDMA_3G_TDD_TX_DU_LO_B2SL_SRX1_COUNT (1)

#define SEQ_TDSCDMA_3G_TDD_TX_DU_LO_SL2W_SRX1_COUNT (25)

#define SEQ_TDSCDMA_3G_TDD_TX_DU_LO_W2B_SRX1_COUNT (1)

#define SEQ_TDSCDMA_3G_TDD_TX_DU_LO_GAIN_CHANGE_COUNT (2)

#define SEQ_TDSCDMA_3G_TDD_TX_DU_LO_PF0_COUNT (1)

#define SEQ_TDSCDMA_3G_TDD_TX_DU_LO_PF1_COUNT (1)

#define SEQ_TDSCDMA_3G_TDD_TX_DU_LO_B2SL_SRX2_COUNT (1)

#define SEQ_TDSCDMA_3G_TDD_TX_DU_LO_SL2W_SRX2_COUNT (25)

#define SEQ_TDSCDMA_3G_TDD_TX_DU_LO_W2B_SRX2_COUNT (1)


typedef struct
{
   CW1_INFO_T cw1_info;
}SEQ_TDSCDMA_3G_TDD_TX_B2SL_SRX1_INFO_T;


typedef struct
{
   CW1_INFO_T cw1_info;
   //CW127_INFO_T cw127_info;
   CW128_INFO_T cw128_info;
   CW130_INFO_T cw130_info;
   CW131_INFO_T cw131_info;
   //CW134_INFO_T cw134_info;
   //CW135_INFO_T cw135_info;
   CW181_INFO_T cw181_info;
   CW707_INFO_T cw707_info;
   CW710_INFO_T cw710_info;
   CW711_INFO_T cw711_info;
   CW712_INFO_T cw712_info;
   CW714_INFO_T cw714_info;
   CW786_INFO_T cw786_info;
   CW787_INFO_T cw787_info;
   CW793_INFO_T cw793_info;
   CW795_INFO_T cw795_info;
   CW796_INFO_T cw796_info;
   CW797_INFO_T cw797_info;
   CW799_INFO_T cw799_info;
   //CW806_INFO_T cw806_info;
   CW807_INFO_T cw807_info;
   CW808_INFO_T cw808_info;
   CW814_INFO_T cw814_info;
   CW816_INFO_T cw816_info;
}SEQ_TDSCDMA_3G_TDD_TX_SL2W_SRX1_INFO_T;


typedef struct
{
   CW1_INFO_T cw1_info;
}SEQ_TDSCDMA_3G_TDD_TX_W2B_SRX1_INFO_T;


typedef struct
{
   CW705_INFO_T cw705_info;
   CW706_INFO_T cw706_info;
}SEQ_TDSCDMA_3G_TDD_TX_GAIN_CHANGE_INFO_T;


typedef struct
{
   //CW704_INFO_T cw704_info;
   kal_uint32 for_build_pass_v;
}SEQ_TDSCDMA_3G_TDD_TX_PF0_INFO_T;


typedef struct
{
   //CW704_INFO_T cw704_info;
   kal_uint32 for_build_pass_v;
}SEQ_TDSCDMA_3G_TDD_TX_PF1_INFO_T;


typedef struct
{
   CW1_INFO_T cw1_info;
}SEQ_TDSCDMA_3G_TDD_TX_B2SL_SRX2_INFO_T;


typedef struct
{
   CW1_INFO_T cw1_info;
   //CW126_INFO_T cw126_info;
   CW129_INFO_T cw129_info;
   CW132_INFO_T cw132_info;
   CW133_INFO_T cw133_info;
   //CW136_INFO_T cw136_info;
   //CW137_INFO_T cw137_info;
   CW281_INFO_T cw281_info;
   CW707_INFO_T cw707_info;
   CW710_INFO_T cw710_info;
   CW711_INFO_T cw711_info;
   CW712_INFO_T cw712_info;
   CW714_INFO_T cw714_info;
   CW786_INFO_T cw786_info;
   CW787_INFO_T cw787_info;
   CW793_INFO_T cw793_info;
   CW795_INFO_T cw795_info;
   CW796_INFO_T cw796_info;
   CW797_INFO_T cw797_info;
   CW799_INFO_T cw799_info;
   //CW806_INFO_T cw806_info;
   CW807_INFO_T cw807_info;
   CW808_INFO_T cw808_info;
   CW814_INFO_T cw814_info;
   CW816_INFO_T cw816_info;
}SEQ_TDSCDMA_3G_TDD_TX_SL2W_SRX2_INFO_T;


typedef struct
{
   CW1_INFO_T cw1_info;
}SEQ_TDSCDMA_3G_TDD_TX_W2B_SRX2_INFO_T;


typedef struct
{
   CW1_INFO_T cw1_info;
}SEQ_TDSCDMA_3G_TDD_TX_DU_LO_B2SL_SRX1_INFO_T;


typedef struct
{
   CW1_INFO_T cw1_info;
   //CW127_INFO_T cw127_info;
   CW128_INFO_T cw128_info;
   CW130_INFO_T cw130_info;
   CW131_INFO_T cw131_info;
   //CW134_INFO_T cw134_info;
   //CW135_INFO_T cw135_info;
   CW181_INFO_T cw181_info;
   CW707_INFO_T cw707_info;
   CW710_INFO_T cw710_info;
   CW711_INFO_T cw711_info;
   CW712_INFO_T cw712_info;
   CW714_INFO_T cw714_info;
   CW786_INFO_T cw786_info;
   CW787_INFO_T cw787_info;
   CW793_INFO_T cw793_info;
   CW795_INFO_T cw795_info;
   CW796_INFO_T cw796_info;
   CW797_INFO_T cw797_info;
   CW799_INFO_T cw799_info;
   //CW806_INFO_T cw806_info;
   CW807_INFO_T cw807_info;
   CW808_INFO_T cw808_info;
   CW814_INFO_T cw814_info;
   CW816_INFO_T cw816_info;
}SEQ_TDSCDMA_3G_TDD_TX_DU_LO_SL2W_SRX1_INFO_T;


typedef struct
{
   CW1_INFO_T cw1_info;
}SEQ_TDSCDMA_3G_TDD_TX_DU_LO_W2B_SRX1_INFO_T;


typedef struct
{
   CW705_INFO_T cw705_info;
   CW706_INFO_T cw706_info;
}SEQ_TDSCDMA_3G_TDD_TX_DU_LO_GAIN_CHANGE_INFO_T;


typedef struct
{
   //CW704_INFO_T cw704_info;
   kal_uint32 for_build_pass_v;
}SEQ_TDSCDMA_3G_TDD_TX_DU_LO_PF0_INFO_T;


typedef struct
{
   //CW704_INFO_T cw704_info;
   kal_uint32 for_build_pass_v;
}SEQ_TDSCDMA_3G_TDD_TX_DU_LO_PF1_INFO_T;


typedef struct
{
   CW1_INFO_T cw1_info;
}SEQ_TDSCDMA_3G_TDD_TX_DU_LO_B2SL_SRX2_INFO_T;


typedef struct
{
   CW1_INFO_T cw1_info;
   //CW126_INFO_T cw126_info;
   CW129_INFO_T cw129_info;
   CW132_INFO_T cw132_info;
   CW133_INFO_T cw133_info;
   //CW136_INFO_T cw136_info;
   //CW137_INFO_T cw137_info;
   CW281_INFO_T cw281_info;
   CW707_INFO_T cw707_info;
   CW710_INFO_T cw710_info;
   CW711_INFO_T cw711_info;
   CW712_INFO_T cw712_info;
   CW714_INFO_T cw714_info;
   CW786_INFO_T cw786_info;
   CW787_INFO_T cw787_info;
   CW793_INFO_T cw793_info;
   CW795_INFO_T cw795_info;
   CW796_INFO_T cw796_info;
   CW797_INFO_T cw797_info;
   CW799_INFO_T cw799_info;
   //CW806_INFO_T cw806_info;
   CW807_INFO_T cw807_info;
   CW808_INFO_T cw808_info;
   CW814_INFO_T cw814_info;
   CW816_INFO_T cw816_info;
}SEQ_TDSCDMA_3G_TDD_TX_DU_LO_SL2W_SRX2_INFO_T;


typedef struct
{
   CW1_INFO_T cw1_info;
}SEQ_TDSCDMA_3G_TDD_TX_DU_LO_W2B_SRX2_INFO_T;

void MMRF_SEQ_TDSCDMA_3G_TDD_TX_B2SL_SRX1 ( SEQ_TDSCDMA_3G_TDD_TX_B2SL_SRX1_INFO_T *seq_tdscdma_3g_tdd_tx_b2sl_srx1_info, kal_uint32 *bsiData);
void MMRF_SEQ_TDSCDMA_3G_TDD_TX_SL2W_SRX1 ( SEQ_TDSCDMA_3G_TDD_TX_SL2W_SRX1_INFO_T *seq_tdscdma_3g_tdd_tx_sl2w_srx1_info, kal_uint32 *bsiData);
void MMRF_SEQ_TDSCDMA_3G_TDD_TX_W2B_SRX1 ( SEQ_TDSCDMA_3G_TDD_TX_W2B_SRX1_INFO_T *seq_tdscdma_3g_tdd_tx_w2b_srx1_info, kal_uint32 *bsiData);
void MMRF_SEQ_TDSCDMA_3G_TDD_TX_GAIN_CHANGE ( SEQ_TDSCDMA_3G_TDD_TX_GAIN_CHANGE_INFO_T *seq_tdscdma_3g_tdd_tx_gain_change_info, kal_uint32 *bsiData);
void MMRF_SEQ_TDSCDMA_3G_TDD_TX_PF0 ( SEQ_TDSCDMA_3G_TDD_TX_PF0_INFO_T *seq_tdscdma_3g_tdd_tx_pf0_info, kal_uint32 *bsiData);
void MMRF_SEQ_TDSCDMA_3G_TDD_TX_PF1 ( SEQ_TDSCDMA_3G_TDD_TX_PF1_INFO_T *seq_tdscdma_3g_tdd_tx_pf1_info, kal_uint32 *bsiData);
void MMRF_SEQ_TDSCDMA_3G_TDD_TX_B2SL_SRX2 ( SEQ_TDSCDMA_3G_TDD_TX_B2SL_SRX2_INFO_T *seq_tdscdma_3g_tdd_tx_b2sl_srx2_info, kal_uint32 *bsiData);
void MMRF_SEQ_TDSCDMA_3G_TDD_TX_SL2W_SRX2 ( SEQ_TDSCDMA_3G_TDD_TX_SL2W_SRX2_INFO_T *seq_tdscdma_3g_tdd_tx_sl2w_srx2_info, kal_uint32 *bsiData);
void MMRF_SEQ_TDSCDMA_3G_TDD_TX_W2B_SRX2 ( SEQ_TDSCDMA_3G_TDD_TX_W2B_SRX2_INFO_T *seq_tdscdma_3g_tdd_tx_w2b_srx2_info, kal_uint32 *bsiData);
void MMRF_SEQ_TDSCDMA_3G_TDD_TX_DU_LO_B2SL_SRX1 ( SEQ_TDSCDMA_3G_TDD_TX_DU_LO_B2SL_SRX1_INFO_T *seq_tdscdma_3g_tdd_tx_du_lo_b2sl_srx1_info, kal_uint32 *bsiData);
void MMRF_SEQ_TDSCDMA_3G_TDD_TX_DU_LO_SL2W_SRX1 ( SEQ_TDSCDMA_3G_TDD_TX_DU_LO_SL2W_SRX1_INFO_T *seq_tdscdma_3g_tdd_tx_du_lo_sl2w_srx1_info, kal_uint32 *bsiData);
void MMRF_SEQ_TDSCDMA_3G_TDD_TX_DU_LO_W2B_SRX1 ( SEQ_TDSCDMA_3G_TDD_TX_DU_LO_W2B_SRX1_INFO_T *seq_tdscdma_3g_tdd_tx_du_lo_w2b_srx1_info, kal_uint32 *bsiData);
void MMRF_SEQ_TDSCDMA_3G_TDD_TX_DU_LO_GAIN_CHANGE ( SEQ_TDSCDMA_3G_TDD_TX_DU_LO_GAIN_CHANGE_INFO_T *seq_tdscdma_3g_tdd_tx_du_lo_gain_change_info, kal_uint32 *bsiData);
void MMRF_SEQ_TDSCDMA_3G_TDD_TX_DU_LO_PF0 ( SEQ_TDSCDMA_3G_TDD_TX_DU_LO_PF0_INFO_T *seq_tdscdma_3g_tdd_tx_du_lo_pf0_info, kal_uint32 *bsiData);
void MMRF_SEQ_TDSCDMA_3G_TDD_TX_DU_LO_PF1 ( SEQ_TDSCDMA_3G_TDD_TX_DU_LO_PF1_INFO_T *seq_tdscdma_3g_tdd_tx_du_lo_pf1_info, kal_uint32 *bsiData);
void MMRF_SEQ_TDSCDMA_3G_TDD_TX_DU_LO_B2SL_SRX2 ( SEQ_TDSCDMA_3G_TDD_TX_DU_LO_B2SL_SRX2_INFO_T *seq_tdscdma_3g_tdd_tx_du_lo_b2sl_srx2_info, kal_uint32 *bsiData);
void MMRF_SEQ_TDSCDMA_3G_TDD_TX_DU_LO_SL2W_SRX2 ( SEQ_TDSCDMA_3G_TDD_TX_DU_LO_SL2W_SRX2_INFO_T *seq_tdscdma_3g_tdd_tx_du_lo_sl2w_srx2_info, kal_uint32 *bsiData);
void MMRF_SEQ_TDSCDMA_3G_TDD_TX_DU_LO_W2B_SRX2 ( SEQ_TDSCDMA_3G_TDD_TX_DU_LO_W2B_SRX2_INFO_T *seq_tdscdma_3g_tdd_tx_du_lo_w2b_srx2_info, kal_uint32 *bsiData);

#endif /*__MMRFSEQGEN_3G_TDD_TX_MT6177L_H__*/
