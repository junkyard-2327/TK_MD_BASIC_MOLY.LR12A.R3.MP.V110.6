#ifndef SAL_DSP_H
#define SAL_DSP_H

#include "l1aud_common_def.h"
#include "audio_dsp_d2c_def.h"



#if defined(__MD93__)
#include "dpram_Gen93.h"
#endif

#if defined(__MD95__)
#include "dpram_Gen95.h"
#endif

//defined in dpram.h start

/*----------------------Gen93----------------------*/
#include"dsp_header_define_cuif_speech.h"
#include "cuif_l1core_public.h"
#include "reg_base.h"

//2G
#define IDMA_DM0_ADDR(a)   ((volatile unsigned short*)(BASE_NADDR_MD2GSYS_IDMA_DM + ((a)<<2)))


#define SPH2G_SD_DATA_HDR                    IDMA_DM0_ADDR(SPH_2G_SD_DATA_HDR)
#define SPH2G_SD_DATA_HB                     IDMA_DM0_ADDR(SPH_2G_SD_DATA_HB)
#define SPH2G_SE_DATA_HDR                    IDMA_DM0_ADDR(SPH_2G_SE_DATA_HDR)
#define SPH2G_SE_DATA_HB                     IDMA_DM0_ADDR(SPH_2G_SE_DATA_HB)
#define SPH2G_ENCODER_USED_MODE              IDMA_DM0_ADDR(DP_Encoder_Used_Mode)
#define SPH2G_DECODER_USED_MODE              IDMA_DM0_ADDR(DP_Decoder_Used_Mode)

#define SPH_BIT0    (1<<0)
#define SPH_BIT1    (1<<1)
#define SPH_BIT2    (1<<2)
#define SPH_BIT3    (1<<3)
#define SPH_BIT4    (1<<4)
#define SPH_BIT5    (1<<5)
#define SPH_BIT6    (1<<6)
#define SPH_BIT7    (1<<7)
#define SPH_BIT8    (1<<8)
#define SPH_BIT9    (1<<9)
#define SPH_BIT10   (1<<10)
#define SPH_BIT11   (1<<11)
#define SPH_BIT12   (1<<12)
#define SPH_BIT13   (1<<13)
#define SPH_BIT14   (1<<14)
#define SPH_BIT15   (1<<15)

//App mode
#define SPH_APP_MODE_NONE 0
#define SPH_APP_MODE_VOIP 1
#define SPH_APP_MODE_CALL_2G 2
#define SPH_APP_MODE_CALL_3G 3
#define SPH_APP_MODE_CALL_4G 4
#define SPH_APP_MODE_CALL_C2K 10
#define SPH_APP_MODE_AVS 11
#define SPH_APP_MODE_PCM_ROUTER 12
#define SPH_APP_MODE_STANDBY 13
#define SPH_APP_MODE_OTHERS 99

//Sch band
#define SPH_SCH_BAND_NB  0
#define SPH_SCH_BAND_WB  1
#define SPH_SCH_BAND_SWB 2
#define SPH_SCH_BAND_FB 3

//Device mode
#define SPH_DEV_MODE_HST  0
#define SPH_DEV_MODE_EPN  1
#define SPH_DEV_MODE_LSPK 2
#define SPH_DEV_MODE_BTEPN 3
#define SPH_DEV_MODE_BTCORD 4
#define SPH_DEV_MODE_UNDEF 9

//Device band
#define SPH_DEV_BAND_NB  0
#define SPH_DEV_BAND_WB  1
#define SPH_DEV_BAND_SWB 2
#define SPH_DEV_BAND_FB 3


//Codec ctrl
#define SPH_COD_CTR_NEW SPH_BIT0
#define SPH_COD_CTR_RST SPH_BIT1
#define SPH_COD_CTR_RUN SPH_BIT2
#define SPH_COD_CTR_RMV SPH_BIT3
#define SPH_COD_CTR_BFI SPH_BIT4
#define SPH_COD_CTR_SIL SPH_BIT5
#define SPH_COD_CTR_DTX SPH_BIT6
#define SPH_COD_CTR_MUTE SPH_BIT7
#define SPH_COD_CTR_MUTE2 SPH_BIT8
#define SPH_COD_CTR_LBK SPH_BIT9
#define SPH_COD_CTR_PAU SPH_BIT10
#define SPH_COD_CTR_DEC2_ENA SPH_BIT11  // support DEC2
#define SPH_COD_CTR_DEC2_GO  SPH_BIT12  // Do DEC2
#define SPH_COD_CTR_RATE_NEW  SPH_BIT13
#define SPH_COD_CTR_RATE_CHG  SPH_BIT14


