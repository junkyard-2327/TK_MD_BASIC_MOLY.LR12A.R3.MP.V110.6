/***********************************
 *  WO Config Macro definition
 ***********************************/

/***********************************
 *  Reset Macro
 ***********************************/
#undef WO_CFG_L0_TYPE_START
#undef WO_CFG_L0_TYPE_DCL
#undef WO_CFG_L0_TYPE_ARRAY
#undef WO_CFG_L0_TYPE_END
#undef WO_CFG_L0_ENUM_ALIAS

/****************************************
 * WO CFG Macro Structure Definition
 ****************************************/
#if __WO_CFG_ACTION__ == 1

/* ============= *
 *  Layer 0 obj  *
 * ============= */
#if __WO_CFG_LAYER__ == 0
#define WO_CFG_L0_TYPE_START(_obj0, _desc) \
    typedef struct _ ## _obj0 ## _t {
#define WO_CFG_L0_TYPE_DCL(_obj0, _type, _enum, _name, _cfg_dflt, _nv_dflt, _desc) \
        _type _name;
#define WO_CFG_L0_TYPE_ARRAY(_obj0, _type, _enum, _name, _size, _cfg_dflt, _nv_dflt, _desc) \
        _type _name[_size];
#define WO_CFG_L0_TYPE_END(_obj0) \
    } _obj0 ## _t;

#endif

/****************************************
 *  WO CFG Macro DEFAULT Value Assign
 ****************************************/
#elif __WO_CFG_ACTION__ == 2

#define WO_CFG_L0_TYPE_DCL(_obj0, _type, _enum, _name, _cfg_dflt, _nv_dflt, _desc) \
    (__WO_CFG_PTR__)->_name = _cfg_dflt;

#define WO_CFG_L0_TYPE_ARRAY(_obj0, _type, _enum, _name, _size, _cfg_dflt, _nv_dflt, _desc) \
    kal_snprintf((kal_char *)(__WO_CFG_PTR__)->_name, _size, "%s", _cfg_dflt);

/****************************************
 *  WO CFG Macro NVRAM Value Assign
 ****************************************/
#elif __WO_CFG_ACTION__ == 3

#define WO_CFG_L0_TYPE_DCL(_obj0, _type, _enum, _name, _cfg_dflt, _nv_dflt, _desc) \
    if ((__WO_NVRAM_PTR__)->_name != (_type)(UNDEF_CONFIG)) { \
        (__WO_CFG_PTR__)->_name = (__WO_NVRAM_PTR__)->_name;  \
    }

#define WO_CFG_L0_TYPE_ARRAY(_obj0, _type, _enum, _name, _size, _cfg_dflt, _nv_dflt, _desc) \
    if ((__WO_NVRAM_PTR__)->_name[0] != (_type)(UNDEF_CONFIG)) { \
        kal_mem_cpy((__WO_CFG_PTR__)->_name, (__WO_NVRAM_PTR__)->_name, _size);  \
    }

/****************************************
 *  WO CFG Macro cfg_token TABLE
 ****************************************/
#elif __WO_CFG_ACTION__ == 4

#define WO_CFG_L0_TYPE_DCL(_obj0, _type, _enum, _name, _cfg_dflt, _nv_dflt, _desc) \
    #_name,

#define WO_CFG_L0_TYPE_ARRAY(_obj0, _type, _enum, _name, _size, _cfg_dflt, _nv_dflt, _desc) \
    #_name,

/**********************************************
 *  WO CFG Macro cfg TABLE ENUM
 **********************************************/
#elif __WO_CFG_ACTION__ == 5

#define WO_CFG_L0_TYPE_DCL(_obj0, _type, _enum, _name, _cfg_dflt, _nv_dflt, _desc) \
    _enum,

#define WO_CFG_L0_TYPE_ARRAY(_obj0, _type, _enum, _name, _size, _cfg_dflt, _nv_dflt, _desc) \
    _enum,

#define WO_CFG_L0_ENUM_ALIAS(_enum1, _enum2) \
    _enum1 = _enum2,

/************************************
 *  WO CFG Macro GET
 ************************************/
#elif __WO_CFG_ACTION__ == 6

#define WO_CFG_L0_TYPE_DCL(_obj0, _type, _enum, _name, _cfg_dflt, _nv_dflt, _desc) \
    case _enum: { \
        ret = kal_snprintf(value, size, "%d", (__WO_CFG_PTR__)->_name); \
        break; \
    }

