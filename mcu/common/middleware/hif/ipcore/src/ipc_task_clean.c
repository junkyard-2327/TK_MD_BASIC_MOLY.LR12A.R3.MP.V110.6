/*
 * ipcore_task_clean.c
 *
 *  Created on: 2018/7/20
 *      Author: MTK15439
 */

#include "ipc_defs.h"

void IPCore_Task_Clean_Handler(void)
{
#if defined(__SENSITIVE_DATA_MOSAIC__)
    ipc_module_clean();
    upcm_module_clean();
#endif
}
