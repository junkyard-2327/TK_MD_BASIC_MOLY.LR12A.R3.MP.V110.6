#ifndef __CUIF_SPEECH_REGION_H__
#define __CUIF_SPEECH_REGION_H__

typedef volatile struct {
    kal_uint16 SSPPath_Ctrl;           //DP_AUDIO_CTRL2    
    kal_uint16 MuteCtrl;               //SPH_MUTE_CTRL
    kal_uint16 RampCtrlUL1;               //SPH_RAMP_CTRL
    kal_uint16 RampCtrlUL2;               //SPH_RAMP_CTRL
    kal_uint16 RampCtrlDL1;               //SPH_RAMP_CTRL
    kal_uint16 RampCtrlDL2;               //SPH_RAMP_CTRL
    kal_uint16 ImproveCtrl;            //SPH_SCH_IMPROVE_CTRL
    kal_uint16 SchFeatureCtrl;         //SPH_SCH_FEATURE_CTRL
    kal_uint16 SphAppMode;             //SPH_APP_MODE
    kal_uint16 AVBTCtrl;               //DP2_AUDIO_VIA_BT_CTRL
    kal_uint16 PRTCtrl;                //SPH_PCM_ROUTER_CTRL
    kal_uint16 PCMRecCtrl;             //SPH_PCM_REC_CTRL
    kal_uint16 SchBand;
    kal_uint16 VADDL;
    
    kal_uint16 FWLAModeCtrl;           //SPH_DYNA_FWLA_MODE_CTRL
    kal_uint16 DebugMode;              //SPH_DBG_MOD
    kal_uint16 SphTaskID;              //DP_605_no_8k_Task_Id, DP_605_Task_Id
    kal_uint16 SphWarnMsg_UL;          //SPH_WARN_MSG_UL
    kal_uint16 SphWarnMsg_DL;          //SPH_WARN_MSG_DL
//    kal_uint16 SphSRstState;
//    kal_uint16 SphSEndState;
    kal_uint16 SphC2UTask;
    
    kal_uint16 SEnd_State;
    kal_uint16 MOSTestMode;              //MOS TestMode
    kal_uint16 PCMRec_DL_Pos;
     
} Sph_Sch_Com_t;


typedef volatile struct {
    kal_uint16 DevMode;                //SPH_8K_CTRL, SPH_DEV_MODE
    kal_uint16 DevBand;                //SPH_8K_CTRL, SPH_DEV_MODE
    kal_uint16 BTMode;                 //SPH_BT_MODE
    kal_uint16 BTCtrl;                 //SPH_BT_CTRL
    kal_uint16 Mic2Ctrl;               //SPH_DUMIC_CTRL
    kal_uint16 Mic3Ctrl;               //SPH_THIRDMIC_CTRL
    kal_uint16 Mic4Ctrl;               //SPH_FOURTHMIC_CTRL
    kal_uint16 ERCtrl;                 //SPH_ANC_CTRL
    
    kal_uint16 BTModeErrAssertCtrl;    //DP_AMR_Mode_Error_Assert_Type
    kal_uint16 BTModeErrAssertStatus;  //DP_AMR_Mode_Error_Assert_Flag
    
    kal_uint16 DevInfo_Int;
    kal_uint16 DevInfo_Ext;
    
} Sph_Sch_Dev_t;



typedef volatile struct {
    kal_uint16 DelR;                   //SPH_DEL_R
    kal_uint16 DelW;                   //SPH_DEL_W
    kal_uint16 DelM_DL;                //SPH_DEL_M_UL
    kal_uint16 DelM_UL;                //SPH_DEL_M_DL
    kal_uint16 DelO;                   //SPH_DEL_O
    
    kal_uint16 SphMdmSyncStatus_3G;    //SPH_3G_UNSYNC_STATUS
    kal_uint16 SphMdmSyncStatus_C2K;   //SPH_C2K_UNSYNC_STATUS
    
    kal_uint16 SMRCtrl_2G;             //SPH_SCH_IMPROVE_CTRL
    
    kal_uint16 SSPResyncCtrl;          //SPH_8K_RESYNC_CTRL
    kal_int16 SSPResyncOffset_UL;     //SPH_8K_RESYNC_OFFSET_UL
    kal_int16 SSPResyncOffset_DL;     //SPH_8K_RESYNC_OFFSET_DL
    
    kal_uint16 SERate_3G;              //SPH_3G_SE_RATE_UPDATE
    kal_uint16 SDRate_3G;              //SPH_3G_SD_RATE_UPDATE
    
    kal_uint16 HOCtrl;
    kal_uint16 LinkMode_3G;    //WCDMA, TDSCDMA
    kal_uint16 AAMPlus_Ctrl;
    kal_uint16 AAMPlus_State;
    kal_uint16 LinkStatus_2G;
    kal_uint16 LinkStatus_3G;
    kal_uint16 LinkStatus_C2K;
    kal_uint16 LinkStatus_4G;
    
    kal_uint16 JBM_PO_SN;
    kal_uint16 AWBPlus_Flag;
    
} Sph_Sch_Link_t;