#define WO_CFG_L0_TYPE_ARRAY(_obj0, _type, _enum, _name, _size, _cfg_dflt, _nv_dflt, _desc) \
    case _enum: { \
        ret = kal_snprintf(value, size, "%s", (kal_char *)(__WO_CFG_PTR__)->_name); \
        break; \
    }

/************************************
 *  WO CFG Macro SET
 ************************************/
#elif __WO_CFG_ACTION__ == 7

#define WO_CFG_L0_TYPE_DCL(_obj0, _type, _enum, _name, _cfg_dflt, _nv_dflt, _desc) \
    case _enum: { \
        (__WO_CFG_PTR__)->_name = (_type)atol(value); \
        break; \
    }

#define WO_CFG_L0_TYPE_ARRAY(_obj0, _type, _enum, _name, _size, _cfg_dflt, _nv_dflt, _desc) \
    case _enum: { \
        kal_snprintf((kal_char *)(__WO_CFG_PTR__)->_name, _size, "%s", value); \
        break; \
    }

/************************************
 *  WO CFG Macro COMPARE with default
 ************************************/
#elif __WO_CFG_ACTION__ == 8

#define WO_CFG_L0_TYPE_DCL(_obj0, _type, _enum, _name, _cfg_dflt, _nv_dflt, _desc) \
    case _enum: { \
        ret = ((__WO_CFG_PTR__)->_name == _cfg_dflt); \
        break; \
    }

#define WO_CFG_L0_TYPE_ARRAY(_obj0, _type, _enum, _name, _size, _cfg_dflt, _nv_dflt, _desc) \
    case _enum: { \
        ret = streq((kal_char *)(__WO_CFG_PTR__)->_name, _cfg_dflt); \
        break; \
    }

/************************************
 *  WO CFG Macro fill description
 ************************************/
#elif __WO_CFG_ACTION__ == 9

#define WO_CFG_L0_TYPE_DCL(_obj0, _type, _enum, _name, _cfg_dflt, _nv_dflt, _desc) \
    _name: _desc

#define WO_CFG_L0_TYPE_ARRAY(_obj0, _type, _enum, _name, _size, _cfg_dflt, _nv_dflt, _desc) \
    _name: _desc


#endif

/* If macro not used, define as empty */
#ifndef WO_CFG_L0_TYPE_START
#define WO_CFG_L0_TYPE_START(...)
#endif
#ifndef WO_CFG_L0_TYPE_DCL
#define WO_CFG_L0_TYPE_DCL(...)
#endif
#ifndef WO_CFG_L0_TYPE_ARRAY
#define WO_CFG_L0_TYPE_ARRAY(...)
#endif
#ifndef WO_CFG_L0_TYPE_END
#define WO_CFG_L0_TYPE_END(...)
#endif
#ifndef WO_CFG_L0_ENUM_ALIAS
#define WO_CFG_L0_ENUM_ALIAS(...)
#endif

/*
 * WO Configs
 */

