#ifndef __TG_HISR_H__
#define __TG_HISR_H__

#include "kal_general_types.h"

typedef enum{
	TG_TRIGGER_NONE = 0,
	TG_TRIGGER_GPT = 1,
	TG_TRIGGER_LTE,
	TG_TRIGGER_W,
	TG_TRIGGER_T,
	TG_TRIGGER_C
}TG_TRIGGER_MODE;

extern void tg_first_L_tick(void);
extern void tg_last_L_tick(void);
extern void tg_group1_trigger(TG_TRIGGER_MODE);
extern void tg_group2_trigger(TG_TRIGGER_MODE);
extern void tg_hmu_callback_control_sync(void);
extern void tg_hisr_init(void);

#ifdef __LP_SCHEDULE_HMU_RESCHEDULE__
extern void tg_hmu_callback_control(kal_bool enable);
#endif /* __LP_SCHEDULE_HMU_RESCHEDULE__ */

#if defined(__LP_SCHEDULE_FDD3G_TALKING__)
extern void tg_fdd3g_talking_mode(kal_uint32 mode);
extern void tg_group3_start(TG_TRIGGER_MODE mode);
extern void tg_group3_end(TG_TRIGGER_MODE mode);
#endif /* __LP_SCHEDULE_FDD3G_TALKING__ */

#endif /* __TG_HISR_C__ */
