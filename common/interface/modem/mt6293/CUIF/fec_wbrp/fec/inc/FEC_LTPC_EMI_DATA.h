#ifndef __FEC_LTPC_EMI_DATA_H__

#define __FEC_LTPC_EMI_DATA_H__

/************************************************************************************
* #include
************************************************************************************/
#include "lte_rf_public.h" /*for LTE_ROUTE_TX_TBL_SIZE_MAX, LTE_TARGET_SUPPORT_BAND_NUM_MAX*/

typedef signed char              INT8;
typedef unsigned char            UINT8;
typedef signed short int         INT16;
typedef unsigned short int       UINT16;
typedef signed int               INT32;
typedef unsigned int             UINT32;
#ifndef __C2K_RAT__
#ifndef __LTE_L1SIM__
typedef unsigned char            BOOL;
#endif
#endif
typedef unsigned int             BOOL32;

/************************************************************************************
*  Defines
************************************************************************************/
//#define TPC_LTE_TARGET_MAX_SUPPORT_BAND_NUM         (35)  //from mml1_rf_cal_interface, aligned LTE_TARGET_MAX_SUPPORT_BAND_NUM
//#define TPC_ROUTE_TBL_SIZE_MAX                      (35*4)//aligned EL1D_ROUTE_TBL_SIZE_MAX

#define FEC_CCA_ROUTE_NUM              (25)
#define FEC_FILTER_ROUTE_NUM           (5)
#define FEC_CCA_FILTER_ROUTE_NUM       (5)
#define FEC_SB_NUM                     (5)
#if defined(__USIP_FEC_PAE__) || defined(__USIP_FEC_COSIM__)
#define BAND_NUM				 		      1	//23
#define TXBW_NUM				 	 		   1	//10
#define FEC_ROUTE_NUM                  1  //xxxx
#define ROUTE_NUM                      1                                       
#define DFE_BW_NUM                     1
#else
#define BAND_NUM				 		      LTE_TARGET_SUPPORT_BAND_NUM_MAX//TPC_LTE_TARGET_MAX_SUPPORT_BAND_NUM	//23
#define TXBW_NUM				 	 		   7	//10
#define DFE_BW_NUM                     8
#if ((IS_LTE_RF_UL_CA_SUPPORT) && (!(defined(__FEC_MT6177M_RF_UL_WO_CCA__))))
#define FEC_ROUTE_NUM                  (LTE_ROUTE_TX_TBL_SIZE_MAX+FEC_CCA_ROUTE_NUM+FEC_FILTER_ROUTE_NUM+FEC_CCA_FILTER_ROUTE_NUM) 
#define FEC_ROUTE_NUM_WSB              ((LTE_ROUTE_TX_TBL_SIZE_MAX+FEC_CCA_ROUTE_NUM+FEC_FILTER_ROUTE_NUM+FEC_CCA_FILTER_ROUTE_NUM)*FEC_SB_NUM) 
                                       //TPC_ROUTE_TBL_SIZE_MAX  //(SC + CA + CCA + filter + CCA filter )*SB
#else
#define FEC_ROUTE_NUM                  (LTE_ROUTE_TX_TBL_SIZE_MAX+FEC_FILTER_ROUTE_NUM) 
#define FEC_ROUTE_NUM_WSB              ((LTE_ROUTE_TX_TBL_SIZE_MAX+FEC_FILTER_ROUTE_NUM)*FEC_SB_NUM) 
#endif
#define ROUTE_NUM                      LTE_ROUTE_TX_TBL_SIZE_MAX                                       
#endif

#define FEC_MAX_CLUSTER_NUM                            5

/*ATX Static*/
#define ET_RB_GEAR_TAB_SIZE 8

