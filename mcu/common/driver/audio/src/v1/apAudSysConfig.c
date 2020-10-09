


#if !defined(__SMART_PHONE_MODEM__)

#include "kal_public_api.h"
#include "kal_general_types.h"
#include "reg_base.h"

#include "dcl.h"

#include "afe.h"

#if defined(__ENABLE_SPEECH_DVT__)
extern kal_bool Is_Sph_DVT_BT_Mode_NB(void);
#endif // defined(__ENABLE_SPEECH_DVT__)

#define WriteREG(_addr, _value) (*(volatile kal_uint32 *)(_addr) = (_value))


// ----------------------------------------------------------------------------
// Register Definition
// ----------------------------------------------------------------------------


// #define AP_AUDSYS_BASE   0xA1220000

#define AUDIO_TOP_CON0                  (BASE_MADDR_AUDIO + 0x0000)
#define AUDIO_TOP_CON1                  (BASE_MADDR_AUDIO + 0x0004)
//#define AUDIO_TOP_CON2                  (BASE_MADDR_AUDIO + 0x0008)
#define AUDIO_TOP_CON3                  (BASE_MADDR_AUDIO + 0x000C)
#define AFE_DAC_CON0                    (BASE_MADDR_AUDIO + 0x0010)
#define AFE_DAC_CON1                    (BASE_MADDR_AUDIO + 0x0014)
#define AFE_I2S_CON                     (BASE_MADDR_AUDIO + 0x0018)
#define AFE_DAIBT_CON0                  (BASE_MADDR_AUDIO + 0x001C)
                                        
#define AP_AFE_CONN0                    (BASE_MADDR_AUDIO + 0x0020)
#define AP_AFE_CONN1                    (BASE_MADDR_AUDIO + 0x0024)
#define AP_AFE_CONN2                    (BASE_MADDR_AUDIO + 0x0028)
#define AP_AFE_CONN3                    (BASE_MADDR_AUDIO + 0x002C)
#define AP_AFE_CONN4                    (BASE_MADDR_AUDIO + 0x0030)
#define AP_AFE_CONN5                    (BASE_MADDR_AUDIO + 0x005C)
#define AP_AFE_CONN6                    (BASE_MADDR_AUDIO + 0x00BC)
#define AP_AFE_CONN9                    (BASE_MADDR_AUDIO + 0x0468)
#define AP_AFE_CONN10                   (BASE_MADDR_AUDIO + 0x046C)

#define AFE_I2S_CON1                    (BASE_MADDR_AUDIO + 0x0034)
#define AFE_I2S_CON2                    (BASE_MADDR_AUDIO + 0x0038)
#define AFE_MRGIF_CON                   (BASE_MADDR_AUDIO + 0x003C)
#define AFE_I2S_CON3                    (BASE_MADDR_AUDIO + 0x004C)

#define AFE_ADDA_DL_SRC2_CON0           (BASE_MADDR_AUDIO + 0x0108)
#define AFE_ADDA_DL_SRC2_CON1           (BASE_MADDR_AUDIO + 0x010C)
#define AFE_ADDA_UL_SRC_CON0            (BASE_MADDR_AUDIO + 0x0114)
#define AFE_ADDA_UL_SRC_CON1            (BASE_MADDR_AUDIO + 0x0118)

#define AFE_ADDA_UL_DL_CON0             (BASE_MADDR_AUDIO + 0x0124)
#define AFE_ADDA_NEWIF_CFG0             (BASE_MADDR_AUDIO + 0x0138)
#define AFE_ADDA_NEWIF_CFG1             (BASE_MADDR_AUDIO + 0x013C)


//#define AFE_SIDDETONE_MON               (BASE_MADDR_AUDIO + 0x01D4)
//#define AFE_SIDDETONE_CON0              (BASE_MADDR_AUDIO + 0x01E0)
//#define AFE_SIDDETONE_COEFF             (BASE_MADDR_AUDIO + 0x01E4)
#define AFE_SIDDETONE_CON1              (BASE_MADDR_AUDIO + 0x01E8)
//#define AFE_SIDDETONE_GAIN              (BASE_MADDR_AUDIO + 0x01EC)

#define AFE_SGEN_CON0                   (BASE_MADDR_AUDIO + 0x01F0)
#define AFE_TOP_CON0                    (BASE_MADDR_AUDIO + 0x0200)
#define AFE_GAIN1_CON0                  (BASE_MADDR_AUDIO + 0x0410)

#define AFE_GAIN1_CONN                  (BASE_MADDR_AUDIO + 0x0420)

#define AFE_GAIN2_CON0                  (BASE_MADDR_AUDIO + 0x0428)
#define AFE_GAIN2_CONN                  (BASE_MADDR_AUDIO + 0x0438)
#define AFE_GAIN2_CONN2                 (BASE_MADDR_AUDIO + 0x0440)
#define AFE_GAIN2_CONN3                 (BASE_MADDR_AUDIO + 0x0444)

#define PCM_INTF_CON1                   (BASE_MADDR_AUDIO + 0x0530)
#define PCM_INTF_CON2                   (BASE_MADDR_AUDIO + 0x0538)
#define PCM_INTF_CON                    (BASE_MADDR_AUDIO + 0x053C)
//#define FOC_ROM_SIG                     (BASE_MADDR_AUDIO + 0x0630)



// ----------------------------------------------------------------------------
// Register Setting for different scenario 
// ----------------------------------------------------------------------------


void PMIC_AudioConfig(void)
{
//For ELBRUS bring-up, loopback DL to UL by MD-AFE, and we can't control AP-AFE and PMIC.
#if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif //#if 0
}


void ApAudSys_config(void)
{
//For ELBRUS bring-up, loopback DL to UL by MD-AFE, and we can't control AP-AFE and PMIC.
#if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif //#if 0
}




#endif // !defined(__SMART_PHONE_MODEM__)


