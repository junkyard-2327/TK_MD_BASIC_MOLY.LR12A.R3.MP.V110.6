#ifndef __USIP_API_PUBLIC_H__
#define __USIP_API_PUBLIC_H__

#include "dsp_control_public.h"

/***************************************************************/
/********* Enum for BootDoneCheck Return Value *************/
/***************************************************************/
typedef enum{
    uSIP_NOTYETDONE,
    uSIP_BOOTDONE,
    uSIP_NOT_DEACTIVEDONE,
    uSIP_DEACTIVEDONE
}uSIP_BOOTDONECHECK_RETVALUE;

#define uSIP_NOT_ACTIVEDONE     uSIP_NOTYETDONE
#define uSIP_ACTIVEDONE         uSIP_BOOTDONE

/***************************************************************/
/********* Variable Prototype **********************************/
/***************************************************************/
extern kal_uint32 duty_rat[DSP_CONTROL_CDIF_CORE_NUM];

/***************************************************************/
/********* Function Prototype **********************************/
/***************************************************************/
/* FirstBoot API */
extern kal_uint32 firstboot_topsm_query(DSP_CDIF_CORE_ENUM);

/***** Common API *****/
extern DSP_CONTROL_IDLE_FLAG_STATUS usip_check_idle_flag(DSP_CDIF_CORE_ENUM, kal_uint32);
extern void query_usip_pc(kal_uint32*, kal_uint32*);
extern void query_scq16_waite_signal(kal_uint8*, kal_uint8*);
extern void firstboot_activate(DSP_CDIF_CORE_ENUM, kal_uint32);
extern kal_bool is_myself_duty_rat(DSP_CDIF_CORE_ENUM, kal_uint32);
extern kal_uint32 return_dutyrat_of_thread(DSP_CDIF_CORE_ENUM);

/***** Activate Relatives *****/
extern void usip_activate(DSP_CDIF_CORE_ENUM, kal_uint32);

/***** Deactivate Relatives *****/
extern void usip_deactivate(DSP_CDIF_CORE_ENUM, kal_uint32);
extern USIP_CONTROL_STATUS usip_deactive_done_check(DSP_CDIF_CORE_ENUM, kal_uint32);

/* Check Boot Done API*/
extern USIP_CONTROL_STATUS usip_active_done_check(DSP_CDIF_CORE_ENUM, kal_uint32);
extern kal_bool is_usip_vic_enable(DSP_CDIF_CORE_ENUM);
extern void rake_later_trigger_ungate();
/* Check status APIs */
extern kal_bool dsp_uSIP_thread_is_deactive(DSP_CDIF_CORE_ENUM);

/* DDL Relatives */
extern void uSIP_inner_ddl_start(uSIP_API_USER_INNER ,DDL_MODE);
extern void uSIP_brp_ddl_start(uSIP_API_USER_BRP , DDL_MODE);
extern void uSIP_fec_tx_ddl_start(uSIP_API_USER_FEC , DDL_MODE);
extern void uSIP_fec_rx_ddl_start(uSIP_API_USER_FEC , DDL_MODE);
extern void uSIP_inner_ddl_status_mode_query(DDL_STATUS* , DDL_MODE*);
extern void uSIP_brp_ddl_status_mode_query(DDL_STATUS* , DDL_MODE*);
extern void uSIP_fec_tx_ddl_status_mode_query(DDL_STATUS* , DDL_MODE*);
extern void uSIP_fec_rx_ddl_status_mode_query(DDL_STATUS* , DDL_MODE*);
extern void uSIP_rake_as_tcm_for_inner_ddl_status_mode_query(DDL_STATUS *status, DDL_MODE *bin_mode);
extern void ddl_clear_inner_ddl_protection_trigger();
extern kal_uint32 dsp_check_ddl_user_status(DSP_CDIF_CORE_ENUM, kal_uint32);
extern kal_bool ddl_has_user_call_activate(DSP_CDIF_CORE_ENUM, kal_uint32);

/***** Sleep Flow APIs for user *****/
/* FirstBoot API */
#define topsm_return_dutyrat_of_inner                   firstboot_topsm_query(DSP_CONTROL_USIP0_INNER)
#define topsm_return_dutyrat_of_brp                     firstboot_topsm_query(DSP_CONTROL_USIP0_BRP)
#define topsm_return_dutyrat_of_fec                     firstboot_topsm_query(DSP_CONTROL_USIP1_FEC)
#define topsm_return_dutyrat_of_speech                  firstboot_topsm_query(DSP_CONTROL_USIP1_SPEECH)

#define is_myself_duty_user_of_inner(user_id)           is_myself_duty_rat(DSP_CONTROL_USIP0_INNER, user_id)
#define is_myself_duty_user_of_brp(user_id)             is_myself_duty_rat(DSP_CONTROL_USIP0_BRP, user_id)
#define is_myself_duty_user_of_fec(user_id)             is_myself_duty_rat(DSP_CONTROL_USIP1_FEC, user_id)
#define is_myself_duty_user_of_speech(user_id)          is_myself_duty_rat(DSP_CONTROL_USIP1_SPEECH, user_id)

/* Check idle APIs */
#define dsp_uSIP_inner_check_idle_flag(user_id)         usip_check_idle_flag(DSP_CONTROL_USIP0_INNER, user_id)
#define dsp_uSIP_brp_check_idle_flag(user_id)           usip_check_idle_flag(DSP_CONTROL_USIP0_BRP, user_id)
#define dsp_uSIP_fec_check_idle_flag(user_id)           usip_check_idle_flag(DSP_CONTROL_USIP1_FEC, user_id)
#define dsp_uSIP_speech_check_idle_flag(user_id)        usip_check_idle_flag(DSP_CONTROL_USIP1_SPEECH, user_id)

