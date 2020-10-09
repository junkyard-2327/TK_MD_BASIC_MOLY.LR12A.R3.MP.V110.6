#ifndef L1TRC_EL1_TSTM_1_DEF_H
#define L1TRC_EL1_TSTM_1_DEF_H

/******************************/
/* String category definition */
/******************************/
#define TSTM_Func_String(v1)  (unsigned char)(v1+0)
#define TSTM_Func_String_Dummy_Emac(v1)  (unsigned char)(v1+50)
#define TSTM_Main_St_String(v1)  (unsigned char)(v1+68)
#define TSTM_DL_Rx_St_String(v1)  (unsigned char)(v1+77)
#define TSTM_UL_Tx_St_String(v1)  (unsigned char)(v1+81)
#define TSTM_Tx_Rx_St_String(v1)  (unsigned char)(v1+85)
#define TSTM_DL_Cs_St_String(v1)  (unsigned char)(v1+89)
#define TSTM_Rx_Fsm_St_String(v1)  (unsigned char)(v1+94)
#define TSTM_Reset_Tstm_St_String(v1)  (unsigned char)(v1+99)
#define TSTM_MB_MIB_DC_St_String(v1)  (unsigned char)(v1+111)
#define TSTM_Nrml_MIB_DC_St_String(v1)  (unsigned char)(v1+116)
#define TSTM_SI_DC_St_String(v1)  (unsigned char)(v1+122)
#define TSTM_DL_CS_Sub_St_String(v1)  (unsigned char)(v1+128)
#define TSTM_Error_St_String(v1)  (unsigned char)(v1+136)
#define TSTM_Rx_Fsm_Mod_String(v1)  (unsigned char)(v1+154)
#define TSTM_Pcell_St_String(v1)  (unsigned char)(v1+166)
#define TSTM_Scell_St_String(v1)  (unsigned char)(v1+179)
#define TSTM_Nbr_Cmd_Type_String(v1)  (unsigned char)(v1+192)
#define TSTM_Nbr_Cell_String(v1)  (unsigned char)(v1+197)
#define TSTM_Nbr_Mode_String(v1)  (unsigned char)(v1+202)
#define TSTM_SFBD_Mode_String(v1)  (unsigned char)(v1+205)
#define TSTM_Rpt_String(v1)  (unsigned char)(v1+209)


/****************************/
/* Message macro definition */
/****************************/
#include "L1Trc.h"
#if defined(L1_CATCHER)
	#define TSTM_LOG_FUNC_ENTRY(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x000E,0x000E);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define TSTM_LOG_FUNC_ENTRY(v1)
#endif

#if defined(L1_CATCHER)
	#define TSTM_LOG_SYS_TIME(v1, v2, v3, v4, v5, v6) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x010E,0x010E);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define TSTM_LOG_SYS_TIME(v1, v2, v3, v4, v5, v6)
#endif

#if defined(L1_CATCHER)
	#define TSTM_LOG_MAIN_ST(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x020E,0x020E);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define TSTM_LOG_MAIN_ST(v1)
#endif

#if defined(L1_CATCHER)
	#define TSTM_LOG_NEXT_MAIN_ST(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x030E,0x030E);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define TSTM_LOG_NEXT_MAIN_ST(v1)
#endif

#if defined(L1_CATCHER)
	#define TSTM_LOG_DL_RX_ST(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x040E,0x040E);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define TSTM_LOG_DL_RX_ST(v1)
#endif

#if defined(L1_CATCHER)
	#define TSTM_LOG_UL_TX_ST(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x050E,0x050E);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define TSTM_LOG_UL_TX_ST(v1)
#endif

#if defined(L1_CATCHER)
	#define TSTM_LOG_DL_CS_ST(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x060E,0x060E);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define TSTM_LOG_DL_CS_ST(v1)
#endif

#if defined(L1_CATCHER)
	#define TSTM_LOG_TX_RX_ST(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x070E,0x070E);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define TSTM_LOG_TX_RX_ST(v1)
#endif

#if defined(L1_CATCHER)
	#define TSTM_LOG_RX_FSM_ST(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x080E,0x080E);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define TSTM_LOG_RX_FSM_ST(v1)
#endif

#if defined(L1_CATCHER)
	#define TSTM_LOG_RESET_ST(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x090E,0x090E);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define TSTM_LOG_RESET_ST(v1)
#endif

#if defined(L1_CATCHER)
	#define TSTM_LOG_Pre_RESET_ST(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0A0E,0x0A0E);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define TSTM_LOG_Pre_RESET_ST(v1)
#endif

#if defined(L1_CATCHER)
	#define TSTM_LOG_MB_MIB_DC_ST(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0B0E,0x0B0E);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define TSTM_LOG_MB_MIB_DC_ST(v1)
#endif

#if defined(L1_CATCHER)
	#define TSTM_LOG_NRML_MIB_DC_ST(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0C0E,0x0C0E);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define TSTM_LOG_NRML_MIB_DC_ST(v1)
#endif

#if defined(L1_CATCHER)
	#define TSTM_LOG_SI_DC_ST(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0D0E,0x0D0E);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define TSTM_LOG_SI_DC_ST(v1)
#endif

#if defined(L1_CATCHER)
	#define TSTM_LOG_PCELL_ST(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0E0E,0x0E0E);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define TSTM_LOG_PCELL_ST(v1)
#endif

#if defined(L1_CATCHER)
	#define TSTM_LOG_SCELL_ST(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0F0E,0x0F0E);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define TSTM_LOG_SCELL_ST(v1)
#endif

#if defined(L1_CATCHER)
	#define TSTM_LOG_RX_FSM_MOD(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x100E,0x100E);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define TSTM_LOG_RX_FSM_MOD(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define TSTM_LOG_JUMP_MOD(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x110E,0x110E);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define TSTM_LOG_JUMP_MOD(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define TSTM_LOG_ERR_ST(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x120E,0x120E);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define TSTM_LOG_ERR_ST(v1)
#endif

#if defined(L1_CATCHER)
	#define TSTM_LOG_WAIT_ABORT_DONE_BMP(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x130E,0x130E);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define TSTM_LOG_WAIT_ABORT_DONE_BMP(v1)
#endif

#if defined(L1_CATCHER)
	#define TSTM_LOG_WAIT_EXE_DONE_BMP(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x140E,0x140E);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define TSTM_LOG_WAIT_EXE_DONE_BMP(v1)
#endif

#if defined(L1_CATCHER)
	#define TSTM_LOG_MBSFN_CMD(v1, v2, v3, v4, v5, v6) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x150E,0x150E);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define TSTM_LOG_MBSFN_CMD(v1, v2, v3, v4, v5, v6)
#endif

#if defined(L1_CATCHER)
	#define TSTM_LOG_EN_CNF_SEND() do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
			TRC_START_FILL_L1();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L1(0x160E,0x160E);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define TSTM_LOG_EN_CNF_SEND()
#endif

#if defined(L1_CATCHER)
	#define TSTM_LOG_ABORT_RPT() do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
			TRC_START_FILL_L1();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L1(0x170E,0x170E);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define TSTM_LOG_ABORT_RPT()
#endif

#if defined(L1_CATCHER)
	#define TSTM_LOG_SET_PHY_CONFIG(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x180E,0x180E);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define TSTM_LOG_SET_PHY_CONFIG(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define TSTM_LOG_SET_CH_CONFIG(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x190E,0x190E);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define TSTM_LOG_SET_CH_CONFIG(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define TSTM_LOG_SET_COMM_CONFIG(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1A0E,0x1A0E);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define TSTM_LOG_SET_COMM_CONFIG(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define TSTM_LOG_SET_CELL_DEL_CONFIG(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1B0E,0x1B0E);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define TSTM_LOG_SET_CELL_DEL_CONFIG(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define TSTM_LOG_SET_CSCSR_CMD() do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
			TRC_START_FILL_L1();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L1(0x1C0E,0x1C0E);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define TSTM_LOG_SET_CSCSR_CMD()
