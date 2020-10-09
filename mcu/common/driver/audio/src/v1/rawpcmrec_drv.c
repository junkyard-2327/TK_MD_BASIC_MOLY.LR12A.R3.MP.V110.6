#include "kal_public_api.h"
#include "kal_general_types.h"

#include "kal_trace.h"
#include "l1sp_trc.h"
#include "l1audio_trace.h"


#include "am.h"
#include "media.h" // for EMI_ReadFromDSP
#include "rawpcmrec.h"
#include "audio_dsp_d2c_def.h"
#include "sal_exp.h"
#include "sal_def.h"


// ----------------------------------------------------------------------------
// Structure
// ----------------------------------------------------------------------------

static struct{
	kal_spinlockid lockId;
	kal_uint16 audId;

	kal_bool isRecording;  //state information. 
	
	void (*RawPcmRec_hdlr)(void);
	
	PCM_REC_SAMPLE_RATE_IDX inSampleRateIdx; // DSP to MCU sampling rate. 
	kal_bool isDedicatedMode; //recording under speech is on, DSP to MCU sampling rate is sync with codec
	kal_bool skip_hisr;
}RawPcmRec; 


// ----------------------------------------------------------------------------
// Define
// ----------------------------------------------------------------------------

#define RAW_PCM_REC_FRAME_BUF_SIZE_8K       (160)
#define RAW_PCM_REC_FRAME_BUF_SIZE_16K      (320)
#define RAW_PCM_REC_FRAME_BUF_SIZE_32K      (640)
#define RAW_PCM_REC_FRAME_BUF_SIZE_48K      (960)

//header + sample*2ch(UL+DL)*2byte
#define RAW_PCM_TOTAL_BUFFER_BYTE_SIZE (sizeof(spcRAWPCMBufInfo) + RAW_PCM_REC_FRAME_BUF_SIZE_48K*2*2)

// ----------------------------------------------------------------------------
// buffers and varables
// ----------------------------------------------------------------------------

// static kal_uint16        dualMicOrDlTempBuf[RAW_PCM_REC_FRAME_BUF_SIZE_48K];
static kal_uint32        RawPcmRecBuf[(RAW_PCM_TOTAL_BUFFER_BYTE_SIZE+3)>>2];
static spcRAWPCMBufInfo *pstspcRAWPCMBufInfo;
static kal_uint16       *pRawPcmRecBufData;


extern bool spc_RawPcmRec_getDataWaiting(void);


/**
	@buf1: pointer to pcm buf1, 
	@len1:length of buf1, unit is word(2byte)
	@buf2:pointer to pcm buf2
	@len2: length of buf2. unit is word(2byte)
*/
void RawPcmRec_GetMicDataBufs(kal_uint32 *add1, kal_uint16 *len1, kal_uint32 *add2, kal_uint16 *len2)
{
	*add1 = (kal_uint32)(RawPcmRecBuf);		
	*len1 = (sizeof(spcRAWPCMBufInfo) + pstspcRAWPCMBufInfo->u16ULLength + pstspcRAWPCMBufInfo->u16DLLength) >> 1;
	*add2 = 0;
	*len2 = 0;

	kal_trace(TRACE_INFO, RAWPCMREC_GET_MIC_DATA_BUFS, RawPcmRecBuf, sizeof(spcRAWPCMBufInfo), pstspcRAWPCMBufInfo->u16ULLength, pstspcRAWPCMBufInfo->u16DLLength);
}


