#include "kal_public_api.h"
#include "kal_general_types.h"
#include "reg_base.h"
#include "md2g_drv.h"
#include "string.h"

#include "l1aud_common_def.h"
//#include "speech_def.h"

//m#include "l1d_reg.h"

#include "sal_dsp.h"
#include "sal_def.h"

#include "l1audio_trace.h"

#include "sal_impl.h"


#define  TQ_WRAP_COUNT                       5000


extern uint32 L1I_GetTimeStamp( void );

#if defined(MT6280)
static struct{
	bool idle_pcm_record;
}sali_legacy;
#endif


//Need to add new pattern for MT6280
static const uint16 CodecSilencePattern[][17] = {
   {  0x4820,0xD617,0x0284,0x2480,0x9249,0x8924,0x8002,0x4924,       /* FR       */
      0x2492,0x0289,0x2480,0x9249,0x8924,0x8002,0x4924,0x2492,
      0x0009                                                   },
   {  0x4E20,0x875E,0x5473,0x8482,0x00E9,0x0000,0x0000         },    /* HR       */
   {  0x7A10,0x092D,0xB55F,0x7C06,0x185C,0xDE06,0x4230,0x0103,       /* EFR      */
      0xA012,0x001A,0x0000,0x0000,0x0D6C,0x0000,0x0000,0x0000  },
   {  0x00e2,0x5dfc,0xf095,0xcd4e,0x24da,0x0e04,0xf0fb,0x4f2e,       /* AMR12.2  */
      0x4430,0x9fa8,0x0319,0x56c0,0xc144,0x0278,0x70ea,0x0004  },
   {  0xe00a,0xf2e7,0x516b,0x19a1,0xc10d,0x145a,0x4c96,0x25e0,       /* AMR10.2  */
      0x5ce6,0x17b9,0x0982,0x225d,0x00c4                       },
   {  0x033c,0xe5cd,0xd9fb,0x387f,0x420c,0x8c99,0x58d7,0x1156,       /* AMR7.95  */
      0x397f,0x1074                                            },
   {  0xe00a,0xf2e7,0x9ac5,0x4433,0x185b,0x3e05,0xdc64,0xc886,       /* AMR7.4   */
      0xcd2e,0x0000                                            },
   {  0xe00a,0xf2e7,0x7761,0x0486,0x0dd5,0xf47c,0x21b0,0xf547,       /* AMR6.7   */
      0x0002                                                   },
   {  0xe00a,0xf2e7,0xb196,0xa8ae,0xbcb7,0x6fb9,0x0193,0x002e  },    /* AMR5.9   */
   {  0x3c0a,0x7e51,0x652c,0x5e91,0xd023,0xea5a,0x005b         },    /* AMR5.15  */
   {  0x3c0a,0x3e51,0x6529,0x3a49,0x977f,0x3565                },    /* AMR4.75  */
   {0xe00a,0xf2e7,0x7761,0x0486,0x0dd5,0xf47c,0x21b0,0xf547,0x0002},    /* AMR-WB 6.60  */
   {0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000},     /* AMR-WB 6.60  */
   {0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000},     /* AMR-WB 6.60  */
   {0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000},     /* AMR-WB 6.60  */
   {0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000},     /* AMR-WB 6.60  */
   {0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000},     /* AMR-WB 6.60  */
   {0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000},     /* AMR-WB 6.60  */
   {0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000},     /* AMR-WB 6.60  */
   {0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000},     /* AMR-WB 6.60  */
   {0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000}     /* AMR-WB 6.60  */
};

static const uint8 CodecPatternLength[] = {
   (uint8)((260 + 15) / 16),           /*  FR       */
   (uint8)((112 + 15) / 16),           /*  HR       */
   (uint8)((244 + 15) / 16),           /* EFR       */
   (uint8)((244 + 15) / 16),           /* AMR 12.2K */
   (uint8)((204 + 15) / 16),           /* AMR 10.2K */
   (uint8)((159 + 15) / 16),           /* AMR 7.95K */
   (uint8)((148 + 15) / 16),           /* AMR 7.4K  */
   (uint8)((134 + 15) / 16),           /* AMR 6.7K  */
   (uint8)((118 + 15) / 16),           /* AMR 5.9K  */
   (uint8)((103 + 15) / 16),           /* AMR 5.15K */
   (uint8)(( 95 + 15) / 16),           /* AMR 4.75K */
   (uint8)((132 + 15) / 16),           /* AMR-WB 6.60  */
   (uint8)((177 + 15) / 16),           /* AMR-WB 8.85  */
   (uint8)((253 + 15) / 16),           /* AMR-WB 12.65 */
   (uint8)((285 + 15) / 16),           /* AMR-WB 14.25 */
   (uint8)((317 + 15) / 16),           /* AMR-WB 15.85 */
   (uint8)((365 + 15) / 16),           /* AMR-WB 18.25 */
   (uint8)((397 + 15) / 16),           /* AMR-WB 19.85 */
   (uint8)((461 + 15) / 16),           /* AMR-WB 23.05 */
   (uint8)((477 + 15) / 16),           /* AMR-WB 23.85 */
};

static const uint16 SphFrmLength[] = {
    (uint16) 160,   /* NB */
    (uint16) 320,   /* WB */
    (uint16) 640,   /* SWB*/
    (uint16) 960    /* FB */
};

const  uint16  DSP_2GSCH_MARGIN_TABLE[] = {
   0x38+(16<<10)+(2<<8),     /* 1.2 : FR        */
   0x38+(12<<10)+(2<<8),     /* 1.2 : HR        */
   0x38+(16<<10)+(2<<8),     /* 1.2 : EFR       */
   0x38+(16<<10)+(2<<8),     /* 1.2 : AMR 12.2  */
   0x38+(16<<10)+(2<<8),     /* 1.2 : AMR 10.2  */
   0x38+(16<<10)+(2<<8),     /* 1.2 : AMR 7.95  */
   0x38+(16<<10)+(2<<8),     /* 1.2 : AMR 7.4   */
   0x38+(16<<10)+(2<<8),     /* 1.2 : AMR 6.7   */
   0x38+(16<<10)+(2<<8),     /* 1.2 : AMR 5.9   */
   0x38+(16<<10)+(2<<8),     /* 1.2 : AMR 5.15  */
   0x38+(16<<10)+(2<<8),     /* 1.2 : AMR 4.75  */
   0x96+(16<<10)+(2<<8),     /* AMR-WB 6.60     */
   0x96+(16<<10)+(2<<8),     /* AMR-WB 8.85     */
   0x96+(16<<10)+(2<<8),     /* AMR-WB 12.65    */
   0x96+(16<<10)+(2<<8),     /* AMR-WB 14.25    */
   0x96+(16<<10)+(2<<8),     /* AMR-WB 15.85    */
   0x96+(16<<10)+(2<<8),     /* AMR-WB 18.25    */
   0x96+(16<<10)+(2<<8),     /* AMR-WB 19.85    */
   0x96+(16<<10)+(2<<8),     /* AMR-WB 23.05    */
   0x96+(16<<10)+(2<<8),     /* AMR-WB 23.85    */
};

const  uint16  DSP_2GSCH_DELAY_TABLE_SUBCH0[13][2] =
{    /*  SE      SD  */                    /*   SE  SD   */
   { (0x00B5), 0x0139 },  /* T2 = 0 /13 */ /*  4.9 12.8  */
   { (0x0090), 0x01B4 },  /* T2 = 1 /14 */ /*  3.9 11.8  */
   { (0x006B), 0x018F },  /* T2 = 2 /15 */ /*  2.9 10.8  */
   { (0x0046), 0x016A },  /* T2 = 3 /16 */ /*  1.9  9.8  */
   { (0x00C1), 0x0145 },  /* T2 = 4 /17 */ /*  5.2 13.1  */
   { (0x009C), 0x01C0 },  /* T2 = 5 /18 */ /*  4.2 12.1  */
   { (0x0077), 0x019B },  /* T2 = 6 /19 */ /*  3.2 11.1  */
   { (0x0052), 0x0176 },  /* T2 = 7 /20 */ /*  2.2 10.1  */
   { (0x002D), 0x0151 },  /* T2 = 8 /21 */ /*  1.2 13.5  */
   { (0x00A8), 0x01CC },  /* T2 = 9 /22 */ /*  4.5 12.5  */
   { (0x0083), 0x01A8 },  /* T2 = 10/23 */ /*  3.5 11.5  */
   { (0x005E), 0x0183 },  /* T2 = 11/24 */ /*  2.5 10.5  */
   { (0x0039), 0x015E }   /* T2 = 12/25 */ /*  1.5 13.8  */
};

const  uint16  DSP_2GSCH_DELAY_TABLE_SUBCH1[13][2] =
{      /*  SE      SD  */                       /*   SE  SD   */
   { (0x00B5)+0x25, 0x0139 },  /* T2 = 0 /13 */ /*  4.9 12.8  */
   { (0x0090)+0x25, 0x01B4 },  /* T2 = 1 /14 */ /*  3.9 11.8  */
   { (0x006B)+0x25, 0x018F },  /* T2 = 2 /15 */ /*  2.9 10.8  */
   { (0x0046)+0x25, 0x016A },  /* T2 = 3 /16 */ /*  1.9  9.8  */
   { (0x00C1)+0x25, 0x0145 },  /* T2 = 4 /17 */ /*  5.2 13.1  */
   { (0x009C)+0x25, 0x01C0 },  /* T2 = 5 /18 */ /*  4.2 12.1  */
   { (0x0077)+0x25, 0x019B },  /* T2 = 6 /19 */ /*  3.2 11.1  */
   { (0x0052)+0x25, 0x0176 },  /* T2 = 7 /20 */ /*  2.2 10.1  */
   { (0x002D)+0x25, 0x0151 },  /* T2 = 8 /21 */ /*  1.2 13.5  */
   { (0x00A8)+0x25, 0x01CC },  /* T2 = 9 /22 */ /*  4.5 12.5  */
   { (0x0083)+0x25, 0x01A8 },  /* T2 = 10/23 */ /*  3.5 11.5  */
   { (0x005E)+0x25, 0x0183 },  /* T2 = 11/24 */ /*  2.5 10.5  */
   { (0x0039)+0x25, 0x015E }   /* T2 = 12/25 */ /*  1.5 13.8  */
};



static struct{

uint8 device;
uint16 device_band;
uint8 enc_mod;
uint8 dec_mod;
uint32 app_type;
uint8 sub_channel;
uint8 dtx;
uint32 ho_fn;
bool fwe;
bool fwe_ul;
bool fwe_dl;
bool resync_8k;
bool vbiend_fsm;
}sal_impl;


static CUIF_Speech_Region_t *SphCUIF;
static EXT_CUIF_Speech_Region_t *SphEXTCUIF;

uint16 SALI_Get_Codec_Length( uint8 codec )
{
   if( codec >= 0x20 )
      codec = codec - 0x20 + 0x0B;
   if( codec < (sizeof(CodecPatternLength)/sizeof(CodecPatternLength[0])))
      return (uint16)CodecPatternLength[codec];
   else
      return 0;
}


uint16 SALI_Get_Codec_FrmSize( uint8 codec )
{
    if((codec >= SAL_COD_EVSMIN && codec <= SAL_COD_EVSMAX))
    {
        if( SphCUIF->tCodEVS.PCMBW < (sizeof(SphFrmLength)/sizeof(SphFrmLength[0])))
            return (uint16)SphFrmLength[SphCUIF->tCodEVS.PCMBW];
        else
            return 640;
    }
    else if( (codec >= SAL_COD_AWB660 && codec <= SAL_COD_AWB2385)
        || (codec == SAL_COD_EVRCNW_WB)
    )
    {
        return 320;
    }
    else
    {
    	return 160;
    } 
}


void SALI_Fill_Enc_Silence( uint8 app_type, uint16 codec )
{
    
   const uint16 *pat_info;
   volatile uint16 *addr = 0;
   uint32 I, len;

	if(app_type == SAL_APP_TYPE_2GCall)
		addr = SPH2G_SE_DATA_HB;
	else if(app_type == SAL_APP_TYPE_3GCall)
		addr = SphCUIF->tSchCod.CodHB_UL;
	else
		ASSERT(0);
   
   if( codec >= 0x20 )
      codec = codec - 0x20 + 0x0B;

   if( codec >= (sizeof(CodecPatternLength)/sizeof(CodecPatternLength[0])) )
      return;

   pat_info = CodecSilencePattern[codec];
   len = (uint16)CodecPatternLength[codec];

  // *addr++ = 2;
  
   
   for( I = 0; I < len; I++ )
   {
      *addr++ = *pat_info++;
      if(app_type == SAL_APP_TYPE_2GCall)
        addr++;
   }
}

void SALI_Set_2G_Sch_Delay(uint8 codec_mod, uint8 subchannel, uint32 tch_state)
{
	uint16 n = 0;
	uint16 delay = 0;
	uint16 delR, delW, delM;

	sal_impl.sub_channel = subchannel;
	
   if (tch_state == 1)
   {
      	n = (uint16)L1D_GetT2();
      	delay = L1D_Get_Win_TQ_WRAP() - TQ_WRAP_COUNT ;
   }
	
   if( n >= 13 )
      n -= 13;
      
   if (tch_state==0)
   {
   	  L1Audio_Msg_SAL_SET_VALUE_MULTI(SAL_DSP_VALUE_NAME(19), tch_state, n, SAL_UNKNOWN, SAL_UNKNOWN, SAL_UNKNOWN);
   		n = 0;
   }

   if ( n >= 13 || n < 0)
   {
   	   L1Audio_Msg_SAL_SET_VALUE_MULTI(SAL_DSP_VALUE_NAME(19), tch_state, n, SAL_UNKNOWN, SAL_UNKNOWN, SAL_UNKNOWN);
   	   n = 0; 
   }
   //MT6280, wayne, what is this for?? the speech mode num should be 3+8+9=20
   if (codec_mod>=0x20)
      codec_mod-=(0x20-0x0B);

   ASSERT(codec_mod<(sizeof(DSP_2GSCH_MARGIN_TABLE)/sizeof(DSP_2GSCH_MARGIN_TABLE[0])));
   {
      if (subchannel == 0)
      {
         delR = DSP_2GSCH_DELAY_TABLE_SUBCH0[n][0];
         delW = DSP_2GSCH_DELAY_TABLE_SUBCH0[n][1];
      }
      else
      {
         delR = DSP_2GSCH_DELAY_TABLE_SUBCH1[n][0];
         delW = DSP_2GSCH_DELAY_TABLE_SUBCH1[n][1];
         n += 13;
      }
      L1Audio_Msg_AM_DELAY_TABLE( n );
         delM = DSP_2GSCH_MARGIN_TABLE[codec_mod];		 
   }
   SALI_Set_Sch_Delay(delR, delW, delM, delay, SAL_UNKNOWN);
}

void SALI_Set_2G_Handover()
{
            uint32 fn = L1I_GetTimeStamp();
#if defined( NOT_HANDOVER_IN_SHORT_TIME )
            if( ( fn - sal_impl.ho_fn ) > 13 )//(0x1CC / 8) / 4.615 + 1 = 12.45
            /*do not set handover flag to work around DSP bug */
#endif

            SphCUIF->tSchLink.HOCtrl |= SPH_HOCTRL_BIT_2G_HO;
			L1Audio_Msg_SAL_SET_VALUE_MULTI(SAL_DSP_VALUE_NAME(6), (fn - sal_impl.ho_fn)>13, SphCUIF->tSchLink.HOCtrl, (uint16)(fn>>16), (uint16)fn, SAL_UNKNOWN);
			sal_impl.ho_fn = fn;
}

void SALI_Set_Sch_Delay(uint16 delR, uint16 delW, uint16 delM_DL, uint16 delO, uint16 delM_UL)
{
    
    SphCUIF->tSchLink.DelR = delR;
    SphCUIF->tSchLink.DelW = delW;
    
    SphCUIF->tSchLink.DelM_DL = (delM_DL&0xff); //2G-modem doesn't use MSB of delM anymore
    SphCUIF->tSchLink.DelM_UL = delM_UL;
    SphCUIF->tSchLink.DelO = delO;
     
   	L1Audio_Msg_SAL_SET_VALUE_MULTI(SAL_DSP_VALUE_NAME(3), delR, delW, delM_DL, delO, delM_UL);
}


void SALI_Set_Device(uint8 dev, uint16 band)
{
sal_impl.device = dev;
sal_impl.device_band = band;

}

void SALI_Config_SRC(uint8 apptype, bool isWB)
{

    SALI_Set_Sph_Dev_Mod();
    
   //L1Audio_Msg_SAL_SET_VALUE(SAL_DSP_VALUE_NAME(4), *DSP_SPH_8K_CTRL);
   
}


void SALI_Enable_Codec(uint16 enc_mod, uint16 dec_mod)
{
	sal_impl.enc_mod = enc_mod;
	sal_impl.dec_mod = dec_mod;
    SphCUIF->tSchCod.CodMode_UL = enc_mod;
    SphCUIF->tSchCod.CodMode_DL = dec_mod;       

    SphCUIF->tSchCod.CodMainCtrl_UL |= (SPH_COD_CTR_RUN);
    SphCUIF->tSchCod.CodMainCtrl_DL |= (SPH_COD_CTR_RUN);
    

}