/* CONFIG_START */
WO_CFG_L0_TYPE_START(wo_cfg, "WO related configuration";)
WO_CFG_L0_TYPE_ARRAY(wo_cfg, kal_uint8, WO_CFG_EPDG_FQDN,                   epdg_fqdn,            256,            "",  UNDEF_CONFIG_8, "Indicate the FQDN or IP of ePDG server (String format and ',' is delimiter)" {};)
WO_CFG_L0_ENUM_ALIAS(WO_CFG_START, WO_CFG_EPDG_FQDN)
WO_CFG_L0_TYPE_ARRAY(wo_cfg, kal_uint8, WO_CFG_IKE_INTERFACE,               ikev2if,               16,       "wlan0",  UNDEF_CONFIG_8, "@INTERNAL_USE@ Indicate Wi-Fi interface name for IKEv2 used (String format)" {};)
WO_CFG_L0_TYPE_ARRAY(wo_cfg, kal_uint8, WO_CFG_SELECT_INFO,                 select_info,          256,            "",  UNDEF_CONFIG_8, "The PLMN list which is support ePDG service and the corresponding type to construct the ePDG FQDN (String format)" {};)
WO_CFG_L0_TYPE_ARRAY(wo_cfg, kal_uint8, WO_CFG_EPDG_IDENTIFIER,             epdg_identifier,      256,            "",  UNDEF_CONFIG_8, "The identifier list of Home-PLMN ePDG (String format and ',' is delimiter)" {};)
WO_CFG_L0_TYPE_ARRAY(wo_cfg, kal_uint8, WO_CFG_RETRY_VECTOR,                retry_vector,         256,            "",  UNDEF_CONFIG_8, "The string vector including error code range and retry timer value used for data retry (String format)" {};)
WO_CFG_L0_TYPE_ARRAY(wo_cfg, kal_uint8, WO_CFG_IKE_ALGO,                    ike_algo,             256,            "",  UNDEF_CONFIG_8, "Specify the IKE algorithms types that are used by the UE (String format)" {};)
WO_CFG_L0_TYPE_ARRAY(wo_cfg, kal_uint8, WO_CFG_ESP_ALGO,                    esp_algo,             256,            "",  UNDEF_CONFIG_8, "Specify the ESP algorithms types that are used by the UE (String format)" {};)
WO_CFG_L0_ENUM_ALIAS(WO_CFG_STR_TYPE_END, WO_CFG_ESP_ALGO)
WO_CFG_L0_TYPE_DCL(wo_cfg, kal_uint32,  WO_CFG_IKE_REKEY_TIMER,             ike_rekey_timer,                   81000,  UNDEF_CONFIG_32, "Lifetime (in seconds) of an IKE SA. UE should do IKEv2 rekey procedure before the lifetime of the IKE SA" {};)
WO_CFG_L0_TYPE_DCL(wo_cfg, kal_uint32,  WO_CFG_ESP_REKEY_TIMER,             esp_rekey_timer,                   81000,  UNDEF_CONFIG_32, "Lifetime (in seconds) of an ESP SA. UE should do ESP rekey procedure before the lifetime of the ESP SA" {};)
WO_CFG_L0_TYPE_DCL(wo_cfg, kal_uint32,  WO_CFG_REKEY_MARGIN,                rekey_margin,                      32400,  UNDEF_CONFIG_32, "Time (in seconds) before the rekeying should start. Before the key of IKE/ESP SA was expired, IKEv2/ESP should start the rekey job. The rekey timing should be between (lifetime - margin) to (lifetime)." {};)
WO_CFG_L0_TYPE_DCL(wo_cfg, kal_uint32,  WO_CFG_DPD_TIMER,                   dpd_timer,                           120,  UNDEF_CONFIG_32, "Time period in seconds after which the UE shall perform the DPD" {};)
WO_CFG_L0_TYPE_DCL(wo_cfg, kal_uint32,  WO_CFG_KEEP_ALIVE_TIMER,            keep_timer,                           20,  UNDEF_CONFIG_32, "Time in seconds after which the UE shall send NATT keep-alive messages" {};)
WO_CFG_L0_TYPE_DCL(wo_cfg, kal_uint32,  WO_CFG_TUNNEL_SETUP_TIMER,          esp_setup_time,                       15,  UNDEF_CONFIG_32, "Maximum time in seconds for 1 tunnel setup; set to 0 will be auto-generated by retransmission timeout" {};)
WO_CFG_L0_TYPE_DCL(wo_cfg, kal_uint32,  WO_CFG_PDN_SETUP_TIMER,             pdn_setup_time,                      295,  UNDEF_CONFIG_32, "@INTERNAL_USE@ Maximum time in seconds for 1 initial attach or handover request" {};)
WO_CFG_L0_TYPE_DCL(wo_cfg, kal_uint8,   WO_CFG_CERT_REQ,                    cert_used,                             1,  UNDEF_CONFIG_8, "" {
            cert_used: 8 "Used to determine if certificates are used to authenticate the ePDG server during tunnel establishment procedures" {
                0: "Disable";
                1: "Enable";
            };
        };)
WO_CFG_L0_TYPE_DCL(wo_cfg, kal_uint8,   WO_CFG_CERT_HASHANDURL,             urlcert,                               0,  UNDEF_CONFIG_8, "" {
            urlcert: 8 "Support HTTP cert or not (Hash and URL of X.509)" {
                0: "Disable";
                1: "Enable";
            };
        };)