/*PCFE 2*/
/*Dynamic TABLE for P0*/
#define PA_IDX_DYM          8
#define PA_MODE_DYM         3
#define SB_LUT_FREQ_DYM     21
/*Cal TABLE for P0*/
#define TXPGA_LUT_GPGA_A_DYM 30
#define TXPGA_LUT_GPGA_B_DYM 21
#define RES_TABLE_DYM        21
#define DET_LUT_GDET_DYM     15
#define DPD_LUT_NORM_FACTOR_DYM 8
#define TXPGA_LUT_CFG_A_B_DYM 30
#define ET_TABLE_DYM 2
/*CW TABLE for P0*/
#define PA_CW_IDX_DYM 9
#define MIPI_CW_DYM 6
#define BSI_DET_CW_DYM 15
#define TXPGA_CW_IDX_DYM     3
#define PMIC_CW_IDX_DYM      3
#define TXPGA_CW_GPGA_A_DYM  30
#define TXPGA_CW_GPGA_B_DYM  21


/************************************************************************************
*  enum
************************************************************************************/
typedef enum
{
   FEC_SLT0         = 0,
   FEC_SLT1         = 1,
   FEC_SRS0         = 2,
   FEC_SRS1         = 3,
   FEC_SLT_DYM      = 4
}FEC_SLT_STATUS_DYM_E;

typedef enum
{
   LTE_TPC_INIT_TQ_BSI_DC2DC   = 0,
   LTE_TPC_INIT_TQ_BSI_PGA     = 1,
   LTE_TPC_INIT_TQ_BSI_DET     = 2,
   LTE_TPC_INIT_TQ_MIPI_ETM0   = 3,
   LTE_TPC_INIT_TQ_MIPI_ETM1   = 4,   
   LTE_TPC_INIT_TQ_MIPI_ETM2   = 5,   
   LTE_TPC_INIT_TQ_MIPI_PA     = 6,
   LTE_TPC_INIT_TQ_TXDFE_BB    = 7,
   LTE_TPC_INIT_TQ_TXDFE_RF	   = 8,
   LTE_TPC_INIT_TQ_TXDFE_TXET  = 9,
   LTE_TPC_INIT_TQ_BPI         = 10,
   LTE_TPC_INIT_TQ_APC         = 11,
   LTE_TPC_INIT_TQ_GAIN_LO_NUM = 12
}LTE_TPC_INIT_TQ_GAIN_LO_E; //LO table before sorting

typedef enum
{
   LTE_TPC_INIT_TQ_ADC_ON      = 0,
   LTE_TPC_INIT_TQ_ADC_OFF     = 1,
   LTE_TPC_INIT_TQ_DDPC        = 2,   
   LTE_TPC_INIT_TQ_MEAS_LO_NUM = 3
}LTE_TPC_INIT_TQ_MEAS_LO_E; //LO table before sorting

typedef enum
{
   LTE_TPC_GAIN_SCEN_PRACH_SRS_ON  = 0,
   LTE_TPC_GAIN_SCEN_INTER_SF      = 1,   
   LTE_TPC_GAIN_SCEN_SRS_PUXCH     = 2,
   LTE_TPC_GAIN_SCEN_PUXCH_SRS     = 3,
   LTE_TPC_GAIN_SCEN_SRSBL_PUXCH   = 4,
   LTE_TPC_GAIN_SCEN_PUXCH_SRSBL   = 5,
   LTE_TPC_GAIN_SCEN_OFF_ON        = 6,
   LTE_TPC_GAIN_SCEN_ON_OFF        = 7,
   LTE_TPC_GAIN_SCEN_NUM           = 8
}LTE_TPC_GAIN_SCEN_E;

typedef enum
{
   LTE_TPC_DDPC_CFG_SLOT0       = 0,
   LTE_TPC_DDPC_CFG_SLOT1       = 1,   
   LTE_TPC_DDPC_CFG_SRS0       = 2,
   LTE_TPC_DDPC_CFG_SRS1       = 3,
   LTE_TPC_DDPC_CFG_NUM         = 4,
   LTE_TPC_DDPC_CFG_NONE        = 5
}LTE_TPC_DDPC_CFG_E;