void RawPcmRec_GetMicDataFromDSP(kal_uint16 * buf)
{
	volatile uint16* dspAddr;
	uint32 framesize = 0; //uplink
    uint16 dlFrameSize = 0;

	{
		if(RawPcmRec.isDedicatedMode) { // under call
			
			framesize = SAL_PcmEx_GetBufLen(SAL_PCMEX_BUF_SE);			
            ASSERT(framesize <= RAW_PCM_REC_FRAME_BUF_SIZE_48K);
			dspAddr = SAL_PcmEx_GetBuf(SAL_PCMEX_BUF_SE);
			kal_brief_trace(TRACE_INFO, RAWPCMREC_HISR_DATA_FROM_DSP, dspAddr, framesize);
			EMI_ReadFromDSP(buf, dspAddr, (uint32)framesize);

            switch(framesize)
            {
                case RAW_PCM_REC_FRAME_BUF_SIZE_8K:
                    pstspcRAWPCMBufInfo->u16ULFreq   = PCM_REC_SAMPLE_RATE_IDX_8K;
                    pstspcRAWPCMBufInfo->u16ULLength = RAW_PCM_REC_FRAME_BUF_SIZE_8K<<1; //unit is byte
                    break;
                case RAW_PCM_REC_FRAME_BUF_SIZE_16K:
                    pstspcRAWPCMBufInfo->u16ULFreq   = PCM_REC_SAMPLE_RATE_IDX_16K;
                    pstspcRAWPCMBufInfo->u16ULLength = RAW_PCM_REC_FRAME_BUF_SIZE_16K<<1; //unit is byte
                    break;
                case RAW_PCM_REC_FRAME_BUF_SIZE_32K:
                    pstspcRAWPCMBufInfo->u16ULFreq   = PCM_REC_SAMPLE_RATE_IDX_32K;
                    pstspcRAWPCMBufInfo->u16ULLength = RAW_PCM_REC_FRAME_BUF_SIZE_32K<<1; //unit is byte
                    break;
                case RAW_PCM_REC_FRAME_BUF_SIZE_48K:
                    pstspcRAWPCMBufInfo->u16ULFreq   = PCM_REC_SAMPLE_RATE_IDX_48K;
                    pstspcRAWPCMBufInfo->u16ULLength = RAW_PCM_REC_FRAME_BUF_SIZE_48K<<1; //unit is byte
                    break;
                default:
                    ASSERT(0);
                    break;
            }
            pstspcRAWPCMBufInfo->u16DLFreq   = PCM_REC_SAMPLE_RATE_IDX_UNDEF;
            pstspcRAWPCMBufInfo->u16DLLength = 0;
		
			// get downlink data 
			dlFrameSize = SAL_PcmEx_GetBufLen(SAL_PCMEX_BUF_SD);
            ASSERT(dlFrameSize <= RAW_PCM_REC_FRAME_BUF_SIZE_48K);
			dspAddr = SAL_PcmEx_GetBuf(SAL_PCMEX_BUF_SD);
			kal_brief_trace(TRACE_INFO, RAWPCMREC_HISR_DATA_FROM_DSP, dspAddr, dlFrameSize);
			EMI_ReadFromDSP(/*dualMicOrDlTempBuf*/buf+framesize, dspAddr, (uint32)dlFrameSize);

            switch(dlFrameSize)
            {
                case RAW_PCM_REC_FRAME_BUF_SIZE_8K:
                    pstspcRAWPCMBufInfo->u16DLFreq   = PCM_REC_SAMPLE_RATE_IDX_8K;
                    pstspcRAWPCMBufInfo->u16DLLength = RAW_PCM_REC_FRAME_BUF_SIZE_8K<<1; //unit is byte
                    break;
                case RAW_PCM_REC_FRAME_BUF_SIZE_16K:
                    pstspcRAWPCMBufInfo->u16DLFreq   = PCM_REC_SAMPLE_RATE_IDX_16K;
                    pstspcRAWPCMBufInfo->u16DLLength = RAW_PCM_REC_FRAME_BUF_SIZE_16K<<1; //unit is byte
                    break;
                case RAW_PCM_REC_FRAME_BUF_SIZE_32K:
                    pstspcRAWPCMBufInfo->u16DLFreq   = PCM_REC_SAMPLE_RATE_IDX_32K;
                    pstspcRAWPCMBufInfo->u16DLLength = RAW_PCM_REC_FRAME_BUF_SIZE_32K<<1; //unit is byte
                    break;
                case RAW_PCM_REC_FRAME_BUF_SIZE_48K:
                    pstspcRAWPCMBufInfo->u16DLFreq   = PCM_REC_SAMPLE_RATE_IDX_48K;
                    pstspcRAWPCMBufInfo->u16DLLength = RAW_PCM_REC_FRAME_BUF_SIZE_48K<<1; //unit is byte
                    break;
                default:
                    ASSERT(0);
                    break;
            }

            kal_brief_trace(TRACE_INFO, RAWPCMREC_GET_DATA_INFO, 1, pstspcRAWPCMBufInfo->u16ULFreq, pstspcRAWPCMBufInfo->u16ULLength, pstspcRAWPCMBufInfo->u16DLFreq, pstspcRAWPCMBufInfo->u16DLLength);

		} else { // idle 
			//framesize = RawPcmRec.outputFrameSize; 
			
			framesize = SAL_PcmEx_GetBufLen(SAL_PCMEX_BUF_SE);
            ASSERT(framesize <= RAW_PCM_REC_FRAME_BUF_SIZE_48K);
		
			/* handle uplink data */
			dspAddr = SAL_PcmEx_GetBuf(SAL_PCMEX_BUF_SE);
			//kal_prompt_trace(MOD_L1SP, "*DPRAM2_base(SPH_DM_ADDR_SE_PTR) = %x", dspAddr);
			//dspAddr = *DSP_DM_ADDR(PCM_REC_PAGE_NUM, dspAddr);		
			kal_brief_trace(TRACE_INFO, RAWPCMREC_HISR_DATA_FROM_DSP, dspAddr, framesize);
			
			EMI_ReadFromDSP(buf, dspAddr, (uint32)framesize);

            switch(framesize)
            {
                case RAW_PCM_REC_FRAME_BUF_SIZE_8K:
                    pstspcRAWPCMBufInfo->u16ULFreq   = PCM_REC_SAMPLE_RATE_IDX_8K;
                    pstspcRAWPCMBufInfo->u16ULLength = RAW_PCM_REC_FRAME_BUF_SIZE_8K<<1; //unit is byte
                    break;
                case RAW_PCM_REC_FRAME_BUF_SIZE_16K:
                    pstspcRAWPCMBufInfo->u16ULFreq   = PCM_REC_SAMPLE_RATE_IDX_16K;
                    pstspcRAWPCMBufInfo->u16ULLength = RAW_PCM_REC_FRAME_BUF_SIZE_16K<<1; //unit is byte
                    break;
                case RAW_PCM_REC_FRAME_BUF_SIZE_32K:
                    pstspcRAWPCMBufInfo->u16ULFreq   = PCM_REC_SAMPLE_RATE_IDX_32K;
                    pstspcRAWPCMBufInfo->u16ULLength = RAW_PCM_REC_FRAME_BUF_SIZE_32K<<1; //unit is byte
                    break;
                case RAW_PCM_REC_FRAME_BUF_SIZE_48K:
                    pstspcRAWPCMBufInfo->u16ULFreq   = PCM_REC_SAMPLE_RATE_IDX_48K;
                    pstspcRAWPCMBufInfo->u16ULLength = RAW_PCM_REC_FRAME_BUF_SIZE_48K<<1; //unit is byte
                    break;
                default:
                    ASSERT(0);
                    break;
            }
            pstspcRAWPCMBufInfo->u16DLFreq   = PCM_REC_SAMPLE_RATE_IDX_UNDEF;
            pstspcRAWPCMBufInfo->u16DLLength = 0;

            kal_brief_trace(TRACE_INFO, RAWPCMREC_GET_DATA_INFO, 2, pstspcRAWPCMBufInfo->u16ULFreq, pstspcRAWPCMBufInfo->u16ULLength, pstspcRAWPCMBufInfo->u16DLFreq, pstspcRAWPCMBufInfo->u16DLLength);
		}

	}	

}