WO_CFG_L0_TYPE_DCL(wo_cfg, kal_uint8,   WO_CFG_CERT_OCSP,                   ocsp,                                  0,  UNDEF_CONFIG_8, "" {
            ocsp: 8 "Support OCSP in certificate" {
                0: "Disable";
                1: "Enable";
            };
        };)
WO_CFG_L0_TYPE_DCL(wo_cfg, kal_uint8,   WO_CFG_SERVER_NO_CERT,              nocert,                                1,  UNDEF_CONFIG_8, "" {
            nocert: 8 "UE did not expect certificate from ePDG" {
                0: "Disable";
                1: "Enable";
            };
        };)
WO_CFG_L0_TYPE_DCL(wo_cfg, kal_uint8,   WO_CFG_SKIP_CHECK_CERT,             skip_check_cert,                       0,  UNDEF_CONFIG_8, "" {
            skip_check_cert: 8 "Skip to check Certificate from ePDG even UE recevid certificate. When IODT/IOT, certificate may be not correct from ePDG. This option provide tester skip the certificate issue in test stage." {
                0: "Disable";
                1: "Enable";
            };
        };)
WO_CFG_L0_TYPE_DCL(wo_cfg, kal_uint8,   WO_CFG_SKIP_CHECK_ID,               noid,                                  1,  UNDEF_CONFIG_8, "" {
            noid: 8 "Skip to check IDr in Certificate from ePDG" {
                0: "Disable";
                1: "Enable";
            };
        };)
WO_CFG_L0_TYPE_DCL(wo_cfg, kal_uint8,   WO_CFG_FORCE_TSI_64,                force_tsi_64,                          1,  UNDEF_CONFIG_8, "" {
            force_tsi_64: 8 "Replace the value in TSi with the prefix_64bits internal IPv6 address  for IPv6 only, if tsi_full and tsi_64 all enabled, apply tsi_full first and then tsi_64" {
                0: "Disable";
                1: "Enable";
            };
        };)
WO_CFG_L0_TYPE_DCL(wo_cfg, kal_uint8,   WO_CFG_FORCE_TSI_FULL,              force_tsi_full,                        1,  UNDEF_CONFIG_8, "" {
            force_tsi_full: 8 "Replace the IP address in TSi with the whole IP address (full IPv6 address and IPv4 addresss)" {
                0: "Disable";
                1: "Enable";
            };
        };)
WO_CFG_L0_TYPE_DCL(wo_cfg, kal_uint8,   WO_CFG_USE_CFG_VIP,                 use_cfg_vip,                           0,  UNDEF_CONFIG_8, "" {
            use_cfg_vip: 8 "Install the address which in requested INTERNAL_IP*_ADDRESS configuration payload (not from responded one)" {
                0: "Disable";
                1: "Enable";
            };
        };)
WO_CFG_L0_TYPE_DCL(wo_cfg, kal_uint8,   WO_CFG_ADDR_CHANGE_REAUTH,          reauth_addr,                           0,  UNDEF_CONFIG_8, "" {
            reauth_addr: 8 "Do IKEv2 re-authentication when address changed" {
                0: "Disable";
                1: "Enable";
            };
        };)
WO_CFG_L0_TYPE_DCL(wo_cfg, kal_uint8,   WO_CFG_DPD_NO_REPLY,                dpd_no_reply,                          0,  UNDEF_CONFIG_8, "" {
            dpd_no_reply: 8 "Do not reply DPD requests from ePDG" {
                0: "Disable";
                1: "Enable";
            };
        };)
WO_CFG_L0_TYPE_DCL(wo_cfg, kal_uint8,   WO_CFG_PRE_POST_PING,               pre_post_ping,                         0,  UNDEF_CONFIG_8, "@INTERNAL_USE@" {
            pre_post_ping: 8 "ping ePDG before establishing PDN (This config is no use anymore)" {
                0: "Disable";
                1: "Enable";
            };
        };)
WO_CFG_L0_TYPE_DCL(wo_cfg, kal_uint8,   WO_CFG_LOG_LEVEL,                   log_level,                             1,  UNDEF_CONFIG_8, "" {
            log_level: 8 "Debugging log level" {
                0: "Level 0";
                1: "Level 1";
                2: "Level 2";
                3: "Level 3";
                4: "Level 4";
            };
        };)
