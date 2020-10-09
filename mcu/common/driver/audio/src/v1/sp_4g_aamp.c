#include "kal_public_api.h"
#include "kal_general_types.h"
#include "kal_public_defs.h"
#include "string.h"
#include "kal_trace.h"
#include "reg_base.h"
#include "sync_data.h"

#include "l1aud_common_def.h"
#include "l1audio.h"
#include "am.h"
#include "l1audio_trace.h"
#include "media.h" 
#include "l1sp_trc.h"

#include "sal_exp.h"
#include "sal_def.h"

#include "sp_4g_aamp.h"
#include "l1sp_el2_struct.h"
#include "audio_msgid.h"
#include "drv_sap.h"
#include "us_timer.h"
#include "dcl.h"


extern kal_uint32 SP4G_getAAMMargin(void);


void sp_4g_AAMPlus_enable(void)
{
#ifdef __SP_4G_AAM_PLUS__
   //enable AAM Plus
   //kal_prompt_trace(MOD_L1SP, "sp_4g_AAMPlus Enable");
   kal_dev_trace(TRACE_GROUP_SP4G, SP_4G_AAMPLUS_ENABLE);
   SAL_AAMPlus_Switch(KAL_TRUE);
//#else //#ifdef __SP_4G_AAM_PLUS__
//   //Disable AAM Plus
//   //kal_prompt_trace(MOD_L1SP, "sp_4g_AAMPlus Disable");
//   kal_dev_trace(TRACE_GROUP_SP4G, SP_4G_AAMPLUS_DISABLE);
//   SAL_AAMPlus_Switch(KAL_FALSE);
#endif //#ifdef __SP_4G_AAM_PLUS__
}


void sp_4g_AAMPlus_disable(void)
{
#ifdef __SP_4G_AAM_PLUS__
   //Disable AAM Plus
   //kal_prompt_trace(MOD_L1SP, "sp_4g_AAMPlus Disable");
   kal_dev_trace(TRACE_GROUP_SP4G, SP_4G_AAMPLUS_DISABLE);
   SAL_AAMPlus_Switch(KAL_FALSE);
#endif //#ifdef __SP_4G_AAM_PLUS__
}


void sp_4g_AAMPlus_notify_EMAC(void *data)
{
#ifdef __SP_4G_AAM_PLUS__
   l1sp_emac_volte_notify_mode_change_struct *local_para;

   local_para = (l1sp_emac_volte_notify_mode_change_struct *) construct_local_para( sizeof(l1sp_emac_volte_notify_mode_change_struct), TD_CTRL/*TD_RESET*/ );
   local_para->issue_time = ust_get_current_time();

   //Should modify for different Chip and Codec!!!
   local_para->notify_to_data_ms = 5 /*+ SP4G_getAAMMargin()*/;

   Sal_AAMPlus_State_t AAMPlus_status = SAL_AAMPlus_Get_Enc_State();
   switch(AAMPlus_status)
   {
   	  case SAL_AAMPLUS_STA_SILENCE_SID_FIRST:
         local_para->silence_talk = SP4G_AAMPLUS_STA_SID_FIRST;
         kal_dev_trace(TRACE_GROUP_SP4G, SP_4G_AAMPLUS_SILENCE_SID_FIRST);
         break;
   	  case SAL_AAMPLUS_STA_SILENCE_SID_UPDATE:
         local_para->silence_talk = SP4G_AAMPLUS_STA_SILENCE;
         kal_dev_trace(TRACE_GROUP_SP4G, SP_4G_AAMPLUS_SILENCE_SID_UPDATE);
         break;
   	  case SAL_AAMPLUS_STA_TALK:
      default:
         local_para->silence_talk = SP4G_AAMPLUS_STA_TALK;
         kal_dev_trace(TRACE_GROUP_SP4G, SP_4G_AAMPLUS_TALK);
         break;
   }

   //send ILM to EMAC
   msg_send6(MOD_MED, MOD_EMAC, AUDIO_SAP, MSG_ID_L1SP_EMAC_VOLTE_NOTIFY_MODE_CHANGE, (local_para_struct *)local_para, NULL);
#endif //#ifdef __SP_4G_AAM_PLUS__
}
