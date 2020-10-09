#ifndef __CUIF_L1CORE_PUBLIC_H__
#define __CUIF_L1CORE_PUBLIC_H__

#include "kal_general_types.h"

#include "cuif_common_def.h"

/*******************************************************************************
 * Typedefs 
 *******************************************************************************/
/*

emum CUIF_C2U_INNER_Code_t defined in
"common/interface/driver/sys_drv/cuif/cuif_c2u_isr_config_inner.h"

enum CUIF_C2U_OUTER_Code_t defined in
"common/interface/driver/sys_drv/cuif/uif_c2u_isr_config_brp.h"

enum CUIF_C2U_FEC_Code_t defined in
"common/interface/driver/sys_drv/cuif/cuif_c2u_isr_config_fec_wbrp.h"

enum CUIF_C2U_SPEECH_Code_t defined in
"common/interface/driver/sys_drv/cuif/cuif_c2u_isr_config_speech.h"

*/

typedef kal_char                cuif_char;   
typedef kal_uint8               cuif_uint8;  
typedef kal_int8                cuif_int8;   
typedef kal_uint16              cuif_uint16; 
typedef kal_int16               cuif_int16;  
typedef kal_uint32              cuif_uint32; 
typedef kal_int32               cuif_int32;  
typedef kal_bool                cuif_bool;

/* Define status register type */
typedef struct{
    cuif_uint32 mask31_0;
    cuif_uint32 *status_reg_addr;
}CUIF_Mask_t;

/* User callback should be registered in common/interface/driver/sys_drv/cuif/ */

/* Define user callback function type */
typedef void (*CUIF_InterruptEntryFun)(CUIF_Mask_t*);

/*******************************************************************************
  * User-Aware MCU part API
  *******************************************************************************/
/*
where mask is typeof
typedef struct{
    cuif_uint32 mask31_0;    
}CUIF_Mask_t;

code is typeof
cuif_uint32 code
*/

/* U2C direction */
/* get interrupt STATUS */
#define CUIF_U2C_N0_STATUS(mask)        CUIF_U2C_STATUS(CUIF_ENUM_N0, mask)
#define CUIF_U2C_N1_STATUS(mask)        CUIF_U2C_STATUS(CUIF_ENUM_N1, mask)
#define CUIF_U2C_N2_STATUS(mask)        CUIF_U2C_STATUS(CUIF_ENUM_N2, mask)
#define CUIF_U2C_N3_STATUS(mask)        CUIF_U2C_STATUS(CUIF_ENUM_N3, mask)
#define CUIF_U2C_N4_STATUS(mask)        CUIF_U2C_STATUS(CUIF_ENUM_N4, mask)
#if defined(__MD95__)
#define CUIF_U2C_N5_STATUS(mask)        CUIF_U2C_STATUS(CUIF_ENUM_N5, mask)
#define CUIF_U2C_N6_STATUS(mask)        CUIF_U2C_STATUS(CUIF_ENUM_N6, mask)
#endif
#define CUIF_U2C_WAKEUP_STATUS(mask)    CUIF_U2C_STATUS(CUIF_ENUM_WAKEUP, mask)

/* set interrupt EOI */
#define CUIF_N0_EOI(code)               CUIF_U2C_EOI(CUIF_ENUM_N0, code, GET_MCU_INT_IRQ_LIMIT_NUMBER(N0))
#define CUIF_N1_EOI(code)               CUIF_U2C_EOI(CUIF_ENUM_N1, code, GET_MCU_INT_IRQ_LIMIT_NUMBER(N1))
#define CUIF_N2_EOI(code)               CUIF_U2C_EOI(CUIF_ENUM_N2, code, GET_MCU_INT_IRQ_LIMIT_NUMBER(N2))
#define CUIF_N3_EOI(code)               CUIF_U2C_EOI(CUIF_ENUM_N3, code, GET_MCU_INT_IRQ_LIMIT_NUMBER(N3))
#define CUIF_N4_EOI(code)               CUIF_U2C_EOI(CUIF_ENUM_N4, code, GET_MCU_INT_IRQ_LIMIT_NUMBER(N4))
#if defined(__MD95__)
#define CUIF_N5_EOI(code)               CUIF_U2C_EOI(CUIF_ENUM_N5, code, GET_MCU_INT_IRQ_LIMIT_NUMBER(N5))
#define CUIF_N6_EOI(code)               CUIF_U2C_EOI(CUIF_ENUM_N6, code, GET_MCU_INT_IRQ_LIMIT_NUMBER(N6))
#endif

