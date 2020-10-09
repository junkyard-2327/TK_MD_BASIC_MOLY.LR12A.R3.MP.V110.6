#ifndef __MMRFSEQGEN_3G_FDD_TX_MT6173_H__
#define __MMRFSEQGEN_3G_FDD_TX_MT6173_H__
#define MMRF_CW_ADDR_LSB           (20)
#define MMRF_CW_DATA_MASK          (0x000FFFFF)
#define MMRF_CW_PACK(aDDR, vALUE)  (((aDDR << MMRF_CW_ADDR_LSB)) | (vALUE & MMRF_CW_DATA_MASK))

#define SEQ_WCDMA_3G_FDD_TX_SL2W_COUNT (23)

#define SEQ_WCDMA_3G_FDD_TX_W2B_COUNT (2)

#define SEQ_WCDMA_3G_FDD_TX_GAIN_CHANGE_COUNT (2)

#define SEQ_WCDMA_3G_FDD_TX_B2SL_COUNT (1)

#define SEQ_WCDMA_3G_FDD_TX_SL2W_DET_ALWAYS_ON_COUNT (24)

#define SEQ_WCDMA_3G_FDD_TX_B2SL_DET_ALWAYS_OFF_COUNT (2)


typedef struct
{
   CW1_INFO_T cw1_info;
   CW511_INFO_T cw511_info;
   CW529_INFO_T cw529_info;
   CW549_INFO_T cw549_info;
   CW550_INFO_T cw550_info;
   //CW582_INFO_T cw582_info;
   CW707_INFO_T cw707_info;
   CW710_INFO_T cw710_info;
   CW712_INFO_T cw712_info;
   CW714_INFO_T cw714_info;
   CW786_INFO_T cw786_info;
   CW793_INFO_T cw793_info;
   CW795_INFO_T cw795_info;
   CW796_INFO_T cw796_info;
   CW797_INFO_T cw797_info;
   CW798_INFO_T cw798_info;
   CW799_INFO_T cw799_info;
   //CW806_INFO_T cw806_info;
   CW807_INFO_T cw807_info;
   CW808_INFO_T cw808_info;
   CW814_INFO_T cw814_info;
   CW825_INFO_T cw825_info;
   CW826_INFO_T cw826_info;
}SEQ_WCDMA_3G_FDD_TX_SL2W_INFO_T;


typedef struct
{
   CW1_INFO_T cw1_info;
   //CW704_INFO_T cw704_info;
}SEQ_WCDMA_3G_FDD_TX_W2B_INFO_T;


typedef struct
{
   CW705_INFO_T cw705_info;
   CW706_INFO_T cw706_info;
}SEQ_WCDMA_3G_FDD_TX_GAIN_CHANGE_INFO_T;


typedef struct
{
   CW1_INFO_T cw1_info;
}SEQ_WCDMA_3G_FDD_TX_B2SL_INFO_T;


typedef struct
{
   CW1_INFO_T cw1_info;
   CW511_INFO_T cw511_info;
   CW529_INFO_T cw529_info;
   CW549_INFO_T cw549_info;
   CW550_INFO_T cw550_info;
   //CW582_INFO_T cw582_info;
   CW707_INFO_T cw707_info;
   CW710_INFO_T cw710_info;
   CW712_INFO_T cw712_info;
   CW714_INFO_T cw714_info;
   CW786_INFO_T cw786_info;
   CW793_INFO_T cw793_info;
   CW795_INFO_T cw795_info;
   CW796_INFO_T cw796_info;
   CW797_INFO_T cw797_info;
   CW798_INFO_T cw798_info;
   CW799_INFO_T cw799_info;
   //CW806_INFO_T cw806_info;
   CW807_INFO_T cw807_info;
   CW808_INFO_T cw808_info;
   CW814_INFO_T cw814_info;
   CW816_INFO_T cw816_info;
   CW825_INFO_T cw825_info;
   CW826_INFO_T cw826_info;
}SEQ_WCDMA_3G_FDD_TX_SL2W_DET_ALWAYS_ON_INFO_T;


typedef struct
{
   CW1_INFO_T cw1_info;
   CW816_INFO_T cw816_info;
}SEQ_WCDMA_3G_FDD_TX_B2SL_DET_ALWAYS_OFF_INFO_T;

void MMRF_SEQ_WCDMA_3G_FDD_TX_SL2W ( SEQ_WCDMA_3G_FDD_TX_SL2W_INFO_T *seq_wcdma_3g_fdd_tx_sl2w_info, kal_uint32 *bsiData);
void MMRF_SEQ_WCDMA_3G_FDD_TX_W2B ( SEQ_WCDMA_3G_FDD_TX_W2B_INFO_T *seq_wcdma_3g_fdd_tx_w2b_info, kal_uint32 *bsiData);
void MMRF_SEQ_WCDMA_3G_FDD_TX_GAIN_CHANGE ( SEQ_WCDMA_3G_FDD_TX_GAIN_CHANGE_INFO_T *seq_wcdma_3g_fdd_tx_gain_change_info, kal_uint32 *bsiData);
void MMRF_SEQ_WCDMA_3G_FDD_TX_B2SL ( SEQ_WCDMA_3G_FDD_TX_B2SL_INFO_T *seq_wcdma_3g_fdd_tx_b2sl_info, kal_uint32 *bsiData);
void MMRF_SEQ_WCDMA_3G_FDD_TX_SL2W_DET_ALWAYS_ON ( SEQ_WCDMA_3G_FDD_TX_SL2W_DET_ALWAYS_ON_INFO_T *seq_wcdma_3g_fdd_tx_sl2w_det_always_on_info, kal_uint32 *bsiData);
void MMRF_SEQ_WCDMA_3G_FDD_TX_B2SL_DET_ALWAYS_OFF ( SEQ_WCDMA_3G_FDD_TX_B2SL_DET_ALWAYS_OFF_INFO_T *seq_wcdma_3g_fdd_tx_b2sl_det_always_off_info, kal_uint32 *bsiData);

#endif /*__MMRFSEQGEN_3G_FDD_TX_MT6173_H__*/