typedef enum{
	CBW_1p4M = 0,//maybe directly use the mt6291.h lsb definition
	CBW_3M,
	CBW_5M,
	CBW_10M,
	CBW_15M,
	CBW_20M,
	CBW_CCA,
	CBW_NUM
}CBW_INDEX;

typedef enum{
	DFE_CBW_1p4M = 0,//maybe directly use the mt6291.h lsb definition
	DFE_CBW_3M,
	DFE_CBW_5M,
	DFE_CBW_10M,
	DFE_CBW_15M,
	DFE_CBW_20M,
   DFE_CBW_CCA_20M_LESS,
	DFE_CBW_CCA_20M_MORE, //include 20M
	DFE_CBW_CBW_NUM
}DFE_CBW_INDEX;

typedef enum
{
   OP_MODE_ET  = 0,
   OP_MODE_DPD = 1,   
   OP_MODE_APT = 2
} ETPC_OP_MODE_E;


/************************************************************************************
*  structure
************************************************************************************/


typedef struct
{
    
	INT16	Ptar_dBm;//S6.5
	INT16	Ptar_dBm_1;//S6.5
	INT16	Ppeak_mcs_dBm;//S6.5 
	INT16	Pset_mcs_dBm; //S6.5
	UINT8	en_gthermal_bkf; //S6.5
	
	UINT8   length_RB[FEC_MAX_CLUSTER_NUM];//U7.0	
	INT16   freq_start_RB[FEC_MAX_CLUSTER_NUM];//S8.0
	UINT8   all_cluster_num; //U3.0

	INT16	Ptar_dBm_pre;//S6.5
	UINT8	idx_pa_pre; //U4.0
	UINT8	pa_table_mode_pre; //U2.0 
	UINT8	OP_mode_pre;//U2.0 

	/*Output*/
	INT16	Pset_dac_dBm; //s6.5
	UINT16	idx_etdbb_rb; //U 8.0
	UINT8	select_default_DPDLUT;//U1.0
	INT16	cfr_clip_th_dBm;//S6.5 
	UINT8   en_next_slot_corr;//U1.0
	UINT8	OP_mode;//U2.0     
	UINT8	idx_pa; //U4.0
	UINT8	pa_mode; //U2.0 
	UINT8	pa_table_mode; //U2.0 
	INT16	Gpa_dB;	//S6.5
	UINT8	force_pga_mode;	//U2.0
	INT16	Gdac_bkf_dB;//s3.5
	INT16   Gilpc_ofs_dB;/*S5.5*/
	UINT16  Gcfr_dB;//U3.5 
	/* ATX & SWTP Output */
	UINT8   Gthermal_bkf_dB_apt;//U3.5
	UINT8   Gthermal_bkf_dB_dpd;//U3.5
	UINT8   Gthermal_bkf_dB_et;//U3.5
	UINT16  BB_bkf_APT_sRB_dB;//U4.5
	UINT16  BB_bkf_DPD_sRB_dB;//U4.5
	UINT16  BB_bkf_ET_sRB_dB;//U4.5
	INT16	Ptar_dBm_mc;//S6.5

	/*Check point*/
	INT16   Gtar_dBm;//S7.5
	UINT16  total_RB_num;//U8.0 check point of ATXD
	UINT16  total_RB_width;//U8.0 check point of ATXD	
	INT16   PAPR_mcs_dB;//S5.5
}LTE_TX_FEC_ALGO_SLOT_INFO_T;

