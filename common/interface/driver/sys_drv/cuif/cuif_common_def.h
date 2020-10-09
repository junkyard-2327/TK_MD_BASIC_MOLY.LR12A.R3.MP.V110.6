/*******************************************
*   please DO NOT include this file
*   this file is for mcu/dsp cuif driver include only 
************************************************/

/*******************************************************************************
  * Enums 
  *******************************************************************************/
#undef irq_index
#undef irq_name 
#undef irq_entry_function
#undef irq_auto_eoi

#define irq_index(index) index,
#define irq_name(name)
#define irq_entry_function(fun)
#define irq_auto_eoi(eoi)

/* U2C */

#if defined(__DSP_CODEBASE_MT6293__)

typedef enum CUIF_U2C_InterruptHandlerCode_N0_Enum{
    #include "mt6293/cuif_u2c_isr_config_n0.h"
    CUIF_U2C_N0_TOTAL_NUMBER
}CUIF_U2C_N0_Code_t;

typedef enum CUIF_U2C_InterruptHandlerCode_N1_Enum{
    #include "mt6293/cuif_u2c_isr_config_n1.h"
    CUIF_U2C_N1_TOTAL_NUMBER
}CUIF_U2C_N1_Code_t;

typedef enum CUIF_U2C_InterruptHandlerCode_N2_Enum{
    #include "mt6293/cuif_u2c_isr_config_n2.h"
    CUIF_U2C_N2_TOTAL_NUMBER
}CUIF_U2C_N2_Code_t;

typedef enum CUIF_U2C_InterruptHandlerCode_N3_Enum{
    #include "mt6293/cuif_u2c_isr_config_n3.h"
    CUIF_U2C_N3_TOTAL_NUMBER
}CUIF_U2C_N3_Code_t;

typedef enum CUIF_U2C_InterruptHandlerCode_N4_Enum{
    #include "mt6293/cuif_u2c_isr_config_n4.h"
    CUIF_U2C_N4_TOTAL_NUMBER
}CUIF_U2C_N4_Code_t;

#elif defined(__DSP_CODEBASE_MT6295__)

typedef enum CUIF_U2C_InterruptHandlerCode_N0_Enum{
    #include "mt6295/cuif_u2c_isr_config_n0.h"
    CUIF_U2C_N0_TOTAL_NUMBER
}CUIF_U2C_N0_Code_t;

typedef enum CUIF_U2C_InterruptHandlerCode_N1_Enum{
    #include "mt6295/cuif_u2c_isr_config_n1.h"
    CUIF_U2C_N1_TOTAL_NUMBER
}CUIF_U2C_N1_Code_t;

typedef enum CUIF_U2C_InterruptHandlerCode_N2_Enum{
    #include "mt6295/cuif_u2c_isr_config_n2.h"
    CUIF_U2C_N2_TOTAL_NUMBER
}CUIF_U2C_N2_Code_t;

typedef enum CUIF_U2C_InterruptHandlerCode_N3_Enum{
    #include "mt6295/cuif_u2c_isr_config_n3.h"
    CUIF_U2C_N3_TOTAL_NUMBER
}CUIF_U2C_N3_Code_t;

typedef enum CUIF_U2C_InterruptHandlerCode_N4_Enum{
    #include "mt6295/cuif_u2c_isr_config_n4.h"
    CUIF_U2C_N4_TOTAL_NUMBER
}CUIF_U2C_N4_Code_t;

typedef enum CUIF_U2C_InterruptHandlerCode_N5_Enum{
    #include "mt6295/cuif_u2c_isr_config_n5.h"
    CUIF_U2C_N5_TOTAL_NUMBER
}CUIF_U2C_N5_Code_t;

typedef enum CUIF_U2C_InterruptHandlerCode_N6_Enum{
    #include "mt6295/cuif_u2c_isr_config_n6.h"
    CUIF_U2C_N6_TOTAL_NUMBER
}CUIF_U2C_N6_Code_t;

#else

#error "Not support this generation !!!!"

#endif

/* C2U */
typedef enum CUIF_C2U_InterruptHandlerCode_INNER_Enum{
    #include "cuif_c2u_isr_config_inner.h"
    CUIF_C2U_INNER_TOTAL_NUMBER
}CUIF_C2U_INNER_Code_t;

