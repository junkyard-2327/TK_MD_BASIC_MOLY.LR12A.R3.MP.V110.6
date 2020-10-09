#ifndef SAL_DEF_H
#define SAL_DEF_H

#include "l1aud_common_def.h"

#if defined(MT6739)

#define __SAL_SPH_COD_MAX_BW_WB__

#else

#define __SAL_SPH_COD_MAX_BW_SWB__
//#define __SAL_SPH_COD_MAX_BW_FB__
#endif


//For Gen93, all project support 2-Mic/3-Mic(ER), not support 4-Mic
#define _SAL_DUALMIC_SUPPORT_    1  
#define _SAL_MIC3_SUPPORT_      0
#define _SAL_MIC4_SUPPORT_      1
#define _SAL_ANC_SUPPORT_        0

#define SAL_BIT0   0x0001
#define SAL_BIT1   0x0002
#define SAL_BIT2   0x0004
#define SAL_BIT3   0x0008
#define SAL_BIT4   0x0010
#define SAL_BIT5   0x0020
#define SAL_BIT6   0x0040
#define SAL_BIT7   0x0080
#define SAL_BIT8   0x0100
#define SAL_BIT9   0x0200
#define SAL_BIT10  0x0400
#define SAL_BIT11  0x0800
#define SAL_BIT12  0x1000
#define SAL_BIT13  0x2000
#define SAL_BIT14  0x4000
#define SAL_BIT15  0x8000

#define SAL_NB     0
#define SAL_WB     1
#define SAL_SWB    2
#define SAL_FB     3

#define SAL_DEV_NORMAL	  		0
#define SAL_DEV_EARPHONE  		1
#define SAL_DEV_LOUDSPK			2
#define SAL_DEV_BT_EARPHONE_NB 	3
#define SAL_DEV_BT_EARPHONE_WB 	4
#define SAL_DEV_BT_CORDLESS 	5
#define SAL_DEV_MAX_NUM 		6

#define SAL_APP_TYPE_2GCall 0
#define SAL_APP_TYPE_3GCall 1
#define SAL_APP_TYPE_4GCall 2
#define SAL_APP_TYPE_PCM_Router 3
#define SAL_APP_TYPE_C2KCall 4
#define SAL_APP_TYPE_Standby 5

#define SAL_ENH_AEC		0
#define SAL_ENH_NR_UL	1
#define SAL_ENH_NR_DL	2
#define SAL_ENH_TDNC	3
#define SAL_ENH_DMNR	4
#define SAL_ENH_MAGICCONFERENCE	5
#define SAL_ENH_EXTECHOREF	6

#define SAL_ENH_DYN_STA_PAR_INIT       0xFFF0
#define SAL_ENH_DYN_STA_PAR_SET        SAL_BIT0
#define SAL_ENH_DYN_STA_PAR_SET_RDY    SAL_BIT1
#define SAL_ENH_DYN_STA_DDL_SET        SAL_BIT4
#define SAL_ENH_DYN_STA_DDL_SET_RDY    SAL_BIT5
#define SAL_ENH_DYN_STA_DDL_DONE       SAL_BIT6
#define SAL_ENH_DYN_STA_DDL_DONE_CHK   (SAL_ENH_DYN_STA_DDL_SET + SAL_ENH_DYN_STA_DDL_SET_RDY + SAL_ENH_DYN_STA_DDL_DONE)

#define SAL_ENH_FLAG_PAR_UL               SAL_BIT0
#define SAL_ENH_FLAG_PAR_DL               SAL_BIT1
#define SAL_ENH_FLAG_PAR_NB_BKF_UL        SAL_BIT2
#define SAL_ENH_FLAG_PAR_NB_BKF_DL        SAL_BIT3
#define SAL_ENH_FLAG_PAR_NB_MOD           SAL_BIT4 
#define SAL_ENH_FLAG_PAR_WB_BKF_UL        SAL_BIT5 
#define SAL_ENH_FLAG_PAR_WB_BKF_DL        SAL_BIT6 
#define SAL_ENH_FLAG_PAR_WB_MOD           SAL_BIT7
#define SAL_ENH_FLAG_PAR_SWB_BKF_UL       SAL_BIT8 
#define SAL_ENH_FLAG_PAR_SWB_BKF_DL       SAL_BIT9
#define SAL_ENH_FLAG_PAR_SWB_MOD          SAL_BIT10 

