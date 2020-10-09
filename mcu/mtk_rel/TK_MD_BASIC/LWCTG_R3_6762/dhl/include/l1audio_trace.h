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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x003C,0x003C);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x013C,0x013C);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x023C,0x023C);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x033C,0x033C);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x043C,0x043C);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x053C,0x053C);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x063C,0x063C);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x073C,0x073C);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x083C,0x083C);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x093C,0x093C);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0A3C,0x0A3C);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0B3C,0x0B3C);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0C3C,0x0C3C);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0D3C,0x0D3C);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0E3C,0x0E3C);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0F3C,0x0F3C);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x103C,0x103C);\
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
			TRC_OUTPUT_16_SINGLE_WRAPPER_L1(0x113C,0x113C);\
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
			TRC_OUTPUT_16_SINGLE_WRAPPER_L1(0x123C,0x123C);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x133C,0x133C);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x143C,0x143C);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x153C,0x153C);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x163C,0x163C);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x173C,0x173C);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x183C,0x183C);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x193C,0x193C);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1A3C,0x1A3C);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1B3C,0x1B3C);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1C3C,0x1C3C);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1D3C,0x1D3C);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1E3C,0x1E3C);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1F3C,0x1F3C);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x203C,0x203C);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x213C,0x213C);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x223C,0x223C);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x233C,0x233C);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x243C,0x243C);\
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
			TRC_OUTPUT_16_SINGLE_WRAPPER_L1(0x253C,0x253C);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x263C,0x263C);\
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
			TRC_OUTPUT_16_SINGLE_WRAPPER_L1(0x273C,0x273C);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x283C,0x283C);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x293C,0x293C);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x2A3C,0x2A3C);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x2B3C,0x2B3C);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x2C3C,0x2C3C);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x2D3C,0x2D3C);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x2E3C,0x2E3C);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x2F3C,0x2F3C);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x303C,0x303C);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x313C,0x313C);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x323C,0x323C);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x333C,0x333C);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x343C,0x343C);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x353C,0x353C);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x363C,0x363C);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x373C,0x373C);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x383C,0x383C);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x393C,0x393C);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x3A3C,0x3A3C);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x3B3C,0x3B3C);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x3C3C,0x3C3C);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x3D3C,0x3D3C);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x3E3C,0x3E3C);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x3F3C,0x3F3C);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x403C,0x403C);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x413C,0x413C);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x423C,0x423C);\
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
			TRC_OUTPUT_16_SINGLE_WRAPPER_L1(0x433C,0x433C);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x443C,0x443C);\
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
			TRC_OUTPUT_16_SINGLE_WRAPPER_L1(0x453C,0x453C);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x463C,0x463C);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x473C,0x473C);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x483C,0x483C);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x493C,0x493C);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x4A3C,0x4A3C);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x4B3C,0x4B3C);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x4C3C,0x4C3C);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x4D3C,0x4D3C);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x4E3C,0x4E3C);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x4F3C,0x4F3C);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x503C,0x503C);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x513C,0x513C);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x523C,0x523C);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x533C,0x533C);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x543C,0x543C);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x553C,0x553C);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x563C,0x563C);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x573C,0x573C);\
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
