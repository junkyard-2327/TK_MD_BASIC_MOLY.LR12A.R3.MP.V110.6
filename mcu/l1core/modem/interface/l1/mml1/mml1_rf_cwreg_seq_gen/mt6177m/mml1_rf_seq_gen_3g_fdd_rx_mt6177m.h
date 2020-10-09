#ifndef __MMRFSEQGEN_3G_FDD_RX_MT6173_H__
#define __MMRFSEQGEN_3G_FDD_RX_MT6173_H__
#define MMRF_CW_ADDR_LSB           (20)
#define MMRF_CW_DATA_MASK          (0x000FFFFF)
#define MMRF_CW_PACK(aDDR, vALUE)  (((aDDR << MMRF_CW_ADDR_LSB)) | (vALUE & MMRF_CW_DATA_MASK))

#define SEQ_WCDMA_3G_FDD_RX1_B2SL_COUNT (1)

#define SEQ_WCDMA_3G_FDD_RX1_SL2W_COUNT (16)

#define SEQ_WCDMA_3G_FDD_RX1_W2B_COUNT (1)

#define SEQ_WCDMA_3G_FDD_RX1_DCOC_CAL_COUNT (18)

#define SEQ_WCDMA_3G_FDD_RX1_IRR_CAL_COUNT (31)

#define SEQ_WCDMA_3G_FDD_RX1_IIP2_CAL_COUNT (22)

#define SEQ_WCDMA_3G_FDD_RX1_PMODE_CHANGE_COUNT (8)

#define SEQ_WCDMA_3G_FDD_RX1_GAIN_CHANGE_COUNT (4)

#define SEQ_WCDMA_3G_FDD_RX1_BW_CHANGE_COUNT (3)

#define SEQ_WCDMA_3G_FDD_RX1_IIP2C_CODE_COUNT (1)

#define SEQ_WCDMA_3G_FDD_RX1_POFF_COUNT (2)


typedef struct
{
   CW1_INFO_T cw1_info;
}SEQ_WCDMA_3G_FDD_RX1_B2SL_INFO_T;


typedef struct
{
   CW1_INFO_T cw1_info;
   //CW127_INFO_T cw127_info;
   CW128_INFO_T cw128_info;
   CW130_INFO_T cw130_info;
   CW131_INFO_T cw131_info;
   CW179_INFO_T cw179_info;
   CW320_INFO_T cw320_info;
   CW321_INFO_T cw321_info;
   CW322_INFO_T cw322_info;
   CW324_INFO_T cw324_info;
   CW326_INFO_T cw326_info;
   CW399_INFO_T cw399_info;
   CW473_INFO_T cw473_info;
   CW495_INFO_T cw495_info;
   CW500_INFO_T cw500_info;
   CW501_INFO_T cw501_info;
}SEQ_WCDMA_3G_FDD_RX1_SL2W_INFO_T;


typedef struct
{
   CW1_INFO_T cw1_info;
}SEQ_WCDMA_3G_FDD_RX1_W2B_INFO_T;


typedef struct
{
   CW1_INFO_T cw1_info;
   //CW127_INFO_T cw127_info;
   CW128_INFO_T cw128_info;
   CW130_INFO_T cw130_info;
   CW131_INFO_T cw131_info;
   CW179_INFO_T cw179_info;
   //CW320_INFO_T cw320_info;
   //CW321_INFO_T cw321_info;
   CW322_INFO_T cw322_info;
   CW324_INFO_T cw324_info;
   //CW326_INFO_T cw326_info;
   CW399_INFO_T cw399_info;
   CW413_INFO_T cw413_info;
   CW414_INFO_T cw414_info;
   CW473_INFO_T cw473_info;
   CW495_INFO_T cw495_info;
   CW500_INFO_T cw500_info;
   CW501_INFO_T cw501_info;
}SEQ_WCDMA_3G_FDD_RX1_DCOC_CAL_INFO_T;


typedef struct
{
   CW1_INFO_T cw1_info;
   //CW127_INFO_T cw127_info;
   CW128_INFO_T cw128_info;
   CW130_INFO_T cw130_info;
   CW131_INFO_T cw131_info;
   CW179_INFO_T cw179_info;
   CW320_INFO_T cw320_info;
   CW321_INFO_T cw321_info;
   CW322_INFO_T cw322_info;
   CW324_INFO_T cw324_info;
   CW326_INFO_T cw326_info;
   CW334_INFO_T cw334_info;
   CW335_INFO_T cw335_info;
   CW336_INFO_T cw336_info;
   CW337_INFO_T cw337_info;
   //CW353_INFO_T cw353_info;
   //CW356_INFO_T cw356_info;
   CW399_INFO_T cw399_info;
   CW413_INFO_T cw413_info;
   CW414_INFO_T cw414_info;
   CW45_INFO_T cw45_info;
   CW495_INFO_T cw495_info;
   CW500_INFO_T cw500_info;
   CW501_INFO_T cw501_info;
   CW52_INFO_T cw52_info;
   CW53_INFO_T cw53_info;
}SEQ_WCDMA_3G_FDD_RX1_IRR_CAL_INFO_T;