void RawPcmRecHisr(void *param)
{
	if (KAL_SPINLOCK_NOT_AVAILABLE == kal_take_spinlock(RawPcmRec.lockId, KAL_NO_WAIT)) {
		kal_trace(TRACE_INFO, RAWPCMREC_HISR_LOCK_NOT_AVALIABLE);
		return; 
	}
	if(KAL_TRUE == RawPcmRec.skip_hisr) {
		kal_give_spinlock(RawPcmRec.lockId);
		return;	
	}
	// check the buffer 
	if(true == spc_RawPcmRec_getDataWaiting()) {
		//leave the log when buffer is full
		kal_brief_trace(TRACE_INFO, RAWPCMREC_HISR_DATA_DROP_DSP);
	} else { // There has some empty buffer
		//get from dsp
		RawPcmRec_GetMicDataFromDSP(pRawPcmRecBufData);
	}	
	kal_give_spinlock(RawPcmRec.lockId); 
	//excute callback function 
	RawPcmRec.RawPcmRec_hdlr();
}


/**
	@dlPos: definition same as SAL_PCMREC_DL_POS_xx in sal_def.h
	    0: DL end
	    1: POS ENH
	    2: Pre Mixer2
*/
void RAWPCMREC_Start(void (*RawPcmRec_hdlr)(void), kal_uint8 dlPos)
{   

	// lock sleep mode
	RawPcmRec.audId = L1Audio_GetAudioID();
	L1Audio_SetFlag( RawPcmRec.audId ); 

	RawPcmRec.isDedicatedMode = AM_IsAmInSpeechState();
	RawPcmRec.RawPcmRec_hdlr = RawPcmRec_hdlr;

	memset(RawPcmRecBuf, 0, sizeof(RawPcmRecBuf));
	pstspcRAWPCMBufInfo = (pspcRAWPCMBufInfo)(RawPcmRecBuf);
    pRawPcmRecBufData   = (kal_uint16 *)(RawPcmRecBuf);
    pRawPcmRecBufData   = pRawPcmRecBufData + ( sizeof(spcRAWPCMBufInfo) / sizeof(kal_uint16) );

	L1Audio_HookHisrHandler( DP_D2C_PCM_REC_INT, RawPcmRecHisr, 0); 
	
	// invoke am to start record
	if(RawPcmRec.isDedicatedMode) {
		RawPcmRec.inSampleRateIdx = PCM_REC_SAMPLE_RATE_IDX_UNDEF;  // dynamic		
		AM_PCM8K_RecordOn(AM_PCM8KREC_APP_TYPE_PCMREC, dlPos);
	}else {
		RawPcmRec.inSampleRateIdx = PCM_REC_SAMPLE_RATE_IDX_16K;		
		AM_PCM16K_RecordOn(dlPos);
	}

	RawPcmRec.isRecording = KAL_TRUE;
	RawPcmRec.skip_hisr = KAL_FALSE;
}



