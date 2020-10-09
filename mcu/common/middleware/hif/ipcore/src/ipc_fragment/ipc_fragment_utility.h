/****************************************************************************/
#ifndef  _IPC_FRAGMENT_UTILITY_INC
#define  _IPC_FRAGMENT_UTILITY_INC
/****************************************************************************/

/****************************************************************************
 * Definitions
 ****************************************************************************/
// ICMP4 Type
#define IPC_ICMP4_TYPE_TIME_EXCEEDED                11

// ICMP4 Code
#define IPC_ICMP4_CODE_FRAG_REASM_TIME_EXCEEDED     1

// ICMP6 Type
#define IPC_ICMP6_TYPE_TIME_EXCEEDED                3
#define IPC_ICMP6_TYPE_PARAMETER_PROBLEM            4

// ICMP6 Code
#define IPC_ICMP6_CODE_FRAG_REASM_TIME_EXCEEDED     1
#define IPC_ICMP6_CODE_ERR_HDR_FIELD_ENCOUNTERED    0

/****************************************************************************
 * Type definitions
 ****************************************************************************/

/****************************************************************************
 * Global variables
 ****************************************************************************/

/****************************************************************************
 * Function prototypes
 ****************************************************************************/
void ipc_fragment_set_gpd_datalen(void* gpd, unsigned datalen, void **payload_ptr);
unsigned short ipc_fragment_ipv4_cal_header_checksum(void* original_ip_header);
void ipc_fragment_refiltering_queued_packets(kal_uint8 ip_type, ipc_frag_refilter_info_t* info, qbm_gpd* p_head, qbm_gpd* p_tail);
void ipc_fragment_set_ipc_refilter_func_ptr(void (*func)(kal_uint8 ip_type, ipc_frag_refilter_info_t* info, qbm_gpd* p_head, qbm_gpd* p_tail));
bool ipc_fragment_icmp4_send(int type, int code, void* payload);
bool ipc_fragment_icmp6_send(int type, int code, void* payload);

/****************************************************************************
 * Export Function prototypes
  ****************************************************************************/

/****************************************************************************/
#endif /* _IPC_FRAGMENT_INC */