#endif

#if defined(L1_CATCHER)
	#define TSTM_LOG_SET_CSCD_CMD() do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
			TRC_START_FILL_L1();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L1(0x1D0E,0x1D0E);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define TSTM_LOG_SET_CSCD_CMD()
#endif

#if defined(L1_CATCHER)
	#define TSTM_LOG_SET_CSM_CMD() do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
			TRC_START_FILL_L1();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L1(0x1E0E,0x1E0E);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define TSTM_LOG_SET_CSM_CMD()
#endif

#if defined(L1_CATCHER)
	#define TSTM_LOG_SET_MEAS_CMD() do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
			TRC_START_FILL_L1();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L1(0x1F0E,0x1F0E);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define TSTM_LOG_SET_MEAS_CMD()
#endif

#if defined(L1_CATCHER)
	#define TSTM_LOG_SET_CSCONT_CMD() do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
			TRC_START_FILL_L1();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L1(0x200E,0x200E);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define TSTM_LOG_SET_CSCONT_CMD()
#endif

#if defined(L1_CATCHER)
	#define TSTM_LOG_SET_PRE_SYNC_CMD() do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
			TRC_START_FILL_L1();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L1(0x210E,0x210E);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define TSTM_LOG_SET_PRE_SYNC_CMD()
#endif

#if defined(L1_CATCHER)
	#define TSTM_LOG_SET_AFC_DAC_CMD(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x220E,0x220E);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define TSTM_LOG_SET_AFC_DAC_CMD(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define TSTM_LOG_SET_TA_CMD(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x230E,0x230E);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define TSTM_LOG_SET_TA_CMD(v1)
#endif

#if defined(L1_CATCHER)
	#define TSTM_LOG_SET_FBD(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x240E,0x240E);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define TSTM_LOG_SET_FBD(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define TSTM_LOG_SET_FREQ_BIN(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x250E,0x250E);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define TSTM_LOG_SET_FREQ_BIN(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define TSTM_LOG_ADD_MEAS_TBL_CELL(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x260E,0x260E);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define TSTM_LOG_ADD_MEAS_TBL_CELL(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define TSTM_LOG_DEL_MEAS_TBL_CELL(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x270E,0x270E);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define TSTM_LOG_DEL_MEAS_TBL_CELL(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define TSTM_LOG_ADD_SRV_CELL(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x280E,0x280E);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define TSTM_LOG_ADD_SRV_CELL(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define TSTM_LOG_ADD_FAKE_CELL(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x290E,0x290E);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define TSTM_LOG_ADD_FAKE_CELL(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define TSTM_LOG_FAKE_CELL_DETECT_RLT(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x2A0E,0x2A0E);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define TSTM_LOG_FAKE_CELL_DETECT_RLT(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER)
	#define TSTM_LOG_CS_PARAM_1(v1, v2, v3, v4, v5, v6) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x2B0E,0x2B0E);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define TSTM_LOG_CS_PARAM_1(v1, v2, v3, v4, v5, v6)
#endif

#if defined(L1_CATCHER)
	#define TSTM_LOG_CS_PARAM_2(v1, v2, v3, v4, v5, v6) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x2C0E,0x2C0E);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define TSTM_LOG_CS_PARAM_2(v1, v2, v3, v4, v5, v6)
#endif

#if defined(L1_CATCHER)
	#define TSTM_LOG_CS_PARAM_3(v1, v2, v3, v4, v5, v6) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x2D0E,0x2D0E);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define TSTM_LOG_CS_PARAM_3(v1, v2, v3, v4, v5, v6)
#endif

#if defined(L1_CATCHER)
	#define TSTM_LOG_NBR_CM_RPT_RCV(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x2E0E,0x2E0E);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define TSTM_LOG_NBR_CM_RPT_RCV(v1)
#endif

#if defined(L1_CATCHER)
	#define TSTM_LOG_SIC_PARAM(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x2F0E,0x2F0E);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define TSTM_LOG_SIC_PARAM(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER)
	#define TSTM_LOG_MEAS_PARAM_1(v1, v2, v3, v4, v5, v6) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x300E,0x300E);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define TSTM_LOG_MEAS_PARAM_1(v1, v2, v3, v4, v5, v6)
#endif

#if defined(L1_CATCHER)
	#define TSTM_LOG_MEAS_PARAM_2(v1, v2, v3, v4, v5, v6, v7) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v5,v5);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v6,v6);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v7,v7);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v5,v5);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v6,v6);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v7,v7);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x310E,0x310E);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v7,v7);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define TSTM_LOG_MEAS_PARAM_2(v1, v2, v3, v4, v5, v6, v7)
#endif

#if defined(L1_CATCHER)
	#define TSTM_LOG_MEAS_PARAM_3(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x320E,0x320E);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define TSTM_LOG_MEAS_PARAM_3(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER)
	#define TSTM_LOG_SET_PWRSCN_CMD(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x330E,0x330E);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define TSTM_LOG_SET_PWRSCN_CMD(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER)
	#define TSTM_LOG_PCELL_RNTI_EN(v1, v2, v3, v4, v5, v6, v7, v8, v9) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v5,v5);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v6,v6);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v7,v7);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v8,v8);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v9,v9);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v5,v5);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v6,v6);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v7,v7);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v8,v8);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v9,v9);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x340E,0x340E);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v7,v7);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v8,v8);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v9,v9);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define TSTM_LOG_PCELL_RNTI_EN(v1, v2, v3, v4, v5, v6, v7, v8, v9)
#endif

#if defined(L1_CATCHER)
	#define TSTM_LOG_SCELL_RNTI_EN(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x350E,0x350E);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define TSTM_LOG_SCELL_RNTI_EN(v1)
#endif

#if defined(L1_CATCHER)
	#define TSTM_LOG_RNTI_BMP(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x360E,0x360E);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define TSTM_LOG_RNTI_BMP(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define TSTM_LOG_MBMS_BMP(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x370E,0x370E);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define TSTM_LOG_MBMS_BMP(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER)
	#define TSTM_LOG_MBMS_CTRL_EN_BMP(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x380E,0x380E);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define TSTM_LOG_MBMS_CTRL_EN_BMP(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define TSTM_LOG_MBMS_CTRL_DIS_BMP(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x390E,0x390E);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define TSTM_LOG_MBMS_CTRL_DIS_BMP(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define TSTM_LOG_SET_DL_CHNG() do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
			TRC_START_FILL_L1();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L1(0x3A0E,0x3A0E);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define TSTM_LOG_SET_DL_CHNG()
#endif

#if defined(L1_CATCHER)
	#define TSTM_LOG_DL_CHNG_PCELL_PARAM(v1, v2, v3, v4, v5, v6, v7) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v5,v5);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v6,v6);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v7,v7);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v5,v5);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v6,v6);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v7,v7);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x3B0E,0x3B0E);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v7,v7);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define TSTM_LOG_DL_CHNG_PCELL_PARAM(v1, v2, v3, v4, v5, v6, v7)
#endif

