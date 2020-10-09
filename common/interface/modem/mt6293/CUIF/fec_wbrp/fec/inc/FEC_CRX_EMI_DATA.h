#ifndef __FEC_CRX_EMI_DATA_H__

#define __FEC_CRX_EMI_DATA_H__

/************************************************************************************
* #include
************************************************************************************/


/************************************************************************************
*  Defines
************************************************************************************/
#ifndef FEC_CRX_LNA_MODE_MAX_NUM
#define FEC_CRX_LNA_MODE_MAX_NUM      (7)
#endif
    
#ifndef FEC_CRX_TIA_MAX_NUM
#define FEC_CRX_TIA_MAX_NUM           (2)
#endif
    
#ifndef FEC_CRX_IF_MAX_NUM
#define FEC_CRX_IF_MAX_NUM            (7)
#endif

#ifndef FEC_CRX_CELL_MAX_NUM
#define FEC_CRX_CELL_MAX_NUM          (5)
#endif

#define FEC_CRX_PL_TBL_MAX_SIZE      (56)
#define FEC_CRX_DC_TBL_MAX_SIZE      (56)
#define FEC_CRX_GAIN_TBL_MAX_SIZE    (14)

#define FEC_CRX_ALIGN_128_BYTE       (128)  
#define FEC_CRX_PADDIND_TO_128_ALIGN(x) ((((x)%FEC_CRX_ALIGN_128_BYTE)==0)?FEC_CRX_ALIGN_128_BYTE:(FEC_CRX_ALIGN_128_BYTE - ((x)%FEC_CRX_ALIGN_128_BYTE)))

#ifndef FEC_CRX_DC_TBL_SIZE_WORD
#define FEC_CRX_DC_TBL_SIZE_WORD     (56)
#endif

#ifndef FEC_CRX_PL_TBL_SIZE_WORD
#define FEC_CRX_PL_TBL_SIZE_WORD     (7)
#endif


/************************************************************************************
*  enum
************************************************************************************/


/************************************************************************************
*  structure
************************************************************************************/

typedef volatile struct {
    kal_uint32 PL_HPM_LPM; /*Bit[31:16] high power mode, Bit[15:0] low power mode,S2.5*/
}EXT_FEC_CRX_PL_T;

typedef volatile struct {
    kal_int32 DC_RF_DIG;  /*Bit[31:16] RF DC in S5.0, Bit[15:0] Dig DC in S0.14*/
}EXT_FEC_CRX_DC_T;

typedef volatile struct {
    kal_int32 LNA_GAIN;  /*LNA gain in S5.5*/
}EXT_FEC_CRX_GAIN_T;

/** gain backup table structure  */
typedef volatile struct
{
    /**   pga gain index and lna gain index */
    kal_uint32 RF_GAIN;
    /**   dig gain in Q5 */
    kal_uint32 DIG_GAIN;
    /**   RSSI in Q5  */
    kal_uint32 RSSI;
    /**   power mode  */
    kal_uint32 PWR_MODE;
}EXT_FEC_CRX_GAIN_BAK_TBL_ITEM_T;

typedef volatile struct {
    EXT_FEC_CRX_PL_T PL_DATA[FEC_CRX_LNA_MODE_MAX_NUM];
} EXT_FEC_CRX_PL_TBL_t;

typedef volatile struct {
    EXT_FEC_CRX_DC_T DC_DATA_I_HPM[FEC_CRX_TIA_MAX_NUM][FEC_CRX_IF_MAX_NUM];
    EXT_FEC_CRX_DC_T DC_DATA_I_LPM[FEC_CRX_TIA_MAX_NUM][FEC_CRX_IF_MAX_NUM];
    EXT_FEC_CRX_DC_T DC_DATA_Q_HPM[FEC_CRX_TIA_MAX_NUM][FEC_CRX_IF_MAX_NUM];
    EXT_FEC_CRX_DC_T DC_DATA_Q_LPM[FEC_CRX_TIA_MAX_NUM][FEC_CRX_IF_MAX_NUM];
    kal_uint8  padding_to_128_bytes[FEC_CRX_PADDIND_TO_128_ALIGN(FEC_CRX_DC_TBL_SIZE_WORD<<2)];    //align 128 
} EXT_FEC_CRX_DC_TBL_t;

