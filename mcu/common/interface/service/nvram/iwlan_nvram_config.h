/***********************************
 *  IWLAN Config Macro definition
 ***********************************/

/***********************************
 *  Reset Macro
 ***********************************/
#undef IWLAN_CFG_TYPE_START
#undef IWLAN_CFG_TYPE_DCL
#undef IWLAN_CFG_TYPE_ARRAY
#undef IWLAN_CFG_TYPE_END
#undef IWLAN_CFG_L0_TYPE_START
#undef IWLAN_CFG_L0_TYPE_DCL
#undef IWLAN_CFG_L0_TYPE_ARRAY
#undef IWLAN_CFG_L0_TYPE_END
#undef IWLAN_CFG_L1_TYPE_START
#undef IWLAN_CFG_L1_TYPE_DCL
#undef IWLAN_CFG_L1_TYPE_ARRAY
#undef IWLAN_CFG_L1_TYPE_END
#undef IWLAN_CFG_L2_TYPE_START
#undef IWLAN_CFG_L2_TYPE_DCL
#undef IWLAN_CFG_L2_TYPE_ARRAY
#undef IWLAN_CFG_L2_TYPE_END

/****************************************
 * IWLAN CFG Macro Structure Definition
 ****************************************/
#if __IWLAN_CFG_ACTION__ == 1

/* ============= *
 *  Layer 0 obj  *
 * ============= */
#if __IWLAN_CFG_LAYER__ == 0
#define IWLAN_CFG_L0_TYPE_START(_obj0) \
    typedef struct _ ## _obj0 ## _t {
#define IWLAN_CFG_L0_TYPE_DCL(_obj0, _type, _enum, _name, _cfg_dflt, _nv_dflt) \
        _type _name;
#define IWLAN_CFG_L0_TYPE_ARRAY(_obj0, _type, _enum, _name, _size, _cfg_dflt, _nv_dflt) \
        _type _name[_size];
#define IWLAN_CFG_L1_TYPE_START(_obj0, _obj1) \
        _obj1 ## _t _obj1;
#define IWLAN_CFG_L0_TYPE_END(_obj0) \
    } _obj0 ## _t;

/* ============= *
 *  Layer 1 obj  *
 * ============= */
#elif __IWLAN_CFG_LAYER__ == 1
#define IWLAN_CFG_L1_TYPE_START(_obj0, _obj1) \
    typedef struct _ ## _obj1 ## _t {
#define IWLAN_CFG_L1_TYPE_DCL(_obj0, _obj1, _type, _enum, _name, _cfg_dflt, _nv_dflt) \
        _type _name;
#define IWLAN_CFG_L1_TYPE_ARRAY(_obj0, _obj1, _type, _enum, _name, _size, _cfg_dflt, _nv_dflt) \
        _type _name[_size];
#define IWLAN_CFG_L2_TYPE_START(_obj0, _obj1, _obj2) \
        _obj2 ## _t _obj2;
#define IWLAN_CFG_L1_TYPE_END(_obj0, _obj1) \
    } _obj1 ## _t;

/* ============= *
 *  Layer 2 obj  *
 * ============= */
#elif __IWLAN_CFG_LAYER__ == 2 /* layer 2 obj*/
#define IWLAN_CFG_L2_TYPE_START(_obj0, _obj1, _obj2) \
    typedef struct _ ## _obj2 ## _t {
#define IWLAN_CFG_L2_TYPE_DCL(_obj0, _obj1, _obj2, _type, _enum, _name, _cfg_dflt, _nv_dflt) \
        _type _name;
#define IWLAN_CFG_L2_TYPE_ARRAY(_obj0, _obj1, _obj2, _type, _enum, _name, _size, _cfg_dflt, _nv_dflt) \
        _type _name[_size];
#define IWLAN_CFG_L2_TYPE_END(_obj0, _obj1, _obj2) \
    } _obj2 ## _t;

#endif

/****************************************
 *  IWLAN CFG Macro Structure Value Assign
 ****************************************/
#elif __IWLAN_CFG_ACTION__ == 2

#define IWLAN_CFG_L0_TYPE_DCL(_obj0, _type, _enum, _name, _cfg_dflt, _nv_dflt) \
    (__IWLAN_CFG_PTR__)->_obj0._name = _cfg_dflt;

#define IWLAN_CFG_L1_TYPE_DCL(_obj0, _obj1, _type, _enum, _name, _cfg_dflt, _nv_dflt) \
    (__IWLAN_CFG_PTR__)->_obj0._obj1._name = _cfg_dflt;

#define IWLAN_CFG_L2_TYPE_DCL(_obj0, _obj1, _obj2, _type, _enum, _name, _cfg_dflt, _nv_dflt) \
    (__IWLAN_CFG_PTR__)->_obj0._obj1._obj2._name = _cfg_dflt;

/* WARNING: It should declare var _cfg_idx_ locally */
#define IWLAN_CFG_L0_TYPE_ARRAY(_obj0, _type, _enum, _name, _size, _cfg_dflt, _nv_dflt) \
    for (_cfg_idx_ = 0; _cfg_idx_ < _size; ++_cfg_idx_) { \
        (__IWLAN_CFG_PTR__)->_obj0._name[_cfg_idx_] = _cfg_dflt; \
    }

#define IWLAN_CFG_L1_TYPE_ARRAY(_obj0, _obj1, _type, _enum, _name, _size, _cfg_dflt, _nv_dflt) \
    for (_cfg_idx_ = 0; _cfg_idx_ < _size; ++_cfg_idx_) { \
        (__IWLAN_CFG_PTR__)->_obj0._obj1._name[_cfg_idx_] = _cfg_dflt; \
    }

#define IWLAN_CFG_L2_TYPE_ARRAY(_obj0, _obj1, _obj2, _type, _enum, _name, _size, _cfg_dflt, _nv_dflt) \
    for (_cfg_idx_ = 0; _cfg_idx_ < _size; ++_cfg_idx_) { \
        (__IWLAN_CFG_PTR__)->_obj0._obj1._obj2._name[_cfg_idx_] = _cfg_dflt; \
    }

/****************************************
 *  IWLAN CFG Macro NVRAN Value Assign
 ****************************************/
#elif __IWLAN_CFG_ACTION__ == 3

#define IWLAN_CFG_L0_TYPE_DCL(_obj0, _type, _enum, _name, _cfg_dflt, _nv_dflt) \
    if ((__IWLAN_NVRAM_PTR__)->_obj0._name != (_type)(UNDEF_CONFIG)) { \
        (__IWLAN_CFG_PTR__)->_obj0._name = (__IWLAN_NVRAM_PTR__)->_obj0._name;  \
    }

#define IWLAN_CFG_L1_TYPE_DCL(_obj0, _obj1, _type, _enum, _name, _cfg_dflt, _nv_dflt) \
    if ((__IWLAN_NVRAM_PTR__)->_obj0._obj1._name != (_type)(UNDEF_CONFIG)) { \
        (__IWLAN_CFG_PTR__)->_obj0._obj1._name = (__IWLAN_NVRAM_PTR__)->_obj0._obj1._name; \
    }

#define IWLAN_CFG_L2_TYPE_DCL(_obj0, _obj1, _obj2, _type, _enum, _name, _cfg_dflt, _nv_dflt) \
    if ((__IWLAN_NVRAM_PTR__)->_obj0._obj1._obj2._name != (_type)(UNDEF_CONFIG)) { \
        (__IWLAN_CFG_PTR__)->_obj0._obj1._obj2._name = (__IWLAN_NVRAM_PTR__)->_obj0._obj1._obj2._name; \
    }