#if defined(L1_CATCHER)
	#define TSTM_LOG_DL_CHNG_SCELL_PARAM_1(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x3C0E,0x3C0E);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define TSTM_LOG_DL_CHNG_SCELL_PARAM_1(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define TSTM_LOG_DL_CHNG_SCELL_PARAM_2(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x3D0E,0x3D0E);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define TSTM_LOG_DL_CHNG_SCELL_PARAM_2(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define TSTM_LOG_ST_MEAS_RLT(v1, v2, v3, v4, v5, v6) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x3E0E,0x3E0E);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define TSTM_LOG_ST_MEAS_RLT(v1, v2, v3, v4, v5, v6)
#endif

#if defined(L1_CATCHER)
	#define TSTM_LOG_PWR_SCN_RLT(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x3F0E,0x3F0E);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define TSTM_LOG_PWR_SCN_RLT(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define TSTM_LOG_PHICH_PARAM_1(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x400E,0x400E);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define TSTM_LOG_PHICH_PARAM_1(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define TSTM_LOG_PHICH_PARAM_2(v1, v2, v3, v4, v5, v6) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x410E,0x410E);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define TSTM_LOG_PHICH_PARAM_2(v1, v2, v3, v4, v5, v6)
#endif

#if defined(L1_CATCHER)
	#define TSTM_LOG_PHICH_PARAM_3(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x420E,0x420E);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define TSTM_LOG_PHICH_PARAM_3(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER)
	#define TSTM_LOG_PHICH_REC_INDX(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x430E,0x430E);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define TSTM_LOG_PHICH_REC_INDX(v1)
#endif

#if defined(L1_CATCHER)
	#define TSTM_LOG_PRE_SYNC_PARAM_1(v1, v2, v3, v4, v5, v6) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x440E,0x440E);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define TSTM_LOG_PRE_SYNC_PARAM_1(v1, v2, v3, v4, v5, v6)
#endif

#if defined(L1_CATCHER)
	#define TSTM_LOG_PRE_SYNC_PARAM_2(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x450E,0x450E);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define TSTM_LOG_PRE_SYNC_PARAM_2(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define TSTM_LOG_CQI_OTHER_CNT_1(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x460E,0x460E);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define TSTM_LOG_CQI_OTHER_CNT_1(v1)
#endif

#if defined(L1_CATCHER)
	#define TSTM_LOG_CQI_OTHER_CNT_2(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x470E,0x470E);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define TSTM_LOG_CQI_OTHER_CNT_2(v1)
#endif

#if defined(L1_CATCHER)
	#define TSTM_LOG_CQI_OTHER_CNT_3(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x480E,0x480E);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define TSTM_LOG_CQI_OTHER_CNT_3(v1)
#endif

#if defined(L1_CATCHER)
	#define TSTM_LOG_CQI_OTHER_CNT_4(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x490E,0x490E);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define TSTM_LOG_CQI_OTHER_CNT_4(v1)
#endif

#if defined(L1_CATCHER)
	#define TSTM_LOG_CQI_OTHER_CNT_5(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x4A0E,0x4A0E);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define TSTM_LOG_CQI_OTHER_CNT_5(v1)
#endif

#if defined(L1_CATCHER)
	#define TSTM_LOG_CQI_OTHER_CNT_6(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x4B0E,0x4B0E);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define TSTM_LOG_CQI_OTHER_CNT_6(v1)
#endif

#if defined(L1_CATCHER)
	#define TSTM_LOG_CQI_OTHER_CNT_7(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x4C0E,0x4C0E);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define TSTM_LOG_CQI_OTHER_CNT_7(v1)
#endif

#if defined(L1_CATCHER)
	#define TSTM_LOG_CQI_PTI_CNT(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x4D0E,0x4D0E);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define TSTM_LOG_CQI_PTI_CNT(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define TSTM_LOG_CQI_RANK_CNT(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x4E0E,0x4E0E);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define TSTM_LOG_CQI_RANK_CNT(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define TSTM_LOG_EARFCN_TO_FREQ(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x4F0E,0x4F0E);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define TSTM_LOG_EARFCN_TO_FREQ(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define TSTM_LOG_FREQ_TO_EARFCN(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x500E,0x500E);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define TSTM_LOG_FREQ_TO_EARFCN(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define TSTM_LOG_MIB_CRC_RLT(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x510E,0x510E);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define TSTM_LOG_MIB_CRC_RLT(v1)
#endif

#if defined(L1_CATCHER)
	#define TSTM_LOG_SET_MBMS_EN(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x520E,0x520E);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define TSTM_LOG_SET_MBMS_EN(v1)
#endif

#if defined(L1_CATCHER)
	#define TSTM_LOG_RX_CTRL_TIMING_RNTI(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x530E,0x530E);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define TSTM_LOG_RX_CTRL_TIMING_RNTI(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define TSTM_LOG_RX_CTRL_TIMING_POST_RS(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x540E,0x540E);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define TSTM_LOG_RX_CTRL_TIMING_POST_RS(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define TSTM_LOG_RX_CTRL_TIMING_PRE_SYNC(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x550E,0x550E);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define TSTM_LOG_RX_CTRL_TIMING_PRE_SYNC(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define TSTM_LOG_RX_CTRL_TIMING_MB_EN(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x560E,0x560E);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define TSTM_LOG_RX_CTRL_TIMING_MB_EN(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define TSTM_LOG_RX_FSM_RX_STRT(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x570E,0x570E);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define TSTM_LOG_RX_FSM_RX_STRT(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define TSTM_LOG_SRCH_EXIST_MCS_RCD(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x580E,0x580E);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define TSTM_LOG_SRCH_EXIST_MCS_RCD(v1)
#endif

#if defined(L1_CATCHER)
	#define TSTM_LOG_SI_CAL(v1, v2, v3, v4, v5, v6) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x590E,0x590E);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define TSTM_LOG_SI_CAL(v1, v2, v3, v4, v5, v6)
#endif

#if defined(L1_CATCHER)
	#define TSTM_LOG_UPDT_STRT_TIME_BASE(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x5A0E,0x5A0E);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define TSTM_LOG_UPDT_STRT_TIME_BASE(v1)
#endif

#if defined(L1_CATCHER)
	#define TSTM_LOG_DUMMY_EMAC_TEST_MODE_CFG(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x5B0E,0x5B0E);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define TSTM_LOG_DUMMY_EMAC_TEST_MODE_CFG(v1)
#endif

#if defined(L1_CATCHER)
	#define TSTM_LOG_DUMMY_EMAC_DELAY_INIT(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x5C0E,0x5C0E);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define TSTM_LOG_DUMMY_EMAC_DELAY_INIT(v1)
#endif

#if defined(L1_CATCHER)
	#define TSTM_LOG_DUMMY_EMAC_SWO_BIT(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x5D0E,0x5D0E);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define TSTM_LOG_DUMMY_EMAC_SWO_BIT(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define TSTM_LOG_DUMMY_EMAC_RX_HT_SUBHDR_INFO(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x5E0E,0x5E0E);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define TSTM_LOG_DUMMY_EMAC_RX_HT_SUBHDR_INFO(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define TSTM_LOG_DUMMY_EMAC_RX_SUBHDR_INFO(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x5F0E,0x5F0E);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define TSTM_LOG_DUMMY_EMAC_RX_SUBHDR_INFO(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define TSTM_LOG_DUMMY_EMAC_SUBFRM_IND_BMP(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x600E,0x600E);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define TSTM_LOG_DUMMY_EMAC_SUBFRM_IND_BMP(v1)
#endif

