#ifndef __MMRFSEQGEN_C2K_RX_MT6177L_H__
#define __MMRFSEQGEN_C2K_RX_MT6177L_H__
#define MMRF_CW_ADDR_LSB           (20)
#define MMRF_CW_DATA_MASK          (0x000FFFFF)
#define MMRF_CW_PACK(aDDR, vALUE)  (((aDDR << MMRF_CW_ADDR_LSB)) | (vALUE & MMRF_CW_DATA_MASK))

#define SEQ_C2K_RX1_B2SL_COUNT (1)

#define SEQ_C2K_RX1_DCOC_CAL_COUNT (18)

#define SEQ_C2K_RX1_IRR_CAL_COUNT (33)

#define SEQ_C2K_RX1_IIP2_CAL_COUNT (34)

#define SEQ_C2K_RX1_SL2W_COUNT (21)

#define SEQ_C2K_RX1_W2B_COUNT (3)

#define SEQ_C2K_RX1_GAIN_CHANGE_COUNT (6)

#define SEQ_C2K_RX1_PMODE_CHANGE_COUNT (4)

#define SEQ_C2K_RX1_BW_CHANGE_COUNT (1)

#define SEQ_C2K_RX1_POFF_COUNT (2)

#define SEQ_C2K_RX1_GGE_OBB_FLAG_COUNT (1)

#define SEQ_C2K_RX1_BAND_CHANGE_COUNT (6)

#define SEQ_C2K_RX1_IIP2C_CODE_COUNT (2)

#define SEQ_C2K_RX1_SYNTH_ADJ_COUNT (1)

#define SEQ_C2K_RX2_B2SL_COUNT (1)

#define SEQ_C2K_RX2_DCOC_CAL_COUNT (18)

#define SEQ_C2K_RX2_IRR_CAL_COUNT (33)

#define SEQ_C2K_RX2_IIP2_CAL_COUNT (34)

#define SEQ_C2K_RX2_SL2W_COUNT (21)

#define SEQ_C2K_RX2_W2B_COUNT (3)

#define SEQ_C2K_RX2_GAIN_CHANGE_COUNT (6)

#define SEQ_C2K_RX2_PMODE_CHANGE_COUNT (4)

#define SEQ_C2K_RX2_BW_CHANGE_COUNT (1)

#define SEQ_C2K_RX2_POFF_COUNT (2)

#define SEQ_C2K_RX2_BAND_CHANGE_COUNT (6)

#define SEQ_C2K_RX2_IIP2C_CODE_COUNT (2)

#define SEQ_C2K_RX2_SYNTH_ADJ_COUNT (1)


typedef struct
{
   CW1_INFO_T cw1_info;
}SEQ_C2K_RX1_B2SL_INFO_T;


typedef struct
{
   CW1_INFO_T cw1_info;
   CW127_INFO_T cw127_info;
   CW128_INFO_T cw128_info;
   CW130_INFO_T cw130_info;
   CW131_INFO_T cw131_info;
   CW183_INFO_T cw183_info;
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
}SEQ_C2K_RX1_DCOC_CAL_INFO_T;


typedef struct
{
   CW1_INFO_T cw1_info;
   CW127_INFO_T cw127_info;
   CW128_INFO_T cw128_info;
   CW130_INFO_T cw130_info;
   CW131_INFO_T cw131_info;
   CW183_INFO_T cw183_info;
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
}SEQ_C2K_RX1_IRR_CAL_INFO_T;


typedef struct
{
   CW1_INFO_T cw1_info;
   CW127_INFO_T cw127_info;
   CW128_INFO_T cw128_info;
   CW130_INFO_T cw130_info;
   CW131_INFO_T cw131_info;
   CW183_INFO_T cw183_info;
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
}SEQ_C2K_RX1_IIP2_CAL_INFO_T;


typedef struct
{
   CW1_INFO_T cw1_info;
   CW127_INFO_T cw127_info;
   CW128_INFO_T cw128_info;
   CW130_INFO_T cw130_info;
   CW131_INFO_T cw131_info;
   CW183_INFO_T cw183_info;
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
}SEQ_C2K_RX1_SL2W_INFO_T;


typedef struct
{
   CW1_INFO_T cw1_info;
   CW320_INFO_T cw320_info;
   CW617_INFO_T cw617_info;
}SEQ_C2K_RX1_W2B_INFO_T;


typedef struct
{
   CW334_INFO_T cw334_info;
   CW335_INFO_T cw335_info;
   CW336_INFO_T cw336_info;
   CW337_INFO_T cw337_info;
   CW338_INFO_T cw338_info;
   CW339_INFO_T cw339_info;
}SEQ_C2K_RX1_GAIN_CHANGE_INFO_T;


