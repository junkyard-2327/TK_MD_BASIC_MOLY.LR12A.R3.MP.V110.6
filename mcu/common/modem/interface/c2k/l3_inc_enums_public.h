#ifndef _L3_INC_ENUMS_PUBLIC_H
#define _L3_INC_ENUMS_PUBLIC_H


/* Max HPLMN length */
/* Cross-Core API cannot support compile option, MD3 cannot get correct MAX_NUM_HPLMN when __R7_EHPLMN__ is ON*/
#ifdef __R7_EHPLMN__
#define MAX_NUM_HPLMN 4
#else
#define MAX_NUM_HPLMN 1
#endif

/* PLMN_INFO_MAX_NUM_HPLMN should be MAX_NUM_HPLMN when __R7_EHPLMN__ is ON*/
/* Cross-Core API cannot support compile option, MD3 cannot get correct MAX_NUM_HPLMN when __R7_EHPLMN__ is ON*/
#define PLMN_INFO_MAX_NUM_HPLMN 4

/* PLMN info TRX_ID = 0~15 */
#define PLMN_INFO_MAX_TRX_ID_NUM 16



/** Max OPLMN,UPLMN length */
#ifndef NWSEL_MAX_NUM_PLMNS
#define NWSEL_MAX_NUM_PLMNS               (128)
#endif

typedef enum
{
    ACT_SIM_NONE = 0,
    ACT_SIM_SIM1,
    ACT_SIM_SIM2,
    ACT_SIM_ANY = 0xFF
} act_sim_enum;


typedef enum{
    RAT_NONE     = 0,
    RAT_GSM      = 1,
    RAT_UMTS     = 2,
    RAT_GSM_UMTS = RAT_GSM | RAT_UMTS,
    RAT_LTE      = 4,
    RAT_GSM_LTE  = RAT_GSM | RAT_LTE,
    RAT_UMTS_LTE = RAT_UMTS | RAT_LTE,
    RAT_GSM_UMTS_LTE = RAT_GSM | RAT_UMTS | RAT_LTE,
    RAT_COM_GSM  = 8,
    RAT_C2K      = 16,
    RAT_GSM_C2K  = RAT_GSM | RAT_C2K,
    RAT_UMTS_C2K = RAT_UMTS | RAT_C2K,
    RAT_LTE_C2K  = RAT_LTE | RAT_C2K,
    RAT_GSM_UMTS_C2K = RAT_GSM | RAT_UMTS | RAT_C2K,
    RAT_GSM_LTE_C2K = RAT_GSM | RAT_LTE | RAT_C2K,
    RAT_UMTS_LTE_C2K = RAT_UMTS | RAT_LTE | RAT_C2K,
    RAT_GSM_UMTS_LTE_C2K = RAT_GSM | RAT_UMTS | RAT_LTE | RAT_C2K,
    RAT_1xRTT     = 32,
    RAT_HRPD     = 64,
    RAT_1xRTT_HRPD = RAT_1xRTT | RAT_HRPD
}rat_enum;

typedef enum {
    NWSEL_RAT_NONE = 0, /* Indicate the End Point, means "Do not search other RATs" */
    NWSEL_GSM      = 0x01,
    NWSEL_UMTS     = 0x02, /* FDD, WCDMA */
    NWSEL_GSM_UMTS = NWSEL_GSM | NWSEL_UMTS, /* 0x03 */
    NWSEL_FDD_LTE   = 0x04,
    NWSEL_RAT_GSM_FDDLTE  = NWSEL_GSM | NWSEL_FDD_LTE,
    NWSEL_RAT_UMTS_FDDLTE = NWSEL_UMTS | NWSEL_FDD_LTE,
    NWSEL_RAT_GSM_UMTS_FDDLTE = NWSEL_GSM | NWSEL_UMTS | NWSEL_FDD_LTE,

    NWSEL_TD_SCDMA = 0x20,
    NWSEL_TD_LTE  = 0x40,
    NWSEL_TD_FDD_LTE = NWSEL_FDD_LTE | NWSEL_TD_LTE,   /* 0x44, TD-LTE and FDD-LTE have same priority */
    NWSEL_RAT_GSM_UMTS_LTE = NWSEL_RAT_GSM_UMTS_FDDLTE | NWSEL_TD_LTE,
    NWSEL_RAT_ANY = 0xFF     /* Indicate the End Point, means "Other RATs search order are not specified" */
}nwsel_rat_enum;