typedef volatile struct {
    EXT_FEC_CRX_GAIN_T LNA_GAIN_INC_HPM[FEC_CRX_LNA_MODE_MAX_NUM];
    EXT_FEC_CRX_GAIN_T LNA_GAIN_DEC_HPM[FEC_CRX_LNA_MODE_MAX_NUM];
    EXT_FEC_CRX_GAIN_T LNA_GAIN_INC_LPM[FEC_CRX_LNA_MODE_MAX_NUM];
    EXT_FEC_CRX_GAIN_T LNA_GAIN_DEC_LPM[FEC_CRX_LNA_MODE_MAX_NUM];
} EXT_FEC_CRX_GAIN_TBL_t;

typedef volatile struct {
    EXT_FEC_CRX_GAIN_BAK_TBL_ITEM_T RX_GAIN_BAK[FEC_CRX_CELL_MAX_NUM];
} EXT_FEC_CRX_GAIN_BAK_TBL_t;

typedef volatile struct {
    kal_uint32 FREQ_BAND_CW[2];
} EXT_FEC_CRX_FREQ_BAND_T;

typedef volatile struct {
    kal_uint32 HPM_CW;
    kal_uint32 LPM_CW;
    kal_uint32 VOL_CW;
} EXT_FEC_CRX_HLPM_T;

typedef volatile struct {
    EXT_FEC_CRX_FREQ_BAND_T FREQ_BAND[3];
    EXT_FEC_CRX_HLPM_T      POWER_MODE[3];
    EXT_FEC_CRX_HLPM_T      ARX_MODE[3];
} EXT_FEC_CRX_RF_CW_TBL_t;

typedef enum{
    CRX_LNA_HYS_TABLE_eLNA_always_on_WO_2nd_SAW = 0,
    CRX_LNA_HYS_TABLE_eLNA_bypass_WO_2nd_SAW    = 1,
    CRX_LNA_HYS_TABLE_no_eLNA_C2K               = 2,
    CRX_LNA_HYS_TABLE_NUM                       = 3,
}CRX_LNA_HYS_TABLE_INDEX;

#define LNA_GAIN_TABLE_SIZE                 (56) // word
#define LNA_PADDIND_TO_128_ALIGN(x)         ((((x)%128)==0)?128:(128 - ((x)%128)))
typedef struct{
    UINT32 lna_gain_inc_l[7];
    UINT32 lna_gain_dec_l[7];
    UINT32 lna_gain_inc_256QAM[7];
    UINT32 lna_gain_dec_256QAM[7];
    UINT32 lna_gain_inc_h[7];
    UINT32 lna_gain_dec_h[7];
    UINT32 lna_gain_inc_v[7];
    UINT32 lna_gain_dec_v[7];
    UINT8  padding_to_128_bytes[LNA_PADDIND_TO_128_ALIGN(LNA_GAIN_TABLE_SIZE<<2)];    //align 128 
} EXT_FEC_CRX_LNA_HYS_TBL_t;

typedef struct{
    // RF gain CW mask
    UINT32 cw_high_low_freq[2];
    // LPM setting CW
    UINT32 cw_lpm_setting[3];
    // ARX CW
    UINT32 cw_arx[3];
} EXT_FEC_CRX_CW_INIT_TBL_t;

typedef volatile struct {
    /* RX pathloss table of MAIN/DIV/SEC Rx path*/
    EXT_FEC_CRX_PL_TBL_t       FEC_CAGC_CUIF_PL_TBL[3];
    /* RX pathloss temperature compensation table by temperature index by MAIN/DIV/SEC Rx path*/
    EXT_FEC_CRX_PL_TBL_t       FEC_CAGC_CUIF_PL_TEMP_CMP_TBL[15][3];
    /* RX gain config table backup by 1XRTT/EVDO RAT by MAIN/DIV/SEC Rx path*/
    EXT_FEC_CRX_GAIN_BAK_TBL_t FEC_CAGC_CUIF_GAIN_BAK_TBL[2][3];
    /* RX gain report by 1XRTT/EVDO RAT by MAIN/DIV/SEC Rx path*/
    EXT_FEC_CRX_GAIN_BAK_TBL_ITEM_T FEC_CAGC_CUIF_GAIN_REPORT[2][3];
	
	EXT_FEC_CRX_CW_INIT_TBL_t EXT_FEC_CRX_CW_INIT_SEETING[2][3];
    /* reserve */
    kal_uint32 reserve[852];
} EXT_CUIF_FEC_CRX_INFO_t;

#endif