typedef struct
{
   CW413_INFO_T cw413_info;
   CW414_INFO_T cw414_info;
   CW448_INFO_T cw448_info;
   CW456_INFO_T cw456_info;
}SEQ_C2K_RX1_PMODE_CHANGE_INFO_T;


typedef struct
{
   CW326_INFO_T cw326_info;
}SEQ_C2K_RX1_BW_CHANGE_INFO_T;


typedef struct
{
   CW320_INFO_T cw320_info;
   CW617_INFO_T cw617_info;
}SEQ_C2K_RX1_POFF_INFO_T;


typedef struct
{
   CW348_INFO_T cw348_info;
}SEQ_C2K_RX1_GGE_OBB_FLAG_INFO_T;


typedef struct
{
   CW322_INFO_T cw322_info;
   CW323_INFO_T cw323_info;
   CW324_INFO_T cw324_info;
   CW325_INFO_T cw325_info;
   CW399_INFO_T cw399_info;
   CW495_INFO_T cw495_info;
}SEQ_C2K_RX1_BAND_CHANGE_INFO_T;


typedef struct
{
   CW349_INFO_T cw349_info;
   CW473_INFO_T cw473_info;
}SEQ_C2K_RX1_IIP2C_CODE_INFO_T;


typedef struct
{
   CW127_INFO_T cw127_info;
}SEQ_C2K_RX1_SYNTH_ADJ_INFO_T;


typedef struct
{
   CW1_INFO_T cw1_info;
}SEQ_C2K_RX2_B2SL_INFO_T;


typedef struct
{
   CW1_INFO_T cw1_info;
   CW126_INFO_T cw126_info;
   CW129_INFO_T cw129_info;
   CW132_INFO_T cw132_info;
   CW133_INFO_T cw133_info;
   CW283_INFO_T cw283_info;
   CW327_INFO_T cw327_info;
   CW329_INFO_T cw329_info;
   CW330_INFO_T cw330_info;
   CW331_INFO_T cw331_info;
   CW332_INFO_T cw332_info;
   CW333_INFO_T cw333_info;
   CW350_INFO_T cw350_info;
   CW400_INFO_T cw400_info;
   CW482_INFO_T cw482_info;
   CW499_INFO_T cw499_info;
   CW617_INFO_T cw617_info;
}SEQ_C2K_RX2_DCOC_CAL_INFO_T;


typedef struct
{
   CW1_INFO_T cw1_info;
   CW126_INFO_T cw126_info;
   CW129_INFO_T cw129_info;
   CW132_INFO_T cw132_info;
   CW133_INFO_T cw133_info;
   CW283_INFO_T cw283_info;
   CW327_INFO_T cw327_info;
   CW329_INFO_T cw329_info;
   CW330_INFO_T cw330_info;
   CW331_INFO_T cw331_info;
   CW332_INFO_T cw332_info;
   CW333_INFO_T cw333_info;
   CW340_INFO_T cw340_info;
   CW341_INFO_T cw341_info;
   CW342_INFO_T cw342_info;
   CW343_INFO_T cw343_info;
   CW350_INFO_T cw350_info;
   CW400_INFO_T cw400_info;
   CW415_INFO_T cw415_info;
   CW416_INFO_T cw416_info;
   CW45_INFO_T cw45_info;
   CW452_INFO_T cw452_info;
   CW460_INFO_T cw460_info;
   CW482_INFO_T cw482_info;
   CW499_INFO_T cw499_info;
   //CW50_INFO_T cw50_info;
   //CW51_INFO_T cw51_info;
   CW617_INFO_T cw617_info;
}SEQ_C2K_RX2_IRR_CAL_INFO_T;


typedef struct
{
   CW1_INFO_T cw1_info;
   CW126_INFO_T cw126_info;
   CW129_INFO_T cw129_info;
   CW132_INFO_T cw132_info;
   CW133_INFO_T cw133_info;
   CW283_INFO_T cw283_info;
   CW327_INFO_T cw327_info;
   CW329_INFO_T cw329_info;
   CW330_INFO_T cw330_info;
   CW331_INFO_T cw331_info;
   CW332_INFO_T cw332_info;
   CW333_INFO_T cw333_info;
   CW340_INFO_T cw340_info;
   //CW341_INFO_T cw341_info;
   CW342_INFO_T cw342_info;
   CW343_INFO_T cw343_info;
   CW350_INFO_T cw350_info;
   CW400_INFO_T cw400_info;
   CW415_INFO_T cw415_info;
   CW416_INFO_T cw416_info;
   CW452_INFO_T cw452_info;
   CW460_INFO_T cw460_info;
   CW482_INFO_T cw482_info;
   CW499_INFO_T cw499_info;
   CW617_INFO_T cw617_info;
   CW707_INFO_T cw707_info;
}SEQ_C2K_RX2_IIP2_CAL_INFO_T;