typedef struct
{
   CW1_INFO_T cw1_info;
   //CW127_INFO_T cw127_info;
   CW128_INFO_T cw128_info;
   CW130_INFO_T cw130_info;
   CW131_INFO_T cw131_info;
   CW179_INFO_T cw179_info;
   CW320_INFO_T cw320_info;
   //CW321_INFO_T cw321_info;
   CW322_INFO_T cw322_info;
   CW326_INFO_T cw326_info;
   CW334_INFO_T cw334_info;
   CW335_INFO_T cw335_info;
   //CW353_INFO_T cw353_info;
   CW399_INFO_T cw399_info;
   CW413_INFO_T cw413_info;
   CW473_INFO_T cw473_info;
   CW495_INFO_T cw495_info;
   CW500_INFO_T cw500_info;
}SEQ_WCDMA_3G_FDD_RX1_IIP2_CAL_INFO_T;


typedef struct
{
   CW334_INFO_T cw334_info;
   CW335_INFO_T cw335_info;
   CW336_INFO_T cw336_info;
   CW337_INFO_T cw337_info;
   //CW353_INFO_T cw353_info;
   //CW356_INFO_T cw356_info;
   CW413_INFO_T cw413_info;
   CW414_INFO_T cw414_info;
}SEQ_WCDMA_3G_FDD_RX1_PMODE_CHANGE_INFO_T;


typedef struct
{
   CW334_INFO_T cw334_info;
   CW335_INFO_T cw335_info;
   CW336_INFO_T cw336_info;
   CW337_INFO_T cw337_info;
}SEQ_WCDMA_3G_FDD_RX1_GAIN_CHANGE_INFO_T;


typedef struct
{
   CW326_INFO_T cw326_info;
   //CW353_INFO_T cw353_info;
   //CW356_INFO_T cw356_info;
}SEQ_WCDMA_3G_FDD_RX1_BW_CHANGE_INFO_T;


typedef struct
{
   CW473_INFO_T cw473_info;
}SEQ_WCDMA_3G_FDD_RX1_IIP2C_CODE_INFO_T;


typedef struct
{
   CW320_INFO_T cw320_info;
   CW321_INFO_T cw321_info;
}SEQ_WCDMA_3G_FDD_RX1_POFF_INFO_T;

void MMRF_SEQ_WCDMA_3G_FDD_RX1_B2SL ( SEQ_WCDMA_3G_FDD_RX1_B2SL_INFO_T *seq_wcdma_3g_fdd_rx1_b2sl_info, kal_uint32 *bsiData);
void MMRF_SEQ_WCDMA_3G_FDD_RX1_SL2W ( SEQ_WCDMA_3G_FDD_RX1_SL2W_INFO_T *seq_wcdma_3g_fdd_rx1_sl2w_info, kal_uint32 *bsiData);
void MMRF_SEQ_WCDMA_3G_FDD_RX1_W2B ( SEQ_WCDMA_3G_FDD_RX1_W2B_INFO_T *seq_wcdma_3g_fdd_rx1_w2b_info, kal_uint32 *bsiData);
void MMRF_SEQ_WCDMA_3G_FDD_RX1_DCOC_CAL ( SEQ_WCDMA_3G_FDD_RX1_DCOC_CAL_INFO_T *seq_wcdma_3g_fdd_rx1_dcoc_cal_info, kal_uint32 *bsiData);
void MMRF_SEQ_WCDMA_3G_FDD_RX1_IRR_CAL ( SEQ_WCDMA_3G_FDD_RX1_IRR_CAL_INFO_T *seq_wcdma_3g_fdd_rx1_irr_cal_info, kal_uint32 *bsiData);
void MMRF_SEQ_WCDMA_3G_FDD_RX1_IIP2_CAL ( SEQ_WCDMA_3G_FDD_RX1_IIP2_CAL_INFO_T *seq_wcdma_3g_fdd_rx1_iip2_cal_info, kal_uint32 *bsiData);
void MMRF_SEQ_WCDMA_3G_FDD_RX1_PMODE_CHANGE ( SEQ_WCDMA_3G_FDD_RX1_PMODE_CHANGE_INFO_T *seq_wcdma_3g_fdd_rx1_pmode_change_info, kal_uint32 *bsiData);
void MMRF_SEQ_WCDMA_3G_FDD_RX1_GAIN_CHANGE ( SEQ_WCDMA_3G_FDD_RX1_GAIN_CHANGE_INFO_T *seq_wcdma_3g_fdd_rx1_gain_change_info, kal_uint32 *bsiData);
void MMRF_SEQ_WCDMA_3G_FDD_RX1_BW_CHANGE ( SEQ_WCDMA_3G_FDD_RX1_BW_CHANGE_INFO_T *seq_wcdma_3g_fdd_rx1_bw_change_info, kal_uint32 *bsiData);
void MMRF_SEQ_WCDMA_3G_FDD_RX1_IIP2C_CODE ( SEQ_WCDMA_3G_FDD_RX1_IIP2C_CODE_INFO_T *seq_wcdma_3g_fdd_rx1_iip2c_code_info, kal_uint32 *bsiData);
void MMRF_SEQ_WCDMA_3G_FDD_RX1_POFF ( SEQ_WCDMA_3G_FDD_RX1_POFF_INFO_T *seq_wcdma_3g_fdd_rx1_poff_info, kal_uint32 *bsiData);

#endif /*__MMRFSEQGEN_3G_FDD_RX_MT6173_H__*/