void SALI_Disable_Codec()
{
    SphCUIF->tSchCod.CodMainCtrl_UL &= ~(SPH_COD_CTR_RST + SPH_COD_CTR_RUN);
    SphCUIF->tSchCod.CodMainCtrl_DL &= ~(SPH_COD_CTR_RST + SPH_COD_CTR_RUN);
}

//ToDo:
//fsju
void SALI_Enable_Update_Codec_Now()
{
//   // force update codec immediately
//   *DSP_SPH_COD_CTRL |= 0xC000;
}

//ToDo:
//fsju
void SALI_Disable_Update_Codec_Now()
{
//   // do not update codec immediately
//   *DSP_SPH_COD_CTRL &= 0x3FFF;
}

//ToDo:if needed in 93?
void SALI_Set_DSH(bool on)
{
//	if(on)
//		*DSP_SPH_SCH_IMPROVE_CTRL &= ~0x0100;
//	else
//		*DSP_SPH_SCH_IMPROVE_CTRL |=  0x0100;

}


void SALI_LBK_Codec(bool on)
{
	if(on)
		SphCUIF->tSchCom.DebugMode |= SAL_DSP_DBGMODE_SFP_HB_U2D;		
	else
		SphCUIF->tSchCom.DebugMode &= ~(SAL_DSP_DBGMODE_SFP_HB_U2D);

}


void SALI_3G_SetDtx(bool on)
{
	sal_impl.dtx = on;
	
	if(on)
		SphCUIF->tSchCod.CodMainCtrl_UL |= SPH_COD_CTR_DTX;
	else
		SphCUIF->tSchCod.CodMainCtrl_UL &= ~SPH_COD_CTR_DTX;
}

void SALI_Upd_3G_Enc_Rate(uint16 enc_mod)
{
	L1Audio_Msg_SAL_SET_VALUE(SAL_DSP_VALUE_NAME(0), enc_mod);
	SphCUIF->tSchLink.SERate_3G = enc_mod;
}

void SALI_Upd_3G_Dec_Rate(uint16 dec_mod)
{
	L1Audio_Msg_SAL_SET_VALUE(SAL_DSP_VALUE_NAME(1), dec_mod);
	SphCUIF->tSchLink.SDRate_3G = dec_mod;
}

void SALI_Set_3G_TxType(uint16 tx_type)
{
	SphCUIF->tSchCod.CodHdr_UL = tx_type & 0x3;
}

void SALI_Set_3G_RxType(uint16 rx_type)
{
    
	SphCUIF->tSchCod.CodHdr_DL = rx_type & 0xE;
}
uint16 SALI_3G_GetValue(uint16 type)
{
	uint16 val = 0;
	
	switch(type)
	{
	case SAL_3G_VALUE_TX_CODEC_MODE:
		val = SphCUIF->tSchVM.CodUsedMode_UL;
		break;
	case SAL_3G_VALUE_RX_CODEC_MODE:
		val = SphCUIF->tSchVM.CodUsedMode_DL;
		break;
	case SAL_3G_VALUE_TX_TYPE:
		val = (SphCUIF->tSchCod.CodHdr_UL) & 0x3;
		break;
	case SAL_3G_VALUE_RX_TYPE:
		val = (SphCUIF->tSchCod.CodHdr_DL) & 0xE;//no need to shif right back 
		break;
	
	default:
		ASSERT_REBOOT(0);
	}

	return val;
}

volatile uint16* SALI_3G_GetAddr(uint16 type)
{
	volatile uint16* addr = 0;



	switch(type)
	{
	case SAL_3G_ADDR_TXHB:
		addr = SphCUIF->tSchCod.CodHB_UL;
		break;
	case SAL_3G_ADDR_RXHB:
		addr = SphCUIF->tSchCod.CodHB_DL;
		break;

	default:
		ASSERT_REBOOT(0);

	}

	return addr;
}

//ul_dl @ 0 : ul, 1 : dl
bool SALI_3G_CheckDataSync(uint8 ul_dl)
{
	bool bval = false;

	if(ul_dl == 0)
		bval = (SphCUIF->tSchLink.SphMdmSyncStatus_3G & 0x1) > 0;//ul is ready
	else if(ul_dl == 1)
		bval = (SphCUIF->tSchLink.SphMdmSyncStatus_3G & 0x2) == 0;//dl is cleaned by dsp
	else ASSERT_REBOOT(0);

	return bval;

}

//ready @ true : ready, false : empty
void SALI_3G_SetDataStatus(uint8 ul_dl, bool ready)
{
	if(ul_dl == 0){
		if(ready)
			SphCUIF->tSchLink.SphMdmSyncStatus_3G |= 0x1;
		else
			SphCUIF->tSchLink.SphMdmSyncStatus_3G &= 0xFFFE;			
	}
	else if(ul_dl == 1){
		if(ready)
			SphCUIF->tSchLink.SphMdmSyncStatus_3G |= 0x2;
		else
			SphCUIF->tSchLink.SphMdmSyncStatus_3G &= 0xFFFD;			
	}
	else
		ASSERT_REBOOT(0);
}

void SALI_3G_SetULUnsync()
{
	SphCUIF->tSchLink.SphMdmSyncStatus_3G |= 0x10;
}

void SALI_AppSpec_Control(uint8 app_type, uint8 on)
{

	if(app_type == SAL_APP_TYPE_2GCall){
		if(on)
            SphCUIF->tSchCom.SphAppMode = SPH_APP_MODE_CALL_2G;
		else
            SphCUIF->tSchCom.SphAppMode = SPH_APP_MODE_NONE;
	}
	
	if(app_type == SAL_APP_TYPE_3GCall){
		if(on)
			SphCUIF->tSchCom.SphAppMode = SPH_APP_MODE_CALL_3G;
		else
			SphCUIF->tSchCom.SphAppMode = SPH_APP_MODE_NONE;
	}

	if(app_type == SAL_APP_TYPE_4GCall){
		if(on)
			SphCUIF->tSchCom.SphAppMode = SPH_APP_MODE_CALL_4G;
		else
			SphCUIF->tSchCom.SphAppMode = SPH_APP_MODE_NONE;
	}
	
	if(app_type == SAL_APP_TYPE_C2KCall){
		if(on)
			SphCUIF->tSchCom.SphAppMode = SPH_APP_MODE_CALL_C2K;
		else
			SphCUIF->tSchCom.SphAppMode = SPH_APP_MODE_NONE;
	}
	
	if(app_type == SAL_APP_TYPE_PCM_Router){
		if(on)
			SphCUIF->tSchCom.SphAppMode = SPH_APP_MODE_PCM_ROUTER;
		else
			SphCUIF->tSchCom.SphAppMode = SPH_APP_MODE_NONE;
	}
	if(app_type == SAL_APP_TYPE_Standby){
		if(on)
			SphCUIF->tSchCom.SphAppMode = SPH_APP_MODE_STANDBY;
		else
			SphCUIF->tSchCom.SphAppMode = SPH_APP_MODE_NONE;
	}
}


void SALI_Set_3G(bool on)
{
    //ToDo: if needed in 93?
//	if(on)
//		*DSP_SPH_3G_CTRL = 1;
//	else
//		*DSP_SPH_3G_CTRL = 0;
}

void SALI_Set_3GLinkMode(uint16 LinkMode)
{
    switch(LinkMode)
    {
        case SAL_3GLINK_MODE_WCDMA:
            SphCUIF->tSchLink.LinkMode_3G = SPH_LINKMODE_3G_WCDMA;
            break;
        
        case SAL_3GLINK_MODE_TDSCDMA:
            SphCUIF->tSchLink.LinkMode_3G = SPH_LINKMODE_3G_TDSCDMA;
            break;
        
        case SAL_3GLINK_MODE_NONE:
            SphCUIF->tSchLink.LinkMode_3G = SPH_LINKMODE_3G_NONE;
            break;
        
        default:
            SphCUIF->tSchLink.LinkMode_3G = SPH_LINKMODE_3G_NONE;
            break;            
    }
}

//ToDo: if needed in 93?
bool SALI_Check_3G()
{
	bool val = false;
	
	if(SphCUIF->tSchCom.SphAppMode == SPH_APP_MODE_CALL_3G)
		val = true;	

	return val;
}

void  SALI_VBI_Reset()          
{ 
    SphCUIF->tSchCom.SphC2UTask = 0;
    CUIF_SPEECH_SWI_SW(CUIF_C2U_SPEECH_SRST);
    L1Audio_Msg_VBI_RESET(); 
}

void  SALI_VBI_End()
{ 
    SphCUIF->tSchCom.SphC2UTask = 1;
    CUIF_SPEECH_SWI_SW(CUIF_C2U_SPEECH_SEND);
    L1Audio_Msg_VBI_END(); 
}

void  SALI_VBI_End_FSM()
{ 
    SphCUIF->tSchCom.SEnd_State = 1;
    CUIF_SPEECH_SWI_SW(CUIF_C2U_SPEECH_FSM_SEND);
    L1Audio_Msg_VBI_END(); 
}


void SALI_VM_Upd_Enc_Used(uint16 codec)	
{
    
	SphCUIF->tSchVM.CodUsedMode_UL = codec;
}


void SALI_Bgsnd_Switch(bool on)
{
	if(on)
		SphCUIF->tSchBGS.BGSCtrl = 1;//initialize
	else
		SphCUIF->tSchBGS.BGSCtrl = 3;//finalize
}

bool SALI_Bgsnd_IsRunning()
{
	if(SphCUIF->tSchBGS.BGSCtrl == 2)
		return true;
	else
		return false;
}

bool SALI_Bgsnd_IsOFF()
{
	if(SphCUIF->tSchBGS.BGSCtrl == 0)
		return true;
	else
		return false;
}

void SALI_Bgsnd_Config(uint16 ulgain, uint16 dlgain, bool ulmix, bool dlmix)
{
    SphCUIF->tSchBGS.BGSMixCtrl = (ulmix << 1) | dlmix;    
    SphCUIF->tSchBGS.BGSGain_UL = ulgain;
    SphCUIF->tSchBGS.BGSGain_DL = dlgain;
}


//ul_dl @ 0 : ul, 1 : dl
volatile uint16* SALI_Bgsnd_GetBuf(uint8 ul_dl)
{
	volatile uint16* ptr;
	if(ul_dl == 0)
    	ptr = (uint16*)SphEXTCUIF->tSchBGS.BGSBuf_UL;
	else
	    ptr = (uint16*)SphEXTCUIF->tSchBGS.BGSBuf_DL;
	
	return ptr;
}
//ul_dl @ 0 : ul, 1 : dl
uint16 SALI_Bgsnd_GetDataLen(uint8 ul_dl)
{
	uint16 len;
	if(ul_dl == 0)
		len = SphCUIF->tSchBGS.BGSLen_UL;
	else
		len = SphCUIF->tSchBGS.BGSLen_DL;
	return len;
}

void SALI_Init()
{
    SphCUIF = SPEECH_CUIF_REGION;
    SphEXTCUIF = SPEECH_EXT_CUIF_REGION;
	sal_impl.ho_fn = 0;

//	*DSP_SPH_HR_FR_CTRL = 0x0E;
//	*DSP_SPH_SCH_IMPROVE_CTRL |= 0x4405;
//
#if _SAL_DUALMIC_SUPPORT_
    SphCUIF->tSchDev.Mic2Ctrl |= 0x0001;
#endif 
#if _SAL_MIC3_SUPPORT_
    SphCUIF->tSchDev.Mic3Ctrl |= 0x0001;
#endif       
#if _SAL_MIC4_SUPPORT_    
    SphCUIF->tSchDev.Mic4Ctrl |= 0x0001;
#endif   
  sal_impl.resync_8k = true;//DSP allways supports, real control from L1's gps co-clock feature
//
//#if (defined(MT6280) || defined(MT6589) || defined(MT6572) || defined(MT6582) || defined(MT6592) || defined(MT6571)) || defined(MT6290) || defined(MT6595) || defined(TK6291) || defined(MT6755) || defined(ELBRUS)
	sal_impl.fwe = true;
	sal_impl.fwe_ul = true;
	sal_impl.fwe_dl = true;
//	#else
//	//turn off fwe for sample back
//	sal_impl.fwe_ul = false;
//	sal_impl.fwe_dl = false;
//	sal_impl.fwe = false;
//	#endif
//
//#if defined(__ENABLE_SPEECH_DVT__)
//    extern kal_bool Is_Sph_DVT_Enable_FWE(void);
//    if (Is_Sph_DVT_Enable_FWE())
//    {
//        sal_impl.fwe = true;
//	    sal_impl.fwe_ul = true;
//	    sal_impl.fwe_dl = true;
//	    sal_impl.resync_8k = false;
//    }
//    else
//    {
//        sal_impl.fwe_ul = false;
//	    sal_impl.fwe_dl = false;
//	    sal_impl.fwe = false;
//	    sal_impl.resync_8k = false;
//    }
//#endif // defined(__ENABLE_SPEECH_DVT__)
//
//	#if (defined(MT6280) || defined(MT6589))
//		if(sal_impl.fwe)
//   			*DSP_SPH_SCH_IMPROVE_CTRL |= 0x8000;
//   		else
//			*DSP_SPH_SCH_IMPROVE_CTRL &= ~0x8000;
//	#else
//		if(sal_impl.resync_8k)
//   			*DSP_SPH_SCH_IMPROVE_CTRL |= 0x8000;
//   		else
//			*DSP_SPH_SCH_IMPROVE_CTRL &= ~0x8000;		
//		if(sal_impl.fwe_ul)
//   			*DSP_SPH_SCH_IMPROVE_CTRL |= 0x0010;
//   		else
//			*DSP_SPH_SCH_IMPROVE_CTRL &= ~0x0010;		
//		if(sal_impl.fwe_dl)
//   			*DSP_SPH_SCH_IMPROVE_CTRL |= 0x0020;
//   		else
//			*DSP_SPH_SCH_IMPROVE_CTRL &= ~0x0020;		
//	#endif
//
//	*DSP_SPH_DEBUG_ASSERT_CTRL |= 0x0020;
//	
//	//Workaround for FTA case [FTA][CRTU-G]TC_26.16.4_1_1 fail while 2g modem Tx unsync with speech
//	//2g modem will fix this on MT6571 and later chips
//	#if defined(MT6280) || defined(MT6589) || defined(MT6572) || defined(MT6582) || defined(MT6592) || defined(MT6290) || defined(MT6595)  || defined(TK6291) || defined(MT6755) || defined(ELBRUS)
//	SALI_Fill_Enc_Silence(SAL_APP_TYPE_2GCall, 0);
//	#endif	

        SphCUIF->tSchCom.SchBand = SPH_SCH_BAND_SWB;

		SALI_C2K_TTY_Switch(false);
		SALI_C2K_SetTTYStatus(false, false);
		SALI_C2K_SetDataStatus(0,false);
		SALI_C2K_SetDataStatus(1,false);
		SALI_C2K_COD_Feature_Switch(SAL_C2K_COD_FEATURE_POS_FLT,true);
		SALI_C2K_COD_Feature_Switch(SAL_C2K_COD_FEATURE_PITCH_PRE_FLT,true);
		SALI_C2K_SetValue(SAL_C2K_ENC_MAX_RATE,SAL_C2K_RATE_FULL);
		SALI_C2K_SetValue(SAL_C2K_SOCM_QCELP13K,0);
		SALI_C2K_SetValue(SAL_C2K_SOCM_EVRCA,0);    
		SALI_C2K_SetValue(SAL_C2K_SOCM_EVRCB,0);
		SALI_C2K_SetValue(SAL_C2K_SOCM_EVRCNW_NB,0x20);
		SALI_C2K_SetValue(SAL_C2K_SOCM_EVRCNW_WB,0);
//	#if defined(MT6755) || defined(MT6757) || defined(MT6797) || defined(MT6750) || defined(ELBRUS) || defined(MT6799) || defined(MT6759)
//		SALI_SCH_Feature_Switch(SAL_SCH_FEATURE_SDSP_CONFIG_DEL_RW,true);
//		SALI_SCH_Feature_Switch(SAL_SCH_FEATURE_C2K_SMR,true);
//	#endif

    sal_impl.vbiend_fsm = false;
}


