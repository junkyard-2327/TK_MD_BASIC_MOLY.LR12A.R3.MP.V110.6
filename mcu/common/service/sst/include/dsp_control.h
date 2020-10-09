#ifndef _DSP_CONTROL_H_
#define _DSP_CONTROL_H_

#include "kal_public_api.h"
#include "dsp_control_public.h"
#include "usip_api_public.h"
#include "rake_api_public.h"
#include "reg_base.h"

#include "dsp_header_define_cuif_inner_brp.h"
#include "dsp_header_define_cuif_fec_wbrp.h"
#include "dsp_header_define_cuif_speech.h"
#include "dsp_header_define_cmif.h"

/************************************/
/************* Common ***************/
/************************************/
/***** Function Utility *****/
typedef enum{
    DSP_CTRL_FALSE,
    DSP_CTRL_TRUE
} DSP_CTRL_FALSE_TRUE;

typedef struct{
    kal_uint32 usip_pc;
    kal_uint32 usip_status;
    kal_uint32 usip_tbuf_pointer;
    kal_uint32 usip_halt;
} DSP_CTRL_PWR_CHECK_MEMBER;

/***** Pattern Macro *****/
#define DSP_DEACTIVE_DONE                           0x62933926
#define DSP_DEACTIVE_INIT                           0x0
#define ALL_USER_ARE_DEACTIVE                       DSP_CTRL_FALSE
#define DSP_CTRL_ENABLE_CORE_INIT_VALUE             0xECECECEC
#define DUTY_USER_INIT_PATTERN                      0x10101010
#define FIRSTBOOT_CHECK_CUIF_CONNECT_CNT_PATTERN    0x1F
#define API_CALL_STATUS_INIT_PATTERN                0x0

// uSIP debug ctrl(SW/HW CLK)
#define USIP_TH0_PERI_CK_DIS                0x4
#define USIP_TH0_FORCE_CK_EN                0x8
#define USIP_TH0_FORCE_CK_DIS               0xC
#define USIP_TH0_PERI_CK                    0x1
#define USIP_TH0_FORCE_CK                   0xFF
#define USIP_DISABLE_ALL_FORCE_ON_CK        0xFFFF
#define USIP_ENABLE_FORCE_ON_CK             0xFC1C
#define USIP_TH0_PERI_CK_SW_MODE_REG        *(kal_uint32*)(BASE_MADDR_USIP_CONFG + USIP_TH0_PERI_CK_DIS)
#define USIP_TH0_FORCE_CK_SW_MODE_REG       *(kal_uint32*)(BASE_MADDR_USIP_CONFG + USIP_TH0_FORCE_CK_DIS)
#define USIP_ENABLE_FORCE_ON_CK_REG         *(kal_uint32*)(BASE_MADDR_USIP_CONFG + USIP_TH0_FORCE_CK_EN)

/***** DCM IDLE MASK*****/
#define USIP_MASK_L1_DCM_IDLE               0x48
#if defined(__MD93__)
#define USIP_DCM_MASK                       0x19f
#elif defined(__MD95__)
#define USIP_DCM_MASK                       0x193
#else
#error "not support chip!! Please porting for it!!"
#endif
#define USIP_DCM_MASK_REG                   *(kal_uint32*)(BASE_MADDR_USIP_CONFG + USIP_MASK_L1_DCM_IDLE)

/***** HW Signal Access Macro *****/
#define USIP_STATUS_CG_CHECK_MASK           0x00000001
#define USIP_STATUS_WAITE_CHECK_MASK        0x000F0000
#define USIP_STATUS_PWR_CHECK_BIT_OFFSET    0x00000100

// SCq16 PWR CTRL COMMON
#define BASE_SCQ16_0_CR                     BASE_MADDR_BRAM_SCQ0_VU_CR
#define BASE_SCQ16_1_CR                     BASE_MADDR_BRAM_SCQ1_VU_CR
#define SCQ16_MD32_WAITE_OFFSET             0x24
#define SCQ16_CORE_FETCH_OFFSET             0x0

// SCq16_0 PWR CTRL
#define SCQ16_0_MD32_WAITE_ADDR             ((volatile kal_uint32*)(BASE_SCQ16_0_CR + SCQ16_MD32_WAITE_OFFSET))
#define SCQ16_0_MD32_WAITE                  *((volatile kal_uint32*)(BASE_SCQ16_0_CR + SCQ16_MD32_WAITE_OFFSET))
#define SCQ16_0_CORE_FETCH                  *((volatile kal_uint32*)(BASE_SCQ16_0_CR + SCQ16_CORE_FETCH_OFFSET))

