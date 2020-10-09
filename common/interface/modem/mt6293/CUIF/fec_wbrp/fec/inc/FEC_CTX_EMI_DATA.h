#ifndef __FEC_CTX_EMI_DATA_H__

#define __FEC_CTX_EMI_DATA_H__

/************************************************************************************
* #include
************************************************************************************/



/************************************************************************************
*  Defines
************************************************************************************/



/************************************************************************************
*  enum
************************************************************************************/



/************************************************************************************
*  structure
************************************************************************************/
typedef volatile struct {
    kal_int32 pa_lut_pth_gpa; /** bit[31:16]: pth, bit[15:0]:gpa*/
}EXT_FEC_CTX_PA_LUT_T;

typedef volatile struct {
    kal_int32 cpl_lut_gcpl; /*coupler loss*/
}EXT_FEC_CTX_CPL_LUT_T;

typedef volatile struct {
    kal_int16 cfr_lut_papr; /*PAPR*/
    kal_int16 cfr_lut_gcfr; /*GCFR*/
}EXT_FEC_CTX_CFR_LUT_T;

typedef volatile struct {
    kal_int32  txpga_lut_gpga_a[30];
    kal_uint32 txpga_lut_n_a;
    kal_int32  txpga_lut_gpga_b[21];
    kal_uint32 txpga_lut_n_b;
}EXT_FEC_CTX_PGA_LUT_T;

typedef volatile struct {
    kal_int32  det_lut_gdet[15];
    kal_uint32 det_lut_n;
}EXT_FEC_CTX_DET_LUT_T;

typedef volatile struct {
    kal_int32  dpd_lut_norm_factor[8];
}EXT_FEC_CTX_DPD_LUT_T;

typedef volatile struct {
    kal_int32  et_table[2]; /**bit[31:16]: get_pout_gain_offset_tab, bit[15:0]: petk_lut_out_max_tab*/
}EXT_FEC_CTX_ET_LUT_T;

typedef volatile struct {
    kal_int32  txpga_lut_cfg_a_b[31]; /**bit[7:0]: txpga_lut_cfg_b, bit[15:8]:txpga_lut_cfg_a*/
}EXT_FEC_CTX_TXPGA_LUT_CFG_A_B_T;

typedef volatile struct {
    /**ET mode*/
    kal_uint32 pa_lut_mode_a[2];
    kal_uint32 pa_lut_n_a;
    /**DPD mode*/
    kal_uint32 pa_lut_mode_b[8];
    kal_uint32 pa_lut_n_b;
    /**APT mode*/
    kal_uint32 pa_lut_mode_c[8];
    kal_uint32 pa_lut_n_c;
}EXT_FEC_CTX_PA_LUT_PARAM_T;

typedef volatile struct {
    kal_int32 th_op_a2d_d2a; /**bit[15:0]: d2a, bit[31:16]:a2d, S6.5*/
    kal_int32 th_op_d2e_e2d; /**bit[15:0]: e2d, bit[31:16]:d2e, S6.5*/
}EXT_FEC_CTX_TH_LUT_T;


/**PA gain and couplerloss LUT table definition in TPC DM*/
typedef volatile struct {
    EXT_FEC_CTX_PA_LUT_T  PA_LUT_A[2]; /*PA gain LUT table in ET mode*/
    EXT_FEC_CTX_PA_LUT_T  PA_LUT_B[8]; /*PA gain LUT table in DPD mode*/
    EXT_FEC_CTX_PA_LUT_T  PA_LUT_C[8]; /*PA gain LUT table in APT mode*/
    EXT_FEC_CTX_CPL_LUT_T CPL_LUT[3];  /*couperloss LUT table*/
    kal_uint32            CHECK_FLAG;  /*table end check flag*/
}EXT_FEC_CTX_PA_CPL_TBL_T;

