#ifndef __DRV_GDMA_INTERNAL_H__
#define __DRV_GDMA_INTERNAL_H__

#include "drv_gdma.h"

typedef struct gdma_log_s {
    volatile kal_bool   inited;
    volatile kal_uint32  chn_started;
    volatile kal_uint32 intr_status[2];
    volatile kal_uint32 intr_en[2];
    volatile kal_uint32 cb_status[2];
    kal_uint32          intr_cnt[GDMA_INT_TYPE_MAX];
    gdma_pcb_f          callback[GDMA_INT_TYPE_MAX];
    gdma_cbParameter_t  cb_info;
    kal_spinlockid      spin_lock;
} gdma_log_t;

#endif // __DRV_GDMA_INTERNAL_H__