/* clear speech wake-up source, only for speech usage */
#define CUIF_SPEECH_WAKEUP_EOI()        CUIF_U2C_EOI(CUIF_ENUM_WAKEUP, CUIF_ENUM_SPEECH, GET_MCU_INT_IRQ_LIMIT_NUMBER(WAKEUP))

/* get ENABLE(mask) STATUS */
#define CUIF_N0_EN_STATUS(mask)         CUIF_U2C_ENABLE_STATUS(CUIF_ENUM_N0, mask)
#define CUIF_N1_EN_STATUS(mask)         CUIF_U2C_ENABLE_STATUS(CUIF_ENUM_N1, mask)
#define CUIF_N2_EN_STATUS(mask)         CUIF_U2C_ENABLE_STATUS(CUIF_ENUM_N2, mask)
#define CUIF_N3_EN_STATUS(mask)         CUIF_U2C_ENABLE_STATUS(CUIF_ENUM_N3, mask)
#define CUIF_N4_EN_STATUS(mask)         CUIF_U2C_ENABLE_STATUS(CUIF_ENUM_N4, mask)
#if defined(__MD95__)
#define CUIF_N5_EN_STATUS(mask)         CUIF_U2C_ENABLE_STATUS(CUIF_ENUM_N5, mask)
#define CUIF_N6_EN_STATUS(mask)         CUIF_U2C_ENABLE_STATUS(CUIF_ENUM_N6, mask)
#endif
#define CUIF_WAKEUP_EN_STATUS(mask)     CUIF_U2C_ENABLE_STATUS(CUIF_ENUM_WAKEUP, mask)

/* set mask ENABLE */
#define CUIF_N0_ENABLE(code)            CUIF_U2C_ENABLE(CUIF_ENUM_N0, code, GET_MCU_INT_IRQ_LIMIT_NUMBER(N0))
#define CUIF_N1_ENABLE(code)            CUIF_U2C_ENABLE(CUIF_ENUM_N1, code, GET_MCU_INT_IRQ_LIMIT_NUMBER(N1))
#define CUIF_N2_ENABLE(code)            CUIF_U2C_ENABLE(CUIF_ENUM_N2, code, GET_MCU_INT_IRQ_LIMIT_NUMBER(N2))
#define CUIF_N3_ENABLE(code)            CUIF_U2C_ENABLE(CUIF_ENUM_N3, code, GET_MCU_INT_IRQ_LIMIT_NUMBER(N3))
#define CUIF_N4_ENABLE(code)            CUIF_U2C_ENABLE(CUIF_ENUM_N4, code, GET_MCU_INT_IRQ_LIMIT_NUMBER(N4))
#if defined(__MD95__)
#define CUIF_N5_ENABLE(code)            CUIF_U2C_ENABLE(CUIF_ENUM_N5, code, GET_MCU_INT_IRQ_LIMIT_NUMBER(N5))
#define CUIF_N6_ENABLE(code)            CUIF_U2C_ENABLE(CUIF_ENUM_N6, code, GET_MCU_INT_IRQ_LIMIT_NUMBER(N6))
#endif
#define CUIF_WAKEUP_ENABLE(code)        CUIF_U2C_ENABLE(CUIF_ENUM_WAKEUP, code, GET_MCU_INT_IRQ_LIMIT_NUMBER(WAKEUP))