WO_CFG_L0_TYPE_DCL(wo_cfg, kal_uint8,   WO_CFG_WIFI_DRIVER_KEEP_ALIVE,      wdrv_keep_alive,                       1,  UNDEF_CONFIG_8, "" {
            wdrv_keep_alive: 8 "Sent NAT Keep-alive packets by Wi-Fi driver, and AP can go to sleep (Depend on if Wi-Fi driver supports this feature or not)" {
                0: "Disable";
                1: "Enable";
            };
        };)
WO_CFG_L0_TYPE_DCL(wo_cfg, kal_uint8,   WO_CFG_IKE_FRAGMENTATION,           fragment,                              0,  UNDEF_CONFIG_8, "" {
            fragment: 8 "Support IKEv2 Fragmentation" {
                0: "Disable";
                1: "Enable";
            };
        };)
WO_CFG_L0_TYPE_DCL(wo_cfg, kal_uint8,   WO_CFG_MOBIKE,                      mobike,                                0,  UNDEF_CONFIG_8, "" {
            mobike: 8 "Support Mobike" {
                0: "Disable";
                1: "Enable";
            };
        };)
WO_CFG_L0_TYPE_DCL(wo_cfg, kal_uint32,  WO_CFG_OUT_OF_SERVICE_TIMER,        oos,                                   7,  UNDEF_CONFIG_32, "Maximum time in seconds for WiFi out-of-service (OOS) timer to keep PDNs existed" {};)
WO_CFG_L0_TYPE_DCL(wo_cfg, kal_uint32,  WO_CFG_IKE_RETRAN_TO,               retrans_to,                            2,  UNDEF_CONFIG_32, "Retransmission timeout in seconds for IKEv2 packet" {};)
WO_CFG_L0_TYPE_DCL(wo_cfg, kal_uint8,   WO_CFG_IKE_RETRAN_TRIES,            retrans_tries,                         4,  UNDEF_CONFIG_8, "Maximum number of times a UE shall retransmit an IKEv2 packet if it does not receive a response" {};)
WO_CFG_L0_TYPE_DCL(wo_cfg, kal_uint8,   WO_CFG_IKE_RETRAN_BASE,             retrans_base,                          1,  UNDEF_CONFIG_8, "Base to use for IKEv2 calculating exponential back off" {};)
WO_CFG_L0_TYPE_DCL(wo_cfg, kal_uint16,  WO_CFG_TUNNEL_MTU,                  mtu,                                1280,  UNDEF_CONFIG_16, "MTU size (byte) of the ESP tunnel" {};)
WO_CFG_L0_TYPE_DCL(wo_cfg, kal_uint16,  WO_CFG_TUNNEL_MSS4_OFFSET,          mss4_off,                             68,  UNDEF_CONFIG_16, "TCP Maximum Segment Size offset (byte) of IPv4 for the ESP tunnel" {};)
WO_CFG_L0_TYPE_DCL(wo_cfg, kal_uint16,  WO_CFG_TUNNEL_MSS6_OFFSET,          mss6_off,                             88,  UNDEF_CONFIG_16, "TCP Maximum Segment Size offset (byte) of IPv6 for the ESP tunnel" {};)
WO_CFG_L0_TYPE_DCL(wo_cfg, kal_uint16,  WO_CFG_CUST_PCSCF_IP4_CP,           cust_pcscf_4,                         20,  UNDEF_CONFIG_16, "Configuration Payload Attribute Type value for P_CSCF_IP4_ADDRESS" {};)
WO_CFG_L0_TYPE_DCL(wo_cfg, kal_uint16,  WO_CFG_CUST_PCSCF_IP6_CP,           cust_pcscf_6,                         21,  UNDEF_CONFIG_16, "Configuration Payload Attribute Type value for P_CSCF_IP6_ADDRESS" {};)
WO_CFG_L0_TYPE_DCL(wo_cfg, kal_uint16,  WO_CFG_CUST_IMEI_CP,                cust_imei_cp,                          0,  UNDEF_CONFIG_16, "Configuration Payload Attribute Type value for IMEI" {};)
WO_CFG_L0_TYPE_DCL(wo_cfg, kal_uint16,  WO_CFG_IKE_PORT,                    port,                              10500,  UNDEF_CONFIG_16, "@INTERNAL_USE@ UDP port number of IKEv2" {};)
WO_CFG_L0_TYPE_DCL(wo_cfg, kal_uint16,  WO_CFG_IKE_PORT_NATT,               port_natt,                         14500,  UNDEF_CONFIG_16, "@INTERNAL_USE@ UDP port number of IKEv2 NAT-T" {};)
WO_CFG_L0_TYPE_DCL(wo_cfg, kal_uint16,  WO_CFG_IKE_CPA_NM_NUM,              cpa_nm,                                0,  UNDEF_CONFIG_16, "Number of INTERNAL_IP4_NETMASK configuration payloads will be added in IKE_AUTH" {};)
WO_CFG_L0_TYPE_DCL(wo_cfg, kal_uint16,  WO_CFG_IKE_CPA_DNS4_NUM,            cpa_dns4,                              1,  UNDEF_CONFIG_16, "Number of INTERNAL_IP4_DNS configuration payloads will be added in IKE_AUTH" {};)
WO_CFG_L0_TYPE_DCL(wo_cfg, kal_uint16,  WO_CFG_IKE_CPA_DNS6_NUM,            cpa_dns6,                              1,  UNDEF_CONFIG_16, "Number of INTERNAL_IP6_DNS configuration payloads will be added in IKE_AUTH" {};)
WO_CFG_L0_TYPE_DCL(wo_cfg, kal_uint8,   WO_CFG_IKE_NO_INIT_CONTACT,         no_ic,                                 0,  UNDEF_CONFIG_8, "" {
            no_ic: 8 "Don't add INIT_CONTACT notify payload in IKEv2 request" {
                0: "Disable";
                1: "Enable";
            };
        };)