// SCq16_1 PWR CTRL
#define SCQ16_1_MD32_WAITE_ADDR             ((volatile kal_uint32*)(BASE_SCQ16_1_CR + SCQ16_MD32_WAITE_OFFSET))
#define SCQ16_1_MD32_WAITE                  *((volatile kal_uint32*)(BASE_SCQ16_1_CR + SCQ16_MD32_WAITE_OFFSET))
#define SCQ16_1_CORE_FETCH                  *((volatile kal_uint32*)(BASE_SCQ16_1_CR + SCQ16_CORE_FETCH_OFFSET))

// uSIP PWR CTRL COMMON
#define USIP_MON_PC_OFFSET                  0x20010
#define USIP_MON_TBUF_WPTR_OFFSET           0x20014
#define USIP_STATUS_OFFSET                  0x20018

// uSIP0 PWR CTRL
#define USIP0_MON_PC_ADDR                   ((volatile kal_uint32*)(BASE_MADDR_MDMCU_USIP_INT_DBG + USIP_MON_PC_OFFSET))
#define USIP0_MON_PC                        *((volatile kal_uint32*)(BASE_MADDR_MDMCU_USIP_INT_DBG + USIP_MON_PC_OFFSET))
#define USIP0_PWR_CTRL_CHECK_ADDR           ((volatile kal_uint32*)(BASE_MADDR_MDMCU_USIP_INT_DBG + USIP_STATUS_OFFSET))
#define USIP0_PWR_CTRL_CHECK                *((volatile kal_uint32*)(BASE_MADDR_MDMCU_USIP_INT_DBG + USIP_STATUS_OFFSET))

#define USIP0_MON_TBUF_WPTR_ADDR            ((volatile kal_uint32*)(BASE_MADDR_MDMCU_USIP_INT_DBG + USIP_MON_TBUF_WPTR_OFFSET))
#define USIP0_MON_TBUF_WPTR                 *((volatile kal_uint32*)(BASE_MADDR_MDMCU_USIP_INT_DBG + USIP_MON_TBUF_WPTR_OFFSET))

// uSIP1 PWR CTRL
#define USIP1_MON_PC_ADDR                   ((volatile kal_uint32*)(BASE_MADDR_MDMCU_USIP1_INT_DBG + USIP_MON_PC_OFFSET))
#define USIP1_MON_PC                        *((volatile kal_uint32*)(BASE_MADDR_MDMCU_USIP1_INT_DBG + USIP_MON_PC_OFFSET))
#define USIP1_PWR_CTRL_CHECK_ADDR           ((volatile kal_uint32*)(BASE_MADDR_MDMCU_USIP1_INT_DBG + USIP_STATUS_OFFSET))
#define USIP1_PWR_CTRL_CHECK                *((volatile kal_uint32*)(BASE_MADDR_MDMCU_USIP1_INT_DBG + USIP_STATUS_OFFSET))

#define USIP1_MON_TBUF_WPTR_ADDR            ((volatile kal_uint32*)(BASE_MADDR_MDMCU_USIP1_INT_DBG + USIP_MON_TBUF_WPTR_OFFSET))
#define USIP1_MON_TBUF_WPTR                 *((volatile kal_uint32*)(BASE_MADDR_MDMCU_USIP1_INT_DBG + USIP_MON_TBUF_WPTR_OFFSET))

// RAKE BOOTSLAVE
#define RAKE_BOOTSLAVE_OFFSET               0xC
#define RAKE_BOOTSLAVE_ADDR                 ((volatile kal_uint32*)(BASE_MADDR_RAKESYS_PERICTRL + RAKE_BOOTSLAVE_OFFSET))
#define RAKE_BOOTSLAVE                      *((volatile kal_uint32*)(BASE_MADDR_RAKESYS_PERICTRL + RAKE_BOOTSLAVE_OFFSET))

// USIP sram type setting
#define USIP_SRAM_TYPE_ADDR                 ((volatile kal_uint32*)(BASE_MADDR_MDPERI_USIP0_MEM_CONFIG))
#define USIP_SRAM_TYPE                      *((volatile kal_uint32*)(BASE_MADDR_MDPERI_USIP0_MEM_CONFIG))
#define USIP_SRAM_TYPE_MASK                 0x3