//Mute ctrl
#define SPH_MUTE_BIT_UL_PRE_ENH  SPH_BIT0
#define SPH_MUTE_BIT_UL_POS_ENH  SPH_BIT1
#define SPH_MUTE_BIT_UL_POS_AFE  SPH_BIT2
#define SPH_MUTE_BIT_UL_IN_ENH   SPH_BIT3
#define SPH_MUTE_BIT_UL_PRE_EXTCOD   SPH_BIT4
#define SPH_MUTE_BIT_DL_PRE_DEC  SPH_BIT8
#define SPH_MUTE_BIT_DL_PRE_ENH  SPH_BIT9
#define SPH_MUTE_BIT_DL_PRE_AFE  SPH_BIT10
#define SPH_MUTE_BIT_DL_POS_EXTCOD   SPH_BIT11

//Ramp State
/*#define SPH_RAMP_STA_IDLE        (0)
#define SPH_RAMP_STA_DOWN_INIT   (1)
#define SPH_RAMP_STA_DOWN_RUN    (2)
#define SPH_RAMP_STA_DOWN_DONE   (3)
#define SPH_RAMP_STA_UP_INIT     (4)
#define SPH_RAMP_STA_UP_RUN      (5)
#define SPH_RAMP_STA_UP_DONE     (6)
*/
//U2C Flag UL Start
#define SPH_U2C_UL_START_BIT_4G     SPH_BIT0

//U2C Flag UL End
#define SPH_U2C_UL_END_BIT_PCMREC_NML   SPH_BIT0
#define SPH_U2C_UL_END_BIT_PCMREC_EPL   SPH_BIT1
#define SPH_U2C_UL_END_BIT_PNW          SPH_BIT2
#define SPH_U2C_UL_END_BIT_DACA         SPH_BIT3
#define SPH_U2C_UL_END_BIT_3G           SPH_BIT4
#define SPH_U2C_UL_END_BIT_BGS          SPH_BIT5
#define SPH_U2C_UL_END_BIT_RESERVED     SPH_BIT6
#define SPH_U2C_UL_END_BIT_WARNMSG      SPH_BIT7
#define SPH_U2C_UL_END_BIT_EXTCOD       SPH_BIT8
#define SPH_U2C_UL_END_BIT_EXTCOD_4G    SPH_BIT9
#define SPH_U2C_UL_END_BIT_C2K          SPH_BIT10
#define SPH_U2C_UL_END_BIT_RESERVED1    SPH_BIT11
#define SPH_U2C_UL_END_BIT_AAMPLUS      SPH_BIT12
#define SPH_U2C_UL_END_BIT_MIXER3       SPH_BIT13

//U2C Flag DL Start
#define SPH_U2C_DL_START_AAMPLUS SPH_BIT0

//U2C Flag DL End
#define SPH_U2C_DL_END_BIT_VMREC        SPH_BIT0
#define SPH_U2C_DL_END_BIT_VMPlay       SPH_BIT1
#define SPH_U2C_DL_END_BIT_PNW          SPH_BIT2
#define SPH_U2C_DL_END_BIT_DACA         SPH_BIT3
#define SPH_U2C_DL_END_BIT_3G           SPH_BIT4
#define SPH_U2C_DL_END_BIT_BGS          SPH_BIT5
#define SPH_U2C_DL_END_BIT_AVBT         SPH_BIT6
#define SPH_U2C_DL_END_BIT_WARNMSG      SPH_BIT7
#define SPH_U2C_DL_END_BIT_EXTCOD       SPH_BIT8
#define SPH_U2C_DL_END_BIT_RESERVED     SPH_BIT9
#define SPH_U2C_DL_END_BIT_C2K          SPH_BIT10
#define SPH_U2C_DL_END_BIT_MIXER2       SPH_BIT11

//U2C Flag MM End
#define SPH_U2C_MM_END_BIT_BGS          SPH_BIT0
#define SPH_U2C_MM_END_BIT_DACA         SPH_BIT1
#define SPH_U2C_MM_END_BIT_PCMREC_NML   SPH_BIT2

//VM
#define SPH_VMCTRL_BIT_VM               SPH_BIT0   
//HO Ctrl
#define SPH_HOCTRL_BIT_2G_HO            SPH_BIT0
#define SPH_HOCTRL_BIT_3G_HO            SPH_BIT1
#define SPH_HOCTRL_BIT_4G_HO            SPH_BIT2

//C2K
//C2K COD Fun Ctrl
#define C2K_COD_FUN_CTRL_BIT_TTY        SPH_BIT0
#define C2K_COD_FUN_CTRL_BIT_DTX        SPH_BIT1