#define SAL_FLTCOEFLEN_SIDETONE 31
#define SAL_FLTCOEFLEN_BKF_NB 	90
#define SAL_FLTCOEFLEN_BKF_WB 	90
#define SAL_FLTCOEFLEN_BKF_SWB 	90
#define SAL_FLTCOEFLEN_ENH_IIR 	42
#define SAL_FLTCOEFLEN_MIC_IIR 	20

#define SAL_FLTCOEFLEN_SRC 		82
#define SAL_FLTCOEFLEN_AGC 		40
#define SAL_FLTCOEFLEN_DMNR_NB 	44
#define SAL_FLTCOEFLEN_DMNR_WB	76
#define SAL_FLTCOEFLEN_DMNR_SWB	120
#define SAL_PARAMETERLEN_COMMON 12
#define SAL_PARAMETERLEN_MODE_NB 	16
#define SAL_PARAMETERLEN_MODE_WB 	16
#define SAL_PARAMETERLEN_NOTCH 	15
#define SAL_PARAMETERLEN_INTERNAL 16
#define SAL_FLTCOEFLEN_SRCPLUS 148
#define SAL_FLTCOEFLEN_SRCPLUS_SWB 296
#define SAL_FLTCOEFLEN_SRC_IIR 12

#define SPH_SFE_SRC_UL_DS            SAL_BIT1
#define SPH_SFE_SRC_DL_US            SAL_BIT2
#define SPH_SFE_SRC_UL4_DS           SAL_BIT4
#define SPH_SFE_SRC_UL3_DS           SAL_BIT5
#define SPH_SFE_SRC_UL2_DS           SAL_BIT6
#define SPH_SFE_SRC_UL_US            SAL_BIT7
#define SPH_SFE_SRC_DL_DS            SAL_BIT8
#define SPH_SFE_SRC_PCM_RT_8K2SD_US  SAL_BIT12
#define SPH_SFE_SRC_PCM_RT_8K2SD_DS  SAL_BIT13
#define SPH_SFE_SRC_PCM_RT_SE28K_US  SAL_BIT14
#define SPH_SFE_SRC_PCM_RT_SE28K_DS  SAL_BIT15


#define SAL_3G_VALUE_TX_CODEC_MODE 0
#define SAL_3G_VALUE_RX_CODEC_MODE 1
#define SAL_3G_VALUE_TX_TYPE 2
#define SAL_3G_VALUE_RX_TYPE 3

#define SAL_3G_ADDR_TXHB   0
#define SAL_3G_ADDR_RXHB   1


#define SAL_3G_TX_SPEECH_GOOD  2
#define SAL_3G_TX_SID_FIRST    1
#define SAL_3G_TX_SID_UPDATE   3
#define SAL_3G_TX_NO_DATA      0

#define SAL_3G_RX_SPEECH_GOOD  0
#define SAL_3G_RX_SPEECH_BAD   4
#define SAL_3G_RX_SID_FIRST    6
#define SAL_3G_RX_SID_UPDATE   8
#define SAL_3G_RX_SID_BAD      10
#define SAL_3G_RX_NO_DATA      14

#define SAL_COD_FR 0
#define SAL_COD_HR 1
#define SAL_COD_EFR 2
#define SAL_COD_AMR122 3
#define SAL_COD_AMR102 4
#define SAL_COD_AMR795 5
#define SAL_COD_AMR74 6
#define SAL_COD_AMR67 7
#define SAL_COD_AMR59 8
#define SAL_COD_AMR515 9
#define SAL_COD_AMR475 10
        
#define SAL_COD_AWB660 0x20
#define SAL_COD_AWB885 0x21
#define SAL_COD_AWB1265 0x22
#define SAL_COD_AWB1425 0x23
#define SAL_COD_AWB1585 0x24
#define SAL_COD_AWB1825 0x25
#define SAL_COD_AWB1985 0x26
#define SAL_COD_AWB2305 0x27
#define SAL_COD_AWB2385 0x28
#define SAL_COD_QCELP8K 0x30
#define SAL_COD_QCELP13K 0x31
#define SAL_COD_EVRCA 0x32
#define SAL_COD_EVRCB 0x33
#define SAL_COD_EVRCNW_NB 0x34
#define SAL_COD_EVRCNW_WB 0x35
#define SAL_COD_UNDEF 0x39
        
#define SAL_COD_EVSMIN  0x80
#define SAL_COD_EVSMAX  0xDF