WO_CFG_L0_TYPE_DCL(wo_cfg, kal_uint8,   WO_CFG_IKE_NO_EAPONLY,              no_eap,                                0,  UNDEF_CONFIG_8, "" {
            no_eap: 8 "Don't add EAPONLY notify payload in IKEv2 request" {
                0: "Disable";
                1: "Enable";
            };
        };)
WO_CFG_L0_TYPE_DCL(wo_cfg, kal_uint8,   WO_CFG_IKE_DSCP,                    ike_dscp,                              0,  UNDEF_CONFIG_8, "DSCP(Differentiated Services Code Point) value for outgoing IKEv2 packets sent from this connection. The value is a 6-bits decimal (0~63)." {};)
WO_CFG_L0_TYPE_DCL(wo_cfg, kal_uint8,   WO_CFG_IKE_IDI,                     IDi,                     IDI_RFC822_ADDR,  UNDEF_CONFIG_8, "" {
            IDi: 8 "Specify the format of the IDi that should be used in the IKEv2 authentication message(s)" {
                0: "ID_RFC822_ADDR is the 3GPP standard IDi format.";
                1: "ID_RFC822_ADDR_MAC is the IDi and EAP Auth ID both using ID_RFC822_ADDR-based format with inclusion of the WiFi MAC";
                2: "ID_RFC822_ADDR_MAC_EAP_NO_MAC is the IDi using ID_RFC822_ADDR_MAC-based format, but EAP Auth ID using ID_RFC822_ADDR-based format.";
            };
        };)
WO_CFG_L0_TYPE_DCL(wo_cfg, kal_uint8,   WO_CFG_IKE_IDR,                     IDr,                            IDR_FQDN,  UNDEF_CONFIG_8, "" {
            IDr: 8 "Specify the format of the IDr that should be used in the IKEv2 authentication message(s)" {
                0: "ID_FQDN";
                1: "ID_KEY_ID";
            };
        };)
WO_CFG_L0_TYPE_DCL(wo_cfg, kal_uint8,   WO_CFG_LEFT_AUTH_TYPE,              leftauth,                       AUTH_EAP,  UNDEF_CONFIG_8, "" {
            leftauth: 8 "The IKEv2 authentication method" {
                0: "AUTH_EAP";
                1: "AUTH_PSK";
                2: "AUTH_PUBKEY";
            };
        };)
WO_CFG_L0_TYPE_DCL(wo_cfg, kal_uint8,   WO_CFG_EAP_TYPE,                    eap,                             EAP_AKA,  UNDEF_CONFIG_8, "" {
            eap: 8 "The EAP algorithm in Authentication" {
                0: "EAP-AKA";
                1: "EAP-SIM";
                2: "EAP-AKA'";
            };
        };)
