#ifndef RAKE_API_PUBLIC_H
#define RAKE_API_PUBLIC_H

#include "dsp_control_public.h"

/***************************************************************/
/********* Enum for BootDoneCheck Return Value *************/
/***************************************************************/
typedef enum{
    RAKE_NOTYETDONE,
    RAKE_BOOTDONE,
    RAKE_NOT_DEACTIVEDONE,
    RAKE_DEACTIVEDONE
}RAKE_BOOTDONECHECK_RETVALUE;

#define RAKE_NOT_ACTIVEDONE     RAKE_NOTYETDONE
#define RAKE_ACTIVEDONE         RAKE_BOOTDONE

/***************************************************************/
/********* Function Prototype **********************************/
/***************************************************************/
extern RAKE_BOOTDONECHECK_RETVALUE RAKE_BootDoneCheck(RAKE_API_USER);

/* Common API */
extern DSP_CONTROL_IDLE_FLAG_STATUS rake_check_idle_flag(RAKE_API_USER);
extern kal_uint32 rake_ddl_check_idle_flag_bitmap(kal_uint32);
extern kal_bool is_myself_duty_rat(DSP_CDIF_CORE_ENUM, kal_uint32);
extern kal_uint32 return_dutyrat_of_thread(DSP_CDIF_CORE_ENUM);
extern void firstboot_activate(DSP_CDIF_CORE_ENUM, kal_uint32);

/* Activate Relatives */
extern void rake_activate(RAKE_API_USER);

/* Deactivate Relatives */
extern void rake_deactivate(RAKE_API_USER, CMIFZI_CTRL);
extern RAKE_CONTROL_STATUS rake_deactive_done_check(RAKE_API_USER);

/* DDL Relatives */
extern void rake_ddl_start(RAKE_API_USER , DDL_MODE);
extern void rake_ddl_status_mode_query(DDL_STATUS*, DDL_MODE*);
extern kal_bool ddl_check_all_target_user_are_deactive(DSP_CDIF_CORE_ENUM);
extern kal_bool ddl_has_rake_user_call_deactivate(kal_uint32);
extern kal_uint32 dsp_check_ddl_user_status(DSP_CDIF_CORE_ENUM, kal_uint32);

/***************************************************************/
/********* Function Definition *********************************/
/***************************************************************/
/***** Sleep Flow APIs for user *****/
/* FirstBoot API */
#define topsm_return_dutyrat_of_rake                    firstboot_topsm_query(DSP_CONTROL_RAKE)

#define is_myself_duty_user_of_rake(user_id)            is_myself_duty_rat(DSP_CONTROL_RAKE, user_id)
/* First Boot Activate Use */
#define rake_firstboot_activate(user_id)                firstboot_activate(DSP_CONTROL_RAKE, user_id)

/* Check idle APIs */
#define rake_check_ddl_user_status(user_bitmap)         dsp_check_ddl_user_status(DSP_CONTROL_RAKE, user_bitmap)
#define dsp_rake_check_idle_flag(user_id)               rake_check_idle_flag(user_id)

/* Activate APIs*/
#define dsp_rake_activate(user_id)                      rake_activate(user_id)

/* Activate check APIs */
#define dsp_rake_done_check(user_id)                    RAKE_BootDoneCheck(user_id)
#define dsp_rake_active_done_check(user_id)             RAKE_BootDoneCheck(user_id)

/* Deactivate APIs */
#define dsp_rake_deactivate(user_id)                    rake_deactivate(user_id, CMIFZI_EN)
#define dsp_rake_deactivate_wo_cmifzi(user_id)          rake_deactivate(user_id, CMIFZI_DIS)

/* Deactivate check APIs */
#define dsp_rake_deactive_done_check(user_id)           rake_deactive_done_check(user_id)

/***** DDL Flow APIs for user *****/
// DDL check if RAKE is deactive
#define ddl_l2tcm_is_rake_deactive()                    ddl_check_all_target_user_are_deactive(DSP_CONTROL_RAKE)

// Trigger DDL
#define dsp_rake_ddl_start(user_id, bin_mode)           rake_ddl_start(user_id, bin_mode)   

// Check rake DDL mode/status
#define dsp_rake_ddl_status_mode_query(status, bin_mode)    rake_ddl_status_mode_query(status, bin_mode)  

#endif  /* RAKE_API_PUBLIC_H */
