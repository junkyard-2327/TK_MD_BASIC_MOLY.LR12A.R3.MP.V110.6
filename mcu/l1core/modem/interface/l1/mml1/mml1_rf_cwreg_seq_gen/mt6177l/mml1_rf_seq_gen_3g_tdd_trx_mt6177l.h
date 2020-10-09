#ifndef __MMRFSEQGEN_3G_TDD_TRX_MT6177L_H__
#define __MMRFSEQGEN_3G_TDD_TRX_MT6177L_H__
#define MMRF_CW_ADDR_LSB           (20)
#define MMRF_CW_DATA_MASK          (0x000FFFFF)
#define MMRF_CW_PACK(aDDR, vALUE)  (((aDDR << MMRF_CW_ADDR_LSB)) | (vALUE & MMRF_CW_DATA_MASK))

#define SEQ_TDSCDMA_3G_TDD_RX1_TRX_SL2W_COUNT (35)

#define SEQ_TDSCDMA_3G_TDD_RX1_TRX_W2T_COUNT (2)

#define SEQ_TDSCDMA_3G_TDD_RX1_TRX_W2R_COUNT (4)

#define SEQ_TDSCDMA_3G_TDD_RX1_TRX_T2R_COUNT (4)

#define SEQ_TDSCDMA_3G_TDD_RX1_TRX_R2T_COUNT (2)

#define SEQ_TDSCDMA_3G_TDD_RX1_TRX_R2SL_COUNT (1)

#define SEQ_TDSCDMA_3G_TDD_RX1_TRX_T2SL_COUNT (1)

#define SEQ_TDSCDMA_3G_TDD_RX1_TRX_RELOCK_COUNT (4)


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
   CW320_INFO_T cw320_info;
   CW322_INFO_T cw322_info;
   CW323_INFO_T cw323_info;
   CW326_INFO_T cw326_info;
   CW399_INFO_T cw399_info;
   CW413_INFO_T cw413_info;
   CW448_INFO_T cw448_info;
   CW495_INFO_T cw495_info;
   CW617_INFO_T cw617_info;
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
   CW819_INFO_T cw819_info;
}SEQ_TDSCDMA_3G_TDD_RX1_TRX_SL2W_INFO_T;


typedef struct
{
   CW1_INFO_T cw1_info;
   //CW704_INFO_T cw704_info;
}SEQ_TDSCDMA_3G_TDD_RX1_TRX_W2T_INFO_T;


typedef struct
{
   CW1_INFO_T cw1_info;
   CW320_INFO_T cw320_info;
   //CW464_INFO_T cw464_info;
   CW617_INFO_T cw617_info;
}SEQ_TDSCDMA_3G_TDD_RX1_TRX_W2R_INFO_T;


typedef struct
{
   CW1_INFO_T cw1_info;
   CW320_INFO_T cw320_info;
   //CW464_INFO_T cw464_info;
   CW617_INFO_T cw617_info;
}SEQ_TDSCDMA_3G_TDD_RX1_TRX_T2R_INFO_T;


typedef struct
{
   CW1_INFO_T cw1_info;
   //CW704_INFO_T cw704_info;
}SEQ_TDSCDMA_3G_TDD_RX1_TRX_R2T_INFO_T;


typedef struct
{
   CW1_INFO_T cw1_info;
}SEQ_TDSCDMA_3G_TDD_RX1_TRX_R2SL_INFO_T;


typedef struct
{
   CW1_INFO_T cw1_info;
}SEQ_TDSCDMA_3G_TDD_RX1_TRX_T2SL_INFO_T;


typedef struct
{
   CW128_INFO_T cw128_info;
   CW130_INFO_T cw130_info;
   CW131_INFO_T cw131_info;
   CW181_INFO_T cw181_info;
}SEQ_TDSCDMA_3G_TDD_RX1_TRX_RELOCK_INFO_T;

void MMRF_SEQ_TDSCDMA_3G_TDD_RX1_TRX_SL2W ( SEQ_TDSCDMA_3G_TDD_RX1_TRX_SL2W_INFO_T *seq_tdscdma_3g_tdd_rx1_trx_sl2w_info, kal_uint32 *bsiData);
void MMRF_SEQ_TDSCDMA_3G_TDD_RX1_TRX_W2T ( SEQ_TDSCDMA_3G_TDD_RX1_TRX_W2T_INFO_T *seq_tdscdma_3g_tdd_rx1_trx_w2t_info, kal_uint32 *bsiData);
void MMRF_SEQ_TDSCDMA_3G_TDD_RX1_TRX_W2R ( SEQ_TDSCDMA_3G_TDD_RX1_TRX_W2R_INFO_T *seq_tdscdma_3g_tdd_rx1_trx_w2r_info, kal_uint32 *bsiData);
void MMRF_SEQ_TDSCDMA_3G_TDD_RX1_TRX_T2R ( SEQ_TDSCDMA_3G_TDD_RX1_TRX_T2R_INFO_T *seq_tdscdma_3g_tdd_rx1_trx_t2r_info, kal_uint32 *bsiData);
void MMRF_SEQ_TDSCDMA_3G_TDD_RX1_TRX_R2T ( SEQ_TDSCDMA_3G_TDD_RX1_TRX_R2T_INFO_T *seq_tdscdma_3g_tdd_rx1_trx_r2t_info, kal_uint32 *bsiData);
void MMRF_SEQ_TDSCDMA_3G_TDD_RX1_TRX_R2SL ( SEQ_TDSCDMA_3G_TDD_RX1_TRX_R2SL_INFO_T *seq_tdscdma_3g_tdd_rx1_trx_r2sl_info, kal_uint32 *bsiData);
void MMRF_SEQ_TDSCDMA_3G_TDD_RX1_TRX_T2SL ( SEQ_TDSCDMA_3G_TDD_RX1_TRX_T2SL_INFO_T *seq_tdscdma_3g_tdd_rx1_trx_t2sl_info, kal_uint32 *bsiData);
void MMRF_SEQ_TDSCDMA_3G_TDD_RX1_TRX_RELOCK ( SEQ_TDSCDMA_3G_TDD_RX1_TRX_RELOCK_INFO_T *seq_tdscdma_3g_tdd_rx1_trx_relock_info, kal_uint32 *bsiData);

#endif /*__MMRFSEQGEN_3G_TDD_TRX_MT6177L_H__*/