typedef volatile struct {
    kal_uint16 U2CFlag_ULStart;         
    kal_uint16 U2CFlag_ULEnd;          //DP_D2C_SPEECH_UL_INT
    kal_uint16 U2CFlag_DLEnd;          //DP_D2C_SPEECH_DL_INT
    kal_uint16 U2CFlag_DLStart;          
    
} Sph_Sch_U2C_t;


typedef volatile struct {
    kal_uint16 CodMainCtrl_UL;            //SPH_COD_CTRL
    kal_uint16 CodMainCtrl_DL;            //SPH_COD_CTRL
    kal_uint16 CodMode_UL;                //UL SPH_COD_MODE
    kal_uint16 CodMode_DL;                //DL SPH_COD_MODE
    kal_uint16 CodHdr_UL;              //SPH_2G_SE_DATA_HDR,SPH_3G_SE_DATA_HDR
    kal_uint16 CodHdr_DL;              //SPH_2G_SD_DATA_HDR,SPH_3G_SD_DATA_HDR
    kal_uint16 CodHB_UL[160];          //SPH_2G_SE_DATA_HB,SPH_3G_SE_DATA_HB
    kal_uint16 CodHB_DL[160];          //SPH_2G_SD_DATA_HB,SPH_3G_SD_DATA_HB
        
    kal_uint16 C2KCodFunCtrl;          //SPH_C2K_COD_FUN_CTRL
    kal_uint16 C2KCodFeaSwitch;        //SPH_C2K_COD_FEATURE_SWITCH
    kal_uint16 C2KEncMaxRate;          //SPH_C2K_ENC_MAX_RATE
    kal_uint16 C2KCodEBNT;             //SPH_C2K_COD_EBNT
    kal_uint16 C2KCodTTYStatus;        //SPH_C2K_COD_TTY_STATUS
    kal_uint16 C2KSOCM_QCELP13K;       //SPH_C2K_SOCM_QCELP13K
    kal_uint16 C2KSOCM_EVRCA;          //SPH_C2K_SOCM_EVRCA
    kal_uint16 C2KSOCM_EVRCB;          //SPH_C2K_SOCM_EVRCB
    kal_uint16 C2KSOCM_EVRCNW_NB;      //SPH_C2K_SOCM_EVRCNW_NB
    kal_uint16 C2KSOCM_EVRCNW_WB;      //SPH_C2K_SOCM_EVRCNW_WB
    
    kal_uint16 CodRptFlag;                //DL Repeat Previous
} Sph_Sch_Cod_t;


typedef volatile struct {
    kal_uint16 EnhMainCtrl;
    kal_uint16 EnhMainCtrl_UL;         //SPH_ENH_UL_CTRL
    kal_uint16 EnhMainCtrl_DL;         //SPH_ENH_DL_CTRL
    kal_uint16 ParUpdState;
    kal_uint16 CtrlUpdState;
    kal_uint16 ParOccuState;
    kal_uint16 ParUpdStateMOS;
} Sph_Sch_Enh_t;