void SALI_Set_Sph_Dev_Mod()
{
    uint8 dev = sal_impl.device;
    
    SphCUIF->tSchDev.DevBand = sal_impl.device_band;
    
    switch(dev)
    {        
        case SAL_DEV_NORMAL:
            SphCUIF->tSchDev.DevMode = SPH_DEV_MODE_HST;
            //SphCUIF->tSchDev.DevBand = SPH_DEV_BAND_SWB;
            break;
            
        case SAL_DEV_EARPHONE:
            SphCUIF->tSchDev.DevMode = SPH_DEV_MODE_EPN;
            //SphCUIF->tSchDev.DevBand = SPH_DEV_BAND_SWB;
            break;
            
        case SAL_DEV_LOUDSPK:
            SphCUIF->tSchDev.DevMode = SPH_DEV_MODE_LSPK;
            //SphCUIF->tSchDev.DevBand = SPH_DEV_BAND_SWB;
            break;
            
        case SAL_DEV_BT_EARPHONE_NB:
            SphCUIF->tSchDev.DevMode = SPH_DEV_MODE_BTEPN;
            //SphCUIF->tSchDev.DevBand = SPH_DEV_BAND_NB;
            break;  
            
        case SAL_DEV_BT_EARPHONE_WB:
            SphCUIF->tSchDev.DevMode = SPH_DEV_MODE_BTEPN;
            //SphCUIF->tSchDev.DevBand = SPH_DEV_BAND_WB;
            break;  
            
        case SAL_DEV_BT_CORDLESS:
            SphCUIF->tSchDev.DevMode = SPH_DEV_MODE_BTCORD;
            //SphCUIF->tSchDev.DevBand = SPH_DEV_BAND_SWB;
            break;
            
        default:
            ASSERT_REBOOT(0);
            
    }

}

volatile uint16* SALI_GetFltCoefAddr(uint8 type)
{
	volatile uint16* addr = 0;
//ToDo:	
	addr = SphCUIF->tSALTemp.DummyBuf;
	
	switch(type)
	{
		case SALI_FLTCOEF_TYPE_SIDETONE:
			addr = SphCUIF->tSALTemp.DummyBuf;//0x142 - 0x153 len:18
			break;
		case SALI_FLTCOEF_TYPE_BKF_NB_UL:
			addr = (uint16*)SphEXTCUIF->tEnhCom.CompenFlt_NB_Coef;//MT6280, 0161-018D len = 45
			break;
		case SALI_FLTCOEF_TYPE_BKF_NB_DL:
			addr = (uint16*)(&(SphEXTCUIF->tEnhCom.CompenFlt_NB_Coef[90]));//MT6280, 018E-01BA len = 45
			break;
		case SALI_FLTCOEF_TYPE_BKF_WB_UL:
			addr = (uint16*)SphEXTCUIF->tEnhCom.CompenFlt_WB_Coef;//01BB-0214, length = 90
			break;
		case SALI_FLTCOEF_TYPE_BKF_WB_DL:
			addr = (uint16*)(&(SphEXTCUIF->tEnhCom.CompenFlt_WB_Coef[90]));//0215-026E, length = 90
			break;
	    case SALI_FLTCOEF_TYPE_BKF_SWB_UL:
			addr = (uint16*)SphEXTCUIF->tEnhCom.CompenFlt_SWB_Coef;
			break;
		case SALI_FLTCOEF_TYPE_BKF_SWB_DL:
			addr = (uint16*)(&(SphEXTCUIF->tEnhCom.CompenFlt_SWB_Coef[90]));
			break;
		case SALI_FLTCOEF_TYPE_SRC:
			addr = SphCUIF->tSALTemp.DummyBuf;
			break;	
		case SALI_FLTCOEF_TYPE_SRC_IIR:
		    addr = SphCUIF->tSALTemp.DummyBuf;
			break;
        case SALI_FLTCOEF_TYPE_AGC:
        	addr = (uint16*)SphEXTCUIF->tEnhCom.AGC_HPFlt_Coef;//DSP_PM_ADDR(3, *DSP_SPH_FLT_COEF_ADDR_SRC) + SAL_FLTCOEFLEN_SRC;
        	break;	
		case SALI_FLTCOEF_TYPE_DMNR_NB:
			addr = (uint16*)SphEXTCUIF->tEnhCom.DMNR_NB_Cal_Data;
			break;
		case SALI_FLTCOEF_TYPE_DMNR_WB:
			addr = (uint16*)SphEXTCUIF->tEnhCom.DMNR_WB_Cal_Data;
			break;
		case SALI_FLTCOEF_TYPE_NOTCH:
			addr = SphCUIF->tSALTemp.DummyBuf;
			break;
		case SALI_FLTCOEF_TYPE_FS:
			//addr = DSP_PM_ADDR(3, *DSP_SPH_PM_ADDR_FS_FLT_COEF);//0480-049F, length = 32
			addr = (uint16*)SphEXTCUIF->tEnhCom.MicSelectionIIR_UL_Coef;
			break;
	    case SALI_FLTCOEF_TYPE_SRCPLUS:
		    addr = SphCUIF->tSALTemp.DummyBuf;
			break;
		case SALI_FLTCOEF_TYPE_SRCPLUS_SWB:
			addr = SphCUIF->tSALTemp.DummyBuf;
			break;
		case SALI_FLTCOEF_TYPE_DMNR_SWB:
			addr = (uint16*)SphEXTCUIF->tEnhCom.DMNR_SWB_Cal_Data;
			break;
		case SALI_FLTCOEF_TYPE_DMNR_LSPK_NB:
			addr = (uint16*)SphEXTCUIF->tEnhCom.DMNR_LSpk_NB_Cal_Data;
			break;						
		case SALI_FLTCOEF_TYPE_DMNR_LSPK_WB:
			addr = (uint16*)SphEXTCUIF->tEnhCom.DMNR_LSpk_WB_Cal_Data;;
			break;												
		case SALI_FLTCOEF_TYPE_DMNR_LSPK_SWB:
			addr = (uint16*)SphEXTCUIF->tEnhCom.DMNR_LSpk_SWB_Cal_Data;;
			break;	
default:
				ASSERT_REBOOT(0);
            break;
	}

	return addr;
}




void SALI_BKF_Switch(bool ul, bool dl)
{
//	if(ul)
//		*DSP_SPH_COMPEN_BLOCK_FILTER |= 0x0001;
//	else
//		*DSP_SPH_COMPEN_BLOCK_FILTER &= ~0x0001;
//
//	if(dl)
//		*DSP_SPH_COMPEN_BLOCK_FILTER |= 0x0002;
//	else
//		*DSP_SPH_COMPEN_BLOCK_FILTER &= ~0x0002;
	
}

//static volatile uint16* sali_get_enh_ctrl(uint8 enh_mod)
//{
//	volatile uint16* sheriff = 0;
//
//	switch(enh_mod){
//		case SAL_ENH_AEC:
//			sheriff = DSP_SPH_EES_CTRL;
//			break;
//		case SAL_ENH_NR_UL:
//			sheriff = DSP_SPH_NR_CTRL;
//			break;	
//		case SAL_ENH_NR_DL:
//			sheriff = DSP_SPH_DL_NR_CTRL;
//			break;	
//		case SAL_ENH_TDNC:
//			sheriff = DSP_SPH_TDNC_CTRL;
//			break;
//		case SAL_ENH_DMNR:
//			sheriff = DSP_SPH_DMNR_CTRL;
//			break;
//	default:
//		ASSERT_REBOOT(false);
//	}
//
//    sheriff = SphCUIF->tSALTemp.DummyBuf;
//    
//	return sheriff;
//
//}

void SALI_ENH_Switch(uint8 enh_mod, bool on)
{
//	volatile uint16* sheriff;
//	uint16 val;
//
//	sheriff = (volatile uint16*)sali_get_enh_ctrl(enh_mod);
//	val = *sheriff;
//	val &= 0xfffc;
//
//	if(on)
//		*sheriff = val | 0x0001;//init
//	else
//		*sheriff = val | 0x0003;//off

}


bool SALI_ENH_IsReady(uint8 enh_mod)
{
//	volatile uint16* sheriff;
//	uint16 val;
//
//	sheriff = (volatile uint16*)sali_get_enh_ctrl(enh_mod);
//	val = *sheriff;
//	val &= 0x0003;
//	
//	if(val == 2)
//		return true;
//	else
		return false;
}

bool SALI_ENH_IsIdle(uint8 enh_mod)
{
//	volatile uint16* sheriff;
//	uint16 val;
//
//	sheriff = (volatile uint16*)sali_get_enh_ctrl(enh_mod);
//	val = *sheriff;
//	val &= 0x0003;
//	
//	if(*sheriff == 0)
//		return true;
//	else
		return false;
}

bool SALI_ENH_ParUpdPState_IsIdle()
{
    if(SphCUIF->tSchEnh.ParUpdState & SPH_BIT0)
        return false;
    
    return true;       
}

void SALI_ENH_ParUpdState_SetUpd()
{
    SphCUIF->tSchEnh.ParUpdState |= SPH_BIT0;
}

bool SALI_ENH_CtrlUpdPState_IsIdle()
{
    if(SphCUIF->tSchEnh.CtrlUpdState & SPH_BIT0)
        return false;
    
    return true;       
}

void SALI_ENH_CtrlUpdState_SetUpd()
{
    SphCUIF->tSchEnh.CtrlUpdState |= SPH_BIT0;
}

void sali_enh_toberemovedtodsp()
{
//	*DSP_SPH_UL_COMFORT_NOISE_THRESHOLD = 32;
//	*DSP_SPH_UL_COMFORT_NOISE_SHIFT = (uint16)-12;
}

//ul_dl : 0 -> ul, 1 -> dl
void SALI_ENH_PathEnable(uint8 ul_dl, bool on)
{
	sali_enh_toberemovedtodsp();

	if(ul_dl == 0)	{
		if(on)
			SphCUIF->tSchEnh.EnhMainCtrl_UL |= SPH_BIT0;
		else
			SphCUIF->tSchEnh.EnhMainCtrl_UL &= ~SPH_BIT0;
	}
	else if(ul_dl == 1){
		if(on)
			SphCUIF->tSchEnh.EnhMainCtrl_DL |= SPH_BIT0;
		else
			SphCUIF->tSchEnh.EnhMainCtrl_DL &= ~SPH_BIT0;
	}
	else
		ASSERT_REBOOT(false);
			
}

void SALI_ENH_FeaEnable(uint8 enh_mod, bool on)
{
    volatile uint16* enh_switch;
    
	switch(enh_mod){	
		case SAL_ENH_TDNC:
			enh_switch = &(SphCUIF->tEnhCom.TDNCCtrl);
			break;
		case SAL_ENH_DMNR:
			enh_switch = &(SphCUIF->tEnhCom.DMNRCtrl);
			break;
		case SAL_ENH_MAGICCONFERENCE:
			enh_switch = &(SphCUIF->tEnhCom.MgicConferencCtrl);
			break;
	    case SAL_ENH_EXTECHOREF:
	        enh_switch = &(SphCUIF->tEnhCom.ExtEchoRef_Switch);
	        break;
	default:
		ASSERT_REBOOT(false);
	}
	if(on)
	    *enh_switch = 0x1;
	else
	    *enh_switch = 0x0;
}

void SALI_ENH_SetMainSwitch(bool on)
{
    if(on)
        SphCUIF->tSchEnh.EnhMainCtrl = 1;
    else
        SphCUIF->tSchEnh.EnhMainCtrl = 0;
        
    
}

void SALI_ENH_Dynamic_Ctrl(bool on, Sal_Enh_Dynamic_t fea)
{
//	if(on)
//		*DSP_SPH_ENH_DYMANIC_SWITCH |= (1 << fea);
//	else
//		*DSP_SPH_ENH_DYMANIC_SWITCH &= ~(1 << fea);
//
//	//L1Audio_Msg_SAL_SET_VALUE_MULTI(SAL_DSP_VALUE_NAME(5), on, fea, *DSP_SPH_ENH_DYMANIC_SWITCH, SAL_UNKNOWN, SAL_UNKNOWN);
}

void SALI_ENH_Gain_Set_DL(uint16 val)
{
	SphCUIF->tEnhCom.EnhGain_DL = val;
}

void SALI_ENH_Dynamic_State_Par_Init()
{
//	*DSP_SPH_ENH_DYNAMIC_STATE &= SAL_ENH_DYN_STA_PAR_INIT;
}

void SALI_ENH_Dynamic_State_Set(Sal_Enh_Dyn_Sta_t sta)
{
//	switch(sta)
//	{
//		case SAL_ENH_DYN_PAR:
//			*DSP_SPH_ENH_DYNAMIC_STATE |= SAL_ENH_DYN_STA_PAR_SET;
//			break;
//		case SAL_ENH_DYN_DDL_SET:
//			*DSP_SPH_ENH_DYNAMIC_STATE |= SAL_ENH_DYN_STA_DDL_SET;
//			break;
//		case SAL_ENH_DYN_DDL_DONE:
//			*DSP_SPH_ENH_DYNAMIC_STATE |= SAL_ENH_DYN_STA_DDL_DONE;
//			break;
//		default:
//			ASSERT_REBOOT(false);
//	}
//	//L1Audio_Msg_SAL_SET_VALUE_MULTI(SAL_DSP_VALUE_NAME(13), sta, *DSP_SPH_ENH_DYNAMIC_STATE, SAL_UNKNOWN, SAL_UNKNOWN, SAL_UNKNOWN);
}

bool SALI_ENH_Dynamic_State_Check(Sal_Enh_Dyn_Sta_t sta)
{
//	switch(sta)
//	{
//		case SAL_ENH_DYN_PAR:
//			if((*DSP_SPH_ENH_DYNAMIC_STATE & 0x3) == SAL_ENH_DYN_STA_PAR_SET_RDY)
//			{
//				return true;
//			}
//			else
//			{
//				return false;
//			}
//		case SAL_ENH_DYN_DDL_SET:
//			if(*DSP_SPH_ENH_DYNAMIC_STATE & SAL_ENH_DYN_STA_DDL_SET_RDY)
//			{
//				return true;
//			}
//			else
//			{
//				return false;
//			}
//		case SAL_ENH_DYN_DDL_DONE:
//			if((*DSP_SPH_ENH_DYNAMIC_STATE & SAL_ENH_DYN_STA_DDL_DONE_CHK) == 0)
//			{
//				return true;
//			}
//			else
//			{
//				return false;
//			}
//		default:
//			ASSERT_REBOOT(false);
//	}
//	//L1Audio_Msg_SAL_SET_VALUE_MULTI(SAL_DSP_VALUE_NAME(14), sta, *DSP_SPH_ENH_DYNAMIC_STATE, SAL_UNKNOWN, SAL_UNKNOWN, SAL_UNKNOWN);
    return false;
}


void SALI_ENH_Flag_Par_Set(Sal_Enh_Flag_Par_t par)
{
//	switch(par)
//	{
//		case SAL_ENH_FLAG_PAR_SET_UL:
//			*DSP_SPH_ENH_FLAG_PARAMETER &= 0xFFFD;
//			*DSP_SPH_ENH_FLAG_PARAMETER |= SAL_ENH_FLAG_PAR_UL;
//			break;
//		case SAL_ENH_FLAG_PAR_SET_DL:
//			*DSP_SPH_ENH_FLAG_PARAMETER &= 0xFFFE;
//			*DSP_SPH_ENH_FLAG_PARAMETER |= SAL_ENH_FLAG_PAR_DL;
//			break;	
//		case SAL_ENH_FLAG_PAR_SET_UL_DL:
//			*DSP_SPH_ENH_FLAG_PARAMETER &= 0xFFFC;
//			break;
//		case SAL_ENH_FLAG_PAR_SET_NB_BKF_UL:
//			*DSP_SPH_ENH_FLAG_PARAMETER |= SAL_ENH_FLAG_PAR_NB_BKF_UL;
//			break;	
//		case SAL_ENH_FLAG_PAR_SET_NB_BKF_DL:
//			*DSP_SPH_ENH_FLAG_PARAMETER |= SAL_ENH_FLAG_PAR_NB_BKF_DL;
//			break;
//		case SAL_ENH_FLAG_PAR_SET_NB_MOD:
//			*DSP_SPH_ENH_FLAG_PARAMETER |= SAL_ENH_FLAG_PAR_NB_MOD;
//			break;
//		case SAL_ENH_FLAG_PAR_SET_WB_BKF_UL:
//			*DSP_SPH_ENH_FLAG_PARAMETER |= SAL_ENH_FLAG_PAR_WB_BKF_UL;
//			break;
//		case SAL_ENH_FLAG_PAR_SET_WB_BKF_DL:
//			*DSP_SPH_ENH_FLAG_PARAMETER |= SAL_ENH_FLAG_PAR_WB_BKF_DL;
//			break;
//		case SAL_ENH_FLAG_PAR_SET_WB_MOD:
//			*DSP_SPH_ENH_FLAG_PARAMETER |= SAL_ENH_FLAG_PAR_WB_MOD;
//			break;
//		default:
//			ASSERT_REBOOT(false);
//	}
//	//L1Audio_Msg_SAL_SET_VALUE_MULTI(SAL_DSP_VALUE_NAME(15), par, *DSP_SPH_ENH_FLAG_PARAMETER, SAL_UNKNOWN, SAL_UNKNOWN, SAL_UNKNOWN);
}


