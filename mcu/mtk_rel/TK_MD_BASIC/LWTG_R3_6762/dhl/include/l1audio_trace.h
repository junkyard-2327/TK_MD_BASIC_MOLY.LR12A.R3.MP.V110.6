#ifndef L1TRC_L1Audio_DEF_H
#define L1TRC_L1Audio_DEF_H

/******************************/
/* String category definition */
/******************************/
#define L1AUDIO_Str_Bool(v1)  (unsigned char)(v1+0)
#define L1AUDIO_Str_onoff(v1)  (unsigned char)(v1+2)
#define L1AUDIO_Func_Name(v1)  (unsigned char)(v1+4)
#define AFE_Switch_Name(v1)  (unsigned char)(v1+12)
#define AM_Switch_Name(v1)  (unsigned char)(v1+17)
#define AM_IO_Name(v1)  (unsigned char)(v1+29)
#define AM_Speech_Feature_Name(v1)  (unsigned char)(v1+34)
#define AM_Gain_Name(v1)  (unsigned char)(v1+39)
#define L1Audio_Speech_State(v1)  (unsigned char)(v1+44)
#define L1Audio_Speech_State_L(v1)  (unsigned char)(v1+53)
#define L1SP_Speech_Codec_Mode(v1)  (unsigned char)(v1+59)
#define L1SP_Speech_TX_Type(v1)  (unsigned char)(v1+70)
#define L1SP_Speech_RX_Type(v1)  (unsigned char)(v1+74)
#define SAL_DSP_VALUE_NAME(v1)  (unsigned char)(v1+88)
#define SAL_PROC_NAME(v1)  (unsigned char)(v1+112)


/****************************/
/* Message macro definition */
/****************************/
#include "L1Trc.h"
#if defined(L1_CATCHER)
	#define L1Audio_Msg_AFE_Switch(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1Audio_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x002E,0x002E);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1Audio_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define L1Audio_Msg_AFE_Switch(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define L1Audio_Msg_AFE_TurnSpk(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1Audio_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x012E,0x012E);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1Audio_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define L1Audio_Msg_AFE_TurnSpk(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define L1Audio_Msg_AFE_TurnMIC(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1Audio_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x022E,0x022E);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1Audio_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define L1Audio_Msg_AFE_TurnMIC(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define L1Audio_Msg_AFE_TurnPath(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1Audio_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x032E,0x032E);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1Audio_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define L1Audio_Msg_AFE_TurnPath(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define L1Audio_Msg_AFE_SpkSelect(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1Audio_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v5,v5);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x042E,0x042E);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1Audio_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define L1Audio_Msg_AFE_SpkSelect(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER)
	#define L1Audio_Msg_AM_Switch(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1Audio_Trace_Filter, 1, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x052E,0x052E);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1Audio_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define L1Audio_Msg_AM_Switch(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define L1Audio_Msg_AM_Handover(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1Audio_Trace_Filter, 1, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x062E,0x062E);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1Audio_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define L1Audio_Msg_AM_Handover(v1)
#endif

#if defined(L1_CATCHER)
	#define L1Audio_Msg_AM_AudioManagerInfo(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1Audio_Trace_Filter, 1, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x072E,0x072E);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1Audio_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define L1Audio_Msg_AM_AudioManagerInfo(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define L1Audio_Msg_AM_2G_Resync(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1Audio_Trace_Filter, 1, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x082E,0x082E);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1Audio_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define L1Audio_Msg_AM_2G_Resync(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define L1Audio_Msg_AM_IO_Switch(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1Audio_Trace_Filter, 1, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x092E,0x092E);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1Audio_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define L1Audio_Msg_AM_IO_Switch(v1)
#endif

#if defined(L1_CATCHER)
	#define L1Audio_Msg_AM_SetSpeech(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1Audio_Trace_Filter, 1, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0A2E,0x0A2E);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1Audio_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define L1Audio_Msg_AM_SetSpeech(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define L1Audio_Msg_Speech_State(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1Audio_Trace_Filter, 1, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0B2E,0x0B2E);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1Audio_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define L1Audio_Msg_Speech_State(v1)
#endif

#if defined(L1_CATCHER)
	#define L1Audio_Msg_DSP_INT(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1Audio_Trace_Filter, 1, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0C2E,0x0C2E);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1Audio_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define L1Audio_Msg_DSP_INT(v1)
#endif

#if defined(L1_CATCHER)
	#define L1Audio_Msg_AM_DELAY_TABLE(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1Audio_Trace_Filter, 1, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0D2E,0x0D2E);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1Audio_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define L1Audio_Msg_AM_DELAY_TABLE(v1)
#endif

