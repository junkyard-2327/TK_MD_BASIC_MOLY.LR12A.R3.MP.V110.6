#ifndef __MMRFSEQGEN_C2K_TX_MT6177L_H__
#define __MMRFSEQGEN_C2K_TX_MT6177L_H__
#define MMRF_CW_ADDR_LSB           (20)
#define MMRF_CW_DATA_MASK          (0x000FFFFF)
#define MMRF_CW_PACK(aDDR, vALUE)  (((aDDR << MMRF_CW_ADDR_LSB)) | (vALUE & MMRF_CW_DATA_MASK))

#define SEQ_C2K_TX_B2SL_COUNT (1)

#define SEQ_C2K_TX_SL2W_COUNT (23)

#define SEQ_C2K_TX_W2B_COUNT (2)

#define SEQ_C2K_TX_GAIN_CHANGE_COUNT (2)

#define SEQ_C2K_TX_PF0_COUNT (1)

#define SEQ_C2K_TX_PF1_COUNT (1)

#define SEQ_C2K_TX_SYNTH_ADJ_COUNT (1)


typedef struct
{
   CW1_INFO_T cw1_info;
}SEQ_C2K_TX_B2SL_INFO_T;


typedef struct
{
   CW1_INFO_T cw1_info;
   CW511_INFO_T cw511_info;
   CW529_INFO_T cw529_info;
   CW549_INFO_T cw549_info;
   CW550_INFO_T cw550_info;
   CW582_INFO_T cw582_info;
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
   //CW806_INFO_T cw806_info;
   CW807_INFO_T cw807_info;
   CW808_INFO_T cw808_info;
   CW814_INFO_T cw814_info;
   CW816_INFO_T cw816_info;
   CW819_INFO_T cw819_info;
}SEQ_C2K_TX_SL2W_INFO_T;


typedef struct
{
   CW1_INFO_T cw1_info;
   //CW704_INFO_T cw704_info;
}SEQ_C2K_TX_W2B_INFO_T;


typedef struct
{
   CW705_INFO_T cw705_info;
   CW706_INFO_T cw706_info;
}SEQ_C2K_TX_GAIN_CHANGE_INFO_T;


typedef struct
{
   //CW704_INFO_T cw704_info;
   kal_uint32 for_build_pass_v;
}SEQ_C2K_TX_PF0_INFO_T;


typedef struct
{
   //CW704_INFO_T cw704_info;
   kal_uint32 for_build_pass_v;
}SEQ_C2K_TX_PF1_INFO_T;


typedef struct
{
   CW582_INFO_T cw582_info;
}SEQ_C2K_TX_SYNTH_ADJ_INFO_T;

void MMRF_SEQ_C2K_TX_B2SL ( SEQ_C2K_TX_B2SL_INFO_T *seq_c2k_tx_b2sl_info, kal_uint32 *bsiData);
void MMRF_SEQ_C2K_TX_SL2W ( SEQ_C2K_TX_SL2W_INFO_T *seq_c2k_tx_sl2w_info, kal_uint32 *bsiData);
void MMRF_SEQ_C2K_TX_W2B ( SEQ_C2K_TX_W2B_INFO_T *seq_c2k_tx_w2b_info, kal_uint32 *bsiData);
void MMRF_SEQ_C2K_TX_GAIN_CHANGE ( SEQ_C2K_TX_GAIN_CHANGE_INFO_T *seq_c2k_tx_gain_change_info, kal_uint32 *bsiData);
void MMRF_SEQ_C2K_TX_PF0 ( SEQ_C2K_TX_PF0_INFO_T *seq_c2k_tx_pf0_info, kal_uint32 *bsiData);
void MMRF_SEQ_C2K_TX_PF1 ( SEQ_C2K_TX_PF1_INFO_T *seq_c2k_tx_pf1_info, kal_uint32 *bsiData);
void MMRF_SEQ_C2K_TX_SYNTH_ADJ ( SEQ_C2K_TX_SYNTH_ADJ_INFO_T *seq_c2k_tx_synth_adj_info, kal_uint32 *bsiData);

#endif /*__MMRFSEQGEN_C2K_TX_MT6177L_H__*/
