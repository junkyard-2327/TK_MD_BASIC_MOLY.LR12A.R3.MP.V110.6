#ifndef  _SIMMNGR_DEF_ENUMS_H
#define  _SIMMNGR_DEF_ENUMS_H

#include "kal_general_types.h"
#include "kal_public_defs.h"
#include "atcmd_struct.h"
#include "ims_common_def.h"

#define SIMMNGR_SIM_CHECK_OK            0
#define SIMMNGR_SIM_CHECK_FAIL          1
#define SIMMNGR_SIM_CHECK_INIT          2
#define SIMMNGR_SIM_CHECK_RETRY         3
#define SIMMNGR_SIM_CHECK_NOT_INSERT    4

#define SIMMNGR_LOCAL_PARA_HDR LOCAL_PARA_HDR\
                               kal_uint32 trans_id;

typedef enum {
    SIMMNGR_SIM_TYPE_USIM = 0,
    SIMMNGR_SIM_TYPE_ISIM,
    SIMMNGR_SIM_TYPE_GSM_SIM,
    SIMMNGR_SIM_TYPE_MAX,
} simmngr_sim_type_enum;

typedef enum {
    SIMMNGR_QUERY_USIM_INFO_IMSI = 0,                   /*0*/
    SIMMNGR_QUERY_USIM_INFO_MNC_LEN,
    SIMMNGR_QUERY_USIM_INFO_PSISMSC,
    SIMMNGR_QUERY_USIM_INFO_SMSP,
    SIMMNGR_QUERY_USIM_INFO_MSISDN,
    SIMMNGR_QUERY_USIM_INFO_SERVICE_TABLE,
    SIMMNGR_QUERY_ISIM_INFO_IMPI,
    SIMMNGR_QUERY_ISIM_INFO_PSISMSC,
    SIMMNGR_QUERY_ISIM_INFO_IMPU,
    SIMMNGR_QUERY_ISIM_INFO_DOMAIN,
    SIMMNGR_QUERY_ISIM_INFO_SERVICE_TABLE,              /*10*/
    SIMMNGR_QUERY_ISIM_INFO_PCSCF,
    SIMMNGR_QUERY_SIM_INFO_IMEI,
	//Note: For mapping IMSM definition, please add new query from here down, or there will be request it mis-sync
    SIMMNGR_QUERY_USIM_INFO_OPLMNACT,
    SIMMNGR_QUERY_USIM_INFO_HPLMNACT,
    SIMMNGR_QUERY_USIM_INFO_EPDGID,
    SIMMNGR_QUERY_USIM_INFO_EPDGSELECTION,
    SIMMNGR_QUERY_USIM_INFO_EPDGIDEM,
    SIMMNGR_QUERY_USIM_INFO_EPDGSELECTIONEM,
    SIMMNGR_QUERY_USIM_INFO_GBABP,
    SIMMNGR_QUERY_ISIM_INFO_GBABP,                      /*20*/
    SIMMNGR_QUERY_USIM_INFO_GID1,
    SIMMNGR_QUERY_USIM_INFO_GID2,
    SIMMNGR_QUERY_USIM_INFO_PNN,
    SIMMNGR_QUERY_USIM_INFO_SPN,
    SIMMNGR_QUERY_SIM_INFO_IMEISV,
    SIMMNGR_QUERY_SIM_INFO_MAX,
} simmngr_sim_info_query_enum;

typedef enum {
    SIMMNGR_SIM_STATE_NOTIFY_NOT_READY  = 0,
    SIMMNGR_SIM_STATE_NOTIFY_READY      = 1,
    SIMMNGR_SIM_STATE_NOTIFY_REFRESH    = 2,
} simmngr_sim_state_notify_enum;