WO_CFG_L0_TYPE_DCL(wo_cfg, kal_uint8,   WO_CFG_FAST_REAUTH,                 fastreauth,                            0,  UNDEF_CONFIG_8, "@INTERNAL_USE@" {
            fastreauth: 8 "Support fast re-authentication" {
                0: "Disable";
                1: "Enable";
            };
        };)
WO_CFG_L0_TYPE_DCL(wo_cfg, kal_uint32,  WO_CFG_DNS_QUERY_TIMER,             dns_timer,                             0,  UNDEF_CONFIG_32, "Maximum time in seconds. DNS query will not be performed before timeout. The timer only starts when UE fails to connect to ePDG." {};)
WO_CFG_L0_TYPE_DCL(wo_cfg, kal_uint8,   WO_CFG_DNS_TYPE,                    dns_type,                  DNS_ADDR_V6V4,  UNDEF_CONFIG_8, "" {
            dns_type: 8 "Choose the preference of address type got from DNS" {
                0: "DNS_ADDR_V4";
                1: "DNS_ADDR_V6";
                2: "DNS_ADDR_V4V6";
                3: "DNS_ADDR_V6V4";
            };
        };)
WO_CFG_L0_TYPE_DCL(wo_cfg, kal_uint8,   WO_CFG_DNS_MAX_COUNT,               dns_max_count,                       254,  UNDEF_CONFIG_8, "Maximum number for DNS results" {};)
WO_CFG_L0_TYPE_DCL(wo_cfg, kal_uint8,   WO_CFG_DNS_CACHE,                   dns_cache,                             1,  UNDEF_CONFIG_8, "" {
            dns_cache: 8 "Cache the DNS result for last connected ePDG server" {
                0: "Disable";
                1: "Enable";
            };
        };)
WO_CFG_L0_TYPE_DCL(wo_cfg, kal_uint8,   WO_CFG_REDIRECT,                    redirect,                              0,  UNDEF_CONFIG_8, "@INTERNAL_USE@" {
            redirect: 8 "Support IKEv2 redirect feature" {
                0: "Disable";
                1: "Enable";
            };
        };)
WO_CFG_L0_TYPE_DCL(wo_cfg, kal_uint16,  WO_CFG_MAX_REDIRECTS,               max_redirects,                         5,  UNDEF_CONFIG_16, "@INTERNAL_USE@ Maximum redirect times for IKEv2 redirect" {};)
WO_CFG_L0_TYPE_DCL(wo_cfg, kal_uint16,  WO_CFG_REDIRECT_LOOP_DETECT,        redirect_loop_detect,                300,  UNDEF_CONFIG_16, "@INTERNAL_USE@ Time in seconds to detect the IKEv2 redirect loop" {};)
WO_CFG_L0_TYPE_DCL(wo_cfg, kal_uint16,  WO_CFG_DETACH_SOFT_TIMER,           detach_soft_timer,                     3,  UNDEF_CONFIG_16, "Time in seconds after which the UE shall reply detach resposne" {};)
WO_CFG_L0_TYPE_DCL(wo_cfg, kal_uint16,  WO_CFG_DETACH_HARD_TIMER,           detach_hard_timer,                   300,  UNDEF_CONFIG_16, "Time in seconds after which the UE shall stop detaching and local cleanup" {};)
WO_CFG_L0_TYPE_DCL(wo_cfg, kal_uint32,  WO_CFG_FORCE_DPD_RETRAN_TO,         fdpd_retrans_to,                       1,  UNDEF_CONFIG_32, "Retransmission timeout in seconds for force DPD" {};)
WO_CFG_L0_TYPE_DCL(wo_cfg, kal_uint8,   WO_CFG_FORCE_DPD_RETRAN_TRIES,      fdpd_retrans_tries,                    2,  UNDEF_CONFIG_8, "Maximum number of times a UE shall retransmit a force DPD packet if it does not receive a response" {};)
WO_CFG_L0_TYPE_DCL(wo_cfg, kal_uint8,   WO_CFG_FORCE_DPD_RETRAN_BASE,       fdpd_retrans_base,                     1,  UNDEF_CONFIG_8, "Base to use for force DPD calculating exponential back off" {};)
WO_CFG_L0_TYPE_DCL(wo_cfg, kal_uint8,   WO_CFG_CERTREQ_CRITICAL,            certreq_critical,                      0,  UNDEF_CONFIG_8, "" {
            certreq_critical: 8 "Mark CERTREQ_CRITICAL bit in IKEv2 request" {
                0: "Disable";
                1: "Enable";
            };
        };)
