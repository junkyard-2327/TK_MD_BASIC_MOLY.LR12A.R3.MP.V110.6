#ifndef __DSP_HEADER_DEFINE_CXIF_ULSP_H__
#define __DSP_HEADER_DEFINE_CXIF_ULSP_H__

// Notice: We only have 128 bytes (32 words) space on CuIF
/*---------------------------------------------------------------------------
    Define constant for logging
---------------------------------------------------------------------------*/
#define MAX_MODULE_ID_NUM               (64)  
#define ULSP_CXIF_FILTER_OFFSET         (4*2) //Filter starts from the 2nd word
#define ULSP_CXIF_WRITE_FILTER_OFFSET   (4*18) //Filter starts from the 2nd word
#define ULSP_GUARD_ID                   (0x92770718)
#define ULSP_MAGIC_ID_CXIF_INIT         (0x92770001)
#define ULSP_MAGIC_ID_POWER_UP          (0x92770002)
#define ULSP_MAGIC_ID_ENTER_IDLE        (0x92770003)
#define ULSP_MAGIC_ID_POWER_DOWN        (0x92770004)
#define ULSP_MAGIC_ID_WAKE_UP           (0x92770005)

#define USLP_WRITE_FILTER               (0x1990)

/*---------------------------------------------------------------------------
    Structure definition
---------------------------------------------------------------------------*/
typedef struct 
{
    kal_uint32 guard_id_start;                   //(0)
    kal_uint32 magic_id;                         //(1)
    kal_uint32 ulsp_filter[MAX_MODULE_ID_NUM/4]; //(2)~(17)
    kal_uint16 write_filter_flag;                //(18)
    kal_uint16 read_filter_flag;  
    kal_uint32 PB_abort_timeout_flag;            //(19)
    kal_uint32 PB_RUN_TIME_MANAGE;               //(20)
    kal_uint32 PB_STATUS;                        //(21)
    kal_uint32 PB_DEBUG_INFO[4];                 //(22)~(25)
    kal_uint32 L1_DEBUG_INFO[3];                 //(26)~(28)
    kal_uint32 guard_id_end;                     //(29)
} ulsp_info_t; //Define ULSP info

#endif // __DSP_HEADER_DEFINE_CXIF_ULSP_H__