#if defined(L1_CATCHER)
	#define L1Audio_Msg_SPEECH_FRAME(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1Audio_Trace_Filter, 1, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0E2E,0x0E2E);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1Audio_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define L1Audio_Msg_SPEECH_FRAME(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define L1Audio_Msg_SPEECH_CODEC(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1Audio_Trace_Filter, 1, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0F2E,0x0F2E);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1Audio_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define L1Audio_Msg_SPEECH_CODEC(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define L1Audio_Msg_VM_DEBUG(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1Audio_Trace_Filter, 1, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x102E,0x102E);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1Audio_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define L1Audio_Msg_VM_DEBUG(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define L1Audio_Msg_VBI_RESET() do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1Audio_Trace_Filter, 1, 0x02);\
			TRC_START_FILL_L1();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L1(0x112E,0x112E);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1Audio_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define L1Audio_Msg_VBI_RESET()
#endif

#if defined(L1_CATCHER)
	#define L1Audio_Msg_VBI_END() do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1Audio_Trace_Filter, 1, 0x02);\
			TRC_START_FILL_L1();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L1(0x122E,0x122E);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1Audio_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define L1Audio_Msg_VBI_END()
#endif

#if defined(L1_CATCHER)
	#define L1Audio_Msg_TCH_NOTIFY(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1Audio_Trace_Filter, 1, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x132E,0x132E);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1Audio_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define L1Audio_Msg_TCH_NOTIFY(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define L1Audio_Msg_SWITCH_FILT(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1Audio_Trace_Filter, 1, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x142E,0x142E);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1Audio_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define L1Audio_Msg_SWITCH_FILT(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define L1Audio_Msg_AFE_RegBackup(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1Audio_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x152E,0x152E);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1Audio_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define L1Audio_Msg_AFE_RegBackup(v1)
#endif

#if defined(L1_CATCHER)
	#define L1Audio_Msg_AM_SRC1(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1Audio_Trace_Filter, 1, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x162E,0x162E);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1Audio_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define L1Audio_Msg_AM_SRC1(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define L1Audio_Msg_AM_SRC2(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1Audio_Trace_Filter, 1, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x172E,0x172E);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1Audio_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define L1Audio_Msg_AM_SRC2(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define L1Audio_Msg_DSP_D2C_SPEECH_INT(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1Audio_Trace_Filter, 1, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x182E,0x182E);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1Audio_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define L1Audio_Msg_DSP_D2C_SPEECH_INT(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define L1Audio_Msg_DSP_D2C_SPEECH_INT_SKIP(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1Audio_Trace_Filter, 1, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x192E,0x192E);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1Audio_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define L1Audio_Msg_DSP_D2C_SPEECH_INT_SKIP(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define L1Audio_Msg_SP3G_FORCE_RESYNC(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1Audio_Trace_Filter, 1, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1A2E,0x1A2E);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1Audio_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define L1Audio_Msg_SP3G_FORCE_RESYNC(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define L1Audio_Msg_SP3G_SEND_RESYNC_INFO(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1Audio_Trace_Filter, 1, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v5,v5);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1B2E,0x1B2E);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1Audio_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define L1Audio_Msg_SP3G_SEND_RESYNC_INFO(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER)
	#define L1Audio_Msg_SP3G_REYSNC_DELAY_OVERFLOW(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1Audio_Trace_Filter, 1, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1C2E,0x1C2E);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1Audio_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define L1Audio_Msg_SP3G_REYSNC_DELAY_OVERFLOW(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define L1Audio_Msg_AM_DEBUG(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1Audio_Trace_Filter, 1, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v5,v5);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1D2E,0x1D2E);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1Audio_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define L1Audio_Msg_AM_DEBUG(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER)
	#define L1Audio_Msg_AM_DSP_GAIN(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1Audio_Trace_Filter, 1, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1E2E,0x1E2E);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1Audio_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define L1Audio_Msg_AM_DSP_GAIN(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define L1Audio_Msg_SAL_SET_VALUE(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1Audio_Trace_Filter, 1, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1F2E,0x1F2E);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1Audio_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define L1Audio_Msg_SAL_SET_VALUE(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define L1Audio_Msg_SAL_SET_VALUE_MULTI(v1, v2, v3, v4, v5, v6) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1Audio_Trace_Filter, 1, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v5,v5);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v6,v6);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v5,v5);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v6,v6);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x202E,0x202E);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1Audio_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define L1Audio_Msg_SAL_SET_VALUE_MULTI(v1, v2, v3, v4, v5, v6)
#endif

#if defined(L1_CATCHER)
	#define L1Audio_Msg_SAL_PROC(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1Audio_Trace_Filter, 1, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v5,v5);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x212E,0x212E);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1Audio_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define L1Audio_Msg_SAL_PROC(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER)
	#define L1Audio_Msg_SP(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1Audio_Trace_Filter, 1, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x222E,0x222E);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1Audio_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define L1Audio_Msg_SP(v1)
#endif

#if defined(L1_CATCHER)
	#define L1Audio_Msg_AM_AudioManager(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1Audio_Trace_Filter, 1, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x232E,0x232E);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1Audio_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define L1Audio_Msg_AM_AudioManager(v1)
