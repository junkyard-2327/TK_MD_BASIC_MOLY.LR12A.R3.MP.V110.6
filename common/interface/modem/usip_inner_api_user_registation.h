#ifndef USIP_INNER_API_USER_REGISTRATION_H
#define USIP_INNER_API_USER_REGISTRATION_H

/*****************************************
* Prototype
*       USIPAPI_USERNAME_INNER(DSP_CTRL_USIP_INNER_XXXXX)
*****************************************/

/* Usage notice
 * 1. In usip_inner_api_user_registeration.h, users registers the DDL-users
 * 2. In usip_inner_ddl_idle_check.h, it lists idle-check-list. The users listed shall be in idle.
 */

USIPAPI_USERNAME_INNER(uSIP_INNER_SS1_INIT) // This should be removed after el1d modify the code
USIPAPI_USERNAME_INNER(DSP_CTRL_USIP_INNER_SS1_INIT)
USIPAPI_USERNAME_INNER(DSP_CTRL_USIP_INNER_SS1_LOADER)
USIPAPI_USERNAME_INNER(DSP_CTRL_USIP_INNER_LTE)
USIPAPI_USERNAME_INNER(DSP_CTRL_USIP_INNER_WCDMA)
USIPAPI_USERNAME_INNER(DSP_CTRL_USIP_INNER_TDSCDMA)
USIPAPI_USERNAME_INNER(DSP_CTRL_USIP_INNER_C2K)
USIPAPI_USERNAME_INNER(DSP_CTRL_USIP_INNER_LTE_CM)      // the ID is just occupied due to necessity of DSP cosim verification. Therefore, L1 doesn't have to take care of it actually.
USIPAPI_USERNAME_INNER(DSP_CTRL_USIP_INNER_LTE_POS)     // the ID is just occupied due to necessity of DSP cosim verification. Therefore, L1 doesn't have to take care of it actually.
USIPAPI_USERNAME_INNER(DSP_CTRL_USIP_INNER_LTE_CSI)     // the ID is just occupied due to necessity of DSP cosim verification. Therefore, L1 doesn't have to take care of it actually.
USIPAPI_USERNAME_INNER(DSP_CTRL_USIP_INNER_TDSCDMA_MEAS)
#endif  /* USIP_INNER_API_USER_REGISTRATION_H */
