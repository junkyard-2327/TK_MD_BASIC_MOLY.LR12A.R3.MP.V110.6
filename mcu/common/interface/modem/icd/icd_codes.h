// ICD Codes Header

#ifndef _ICD_CODES_H
#define _ICD_CODES_H

#ifndef kal_uint8
  typedef unsigned char           kal_uint8;
#endif
#ifndef kal_int8
  typedef signed char             kal_int8;
#endif
#ifndef kal_uint16
  typedef unsigned short int      kal_uint16;
#endif
#ifndef kal_uint16
  typedef signed short int        kal_int16;
#endif
#ifndef kal_uint32
  typedef unsigned int            kal_uint32;
#endif
#ifndef kal_int32
  typedef signed int              kal_int32;
#endif
#ifndef kal_uint64
  typedef unsigned long long      kal_uint64;
#endif
#ifndef kal_int64
  typedef signed long long        kal_int64;
#endif

#define FLEXIBLE_ARRAY_SIZE     1

#define ICD_EVENT_BASE_ID       (ICD_LTE_EVENT_START_CODE)
#define ICD_EVENT_MAX_ID        (ICD_LTE_EVENT_END_CODE)
#define ICD_RECORD_BASE_ID      (ICD_LTE_RECORD_START_CODE)
#define ICD_RECORD_MAX_ID       (ICD_LTE_RECORD_END_CODE)

#define ICD_LTE_RECORD_START_CODE   0x7000
#define ICD_LTE_RECORD_END_CODE     0x7180
#define ICD_LTE_EVENT_START_CODE    29952
#define ICD_LTE_EVENT_END_CODE      30465

#define ICD_CM_NUMBER_OF_EVENTS     2

#define ICD_EL1_NUMBER_OF_RECORDS       25
#define ICD_EL1_NUMBER_OF_EVENTS    3

#define ICD_EL2_NUMBER_OF_RECORDS       18
#define ICD_EL2_NUMBER_OF_EVENTS    11

#define ICD_ENAS_NUMBER_OF_RECORDS      1
#define ICD_ENAS_NUMBER_OF_EVENTS       10

#define ICD_ERRC_NUMBER_OF_RECORDS      9
#define ICD_ERRC_NUMBER_OF_EVENTS       16

// Layer: CM, Type: EVENT
#define ICD_CM_PLMN_SEARCH_INFO     0x7701
#define ICD_CM_SYSTEM_SERVICE_INFO      0x7700

// Layer: EL1, Type: RECORD
#define ICD_EL1_DCI_INFORMATION     0x700A
#define ICD_EL1_LTE_CELL_TIME       0x7000
#define ICD_EL1_MIMO_PDSCH_THROUGHPUT0      0x7007
#define ICD_EL1_MIMO_PDSCH_THROUGHPUT1      0x7008
#define ICD_EL1_NEIGHBOR_CELL_MEASUREMENT       0x7002
#define ICD_EL1_PBCH_DECODINGRESULTS    0x700C
#define ICD_EL1_PCFICH_DECODINGRESULTS      0x700E
#define ICD_EL1_PDCCH_DECODINGRESULTS       0x700F
#define ICD_EL1_PDSCH_DECODINGRESULTS       0x700D
#define ICD_EL1_PHICH_DECODINGRESULTS       0x7010
#define ICD_EL1_PHYSICAL_CONFIGURATION      0x7018
#define ICD_EL1_PMCH_DECODINGRESULTS    0x700B
#define ICD_EL1_PSS_INFORMATION     0x7004
#define ICD_EL1_PUCCH_CSF       0x7013
#define ICD_EL1_PUCCH_POWER_CONTROL     0x7012
#define ICD_EL1_PUCCH_REPORT    0x7011
#define ICD_EL1_PUSCH_CSF       0x7016
#define ICD_EL1_PUSCH_POWER_CONTROL     0x7015
#define ICD_EL1_PUSCH_REPORT    0x7014
#define ICD_EL1_RACH_INFORMATION    0x7006
#define ICD_EL1_SERVING_CELL_MEASUREMENT    0x7001
#define ICD_EL1_SRS_TX_INFORMATION      0x7009
#define ICD_EL1_SSS_INFORMATION     0x7005
#define ICD_EL1_TAS_INFORMATION     0x7017
#define ICD_EL1_UL_THROUGHPUT       0x7003

// Layer: EL1, Type: EVENT
#define ICD_EL1_PAGING_DRX_EVENT    0x7501
#define ICD_EL1_RADIO_LINK_MONITORING       0x7502
#define ICD_EL1_TXPOWER_HEADROOM_EVENT      0x7500