typedef enum {
    SIMMNGR_SIM_STATE_CHECK_CNF_READY            = 0,    /**< MT is not pending for any password */
    SIMMNGR_SIM_STATE_CHECK_CNF_SIM_PIN          = 1,    /**< MT is waiting SIM PIN to be given */
    SIMMNGR_SIM_STATE_CHECK_CNF_SIM_PUK          = 2,    /**< MT is waiting SIM PUK to be given */
    SIMMNGR_SIM_STATE_CHECK_CNF_PH_SIM_PIN       = 3,    /**< MT is waiting phone SIM card password to be given */
    SIMMNGR_SIM_STATE_CHECK_CNF_PH_FSIM_PIN      = 4,    /**< MT is waiting phone-to-very first SIM card password to be given */
    SIMMNGR_SIM_STATE_CHECK_CNF_PH_FSIM_PUK      = 5,    /**< MT is waiting phone-to-very first SIM card unblocking password to be given */
    SIMMNGR_SIM_STATE_CHECK_CNF_SIM_PIN2         = 6,    /**< MT is waiting SIM PIN2 to given */
    SIMMNGR_SIM_STATE_CHECK_CNF_SIM_PUK2         = 7,    /**< MT is waiting SIM PUK2 to given */
    SIMMNGR_SIM_STATE_CHECK_CNF_PH_NET_PIN       = 8,    /**< MT is waiting network personalization password to given */
    SIMMNGR_SIM_STATE_CHECK_CNF_PH_NET_PUK       = 9,    /**< MT is waiting network personalization unblocking password to given */
    SIMMNGR_SIM_STATE_CHECK_CNF_PH_NETSUB_PIN    = 10,   /**MT is waiting network subset personalization password to be given */
    SIMMNGR_SIM_STATE_CHECK_CNF_PH_NETSUB_PUK    = 11,   /**MT is waiting network subset personalization unblocking password to be given */
    SIMMNGR_SIM_STATE_CHECK_CNF_PH_SP_PIN        = 12,   /**MT is waiting service provider personalization password to be given*/
    SIMMNGR_SIM_STATE_CHECK_CNF_PH_SP_PUK        = 13,   /**MT is waiting service provider personalization unblocking password to be given*/
    SIMMNGR_SIM_STATE_CHECK_CNF_PH_CORP_PIN      = 14,   /**MT is waiting corporate personalization password to be given*/
    SIMMNGR_SIM_STATE_CHECK_CNF_PH_CORP_PUK      = 15,   /**MT is waiting corporate personalization unblocking password to be given*/

    SIMMNGR_SIM_STATE_CHECK_CNF_NOT_INSERT       = 100,  /**SIM not inserted*/
    SIMMNGR_SIM_STATE_CHECK_CNF_PIN_REQUIRED     = 101,  /**SIM PIN required*/
    SIMMNGR_SIM_STATE_CHECK_CNF_PUK_REQUIRED     = 102,  /**SIM PUK required*/
    SIMMNGR_SIM_STATE_CHECK_CNF_SIM_FAILURE      = 103,  /**SIM failure*/
    SIMMNGR_SIM_STATE_CHECK_CNF_WRONG            = 104,  /**SIM wrong*/
    SIMMNGR_SIM_STATE_CHECK_CNF_INCORRECT_PASSWD = 105,  /**Incorrect password*/
    SIMMNGR_SIM_STATE_CHECK_CNF_BUSY             = 106,  /**SIM busy*/

    SIMMNGR_SIM_STATE_CHECK_CNF_RADIO_OFF        = 201,  /**device radio off*/
    SIMMNGR_SIM_STATE_CHECK_CNF_ERROR            = 202,  /**unknown state*/

    SIMMNGR_SIM_STATE_CHECK_CNF_SIM_BLOCK        = 262, /**SIM blocked*/
    SIMMNGR_SIM_STATE_CHECK_CNF_POWERED_DOWN     = 772, /**SIM powered down*/
} simmngr_sim_state_check_cnf_enum;

typedef enum {
    SIMMNGR_SIM_INSERT_STATE_PLUG_OUT   = 0,
    SIMMNGR_SIM_INSERT_STATE_PLUG_IN    = 1,
    SIMMNGR_SIM_INSERT_ABNORMAL         = 2,
} simmngr_sim_insert_state_enum;

typedef enum {
    SIMMNGR_SERVICE_U_SMSP                                = 12,
    SIMMNGR_SERVICE_U_GID1                                = 17,
    SIMMNGR_SERVICE_U_GID2                                = 18,
    SIMMNGR_SERVICE_U_SPN                                 = 19,
    SIMMNGR_SERVICE_U_MSISDN                              = 21,
    SIMMNGR_SERVICE_U_OPLMNWACT                           = 42,
    SIMMNGR_SERVICE_U_HPLMNWACT                           = 43,
    SIMMNGR_SERVICE_U_PLMN_NAME                           = 45,
    SIMMNGR_SERVICE_U_GBA                                 = 68,
    SIMMNGR_SERVICE_U_SM_OVER_IP                          = 91,
    SIMMNGR_SERVICE_U_EPDG_CONF_INFO_SUPPORT              = 106,
    SIMMNGR_SERVICE_U_EPDG_CONF_INFO_CONF                 = 107,
    SIMMNGR_SERVICE_U_EPDG_CONF_INFO_EMER_SERVICE_SUPPORT = 110,
    SIMMNGR_SERVICE_U_EPDG_CONF_INFO_EMER_SERVICE_CONF    = 111,
    SIMMNGR_SERVICE_U_END
}simmngr_usim_service_enum;

typedef enum {
    SIMMNGR_SERVICE_I_PCSCF                  = 1,
    SIMMNGR_SERVICE_I_GBA                    = 2,
    SIMMNGR_SERVICE_I_PCSCF_DISCOVER_SUPPORT = 5,
    SIMMNGR_SERVICE_I_END
}simmngr_isim_service_enum;

#endif
