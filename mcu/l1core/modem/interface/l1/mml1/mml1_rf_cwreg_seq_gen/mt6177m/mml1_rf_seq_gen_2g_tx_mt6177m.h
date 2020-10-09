#ifndef __MMRFSEQGEN_2G_TX_MT6177M_H__
#define __MMRFSEQGEN_2G_TX_MT6177M_H__
#define MMRF_CW_ADDR_LSB           (20)
#define MMRF_CW_DATA_MASK          (0x000FFFFF)
#define MMRF_CW_PACK(aDDR, vALUE)  (((aDDR << MMRF_CW_ADDR_LSB)) | (vALUE & MMRF_CW_DATA_MASK))

#define SEQ_GGE_2G_TX_SL2W_COUNT (27)

#define SEQ_GGE_2G_TX_TX_2G_W2B_COUNT (2)

#define SEQ_GGE_2G_TX_GAIN_CHANGE_COUNT (2)

#define SEQ_GGE_2G_TX_8PSK2GMSK_COUNT (2)

#define SEQ_GGE_2G_TX_GMSK28PSK_COUNT (2)

#define SEQ_GGE_2G_TX_B2SL_COUNT (3)


typedef struct
{
   CW1_INFO_T cw1_info;
   CW511_INFO_T cw511_info;
   CW521_INFO_T cw521_info;
   CW529_INFO_T cw529_info;
   CW549_INFO_T cw549_info;
   CW550_INFO_T cw550_info;
   CW551_INFO_T cw551_info;
   CW552_INFO_T cw552_info;
   //CW582_INFO_T cw582_info;
   CW707_INFO_T cw707_info;
   CW710_INFO_T cw710_info;
   CW712_INFO_T cw712_info;
   CW714_INFO_T cw714_info;
   CW786_INFO_T cw786_info;
   CW793_INFO_T cw793_info;
   CW794_INFO_T cw794_info;
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
}SEQ_GGE_2G_TX_SL2W_INFO_T;


typedef struct
{
   CW1_INFO_T cw1_info;
   //CW704_INFO_T cw704_info;
}SEQ_GGE_2G_TX_TX_2G_W2B_INFO_T;


typedef struct
{
   CW705_INFO_T cw705_info;
   CW706_INFO_T cw706_info;
}SEQ_GGE_2G_TX_GAIN_CHANGE_INFO_T;


typedef struct
{
   CW1_INFO_T cw1_info;
   CW707_INFO_T cw707_info;
}SEQ_GGE_2G_TX_8PSK2GMSK_INFO_T;


typedef struct
{
   CW1_INFO_T cw1_info;
   CW707_INFO_T cw707_info;
}SEQ_GGE_2G_TX_GMSK28PSK_INFO_T;


typedef struct
{
   CW1_INFO_T cw1_info;
   //CW521_INFO_T cw521_info;
   //CW794_INFO_T cw794_info;
}SEQ_GGE_2G_TX_B2SL_INFO_T;

void MMRF_SEQ_GGE_2G_TX_SL2W ( SEQ_GGE_2G_TX_SL2W_INFO_T *seq_gge_2g_tx_sl2w_info, kal_uint32 *bsiData);
void MMRF_SEQ_GGE_2G_TX_TX_2G_W2B ( SEQ_GGE_2G_TX_TX_2G_W2B_INFO_T *seq_gge_2g_tx_tx_2g_w2b_info, kal_uint32 *bsiData);
void MMRF_SEQ_GGE_2G_TX_GAIN_CHANGE ( SEQ_GGE_2G_TX_GAIN_CHANGE_INFO_T *seq_gge_2g_tx_gain_change_info, kal_uint32 *bsiData);
void MMRF_SEQ_GGE_2G_TX_8PSK2GMSK ( SEQ_GGE_2G_TX_8PSK2GMSK_INFO_T *seq_gge_2g_tx_8psk2gmsk_info, kal_uint32 *bsiData);
void MMRF_SEQ_GGE_2G_TX_GMSK28PSK ( SEQ_GGE_2G_TX_GMSK28PSK_INFO_T *seq_gge_2g_tx_gmsk28psk_info, kal_uint32 *bsiData);
void MMRF_SEQ_GGE_2G_TX_B2SL ( SEQ_GGE_2G_TX_B2SL_INFO_T *seq_gge_2g_tx_b2sl_info, kal_uint32 *bsiData);

#endif /*__MMRFSEQGEN_2G_TX_MT6177M_H__*/
