

#ifndef _CL1D_RF_TST_MSG_H_
#define _CL1D_RF_TST_MSG_H_


typedef enum
{
  	 RTT_RX_MAIN_ON_OFF = 0,
  	 RTT_RX_DIV_ON_OFF,
  	 RTT_RX_DIV_PARTIAL_ON_OFF,
  	 RTT_RX_MAIN_DIV_ON_OFF,
  	 RTT_RX_DFS,
  	 RTT_TX_ON_OFF,
  	 RTT_TX_TXGATE_ON_OFF,
  	 RTT_TX_TPC,
  	 RTT_TRX_ON_OFF,
  	 DO_RX_MAIN_ON_OFF,
  	 DO_RX_DIV_ON_OFF,
  	 DO_RX_DIV_PARTIAL_ON_OFF,
  	 DO_RX_DFS_ACT,
  	 DO_RX_DFS_IDLE,
  	 DO_RX_MAIN_DIV_SEC_FHC,
  	 DO_RX_AGC_FSM,
  	 DO_RX_AGC_PWM,
  	 DO_TX_ON_OFF,
  	 DO_TX_TPC,
  	 DO_SHDR,
  	 RTT_RX_MAIN_ON,
  	 RTT_RX_MAIN_OFF,
  	 RTT_RX_MAIN_DIV_ON,
  	 RTT_RX_MAIN_DIV_OFF,
  	 RTT_TX_ON,
  	 RTT_TX_OFF,
  	 DO_RX_MAIN_ON,
  	 DO_RX_MAIN_OFF,
  	 DO_RX_MAIN_DIV_ON,
  	 DO_RX_MAIN_DIV_OFF,
  	 DO_TX_ON,
  	 DO_TX_OFF,
  	 DO_IMM_BSI_SEND,
  	 DO_IMM_BSI_READ,
  	 DO_IMM_MIPI_SEND,
  	 DO_IMM_MIPI_READ,
  	 DO_RX_AFC,
  	 RTT_TPC_UPDATE,
  	 DO_TPC_UPDATE,
  	 RTT_TEST_MODE,
  	 DO_TEST_MODE,
  	 RTT_AGC_CFG,
  	 DO_AGC_CFG,


    
    RF_TST_CASE_NUM
} CL1D_RF_TST_CASE_IDX_E;

typedef struct
{
    kal_uint32 dummy;
} CL1D_RF_TST_CASE_NULL_T;

typedef enum
{  /* following number are according to HWPOR port select */
   CL1D_MML1_RF_RFIC1   = 0x0000,
   CL1D_MML1_RF_RFIC2   = 0x0001,
   CL1D_MML1_RF_PMIC    = 0x0002,
   CL1D_MML1_RF_MIPI0   = 0x0003,
   CL1D_MML1_RF_MIPI1   = 0x0004,
   CL1D_MML1_RF_MIPI2   = 0x0005,
   CL1D_MML1_RF_MIPI3   = 0x0006,
   CL1D_MML1_RF_MIPI4   = 0x0007,
#if IS_MML1_CHIP_MT6292_AND_LATTER_VERSION
   CL1D_MML1_RF_MIPI5   = 0x0008,
   CL1D_MML1_RF_MIPI6   = 0x0009,
   CL1D_MML1_RF_MIPI7   = 0x000A,
#endif
   CL1D_MML1_RF_PORT_CNT,
#ifdef __MMRF_BSIBPIRS_DYNAMIC_ALLOCATION_SUPPORT__
   CL1D_MML1_RF_PORT_ENDMARK,
#endif
}CL1D_MML1_RF_BSIMM_PORT_T;

typedef enum
{
   CL1D_MML1_MIPI_RW          = 0x0000,
   CL1D_MML1_MIPI_EXTRW_1BYTE = 0x0001,
   CL1D_MML1_MIPI_EXTRW_2BYTE = 0x0002,
   CL1D_MML1_MIPI_EXTRW_3BYTE = 0x0003,
   CL1D_MML1_MIPI_EXTRW_4BYTE = 0x0004,
   CL1D_MML1_MIPI_SUPPORT_RW_CNT,
}CL1D_MML1_MIPI_REG_RW_T;

