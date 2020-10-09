// ICD Codes Cgen Header

#ifndef _ICD_CODES_CGEN_H
#define _ICD_CODES_CGEN_H

enum icd_protocol_type_enum
{
	ICD_LTE_EVENT,
	ICD_LTE_RECORD
};

/* ELT */
typedef enum {
	/* ICD MAX / Min Code for CGEN */
	ICD_LTE_RECORD_START_CODE = 0x7000,
	ICD_LTE_RECORD_END_CODE = 0x7180,
	ICD_LTE_EVENT_START_CODE = 0x7500,
	ICD_LTE_EVENT_END_CODE = 0x7701,

	/* EL2 ICD code enumeration */
	EL2_MAC_Throughput_DL = 0x7080,
	EL2_MAC_Throughput_UL = 0x7081,
	EL2_MAC_RACH_Latency = 0x7082,
	EL2_MAC_DL_Transport_Block = 0x7083,
	EL2_MAC_UL_Transport_Block = 0x7084,
	EL2_MAC_UL_TX_Statistics = 0x7085,
	EL2_RLC_Throughput_DL = 0x7086,
	EL2_RLC_Throughput_UL = 0x7087,
	EL2_RLC_DL_Stats = 0x7088,
	EL2_RLC_OTA_Messages = 0x7089,
	EL2_RLC_UL_Stats = 0x708A,
	EL2_PDCP_Throughput_DL = 0x708B,
	EL2_PDCP_Throughput_UL = 0x708C,
	EL2_PDCP_DL_Stats = 0x708D,
	EL2_PDCP_UL_Stats = 0x708E,
	EL2_PDCP_OTA_Message = 0x708F,
	EL2_IP_Throughput_DL = 0x7090,
	EL2_IP_Throughput_UL = 0x7091,
	EL2_MAC_SR_Period_Change_Event = 0x7580,
	EL2_MAC_RACH_Attempt_Event = 0x7581,
	EL2_MAC_RACH_Attempt_Reason_Event = 0x7582,
	EL2_MAC_Reset_Event = 0x7583,
	EL2_MAC_Configuration_Event = 0x7584,
	EL2_MAC_Rach_Configuration_Event = 0x7585,
	EL2_MAC_UL_Configuration_Event = 0x7586,
	EL2_MAC_Timer_Status_Event = 0x7587,
	EL2_MAC_Timing_Advance_Event = 0x7588,
	EL2_MAC_BSR_And_SR_Event = 0x7589,
	EL2_EMBMS_MTCH_Report_Event = 0x758A,

	/* ENAS ICD code enumeration */
	ENAS_OTA_Message = 0x7180,
	ENAS_ESM_Context_Info = 0x7680,
	ENAS_ESM_OTA_Event = 0x7681,
	ENAS_ESM_Timer_Start_Event = 0x7682,
	ENAS_ESM_Timer_Expiry_Event = 0x7683,
	ENAS_ESM_Failure_Event_Cause = 0x7684,
	ENAS_EMM_State_Value = 0x7685,
	ENAS_EMM_OTA_Event = 0x7686,
	ENAS_EMM_Timer_Start_Event = 0x7687,
	ENAS_EMM_Timer_Expiry_Event = 0x7688,
	ENAS_EMM_Failure_Event_Cause = 0x7689,

	/* ERRC ICD code enumeration */
	ERRC_Serving_Cell_Info = 0x7100,
	ERRC_MEAS_Report_Info = 0x7101,
	ERRC_OTA_Message_Info = 0x7102,
	ERRC_EMBMS_OOS_Info = 0x7103,
	ERRC_SIB_Read_Info = 0x7104,
	ERRC_CA_Config_Info = 0x7105,
	ERRC_IR_UTRAN_MEAS_Report_Info = 0x7106,
	ERRC_IR_GERAN_MEAS_Report_Info = 0x7107,
	ERRC_IR_C2K_MEAS_Report_Info = 0x7108,
	ERRC_RLF_Event = 0x7600,
	ERRC_New_Cell_Event = 0x7601,
	ERRC_State_Change_Event = 0x7602,
	ERRC_OOS_Event = 0x7603,
	ERRC_SIB_Read_Failure_Event = 0x7604,
	ERRC_Cell_Black_List_Event = 0x7605,
	ERRC_Timer_Status_Event = 0x7606,
	ERRC_IntraRAT_Handover_Event = 0x7607,
	ERRC_IntraRAT_Reselection_Event = 0x7608,
	ERRC_IntraRAT_Redirection_Event = 0x7609,
	ERRC_InterRAT_Handover_Event = 0x760A,
	ERRC_InterRAT_Reselection_Event = 0x760B,
	ERRC_InterRAT_Redirection_Event = 0x760C,
	ERRC_InterRAT_Cell_Change_Order_Event = 0x760D,
	ERRC_SRVCC_BSIC_Info_Event = 0x760E,
	ERRC_MBMS_Config_Info_Event = 0x760F,

	/* EL1 ICD code enumeration */
	EL1_LTE_Cell_Time = 0x7000,
	EL1_Serving_Cell_Measurement = 0x7001,
	EL1_Neighbor_Cell_Measurement = 0x7002,
	EL1_UL_Throughput = 0x7003,
	EL1_PSS_Information = 0x7004,
	EL1_SSS_Information = 0x7005,
	EL1_RACH_Information = 0x7006,
	EL1_MIMO_PDSCH_Throughput0 = 0x7007,
	EL1_MIMO_PDSCH_Throughput1 = 0x7008,
	EL1_SRS_TX_Information = 0x7009,
	EL1_DCI_Information = 0x700A,
	EL1_PMCH_DecodingResults = 0x700B,
	EL1_PBCH_DecodingResults = 0x700C,
	EL1_PDSCH_DecodingResults = 0x700D,
	EL1_PCFICH_DecodingResults = 0x700E,
	EL1_PDCCH_DecodingResults = 0x700F,
	EL1_PHICH_DecodingResults = 0x7010,
	EL1_PUCCH_Report = 0x7011,
	EL1_PUCCH_Power_Control = 0x7012,
	EL1_PUCCH_Csf = 0x7013,
	EL1_PUSCH_Report = 0x7014,
	EL1_PUSCH_Power_Control = 0x7015,
	EL1_PUSCH_Csf = 0x7016,
	EL1_TAS_Information = 0x7017,
	EL1_Physical_Configuration = 0x7018,
	EL1_txPower_Headroom_Event = 0x7500,
	EL1_Paging_DRX_Event = 0x7501,
	EL1_Radio_Link_Monitoring = 0x7502,

	/* CM ICD code enumeration */
	CM_SYSTEM_SERVICE_INFO = 0x7700,
	CM_PLMN_SEARCH_INFO = 0x7701
} elt_icd_codes_cgen_enum;

#endif /* _ICD_CODES_CGEN_H */

