#ifndef _DSP_CONTROL_PUBLIC_H_
#define _DSP_CONTROL_PUBLIC_H_

/***** Common Definition *****/
#define RAKE_CONTROL_STATUS RAKE_BOOTDONECHECK_RETVALUE
#define USIP_CONTROL_STATUS uSIP_BOOTDONECHECK_RETVALUE

/***************************************************************/
/********* Common Macro ***************************************/
/***************************************************************/
#define CORE_ID_INIT_VALUE          0xDC11DC11
#define USIP_VIC_ENABLE_FILL        0x20170526
#define USIP_VIC_ENABLE_CLEAR       0x0

/***************************************************************/
/********* Common Enum ***************************************/
/***************************************************************/
/* RAT user Enum */
typedef enum{
    DSP_CTRL_RAT_LTE,
    DSP_CTRL_RAT_WCDMA,
    DSP_CTRL_RAT_C2K,
    DSP_CTRL_RAT_TDSCDMA,
    DSP_CTRL_RAT_SPEECH,
    DSP_CTRL_RAT_NUM
} DSP_CTRL_RAT_ENUM;

/* Core Enum */
typedef enum{
    DSP_CONTROL_USIP0_INNER,
    DSP_CONTROL_USIP0_BRP,
    DSP_CONTROL_USIP1_FEC,
    DSP_CONTROL_USIP1_SPEECH,
    DSP_CONTROL_RAKE,
    DSP_CONTROL_CDIF_CORE_NUM
} DSP_CDIF_CORE_ENUM;

/* Idle Flag Enum */
typedef enum{
    DSP_CONTROL_IDLE,
    DSP_CONTROL_BUSY
} DSP_CONTROL_IDLE_FLAG_STATUS;

#define DSP_THREAD_STATUS DSP_CONTROL_IDLE_FLAG_STATUS

/* Sleep Flow Branch */
typedef enum{
    DSP_DORMANT_FLOW,
    DSP_ABORT_FLOW,
    DSP_WAKEUP_FLOW,
    DSP_CTRL_FLOW_NUM
} DSP_SLEEP_CTRL_FLOW_TYPE_BRANCH;

typedef enum{
    CMIFZI_EN,
    CMIFZI_DIS
} CMIFZI_CTRL;

typedef enum{
    DDL_WAY_IS_BY_CORE = 0x0A0A0A0A,
    DDL_WAY_IS_BY_GDMA = 0x0B0B0B0B,
    DDL_WAY_DEFAULT    = 0x0C0C0C0C
} DDL_WAY;

typedef enum {
    DDL_STATUS_INIT    = 0x0A000000,    
    DDL_STATUS_ONGOING = 0x0B000000,
    DDL_STATUS_DONE    = 0x0C000000,
    DDL_STATUS_GDMA_DONE=0x0D000000,
    DDL_STATUS_RE_DDL   =0x0E000000,
    DDL_MODE_NOT_SUPPORT_LTE = 0x0AAA0000,
    DDL_MODE_WAIT_RESPONSE_CLR_DDL_PROTECTION = 0x0BBB0000,
    DDL_STATUS_DEFAULT = 0x0ABC0000
}DDL_STATUS;

typedef enum {
	DDL_MODE_START=0x0,
	
	//BRP
	DDL_MODE_BRP_LTE=0x1,             // should be the first
	DDL_MODE_BRP_FDD=0x2,
	DDL_MODE_BRP_END=0x3,
	
	//FEC-TX
	DDL_MODE_FEC_TX_C2K  =0x4,        // should be the first
	DDL_MODE_FEC_TX_WCDMA=0x5,
    DDL_MODE_FEC_TX_LTE  =0x6,
	DDL_MODE_FEC_TX_END  =0x7,
	
	//FEC-RX
	DDL_MODE_FEC_RX_C2K  =0x8,        // should be the first
	DDL_MODE_FEC_RX_WCDMA=0x9,
	DDL_MODE_FEC_RX_END  =0xA,
	
	//SCQ16
	DDL_MODE_SCQ16_LTE=0xB,            // should be the first
	DDL_MODE_SCQ16_FDD=0xC,
    DDL_MODE_SCQ16_TDD=0xD,
	DDL_MODE_SCQ16_C2K=0xE,
	DDL_MODE_SCQ16_END=0xF,
	
	//RAKE	
	DDL_MODE_RAKE_FDD=0x10,            // should be the first
	DDL_MODE_RAKE_C2K=0x11,
	DDL_MODE_RAKE_LTE=0x12,
	DDL_MODE_RAKE_END=0x13,
	
	DDL_MODE_END=0x14,
	
    DDL_MODE_NUM=0x15,
    DDL_MODE_DEFAULT = 0x6214,
    DDL_MODE_MAX = 0xFFFF,
} DDL_MODE;

#define DDL_MODE_BRP_START    (DDL_MODE_BRP_LTE) 
#define DDL_MODE_FEC_TX_START (DDL_MODE_FEC_TX_C2K) 
#define DDL_MODE_FEC_RX_START (DDL_MODE_FEC_RX_C2K) 
#define DDL_MODE_SCQ16_START  (DDL_MODE_SCQ16_LTE) 
#define DDL_MODE_RAKE_START   (DDL_MODE_RAKE_FDD) 

