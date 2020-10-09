#ifndef MODULE_TASKID_RANGE_H
#define MODULE_TASKID_RANGE_H

typedef enum {
    TASK_ID_CODE_RESERVED = 0,    
    TASK_ID_SRV_CODE_BEGIN = TASK_ID_CODE_RESERVED,

    TASK_ID_MODEM_2G3G_CODE_BEGIN = TASK_ID_SRV_CODE_BEGIN + 39,
    
    TASK_ID_MODEM_4G_CODE_BEGIN = TASK_ID_MODEM_2G3G_CODE_BEGIN + 85,
            
    TASK_ID_MW_CODE_BEGIN = TASK_ID_MODEM_4G_CODE_BEGIN + 30,

    TASK_ID_DRV_CODE_BEGIN = TASK_ID_MW_CODE_BEGIN + 50,

    TASK_ID_CODE_MAX = 255
} TASK_ID_CODE_BEGIN;

#endif /* MODULE_TASKID_RANGE_H */
