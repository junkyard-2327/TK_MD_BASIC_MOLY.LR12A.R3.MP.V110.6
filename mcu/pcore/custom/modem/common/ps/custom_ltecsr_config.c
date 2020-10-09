#include "custom_ltecsr_config.h"

#ifdef __VOLTE_SUPPORT__

void ltecsr_set_mtk_default_value(nvram_ef_ltecsr_profile_record_struct *nvram_ltecsr_profile_ptr)
{
    memset(nvram_ltecsr_profile_ptr, 0, sizeof(nvram_ef_ltecsr_profile_record_struct));

    nvram_ltecsr_profile_ptr->dtx_enable                        = KAL_TRUE;
    nvram_ltecsr_profile_ptr->silence_dropcall_threshold        = 30000;
    nvram_ltecsr_profile_ptr->no_rtp_dropcall                   = KAL_FALSE;/*parmter for no dl rtp drop*/    
    nvram_ltecsr_profile_ptr->jbm_load_params_enable            = 0;
    nvram_ltecsr_profile_ptr->jbm_prebuf_len                    = 4;
    nvram_ltecsr_profile_ptr->jbm_jitter_max_depth              = 12;
    nvram_ltecsr_profile_ptr->jbm_jitter_full_offset            = 98;
    nvram_ltecsr_profile_ptr->silence_to_rrc_report_threshold   = 15000;
    nvram_ltecsr_profile_ptr->ltecsr_common_para0               = 0;
    nvram_ltecsr_profile_ptr->ltecsr_common_para1               = 0;
    nvram_ltecsr_profile_ptr->ltecsr_common_para2               = 0;
    nvram_ltecsr_profile_ptr->ltecsr_common_para3               = 0;
    nvram_ltecsr_profile_ptr->ltecsr_common_para4               = 0;
    nvram_ltecsr_profile_ptr->rtp_expire_timer                  = 20000;
    nvram_ltecsr_profile_ptr->rtcp_expire_timer                 = 20000;
    nvram_ltecsr_profile_ptr->rtp_expire_warning_timer          = 0;
    nvram_ltecsr_profile_ptr->rtcp_xr_interval                  = 5000;
    nvram_ltecsr_profile_ptr->rtcp_xr_compound_rtcp             = KAL_FALSE;
    nvram_ltecsr_profile_ptr->rtcp_xr_gmin                      = 16;
    nvram_ltecsr_profile_ptr->rtcp_fix_interval_active          = 5000;
    nvram_ltecsr_profile_ptr->rtcp_fix_interval_hold            = 5000;
    nvram_ltecsr_profile_ptr->tty_sync_buf_time                 = 300;
    nvram_ltecsr_profile_ptr->tty_wait_time                     = 1000;
    nvram_ltecsr_profile_ptr->tty_sentence_diff                 = 3000;
    nvram_ltecsr_profile_ptr->silence_ping_pcscf_threshold      = 5000;
    nvram_ltecsr_profile_ptr->rtcp_min_interval                 = 500;
    nvram_ltecsr_profile_ptr->rtcp_max_interval                 = 2000;
    nvram_ltecsr_profile_ptr->evs_prefer_rate                   = 15;
    nvram_ltecsr_profile_ptr->stat_feature_option               = 1;
    nvram_ltecsr_profile_ptr->stat_report_interval              = 5000;
    nvram_ltecsr_profile_ptr->text_rtp_expire_timer             = 0; //default zero because no text RTP is reasonable 
    nvram_ltecsr_profile_ptr->text_rtcp_expire_timer            = 20000;
    nvram_ltecsr_profile_ptr->text_rtp_rtcp_expire_timer        = 0; //default zero because no text RTP is reasonable and we consider NW default don't support text RTCP
    nvram_ltecsr_profile_ptr->wfc_silence_threshold             = 5000;
}