#endif

#if defined(L1_CATCHER)
	#define L1Audio_Msg_AM_Resync(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1Audio_Trace_Filter, 1, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x242E,0x242E);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1Audio_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define L1Audio_Msg_AM_Resync(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define L1Audio_Msg_AM_Reset_Time_Drift() do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1Audio_Trace_Filter, 1, 0x02);\
			TRC_START_FILL_L1();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L1(0x252E,0x252E);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1Audio_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define L1Audio_Msg_AM_Reset_Time_Drift()
#endif

#if defined(L1_CATCHER)
	#define L1Audio_Msg_AM_Update_Time_Drift(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1Audio_Trace_Filter, 1, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x262E,0x262E);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1Audio_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define L1Audio_Msg_AM_Update_Time_Drift(v1)
#endif

#if defined(L1_CATCHER)
	#define L1Audio_Msg_AM_3G_Reset_Time_Drift() do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1Audio_Trace_Filter, 1, 0x02);\
			TRC_START_FILL_L1();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L1(0x272E,0x272E);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1Audio_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define L1Audio_Msg_AM_3G_Reset_Time_Drift()
#endif

#if defined(L1_CATCHER)
	#define L1Audio_Msg_AM_3G_Reset_Debug(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1Audio_Trace_Filter, 1, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x282E,0x282E);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1Audio_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define L1Audio_Msg_AM_3G_Reset_Debug(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define L1Audio_Msg_SP3G_GetSyncDelayRW(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1Audio_Trace_Filter, 1, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x292E,0x292E);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1Audio_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define L1Audio_Msg_SP3G_GetSyncDelayRW(v1)
#endif

#if defined(L1_CATCHER)
	#define L1Audio_Msg_AM_Speech(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1Audio_Trace_Filter, 1, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x2A2E,0x2A2E);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1Audio_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define L1Audio_Msg_AM_Speech(v1)
#endif

#if defined(L1_CATCHER)
	#define L1Audio_Msg_PutQ(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1Audio_Trace_Filter, 1, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x2B2E,0x2B2E);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1Audio_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define L1Audio_Msg_PutQ(v1)
#endif

#if defined(L1_CATCHER)
	#define L1Audio_Msg_L1D_GetRF(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1Audio_Trace_Filter, 1, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x2C2E,0x2C2E);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1Audio_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define L1Audio_Msg_L1D_GetRF(v1)
#endif

#if defined(L1_CATCHER)
	#define L1Audio_Msg_SP4G_FORCE_RESYNC(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1Audio_Trace_Filter, 1, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x2D2E,0x2D2E);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1Audio_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define L1Audio_Msg_SP4G_FORCE_RESYNC(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define L1Audio_Msg_SP4G_SEND_RESYNC_INFO(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1Audio_Trace_Filter, 1, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v5,v5);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x2E2E,0x2E2E);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1Audio_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define L1Audio_Msg_SP4G_SEND_RESYNC_INFO(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER)
	#define L1Audio_Msg_SP4G_REYSNC_DELAY_OVERFLOW(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1Audio_Trace_Filter, 1, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x2F2E,0x2F2E);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1Audio_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define L1Audio_Msg_SP4G_REYSNC_DELAY_OVERFLOW(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define L1Audio_Msg_INTERRAT_W2G(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1Audio_Trace_Filter, 1, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x302E,0x302E);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1Audio_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define L1Audio_Msg_INTERRAT_W2G(v1)
#endif

#if defined(L1_CATCHER)
	#define L1Audio_Msg_INTERRAT_G2W(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1Audio_Trace_Filter, 1, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x312E,0x312E);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1Audio_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define L1Audio_Msg_INTERRAT_G2W(v1)
#endif

#if defined(L1_CATCHER)
	#define L1Audio_Msg_AM_Handover_L(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1Audio_Trace_Filter, 1, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x322E,0x322E);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1Audio_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define L1Audio_Msg_AM_Handover_L(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define L1Audio_Msg_AM_AudioManager_L(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1Audio_Trace_Filter, 1, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x332E,0x332E);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1Audio_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define L1Audio_Msg_AM_AudioManager_L(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define L1Audio_Msg_AM_AudioManager2_L(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1Audio_Trace_Filter, 1, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x342E,0x342E);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1Audio_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define L1Audio_Msg_AM_AudioManager2_L(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define L1Audio_Msg_TCH_NOTIFY_L(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1Audio_Trace_Filter, 1, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x352E,0x352E);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1Audio_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define L1Audio_Msg_TCH_NOTIFY_L(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define L1Audio_Msg_AM_Speech_L(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1Audio_Trace_Filter, 1, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x362E,0x362E);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1Audio_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define L1Audio_Msg_AM_Speech_L(v1)
#endif

#if defined(L1_CATCHER)
	#define L1Audio_Msg_PutQ_L(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1Audio_Trace_Filter, 1, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x372E,0x372E);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1Audio_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define L1Audio_Msg_PutQ_L(v1)