typedef volatile struct {    
    kal_uint16 BGSCtrl;                //SPH_BGS_CTRL
    kal_uint16 BGSMixCtrl;             //SPH_BGS_MIX 
    kal_uint16 BGSGain_UL;             //SPH_BGS_UL_GAIN
    kal_uint16 BGSGain_DL;             //SPH_BGS_DL_GAIN
    kal_uint16 BGSLen_UL;              //SPH_BGS_LEN_UL
    kal_uint16 BGSLen_DL;              //SPH_BGS_LEN_DL
    
    kal_uint16 MemAddr_BGSBuf_UL;      //SPH_DM_ADDR_BGS_UL_BUF
    kal_uint16 MemAddr_BGSBuf_DL;      //SPH_DM_ADDR_BGS_DL_BUF
    
} Sph_Sch_BGS_t;

typedef volatile struct {    
    kal_uint16 Mixer2Ctrl;                
    kal_uint16 Mixer2MixCtrl;            
    kal_uint16 Mixer2Gain_DL;          
    kal_uint16 Mixer2Len_DL;              
    
} Sph_Sch_Mixer2_t;


typedef volatile struct {
    kal_uint16 PNWCtrl_UL;            //SPH_PNW_CTRL_UL1
    kal_uint16 PNWPathCtrl_UL;            //SPH_PNW_CTRL_UL2
    kal_uint16 PNWCtrl_DL;             //SPH_PNW_CTRL_DL
    kal_uint16 PNWPathCtrl_DL;             //SPH_PNW_CTRL_DL
    kal_uint16 PNWLen_UL1;             //SPH_PNW_LEN_UL1
    kal_uint16 PNWLen_UL2;             //SPH_PNW_LEN_UL2
    kal_uint16 PNWLen_UL3;             //SPH_PNW_LEN_UL3
    kal_uint16 PNWLen_UL4;             //SPH_PNW_LEN_UL4
    kal_uint16 PNWLen_DL1;              //SPH_PNW_LEN_DL
    kal_uint16 MemAddr_PNWBuf_UL1;     //SPH_DM_ADDR_PNW_UL1_BUF
    kal_uint16 MemAddr_PNWBuf_UL2;     //SPH_DM_ADDR_PNW_UL2_BUF
    kal_uint16 MemAddr_PNWBuf_UL3;     //SPH_DM_ADDR_PNW_UL3_BUF
    kal_uint16 MemAddr_PNWBuf_UL4;     //SPH_DM_ADDR_PNW_UL4_BUF
    kal_uint16 MemAddr_PNWBuf_DL;     //SPH_DM_ADDR_PNW_DL_BUF
    
} Sph_Sch_PNW_t;

typedef volatile struct {
    kal_uint16 DACACtrl;               //SPH_DACA_CTRL
    kal_uint16 DACALen_UL;             //SPH_DACA_LEN_UL
    kal_uint16 DACALen_DL;             //SPH_DACA_LEN_DL
    kal_uint16 MemAddr_DACABuf_UL;     //SPH_DM_ADDR_DACA_UL_BUF
    kal_uint16 MemAddr_DACABuf_DL;     //SPH_DM_ADDR_DACA_DL_BUF
    
} Sph_Sch_DACA_t;

typedef volatile struct {    
    kal_uint16 ExtCodCtrl;             //SPH_EXTCOD_PEX_CTRL
    kal_uint16 ExtCodBufLen;           //SPH_EXTCOD_PEX_LEN
        
} Sph_Sch_ExtCod_t;

typedef volatile struct {    
    kal_uint16 VMCtrl;    
    kal_uint16 DebugInfo[100];         //DP_3G_DEBUG_INFO, DP_VM_DBG_INFO
    kal_uint16 CodUsedMode_UL;         //DP_Encoder_Used_Mode
    kal_uint16 CodUsedMode_DL;         //DP_Decoder_Used_Mode
    kal_uint16 CodUsedMode_EVS_UL;         
    kal_uint16 CodUsedMode_EVS_DL;         
    kal_uint16 CTMAMRRealRXType[5];    //SPH_CTM_AMR_REAL_RX_TYPE
        
} Sph_Sch_VM_t;

typedef volatile struct {    
    kal_uint16 DPL_Band;               //SPH_EPL_BND        
} Sph_Sch_DPL_t;

typedef volatile struct {    
    kal_uint16 CTMCtrl;                //SPH_CTM_CTRL
    kal_uint16 CTMBFIFacchReport;      //SPH_CTM_BFI_FACCH_REPORT
    kal_uint16 CTMAMRCBGainLimit;      //SPH_CTM_AMR_CODEBOOK_GAIN_LIMIT
    kal_uint16 CTMAMRCBGainUpdate;     //SPH_CTM_AMR_CODEBOOK_GAIN_UPDATE
        
} Sph_Sch_TTY_t;