/**CFR LUT table definition in TPC DM*/
typedef volatile struct {
    EXT_FEC_CTX_CFR_LUT_T  CFR_LUT_A[4]; /*CFR LUT table in APT mode*/
    EXT_FEC_CTX_CFR_LUT_T  CFR_LUT_B[4]; /*CFR LUT table in DPD mode*/
    EXT_FEC_CTX_CFR_LUT_T  CFR_LUT_C[4]; /*CFR LUT table in ET mode*/
    kal_uint32             CHECK_FLAG;   /*table end check flag*/
}EXT_FEC_CTX_CFR_TBL_T;

/**PGA/PA LUT table definition in TPC DM*/
typedef volatile struct {
    EXT_FEC_CTX_PGA_LUT_T           TXPGA_LUT;
    EXT_FEC_CTX_DET_LUT_T           DET_LUT;
    EXT_FEC_CTX_DPD_LUT_T           DPD_LUT;
    EXT_FEC_CTX_ET_LUT_T            ET_LUT;
    EXT_FEC_CTX_TXPGA_LUT_CFG_A_B_T TXPGA_LUT_CFG;
    EXT_FEC_CTX_PA_LUT_PARAM_T      PA_LUT;
    EXT_FEC_CTX_TH_LUT_T            TH_LUT;
    kal_uint32                      CHECK_FLAG;  /*table end check flag*/
}EXT_FEC_CTX_PGA_PA_TBL_T;


typedef volatile struct {
    kal_uint32 data;
    kal_uint32 data_cfg;
}EXT_FEC_CTX_CW_T;

typedef volatile struct {
    EXT_FEC_CTX_CW_T mipi_pa_cw[9][6];
}EXT_FEC_CTX_MIPI_PA_T;

typedef volatile struct {
    kal_uint32 bsi_pmic_cw[9];
}EXT_FEC_CTX_BSI_PMIC_T;

typedef volatile struct {
    kal_uint32 bsi_rf_pga_cw[30][3];
}EXT_FEC_CTX_BSI_PGA_A_T;

typedef volatile struct {
    kal_uint32 bsi_rf_pga_cw[21][3];
}EXT_FEC_CTX_BSI_PGA_B_T;

typedef volatile struct {
    kal_uint32 bsi_rf_det_cw[15];
}EXT_FEC_CTX_BSI_DET_T;

typedef volatile struct {
    kal_uint32 apc_apt_dpd_cw[9];
}EXT_FEC_CTX_APC_APT_DPD_T;

typedef volatile struct {
    kal_uint32 vm_apt_dpd_cw[9];
}EXT_FEC_CTX_VM_APT_DPD_T;


/**CW table definition in TPC DM*/
typedef volatile struct {
    EXT_FEC_CTX_MIPI_PA_T               MIPI_APT_TBL;
    EXT_FEC_CTX_MIPI_PA_T               MIPI_DPD_TBL;
    EXT_FEC_CTX_MIPI_PA_T               MIPI_ETM_IN_APT_TBL;
    EXT_FEC_CTX_MIPI_PA_T               MIPI_ETM_IN_DPD_TBL;
    EXT_FEC_CTX_BSI_PMIC_T              BSI_PMIC_APT_TBL;
    EXT_FEC_CTX_BSI_PMIC_T              BSI_PMIC_DPD_TBL;
    EXT_FEC_CTX_BSI_PGA_A_T             BSI_PGA_A_TBL;
    EXT_FEC_CTX_BSI_PGA_B_T             BSI_PGA_B_TBL;
    EXT_FEC_CTX_BSI_DET_T               BSI_DET_TBL;
    EXT_FEC_CTX_APC_APT_DPD_T           APC_TBL;
    EXT_FEC_CTX_VM_APT_DPD_T            VM_TBL;
    kal_uint32                          CHECK_FLAG;  /*table end check flag*/
}EXT_FEC_CTX_CW_TBL_T;


/** C2K FEC TX EMI data definition*/
typedef volatile struct {
    EXT_FEC_CTX_PA_CPL_TBL_T PA_CPL_TBL;
    EXT_FEC_CTX_CFR_TBL_T    CFR_TBL;
    EXT_FEC_CTX_PGA_PA_TBL_T PGA_PA_TBL;
}EXT_CUIF_FEC_CTX_INFO_t;


#endif

