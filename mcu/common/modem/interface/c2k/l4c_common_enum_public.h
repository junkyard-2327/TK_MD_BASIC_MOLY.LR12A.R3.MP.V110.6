#ifndef _L4C_COMMON_PUBLIC_ENUM_H
#define _L4C_COMMON_PUBLIC_ENUM_H

#define NUM_TX_POWER_LEVELS            (5)		// refer to Android RIL_NUM_TX_POWER_LEVELS

// for IPv6 and IPv4v6
typedef enum
{
   TCM_ACTIVATE_PDP_WITH_IPV6_DNS_REQUEST = 0,
   TCM_ACTIVATE_PDP_WITHOUT_IPV6_DNS_REQUEST = 1
}l4c_tcm_activate_pdp_request_ipv6_dns_enum;

// for IPv4 DNS address request
typedef enum
{
   TCM_ACTIVATE_PDP_WITHOUT_IPV4_DNS_REQUEST = 0,
   TCM_ACTIVATE_PDP_WITH_IPV4_DNS_REQUEST = 1
}l4c_tcm_activate_pdp_request_ipv4_dns_enum ;


// PCO: for IPv4 MTU request
typedef enum
{
   LTE_C2K_ACTIVATE_PDP_WITHOUT_IPV4_MTU_REQUEST = 0,
   LTE_C2K_ACTIVATE_PDP_WITH_IPV4_MTU_REQUEST = 1
}lte_c2k_activate_pdp_request_ipv4_mtu_enum;



#endif // _L4C_COMMON_PUBLIC_ENUM_H
