#ifndef __CUIF_SS_region_H__
#define __CUIF_SS_region_H__

#if KAL_IS_ASSEMBLY

/********** I Cache Debug Use **********/

#define USIP_ICACHE_DBG_MCU_INIT_PTRN       0x62930000
#define USIP_ICACHE_DBG_MCU_CHECK_IABT      0x62930001
#define USIP_ICACHE_DBG_MCU_HANDSHAKE_PTRN  0x62930002

#else /* KAL_IS_ASSEMBLY */

#define BININFOVALIDPATTERN         0x12345678
#define CUIF_WAKE_UP_PATTERN        0xAABB9393        // for sleep flow it usage

/* Basic Patten */
#define USIP93S_INITFLOW_PREFIX     0xFB000000
#define USIP93S_DORMANTFLOW_PREFIX  0xDB000000
#define USIP93S_ABORTFLOW_PREFIX    0xAB000000
#define USIP93S_WAKEUPFLOW_PREFIX   0xFB200000
#define uSIPBOOTPATTERN             0x93FB93FB
#define uSIPABORTPATTERN            0xBD93FB93
#define uSIPSLEEPPATTERN            0xBD93BD93
#define uSIPDORMANTSTARTPATTERN     0xBD4ABD4A
#define CUIFSTRUCTUREPATTERN        0xCB93CB93
#define CUIF_SUB_STRUCT_CHECK       0xCB00CB00
#define DSP_G_FEATURE_CHECK_FAIL_PATTERN   0x62936214

/********** I Cache Debug Use **********/

#define USIP_ICACHE_DBG_MCU_INIT_PTRN       0x62930000
#define USIP_ICACHE_DBG_MCU_CHECK_IABT      0x62930001
#define USIP_ICACHE_DBG_MCU_HANDSHAKE_PTRN  0x62930002
    
// ********** Init flow USE **********
#if defined(__USIP__) || defined(__MIPS_IA__)
typedef enum
{
    INIT_LOADDONE_BIT                   = 0,
    INIT_VIC_ENABLE_BIT                 = 1, //This value should not be modified This is for VIC enable notify use
    INIT_SYSINIT_DONE_BIT               = 2,
    INIT_CUIFSTRUCTURECHECK_DONE_BIT    = 3,
    INIT_KERNELINIT_DONE_BIT            = 4,
    INIT_HWINIT_DONE_BIT                = 5,
    INIT_THREADINIT_DONE_BIT            = 6,
    INIT_CUIFIRQ_DONE_BIT               = 7,
} BOOTUPPROGRESS_BIT;

typedef enum
{
    INIT_LOADDONE                       = USIP93S_INITFLOW_PREFIX + (1 << INIT_LOADDONE_BIT),
    INIT_VIC_ENABLE                     = USIP93S_INITFLOW_PREFIX + (1 << INIT_VIC_ENABLE_BIT),
    INIT_SYSINIT_DONE                   = USIP93S_INITFLOW_PREFIX + (1 << INIT_SYSINIT_DONE_BIT),
    INIT_CUIFSTRUCTURECHECKDONE         = USIP93S_INITFLOW_PREFIX + (1 << INIT_CUIFSTRUCTURECHECK_DONE_BIT),
    INIT_KERNELINIT_DONE                = USIP93S_INITFLOW_PREFIX + (1 << INIT_KERNELINIT_DONE_BIT),
    INIT_HWINIT_DONE                    = USIP93S_INITFLOW_PREFIX + (1 << INIT_HWINIT_DONE_BIT),
    INIT_THREADINIT_DONE                = USIP93S_INITFLOW_PREFIX + (1 << INIT_THREADINIT_DONE_BIT),
    INIT_CUIFIRQ_DONE                   = USIP93S_INITFLOW_PREFIX + (1 << INIT_CUIFIRQ_DONE_BIT),
} BOOTUPPROGRESS;
#endif

// ********** Dormant flow USE **********
#if defined(__USIP__) || defined(__MIPS_IA__)
typedef enum
{
    DORMANT_RECEIVE_DORMANT_REQ_BIT     = 0,
    DORMANT_NOTIFY_SCQ16_DORMANT_BIT    = 1,
    DORMANT_EXECUTED_USER_CB_BIT        = 2,
    DORMANT_EXECUTED_SS_CB_BIT          = 3,
    DORMANT_CHECK_SCQ16_DORMANT_DONE_BIT= 4,
    DORMANT_DONE_BIT                    = 5,
} DORMANTPROGRESS_BIT;