#endif

#if defined(L1_CATCHER)
	#define L1Audio_Msg_GetQ_L(v1, v2, v3, v4, v5, v6, v7, v8) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1Audio_Trace_Filter, 1, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v5,v5);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v6,v6);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v7,v7);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v8,v8);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v5,v5);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v6,v6);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v7,v7);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v8,v8);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x382E,0x382E);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v7,v7);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v8,v8);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1Audio_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define L1Audio_Msg_GetQ_L(v1, v2, v3, v4, v5, v6, v7, v8)
#endif

#if defined(L1_CATCHER)
	#define L1Audio_Msg_L1D_GetRF_L(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1Audio_Trace_Filter, 1, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x392E,0x392E);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1Audio_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define L1Audio_Msg_L1D_GetRF_L(v1)
#endif

#if defined(L1_CATCHER)
	#define L1Audio_Msg_AM_L1D_Backup_L(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1Audio_Trace_Filter, 1, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x3A2E,0x3A2E);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1Audio_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define L1Audio_Msg_AM_L1D_Backup_L(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define L1Audio_Msg_AM_HandoverInfo_L(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1Audio_Trace_Filter, 1, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x3B2E,0x3B2E);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1Audio_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define L1Audio_Msg_AM_HandoverInfo_L(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define L1Audio_Msg_D2M_NOTIFY_L(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1Audio_Trace_Filter, 1, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x3C2E,0x3C2E);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1Audio_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define L1Audio_Msg_D2M_NOTIFY_L(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define L1Audio_Msg_BT_SCO_NOTIFY_L(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1Audio_Trace_Filter, 1, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x3D2E,0x3D2E);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1Audio_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define L1Audio_Msg_BT_SCO_NOTIFY_L(v1)
#endif

#if defined(L1_CATCHER)
	#define L1Audio_Msg_D2M_NOTIFY_L2P(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1Audio_Trace_Filter, 1, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x3E2E,0x3E2E);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1Audio_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define L1Audio_Msg_D2M_NOTIFY_L2P(v1)
#endif

#if defined(L1_CATCHER)
	#define L1Audio_Msg_BT_SCO_L2P(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1Audio_Trace_Filter, 1, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x3F2E,0x3F2E);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1Audio_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define L1Audio_Msg_BT_SCO_L2P(v1)
#endif

#if defined(L1_CATCHER)
	#define L1Audio_Msg_BlockMED(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1Audio_Trace_Filter, 1, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x402E,0x402E);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1Audio_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define L1Audio_Msg_BlockMED(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define L1Audio_Msg_BlockMED_Status(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1Audio_Trace_Filter, 1, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x412E,0x412E);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1Audio_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define L1Audio_Msg_BlockMED_Status(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define L1Audio_Msg_SP4G_GSeriesCall_Open(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1Audio_Trace_Filter, 1, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x422E,0x422E);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1Audio_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define L1Audio_Msg_SP4G_GSeriesCall_Open(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define L1Audio_Msg_SP4G_GSeriesCall_Open_OK() do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1Audio_Trace_Filter, 1, 0x02);\
			TRC_START_FILL_L1();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L1(0x432E,0x432E);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1Audio_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define L1Audio_Msg_SP4G_GSeriesCall_Open_OK()
#endif

#if defined(L1_CATCHER)
	#define L1Audio_Msg_SP4G_EVSSeriesCall_Open(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1Audio_Trace_Filter, 1, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x442E,0x442E);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1Audio_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define L1Audio_Msg_SP4G_EVSSeriesCall_Open(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define L1Audio_Msg_SP4G_EVSSeriesCall_Open_OK() do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1Audio_Trace_Filter, 1, 0x02);\
			TRC_START_FILL_L1();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L1(0x452E,0x452E);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1Audio_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define L1Audio_Msg_SP4G_EVSSeriesCall_Open_OK()
#endif

#if defined(L1_CATCHER)
	#define L1Audio_Msg_AM_DVFS_Setting(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1Audio_Trace_Filter, 1, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x462E,0x462E);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1Audio_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define L1Audio_Msg_AM_DVFS_Setting(v1)
#endif

#if defined(L1_CATCHER)
	#define L1Audio_Msg_INTERRAT_3G_TO_2G(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1Audio_Trace_Filter, 1, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x472E,0x472E);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1Audio_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define L1Audio_Msg_INTERRAT_3G_TO_2G(v1)
#endif

#if defined(L1_CATCHER)
	#define L1Audio_Msg_INTERRAT_4G_TO_2G(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1Audio_Trace_Filter, 1, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x482E,0x482E);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1Audio_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define L1Audio_Msg_INTERRAT_4G_TO_2G(v1)
#endif