volatile uint16* SALI_Parameter_GetAddr(uint8 type)
{
	volatile uint16* addr = 0;

	switch(type)
	{
		case SALI_PARAMETER_TYPE_COMMON:
			addr = SphCUIF->tSchEMP.ComPar;
			break;
		case SALI_PARAMETER_TYPE_MODE_NB:
			addr = SphCUIF->tSchEMP.ModPar_NB;
			break;
		case SALI_PARAMETER_TYPE_MODE2_NB:
			addr = &(SphCUIF->tSchEMP.ModPar_NB[16]);
			break;
		case SALI_PARAMETER_TYPE_MODE3_NB:
		    addr = &(SphCUIF->tSchEMP.ModPar_NB[32]);
			break;
		case SALI_PARAMETER_TYPE_MODE_WB:
			addr = SphCUIF->tSchEMP.ModPar_WB;
			break;
		case SALI_PARAMETER_TYPE_MODE2_WB:
			addr = &(SphCUIF->tSchEMP.ModPar_WB[16]);
			break;
		case SALI_PARAMETER_TYPE_MODE3_WB:
			addr = &(SphCUIF->tSchEMP.ModPar_WB[32]);
			break;
		case SALI_PARAMETER_TYPE_MODE_SWB:
		    addr = SphCUIF->tSchEMP.ModPar_SWB;
		    break;
		case SALI_PARAMETER_TYPE_MODE_INTERNAL:
			addr = SphCUIF->tEnhCom.EnhInternalPar;
			break;
	    case SALI_PARAMETER_TYPE_DEBUGINFO:
	        addr = SphCUIF->tSchEMP.DebugInfo;
	        break;
		default:
			ASSERT_REBOOT(false);
	}

	return addr;
}


bool SALI_Int_Resolve(uint16 iid, uint32* sph_int)
{
	uint32 val = 0;
	uint16 mask = 0;
	bool from_sph = true;

	switch(iid){

	case DSP_IID_SPEECH_UL_ID:
		mask = SphCUIF->tSchU2C.U2CFlag_ULEnd;
		if(mask & SPH_U2C_UL_END_BIT_PCMREC_NML)
			val += SAL_DSPINT_ID_REC_PCM;
		if(mask & SPH_U2C_UL_END_BIT_PCMREC_EPL)
			val += SAL_DSPINT_ID_REC_EPL;
		if(mask & SPH_U2C_UL_END_BIT_PNW)
			val += SAL_DSPINT_ID_PNW_UL;
		if(mask & SPH_U2C_UL_END_BIT_DACA)
			val += SAL_DSPINT_ID_DACA_UL;
		if(mask & SPH_U2C_UL_END_BIT_3G)
			val += SAL_DSPINT_ID_3G_UL;
		if(mask & SPH_U2C_UL_END_BIT_BGS)
			val += SAL_DSPINT_ID_BGS_UL;
		if(mask & SPH_U2C_UL_END_BIT_WARNMSG)
			val += SAL_DSPINT_ID_WARN_MSG_UL;
		if(mask & SPH_U2C_UL_END_BIT_EXTCOD)
			val += SAL_DSPINT_ID_EXTCOD_UL;
		if(mask & SPH_U2C_UL_END_BIT_C2K)
			val += SAL_DSPINT_ID_C2K_UL;
		if(mask & SPH_U2C_UL_END_BIT_MIXER3)
			val += SAL_DSPINT_ID_MIXER3;
	
		SphCUIF->tSchU2C.U2CFlag_ULEnd = 0;
		break;

	case DSP_IID_SPEECH_DL_ID:
		mask = SphCUIF->tSchU2C.U2CFlag_DLEnd;
		if(mask & SPH_U2C_DL_END_BIT_VMREC)
			val += SAL_DSPINT_ID_REC_VM;
		if(mask & SPH_U2C_DL_END_BIT_PNW)
			val += SAL_DSPINT_ID_PNW_DL;
		if(mask & SPH_U2C_DL_END_BIT_DACA)
			val += SAL_DSPINT_ID_DACA_DL;
		if(mask & SPH_U2C_DL_END_BIT_3G)
			val += SAL_DSPINT_ID_3G_DL;
		if(mask & SPH_U2C_DL_END_BIT_BGS)
			val += SAL_DSPINT_ID_BGS_DL;
		if(mask & SPH_U2C_DL_END_BIT_AVBT)
			val += SAL_DSPINT_ID_AVBT;
		if(mask & SPH_U2C_DL_END_BIT_WARNMSG)
			val += SAL_DSPINT_ID_WARN_MSG_DL;
		if(mask & SPH_U2C_DL_END_BIT_EXTCOD)
			val += SAL_DSPINT_ID_EXTCOD_DL;
		if(mask & 0x0200) //?? ToDo:
			val += SAL_DSPINT_ID_4G_DL;
		if(mask & SPH_U2C_DL_END_BIT_C2K)
			val += SAL_DSPINT_ID_C2K_DL;
		if(mask & SPH_U2C_DL_END_BIT_MIXER2)
			val += SAL_DSPINT_ID_MIXER2_DL;		
		
		SphCUIF->tSchU2C.U2CFlag_DLEnd = 0;
		break;
		
	case DSP_IID_SPEECH_UL_ID2:
	    mask = SphCUIF->tSchU2C.U2CFlag_ULStart;
		if(mask & SPH_U2C_UL_START_BIT_4G)
		    val += SAL_DSPINT_ID_4G_UL;
		
		SphCUIF->tSchU2C.U2CFlag_ULStart = 0;
		break;
		
    case DSP_IID_SPEECH_DL_ID2:
        mask = SphCUIF->tSchU2C.U2CFlag_DLStart;
		if(mask & SPH_U2C_DL_START_AAMPLUS)
		    val += SAL_DSPINT_ID_4G_AAMPLUS;
		
		SphCUIF->tSchU2C.U2CFlag_DLStart = 0;
		break;
		
	case DSP_IID_SPEECH_UL_ID3:
		val += SAL_DSPINT_ID_EXTCOD_UL;
    #ifdef SAL_EVS_STAND_ALONE
			SALI_EVSNotification();
    #endif		
		break;
		
	default:
		from_sph = false;
		//print warning message
		break;
	}
	
	*sph_int = val;
	return from_sph;
	
}

void SALI_Set_CodBand(uint32 band)
{
    if(band == SAL_PCM_NARROWBAND)
    {
        SphCUIF->tSchCod.CodMode_UL = SAL_COD_AMR122;
        SphCUIF->tSchCod.CodMode_DL = SAL_COD_AMR122; 
    }
    else if(band == SAL_PCM_WIDEBAND)
    {
        SphCUIF->tSchCod.CodMode_UL = SAL_COD_AWB2385;
        SphCUIF->tSchCod.CodMode_DL = SAL_COD_AWB2385;
    }
    else if(band == SAL_PCM_SUPERWIDEBAND)
    {
        SphCUIF->tSchCod.CodMode_UL = SAL_COD_EVSMIN;
        SphCUIF->tSchCod.CodMode_DL = SAL_COD_EVSMIN;
        SphCUIF->tCodEVS.PCMBW = SPH_SCH_BAND_SWB;
        
    }
    else //FULLBAND
    {
        SphCUIF->tSchCod.CodMode_UL = SAL_COD_EVSMIN;
        SphCUIF->tSchCod.CodMode_DL = SAL_COD_EVSMIN;
        SphCUIF->tCodEVS.PCMBW = SPH_SCH_BAND_FB;
    }
    
}

void SALI_PcmEx_Config(Sal_PCMEx_Config_t* cfg)
{
	if(cfg->type == SAL_PCMEX_TYPE_PNW){

		if(cfg->M2D_ul1)
			SphCUIF->tSchPNW.PNWPathCtrl_UL |= SPH_PNW_PATH_CTRL_M2D_ENA_UL1;
		else
			SphCUIF->tSchPNW.PNWPathCtrl_UL &= ~SPH_PNW_PATH_CTRL_M2D_ENA_UL1;
		if(cfg->D2M_ul1)
			SphCUIF->tSchPNW.PNWPathCtrl_UL |= SPH_PNW_PATH_CTRL_D2M_ENA_UL1;
		else
			SphCUIF->tSchPNW.PNWPathCtrl_UL &= ~SPH_PNW_PATH_CTRL_D2M_ENA_UL1;
		if(cfg->afterEnh_ul1)
			SphCUIF->tSchPNW.PNWPathCtrl_UL |= SPH_PNW_PATH_CTRL_LOC_UL1;
		else
			SphCUIF->tSchPNW.PNWPathCtrl_UL &= ~SPH_PNW_PATH_CTRL_LOC_UL1;
			
		if(cfg->M2D_ul2)
			SphCUIF->tSchPNW.PNWPathCtrl_UL |= SPH_PNW_PATH_CTRL_M2D_ENA_UL2;
		else
			SphCUIF->tSchPNW.PNWPathCtrl_UL &= ~SPH_PNW_PATH_CTRL_M2D_ENA_UL2;
		if(cfg->D2M_ul2)
			SphCUIF->tSchPNW.PNWPathCtrl_UL |= SPH_PNW_PATH_CTRL_D2M_ENA_UL2;
		else
			SphCUIF->tSchPNW.PNWPathCtrl_UL &= ~SPH_PNW_PATH_CTRL_D2M_ENA_UL2;
		if(cfg->afterEnh_ul2)
			SphCUIF->tSchPNW.PNWPathCtrl_UL |= SPH_PNW_PATH_CTRL_LOC_UL2;
		else
			SphCUIF->tSchPNW.PNWPathCtrl_UL &= ~SPH_PNW_PATH_CTRL_LOC_UL2;
			
		if(cfg->M2D_ul3)
			SphCUIF->tSchPNW.PNWPathCtrl_UL |= SPH_PNW_PATH_CTRL_M2D_ENA_UL3;
		else
			SphCUIF->tSchPNW.PNWPathCtrl_UL &= ~SPH_PNW_PATH_CTRL_M2D_ENA_UL3;
		if(cfg->D2M_ul3)
			SphCUIF->tSchPNW.PNWPathCtrl_UL |= SPH_PNW_PATH_CTRL_D2M_ENA_UL3;
		else
			SphCUIF->tSchPNW.PNWPathCtrl_UL &= ~SPH_PNW_PATH_CTRL_D2M_ENA_UL3;
		if(cfg->afterEnh_ul3)
			SphCUIF->tSchPNW.PNWPathCtrl_UL |= SPH_PNW_PATH_CTRL_LOC_UL3;
		else
			SphCUIF->tSchPNW.PNWPathCtrl_UL &= ~SPH_PNW_PATH_CTRL_LOC_UL3;
			
		if(cfg->M2D_ul4)
			SphCUIF->tSchPNW.PNWPathCtrl_UL |= SPH_PNW_PATH_CTRL_M2D_ENA_UL4;
		else
			SphCUIF->tSchPNW.PNWPathCtrl_UL &= ~SPH_PNW_PATH_CTRL_M2D_ENA_UL4;
		if(cfg->D2M_ul4)
			SphCUIF->tSchPNW.PNWPathCtrl_UL |= SPH_PNW_PATH_CTRL_D2M_ENA_UL4;
		else
			SphCUIF->tSchPNW.PNWPathCtrl_UL &= ~SPH_PNW_PATH_CTRL_D2M_ENA_UL4;		
		if(cfg->afterEnh_ul4)
			SphCUIF->tSchPNW.PNWPathCtrl_UL |= SPH_PNW_PATH_CTRL_LOC_UL4;
		else
			SphCUIF->tSchPNW.PNWPathCtrl_UL &= ~SPH_PNW_PATH_CTRL_LOC_UL4;
			
		if(cfg->M2D_dl)
			SphCUIF->tSchPNW.PNWPathCtrl_DL |= SPH_PNW_PATH_CTRL_M2D_ENA_DL1;
		else
			SphCUIF->tSchPNW.PNWPathCtrl_DL &= ~SPH_PNW_PATH_CTRL_M2D_ENA_DL1;		
		if(cfg->D2M_dl)
			SphCUIF->tSchPNW.PNWPathCtrl_DL |= SPH_PNW_PATH_CTRL_D2M_ENA_DL1;
		else
			SphCUIF->tSchPNW.PNWPathCtrl_DL &= ~SPH_PNW_PATH_CTRL_D2M_ENA_DL1;
		if(cfg->afterEnh_dl)
			SphCUIF->tSchPNW.PNWPathCtrl_DL |= SPH_PNW_PATH_CTRL_LOC_DL1;
		else
			SphCUIF->tSchPNW.PNWPathCtrl_DL &= ~SPH_PNW_PATH_CTRL_LOC_DL1;
		
		if(cfg->DMNR_cal)
			SphCUIF->tEnhCom.DMNRCtrl |= 0x0010;
		else
			SphCUIF->tEnhCom.DMNRCtrl &= ~0x0010;
		}
	else if(cfg->type == SAL_PCMEX_TYPE_DACA){
	        SphCUIF->tSchDACA.DACACtrl &= ~(DACA_CTRL_BAND_FB);
		if(cfg->band == SAL_PCM_NARROWBAND)
			SphCUIF->tSchDACA.DACACtrl |= DACA_CTRL_BAND_NB;
		else if(cfg->band == SAL_PCM_WIDEBAND)
			SphCUIF->tSchDACA.DACACtrl |= DACA_CTRL_BAND_WB;
		else if(cfg->band == SAL_PCM_SUPERWIDEBAND)
			SphCUIF->tSchDACA.DACACtrl |= DACA_CTRL_BAND_SWB;
		else
		    SphCUIF->tSchDACA.DACACtrl |= DACA_CTRL_BAND_FB;
		}
	else if(cfg->type == SAL_PCMEX_TYPE_REC_NML){
			if(cfg->swi == SAL_PCMEX_SWITCH_ON){
				SphCUIF->tSchCom.PCMRecCtrl |= SPH_PCMRECCTRL_BIT_SWITCH;//how about EPL? MT6280 vs After
				if(cfg->PCMRec_DL_Pos <= SAL_PCMREC_DL_POS_MAX)
				    SphCUIF->tSchCom.PCMRec_DL_Pos = cfg->PCMRec_DL_Pos;
		        else
		            SphCUIF->tSchCom.PCMRec_DL_Pos = SAL_PCMREC_DL_POS_DL_END;		    
			}
			else{
				SphCUIF->tSchCom.PCMRecCtrl &= ~SPH_PCMRECCTRL_BIT_SWITCH;//how about EPL? MT6280 vs After
				SphCUIF->tSchCom.PCMRec_DL_Pos = SAL_PCMREC_DL_POS_DL_END;
			}	
			
				
			if(cfg->swi == SAL_PCMEX_SWITCH_ON && cfg->idle){
		    	SphCUIF->tSchCom.MuteCtrl |= 0x0002;
			}
			else if(cfg->swi == SAL_PCMEX_SWITCH_OFF && cfg->idle){
				SphCUIF->tSchCom.MuteCtrl &= ~0x0002;
			}

		}
	else if(cfg->type == SAL_PCMEX_TYPE_REC_EPL){

			
			if(cfg->swi == SAL_PCMEX_SWITCH_ON){
				SphCUIF->tSchCom.PCMRecCtrl |= SPH_PCMRECCTRL_BIT_DPL;//how about EPL? MT6280 vs After
			}
			else{
				SphCUIF->tSchCom.PCMRecCtrl &= ~SPH_PCMRECCTRL_BIT_DPL;//how about EPL? MT6280 vs After
			}
			
		}
	else if(cfg->type == SAL_PCMEX_TYPE_EXT_COD){
			//need to set 4G flag here?
		}
	else 
		ASSERT_REBOOT(0);


		
	//an idle pnw, datacard or recording application
	if(cfg->idle && cfg->swi == SAL_PCMEX_SWITCH_ON){
        SALI_Set_Sph_Dev_Mod();
        SALI_Set_CodBand(cfg->band);
        SALI_Set_Sch_Delay(cfg->delR, cfg->delW, cfg->delM, 0, SAL_UNKNOWN);
        SALI_AppSpec_Control(SAL_APP_TYPE_Standby, 1);
        SALI_VBI_Reset();
	}
	else if(cfg->idle && cfg->swi == SAL_PCMEX_SWITCH_OFF){
	    SALI_AppSpec_Control(SAL_APP_TYPE_Standby, 0);
        SALI_VBI_End();
	}

}

bool SALI_PcmEx_IsCtrlClean(Sal_PcmEx_Type_t type)
{
	bool ret = false;

	if(type == SAL_PCMEX_TYPE_PNW)
		ret = (SphCUIF->tSchPNW.PNWCtrl_UL == 0) && (SphCUIF->tSchPNW.PNWCtrl_DL == 0);
	else if(type == SAL_PCMEX_TYPE_DACA)
		ret = (SphCUIF->tSchDACA.DACACtrl == 0);

	return ret;
}

void SALI_PcmEx_SetCtrlClean(Sal_PcmEx_Type_t type)
{
	if(type == SAL_PCMEX_TYPE_PNW){
		SphCUIF->tSchPNW.PNWCtrl_UL = 0;
		SphCUIF->tSchPNW.PNWCtrl_DL = 0;
		SphCUIF->tSchPNW.PNWPathCtrl_UL = 0;
		SphCUIF->tSchPNW.PNWPathCtrl_DL = 0;
	}
	else if(type == SAL_PCMEX_TYPE_DACA)
		SphCUIF->tSchDACA.DACACtrl = 0;
	
}