//SCQ sram type setting
#define SCQ_SRAM_TYPE_OFFSET                0x4
#define SCQ_SRAM_TYPE_ADDR                  ((volatile kal_uint32*)(BASE_MADDR_MODEML1_AO_MDRX_P2P_TX + SCQ_SRAM_TYPE_OFFSET))
#define SCQ_SRAM_TYPE                       *((volatile kal_uint32*)(BASE_MADDR_MODEML1_AO_MDRX_P2P_TX + SCQ_SRAM_TYPE_OFFSET))
#define SCQ_SRAM_TYPE_MASK                  0x7FF

//RAKE sram type setting
#define RAKE_SRAM_TYPE_OFFSET               0x10
#define RAKE_SRAM_TYPE_ADDR                 ((volatile kal_uint32*)(BASE_MADDR_MODEML1_AO_MDRX_P2P_TX + RAKE_SRAM_TYPE_OFFSET))
#define RAKE_SRAM_TYPE                      *((volatile kal_uint32*)(BASE_MADDR_MODEML1_AO_MDRX_P2P_TX + RAKE_SRAM_TYPE_OFFSET))
#define RAKE_SRAM_TYPE_MASK                 0xFF
/***** Function Macro *****/

/***** Enum *****/
typedef enum{
    DSP_CTRL_ABORT,
    DSP_CTRL_DORMANT
} DSP_CTRL_IRQ_TYPE;

typedef enum{
    DSP_CTRL_ACTIVATE_ACTION                = 0x0,
    DSP_CTRL_ACTIVATE_ACTION_AFTER_HWITC    = 0x1,
    DSP_CTRL_ACTIVATE_CHECK_ACTION          = 0x4,
    DSP_CTRL_DEACTIVATE_ACTION              = 0x8,
    DSP_CTRL_DEACTIVATE_ACTION_AFTER_HWITC  = 0x9,
    DSP_CTRL_DEACTIVATE_CHECK_ACTION        = 0xC,
    DSP_CTRL_ACTION_NUM                     = 0x4
} DSP_CTRL_ACTION_CODE;

#define DSP_CTRL_ACTIVATE_ACTION_BIT            (1 << DSP_CTRL_ACTIVATE_ACTION)
#define DSP_CTRL_ACTIVATE_CHECK_ACTION_BIT      (1 << DSP_CTRL_ACTIVATE_CHECK_ACTION)
#define DSP_CTRL_DEACTIVATE_ACTION_BIT          (1 << DSP_CTRL_DEACTIVATE_ACTION)
#define DSP_CTRL_DEACTIVATE_CHECK_ACTION_BIT    (1 << DSP_CTRL_DEACTIVATE_CHECK_ACTION)

/************************************/
/************* uSIP *****************/
/************************************/

/***** Common API *****/
DSP_CONTROL_IDLE_FLAG_STATUS usip_check_idle_flag(DSP_CDIF_CORE_ENUM, kal_uint32);

/***** Activate Relatives *****/
void usip_activate(DSP_CDIF_CORE_ENUM, kal_uint32);

/***** Deactivate Relatives *****/
void usip_deactivate(DSP_CDIF_CORE_ENUM, kal_uint32);
USIP_CONTROL_STATUS usip_deactive_done_check(DSP_CDIF_CORE_ENUM, kal_uint32);


/************************************/
/************* RAKE *****************/
/************************************/
#define RAKE_CMIF_BASE_ADDR BASE_MADDR_RAKESYS_CMIF
#define RAKE_WFI_MASK_OFFSET 0x4

/***** Common API *****/
DSP_CONTROL_IDLE_FLAG_STATUS rake_check_idle_flag(RAKE_API_USER);

/***** Activate Relatives *****/
void rake_activate(RAKE_API_USER);

/***** Deactivate Relatives *****/
void rake_deactivate(RAKE_API_USER, CMIFZI_CTRL);
RAKE_CONTROL_STATUS rake_deactive_done_check(RAKE_API_USER);

/* Check Boot Done API*/
RAKE_BOOTDONECHECK_RETVALUE RAKE_BootDoneCheck(RAKE_API_USER);

#endif

