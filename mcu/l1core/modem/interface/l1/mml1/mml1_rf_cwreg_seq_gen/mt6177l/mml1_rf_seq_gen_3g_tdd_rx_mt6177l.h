#ifndef __MMRFSEQGEN_3G_TDD_RX_MT6177L_H__
#define __MMRFSEQGEN_3G_TDD_RX_MT6177L_H__
#define MMRF_CW_ADDR_LSB           (20)
#define MMRF_CW_DATA_MASK          (0x000FFFFF)
#define MMRF_CW_PACK(aDDR, vALUE)  (((aDDR << MMRF_CW_ADDR_LSB)) | (vALUE & MMRF_CW_DATA_MASK))

#define SEQ_TDSCDMA_3G_TDDSAWLESS_RX1_B2SL_COUNT (1)

#define SEQ_TDSCDMA_3G_TDDSAWLESS_RX1_DCOC_CAL_COUNT (18)

#define SEQ_TDSCDMA_3G_TDDSAWLESS_RX1_IRR_CAL_COUNT (35)

#define SEQ_TDSCDMA_3G_TDDSAWLESS_RX1_IIP2_CAL_COUNT (36)

#define SEQ_TDSCDMA_3G_TDDSAWLESS_RX1_SL2W_COUNT (23)

#define SEQ_TDSCDMA_3G_TDDSAWLESS_RX1_W2B_COUNT (4)

#define SEQ_TDSCDMA_3G_TDDSAWLESS_RX1_GAIN_CHANGE_COUNT (6)

#define SEQ_TDSCDMA_3G_TDDSAWLESS_RX1_PMODE_CHANGE_COUNT (4)

#define SEQ_TDSCDMA_3G_TDDSAWLESS_RX1_BW_CHANGE_COUNT (1)

#define SEQ_TDSCDMA_3G_TDDSAWLESS_RX1_POFF_COUNT (2)

#define SEQ_TDSCDMA_3G_TDDSAWLESS_RX1_GGE_OBB_FLAG_COUNT (1)

#define SEQ_TDSCDMA_3G_TDDSAWLESS_RX1_BAND_CHANGE_COUNT (6)

#define SEQ_TDSCDMA_3G_TDDSAWLESS_RX1_IIP2C_CODE_COUNT (2)


typedef struct
{
   CW1_INFO_T cw1_info;
}SEQ_TDSCDMA_3G_TDDSAWLESS_RX1_B2SL_INFO_T;


typedef struct
{
   CW1_INFO_T cw1_info;
   CW127_INFO_T cw127_info;
   CW128_INFO_T cw128_info;
   CW130_INFO_T cw130_info;
   CW131_INFO_T cw131_info;
   CW179_INFO_T cw179_info;
   CW320_INFO_T cw320_info;
   CW322_INFO_T cw322_info;
   CW323_INFO_T cw323_info;
   CW324_INFO_T cw324_info;
   CW325_INFO_T cw325_info;
   CW326_INFO_T cw326_info;
   CW349_INFO_T cw349_info;
   CW399_INFO_T cw399_info;
   CW473_INFO_T cw473_info;
   CW495_INFO_T cw495_info;
   CW617_INFO_T cw617_info;
}SEQ_TDSCDMA_3G_TDDSAWLESS_RX1_DCOC_CAL_INFO_T;


typedef struct
{
   CW1_INFO_T cw1_info;
   //CW127_INFO_T cw127_info;
   CW128_INFO_T cw128_info;
   CW130_INFO_T cw130_info;
   CW131_INFO_T cw131_info;
   CW134_INFO_T cw134_info;
   CW135_INFO_T cw135_info;
   CW181_INFO_T cw181_info;
   CW320_INFO_T cw320_info;
   CW322_INFO_T cw322_info;
   CW323_INFO_T cw323_info;
   CW324_INFO_T cw324_info;
   CW325_INFO_T cw325_info;
   CW326_INFO_T cw326_info;
   CW334_INFO_T cw334_info;
   CW335_INFO_T cw335_info;
   CW336_INFO_T cw336_info;
   CW337_INFO_T cw337_info;
   CW349_INFO_T cw349_info;
   CW399_INFO_T cw399_info;
   CW413_INFO_T cw413_info;
   CW414_INFO_T cw414_info;
   CW448_INFO_T cw448_info;
   CW45_INFO_T cw45_info;
   CW456_INFO_T cw456_info;
   CW473_INFO_T cw473_info;
   CW495_INFO_T cw495_info;
   //CW50_INFO_T cw50_info;
   //CW51_INFO_T cw51_info;
   CW617_INFO_T cw617_info;
}SEQ_TDSCDMA_3G_TDDSAWLESS_RX1_IRR_CAL_INFO_T;