/* First Boot Activate Use */
#define inner_firstboot_activate(user_id)               firstboot_activate(DSP_CONTROL_USIP0_INNER, user_id)
#define brp_firstboot_activate(user_id)                 firstboot_activate(DSP_CONTROL_USIP0_BRP, user_id)
#define fec_firstboot_activate(user_id)                 firstboot_activate(DSP_CONTROL_USIP1_FEC, user_id)
#define speech_firstboot_activate(user_id)              firstboot_activate(DSP_CONTROL_USIP1_SPEECH, user_id)

/* Activate APIs*/
#define dsp_uSIP_inner_activate(user_id)                usip_activate(DSP_CONTROL_USIP0_INNER, user_id)
#define dsp_uSIP_brp_activate(user_id)                  usip_activate(DSP_CONTROL_USIP0_BRP, user_id)
#define dsp_uSIP_fec_activate(user_id)                  usip_activate(DSP_CONTROL_USIP1_FEC, user_id)
#define dsp_uSIP_speech_activate(user_id)               usip_activate(DSP_CONTROL_USIP1_SPEECH, user_id)

/* Activate check APIs */
#define uSIP_INNER_BootDoneCheck(user_id)               usip_active_done_check(DSP_CONTROL_USIP0_INNER, user_id)
#define uSIP_BRP_BootDoneCheck(user_id)                 usip_active_done_check(DSP_CONTROL_USIP0_BRP, user_id)
#define uSIP_FEC_BootDoneCheck(user_id)                 usip_active_done_check(DSP_CONTROL_USIP1_FEC, user_id)
#define uSIP_SPEECH_BootDoneCheck(user_id)              usip_active_done_check(DSP_CONTROL_USIP1_SPEECH, user_id)

#define dsp_uSIP_inner_active_done_check(user_id)       uSIP_INNER_BootDoneCheck(user_id)
#define dsp_uSIP_brp_active_done_check(user_id)         uSIP_BRP_BootDoneCheck(user_id)
#define dsp_uSIP_fec_active_done_check(user_id)         uSIP_FEC_BootDoneCheck(user_id)
#define dsp_uSIP_speech_active_done_check(user_id)      uSIP_SPEECH_BootDoneCheck(user_id)


/* Deactivate APIs */
#define dsp_uSIP_inner_deactivate(user_id)              usip_deactivate(DSP_CONTROL_USIP0_INNER, user_id)
#define dsp_uSIP_brp_deactivate(user_id)                usip_deactivate(DSP_CONTROL_USIP0_BRP, user_id)
#define dsp_uSIP_fec_deactivate(user_id)                usip_deactivate(DSP_CONTROL_USIP1_FEC, user_id)
#define dsp_uSIP_speech_deactivate(user_id)             usip_deactivate(DSP_CONTROL_USIP1_SPEECH, user_id)

/* Deactivate check APIs */
#define dsp_uSIP_inner_deactive_done_check(user_id)     usip_deactive_done_check(DSP_CONTROL_USIP0_INNER, user_id)
#define dsp_uSIP_brp_deactive_done_check(user_id)       usip_deactive_done_check(DSP_CONTROL_USIP0_BRP, user_id)
#define dsp_uSIP_fec_deactive_done_check(user_id)       usip_deactive_done_check(DSP_CONTROL_USIP1_FEC, user_id)
#define dsp_uSIP_speech_deactive_done_check(user_id)    usip_deactive_done_check(DSP_CONTROL_USIP1_SPEECH, user_id)

/* Check status APIs */
#define dsp_uSIP_inner_is_deactive                      dsp_uSIP_thread_is_deactive(DSP_CONTROL_USIP0_INNER)

/***** DDL Flow APIs for user *****/
// Trigger DDL
#define dsp_uSIP_inner_ddl_start(user_id, bin_mode)     uSIP_inner_ddl_start(user_id, bin_mode)
#define dsp_uSIP_brp_ddl_start(user_id,bin_mode)        uSIP_brp_ddl_start(user_id, bin_mode)   
#define dsp_uSIP_fec_tx_ddl_start(user_id,bin_mode)     uSIP_fec_tx_ddl_start(user_id, bin_mode) 
#define dsp_uSIP_fec_rx_ddl_start(user_id,bin_mode)     uSIP_fec_rx_ddl_start(user_id, bin_mode) 

// Check uSIP inner DDL mode/status
#define dsp_uSIP_inner_ddl_status_mode_query(status, bin_mode)   uSIP_inner_ddl_status_mode_query(status, bin_mode)
#define dsp_uSIP_brp_ddl_status_mode_query(status, bin_mode)     uSIP_brp_ddl_status_mode_query(status, bin_mode)
#define dsp_uSIP_fec_tx_ddl_status_mode_query(status, bin_mode)  uSIP_fec_tx_ddl_status_mode_query(status, bin_mode)
#define dsp_uSIP_fec_rx_ddl_status_mode_query(status, bin_mode)  uSIP_fec_rx_ddl_status_mode_query(status, bin_mode)
#define usip_check_ddl_user_status(thread, user_bitmap) dsp_check_ddl_user_status(thread, user_bitmap)

// clear inner ddl_protection
#define dsp_uSIP_inner_clear_ddl_protection()     ddl_clear_inner_ddl_protection_trigger()
#endif  /* __USIP_API_PUBLIC_H__ */