typedef volatile struct {    
    kal_uint16 KTCtrl_DL;              //DP_KEYTONE_CTRL
    kal_uint16 KTCtrl_UL;              //DP_KEYTONE2_CTRL
    kal_uint16 ForceKT8K;              //DP_ASP_FORCE_KT_8K
    kal_uint16 KTFreq_DL[3];           //KEYTONE1_FREQ
    kal_uint16 KTFreq_UL[3];             //KEYTONE2_FREQ    
    kal_uint16 KTAttGain;              //DP_KEYTONE_ATT_GAIN     
} Sph_Sch_KT_t;

typedef volatile struct {    
    kal_uint16 MainCtrl;                //SPH_MIXER3_CTRL
    kal_uint16 MixCtrl;             //SPH_MIXER3_MIX
    kal_uint16 Gain;             //SPH_MIXER3_GAIN
    kal_uint16 DataLen;              //SPH_MIXER3_LEN    
} Sph_Sch_Mixer3_t;

typedef volatile struct {
    kal_uint16 TestMode_Com;
    kal_uint16 TestMode_2G;
    kal_uint16 TestMode_3G;
    kal_uint16 TestMode_4G;
    kal_uint16 TestMode_C2K;
    kal_uint16 TestMode_AFE;            // AFE loopback, 0-3bit: UL path, 4 bit: DL path
}Sph_Sch_Test_t;

typedef volatile struct {
    kal_uint16 ComPar[12];
    kal_uint16 ModPar_NB[48];
    kal_uint16 ModPar_WB[48];
    kal_uint16 ModPar_SWB[48];
    kal_uint16 DebugInfo[16];
    
}Sph_Sch_EMP_t;

typedef volatile struct {
    kal_uint16 TestSIMFlag;            //DP2_TEST_SIM_IND
    kal_uint16 DTXDespikeCtrl;         //DP_DTX_DSPK_FUN_CTRL_ADDR
    
} Sph_Cod_Com_t;

typedef volatile struct {
    kal_uint16 ImproveCtrl;            //DP_ENHANCED_AUDIO_CTRL
    kal_uint16 DTXDespikeBERThd;       //DP_FR_BER_THD_ADDR
} Sph_Cod_FR_t;

typedef volatile struct {
    kal_uint16 DTXDespikeBERThd;       //DP_HR_BER_THD_ADDR
    
} Sph_Cod_HR_t;

typedef volatile struct {
    kal_uint16 ImproveCtrl;            //DP_ENHANCED_AUDIO_CTRL+1
    kal_uint16 DTXDespikeBERThd;       //DP_EFR_BER_THD_ADDR
} Sph_Cod_EFR_t;


typedef volatile struct {
    kal_uint16 VADType;                //DP2_SC_VAC
    kal_uint16 AMRRateErrAssertCtrl;   //DP_AMR_Mode_Error_Assert_Type
    kal_uint16 AMRRateErrAssertStatus; //DP_AMR_Mode_Error_Assert_Flag
} Sph_Cod_AMR_t;

typedef volatile struct {
   kal_uint16 Enable;
   kal_uint16 RF_FEC_Indicator; // 0: Low(frame error rate < 5%).    1: High(frame error rate > 5%)
   kal_uint16 RF_FEC_Offset;
   kal_uint16 rev3;
   kal_uint16 rev4;
   kal_uint16 rev5;
} EVS_CAPars_Enc_t;

typedef volatile struct {
   kal_uint16 FrmMode;
   kal_uint16 rev1;
   kal_uint16 rev2;
   kal_uint16 rev3;
   kal_uint16 rev4;
   kal_uint16 rev5;
} EVS_CAPars_Dec_t;

typedef struct {
//   kal_int32       codec;
//   kal_int32       DTX;
   kal_uint16        NWReqBW;
   kal_uint16        CapaBW;
   kal_uint16        PCMBW;
   kal_uint16        SIDFirst;
   kal_uint16        Band;
   kal_uint16        BFI;
   kal_uint16        HBLen;
   EVS_CAPars_Enc_t  tCAPar;
} EVS_EncPars_t;