bool SALI_PcmEx_CheckState(uint8 ul_dl, Sal_PcmEx_Type_t type, Sal_PcmEx_State_t sta)
{
	volatile uint16* addr;
	bool ret = false;

	if(type == SAL_PCMEX_TYPE_PNW){
		if(ul_dl == 0)
			addr = &(SphCUIF->tSchPNW.PNWCtrl_UL);
		else
			addr = &(SphCUIF->tSchPNW.PNWCtrl_DL);
		ret = ((*addr & 0xf) == sta);
	}

	else if(type == SAL_PCMEX_TYPE_DACA){
		if(ul_dl == 0)
			ret = ((SphCUIF->tSchDACA.DACACtrl & 0xf) == sta);
		else
			ret = ( (SphCUIF->tSchDACA.DACACtrl >> 4 & 0xf) == sta);
	}
	else if(type == SAL_PCMEX_TYPE_EXT_COD){
		if(ul_dl == 0)
			ret = ((SphCUIF->tSchExtCod.ExtCodCtrl & 0xf) == sta);
		else
			ret = ( (SphCUIF->tSchExtCod.ExtCodCtrl >> 8 & 0xf) == sta);
	}
	

	return ret;

}


void SALI_PcmEx_SetState(uint8 ul_dl, Sal_PcmEx_Type_t type, Sal_PcmEx_State_t sta)
{
	volatile uint16 Temp=0;

	if(sta != SAL_PCMEX_ON && sta != SAL_PCMEX_OFF)
		ASSERT_REBOOT(0);//should not be this state

	if(type == SAL_PCMEX_TYPE_PNW){
	
        if(ul_dl == 0)
        {
            if(sta == SAL_PCMEX_ON)
            {                
			    SphCUIF->tSchPNW.PNWCtrl_UL = (SphCUIF->tSchPNW.PNWCtrl_UL & 0xfff0) + SPH_PNW_STATE_ON;
			    SphCUIF->tSchPNW.PNWPathCtrl_UL |= SPH_PNW_PATH_CTRL_MAIN_SWITCH;
			}
			else if(sta == SAL_PCMEX_OFF)
			{
			    SphCUIF->tSchPNW.PNWCtrl_UL = (SphCUIF->tSchPNW.PNWCtrl_UL & 0xfff0) + SPH_PNW_STATE_OFF;
			    SphCUIF->tSchPNW.PNWPathCtrl_UL &= ~(SPH_PNW_PATH_CTRL_MAIN_SWITCH);
			}
	    }
		else
		{
		    if(sta == SAL_PCMEX_ON)
            {                
			    SphCUIF->tSchPNW.PNWCtrl_DL = (SphCUIF->tSchPNW.PNWCtrl_DL & 0xfff0) + SPH_PNW_STATE_ON;
			    SphCUIF->tSchPNW.PNWPathCtrl_DL |= SPH_PNW_PATH_CTRL_MAIN_SWITCH;
			}
			else if(sta == SAL_PCMEX_OFF)
			{
			    SphCUIF->tSchPNW.PNWCtrl_DL = (SphCUIF->tSchPNW.PNWCtrl_DL & 0xfff0) + SPH_PNW_STATE_OFF;
			    SphCUIF->tSchPNW.PNWPathCtrl_DL &= ~(SPH_PNW_PATH_CTRL_MAIN_SWITCH);
			}
		    
		}
			
            
	}
	else if(type == SAL_PCMEX_TYPE_DACA){
		
		if(ul_dl == 0){		
		    if(sta == SAL_PCMEX_ON)
				Temp = DACA_UL_STATE_INIT;
		    else if(sta == SAL_PCMEX_OFF)
				Temp = DACA_UL_STATE_OFF;
				   
		     SphCUIF->tSchDACA.DACACtrl = (SphCUIF->tSchDACA.DACACtrl & 0xfff0) + Temp;
		}
		else{	
		    if(sta == SAL_PCMEX_ON)
				Temp = DACA_DL_STATE_INIT;
		    else if(sta == SAL_PCMEX_OFF)
				Temp = DACA_DL_STATE_OFF;	
				    
		    SphCUIF->tSchDACA.DACACtrl = (SphCUIF->tSchDACA.DACACtrl & 0xff0f) + Temp;
		}
			
	}
	else if(type == SAL_PCMEX_TYPE_EXT_COD){

		if(ul_dl == 0){
			if(sta == SAL_PCMEX_ON)
				SphCUIF->tSchExtCod.ExtCodCtrl = (SphCUIF->tSchExtCod.ExtCodCtrl & 0xfff0) + 1;
			else
				SphCUIF->tSchExtCod.ExtCodCtrl &= 0xfff0;
		}
		else{
			if(sta == SAL_PCMEX_ON)
				SphCUIF->tSchExtCod.ExtCodCtrl = (SphCUIF->tSchExtCod.ExtCodCtrl & 0xf0ff) + 0x0100;
			else
				SphCUIF->tSchExtCod.ExtCodCtrl &= 0xf0ff;
		}
		
	}
		
}

volatile uint16* SALI_PcmEx_GetBuf(Sal_PcmEx_BufId_t id)
{
	
	volatile uint16* addr = 0;

	switch(id){
		
		case SAL_PCMEX_PNW_BUF_M2D_UL1:
			addr = (uint16*)SphEXTCUIF->tSchPNW.PNWBuf_M2D_UL1;
			break;
		case SAL_PCMEX_PNW_BUF_D2M_UL1:
			addr = (uint16*)SphEXTCUIF->tSchPNW.PNWBuf_D2M_UL1;
			break;
		case SAL_PCMEX_PNW_BUF_M2D_UL2:
			addr = (uint16*)SphEXTCUIF->tSchPNW.PNWBuf_M2D_UL2;
			break;
	    case SAL_PCMEX_PNW_BUF_D2M_UL2:
			addr = (uint16*)SphEXTCUIF->tSchPNW.PNWBuf_D2M_UL2;
			break;
		case SAL_PCMEX_PNW_BUF_M2D_UL3:
			addr = (uint16*)SphEXTCUIF->tSchPNW.PNWBuf_M2D_UL3;
			break;
	    case SAL_PCMEX_PNW_BUF_D2M_UL3:
			addr = (uint16*)SphEXTCUIF->tSchPNW.PNWBuf_D2M_UL3;
			break;
		case SAL_PCMEX_PNW_BUF_M2D_UL4:
			addr = (uint16*)SphEXTCUIF->tSchPNW.PNWBuf_M2D_UL4;
			break;
	    case SAL_PCMEX_PNW_BUF_D2M_UL4:
			addr = (uint16*)SphEXTCUIF->tSchPNW.PNWBuf_D2M_UL4;
			break;
		case SAL_PCMEX_PNW_BUF_M2D_DL1:
			addr = (uint16*)SphEXTCUIF->tSchPNW.PNWBuf_M2D_DL1;
			break;	
	    case SAL_PCMEX_PNW_BUF_D2M_DL1:
			addr = (uint16*)SphEXTCUIF->tSchPNW.PNWBuf_D2M_DL1;
			break;	
		case SAL_PCMEX_DACA_BUF_UL:
			addr = (uint16*)SphEXTCUIF->tSchDACA.DACABuf_UL1;
			break;
		case SAL_PCMEX_DACA_BUF_DL:
			addr = (uint16*)SphEXTCUIF->tSchDACA.DACABuf_DL;
			break;
		case SAL_PCMEX_BUF_SE:
			addr = (uint16*)SphEXTCUIF->tSchPCMRec.PCMRecBuf_UL;
			break;
		
		case SAL_PCMEX_BUF_SE2:
			addr = (uint16*)SphEXTCUIF->tSchPCMRec.PCMRecBuf_UL;
			break;
		
		case SAL_PCMEX_BUF_SD:
			addr = (uint16*)SphEXTCUIF->tSchPCMRec.PCMRecBuf_DL;
			break;	
			
		case SAL_PCMEX_EXTCOD_BUF_UL:
			addr = (uint16*)SphEXTCUIF->tSchExtCod.ExtCodBuf_UL;
			break;	
		case SAL_PCMEX_EXTCOD_BUF_DL:
			addr = (uint16*)SphEXTCUIF->tSchExtCod.ExtCodBuf_DL;
			break;	

		default:
			ASSERT(0);
	}

    return addr;
}

volatile uint16* SALI_IIR_Coef_GetBuf(Sal_IIR_Coef_t id)
{
	
	volatile uint16* addr = 0;
	//volatile uint16  temp_log = 0;

	switch(id){
		
		case SAL_ENH_IIR_COEF_UL_NB:
			addr = (uint16*)SphEXTCUIF->tEnhCom.TunableIIR_NB_UL_Coef;
			break;
		case SAL_ENH_IIR_COEF_DL_NB:
			addr = (uint16*)SphEXTCUIF->tEnhCom.TunableIIR_NB_DL_Coef;
			break;
		case SAL_ENH_IIR_COEF_UL_WB:
			addr = (uint16*)SphEXTCUIF->tEnhCom.TunableIIR_WB_UL_Coef;
			break;
		case SAL_ENH_IIR_COEF_DL_WB:
			addr = (uint16*)SphEXTCUIF->tEnhCom.TunableIIR_WB_DL_Coef;
			break;
		case SAL_ENH_IIR_COEF_UL_SWB:
			addr = (uint16*)SphEXTCUIF->tEnhCom.TunableIIR_SWB_UL_Coef;
			break;		
		case SAL_ENH_IIR_COEF_DL_SWB:
			addr = (uint16*)SphEXTCUIF->tEnhCom.TunableIIR_SWB_DL_Coef;
			break;
		case SAL_MIC1_IIR_COEF_UL_NB:
			addr = (uint16*)SphEXTCUIF->tEnhCom.Mic1IIR_NB_UL_Coef;
			break;
		case SAL_MIC2_IIR_COEF_UL_NB:
			addr = (uint16*)SphEXTCUIF->tEnhCom.Mic2IIR_NB_UL_Coef;
			break;
		case SAL_MIC1_IIR_COEF_UL_WB:
			addr = (uint16*)SphEXTCUIF->tEnhCom.Mic1IIR_WB_UL_Coef;
			break;
		case SAL_MIC2_IIR_COEF_UL_WB:
			addr = (uint16*)SphEXTCUIF->tEnhCom.Mic2IIR_WB_UL_Coef;
			break;
		case SAL_MIC1_IIR_COEF_UL_SWB:
			addr = (uint16*)SphEXTCUIF->tEnhCom.Mic1IIR_SWB_UL_Coef;
			break;	
		case SAL_MIC2_IIR_COEF_UL_SWB:
			addr = (uint16*)SphEXTCUIF->tEnhCom.Mic2IIR_SWB_UL_Coef;
			break;	

		default:
			ASSERT(0);
	}
	//temp_log = addr;
	L1Audio_Msg_SAL_SET_VALUE(SAL_DSP_VALUE_NAME(22), addr);
	return addr;
}





uint16 SALI_PcmEx_GetBufLen(Sal_PcmEx_BufId_t id)
{
	uint16 len = 0;

	switch(id)
	{
	    case SAL_PCMEX_PNW_BUF_M2D_UL1:
			len = SphCUIF->tSchPNW.PNWLen_UL1;
			break;
		case SAL_PCMEX_PNW_BUF_D2M_UL1:
			len = SphCUIF->tSchPNW.PNWLen_UL1;
			break;
		case SAL_PCMEX_PNW_BUF_M2D_UL2:
			len = SphCUIF->tSchPNW.PNWLen_UL2;
			break;
	    case SAL_PCMEX_PNW_BUF_D2M_UL2:
			len = SphCUIF->tSchPNW.PNWLen_UL2;
			break;
		case SAL_PCMEX_PNW_BUF_M2D_UL3:
			len = SphCUIF->tSchPNW.PNWLen_UL3;
			break;
	    case SAL_PCMEX_PNW_BUF_D2M_UL3:
			len = SphCUIF->tSchPNW.PNWLen_UL3;
			break;
		case SAL_PCMEX_PNW_BUF_M2D_UL4:
			len = SphCUIF->tSchPNW.PNWLen_UL4;
			break;
	    case SAL_PCMEX_PNW_BUF_D2M_UL4:
			len = SphCUIF->tSchPNW.PNWLen_UL4;
			break;
		case SAL_PCMEX_PNW_BUF_M2D_DL1:
			len = SphCUIF->tSchPNW.PNWLen_DL1;
			break;	
	    case SAL_PCMEX_PNW_BUF_D2M_DL1:
			len = SphCUIF->tSchPNW.PNWLen_DL1;
			break;	
		
		case SAL_PCMEX_BUF_SE:
            len = SALI_Get_Codec_FrmSize(SphCUIF->tSchCod.CodMode_UL);
			break;
		case SAL_PCMEX_BUF_SE2:
		case SAL_PCMEX_BUF_SD:
            if(SphCUIF->tSchCom.SchBand == SPH_SCH_BAND_NB)
                len = 160;
            else if(SphCUIF->tSchCom.SchBand == SPH_SCH_BAND_WB)
                len = 320;
            else if(SphCUIF->tSchCom.SchBand == SPH_SCH_BAND_SWB)
                len = 640;
            else
                len = 960;
			break;
		case SAL_PCMEX_DACA_BUF_UL:
		case SAL_PCMEX_DACA_BUF_DL:
			len = SphCUIF->tSchDACA.DACALen_UL;
			break;
		case SAL_PCMEX_EXTCOD_BUF_UL:
		case SAL_PCMEX_EXTCOD_BUF_DL:	
			len = SALI_Get_Codec_FrmSize(SphCUIF->tSchCod.CodMode_UL);
			break;			
		default:
			ASSERT(0);//or print waring message here
	}

	return len;
}

uint16 SALI_AGC_GetSWGain(uint8 mic)
{
	uint16 val = 0;
	
	if(mic == 0)
		val = SphCUIF->tEnhCom.AGCSWGian1;
	else if(mic == 1)
		val = SphCUIF->tEnhCom.AGCSWGian2;
	else
		ASSERT(0);

	return val;
}

void SALI_AGC_SetGain(uint16 val)
{
	SphCUIF->tEnhCom.AGCGain = val;
}

uint16 SALI_Sidetone_GetAdaptiveGain()
{
	uint16 val;

//	val = *DSP_SPH_ST_ADAPT_GAIN;
    val = 32767;	
	return val;

}

void SALI_Sidetone_SetGain(uint16 val)
{
//	//L1Audio_Msg_SAL_SET_VALUE(SAL_DSP_VALUE_NAME(8), val);
//	*DSP_SPH_ST_VOL = val;
}

void SALI_Sidetone_Enable(bool ena)
{
//	if(ena){
//		*DSP_SPH_SFE_CTRL &= 0xfffe;
//		*DSP_SPH_SFE_CTRL |= 0x0008;
//		}
//	else
//		*DSP_SPH_SFE_CTRL &= 0xfff7;
//	
//	//L1Audio_Msg_SAL_SET_VALUE(SAL_DSP_VALUE_NAME(9), *DSP_SPH_SFE_CTRL);
			
}

uint16 SALI_DGain_Get(uint8 ul_dl)
{
	volatile uint16 val;

	if(ul_dl == 0)
		val = SphCUIF->tEnhCom.EnhVol_UL;
	else
		val = SphCUIF->tEnhCom.EnhVol_DL;

    
	return val;
	
}

void SALI_DGain_Set(uint8 ul_dl, uint16 val)
{
    
    SphCUIF->tEnhCom.Attack_Gain_DL_NB  = SAL_ATTACK_GAIN_DL_NB;
	SphCUIF->tEnhCom.Release_Gain_DL_NB = SAL_RELEASE_GAIN_DL_NB;
	SphCUIF->tEnhCom.Attack_Gain_DL_WB  = SAL_ATTACK_GAIN_DL_WB;
	SphCUIF->tEnhCom.Release_Gain_DL_WB = SAL_RELEASE_GAIN_DL_WB;	
	SphCUIF->tEnhCom.Attack_Gain_DL_SWB  = SAL_ATTACK_GAIN_DL_SWB;
	SphCUIF->tEnhCom.Release_Gain_DL_SWB = SAL_RELEASE_GAIN_DL_SWB;	
    
	if(ul_dl == 0)
		SphCUIF->tEnhCom.EnhVol_UL = val;
	else
		SphCUIF->tEnhCom.EnhVol_DL = val;


}

void SALI_VM_Config(Sal_VM_Config_t *cfg)
{
	if(cfg->swi == SAL_VM_SWITCH_ON){
		SphCUIF->tSchVM.VMCtrl |= SPH_VMCTRL_BIT_VM;
	}
	else{
		SphCUIF->tSchVM.VMCtrl &= ~SPH_VMCTRL_BIT_VM;
	}


//	if(cfg->swi == SAL_VM_SWITCH_ON && cfg->idle == true){//idle vm record
//		*DSP_SPH_MUTE_CTRL |= 0x0002;
//		SALI_Config_SRC(SAL_APP_TYPE_3GCall, IsWBLink(cfg->codec));
//		SALI_Enable_Codec(cfg->codec, cfg->codec);
//		SALI_Set_Sch_Delay(cfg->delR, cfg->delW, cfg->delM, 0, SAL_UNKNOWN);
//		SALI_VBI_Reset();
//	}
//	else if(cfg->swi == SAL_VM_SWITCH_OFF && cfg->idle == true){
//		*DSP_SPH_MUTE_CTRL &= ~0x0002;
//		SALI_VBI_End();
//		SALI_Disable_Codec();
//	}

}