void ltecsr_set_nvram_value(nvram_ef_ltecsr_profile_record_struct *src, nvram_ef_ltecsr_profile_record_struct *dst)
{
    if(src->dtx_enable != LTECSR_UNDEF_CONFIG_8)                    {dst->dtx_enable = src->dtx_enable;}
    if(src->silence_dropcall_threshold != LTECSR_UNDEF_CONFIG_32)   {dst->silence_dropcall_threshold = src->silence_dropcall_threshold;}
    if(src->jbm_load_params_enable != LTECSR_UNDEF_CONFIG_16)       {dst->jbm_load_params_enable = src->jbm_load_params_enable;}
    if(src->jbm_prebuf_len != LTECSR_UNDEF_CONFIG_16)               {dst->jbm_prebuf_len = src->jbm_prebuf_len;}
    if(src->jbm_jitter_max_depth != LTECSR_UNDEF_CONFIG_16)         {dst->jbm_jitter_max_depth = src->jbm_jitter_max_depth;}
    if(src->jbm_jitter_full_offset != LTECSR_UNDEF_CONFIG_16)       {dst->jbm_jitter_full_offset = src->jbm_jitter_full_offset;}
    if(src->silence_to_rrc_report_threshold != LTECSR_UNDEF_CONFIG_16) {dst->silence_to_rrc_report_threshold = src->silence_to_rrc_report_threshold;}
    if(src->ltecsr_common_para0 != LTECSR_UNDEF_CONFIG_16)          {dst->ltecsr_common_para0 = src->ltecsr_common_para0;}
    if(src->ltecsr_common_para1 != LTECSR_UNDEF_CONFIG_16)          {dst->ltecsr_common_para1 = src->ltecsr_common_para1;}
    if(src->ltecsr_common_para2 != LTECSR_UNDEF_CONFIG_16)          {dst->ltecsr_common_para2 = src->ltecsr_common_para2;}
    if(src->ltecsr_common_para3 != LTECSR_UNDEF_CONFIG_16)          {dst->ltecsr_common_para3 = src->ltecsr_common_para3;}
    if(src->ltecsr_common_para4 != LTECSR_UNDEF_CONFIG_16)          {dst->ltecsr_common_para4 = src->ltecsr_common_para4;}
    if(src->rtp_expire_timer != LTECSR_UNDEF_CONFIG_32)             {dst->rtp_expire_timer = src->rtp_expire_timer;}
    if(src->rtcp_expire_timer != LTECSR_UNDEF_CONFIG_32)            {dst->rtcp_expire_timer = src->rtcp_expire_timer;}
    if(src->rtp_expire_warning_timer != LTECSR_UNDEF_CONFIG_32)     {dst->rtp_expire_warning_timer = src->rtp_expire_warning_timer;}
    if(src->rtcp_xr_interval != LTECSR_UNDEF_CONFIG_16)             {dst->rtcp_xr_interval = src->rtcp_xr_interval;}
    if(src->rtcp_xr_compound_rtcp != LTECSR_UNDEF_CONFIG_8)         {dst->rtcp_xr_compound_rtcp = src->rtcp_xr_compound_rtcp;}
    if(src->rtcp_xr_gmin != LTECSR_UNDEF_CONFIG_8)                  {dst->rtcp_xr_gmin = src->rtcp_xr_gmin;}
    if(src->rtcp_fix_interval_active != LTECSR_UNDEF_CONFIG_16)     {dst->rtcp_fix_interval_active = src->rtcp_fix_interval_active;}
    if(src->rtcp_fix_interval_hold != LTECSR_UNDEF_CONFIG_16)       {dst->rtcp_fix_interval_hold = src->rtcp_fix_interval_hold;}
    if(src->tty_sync_buf_time != LTECSR_UNDEF_CONFIG_16)            {dst->tty_sync_buf_time = src->tty_sync_buf_time;}
    if(src->tty_wait_time != LTECSR_UNDEF_CONFIG_16)                {dst->tty_wait_time = src->tty_wait_time;}
    if(src->tty_sentence_diff != LTECSR_UNDEF_CONFIG_16)            {dst->tty_sentence_diff = src->tty_sentence_diff;}
    if(src->silence_ping_pcscf_threshold != LTECSR_UNDEF_CONFIG_32) {dst->silence_ping_pcscf_threshold = src->silence_ping_pcscf_threshold;}
    if(src->rtcp_min_interval != LTECSR_UNDEF_CONFIG_16)            {dst->rtcp_min_interval = src->rtcp_min_interval;}
    if(src->rtcp_max_interval != LTECSR_UNDEF_CONFIG_16)            {dst->rtcp_max_interval = src->rtcp_max_interval;}
    if(src->evs_prefer_rate != LTECSR_UNDEF_CONFIG_8)               {dst->evs_prefer_rate = src->evs_prefer_rate;} 
    if(src->stat_feature_option != LTECSR_UNDEF_CONFIG_16)          {dst->stat_feature_option = src->stat_feature_option;}
    if(src->stat_report_interval != LTECSR_UNDEF_CONFIG_16)         {dst->stat_report_interval = src->stat_report_interval;}
    if(src->text_rtp_expire_timer != LTECSR_UNDEF_CONFIG_32)        {dst->text_rtp_expire_timer = src->text_rtp_expire_timer;}
    if(src->text_rtcp_expire_timer != LTECSR_UNDEF_CONFIG_32)       {dst->text_rtcp_expire_timer = src->text_rtcp_expire_timer;}
    if(src->text_rtp_rtcp_expire_timer != LTECSR_UNDEF_CONFIG_32)   {dst->text_rtp_rtcp_expire_timer = src->text_rtp_rtcp_expire_timer;}

    return;
}


