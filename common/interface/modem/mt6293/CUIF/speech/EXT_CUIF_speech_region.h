#ifndef __EXT_CUIF_SPEECH_REGION_H__
#define __EXT_CUIF_SPEECH_REGION_H__

typedef volatile struct {
    kal_int8 dummy_buffer[0xC00] __attribute__ ((aligned (32)));
} SphExt_Dummy3K_t;

typedef volatile struct {
    kal_int8 dummy_buffer[0x200] __attribute__ ((aligned (32)));
} SphExt_Dummy512_t;

typedef volatile struct {
    
    kal_int16 PNWBuf_M2D_UL1[640] __attribute__ ((aligned (32)));
    kal_int16 PNWBuf_M2D_UL2[640] __attribute__ ((aligned (32)));
    kal_int16 PNWBuf_M2D_UL3[640] __attribute__ ((aligned (32)));
    kal_int16 PNWBuf_M2D_UL4[640] __attribute__ ((aligned (32)));
    kal_int16 PNWBuf_M2D_DL1[640] __attribute__ ((aligned (32)));
    
    kal_int16 PNWBuf_D2M_UL1[640] __attribute__ ((aligned (32)));
    kal_int16 PNWBuf_D2M_UL2[640] __attribute__ ((aligned (32)));
    kal_int16 PNWBuf_D2M_UL3[640] __attribute__ ((aligned (32)));
    kal_int16 PNWBuf_D2M_UL4[640] __attribute__ ((aligned (32)));
    kal_int16 PNWBuf_D2M_DL1[640] __attribute__ ((aligned (32)));
} SphExt_Sch_PNW_t;

typedef volatile struct {
    
    kal_int16 BGSBuf_UL[640] __attribute__ ((aligned (32)));
    kal_int16 BGSBuf_DL[640] __attribute__ ((aligned (32)));    
    
} SphExt_Sch_BGS_t;

typedef volatile struct {
    
    kal_int16 ExtCodBuf_UL[640] __attribute__ ((aligned (32)));
    kal_int16 ExtCodBuf_DL[640] __attribute__ ((aligned (32)));    
    
} SphExt_Sch_ExtCod_t;

typedef volatile struct {
    
    kal_int16 DACABuf_UL1[640] __attribute__ ((aligned (32)));
    kal_int16 DACABuf_UL2[640] __attribute__ ((aligned (32)));
    kal_int16 DACABuf_UL3[640] __attribute__ ((aligned (32)));
    kal_int16 DACABuf_DL[640] __attribute__ ((aligned (32)));
        
} SphExt_Sch_DACA_t;

typedef volatile struct {
    
    kal_int16 PCMRecBuf_UL[640] __attribute__ ((aligned (32)));
    kal_int16 PCMRecBuf_DL[640] __attribute__ ((aligned (32)));
    
    
} SphExt_Sch_PCMRec_t;


typedef volatile struct {    
    
    kal_uint16 ModPar_NB[48];
    kal_uint16 ModPar_WB[48];
    kal_uint16 ModPar_SWB[48];   
    
} SphExt_Sch_EMP_t;


typedef volatile struct {
    
    kal_int16 DPLBuf_UL_Pre[960] __attribute__ ((aligned (32)));
    kal_int16 DPLBuf_UL_Pos[960] __attribute__ ((aligned (32)));
    kal_int16 DPLBuf_DL_Pre[960] __attribute__ ((aligned (32)));
    kal_int16 DPLBuf_DL_Pos[960] __attribute__ ((aligned (32)));
    kal_int16 DPLBuf_UL_2[960] __attribute__ ((aligned (32)));
    kal_int16 DPLBuf_UL_3[960] __attribute__ ((aligned (32)));
    
} SphExt_Sch_DPL_t;


typedef volatile struct {
        
    kal_int16 DPLBuf_UL_4[960] __attribute__ ((aligned (32)));
    
} SphExt_Sch_DPL2_t;



typedef volatile struct {
    
    //kal_int16 Mixer2Buf_UL[640] __attribute__ ((aligned (32)));
    kal_int16 Mixer2Buf_DL[640] __attribute__ ((aligned (32)));    
    
} SphExt_Sch_Mixer2_t;

typedef volatile struct {
    
    kal_int16 DataBuf[960] __attribute__ ((aligned (32)));    
    
} SphExt_Sch_Mixer3_t;

typedef volatile struct {
    
    kal_int16 DbgInfo[160];

    kal_int16 AGC_HPFlt_Coef[40];
    kal_int16 CompenFlt_NB_Coef[270];
    kal_int16 CompenFlt_WB_Coef[270];
    kal_int16 CompenFlt_SWB_Coef[270];
    kal_int16 DMNR_NB_Cal_Data[44];
    kal_int16 DMNR_WB_Cal_Data[76];
    kal_int16 DMNR_SWB_Cal_Data[120];
    kal_int16 DMNR_LSpk_NB_Cal_Data[44];
    kal_int16 DMNR_LSpk_WB_Cal_Data[76];
    kal_int16 DMNR_LSpk_SWB_Cal_Data[120];
    
    kal_int16 Mic1IIR_NB_UL_Coef[20];
    kal_int16 Mic2IIR_NB_UL_Coef[20];
    kal_int16 Mic1IIR_WB_UL_Coef[20];
    kal_int16 Mic2IIR_WB_UL_Coef[20];
    kal_int16 Mic1IIR_SWB_UL_Coef[20];
    kal_int16 Mic2IIR_SWB_UL_Coef[20];


    kal_int16 TunableIIR_NB_UL_Coef[42]; 
    kal_int16 TunableIIR_NB_DL_Coef[42]; 
    kal_int16 TunableIIR_WB_UL_Coef[42]; 
    kal_int16 TunableIIR_WB_DL_Coef[42]; 
    kal_int16 TunableIIR_SWB_UL_Coef[42];
    kal_int16 TunableIIR_SWB_DL_Coef[42];
    kal_int16 MicSelectionIIR_UL_Coef[32];
    
    
} SphExt_Enh_Com_t;


typedef volatile struct {
    
    SphExt_Dummy3K_t        tDummy1;
    SphExt_Sch_PNW_t        tSchPNW;
    SphExt_Dummy512_t       tDummy2;
    SphExt_Dummy3K_t        tDummy3;
    SphExt_Sch_BGS_t        tSchBGS;
    SphExt_Sch_ExtCod_t     tSchExtCod;
    SphExt_Sch_DACA_t       tSchDACA;
    SphExt_Sch_PCMRec_t     tSchPCMRec;  
    SphExt_Dummy512_t       tDummy4;
    SphExt_Dummy3K_t        tDummy5;
    SphExt_Sch_DPL_t        tSchDPL;
    SphExt_Sch_Mixer2_t     tSchMixer2;
    SphExt_Dummy512_t       tDummy6; 
    SphExt_Dummy3K_t        tDummy7;
    SphExt_Sch_DPL2_t       tSchDPL2;  
    SphExt_Sch_Mixer3_t     tSchMixer3;
    SphExt_Enh_Com_t        tEnhCom;
    SphExt_Sch_EMP_t        tSchEMP;  
    
} EXT_CUIF_Speech_Region_t;



#endif // __CUIF_SPEECH_REGION_H__