#if defined(L1_CATCHER)
	#define TSTM_LOG_DUMMY_EMAC_TX_RESULT_INFO(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x610E,0x610E);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define TSTM_LOG_DUMMY_EMAC_TX_RESULT_INFO(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define TSTM_LOG_DUMMY_EMAC_TX_RESULT_INFO_I(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x620E,0x620E);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define TSTM_LOG_DUMMY_EMAC_TX_RESULT_INFO_I(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define TSTM_LOG_DUMMY_EMAC_PRINT_TIME(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x630E,0x630E);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define TSTM_LOG_DUMMY_EMAC_PRINT_TIME(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define TSTM_LOG_DUMMY_EMAC_SF_TYPE_GAP_INFO(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x640E,0x640E);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define TSTM_LOG_DUMMY_EMAC_SF_TYPE_GAP_INFO(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define TSTM_LOG_DUMMY_EMAC_STATUS_BITMAP(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x650E,0x650E);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define TSTM_LOG_DUMMY_EMAC_STATUS_BITMAP(v1)
#endif

#if defined(L1_CATCHER)
	#define TSTM_LOG_DUMMY_EMAC_HARQ_CLOSE(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x660E,0x660E);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define TSTM_LOG_DUMMY_EMAC_HARQ_CLOSE(v1)
#endif

#if defined(L1_CATCHER)
	#define TSTM_LOG_DUMMY_EMAC_RCV_PHICH(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x670E,0x670E);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define TSTM_LOG_DUMMY_EMAC_RCV_PHICH(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define TSTM_LOG_DUMMY_EMAC_TX_GRANT_INFO(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x680E,0x680E);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define TSTM_LOG_DUMMY_EMAC_TX_GRANT_INFO(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER)
	#define TSTM_LOG_DUMMY_EMAC_TX_TIME(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x690E,0x690E);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define TSTM_LOG_DUMMY_EMAC_TX_TIME(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define TSTM_LOG_DUMMY_EMAC_TX_TIMELINE_INFO(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x6A0E,0x6A0E);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define TSTM_LOG_DUMMY_EMAC_TX_TIMELINE_INFO(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define TSTM_LOG_DUMMY_EMAC_TX_MODE(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x6B0E,0x6B0E);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define TSTM_LOG_DUMMY_EMAC_TX_MODE(v1)
#endif

#if defined(L1_CATCHER)
	#define TSTM_LOG_DUMMY_EMAC_CONFIG(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x6C0E,0x6C0E);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define TSTM_LOG_DUMMY_EMAC_CONFIG(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define TSTM_LOG_DUMMY_EMAC_SCHED_CONFIG(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x6D0E,0x6D0E);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define TSTM_LOG_DUMMY_EMAC_SCHED_CONFIG(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define TSTM_LOG_DUMMY_EMAC_PHY_INFO_TYPE_AND_MIB(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x6E0E,0x6E0E);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define TSTM_LOG_DUMMY_EMAC_PHY_INFO_TYPE_AND_MIB(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define TSTM_LOG_DUMMY_EMAC_PHY_INFO_CONFIG_PCELL(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x6F0E,0x6F0E);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define TSTM_LOG_DUMMY_EMAC_PHY_INFO_CONFIG_PCELL(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define TSTM_LOG_DUMMY_EMAC_PHY_INFO_CONFIG_SCELL(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x700E,0x700E);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define TSTM_LOG_DUMMY_EMAC_PHY_INFO_CONFIG_SCELL(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define TSTM_LOG_DUMMY_EMAC_PHY_INFO_CONFIG_UL_SCELL(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x710E,0x710E);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define TSTM_LOG_DUMMY_EMAC_PHY_INFO_CONFIG_UL_SCELL(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define TSTM_LOG_DUMMY_EMAC_NDI_NON_TOGGLE_TRICK() do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
			TRC_START_FILL_L1();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L1(0x720E,0x720E);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define TSTM_LOG_DUMMY_EMAC_NDI_NON_TOGGLE_TRICK()
#endif

#if defined(L1_CATCHER)
	#define TSTM_LOG_DUMMY_EMAC_GET_HARQ_UPD(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x730E,0x730E);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define TSTM_LOG_DUMMY_EMAC_GET_HARQ_UPD(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define TSTM_LOG_DUMMY_EMAC_RCV_RETX_INFO(v1, v2, v3, v4, v5, v6) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x740E,0x740E);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define TSTM_LOG_DUMMY_EMAC_RCV_RETX_INFO(v1, v2, v3, v4, v5, v6)
#endif

#if defined(L1_CATCHER)
	#define TSTM_LOG_DUMMY_EMAC_INIT() do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
			TRC_START_FILL_L1();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L1(0x750E,0x750E);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define TSTM_LOG_DUMMY_EMAC_INIT()
#endif

#if defined(L1_CATCHER)
	#define TSTM_LOG_DUMMY_EMAC_TRIGGER_LMAC(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x760E,0x760E);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define TSTM_LOG_DUMMY_EMAC_TRIGGER_LMAC(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define TSTM_LOG_DUMMY_EMAC_TTI_BUNDLE_IDX(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x770E,0x770E);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define TSTM_LOG_DUMMY_EMAC_TTI_BUNDLE_IDX(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define TSTM_LOG_DUMMY_EMAC_PRINT_ADDR(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x780E,0x780E);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define TSTM_LOG_DUMMY_EMAC_PRINT_ADDR(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define TSTM_LOG_LISR_RPT(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x790E,0x790E);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define TSTM_LOG_LISR_RPT(v1)
#endif

#if defined(L1_CATCHER)
	#define TSTM_LOG_TASK_RPT(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x7A0E,0x7A0E);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define TSTM_LOG_TASK_RPT(v1)
#endif

#if defined(L1_CATCHER)
	#define TSTM_LOG_NBR_TIME_CAL(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x7B0E,0x7B0E);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define TSTM_LOG_NBR_TIME_CAL(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define TSTM_LOG_NBR_OFFST_GET(v1, v2, v3, v4, v5, v6, v7, v8) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x7C0E,0x7C0E);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v7,v7);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v8,v8);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define TSTM_LOG_NBR_OFFST_GET(v1, v2, v3, v4, v5, v6, v7, v8)
#endif

#if defined(L1_CATCHER)
	#define TSTM_LOG_SFBD_RPT(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x7D0E,0x7D0E);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define TSTM_LOG_SFBD_RPT(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define TSTM_LOG_RX_RLM(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x7E0E,0x7E0E);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define TSTM_LOG_RX_RLM(v1)
#endif

#if defined(L1_CATCHER)
	#define TSTM_LOG_FULL_MEAS_ONE_ROUND_FIN() do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
			TRC_START_FILL_L1();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L1(0x7F0E,0x7F0E);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define TSTM_LOG_FULL_MEAS_ONE_ROUND_FIN()
#endif

#if defined(L1_CATCHER)
	#define TSTM_LOG_CSI_RPT_RAW_1(v1, v2, v3, v4, v5, v6) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x800E,0x800E);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define TSTM_LOG_CSI_RPT_RAW_1(v1, v2, v3, v4, v5, v6)
#endif

#if defined(L1_CATCHER)
	#define TSTM_LOG_CSI_RPT_RAW_2(v1, v2, v3, v4, v5, v6) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x810E,0x810E);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define TSTM_LOG_CSI_RPT_RAW_2(v1, v2, v3, v4, v5, v6)
#endif

#if defined(L1_CATCHER)
	#define TSTM_LOG_CSI_RPT_MODE(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x820E,0x820E);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define TSTM_LOG_CSI_RPT_MODE(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define TSTM_LOG_SOFT_COMB(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x830E,0x830E);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define TSTM_LOG_SOFT_COMB(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define TSTM_LOG_DEBUG_1(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x840E,0x840E);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define TSTM_LOG_DEBUG_1(v1)
#endif

#if defined(L1_CATCHER)
	#define TSTM_LOG_DEBUG_6(v1, v2, v3, v4, v5, v6) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x850E,0x850E);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define TSTM_LOG_DEBUG_6(v1, v2, v3, v4, v5, v6)
