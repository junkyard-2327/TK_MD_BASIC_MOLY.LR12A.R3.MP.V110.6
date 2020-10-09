#ifndef __USIP_POWER_TEST_H__
#define __USIP_POWER_TEST_H__

#include "dsp_header_define_cuif_inner_brp.h"
#include "dsp_header_define_cuif_fec_wbrp.h"
#include "dsp_header_define_cuif_speech.h"

#define POWER_TEST_NUM      (0xFFFF)
#if defined(MT6763)
// usip

#define USIP_PWR_STA_ADDR   (0xA00D00D4)
#define USIP_PWR_STA_BIT    (2)
#define USIP_PWR_STA_MASK   (0x00000004)
#define USIP_POWER_STATUS   ((((*(volatile ssdvt_uint32 *)USIP_PWR_STA_ADDR) & USIP_PWR_STA_MASK) >> USIP_PWR_STA_BIT))

#define USIP_UNGATE_ADDR_U0 (0xA1630400)
#define USIP_UNGATE_ADDR_U1 (0xA1630404)
#define USIP_UNGATE_ADDR_U2 (0xA1630408)
#define USIP_UNGATE_ADDR_U3 (0xA163040c)

#define USIP_BOOT_DOWN_PAT  (uSIPBOOTPATTERN2)

#else
#error "no configuration for this project!\n"
#endif

extern void SSDVT_USIP_POWER_TEST();

#endif //__USIP_POWER_TEST_H__