/***************************************************************/
/********* Enum for User Registration for Use Record of API ****/
/***************************************************************/
#undef USIPAPI_USERNAME_INNER
#undef USIPAPI_USERNAME_BRP
#undef USIPAPI_USERNAME_FEC
#undef USIPAPI_USERNAME_SPEECH
#define USIPAPI_USERNAME_INNER(name) name,
#define USIPAPI_USERNAME_BRP(name) name,
#define USIPAPI_USERNAME_FEC(name) name,
#define USIPAPI_USERNAME_SPEECH(name) name,

typedef enum{
    #include "usip_inner_api_user_registation.h"
    uSIP_INNER_API_USE_NUM
} uSIP_API_USER_INNER;

typedef enum{
    #include "usip_brp_api_user_registation.h"
    uSIP_BRP_API_USE_NUM
} uSIP_API_USER_BRP;

typedef enum{
    #include "usip_fec_api_user_registation.h"
    uSIP_FEC_API_USE_NUM
} uSIP_API_USER_FEC;

typedef enum{
    #include "usip_speech_api_user_registation.h"
    uSIP_SPEECH_API_USE_NUM
} uSIP_API_USER_SPEECH;

#undef USIPAPI_USERNAME_INNER
#undef USIPAPI_USERNAME_BRP
#undef USIPAPI_USERNAME_FEC
#undef USIPAPI_USERNAME_SPEECH

/***************************************************************/
/********* Enum for User Registration for Use Record of API ****/
/***************************************************************/
#undef RAKEAPI_USERNAME
#define RAKEAPI_USERNAME(name) name,

typedef enum{
    #include "rake_api_user_registation.h"
    RAKE_API_USE_NUM
} RAKE_API_USER;

#undef RAKEAPI_USERNAME

/***************************************************************/
/********* Extern logger Registration callback ****/
/***************************************************************/
#undef USIPAPI_USERNAME_INNER
#undef USIPAPI_USERNAME_BRP
#undef USIPAPI_USERNAME_FEC
#undef USIPAPI_USERNAME_SPEECH
#undef RAKEAPI_USERNAME
#define USIPAPI_USERNAME_INNER(func)   extern void func(DSP_CDIF_CORE_ENUM);
#define USIPAPI_USERNAME_BRP(func)     extern void func(DSP_CDIF_CORE_ENUM);
#define USIPAPI_USERNAME_FEC(func)     extern void func(DSP_CDIF_CORE_ENUM);
#define USIPAPI_USERNAME_SPEECH(func)  extern void func(DSP_CDIF_CORE_ENUM);
#define RAKEAPI_USERNAME(func)         extern void func(DSP_CDIF_CORE_ENUM);

#include "usip_inner_logger_registation.h"
#include "usip_brp_logger_registation.h"
#include "usip_fec_logger_registation.h"
#include "usip_speech_logger_registation.h"
#include "rake_logger_registation.h"

/***************************************************************/
/********* Enum for logger Registration callback ****/
/***************************************************************/
#undef USIPAPI_USERNAME_INNER
#undef USIPAPI_USERNAME_BRP
#undef USIPAPI_USERNAME_FEC
#undef USIPAPI_USERNAME_SPEECH
#undef RAKEAPI_USERNAME

#define USIPAPI_USERNAME_INNER(func)   USIP_DEACTIVATE_INNER_CB_##func,
typedef enum{
    #include "usip_inner_logger_registation.h"
    USIP_INNER_DEACTIVATE_CB_SIZE
} USIP_INNER_DEACTIVATE_CB_ENUM;

#define USIPAPI_USERNAME_BRP(func)     USIP_DEACTIVATE_BRP_CB_##func,
typedef enum{
    #include "usip_brp_logger_registation.h"
    USIP_BRP_DEACTIVATE_CB_SIZE
} USIP_BRP_DEACTIVATE_CB_ENUM;

#define USIPAPI_USERNAME_FEC(func)     USIP_DEACTIVATE_FEC_CB_##func,
typedef enum{
    #include "usip_fec_logger_registation.h"
    USIP_FEC_DEACTIVATE_CB_SIZE
} USIP_FEC_DEACTIVATE_CB_ENUM;

#define USIPAPI_USERNAME_SPEECH(func)     USIP_DEACTIVATE_SPEECH_CB_##func,
typedef enum{
    #include "usip_speech_logger_registation.h"
    USIP_SPEECH_DEACTIVATE_CB_SIZE
} USIP_SPEECH_DEACTIVATE_CB_ENUM;

#define RAKEAPI_USERNAME(func)         RAKE_DEACTIVATE_CB_##func,
typedef enum{
    #include "rake_logger_registation.h"
    RAKE_DEACTIVATE_CB_SIZE
} RAKE_DEACTIVATE_CB_ENUM;

#undef USIPAPI_USERNAME_INNER
#undef USIPAPI_USERNAME_BRP
#undef USIPAPI_USERNAME_FEC
#undef USIPAPI_USERNAME_SPEECH
#undef RAKEAPI_USERNAME





#endif /* _DSP_CONTROL_PUBLIC_H_ */
