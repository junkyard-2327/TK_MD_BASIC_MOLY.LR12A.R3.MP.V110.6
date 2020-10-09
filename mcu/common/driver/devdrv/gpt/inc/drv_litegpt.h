#ifndef __DRV_LITEGPT_H__
#define __DRV_LITEGPT_H__
#include "intrCtrl.h"

#if defined(__CR4__) || defined(__MIPS_IA__)
#define BASE_ADDR_LITEMDGPTM 0xA0170000
#define MD_IRQID_MDGPTM_LITE_EVENT1 255 //(IRQ_MDLITE_GPTM_CODE) for build pass
#endif

/* Register Address Definition */
#if defined(__CR4__)  || defined(__MIPS_IA__) /* end of defined(CORTEXA9)||defined(CORTEXA7) */
    #define LITE_GPT_BASE             (BASE_ADDR_LITEMDGPTM)
#if !defined(TK6291)
    #define LITE_GPT_TOTAL_COUNTER    (4U)
#else
    #define LITE_GPT_TOTAL_COUNTER    (2U)
#endif
    #define LITE_GPT_INTR_ID      255// (MD_IRQID_MDGPTM_LITE_EVENT1) for build pass
#endif /* end of else if */

#define LITE_GPT_CON_REG(i) (LITE_GPT_BASE + ((i - 1)<<3))
#define LITE_GPT_DAT_REG(i) (LITE_GPT_BASE + 0x38 + ((i - 1)<<2))
#define LITE_GPT_PSR_REG(i) (LITE_GPT_BASE + 0x14 + ((i - 1)<<2))

#define LITEGPT_MAX_PRESCALE  (7U)
#define LITEGPT_MIN_PRESCALE  (0U)
#define LITEGPT_DEFAULT_PRESCALE  (4U)
#define LITEGPT_MAX_CNT_BIT (16U)
#define LITEGPT_CNT_MAX       (0xFFFDU)
#if !defined(TK6291)
#define TOPSM_TEST_LITEGPT_WAKEUP 3
#else
#define TOPSM_TEST_LITEGPT_WAKEUP 1
#endif

#define LITEGPT_CTRL_MODE_ENABLE   (1U<<15)
#define LITEGPT_CTRL_MODE_ONESHOT  (0U<<14)
#define LITEGPT_CTRL_MODE_REPEAT   (1U<<14)

#define LITEGPT_PSR_PRESCALE(n)    (n&0x7)

extern void drv_litegpt_stop_timer(kal_uint32 num);
extern void drv_litegpt_start_timer(kal_uint32 num);
extern void drv_litegpt_set_timer(kal_uint32 num, kal_uint32 time, kal_uint32 mode, kal_uint32 prescaler);
extern kal_uint32 drv_litegpt_time_remaining(kal_uint32 num);

extern void drv_litegpt_set_wakeup_gpt(kal_uint32 time_tick);//the duration is about 1/32K*time_tick us
extern void drv_litegpt_clr_wakeup_event(void);

#endif  /* end of __DRV_LITEGPT_H__ */