typedef struct
{
   CW1_INFO_T cw1_info;
   CW126_INFO_T cw126_info;
   CW129_INFO_T cw129_info;
   CW132_INFO_T cw132_info;
   CW133_INFO_T cw133_info;
   CW283_INFO_T cw283_info;
   CW327_INFO_T cw327_info;
   CW329_INFO_T cw329_info;
   CW330_INFO_T cw330_info;
   CW331_INFO_T cw331_info;
   CW332_INFO_T cw332_info;
   CW333_INFO_T cw333_info;
   CW350_INFO_T cw350_info;
   CW400_INFO_T cw400_info;
   CW415_INFO_T cw415_info;
   CW416_INFO_T cw416_info;
   CW452_INFO_T cw452_info;
   CW460_INFO_T cw460_info;
   CW482_INFO_T cw482_info;
   CW499_INFO_T cw499_info;
   CW617_INFO_T cw617_info;
}SEQ_C2K_RX2_SL2W_INFO_T;


typedef struct
{
   CW1_INFO_T cw1_info;
   CW327_INFO_T cw327_info;
   CW617_INFO_T cw617_info;
}SEQ_C2K_RX2_W2B_INFO_T;


typedef struct
{
   CW338_INFO_T cw338_info;
   CW340_INFO_T cw340_info;
   CW341_INFO_T cw341_info;
   CW342_INFO_T cw342_info;
   CW343_INFO_T cw343_info;
   CW345_INFO_T cw345_info;
}SEQ_C2K_RX2_GAIN_CHANGE_INFO_T;


typedef struct
{
   CW415_INFO_T cw415_info;
   CW416_INFO_T cw416_info;
   CW452_INFO_T cw452_info;
   CW460_INFO_T cw460_info;
}SEQ_C2K_RX2_PMODE_CHANGE_INFO_T;


typedef struct
{
   CW333_INFO_T cw333_info;
}SEQ_C2K_RX2_BW_CHANGE_INFO_T;


typedef struct
{
   CW327_INFO_T cw327_info;
   CW617_INFO_T cw617_info;
}SEQ_C2K_RX2_POFF_INFO_T;


typedef struct
{
   CW329_INFO_T cw329_info;
   CW330_INFO_T cw330_info;
   CW331_INFO_T cw331_info;
   CW332_INFO_T cw332_info;
   CW400_INFO_T cw400_info;
   CW499_INFO_T cw499_info;
}SEQ_C2K_RX2_BAND_CHANGE_INFO_T;


typedef struct
{
   CW350_INFO_T cw350_info;
   CW482_INFO_T cw482_info;
}SEQ_C2K_RX2_IIP2C_CODE_INFO_T;


typedef struct
{
   CW126_INFO_T cw126_info;
}SEQ_C2K_RX2_SYNTH_ADJ_INFO_T;