typedef enum
{
    DORMANT_RECEIVE_DORMANT_REQ         = USIP93S_DORMANTFLOW_PREFIX + (1 << DORMANT_RECEIVE_DORMANT_REQ_BIT),
    DORMANT_NOTIFY_SCQ16_DORMANT        = USIP93S_DORMANTFLOW_PREFIX + (1 << DORMANT_NOTIFY_SCQ16_DORMANT_BIT),
    DORMANT_EXECUTED_USER_CB            = USIP93S_DORMANTFLOW_PREFIX + (1 << DORMANT_EXECUTED_USER_CB_BIT),
    DORMANT_EXECUTED_SS_CB              = USIP93S_DORMANTFLOW_PREFIX + (1 << DORMANT_EXECUTED_SS_CB_BIT),
    DORMANT_CHECK_SCQ16_DORMANT_DONE    = USIP93S_DORMANTFLOW_PREFIX + (1 << DORMANT_CHECK_SCQ16_DORMANT_DONE_BIT),
    DORMANT_DORMANT_DONE                = USIP93S_DORMANTFLOW_PREFIX + (1 << DORMANT_DONE_BIT),
} DORMANTPROGRESS;
#endif

// ********** Abort flow USE **********
#if defined(__USIP__) || defined(__MIPS_IA__)
typedef enum
{
    ABORT_DUMMY_0_BIT                   = 0,
    ABORT_START_BIT                     = 1, //This value should not be modified This is for VIC enable notify use
    ABORT_NOTIFY_SCQ16_WAKEUP_BIT       = 2,
    ABORT_NOTIFY_SCQ16_ABORT_BIT        = 3,
    ABORT_EXECUTED_SS_CB_BIT            = 4,
    ABORT_CUIFZI_DONE_BIT               = 5,
    ABORT_EXECUTED_USER_CB_BIT          = 6,
    ABORT_CHECK_SCQ16_IDLE_BIT          = 7,
} ABORTPROGRESS_BIT;

typedef enum
{
    ABORT_DUMMY_0                       = USIP93S_ABORTFLOW_PREFIX + (1 << ABORT_DUMMY_0_BIT),
    ABORT_START                         = USIP93S_ABORTFLOW_PREFIX + (1 << ABORT_START_BIT),
    ABORT_NOTIFY_SCQ16_WAKEUP           = USIP93S_ABORTFLOW_PREFIX + (1 << ABORT_NOTIFY_SCQ16_WAKEUP_BIT),
    ABORT_NOTIFY_SCQ16_ABORT            = USIP93S_ABORTFLOW_PREFIX + (1 << ABORT_NOTIFY_SCQ16_ABORT_BIT),
    ABORT_EXECUTED_SS_CB                = USIP93S_ABORTFLOW_PREFIX + (1 << ABORT_EXECUTED_SS_CB_BIT),
    ABORT_CUIFZI_DONE                   = USIP93S_ABORTFLOW_PREFIX + (1 << ABORT_CUIFZI_DONE_BIT),
    ABORT_EXECUTED_USER_CB              = USIP93S_ABORTFLOW_PREFIX + (1 << ABORT_EXECUTED_USER_CB_BIT),
    ABORT_CHECK_SCQ16_IDLE              = USIP93S_ABORTFLOW_PREFIX + (1 << ABORT_CHECK_SCQ16_IDLE_BIT),
} ABORTPROGRESS;
#endif

// ********** Wakeup flow USE **********
#if defined(__USIP__) || defined(__MIPS_IA__)
typedef enum
{
    WAKEUP_DUMMY_0_BIT                  = 0,
    WAKEUP_VIC_SP_SET_DONE_BIT          = 1, //This value should not be modified This is for VIC enable notify use
    WAKEUP_THREAD0INIT_DONE_BIT         = 2,
    WAKEUP_ACTIVATE_THREAD1_BIT         = 3,
    WAKEUP_NOTIFY_SCQ16_WAKEUP_BIT      = 4,
    WAKEUP_NOTIFY_SCQ16_ABORT_BIT       = 5,
    WAKEUP_EXECUTED_SS_CB_BIT           = 6,
    WAKEUP_CUIFZI_DONE_BIT              = 7,
    WAKEUP_EXECUTED_USER_CB_BIT         = 8,
    WAKEUP_CHEKC_SCQ16_IDLE_BIT         = 9,
} WAKEUPPROGRESS_BIT;