/* WARNING: It should declare var _cfg_idx_ locally */
#define IWLAN_CFG_L0_TYPE_ARRAY(_obj0, _type, _enum, _name, _size, _cfg_dflt, _nv_dflt) \
    for (_cfg_idx_ = 0; _cfg_idx_ < _size; ++_cfg_idx_) { \
        if ((__IWLAN_NVRAM_PTR__)->_obj0._name[_cfg_idx_] != (_type)(UNDEF_CONFIG)) { \
            (__IWLAN_CFG_PTR__)->_obj0._name[_cfg_idx_] = (__IWLAN_NVRAM_PTR__)->_obj0._name[_cfg_idx_];  \
        } \
    }

#define IWLAN_CFG_L1_TYPE_ARRAY(_obj0, _obj1, _type, _enum, _name, _size, _cfg_dflt, _nv_dflt) \
    for (_cfg_idx_ = 0; _cfg_idx_ < _size; ++_cfg_idx_) { \
        if ((__IWLAN_NVRAM_PTR__)->_obj0._obj1._name[_cfg_idx_] != (_type)(UNDEF_CONFIG)) { \
            (__IWLAN_CFG_PTR__)->_obj0._obj1._name[_cfg_idx_] = (__IWLAN_NVRAM_PTR__)->_obj0._obj1._name[_cfg_idx_]; \
        } \
    }

#define IWLAN_CFG_L2_TYPE_ARRAY(_obj0, _obj1, _obj2, _type, _enum, _name, _size, _cfg_dflt, _nv_dflt) \
    for (_cfg_idx_ = 0; _cfg_idx_ < _size; ++_cfg_idx_) { \
        if ((__IWLAN_NVRAM_PTR__)->_obj0._obj1._obj2._name[_cfg_idx_] != (_type)(UNDEF_CONFIG)) { \
            (__IWLAN_CFG_PTR__)->_obj0._obj1._obj2._name[_cfg_idx_] = (__IWLAN_NVRAM_PTR__)->_obj0._obj1._obj2._name[_cfg_idx_]; \
        } \
    }
/****************************************
 *  IWLAN CFG Macro IWLCFG LOOKUP TABLE
 ****************************************/
#elif __IWLAN_CFG_ACTION__ == 4

#define IWLAN_CFG_L0_TYPE_DCL(_obj0, _type, _enum, _name, _cfg_dflt, _nv_dflt) \
    #_name,

#define IWLAN_CFG_L1_TYPE_DCL(_obj0, _obj1, _type, _enum, _name, _cfg_dflt, _nv_dflt) \
    #_name,

#define IWLAN_CFG_L2_TYPE_DCL(_obj0, _obj1, _obj2, _type, _enum, _name, _cfg_dflt, _nv_dflt) \
    #_name,

/* No need IWLCFG for array */
#define IWLAN_CFG_L0_TYPE_ARRAY(_obj0, _type, _enum, _name, _size, _cfg_dflt, _nv_dflt)
#define IWLAN_CFG_L1_TYPE_ARRAY(_obj0, _obj1, _type, _enum, _name, _size, _cfg_dflt, _nv_dflt)
#define IWLAN_CFG_L2_TYPE_ARRAY(_obj0, _obj1, _obj2, _type, _enum, _name, _size, _cfg_dflt, _nv_dflt)

/**********************************************
 *  IWLAN CFG Macro IWLCFG LOOKUP TABLE ENUM
 **********************************************/
#elif __IWLAN_CFG_ACTION__ == 5

#define IWLAN_CFG_L0_TYPE_DCL(_obj0, _type, _enum, _name, _cfg_dflt, _nv_dflt) \
    _enum,

#define IWLAN_CFG_L1_TYPE_DCL(_obj0, _obj1, _type, _enum, _name, _cfg_dflt, _nv_dflt) \
    _enum,

#define IWLAN_CFG_L2_TYPE_DCL(_obj0, _obj1, _obj2, _type, _enum, _name, _cfg_dflt, _nv_dflt) \
    _enum,

/* No need IWLCFG for array */
#define IWLAN_CFG_L0_TYPE_ARRAY(_obj0, _type, _enum, _name, _size, _cfg_dflt, _nv_dflt)
#define IWLAN_CFG_L1_TYPE_ARRAY(_obj0, _obj1, _type, _enum, _name, _size, _cfg_dflt, _nv_dflt)
#define IWLAN_CFG_L2_TYPE_ARRAY(_obj0, _obj1, _obj2, _type, _enum, _name, _size, _cfg_dflt, _nv_dflt)

/************************************
 *  IWLAN CFG Macro IWLCFG SET/GET
 ************************************/
#elif __IWLAN_CFG_ACTION__ == 6

#define IWLAN_CFG_L0_TYPE_DCL(_obj0, _type, _enum, _name, _cfg_dflt, _nv_dflt) \
    case _enum: { \
        if (is_read == KAL_TRUE) { \
            sprintf(in_out_ptr, "%d", (__IWLAN_CFG_PTR__)->_obj0._name); \
        } \
        else{ \
            WANS_UPDATE_CTXVAL((__IWLAN_CFG_PTR__)->_obj0._name, atoi((kal_char *)in_out_ptr), is_updt); \
            (__IWLAN_NVRAM_PTR__)->_obj0._name = (__IWLAN_CFG_PTR__)->_obj0._name; \
        } \
        break; \
    }

#define IWLAN_CFG_L1_TYPE_DCL(_obj0, _obj1, _type, _enum, _name, _cfg_dflt, _nv_dflt) \
    case _enum: { \
        if (is_read == KAL_TRUE) { \
            sprintf(in_out_ptr, "%d", (__IWLAN_CFG_PTR__)->_obj0._obj1._name); \
        } \
        else{ \
            WANS_UPDATE_CTXVAL((__IWLAN_CFG_PTR__)->_obj0._obj1._name, atoi((kal_char *)in_out_ptr), is_updt); \
            (__IWLAN_NVRAM_PTR__)->_obj0._obj1._name = (__IWLAN_CFG_PTR__)->_obj0._obj1._name; \
        } \
        break; \
    }

#define IWLAN_CFG_L2_TYPE_DCL(_obj0, _obj1, _obj2, _type, _enum, _name, _cfg_dflt, _nv_dflt) \
    case _enum: { \
        if (is_read == KAL_TRUE) { \
            sprintf(in_out_ptr, "%d", (__IWLAN_CFG_PTR__)->_obj0._obj1._obj2._name); \
        } \
        else{ \
            WANS_UPDATE_CTXVAL((__IWLAN_CFG_PTR__)->_obj0._obj1._obj2._name, atoi((kal_char *)in_out_ptr), is_updt); \
            (__IWLAN_NVRAM_PTR__)->_obj0._obj1._obj2._name = (__IWLAN_CFG_PTR__)->_obj0._obj1._obj2._name; \
        } \
        break; \
    }

/* No need IWLCFG for array */
#define IWLAN_CFG_L0_TYPE_ARRAY(_obj0, _type, _enum, _name, _size, _cfg_dflt, _nv_dflt)
#define IWLAN_CFG_L1_TYPE_ARRAY(_obj0, _obj1, _type, _enum, _name, _size, _cfg_dflt, _nv_dflt)
#define IWLAN_CFG_L2_TYPE_ARRAY(_obj0, _obj1, _obj2, _type, _enum, _name, _size, _cfg_dflt, _nv_dflt)