void MMRF_SEQ_C2K_RX1_B2SL ( SEQ_C2K_RX1_B2SL_INFO_T *seq_c2k_rx1_b2sl_info, kal_uint32 *bsiData);
void MMRF_SEQ_C2K_RX1_DCOC_CAL ( SEQ_C2K_RX1_DCOC_CAL_INFO_T *seq_c2k_rx1_dcoc_cal_info, kal_uint32 *bsiData);
void MMRF_SEQ_C2K_RX1_IRR_CAL ( SEQ_C2K_RX1_IRR_CAL_INFO_T *seq_c2k_rx1_irr_cal_info, kal_uint32 *bsiData);
void MMRF_SEQ_C2K_RX1_IIP2_CAL ( SEQ_C2K_RX1_IIP2_CAL_INFO_T *seq_c2k_rx1_iip2_cal_info, kal_uint32 *bsiData);
void MMRF_SEQ_C2K_RX1_SL2W ( SEQ_C2K_RX1_SL2W_INFO_T *seq_c2k_rx1_sl2w_info, kal_uint32 *bsiData);
void MMRF_SEQ_C2K_RX1_W2B ( SEQ_C2K_RX1_W2B_INFO_T *seq_c2k_rx1_w2b_info, kal_uint32 *bsiData);
void MMRF_SEQ_C2K_RX1_GAIN_CHANGE ( SEQ_C2K_RX1_GAIN_CHANGE_INFO_T *seq_c2k_rx1_gain_change_info, kal_uint32 *bsiData);
void MMRF_SEQ_C2K_RX1_PMODE_CHANGE ( SEQ_C2K_RX1_PMODE_CHANGE_INFO_T *seq_c2k_rx1_pmode_change_info, kal_uint32 *bsiData);
void MMRF_SEQ_C2K_RX1_BW_CHANGE ( SEQ_C2K_RX1_BW_CHANGE_INFO_T *seq_c2k_rx1_bw_change_info, kal_uint32 *bsiData);
void MMRF_SEQ_C2K_RX1_POFF ( SEQ_C2K_RX1_POFF_INFO_T *seq_c2k_rx1_poff_info, kal_uint32 *bsiData);
void MMRF_SEQ_C2K_RX1_GGE_OBB_FLAG ( SEQ_C2K_RX1_GGE_OBB_FLAG_INFO_T *seq_c2k_rx1_gge_obb_flag_info, kal_uint32 *bsiData);
void MMRF_SEQ_C2K_RX1_BAND_CHANGE ( SEQ_C2K_RX1_BAND_CHANGE_INFO_T *seq_c2k_rx1_band_change_info, kal_uint32 *bsiData);
void MMRF_SEQ_C2K_RX1_IIP2C_CODE ( SEQ_C2K_RX1_IIP2C_CODE_INFO_T *seq_c2k_rx1_iip2c_code_info, kal_uint32 *bsiData);
void MMRF_SEQ_C2K_RX1_SYNTH_ADJ ( SEQ_C2K_RX1_SYNTH_ADJ_INFO_T *seq_c2k_rx1_synth_adj_info, kal_uint32 *bsiData);
void MMRF_SEQ_C2K_RX2_B2SL ( SEQ_C2K_RX2_B2SL_INFO_T *seq_c2k_rx2_b2sl_info, kal_uint32 *bsiData);
void MMRF_SEQ_C2K_RX2_DCOC_CAL ( SEQ_C2K_RX2_DCOC_CAL_INFO_T *seq_c2k_rx2_dcoc_cal_info, kal_uint32 *bsiData);
void MMRF_SEQ_C2K_RX2_IRR_CAL ( SEQ_C2K_RX2_IRR_CAL_INFO_T *seq_c2k_rx2_irr_cal_info, kal_uint32 *bsiData);
void MMRF_SEQ_C2K_RX2_IIP2_CAL ( SEQ_C2K_RX2_IIP2_CAL_INFO_T *seq_c2k_rx2_iip2_cal_info, kal_uint32 *bsiData);
void MMRF_SEQ_C2K_RX2_SL2W ( SEQ_C2K_RX2_SL2W_INFO_T *seq_c2k_rx2_sl2w_info, kal_uint32 *bsiData);
void MMRF_SEQ_C2K_RX2_W2B ( SEQ_C2K_RX2_W2B_INFO_T *seq_c2k_rx2_w2b_info, kal_uint32 *bsiData);
void MMRF_SEQ_C2K_RX2_GAIN_CHANGE ( SEQ_C2K_RX2_GAIN_CHANGE_INFO_T *seq_c2k_rx2_gain_change_info, kal_uint32 *bsiData);
void MMRF_SEQ_C2K_RX2_PMODE_CHANGE ( SEQ_C2K_RX2_PMODE_CHANGE_INFO_T *seq_c2k_rx2_pmode_change_info, kal_uint32 *bsiData);
void MMRF_SEQ_C2K_RX2_BW_CHANGE ( SEQ_C2K_RX2_BW_CHANGE_INFO_T *seq_c2k_rx2_bw_change_info, kal_uint32 *bsiData);
void MMRF_SEQ_C2K_RX2_POFF ( SEQ_C2K_RX2_POFF_INFO_T *seq_c2k_rx2_poff_info, kal_uint32 *bsiData);
void MMRF_SEQ_C2K_RX2_BAND_CHANGE ( SEQ_C2K_RX2_BAND_CHANGE_INFO_T *seq_c2k_rx2_band_change_info, kal_uint32 *bsiData);
void MMRF_SEQ_C2K_RX2_IIP2C_CODE ( SEQ_C2K_RX2_IIP2C_CODE_INFO_T *seq_c2k_rx2_iip2c_code_info, kal_uint32 *bsiData);
void MMRF_SEQ_C2K_RX2_SYNTH_ADJ ( SEQ_C2K_RX2_SYNTH_ADJ_INFO_T *seq_c2k_rx2_synth_adj_info, kal_uint32 *bsiData);

#endif /*__MMRFSEQGEN_C2K_RX_MT6177L_H__*/