typedef struct
{
   CW1_INFO_T cw1_info;
   //CW127_INFO_T cw127_info;
   CW128_INFO_T cw128_info;
   CW130_INFO_T cw130_info;
   CW131_INFO_T cw131_info;
   CW134_INFO_T cw134_info;
   CW135_INFO_T cw135_info;
   CW181_INFO_T cw181_info;
   CW320_INFO_T cw320_info;
   CW322_INFO_T cw322_info;
   CW323_INFO_T cw323_info;
   CW324_INFO_T cw324_info;
   CW325_INFO_T cw325_info;
   CW326_INFO_T cw326_info;
   CW334_INFO_T cw334_info;
   CW335_INFO_T cw335_info;
   CW336_INFO_T cw336_info;
   CW337_INFO_T cw337_info;
   CW349_INFO_T cw349_info;
   CW399_INFO_T cw399_info;
   CW413_INFO_T cw413_info;
   CW414_INFO_T cw414_info;
   CW448_INFO_T cw448_info;
   CW456_INFO_T cw456_info;
   CW473_INFO_T cw473_info;
   CW495_INFO_T cw495_info;
   CW617_INFO_T cw617_info;
   CW707_INFO_T cw707_info;
}SEQ_TDSCDMA_3G_TDDSAWLESS_RX1_IIP2_CAL_INFO_T;


typedef struct
{
   CW1_INFO_T cw1_info;
   //CW127_INFO_T cw127_info;
   CW128_INFO_T cw128_info;
   CW130_INFO_T cw130_info;
   CW131_INFO_T cw131_info;
   CW134_INFO_T cw134_info;
   CW135_INFO_T cw135_info;
   CW181_INFO_T cw181_info;
   CW320_INFO_T cw320_info;
   CW322_INFO_T cw322_info;
   CW323_INFO_T cw323_info;
   CW324_INFO_T cw324_info;
   CW325_INFO_T cw325_info;
   CW326_INFO_T cw326_info;
   CW349_INFO_T cw349_info;
   CW399_INFO_T cw399_info;
   CW413_INFO_T cw413_info;
   CW414_INFO_T cw414_info;
   CW448_INFO_T cw448_info;
   CW456_INFO_T cw456_info;
   CW473_INFO_T cw473_info;
   CW495_INFO_T cw495_info;
   CW617_INFO_T cw617_info;
}SEQ_TDSCDMA_3G_TDDSAWLESS_RX1_SL2W_INFO_T;


typedef struct
{
   CW1_INFO_T cw1_info;
   CW320_INFO_T cw320_info;
   //CW464_INFO_T cw464_info;
   CW617_INFO_T cw617_info;
}SEQ_TDSCDMA_3G_TDDSAWLESS_RX1_W2B_INFO_T;


typedef struct
{
   CW334_INFO_T cw334_info;
   CW335_INFO_T cw335_info;
   CW336_INFO_T cw336_info;
   CW337_INFO_T cw337_info;
   CW338_INFO_T cw338_info;
   CW339_INFO_T cw339_info;
}SEQ_TDSCDMA_3G_TDDSAWLESS_RX1_GAIN_CHANGE_INFO_T;


typedef struct
{
   CW413_INFO_T cw413_info;
   CW414_INFO_T cw414_info;
   CW448_INFO_T cw448_info;
   CW456_INFO_T cw456_info;
}SEQ_TDSCDMA_3G_TDDSAWLESS_RX1_PMODE_CHANGE_INFO_T;


typedef struct
{
   CW326_INFO_T cw326_info;
}SEQ_TDSCDMA_3G_TDDSAWLESS_RX1_BW_CHANGE_INFO_T;


typedef struct
{
   CW320_INFO_T cw320_info;
   CW617_INFO_T cw617_info;
}SEQ_TDSCDMA_3G_TDDSAWLESS_RX1_POFF_INFO_T;


typedef struct
{
   CW348_INFO_T cw348_info;
}SEQ_TDSCDMA_3G_TDDSAWLESS_RX1_GGE_OBB_FLAG_INFO_T;


typedef struct
{
   CW322_INFO_T cw322_info;
   CW323_INFO_T cw323_info;
   CW324_INFO_T cw324_info;
   CW325_INFO_T cw325_info;
   CW399_INFO_T cw399_info;
   CW495_INFO_T cw495_info;
}SEQ_TDSCDMA_3G_TDDSAWLESS_RX1_BAND_CHANGE_INFO_T;