#define SAL_DSPINT_PRIO_REC_EPL 1 //uplink
#define SAL_DSPINT_PRIO_REC_PCM 2 //uplink
#define SAL_DSPINT_PRIO_REC_VM  3 //downlink
#define SAL_DSPINT_PRIO_3G_DL	4
#define SAL_DSPINT_PRIO_3G_UL	5
#define SAL_DSPINT_PRIO_EXTCOD_DL	6
#define SAL_DSPINT_PRIO_EXTCOD_UL	7
#define SAL_DSPINT_PRIO_PNW_DL	8
#define SAL_DSPINT_PRIO_PNW_UL	9
#define SAL_DSPINT_PRIO_DACA_DL	10
#define SAL_DSPINT_PRIO_DACA_UL	11
#define SAL_DSPINT_PRIO_BGS_DL	12 //downlink, ping pong
#define SAL_DSPINT_PRIO_BGS_UL	13 
#define SAL_DSPINT_PRIO_AVBT	14
#define SAL_DSPINT_PRIO_WARN_MSG_UL	15
#define SAL_DSPINT_PRIO_WARN_MSG_DL	16
#define SAL_DSPINT_PRIO_4G_DL	17
#define SAL_DSPINT_PRIO_4G_UL	18
#define SAL_DSPINT_PRIO_C2K_DL	19
#define SAL_DSPINT_PRIO_C2K_UL	20
#define SAL_DSPINT_PRIO_4G_AAMPLUS	21
#define SAL_DSPINT_PRIO_RAMP_DONE       22
#define SAL_DSPINT_PRIO_MIXER2_DL       23
#define SAL_DSPINT_PRIO_MIXER3       24
#define SAL_DSPINT_PRIO_MAX     25


#define SAL_DSPINT_ID_REC_EPL   (1 << SAL_DSPINT_PRIO_REC_EPL)
#define SAL_DSPINT_ID_REC_PCM   (1 << SAL_DSPINT_PRIO_REC_PCM)
#define SAL_DSPINT_ID_REC_VM    (1 << SAL_DSPINT_PRIO_REC_VM)
#define SAL_DSPINT_ID_3G_DL		(1 << SAL_DSPINT_PRIO_3G_DL)
#define SAL_DSPINT_ID_3G_UL		(1 << SAL_DSPINT_PRIO_3G_UL)
#define SAL_DSPINT_ID_EXTCOD_DL	(1 << SAL_DSPINT_PRIO_EXTCOD_DL)
#define SAL_DSPINT_ID_EXTCOD_UL	(1 << SAL_DSPINT_PRIO_EXTCOD_UL)
#define SAL_DSPINT_ID_PNW_DL	(1 << SAL_DSPINT_PRIO_PNW_DL)
#define SAL_DSPINT_ID_PNW_UL	(1 << SAL_DSPINT_PRIO_PNW_UL)
#define SAL_DSPINT_ID_DACA_DL	(1 << SAL_DSPINT_PRIO_DACA_DL)
#define SAL_DSPINT_ID_DACA_UL	(1 << SAL_DSPINT_PRIO_DACA_UL)
#define SAL_DSPINT_ID_BGS_DL	(1 << SAL_DSPINT_PRIO_BGS_DL)
#define SAL_DSPINT_ID_BGS_UL	(1 << SAL_DSPINT_PRIO_BGS_UL)
#define SAL_DSPINT_ID_AVBT		(1 << SAL_DSPINT_PRIO_AVBT)
#define SAL_DSPINT_ID_WARN_MSG_UL		(1 << SAL_DSPINT_PRIO_WARN_MSG_UL)
#define SAL_DSPINT_ID_WARN_MSG_DL		(1 << SAL_DSPINT_PRIO_WARN_MSG_DL)
#define SAL_DSPINT_ID_4G_DL		(1 << SAL_DSPINT_PRIO_4G_DL)
#define SAL_DSPINT_ID_4G_UL		(1 << SAL_DSPINT_PRIO_4G_UL)
#define SAL_DSPINT_ID_C2K_DL		(1 << SAL_DSPINT_PRIO_C2K_DL)
#define SAL_DSPINT_ID_C2K_UL		(1 << SAL_DSPINT_PRIO_C2K_UL)
#define SAL_DSPINT_ID_4G_AAMPLUS		(1 << SAL_DSPINT_PRIO_4G_AAMPLUS)
#define SAL_DSPINT_ID_RAMP_DONE         (1 << SAL_DSPINT_PRIO_RAMP_DONE)
#define SAL_DSPINT_ID_MIXER2_DL (1 << SAL_DSPINT_PRIO_MIXER2_DL)
#define SAL_DSPINT_ID_MIXER3    (1 << SAL_DSPINT_PRIO_MIXER3)

