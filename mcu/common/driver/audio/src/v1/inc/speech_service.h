#ifndef __SPEECH_SERVICE_H__
#define __SPEECH_SERVICE_H__


#include "kal_public_api.h"
#include "kal_general_types.h"

/* for MACE */
//#include "audio_struct.h"
#include "audio_msgid.h"
#include "dhl_trace.h"

typedef struct {
   kal_uint16 flag;
}SPLog_t;


typedef struct{
    LOCAL_PARA_HDR  /* size is 4 bytes now */
	kal_uint8	local_hdr_len;
	kal_uint8	reserved[3];
	kal_uint32	data_len;
	kal_uint8	data[256];
}singleData_struct;

typedef struct{
    LOCAL_PARA_HDR  /* size is 4 bytes now */
	kal_uint8	local_hdr_len;
	kal_uint8	opcode;
	kal_uint8	reserved[2];
}dbgInfo_struct;

typedef struct{
    LOCAL_PARA_HDR  /* size is 4 bytes now */
	kal_uint8	local_hdr_len;
	kal_uint8	opcode;
	kal_uint8	reserved[2];
	kal_uint32	log_seq;
	kal_uint32	data_len;
	kal_uint8   data[256];
}data_struct;


void SPLog_GetFlagSetting(void);
void SPLog_LogFlagSetting(void);
void SPLog_LogSingleData(kal_uint32 msg_id, kal_uint32 data_length, void *data);
void SPLog_LogData(kal_uint32 msg_id, kal_uint32 data_length, void *data);
void SPLog_LogDbgInfo(kal_uint32 msg_id, kal_uint8 opcode, void *data);

#endif /* __SPEECH_SERVICE_H__ */
