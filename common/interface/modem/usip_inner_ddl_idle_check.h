#ifndef _USIP_INNER_DDL_IDLE_CHECK_H_
#define _USIP_INNER_DDL_IDLE_CHECK_H_

/*****************************************
* Prototype
*       DDL_IDLE_CHECK(DSP_CTRL_USIP_INNER_XXXXX)
*****************************************/

/* Usage notice
 * 1. In usip_inner_api_user_registation.h, users registers the DDL-users
 * 2. In usip_inner_ddl_idle_check.h, it lists idle-check-list. The users listed shall be in idle.
 */


// Leo: before running DDL, LWTC 4 users must be in idle
DDL_IDLE_CHECK(DSP_CTRL_USIP_INNER_LTE)
DDL_IDLE_CHECK(DSP_CTRL_USIP_INNER_WCDMA)
DDL_IDLE_CHECK(DSP_CTRL_USIP_INNER_TDSCDMA)
DDL_IDLE_CHECK(DSP_CTRL_USIP_INNER_C2K)

#endif // _USIP_INNER_DDL_IDLE_CHECK_H_
