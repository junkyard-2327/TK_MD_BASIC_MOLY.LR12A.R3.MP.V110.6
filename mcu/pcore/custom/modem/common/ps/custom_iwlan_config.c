/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2012
*
*  BY OPENING THIS FILE, BUYER HEREBY UNEQUIVOCALLY ACKNOWLEDGES AND AGREES
*  THAT THE SOFTWARE/FIRMWARE AND ITS DOCUMENTATIONS ("MEDIATEK SOFTWARE")
*  RECEIVED FROM MEDIATEK AND/OR ITS REPRESENTATIVES ARE PROVIDED TO BUYER ON
*  AN "AS-IS" BASIS ONLY. MEDIATEK EXPRESSLY DISCLAIMS ANY AND ALL WARRANTIES,
*  EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE IMPLIED WARRANTIES OF
*  MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE OR NONINFRINGEMENT.
*  NEITHER DOES MEDIATEK PROVIDE ANY WARRANTY WHATSOEVER WITH RESPECT TO THE
*  SOFTWARE OF ANY THIRD PARTY WHICH MAY BE USED BY, INCORPORATED IN, OR
*  SUPPLIED WITH THE MEDIATEK SOFTWARE, AND BUYER AGREES TO LOOK ONLY TO SUCH
*  THIRD PARTY FOR ANY WARRANTY CLAIM RELATING THERETO. MEDIATEK SHALL ALSO
*  NOT BE RESPONSIBLE FOR ANY MEDIATEK SOFTWARE RELEASES MADE TO BUYER'S
*  SPECIFICATION OR TO CONFORM TO A PARTICULAR STANDARD OR OPEN FORUM.
*
*  BUYER'S SOLE AND EXCLUSIVE REMEDY AND MEDIATEK'S ENTIRE AND CUMULATIVE
*  LIABILITY WITH RESPECT TO THE MEDIATEK SOFTWARE RELEASED HEREUNDER WILL BE,
*  AT MEDIATEK'S OPTION, TO REVISE OR REPLACE THE MEDIATEK SOFTWARE AT ISSUE,
*  OR REFUND ANY SOFTWARE LICENSE FEES OR SERVICE CHARGE PAID BY BUYER TO
*  MEDIATEK FOR SUCH MEDIATEK SOFTWARE AT ISSUE.
*
*  THE TRANSACTION CONTEMPLATED HEREUNDER SHALL BE CONSTRUED IN ACCORDANCE
*  WITH THE LAWS OF THE STATE OF CALIFORNIA, USA, EXCLUDING ITS CONFLICT OF
*  LAWS PRINIPLES.  ANY DISPUTES, CONTROVERSIES OR CLAIMS ARISING THEREOF AND
*  RELATED THERETO SHALL BE SETTLED BY ARBITRATION IN SAN FRANCISCO, CA, UNDER
*  THE RULES OF THE INTERNATIONAL CHAMBER OF COMMERCE (ICC).
*
*****************************************************************************/


#include "custom_iwlan_config.h"
#include <stdlib.h>



extern sim_interface_enum l4c_gemini_get_actual_sim_id(sim_interface_enum simId);

static kal_bool iwlan_cfg_reset_default(iwlan_cust_cfg_t* cfg)
{
    kal_uint32 _cfg_idx_; /* define for MACRO of iwlan config */

    cfg->miafa = KAL_TRUE; //of course

#define __IWLAN_CFG_ACTION__ 2 /* IWLAN CFG Macro Structure Value Assign */
#define __IWLAN_CFG_PTR__ (cfg)
#include "iwlan_nvram_config.h"
#undef __IWLAN_CFG_PTR__
#undef __IWLAN_CFG_ACTION__

    return KAL_TRUE;    
}

//Set to nvram value if nvram has been set.
static kal_bool iwlan_cfg_set_to_nvram_value(iwlan_cust_cfg_t* cfg, protocol_id_enum ps_id)
{
    kal_uint8* nvram_iwlan_read_buf_ptr = NULL;
    nvram_ef_iwlan_profile_record_struct* nv_ptr = NULL; 
    kal_bool rtn = KAL_FALSE;
    sim_interface_enum sim_slot_id;
    kal_uint32 _cfg_idx_; /* define for MACRO of iwlan config */
    
    // Allocate buffer to read NVRAM setting
    nvram_iwlan_read_buf_ptr = (kal_uint8*)get_ctrl_buffer(sizeof(kal_uint8) * NVRAM_EF_IWLAN_PROFILE_SIZE);

    //Transfer PS ID to SIM slot ID

    sim_slot_id = l4c_gemini_get_actual_sim_id((sim_interface_enum)ps_id);

    //read nvram

    rtn = nvram_external_read_data(NVRAM_EF_IWLAN_PROFILE_LID, 
                             sim_slot_id+1, //record from 1 to n
                             nvram_iwlan_read_buf_ptr, 
                             NVRAM_EF_IWLAN_PROFILE_SIZE);
    //EXT_ASSERT(rtn,rtn,rtn,rtn);
    
    nv_ptr = (nvram_ef_iwlan_profile_record_struct*)nvram_iwlan_read_buf_ptr;
    
    if(rtn == KAL_TRUE){

        if(nv_ptr->miafa != UNDEF_CONFIG_8){ cfg->miafa = nv_ptr->miafa; } 

#define __IWLAN_CFG_ACTION__ 3 /* IWLAN CFG Macro NVRAN Value Assign */
#define __IWLAN_NVRAM_PTR__ (nv_ptr)
#define __IWLAN_CFG_PTR__ (cfg)
#include "iwlan_nvram_config.h"
#undef __IWLAN_CFG_PTR__
#undef __IWLAN_NVRAM_PTR__
#undef __IWLAN_CFG_ACTION__
    }
    // Free allocated buffer
    free_ctrl_buffer(nvram_iwlan_read_buf_ptr);
    nvram_iwlan_read_buf_ptr = NULL;    
    return rtn;
}