typedef struct
{
    CL1D_MML1_RF_BSIMM_PORT_T port;
    kal_uint32 bsidata;
} BSI_SEND_T;

typedef struct
{
    CL1D_MML1_RF_BSIMM_PORT_T port;
    kal_uint32 bsiaddr;
} BSI_READ_T;

typedef struct
{
    CL1D_MML1_RF_BSIMM_PORT_T port;
    CL1D_MML1_MIPI_REG_RW_T rw_type;
    kal_uint32 bsidata1;
    kal_uint32 bsidata2;
} MIPI_SEND_T;

typedef struct
{
    CL1D_MML1_RF_BSIMM_PORT_T port;
    CL1D_MML1_MIPI_REG_RW_T rw_type;
    kal_uint32 bsiaddr;
} MIPI_READ_T;

typedef struct
{
   /** [in] - Indicate the RAT type of EVDO/1XRTT */
   kal_uint8  rat_type;
   /** [in] - 0: TPC fix power mode,1: TPC manual power mode */
   kal_uint8  test_mode; 
   /** [in] - Tx timer value on air, range is 0~0xBFFFF */
   kal_uint32 tx_stime;
   /** [in] - Tx power on air in 1/64dBm unit */
   kal_int32  target_power;
   /** [in] - TRUE: ILPC enable,FALSE: ILPC disable */
   kal_bool   ilpc_en;

} CL1D_RF_TST_TPC_CFG_TEST_T;

typedef struct
{
   /** [in] - Indicate the RAT type of EVDO/1XRTT */
   kal_uint8   rat_type;
   /** [in] - Rx timer value, range is 0~0xBFFFF */
   kal_uint32  rx_stime;
   /** [in] - { second Rx, diversity Rx, main Rx}
              bit0: main Rx
              bit1: diversity Rx
              bit2: second Rx
     */
   kal_uint8   path_bmp;
   /** [in] - 0: AGC fix gain mode 1: бн */
   kal_uint8   test_mode;
   /** [in] - ICS/FAST/STEADY/FHC */
   kal_uint8  agc_fsm;
   /** [in] - power mode of CL1D_RF_PWR_MODE_E*/
   kal_uint8  power_mode;
   /** [in] - LNA index of CL1D_RF_LNA_MODE_E*/
   kal_uint8  lna_idx;
   /** [in] - Rx timer value, range is 0~0xBFFFF, indicate when to begin RSSI average,
              0xFFFFFFFF means no time limitation
     */
   kal_uint32 rssi_avg_start_time;

   /** [in] - Rx timer value, range is 0~0xBFFFF, indicate when to end RSSI average,
              0xFFFFFFFF means no time limitation
     */
   kal_uint32 rssi_avg_end_time;

} CL1D_RF_TST_AGC_CFG_TEST_T;


typedef union
{
	CL1D_RF_TST_CASE_NULL_T case_data_null;
	CL1D_RF_RX_PATH_ON_T rx_on;
	CL1D_RF_RX_PATH_OFF_T rx_off;
	CL1D_RF_TX_PATH_ON_T tx_on;
	CL1D_RF_TX_PATH_OFF_T tx_off;
   BSI_SEND_T bsi_send;
   BSI_READ_T bsi_read;
   MIPI_SEND_T mipi_send;
   MIPI_READ_T mipi_read;
   CL1D_RF_TST_TPC_CFG_TEST_T tpc_cfg;
   CL1D_RF_TEST_MODE_REQUEST_T test_mode;
   CL1D_RF_AFC_SYNTH_OFFSET_UPDATE_T afc;
   CL1D_RF_TST_AGC_CFG_TEST_T agc_cfg;

} CL1D_RF_TST_CASE_DATA_T;

typedef struct
{
    CL1D_RF_TST_CASE_IDX_E case_idx;
    kal_uint16 case_iter_times;
    CL1D_RF_TST_CASE_DATA_T case_data;
} CL1D_RF_TST_CASE_MSG_T;

typedef struct
{
    LOCAL_PARA_HDR
    CL1D_RF_TST_CASE_MSG_T msg;
} CL1D_RF_TST_CASE_MSG_ELT_T;


#endif /* _CL1D_RF_TST_MSG_H_ */