/** PS service type */
typedef enum
{
    IRAT_C2K_AI   = 0,          /**< SYSTEM type defined in MSPL: C2K_AI */
    IRAT_3GPP_AI,               /**< SYSTEM type defined in MSPL: 3GPP_AI */
    IRAT_C2K_1X,                /**< SYSTEM type defined in MSPL: C2K_1X */
    IRAT_C2K_HRPD,              /**< SYSTEM type defined in MSPL: C2K_HRPD */
    IRAT_GERAN,             /**< SYSTEM type defined in MSPL: GSM */
    IRAT_UTRAN,             /**< SYSTEM type defined in MSPL: WCDMA */
    IRAT_EUTRAN,            /**< SYSTEM type defined in MSPL: LTE */
    IRAT_NONE     = 7       /**< SYSTEM type defined in MSPL: INVALID */
}irat_system_type_enum;

/** MMSS list feature */

/* Max MMSS record size in system */
#define SYS_MAX_MMSS_REC_NUM   12

/* Max MMSS record size for GMSS internal used.
** the value must be greater than SYS_MAX_MMSS_REC_NUM.
*/
#define GMSS_MAX_MMSS_REC_NUM  20

typedef enum {
    MMSS_LIST_RAL = 0,
    MMSS_LIST_MRU,
    MMSS_LIST_MAX
} mmss_list_type_enum;

typedef enum {
    tele_mpsr_mode_para = 0,
    tele_mpsr_mode_array = 1,
} mmss_tele_mpsr_mode_enum;

typedef enum {

    /* Normal MMSS search by MSPL (gmss_class, rat, mcc) and MRU list */
    MMSS_SEARCH_NORMAL = 0,

    /* Normal MMSS search by MRU list only (not considering gmss_class, rat, mcc)  */
    MMSS_SEARCH_NORMAL_MRU_ONLY,

    /* Limited search (not considering gmss_class, rat, mcc)
    **  if carry MMSS_LIST, NWSEL would search MMSS_LIST only
    **	if not carry MMSS_LIST, NWSEL would search limited service on all RAT
    */
    MMSS_SEARCH_LIMITED,

    /* limit search within MMSS list */
    MMSS_SEARCH_LIMITED_LIST_ONLY,

    /* Better system reselection for C2L IRAT */
    MMSS_SEARCH_BETTER_SYSTEM_RESELECTION,

    /* Used when UE registered on C2K and end 1xRTT call, try to find LTE back quickly */
    MMSS_SEARCH_LTE_STORED_ONLY,

} mmss_search_type_enum;


typedef enum
{
    EMM_PLMN_BASED_T3402,
    EMM_PLMN_BASED_T3346,
    EMM_PLMN_BASED_THROTTLING    
} plmn_based_timer_enum;

typedef enum
{
    EMM_TIMER_STATUS_START,
    EMM_TIMER_STATUS_STOP,
    EMM_TIMER_STATUS_EXPIRY    
} timer_status_enum;

typedef enum 
{
    /* for normal SRLTE power on case  */
    CS_REG_CAUSE_NONE = 0,

    /* hVOLTE mode change to SRLTE  */
    CS_REG_CAUSE_HVOLTE_MODE_LTE_TO_SRLTE = 1,

    /* for international roaming search  */    
    CS_REG_CAUSE_INTERNATIONAL_ROAMING = 2,

    /* MD sarch limited search by itself */
    CS_REG_CAUSE_LIMITED_SEARCH = 3,

    /* GMSS internally changes from LTE only to SRLTE mode */
    CS_REG_CAUSE_IMS_TO_1X_REG = 4
} cs_reg_cause_enum;

#endif /*_L3_INC_ENUMS_PUBLIC_H*/