/* set mask DISABLE */
#define CUIF_N0_DISABLE(code)           CUIF_U2C_DISABLE(CUIF_ENUM_N0, code, GET_MCU_INT_IRQ_LIMIT_NUMBER(N0))
#define CUIF_N1_DISABLE(code)           CUIF_U2C_DISABLE(CUIF_ENUM_N1, code, GET_MCU_INT_IRQ_LIMIT_NUMBER(N1))
#define CUIF_N2_DISABLE(code)           CUIF_U2C_DISABLE(CUIF_ENUM_N2, code, GET_MCU_INT_IRQ_LIMIT_NUMBER(N2))
#define CUIF_N3_DISABLE(code)           CUIF_U2C_DISABLE(CUIF_ENUM_N3, code, GET_MCU_INT_IRQ_LIMIT_NUMBER(N3))
#define CUIF_N4_DISABLE(code)           CUIF_U2C_DISABLE(CUIF_ENUM_N4, code, GET_MCU_INT_IRQ_LIMIT_NUMBER(N4))
#if defined(__MD95__)
#define CUIF_N5_DISABLE(code)           CUIF_U2C_DISABLE(CUIF_ENUM_N5, code, GET_MCU_INT_IRQ_LIMIT_NUMBER(N5))
#define CUIF_N6_DISABLE(code)           CUIF_U2C_DISABLE(CUIF_ENUM_N6, code, GET_MCU_INT_IRQ_LIMIT_NUMBER(N6))
#endif
#define CUIF_WAKEUP_DISABLE(code)       CUIF_U2C_DISABLE(CUIF_ENUM_WAKEUP, code, GET_MCU_INT_IRQ_LIMIT_NUMBER(WAKEUP))

/* C2U direction */

/* SET interrupt, if the code's bit has been set before, it will cause assertion */
#define CUIF_INNER_SWI_SW(code)         CUIF_C2U_SWI_SW(CUIF_ENUM_INNER, code, GET_MODULE_IRQ_LIMIT_NUMBER(INNER))
#define CUIF_BRP_SWI_SW(code)           CUIF_C2U_SWI_SW(CUIF_ENUM_OUTER, code, GET_MODULE_IRQ_LIMIT_NUMBER(OUTER))
#define CUIF_FEC_SWI_SW(code)           CUIF_C2U_SWI_SW(CUIF_ENUM_FEC, code, GET_MODULE_IRQ_LIMIT_NUMBER(FEC))
#define CUIF_SPEECH_SWI_SW(code)        CUIF_C2U_SWI_SW(CUIF_ENUM_SPEECH, code, GET_MODULE_IRQ_LIMIT_NUMBER(SPEECH))

/* get C2U interrupt STATUS */
#define CUIF_C2U_INNER_STATUS(mask)     CUIF_C2U_STATUS(CUIF_ENUM_INNER, mask)
#define CUIF_C2U_OUTER_STATUS(mask)     CUIF_C2U_STATUS(CUIF_ENUM_OUTER, mask)
#define CUIF_C2U_FEC_STATUS(mask)       CUIF_C2U_STATUS(CUIF_ENUM_FEC, mask)
#define CUIF_C2U_SPEECH_STATUS(mask)    CUIF_C2U_STATUS(CUIF_ENUM_SPEECH, mask)

/*******************************************************************************
 * Function prototypes
 *******************************************************************************/
extern void CUIF_Init();


/*
  *  Get CUIF U2C Status register value
  *  @param[in]    nID -the enum of N0, N1, N2, N3, N4, N5, N6
  *  @param[out]   mask  - the value of status register(s)
  *
  */
extern void CUIF_U2C_STATUS(CUIF_MCU_INT nID, CUIF_Mask_t* m);

/**
  *   When the `irq_auto_eoi()` attribute is `CUIF_FALSE`
  *   Users could call these function to clean the interrupt bit
  *
  *  @param[in]  nID -the enum of N0, N1, N2, N3, N4, N5, N6
  *  @param[in]  code  - use enum of `CUIF_U2C_NX_Code_t`, where NX = N0, N1, N2, N3, N4, N5, N6
  *  @param[in]  limit - CUIF_MCU_INT_NX_SOURCES, where NX = N0, N1, N2, N3, N4, N5, N6
  *  @return no return
  *
  */
