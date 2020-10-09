
#ifndef _MD_BOOT_CHECK_H
#define _MD_BOOT_CHECK_H

#include "reg_base.h"
#include "drv_comm.h"
#include "kal_public_api.h"

extern volatile kal_uint32 md_boot_check_val;
extern volatile kal_uint32 md_boot_check_val_sub;

void check_md_boot_mode(void);

#endif  /* !_MD_BOOT_CHECK_H */