//C2K
#define SAL_DSPINT_ID_C2K_DL		(1 << SAL_DSPINT_PRIO_C2K_DL)
#define SAL_DSPINT_ID_C2K_UL		(1 << SAL_DSPINT_PRIO_C2K_UL)

// C2K
#define SAL_C2K_SO_NULL   0       /* Invalid service option  */
#define SAL_C2K_SO1       1       /* SO1.   QCELP8. not supported  */
#define SAL_C2K_SO3       3       /* SO3.   EVRC-A */
#define SAL_C2K_SO17      17      /* SO17.  QCELP13 */
#define SAL_C2K_SO68      68      /* SO68.  EVRC-B */
#define SAL_C2K_SO73      73      /* SO73.  EVRC-NB */
#define SAL_C2K_SO73WB    173     /* SO73.  EVRC-WB */

//ToDo:
//#define SAL_C2K_COD_QCELP8K         C2K_COD_QCELP8K   
//#define SAL_C2K_COD_QCELP13K        C2K_COD_QCELP13K  
//#define SAL_C2K_COD_EVRCA           C2K_COD_EVRCA     
//#define SAL_C2K_COD_EVRCB           C2K_COD_EVRCB     
//#define SAL_C2K_COD_EVRCNW_NB       C2K_COD_EVRCNW_NB    
//#define SAL_C2K_COD_EVRCNW_WB       C2K_COD_EVRCNW_WB
//#define SAL_C2K_COD_MODE_UNDEF      C2K_COD_UNDEF

#define SAL_C2K_COD_QCELP8K         0x30   
#define SAL_C2K_COD_QCELP13K        0x31
#define SAL_C2K_COD_EVRCA           0x32
#define SAL_C2K_COD_EVRCB           0x33
#define SAL_C2K_COD_EVRCNW_NB       0x34
#define SAL_C2K_COD_EVRCNW_WB       0x35
#define SAL_C2K_COD_MODE_UNDEF      0x39

//ToDo:
//#define SAL_C2K_RATE_BLANK          IPC_SPCH_BLANK   
//#define SAL_C2K_RATE_EIGHTH         IPC_SPCH_EIGHTH  
//#define SAL_C2K_RATE_QUARTER        IPC_SPCH_QUARTER     
//#define SAL_C2K_RATE_HALF           IPC_SPCH_HALF     
//#define SAL_C2K_RATE_FULL           IPC_SPCH_FULL    
//#define SAL_C2K_RATE_ERASURE        IPC_SPCH_ERASURE
//#define SAL_C2K_RATE_FULL_LIKELY    IPC_SPCH_FULL_LIKELY

#define SAL_C2K_RATE_BLANK          0x0      
#define SAL_C2K_RATE_EIGHTH         0x1
#define SAL_C2K_RATE_QUARTER        0x2
#define SAL_C2K_RATE_HALF           0x3
#define SAL_C2K_RATE_FULL           0x4
#define SAL_C2K_RATE_ERASURE        0xE
#define SAL_C2K_RATE_FULL_LIKELY    0xF



#define SAL_C2K_VALUE_SO 0
#define SAL_C2K_VALUE_UL_RATE 1
#define SAL_C2K_VALUE_DL_RATE 2

#define SAL_C2K_ADDR_TXHB   0
#define SAL_C2K_ADDR_RXHB   1

#define SAL_C2K_SOCM_QCELP13K         0
#define SAL_C2K_SOCM_EVRCA            1
#define SAL_C2K_SOCM_EVRCB            2
#define SAL_C2K_SOCM_EVRCNW_NB        3
#define SAL_C2K_SOCM_EVRCNW_WB        4
#define SAL_C2K_ENC_MAX_RATE          5
#define SAL_C2K_EBNT                  6
#define SAL_C2K_DL_RATE               7

#define SAL_C2K_COD_FEATURE_HPF              0
#define SAL_C2K_COD_FEATURE_POS_FLT          1
#define SAL_C2K_COD_FEATURE_PITCH_PRE_FLT    2

#define SAL_SCH_FEATURE_SDSP_CONFIG_DEL_RW 0
#define SAL_SCH_FEATURE_C2K_SMR            1