typedef enum CUIF_C2U_InterruptHandlerCode_OUTER_Enum{
    #include "cuif_c2u_isr_config_brp.h"
    CUIF_C2U_OUTER_TOTAL_NUMBER
}CUIF_C2U_OUTER_Code_t;

typedef enum CUIF_C2U_InterruptHandlerCode_FEC_Enum{
    #include "cuif_c2u_isr_config_fec_wbrp.h"
    CUIF_C2U_FEC_TOTAL_NUMBER
}CUIF_C2U_FEC_Code_t;

typedef enum CUIF_C2U_InterruptHandlerCode_SPEECH_Enum{
    #include "cuif_c2u_isr_config_speech.h"
    CUIF_C2U_SPEECH_TOTAL_NUMBER
}CUIF_C2U_SPEECH_Code_t;

#undef irq_index
#undef irq_name 
#undef irq_entry_function
#undef irq_auto_eoi

#define irq_index(index) 
#define irq_name(name)
#define irq_entry_function(func)    
#define irq_auto_eoi(eoi)

/* module enum */
typedef enum CUIF_Module_Index_Enum{
	CUIF_ENUM_INNER,
	CUIF_ENUM_OUTER,
	CUIF_ENUM_FEC,
	CUIF_ENUM_SPEECH,
	CUIF_ENUM_ALL_USIP_INT_NUM
}CUIF_MODULE_INDEX;

/* CUIF MCU Int enum */
typedef enum CUIF_MCU_Int_Enum{
    CUIF_ENUM_N0,
    CUIF_ENUM_N1,
    CUIF_ENUM_N2,
    CUIF_ENUM_N3,
    CUIF_ENUM_N4,
#if defined(__DSP_CODEBASE_MT6295__)
    CUIF_ENUM_N5,
    CUIF_ENUM_N6,
#endif
	CUIF_ENUM_WAKEUP,
	CUIF_ENUM_ALL_MCU_INT_NUM
}CUIF_MCU_INT;

/*******************************************************************************
  * Macros 
  *******************************************************************************/

#define CUIF_NUM_INTERRUPT_INNER_SOURCES        (25)
#define CUIF_NUM_INTERRUPT_OUTER_SOURCES        (15)
#define CUIF_NUM_INTERRUPT_FEC_SOURCES          (32)
#define CUIF_NUM_INTERRUPT_SPEECH_SOURCES       (10)

#if defined(__DSP_CODEBASE_MT6293__)

#define CUIF_MCU_INT_N0_SOURCES                 (27)
#define CUIF_MCU_INT_N1_SOURCES                 (17)
#define CUIF_MCU_INT_N2_SOURCES                 (11)
#define CUIF_MCU_INT_N3_SOURCES                 (32)
#define CUIF_MCU_INT_N4_SOURCES                 (21)
#define CUIF_MCU_INT_WAKEUP_SOURCES             (4)

#elif defined(__DSP_CODEBASE_MT6295__)

#define CUIF_MCU_INT_N0_SOURCES                 (28)
#define CUIF_MCU_INT_N1_SOURCES                 (16)
#define CUIF_MCU_INT_N2_SOURCES                 (11)
#define CUIF_MCU_INT_N3_SOURCES                 (32)
#define CUIF_MCU_INT_N4_SOURCES                 (16)
#define CUIF_MCU_INT_N5_SOURCES                 (14)
#define CUIF_MCU_INT_N6_SOURCES                 (14)
#define CUIF_MCU_INT_WAKEUP_SOURCES             (6)

#endif


/* get cuif IRQ limit number by module enum*/
/* e.g. GET_MODULE_IRQ_LIMIT_NUMBER(INNER) => CUIF_NUM_INTERRUPT_INNER_SOURCES */
#define POSTFIX(mID, pos)						mID##pos
#define PREFIX(mID, pre) 						POSTFIX(pre##mID, _SOURCES)	
#define GET_MODULE_IRQ_LIMIT_NUMBER(mID)		PREFIX(mID, CUIF_NUM_INTERRUPT_)

/* e.g. GET_MCU_INT_IRQ_LIMIT_NUMBER(N0) => CUIF_MCU_INT_N0_SOURCES */
#define GET_MCU_INT_IRQ_LIMIT_NUMBER(nID)		PREFIX(nID, CUIF_MCU_INT_)