typedef struct
{
   CW349_INFO_T cw349_info;
   CW473_INFO_T cw473_info;
}SEQ_TDSCDMA_3G_TDDSAWLESS_RX1_IIP2C_CODE_INFO_T;

void MMRF_SEQ_TDSCDMA_3G_TDDSAWLESS_RX1_B2SL ( SEQ_TDSCDMA_3G_TDDSAWLESS_RX1_B2SL_INFO_T *seq_tdscdma_3g_tddsawless_rx1_b2sl_info, kal_uint32 *bsiData);
void MMRF_SEQ_TDSCDMA_3G_TDDSAWLESS_RX1_DCOC_CAL ( SEQ_TDSCDMA_3G_TDDSAWLESS_RX1_DCOC_CAL_INFO_T *seq_tdscdma_3g_tddsawless_rx1_dcoc_cal_info, kal_uint32 *bsiData);
void MMRF_SEQ_TDSCDMA_3G_TDDSAWLESS_RX1_IRR_CAL ( SEQ_TDSCDMA_3G_TDDSAWLESS_RX1_IRR_CAL_INFO_T *seq_tdscdma_3g_tddsawless_rx1_irr_cal_info, kal_uint32 *bsiData);
void MMRF_SEQ_TDSCDMA_3G_TDDSAWLESS_RX1_IIP2_CAL ( SEQ_TDSCDMA_3G_TDDSAWLESS_RX1_IIP2_CAL_INFO_T *seq_tdscdma_3g_tddsawless_rx1_iip2_cal_info, kal_uint32 *bsiData);
void MMRF_SEQ_TDSCDMA_3G_TDDSAWLESS_RX1_SL2W ( SEQ_TDSCDMA_3G_TDDSAWLESS_RX1_SL2W_INFO_T *seq_tdscdma_3g_tddsawless_rx1_sl2w_info, kal_uint32 *bsiData);
void MMRF_SEQ_TDSCDMA_3G_TDDSAWLESS_RX1_W2B ( SEQ_TDSCDMA_3G_TDDSAWLESS_RX1_W2B_INFO_T *seq_tdscdma_3g_tddsawless_rx1_w2b_info, kal_uint32 *bsiData);
void MMRF_SEQ_TDSCDMA_3G_TDDSAWLESS_RX1_GAIN_CHANGE ( SEQ_TDSCDMA_3G_TDDSAWLESS_RX1_GAIN_CHANGE_INFO_T *seq_tdscdma_3g_tddsawless_rx1_gain_change_info, kal_uint32 *bsiData);
void MMRF_SEQ_TDSCDMA_3G_TDDSAWLESS_RX1_PMODE_CHANGE ( SEQ_TDSCDMA_3G_TDDSAWLESS_RX1_PMODE_CHANGE_INFO_T *seq_tdscdma_3g_tddsawless_rx1_pmode_change_info, kal_uint32 *bsiData);
void MMRF_SEQ_TDSCDMA_3G_TDDSAWLESS_RX1_BW_CHANGE ( SEQ_TDSCDMA_3G_TDDSAWLESS_RX1_BW_CHANGE_INFO_T *seq_tdscdma_3g_tddsawless_rx1_bw_change_info, kal_uint32 *bsiData);
void MMRF_SEQ_TDSCDMA_3G_TDDSAWLESS_RX1_POFF ( SEQ_TDSCDMA_3G_TDDSAWLESS_RX1_POFF_INFO_T *seq_tdscdma_3g_tddsawless_rx1_poff_info, kal_uint32 *bsiData);
void MMRF_SEQ_TDSCDMA_3G_TDDSAWLESS_RX1_GGE_OBB_FLAG ( SEQ_TDSCDMA_3G_TDDSAWLESS_RX1_GGE_OBB_FLAG_INFO_T *seq_tdscdma_3g_tddsawless_rx1_gge_obb_flag_info, kal_uint32 *bsiData);
void MMRF_SEQ_TDSCDMA_3G_TDDSAWLESS_RX1_BAND_CHANGE ( SEQ_TDSCDMA_3G_TDDSAWLESS_RX1_BAND_CHANGE_INFO_T *seq_tdscdma_3g_tddsawless_rx1_band_change_info, kal_uint32 *bsiData);
void MMRF_SEQ_TDSCDMA_3G_TDDSAWLESS_RX1_IIP2C_CODE ( SEQ_TDSCDMA_3G_TDDSAWLESS_RX1_IIP2C_CODE_INFO_T *seq_tdscdma_3g_tddsawless_rx1_iip2c_code_info, kal_uint32 *bsiData);

#endif /*__MMRFSEQGEN_3G_TDD_RX_MT6177L_H__*/