#endif

/* If macro not used, define as emply */
#ifndef IWLAN_CFG_L0_TYPE_START
#define IWLAN_CFG_L0_TYPE_START(...)
#endif
#ifndef IWLAN_CFG_L0_TYPE_DCL
#define IWLAN_CFG_L0_TYPE_DCL(...)
#endif
#ifndef IWLAN_CFG_L0_TYPE_ARRAY
#define IWLAN_CFG_L0_TYPE_ARRAY(...)
#endif
#ifndef IWLAN_CFG_L0_TYPE_END
#define IWLAN_CFG_L0_TYPE_END(...)
#endif
#ifndef IWLAN_CFG_L1_TYPE_START
#define IWLAN_CFG_L1_TYPE_START(...)
#endif
#ifndef IWLAN_CFG_L1_TYPE_DCL
#define IWLAN_CFG_L1_TYPE_DCL(...)
#endif
#ifndef IWLAN_CFG_L1_TYPE_ARRAY
#define IWLAN_CFG_L1_TYPE_ARRAY(...)
#endif
#ifndef IWLAN_CFG_L1_TYPE_END
#define IWLAN_CFG_L1_TYPE_END(...)
#endif
#ifndef IWLAN_CFG_L2_TYPE_START
#define IWLAN_CFG_L2_TYPE_START(...)
#endif
#ifndef IWLAN_CFG_L2_TYPE_DCL
#define IWLAN_CFG_L2_TYPE_DCL(...)
#endif
#ifndef IWLAN_CFG_L2_TYPE_ARRAY
#define IWLAN_CFG_L2_TYPE_ARRAY(...)
#endif
#ifndef IWLAN_CFG_L2_TYPE_END
#define IWLAN_CFG_L2_TYPE_END(...)
#endif

/* Define macro expansion */
#define GET_START_MACRO(_1, _2, _3, NAME, ...) NAME
#define IWLAN_CFG_TYPE_START(...)                         \
    GET_START_MACRO(__VA_ARGS__, IWLAN_CFG_L2_TYPE_START, \
                                 IWLAN_CFG_L1_TYPE_START, \
                                 IWLAN_CFG_L0_TYPE_START)(__VA_ARGS__)

#define GET_DCL_MACRO(_type, _enum, _name, _cfg_dflt, _nv_dflt, _1, _2, _3, NAME, ...) NAME
#define IWLAN_CFG_TYPE_DCL(...) \
    GET_DCL_MACRO(__VA_ARGS__, IWLAN_CFG_L2_TYPE_DCL, \
                               IWLAN_CFG_L1_TYPE_DCL, \
                               IWLAN_CFG_L0_TYPE_DCL)(__VA_ARGS__)

#define GET_ARRAY_MACRO(_type, _enum, _name, _size, _cfg_dflt, _nv_dflt, _1, _2, _3, NAME, ...) NAME
#define IWLAN_CFG_TYPE_ARRAY(...) \
    GET_ARRAY_MACRO(__VA_ARGS__, IWLAN_CFG_L2_TYPE_ARRAY, \
                               IWLAN_CFG_L1_TYPE_ARRAY, \
                               IWLAN_CFG_L0_TYPE_ARRAY)(__VA_ARGS__)
#define GET_END_MACRO(_1, _2, _3, NAME, ...) NAME
#define IWLAN_CFG_TYPE_END(...) \
    GET_END_MACRO(__VA_ARGS__, IWLAN_CFG_L2_TYPE_END, \
                               IWLAN_CFG_L1_TYPE_END, \
                               IWLAN_CFG_L0_TYPE_END)(__VA_ARGS__)

/*
 * IWLAN Config
 *
 * Format:
 *     # no need to end with ','
 *
 *     IWLAN_CFG_TYPE_START(_obj...)
 *     IWLAN_CFG_TYPE_DCL(_obj..., _cfg_type, _cfg_enum, _cfg_name, _cfg_dflt, _nv_dflt)
 *     ...
 *     IWLAN_CFG_TYPE_END(_obj...)
 */

/*
 * IWLAN WMOB-WANS Configs
 */
