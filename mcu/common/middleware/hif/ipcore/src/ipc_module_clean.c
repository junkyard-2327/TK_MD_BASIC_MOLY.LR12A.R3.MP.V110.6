/*
 * ipc_module_clean.c
 *
 *  Created on: 2018/7/20
 *      Author: MTK15439
 */

#include "ipc_defs.h"

void ipc_module_clean(void)
{
#if defined(__SENSITIVE_DATA_MOSAIC__)
    ipc_clean_private_data();
#endif
}