//Test mode
#define SAL_DSP_TESTMODE_2G_FR      0x20
#define SAL_DSP_TESTMODE_2G_HR      0x21
#define SAL_DSP_TESTMODE_2G_EFR     0x22
#define SAL_DSP_TESTMODE_2G_AMR     0x23
#define SAL_DSP_TESTMODE_2G_AWB     0x24
#define SAL_DSP_TESTMODE_3G_AMR     0x30
#define SAL_DSP_TESTMODE_3G_AWB     0x31
#define SAL_DSP_TESTMODE_4G_AMR     0x40
#define SAL_DSP_TESTMODE_4G_AWB     0x41
#define SAL_DSP_TESTMODE_4G_EVS     0x42
#define SAL_DSP_TESTMODE_C2K_EVRCA  0x90
#define SAL_DSP_TESTMODE_C2K_EVRCB  0x91

//Test mode - AFE DVT
#define SAL_DSP_TESTMODE_AFEDVT_UL_CH0    0
#define SAL_DSP_TESTMODE_AFEDVT_UL_CH1    1
#define SAL_DSP_TESTMODE_AFEDVT_UL_CH2    2
#define SAL_DSP_TESTMODE_AFEDVT_UL_CH3    3
#define SAL_DSP_TESTMODE_AFEDVT_UL_CH4    4
#define SAL_DSP_TESTMODE_AFEDVT_UL_CH5    5

#define SAL_DSP_TESTMODE_AFEDVT_DL_CH0    0
#define SAL_DSP_TESTMODE_AFEDVT_DL_CH1    1

//Debug mode
#define SAL_DSP_DBGMODE_SSP_PCM_U2D_AFE       SAL_BIT0
#define SAL_DSP_DBGMODE_SSP_PCM_U2D_SFE       SAL_BIT1
#define SAL_DSP_DBGMODE_SSP_MUTE_UL           SAL_BIT2
#define SAL_DSP_DBGMODE_SSP_MUTE_DL           SAL_BIT3
#define SAL_DSP_DBGMODE_SSP_TONE_UL           SAL_BIT4
#define SAL_DSP_DBGMODE_SSP_TONE_DL           SAL_BIT5
#define SAL_DSP_DBGMODE_SFP_HB_U2D            SAL_BIT6
#define SAL_DSP_DBGMODE_SFP_PCM_U2D           SAL_BIT7
#define SAL_DSP_DBGMODE_SFP_MUTE_POSENHU      SAL_BIT8
#define SAL_DSP_DBGMODE_SFP_MUTE_PREENHD      SAL_BIT9
#define SAL_DSP_DBGMODE_SFP_MUTE_POSENHD      SAL_BIT10
#define SAL_DSP_DBGMODE_SFP_TONE_POSENHU      SAL_BIT11
#define SAL_DSP_DBGMODE_SFP_TONE_PREENHD      SAL_BIT12
#define SAL_DSP_DBGMODE_SFP_TONE_POSENHD      SAL_BIT13
#define SAL_DSP_DBGMODE_SFP_DISABLE_ENHU      SAL_BIT14
#define SAL_DSP_DBGMODE_SFP_DISABLE_ENHD      SAL_BIT15

// SAL trace                                             
#define SAL_SPH_CALL_OPEN                         0x3000 
#define SAL_SPH_CALL_CLOSE                        0x3001 
#define SAL_SPH_SET_VALUE                         0x3002 
#define SAL_SPH_SET_TTY                           0x3003
#define SAL_SPH_FEATURE_SWITCH                    0x3004
#define SAL_SPH_GET_ADDR                          0x3005
#define SAL_SPH_GET_VALUE                         0x3006 
#define SAL_SPH_SET_COD_STATE                     0x3007


//DL gain smooth
#define SAL_ATTACK_GAIN_DL_NB  47
#define SAL_RELEASE_GAIN_DL_NB 32720
#define SAL_ATTACK_GAIN_DL_WB  23
#define SAL_RELEASE_GAIN_DL_WB 32744
#define SAL_ATTACK_GAIN_DL_SWB  12
#define SAL_RELEASE_GAIN_DL_SWB 32756

//EVS
#define SAL_EVS_SPEECH_GOOD_FRAME  0x6b21
#define SAL_EVS_SPEECH_BAD_FRAME   0x6b20

#define SAL_EVS_TX_CODEC_MODE 1
#define SAL_EVS_RX_CODEC_MODE 2