typedef enum
{
    WAKEUP_DUMMY                        = USIP93S_WAKEUPFLOW_PREFIX + (1 << WAKEUP_DUMMY_0_BIT),
    WAKEUP_VIC_SP_SET_DONE              = USIP93S_WAKEUPFLOW_PREFIX + (1 << WAKEUP_VIC_SP_SET_DONE_BIT),
    WAKEUP_THREAD0INIT_DONE             = USIP93S_WAKEUPFLOW_PREFIX + (1 << WAKEUP_THREAD0INIT_DONE_BIT),
    WAKEUP_ACTIVATE_THREAD1             = USIP93S_WAKEUPFLOW_PREFIX + (1 << WAKEUP_ACTIVATE_THREAD1_BIT),
    WAKEUP_NOTIFY_SCQ16_WAKEUP          = USIP93S_WAKEUPFLOW_PREFIX + (1 << WAKEUP_NOTIFY_SCQ16_WAKEUP_BIT),
    WAKEUP_NOTIFY_SCQ16_ABORT           = USIP93S_WAKEUPFLOW_PREFIX + (1 << WAKEUP_NOTIFY_SCQ16_ABORT_BIT),
    WAKEUP_EXECUTED_SS_CB               = USIP93S_WAKEUPFLOW_PREFIX + (1 << WAKEUP_EXECUTED_SS_CB_BIT),
    WAKEUP_CUIFZI_DONE                  = USIP93S_WAKEUPFLOW_PREFIX + (1 << WAKEUP_CUIFZI_DONE_BIT),
    WAKEUP_EXECUTED_USER_CB             = USIP93S_WAKEUPFLOW_PREFIX + (1 << WAKEUP_EXECUTED_USER_CB_BIT),
    WAKEUP_CHEKC_SCQ16_IDLE             = USIP93S_WAKEUPFLOW_PREFIX + (1 << WAKEUP_CHEKC_SCQ16_IDLE_BIT),
} WAKEUPPROGRESS;
#endif

typedef volatile struct {
    kal_uint32 ddl_mode;
    kal_uint32 ddl_way;
    kal_uint32 ddl_rx_mode;
    kal_uint32 ddl_rx_mode_report;
    kal_uint32 rake_pm_ddl_mode;
} SS_MD32_DDLINFO;

typedef volatile struct {
    kal_uint32 bin_info_valid;
    kal_uint32 dsp_bin_ro_start;
    kal_uint32 dsp_bin_ro_len;
} SS_MD32_BOOTINFO;

typedef volatile struct {
    kal_uint32 BootUpReady;
    kal_uint32 BootUpReady_Progress;
    SS_MD32_BOOTINFO BootInfo;
} SS_MD32_BootStatus;

typedef volatile struct {
    kal_uint32 core_id;
} SS_MD32_CTRL_INFO;

typedef volatile struct {
    kal_uint32 idle_flag;
    SS_MD32_CTRL_INFO dsp_deactivate_info;
} SS_MD32_SLEEP_REL;

typedef volatile struct {
    kal_uint32 temp;
} SS_DBGInfo;

typedef volatile struct {
    kal_uint32 temp;
} SS_ExceptionAssertLog;

typedef volatile struct {
    kal_uint32 temp;
} SS_CUIF_ZIInfo_t;

typedef volatile struct {
    kal_uint32 temp;
} CUIF_MDLInfo;

typedef volatile struct {
    SS_MD32_BootStatus      boot;
    SS_MD32_SLEEP_REL       sleep_info;
    SS_MD32_DDLINFO         DDLInfo;
    SS_DBGInfo              dbg_reg;
    SS_ExceptionAssertLog   ex_log;
    SS_CUIF_ZIInfo_t        cuif_zi_info;
    CUIF_MDLInfo            cuif_mdl_used;
} CUIF_SS_region;

typedef volatile struct {
    kal_uint32 CUIFStructurePattern;
} SS_CUIFStructPattern;

typedef volatile struct {
    kal_uint32 temp;
} EXT_CUIF_DUMMY;

#endif /* KAL_IS_ASSEMBLY */

#endif // __CUIF_SS_region_H__