//rat: 0 -> 2g, 1 -> 3g
void SALI_VM_GetFrame(uint8 rat, Sal_VM_Frame *vmfrm)
{
	vmfrm->enc_mode = SphCUIF->tSchVM.CodUsedMode_UL;
	vmfrm->dec_mode = SphCUIF->tSchVM.CodUsedMode_DL;

	vmfrm->dbgInfo_addr = SphCUIF->tSchVM.DebugInfo;

	if(rat == 0){// 2g
	vmfrm->enc_hdr = *SPH2G_SE_DATA_HDR;
	vmfrm->enc_hb_addr = SPH2G_SE_DATA_HB;
	vmfrm->dec_hdr = *SPH2G_SD_DATA_HDR;
	vmfrm->dec_hb_addr = SPH2G_SD_DATA_HB;
//	vmfrm->enc_mode = *SPH2G_ENCODER_USED_MODE;
//	vmfrm->dec_mode = *SPH2G_DECODER_USED_MODE;
	}
	else if(rat == 1){// 3g
	vmfrm->enc_hdr = SphCUIF->tSchCod.CodHdr_UL;
	vmfrm->enc_hb_addr = SphCUIF->tSchCod.CodHB_UL;
	vmfrm->dec_hdr = SphCUIF->tSchCod.CodHdr_DL;
	vmfrm->dec_hb_addr = SphCUIF->tSchCod.CodHB_DL;
	}
	else if(rat == 2){// C2K
	vmfrm->enc_hdr = SphCUIF->tSchCod.CodHdr_UL;
	vmfrm->enc_hb_addr = SphCUIF->tSchCod.CodHB_UL;
	vmfrm->dec_hdr = SphCUIF->tSchCod.CodHdr_DL;
	vmfrm->dec_hb_addr = SphCUIF->tSchCod.CodHB_DL;
	}

	vmfrm->enh_dbgInfo_addr = (uint16*)SphEXTCUIF->tEnhCom.DbgInfo;
	
}


void SALI_EPL_GetFrame(Sal_EPL_Frame *eplfrm)
{
	
	eplfrm->ul_pre_buf = (uint16*)SphEXTCUIF->tSchDPL.DPLBuf_UL_Pre;
	eplfrm->ul_pos_buf = (uint16*)SphEXTCUIF->tSchDPL.DPLBuf_UL_Pos;
	eplfrm->dl_pre_buf = (uint16*)SphEXTCUIF->tSchDPL.DPLBuf_DL_Pre;
	eplfrm->dl_pos_buf = (uint16*)SphEXTCUIF->tSchDPL.DPLBuf_DL_Pos;
	eplfrm->ul2_pos_buf = (uint16*)SphEXTCUIF->tSchDPL.DPLBuf_UL_2; 	
	eplfrm->ul3_pos_buf = (uint16*)SphEXTCUIF->tSchDPL.DPLBuf_UL_3;
	eplfrm->ul4_pos_buf = (uint16*)SphEXTCUIF->tSchDPL2.DPLBuf_UL_4;

	

	if((SphCUIF->tSchDPL.DPL_Band & 0x3) == 0)
		eplfrm->ul_pre_len = 160;
	else if((SphCUIF->tSchDPL.DPL_Band & 0x3) == 1)
		eplfrm->ul_pre_len = 320;
    else if((SphCUIF->tSchDPL.DPL_Band & 0x3) == 2)
		eplfrm->ul_pre_len = 640;		
    else
        eplfrm->ul_pre_len = 960;
    
    
    if((SphCUIF->tSchDPL.DPL_Band & 0xC) == 0)
		eplfrm->ul_pos_len = 160;
	else if((SphCUIF->tSchDPL.DPL_Band & 0xC) == 0x4)
		eplfrm->ul_pos_len = 320;
    else if((SphCUIF->tSchDPL.DPL_Band & 0xC) == 0x8)
		eplfrm->ul_pos_len = 640;		
    else
        eplfrm->ul_pos_len = 960;

	if((SphCUIF->tSchDPL.DPL_Band & 0x30) == 0)
		eplfrm->dl_pre_len = 160;
	else if((SphCUIF->tSchDPL.DPL_Band & 0x30) == 0x10)
		eplfrm->dl_pre_len = 320;
    else if((SphCUIF->tSchDPL.DPL_Band & 0x30) == 0x20)
		eplfrm->dl_pre_len = 640;		
    else
        eplfrm->dl_pre_len = 960;

	if((SphCUIF->tSchDPL.DPL_Band & 0xC0) == 0)
		eplfrm->dl_pos_len = 160;
	else if((SphCUIF->tSchDPL.DPL_Band & 0xC0) == 0x40)
		eplfrm->dl_pos_len = 320;
    else if((SphCUIF->tSchDPL.DPL_Band & 0xC0) == 0x80)
		eplfrm->dl_pos_len = 640;		
    else
        eplfrm->dl_pos_len = 960;

	if((SphCUIF->tSchDPL.DPL_Band & 0x300) == 0)
		eplfrm->ul2_pos_len = 160;
	else if((SphCUIF->tSchDPL.DPL_Band & 0x300) == 0x100)
		eplfrm->ul2_pos_len = 320;
    else if((SphCUIF->tSchDPL.DPL_Band & 0x300) == 0x200)
		eplfrm->ul2_pos_len = 640;		
    else
        eplfrm->ul2_pos_len = 960;

    if((SphCUIF->tSchDPL.DPL_Band & 0xC00) == 0)
		eplfrm->ul3_pos_len = 160;
	else if((SphCUIF->tSchDPL.DPL_Band & 0xC00) == 0x400)
		eplfrm->ul3_pos_len = 320;
    else if((SphCUIF->tSchDPL.DPL_Band & 0xC00) == 0x800)
		eplfrm->ul3_pos_len = 640;		
    else
        eplfrm->ul3_pos_len = 960;
	
	if((SphCUIF->tSchDPL.DPL_Band & 0x3000) == 0)
		eplfrm->ul4_pos_len = 160;
	else if((SphCUIF->tSchDPL.DPL_Band & 0x3000) == 0x1000)
		eplfrm->ul4_pos_len = 320;
    else if((SphCUIF->tSchDPL.DPL_Band & 0x3000) == 0x2000)
		eplfrm->ul4_pos_len = 640;		
    else
        eplfrm->ul4_pos_len = 960;
	

	
}


void SALI_BT_Config(Sal_BT_Config *cfg)
{

	if(cfg->feed_cfg){

		SphCUIF->tSchDev.BTMode = (uint16)cfg->mode << 3;//set bt mode
		
		if(cfg->mode == SAL_BT_MODE_GAIN)
			SphCUIF->tSchDev.BTMode += cfg->gainmode_dl_gain & 0x7;

		if(cfg->mode == SAL_BT_MODE_LINEAR){
			SphCUIF->tSchDev.BTCtrl = cfg->linear_ctrl & 0xf;//clear and set
			SphCUIF->tSchDev.BTCtrl |= cfg->linear_reverse?0x10:0;
			SphCUIF->tSchDev.BTCtrl |= (uint16)cfg->linear_ul_gain << 8;
		}

		
	}
	else{
		SphCUIF->tSchDev.BTMode = 0;
		SphCUIF->tSchDev.BTCtrl = 0;
	}
	
}

bool SALI_BT_IsEnable()
{
	return (!(SphCUIF->tSchDev.DevMode == SPH_DEV_MODE_BTEPN));
}


void SALI_Mute_Ctrl(Sal_Mute_Point_t ctrl, bool mute)
{
	
	L1Audio_Msg_SAL_SET_VALUE_MULTI(SAL_DSP_VALUE_NAME(2), ctrl, mute, SAL_UNKNOWN, SAL_UNKNOWN, SAL_UNKNOWN);
	
		switch(ctrl)
		{
		case SAL_MUTE_UL_POS_EN:
			if(mute)
			    SphCUIF->tSchCom.MuteCtrl |= SPH_MUTE_BIT_UL_POS_ENH;
			else
			    SphCUIF->tSchCom.MuteCtrl &= ~SPH_MUTE_BIT_UL_POS_ENH;
			break;
		case SAL_MUTE_UL_PRE_EN:
			if(mute)
			    SphCUIF->tSchCom.MuteCtrl |= SPH_MUTE_BIT_UL_PRE_ENH;
			else
			    SphCUIF->tSchCom.MuteCtrl &= ~SPH_MUTE_BIT_UL_PRE_ENH;
			break;
		case SAL_MUTE_UL_IN_EN:
			if(mute)
			    SphCUIF->tSchCom.MuteCtrl |= SPH_MUTE_BIT_UL_IN_ENH;
			else
			    SphCUIF->tSchCom.MuteCtrl &= ~SPH_MUTE_BIT_UL_IN_ENH;
			break;
		case SAL_MUTE_DL_PRE_SD:
			if(mute)
			    SphCUIF->tSchCom.MuteCtrl |= SPH_MUTE_BIT_DL_PRE_DEC;
			else
			    SphCUIF->tSchCom.MuteCtrl &= ~SPH_MUTE_BIT_DL_PRE_DEC;
			break;
		case SAL_MUTE_DL_PRE_EN:
			if(mute)
			    SphCUIF->tSchCom.MuteCtrl |= SPH_MUTE_BIT_DL_PRE_ENH;
			else
			    SphCUIF->tSchCom.MuteCtrl &= ~SPH_MUTE_BIT_DL_PRE_ENH;
			break;
	    case SAL_MUTE_UL_8K:
			if(mute)
			    SphCUIF->tSchCom.MuteCtrl |= SPH_MUTE_BIT_UL_POS_AFE;
			else
			    SphCUIF->tSchCom.MuteCtrl &= ~SPH_MUTE_BIT_UL_POS_AFE;
			break;
		case SAL_MUTE_DL_8K:
			if(mute)
			    SphCUIF->tSchCom.MuteCtrl |= SPH_MUTE_BIT_DL_PRE_AFE;
			else
			    SphCUIF->tSchCom.MuteCtrl &= ~SPH_MUTE_BIT_DL_PRE_AFE;
			break;
		case SAL_MUTE_UL_PRE_EXTCOD:
			if(mute)
			    SphCUIF->tSchCom.MuteCtrl |= SPH_MUTE_BIT_UL_PRE_EXTCOD;
			else
			    SphCUIF->tSchCom.MuteCtrl &= ~SPH_MUTE_BIT_UL_PRE_EXTCOD;
			break;
		case SAL_MUTE_DL_POS_EXTCOD:
			if(mute)
			    SphCUIF->tSchCom.MuteCtrl |= SPH_MUTE_BIT_DL_POS_EXTCOD;
			else
			    SphCUIF->tSchCom.MuteCtrl &= ~SPH_MUTE_BIT_DL_POS_EXTCOD;
			break;
                default:
			break;
		}

}

bool SALI_Mute_Check(Sal_Mute_Point_t ctrl)
{
		uint16 val = 0;
		
		switch(ctrl)
		{
		case SAL_MUTE_UL_POS_EN:
			val = SphCUIF->tSchCom.MuteCtrl & SPH_MUTE_BIT_UL_POS_ENH;
			break;
		case SAL_MUTE_UL_PRE_EN:
			val = SphCUIF->tSchCom.MuteCtrl & SPH_MUTE_BIT_UL_PRE_ENH;
			break;
		case SAL_MUTE_UL_IN_EN:
			val = SphCUIF->tSchCom.MuteCtrl & SPH_MUTE_BIT_UL_IN_ENH;
			break;
		case SAL_MUTE_DL_PRE_SD:
			val = SphCUIF->tSchCom.MuteCtrl & SPH_MUTE_BIT_DL_PRE_DEC;
			break;
		case SAL_MUTE_DL_PRE_EN:
			val = SphCUIF->tSchCom.MuteCtrl & SPH_MUTE_BIT_DL_PRE_ENH;
			break;
	    case SAL_MUTE_UL_8K:
			val = SphCUIF->tSchCom.MuteCtrl & SPH_MUTE_BIT_UL_POS_AFE;
			break;
		case SAL_MUTE_DL_8K:
			val = SphCUIF->tSchCom.MuteCtrl & SPH_MUTE_BIT_DL_PRE_AFE;
			break;		
        case SAL_MUTE_UL_PRE_EXTCOD:
            val = SphCUIF->tSchCom.MuteCtrl & SPH_MUTE_BIT_UL_PRE_EXTCOD;
            break;
        case SAL_MUTE_DL_POS_EXTCOD:
            val = SphCUIF->tSchCom.MuteCtrl & SPH_MUTE_BIT_DL_POS_EXTCOD;
            break;
		default:
			break;
		}

		return (val != 0);
}

void SALI_Ramp_Ctrl(Sal_Ramp_Point_t ctrl, Sal_Ramp_State_t state)
{
    		
    Sal_Ramp_State_t state_cur = SALI_Ramp_GetState(ctrl);
	L1Audio_Msg_SAL_SET_VALUE_MULTI(SAL_DSP_VALUE_NAME(23), ctrl, state, state_cur, SAL_UNKNOWN, SAL_UNKNOWN);
    
    bool state_chg = false;
    switch(state)
	{
	    case SAL_RAMP_IDLE:
            if (state_cur != SAL_RAMP_IDLE)
                state_chg = true;
		    break;
	    case SAL_RAMP_DOWN_INIT:
            if (state_cur == SAL_RAMP_IDLE || state_cur == SAL_RAMP_UP_DONE)
                state_chg = true;
		    break;
	    case SAL_RAMP_UP_INIT:
            if (state_cur == SAL_RAMP_DOWN_DONE)
                state_chg = true;
		    break;
	    case SAL_RAMP_DOWN_RUN:
		    break;
	    case SAL_RAMP_DOWN_DONE:
            if (state_cur == SAL_RAMP_UP_DONE || state_cur == SAL_RAMP_IDLE)
                state_chg = true;
		    break;
	    case SAL_RAMP_UP_RUN:
		    break;
	    case SAL_RAMP_UP_DONE:
		    break;
        default:
		    break;
	}

    if (state_chg)
    {
	    switch(ctrl)
	    {
	        case SAL_RAMP_UL_POS_EN:
                SphCUIF->tSchCom.RampCtrlUL1 = (SphCUIF->tSchCom.RampCtrlUL1 & ~(0xF)) | state;
		        break;
	        case SAL_RAMP_UL_PRE_EN:
                SphCUIF->tSchCom.RampCtrlUL1 = (SphCUIF->tSchCom.RampCtrlUL1 & ~(0xF0)) | (state << 4);
		        break;
	        case SAL_RAMP_UL_IN_EN:
                SphCUIF->tSchCom.RampCtrlUL1 = (SphCUIF->tSchCom.RampCtrlUL1 & ~(0xF000)) | (state << 12);
		        break;
//	        case SAL_RAMP_DL_PRE_SD:
//                SphCUIF->tSchCom.RampCtrlDL1 = (SphCUIF->tSchCom.RampCtrlDL1 & ~(0xF)) | state;
//		        break;
	        case SAL_RAMP_DL_PRE_EN:
                SphCUIF->tSchCom.RampCtrlDL1 = (SphCUIF->tSchCom.RampCtrlDL1 & ~(0xF0)) | (state << 4);
		        break;
	        case SAL_RAMP_UL_8K:
                SphCUIF->tSchCom.RampCtrlUL2 = (SphCUIF->tSchCom.RampCtrlUL2 & ~(0xF)) | state;
		        break;
	        case SAL_RAMP_DL_8K:
                SphCUIF->tSchCom.RampCtrlDL2 = (SphCUIF->tSchCom.RampCtrlDL2 & ~(0xF)) | state;
		        break;
	        case SAL_RAMP_UL_PRE_EXTCOD:
                SphCUIF->tSchCom.RampCtrlUL1 = (SphCUIF->tSchCom.RampCtrlUL1 & ~(0x0F00)) | (state << 8);
		        break;
	        case SAL_RAMP_DL_POS_EXTCOD:
                SphCUIF->tSchCom.RampCtrlDL1 = (SphCUIF->tSchCom.RampCtrlDL1 & ~(0x0F00)) | (state << 8);
		        break;
	        case SAL_RAMP_DL_PRE_DACA:
                SphCUIF->tSchCom.RampCtrlDL1 = (SphCUIF->tSchCom.RampCtrlDL1 & ~(0xF000)) | (state << 12);
		        break;
            default:
		        break;
	    }
    }
}
bool SALI_RampDown_IsDone(Sal_Ramp_Point_t ctrl)
{
    Sal_Ramp_State_t state_cur = SALI_Ramp_GetState(ctrl);
    if( (state_cur == SAL_RAMP_DOWN_INIT) ||
        (state_cur == SAL_RAMP_DOWN_RUN) )
        return false;
    else
        return true;
}

bool SALI_RampUp_IsDone(Sal_Ramp_Point_t ctrl)
{
    Sal_Ramp_State_t state_cur = SALI_Ramp_GetState(ctrl);
    if( (state_cur == SAL_RAMP_IDLE) ||
        (state_cur == SAL_RAMP_UP_DONE) )
        return true;
    else
        return false;
}

