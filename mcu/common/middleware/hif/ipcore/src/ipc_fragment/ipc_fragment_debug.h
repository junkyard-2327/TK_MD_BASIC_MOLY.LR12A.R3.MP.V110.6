#ifndef __INC_IPC_FRAGMENT_DEBUG_H
#define __INC_IPC_FRAGMENT_DEBUG_H

extern "C" 
{
#define HIF_DATA_TRACE_ENABLED      1
#define HIF_CONSOLE_TRACE_ENABLED   0

#include "ipc_utils.h"
#include "hif_trace.h"
#include "TrcMod.h"
}

// Dump raw IP packet
#define IPC_FRAGMENT_DL_PKT_DUMP(buf_p, len)    ipc_packet_dump_continues_buff(MSG_IPC_DL_RAW_DATA, MOD_IPC_FRAGMENT, (unsigned char*)buf_p, len)
#define IPC_FRAGMENT_UL_PKT_DUMP(buf_p, len)    ipc_packet_dump_continues_buff(MSG_IPC_UL_RAW_DATA, MOD_IPC_FRAGMENT, (unsigned char*)buf_p, len)

#endif