//3G mode
#define SAL_3GLINK_MODE_NONE     0
#define SAL_3GLINK_MODE_WCDMA    1
#define SAL_3GLINK_MODE_TDSCDMA  2

//LinkStatus
#define SAL_LINKSTATUS_2G  2
#define SAL_LINKSTATUS_3G  3
#define SAL_LINKSTATUS_4G  4
#define SAL_LINKSTATUS_C2K  10

//PCM Rec DL Position
#define SAL_PCMREC_DL_POS_DL_END     0
#define SAL_PCMREC_DL_POS_POS_ENH    1
#define SAL_PCMREC_DL_POS_PRE_MIXER2 2
#define SAL_PCMREC_DL_POS_MAX        2

//AAMPlus
typedef enum{
	SAL_AAMPLUS_STA_SILENCE_SID_FIRST = 0,
	SAL_AAMPLUS_STA_SILENCE_SID_UPDATE,
	SAL_AAMPLUS_STA_TALK
}Sal_AAMPlus_State_t;

typedef enum{
	SAL_PCM_NARROWBAND = 0,
	SAL_PCM_WIDEBAND,
	SAL_PCM_SUPERWIDEBAND,
	SAL_PCM_FULLBAND,
	SAL_PCM_DYNAMIC
}Sal_PcmBand_Config_t;

typedef enum{
	SAL_PCMEX_OFF = 0,
	SAL_PCMEX_ON,
	SAL_PCMEX_RDY,
}Sal_PcmEx_State_t;

typedef enum{
	SAL_GSERIES = 0,
	SAL_EVS
		
}Sal_ExtCod_t;


typedef enum{
	SAL_PCMEX_TYPE_PNW = 0,
	SAL_PCMEX_TYPE_DACA,
	SAL_PCMEX_TYPE_REC_NML,
	SAL_PCMEX_TYPE_REC_EPL, //no actual dsp control before MT6589
	SAL_PCMEX_TYPE_EXT_COD
}Sal_PcmEx_Type_t;


typedef enum{
	SAL_PCMEX_SWITCH_OFF = 0,
	SAL_PCMEX_SWITCH_ON
}Sal_PcmEx_Switch_t;

typedef enum{
	SAL_PCMEX_PNW_BUF_M2D_UL1 = 0,//D2M
	SAL_PCMEX_PNW_BUF_D2M_UL1,
	SAL_PCMEX_PNW_BUF_M2D_UL2,
	SAL_PCMEX_PNW_BUF_D2M_UL2,
	SAL_PCMEX_PNW_BUF_M2D_UL3,
	SAL_PCMEX_PNW_BUF_D2M_UL3,
	SAL_PCMEX_PNW_BUF_M2D_UL4,
	SAL_PCMEX_PNW_BUF_D2M_UL4,
	SAL_PCMEX_PNW_BUF_M2D_DL1,
	SAL_PCMEX_PNW_BUF_D2M_DL1,
	SAL_PCMEX_DACA_BUF_UL,
	SAL_PCMEX_DACA_BUF_DL,
	SAL_PCMEX_BUF_SE,
	SAL_PCMEX_BUF_SE2,//mic2
	SAL_PCMEX_BUF_SD,
	SAL_PCMEX_EXTCOD_BUF_UL,
	SAL_PCMEX_EXTCOD_BUF_DL,
	//For pcm4way.c build pass
    SAL_PCMEX_PNW_BUF_UL1,//D2M
	SAL_PCMEX_PNW_BUF_UL2,//M2D
	SAL_PCMEX_PNW_BUF_UL3,
	SAL_PCMEX_PNW_BUF_UL4,
	SAL_PCMEX_PNW_BUF_DL1,//D2M
	SAL_PCMEX_PNW_BUF_DL2,//M2D

	
}Sal_PcmEx_BufId_t;

typedef enum{
	SAL_ENH_IIR_COEF_UL_NB,
	SAL_ENH_IIR_COEF_DL_NB,
	SAL_ENH_IIR_COEF_UL_WB,
	SAL_ENH_IIR_COEF_DL_WB,
	SAL_ENH_IIR_COEF_UL_SWB,
	SAL_ENH_IIR_COEF_DL_SWB,
	SAL_MIC1_IIR_COEF_UL_NB,
	SAL_MIC2_IIR_COEF_UL_NB,
	SAL_MIC1_IIR_COEF_UL_WB,
	SAL_MIC2_IIR_COEF_UL_WB,
	SAL_MIC1_IIR_COEF_UL_SWB,
	SAL_MIC2_IIR_COEF_UL_SWB
}Sal_IIR_Coef_t;