typedef struct
{
	UINT32	en_droop;//en_CPL_droop(U1.0) & en_PA_droop(U1.0) & en_RES_droop(U1.0) 	
	
	UINT8	en_PA_swpt_shift; //U1.0
	UINT8	en_cfr; //U1.0
	UINT8   cfr_table_mode;
	
	UINT8   bypass_dpd;//U1.0
	UINT8   bypass_et;//U1.0
	UINT8   en_force_OP; //U1.0
	UINT8   force_OP_mode; //U2.0
	UINT8   en_force_pa_table;// U1.0
	UINT8   force_pa_table_mode;//U2.0
	UINT8   en_force_pa_index;// U1.0
	UINT8   force_idx_pa;//U2.0
	UINT8   pga_select_method;//U1.0
	/* ATX & SWTP Input */
	UINT8   nt_rb_threshold;// U8.0
	UINT8   Gthermal_bkf_dB_apt;//U3.5
	UINT8   Gthermal_bkf_dB_dpd;//U3.5
	UINT8   Gthermal_bkf_dB_et;//U3.5
	UINT16  BB_bkf_APT_sRB_dB;//U4.5
	UINT16  BB_bkf_DPD_sRB_dB_0;//U4.5
	UINT16  BB_bkf_DPD_sRB_dB_1;//U4.5
	UINT16  BB_bkf_ET_sRB_dB_0;//U4.5
	UINT16  BB_bkf_ET_sRB_dB_1;//U4.5
	UINT8   TH_RB_length_APT;// U8.0
	UINT8   TH_RB_length_DPD;// U8.0
	UINT8   TH_RB_length_ET;// U8.0
	INT16   pwr_thres;//S6.5
	INT16   Ptar_offset;//S6.5
	INT16   MC_PA_shift_value;//S6.5
}LTE_TX_FEC_ALGO_SF_INFO_T;

typedef struct
{
	/* Conditional ATX & SWTP Input */
	UINT8   con_nt_rb_threshold;// U8.0
	UINT8   con_gthermal_bkf_db_apt;//U3.5
	UINT8   con_gthermal_bkf_db_dpd;//U3.5
	UINT8   con_gthermal_bkf_db_et;//U3.5
	INT16   con_pwr_thres;//S6.5
}LTE_TX_FEC_ATX_SF_INFO_T;


typedef struct
{
	INT16  Gtxiq_bkf_dB; //s6.5
	INT16  Pset_ref_dBm; //s6.5

	INT16	PA_swpt_shift_Pth; //s6.5	
	UINT16	RB_num_th_disable_dpd; //U8.0
	UINT16	RB_width_th_disable_dpd; //U8.0
	
	UINT8	flag_pa_no_change; //U1.0 4G no use
	UINT8   en_in_slot_corr; //U1.0
	UINT16  Pset_adc_dBm; //s5.5
	INT16   Gop_mode_ofs_dB;//s6.5  default=0
	UINT8   Ccfr_dpd;//u1.3 default=1
	INT8    Gthermal_bkf_dB_apt;//s1.5
	INT8    Gthermal_bkf_dB_dpd;//s1.5
	INT8    Gthermal_bkf_dB_et;//s1.5

	UINT8   RAT_type;//U2.0
	//INT16   Gilpc_ofs_dB;//s5.5
	INT16   Gstep_th;//s6.5
	INT8	Derr;//s1.5
	UINT8	alpha; //U2.0    
	INT16   Pth_ilpc_dBm;//s6.5
	INT16   Gdet_ofs_dB;//s4.5
	INT16   Gtx_fc_db_sw;// S6.5
	//UINT32  DDPC_NOR_PERIOD[2]; 
	//UINT32  meas_term;//slot0/1srs0/1's DDPC e
}LTE_TX_FEC_ALGO_EMI_INFO_T;




typedef struct
{
	UINT32	PA_A_TABLE[PA_IDX_DYM][SB_LUT_FREQ_DYM]; // 8 * 21
	UINT8	   PA_SB_NUM_A; 
	UINT32	PA_B_TABLE[PA_IDX_DYM][SB_LUT_FREQ_DYM]; // 8 * 21
	UINT8	   PA_SB_NUM_B;  
	UINT32	PA_C_TABLE[PA_IDX_DYM][SB_LUT_FREQ_DYM];  // 8 * 21
	UINT8	   PA_SB_NUM_C;  
	UINT32	CPL_TABLE[PA_MODE_DYM][SB_LUT_FREQ_DYM]; // 3 * 21
	UINT8	   CPL_SB_NUM;     
	UINT32	CPL_LUT_GCPL[PA_MODE_DYM];// 3 	
   UINT32   MAGIC_NUM;//0xFEC00001
   UINT32   TMP[1];

}LTE_TX_FEC_DYN_GAIN_TABLE_T;