// Layer: EL2, Type: RECORD
#define ICD_EL2_IP_THROUGHPUT_DL    0x7090
#define ICD_EL2_IP_THROUGHPUT_UL    0x7091
#define ICD_EL2_MAC_DL_TRANSPORT_BLOCK      0x7083
#define ICD_EL2_MAC_RACH_LATENCY    0x7082
#define ICD_EL2_MAC_THROUGHPUT_DL       0x7080
#define ICD_EL2_MAC_THROUGHPUT_UL       0x7081
#define ICD_EL2_MAC_UL_TRANSPORT_BLOCK      0x7084
#define ICD_EL2_MAC_UL_TX_STATISTICS    0x7085
#define ICD_EL2_PDCP_DL_STATS       0x708D
#define ICD_EL2_PDCP_OTA_MESSAGE    0x708F
#define ICD_EL2_PDCP_THROUGHPUT_DL      0x708B
#define ICD_EL2_PDCP_THROUGHPUT_UL      0x708C
#define ICD_EL2_PDCP_UL_STATS       0x708E
#define ICD_EL2_RLC_DL_STATS    0x7088
#define ICD_EL2_RLC_OTA_MESSAGES    0x7089
#define ICD_EL2_RLC_THROUGHPUT_DL       0x7086
#define ICD_EL2_RLC_THROUGHPUT_UL       0x7087
#define ICD_EL2_RLC_UL_STATS    0x708A

// Layer: EL2, Type: EVENT
#define ICD_EL2_EMBMS_MTCH_REPORT_EVENT     0x758A
#define ICD_EL2_MAC_BSR_AND_SR_EVENT    0x7589
#define ICD_EL2_MAC_CONFIGURATION_EVENT     0x7584
#define ICD_EL2_MAC_RACH_ATTEMPT_EVENT      0x7581
#define ICD_EL2_MAC_RACH_ATTEMPT_REASON_EVENT       0x7582
#define ICD_EL2_MAC_RACH_CONFIGURATION_EVENT    0x7585
#define ICD_EL2_MAC_RESET_EVENT     0x7583
#define ICD_EL2_MAC_SR_PERIOD_CHANGE_EVENT      0x7580
#define ICD_EL2_MAC_TIMER_STATUS_EVENT      0x7587
#define ICD_EL2_MAC_TIMING_ADVANCE_EVENT    0x7588
#define ICD_EL2_MAC_UL_CONFIGURATION_EVENT      0x7586

// Layer: ENAS, Type: RECORD
#define ICD_ENAS_OTA_MESSAGE    0x7180

// Layer: ENAS, Type: EVENT
#define ICD_ENAS_EMM_FAILURE_EVENT_CAUSE    0x7689
#define ICD_ENAS_EMM_OTA_EVENT      0x7686
#define ICD_ENAS_EMM_STATE_VALUE    0x7685
#define ICD_ENAS_EMM_TIMER_EXPIRY_EVENT     0x7688
#define ICD_ENAS_EMM_TIMER_START_EVENT      0x7687
#define ICD_ENAS_ESM_CONTEXT_INFO       0x7680
#define ICD_ENAS_ESM_FAILURE_EVENT_CAUSE    0x7684
#define ICD_ENAS_ESM_OTA_EVENT      0x7681
#define ICD_ENAS_ESM_TIMER_EXPIRY_EVENT     0x7683
#define ICD_ENAS_ESM_TIMER_START_EVENT      0x7682

// Layer: ERRC, Type: RECORD
#define ICD_ERRC_CA_CONFIG_INFO     0x7105
#define ICD_ERRC_EMBMS_OOS_INFO     0x7103
#define ICD_ERRC_IR_C2K_MEAS_REPORT_INFO    0x7108
#define ICD_ERRC_IR_GERAN_MEAS_REPORT_INFO      0x7107
#define ICD_ERRC_IR_UTRAN_MEAS_REPORT_INFO      0x7106
#define ICD_ERRC_MEAS_REPORT_INFO       0x7101
#define ICD_ERRC_OTA_MESSAGE_INFO       0x7102
#define ICD_ERRC_SERVING_CELL_INFO      0x7100
#define ICD_ERRC_SIB_READ_INFO      0x7104

// Layer: ERRC, Type: EVENT
#define ICD_ERRC_CELL_BLACK_LIST_EVENT      0x7605
#define ICD_ERRC_INTERRAT_CELL_CHANGE_ORDER_EVENT       0x760D
#define ICD_ERRC_INTERRAT_HANDOVER_EVENT    0x760A
#define ICD_ERRC_INTERRAT_REDIRECTION_EVENT     0x760C
#define ICD_ERRC_INTERRAT_RESELECTION_EVENT     0x760B
#define ICD_ERRC_INTRARAT_HANDOVER_EVENT    0x7607
#define ICD_ERRC_INTRARAT_REDIRECTION_EVENT     0x7609
#define ICD_ERRC_INTRARAT_RESELECTION_EVENT     0x7608
#define ICD_ERRC_MBMS_CONFIG_INFO_EVENT     0x760F
#define ICD_ERRC_NEW_CELL_EVENT     0x7601
#define ICD_ERRC_OOS_EVENT      0x7603
#define ICD_ERRC_RLF_EVENT      0x7600
#define ICD_ERRC_SIB_READ_FAILURE_EVENT     0x7604
#define ICD_ERRC_SRVCC_BSIC_INFO_EVENT      0x760E
#define ICD_ERRC_STATE_CHANGE_EVENT     0x7602
#define ICD_ERRC_TIMER_STATUS_EVENT     0x7606

#endif /* _ICD_CODES_H */

