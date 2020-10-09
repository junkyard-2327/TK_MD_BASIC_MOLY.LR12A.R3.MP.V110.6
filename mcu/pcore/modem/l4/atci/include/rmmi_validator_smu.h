/*******************************************************************************
 * Filename:
 * ---------
 * rmmi_validator_smu.h
 *
 * Project:
 * --------
 *  UMOLYA
 *
 * Description:
 * ------------
 *  This file is intends for SMU AT command handler prototype
 *
 * Author:
 * -------
 * -------
 *
 *******************************************************************************/

#ifndef _RMMI_VALIDATOR_SMU_H
#define _RMMI_VALIDATOR_SMU_H
#include "rmmi_context.h"

#ifdef __VZW_RSU_SUPPORT__
extern rmmi_vzw_rsu_hdlr(rmmi_string_struct *source_string_ptr);
#endif

#ifdef __SML_RSU_SUPPORT__
extern void rmmi_esmlrsu_hdlr(rmmi_string_struct *source_string_ptr);
#endif
 
#endif /* _RMMI_VALIDATOR_SMU_H */