typedef struct
{
    UINT32 TXPGA_LUT_GPGA_A[TXPGA_LUT_GPGA_A_DYM]; // 30
    UINT32 TXPGA_LUT_N_A; 
    UINT32 TXPGA_LUT_GPGA_B[TXPGA_LUT_GPGA_B_DYM]; // 21
    UINT32 TXPGA_LUT_N_B;  
    UINT32 RES_TABLE[RES_TABLE_DYM]; // 21  
    UINT32 RES_SB_NUM;  
    UINT32 DET_LUT_GDET[DET_LUT_GDET_DYM]; // 15
    UINT32 DET_LUT_N; 
    UINT32 DPD_LUT_NORM_FACTOR[DPD_LUT_NORM_FACTOR_DYM]; // 8	
    UINT32 ET_TABLE[ET_TABLE_DYM]; // 2
    UINT32 TXPGA_LUT_CFG_A_B[TXPGA_LUT_CFG_A_B_DYM]; // 30
    UINT32 MAGIC_NUM;//0xFEC00002
    UINT32 TMP[28]; 
}LTE_TX_FEC_CAL_GAIN_TABLE_T; // total 160 word for l1 128byte align // total 136 word for fec 32 byte align

typedef struct
{
    UINT32 MIPI_L;
    UINT32 MIPI_H;
}LTE_TX_FEC_MIPI_T;


typedef struct
{
    LTE_TX_FEC_MIPI_T MIPI_APT[PA_CW_IDX_DYM][MIPI_CW_DYM]; // 2 * 9 * 6
    LTE_TX_FEC_MIPI_T MIPI_DPD[PA_CW_IDX_DYM][MIPI_CW_DYM]; // 2 * 9 * 6
    UINT32 BSI_PMIC_APT[PA_CW_IDX_DYM][PMIC_CW_IDX_DYM];  // 9*3 = 27
    UINT32 BSI_PMIC_DPD[PA_CW_IDX_DYM][PMIC_CW_IDX_DYM];  // 9*3 = 27
    UINT32 BSI_PGA_A_CW[TXPGA_CW_GPGA_A_DYM][TXPGA_CW_IDX_DYM]; // 30*3=90
    UINT32 BSI_PGA_B_CW[TXPGA_CW_GPGA_B_DYM][TXPGA_CW_IDX_DYM]; // 21*3=63 
    UINT32 BSI_DET_CW[BSI_DET_CW_DYM]; // 15
    UINT32 APC_APT_DPD[PA_CW_IDX_DYM]; // 9
    UINT32 VM_APT_DPD[PA_CW_IDX_DYM]; 	// 9
    UINT32 MAGIC_NUM;//0xFEC00003
    UINT32 TMP[23];
}LTE_TX_FEC_CW_TABLE_T; // total 480 word for l1 128 byte align //fec 464 word for size 32byte align


typedef struct
{
    LTE_TX_FEC_MIPI_T MIPI_PA_ETM_IN_APT_MODE[PA_CW_IDX_DYM][MIPI_CW_DYM]; // 2 * 9 * 6
    LTE_TX_FEC_MIPI_T MIPI_PA_ETM_IN_DPD_MODE[PA_CW_IDX_DYM][MIPI_CW_DYM]; // 2 * 9 * 6
    UINT32 MAGIC_NUM;//0xFEC00004
    UINT32 TMP[7];
}LTE_TX_FEC_ETM_CW_TABLE_T;


typedef struct
{
   UINT32 REF_DFE_CON;
   UINT32 REF_DFE_DELAY;
   UINT32 REF_DFE_DELAY_SW;
   UINT32 DET_DFE_DFE_CON;
   UINT32 DDPC_SET0[FEC_SLT_DYM];
   UINT32 DDPC_SET1[FEC_SLT_DYM];
}LTE_TX_FEC_TXK_PARAM_T;