Sal_Ramp_State_t SALI_Ramp_GetState(Sal_Ramp_Point_t ctrl)
{
    Sal_Ramp_State_t state;
    switch(ctrl)
    {
	case SAL_RAMP_UL_POS_EN:
        state = SphCUIF->tSchCom.RampCtrlUL1 & 0xF;
		break;
	case SAL_RAMP_UL_PRE_EN:
        state = (SphCUIF->tSchCom.RampCtrlUL1 >> 4) & 0xF;
		break;
	case SAL_RAMP_UL_IN_EN:
        state = (SphCUIF->tSchCom.RampCtrlUL1 >> 12) & 0xF;
		break;
//	case SAL_RAMP_DL_PRE_SD:
//        state = (SphCUIF->tSchCom.RampCtrlDL1) & 0xF;
//		break;
	case SAL_RAMP_DL_PRE_EN:
        state = (SphCUIF->tSchCom.RampCtrlDL1 >> 4) & 0xF;
		break;
	case SAL_RAMP_UL_8K:
        state = SphCUIF->tSchCom.RampCtrlUL2 & 0xF;
		break;
	case SAL_RAMP_DL_8K:
        state = SphCUIF->tSchCom.RampCtrlDL2 & 0xF;
		break;
	case SAL_RAMP_UL_PRE_EXTCOD:
        state = (SphCUIF->tSchCom.RampCtrlUL1 >> 8) & 0xF;
		break;
	case SAL_RAMP_DL_POS_EXTCOD:
        state = (SphCUIF->tSchCom.RampCtrlDL1 >> 8) & 0xF;
		break;
	case SAL_RAMP_DL_PRE_DACA:
        state = (SphCUIF->tSchCom.RampCtrlDL1 >> 12) & 0xF;
		break;
    default:
        state = SAL_RAMP_IDLE;
		break;
	}
    return state;
}

void SALI_CTM_Switch(bool on)
{
//	if(on)
//		*DSP_SPH_CTM_CTRL = 0x1;
//	else
//		*DSP_SPH_CTM_CTRL = 0x2;
}

void SALI_CTM_SetGain(uint16 limit, uint16 update)
{
//	*DSP_SPH_CTM_AMR_CODEBOOK_GAIN_LIMIT = limit;
//	*DSP_SPH_CTM_AMR_CODEBOOK_GAIN_UPDATE = update;
}

uint16 SALI_CTM_GetValue(uint16 type)
{
	uint16 value = 0;
//	switch(type)
//	{
//	case SAL_CTM_VALUE_TYPE_FACCH_REPORT:
//		value = *DSP_SPH_CTM_BFI_FACCH_REPORT;
//		break;
//	case SAL_CTM_VALUE_TYPE_AMR_RX_RATE:
//		value = *DSP_SPH_CTM_AMR_REAL_RX_TYPE;
//		break;
//	default:
//		break;
//	}
	return value;
}

bool SALI_CTM_IsIdle()
{
//	return (*DSP_SPH_CTM_CTRL == 0);
    return false;
}

bool SALI_CTM_IsOff()
{
//	return (*DSP_SPH_CTM_CTRL == 2);
    return false;
}

void SALI_AGC1_Config(Sal_AGC_Config_t *cfg)
{
	uint16 value = 0;
	if(cfg->main_switch)
		value |= 0x8000;
	if(cfg->gain_switch)
		value |= 0x2000;
	if(cfg->hpiir_switch)
		value |= 0x1000;
	if(cfg->vad_switch)
		value |= 0x0800;
	if(cfg->init_req)
		value |= 0x0008;

	if(cfg->cosim)
		value |= 0x0100;

	SphCUIF->tEnhCom.AGCCtrl = value;
	L1Audio_Msg_SAL_SET_VALUE(SAL_DSP_VALUE_NAME(7), value);
}

void SALI_AGC2_Config(Sal_AGC_Config_t *cfg)
{
//	uint16 value = 0;
//	if(cfg->main_switch)
//		value |= 0x8000;
//	if(cfg->gain_switch)
//		value |= 0x2000;
//	if(cfg->hpiir_switch)
//		value |= 0x1000;
//	if(cfg->vad_switch)
//		value |= 0x0800;
//	if(cfg->init_req)
//		value |= 0x0008;
//
//	if(cfg->cosim)
//		value |= 0x0100;
//
//	SphCUIF->tEnhCom.AGCCtrl2 = value;
//	//L1Audio_Msg_SAL_SET_VALUE(SAL_DSP_VALUE_NAME(10), value);
}

void SALI_AGC3_Config(Sal_AGC_Config_t *cfg)
{
//	uint16 value = 0;
//	if(cfg->main_switch)
//		value |= 0x8000;
//	if(cfg->gain_switch)
//		value |= 0x2000;
//	if(cfg->hpiir_switch)
//		value |= 0x1000;
//	if(cfg->vad_switch)
//		value |= 0x0800;
//	if(cfg->init_req)
//		value |= 0x0008;
//
//	if(cfg->cosim)
//		value |= 0x0100;
//
//	SphCUIF->tEnhCom.AGCCtrl3 = value;
//	//L1Audio_Msg_SAL_SET_VALUE(SAL_DSP_VALUE_NAME(11), value);
}

void SALI_AGC4_Config(Sal_AGC_Config_t *cfg)
{
//	uint16 value = 0;
//	if(cfg->main_switch)
//		value |= 0x8000;
//	if(cfg->gain_switch)
//		value |= 0x2000;
//	if(cfg->hpiir_switch)
//		value |= 0x1000;
//	if(cfg->vad_switch)
//		value |= 0x0800;
//	if(cfg->init_req)
//		value |= 0x0008;
//
//	if(cfg->cosim)
//		value |= 0x0100;
//
//	SphCUIF->tEnhCom.AGCCtrl4 = value;
//	//L1Audio_Msg_SAL_SET_VALUE(SAL_DSP_VALUE_NAME(12), value);
}

void SALI_NotchFilter_Enable(bool ena, bool thirdStageIIR)
{
//	if(ena){
//		*DSP_SPH_SFE_CTRL |= 0x200;
//		*DSP_SPH_SFE_CTRL &= ~0x800;
//		if(thirdStageIIR)
//			*DSP_SPH_SFE_CTRL |= 0x400;
//		else
//			*DSP_SPH_SFE_CTRL &= ~0x400;
//	}
//	else
//		*DSP_SPH_SFE_CTRL &= ~0x200;

}

void SALI_8K_Resync(bool ul, int16 ul_offset, bool dl, int16 dl_offset)
{
	if(ul){
		SphCUIF->tSchLink.SSPResyncCtrl |= 0x1;
		SphCUIF->tSchLink.SSPResyncOffset_UL = ul_offset;
		}	
		
	if(dl){
		SphCUIF->tSchLink.SSPResyncCtrl |= 0x2;
		SphCUIF->tSchLink.SSPResyncOffset_DL = dl_offset;
		}
}

void SALI_2G_SMR_Switch(bool on)
{
//	if(on)
//	{
//		*DSP_SPH_SCH_IMPROVE_CTRL |= SALI_IMPROVE_2G_SMR;
//	}
//	else
//	{
//		*DSP_SPH_SCH_IMPROVE_CTRL &= ~SALI_IMPROVE_2G_SMR;
//	}
}

void SALI_VOLTE_SetInfo(Sal_VOLTE_info_t info, uint16 val)
{
	switch(info){
		case SAL_VOLTE_INFO_JBM_OUT_SN:
			SphCUIF->tSchLink.JBM_PO_SN = val;
			break;
		default:
			break;
	}
}

void SALI_GetWarnMsg(uint16 *ulcode, uint16 *dlcode)
{
//	*ulcode = *DSP_SPH_WARN_MSG_UL;
//	*dlcode = *DSP_SPH_WARN_MSG_DL;
}

uint16 SALI_GetDLVADFlag()
{
	uint16 val;

//	val = *DSP_SPH_DL_VAD_FLAG;
    val = SphCUIF->tSchCom.VADDL;
	
	return val;

}

void SALI_C2K_SetDtx(bool bOn)
{
	if(bOn)
		SphCUIF->tSchCod.C2KCodFunCtrl |= C2K_COD_FUN_CTRL_BIT_DTX ;
	else
		SphCUIF->tSchCod.C2KCodFunCtrl &= ~C2K_COD_FUN_CTRL_BIT_DTX ;
}

//ul_dl @ 0 : ul, 1 : dl
bool SALI_C2K_CheckDataSync(uint16 bUl_Dl)
{
	bool bval = false;

	if(0 == bUl_Dl)
	{
		bval = (SphCUIF->tSchLink.SphMdmSyncStatus_C2K & 0x1) > 0;//ul is ready
	}
	else if(1 == bUl_Dl)
	{
		bval = (SphCUIF->tSchLink.SphMdmSyncStatus_C2K & 0x2) == 0;//dl is cleaned by dsp
	}
	return bval;
}

//ready @ true : ready, false : empty
void SALI_C2K_SetDataStatus(uint16 u2Ul_Dl, bool bRdy)
{
	if(u2Ul_Dl == 0)
	{
		if(bRdy)
			SphCUIF->tSchLink.SphMdmSyncStatus_C2K |= 0x1;
		else
			SphCUIF->tSchLink.SphMdmSyncStatus_C2K &= 0xFFFE;			
	}
	else if(u2Ul_Dl == 1)
	{
		if(bRdy)
			SphCUIF->tSchLink.SphMdmSyncStatus_C2K |= 0x2;
		else
			SphCUIF->tSchLink.SphMdmSyncStatus_C2K &= 0xFFFD;			
	}
}

void SALI_C2K_SetULUnsync()
{
    SphCUIF->tSchLink.SphMdmSyncStatus_C2K |= 0x10;
}

void SALI_C2K_SetValue(uint16 u2ValId, uint16 u2Val)
{
	switch(u2ValId)
	{
		case SAL_C2K_SOCM_QCELP13K:
			SphCUIF->tSchCod.C2KSOCM_QCELP13K = u2Val;
		break;
		
		case SAL_C2K_SOCM_EVRCA:
			SphCUIF->tSchCod.C2KSOCM_EVRCA = u2Val;
		break;
		
		case SAL_C2K_SOCM_EVRCB:
			SphCUIF->tSchCod.C2KSOCM_EVRCB = u2Val;
		break;
		
		case SAL_C2K_SOCM_EVRCNW_NB:
			SphCUIF->tSchCod.C2KSOCM_EVRCNW_NB = u2Val;
		break;
		
		case SAL_C2K_SOCM_EVRCNW_WB:
			SphCUIF->tSchCod.C2KSOCM_EVRCNW_WB = u2Val;
		break;
		
		case SAL_C2K_ENC_MAX_RATE:
			SphCUIF->tSchCod.C2KEncMaxRate = u2Val;
		break;
		
		case SAL_C2K_EBNT:
			SphCUIF->tSchCod.C2KCodEBNT = u2Val;
		break;
		
		case SAL_C2K_DL_RATE:
			SphCUIF->tSchCod.CodHdr_DL = u2Val;
		break;
		
		default:
		break;
	}
}

void SALI_C2K_TTY_Switch(bool bOn)
{
	if(bOn)
		SphCUIF->tSchCod.C2KCodFunCtrl |= C2K_COD_FUN_CTRL_BIT_TTY;
	else
		SphCUIF->tSchCod.C2KCodFunCtrl &= ~C2K_COD_FUN_CTRL_BIT_TTY;
}

void SALI_C2K_SetTTYStatus(bool bUL, bool bDL)
{	
	if(bUL)
		SphCUIF->tSchCod.C2KCodTTYStatus |= SAL_BIT0;
	else
		SphCUIF->tSchCod.C2KCodTTYStatus &= ~SAL_BIT0;
	
	if(bDL)
		SphCUIF->tSchCod.C2KCodTTYStatus |= SAL_BIT1;
	else
		SphCUIF->tSchCod.C2KCodTTYStatus &= ~SAL_BIT1;
}

void SALI_C2K_COD_Feature_Switch(uint16 u2CodFea, bool bOn)
{
	switch (u2CodFea)
	{
		case SAL_C2K_COD_FEATURE_HPF:
			if(bOn)
				SphCUIF->tSchCod.C2KCodFeaSwitch |= C2K_COD_FEA_SWITCH_BIT_HPF;
			else
				SphCUIF->tSchCod.C2KCodFeaSwitch &= ~C2K_COD_FEA_SWITCH_BIT_HPF;
		break;
		
		case SAL_C2K_COD_FEATURE_POS_FLT:
			if(bOn)
				SphCUIF->tSchCod.C2KCodFeaSwitch |= C2K_COD_FEA_SWITCH_BIT_POSFLT;
			else
				SphCUIF->tSchCod.C2KCodFeaSwitch &= ~C2K_COD_FEA_SWITCH_BIT_POSFLT;
		break;
		
		case SAL_C2K_COD_FEATURE_PITCH_PRE_FLT:
			if(bOn)
				SphCUIF->tSchCod.C2KCodFeaSwitch |= C2K_COD_FEA_SWITCH_BIT_PREFLT;
			else
				SphCUIF->tSchCod.C2KCodFeaSwitch &= ~C2K_COD_FEA_SWITCH_BIT_PREFLT;
		break;
		
		default:
		break;
	}
}

volatile uint16* SALI_C2K_GetAddr(uint16 type)
{
	volatile uint16* addr = 0;

	switch(type)
	{
		case SAL_C2K_ADDR_TXHB:
			addr = SphCUIF->tSchCod.CodHB_UL;
		break;
		
		case SAL_C2K_ADDR_RXHB:
			addr = SphCUIF->tSchCod.CodHB_DL;
		break;
		
		default:
			//ASSERT_REBOOT(0);
		break;
	}

	return addr;
}

uint16 SALI_C2K_GetValue(uint16 type)
{
	uint16 val = 0;
	
	switch(type)
	{
		case SAL_C2K_VALUE_SO:
			val = SphCUIF->tSchVM.CodUsedMode_UL;
		break;
		
		case SAL_C2K_VALUE_UL_RATE:
			val = SphCUIF->tSchCod.CodHdr_UL;
		break;
		
		case SAL_C2K_VALUE_DL_RATE:
			val = SphCUIF->tSchCod.CodHdr_DL;
		break;
		
		default:
			//ASSERT_REBOOT(0);
		break;
	}

	return val;
}


bool SALI_C2K_IsSOWB(uint16 u2SO)
{
	if(SAL_C2K_COD_EVRCNW_WB == u2SO)
	{
		return true;
  }
  	return false;
}

//uint16 SALI_SO_DSP_MAP(uint16 u2SO)
//{
//	uint16 u2SO_New;
//	switch(u2SO)
//	{
//		case IPC_SPCH_SRVC_OPTION17:
//			u2SO_New = DSP_SPH_QCELP13K;
//		break;
//		
//		case IPC_SPCH_SRVC_OPTION3:
//			u2SO_New = DSP_SPH_EVRCA;
//		break;
//		
//		case IPC_SPCH_SRVC_OPTION68:
//			u2SO_New = DSP_SPH_EVRCB;
//		break;
//		
//		case IPC_SPCH_SRVC_OPTION73:
//		case IPC_SPCH_SRVC_OPTION73WB:
//			u2SO_New = DSP_SPH_EVRCNW;
//		break;
//		
//		default:
//		break;
//	}
//	return u2SO_New;
//}
void SALI_SCH_Feature_Switch(uint16 u2SchFea, bool bOn)
{
	switch (u2SchFea)
	{
		case SAL_SCH_FEATURE_SDSP_CONFIG_DEL_RW:
			if(bOn)
				SphCUIF->tSchCom.SchFeatureCtrl |= SAL_BIT0;
			else
				SphCUIF->tSchCom.SchFeatureCtrl &= ~SAL_BIT0;
		break;
		
		case SAL_SCH_FEATURE_C2K_SMR:
			if(bOn)
				SphCUIF->tSchCom.SchFeatureCtrl |= SAL_BIT1;
			else
				SphCUIF->tSchCom.SchFeatureCtrl &= ~SAL_BIT1;
		break;
		
		default:
		break;
	}
}

void SALI_TestMode_Config(uint16 TestMode_Ctrl, uint16 TestMode_Scenario)
{
   
    SphCUIF->tSchTest.TestMode_Com = TestMode_Ctrl;
    SphCUIF->tSchTest.TestMode_2G = 0;
    SphCUIF->tSchTest.TestMode_3G = 0;
    SphCUIF->tSchTest.TestMode_4G = 0;
    SphCUIF->tSchTest.TestMode_C2K = 0;

    switch(TestMode_Scenario)
    {
        case SAL_DSP_TESTMODE_2G_FR:
            SphCUIF->tSchTest.TestMode_2G = 1;
            break;
        case SAL_DSP_TESTMODE_2G_HR:
            SphCUIF->tSchTest.TestMode_2G = 2;
            break;
        case SAL_DSP_TESTMODE_2G_EFR:
            SphCUIF->tSchTest.TestMode_2G = 3;
            break;
        case SAL_DSP_TESTMODE_2G_AMR:
            SphCUIF->tSchTest.TestMode_2G = 4;
            break;
        case SAL_DSP_TESTMODE_2G_AWB:
            SphCUIF->tSchTest.TestMode_2G = 5;
            break;
        
        case SAL_DSP_TESTMODE_3G_AMR:
            SphCUIF->tSchTest.TestMode_3G = 1;
            break;
        case SAL_DSP_TESTMODE_3G_AWB:
            SphCUIF->tSchTest.TestMode_3G = 2;
            break;
        
        case SAL_DSP_TESTMODE_4G_AMR:
            SphCUIF->tSchTest.TestMode_4G = 1;
            break;
        case SAL_DSP_TESTMODE_4G_AWB:
            SphCUIF->tSchTest.TestMode_4G = 2;
            break;
        case SAL_DSP_TESTMODE_4G_EVS:
            SphCUIF->tSchTest.TestMode_4G = 3;
            break;
        
        case SAL_DSP_TESTMODE_C2K_EVRCA:
            SphCUIF->tSchTest.TestMode_C2K = 1;
            break;
        case SAL_DSP_TESTMODE_C2K_EVRCB:
            SphCUIF->tSchTest.TestMode_C2K = 2;
            break;
        
        default:
            break;
    }     
    
}