typedef struct{

	Sal_PcmEx_Switch_t swi;

	Sal_PcmEx_Type_t type;
	
	bool idle;//must be assinged
	Sal_PcmBand_Config_t band;//taking effect only when idle is true
	uint16 delR;
	uint16 delW;
	uint16 delM;


	//for pcm n way
	bool afterEnh_ul1;
	bool D2M_ul1;
	bool M2D_ul1;
	bool afterEnh_ul2;
	bool D2M_ul2;
	bool M2D_ul2;
	bool afterEnh_ul3;
	bool D2M_ul3;
	bool M2D_ul3;
	bool afterEnh_ul4;
	bool D2M_ul4;
	bool M2D_ul4;
	bool DMNR_cal;//dsp pnw ul will copy pcm to M2D buffer

	bool afterEnh_dl; //position
	bool D2M_dl; //dl position is different from daca on bgs and keytone
	bool M2D_dl;
	
	//for PCM Rec
	uint16 PCMRec_DL_Pos;

	
}Sal_PCMEx_Config_t;


typedef enum{
	SAL_VM_SWITCH_OFF = 0,
	SAL_VM_SWITCH_ON
}Sal_VM_Switch_t;


typedef struct{
	
	Sal_VM_Switch_t swi;
	bool idle;

	uint16 delR;
	uint16 delW;
	uint16 delM;
	uint16 codec;

}Sal_VM_Config_t;


typedef struct{

	uint16 enc_mode;
	uint16 dec_mode;

	uint16 enc_hdr;
	uint16 dec_hdr;

	volatile uint16 *enc_hb_addr;
	volatile uint16 *dec_hb_addr;

	volatile uint16 *dbgInfo_addr;
	volatile uint16 *enh_dbgInfo_addr;
		
}Sal_VM_Frame;

#define SAL_VM_DBGINFO_LEN 100
#define SAL_VM_ENH_DBGINFO_LEN 160
#define SAL_VM_DRV_DBGINFO_LEN 20

typedef struct{

	uint16 ul_pre_len;
	uint16 ul_pos_len;
	uint16 dl_pre_len;
	uint16 dl_pos_len;
	
	uint16 ul2_pos_len;
	uint16 ul3_pos_len;
	uint16 ul4_pos_len;

	volatile uint16 *ul_pre_buf;
	volatile uint16 *ul_pos_buf;
	volatile uint16 *dl_pre_buf;
	volatile uint16 *dl_pos_buf;

	volatile uint16 *ul2_pos_buf;
	
	volatile uint16 *ul3_pos_buf;
	volatile uint16 *ul4_pos_buf;

}Sal_EPL_Frame;


typedef enum{
	SAL_BT_MODE_LINEAR = 0,
	SAL_BT_MODE_SIGNEXT,
	SAL_BT_MODE_GAIN
}Sal_BT_Mode_t;

typedef enum{
	SAL_BT_LINEAR_GAIN_FIXED = 0,//fixed to 18db
	SAL_BT_LINEAR_ZPAD,//last 3 bits
	SAL_BT_LINEAR_GAIN_CONFIG_ZPAD
}Sal_BT_Linear_Ctrl_t;

typedef struct{

	bool feed_cfg;// false: clear bt config
	Sal_BT_Mode_t mode;

	//for linear mode
	Sal_BT_Linear_Ctrl_t linear_ctrl;
	bool linear_reverse;
	uint8 linear_ul_gain;

	//for gain mode
	uint8 gainmode_dl_gain;
	
}Sal_BT_Config;

typedef enum{
	SAL_MUTE_UL_POS_EN,
	SAL_MUTE_UL_PRE_EN,
	SAL_MUTE_UL_IN_EN,
	SAL_MUTE_DL_PRE_SD,
	SAL_MUTE_DL_PRE_EN,
	SAL_MUTE_UL_8K,
	SAL_MUTE_DL_8K,	
	SAL_MUTE_UL_PRE_EXTCOD,
	SAL_MUTE_DL_POS_EXTCOD	
}Sal_Mute_Point_t;