void iwlan_cust_init(kal_uint32 op_id, protocol_id_enum ps_id, kal_char *sim_mcc, kal_char *sim_mnc, kal_bool *nv_valid,iwlan_cust_cfg_t* cfg)
{
//    iwlan_cust_cfg_t cfg;
    
    /* reset configuration to default*/
    iwlan_cfg_reset_default(cfg);
    
    switch(op_id)
    {
        case 1: /* CMCC */
        {
            break;
        }
        case 2: /* CU */
        {
            break;
        }
        case 3: /* Orange */
        {
            /* WLAN signal strength threshold */
            cfg->wans_cfg.sig_cfg.wlan_sig_thr_cfg.wans_wlan_rssi_rove_poor_th    = -85;
            cfg->wans_cfg.sig_cfg.wlan_sig_thr_cfg.wans_wlan_rssi_rove_fair_th    = -75;
            cfg->wans_cfg.sig_cfg.wlan_sig_thr_cfg.wans_wlan_rssi_ho_poor_th      = -85;
            cfg->wans_cfg.sig_cfg.wlan_sig_thr_cfg.wans_wlan_rssi_ho_fair_th      = -75;
            cfg->wans_cfg.sig_cfg.wlan_sig_thr_cfg.wans_wlan_rssi_no_cell_poor_th = -90;
            cfg->wans_cfg.sig_cfg.wlan_sig_thr_cfg.wans_wlan_rssi_no_cell_fair_th = -85;

            //For Orange general(most country) configuration  
            cfg->wans_cfg.wans_ims_md_supporting_rat             = 0x1;
            cfg->wans_cfg.wans_ims_vops_barring_enable           = KAL_TRUE;
            cfg->wans_cfg.wans_ims_vops_setup_barring_enable     = KAL_TRUE;
            cfg->wans_cfg.wans_ims_23G_setup_barring_enable      = KAL_TRUE;
            // cfg->wans_cfg.wans_ims_roaming_barring_enable        = KAL_TRUE;
            cfg->wans_cfg.wans_ims_wlan_roaming_barring_enable   = KAL_FALSE;
            cfg->wans_cfg.wans_mms_epdg_connected_barring_enable = KAL_TRUE;
            cfg->wans_cfg.wans_xcap_epdg_connected_epdg_barring_enable = KAL_TRUE;  
            cfg->wans_cfg.wans_ims_wlan_dereg_enable             = KAL_TRUE;
            cfg->wans_cfg.wans_ims_dereg_dead_zone_enable        = KAL_TRUE;

	    /* WiFi Call Rove Out Alert */
            cfg->wans_cfg.wans_wifi_call_roveout_alert_enable  = KAL_TRUE;

            switch (atoi(sim_mcc)) {
                case 208: //FR
                    cfg->wans_cfg.wans_ims_md_supporting_rat           = 0x7;
                    cfg->wans_cfg.wans_ims_wlan_roaming_barring_enable = KAL_TRUE;
                    cfg->wans_cfg.wans_ims_wlan_dereg_enable = KAL_FALSE;                    
                    cfg->wans_cfg.wans_ims_vops_barring_enable         = KAL_FALSE;
                    cfg->wans_cfg.loc_cfg.wans_location_enable         = KAL_TRUE;
                    break;
                case 226: //RO
                    cfg->wans_cfg.wans_mms_cell_only_barring_enable      = KAL_TRUE;
                    break;
                case 214: //ES
                    cfg->wans_cfg.wans_mms_cell_only_barring_enable      = KAL_TRUE;
                    break;
                case 260: //PL
                    cfg->wans_cfg.wans_mms_wlan_only_barring_enable      = KAL_TRUE;
                    break;
                case 270: //LU
                    cfg->wans_cfg.wans_mms_wlan_only_barring_enable      = KAL_TRUE;
                    break;
                case 602: //EG
                    cfg->wans_cfg.wans_xcap_wlan_only_barring_enable      = KAL_TRUE;
                    cfg->wans_cfg.wans_mms_cell_only_barring_enable      = KAL_TRUE;
                    break;
                default :
                    break;
            }
            break;
        }
        case 5: /* DTAG */
        {
            /*TMEU*/
            // Supporting RAT
            cfg->wans_cfg.wans_ims_md_supporting_rat           = 0x1; // LTE
            cfg->wans_cfg.wans_ims_23G_setup_barring_enable    = KAL_TRUE;
            /* VoLTE roaming barring */
            // cfg->wans_cfg.wans_ims_roaming_barring_enable = KAL_TRUE;
            cfg->wans_cfg.wans_ims_roaming_ho_enable      = KAL_FALSE;
            /* IMS cell prefer wlan dereg*/
            cfg->wans_cfg.wans_ims_cs_pref_enable    = KAL_TRUE;
            cfg->wans_cfg.wans_ims_cs_pref_while_roaming_enable    = KAL_TRUE;
            cfg->wans_cfg.wans_ims_wlan_dereg_enable = KAL_TRUE;
            /* Throttling timer Settings */
            cfg->wans_cfg.throttling_cfg.wans_throttling_wlan_enable = BITMASK(WANS_CFG_THROTTLING_ENABLE);
            cfg->wans_cfg.throttling_cfg.wans_wrovein_throttling_t = 10;
            cfg->wans_cfg.throttling_cfg.wans_throttling_md_enable   = BITMASK(WANS_CFG_THROTTLING_ENABLE);
            cfg->wans_cfg.throttling_cfg.wans_wroveout_throttling_t= 10;
            /* WLAN signal strength threshold */
            cfg->wans_cfg.sig_cfg.wlan_sig_thr_cfg.wans_wlan_rssi_rove_poor_th = -90;
            cfg->wans_cfg.sig_cfg.wlan_sig_thr_cfg.wans_wlan_rssi_rove_fair_th = -85;
            cfg->wans_cfg.sig_cfg.wlan_sig_thr_cfg.wans_wlan_rssi_ho_poor_th   = -75;
            cfg->wans_cfg.sig_cfg.wlan_sig_thr_cfg.wans_wlan_rssi_ho_fair_th   = -75;
            /* MD signal strength threshold */
            cfg->wans_cfg.sig_cfg.md_sig_thr_cfg.wans_lte_rsrp_poor_th   = -117;
            cfg->wans_cfg.sig_cfg.md_sig_thr_cfg.wans_lte_rsrp_fair_th   = -112;
            cfg->wans_cfg.sig_cfg.md_sig_thr_cfg.wans_umts_rscp_poor_th  = -113;
            cfg->wans_cfg.sig_cfg.md_sig_thr_cfg.wans_umts_rscp_fair_th  = -99;
            cfg->wans_cfg.sig_cfg.md_sig_thr_cfg.wans_gsm_rssi_poor_th   = -106;
            cfg->wans_cfg.sig_cfg.md_sig_thr_cfg.wans_gsm_rssi_fair_th   = -89;
            break;
        }
        case 6: /* Vodafone */
        {
            // Supporting RAT
            cfg->wans_cfg.wans_ims_md_supporting_rat           = 0x1; // LTE

            /* VoLTE roaming barring */
            // cfg->wans_cfg.wans_ims_roaming_barring_enable = KAL_TRUE;

            /* VoWiFi roaming barring */
            /* Location Query */
            switch (atoi(sim_mcc)) {
                case 234: // UK
                    cfg->wans_cfg.wans_ims_wlan_roaming_barring_enable = KAL_TRUE;
                    cfg->wans_cfg.loc_cfg.wans_location_enable         = KAL_TRUE;
                    cfg->wans_cfg.loc_cfg.wans_ims_wlan_use_nv_md_srv_if_unknown_home_in_flight_mode = KAL_FALSE;
                    break;
                case 602: // EG
                    cfg->wans_cfg.wans_ims_vops_barring_enable         = KAL_FALSE;
                    cfg->wans_cfg.wans_ims_vops_setup_barring_enable   = KAL_FALSE;
                    break;
                case 226: // RO
                    cfg->wans_cfg.wans_ims_wlan_roaming_barring_enable = KAL_TRUE;
                    cfg->wans_cfg.loc_cfg.wans_location_enable         = KAL_TRUE;
                    break;
                default:
                    cfg->wans_cfg.wans_ims_wlan_roaming_barring_enable = KAL_FALSE;
                    cfg->wans_cfg.loc_cfg.wans_location_enable         = KAL_FALSE;
                    break;
            }

            /* IMS cell prefer wlan dereg*/
            cfg->wans_cfg.wans_ims_wlan_dereg_enable = KAL_TRUE;

            /* Throttling timer Settings */
            cfg->wans_cfg.throttling_cfg.wans_throttling_wlan_enable             = BITMASK(WANS_CFG_THROTTLING_ENABLE);
            cfg->wans_cfg.throttling_cfg.wans_wrovein_throttling_t               = 20;
            cfg->wans_cfg.throttling_cfg.wans_throttling_md_enable               = BITMASK(WANS_CFG_THROTTLING_ENABLE);
            cfg->wans_cfg.throttling_cfg.wans_wroveout_throttling_t              = 20;
            cfg->wans_cfg.throttling_cfg.wans_throttling_md_qual_override_enable = KAL_TRUE;

            /* Measurement timer Settings */
            cfg->wans_cfg.meas_cfg.wans_wrovein_meas_t 	= 640;
            cfg->wans_cfg.meas_cfg.wans_wroveout_meas_t	= 640;

            /* WiFi Call Rove Out Alert */
            cfg->wans_cfg.wans_wifi_call_roveout_alert_enable  = KAL_TRUE;

            /* Threshold of Signal Strength */
            /* WLAN signal strength threshold */
            switch (atoi(sim_mcc)) {
                case 272: // IE(Ireland)
                    cfg->wans_cfg.sig_cfg.wlan_sig_thr_cfg.wans_wlan_rssi_rove_poor_th = -79;
                    cfg->wans_cfg.sig_cfg.wlan_sig_thr_cfg.wans_wlan_rssi_rove_fair_th = -72;
                    break;                 
                case 286: // TR(Turkey)
                    cfg->wans_cfg.sig_cfg.wlan_sig_thr_cfg.wans_wlan_rssi_rove_poor_th = -79;
                    cfg->wans_cfg.sig_cfg.wlan_sig_thr_cfg.wans_wlan_rssi_rove_fair_th = -72;
                    cfg->wans_cfg.sig_cfg.wlan_sig_thr_cfg.wans_wlan_rssi_ho_poor_th   = -79;
                    cfg->wans_cfg.sig_cfg.wlan_sig_thr_cfg.wans_wlan_rssi_ho_fair_th   = -72;
                    break;
                default:
                    cfg->wans_cfg.sig_cfg.wlan_sig_thr_cfg.wans_wlan_rssi_rove_poor_th = -85;
                    cfg->wans_cfg.sig_cfg.wlan_sig_thr_cfg.wans_wlan_rssi_rove_fair_th = -75;
                    cfg->wans_cfg.sig_cfg.wlan_sig_thr_cfg.wans_wlan_rssi_ho_poor_th   = -85;
                    cfg->wans_cfg.sig_cfg.wlan_sig_thr_cfg.wans_wlan_rssi_ho_fair_th   = -75;
                    break;
            }

            /* MD signal strength threshold */
            switch (atoi(sim_mcc)) {
                case 234: // GB(UK)
                    cfg->wans_cfg.sig_cfg.md_sig_thr_cfg.wans_lte_rsrp_poor_th   = -116;
                    cfg->wans_cfg.sig_cfg.md_sig_thr_cfg.wans_lte_rsrp_fair_th   = -110;
                    cfg->wans_cfg.sig_cfg.md_sig_thr_cfg.wans_umts_rscp_poor_th  = -110;
                    cfg->wans_cfg.sig_cfg.md_sig_thr_cfg.wans_umts_rscp_fair_th  = -105;
                    cfg->wans_cfg.sig_cfg.md_sig_thr_cfg.wans_gsm_rssi_poor_th   = -102;
                    cfg->wans_cfg.sig_cfg.md_sig_thr_cfg.wans_gsm_rssi_fair_th   = -99;
                    break;
                case 230: // CZ
                    cfg->wans_cfg.sig_cfg.md_sig_thr_cfg.wans_lte_rsrp_poor_th   = -118;
                    cfg->wans_cfg.sig_cfg.md_sig_thr_cfg.wans_lte_rsrp_fair_th   = -110;
                    cfg->wans_cfg.sig_cfg.md_sig_thr_cfg.wans_umts_rscp_poor_th  = -110;
                    cfg->wans_cfg.sig_cfg.md_sig_thr_cfg.wans_umts_rscp_fair_th  = -100;
                    cfg->wans_cfg.sig_cfg.md_sig_thr_cfg.wans_gsm_rssi_poor_th   = -100;
                    cfg->wans_cfg.sig_cfg.md_sig_thr_cfg.wans_gsm_rssi_fair_th   = -94;
                    break;
                case 204: // NL(Netherlands)
                    cfg->wans_cfg.sig_cfg.md_sig_thr_cfg.wans_lte_rsrp_poor_th   = -118;
                    cfg->wans_cfg.sig_cfg.md_sig_thr_cfg.wans_lte_rsrp_fair_th   = -104;
                    cfg->wans_cfg.sig_cfg.md_sig_thr_cfg.wans_umts_rscp_poor_th  = -112;
                    cfg->wans_cfg.sig_cfg.md_sig_thr_cfg.wans_umts_rscp_fair_th  = -104;
                    cfg->wans_cfg.sig_cfg.md_sig_thr_cfg.wans_gsm_rssi_poor_th   = -102;
                    cfg->wans_cfg.sig_cfg.md_sig_thr_cfg.wans_gsm_rssi_fair_th   = -94;
                    break;
                case 202: // GR(Greece)
                    cfg->wans_cfg.sig_cfg.md_sig_thr_cfg.wans_lte_rsrp_poor_th   = -118;
                    cfg->wans_cfg.sig_cfg.md_sig_thr_cfg.wans_lte_rsrp_fair_th   = -110;
                    cfg->wans_cfg.sig_cfg.md_sig_thr_cfg.wans_umts_rscp_poor_th  = -106;
                    cfg->wans_cfg.sig_cfg.md_sig_thr_cfg.wans_umts_rscp_fair_th  = -100;
                    cfg->wans_cfg.sig_cfg.md_sig_thr_cfg.wans_gsm_rssi_poor_th   = -100;
                    cfg->wans_cfg.sig_cfg.md_sig_thr_cfg.wans_gsm_rssi_fair_th   = -94;
                    break;                                
                case 226: // RO(Romania)
                    cfg->wans_cfg.sig_cfg.md_sig_thr_cfg.wans_lte_rsrp_poor_th   = -118;
                    cfg->wans_cfg.sig_cfg.md_sig_thr_cfg.wans_lte_rsrp_fair_th   = -110;
                    cfg->wans_cfg.sig_cfg.md_sig_thr_cfg.wans_umts_rscp_poor_th  = -106;
                    cfg->wans_cfg.sig_cfg.md_sig_thr_cfg.wans_umts_rscp_fair_th  = -100;
                    cfg->wans_cfg.sig_cfg.md_sig_thr_cfg.wans_gsm_rssi_poor_th   = -100;
                    cfg->wans_cfg.sig_cfg.md_sig_thr_cfg.wans_gsm_rssi_fair_th   = -94;
                    break;
                default:
                    // Apply OM threshold at that time
                    cfg->wans_cfg.sig_cfg.md_sig_thr_cfg.wans_lte_rsrp_poor_th   = -116;
                    cfg->wans_cfg.sig_cfg.md_sig_thr_cfg.wans_lte_rsrp_fair_th   = -106;
                    cfg->wans_cfg.sig_cfg.md_sig_thr_cfg.wans_umts_rscp_poor_th  = -109;
                    cfg->wans_cfg.sig_cfg.md_sig_thr_cfg.wans_umts_rscp_fair_th  = -104;
                    cfg->wans_cfg.sig_cfg.md_sig_thr_cfg.wans_gsm_rssi_poor_th   = -102;
                    cfg->wans_cfg.sig_cfg.md_sig_thr_cfg.wans_gsm_rssi_fair_th   = -94;
                    break;
            }

            /* Threshold of QoS */
            cfg->wans_cfg.qos_cfg.qos_rtp_cfg.wans_rtp_qos_enable                = KAL_TRUE;
            cfg->wans_cfg.qos_cfg.qos_rtp_cfg.wans_ims_wlan_voice_rtp_jitter_th  = 255; // 0~255
            cfg->wans_cfg.qos_cfg.qos_rtp_cfg.wans_ims_wlan_video_rtp_jitter_th  = 255; // 0~255
            cfg->wans_cfg.qos_cfg.qos_rtp_cfg.wans_ims_rtp_wlan_pkt_loss_th      = 4;   // 0~100
            cfg->wans_cfg.qos_cfg.qos_rtp_cfg.wans_ims_rtp_wlan_qos_bkoff_t      = 20;  // 20 s
            cfg->wans_cfg.qos_cfg.qos_rtp_cfg.wans_wlan_rtp_pkt_loss_th          = 4;   // 0~100
            cfg->wans_cfg.qos_cfg.qos_rtp_cfg.wans_wlan_rtp_sampling_duration    = 5;   // 5 s
            cfg->wans_cfg.qos_cfg.qos_rtp_cfg.wans_wlan_rtcp_jitter_delay_th     = UNDEF_CONFIG_32;   // not to enable
            break;
        }
        case 7: /* AT&T */
        case 145: /* Cricket */
        case 196: /*FirstNet*/
        {
			cfg->wans_cfg.wans_ims_md_supporting_rat           = 0x3; // LTE&3G
			// cfg->wans_cfg.wans_ims_roaming_barring_enable = KAL_FALSE;
            cfg->wans_cfg.wans_ims_vops_barring_enable   = KAL_FALSE;
			cfg->wans_cfg.wans_ims_23G_setup_barring_enable         = KAL_FALSE;
			cfg->wans_cfg.wans_ims_vops_setup_barring_enable         = KAL_FALSE;
			
			cfg->wans_cfg.sig_cfg.md_sig_thr_cfg.wans_lte_rsrp_poor_th   = -114;
            cfg->wans_cfg.sig_cfg.md_sig_thr_cfg.wans_lte_rsrp_fair_th   = -94;
			cfg->wans_cfg.sig_cfg.md_sig_thr_cfg.wans_lte_rssnr_poor_th = -3;
            cfg->wans_cfg.sig_cfg.md_sig_thr_cfg.wans_lte_rssnr_fair_th = 2;
			cfg->wans_cfg.sig_cfg.md_sig_thr_cfg.wans_umts_rscp_poor_th  = -105;
            cfg->wans_cfg.sig_cfg.md_sig_thr_cfg.wans_umts_rscp_fair_th  = -85;
			cfg->wans_cfg.sig_cfg.md_sig_thr_cfg.wans_umts_ecno_poor_th      = -15;    
            cfg->wans_cfg.sig_cfg.md_sig_thr_cfg.wans_umts_ecno_fair_th      = -11;
			cfg->wans_cfg.sig_cfg.md_sig_thr_cfg.wans_gsm_rssi_poor_th   = -102;
            cfg->wans_cfg.sig_cfg.md_sig_thr_cfg.wans_gsm_rssi_fair_th   = -94;

            cfg->wans_cfg.sig_cfg.wlan_sig_thr_cfg.wans_wlan_rssi_rove_poor_th = -80; //from v19.1
            cfg->wans_cfg.sig_cfg.wlan_sig_thr_cfg.wans_wlan_rssi_rove_fair_th = -75;
            cfg->wans_cfg.sig_cfg.wlan_sig_thr_cfg.wans_wlan_rssi_ho_poor_th   = -80; //from v19.1
            cfg->wans_cfg.sig_cfg.wlan_sig_thr_cfg.wans_wlan_rssi_ho_fair_th   = -75;

            cfg->wans_cfg.qos_cfg.qos_rtp_cfg.wans_rtp_qos_enable                = KAL_TRUE;
            cfg->wans_cfg.qos_cfg.qos_rtp_cfg.wans_ims_wlan_voice_rtp_jitter_th  = UNDEF_CONFIG_32; // 0~255
            cfg->wans_cfg.qos_cfg.qos_rtp_cfg.wans_ims_wlan_video_rtp_jitter_th  = UNDEF_CONFIG_32; // 0~255
            cfg->wans_cfg.qos_cfg.qos_rtp_cfg.wans_ims_rtp_wlan_qos_bkoff_t      = UNDEF_CONFIG_32; //s
            cfg->wans_cfg.qos_cfg.qos_rtp_cfg.wans_wlan_rtp_sampling_duration    = 15; //s
            cfg->wans_cfg.qos_cfg.qos_rtp_cfg.wans_wlan_rtcp_jitter_delay_th    = 100; //ms 
            cfg->wans_cfg.qos_cfg.qos_rtp_cfg.wans_wlan_rtcp_plr_th             = 30; //percentage
            cfg->wans_cfg.qos_cfg.qos_rtp_cfg.wans_ims_rtp_wlan_pkt_loss_th     =UNDEF_CONFIG_32; // not to enable

            // WiFi Call Rove Out Alert , 18384_UXrequirements_1906_v3.0.pdf DS7
            cfg->wans_cfg.wans_wifi_call_roveout_alert_enable  = KAL_TRUE;            

            cfg->wans_cfg.wans_ims_cs_pref_enable    = KAL_FALSE; //CDR-WiFi-1510 2G part removial
            cfg->wans_cfg.wans_ims_wlan_dereg_enable = KAL_FALSE; //CDR-WiFi-1510 2G part removial

            cfg->wans_cfg.wans_default_roaming_barring_enable = KAL_FALSE; //1.ALPS03840135(not refer to data roaming UI). 2.next gen we plat to default disable defatul PDN barring logic
            cfg->wans_cfg.wans_md_sig_report_timer_type = IWLAN_L4C_TIMER_STRICT;  // CDR-WiFi-1510 500 ms
            cfg->wans_cfg.wans_md_sig_report_duration   = 500;                     // CDR-WiFi-1510 500 ms

            switch (atoi(sim_mcc)) {
                case 334: /* Mexico */
                    cfg->wans_cfg.wans_ims_23G_setup_barring_enable = KAL_TRUE;
                    cfg->wans_cfg.wans_ims_md_supporting_rat = 0x1; 
                    cfg->wans_cfg.wans_ims_wlan_roaming_barring_enable = KAL_FALSE;
                    break;
                default:
                    break;     
            }
            break;
        }
        case 8: /* TMOUS */
        {
            // Supporting RAT
            cfg->wans_cfg.wans_ims_md_supporting_rat = 0x1; // LTE

            /* VoLTE VoPS barring */
            cfg->wans_cfg.wans_ims_vops_barring_enable = KAL_TRUE;
            cfg->wans_cfg.wans_ims_vops_setup_barring_enable = KAL_TRUE;

            /* VoLTE roaming barring */
            // cfg->wans_cfg.wans_ims_roaming_barring_enable = KAL_FALSE;

            /* VoWiFi roaming barring */
            cfg->wans_cfg.wans_ims_wlan_roaming_barring_enable = KAL_FALSE;

            /* IMS romaing No incall Handover */
            cfg->wans_cfg.wans_ims_roaming_incall_ho_enable = KAL_FALSE;

            /* IMS cell prefer wlan dereg*/
            cfg->wans_cfg.wans_ims_cs_pref_enable = KAL_TRUE;
            cfg->wans_cfg.wans_ims_wlan_dereg_enable = KAL_FALSE;

            /* IMS SIPCPI barring */
            cfg->wans_cfg.wans_ims_sipcpi_barring_enable = KAL_TRUE;

            /* IMS PCSCF Quality */
            cfg->wans_cfg.wans_ims_pcscf_quality_enable = KAL_TRUE;
            cfg->wans_cfg.wans_ims_pcscf_state_bkoff_t = 120; // 2 min

            /* IMS EVS Call thr offset */
            cfg->wans_cfg.wans_ims_evs_call_thr_offset = 0; // -2 dbm => 0 dbm because only need to align cellular prefer threshold REQ (from TMO SME)

            /* IMS ECC over IMS Handover Disable */
            cfg->wans_cfg.wans_ims_ecc_over_ims_ho_lte_to_wifi_enable = KAL_FALSE;
            cfg->wans_cfg.wans_ims_ecc_over_ims_ho_wifi_to_lte_enable = KAL_FALSE;

            /* WiFi Calling Rove-out Alert */
            cfg->wans_cfg.wans_wifi_call_roveout_alert_enable = KAL_TRUE;

            /* 1st PDN LTE prefer APN type (wans_cfg_apn_type_bitmap_e) */ 
            cfg->wans_cfg.wans_1stpdn_lte_pref_apn_type = 
                BITMASK(WANS_CFG_APN_TYPE_DEFAULT) |
                BITMASK(WANS_CFG_APN_TYPE_IMS);

            /* Cellular Threshold settings (rove out threshold is comapre by "<=") */
            cfg->wans_cfg.sig_cfg.md_sig_thr_cfg.wans_lte_rsrp_poor_th  = -116; // -117 roveout
            cfg->wans_cfg.sig_cfg.md_sig_thr_cfg.wans_lte_rsrp_fair_th  = -112;
            cfg->wans_cfg.sig_cfg.md_sig_thr_cfg.wans_umts_rscp_poor_th = -109; // -110 roveout
            cfg->wans_cfg.sig_cfg.md_sig_thr_cfg.wans_umts_rscp_fair_th = -100;
            cfg->wans_cfg.sig_cfg.md_sig_thr_cfg.wans_gsm_rssi_poor_th  = -104; // -105 roveout
            cfg->wans_cfg.sig_cfg.md_sig_thr_cfg.wans_gsm_rssi_fair_th  = -95;

            /* WiFi Rove-in/out, Hand-in/out Threshold setting */
            cfg->wans_cfg.sig_cfg.wlan_sig_thr_cfg.wans_wlan_rssi_rove_poor_th = -80;
            cfg->wans_cfg.sig_cfg.wlan_sig_thr_cfg.wans_wlan_rssi_rove_fair_th = -70;
            cfg->wans_cfg.sig_cfg.wlan_sig_thr_cfg.wans_wlan_rssi_ho_poor_th   = -80;
            cfg->wans_cfg.sig_cfg.wlan_sig_thr_cfg.wans_wlan_rssi_ho_fair_th   = -70;

            /* No Roaming barring for Xcap, supl Service */
            cfg->wans_cfg.wans_xcap_roaming_barring_enable = KAL_FALSE;

            /* MD signal power level monitor hysteresis duration(seconds) */
            cfg->wans_cfg.wans_md_sig_report_duration = 3;

            cfg->wans_cfg.qos_cfg.qos_rtp_cfg.wans_rtp_qos_enable                = KAL_TRUE;
            cfg->wans_cfg.qos_cfg.qos_rtp_cfg.wans_wlan_ho_begin_no_rtp_rollback = 2000; // 2 secs
            cfg->wans_cfg.qos_cfg.qos_rtp_cfg.wans_cell_ho_begin_no_rtp_rollback = 2000; // 2 secs
            break;
        }
        case 9: /* CT */
        {
            break;
        }
        case 11: /* H3G */
        {
            /* RAT preference order; 4G -> 3G/2G -> WiFi */
            cfg->wans_cfg.wans_ims_cs_pref_enable    = KAL_TRUE;
            cfg->wans_cfg.wans_ims_wlan_dereg_enable = KAL_TRUE;

            /* MD signal strength threshold */
            cfg->wans_cfg.sig_cfg.md_sig_thr_cfg.wans_lte_rsrp_poor_th   = -116;
            cfg->wans_cfg.sig_cfg.md_sig_thr_cfg.wans_lte_rsrp_fair_th   = -110;
            cfg->wans_cfg.sig_cfg.md_sig_thr_cfg.wans_umts_rscp_poor_th  = -110;
            cfg->wans_cfg.sig_cfg.md_sig_thr_cfg.wans_umts_rscp_fair_th  = -105;
            cfg->wans_cfg.sig_cfg.md_sig_thr_cfg.wans_gsm_rssi_poor_th   = -102;
            cfg->wans_cfg.sig_cfg.md_sig_thr_cfg.wans_gsm_rssi_fair_th   = -97;

            /* Maintain IMS PDN on non-vops cellular when call is active,
             * setup and idle handover are not allowed */
            cfg->wans_cfg.wans_ims_vops_barring_enable         = KAL_FALSE;
            cfg->wans_cfg.wans_ims_vops_setup_barring_enable   = KAL_TRUE;
            cfg->wans_cfg.wans_ims_vops_idle_ho_barring_enable = KAL_TRUE;

            /* Trigger de-register in WiFi when in idle mode and rove-out threshold reached */
            cfg->wans_cfg.wans_ims_dereg_dead_zone_enable = KAL_TRUE;
            cfg->wans_cfg.wans_ims_dereg_dead_zone_incall_barring_enable = KAL_TRUE;
            cfg->wans_cfg.sig_cfg.wlan_sig_thr_cfg.wans_wlan_rssi_no_cell_poor_th = -90;
            cfg->wans_cfg.sig_cfg.wlan_sig_thr_cfg.wans_wlan_rssi_no_cell_fair_th = -85;

            switch (atoi(sim_mcc)) {
                case 234: // UK
                case 235: // UK
                    /* Throttling timer Settings */
                    cfg->wans_cfg.throttling_cfg.wans_throttling_wlan_enable = KAL_TRUE;
                    cfg->wans_cfg.throttling_cfg.wans_wrovein_throttling_t = 30;
                    cfg->wans_cfg.throttling_cfg.wans_throttling_md_enable   = KAL_TRUE;
                    cfg->wans_cfg.throttling_cfg.wans_wroveout_throttling_t= 30;

                    /* VoWiFi roaming barring */
                    cfg->wans_cfg.wans_ims_wlan_roaming_barring_enable = KAL_TRUE;
                    cfg->wans_cfg.loc_cfg.wans_location_enable         = KAL_TRUE;
                    break;
                case 240: //SE
                    cfg->wans_cfg.wans_mms_ims_pdn_connected_barring_enable = KAL_TRUE;
                    break;
                case 238: //DK
                    cfg->wans_cfg.wans_mms_ims_pdn_connected_barring_enable = KAL_TRUE;
                    cfg->wans_cfg.wans_ims_cs_pref_while_roaming_enable     = KAL_TRUE;
                    break;
                default :
                    break;
            }
            break;
        }
        case 12: /* VzW */
        {
            // Supporting RAT
            cfg->wans_cfg.wans_ims_md_supporting_rat = 0x1; // LTE

            /* VoLTE VoPS barring */
            cfg->wans_cfg.wans_ims_vops_barring_enable = KAL_FALSE;
            cfg->wans_cfg.wans_ims_vops_setup_barring_enable = KAL_FALSE;

            /* VoLTE roaming barring */
            // cfg->wans_cfg.wans_ims_roaming_barring_enable = KAL_FALSE;

            /* VoWiFi roaming barring */
            cfg->wans_cfg.wans_ims_wlan_roaming_barring_enable = KAL_FALSE;

            /* IMS romaing Handover */
            cfg->wans_cfg.wans_ims_roaming_incall_ho_enable = KAL_FALSE;
			cfg->wans_cfg.wans_ims_roaming_ho_enable = KAL_TRUE;

            /* IMS cell prefer wlan dereg*/
            cfg->wans_cfg.wans_ims_cs_pref_enable = KAL_FALSE;
            cfg->wans_cfg.wans_ims_wlan_dereg_enable = KAL_FALSE;

			/* Emergency PDN handover */
            cfg->wans_cfg.wans_ecc_ho_enable = KAL_TRUE;            

            /* Throttling timer Setting, only enable for idle mode */
            cfg->wans_cfg.throttling_cfg.wans_throttling_wlan_enable = \
            cfg->wans_cfg.throttling_cfg.wans_throttling_md_enable   = \
                BITMASK(WANS_CFG_THROTTLING_ENABLE) |
                BITMASK(WANS_CFG_THROTTLING_IDLE);
            cfg->wans_cfg.throttling_cfg.wans_wrovein_throttling_t  = 120;
            cfg->wans_cfg.throttling_cfg.wans_wroveout_throttling_t = 120;

            /* Threshold Settings */
			cfg->wans_cfg.sig_cfg.md_sig_thr_cfg.wans_lte_rsrp_poor_th = -115;
			cfg->wans_cfg.sig_cfg.md_sig_thr_cfg.wans_lte_rsrp_fair_th = -112;
            cfg->wans_cfg.sig_cfg.md_sig_thr_cfg.wans_lte_rsrp_good_th = -100;
            cfg->wans_cfg.sig_cfg.md_sig_thr_cfg.wans_lte_rsrq_poor_th = -18;
            cfg->wans_cfg.sig_cfg.md_sig_thr_cfg.wans_lte_rsrq_fair_th = -15;
            cfg->wans_cfg.sig_cfg.md_sig_thr_cfg.wans_lte_rsrq_good_th = -11; 

			cfg->wans_cfg.sig_cfg.wlan_sig_thr_cfg.wans_wlan_rssi_rove_poor_th = -80;
            cfg->wans_cfg.sig_cfg.wlan_sig_thr_cfg.wans_wlan_rssi_rove_fair_th = -65;
            cfg->wans_cfg.sig_cfg.wlan_sig_thr_cfg.wans_wlan_rssi_ho_poor_th   = -80;
            cfg->wans_cfg.sig_cfg.wlan_sig_thr_cfg.wans_wlan_rssi_ho_fair_th   = -65;

            /* IMS no voice sup sms enable */
            cfg->wans_cfg.wans_ims_no_voice_sup_sms_enable = KAL_TRUE;

            /* IMS voice cap prefer enable */
            cfg->wans_cfg.wans_ims_voice_cap_pref_enable = KAL_TRUE;

            /* Threshold of QoS */
            cfg->wans_cfg.qos_cfg.qos_rtp_cfg.wans_rtp_qos_enable                = KAL_TRUE;
            cfg->wans_cfg.qos_cfg.qos_rtp_cfg.wans_ims_wlan_voice_rtp_jitter_th  = 255; // 0~255
            cfg->wans_cfg.qos_cfg.qos_rtp_cfg.wans_ims_wlan_video_rtp_jitter_th  = 255; // 0~255
            cfg->wans_cfg.qos_cfg.qos_rtp_cfg.wans_ims_rtp_wlan_pkt_loss_th      = 99;  // VzW needs RTP QoS, but doesn't set quality POOR
            cfg->wans_cfg.qos_cfg.qos_rtp_cfg.wans_ims_rtp_wlan_qos_bkoff_t      = 20;  // 20 s
            cfg->wans_cfg.qos_cfg.qos_rtp_cfg.wans_wlan_rtp_pkt_loss_th          = 99;  // 0~100(%)
            cfg->wans_cfg.qos_cfg.qos_rtp_cfg.wans_wlan_rtp_sampling_duration    = 5;   // 5 s
            cfg->wans_cfg.qos_cfg.qos_rtp_cfg.wans_wlan_rtcp_jitter_delay_th     = UNDEF_CONFIG_32;   // not to enable

            cfg->wans_cfg.qos_cfg.qos_rtp_cfg.wans_wlan_no_rtp_handover_enable   = KAL_FALSE;
            cfg->wans_cfg.qos_cfg.qos_dpd_cfg.wans_dpd_qos_enable                = KAL_TRUE;
            cfg->wans_cfg.qos_cfg.qos_dpd_cfg.wans_ims_rtp_high_pkt_loss_for_dpd_th = 30;  // 0~100(%)
            cfg->wans_cfg.qos_cfg.qos_dpd_cfg.wans_ims_rtp_low_pkt_loss_for_dpd_th  = 10;  // 0~100(%)


            break;
        }
        case 15: /* Telefonica */
        {
            switch (atoi(sim_mcc)) {
                case 234: // UK
                    cfg->wans_cfg.sig_cfg.wlan_sig_thr_cfg.wans_wlan_rssi_rove_poor_th = -75;
                    cfg->wans_cfg.sig_cfg.wlan_sig_thr_cfg.wans_wlan_rssi_rove_fair_th = -70;
                    cfg->wans_cfg.sig_cfg.md_sig_thr_cfg.wans_lte_rsrp_poor_th       = -116; //-43~-141
                    cfg->wans_cfg.sig_cfg.md_sig_thr_cfg.wans_lte_rsrp_fair_th       = -90; //-43~-141   
                    break;
                case 262: // DE
                    cfg->wans_cfg.wans_ims_md_supporting_rat        = 0x7; // LTE/3G/2G
                    cfg->wans_cfg.wans_ims_23G_setup_barring_enable = KAL_TRUE;
                    break;
                case 214: // ES
                    cfg->wans_cfg.wans_ims_md_supporting_rat        = 0x7; // LTE/3G/2G
                    break;
                default:
                    break;
            }
            break;
        }
        case 16: /* EE */
        {
            cfg->wans_cfg.wans_ims_md_supporting_rat = 0x1;
            cfg->wans_cfg.wans_ims_cs_pref_enable    = KAL_FALSE;
            // cfg->wans_cfg.wans_ims_roaming_barring_enable = KAL_FALSE;
            cfg->wans_cfg.wans_ecc_ho_enable = KAL_FALSE;

            /* Should be enabled for [GCF][VoWiFi-46.2.3][92.6.2.3]. Default = KAL_FALSE */
            cfg->wans_cfg.wans_ims_dereg_poor_wifi = KAL_FALSE;

            /* Threshold of QoS */
            cfg->wans_cfg.qos_cfg.qos_rtp_cfg.wans_rtp_qos_enable                = KAL_TRUE;
            cfg->wans_cfg.qos_cfg.qos_rtp_cfg.wans_ims_rtp_wlan_pkt_loss_th      = 50;   // 0~100
            cfg->wans_cfg.qos_cfg.qos_rtp_cfg.wans_ims_rtp_wlan_qos_bkoff_t      = 20;  // 20 s
            cfg->wans_cfg.qos_cfg.qos_rtp_cfg.wans_wlan_rtp_sampling_duration    = 5;   // 5 s

            /* Handover thresholds for call active */
            cfg->wans_cfg.sig_cfg.wlan_sig_thr_cfg.wans_wlan_rssi_ho_poor_th   = -85;
            cfg->wans_cfg.sig_cfg.wlan_sig_thr_cfg.wans_wlan_rssi_ho_fair_th   = -75;
            break;
        }
        case 17: /* DoCoMo */
        {
            // cfg->wans_cfg.wans_ims_roaming_barring_enable = KAL_FALSE;
            break;
        }
        case 18: /* RJIL */
        {
            // cfg->wans_cfg.wans_ims_roaming_barring_enable = KAL_FALSE;
            cfg->wans_cfg.wans_ims_vops_barring_enable   = KAL_TRUE;
            cfg->wans_cfg.qos_cfg.qos_rtp_cfg.wans_rtp_qos_enable                = KAL_TRUE;
            cfg->wans_cfg.qos_cfg.qos_rtp_cfg.wans_ims_wlan_voice_rtp_jitter_th  = 25; //0~255
            cfg->wans_cfg.qos_cfg.qos_rtp_cfg.wans_ims_wlan_video_rtp_jitter_th  = 25; //0~255
            cfg->wans_cfg.qos_cfg.qos_rtp_cfg.wans_ims_rtp_wlan_pkt_loss_th      = 50; //0~100
            cfg->wans_cfg.qos_cfg.qos_rtp_cfg.wans_ims_rtp_wlan_qos_bkoff_t      = 600; //default is 10 mins
            cfg->wans_cfg.qos_cfg.qos_rtp_cfg.wans_wlan_rtp_pkt_loss_th          = 50; //0~100
            cfg->wans_cfg.qos_cfg.qos_rtp_cfg.wans_wlan_rtp_sampling_duration    = 5; //5 s
            cfg->wans_cfg.qos_cfg.qos_rtp_cfg.wans_wlan_rtcp_jitter_delay_th     = UNDEF_CONFIG_32;   // not to enable
            cfg->wans_cfg.sig_cfg.wlan_sig_thr_cfg.wans_wlan_rssi_rove_poor_th = -85;
            cfg->wans_cfg.sig_cfg.wlan_sig_thr_cfg.wans_wlan_rssi_rove_fair_th = -75;
            cfg->wans_cfg.sig_cfg.wlan_sig_thr_cfg.wans_wlan_rssi_ho_poor_th   = -85;
            cfg->wans_cfg.sig_cfg.wlan_sig_thr_cfg.wans_wlan_rssi_ho_fair_th   = -75;
            cfg->wans_cfg.sig_cfg.md_sig_thr_cfg.wans_lte_rsrp_poor_th       = -116; //-43~-141
            cfg->wans_cfg.sig_cfg.md_sig_thr_cfg.wans_lte_rsrp_fair_th       = -106; //-43~-141   
            cfg->wans_cfg.sig_cfg.md_sig_thr_cfg.wans_lte_rsrq_poor_th       = -19; //-3~-20
            cfg->wans_cfg.sig_cfg.md_sig_thr_cfg.wans_lte_rsrq_fair_th       = -17; //-3~-20  
            //ping
            cfg->wans_cfg.qos_cfg.qos_ping_cfg.wans_ping_qos_enable     = KAL_TRUE;
            cfg->wans_cfg.qos_cfg.qos_ping_cfg.wans_ping_interval       = 1800; //in sec = 30 mins
            cfg->wans_cfg.qos_cfg.qos_ping_cfg.wans_ping_latency_th     = 5000; //in ms
            cfg->wans_cfg.qos_cfg.qos_ping_cfg.wans_ping_loss_th        = 50; //0~100%
#ifdef __IWLAN_CUST_DIS_RJIO_VOWIFI116__
            cfg->wans_cfg.wans_config_reserved1 = KAL_TRUE; //disable VoWiFi-TR 11.6 
#endif            
            break;
        }
        case 19: /* Telstra */
        {
            cfg->wans_cfg.sig_cfg.md_sig_thr_cfg.wans_lte_rsrp_poor_th       = -118; //-43~-141
            cfg->wans_cfg.sig_cfg.md_sig_thr_cfg.wans_lte_rsrp_fair_th       = -110; //-43~-141
            cfg->wans_cfg.sig_cfg.md_sig_thr_cfg.wans_umts_rscp_poor_th      = -110;
            cfg->wans_cfg.sig_cfg.md_sig_thr_cfg.wans_umts_rscp_fair_th      = -106;

            // Throttling
            cfg->wans_cfg.throttling_cfg.wans_throttling_wlan_enable = BITMASK(WANS_CFG_THROTTLING_ENABLE);
            cfg->wans_cfg.throttling_cfg.wans_wrovein_throttling_t  = 120;
            cfg->wans_cfg.throttling_cfg.wans_throttling_md_enable  = BITMASK(WANS_CFG_THROTTLING_ENABLE);
            cfg->wans_cfg.throttling_cfg.wans_wroveout_throttling_t  = 120;

            break;
        }
        case 20: /* Sprint */
        {
            /* Supporting RAT   ************/
            cfg->wans_cfg.wans_ims_md_supporting_rat                       = 0x1;       // only LTE
                                                                                       // IMS-00378
            /* VoLTE VoPS barring **********/
            cfg->wans_cfg.wans_ims_vops_barring_enable                     = KAL_FALSE; // Sprint can register IMS when only SMSIP
            cfg->wans_cfg.wans_ims_vops_setup_barring_enable               = KAL_FALSE; // IMS-00306
            cfg->wans_cfg.wans_ims_vops_idle_ho_barring_enable             = KAL_FALSE;

            /* VoLTE  roaming barring  ******/
            // cfg->wans_cfg.wans_ims_roaming_barring_enable                  = KAL_FALSE; // IMS-00306: Sprint doesn't restrict roaming

            /* VoWiFi roaming barring ******/
            cfg->wans_cfg.wans_ims_wlan_roaming_barring_enable             = KAL_FALSE; // IMS-00306: Sprint doesn't restrict roaming

            /* IMS romaing Handover ********/
            cfg->wans_cfg.wans_ims_roaming_incall_ho_enable                = KAL_FALSE; // Sprint doesn't describe romaing handover
            cfg->wans_cfg.wans_ims_roaming_ho_enable                       = KAL_TRUE;  // So, follow VzW
            cfg->wans_cfg.wans_default_roaming_barring_enable              = KAL_FALSE;

            /* IMS cell prefer wlan dereg **/
            /* Refer to VLTE-00095  ********/
            cfg->wans_cfg.wans_ims_cs_pref_enable                          = KAL_TRUE;  // Sprint needs CS prefer
            cfg->wans_cfg.wans_ims_wlan_dereg_enable                       = KAL_TRUE;


            /* Throttling timer setting ****/
            cfg->wans_cfg.throttling_cfg.wans_throttling_wlan_enable       = BITMASK(WANS_CFG_THROTTLING_ENABLE);
            cfg->wans_cfg.throttling_cfg.wans_throttling_md_enable         = BITMASK(WANS_CFG_THROTTLING_ENABLE);
            cfg->wans_cfg.throttling_cfg.wans_wrovein_throttling_t         = 120;       // Sprint needs throttling
            cfg->wans_cfg.throttling_cfg.wans_wroveout_throttling_t        = 120;       // But not define timer
                                                                                       // IMS-00249
            /* Threshold Settings **********/
            // Sprint doesn't define LTE / Wi-Fi quality threshold                     // IMS-00426, IMS-00442, IMS-00247
                                                                                       // IMS-00419, IMS-00425, IMS-00421
            /* Default LTE and C2K thresholds */

            /* Threshold of QoS ************/
            // Sprint doesn't QoS threshold

            /* IMS SMSIP REG ***************/
            cfg->wans_cfg.wans_ims_no_voice_sup_sms_enable                 = KAL_TRUE;  // Sprint requirement IMS-00306, IMS-00423, IMS-00443

            /* IMS prefer voice capability */
            cfg->wans_cfg.wans_ims_voice_cap_pref_enable                   = KAL_TRUE;  // Sprint doesn't define

            /* IMS location query  *********/
            cfg->wans_cfg.loc_cfg.wans_location_enable                     = KAL_TRUE;  // Sprint queries country code after WiFi association
            cfg->wans_cfg.loc_cfg.wans_ims_wlan_no_location_barring_enable = KAL_TRUE;  // IMS-00199
            cfg->wans_cfg.loc_cfg.wans_ims_wlan_block_in_ap_mode_when_home_enable = KAL_FALSE;

            /* Emergency call rules  *******/
            cfg->wans_cfg.wans_ecc_ho_enable                               = KAL_FALSE;
            cfg->wans_cfg.wans_ims_ecc_over_ims_ho_lte_to_wifi_enable      = KAL_FALSE;
            cfg->wans_cfg.wans_ims_ecc_over_ims_ho_wifi_to_lte_enable      = KAL_TRUE;
            
            break;
        }  
        case 50: /* softbank */
        {
            // cfg->wans_cfg.wans_ims_roaming_barring_enable = KAL_FALSE;
            break;
        }
        case 100: /* CSL */
        {
            cfg->wans_cfg.wans_ims_wlan_roaming_barring_enable   = KAL_TRUE;
            cfg->wans_cfg.loc_cfg.wans_location_enable = KAL_TRUE;
            break;
        }
        case 101: /* PCCW */
        {
            cfg->wans_cfg.wans_ims_wlan_roaming_barring_enable   = KAL_TRUE;
            cfg->wans_cfg.loc_cfg.wans_location_enable = KAL_TRUE;
            break;
        }
        case 102: /* SMT */
        {
            cfg->wans_cfg.wans_ims_wlan_roaming_barring_enable   = KAL_TRUE;
            cfg->wans_cfg.loc_cfg.wans_location_enable = KAL_TRUE;
            break;
        }
        case 103: /* SingTel */
        {
            break;
        }
        case 104: /* StarHub */
        {
            break;
        }
        case 106: /* 3HK */
        {
            cfg->wans_cfg.wans_ims_wlan_roaming_barring_enable   = KAL_TRUE;
            cfg->wans_cfg.loc_cfg.wans_location_enable = KAL_TRUE;
            break;
        }
        case 107: /* SFR */
        {
            cfg->wans_cfg.throttling_cfg.wans_throttling_wlan_enable = BITMASK(WANS_CFG_THROTTLING_ENABLE);
            cfg->wans_cfg.throttling_cfg.wans_wrovein_throttling_t = 30;
            cfg->wans_cfg.throttling_cfg.wans_throttling_md_enable = BITMASK(WANS_CFG_THROTTLING_ENABLE);
            cfg->wans_cfg.throttling_cfg.wans_wroveout_throttling_t= 30;

            /* WLAN signal strength threshold */
            cfg->wans_cfg.sig_cfg.wlan_sig_thr_cfg.wans_wlan_rssi_rove_poor_th = -82;
            cfg->wans_cfg.sig_cfg.wlan_sig_thr_cfg.wans_wlan_rssi_rove_fair_th = -75;

            break;
        }
        case 110: /* FET */
        {
            break;
        }
    case 111: /*India VDF*/
        {
            // cfg->wans_cfg.wans_ims_roaming_barring_enable = KAL_FALSE;
            cfg->wans_cfg.sig_cfg.wlan_sig_thr_cfg.wans_wlan_rssi_rove_poor_th = -85;
            cfg->wans_cfg.sig_cfg.wlan_sig_thr_cfg.wans_wlan_rssi_rove_fair_th = -65;
            cfg->wans_cfg.sig_cfg.wlan_sig_thr_cfg.wans_wlan_rssi_ho_poor_th   = -85;
            cfg->wans_cfg.sig_cfg.wlan_sig_thr_cfg.wans_wlan_rssi_ho_fair_th   = -65;
            break;
        }
        case 112: /* Telcel */
        {
            /* WLAN signal strength threshold */
            cfg->wans_cfg.sig_cfg.wlan_sig_thr_cfg.wans_wlan_rssi_rove_poor_th = -85;
            cfg->wans_cfg.sig_cfg.wlan_sig_thr_cfg.wans_wlan_rssi_rove_fair_th = -65;
            cfg->wans_cfg.sig_cfg.wlan_sig_thr_cfg.wans_wlan_rssi_ho_poor_th   = -85;
            cfg->wans_cfg.sig_cfg.wlan_sig_thr_cfg.wans_wlan_rssi_ho_fair_th   = -65;
            // cfg->wans_cfg.wans_ims_roaming_barring_enable = KAL_FALSE;
            switch (atoi(sim_mcc)) {
                case 334: /* Mexico */
                    cfg->wans_cfg.wans_ims_md_supporting_rat = 0x1;
                    cfg->wans_cfg.wans_ims_cs_pref_enable    = KAL_TRUE;
                    cfg->wans_cfg.wans_ims_23G_setup_barring_enable = KAL_TRUE;
                    cfg->wans_cfg.sig_cfg.wlan_sig_thr_cfg.wans_wlan_rssi_rove_poor_th = -85;
                    cfg->wans_cfg.sig_cfg.wlan_sig_thr_cfg.wans_wlan_rssi_rove_fair_th = -75;
                    cfg->wans_cfg.sig_cfg.wlan_sig_thr_cfg.wans_wlan_rssi_ho_poor_th   = -85;
                    cfg->wans_cfg.sig_cfg.wlan_sig_thr_cfg.wans_wlan_rssi_ho_fair_th   = -75;
                    cfg->wans_cfg.sig_cfg.md_sig_thr_cfg.wans_lte_rsrp_poor_th = -122;
                    cfg->wans_cfg.sig_cfg.md_sig_thr_cfg.wans_lte_rsrp_fair_th = -118;
                    cfg->wans_cfg.sig_cfg.md_sig_thr_cfg.wans_lte_rsrq_fair_th = -10;
                    cfg->wans_cfg.sig_cfg.md_sig_thr_cfg.wans_lte_rsrq_poor_th = -14;
                    cfg->wans_cfg.sig_cfg.md_sig_thr_cfg.wans_umts_rscp_fair_th = -108;
                    cfg->wans_cfg.sig_cfg.md_sig_thr_cfg.wans_umts_rscp_poor_th = -110;
                    cfg->wans_cfg.sig_cfg.md_sig_thr_cfg.wans_umts_ecno_fair_th = -10;
                    cfg->wans_cfg.sig_cfg.md_sig_thr_cfg.wans_umts_ecno_poor_th = -14;
                    break;
                default:
                    break;
                
            }
            break;
        }
        case 113: /* Beeline */
        {
            break;
        }
        case 117: /* Smartfren */
        {
            cfg->wans_cfg.wans_ims_cs_pref_enable    = KAL_FALSE;
            // cfg->wans_cfg.wans_ims_roaming_barring_enable = KAL_FALSE;
            break;
        }
        case 118: /* YTL */
        {
            break;
        }
        case 119: /* Natcom */
        {
            break;
        }
        case 120: /* Claro */
        {
            /* WLAN signal strength threshold */
            cfg->wans_cfg.sig_cfg.wlan_sig_thr_cfg.wans_wlan_rssi_rove_poor_th = -85;
            cfg->wans_cfg.sig_cfg.wlan_sig_thr_cfg.wans_wlan_rssi_rove_fair_th = -65;
            cfg->wans_cfg.sig_cfg.wlan_sig_thr_cfg.wans_wlan_rssi_ho_poor_th   = -85;
            cfg->wans_cfg.sig_cfg.wlan_sig_thr_cfg.wans_wlan_rssi_ho_fair_th   = -65;
            // cfg->wans_cfg.wans_ims_roaming_barring_enable = KAL_FALSE;
            cfg->wans_cfg.wans_ims_23G_setup_barring_enable = KAL_TRUE;
            cfg->wans_cfg.throttling_cfg.wans_wroveout_throttling_t = 120;
            cfg->wans_cfg.throttling_cfg.wans_wrovein_throttling_t = 120;
            cfg->wans_cfg.wans_ims_md_supporting_rat = 0x1;
            switch (atoi(sim_mcc)) {
                case 722: //AR
                    cfg->wans_cfg.wans_ims_dereg_dead_zone_enable = KAL_TRUE;
                    cfg->wans_cfg.wans_ims_dereg_dead_zone_mdpoor_barring_enable = KAL_TRUE;
                    cfg->wans_cfg.sig_cfg.md_sig_thr_cfg.wans_umts_rscp_fair_th = -108;
                    cfg->wans_cfg.sig_cfg.md_sig_thr_cfg.wans_umts_rscp_poor_th = -110;
                    cfg->wans_cfg.sig_cfg.md_sig_thr_cfg.wans_umts_ecno_fair_th = -10;
                    cfg->wans_cfg.sig_cfg.md_sig_thr_cfg.wans_umts_ecno_poor_th = -14;
                    cfg->wans_cfg.sig_cfg.md_sig_thr_cfg.wans_lte_rsrq_fair_th = -10;
                    cfg->wans_cfg.sig_cfg.md_sig_thr_cfg.wans_lte_rsrq_poor_th = -14;
                    cfg->wans_cfg.sig_cfg.md_sig_thr_cfg.wans_lte_rsrp_fair_th = -118;
                    cfg->wans_cfg.sig_cfg.md_sig_thr_cfg.wans_lte_rsrp_poor_th = -122;
                    break;
                case 724: //Brazil
                    cfg->wans_cfg.wans_ims_dereg_dead_zone_enable                = KAL_TRUE;
                    cfg->wans_cfg.wans_ims_dereg_dead_zone_mdpoor_barring_enable = KAL_TRUE;
					cfg->wans_cfg.wans_ims_dereg_dead_zone_incall_barring_enable = KAL_TRUE;
                    cfg->wans_cfg.wans_ims_md_supporting_rat = 0x3;
                    cfg->wans_cfg.wans_ims_cs_pref_enable    = KAL_TRUE;
                    cfg->wans_cfg.sig_cfg.wlan_sig_thr_cfg.wans_wlan_rssi_rove_fair_th = -75;
                    cfg->wans_cfg.sig_cfg.wlan_sig_thr_cfg.wans_wlan_rssi_rove_poor_th = -85;
                    cfg->wans_cfg.sig_cfg.wlan_sig_thr_cfg.wans_wlan_rssi_ho_fair_th   = -75;
                    cfg->wans_cfg.sig_cfg.wlan_sig_thr_cfg.wans_wlan_rssi_ho_poor_th   = -85;
                    cfg->wans_cfg.sig_cfg.md_sig_thr_cfg.wans_lte_rsrp_poor_th = -122;
                    cfg->wans_cfg.sig_cfg.md_sig_thr_cfg.wans_lte_rsrp_fair_th = -118;
                    cfg->wans_cfg.sig_cfg.md_sig_thr_cfg.wans_lte_rsrq_poor_th = -14;
                    cfg->wans_cfg.sig_cfg.md_sig_thr_cfg.wans_lte_rsrq_fair_th = -10;
                    cfg->wans_cfg.sig_cfg.md_sig_thr_cfg.wans_umts_rscp_fair_th = -108;
                    cfg->wans_cfg.sig_cfg.md_sig_thr_cfg.wans_umts_rscp_poor_th = -110;
                    cfg->wans_cfg.sig_cfg.md_sig_thr_cfg.wans_umts_ecno_fair_th = -10;
                    cfg->wans_cfg.sig_cfg.md_sig_thr_cfg.wans_umts_ecno_poor_th = -14;
                    break;
				case 730: // Chile
                    cfg->wans_cfg.wans_ims_dereg_dead_zone_enable = KAL_TRUE;
                    cfg->wans_cfg.wans_ims_dereg_dead_zone_mdpoor_barring_enable = KAL_TRUE;
                    
                    /* IMS cell prefer wlan dereg*/
                    cfg->wans_cfg.wans_ims_cs_pref_enable = KAL_TRUE;  
                    
                    // Supporting RAT
                    cfg->wans_cfg.wans_ims_md_supporting_rat = 0x3;
                    
                    /* WLAN signal strength threshold */
                    cfg->wans_cfg.sig_cfg.wlan_sig_thr_cfg.wans_wlan_rssi_rove_fair_th = -75;
                    cfg->wans_cfg.sig_cfg.wlan_sig_thr_cfg.wans_wlan_rssi_rove_poor_th = -85;
                    cfg->wans_cfg.sig_cfg.wlan_sig_thr_cfg.wans_wlan_rssi_ho_fair_th = -75;
                    cfg->wans_cfg.sig_cfg.wlan_sig_thr_cfg.wans_wlan_rssi_ho_poor_th = -85; 
                    cfg->wans_cfg.sig_cfg.md_sig_thr_cfg.wans_lte_rsrp_poor_th = -122;
                    cfg->wans_cfg.sig_cfg.md_sig_thr_cfg.wans_lte_rsrp_fair_th = -118;
                    cfg->wans_cfg.sig_cfg.md_sig_thr_cfg.wans_lte_rsrq_poor_th = -14;
                    cfg->wans_cfg.sig_cfg.md_sig_thr_cfg.wans_lte_rsrq_fair_th = -10;
                    cfg->wans_cfg.sig_cfg.md_sig_thr_cfg.wans_umts_rscp_fair_th = -108;
                    cfg->wans_cfg.sig_cfg.md_sig_thr_cfg.wans_umts_rscp_poor_th = -110;
                    cfg->wans_cfg.sig_cfg.md_sig_thr_cfg.wans_umts_ecno_fair_th = -10;
                    cfg->wans_cfg.sig_cfg.md_sig_thr_cfg.wans_umts_ecno_poor_th = -14;
                    break;
                case 732: // Colombia
                    cfg->wans_cfg.wans_ims_md_supporting_rat = 0x1;
                    cfg->wans_cfg.wans_ims_cs_pref_enable    = KAL_TRUE;
                    cfg->wans_cfg.wans_ims_23G_setup_barring_enable = KAL_TRUE;
                    cfg->wans_cfg.sig_cfg.wlan_sig_thr_cfg.wans_wlan_rssi_rove_poor_th = -85;
                    cfg->wans_cfg.sig_cfg.wlan_sig_thr_cfg.wans_wlan_rssi_rove_fair_th = -75;
                    cfg->wans_cfg.sig_cfg.wlan_sig_thr_cfg.wans_wlan_rssi_ho_poor_th   = -85;
                    cfg->wans_cfg.sig_cfg.wlan_sig_thr_cfg.wans_wlan_rssi_ho_fair_th   = -75;
                    cfg->wans_cfg.sig_cfg.md_sig_thr_cfg.wans_lte_rsrp_poor_th = -122;
                    cfg->wans_cfg.sig_cfg.md_sig_thr_cfg.wans_lte_rsrp_fair_th = -118;
                    cfg->wans_cfg.sig_cfg.md_sig_thr_cfg.wans_lte_rsrq_fair_th = -10;
                    cfg->wans_cfg.sig_cfg.md_sig_thr_cfg.wans_lte_rsrq_poor_th = -14;
                    cfg->wans_cfg.sig_cfg.md_sig_thr_cfg.wans_umts_rscp_fair_th = -108;
                    cfg->wans_cfg.sig_cfg.md_sig_thr_cfg.wans_umts_rscp_poor_th = -110;
                    cfg->wans_cfg.sig_cfg.md_sig_thr_cfg.wans_umts_ecno_fair_th = -10;
                    cfg->wans_cfg.sig_cfg.md_sig_thr_cfg.wans_umts_ecno_poor_th = -14;
                    break;
                case 748: //Uruguay
                    cfg->wans_cfg.sig_cfg.md_sig_thr_cfg.wans_lte_rsrq_fair_th = -10;
                    cfg->wans_cfg.sig_cfg.md_sig_thr_cfg.wans_lte_rsrq_poor_th = -14;
                    cfg->wans_cfg.sig_cfg.md_sig_thr_cfg.wans_lte_rsrp_fair_th = -118;
                    cfg->wans_cfg.sig_cfg.md_sig_thr_cfg.wans_lte_rsrp_poor_th = -122;
                    cfg->wans_cfg.sig_cfg.md_sig_thr_cfg.wans_umts_rscp_fair_th = -108;
                    cfg->wans_cfg.sig_cfg.md_sig_thr_cfg.wans_umts_rscp_poor_th = -110;
                    cfg->wans_cfg.sig_cfg.md_sig_thr_cfg.wans_umts_ecno_fair_th = -10;
                    cfg->wans_cfg.sig_cfg.md_sig_thr_cfg.wans_umts_ecno_poor_th = -14;
                    cfg->wans_cfg.sig_cfg.wlan_sig_thr_cfg.wans_wlan_rssi_ho_fair_th = -75;
                    cfg->wans_cfg.sig_cfg.wlan_sig_thr_cfg.wans_wlan_rssi_ho_poor_th = -85;
                    cfg->wans_cfg.sig_cfg.wlan_sig_thr_cfg.wans_wlan_rssi_rove_fair_th = -75;
                    cfg->wans_cfg.sig_cfg.wlan_sig_thr_cfg.wans_wlan_rssi_rove_poor_th = -85;
                    cfg->wans_cfg.wans_ims_dereg_dead_zone_enable = KAL_TRUE;
                    cfg->wans_cfg.wans_ims_cs_pref_enable = KAL_TRUE;
                    cfg->wans_cfg.wans_ims_dereg_dead_zone_mdpoor_barring_enable = KAL_TRUE;
                    cfg->wans_cfg.wans_ims_dereg_dead_zone_incall_barring_enable = KAL_TRUE;
                    break;
                case 716: //Peru
                    cfg->wans_cfg.sig_cfg.md_sig_thr_cfg.wans_umts_rscp_fair_th = -108;
                    cfg->wans_cfg.sig_cfg.md_sig_thr_cfg.wans_umts_rscp_poor_th = -110;
                    cfg->wans_cfg.sig_cfg.md_sig_thr_cfg.wans_umts_ecno_fair_th = -10;
                    cfg->wans_cfg.sig_cfg.md_sig_thr_cfg.wans_lte_rsrq_fair_th = -10;
                    cfg->wans_cfg.sig_cfg.md_sig_thr_cfg.wans_lte_rsrp_poor_th = -122;
                    cfg->wans_cfg.sig_cfg.md_sig_thr_cfg.wans_umts_ecno_poor_th = -14;
                    cfg->wans_cfg.sig_cfg.md_sig_thr_cfg.wans_lte_rsrp_fair_th = -118;
                    cfg->wans_cfg.sig_cfg.md_sig_thr_cfg.wans_lte_rsrq_poor_th = -14;
                    break;
                case 740: //Ecuador
                    cfg->wans_cfg.sig_cfg.md_sig_thr_cfg.wans_umts_rscp_fair_th = -108;
                    cfg->wans_cfg.sig_cfg.md_sig_thr_cfg.wans_umts_rscp_poor_th = -110;
                    cfg->wans_cfg.sig_cfg.md_sig_thr_cfg.wans_umts_ecno_fair_th = -10;
                    cfg->wans_cfg.sig_cfg.md_sig_thr_cfg.wans_lte_rsrq_fair_th = -10;
                    cfg->wans_cfg.sig_cfg.md_sig_thr_cfg.wans_lte_rsrp_poor_th = -122;
                    cfg->wans_cfg.sig_cfg.md_sig_thr_cfg.wans_umts_ecno_poor_th = -14;
                    cfg->wans_cfg.sig_cfg.md_sig_thr_cfg.wans_lte_rsrp_fair_th = -118;
                    cfg->wans_cfg.sig_cfg.md_sig_thr_cfg.wans_lte_rsrq_poor_th = -14;
                    cfg->wans_cfg.wans_ims_wlan_roaming_barring_enable = KAL_FALSE;
                    cfg->wans_cfg.wans_ims_roaming_barring_enable = KAL_FALSE;
                    break;
                case 370: //Claro
                    cfg->wans_cfg.sig_cfg.wlan_sig_thr_cfg.wans_wlan_rssi_rove_poor_th = -85;
                    cfg->wans_cfg.sig_cfg.wlan_sig_thr_cfg.wans_wlan_rssi_rove_fair_th = -75;
                    cfg->wans_cfg.sig_cfg.wlan_sig_thr_cfg.wans_wlan_rssi_ho_poor_th = -85;
                    cfg->wans_cfg.sig_cfg.wlan_sig_thr_cfg.wans_wlan_rssi_ho_fair_th = -75;
                    cfg->wans_cfg.sig_cfg.md_sig_thr_cfg.wans_umts_rscp_poor_th = -110;
                    cfg->wans_cfg.sig_cfg.md_sig_thr_cfg.wans_umts_rscp_fair_th = -108;
                    cfg->wans_cfg.sig_cfg.md_sig_thr_cfg.wans_umts_ecno_poor_th = -14;
                    cfg->wans_cfg.sig_cfg.md_sig_thr_cfg.wans_umts_ecno_fair_th = -10;
                    cfg->wans_cfg.sig_cfg.md_sig_thr_cfg.wans_lte_rsrq_poor_th = -14;
                    cfg->wans_cfg.sig_cfg.md_sig_thr_cfg.wans_lte_rsrq_fair_th = -10;
                    cfg->wans_cfg.sig_cfg.md_sig_thr_cfg.wans_lte_rsrp_poor_th = -122;
                    cfg->wans_cfg.sig_cfg.md_sig_thr_cfg.wans_lte_rsrp_fair_th = -118;
                    break;
                case 704: //Guatemala
                    cfg->wans_cfg.wans_ims_roaming_barring_enable = KAL_FALSE;
                    cfg->wans_cfg.wans_ecc_ho_enable = KAL_TRUE;
                    cfg->wans_cfg.throttling_cfg.wans_wrovein_throttling_t = 0;
                    cfg->wans_cfg.throttling_cfg.wans_throttling_wlan_enable = KAL_FALSE;
                    break;
                default:
                    break;
            }
            break;
        }
        case 121: /* Bell */
		{
			cfg->wans_cfg.wans_ims_vops_barring_enable = KAL_FALSE;
            cfg->wans_cfg.wans_ims_vops_setup_barring_enable = KAL_FALSE;
            cfg->wans_cfg.wans_ims_ecc_over_ims_ho_wifi_to_lte_enable = KAL_FALSE;
			break;
		}
        case 122: /* AIS */
        {
            break;
        }
        case 124: /* APTG */
        {
            break;
        }
        case 125: /* DTAC */
        {
            break;
        }
        case 126: /* Turkey Avea */
        {
            break;
        }
        case 127: /* MEGAFON */
        {
            cfg->wans_cfg.throttling_cfg.wans_throttling_wlan_enable = BITMASK(WANS_CFG_THROTTLING_ENABLE);
            cfg->wans_cfg.throttling_cfg.wans_wrovein_throttling_t = 120;
            cfg->wans_cfg.throttling_cfg.wans_throttling_md_enable = BITMASK(WANS_CFG_THROTTLING_ENABLE);
            cfg->wans_cfg.throttling_cfg.wans_wroveout_throttling_t= 120;

            // SNR Thresholds
            // Gen9x values are in dB, assume the iWLAN is as well
            // prru_ctx->policy.i4wifisnrh = 18;
            // prru_ctx->policy.i4wifisnrl = 15;
			
            /* WiFi not support SNR report and if configuration SNR threshlod will always rank WiFi is POOR in this branch*/
            // cfg->wans_cfg.sig_cfg.wlan_sig_thr_cfg.wans_wlan_rssi_snr_fair_th = 18;
            // cfg->wans_cfg.sig_cfg.wlan_sig_thr_cfg.wans_wlan_rssi_snr_poor_th = 15;

            // LTE RSSI
            // Gen9x values
            // prru_ctx->policy.i4ltersrph = -80;
            // prru_ctx->policy.i4ltersrpm = -85;
            // prru_ctx->policy.i4ltersrpl = -90;
            cfg->wans_cfg.sig_cfg.md_sig_thr_cfg.wans_lte_rsrp_poor_th = -90;
            cfg->wans_cfg.sig_cfg.md_sig_thr_cfg.wans_lte_rsrp_fair_th = -80;

            // Gen9x RSRQ range is 0~34 i.e. mapped integer value
            // iWLAN RSRQ range is -3~-20 i.e. dB
            // Gen9x values 10...14 = -12dB...-15dB
            // prru_ctx->policy.i4ltersrqh = 14;
            // prru_ctx->policy.i4ltersrqm = 12;
            // prru_ctx->policy.i4ltersrql = 10;
            cfg->wans_cfg.sig_cfg.md_sig_thr_cfg.wans_lte_rsrq_fair_th = -15;
            cfg->wans_cfg.sig_cfg.md_sig_thr_cfg.wans_lte_rsrq_poor_th = -12;

            break;
        }
        case 128: /* DNA Finland */
        {
            /* WLAN signal strength threshold */
            cfg->wans_cfg.sig_cfg.wlan_sig_thr_cfg.wans_wlan_rssi_rove_poor_th = -82;
            cfg->wans_cfg.wans_ims_cs_pref_enable    = KAL_TRUE;
            cfg->wans_cfg.wans_ims_wlan_dereg_enable = KAL_TRUE;
            break;
        }
        case 129: /* KDDI */
        {
            cfg->wans_cfg.sig_cfg.wlan_sig_thr_cfg.wans_wlan_rssi_rove_poor_th = -80;
            cfg->wans_cfg.sig_cfg.wlan_sig_thr_cfg.wans_wlan_rssi_rove_fair_th = -74;
            cfg->wans_cfg.wans_ims_wlan_roaming_barring_enable = KAL_TRUE;
            cfg->wans_cfg.loc_cfg.wans_location_enable = KAL_TRUE;
            cfg->wans_cfg.sig_cfg.wlan_sig_thr_cfg.wans_wlan_rssi_ho_poor_th = -80;
            cfg->wans_cfg.sig_cfg.wlan_sig_thr_cfg.wans_wlan_rssi_ho_fair_th = -74;
            cfg->wans_cfg.loc_cfg.wans_ims_wlan_no_location_cell_last_cell_as_home_enable = KAL_TRUE;
            cfg->wans_cfg.wans_lte_sig_rank_when_lte_dereg_enable = KAL_TRUE;
            cfg->wans_cfg.wans_ims_ecc_over_emerg_ho_enable = KAL_FALSE;
            cfg->wans_cfg.wans_ims_roaming_barring_enable = KAL_FALSE;
            break;
        }
        case 130: /* TIM */
        {
            switch (atoi(sim_mcc)) {
                case 222: // IT(Italy)
                    cfg->wans_cfg.wans_ims_md_supporting_rat        = 0x7; // LTE/3G/2G
                    cfg->wans_cfg.wans_ims_23G_setup_barring_enable = KAL_FALSE;

                    cfg->wans_cfg.wans_ims_vops_barring_enable = KAL_FALSE;
                    cfg->wans_cfg.wans_ims_vops_setup_barring_enable = KAL_FALSE;
                    cfg->wans_cfg.wans_ims_vops_idle_ho_barring_enable = KAL_FALSE;

                    break;
                case 724: /*Brazil*/
                    // cfg->wans_cfg.wans_ims_roaming_barring_enable = KAL_FALSE;
                    break;

                default:
                    break;
            }
            break;
        }
        case 131: /* TrueMove */
        {
            cfg->wans_cfg.sig_cfg.wlan_sig_thr_cfg.wans_wlan_rssi_rove_poor_th = -75;
            cfg->wans_cfg.sig_cfg.wlan_sig_thr_cfg.wans_wlan_rssi_rove_fair_th = -65;
            cfg->wans_cfg.sig_cfg.wlan_sig_thr_cfg.wans_wlan_rssi_ho_poor_th   = -75;
            cfg->wans_cfg.sig_cfg.wlan_sig_thr_cfg.wans_wlan_rssi_ho_fair_th   = -65;
            // cfg->wans_cfg.wans_ims_roaming_barring_enable = KAL_FALSE;
            break;
        }
        case 132: /* Movistar,VIVO */
        {
            switch (atoi(sim_mcc)) {
                case 716: /*Peru*/
                    cfg->wans_cfg.wans_ims_md_supporting_rat = 0x1;
                    cfg->wans_cfg.wans_ims_cs_pref_enable    = KAL_TRUE;
                    cfg->wans_cfg.wans_ims_23G_setup_barring_enable = KAL_TRUE;
                    cfg->wans_cfg.wans_ims_wlan_roaming_barring_enable = KAL_FALSE;
                    cfg->wans_cfg.wans_xcap_wlan_only_barring_enable = KAL_TRUE;
                    break;
                case 730: /*Chile*/
                    cfg->wans_cfg.throttling_cfg.wans_throttling_wlan_enable = BITMASK(WANS_CFG_THROTTLING_ENABLE);
                    cfg->wans_cfg.throttling_cfg.wans_wrovein_throttling_t = 30;
                    cfg->wans_cfg.throttling_cfg.wans_throttling_md_enable = BITMASK(WANS_CFG_THROTTLING_ENABLE);
                    cfg->wans_cfg.throttling_cfg.wans_wroveout_throttling_t = 30;
                    break;
                case 740: /*Ecuador*/
                    // cfg->wans_cfg.wans_ims_roaming_barring_enable = KAL_FALSE;
                    break;
                default:
                    break;
            }
            break;
        }
        case 133: /* DU */
        {
            break;
        }
        case 134: /* Elisa Finland */
        {
            cfg->wans_cfg.wans_ims_cs_pref_enable    = KAL_TRUE;
            cfg->wans_cfg.wans_ims_wlan_dereg_enable = KAL_TRUE;
            break;
        }
        case 135: /* MTS */
        {
            cfg->wans_cfg.wans_ims_md_supporting_rat = 0x1;
            cfg->wans_cfg.wans_ims_23G_setup_barring_enable = KAL_TRUE;
            break;
        }
		case 136: /* Entel*/
        {
            cfg->wans_cfg.wans_ims_wlan_roaming_barring_enable = KAL_FALSE;//Chile
            break;
        }
        case 137: /* Tele2 */
        {
            cfg->wans_cfg.wans_ims_cs_pref_enable    = KAL_TRUE;
            cfg->wans_cfg.wans_ims_wlan_dereg_enable = KAL_TRUE;

            switch (atoi(sim_mcc)) {
                case 240: // SE (Sweden)
                    cfg->wans_cfg.wans_ims_md_supporting_rat = 0x1;
                    // cfg->wans_cfg.wans_ims_roaming_barring_enable = KAL_TRUE;
                    cfg->wans_cfg.wans_ims_wlan_roaming_barring_enable = KAL_TRUE;
                    cfg->wans_cfg.wans_ims_ecc_over_ims_ho_lte_to_wifi_enable = KAL_FALSE;
                    cfg->wans_cfg.wans_ims_ecc_over_ims_ho_wifi_to_lte_enable = KAL_FALSE;
                    cfg->wans_cfg.loc_cfg.wans_location_enable = KAL_TRUE;
                    break;
                default:
                    break;
            }
            break;
            
            break;
        }
        case 139: /* Bouygues */
        {
            cfg->wans_cfg.wans_ims_md_supporting_rat = 0x7; // LTE/3G/2G
            cfg->wans_cfg.wans_ims_23G_setup_barring_enable = KAL_FALSE;
            cfg->wans_cfg.loc_cfg.wans_location_enable = KAL_TRUE;
            switch (atoi(sim_mcc)) {
                case 208: //FR
                    cfg->wans_cfg.wans_ims_wlan_roaming_barring_enable   = KAL_TRUE;
                    cfg->wans_cfg.sig_cfg.wlan_sig_thr_cfg.wans_wlan_rssi_rove_poor_th    = -79;
                    cfg->wans_cfg.sig_cfg.wlan_sig_thr_cfg.wans_wlan_rssi_rove_fair_th    = -70;
                    cfg->wans_cfg.sig_cfg.md_sig_thr_cfg.wans_lte_rsrp_poor_th   = -122;
                    cfg->wans_cfg.sig_cfg.md_sig_thr_cfg.wans_lte_rsrp_fair_th   = -114;
                    cfg->wans_cfg.sig_cfg.md_sig_thr_cfg.wans_umts_rscp_poor_th  = -113;
                    cfg->wans_cfg.sig_cfg.md_sig_thr_cfg.wans_umts_rscp_fair_th  = -108;
                    cfg->wans_cfg.sig_cfg.md_sig_thr_cfg.wans_gsm_rssi_poor_th   = -104;
                    cfg->wans_cfg.sig_cfg.md_sig_thr_cfg.wans_gsm_rssi_fair_th   = -100;
                    break;
            }
            break;
        }
        case 140: /* MTN */
        {
            cfg->wans_cfg.wans_ims_md_supporting_rat = 0x1; 
            cfg->wans_cfg.wans_ims_23G_setup_barring_enable = KAL_TRUE;
            break;
        }
        case 143: /* TurkCell */
        {
            cfg->wans_cfg.wans_ims_cs_pref_enable    = KAL_TRUE;
            cfg->wans_cfg.wans_ims_wlan_dereg_enable = KAL_TRUE;
            break;
        }
        case 146:/* Etisalat */
        {
            break;
        }
        case 147: /* Airtel */
        {
            // cfg->wans_cfg.wans_ims_roaming_barring_enable = KAL_FALSE;
            cfg->wans_cfg.sig_cfg.wlan_sig_thr_cfg.wans_wlan_rssi_rove_poor_th = -85;
            cfg->wans_cfg.sig_cfg.wlan_sig_thr_cfg.wans_wlan_rssi_rove_fair_th = -65;
            cfg->wans_cfg.sig_cfg.wlan_sig_thr_cfg.wans_wlan_rssi_ho_poor_th   = -85;
            cfg->wans_cfg.sig_cfg.wlan_sig_thr_cfg.wans_wlan_rssi_ho_fair_th   = -65;
            cfg->wans_cfg.loc_cfg.wans_location_enable                     = KAL_TRUE;
            cfg->wans_cfg.loc_cfg.wans_ims_wlan_international_roaming_location_barring_enable = KAL_TRUE;
            break;
        }
        case 149: /* CMHK */
        {
            cfg->wans_cfg.wans_ims_wlan_roaming_barring_enable   = KAL_TRUE;
            cfg->wans_cfg.loc_cfg.wans_location_enable = KAL_TRUE;
            break;
        }
        case 150:/* Swisscom */
        {
            cfg->wans_cfg.sig_cfg.wlan_sig_thr_cfg.wans_wlan_rssi_rove_poor_th = -80;
            cfg->wans_cfg.sig_cfg.wlan_sig_thr_cfg.wans_wlan_rssi_rove_fair_th = -60;

            cfg->wans_cfg.sig_cfg.wlan_sig_thr_cfg.wans_wlan_rssi_ho_poor_th   = -78;
            cfg->wans_cfg.sig_cfg.wlan_sig_thr_cfg.wans_wlan_rssi_ho_fair_th   = -60;

            cfg->wans_cfg.sig_cfg.md_sig_thr_cfg.wans_lte_rsrp_poor_th = -122;
            cfg->wans_cfg.sig_cfg.md_sig_thr_cfg.wans_lte_rsrp_fair_th = -105;

            // Throttling
            cfg->wans_cfg.throttling_cfg.wans_throttling_wlan_enable  = BITMASK(WANS_CFG_THROTTLING_ENABLE);
            cfg->wans_cfg.throttling_cfg.wans_wrovein_throttling_t  = 120;
            cfg->wans_cfg.throttling_cfg.wans_throttling_md_enable  = BITMASK(WANS_CFG_THROTTLING_ENABLE);
            cfg->wans_cfg.throttling_cfg.wans_wroveout_throttling_t  = 120;
            break;
        }
        case 152: /*Optus*/
        {
            cfg->wans_cfg.wans_ims_cs_pref_enable        = KAL_TRUE;
            cfg->wans_cfg.wans_ims_wlan_dereg_enable     = KAL_TRUE;
            cfg->wans_cfg.wans_ecc_ho_enable = KAL_TRUE;
            cfg->wans_cfg.sig_cfg.md_sig_thr_cfg.wans_lte_rsrp_poor_th       = -113;
            cfg->wans_cfg.sig_cfg.md_sig_thr_cfg.wans_lte_rsrp_fair_th       = -104;      
            cfg->wans_cfg.sig_cfg.md_sig_thr_cfg.wans_umts_rscp_poor_th      = -108;    
            cfg->wans_cfg.sig_cfg.md_sig_thr_cfg.wans_umts_rscp_fair_th      = -99;
            cfg->wans_cfg.sig_cfg.md_sig_thr_cfg.wans_gsm_rssi_poor_th       = -102;   // 2G defaut value
            cfg->wans_cfg.sig_cfg.md_sig_thr_cfg.wans_gsm_rssi_fair_th       = -94;    // 2G defaut value
            break;
        }
        case 153: /*VHA*/
        {
            cfg->wans_cfg.sig_cfg.md_sig_thr_cfg.wans_lte_rsrp_poor_th = -121;
            cfg->wans_cfg.sig_cfg.md_sig_thr_cfg.wans_lte_rsrp_fair_th = -113;
            cfg->wans_cfg.sig_cfg.wlan_sig_thr_cfg.wans_wlan_rssi_rove_poor_th = -85;
            cfg->wans_cfg.sig_cfg.wlan_sig_thr_cfg.wans_wlan_rssi_rove_fair_th = -74;
            cfg->wans_cfg.sig_cfg.md_sig_thr_cfg.wans_umts_rscp_poor_th = -112;    
            cfg->wans_cfg.sig_cfg.md_sig_thr_cfg.wans_umts_rscp_fair_th = -103;
            cfg->wans_cfg.sig_cfg.md_sig_thr_cfg.wans_umts_ecno_poor_th = -16;    
    		cfg->wans_cfg.sig_cfg.md_sig_thr_cfg.wans_umts_ecno_fair_th = -7;
            break;
        }
        case 154: /* Telia */
        {
            /* WLAN signal strength threshold */
            cfg->wans_cfg.sig_cfg.wlan_sig_thr_cfg.wans_wlan_rssi_rove_poor_th = -79;
            cfg->wans_cfg.sig_cfg.wlan_sig_thr_cfg.wans_wlan_rssi_rove_fair_th = -72;

            /* All location use the same config*/
            cfg->wans_cfg.wans_ecc_ho_enable                     = KAL_FALSE;
            // cfg->wans_cfg.wans_ims_roaming_barring_enable        = KAL_TRUE;
            cfg->wans_cfg.wans_ims_wlan_roaming_barring_enable   = KAL_FALSE;    // may be true, will be check

            cfg->wans_cfg.wans_ims_23g_wifi_rat_reselect_by_dreg_enable = KAL_TRUE;
            switch (atoi(sim_mcc)) {
                case 238: // DK (Denmark)
                    cfg->wans_cfg.wans_ims_md_supporting_rat         = 0x7;
                    cfg->wans_cfg.wans_ims_23G_setup_barring_enable = KAL_TRUE;
                    cfg->wans_cfg.wans_xcap_roaming_barring_enable   = KAL_FALSE;
                    // VoPS support in 2G/3G is NO
                    // Keep IMS context after IRAT to 2G/3G
                    cfg->wans_cfg.loc_cfg.wans_location_enable = KAL_TRUE;
                    cfg->wans_cfg.wans_ims_wlan_roaming_barring_enable = KAL_TRUE;
                    break;
                    
                case 240: // SE (Sweden)
                case 244: // FI (Finland)
                    cfg->wans_cfg.wans_ims_md_supporting_rat         = 0x7; // LTE/3G/2G
                    cfg->wans_cfg.wans_ims_23G_setup_barring_enable  = KAL_FALSE;

                    /* VOPS barring disabled to allow IMS PDN and maintain in legacy 3GPP RAT */
                    cfg->wans_cfg.wans_ims_vops_barring_enable       = KAL_FALSE;
                    cfg->wans_cfg.wans_ims_vops_setup_barring_enable = KAL_FALSE;
                    break;

                case 242: // NO (Norway)
                    // cfg->wans_cfg.wans_ims_roaming_barring_enable   = KAL_FALSE; // will be check
                    break;

                default :
                    break;
            }
            break;
        }
        case 155: /* DIGI */
        {
            switch (atoi(sim_mcc)){
                case 216: // Hungary
                    cfg->wans_cfg.qos_cfg.qos_rtp_cfg.wans_wlan_no_rtp_handover_enable = KAL_TRUE;
                    cfg->wans_cfg.qos_cfg.qos_rtp_cfg.wans_incall_check_no_rtp_enable = KAL_TRUE;

                    cfg->wans_cfg.throttling_cfg.wans_throttling_wlan_enable = BITMASK(WANS_CFG_THROTTLING_ENABLE);
                    cfg->wans_cfg.throttling_cfg.wans_wrovein_throttling_t = 33;
                    cfg->wans_cfg.throttling_cfg.wans_throttling_md_enable = BITMASK(WANS_CFG_THROTTLING_ENABLE);
                    cfg->wans_cfg.throttling_cfg.wans_wroveout_throttling_t = 33;

                    cfg->wans_cfg.sig_cfg.wlan_sig_thr_cfg.wans_wlan_rssi_rove_poor_th = -73;
                    cfg->wans_cfg.sig_cfg.wlan_sig_thr_cfg.wans_wlan_rssi_rove_fair_th = -63;

                    cfg->wans_cfg.sig_cfg.wlan_sig_thr_cfg.wans_wlan_rssi_ho_poor_th   = -76;
                    cfg->wans_cfg.sig_cfg.wlan_sig_thr_cfg.wans_wlan_rssi_ho_fair_th   = -66;

                    cfg->wans_cfg.wans_ims_cs_pref_enable = KAL_FALSE;
                    cfg->wans_cfg.wans_ims_wlan_dereg_enable = KAL_FALSE;

                    break;
                    
                case 502: // Malaysia
                    cfg->wans_cfg.qos_cfg.qos_rtp_cfg.wans_wlan_no_rtp_handover_enable = KAL_TRUE;
                    cfg->wans_cfg.throttling_cfg.wans_throttling_wlan_enable = BITMASK(WANS_CFG_THROTTLING_ENABLE);
                    cfg->wans_cfg.throttling_cfg.wans_wrovein_throttling_t = 30;
                    cfg->wans_cfg.throttling_cfg.wans_throttling_md_enable = BITMASK(WANS_CFG_THROTTLING_ENABLE);
                    cfg->wans_cfg.throttling_cfg.wans_wroveout_throttling_t = 30;
                    cfg->wans_cfg.wans_ims_md_supporting_rat = 0x1; 
                    cfg->wans_cfg.wans_ims_23G_setup_barring_enable = KAL_TRUE;
                    break;

                default:
                    break;
            }
            break;
        }
        case 156: /* Telenor */
        {
            cfg->wans_cfg.wans_ims_cs_pref_enable    = KAL_TRUE;
            cfg->wans_cfg.wans_ims_wlan_dereg_enable = KAL_TRUE;
            break;
        }
        case 157: /* Telus */
		{
            cfg->wans_cfg.wans_ims_md_supporting_rat = 0x7; // LTE/3G/2G
			cfg->wans_cfg.wans_ims_vops_barring_enable = KAL_FALSE;
            cfg->wans_cfg.wans_ims_vops_setup_barring_enable = KAL_FALSE;
			cfg->wans_cfg.wans_ims_23G_setup_barring_enable  = KAL_FALSE;
            cfg->wans_cfg.sig_cfg.md_sig_thr_cfg.wans_umts_rscp_fair_th = -100;
            cfg->wans_cfg.sig_cfg.md_sig_thr_cfg.wans_umts_rscp_poor_th = -105;
            cfg->wans_cfg.sig_cfg.md_sig_thr_cfg.wans_lte_rsrp_poor_th = -116;
            cfg->wans_cfg.sig_cfg.md_sig_thr_cfg.wans_lte_rsrp_fair_th = -106;
			cfg->wans_cfg.wans_ims_roaming_barring_enable = KAL_FALSE;
			break;
		}
        case 158: /* Zain */
        {
            /* Enable location query */
            cfg->wans_cfg.loc_cfg.wans_location_enable                            = KAL_TRUE;
            /* Block WFC call in AP mode when in home country */
            cfg->wans_cfg.loc_cfg.wans_ims_wlan_block_in_ap_mode_when_home_enable = KAL_TRUE;
            break;
        }
        case 159: /* STC Saudi */
        {
            cfg->wans_cfg.loc_cfg.wans_ims_wlan_block_in_ap_mode_when_home_enable = KAL_TRUE;
            cfg->wans_cfg.wans_ims_wlan_roaming_barring_enable                    = KAL_TRUE;
            break;
        }
        case 165: /* Sunrise */
        {
            cfg->wans_cfg.wans_ims_wlan_dereg_enable             = KAL_TRUE;
            break;
        }
		case 172: /* Altice  */
        {
            switch (atoi(sim_mcc)) {
                case 370: //Dominican
                    cfg->wans_cfg.wans_ims_roaming_barring_enable = KAL_FALSE;
					cfg->wans_cfg.wans_xcap_roaming_barring_enable = KAL_TRUE;
					cfg->wans_cfg.throttling_cfg.wans_throttling_wlan_enable = KAL_FALSE;
					cfg->wans_cfg.throttling_cfg.wans_throttling_md_enable = KAL_FALSE;
                    break;
                default :
                    break;
            }
            break;
        }
        case 175: /* TDC */
        {
            switch (atoi(sim_mcc)) {
                case 238: //Denmark
                    cfg->wans_cfg.loc_cfg.wans_location_enable = KAL_TRUE;
                    cfg->wans_cfg.wans_ims_wlan_roaming_barring_enable = KAL_TRUE;
                    break;
                default :
                    break;
            }
            break;
        }
       case 178: /* Smart */
        {
        switch (atoi(sim_mcc)) {
                case 456: /*Cambodia*/
                    cfg->wans_cfg.throttling_cfg.wans_throttling_wlan_enable = KAL_TRUE;
                    cfg->wans_cfg.throttling_cfg.wans_wrovein_throttling_t = 30;
                    cfg->wans_cfg.throttling_cfg.wans_throttling_md_enable = KAL_TRUE;
                    cfg->wans_cfg.throttling_cfg.wans_wroveout_throttling_t = 30;
                    break;
                default:
                break;
           }
           break;
        }
        case 179: /* Newroz */
        {
            cfg->wans_cfg.wans_ims_wlan_dereg_enable             = KAL_TRUE;

            cfg->wans_cfg.throttling_cfg.wans_throttling_wlan_enable = KAL_TRUE;
            cfg->wans_cfg.throttling_cfg.wans_wrovein_throttling_t = 30;
            cfg->wans_cfg.throttling_cfg.wans_throttling_md_enable = KAL_TRUE;
            cfg->wans_cfg.throttling_cfg.wans_wroveout_throttling_t = 30;
            break;
        }
        case 181: /* Telkom */
        {
            break;
        }
        case 183: /* Personal */
        {
            cfg->wans_cfg.wans_ims_wlan_roaming_barring_enable = KAL_FALSE;
            break;
        }
        case 185: /*2 Degrees*/
        {
            cfg->wans_cfg.throttling_cfg.wans_throttling_wlan_enable = BITMASK(WANS_CFG_THROTTLING_ENABLE);
            cfg->wans_cfg.throttling_cfg.wans_wrovein_throttling_t = 30;
            cfg->wans_cfg.throttling_cfg.wans_throttling_md_enable = BITMASK(WANS_CFG_THROTTLING_ENABLE);
            cfg->wans_cfg.throttling_cfg.wans_wroveout_throttling_t = 30;
            break;
        }
		 case 187: /*Safaricom/Kenya*/
        {
			cfg->wans_cfg.throttling_cfg.wans_throttling_wlan_enable  = BITMASK(WANS_CFG_THROTTLING_ENABLE);
            cfg->wans_cfg.throttling_cfg.wans_wrovein_throttling_t = 0;
			cfg->wans_cfg.throttling_cfg.wans_throttling_md_enable  = BITMASK(WANS_CFG_THROTTLING_ENABLE);
            cfg->wans_cfg.throttling_cfg.wans_wroveout_throttling_t = 0;
            break;
        }
		case 186: /* Idea */
        {
            // cfg->wans_cfg.wans_ims_roaming_barring_enable = KAL_FALSE;
            break;
        }
        case 188: /* A1 */
        {
            // Throttling
            cfg->wans_cfg.throttling_cfg.wans_throttling_wlan_enable  = BITMASK(WANS_CFG_THROTTLING_ENABLE);
            cfg->wans_cfg.throttling_cfg.wans_wrovein_throttling_t  = 30;
            cfg->wans_cfg.throttling_cfg.wans_throttling_md_enable  = BITMASK(WANS_CFG_THROTTLING_ENABLE);
            cfg->wans_cfg.throttling_cfg.wans_wroveout_throttling_t  = 30;

            cfg->wans_cfg.wans_ims_md_supporting_rat        = 0x7; // LTE/3G/2G
            cfg->wans_cfg.wans_ims_23G_setup_barring_enable = KAL_FALSE;
            break;
        }
        case 195: /* O2 */
        {
            /* WLAN signal strength threshold */
            cfg->wans_cfg.sig_cfg.wlan_sig_thr_cfg.wans_wlan_rssi_rove_poor_th = -79;
            cfg->wans_cfg.sig_cfg.wlan_sig_thr_cfg.wans_wlan_rssi_rove_fair_th = -72;
            cfg->wans_cfg.sig_cfg.wlan_sig_thr_cfg.wans_wlan_rssi_ho_poor_th   = -82;
            cfg->wans_cfg.sig_cfg.wlan_sig_thr_cfg.wans_wlan_rssi_ho_fair_th   = -75;
            /* MD signal strength threshold */
            cfg->wans_cfg.sig_cfg.md_sig_thr_cfg.wans_lte_rsrp_poor_th   = -118;
            cfg->wans_cfg.sig_cfg.md_sig_thr_cfg.wans_lte_rsrp_fair_th   = -108;
            cfg->wans_cfg.sig_cfg.md_sig_thr_cfg.wans_umts_rscp_poor_th  = -108;
            cfg->wans_cfg.sig_cfg.md_sig_thr_cfg.wans_umts_rscp_fair_th  = -98;
            cfg->wans_cfg.sig_cfg.md_sig_thr_cfg.wans_gsm_rssi_poor_th   = -102;
            cfg->wans_cfg.sig_cfg.md_sig_thr_cfg.wans_gsm_rssi_fair_th   = -92;

            switch (atoi(sim_mcc)) {
                case 230: /* Czech */
                    cfg->wans_cfg.wans_ims_wlan_roaming_barring_enable = KAL_TRUE;
                    cfg->wans_cfg.loc_cfg.wans_location_enable = KAL_TRUE;
                    cfg->wans_cfg.loc_cfg.wans_ims_wlan_use_nv_md_srv_if_unknown_home_in_flight_mode = KAL_TRUE;
                    break;
                default:
                    break;
            }
            break;
        }
        case 201: /* KPN */
        {
            /* VoWiFi roaming barring */
            cfg->wans_cfg.wans_ims_wlan_roaming_barring_enable                               = KAL_TRUE;

            /* Location query enabled and use NVRAM cellular registration status if location not found */
            cfg->wans_cfg.loc_cfg.wans_location_enable                                       = KAL_TRUE;
            cfg->wans_cfg.loc_cfg.wans_ims_wlan_use_nv_md_srv_if_unknown_home_in_flight_mode = KAL_TRUE;

            /* MD signal strength threshold */
            cfg->wans_cfg.sig_cfg.md_sig_thr_cfg.wans_lte_rsrp_poor_th   = -122;
            cfg->wans_cfg.sig_cfg.md_sig_thr_cfg.wans_lte_rsrp_fair_th   = -114;
            cfg->wans_cfg.sig_cfg.md_sig_thr_cfg.wans_umts_rscp_poor_th  = -110;
            cfg->wans_cfg.sig_cfg.md_sig_thr_cfg.wans_umts_rscp_fair_th  = -105;
            cfg->wans_cfg.sig_cfg.md_sig_thr_cfg.wans_gsm_rssi_poor_th   = -104;
            cfg->wans_cfg.sig_cfg.md_sig_thr_cfg.wans_gsm_rssi_fair_th   = -100;
			break;
        }
        case 203: /* NOS */
        {
            cfg->wans_cfg.wans_ims_cs_pref_enable         = KAL_TRUE;
            cfg->wans_cfg.wans_ims_wlan_dereg_enable      = KAL_TRUE;
            // cfg->wans_cfg.wans_ims_roaming_barring_enable = KAL_FALSE;
            break;
        }
		case 204: /* Rogers */
		{
			/* Canada */
			cfg->wans_cfg.wans_ims_dereg_dead_zone_enable = KAL_TRUE;
            cfg->wans_cfg.wans_ims_dereg_dead_zone_incall_barring_enable = KAL_TRUE;
			cfg->wans_cfg.wans_ims_dereg_dead_zone_mdpoor_barring_enable = KAL_TRUE;
			cfg->wans_cfg.wans_ims_dereg_poor_wifi = KAL_FALSE;
			cfg->wans_cfg.wans_ims_wlan_roaming_barring_enable   = KAL_TRUE;
            cfg->wans_cfg.wans_ims_md_supporting_rat = 0x7; // LTE/3G/2G
            cfg->wans_cfg.wans_ims_vops_barring_enable = KAL_FALSE;
            cfg->wans_cfg.wans_ims_vops_setup_barring_enable = KAL_FALSE;
            cfg->wans_cfg.wans_ims_23G_setup_barring_enable  = KAL_FALSE;
            cfg->wans_cfg.loc_cfg.wans_location_enable = KAL_TRUE;
			break;
		}
        case 210: /* BSNL */
        {
            cfg->wans_cfg.wans_ims_roaming_barring_enable = KAL_FALSE;
            break;
        }
        case 214: /* IDC */
        {
            cfg->wans_cfg.wans_ims_cs_pref_enable         = KAL_TRUE;
            cfg->wans_cfg.wans_ims_wlan_dereg_enable      = KAL_TRUE;

            // Throttling
            cfg->wans_cfg.throttling_cfg.wans_throttling_wlan_enable  = KAL_TRUE;
            cfg->wans_cfg.throttling_cfg.wans_wrovein_throttling_t  = 30;
            cfg->wans_cfg.throttling_cfg.wans_throttling_md_enable  = KAL_TRUE;
            cfg->wans_cfg.throttling_cfg.wans_wroveout_throttling_t  = 30;
            break;
        }		
        case 221: /* TPG */
        {
            switch (atoi(sim_mcc)) {
                case 525: // Singapore
                    // cfg->wans_cfg.wans_ims_roaming_barring_enable = KAL_FALSE;
                    cfg->wans_cfg.wans_mms_epdg_connected_barring_enable = KAL_TRUE;
                    cfg->wans_cfg.wans_mms_cell_only_barring_enable      = KAL_TRUE;
                    break;

                default:
                    break;
            }
            break;
        }
        case 234: /* Plus/Poland*/
        {
            cfg->wans_cfg.throttling_cfg.wans_throttling_wlan_enable = BITMASK(WANS_CFG_THROTTLING_ENABLE);
            cfg->wans_cfg.throttling_cfg.wans_wrovein_throttling_t = 30;
            cfg->wans_cfg.throttling_cfg.wans_throttling_md_enable = BITMASK(WANS_CFG_THROTTLING_ENABLE);
            cfg->wans_cfg.throttling_cfg.wans_wroveout_throttling_t = 30;
            break;
        }

        case 236: /* USCC  */
        {
            // cfg->wans_cfg.wans_ims_roaming_barring_enable = KAL_FALSE;
            cfg->wans_cfg.wans_vodm_pref_enable = KAL_TRUE;
            break;
        }
        case 238: /* Videotron */
        {
            cfg->wans_cfg.wans_ims_md_supporting_rat        = 0x3;       // Section 3.5
            cfg->wans_cfg.wans_ecc_ho_enable                = KAL_TRUE;  // Section 2.9
            cfg->wans_cfg.sig_cfg.md_sig_thr_cfg.wans_lte_rsrp_poor_th   = -120;        // Section 3.5
            cfg->wans_cfg.sig_cfg.md_sig_thr_cfg.wans_lte_rsrp_fair_th   = -114;        // Section 3.5
            cfg->wans_cfg.sig_cfg.md_sig_thr_cfg.wans_umts_rscp_poor_th  = -110;        // Section 3.5
            cfg->wans_cfg.sig_cfg.md_sig_thr_cfg.wans_umts_rscp_fair_th  = -103;        // Section 3.5
            cfg->wans_cfg.sig_cfg.wlan_sig_thr_cfg.wans_wlan_rssi_rove_poor_th = -80;   // Section 3.5
            cfg->wans_cfg.sig_cfg.wlan_sig_thr_cfg.wans_wlan_rssi_rove_fair_th = -74;   // Section 3.5
            break;
        }
		case 243: /*Globe*/
		{
		    cfg->wans_cfg.wans_ims_roaming_barring_enable = KAL_FALSE;
		    break;
		}
		case 245: /* Vietnamobile / Vietnam  */
        {
            cfg->wans_cfg.wans_ims_wlan_roaming_barring_enable = KAL_TRUE;
            cfg->wans_cfg.loc_cfg.wans_location_enable = KAL_TRUE;
            break;
        }
        case 281: /* Kyivstar/Ukraine */
        {
            cfg->wans_cfg.wans_ims_md_supporting_rat        = 0x7; // LTE/3G/2G
            cfg->wans_cfg.wans_ims_23G_setup_barring_enable = KAL_TRUE;
            break;
        }
        case 282: /* Mobily/Saudi */
        {
            cfg->wans_cfg.wans_xcap_roaming_barring_enable = KAL_TRUE;
            break;
        }
        case 285: /* Vinafhone/Vietnam */
        {
            cfg->wans_cfg.wans_ims_roaming_barring_enable = KAL_FALSE;
            break;
        }
        case 1001: /* Ericsson IMS IWLAN */
        {
            cfg->wans_cfg.wans_ims_md_supporting_rat        = 0x7; // LTE/3G/2G
            cfg->wans_cfg.wans_ims_23G_setup_barring_enable = KAL_FALSE;
            break;
        }
        case 1002: /* Nokia Finland */
        {
            // cfg->wans_cfg.wans_ims_roaming_barring_enable = KAL_FALSE;

            cfg->wans_cfg.wans_ims_md_supporting_rat        = 0x7; // LTE/3G/2G
            cfg->wans_cfg.wans_ims_23G_setup_barring_enable = KAL_FALSE;
            break;
        }
        case 1003: /* HQLAB_ERICSSON */
        {
            break;
        }
        case 1004: /* Huawei IMS */
        {
            // cfg->wans_cfg.wans_ims_roaming_barring_enable = KAL_FALSE;
            break;
        }
        case 16387: /* PCT */
        {
            cfg->wans_cfg.wans_ims_md_supporting_rat = 0x7;
            cfg->wans_cfg.wans_ims_23G_setup_barring_enable = KAL_FALSE;
            cfg->wans_cfg.wans_ims_vops_barring_enable = KAL_TRUE;
            cfg->wans_cfg.wans_ims_no_voice_sup_sms_enable = KAL_FALSE;
            cfg->wans_cfg.loc_cfg.wans_location_enable = KAL_FALSE;
            cfg->wans_cfg.loc_cfg.wans_ims_wlan_no_location_barring_enable = KAL_FALSE;
            cfg->wans_cfg.wans_ims_cs_pref_enable         = KAL_FALSE;
            break;
        }
        default:
        {
            break;
        }
    }
	
#ifdef __IWLAN_FUNCTION_DISABLE__
	memset((void*)&(cfg->wans_cfg.sig_cfg), UNDEF_CONFIG_8, sizeof(cfg->wans_cfg.sig_cfg));
	memset((void*)&(cfg->wans_cfg.qos_cfg), UNDEF_CONFIG_8, sizeof(cfg->wans_cfg.qos_cfg));
	memset((void*)&(cfg->wans_cfg.loc_cfg), UNDEF_CONFIG_8, sizeof(cfg->wans_cfg.loc_cfg));
	memset((void*)&(cfg->wans_cfg.wans_wifi_call_roveout_alert_enable), UNDEF_CONFIG_8, sizeof(cfg->wans_cfg.wans_wifi_call_roveout_alert_enable));
#endif

    *nv_valid = iwlan_cfg_set_to_nvram_value(cfg, ps_id);

//    return cfg;
}

