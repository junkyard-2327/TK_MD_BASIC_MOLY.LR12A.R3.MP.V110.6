#ifndef __MMRFSEQGEN_2G_RX_MT6177L_H__
#define __MMRFSEQGEN_2G_RX_MT6177L_H__
#define MMRF_CW_ADDR_LSB           (20)
#define MMRF_CW_DATA_MASK          (0x000FFFFF)
#define MMRF_CW_PACK(aDDR, vALUE)  (((aDDR << MMRF_CW_ADDR_LSB)) | (vALUE & MMRF_CW_DATA_MASK))

#define SEQ_GGE_2G_RX1_B2SL_COUNT (1)

#define SEQ_GGE_2G_RX1_DCOC_CAL_COUNT (18)

#define SEQ_GGE_2G_RX1_SL2W_COUNT (18)

#define SEQ_GGE_2G_RX1_W2B_COUNT (3)

#define SEQ_GGE_2G_RX1_GAIN_CHANGE_COUNT (1)

#define SEQ_GGE_2G_RX1_PMODE_CHANGE_COUNT (4)

#define SEQ_GGE_2G_RX1_BW_CHANGE_COUNT (1)

#define SEQ_GGE_2G_RX1_POFF_COUNT (1)

#define SEQ_GGE_2G_RX1_GGE_OBB_FLAG_COUNT (1)

#define SEQ_GGE_2G_RX1_BAND_CHANGE_COUNT (6)


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
   CW322_INFO_T cw322_info;
   CW323_INFO_T cw323_info;
   CW324_INFO_T cw324_info;
   CW325_INFO_T cw325_info;
   CW326_INFO_T cw326_info;
   CW399_INFO_T cw399_info;
   CW413_INFO_T cw413_info;
   CW414_INFO_T cw414_info;
   CW448_INFO_T cw448_info;
   CW456_INFO_T cw456_info;
   CW495_INFO_T cw495_info;
   CW617_INFO_T cw617_info;
}SEQ_GGE_2G_RX1_DCOC_CAL_INFO_T;


typedef struct
{
   CW1_INFO_T cw1_info;
   //CW127_INFO_T cw127_info;
   CW128_INFO_T cw128_info;
   CW130_INFO_T cw130_info;
   CW131_INFO_T cw131_info;
   CW322_INFO_T cw322_info;
   CW323_INFO_T cw323_info;
   CW324_INFO_T cw324_info;
   CW325_INFO_T cw325_info;
   CW326_INFO_T cw326_info;
   CW348_INFO_T cw348_info;
   CW399_INFO_T cw399_info;
   CW413_INFO_T cw413_info;
   CW414_INFO_T cw414_info;
   CW448_INFO_T cw448_info;
   CW456_INFO_T cw456_info;
   CW495_INFO_T cw495_info;
   CW617_INFO_T cw617_info;
}SEQ_GGE_2G_RX1_SL2W_INFO_T;


typedef struct
{
   CW1_INFO_T cw1_info;
   //CW464_INFO_T cw464_info;
   CW617_INFO_T cw617_info;
}SEQ_GGE_2G_RX1_W2B_INFO_T;


typedef struct
{
   CW334_INFO_T cw334_info;
}SEQ_GGE_2G_RX1_GAIN_CHANGE_INFO_T;


typedef struct
{
   CW413_INFO_T cw413_info;
   CW414_INFO_T cw414_info;
   CW448_INFO_T cw448_info;
   CW456_INFO_T cw456_info;
}SEQ_GGE_2G_RX1_PMODE_CHANGE_INFO_T;


typedef struct
{
   CW326_INFO_T cw326_info;
}SEQ_GGE_2G_RX1_BW_CHANGE_INFO_T;


typedef struct
{
   CW617_INFO_T cw617_info;
}SEQ_GGE_2G_RX1_POFF_INFO_T;


typedef struct
{
   CW348_INFO_T cw348_info;
}SEQ_GGE_2G_RX1_GGE_OBB_FLAG_INFO_T;


typedef struct
{
   CW322_INFO_T cw322_info;
   CW323_INFO_T cw323_info;
   CW324_INFO_T cw324_info;
   CW325_INFO_T cw325_info;
   CW399_INFO_T cw399_info;
   CW495_INFO_T cw495_info;
}SEQ_GGE_2G_RX1_BAND_CHANGE_INFO_T;

void MMRF_SEQ_GGE_2G_RX1_B2SL ( SEQ_GGE_2G_RX1_B2SL_INFO_T *seq_gge_2g_rx1_b2sl_info, kal_uint32 *bsiData);
void MMRF_SEQ_GGE_2G_RX1_DCOC_CAL ( SEQ_GGE_2G_RX1_DCOC_CAL_INFO_T *seq_gge_2g_rx1_dcoc_cal_info, kal_uint32 *bsiData);
void MMRF_SEQ_GGE_2G_RX1_SL2W ( SEQ_GGE_2G_RX1_SL2W_INFO_T *seq_gge_2g_rx1_sl2w_info, kal_uint32 *bsiData);
void MMRF_SEQ_GGE_2G_RX1_W2B ( SEQ_GGE_2G_RX1_W2B_INFO_T *seq_gge_2g_rx1_w2b_info, kal_uint32 *bsiData);
void MMRF_SEQ_GGE_2G_RX1_GAIN_CHANGE ( SEQ_GGE_2G_RX1_GAIN_CHANGE_INFO_T *seq_gge_2g_rx1_gain_change_info, kal_uint32 *bsiData);
void MMRF_SEQ_GGE_2G_RX1_PMODE_CHANGE ( SEQ_GGE_2G_RX1_PMODE_CHANGE_INFO_T *seq_gge_2g_rx1_pmode_change_info, kal_uint32 *bsiData);
void MMRF_SEQ_GGE_2G_RX1_BW_CHANGE ( SEQ_GGE_2G_RX1_BW_CHANGE_INFO_T *seq_gge_2g_rx1_bw_change_info, kal_uint32 *bsiData);
void MMRF_SEQ_GGE_2G_RX1_POFF ( SEQ_GGE_2G_RX1_POFF_INFO_T *seq_gge_2g_rx1_poff_info, kal_uint32 *bsiData);
void MMRF_SEQ_GGE_2G_RX1_GGE_OBB_FLAG ( SEQ_GGE_2G_RX1_GGE_OBB_FLAG_INFO_T *seq_gge_2g_rx1_gge_obb_flag_info, kal_uint32 *bsiData);
void MMRF_SEQ_GGE_2G_RX1_BAND_CHANGE ( SEQ_GGE_2G_RX1_BAND_CHANGE_INFO_T *seq_gge_2g_rx1_band_change_info, kal_uint32 *bsiData);

#endif /*__MMRFSEQGEN_2G_RX_MT6177L_H__*/