#if defined(L1_CATCHER)
	#define L1Audio_Msg_INTERRAT_C2K_TO_2G(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1Audio_Trace_Filter, 1, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x492E,0x492E);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1Audio_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define L1Audio_Msg_INTERRAT_C2K_TO_2G(v1)
#endif

#if defined(L1_CATCHER)
	#define L1Audio_Msg_INTERRAT_STANDBY_TO_2G(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1Audio_Trace_Filter, 1, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x4A2E,0x4A2E);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1Audio_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define L1Audio_Msg_INTERRAT_STANDBY_TO_2G(v1)
#endif

#if defined(L1_CATCHER)
	#define L1Audio_Msg_INTERRAT_2G_TO_STANDBY(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1Audio_Trace_Filter, 1, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x4B2E,0x4B2E);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1Audio_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define L1Audio_Msg_INTERRAT_2G_TO_STANDBY(v1)
#endif

#if defined(L1_CATCHER)
	#define L1Audio_Msg_INTERRAT_2G_TO_3G(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1Audio_Trace_Filter, 1, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x4C2E,0x4C2E);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1Audio_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define L1Audio_Msg_INTERRAT_2G_TO_3G(v1)
#endif

#if defined(L1_CATCHER)
	#define L1Audio_Msg_3G_INTRARAT(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1Audio_Trace_Filter, 1, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x4D2E,0x4D2E);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1Audio_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define L1Audio_Msg_3G_INTRARAT(v1)
#endif

#if defined(L1_CATCHER)
	#define L1Audio_Msg_INTERRAT_4G_TO_3G(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1Audio_Trace_Filter, 1, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x4E2E,0x4E2E);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1Audio_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define L1Audio_Msg_INTERRAT_4G_TO_3G(v1)
#endif

#if defined(L1_CATCHER)
	#define L1Audio_Msg_INTERRAT_C2K_TO_3G(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1Audio_Trace_Filter, 1, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x4F2E,0x4F2E);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1Audio_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define L1Audio_Msg_INTERRAT_C2K_TO_3G(v1)
#endif

#if defined(L1_CATCHER)
	#define L1Audio_Msg_INTERRAT_2G_TO_4G(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1Audio_Trace_Filter, 1, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x502E,0x502E);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1Audio_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define L1Audio_Msg_INTERRAT_2G_TO_4G(v1)
#endif

#if defined(L1_CATCHER)
	#define L1Audio_Msg_INTERRAT_3G_TO_4G(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1Audio_Trace_Filter, 1, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x512E,0x512E);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1Audio_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define L1Audio_Msg_INTERRAT_3G_TO_4G(v1)
#endif

#if defined(L1_CATCHER)
	#define L1Audio_Msg_4G_INTRARAT(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1Audio_Trace_Filter, 1, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x522E,0x522E);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1Audio_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define L1Audio_Msg_4G_INTRARAT(v1)
#endif

#if defined(L1_CATCHER)
	#define L1Audio_Msg_INTERRAT_C2K_TO_4G(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1Audio_Trace_Filter, 1, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x532E,0x532E);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1Audio_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define L1Audio_Msg_INTERRAT_C2K_TO_4G(v1)
#endif

#if defined(L1_CATCHER)
	#define L1Audio_Msg_INTERRAT_2G_TO_C2K(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1Audio_Trace_Filter, 1, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x542E,0x542E);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1Audio_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define L1Audio_Msg_INTERRAT_2G_TO_C2K(v1)
#endif

#if defined(L1_CATCHER)
	#define L1Audio_Msg_INTERRAT_3G_TO_C2K(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1Audio_Trace_Filter, 1, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x552E,0x552E);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1Audio_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define L1Audio_Msg_INTERRAT_3G_TO_C2K(v1)
#endif

#if defined(L1_CATCHER)
	#define L1Audio_Msg_INTERRAT_4G_TO_C2K(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1Audio_Trace_Filter, 1, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x562E,0x562E);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1Audio_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define L1Audio_Msg_INTERRAT_4G_TO_C2K(v1)
#endif

#if defined(L1_CATCHER)
	#define L1Audio_Msg_C2K_INTRARAT(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1Audio_Trace_Filter, 1, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x572E,0x572E);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1Audio_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define L1Audio_Msg_C2K_INTRARAT(v1)
#endif



/*******************************/
/* declaration of filter array */
/*******************************/
EXTERN_TMD_FILTER(unsigned char, L1Audio_Trace_Filter, 5);
/*************************/
/* Function declarations */
/*************************/
#ifdef L1_CATCHER

void Set_L1Audio_Filter(unsigned char *setting);

#endif

/************************************/
/* Filter checking API declarations */
/************************************/