WO_CFG_L0_TYPE_DCL(wo_cfg, kal_uint8,   WO_CFG_PCSCF_RESTORE,               pcscf_restore,                         0,  UNDEF_CONFIG_8, "" {
            pcscf_restore: 8 "Add PCSCF_RESTORE notify payload in IKEv2 request" {
                0: "Disable";
                1: "Enable";
            };
        };)
WO_CFG_L0_TYPE_DCL(wo_cfg, kal_uint8,   WO_CFG_LIVENESS_CHECK,              liveness_check,                        0,  UNDEF_CONFIG_8, "" {
            liveness_check: 8 "Add LIVENESS_CHECK configuration payload in IKEv2 request" {
                0: "Disable";
                1: "Enable";
            };
        };)
WO_CFG_L0_TYPE_DCL(wo_cfg, kal_uint8,   WO_CFG_DEVICE_IDENTITY,             device_identity,                       0,  UNDEF_CONFIG_8, "" {
            device_identity: 8 "Add DEVICE_IDENTITY notify payload in IKEv2 request" {
                0: "Disable";
                1: "Enable";
            };
        };)
WO_CFG_L0_TYPE_DCL(wo_cfg, kal_uint8,   WO_CFG_ABORT_BLOCKING_MODE,         abort_mode,                            0,  UNDEF_CONFIG_8, "" {
            abort_mode: 8 "Abort mode of IKEv2 setup: Disable - delete IKEv2 SA when setup on-going; Enable - delete IKEv2 SA after setup completed" {
                0: "Disable";
                1: "Enable";
            };
        };)
WO_CFG_L0_TYPE_DCL(wo_cfg, kal_uint8,   WO_CFG_HO_IP_DISCONTINUITY,         ho_ip_disc,                            0,  UNDEF_CONFIG_8, "" {
            ho_ip_disc: 8 "Allow LTE to Wi-Fi Handover IP discontinuity" {
                0: "Disable";
                1: "Enable";
            };
        };)
WO_CFG_L0_TYPE_DCL(wo_cfg, kal_uint8,   WO_CFG_EMERGENCY_EPDG,              emerg_epdg,       EMERG_EPDG_SELECT_NONE,  UNDEF_CONFIG_8, "" {
            emerg_epdg: 8 "Support Emergency EPDG selection" {
                0: "EMERG_EPDG_SELECT_NONE";
                1: "EMERG_EPDG_SELECT";
            };
        };)
WO_CFG_L0_TYPE_DCL(wo_cfg, kal_uint8,   WO_CFG_TRY_EPDG_POLICY,             try_epdg_policy,         TRY_ALL_EPDG_IP,  UNDEF_CONFIG_8, "" {
            try_epdg_policy: 8 "Choose the policy of trying ePDG's IP on each PDN setup" {
                0: "TRY_ALL_EPDG_IP";
                1: "TRY_ONE_EPDG_IP";
            };
        };)
WO_CFG_L0_TYPE_DCL(wo_cfg, kal_uint8,   WO_CFG_IMEI_FORMAT,                 imei_format,                    IMEI_BCD,  UNDEF_CONFIG_8, "" {
            imei_format: 8 "Choose preferred format for IMEI in IKEv2 Configuration Payload" {
                0: "IMEI_BCD";
                1: "IMEI_STRING";
            };
        };)
WO_CFG_L0_TYPE_DCL(wo_cfg, kal_uint8,   WO_CFG_LEAVE_STANDBY_DPD,           leave_standby_dpd,                     0,  UNDEF_CONFIG_8, "" {
            leave_standby_dpd: 8 "Perform DPD after leaving standby mode" {
                0: "Disable";
                1: "Enable";
            };
        };)
WO_CFG_L0_TYPE_DCL(wo_cfg, kal_uint8,   WO_ST_SEND_DEL_IKE_AUTH_NTFY_ERR,   send_del_ike_auth_ntfy_err,            0,  UNDEF_CONFIG_8, "" {
            send_del_ike_auth_ntfy_err: 8 "Send delete IKEv2 SA after specific notify error" {
                0: "Disable";
                1: "Enable";
            };
        };)
WO_CFG_L0_TYPE_END(wo_cfg)
/* CONFIG_END */
