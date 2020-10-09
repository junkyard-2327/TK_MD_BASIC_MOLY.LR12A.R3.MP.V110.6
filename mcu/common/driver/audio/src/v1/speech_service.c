
#include "l1aud_common_def.h"
#include "kal_public_api.h"
#include "kal_general_types.h"
#include "kal_trace.h"
#include "l1sp_trc.h"

#include "speech_service.h"
#include "audio_msgid.h"
#include "dhl_trace.h"
#include "svc_sap.h"

extern kal_uint16 L1Audio_GetDebugInfo( kal_uint8 index );
extern void dhl_log_primitive(ilm_struct *ilm);

SPLog_t SPLog;
kal_uint16	bt_tx_seq = 0;
kal_uint16	bt_rx_seq = 0;


/* API definition */
void SPLog_GetFlagSetting()
{
#ifdef __MODEM_LOGGING_SUPPORT__
	SPLog.flag = L1Audio_GetDebugInfo(1);
	kal_trace(TRACE_GROUP_SPLOG, SPLOG_GET_DBG_FLAG, SPLog.flag);
//   kal_prompt_trace(MOD_L1SP, "[DBG_LOG]flag %x, msg_begin id %d\r\n", SPLog.flag, MSG_ID_AUDIO_LOGGING_BEGIN);
#else
#endif
}

void SPLog_LogSingleData(kal_uint32 msg_id, kal_uint32 data_length, void *data)
{
#ifdef __MODEM_LOGGING_SUPPORT__
    if(SPLog.flag & (1 << (msg_id - MSG_ID_AUDIO_LOGGING_BEGIN -1)))
{
    ilm_struct current_ilm;	
	singleData_struct *local_para;
	kal_uint32 i;

//   kal_prompt_trace(MOD_L1SP, "[SP_LOG_SINGLE]ID %x", msg_id);
	current_ilm.src_mod_id     = MOD_L1SP;
	current_ilm.dest_mod_id    = MOD_DHL_READER;
	current_ilm.sap_id         = INVALID_SAP;
	current_ilm.msg_id		   = msg_id;
	current_ilm.peer_buff_ptr  = NULL;

	current_ilm.local_para_ptr = construct_local_para(sizeof(singleData_struct),TD_CTRL);
	local_para = (singleData_struct *)current_ilm.local_para_ptr;

	local_para->local_hdr_len = 4; /*size of LOCAL_PARA_HDR */
	local_para->data_len = data_length; 
	for(i = 0; i < data_length; i++){
		local_para->data[i] = *((kal_uint8 *)data+i);
	}	
	
	dhl_log_primitive(&current_ilm);
	destroy_ilm(&current_ilm);    
}
#else
#endif
}

void SPLog_LogData(kal_uint32 msg_id, kal_uint32 data_length, void *data)
{
#ifdef __MODEM_LOGGING_SUPPORT__
    if(SPLog.flag & (1 << (msg_id - MSG_ID_AUDIO_LOGGING_BEGIN -1)))
{
	ilm_struct current_ilm;
	data_struct *local_para;
	kal_uint32 i;
    
//   kal_prompt_trace(MOD_L1SP, "[SP_LOG_DATA]ID %x", msg_id);
	current_ilm.src_mod_id     = MOD_L1SP;
	current_ilm.dest_mod_id    = MOD_DHL_READER;
	current_ilm.sap_id         = INVALID_SAP;
	current_ilm.msg_id		   = msg_id;    
	current_ilm.peer_buff_ptr  = NULL;    

	current_ilm.local_para_ptr = construct_local_para(sizeof(data_struct),TD_CTRL);
	local_para = (data_struct *)current_ilm.local_para_ptr;
	local_para->local_hdr_len = 4;	// size of LOCAL_PARA_HDR 
	local_para->opcode = 1;			//0: header 1: data log 2:end 
	switch(msg_id) {
		case MSG_ID_AUDIO_LOGGING_BT_TX:
			local_para->log_seq = bt_tx_seq++;
			break;
		case MSG_ID_AUDIO_LOGGING_BT_RX:
			local_para->log_seq = bt_rx_seq++;
			break;
        default:
        	local_para->log_seq	= 0;
        	break;
	}
	local_para->data_len = data_length;
	for(i = 0; i < data_length; i++){
		local_para->data[i] = *((kal_uint8 *)data+i);
	}
	dhl_log_primitive(&current_ilm);	
	destroy_ilm(&current_ilm);    
}
#else 
#endif
}
void SPLog_LogDbgInfo(kal_uint32 msg_id, kal_uint8 opcode, void *data)
{
#ifdef __MODEM_LOGGING_SUPPORT__
	if(SPLog.flag & (1 << (msg_id - MSG_ID_AUDIO_LOGGING_BEGIN -1))) 
{
    ilm_struct current_ilm;	
	dbgInfo_struct *local_para;
	kal_uint32 i;			

//   kal_prompt_trace(MOD_L1SP, "[SP_DBG_INFO]ID %x", msg_id);
	current_ilm.src_mod_id     = MOD_L1SP;
	current_ilm.dest_mod_id    = MOD_DHL_READER;
	current_ilm.sap_id         = INVALID_SAP;
	current_ilm.msg_id		   = msg_id;    
	current_ilm.peer_buff_ptr  = NULL;    

	current_ilm.local_para_ptr = construct_local_para(sizeof(dbgInfo_struct),TD_CTRL);
	local_para = (dbgInfo_struct *)current_ilm.local_para_ptr;
				
	local_para->local_hdr_len = 4; 	//size of LOCAL_PARA_HDR
	local_para->opcode = opcode;	//0: header 1: data log 2:end 
	for(i = 0; i < 2; i++){
		local_para->reserved[i] = *((kal_uint8 *)data+i);
	}
	
	dhl_log_primitive(&current_ilm);	
	destroy_ilm(&current_ilm);    
}
#else
#endif
}