//C2K COD Fea Switch
#define C2K_COD_FEA_SWITCH_BIT_HPF      SPH_BIT0
#define C2K_COD_FEA_SWITCH_BIT_POSFLT   SPH_BIT1
#define C2K_COD_FEA_SWITCH_BIT_PREFLT   SPH_BIT2


//PNW
#define SPH_PNW_PATH_CTRL_MAIN_SWITCH    (SPH_BIT0)
#define SPH_PNW_PATH_CTRL_LOC_UL1        (SPH_BIT4)
#define SPH_PNW_PATH_CTRL_D2M_ENA_UL1    (SPH_BIT5)
#define SPH_PNW_PATH_CTRL_M2D_ENA_UL1    (SPH_BIT6)
#define SPH_PNW_PATH_CTRL_LOC_UL2        (SPH_BIT7)
#define SPH_PNW_PATH_CTRL_D2M_ENA_UL2    (SPH_BIT8)
#define SPH_PNW_PATH_CTRL_M2D_ENA_UL2    (SPH_BIT9)
#define SPH_PNW_PATH_CTRL_LOC_UL3        (SPH_BIT10)
#define SPH_PNW_PATH_CTRL_D2M_ENA_UL3    (SPH_BIT11)
#define SPH_PNW_PATH_CTRL_M2D_ENA_UL3    (SPH_BIT12)
#define SPH_PNW_PATH_CTRL_LOC_UL4        (SPH_BIT13)
#define SPH_PNW_PATH_CTRL_D2M_ENA_UL4    (SPH_BIT14)
#define SPH_PNW_PATH_CTRL_M2D_ENA_UL4    (SPH_BIT15)

#define SPH_PNW_PATH_CTRL_LOC_DL1        (SPH_BIT4)
#define SPH_PNW_PATH_CTRL_D2M_ENA_DL1    (SPH_BIT5)
#define SPH_PNW_PATH_CTRL_M2D_ENA_DL1    (SPH_BIT6)

#define SPH_PNW_STATE_OFF    0
#define SPH_PNW_STATE_ON     1
#define SPH_PNW_STATE_RDY    2

//DACA
#define DACA_UL_STATE        (SPH_BIT0 + SPH_BIT1 + SPH_BIT2 + SPH_BIT3)
#define DACA_UL_STATE_OFF    (0)
#define DACA_UL_STATE_INIT   (1)
#define DACA_UL_STATE_RUN    (2)

#define DACA_DL_STATE        (SPH_BIT4 + SPH_BIT5 + SPH_BIT6 + SPH_BIT7)
#define DACA_DL_STATE_OFF    (0<<4)
#define DACA_DL_STATE_INIT   (1<<4)
#define DACA_DL_STATE_RUN    (2<<4)

#define DACA_CTRL_BAND_NB    0
#define DACA_CTRL_BAND_WB    SPH_BIT8
#define DACA_CTRL_BAND_SWB   SPH_BIT9
#define DACA_CTRL_BAND_FB    (SPH_BIT8+SPH_BIT9)

//DSP keytone
#define SPH_KT_STA_IDLE 0x0
#define SPH_KT_STA_ON   0x1
#define SPH_KT_STA_RUN  0x2
#define SPH_KT_STA_OFF  0x3

//PCMRec
#define SPH_PCMRECCTRL_BIT_SWITCH    SPH_BIT0
#define SPH_PCMRECCTRL_BIT_DPL       SPH_BIT1

//LinkMode_3G
#define SPH_LINKMODE_3G_NONE    0x0
#define SPH_LINKMODE_3G_WCDMA   0x1
#define SPH_LINKMODE_3G_TDSCDMA 0x2

//AAMPlus
#define DSP_SPH_AAMPLUS_CTRL_BIT_SWITCH SPH_BIT0                 

//ENH par memory occupy state
#define SPH_ENH_PAROCCU_NONE    0           
#define SPH_ENH_PAROCCU_MCU     1
#define SPH_ENH_PAROCCU_DSP     2

/*-------------------------------------------------*/





#define DSP_IID_SPEECH_UL_ID	1
#define DSP_IID_SPEECH_DL_ID	2
#define DSP_IID_SPEECH_UL_ID2	3
#define DSP_IID_SPEECH_DL_ID2	4
#define DSP_IID_SPEECH_UL_ID3	10
#define DSP_IID_SPEECH_UL_ID4	11


void Set_Dsp_Bit(volatile uint16 *addr, uint8 bitn);
void Clear_Dsp_Bit(volatile uint16 *addr, uint8 bitn);

#endif
