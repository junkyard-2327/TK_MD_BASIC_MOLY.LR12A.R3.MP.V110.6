#include "kal_public_api.h"
#include "kal_general_types.h"
#include "kal_trace.h"
#include "l1sp_trc.h"
#include "l1audio.h"
#include "drv_sap.h"
#include "speech_def.h"
#include "bgSnd.h"
#include "audio_msgid.h"
#include "sp_drv.h"
#include "am.h"
#include "sal_exp.h"


typedef struct
{
    kal_uint16        uAudId;
    kal_bool          IsUsed;
} st_DSPTone;


st_DSPTone stDSPToneUL;
st_DSPTone stDSPToneDL;


void SP_DSPTone_DL_KT_Play(kal_int16 freq1, kal_int16 freq2, kal_int16 duration)
{
    if( (stDSPToneDL.IsUsed==KAL_TRUE) || (AM_IsAmInSpeechState()==false) )
    {
        kal_trace( TRACE_FUNC, SP_DSPTONE_DL_KT_PLAY_SKIP);
        return;
    }
    stDSPToneDL.IsUsed = KAL_TRUE;

    kal_trace( TRACE_FUNC, SP_DSPTONE_DL_KT_PLAY_START, freq1, freq2, duration);

    stDSPToneDL.uAudId = L1Audio_GetAudioID();
    L1Audio_SetFlag( stDSPToneDL.uAudId );

    SAL_Sph_KeyTone_DL_On(freq1, freq2);

    kal_trace( TRACE_FUNC, SP_DSPTONE_DL_KT_PLAY_LEAVE);
}


void SP_DSPTone_DL_KT_Stop(void)
{
    if(stDSPToneDL.IsUsed == KAL_FALSE)
    {
        kal_trace( TRACE_FUNC, SP_DSPTONE_DL_KT_STOP_SKIP);
        return;
    }

    kal_trace( TRACE_FUNC, SP_DSPTONE_DL_KT_STOP_START);

    SAL_Sph_KeyTone_DL_Off();

    L1Audio_ClearFlag( stDSPToneDL.uAudId );
    L1Audio_FreeAudioID( stDSPToneDL.uAudId );

    stDSPToneDL.IsUsed = KAL_FALSE;

    kal_trace( TRACE_FUNC, SP_DSPTONE_DL_KT_STOP_LEAVE);
}


void SP_DSPTone_UL_KT_Play(kal_int16 freq1, kal_int16 freq2, kal_int16 duration)
{
    if( (stDSPToneUL.IsUsed==KAL_TRUE) || (AM_IsAmInSpeechState()==false) )
    {
        kal_trace( TRACE_FUNC, SP_DSPTONE_UL_KT_PLAY_SKIP);
        return;
    }
    stDSPToneUL.IsUsed = KAL_TRUE;

    kal_trace( TRACE_FUNC, SP_DSPTONE_UL_KT_PLAY_START, freq1, freq2, duration);

    stDSPToneUL.uAudId = L1Audio_GetAudioID();
    L1Audio_SetFlag( stDSPToneUL.uAudId );

    SAL_Sph_KeyTone_UL_On(freq1, freq2);

    kal_trace( TRACE_FUNC, SP_DSPTONE_UL_KT_PLAY_LEAVE);
}


void SP_DSPTone_UL_KT_Stop(void)
{
    if(stDSPToneUL.IsUsed == KAL_FALSE)
    {
        kal_trace( TRACE_FUNC, SP_DSPTONE_UL_KT_STOP_SKIP);
        return;
    }

    kal_trace( TRACE_FUNC, SP_DSPTONE_UL_KT_STOP_START);

    SAL_Sph_KeyTone_UL_Off();

    L1Audio_ClearFlag( stDSPToneUL.uAudId );
    L1Audio_FreeAudioID( stDSPToneUL.uAudId );

    stDSPToneUL.IsUsed = KAL_FALSE;

    kal_trace( TRACE_FUNC, SP_DSPTONE_UL_KT_STOP_LEAVE);
}


void SP_DSPTone_Init(void)
{
    stDSPToneUL.uAudId = 0;
    stDSPToneUL.IsUsed = KAL_FALSE;
    stDSPToneDL.uAudId = 0;
    stDSPToneDL.IsUsed = KAL_FALSE;
}


void SP_DSPTone_ForceEnd(void)
{
    SP_DSPTone_UL_KT_Stop();
    SP_DSPTone_DL_KT_Stop();
}


void  SP4G_PSR_DL_KT_Play(kal_int16 freq1, kal_int16 freq2, kal_int16 duration)
{
    ilm_PSR_DL_KT_t *local_para;

    kal_trace( TRACE_FUNC,SP4G_PSR_DL_KT_PLAY_ENTER); 
    local_para = (ilm_PSR_DL_KT_t *) construct_local_para( sizeof(ilm_PSR_DL_KT_t), TD_CTRL/*TD_RESET*/ );
    local_para->freq1    = freq1;
    local_para->freq2    = freq2;
    local_para->duration = duration;
    msg_send6(MOD_LTECSR, MOD_MED, AUDIO_SAP, MSG_ID_AUDIO_M2M_VOLTE_DL_KT_PLAY, (local_para_struct *)local_para, NULL);
    kal_trace( TRACE_FUNC,SP4G_PSR_DL_KT_PLAY_LEAVE); 
}


void  SP4G_PSR_DL_KT_Stop(void)
{
    kal_trace( TRACE_FUNC,SP4G_PSR_DL_KT_STOP_ENTER);    
    msg_send6(MOD_LTECSR, MOD_MED, AUDIO_SAP, MSG_ID_AUDIO_M2M_VOLTE_DL_KT_STOP, NULL, NULL);
    kal_trace( TRACE_FUNC,SP4G_PSR_DL_KT_STOP_LEAVE);    
}


void  SP4G_PSR_UL_KT_Play(kal_int16 freq1, kal_int16 freq2, kal_int16 duration)
{
    ilm_PSR_DL_KT_t *local_para;

    kal_trace( TRACE_FUNC,SP4G_PSR_UL_KT_PLAY_ENTER); 
    local_para = (ilm_PSR_DL_KT_t *) construct_local_para( sizeof(ilm_PSR_DL_KT_t), TD_CTRL/*TD_RESET*/ );
    local_para->freq1    = freq1;
    local_para->freq2    = freq2;
    local_para->duration = duration;
    msg_send6(MOD_LTECSR, MOD_MED, AUDIO_SAP, MSG_ID_AUDIO_M2M_VOLTE_UL_KT_PLAY, (local_para_struct *)local_para, NULL);
    kal_trace( TRACE_FUNC,SP4G_PSR_UL_KT_PLAY_LEAVE);     
}


void  SP4G_PSR_UL_KT_Stop(void)
{
    kal_trace( TRACE_FUNC,SP4G_PSR_UL_KT_STOP_ENTER);   
    msg_send6(MOD_LTECSR, MOD_MED, AUDIO_SAP, MSG_ID_AUDIO_M2M_VOLTE_UL_KT_STOP, NULL, NULL);
    kal_trace( TRACE_FUNC,SP4G_PSR_UL_KT_STOP_LEAVE);       
}

