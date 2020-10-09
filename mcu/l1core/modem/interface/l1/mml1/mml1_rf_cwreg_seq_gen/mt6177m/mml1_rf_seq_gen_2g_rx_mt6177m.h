#ifndef __MMRFSEQGEN_2G_RX_MT6177M_H__
#define __MMRFSEQGEN_2G_RX_MT6177M_H__
#define MMRF_CW_ADDR_LSB           (20)
#define MMRF_CW_DATA_MASK          (0x000FFFFF)
#define MMRF_CW_PACK(aDDR, vALUE)  (((aDDR << MMRF_CW_ADDR_LSB)) | (vALUE & MMRF_CW_DATA_MASK))

#define SEQ_GGE_2G_RX1_B2SL_COUNT (1)

#define SEQ_GGE_2G_RX1_SL2W_COUNT (17)

#define SEQ_GGE_2G_RX1_W2B_COUNT (4)

#define SEQ_GGE_2G_RX1_GAIN_CHANGE_COUNT (4)

#define SEQ_GGE_2G_RX1_POFF_COUNT (2)


typedef struct
{
   CW1_INFO_T cw1_info;
}SEQ_GGE_2G_RX1_B2SL_INFO_T;


typedef struct
{
   CW1_INFO_T cw1_info;
   //CW127_INFO_T cw127_info;
   CW128_INFO_T cw128_info;
   CW130_INFO_T cw130_info;
   CW131_INFO_T cw131_info;
   CW320_INFO_T cw320_info;
   CW321_INFO_T cw321_info;
   CW322_INFO_T cw322_info;
   CW324_INFO_T cw324_info;
   CW326_INFO_T cw326_info;
   CW348_INFO_T cw348_info;
   CW399_INFO_T cw399_info;
   CW413_INFO_T cw413_info;
   CW414_INFO_T cw414_info;
   CW495_INFO_T cw495_info;
   CW500_INFO_T cw500_info;
   CW501_INFO_T cw501_info;
}SEQ_GGE_2G_RX1_SL2W_INFO_T;


typedef struct
{
   CW1_INFO_T cw1_info;
   CW320_INFO_T cw320_info;
   CW321_INFO_T cw321_info;
   //CW464_INFO_T cw464_info;
}SEQ_GGE_2G_RX1_W2B_INFO_T;


typedef struct
{
   CW334_INFO_T cw334_info;
   CW335_INFO_T cw335_info;
   CW336_INFO_T cw336_info;
   CW337_INFO_T cw337_info;
}SEQ_GGE_2G_RX1_GAIN_CHANGE_INFO_T;


typedef struct
{
   CW320_INFO_T cw320_info;
   CW321_INFO_T cw321_info;
}SEQ_GGE_2G_RX1_POFF_INFO_T;

void MMRF_SEQ_GGE_2G_RX1_B2SL ( SEQ_GGE_2G_RX1_B2SL_INFO_T *seq_gge_2g_rx1_b2sl_info, kal_uint32 *bsiData);
void MMRF_SEQ_GGE_2G_RX1_SL2W ( SEQ_GGE_2G_RX1_SL2W_INFO_T *seq_gge_2g_rx1_sl2w_info, kal_uint32 *bsiData);
void MMRF_SEQ_GGE_2G_RX1_W2B ( SEQ_GGE_2G_RX1_W2B_INFO_T *seq_gge_2g_rx1_w2b_info, kal_uint32 *bsiData);
void MMRF_SEQ_GGE_2G_RX1_GAIN_CHANGE ( SEQ_GGE_2G_RX1_GAIN_CHANGE_INFO_T *seq_gge_2g_rx1_gain_change_info, kal_uint32 *bsiData);
void MMRF_SEQ_GGE_2G_RX1_POFF ( SEQ_GGE_2G_RX1_POFF_INFO_T *seq_gge_2g_rx1_poff_info, kal_uint32 *bsiData);

#endif /*__MMRFSEQGEN_2G_RX_MT6177M_H__*/