extern void CUIF_U2C_EOI(CUIF_MCU_INT nID, cuif_uint32 code, cuif_uint32 limit);


/*
  *  Get CUIF enable(mask) status register value
  *  @param[in]    nID -the enum of N0, N1, N2, N3, N4, N5, N6
  *  @param[out]   mask  - the value of enable(mask) status register(s)
  *
  */
extern void CUIF_U2C_ENABLE_STATUS(CUIF_MCU_INT nID, CUIF_Mask_t* m);

/**
  *   Set the bit of `code` to enable sorresponding CUIF interrupt
  *
  *  @param[in]  nID -the enum of N0, N1, N2, N3, N4, N5, N6
  *  @param[in]  code  - use enum of `CUIF_U2C_NX_Code_t`, where NX = N0, N1, N2, N3, N4, N5, N6
  *  @param[in]  limit - CUIF_MCU_INT_NX_SOURCES, where NX = N0, N1, N2, N3, N4, N5, N6
  *  @return no return
  *
  */
extern void CUIF_U2C_ENABLE(CUIF_MCU_INT nID, cuif_uint32 code, cuif_uint32 limit);

/**
  *   Set the bit of `code` to disable sorresponding CUIF interrupt
  *
  *  @param[in]  nID -the enum of N0, N1, N2, N3, N4, N5, N6
  *  @param[in]  code  - use enum of `CUIF_U2C_NX_Code_t`, where NX = N0, N1, N2, N3, N4, N5, N6
  *  @param[in]  limit - CUIF_MCU_INT_NX_SOURCES, where NX = N0, N1, N2, N3, N4, N5, N6
  *  @return no return

  *
  */
extern void CUIF_U2C_DISABLE(CUIF_MCU_INT nID, cuif_uint32 code, cuif_uint32 limit);


/**
  *  CUIF Interrupt: MCU trigger uSIP, if the code's bit has been set before, it will cause assertion
  *
  *  @param[in]    moduleID -the enum of INNER, OUTER, FEC, SPEECH
  *  @param[in]  code  - use enum of `CUIF_C2U_XXX_Code_t`, where XXX = INNER, OUTER, FEC, SPEECH
  *  @param[in]  limit - CUIF_NUM_INTERRUPT_X_SOURCES, where X = INNER, OUTER, FEC, SPEECH
  *  @return no return
  *
  **/
extern void CUIF_C2U_SWI_SW(CUIF_MODULE_INDEX moduleID, cuif_uint32 code, cuif_uint32 limit);

/**
  *  CUIF Interrupt: MCU trigger uSIP, it would not check if the code's bit has been set before
  *
  *  @param[in]    moduleID -the enum of INNER, OUTER, FEC, SPEECH
  *  @param[in]  code  - use enum of `CUIF_C2U_XXX_Code_t`, where XXX = INNER, OUTER, FEC, SPEECH
  *  @param[in]  limit - CUIF_NUM_INTERRUPT_X_SOURCES, where X = INNER, OUTER, FEC, SPEECH
  *  @return no return
  *
  **/
extern void CUIF_C2U_SWI_NO_CHECK(CUIF_MODULE_INDEX moduleID, cuif_uint32 code, cuif_uint32 limit);


/**
  *   Get CUIF C2U Status register value
  *
  *  @param[in]    moduleID -the enum of INNER, OUTER, FEC, SPEECH
  *  @param[out]   mask  - the value of status register(s)
  *
  **/
extern void CUIF_C2U_STATUS(CUIF_MODULE_INDEX moduleID, CUIF_Mask_t* m);

/**
  *   Backup CUIF U2C enable registers, used for sleep flow only
  *
  **/
extern void CUIF_register_backup();

/**
  *   Restore CUIF U2C enable registers, used for sleep flow only
  *
  **/
extern void CUIF_register_restore();

#endif /*__CUIF_L1CORE_PUBLIC_H__*/

