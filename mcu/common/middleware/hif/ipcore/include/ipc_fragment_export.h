/****************************************************************************/
#ifndef  _IPC_FRAGMENT_EXPORT_INC
#define  _IPC_FRAGMENT_EXPORT_INC
/****************************************************************************/
#include "kal_public_api.h"
#include "qmu_bm_util.h"
#include "qmu_bm.h"
#include "ipc_api.h"

/****************************************************************************
 * Definitions
 ****************************************************************************/

/****************************************************************************
 * Type definitions
 ****************************************************************************/

/****************************************************************************
 * Global variables
 ****************************************************************************/

/****************************************************************************
 * Function prototypes
 ****************************************************************************/ 
extern kal_bool ipc_fragment_init();
extern kal_bool ipc_fragment_deinit();
extern kal_bool ipc_fragment_reset();
extern void ipc_fragment_on_ilm(ilm_struct *ilm);
extern void ipc_fragment_defrag(qbm_gpd *new_gpd, ipc_frag_refilter_info_t *info, kal_bool is_v4);
extern kal_uint32 ipc_fragment_frag(void* buff, kal_uint32 buff_len, qbm_gpd** frag_gpd_head, qbm_gpd** frag_gpd_tail, kal_bool is_v4);
extern void ipc_fragment_test();

/****************************************************************************/
#endif /* _IPC_FRAGMENT_EXPORT_INC */