typedef enum{
	SAL_RAMP_UL_POS_EN,
	SAL_RAMP_UL_PRE_EN,
	SAL_RAMP_UL_IN_EN,
//	SAL_RAMP_DL_PRE_SD,
	SAL_RAMP_DL_PRE_EN,
	SAL_RAMP_UL_8K,
	SAL_RAMP_DL_8K,	
	SAL_RAMP_UL_PRE_EXTCOD,
	SAL_RAMP_DL_POS_EXTCOD,	
	SAL_RAMP_DL_PRE_DACA
}Sal_Ramp_Point_t;

typedef enum{
    SAL_RAMP_IDLE = 0,
    SAL_RAMP_DOWN_INIT,
    SAL_RAMP_DOWN_RUN,
    SAL_RAMP_DOWN_DONE,
    SAL_RAMP_UP_INIT,
    SAL_RAMP_UP_RUN,
    SAL_RAMP_UP_DONE
}Sal_Ramp_State_t;

typedef enum{
	SAL_ENH_DYNAMIC_MUTE_UL,
	SAL_ENH_DYNAMIC_DMNR_MUX,
	SAL_ENH_DYNAMIC_VCE_MUX,
	SAL_ENH_DYNAMIC_BWE_MUX,
	SAL_ENH_DYNAMIC_UL_NR_MUX,
	SAL_ENH_DYNAMIC_DL_NR_MUX,
	SAL_ENH_DYNAMIC_DMNR_HF_MUX,
	SAL_ENH_DYNAMIC_SIDEKEYCTRL_DGAIN_MUX,
	SAL_ENH_DYNAMIC_DL_NR_INIT_CTRL_MUX,
	SAL_ENH_DYNAMIC_AEC_MUX,
	SAL_ENH_DYNAMIC_NUM //for salu using
}Sal_Enh_Dynamic_t;


typedef enum{
	SAL_ENH_DYN_PAR,
	SAL_ENH_DYN_DDL_SET,
	SAL_ENH_DYN_DDL_DONE
}Sal_Enh_Dyn_Sta_t;

typedef enum{
	SAL_ENH_FLAG_PAR_SET_UL,
	SAL_ENH_FLAG_PAR_SET_DL,
	SAL_ENH_FLAG_PAR_SET_UL_DL,
	SAL_ENH_FLAG_PAR_SET_NB_BKF_UL,
	SAL_ENH_FLAG_PAR_SET_NB_BKF_DL,
	SAL_ENH_FLAG_PAR_SET_NB_MOD,
	SAL_ENH_FLAG_PAR_SET_WB_BKF_UL,
	SAL_ENH_FLAG_PAR_SET_WB_BKF_DL,
	SAL_ENH_FLAG_PAR_SET_WB_MOD
}Sal_Enh_Flag_Par_t;

typedef enum{
	SAL_DEVINFO_INT_NORMAL = 1,
	SAL_DEVINFO_INT_BT_PCM,
	SAL_DEVINFO_INT_CVSD_MSBC
}Sal_DevInfo_Int_t;

typedef enum{
	SAL_DEVINFO_EXT_DEFAULT = 0,
	SAL_DEVINFO_EXT_VIBRATION_RECEIVER,
	SAL_DEVINFO_EXT_VIBRATION_SPEAKER,
	SAL_DEVINFO_EXT_SMARTPA_SPEAKER,
	SAL_DEVINFO_EXT_SMARTPA_VIBRATION_SPEAKER,
	SAL_DEVINFO_EXT_USB_AUDIO,
	SAL_DEVINFO_EXT_EARPHONE
}Sal_DevInfo_Ext_t;

typedef struct{

	bool main_switch;
	bool gain_switch;//false->fixed_gain
	bool hpiir_switch;
	bool vad_switch;
	bool cosim;
	bool init_req;
	
}Sal_AGC_Config_t;


typedef enum{
	SAL_VOLTE_INFO_JBM_OUT_SN,//for vm logging
	SAL_VOLTE_INFO_NUM //for salu using
}Sal_VOLTE_info_t;

typedef struct{
	
	uint16 cod_band; //0: NB, 1: WB
	uint16 dev_band; //0: NB, 1: WB
	uint16 delR;
	uint16 delW;
	uint16 delM_DL;
	uint16 delM_UL;	
	
}Sal_PCM_Router_t;

#define SAL_CTM_VALUE_TYPE_FACCH_REPORT 0
#define SAL_CTM_VALUE_TYPE_AMR_RX_RATE 1

#define SAL_UNKNOWN 0xeeee

#endif