void RAWPCMREC_Stop()
{
	kal_take_spinlock(RawPcmRec.lockId, KAL_INFINITE_WAIT);
	RawPcmRec.skip_hisr = KAL_TRUE;
	kal_give_spinlock(RawPcmRec.lockId);
	if (RawPcmRec.isDedicatedMode) {

		AM_PCM8K_RecordOff(false, AM_PCM8KREC_APP_TYPE_PCMREC); // do not need toe wait
		// L1Audio_UnhookHisrHandler(D2C_UL_DL_PCM_REC_INT_ID); //vocTchPcmRecordHisr
				
	} else {	
		
		if(PCM_REC_SAMPLE_RATE_IDX_8K == RawPcmRec.inSampleRateIdx) {			
			
	      AM_PCM8K_RecordOff(true, AM_PCM8KREC_APP_TYPE_PCMREC); 
			
		} else if(PCM_REC_SAMPLE_RATE_IDX_16K == RawPcmRec.inSampleRateIdx) {
		
			AM_PCM16K_RecordOff(true);
			
		} else {
			ASSERT(0); // invalid input sampling rate. 
		}
		// L1Audio_UnhookHisrHandler(DP_D2C_PCM_REC_INT);		
	}
	L1Audio_UnhookHisrHandler(DP_D2C_PCM_REC_INT);
	RawPcmRec.isRecording = KAL_FALSE;
	
	kal_take_spinlock(RawPcmRec.lockId, KAL_INFINITE_WAIT);
	RawPcmRec.isDedicatedMode = KAL_FALSE;
	kal_give_spinlock(RawPcmRec.lockId);
	RawPcmRec.inSampleRateIdx = PCM_REC_SAMPLE_RATE_IDX_UNDEF;

	// unlock sleep
	L1Audio_ClearFlag( RawPcmRec.audId );
	L1Audio_FreeAudioID( RawPcmRec.audId );

}

void RAWPcmRec_Init()
{
	RawPcmRec.lockId = kal_create_spinlock("rawpcmrec_spinlock");	
}