#define ChkL1ModFltr_L1Audio()	(FILTER_CHECK(L1Audio_Trace_Filter, 0, 1))
#define ChkL1ClsFltr_L1Audio_AFE_Inf_H()	(ChkL1ModFltr_L1Audio()&&(FILTER_CHECK(L1Audio_Trace_Filter, 1, 0x01)))
#define ChkL1ClsFltr_L1Audio_AM_Inf_H()	(ChkL1ModFltr_L1Audio()&&(FILTER_CHECK(L1Audio_Trace_Filter, 1, 0x02)))
#define ChkL1MsgFltr_L1Audio_Msg_AFE_Switch()	ChkL1ClsFltr_L1Audio_AFE_Inf_H()
#define ChkL1MsgFltr_L1Audio_Msg_AFE_TurnSpk()	ChkL1ClsFltr_L1Audio_AFE_Inf_H()
#define ChkL1MsgFltr_L1Audio_Msg_AFE_TurnMIC()	ChkL1ClsFltr_L1Audio_AFE_Inf_H()
#define ChkL1MsgFltr_L1Audio_Msg_AFE_TurnPath()	ChkL1ClsFltr_L1Audio_AFE_Inf_H()
#define ChkL1MsgFltr_L1Audio_Msg_AFE_SpkSelect()	ChkL1ClsFltr_L1Audio_AFE_Inf_H()
#define ChkL1MsgFltr_L1Audio_Msg_AM_Switch()	ChkL1ClsFltr_L1Audio_AM_Inf_H()
#define ChkL1MsgFltr_L1Audio_Msg_AM_Handover()	ChkL1ClsFltr_L1Audio_AM_Inf_H()
#define ChkL1MsgFltr_L1Audio_Msg_AM_AudioManagerInfo()	ChkL1ClsFltr_L1Audio_AM_Inf_H()
#define ChkL1MsgFltr_L1Audio_Msg_AM_2G_Resync()	ChkL1ClsFltr_L1Audio_AM_Inf_H()
#define ChkL1MsgFltr_L1Audio_Msg_AM_IO_Switch()	ChkL1ClsFltr_L1Audio_AM_Inf_H()
#define ChkL1MsgFltr_L1Audio_Msg_AM_SetSpeech()	ChkL1ClsFltr_L1Audio_AM_Inf_H()
#define ChkL1MsgFltr_L1Audio_Msg_Speech_State()	ChkL1ClsFltr_L1Audio_AM_Inf_H()
#define ChkL1MsgFltr_L1Audio_Msg_DSP_INT()	ChkL1ClsFltr_L1Audio_AM_Inf_H()
#define ChkL1MsgFltr_L1Audio_Msg_AM_DELAY_TABLE()	ChkL1ClsFltr_L1Audio_AM_Inf_H()
#define ChkL1MsgFltr_L1Audio_Msg_SPEECH_FRAME()	ChkL1ClsFltr_L1Audio_AM_Inf_H()
#define ChkL1MsgFltr_L1Audio_Msg_SPEECH_CODEC()	ChkL1ClsFltr_L1Audio_AM_Inf_H()
#define ChkL1MsgFltr_L1Audio_Msg_VM_DEBUG()	ChkL1ClsFltr_L1Audio_AM_Inf_H()
#define ChkL1MsgFltr_L1Audio_Msg_VBI_RESET()	ChkL1ClsFltr_L1Audio_AM_Inf_H()
#define ChkL1MsgFltr_L1Audio_Msg_VBI_END()	ChkL1ClsFltr_L1Audio_AM_Inf_H()
#define ChkL1MsgFltr_L1Audio_Msg_TCH_NOTIFY()	ChkL1ClsFltr_L1Audio_AM_Inf_H()
#define ChkL1MsgFltr_L1Audio_Msg_SWITCH_FILT()	ChkL1ClsFltr_L1Audio_AM_Inf_H()
#define ChkL1MsgFltr_L1Audio_Msg_AFE_RegBackup()	ChkL1ClsFltr_L1Audio_AFE_Inf_H()
#define ChkL1MsgFltr_L1Audio_Msg_AM_SRC1()	ChkL1ClsFltr_L1Audio_AM_Inf_H()
#define ChkL1MsgFltr_L1Audio_Msg_AM_SRC2()	ChkL1ClsFltr_L1Audio_AM_Inf_H()
#define ChkL1MsgFltr_L1Audio_Msg_DSP_D2C_SPEECH_INT()	ChkL1ClsFltr_L1Audio_AM_Inf_H()
#define ChkL1MsgFltr_L1Audio_Msg_DSP_D2C_SPEECH_INT_SKIP()	ChkL1ClsFltr_L1Audio_AM_Inf_H()
#define ChkL1MsgFltr_L1Audio_Msg_SP3G_FORCE_RESYNC()	ChkL1ClsFltr_L1Audio_AM_Inf_H()
#define ChkL1MsgFltr_L1Audio_Msg_SP3G_SEND_RESYNC_INFO()	ChkL1ClsFltr_L1Audio_AM_Inf_H()
#define ChkL1MsgFltr_L1Audio_Msg_SP3G_REYSNC_DELAY_OVERFLOW()	ChkL1ClsFltr_L1Audio_AM_Inf_H()
#define ChkL1MsgFltr_L1Audio_Msg_AM_DEBUG()	ChkL1ClsFltr_L1Audio_AM_Inf_H()
#define ChkL1MsgFltr_L1Audio_Msg_AM_DSP_GAIN()	ChkL1ClsFltr_L1Audio_AM_Inf_H()
#define ChkL1MsgFltr_L1Audio_Msg_SAL_SET_VALUE()	ChkL1ClsFltr_L1Audio_AM_Inf_H()
#define ChkL1MsgFltr_L1Audio_Msg_SAL_SET_VALUE_MULTI()	ChkL1ClsFltr_L1Audio_AM_Inf_H()
#define ChkL1MsgFltr_L1Audio_Msg_SAL_PROC()	ChkL1ClsFltr_L1Audio_AM_Inf_H()
#define ChkL1MsgFltr_L1Audio_Msg_SP()	ChkL1ClsFltr_L1Audio_AM_Inf_H()
#define ChkL1MsgFltr_L1Audio_Msg_AM_AudioManager()	ChkL1ClsFltr_L1Audio_AM_Inf_H()
#define ChkL1MsgFltr_L1Audio_Msg_AM_Resync()	ChkL1ClsFltr_L1Audio_AM_Inf_H()
#define ChkL1MsgFltr_L1Audio_Msg_AM_Reset_Time_Drift()	ChkL1ClsFltr_L1Audio_AM_Inf_H()
#define ChkL1MsgFltr_L1Audio_Msg_AM_Update_Time_Drift()	ChkL1ClsFltr_L1Audio_AM_Inf_H()
#define ChkL1MsgFltr_L1Audio_Msg_AM_3G_Reset_Time_Drift()	ChkL1ClsFltr_L1Audio_AM_Inf_H()
#define ChkL1MsgFltr_L1Audio_Msg_AM_3G_Reset_Debug()	ChkL1ClsFltr_L1Audio_AM_Inf_H()
#define ChkL1MsgFltr_L1Audio_Msg_SP3G_GetSyncDelayRW()	ChkL1ClsFltr_L1Audio_AM_Inf_H()
#define ChkL1MsgFltr_L1Audio_Msg_AM_Speech()	ChkL1ClsFltr_L1Audio_AM_Inf_H()
#define ChkL1MsgFltr_L1Audio_Msg_PutQ()	ChkL1ClsFltr_L1Audio_AM_Inf_H()
#define ChkL1MsgFltr_L1Audio_Msg_L1D_GetRF()	ChkL1ClsFltr_L1Audio_AM_Inf_H()
#define ChkL1MsgFltr_L1Audio_Msg_SP4G_FORCE_RESYNC()	ChkL1ClsFltr_L1Audio_AM_Inf_H()
#define ChkL1MsgFltr_L1Audio_Msg_SP4G_SEND_RESYNC_INFO()	ChkL1ClsFltr_L1Audio_AM_Inf_H()
#define ChkL1MsgFltr_L1Audio_Msg_SP4G_REYSNC_DELAY_OVERFLOW()	ChkL1ClsFltr_L1Audio_AM_Inf_H()
#define ChkL1MsgFltr_L1Audio_Msg_INTERRAT_W2G()	ChkL1ClsFltr_L1Audio_AM_Inf_H()
#define ChkL1MsgFltr_L1Audio_Msg_INTERRAT_G2W()	ChkL1ClsFltr_L1Audio_AM_Inf_H()
#define ChkL1MsgFltr_L1Audio_Msg_AM_Handover_L()	ChkL1ClsFltr_L1Audio_AM_Inf_H()
#define ChkL1MsgFltr_L1Audio_Msg_AM_AudioManager_L()	ChkL1ClsFltr_L1Audio_AM_Inf_H()
#define ChkL1MsgFltr_L1Audio_Msg_AM_AudioManager2_L()	ChkL1ClsFltr_L1Audio_AM_Inf_H()
#define ChkL1MsgFltr_L1Audio_Msg_TCH_NOTIFY_L()	ChkL1ClsFltr_L1Audio_AM_Inf_H()
#define ChkL1MsgFltr_L1Audio_Msg_AM_Speech_L()	ChkL1ClsFltr_L1Audio_AM_Inf_H()
#define ChkL1MsgFltr_L1Audio_Msg_PutQ_L()	ChkL1ClsFltr_L1Audio_AM_Inf_H()
#define ChkL1MsgFltr_L1Audio_Msg_GetQ_L()	ChkL1ClsFltr_L1Audio_AM_Inf_H()
#define ChkL1MsgFltr_L1Audio_Msg_L1D_GetRF_L()	ChkL1ClsFltr_L1Audio_AM_Inf_H()
#define ChkL1MsgFltr_L1Audio_Msg_AM_L1D_Backup_L()	ChkL1ClsFltr_L1Audio_AM_Inf_H()
#define ChkL1MsgFltr_L1Audio_Msg_AM_HandoverInfo_L()	ChkL1ClsFltr_L1Audio_AM_Inf_H()
#define ChkL1MsgFltr_L1Audio_Msg_D2M_NOTIFY_L()	ChkL1ClsFltr_L1Audio_AM_Inf_H()
#define ChkL1MsgFltr_L1Audio_Msg_BT_SCO_NOTIFY_L()	ChkL1ClsFltr_L1Audio_AM_Inf_H()
#define ChkL1MsgFltr_L1Audio_Msg_D2M_NOTIFY_L2P()	ChkL1ClsFltr_L1Audio_AM_Inf_H()
#define ChkL1MsgFltr_L1Audio_Msg_BT_SCO_L2P()	ChkL1ClsFltr_L1Audio_AM_Inf_H()
#define ChkL1MsgFltr_L1Audio_Msg_BlockMED()	ChkL1ClsFltr_L1Audio_AM_Inf_H()
#define ChkL1MsgFltr_L1Audio_Msg_BlockMED_Status()	ChkL1ClsFltr_L1Audio_AM_Inf_H()
#define ChkL1MsgFltr_L1Audio_Msg_SP4G_GSeriesCall_Open()	ChkL1ClsFltr_L1Audio_AM_Inf_H()
#define ChkL1MsgFltr_L1Audio_Msg_SP4G_GSeriesCall_Open_OK()	ChkL1ClsFltr_L1Audio_AM_Inf_H()
#define ChkL1MsgFltr_L1Audio_Msg_SP4G_EVSSeriesCall_Open()	ChkL1ClsFltr_L1Audio_AM_Inf_H()
#define ChkL1MsgFltr_L1Audio_Msg_SP4G_EVSSeriesCall_Open_OK()	ChkL1ClsFltr_L1Audio_AM_Inf_H()
#define ChkL1MsgFltr_L1Audio_Msg_AM_DVFS_Setting()	ChkL1ClsFltr_L1Audio_AM_Inf_H()
#define ChkL1MsgFltr_L1Audio_Msg_INTERRAT_3G_TO_2G()	ChkL1ClsFltr_L1Audio_AM_Inf_H()
#define ChkL1MsgFltr_L1Audio_Msg_INTERRAT_4G_TO_2G()	ChkL1ClsFltr_L1Audio_AM_Inf_H()
#define ChkL1MsgFltr_L1Audio_Msg_INTERRAT_C2K_TO_2G()	ChkL1ClsFltr_L1Audio_AM_Inf_H()
#define ChkL1MsgFltr_L1Audio_Msg_INTERRAT_STANDBY_TO_2G()	ChkL1ClsFltr_L1Audio_AM_Inf_H()
#define ChkL1MsgFltr_L1Audio_Msg_INTERRAT_2G_TO_STANDBY()	ChkL1ClsFltr_L1Audio_AM_Inf_H()
#define ChkL1MsgFltr_L1Audio_Msg_INTERRAT_2G_TO_3G()	ChkL1ClsFltr_L1Audio_AM_Inf_H()
#define ChkL1MsgFltr_L1Audio_Msg_3G_INTRARAT()	ChkL1ClsFltr_L1Audio_AM_Inf_H()
#define ChkL1MsgFltr_L1Audio_Msg_INTERRAT_4G_TO_3G()	ChkL1ClsFltr_L1Audio_AM_Inf_H()
#define ChkL1MsgFltr_L1Audio_Msg_INTERRAT_C2K_TO_3G()	ChkL1ClsFltr_L1Audio_AM_Inf_H()
#define ChkL1MsgFltr_L1Audio_Msg_INTERRAT_2G_TO_4G()	ChkL1ClsFltr_L1Audio_AM_Inf_H()
#define ChkL1MsgFltr_L1Audio_Msg_INTERRAT_3G_TO_4G()	ChkL1ClsFltr_L1Audio_AM_Inf_H()
#define ChkL1MsgFltr_L1Audio_Msg_4G_INTRARAT()	ChkL1ClsFltr_L1Audio_AM_Inf_H()
#define ChkL1MsgFltr_L1Audio_Msg_INTERRAT_C2K_TO_4G()	ChkL1ClsFltr_L1Audio_AM_Inf_H()
#define ChkL1MsgFltr_L1Audio_Msg_INTERRAT_2G_TO_C2K()	ChkL1ClsFltr_L1Audio_AM_Inf_H()
#define ChkL1MsgFltr_L1Audio_Msg_INTERRAT_3G_TO_C2K()	ChkL1ClsFltr_L1Audio_AM_Inf_H()
#define ChkL1MsgFltr_L1Audio_Msg_INTERRAT_4G_TO_C2K()	ChkL1ClsFltr_L1Audio_AM_Inf_H()
#define ChkL1MsgFltr_L1Audio_Msg_C2K_INTRARAT()	ChkL1ClsFltr_L1Audio_AM_Inf_H()


#endif