IWLAN_CFG_L0_TYPE_START(wans_cfg)
IWLAN_CFG_L0_TYPE_DCL(wans_cfg, kal_uint32, WANS_OP_ID,                                     wans_op_id,                                     UNDEF_CONFIG_32,        UNDEF_CONFIG_32)
IWLAN_CFG_L0_TYPE_DCL(wans_cfg, kal_uint32, WANS_IMS_MD_SUPPORTING_RAT,                     wans_ims_md_supporting_rat,                     0x1,        UNDEF_CONFIG_32)
IWLAN_CFG_L0_TYPE_DCL(wans_cfg, kal_uint8,  WANS_ECC_ANS_ENABLE,                            wans_ecc_ans_enable,                            KAL_FALSE,  UNDEF_CONFIG_8)  
IWLAN_CFG_L0_TYPE_DCL(wans_cfg, kal_uint8,  WANS_ADM_ANS_ENABLE,                            wans_adm_ans_enable,                            KAL_FALSE,  UNDEF_CONFIG_8)
IWLAN_CFG_L0_TYPE_DCL(wans_cfg, kal_uint8,  WANS_VODM_PREF_ENABLE,                          wans_vodm_pref_enable,                          KAL_FALSE,  UNDEF_CONFIG_8)
IWLAN_CFG_L0_TYPE_DCL(wans_cfg, kal_uint8,  WANS_IMS_VOPS_BARRING_ENABLE,                   wans_ims_vops_barring_enable,                   KAL_TRUE,   UNDEF_CONFIG_8)
IWLAN_CFG_L0_TYPE_DCL(wans_cfg, kal_uint8,  WANS_IMS_VOPS_SETUP_BARRING_ENABLE,             wans_ims_vops_setup_barring_enable,             KAL_TRUE,   UNDEF_CONFIG_8)
IWLAN_CFG_L0_TYPE_DCL(wans_cfg, kal_uint8,  WANS_IMS_VOPS_IDLE_HO_BARRING_ENABLE,           wans_ims_vops_idle_ho_barring_enable,           KAL_FALSE,  UNDEF_CONFIG_8)
IWLAN_CFG_L0_TYPE_DCL(wans_cfg, kal_uint8,  WANS_IMS_23G_SETUP_BARRING_ENABLE,              wans_ims_23G_setup_barring_enable,              KAL_TRUE,   UNDEF_CONFIG_8)
IWLAN_CFG_L0_TYPE_DCL(wans_cfg, kal_uint8,  WANS_IMS_ROAMING_BARRING_ENABLE,                wans_ims_roaming_barring_enable,                KAL_TRUE,   UNDEF_CONFIG_8)  // phase out
IWLAN_CFG_L0_TYPE_DCL(wans_cfg, kal_uint8,  WANS_XCAP_ROAMING_BARRING_ENABLE,               wans_xcap_roaming_barring_enable,               KAL_FALSE,  UNDEF_CONFIG_8)
IWLAN_CFG_L0_TYPE_DCL(wans_cfg, kal_uint8,  WANS_IMS_WLAN_ROAMING_BARRING_ENABLE,           wans_ims_wlan_roaming_barring_enable,           KAL_FALSE,  UNDEF_CONFIG_8)
IWLAN_CFG_L0_TYPE_DCL(wans_cfg, kal_uint8,  WANS_IMS_SIPCPI_BARRING_ENABLE,                 wans_ims_sipcpi_barring_enable,                 KAL_FALSE,  UNDEF_CONFIG_8)
IWLAN_CFG_L0_TYPE_DCL(wans_cfg, kal_uint8,  WANS_MMS_EPDG_CONNECTED_BARRING_ENABLE,         wans_mms_epdg_connected_barring_enable,         KAL_FALSE,  UNDEF_CONFIG_8)
IWLAN_CFG_L0_TYPE_DCL(wans_cfg, kal_uint8,  WANS_MMS_IMS_PDN_CONNECTED_BARRING_ENABLE,      wans_mms_ims_pdn_connected_barring_enable,      KAL_FALSE,  UNDEF_CONFIG_8)
IWLAN_CFG_L0_TYPE_DCL(wans_cfg, kal_uint8,  WANS_MMS_WLAN_ONLY_BARRING_ENABLE,              wans_mms_wlan_only_barring_enable,              KAL_FALSE,  UNDEF_CONFIG_8)
IWLAN_CFG_L0_TYPE_DCL(wans_cfg, kal_uint8,  WANS_MMS_CELL_ONLY_BARRING_ENABLE,              wans_mms_cell_only_barring_enable,              KAL_FALSE,  UNDEF_CONFIG_8)
IWLAN_CFG_L0_TYPE_DCL(wans_cfg, kal_uint8,  WANS_XCAP_EPDG_CONNECTED_EPDG_BARRING_ENABLE,   wans_xcap_epdg_connected_epdg_barring_enable,   KAL_FALSE,  UNDEF_CONFIG_8)
IWLAN_CFG_L0_TYPE_DCL(wans_cfg, kal_uint8,  WANS_XCAP_WLAN_ONLY_BARRING_ENABLE,             wans_xcap_wlan_only_barring_enable,             KAL_FALSE,  UNDEF_CONFIG_8)
IWLAN_CFG_L0_TYPE_DCL(wans_cfg, kal_uint8,  WANS_XCAP_CELL_ONLY_BARRING_ENABLE,             wans_xcap_cell_only_barring_enable,             KAL_FALSE,  UNDEF_CONFIG_8)
IWLAN_CFG_L0_TYPE_DCL(wans_cfg, kal_uint8,  WANS_WLAN_IKE8192_BARRING_ENABLE,               wans_wlan_ike8192_barring_enable,               KAL_FALSE,  UNDEF_CONFIG_8)
IWLAN_CFG_L0_TYPE_DCL(wans_cfg, kal_uint8,  WANS_IMS_CS_PREF_ENABLE,                        wans_ims_cs_pref_enable,                        KAL_TRUE,   UNDEF_CONFIG_8)
IWLAN_CFG_L0_TYPE_DCL(wans_cfg, kal_uint8,  WANS_IMS_CS_PREF_WHILE_ROAMING_ENABLE,          wans_ims_cs_pref_while_roaming_enable,          KAL_FALSE,  UNDEF_CONFIG_8)
IWLAN_CFG_L0_TYPE_DCL(wans_cfg, kal_uint8,  WANS_IMS_WLAN_DEREG_ENABLE,                     wans_ims_wlan_dereg_enable,                     KAL_TRUE,   UNDEF_CONFIG_8)
IWLAN_CFG_L0_TYPE_DCL(wans_cfg, kal_uint8,  WANS_WIFI_CALL_ROVEOUT_ALERT_ENABLE,            wans_wifi_call_roveout_alert_enable,            KAL_FALSE,  UNDEF_CONFIG_8)
IWLAN_CFG_L0_TYPE_DCL(wans_cfg, kal_uint32, WANS_MD_SIG_REPORT_DURATION,                    wans_md_sig_report_duration,                    3,          UNDEF_CONFIG_32)
IWLAN_CFG_L0_TYPE_DCL(wans_cfg, kal_uint32, WANS_MD_SIG_REPORT_TIMER_TYPE,                  wans_md_sig_report_timer_type,                  0,          UNDEF_CONFIG_32) // default is 0
IWLAN_CFG_L0_TYPE_DCL(wans_cfg, kal_uint8,  WANS_IMS_ROAMING_HO_ENABLE,                     wans_ims_roaming_ho_enable,                     KAL_TRUE,   UNDEF_CONFIG_8)
IWLAN_CFG_L0_TYPE_DCL(wans_cfg, kal_uint8,  WANS_IMS_ROAMING_INCALL_HO_ENABLE,              wans_ims_roaming_incall_ho_enable,              KAL_TRUE,   UNDEF_CONFIG_8)
IWLAN_CFG_L0_TYPE_DCL(wans_cfg, kal_uint8,  WANS_IMS_ROAMING_RAT_RESELECT_BY_DREG_ENABLE,   wans_ims_roaming_rat_reselect_by_dreg_enable,   KAL_FALSE,  UNDEF_CONFIG_8)
IWLAN_CFG_L0_TYPE_DCL(wans_cfg, kal_uint8,  WANS_IMS_PCSCF_QUALITY_ENABLE,                  wans_ims_pcscf_quality_enable,                  KAL_FALSE,  UNDEF_CONFIG_8)
IWLAN_CFG_L0_TYPE_DCL(wans_cfg, kal_uint32, WANS_IMS_PCSCF_STATE_BKOFF_T,                   wans_ims_pcscf_state_bkoff_t,                   0,          UNDEF_CONFIG_32)
IWLAN_CFG_L0_TYPE_DCL(wans_cfg, kal_int8,   WANS_IMS_EVS_CALL_THR_OFFSET,                   wans_ims_evs_call_thr_offset,                   0,          UNDEF_CONFIG_8)
IWLAN_CFG_L0_TYPE_DCL(wans_cfg, kal_uint32, WANS_1STPDN_LTE_PREF_APN_TYPE,                  wans_1stpdn_lte_pref_apn_type,                  0,          UNDEF_CONFIG_32)
IWLAN_CFG_L0_TYPE_DCL(wans_cfg, kal_uint8,  WANS_ECC_HO_ENABLE,                             wans_ecc_ho_enable,                             KAL_FALSE,  UNDEF_CONFIG_8)
IWLAN_CFG_L0_TYPE_DCL(wans_cfg, kal_uint8,  WANS_IMS_DEREG_DEAD_ZONE_ENABLE,                wans_ims_dereg_dead_zone_enable,                KAL_FALSE,  UNDEF_CONFIG_8)
IWLAN_CFG_L0_TYPE_DCL(wans_cfg, kal_uint8,  WANS_BIP_ROAMING_BARRING_ENABLE,                wans_bip_roaming_barring_enable,                KAL_FALSE,  UNDEF_CONFIG_8)
IWLAN_CFG_L0_TYPE_DCL(wans_cfg, kal_uint8,  WANS_SUPL_ROAMING_BARRING_ENABLE,               wans_supl_roaming_barring_enable,               KAL_FALSE,  UNDEF_CONFIG_8)
IWLAN_CFG_L0_TYPE_DCL(wans_cfg, kal_uint8,  WANS_IMS_NO_VOICE_SUP_SMS_ENABLE,               wans_ims_no_voice_sup_sms_enable,               KAL_FALSE,  UNDEF_CONFIG_8)
IWLAN_CFG_L0_TYPE_DCL(wans_cfg, kal_uint8,  WANS_IMS_VOICE_CAP_PREF_ENABLE,                 wans_ims_voice_cap_pref_enable,                 KAL_FALSE,  UNDEF_CONFIG_8)
//IWLAN_CFG_L0_TYPE_DCL(wans_cfg, kal_uint8,  WANS_IMS_ECC_OVER_IMS_HO_ENABLE,                wans_ims_ecc_over_ims_ho_enable,                KAL_TRUE,   UNDEF_CONFIG_8)
IWLAN_CFG_L0_TYPE_DCL(wans_cfg, kal_uint8,  WANS_IMS_ECC_OVER_IMS_HO_LTE_TO_WIFI_ENABLE,    wans_ims_ecc_over_ims_ho_lte_to_wifi_enable,    KAL_TRUE,   UNDEF_CONFIG_8)
IWLAN_CFG_L0_TYPE_DCL(wans_cfg, kal_uint8,  WANS_IMS_ECC_OVER_IMS_HO_WIFI_TO_LTE_ENABLE,    wans_ims_ecc_over_ims_ho_wifi_to_lte_enable,    KAL_TRUE,   UNDEF_CONFIG_8)
IWLAN_CFG_L0_TYPE_DCL(wans_cfg, kal_uint8,  WANS_IMS_DEREG_DEAD_ZONE_INCALL_BARRING_ENABLE, wans_ims_dereg_dead_zone_incall_barring_enable, KAL_TRUE,  UNDEF_CONFIG_8)
IWLAN_CFG_L0_TYPE_DCL(wans_cfg, kal_uint8,	WANS_DEFAULT_ROAMING_BARRING_ENABLE,            wans_default_roaming_barring_enable,            KAL_FALSE,	UNDEF_CONFIG_8)
IWLAN_CFG_L0_TYPE_DCL(wans_cfg, kal_uint8,  WANS_IMS_DEREG_DEAD_ZONE_MDPOOR_BARRING_ENABLE, wans_ims_dereg_dead_zone_mdpoor_barring_enable, KAL_FALSE,   UNDEF_CONFIG_8)
IWLAN_CFG_L0_TYPE_DCL(wans_cfg, kal_uint8,  WANS_LTE_SIG_RANK_WHEN_LTE_DEREG_ENABLE,        wans_lte_sig_rank_when_lte_dereg_enable,        KAL_FALSE,   UNDEF_CONFIG_8)
IWLAN_CFG_L0_TYPE_DCL(wans_cfg, kal_uint8,  WANS_IMS_ECC_OVER_EMERG_HO_ENABLE,              wans_ims_ecc_over_emerg_ho_enable,              KAL_TRUE,   UNDEF_CONFIG_8)
IWLAN_CFG_L0_TYPE_DCL(wans_cfg, kal_uint8,  WANS_IMS_DEREG_POOR_WIFI,                       wans_ims_dereg_poor_wifi,                       KAL_FALSE,  UNDEF_CONFIG_8)
IWLAN_CFG_L0_TYPE_DCL(wans_cfg, kal_uint8,  WANS_IMS_23G_WIFI_RAT_RESELECT_BY_DREG_ENABLE,  wans_ims_23g_wifi_rat_reselect_by_dreg_enable,  KAL_FALSE,  UNDEF_CONFIG_8)

    /* Throttling Timer Config */
    IWLAN_CFG_L1_TYPE_START(wans_cfg, throttling_cfg)
    IWLAN_CFG_L1_TYPE_DCL(wans_cfg, throttling_cfg, kal_uint8,  WANS_THROTTLING_WLAN_ENABLE,             wans_throttling_wlan_enable,             1,         UNDEF_CONFIG_8)
    IWLAN_CFG_L1_TYPE_DCL(wans_cfg, throttling_cfg, kal_uint32, WANS_WROVEIN_THROTTLING_T,               wans_wrovein_throttling_t,               10,         UNDEF_CONFIG_32) // in sec
    IWLAN_CFG_L1_TYPE_DCL(wans_cfg, throttling_cfg, kal_uint8,  WANS_THROTTLING_MD_ENABLE,               wans_throttling_md_enable,               1,         UNDEF_CONFIG_8)
    IWLAN_CFG_L1_TYPE_DCL(wans_cfg, throttling_cfg, kal_uint32, WANS_WROVEOUT_THROTTLING_T,              wans_wroveout_throttling_t,              10,         UNDEF_CONFIG_32) // in sec
    IWLAN_CFG_L1_TYPE_DCL(wans_cfg, throttling_cfg, kal_uint8,  WANS_THROTTLING_MD_QUAL_OVERRIDE_ENABLE, wans_throttling_md_qual_override_enable, KAL_FALSE, UNDEF_CONFIG_8)
    IWLAN_CFG_L1_TYPE_END(wans_cfg, throttling_cfg)

    /* Measurement Timer Config */
    IWLAN_CFG_L1_TYPE_START(wans_cfg, meas_cfg)
    IWLAN_CFG_L1_TYPE_DCL(wans_cfg, meas_cfg, kal_uint32,  WANS_WROVEIN_MEAS_T,   wans_wrovein_meas_t,   0,         UNDEF_CONFIG_32) // in msec
    IWLAN_CFG_L1_TYPE_DCL(wans_cfg, meas_cfg, kal_uint32,  WANS_WROVEOUT_MEAS_T,  wans_wroveout_meas_t,  0,         UNDEF_CONFIG_32) // in msec
    IWLAN_CFG_L1_TYPE_END(wans_cfg, meas_cfg)

    /* Ustable Timer Config */
    IWLAN_CFG_L1_TYPE_START(wans_cfg, rat_hys_cfg)
    IWLAN_CFG_L1_TYPE_DCL(wans_cfg, rat_hys_cfg, kal_uint32,  WANS_CELL_UNSTABLE_HYS_T, wans_cell_unstable_hys_t, 2000, UNDEF_CONFIG_32) // in msec
    IWLAN_CFG_L1_TYPE_DCL(wans_cfg, rat_hys_cfg, kal_uint32,  WANS_WIFI_UNSTABLE_HYS_T, wans_wifi_unstable_hys_t, 2000, UNDEF_CONFIG_32) // in msec
    IWLAN_CFG_L1_TYPE_END(wans_cfg, rat_hys_cfg)

    /* Signal Threshold Config */
    IWLAN_CFG_L1_TYPE_START(wans_cfg, sig_cfg)
        /* Wlan */
        IWLAN_CFG_L2_TYPE_START(wans_cfg, sig_cfg, wlan_sig_thr_cfg)
        IWLAN_CFG_L2_TYPE_DCL(wans_cfg, sig_cfg, wlan_sig_thr_cfg, kal_int32, WANS_WLAN_RSSI_ROVE_POOR_TH,    wans_wlan_rssi_rove_poor_th,    -85,             UNDEF_CONFIG_32)
        IWLAN_CFG_L2_TYPE_DCL(wans_cfg, sig_cfg, wlan_sig_thr_cfg, kal_int32, WANS_WLAN_RSSI_ROVE_FAIR_TH,    wans_wlan_rssi_rove_fair_th,    -75,             UNDEF_CONFIG_32)
        IWLAN_CFG_L2_TYPE_DCL(wans_cfg, sig_cfg, wlan_sig_thr_cfg, kal_int32, WANS_WLAN_RSSI_HO_POOR_TH,      wans_wlan_rssi_ho_poor_th,      -88,             UNDEF_CONFIG_32)
        IWLAN_CFG_L2_TYPE_DCL(wans_cfg, sig_cfg, wlan_sig_thr_cfg, kal_int32, WANS_WLAN_RSSI_HO_FAIR_TH,      wans_wlan_rssi_ho_fair_th,      -78,             UNDEF_CONFIG_32)
        IWLAN_CFG_L2_TYPE_DCL(wans_cfg, sig_cfg, wlan_sig_thr_cfg, kal_int32, WANS_WLAN_RSSI_SNR_POOR_TH,     wans_wlan_rssi_snr_poor_th,     UNDEF_CONFIG_32, UNDEF_CONFIG_32)
        IWLAN_CFG_L2_TYPE_DCL(wans_cfg, sig_cfg, wlan_sig_thr_cfg, kal_int32, WANS_WLAN_RSSI_SNR_FAIR_TH,     wans_wlan_rssi_snr_fair_th,     UNDEF_CONFIG_32, UNDEF_CONFIG_32)
        IWLAN_CFG_L2_TYPE_DCL(wans_cfg, sig_cfg, wlan_sig_thr_cfg, kal_int32, WANS_WLAN_RSSI_NO_CELL_POOR_TH, wans_wlan_rssi_no_cell_poor_th, UNDEF_CONFIG_32, UNDEF_CONFIG_32)
        IWLAN_CFG_L2_TYPE_DCL(wans_cfg, sig_cfg, wlan_sig_thr_cfg, kal_int32, WANS_WLAN_RSSI_NO_CELL_FAIR_TH, wans_wlan_rssi_no_cell_fair_th, UNDEF_CONFIG_32, UNDEF_CONFIG_32)
        IWLAN_CFG_L2_TYPE_END(wans_cfg, sig_cfg, wlan_sig_thr_cfg)

        /* Celular */
        IWLAN_CFG_L2_TYPE_START(wans_cfg, sig_cfg, md_sig_thr_cfg)
        IWLAN_CFG_L2_TYPE_DCL(wans_cfg, sig_cfg, md_sig_thr_cfg, kal_int32, WANS_LTE_RSRP_POOR_TH,  wans_lte_rsrp_poor_th , -116,            UNDEF_CONFIG_32)
        IWLAN_CFG_L2_TYPE_DCL(wans_cfg, sig_cfg, md_sig_thr_cfg, kal_int32, WANS_LTE_RSRP_FAIR_TH,  wans_lte_rsrp_fair_th , -106,            UNDEF_CONFIG_32)
        IWLAN_CFG_L2_TYPE_DCL(wans_cfg, sig_cfg, md_sig_thr_cfg, kal_int32, WANS_LTE_RSRP_GOOD_TH,  wans_lte_rsrp_good_th , UNDEF_CONFIG_32, UNDEF_CONFIG_32)
        IWLAN_CFG_L2_TYPE_DCL(wans_cfg, sig_cfg, md_sig_thr_cfg, kal_int32, WANS_LTE_RSSNR_POOR_TH, wans_lte_rssnr_poor_th, UNDEF_CONFIG_32, UNDEF_CONFIG_32)
        IWLAN_CFG_L2_TYPE_DCL(wans_cfg, sig_cfg, md_sig_thr_cfg, kal_int32, WANS_LTE_RSSNR_FAIR_TH, wans_lte_rssnr_fair_th, UNDEF_CONFIG_32, UNDEF_CONFIG_32)
        IWLAN_CFG_L2_TYPE_DCL(wans_cfg, sig_cfg, md_sig_thr_cfg, kal_int32, WANS_LTE_RSSNR_GOOD_TH, wans_lte_rssnr_good_th, UNDEF_CONFIG_32, UNDEF_CONFIG_32)
        IWLAN_CFG_L2_TYPE_DCL(wans_cfg, sig_cfg, md_sig_thr_cfg, kal_int32, WANS_LTE_RSRQ_POOR_TH,  wans_lte_rsrq_poor_th , UNDEF_CONFIG_32, UNDEF_CONFIG_32)
        IWLAN_CFG_L2_TYPE_DCL(wans_cfg, sig_cfg, md_sig_thr_cfg, kal_int32, WANS_LTE_RSRQ_FAIR_TH,  wans_lte_rsrq_fair_th , UNDEF_CONFIG_32, UNDEF_CONFIG_32)
        IWLAN_CFG_L2_TYPE_DCL(wans_cfg, sig_cfg, md_sig_thr_cfg, kal_int32, WANS_LTE_RSRQ_GOOD_TH,  wans_lte_rsrq_good_th , UNDEF_CONFIG_32, UNDEF_CONFIG_32)
        IWLAN_CFG_L2_TYPE_DCL(wans_cfg, sig_cfg, md_sig_thr_cfg, kal_int32, WANS_UMTS_RSCP_POOR_TH, wans_umts_rscp_poor_th, -109,            UNDEF_CONFIG_32)
        IWLAN_CFG_L2_TYPE_DCL(wans_cfg, sig_cfg, md_sig_thr_cfg, kal_int32, WANS_UMTS_RSCP_FAIR_TH, wans_umts_rscp_fair_th, -104,            UNDEF_CONFIG_32)
        IWLAN_CFG_L2_TYPE_DCL(wans_cfg, sig_cfg, md_sig_thr_cfg, kal_int32, WANS_UMTS_ECNO_POOR_TH, wans_umts_ecno_poor_th, UNDEF_CONFIG_32, UNDEF_CONFIG_32)
        IWLAN_CFG_L2_TYPE_DCL(wans_cfg, sig_cfg, md_sig_thr_cfg, kal_int32, WANS_UMTS_ECNO_FAIR_TH, wans_umts_ecno_fair_th, UNDEF_CONFIG_32, UNDEF_CONFIG_32)
        IWLAN_CFG_L2_TYPE_DCL(wans_cfg, sig_cfg, md_sig_thr_cfg, kal_int32, WANS_GSM_RSSI_POOR_TH,  wans_gsm_rssi_poor_th , -102,            UNDEF_CONFIG_32)
        IWLAN_CFG_L2_TYPE_DCL(wans_cfg, sig_cfg, md_sig_thr_cfg, kal_int32, WANS_GSM_RSSI_FAIR_TH,  wans_gsm_rssi_fair_th , -94,             UNDEF_CONFIG_32)
        IWLAN_CFG_L2_TYPE_DCL(wans_cfg, sig_cfg, md_sig_thr_cfg, kal_int32, WANS_1X_RSSI_POOR_TH,   wans_1x_rssi_poor_th  , -100,            UNDEF_CONFIG_32)
        IWLAN_CFG_L2_TYPE_DCL(wans_cfg, sig_cfg, md_sig_thr_cfg, kal_int32, WANS_1X_RSSI_FAIR_TH,   wans_1x_rssi_fair_th  , -90,             UNDEF_CONFIG_32)
        IWLAN_CFG_L2_TYPE_DCL(wans_cfg, sig_cfg, md_sig_thr_cfg, kal_int32, WANS_1X_ECIO_POOR_TH,   wans_1x_ecio_poor_th  , -12,             UNDEF_CONFIG_32)
        IWLAN_CFG_L2_TYPE_DCL(wans_cfg, sig_cfg, md_sig_thr_cfg, kal_int32, WANS_1X_ECIO_FAIR_TH,   wans_1x_ecio_fair_th  , -9,              UNDEF_CONFIG_32)
        IWLAN_CFG_L2_TYPE_DCL(wans_cfg, sig_cfg, md_sig_thr_cfg, kal_int32, WANS_EVDO_RSSI_POOR_TH, wans_evdo_rssi_poor_th, -105,            UNDEF_CONFIG_32)
        IWLAN_CFG_L2_TYPE_DCL(wans_cfg, sig_cfg, md_sig_thr_cfg, kal_int32, WANS_EVDO_RSSI_FAIR_TH, wans_evdo_rssi_fair_th, -95,             UNDEF_CONFIG_32)
        IWLAN_CFG_L2_TYPE_DCL(wans_cfg, sig_cfg, md_sig_thr_cfg, kal_int32, WANS_EVDO_ECIO_POOR_TH, wans_evdo_ecio_poor_th, -12,             UNDEF_CONFIG_32)
        IWLAN_CFG_L2_TYPE_DCL(wans_cfg, sig_cfg, md_sig_thr_cfg, kal_int32, WANS_EVDO_ECIO_FAIR_TH, wans_evdo_ecio_fair_th, -9,              UNDEF_CONFIG_32)
        IWLAN_CFG_L2_TYPE_END(wans_cfg, sig_cfg, md_sig_thr_cfg)
    IWLAN_CFG_L1_TYPE_END(wans_cfg, sig_cfg)

    /* QoS Config */
    IWLAN_CFG_L1_TYPE_START(wans_cfg, qos_cfg)
        /* QoS - RTP */
        IWLAN_CFG_L2_TYPE_START(wans_cfg, qos_cfg, qos_rtp_cfg)
        IWLAN_CFG_L2_TYPE_DCL(wans_cfg, qos_cfg, qos_rtp_cfg, kal_uint8,  WANS_RTP_QOS_ENABLE,                  wans_rtp_qos_enable,               KAL_TRUE,       UNDEF_CONFIG_8)
        IWLAN_CFG_L2_TYPE_DCL(wans_cfg, qos_cfg, qos_rtp_cfg, kal_uint8,  WANS_IMS_RTP_TO_STERRING_ENABLE,      wans_ims_rtp_to_sterring_enable,   KAL_TRUE,       UNDEF_CONFIG_8)
        IWLAN_CFG_L2_TYPE_DCL(wans_cfg, qos_cfg, qos_rtp_cfg, kal_uint32, WANS_IMS_WLAN_VOICE_RTP_JITTER_TH,    wans_ims_wlan_voice_rtp_jitter_th, UNDEF_CONFIG_32, UNDEF_CONFIG_32) 
        IWLAN_CFG_L2_TYPE_DCL(wans_cfg, qos_cfg, qos_rtp_cfg, kal_uint32, WANS_IMS_WLAN_VIDEO_RTP_JITTER_TH,    wans_ims_wlan_video_rtp_jitter_th, UNDEF_CONFIG_32, UNDEF_CONFIG_32)
        IWLAN_CFG_L2_TYPE_DCL(wans_cfg, qos_cfg, qos_rtp_cfg, kal_uint32, WANS_IMS_RTP_WLAN_PKT_LOSS_TH,        wans_ims_rtp_wlan_pkt_loss_th,     50,              UNDEF_CONFIG_32)
        IWLAN_CFG_L2_TYPE_DCL(wans_cfg, qos_cfg, qos_rtp_cfg, kal_uint32, WANS_IMS_RTP_WLAN_QOS_BKOFF_T,        wans_ims_rtp_wlan_qos_bkoff_t,     20,             UNDEF_CONFIG_32) // in sec
        IWLAN_CFG_L2_TYPE_DCL(wans_cfg, qos_cfg, qos_rtp_cfg, kal_uint32, WANS_WLAN_RTP_PKT_LOSS_TH,            wans_wlan_rtp_pkt_loss_th,         UNDEF_CONFIG_32, UNDEF_CONFIG_32)
        IWLAN_CFG_L2_TYPE_DCL(wans_cfg, qos_cfg, qos_rtp_cfg, kal_uint32, WANS_WLAN_RTP_SAMPLING_DURATION,      wans_wlan_rtp_sampling_duration,   5,               UNDEF_CONFIG_32) // in sec
        IWLAN_CFG_L2_TYPE_DCL(wans_cfg, qos_cfg, qos_rtp_cfg, kal_uint32, WANS_WLAN_RTCP_JITTER_DELAY_TH,       wans_wlan_rtcp_jitter_delay_th,    UNDEF_CONFIG_32, UNDEF_CONFIG_32) // in ms
        IWLAN_CFG_L2_TYPE_DCL(wans_cfg, qos_cfg, qos_rtp_cfg, kal_uint32, WANS_WLAN_RTCP_PLR_TH,                wans_wlan_rtcp_plr_th,             UNDEF_CONFIG_32, UNDEF_CONFIG_32) // percentage
        IWLAN_CFG_L2_TYPE_DCL(wans_cfg, qos_cfg, qos_rtp_cfg, kal_uint8,  WANS_WLAN_NO_RTP_HANDOVER,            wans_wlan_no_rtp_handover_enable,  KAL_FALSE,       UNDEF_CONFIG_8)
        IWLAN_CFG_L2_TYPE_DCL(wans_cfg, qos_cfg, qos_rtp_cfg, kal_uint32, WANS_WLAN_HO_BEGIN_NO_RTP_ROLLBACK,   wans_wlan_ho_begin_no_rtp_rollback,UNDEF_CONFIG_32, UNDEF_CONFIG_32) // in ms
        IWLAN_CFG_L2_TYPE_DCL(wans_cfg, qos_cfg, qos_rtp_cfg, kal_uint8,  WANS_INCALL_CHECK_NO_RTP,             wans_incall_check_no_rtp_enable,   KAL_FALSE,       UNDEF_CONFIG_8)
        /* RTP setting for Cellular */
        IWLAN_CFG_L2_TYPE_DCL(wans_cfg, qos_cfg, qos_rtp_cfg, kal_uint32, WANS_IMS_CELL_VOICE_RTP_JITTER_TH, wans_ims_cell_voice_rtp_jitter_th, UNDEF_CONFIG_32, UNDEF_CONFIG_32) 
        IWLAN_CFG_L2_TYPE_DCL(wans_cfg, qos_cfg, qos_rtp_cfg, kal_uint32, WANS_IMS_CELL_VIDEO_RTP_JITTER_TH, wans_ims_cell_video_rtp_jitter_th, UNDEF_CONFIG_32, UNDEF_CONFIG_32)
        IWLAN_CFG_L2_TYPE_DCL(wans_cfg, qos_cfg, qos_rtp_cfg, kal_uint32, WANS_IMS_RTP_CELL_PKT_LOSS_TH,     wans_ims_rtp_cell_pkt_loss_th,     50,              UNDEF_CONFIG_32)
        IWLAN_CFG_L2_TYPE_DCL(wans_cfg, qos_cfg, qos_rtp_cfg, kal_uint32, WANS_IMS_RTP_CELL_QOS_BKOFF_T,     wans_ims_rtp_cell_qos_bkoff_t,     20,              UNDEF_CONFIG_32) // in sec
        IWLAN_CFG_L2_TYPE_DCL(wans_cfg, qos_cfg, qos_rtp_cfg, kal_uint32, WANS_CELL_RTP_SAMPLING_DURATION,   wans_cell_rtp_sampling_duration,   5,               UNDEF_CONFIG_32) // in sec
        IWLAN_CFG_L2_TYPE_DCL(wans_cfg, qos_cfg, qos_rtp_cfg, kal_uint32, WANS_CELL_RTCP_JITTER_DELAY_TH,    wans_cell_rtcp_jitter_delay_th,    UNDEF_CONFIG_32, UNDEF_CONFIG_32) // in ms
        IWLAN_CFG_L2_TYPE_DCL(wans_cfg, qos_cfg, qos_rtp_cfg, kal_uint32, WANS_CELL_RTCP_PLR_TH,             wans_cell_rtcp_plr_th,             UNDEF_CONFIG_32, UNDEF_CONFIG_32) // percentage
        IWLAN_CFG_L2_TYPE_DCL(wans_cfg, qos_cfg, qos_rtp_cfg, kal_uint8,  WANS_CELL_NO_RTP_HANDOVER,         wans_cell_no_rtp_handover_enable,  KAL_FALSE,       UNDEF_CONFIG_8)
        IWLAN_CFG_L2_TYPE_DCL(wans_cfg, qos_cfg, qos_rtp_cfg, kal_uint32, WANS_CELL_HO_BEGIN_NO_RTP_ROLLBACK,wans_cell_ho_begin_no_rtp_rollback,UNDEF_CONFIG_32, UNDEF_CONFIG_32) // in ms
        IWLAN_CFG_L2_TYPE_END(wans_cfg, qos_cfg, qos_rtp_cfg)

        /* QoS - Ping */
        IWLAN_CFG_L2_TYPE_START(wans_cfg, qos_cfg, qos_ping_cfg)
        IWLAN_CFG_L2_TYPE_DCL(wans_cfg, qos_cfg, qos_ping_cfg, kal_uint8,  WANS_PING_QOS_ENABLE, wans_ping_qos_enable, KAL_FALSE,       UNDEF_CONFIG_8)
        IWLAN_CFG_L2_TYPE_DCL(wans_cfg, qos_cfg, qos_ping_cfg, kal_uint32, WANS_PING_INTERVAL,   wans_ping_interval,   UNDEF_CONFIG_32, UNDEF_CONFIG_32) //in sec
        IWLAN_CFG_L2_TYPE_DCL(wans_cfg, qos_cfg, qos_ping_cfg, kal_uint32, WANS_PING_LATENCY_TH, wans_ping_latency_th, UNDEF_CONFIG_32, UNDEF_CONFIG_32) //in ms
        IWLAN_CFG_L2_TYPE_DCL(wans_cfg, qos_cfg, qos_ping_cfg, kal_uint32, WANS_PING_LOSS_TH,    wans_ping_loss_th,    UNDEF_CONFIG_32, UNDEF_CONFIG_32) //0~100%
        IWLAN_CFG_L2_TYPE_END(wans_cfg, qos_cfg, qos_ping_cfg)

        /* QoS - DPD */
        IWLAN_CFG_L2_TYPE_START(wans_cfg, qos_cfg, qos_dpd_cfg)
        IWLAN_CFG_L2_TYPE_DCL(wans_cfg, qos_cfg, qos_dpd_cfg, kal_uint8,  WANS_DPD_QOS_ENABLE,                wans_dpd_qos_enable,                KAL_FALSE,       UNDEF_CONFIG_8)
        IWLAN_CFG_L2_TYPE_DCL(wans_cfg, qos_cfg, qos_dpd_cfg, kal_uint32, WANS_IMS_RTP_HIGH_PKT_LOSS_FOR_DPD_TH, wans_ims_rtp_high_pkt_loss_for_dpd_th, UNDEF_CONFIG_32, UNDEF_CONFIG_32)
        IWLAN_CFG_L2_TYPE_DCL(wans_cfg, qos_cfg, qos_dpd_cfg, kal_uint32, WANS_IMS_RTP_LOW_PKT_LOSS_FOR_DPD_TH,  wans_ims_rtp_low_pkt_loss_for_dpd_th,  UNDEF_CONFIG_32, UNDEF_CONFIG_32)
        IWLAN_CFG_L2_TYPE_END(wans_cfg, qos_cfg, qos_dpd_cfg)

        /* QoS - Reserved */
        IWLAN_CFG_L2_TYPE_START(wans_cfg, qos_cfg, qos_reserved1)
        IWLAN_CFG_L2_TYPE_ARRAY(wans_cfg, qos_cfg, qos_reserved1, kal_uint32, WANS_NVRAM_RESERVED, reserved, 5, UNDEF_CONFIG_32, UNDEF_CONFIG_32)
        IWLAN_CFG_L2_TYPE_END(wans_cfg, qos_cfg, qos_reserved1)
    IWLAN_CFG_L1_TYPE_END(wans_cfg, qos_cfg)

    /* Location Config */
    IWLAN_CFG_L1_TYPE_START(wans_cfg, loc_cfg)
    IWLAN_CFG_L1_TYPE_DCL(wans_cfg, loc_cfg, kal_uint8, WANS_LOCATION_ENABLE,                            wans_location_enable,                            KAL_FALSE, UNDEF_CONFIG_8)
    IWLAN_CFG_L1_TYPE_DCL(wans_cfg, loc_cfg, kal_uint8, WANS_IMS_WLAN_NO_LOCATION_BARRING_ENABLE,        wans_ims_wlan_no_location_barring_enable,        KAL_FALSE, UNDEF_CONFIG_8)
    IWLAN_CFG_L1_TYPE_DCL(wans_cfg, loc_cfg, kal_uint8, WANS_IMS_WLAN_BLOCK_IN_AP_MODE_WHEN_HOME_ENABLE, wans_ims_wlan_block_in_ap_mode_when_home_enable, KAL_FALSE, UNDEF_CONFIG_8)
    IWLAN_CFG_L1_TYPE_DCL(wans_cfg, loc_cfg, kal_uint8, WANS_IMS_WLAN_NO_LOCATION_CELL_LAST_CELL_AS_HOME_ENABLE, wans_ims_wlan_no_location_cell_last_cell_as_home_enable, KAL_FALSE, UNDEF_CONFIG_8)
    IWLAN_CFG_L1_TYPE_DCL(wans_cfg, loc_cfg, kal_uint8, WANS_IMS_WLAN_USE_NV_MD_SRV_IF_UNKNOWN_HOME_IN_FLIGHT_MODE, wans_ims_wlan_use_nv_md_srv_if_unknown_home_in_flight_mode, KAL_FALSE, UNDEF_CONFIG_8)
    IWLAN_CFG_L1_TYPE_DCL(wans_cfg, loc_cfg, kal_uint8, WANS_IMS_LAST_MD_SRV_STATE, wans_ims_last_md_srv_state, UNDEF_CONFIG_8, UNDEF_CONFIG_8)
    IWLAN_CFG_L1_TYPE_DCL(wans_cfg, loc_cfg, kal_uint8, WANS_IMS_WLAN_INTERNATIONAL_ROAMING_LOCATION_BARRING_ENABLE, wans_ims_wlan_international_roaming_location_barring_enable, KAL_FALSE, UNDEF_CONFIG_8)
    IWLAN_CFG_L1_TYPE_END(wans_cfg, loc_cfg)

	IWLAN_CFG_L0_TYPE_DCL(wans_cfg, kal_uint8, WANS_CONFIG_RESERVED1, wans_config_reserved1, UNDEF_CONFIG_8, UNDEF_CONFIG_8)
    IWLAN_CFG_L0_TYPE_DCL(wans_cfg, kal_uint8, WANS_CONFIG_PEND_NONE_ACT_CALL_MSG, wans_config_pend_none_act_call_msg, KAL_TRUE, UNDEF_CONFIG_8)

IWLAN_CFG_L0_TYPE_END(wans_cfg)