#endif

#if defined(L1_CATCHER)
	#define TSTM_LOG_FORCE_TX_NOT_IN_FLIGHT() do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
			TRC_START_FILL_L1();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L1(0x860E,0x860E);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define TSTM_LOG_FORCE_TX_NOT_IN_FLIGHT()
#endif

#if defined(L1_CATCHER)
	#define TSTM_LOG_FORCE_TX_CMD(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x870E,0x870E);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define TSTM_LOG_FORCE_TX_CMD(v1)
#endif

#if defined(L1_CATCHER)
	#define TSTM_LOG_FORCE_TX_PARA_1(v1, v2, v3, v4, v5, v6) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x880E,0x880E);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define TSTM_LOG_FORCE_TX_PARA_1(v1, v2, v3, v4, v5, v6)
#endif

#if defined(L1_CATCHER)
	#define TSTM_LOG_FORCE_TX_PARA_2(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x890E,0x890E);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define TSTM_LOG_FORCE_TX_PARA_2(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define TSTM_LOG_FORCE_TX_PARA_ERROR(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x8A0E,0x8A0E);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define TSTM_LOG_FORCE_TX_PARA_ERROR(v1)
#endif

#if defined(L1_CATCHER)
	#define TSTM_LOG_CC_IRQ_TRIGGER() do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
			TRC_START_FILL_L1();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L1(0x8B0E,0x8B0E);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define TSTM_LOG_CC_IRQ_TRIGGER()
#endif

#if defined(L1_CATCHER)
	#define TSTM_LOG_CC_IRQ_TX_HANDLE() do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
			TRC_START_FILL_L1();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L1(0x8C0E,0x8C0E);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define TSTM_LOG_CC_IRQ_TX_HANDLE()
#endif

#if defined(L1_CATCHER)
	#define TSTM_LOG_UL_CC_PARAM_1(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x8D0E,0x8D0E);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define TSTM_LOG_UL_CC_PARAM_1(v1)
#endif

#if defined(L1_CATCHER)
	#define TSTM_LOG_UL_CC_PARAM_2(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x8E0E,0x8E0E);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define TSTM_LOG_UL_CC_PARAM_2(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define TSTM_LOG_UL_CC_PARAM_3(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x8F0E,0x8F0E);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define TSTM_LOG_UL_CC_PARAM_3(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define TSTM_LOG_PUSCH_VRB_PARAM(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x900E,0x900E);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TSTM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define TSTM_LOG_PUSCH_VRB_PARAM(v1, v2)
#endif



/*******************************/
/* declaration of filter array */
/*******************************/
EXTERN_TMD_FILTER(unsigned char, EL1_TSTM_1_Trace_Filter, 5);
/*************************/
/* Function declarations */
/*************************/
#ifdef L1_CATCHER

void Set_EL1_TSTM_1_Filter(unsigned char *setting);

#endif

/************************************/
/* Filter checking API declarations */
/************************************/

