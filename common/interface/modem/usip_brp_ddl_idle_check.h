#ifndef _USIP_BRP_DDL_IDLE_CHECK_H_
#define _USIP_BRP_DDL_IDLE_CHECK_H_

/*****************************************
* Prototype
*       DDL_IDLE_CHECK(DSP_CTRL_USIP_BRP_XXXXX)
*****************************************/

/* Usage notice
 * 1. In usip_brp_api_user_registation.h, users registers the DDL-users
 * 2. In usip_brp_ddl_idle_check.h, it lists idle-check-list. The users listed shall be in idle.
 */

DDL_IDLE_CHECK(DSP_CTRL_USIP_BRP_FDD)
DDL_IDLE_CHECK(DSP_CTRL_USIP_BRP_LTE)

#endif // _USIP_BRP_DDL_IDLE_CHECK_H_