typedef struct
{
   INT16 gain_lo_dly[LTE_TPC_INIT_TQ_GAIN_LO_NUM];//3.25MHz (104MHz>>5)
   INT16 gain_lo_ofs[LTE_TPC_INIT_TQ_GAIN_LO_NUM];//3.25MHz (104MHz>>5)
   INT16 gain_glo_dly;//3.84MHz (61.44MHz>>4)
}LTE_TX_FEC_TPC_GAIN_CONFIG_T;

typedef struct
{
   INT16  meas_ofs[LTE_TPC_INIT_TQ_MEAS_LO_NUM];//3.25MHz (104MHz>>5)
}LTE_TX_FEC_TPC_DDPC_CONFIG_T;


typedef struct
{
   INT16  pa_mipi_evt_ofs[FEC_ROUTE_NUM];
   INT16  etm0_mipi_evt_ofs[FEC_ROUTE_NUM];
   INT16  etm1_mipi_evt_ofs[FEC_ROUTE_NUM];
   INT16  etm2_mipi_evt_ofs[FEC_ROUTE_NUM];
}LTE_TX_FEC_TPC_MIPI_GAIN_CONFIG_T;

typedef struct
{
   INT16  dfe_bb_evt_ofs[DFE_BW_NUM];
   INT16  dfe_rf_evt_ofs[DFE_BW_NUM];   
   INT16  dfe_et_evt_ofs[DFE_BW_NUM];
}LTE_TX_FEC_TPC_DFE_GAIN_CONFIG_T;

typedef struct
{
    LTE_TX_FEC_TPC_GAIN_CONFIG_T rTPC_GAIN_EVENT_CONFIG_DM[LTE_TPC_GAIN_SCEN_NUM]; //fake: DM
    LTE_TX_FEC_TPC_DDPC_CONFIG_T rTPC_DDPC_EVENT_CONFIG_DM[LTE_TPC_DDPC_CFG_NUM]; //fake: DM
    LTE_TX_FEC_TPC_MIPI_GAIN_CONFIG_T rTPC_MIPI_GAIN_EVENT_CONFIG_DM; //fake: DM
    LTE_TX_FEC_TPC_DFE_GAIN_CONFIG_T rTPC_DFE_GAIN_EVENT_CONFIG_DM; //fake: DM

    /*ALGO related L1 EMI structure*/
    LTE_TX_FEC_ALGO_EMI_INFO_T FEC_ALGO_EMI_Info_L1;//EMI ALGO related Sturcture
    LTE_TX_FEC_TXK_PARAM_T FEC_TXK_PARAM_L1[TXBW_NUM];
	
}LTE_TX_L1_FEC_TPC_DM_T;


typedef struct
{
   UINT8 pa_mipi;
   UINT8 bpi_vm;
   UINT8 apc;
   UINT8 dc2dc;
   UINT8 etm_mipi;
   UINT8 bsi_pga;
   UINT8 bsi_det;
   UINT8 dfe_bb;//dfe_dfe1
   UINT8 dfe_rf;//dfe_dfe2
   UINT8 dfe_et;
}LTE_TX_PS_CON_T;




LTE_TX_PS_CON_T*                   fec_get_ps_con(UINT16 fec_route_idx);
LTE_TX_FEC_TPC_GAIN_CONFIG_T*      fec_get_gain_cfg(UINT8 scen_idx);
LTE_TX_FEC_TPC_DFE_GAIN_CONFIG_T*  fec_get_dfe_gain_cfg(void);
LTE_TX_FEC_TPC_DDPC_CONFIG_T*      fec_get_ddpc_cfg(UINT8 cfg_idx);
LTE_TX_FEC_TPC_MIPI_GAIN_CONFIG_T* fec_get_mipi_gain_cfg(void);
LTE_TX_FEC_TXK_PARAM_T*            fec_get_txk_param_l1_cfg(UINT8 bw_idx);
LTE_TX_FEC_ALGO_EMI_INFO_T*        fec_get_algo_emi_info_cfg(void);

#endif