#define ChkL1ModFltr_EL1_TSTM_1()	(FILTER_CHECK(EL1_TSTM_1_Trace_Filter, 0, 1))
#define ChkL1ClsFltr_EL1_TSTM_1_el1_trace_1_H()	(ChkL1ModFltr_EL1_TSTM_1()&&(FILTER_CHECK(EL1_TSTM_1_Trace_Filter, 1, 0x01)))
#define ChkL1ClsFltr_EL1_TSTM_1_el1_trace_2_H()	(ChkL1ModFltr_EL1_TSTM_1()&&(FILTER_CHECK(EL1_TSTM_1_Trace_Filter, 1, 0x02)))
#define ChkL1ClsFltr_EL1_TSTM_1_el1_trace_3_M()	(ChkL1ModFltr_EL1_TSTM_1()&&(FILTER_CHECK(EL1_TSTM_1_Trace_Filter, 1, 0x04)))
#define ChkL1ClsFltr_EL1_TSTM_1_el1_trace_4_L()	(ChkL1ModFltr_EL1_TSTM_1()&&(FILTER_CHECK(EL1_TSTM_1_Trace_Filter, 1, 0x08)))
#define ChkL1MsgFltr_TSTM_LOG_FUNC_ENTRY()	ChkL1ClsFltr_EL1_TSTM_1_el1_trace_1_H()
#define ChkL1MsgFltr_TSTM_LOG_SYS_TIME()	ChkL1ClsFltr_EL1_TSTM_1_el1_trace_1_H()
#define ChkL1MsgFltr_TSTM_LOG_MAIN_ST()	ChkL1ClsFltr_EL1_TSTM_1_el1_trace_1_H()
#define ChkL1MsgFltr_TSTM_LOG_NEXT_MAIN_ST()	ChkL1ClsFltr_EL1_TSTM_1_el1_trace_1_H()
#define ChkL1MsgFltr_TSTM_LOG_DL_RX_ST()	ChkL1ClsFltr_EL1_TSTM_1_el1_trace_1_H()
#define ChkL1MsgFltr_TSTM_LOG_UL_TX_ST()	ChkL1ClsFltr_EL1_TSTM_1_el1_trace_1_H()
#define ChkL1MsgFltr_TSTM_LOG_DL_CS_ST()	ChkL1ClsFltr_EL1_TSTM_1_el1_trace_1_H()
#define ChkL1MsgFltr_TSTM_LOG_TX_RX_ST()	ChkL1ClsFltr_EL1_TSTM_1_el1_trace_1_H()
#define ChkL1MsgFltr_TSTM_LOG_RX_FSM_ST()	ChkL1ClsFltr_EL1_TSTM_1_el1_trace_1_H()
#define ChkL1MsgFltr_TSTM_LOG_RESET_ST()	ChkL1ClsFltr_EL1_TSTM_1_el1_trace_1_H()
#define ChkL1MsgFltr_TSTM_LOG_Pre_RESET_ST()	ChkL1ClsFltr_EL1_TSTM_1_el1_trace_1_H()
#define ChkL1MsgFltr_TSTM_LOG_MB_MIB_DC_ST()	ChkL1ClsFltr_EL1_TSTM_1_el1_trace_1_H()
#define ChkL1MsgFltr_TSTM_LOG_NRML_MIB_DC_ST()	ChkL1ClsFltr_EL1_TSTM_1_el1_trace_1_H()
#define ChkL1MsgFltr_TSTM_LOG_SI_DC_ST()	ChkL1ClsFltr_EL1_TSTM_1_el1_trace_1_H()
#define ChkL1MsgFltr_TSTM_LOG_PCELL_ST()	ChkL1ClsFltr_EL1_TSTM_1_el1_trace_1_H()
#define ChkL1MsgFltr_TSTM_LOG_SCELL_ST()	ChkL1ClsFltr_EL1_TSTM_1_el1_trace_1_H()
#define ChkL1MsgFltr_TSTM_LOG_RX_FSM_MOD()	ChkL1ClsFltr_EL1_TSTM_1_el1_trace_1_H()
#define ChkL1MsgFltr_TSTM_LOG_JUMP_MOD()	ChkL1ClsFltr_EL1_TSTM_1_el1_trace_1_H()
#define ChkL1MsgFltr_TSTM_LOG_ERR_ST()	ChkL1ClsFltr_EL1_TSTM_1_el1_trace_1_H()
#define ChkL1MsgFltr_TSTM_LOG_WAIT_ABORT_DONE_BMP()	ChkL1ClsFltr_EL1_TSTM_1_el1_trace_1_H()
#define ChkL1MsgFltr_TSTM_LOG_WAIT_EXE_DONE_BMP()	ChkL1ClsFltr_EL1_TSTM_1_el1_trace_1_H()
#define ChkL1MsgFltr_TSTM_LOG_MBSFN_CMD()	ChkL1ClsFltr_EL1_TSTM_1_el1_trace_1_H()
#define ChkL1MsgFltr_TSTM_LOG_EN_CNF_SEND()	ChkL1ClsFltr_EL1_TSTM_1_el1_trace_1_H()
#define ChkL1MsgFltr_TSTM_LOG_ABORT_RPT()	ChkL1ClsFltr_EL1_TSTM_1_el1_trace_1_H()
#define ChkL1MsgFltr_TSTM_LOG_SET_PHY_CONFIG()	ChkL1ClsFltr_EL1_TSTM_1_el1_trace_1_H()
#define ChkL1MsgFltr_TSTM_LOG_SET_CH_CONFIG()	ChkL1ClsFltr_EL1_TSTM_1_el1_trace_1_H()
#define ChkL1MsgFltr_TSTM_LOG_SET_COMM_CONFIG()	ChkL1ClsFltr_EL1_TSTM_1_el1_trace_1_H()
#define ChkL1MsgFltr_TSTM_LOG_SET_CELL_DEL_CONFIG()	ChkL1ClsFltr_EL1_TSTM_1_el1_trace_1_H()
#define ChkL1MsgFltr_TSTM_LOG_SET_CSCSR_CMD()	ChkL1ClsFltr_EL1_TSTM_1_el1_trace_1_H()
#define ChkL1MsgFltr_TSTM_LOG_SET_CSCD_CMD()	ChkL1ClsFltr_EL1_TSTM_1_el1_trace_1_H()
#define ChkL1MsgFltr_TSTM_LOG_SET_CSM_CMD()	ChkL1ClsFltr_EL1_TSTM_1_el1_trace_1_H()
#define ChkL1MsgFltr_TSTM_LOG_SET_MEAS_CMD()	ChkL1ClsFltr_EL1_TSTM_1_el1_trace_1_H()
#define ChkL1MsgFltr_TSTM_LOG_SET_CSCONT_CMD()	ChkL1ClsFltr_EL1_TSTM_1_el1_trace_1_H()
#define ChkL1MsgFltr_TSTM_LOG_SET_PRE_SYNC_CMD()	ChkL1ClsFltr_EL1_TSTM_1_el1_trace_1_H()
#define ChkL1MsgFltr_TSTM_LOG_SET_AFC_DAC_CMD()	ChkL1ClsFltr_EL1_TSTM_1_el1_trace_1_H()
#define ChkL1MsgFltr_TSTM_LOG_SET_TA_CMD()	ChkL1ClsFltr_EL1_TSTM_1_el1_trace_1_H()
#define ChkL1MsgFltr_TSTM_LOG_SET_FBD()	ChkL1ClsFltr_EL1_TSTM_1_el1_trace_1_H()
#define ChkL1MsgFltr_TSTM_LOG_SET_FREQ_BIN()	ChkL1ClsFltr_EL1_TSTM_1_el1_trace_1_H()
#define ChkL1MsgFltr_TSTM_LOG_ADD_MEAS_TBL_CELL()	ChkL1ClsFltr_EL1_TSTM_1_el1_trace_1_H()
#define ChkL1MsgFltr_TSTM_LOG_DEL_MEAS_TBL_CELL()	ChkL1ClsFltr_EL1_TSTM_1_el1_trace_1_H()
#define ChkL1MsgFltr_TSTM_LOG_ADD_SRV_CELL()	ChkL1ClsFltr_EL1_TSTM_1_el1_trace_1_H()
#define ChkL1MsgFltr_TSTM_LOG_ADD_FAKE_CELL()	ChkL1ClsFltr_EL1_TSTM_1_el1_trace_1_H()
#define ChkL1MsgFltr_TSTM_LOG_FAKE_CELL_DETECT_RLT()	ChkL1ClsFltr_EL1_TSTM_1_el1_trace_1_H()
#define ChkL1MsgFltr_TSTM_LOG_CS_PARAM_1()	ChkL1ClsFltr_EL1_TSTM_1_el1_trace_1_H()
#define ChkL1MsgFltr_TSTM_LOG_CS_PARAM_2()	ChkL1ClsFltr_EL1_TSTM_1_el1_trace_1_H()
#define ChkL1MsgFltr_TSTM_LOG_CS_PARAM_3()	ChkL1ClsFltr_EL1_TSTM_1_el1_trace_1_H()
#define ChkL1MsgFltr_TSTM_LOG_NBR_CM_RPT_RCV()	ChkL1ClsFltr_EL1_TSTM_1_el1_trace_1_H()
#define ChkL1MsgFltr_TSTM_LOG_SIC_PARAM()	ChkL1ClsFltr_EL1_TSTM_1_el1_trace_1_H()
#define ChkL1MsgFltr_TSTM_LOG_MEAS_PARAM_1()	ChkL1ClsFltr_EL1_TSTM_1_el1_trace_1_H()
#define ChkL1MsgFltr_TSTM_LOG_MEAS_PARAM_2()	ChkL1ClsFltr_EL1_TSTM_1_el1_trace_1_H()
#define ChkL1MsgFltr_TSTM_LOG_MEAS_PARAM_3()	ChkL1ClsFltr_EL1_TSTM_1_el1_trace_1_H()
#define ChkL1MsgFltr_TSTM_LOG_SET_PWRSCN_CMD()	ChkL1ClsFltr_EL1_TSTM_1_el1_trace_1_H()
#define ChkL1MsgFltr_TSTM_LOG_PCELL_RNTI_EN()	ChkL1ClsFltr_EL1_TSTM_1_el1_trace_1_H()
#define ChkL1MsgFltr_TSTM_LOG_SCELL_RNTI_EN()	ChkL1ClsFltr_EL1_TSTM_1_el1_trace_1_H()
#define ChkL1MsgFltr_TSTM_LOG_RNTI_BMP()	ChkL1ClsFltr_EL1_TSTM_1_el1_trace_1_H()
#define ChkL1MsgFltr_TSTM_LOG_MBMS_BMP()	ChkL1ClsFltr_EL1_TSTM_1_el1_trace_1_H()
#define ChkL1MsgFltr_TSTM_LOG_MBMS_CTRL_EN_BMP()	ChkL1ClsFltr_EL1_TSTM_1_el1_trace_1_H()
#define ChkL1MsgFltr_TSTM_LOG_MBMS_CTRL_DIS_BMP()	ChkL1ClsFltr_EL1_TSTM_1_el1_trace_1_H()
#define ChkL1MsgFltr_TSTM_LOG_SET_DL_CHNG()	ChkL1ClsFltr_EL1_TSTM_1_el1_trace_1_H()
#define ChkL1MsgFltr_TSTM_LOG_DL_CHNG_PCELL_PARAM()	ChkL1ClsFltr_EL1_TSTM_1_el1_trace_1_H()
#define ChkL1MsgFltr_TSTM_LOG_DL_CHNG_SCELL_PARAM_1()	ChkL1ClsFltr_EL1_TSTM_1_el1_trace_1_H()
#define ChkL1MsgFltr_TSTM_LOG_DL_CHNG_SCELL_PARAM_2()	ChkL1ClsFltr_EL1_TSTM_1_el1_trace_1_H()
#define ChkL1MsgFltr_TSTM_LOG_ST_MEAS_RLT()	ChkL1ClsFltr_EL1_TSTM_1_el1_trace_1_H()
#define ChkL1MsgFltr_TSTM_LOG_PWR_SCN_RLT()	ChkL1ClsFltr_EL1_TSTM_1_el1_trace_1_H()
#define ChkL1MsgFltr_TSTM_LOG_PHICH_PARAM_1()	ChkL1ClsFltr_EL1_TSTM_1_el1_trace_1_H()
#define ChkL1MsgFltr_TSTM_LOG_PHICH_PARAM_2()	ChkL1ClsFltr_EL1_TSTM_1_el1_trace_1_H()
#define ChkL1MsgFltr_TSTM_LOG_PHICH_PARAM_3()	ChkL1ClsFltr_EL1_TSTM_1_el1_trace_1_H()
#define ChkL1MsgFltr_TSTM_LOG_PHICH_REC_INDX()	ChkL1ClsFltr_EL1_TSTM_1_el1_trace_1_H()
#define ChkL1MsgFltr_TSTM_LOG_PRE_SYNC_PARAM_1()	ChkL1ClsFltr_EL1_TSTM_1_el1_trace_1_H()
#define ChkL1MsgFltr_TSTM_LOG_PRE_SYNC_PARAM_2()	ChkL1ClsFltr_EL1_TSTM_1_el1_trace_1_H()
#define ChkL1MsgFltr_TSTM_LOG_CQI_OTHER_CNT_1()	ChkL1ClsFltr_EL1_TSTM_1_el1_trace_1_H()
#define ChkL1MsgFltr_TSTM_LOG_CQI_OTHER_CNT_2()	ChkL1ClsFltr_EL1_TSTM_1_el1_trace_1_H()
#define ChkL1MsgFltr_TSTM_LOG_CQI_OTHER_CNT_3()	ChkL1ClsFltr_EL1_TSTM_1_el1_trace_1_H()
#define ChkL1MsgFltr_TSTM_LOG_CQI_OTHER_CNT_4()	ChkL1ClsFltr_EL1_TSTM_1_el1_trace_1_H()
#define ChkL1MsgFltr_TSTM_LOG_CQI_OTHER_CNT_5()	ChkL1ClsFltr_EL1_TSTM_1_el1_trace_1_H()
#define ChkL1MsgFltr_TSTM_LOG_CQI_OTHER_CNT_6()	ChkL1ClsFltr_EL1_TSTM_1_el1_trace_1_H()
#define ChkL1MsgFltr_TSTM_LOG_CQI_OTHER_CNT_7()	ChkL1ClsFltr_EL1_TSTM_1_el1_trace_1_H()
#define ChkL1MsgFltr_TSTM_LOG_CQI_PTI_CNT()	ChkL1ClsFltr_EL1_TSTM_1_el1_trace_1_H()
#define ChkL1MsgFltr_TSTM_LOG_CQI_RANK_CNT()	ChkL1ClsFltr_EL1_TSTM_1_el1_trace_1_H()
#define ChkL1MsgFltr_TSTM_LOG_EARFCN_TO_FREQ()	ChkL1ClsFltr_EL1_TSTM_1_el1_trace_1_H()
#define ChkL1MsgFltr_TSTM_LOG_FREQ_TO_EARFCN()	ChkL1ClsFltr_EL1_TSTM_1_el1_trace_1_H()
#define ChkL1MsgFltr_TSTM_LOG_MIB_CRC_RLT()	ChkL1ClsFltr_EL1_TSTM_1_el1_trace_1_H()
#define ChkL1MsgFltr_TSTM_LOG_SET_MBMS_EN()	ChkL1ClsFltr_EL1_TSTM_1_el1_trace_1_H()
#define ChkL1MsgFltr_TSTM_LOG_RX_CTRL_TIMING_RNTI()	ChkL1ClsFltr_EL1_TSTM_1_el1_trace_1_H()
#define ChkL1MsgFltr_TSTM_LOG_RX_CTRL_TIMING_POST_RS()	ChkL1ClsFltr_EL1_TSTM_1_el1_trace_1_H()
#define ChkL1MsgFltr_TSTM_LOG_RX_CTRL_TIMING_PRE_SYNC()	ChkL1ClsFltr_EL1_TSTM_1_el1_trace_1_H()
#define ChkL1MsgFltr_TSTM_LOG_RX_CTRL_TIMING_MB_EN()	ChkL1ClsFltr_EL1_TSTM_1_el1_trace_1_H()
#define ChkL1MsgFltr_TSTM_LOG_RX_FSM_RX_STRT()	ChkL1ClsFltr_EL1_TSTM_1_el1_trace_1_H()
#define ChkL1MsgFltr_TSTM_LOG_SRCH_EXIST_MCS_RCD()	ChkL1ClsFltr_EL1_TSTM_1_el1_trace_1_H()
#define ChkL1MsgFltr_TSTM_LOG_SI_CAL()	ChkL1ClsFltr_EL1_TSTM_1_el1_trace_1_H()
#define ChkL1MsgFltr_TSTM_LOG_UPDT_STRT_TIME_BASE()	ChkL1ClsFltr_EL1_TSTM_1_el1_trace_1_H()
#define ChkL1MsgFltr_TSTM_LOG_DUMMY_EMAC_TEST_MODE_CFG()	ChkL1ClsFltr_EL1_TSTM_1_el1_trace_1_H()
#define ChkL1MsgFltr_TSTM_LOG_DUMMY_EMAC_DELAY_INIT()	ChkL1ClsFltr_EL1_TSTM_1_el1_trace_1_H()
#define ChkL1MsgFltr_TSTM_LOG_DUMMY_EMAC_SWO_BIT()	ChkL1ClsFltr_EL1_TSTM_1_el1_trace_1_H()
#define ChkL1MsgFltr_TSTM_LOG_DUMMY_EMAC_RX_HT_SUBHDR_INFO()	ChkL1ClsFltr_EL1_TSTM_1_el1_trace_1_H()
#define ChkL1MsgFltr_TSTM_LOG_DUMMY_EMAC_RX_SUBHDR_INFO()	ChkL1ClsFltr_EL1_TSTM_1_el1_trace_1_H()
#define ChkL1MsgFltr_TSTM_LOG_DUMMY_EMAC_SUBFRM_IND_BMP()	ChkL1ClsFltr_EL1_TSTM_1_el1_trace_1_H()
#define ChkL1MsgFltr_TSTM_LOG_DUMMY_EMAC_TX_RESULT_INFO()	ChkL1ClsFltr_EL1_TSTM_1_el1_trace_1_H()
#define ChkL1MsgFltr_TSTM_LOG_DUMMY_EMAC_TX_RESULT_INFO_I()	ChkL1ClsFltr_EL1_TSTM_1_el1_trace_1_H()
#define ChkL1MsgFltr_TSTM_LOG_DUMMY_EMAC_PRINT_TIME()	ChkL1ClsFltr_EL1_TSTM_1_el1_trace_1_H()
#define ChkL1MsgFltr_TSTM_LOG_DUMMY_EMAC_SF_TYPE_GAP_INFO()	ChkL1ClsFltr_EL1_TSTM_1_el1_trace_1_H()
#define ChkL1MsgFltr_TSTM_LOG_DUMMY_EMAC_STATUS_BITMAP()	ChkL1ClsFltr_EL1_TSTM_1_el1_trace_1_H()
#define ChkL1MsgFltr_TSTM_LOG_DUMMY_EMAC_HARQ_CLOSE()	ChkL1ClsFltr_EL1_TSTM_1_el1_trace_1_H()
#define ChkL1MsgFltr_TSTM_LOG_DUMMY_EMAC_RCV_PHICH()	ChkL1ClsFltr_EL1_TSTM_1_el1_trace_1_H()
#define ChkL1MsgFltr_TSTM_LOG_DUMMY_EMAC_TX_GRANT_INFO()	ChkL1ClsFltr_EL1_TSTM_1_el1_trace_1_H()
#define ChkL1MsgFltr_TSTM_LOG_DUMMY_EMAC_TX_TIME()	ChkL1ClsFltr_EL1_TSTM_1_el1_trace_1_H()
#define ChkL1MsgFltr_TSTM_LOG_DUMMY_EMAC_TX_TIMELINE_INFO()	ChkL1ClsFltr_EL1_TSTM_1_el1_trace_1_H()
#define ChkL1MsgFltr_TSTM_LOG_DUMMY_EMAC_TX_MODE()	ChkL1ClsFltr_EL1_TSTM_1_el1_trace_1_H()
#define ChkL1MsgFltr_TSTM_LOG_DUMMY_EMAC_CONFIG()	ChkL1ClsFltr_EL1_TSTM_1_el1_trace_1_H()
#define ChkL1MsgFltr_TSTM_LOG_DUMMY_EMAC_SCHED_CONFIG()	ChkL1ClsFltr_EL1_TSTM_1_el1_trace_1_H()
#define ChkL1MsgFltr_TSTM_LOG_DUMMY_EMAC_PHY_INFO_TYPE_AND_MIB()	ChkL1ClsFltr_EL1_TSTM_1_el1_trace_1_H()
#define ChkL1MsgFltr_TSTM_LOG_DUMMY_EMAC_PHY_INFO_CONFIG_PCELL()	ChkL1ClsFltr_EL1_TSTM_1_el1_trace_1_H()
#define ChkL1MsgFltr_TSTM_LOG_DUMMY_EMAC_PHY_INFO_CONFIG_SCELL()	ChkL1ClsFltr_EL1_TSTM_1_el1_trace_1_H()
#define ChkL1MsgFltr_TSTM_LOG_DUMMY_EMAC_PHY_INFO_CONFIG_UL_SCELL()	ChkL1ClsFltr_EL1_TSTM_1_el1_trace_1_H()
#define ChkL1MsgFltr_TSTM_LOG_DUMMY_EMAC_NDI_NON_TOGGLE_TRICK()	ChkL1ClsFltr_EL1_TSTM_1_el1_trace_1_H()
#define ChkL1MsgFltr_TSTM_LOG_DUMMY_EMAC_GET_HARQ_UPD()	ChkL1ClsFltr_EL1_TSTM_1_el1_trace_1_H()
#define ChkL1MsgFltr_TSTM_LOG_DUMMY_EMAC_RCV_RETX_INFO()	ChkL1ClsFltr_EL1_TSTM_1_el1_trace_1_H()
#define ChkL1MsgFltr_TSTM_LOG_DUMMY_EMAC_INIT()	ChkL1ClsFltr_EL1_TSTM_1_el1_trace_1_H()
#define ChkL1MsgFltr_TSTM_LOG_DUMMY_EMAC_TRIGGER_LMAC()	ChkL1ClsFltr_EL1_TSTM_1_el1_trace_1_H()
#define ChkL1MsgFltr_TSTM_LOG_DUMMY_EMAC_TTI_BUNDLE_IDX()	ChkL1ClsFltr_EL1_TSTM_1_el1_trace_1_H()
#define ChkL1MsgFltr_TSTM_LOG_DUMMY_EMAC_PRINT_ADDR()	ChkL1ClsFltr_EL1_TSTM_1_el1_trace_1_H()
#define ChkL1MsgFltr_TSTM_LOG_LISR_RPT()	ChkL1ClsFltr_EL1_TSTM_1_el1_trace_1_H()
#define ChkL1MsgFltr_TSTM_LOG_TASK_RPT()	ChkL1ClsFltr_EL1_TSTM_1_el1_trace_1_H()
#define ChkL1MsgFltr_TSTM_LOG_NBR_TIME_CAL()	ChkL1ClsFltr_EL1_TSTM_1_el1_trace_1_H()
#define ChkL1MsgFltr_TSTM_LOG_NBR_OFFST_GET()	ChkL1ClsFltr_EL1_TSTM_1_el1_trace_1_H()
#define ChkL1MsgFltr_TSTM_LOG_SFBD_RPT()	ChkL1ClsFltr_EL1_TSTM_1_el1_trace_1_H()
#define ChkL1MsgFltr_TSTM_LOG_RX_RLM()	ChkL1ClsFltr_EL1_TSTM_1_el1_trace_1_H()
#define ChkL1MsgFltr_TSTM_LOG_FULL_MEAS_ONE_ROUND_FIN()	ChkL1ClsFltr_EL1_TSTM_1_el1_trace_1_H()
#define ChkL1MsgFltr_TSTM_LOG_CSI_RPT_RAW_1()	ChkL1ClsFltr_EL1_TSTM_1_el1_trace_1_H()
#define ChkL1MsgFltr_TSTM_LOG_CSI_RPT_RAW_2()	ChkL1ClsFltr_EL1_TSTM_1_el1_trace_1_H()
#define ChkL1MsgFltr_TSTM_LOG_CSI_RPT_MODE()	ChkL1ClsFltr_EL1_TSTM_1_el1_trace_1_H()
#define ChkL1MsgFltr_TSTM_LOG_SOFT_COMB()	ChkL1ClsFltr_EL1_TSTM_1_el1_trace_1_H()
#define ChkL1MsgFltr_TSTM_LOG_DEBUG_1()	ChkL1ClsFltr_EL1_TSTM_1_el1_trace_1_H()
#define ChkL1MsgFltr_TSTM_LOG_DEBUG_6()	ChkL1ClsFltr_EL1_TSTM_1_el1_trace_1_H()
#define ChkL1MsgFltr_TSTM_LOG_FORCE_TX_NOT_IN_FLIGHT()	ChkL1ClsFltr_EL1_TSTM_1_el1_trace_1_H()
#define ChkL1MsgFltr_TSTM_LOG_FORCE_TX_CMD()	ChkL1ClsFltr_EL1_TSTM_1_el1_trace_1_H()
#define ChkL1MsgFltr_TSTM_LOG_FORCE_TX_PARA_1()	ChkL1ClsFltr_EL1_TSTM_1_el1_trace_1_H()
#define ChkL1MsgFltr_TSTM_LOG_FORCE_TX_PARA_2()	ChkL1ClsFltr_EL1_TSTM_1_el1_trace_1_H()
#define ChkL1MsgFltr_TSTM_LOG_FORCE_TX_PARA_ERROR()	ChkL1ClsFltr_EL1_TSTM_1_el1_trace_1_H()
#define ChkL1MsgFltr_TSTM_LOG_CC_IRQ_TRIGGER()	ChkL1ClsFltr_EL1_TSTM_1_el1_trace_1_H()
#define ChkL1MsgFltr_TSTM_LOG_CC_IRQ_TX_HANDLE()	ChkL1ClsFltr_EL1_TSTM_1_el1_trace_1_H()
#define ChkL1MsgFltr_TSTM_LOG_UL_CC_PARAM_1()	ChkL1ClsFltr_EL1_TSTM_1_el1_trace_1_H()
#define ChkL1MsgFltr_TSTM_LOG_UL_CC_PARAM_2()	ChkL1ClsFltr_EL1_TSTM_1_el1_trace_1_H()
#define ChkL1MsgFltr_TSTM_LOG_UL_CC_PARAM_3()	ChkL1ClsFltr_EL1_TSTM_1_el1_trace_1_H()
#define ChkL1MsgFltr_TSTM_LOG_PUSCH_VRB_PARAM()	ChkL1ClsFltr_EL1_TSTM_1_el1_trace_1_H()


#endif