void SALI_DebugMode_Config(uint16 DebugMode)
{
    SphCUIF->tSchCom.DebugMode = DebugMode;
}

void SALI_TestMode_AFEDVT_Config(uint16 UL_Ch, uint16 DL_Ch)
{
    SphCUIF->tSchTest.TestMode_AFE = UL_Ch;
    SphCUIF->tSchTest.TestMode_AFE |= DL_Ch<<4;   
}


void SALI_EVS_Set_Enc_Par(EVS_ENCODER_PARAMETER *EncPar)
{
    
//    sal_impl.enc_mod = EncPar->codec;
//    SphCUIF->tSchCod.CodMode_UL = EncPar->codec;
    SALI_Upd_3G_Enc_Rate(EncPar->codec);
//    SALI_Upd_3G_Dec_Rate(EncPar->codec);
    
//ToDo: Implement in uSIP?	
    //gEVS_DrvPar.u2Enc_ID = GET_SP4G_CODEC_ENUM_EVS_ID(pEncILM->pEVS_EncPar->codec);
    //gEVS_DrvPar.u2Enc_BW = GET_SP4G_CODEC_ENUM_EVS_BW(pEncILM->pEVS_EncPar->codec);
    //gEVS_DrvPar.u2Enc_Rate = GET_SP4G_CODEC_ENUM_EVS_RATE(pEncILM->pEVS_EncPar->codec);
        
    
    SphCUIF->tCodEVS.tEncPar.NWReqBW = (kal_uint16)((EncPar->EVS_network_request_bw) >> 4);
    //SphCUIF->tCodEVS.tEncPar.PCMBW = SphCUIF->tCodEVS.tEncPar.NWReqBW;
    SphCUIF->tCodEVS.PCMBW = SphCUIF->tCodEVS.tEncPar.NWReqBW;

    
    SphCUIF->tCodEVS.tEncPar.PCMBW = SphCUIF->tCodEVS.PCMBW;
    SphCUIF->tCodEVS.NWReqBW = SphCUIF->tCodEVS.tEncPar.NWReqBW;
    
 
    SALI_3G_SetDtx(EncPar->DTX);
     
    // CA parameter
    SphCUIF->tCodEVS.tEncPar.tCAPar.Enable = EncPar->EVS_CA_Par.enable;
    SphCUIF->tCodEVS.tEncPar.tCAPar.RF_FEC_Indicator = EncPar->EVS_CA_Par.rf_fec_indicator;
    SphCUIF->tCodEVS.tEncPar.tCAPar.RF_FEC_Offset = EncPar->EVS_CA_Par.rf_fec_offset;
    L1Audio_Msg_SAL_PROC(SAL_PROC_NAME(53), 0, EncPar->codec, SphCUIF->tCodEVS.PCMBW, SphCUIF->tCodEVS.NWReqBW);
    L1Audio_Msg_SAL_PROC(SAL_PROC_NAME(53), 1, EncPar->DTX, SAL_UNKNOWN, SAL_UNKNOWN);
    L1Audio_Msg_SAL_PROC(SAL_PROC_NAME(53), 2, SphCUIF->tCodEVS.tEncPar.tCAPar.Enable, SphCUIF->tCodEVS.tEncPar.tCAPar.RF_FEC_Indicator, SphCUIF->tCodEVS.tEncPar.tCAPar.RF_FEC_Offset);
    
}

void SALI_EVS_Set_Dec_Par(EVS_DECODER_PARAMETER *DecPar)
{
    
    //SphCUIF->tCodEVS.tDecPar.PCMBW = (kal_uint16)(DecPar->EVS_PCM_bw);

    SphCUIF->tCodEVS.tDecPar.PCMBW = SphCUIF->tCodEVS.PCMBW;

    SphCUIF->tCodEVS.tDecPar.HBLen = (kal_uint16)(DecPar->EVS_HBLen);
    SphCUIF->tCodEVS.tDecPar.BFI = SAL_EVS_SPEECH_GOOD_FRAME;
    
    // CA parameter
    SphCUIF->tCodEVS.tDecPar.tCAPar.FrmMode = (kal_uint16)(DecPar->EVS_CA_Par.FrameMode);
    SALI_Upd_3G_Dec_Rate(DecPar->codec);
    
    L1Audio_Msg_SAL_PROC(SAL_PROC_NAME(54), SphCUIF->tCodEVS.tDecPar.PCMBW, SphCUIF->tCodEVS.tDecPar.HBLen, SphCUIF->tCodEVS.tDecPar.BFI, SphCUIF->tCodEVS.tDecPar.tCAPar.FrmMode);
}

bool SALI_EVS_Get_Enc_SIDFirst_Status()
{
    if(SphCUIF->tCodEVS.tEncPar.SIDFirst)
        return true;
    else
        return false;
}

void SALI_EVS_Set_Dec_SIDFirst_Status(bool sta)
{
    if(sta)
        SphCUIF->tCodEVS.tDecPar.SIDFirst = 1;
    else
        SphCUIF->tCodEVS.tDecPar.SIDFirst = 0;
}

kal_uint16 SALI_EVS_Get_Dec_BFI()
{
    return (SphCUIF->tCodEVS.tDecPar.BFI);  
}

kal_uint16 SALI_EVS_Get_Dec_HBLen()
{
    return (SphCUIF->tCodEVS.tDecPar.HBLen);  
}

kal_uint16 SALI_EVS_Get_Enc_BFI()
{
    return (SphCUIF->tCodEVS.tEncPar.BFI);  
}

kal_uint16 SALI_EVS_Get_Enc_HBLen()
{
    return (SphCUIF->tCodEVS.tEncPar.HBLen);  
}

bool SALI_EVS_IsDTXOn()
{
    if(SphCUIF->tSchCod.CodMainCtrl_UL & SPH_COD_CTR_DTX)    
        return true;
    else
        return false;
    
}
kal_uint16 SALI_EVS_Get_PCMBW()
{
    return (SphCUIF->tCodEVS.PCMBW);  
}

kal_uint16 SALI_EVS_Get_Enc_MaxRate()
{
    return (SphCUIF->tCodEVS.NWReqBW);  
}

kal_uint16 SALI_EVS_Get_Enc_CA_Enable()
{
    return (SphCUIF->tCodEVS.tEncPar.tCAPar.Enable);
}

kal_uint16 SALI_EVS_Get_Enc_CA_RF_FEC_Indicator()
{
    return (SphCUIF->tCodEVS.tEncPar.tCAPar.RF_FEC_Indicator);
}

kal_uint16 SALI_EVS_Get_Enc_CA_RF_FEC_Offset()
{
    return (SphCUIF->tCodEVS.tEncPar.tCAPar.RF_FEC_Offset);
}

kal_uint16 SALI_EVS_Get_Dec_CA_FrmMode()
{
    return (SphCUIF->tCodEVS.tDecPar.tCAPar.FrmMode);
}

kal_uint16 SALI_EVS_Get_Codec_Mode(kal_uint16 type)
{
    kal_uint16 val = 0;
    switch(type)
    {
        case SAL_EVS_TX_CODEC_MODE:
            val = SphCUIF->tSchVM.CodUsedMode_EVS_UL;
            break;
        
        case SAL_EVS_RX_CODEC_MODE:
            val = SphCUIF->tSchVM.CodUsedMode_EVS_DL;
            break;
        default:
            break;
    }
    
    return val;
}

void SALI_Sph_KeyTone_DL_On(kal_uint16 Freq_1, kal_uint16 Freq_2)
{
    SphCUIF->tSchKT.KTFreq_DL[0] = Freq_1;
    SphCUIF->tSchKT.KTFreq_DL[1] = Freq_2; 
    SphCUIF->tSchKT.KTCtrl_DL = SPH_KT_STA_ON;  
}

void SALI_Sph_KeyTone_DL_Off()
{
    SphCUIF->tSchKT.KTCtrl_DL = SPH_KT_STA_OFF;
}

void SALI_Sph_KeyTone_UL_On(kal_uint16 Freq_1, kal_uint16 Freq_2)
{
    SphCUIF->tSchKT.KTFreq_UL[0] = Freq_1;
    SphCUIF->tSchKT.KTFreq_UL[1] = Freq_2;
    SphCUIF->tSchKT.KTCtrl_UL = SPH_KT_STA_ON;   
}

void SALI_Sph_KeyTone_UL_Off()
{
    SphCUIF->tSchKT.KTCtrl_UL = SPH_KT_STA_OFF;
}

void SALI_ENH_ExtEchoRef_DelayConfig(kal_uint16 RefDelay, kal_uint16 ULDelay)
{
    SphCUIF->tEnhCom.ExtEchoRef_RefDelay = RefDelay;
    SphCUIF->tEnhCom.ExtEchoRef_ULDelay = ULDelay;
}

void SALI_Set_DevInfo(Sal_DevInfo_Int_t IntDevInfo, Sal_DevInfo_Ext_t ExtDevInfo)
{
    SphCUIF->tSchDev.DevInfo_Int = IntDevInfo;
    SphCUIF->tSchDev.DevInfo_Ext = ExtDevInfo;
}

void SALI_AAMPlus_Switch(bool on)
{
	if(on)
		SphCUIF->tSchLink.AAMPlus_Ctrl |= DSP_SPH_AAMPLUS_CTRL_BIT_SWITCH;//On
	else
		SphCUIF->tSchLink.AAMPlus_Ctrl &= ~DSP_SPH_AAMPLUS_CTRL_BIT_SWITCH;//Off
}

Sal_AAMPlus_State_t SALI_AAMPlus_Get_Enc_State()
{
    Sal_AAMPlus_State_t sta;

	sta = SphCUIF->tSchLink.AAMPlus_State;
	
	return sta;
    
}

void SALI_Set_LinkStatus(kal_uint16 LinkMode, bool on)
{
    kal_uint16 status = 0;
    
    if(on)
        status = 1;
    
    switch(LinkMode)
	{
	    case SAL_LINKSTATUS_2G:
		    SphCUIF->tSchLink.LinkStatus_2G = status;
		    break;
		    
	    case SAL_LINKSTATUS_3G:
	        SphCUIF->tSchLink.LinkStatus_3G = status;
		    break;
		    
		case SAL_LINKSTATUS_4G:    
		    SphCUIF->tSchLink.LinkStatus_4G = status;
		    break;
		    
		case SAL_LINKSTATUS_C2K:
		    SphCUIF->tSchLink.LinkStatus_C2K = status;
		    break;
	
	    default:
		    break;
	}
}

void SALI_SetVBIEndFSM(bool enable)
{
    if(enable)
        sal_impl.vbiend_fsm = true;
    else
        sal_impl.vbiend_fsm = false;
}

bool SALI_IsVBIEndFSMEnable()
{
    return sal_impl.vbiend_fsm;
}


bool SALI_IsVBIEndDone()
{
    if(SphCUIF->tSchCom.SEnd_State)
        return false;
    else
        return true;            
}

void SALI_ENH_SetParMemOccuState(uint8 Occupy)
{
    if(Occupy)
        SphCUIF->tSchEnh.ParOccuState = SPH_ENH_PAROCCU_MCU;
    else
        SphCUIF->tSchEnh.ParOccuState = SPH_ENH_PAROCCU_NONE;    
}

bool SALI_ENH_IsParMemAvailable()
{
    if(SphCUIF->tSchEnh.ParOccuState == SPH_ENH_PAROCCU_NONE)
        return true;
    else
        return false;        
}

void SALI_Set_4G_Handover()
{
    SphCUIF->tSchLink.HOCtrl |= SPH_HOCTRL_BIT_4G_HO;		
}

void SALI_Set_AWBPlusFlag(bool on)
{
    if(on)
        SphCUIF->tSchLink.AWBPlus_Flag |= SPH_BIT0;
    else
        SphCUIF->tSchLink.AWBPlus_Flag &= ~SPH_BIT0;    
}

void SALI_Set_MOSTestMode(bool update, kal_uint16 MOSTestMode)
{    
    if (MOSTestMode != SphCUIF->tSchCom.MOSTestMode)
    {
        SphCUIF->tSchCom.MOSTestMode = MOSTestMode;
        if (update)
        {
            SphCUIF->tSchEnh.ParUpdStateMOS = 1;
        }
    }
}

void SALI_Set_Repeat_Flag(kal_uint16 flag)
{
    SphCUIF->tSchCod.CodRptFlag = flag;
}

kal_uint16 SALI_Get_Repeat_Flag()
{
    return SphCUIF->tSchCod.CodRptFlag;
}


//ul_dl @ 0 : ul, 1 : dl
kal_uint16 SALI_Get_CodecMode(uint8 ul_dl)
{
    if(ul_dl == 0)
        return SphCUIF->tSchCod.CodMode_UL;
    else if(ul_dl == 1)
        return SphCUIF->tSchCod.CodMode_DL;
    else
        return 0;    
}
void SALI_Mixer2_Switch(bool on)
{

	if(on)
		SphCUIF->tSchMixer2.Mixer2Ctrl = 1;//initialize
	else
		SphCUIF->tSchMixer2.Mixer2Ctrl = 3;//finalize

}

bool SALI_Mixer2_IsRunning()
{

	if(SphCUIF->tSchMixer2.Mixer2Ctrl == 2)
		return true;
	else
		return false;
}

bool SALI_Mixer2_IsOFF()
{

	if(SphCUIF->tSchMixer2.Mixer2Ctrl == 0)
		return true;
	else
		return false;
}

void SALI_Mixer2_Config(uint16 ulgain, uint16 dlgain, bool ulmix, bool dlmix)
{

    SphCUIF->tSchMixer2.Mixer2MixCtrl = (ulmix << 1) | dlmix;    
    //SphCUIF->tSchMixer2.Mixer2Gain_UL = ulgain;
    SphCUIF->tSchMixer2.Mixer2Gain_DL = dlgain;

}

//ul_dl @ 0 : ul, 1 : dl
volatile uint16* SALI_Mixer2_GetBuf(uint8 ul_dl)
{
	volatile uint16* ptr;

	if(ul_dl == 0)
    	//ptr = (uint16*)SphEXTCUIF->tSchBGS.BGSBuf_UL;
    	ptr = (uint16*)SphCUIF->tSALTemp.DummyBuf;
	else
	    ptr = (uint16*)SphEXTCUIF->tSchMixer2.Mixer2Buf_DL;
	    
	return ptr;
}

//ul_dl @ 0 : ul, 1 : dl
uint16 SALI_Mixer2_GetDataLen(uint8 ul_dl)
{
	uint16 len = 0;
	
	if(ul_dl == 0)
		//len = SphCUIF->tSchMixer2.Mixer2Len_UL;
		len = 0;
	else
		len = SphCUIF->tSchMixer2.Mixer2Len_DL;

	return len;
}

kal_uint16 SALI_Get_VCPMode()
{
	return SphCUIF->tSchEMP.DebugInfo[10];
}

void SALI_Mixer3_Switch(bool on)
{
    if(on)
    {
        SphCUIF->tSchMixer3.MainCtrl = 1;//initialize
    }
    else
    {
        SphCUIF->tSchMixer3.MainCtrl = 3;//finalize
    }
}

bool SALI_Mixer3_IsRunning()
{
    if(SphCUIF->tSchMixer3.MainCtrl == 2)
        return true;
    else
        return false;
}

bool SALI_Mixer3_IsOFF()
{
    if(SphCUIF->tSchMixer3.MainCtrl == 0)
        return true;
    else
        return false;
}

void SALI_Mixer3_Config(uint16 gain, bool mix)
{
    SphCUIF->tSchMixer3.MixCtrl = mix;
    SphCUIF->tSchMixer3.Gain = gain;
}

//ul_dl @ 0 : ul, 1 : dl
volatile uint16* SALI_Mixer3_GetBuf()
{
    return (volatile uint16*) SphEXTCUIF->tSchMixer3.DataBuf;
}

void SALI_Mixer3_SetDataLen(uint16 len)
{
    SphCUIF->tSchMixer3.DataLen = len;
}

kal_uint16 SALI_Get_Codec_Mode(kal_uint16 type)
{
    if(type==0)
    {
        return SphCUIF->tSchVM.CodUsedMode_UL;
    }
    else
    {
        return SphCUIF->tSchVM.CodUsedMode_DL;
    }
}
