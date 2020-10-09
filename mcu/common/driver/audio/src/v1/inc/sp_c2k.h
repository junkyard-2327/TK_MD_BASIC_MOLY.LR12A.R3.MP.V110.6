#ifndef __SP_C2K__
#define __SP_C2K__

// For bringup not use DTS
//#ifdef MTK_AUDIO_BRINGUP
    #define C2K_DTS_DISABLE
//#endif

// For no SAL on integrate stage
//#define C2K_SAL_DISABLE

// For no Sph Drv on integrate stage
//#define C2K_SDRV_DISABLE

// For bring up
//#define C2K_BRING_UP

// For LBK regular timer
//#define C2K_LBK_TIMER_ENABLE

//#define SALI_DISABLE

//#define C2K_MODEM_DISABLE
//#define C2K_LBK_U2D
//#define C2K_LBK_D2U

//#define C2K_SPH_EVRCNW_SUPPORT

#define C2K_COD_RS_1      1
#define C2K_COD_RS_2      2
#define C2K_COD_RS_UNDEF  0x29

#define C2K_COD_RS_1_BLANK_LEN_WORD16          0
#define C2K_COD_RS_1_EIGHTH_LEN_WORD16         1
#define C2K_COD_RS_1_QUARTER_LEN_WORD16        3
#define C2K_COD_RS_1_HALF_LEN_WORD16           5 
#define C2K_COD_RS_1_FULL_LEN_WORD16           11 
#define C2K_COD_RS_1_ERASURE_LEN_WORD16        0
#define C2K_COD_RS_1_FULL_LIKELY_LEN_WORD16    11

#define C2K_COD_RS_2_BLANK_LEN_WORD16          0
#define C2K_COD_RS_2_EIGHTH_LEN_WORD16         2
#define C2K_COD_RS_2_QUARTER_LEN_WORD16        4
#define C2K_COD_RS_2_HALF_LEN_WORD16           8 
#define C2K_COD_RS_2_FULL_LEN_WORD16           17 
#define C2K_COD_RS_2_ERASURE_LEN_WORD16        0

#define C2K_COD_RATE_MAX_LEN_WORD16            17

#define C2K_COD_QCELP8K         0x30
#define C2K_COD_QCELP13K        0x31
#define C2K_COD_EVRCA           0x32
#define C2K_COD_EVRCB           0x33
#define C2K_COD_EVRCNW_NB       0x34
#define C2K_COD_EVRCNW_WB       0x35
#define C2K_COD_UNDEF           0x39

#define C2K_LMD_LBK     1
#define C2K_CAAL_LBK    2

// SOCM
#define C2K_SOCM_EVRCA_RATE_REDUC_MIN       0
#define C2K_SOCM_EVRCA_RATE_REDUC_MAX       4
#define C2K_SOCM_QCELP13K_RATE_REDUC_MIN    0
#define C2K_SOCM_QCELP13K_RATE_REDUC_MAX    4
#define C2K_SOCM_EVRCB_RATE_REDUC_MIN       0
#define C2K_SOCM_EVRCB_RATE_REDUC_MAX       7
#define C2K_SOCM_EVRCNW_RATE_REDUC_MIN      0
#define C2K_SOCM_EVRCNW_RATE_REDUC_MAX      7

#define C2K_SOCM_RATE_REDUC_SHIFT       5
#define C2K_SOCM_MOBILE_TO_MOBILE_SHIFT 1

// DelR/W/M (ms)
#define C2K_DELR     8.25       
#define C2K_DELW     3
#define C2K_DELM     4

#define C2K_DBG_BIT_INIT           0x0
#define C2K_DBG_BIT_U2D_LOOPBACK   0x1
#define C2K_DBG_BIT_NO_MODEM       0x2


#endif //__SP_C2K__