kal_bool ltecsr_nvram_customization(ltecsr_custom_param_struct *custom_param_ptr, nvram_ef_ltecsr_profile_record_struct **profile_ptr, nvram_ef_ltecsr_profile_record_struct **rom_profile_ptr)
{
    nvram_ef_ltecsr_profile_record_struct *nvram_ltecsr_profile_ptr = NULL;
    nvram_ef_ltecsr_profile_record_struct *nvram_rom_ltecsr_profile_ptr = NULL;

    // Allocate buffer to read NVRAM setting
    nvram_ltecsr_profile_ptr = (nvram_ef_ltecsr_profile_record_struct*)get_ctrl_buffer(sizeof(kal_uint8) * NVRAM_EF_LTECSR_PROFILE_SIZE);
    nvram_rom_ltecsr_profile_ptr = (nvram_ef_ltecsr_profile_record_struct*)get_ctrl_buffer(sizeof(kal_uint8) * NVRAM_EF_LTECSR_PROFILE_SIZE);

    if(!nvram_external_read_data(NVRAM_EF_LTECSR_PROFILE_LID,
                             custom_param_ptr->sim_slot_id+1,
                             (kal_uint8 *)nvram_rom_ltecsr_profile_ptr,
                             NVRAM_EF_LTECSR_PROFILE_SIZE)) {
        return KAL_FALSE;
    }


    /* load MTK default nvram setting */
    ltecsr_set_mtk_default_value(nvram_ltecsr_profile_ptr);


    /* Customize NVRAM according to SBP ID */
    switch(custom_param_ptr->op_id)
    {
        case 1: /* CMCC */
        {
            nvram_ltecsr_profile_ptr->evs_prefer_rate = 4; /*VoLTE_EVS_Codec_Bitrate_13_2 */
            nvram_ltecsr_profile_ptr->no_rtp_dropcall = KAL_TRUE;/*add for no rtp drop call*/
            break;
        }
        case 2:/* CU*/
        {            
            nvram_ltecsr_profile_ptr->no_rtp_dropcall = KAL_TRUE;/*add for no rtp drop call*/
            break;
        }

        case 3: /* Orange */
        {
            nvram_ltecsr_profile_ptr->ltecsr_common_para2 = nvram_ltecsr_profile_ptr->ltecsr_common_para2 | (1<<4); //LTECSR_FEATURE_DYNAMIC_QOS
            break;
        }
        case 5: /* DTAG (TMOEU) */
        {
            nvram_ltecsr_profile_ptr->rtp_expire_warning_timer = 1000;
            break;
        }
        case 6: /* VDF */
        {
            nvram_ltecsr_profile_ptr->rtp_expire_warning_timer = 1000;
            nvram_ltecsr_profile_ptr->ltecsr_common_para2 = nvram_ltecsr_profile_ptr->ltecsr_common_para2 | (1<<5) | (1<<6);
            break;
        }
        case 7:   /* ATT */
        case 145: /* Cricket (should be aligned with AT&T) */
        case 196: /* FirstNet (should be aligned with AT&T) */
        {
            nvram_ltecsr_profile_ptr->stat_feature_option = nvram_ltecsr_profile_ptr->stat_feature_option | (1<<1); //LTECSR_STAT_CIQ

            nvram_ltecsr_profile_ptr->rtp_expire_timer = 20000;
            nvram_ltecsr_profile_ptr->rtcp_expire_timer = 20000;
            nvram_ltecsr_profile_ptr->silence_dropcall_threshold   = 20000; // Inactivity timeouts for both RTP and RTCP shall be set to 20 seconds
            nvram_ltecsr_profile_ptr->text_rtp_rtcp_expire_timer = 20000;
            break;
        }
        case 8: /* TMO-US */
        {
            //LTECSR_FEATURE_HOLDCALL_DL_CHECK and LTECSR_FEATURE_RTCP_MAX_INTERVAL_ENABLE
            nvram_ltecsr_profile_ptr->ltecsr_common_para2 = nvram_ltecsr_profile_ptr->ltecsr_common_para2 | (1<<1) | (1<<8);
            nvram_ltecsr_profile_ptr->stat_feature_option = nvram_ltecsr_profile_ptr->stat_feature_option | (1<<2); //LTECSR_STAT_ECHO

            nvram_ltecsr_profile_ptr->rtcp_max_interval = 2000;
            nvram_ltecsr_profile_ptr->rtp_expire_timer = 30000;
            nvram_ltecsr_profile_ptr->rtcp_expire_timer = 30000;
            nvram_ltecsr_profile_ptr->rtp_expire_warning_timer = 1000;

            break;
        }
        case 9: /* CT */
        {
            nvram_ltecsr_profile_ptr->ltecsr_common_para2 = nvram_ltecsr_profile_ptr->ltecsr_common_para2 | (1<<1); //LTECSR_FEATURE_HOLDCALL_DL_CHECK

            nvram_ltecsr_profile_ptr->silence_dropcall_threshold   = 20000; //CT requirment: 20s
            nvram_ltecsr_profile_ptr->no_rtp_dropcall = KAL_TRUE;/*add for no rtp drop call*/
            break;
        }
        case 11: /* H3G */
        {
            if (strncmp((char *)(custom_param_ptr->mccmnc), "232", 3) == 0) {
                /* Austria */
                nvram_ltecsr_profile_ptr->rtp_expire_timer  = 15000;
                nvram_ltecsr_profile_ptr->rtcp_expire_timer = 15000;
            }           
            break;
        }
        case 12: /* VzW */
        {
            //LTECSR_FEATURE_HOLDCALL_DL_CHECK and LTECSR_FEATURE_DTMF_MUTE and LTECSR_FEATURE_FIX_RTCP_INTERVAL_ACTIVE and LTECSR_FEATURE_FIX_RTCP_INTERVAL_HOLD
            nvram_ltecsr_profile_ptr->ltecsr_common_para2 = nvram_ltecsr_profile_ptr->ltecsr_common_para2 | (1<<1) | (1<<0) | (1<<5) | (1<<6);
            nvram_ltecsr_profile_ptr->stat_feature_option = nvram_ltecsr_profile_ptr->stat_feature_option | 0x1;    //LTECSR_STAT_MDMI

            nvram_ltecsr_profile_ptr->silence_dropcall_threshold   = 20000; //VzW requirment: 20s
            nvram_ltecsr_profile_ptr->rtcp_fix_interval_hold = 2000;    //VzW requirement: 2s while the call is not active
            nvram_ltecsr_profile_ptr->wfc_silence_threshold = 1000;

            nvram_ltecsr_profile_ptr->text_rtcp_expire_timer = 0; //ALPS04442456: VzW requirement: do not enable RTCP inactivity timer for text
            break;
        }
        case 15: /* Telefonica */
        {
            nvram_ltecsr_profile_ptr->silence_dropcall_threshold   = 10000; //Telefonica requirment: 10s
            
            /* Spain */
            if (strncmp((char *)(custom_param_ptr->mccmnc), "214", 3) == 0) {
                nvram_ltecsr_profile_ptr->silence_dropcall_threshold   = 30000;
            }  
            break;
        }
        case 16: /* EE */
        {
            nvram_ltecsr_profile_ptr->ltecsr_common_para2 = nvram_ltecsr_profile_ptr->ltecsr_common_para2 | (1<<1); //LTECSR_FEATURE_HOLDCALL_DL_CHECK
            break;
        }
        case 17: /* DOCOMO */
        {
            nvram_ltecsr_profile_ptr->ltecsr_common_para2 = nvram_ltecsr_profile_ptr->ltecsr_common_para2 | 0x1; //LTECSR_FEATURE_DTMF_MUTE

            nvram_ltecsr_profile_ptr->silence_dropcall_threshold   = 12000; //DCM requirment: 12s
            break;
        }
        case 18: /* RJIL */
        {
            nvram_ltecsr_profile_ptr->ltecsr_common_para2 = nvram_ltecsr_profile_ptr->ltecsr_common_para2 | (1<<1); //LTECSR_FEATURE_HOLDCALL_DL_CHECK

            nvram_ltecsr_profile_ptr->stat_feature_option = nvram_ltecsr_profile_ptr->stat_feature_option | (1<<4); //LTECSR_STAT_RJIL
            break;
        }
        case 20: /* Sprint */
        {
            nvram_ltecsr_profile_ptr->stat_feature_option = nvram_ltecsr_profile_ptr->stat_feature_option | (1<<3); //LTECSR_STAT_HIDDEN
            nvram_ltecsr_profile_ptr->stat_report_interval         = 3000;

            nvram_ltecsr_profile_ptr->silence_dropcall_threshold   = 45000; //Sprint requirment: 45s
            break;
        }
        case 114: /*KT*/
        case 115: /*SKT*/
        case 116: /*U Plus*/
        {
            // LTECSR_FEATURE_ALWAYS_ONE_SHOT_DTMF and LTECSR_FEATURE_DTMF_END_SEP_ENABLE and LTECSR_FEATURE_DTMF_END_DURATION_UPDATE
            nvram_ltecsr_profile_ptr->ltecsr_common_para2 = nvram_ltecsr_profile_ptr->ltecsr_common_para2 | (1<<2) | (1<<3) | (1<<10);
            nvram_ltecsr_profile_ptr->ltecsr_common_para0 = 6;  // dtmf interlval
            nvram_ltecsr_profile_ptr->ltecsr_common_para1 = 6;  // dtmf duration
            nvram_ltecsr_profile_ptr->rtp_expire_warning_timer = 1000;  
            break;
        }
		case 50: /*SoftBank*/
        {
            //LTECSR_FEATURE_DTMF_MUTE and LTECSR_FRATURE_CMR_DISABLE
            nvram_ltecsr_profile_ptr->ltecsr_common_para2 = nvram_ltecsr_profile_ptr->ltecsr_common_para2 | (1<<0) | (1<<11); 
            break;
        }
        case 110: /* FET */
        {
            nvram_ltecsr_profile_ptr->rtp_expire_warning_timer = 1000;  
            break;
        }
        case 120: /* Claro */
        {
            nvram_ltecsr_profile_ptr->rtp_expire_timer = 30000;
            nvram_ltecsr_profile_ptr->rtcp_expire_timer = 25000;
            break;
        }
		case 126: /* TurkTelekom */
        {
			/*Turkey*/
			nvram_ltecsr_profile_ptr->ltecsr_common_para2 = nvram_ltecsr_profile_ptr->ltecsr_common_para2 | (1<<5) | (1<<6);
            nvram_ltecsr_profile_ptr->rtp_expire_timer = 30000;
            nvram_ltecsr_profile_ptr->rtcp_expire_timer = 120000;
            break;
        }
        case 129: /* KDDI */
        {
			nvram_ltecsr_profile_ptr->ltecsr_common_para2 = nvram_ltecsr_profile_ptr->ltecsr_common_para2 | (1<<1); //LTECSR_FEATURE_HOLDCALL_DL_CHECK
            nvram_ltecsr_profile_ptr->rtp_expire_timer = 0;
            nvram_ltecsr_profile_ptr->rtcp_expire_timer = 20000;
            nvram_ltecsr_profile_ptr->silence_dropcall_threshold   = 20000;
            break;
        }
		case 132: /* Movistar */
        {
            if (strncmp((char *)(custom_param_ptr->mccmnc), "334", 3) == 0) {
                /* Mexico */
                nvram_ltecsr_profile_ptr->rtp_expire_timer = 30000;
            } else if (strncmp((char *)(custom_param_ptr->mccmnc), "748", 3) == 0) {
                /* Uruguay */
                nvram_ltecsr_profile_ptr->rtp_expire_timer = 60000;
            } else {
                /* default */
                nvram_ltecsr_profile_ptr->rtp_expire_timer = 10000;
            }
            break;
        }
        case 134: /* Elisa */
        {
            nvram_ltecsr_profile_ptr->rtp_expire_warning_timer = 1000;
            break;
        }	
        case 137: /* Tele2 */
        {
            nvram_ltecsr_profile_ptr->silence_dropcall_threshold   = 20000;
            break;
        }
        case 139: /* Wind */
        {
            if (strncmp((char *)(custom_param_ptr->mccmnc), "222", 3) == 0) {
                /* italy */
                nvram_ltecsr_profile_ptr->silence_dropcall_threshold   = 10000; //10s
                nvram_ltecsr_profile_ptr->rtcp_expire_timer = 10000;
            }
            break;
        }   
        case 147: /* Airtel */
        {
            nvram_ltecsr_profile_ptr->silence_dropcall_threshold   = 90000;
            break;
        }
        case 155: /* DIGI */
        {
            if (strncmp((char *)(custom_param_ptr->mccmnc), "216", 3) == 0) {
                /* Hungary */
                nvram_ltecsr_profile_ptr->silence_dropcall_threshold = 5000; //DIGI requirment: 5s
                nvram_ltecsr_profile_ptr->wfc_silence_threshold = 3000; //DIGI requirment: 3s
            }
            else if (strncmp((char *)(custom_param_ptr->mccmnc), "226", 3) == 0) {
                 /*Romania*/
                nvram_ltecsr_profile_ptr->rtp_expire_warning_timer = 1000;
            }
            else if (strncmp((char *)(custom_param_ptr->mccmnc), "502", 3) == 0) {
                /* Romania */
                nvram_ltecsr_profile_ptr->rtp_expire_warning_timer = 1000;
            }
            break;
        }
        case 156: /* Telenor */
        {
            nvram_ltecsr_profile_ptr->rtp_expire_warning_timer = 3000;
            break;
        }
        case 157: /* TELUS */
        {
            nvram_ltecsr_profile_ptr->silence_dropcall_threshold   = 14000;
            nvram_ltecsr_profile_ptr->rtcp_expire_timer = 14000;
            nvram_ltecsr_profile_ptr->rtp_expire_timer = 14000;
            break;
        }
        case 161: /* Play Poland */
        {
            nvram_ltecsr_profile_ptr->silence_dropcall_threshold   = 60000;
            break;
        }
        case 162:  /* Freedom Canada */
        {
            nvram_ltecsr_profile_ptr->silence_dropcall_threshold = 10000;
            break;
        }
        case 172: /* Altice Dominican */
        {
            nvram_ltecsr_profile_ptr->ltecsr_common_para2 = nvram_ltecsr_profile_ptr->ltecsr_common_para2 | (1<<5) | (1<<6);
            nvram_ltecsr_profile_ptr->rtcp_expire_timer = 120000;
            break;
        }
        case 183: /* Personal */
        {
            if (strncmp((char *)(custom_param_ptr->mccmnc), "722", 3) == 0) {
                /* Argentina */
                nvram_ltecsr_profile_ptr->silence_dropcall_threshold   = 20000; // 20s
                nvram_ltecsr_profile_ptr->rtp_expire_warning_timer = 1000;
            }
            break;
        }
        case 195: /* O2 Czech */
        {
            nvram_ltecsr_profile_ptr->rtp_expire_warning_timer = 1000;
            break;
        }
        case 209: /* Avantel */
        {
            // LTECSR_FEATURE_FIX_RTCP_INTERVAL_ACTIVE and LTECSR_FEATURE_FIX_RTCP_INTERVAL_HOLD
            nvram_ltecsr_profile_ptr->ltecsr_common_para2 = nvram_ltecsr_profile_ptr->ltecsr_common_para2 | (1<<5) | (1<<6);
            nvram_ltecsr_profile_ptr->rtcp_fix_interval_active = 20000;
            nvram_ltecsr_profile_ptr->rtcp_fix_interval_hold = 20000;
            break;
        }
        case 215: /* Cellcard */
        {
            /* Cambodia */
            nvram_ltecsr_profile_ptr->rtcp_fix_interval_active = 10000;
            nvram_ltecsr_profile_ptr->rtcp_fix_interval_hold = 10000;
            break;
        }
        case 216: /* Zong */
        {
            if (strncmp((char *)(custom_param_ptr->mccmnc), "410", 3) == 0) {
                /* Pakistan */
                nvram_ltecsr_profile_ptr->silence_dropcall_threshold   = 10000; // 10s
            }
            break;
        }
        case 232: /* Mobitel */
        {
            /* Sri Lanka */
            // LTECSR_FEATURE_FIX_RTCP_INTERVAL_ACTIVE and LTECSR_FEATURE_FIX_RTCP_INTERVAL_HOLD
            nvram_ltecsr_profile_ptr->ltecsr_common_para2 = nvram_ltecsr_profile_ptr->ltecsr_common_para2 | (1<<5) | (1<<6);
            nvram_ltecsr_profile_ptr->rtcp_fix_interval_active = 20000;
            nvram_ltecsr_profile_ptr->rtcp_fix_interval_hold = 20000;
            break;
        }
        case 236: /* USCC */
        {

            //LTECSR_FEATURE_FIX_RTCP_INTERVAL_ACTIVE and LTECSR_FEATURE_FIX_RTCP_INTERVAL_HOLD
            nvram_ltecsr_profile_ptr->ltecsr_common_para2 = nvram_ltecsr_profile_ptr->ltecsr_common_para2 | (1<<5) | (1<<6);

            nvram_ltecsr_profile_ptr->rtp_expire_timer             = 20000;   // 20s
            nvram_ltecsr_profile_ptr->rtcp_expire_timer            = 20000;   // 20s
            nvram_ltecsr_profile_ptr->silence_dropcall_threshold   = 20000;   // 20s
            nvram_ltecsr_profile_ptr->rtcp_fix_interval_active     = 5000;    // 5s
            nvram_ltecsr_profile_ptr->rtcp_fix_interval_hold       = 5000;    // 5s

        }
        case 239: /* VIP */
        {
            if((strncmp((char *)(custom_param_ptr->mccmnc), "294", 3) == 0) ||
               (strncmp((char *)(custom_param_ptr->mccmnc), "220", 3) == 0))
            {
                /* Macedonia and Serbia */
                nvram_ltecsr_profile_ptr->silence_dropcall_threshold   = 20000; // 20s
            }
            break;
        } 
        case 243: /* Globe */
        {
            if (strncmp((char *)(custom_param_ptr->mccmnc), "515", 3) == 0) {
                /* Philippines */
                nvram_ltecsr_profile_ptr->rtp_expire_timer = 60000;
                nvram_ltecsr_profile_ptr->rtcp_expire_timer = 60000;
            }
            break;
        }
        case 285: /* Vinafhone Vietnam */
        {
            nvram_ltecsr_profile_ptr->silence_dropcall_threshold   = 20000;
            break;
        }
    case 104: /*strahub*/
    {
        nvram_ltecsr_profile_ptr->no_rtp_dropcall= KAL_TRUE;/*parmter for no dl rtp drop*/
        break;
    } 
    }

    /* overlap EM Settings to nvram_ims_profile_ptr which would update to ltecsr context */
    ltecsr_set_nvram_value(nvram_rom_ltecsr_profile_ptr, nvram_ltecsr_profile_ptr);

    *profile_ptr = nvram_ltecsr_profile_ptr;
    *rom_profile_ptr = nvram_rom_ltecsr_profile_ptr;

    return KAL_TRUE;
}

#endif