typedef volatile struct {
   kal_uint16        NWReqBW;
   kal_uint16        CapaBW;
   kal_uint16        PCMBW;
   kal_uint16        SIDFirst;
   kal_uint16        HBLen;
   kal_uint16        BFI;
   EVS_CAPars_Dec_t  tCAPar;
} EVS_DecPars_t;


typedef volatile struct {
    kal_uint16    PCMBW;
    kal_uint16    NWReqBW;
    
    EVS_EncPars_t tEncPar;
    EVS_DecPars_t tDecPar;
     
} Sph_Cod_EVS_t;



typedef volatile struct {
    kal_uint16 TDNCCtrl;               //DP_AEC_CTRL, DP_TDNC_CTRL
    kal_uint16 DMNRCtrl;               //DP_DMNR_CTRL
    kal_uint16 MgicConferencCtrl;
    kal_uint16 EnhVol_DL;              //SPH_DL_VOL
    kal_uint16 EnhVol_UL;              //SPH_UL_VOL
    kal_uint16 EnhGain_DL;             //SPH_ENH_DL_GAIN

    kal_uint16 EnhInternalPar[16];     //SPH_ENH_INTERNAL_PAR_ADDR
    kal_uint16 AGCCtrl;                //DP2_AGC_CTRL
    kal_uint16 AGCGain;                //DP2_AGC_GAIN
    
    
    kal_uint16 AGCSWGian1;             //DP_AGC_SW_GAIN1
    kal_uint16 AGCSWGian2;             //DP_AGC_SW_GAIN2
    kal_uint16 Attack_Gain_DL_NB;      //SPH_ATTACK_GAIN_DL_NB
    kal_uint16 Release_Gain_DL_NB;     //SPH_RELEASE_GAIN_DL_NB
    kal_uint16 Attack_Gain_DL_WB;      //SPH_ATTACK_GAIN_DL_WB
    kal_uint16 Release_Gain_DL_WB;     //SPH_RELEASE_GAIN_DL_WB
    kal_uint16 Attack_Gain_DL_SWB;      //SPH_ATTACK_GAIN_DL_SWB
    kal_uint16 Release_Gain_DL_SWB;     //SPH_RELEASE_GAIN_DL_SWB
    
    kal_uint16 ExtEchoRef_Switch;
    kal_uint16 ExtEchoRef_RefDelay;
    kal_uint16 ExtEchoRef_ULDelay;
} Sph_Enh_Com_t;

typedef volatile struct {
    kal_uint16 DummyBuf[160];          //Dummy buffer for get addr
}Sph_SAL_Temp_t;



typedef volatile struct {
    Sph_Sch_Com_t        tSchCom;
    Sph_Sch_Dev_t        tSchDev;
    Sph_Sch_Link_t       tSchLink;
    Sph_Sch_U2C_t        tSchU2C;
    Sph_Sch_Cod_t        tSchCod;
    Sph_Sch_Enh_t        tSchEnh;
    Sph_Sch_BGS_t        tSchBGS;
    Sph_Sch_Mixer2_t     tSchMixer2;
    Sph_Sch_PNW_t        tSchPNW;
    Sph_Sch_DACA_t       tSchDACA;
    Sph_Sch_ExtCod_t     tSchExtCod;
    Sph_Sch_VM_t         tSchVM;
    Sph_Sch_DPL_t        tSchDPL;
    Sph_Sch_TTY_t	     tSchTTY;
    Sph_Sch_KT_t         tSchKT;
    Sph_Sch_Mixer3_t     tSchMixer3;
    Sph_Sch_Test_t       tSchTest;
    Sph_Sch_EMP_t        tSchEMP;
    Sph_Cod_Com_t        tCodCom;
    Sph_Cod_FR_t         tCodFR;
    Sph_Cod_HR_t         tCodHR;
    Sph_Cod_EFR_t        tCodEFR;
    Sph_Cod_AMR_t        tCodAMR;
    Sph_Cod_EVS_t        tCodEVS;
    Sph_Enh_Com_t        tEnhCom;
    Sph_SAL_Temp_t       tSALTemp;
} CUIF_Speech_Region_t;



#endif // __CUIF_SPEECH_REGION_H__
