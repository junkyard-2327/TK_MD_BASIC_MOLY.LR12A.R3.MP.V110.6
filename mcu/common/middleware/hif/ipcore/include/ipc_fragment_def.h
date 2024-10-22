/****************************************************************************/
#ifndef  _IPC_FRAGMENT_DEF_INC
#define  _IPC_FRAGMENT_DEF_INC
/****************************************************************************/

/****************************************************************************
 * Definitions
 ****************************************************************************/
#define IPC_FRAG_AFM_BUFFER_SIZE        (64 * 1024)
#define IPC_FRAG_HASH_TABLE_BUCK_NUM    256             // must be power of 2
#define IPC_FRAG_HASH_NODE_NUM          128
#define IPC_FRAG_PKT_META_NODE_NUM      512

#define IPC_FRAG_EXPIRE_CB_NUM          64
#define IPC_FRAG_POLLING_EXPIRE_SEC     KAL_TICKS_5_SEC_REAL
#define IPC_FRAG_QUEUING_EXPIRE_SEC     (KAL_TICKS_5_SEC_REAL * 1)
#define IPC_FRAG_ES_IDX_QUEUE_EXPIRE    10 

/****************************************************************************
 * Type definitions
 ****************************************************************************/

/****************************************************************************
 * Global variables
 ****************************************************************************/

/****************************************************************************
 * Function prototypes
 ****************************************************************************/ 

/****************************************************************************/
#endif /* _IPC_FRAGMENT_DEF_INC */

