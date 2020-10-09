#ifndef SWLA_PUBLIC_H
#define SWLA_PUBLIC_H

#include "drv_asm.h"

kal_uint32 SLA_Enable(void);
kal_uint32 SLA_Disable(void);
kal_uint32 SLA_Respond(void);
kal_bool SLA_IsEnabled(void);
kal_uint32 SLA_TurnOn(void);
kal_uint32 SLA_TurnOff(void);
kal_uint32 SLA_Init(void);	

typedef enum 
{
   SA_stop = 0,
   SA_start = 1,
   SA_label = 2
} SA_ACTION_T;

typedef enum 
{
   TAG_NEST_BEGIN   = 0xE0,
   TAG_NEST_END     = 0xE1,
   TAG_SINGLE_LABEL = 0xE2,
   TAG_BEGIN_POINT  = 0xE3,
   TAG_END_POINT    = 0xE4,
   TAG_VPE1_CHILD_BEGIN  = 0xE5,
   TAG_VPE1_CHILD_END    = 0xE6,
   TAG_CPU_FREQUENCY     = 0xE7
} SA_TAG_T;	


void SLA_CustomLogging(kal_char *customJob, SA_ACTION_T saAction);
void SLA_CustomLogging_NoEMM(kal_char *customJob, SA_ACTION_T saAction);
void SLA_HWLogging(kal_char *customJob, SA_ACTION_T saAction);
void SLA_VPE1ChildFunctionLogging(kal_uint32 index, SA_ACTION_T saAction, kal_uint8 TCID, kal_uint8 coreID) DECLARE_MIPS16;

#endif
