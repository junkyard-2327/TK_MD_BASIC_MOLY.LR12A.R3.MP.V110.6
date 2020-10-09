#ifndef _USIP_FEC_TX_DDL_IDLE_CHECK_H_
#define _USIP_FEC_TX_DDL_IDLE_CHECK_H_

/*****************************************
* Prototype
*       DDL_IDLE_CHECK(DSP_CTRL_USIP_FEC_XXXXX)
*****************************************/

/* Usage notice
 * 1. In usip_fec_api_user_registation.h, users registers the DDL-users
 * 2. In usip_fec_tx_ddl_idle_check.h, it lists idle-check-list. The users listed shall be in idle.
 */
DDL_IDLE_CHECK(DSP_CTRL_USIP_FEC_LTE_TX)
DDL_IDLE_CHECK(DSP_CTRL_USIP_FEC_FDD_TX)
DDL_IDLE_CHECK(DSP_CTRL_USIP_FEC_C2K_1XRTT_TX)
DDL_IDLE_CHECK(DSP_CTRL_USIP_FEC_C2K_EVDO_TX)

#endif //_USIP_FEC_TX_DDL_IDLE_CHECK_H_
