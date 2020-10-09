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

#include "custom_wo_config.h"

#define streq(s, t) (strcmp(s, t) == 0)

/*
 * ATTENTION: Don't modify the default values!
 *            (The default values are shared with AP daemon)
 *            Customize your configs in custom_wo_cfg_get() function.
 */
static void cfg_reset_to_default(wo_cfg_t* p_cfg)
{
    kal_mem_set(p_cfg, 0, sizeof(wo_cfg_t));

#define __WO_CFG_ACTION__ 2 /* WO CFG Macro DEFAULT Value Assign */
#define __WO_CFG_PTR__ p_cfg
#include "wo_nvram_config.h"
#undef __WO_CFG_ACTION__
#undef __WO_CFG_PTR__
}

#define ORANGE_RETRY_VECTOR_DEFAULT \
    "'rst=ssid,wifien',\
    '24,4,8,16,32,64,128,256,512,1024',\
    '1040-1041i,1,2,4,8,16,32,64,128,256',\
    '1081-1111,4,8,16,32,64,128,256,512,1024',\
    '8192-11011,4,8,16,32,64,128,256,512,1024'"

#define ORANGE_RETRY_VECTOR_SPAIN \
    "'rst=ssid,wifien',\
    '24,4,8,43200',\
    '1040-1041i,1,2,4,8,16,32,64,128,256',\
    '1081,4,8,16,32,64,128,256,512,1024',\
    '1082-1111,4,8,43200',\
    '8192-11011,4,8,43200'"

/*
 * Customize your configs here.
 * (Configs priority: NVram > MTK_OP > MTK default)
 */
kal_bool custom_wo_cfg_get(wo_cfg_t *p_cfg, kal_uint8 ps_id, kal_uint32 sbp_id, const kal_char *mcc, const kal_char *mnc) {
    if (!p_cfg) {
        return KAL_FALSE;
    }

    /* Reset configuration to MTK default */
    cfg_reset_to_default(p_cfg);

    /* Set MTK_OP configuration by OP ID & mcc */
    switch (sbp_id) {
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
            if (streq(mcc, "214")) {
                p_cfg->IDi = IDI_RFC822_ADDR;
                p_cfg->IDr = IDR_KEY_ID;
                kal_snprintf((kal_char *)p_cfg->ike_algo, sizeof(p_cfg->ike_algo), "%s",
                             "aes128-aes256-sha256-sha1-modp2048-modp1536-modp1024!");
                kal_snprintf((kal_char *)p_cfg->esp_algo, sizeof(p_cfg->esp_algo), "%s",
                             "aes128-aes256-sha256-sha1!");
                kal_snprintf((kal_char *)p_cfg->retry_vector, sizeof(p_cfg->retry_vector), "%s",
                             ORANGE_RETRY_VECTOR_SPAIN);
                p_cfg->keep_timer = 20;
                p_cfg->ike_rekey_timer = 28800;
                p_cfg->esp_rekey_timer = 7200;
                p_cfg->rekey_margin = 180;
                p_cfg->mtu = 1280;
                p_cfg->oos = 30;
                p_cfg->cert_used = 0;
                p_cfg->dns_cache = 0;
                p_cfg->abort_mode = 1;
                p_cfg->leave_standby_dpd = 1;
            }
            else if (streq(mcc, "260")) {
                kal_snprintf((kal_char *)p_cfg->ike_algo, sizeof(p_cfg->ike_algo), "%s",
                             "aes128-prfsha256-sha256-aes256-sha1-modp1536-modp768-modp1024-modp2048!");
                kal_snprintf((kal_char *)p_cfg->esp_algo, sizeof(p_cfg->esp_algo), "%s",
                             "aes128-sha256-aes256-sha1-modp1536-modp768-modp1024-modp2048,aes128-sha256-aes256-sha1!");
                kal_snprintf((kal_char *)p_cfg->retry_vector, sizeof(p_cfg->retry_vector), "%s",
                             "'rst=ssid,wifien','24,4,8,16,32,64,128,256,512,1024','1040-1041i,1,2,4,8,16,32,64,128,256',\
                             '1081-1111,4,8,16,32,64,128,256,512,1024','9000,43200','9006,86400','11001,43200','11011,43200',\
                             '8192-11011,4,8,16,32,64,128,256,512,1024'");
                p_cfg->ike_rekey_timer = 81000;
                p_cfg->esp_rekey_timer = 81000;
                p_cfg->rekey_margin = 32400;
                p_cfg->keep_timer = 20;
                p_cfg->mtu = 1300;
                p_cfg->IDr = IDR_KEY_ID;
                p_cfg->fastreauth = 1;
                p_cfg->cert_used = 0;
                p_cfg->abort_mode = 1;
                p_cfg->dns_cache = 0;
                p_cfg->liveness_check = 1;
                p_cfg->device_identity = 1;
                p_cfg->ike_dscp = 48;
                p_cfg->leave_standby_dpd = 1;
            }
            else if (streq(mcc, "226")) {
                kal_snprintf((kal_char *)p_cfg->ike_algo, sizeof(p_cfg->ike_algo), "%s",
                             "aes256-aes128-prfsha256-sha256-modp2048-modp1536!");
                kal_snprintf((kal_char *)p_cfg->esp_algo, sizeof(p_cfg->esp_algo), "%s",
                             "aes256-aes128-sha256-modp2048-modp1536!");
                kal_snprintf((kal_char *)p_cfg->retry_vector, sizeof(p_cfg->retry_vector), "%s",
                             ORANGE_RETRY_VECTOR_DEFAULT);
                p_cfg->ike_rekey_timer = 0;
                p_cfg->esp_rekey_timer = 0;
                p_cfg->rekey_margin = 0;
                p_cfg->keep_timer = 50;
                p_cfg->mtu = 1300;
                p_cfg->cust_pcscf_4 = 0;
                p_cfg->ike_dscp = 48;
                p_cfg->IDi = IDI_RFC822_ADDR_MAC;
                p_cfg->fastreauth = 1;
                p_cfg->cert_used = 0;
                p_cfg->abort_mode = 1;
                p_cfg->dns_cache = 0;
                p_cfg->leave_standby_dpd = 1;
            }
            else if (streq(mcc, "231")) {
                kal_snprintf((kal_char *)p_cfg->ike_algo, sizeof(p_cfg->ike_algo), "%s",
                             "aes256-aes128-des-3des-sha256-sha1-aesxcbc-md5-prfsha256-prfaesxcbc-prfsha1-modp2048-modp1536!");
                kal_snprintf((kal_char *)p_cfg->esp_algo, sizeof(p_cfg->esp_algo), "%s",
                             "aes256-aes128-des-3des-sha256-sha1-aesxcbc-md5-modp2048-modp1536!");
                kal_snprintf((kal_char *)p_cfg->retry_vector, sizeof(p_cfg->retry_vector), "%s",
                             ORANGE_RETRY_VECTOR_DEFAULT);
                p_cfg->ike_rekey_timer = 3001;
                p_cfg->esp_rekey_timer = 1500;
                p_cfg->rekey_margin = 180;
                p_cfg->keep_timer = 50;
                p_cfg->mtu = 1300;
                p_cfg->IDr = IDR_KEY_ID;
                p_cfg->ike_dscp = 48;
                p_cfg->cert_used = 0;
                p_cfg->abort_mode = 1;
                p_cfg->dns_cache = 0;
                p_cfg->leave_standby_dpd = 1;
            }
            else if (streq(mcc, "206")) {
                kal_snprintf((kal_char *)p_cfg->ike_algo, sizeof(p_cfg->ike_algo), "%s",
                             "aes128-aes256-sha256-prfsha256-modp1536-modp1024-modp2048!");
                kal_snprintf((kal_char *)p_cfg->esp_algo, sizeof(p_cfg->esp_algo), "%s",
                             "aes128-aes256-sha256-modp1536-modp1024-modp2048!");
                kal_snprintf((kal_char *)p_cfg->retry_vector, sizeof(p_cfg->retry_vector), "%s",
                             ORANGE_RETRY_VECTOR_DEFAULT);
                p_cfg->ike_rekey_timer = 28800;
                p_cfg->esp_rekey_timer = 81000;
                p_cfg->rekey_margin = 180;
                p_cfg->keep_timer = 20;
                p_cfg->IDr = IDR_KEY_ID;
                p_cfg->ike_dscp = 48;
                p_cfg->abort_mode = 1;
                p_cfg->dns_cache = 0;
                p_cfg->leave_standby_dpd = 1;
            }
            else {
                kal_snprintf((kal_char *)p_cfg->ike_algo, sizeof(p_cfg->ike_algo), "%s",
                             "aes256-aes128-prfsha256-sha256-modp2048-modp1536!");
                kal_snprintf((kal_char *)p_cfg->esp_algo, sizeof(p_cfg->esp_algo), "%s",
                             "aes256-aes128-sha256-modp2048-modp1536!");
                kal_snprintf((kal_char *)p_cfg->retry_vector, sizeof(p_cfg->retry_vector), "%s",
                             ORANGE_RETRY_VECTOR_DEFAULT);
                p_cfg->ike_rekey_timer = 0;
                p_cfg->esp_rekey_timer = 0;
                p_cfg->rekey_margin = 0;
                p_cfg->dpd_timer = 110;
                p_cfg->keep_timer = 20;
                p_cfg->mtu = 1300;
                p_cfg->fastreauth = 1;
                p_cfg->cert_used = 0;
                p_cfg->dns_cache = 0;
                p_cfg->fragment = 1;
                p_cfg->abort_mode = 1;
                p_cfg->leave_standby_dpd = 1;
                p_cfg->send_del_ike_auth_ntfy_err = 1;
            }
            break;
        }
        case 5: /* TMO_EU (DTAG) */
        {
            if (streq(mcc, "262")) {
                kal_snprintf((kal_char *)p_cfg->ike_algo, sizeof(p_cfg->ike_algo), "%s",
                             "aes128-aes256-sha1-sha256-prfsha1-prfsha256-modp1024-modp1536");
                kal_snprintf((kal_char *)p_cfg->esp_algo, sizeof(p_cfg->esp_algo), "%s",
                             "aes128-aes256-sha1-sha256-prfsha1-prfsha256-modp1024-modp1536-noesn-esn");
                kal_snprintf((kal_char *)p_cfg->retry_vector, sizeof(p_cfg->retry_vector), "%s",
                             "'rst=ssid','24,30,30,7200','1040-1041,30,60,120,300,900','1081-1111,30,30,7200','8192-11011,30,30,7200'");
                p_cfg->keep_timer = 20;
                p_cfg->ike_rekey_timer = 81000;
                p_cfg->esp_rekey_timer = 81000;
                p_cfg->rekey_margin = 32400;
                p_cfg->mtu=1300;
                p_cfg->fastreauth = 1;
                p_cfg->retrans_to = 30;
                p_cfg->retrans_tries = 0;
                p_cfg->retrans_base = 1;
                p_cfg->dns_max_count = 1;
                p_cfg->dns_cache = 0;
                p_cfg->abort_mode = 1;
            }
            else if (streq(mcc, "230")) {
                kal_snprintf((kal_char *)p_cfg->ike_algo, sizeof(p_cfg->ike_algo), "%s",
                             "aes256-aes128-sha1-md5-prfsha1-prfmd5-prfsha256-prfsha512-modp1024-modp1536-modp2048!");
                kal_snprintf((kal_char *)p_cfg->esp_algo, sizeof(p_cfg->esp_algo), "%s",
                             "aes256-aes128-sha1-md5-modp1024-modp1536-modp2048!");
                kal_snprintf((kal_char *)p_cfg->retry_vector, sizeof(p_cfg->retry_vector), "%s",
                             "'rst=ssid','24,30,30,7200','1040-1041,30,60,120,300,900','1081-1111,30,30,7200','8192-11011,30,30,7200'");
                p_cfg->keep_timer = 20;
                p_cfg->ike_rekey_timer = 81000;
                p_cfg->esp_rekey_timer = 81000;
                p_cfg->rekey_margin = 32400;
                p_cfg->mtu=1300;
                p_cfg->fastreauth = 1;
                p_cfg->retrans_to = 30;
                p_cfg->retrans_tries = 0;
                p_cfg->retrans_base = 1;
                p_cfg->dns_max_count = 1;
                p_cfg->dns_cache = 0;
                p_cfg->abort_mode = 1;
            }
            else if (streq(mcc, "260")) {
                kal_snprintf((kal_char *)p_cfg->ike_algo, sizeof(p_cfg->ike_algo), "%s",
                             "aes256-aes128-sha1-sha256-md5-prfsha1-prfmd5-prfsha256-prfsha512-modp1024-modp1536-modp2048!");
                kal_snprintf((kal_char *)p_cfg->esp_algo, sizeof(p_cfg->esp_algo), "%s",
                             "aes256-aes128-sha1-sha256-md5-modp1024-modp1536-modp2048!");
                kal_snprintf((kal_char *)p_cfg->retry_vector, sizeof(p_cfg->retry_vector), "%s",
                             "'rst=ssid','24,30,30,7200','1040-1041,30,60,120,300,900','1081-1111,30,30,7200','8192-11011,30,30,7200'");
                p_cfg->keep_timer = 20;
                p_cfg->ike_rekey_timer = 81000;
                p_cfg->esp_rekey_timer = 81000;
                p_cfg->rekey_margin = 32400;
                p_cfg->mtu=1300;
                p_cfg->fastreauth = 1;
                p_cfg->retrans_to = 30;
                p_cfg->retrans_tries = 0;
                p_cfg->retrans_base = 1;
                p_cfg->dns_max_count = 1;
                p_cfg->dns_cache = 0;
                p_cfg->abort_mode = 1;
            }
            else if(streq(mcc, "202")) {
                kal_snprintf((kal_char *)p_cfg->ike_algo, sizeof(p_cfg->ike_algo), "%s",
                             "aes256-aes192-aes128-sha1-md5-sha1_160-md5_128-sha256-sha512-prfsha1-prfmd5-prfsha256-prfsha512-modp1024-modp1536-modp2048!");
                kal_snprintf((kal_char *)p_cfg->esp_algo, sizeof(p_cfg->esp_algo), "%s",
                             "aes128-aes192-aes256-sha256-sha1-sha384!");
                kal_snprintf((kal_char *)p_cfg->retry_vector, sizeof(p_cfg->retry_vector), "%s",
                             "'rst=ssid','24,30,30,7200','1040-1041,30,60,120,300,900','1081-1111,30,30,7200','8192-11011,30,30,7200'");
                p_cfg->dpd_timer = 60;
                p_cfg->ike_rekey_timer = 3600;
                p_cfg->esp_rekey_timer = 3600;
                p_cfg->rekey_margin = 180;
                p_cfg->mtu = 1280;
                p_cfg->retrans_to = 30;
                p_cfg->retrans_tries = 0;
                p_cfg->retrans_base = 1;
                p_cfg->dns_max_count = 1;
                p_cfg->oos = 30;
                p_cfg->mobike = 1;
                p_cfg->abort_mode = 1;
                p_cfg->dns_cache = 0;
                p_cfg->cert_used = 0;
            }
            else if (streq(mcc,"204")) {
                kal_snprintf((kal_char *)p_cfg->ike_algo, sizeof(p_cfg->ike_algo), "%s",
                             "aes256-aes128-sha1-sha256-prfsha1-prfsha256-modp1024!");
                kal_snprintf((kal_char *)p_cfg->esp_algo, sizeof(p_cfg->esp_algo), "%s",
                             "aes256-sha1-modp1024-noesn-esn");
                kal_snprintf((kal_char *)p_cfg->retry_vector, sizeof(p_cfg->retry_vector), "%s",
                             "'rst=ssid','24,30,30,7200','1040-1041,30,60,120,300,900','1081-1111,30,30,7200','8192-11011,30,30,7200'");
                p_cfg->ike_rekey_timer = 64800;
                p_cfg->esp_rekey_timer = 64800;
                p_cfg->rekey_margin = 16200;
                p_cfg->mtu = 1406;
                p_cfg->dns_max_count = 1;
                p_cfg->dns_cache = 0;
                p_cfg->abort_mode = 1;
            }
            else if (streq(mcc,"219")) {
                kal_snprintf((kal_char *)p_cfg->ike_algo, sizeof(p_cfg->ike_algo), "%s",
                             "aes128-aes256-sha1-sha256-prfsha1-prfsha256-modp1024-modp1536-modp2048!");
                kal_snprintf((kal_char *)p_cfg->esp_algo, sizeof(p_cfg->esp_algo), "%s",
                             "aes256-sha1-modp1024-noesn-esn");
                kal_snprintf((kal_char *)p_cfg->retry_vector, sizeof(p_cfg->retry_vector), "%s",
                             "'rst=ssid','24,30,30,43200','8192-11011,30,30,43200'");
                p_cfg->ike_rekey_timer = 64800;
                p_cfg->esp_rekey_timer = 64800;
                p_cfg->rekey_margin = 16200;
                p_cfg->fastreauth = 1;
                p_cfg->dns_cache = 0;
                p_cfg->dns_max_count = 1;
                p_cfg->mtu = 1406;
                p_cfg->abort_mode = 1;
            }
            else if (streq(mcc,"232")) {
                kal_snprintf((kal_char *)p_cfg->ike_algo, sizeof(p_cfg->ike_algo), "%s",
                             "aes128-aes256-sha1-sha256-prfsha1-prfsha256-modp1024-modp1536-modp2048!");
                kal_snprintf((kal_char *)p_cfg->esp_algo, sizeof(p_cfg->esp_algo), "%s",
                             "aes256-sha1-modp1024-noesn-esn");
                kal_snprintf((kal_char *)p_cfg->retry_vector, sizeof(p_cfg->retry_vector), "%s",
                             "'rst=ssid','24,30,30,43200','8192-11011,30,30,43200'");
                p_cfg->ike_rekey_timer = 64800;
                p_cfg->fastreauth = 1;
                p_cfg->dns_cache = 0;
                p_cfg->dns_max_count = 1;
                p_cfg->rekey_margin = 16200;
                p_cfg->mtu = 1406;
                p_cfg->esp_rekey_timer = 64800;
                p_cfg->abort_mode = 1;
            }
            else if (streq(mcc,"216")) {
                kal_snprintf((kal_char *)p_cfg->ike_algo, sizeof(p_cfg->ike_algo), "%s",
                             "aes128-aes256-sha1-sha256-prfsha1-prfsha256-modp2048-modp1536-modp1024!");
                kal_snprintf((kal_char *)p_cfg->esp_algo, sizeof(p_cfg->esp_algo), "%s",
                             "aes256-sha256!");
                kal_snprintf((kal_char *)p_cfg->retry_vector, sizeof(p_cfg->retry_vector), "%s",
                             "'rst=ssid','24,30,30,7200','1040-1041,30,60,120,300,900','1081-1111,30,30,7200','8192-11011,30,30,7200'");
                p_cfg->ike_rekey_timer = 64800;
                p_cfg->keep_timer = 20;
                p_cfg->fastreauth = 1;
                p_cfg->retrans_base = 1;
                p_cfg->dns_max_count = 1;
                p_cfg->rekey_margin = 32400;
                p_cfg->mtu = 1300;
                p_cfg->esp_rekey_timer = 64800;
                p_cfg->dns_cache = 0;
                p_cfg->retrans_to = 30;
                p_cfg->abort_mode = 1;
                p_cfg->retrans_tries = 0;
                p_cfg->IDr = IDR_KEY_ID;
                p_cfg->force_tsi_64 = 0;
                p_cfg->force_tsi_full = 0;
            }
            else {
                kal_snprintf((kal_char *)p_cfg->ike_algo, sizeof(p_cfg->ike_algo), "%s",
                             "aes256-sha1-modp1024");
                kal_snprintf((kal_char *)p_cfg->esp_algo, sizeof(p_cfg->esp_algo), "%s",
                             "aes256-sha1-modp1024-noesn-esn");
                kal_snprintf((kal_char *)p_cfg->retry_vector, sizeof(p_cfg->retry_vector), "%s",
                             "'rst=ssid','24,30,30,7200','1040-1041,30,60,120,300,900','1081-1111,30,30,7200','8192-11011,30,30,7200'");
                p_cfg->keep_timer = 20;
                p_cfg->ike_rekey_timer = 81000;
                p_cfg->esp_rekey_timer = 81000;
                p_cfg->rekey_margin = 32400;
                p_cfg->mtu = 1300;
                p_cfg->fastreauth = 1;
                p_cfg->retrans_to = 30;
                p_cfg->retrans_tries = 0;
                p_cfg->retrans_base = 1;
                p_cfg->dns_max_count = 1;
                p_cfg->dns_cache = 0;
                p_cfg->abort_mode = 1;
            }
            break;
        }
        case 6: /* Vodafone */
        {
            if (streq(mcc, "230")) {
                kal_snprintf((kal_char *)p_cfg->ike_algo, sizeof(p_cfg->ike_algo), "%s",
                             "aes256-sha256-prfsha256-modp1536");
                kal_snprintf((kal_char *)p_cfg->esp_algo, sizeof(p_cfg->esp_algo), "%s",
                             "aes256-sha256-sha512");
                kal_snprintf((kal_char *)p_cfg->retry_vector, sizeof(p_cfg->retry_vector), "%s",
                             "'rst=ssid','24,30,30,43200','1040-1041,30,60,120,300,900','1081-1111,30,30,43200','8192-11011,30,30,43200'");
                p_cfg->keep_timer = 30;
                p_cfg->ike_rekey_timer = 86400;
                p_cfg->esp_rekey_timer = 86400;
                p_cfg->rekey_margin = 180;
                p_cfg->dpd_timer = 60;
                p_cfg->mtu = 1500;
                p_cfg->cert_used = 0;
                p_cfg->abort_mode = 1;
            }
            else if (streq(mcc, "234")) {
                kal_snprintf((kal_char *)p_cfg->ike_algo, sizeof(p_cfg->ike_algo), "%s",
                             "aes256-sha256-modp1024,aes128-aes256-des-3des-md5-sha1-aesxcbc-modp1024-modp1536-modp2048!");
                kal_snprintf((kal_char *)p_cfg->esp_algo, sizeof(p_cfg->esp_algo), "%s",
                             "aes256-sha1,aes128-aes256-des-3des-md5-sha1-aesxcbc!");
                kal_snprintf((kal_char *)p_cfg->retry_vector, sizeof(p_cfg->retry_vector), "%s",
                             "'rst=ssid','24,30,30,43200','1040-1041,30,60,120,300,900','1081-1111,30,30,43200','8192-11011,30,30,43200'");
                p_cfg->keep_timer = 30;
                p_cfg->ike_rekey_timer = 86400;
                p_cfg->esp_rekey_timer = 86400;
                p_cfg->rekey_margin = 180;
                p_cfg->cust_pcscf_6 = 16390;
                p_cfg->cert_used = 0;
                p_cfg->abort_mode = 1;
                p_cfg->IDr = IDR_KEY_ID;
            }
            else if (streq(mcc, "262")) {
                kal_snprintf((kal_char *)p_cfg->ike_algo, sizeof(p_cfg->ike_algo), "%s",
                             "aes256-aes128-sha1-sha256-sha384-sha512-aesxcbc-prfsha1-modp2048!");
                kal_snprintf((kal_char *)p_cfg->esp_algo, sizeof(p_cfg->esp_algo), "%s",
                             "aes256-aes128-sha1-aesxcbc!");
                kal_snprintf((kal_char *)p_cfg->retry_vector, sizeof(p_cfg->retry_vector), "%s",
                             "'rst=ssid','24,30,30,43200','1040-1041,30,60,120,300,900','1081-1111,30,30,43200','8192-11011,30,30,43200'");
                p_cfg->keep_timer = 30;
                p_cfg->ike_rekey_timer = 86400;
                p_cfg->esp_rekey_timer = 14400;
                p_cfg->rekey_margin = 180;
                p_cfg->cert_used = 0;
                p_cfg->abort_mode = 1;
            }
            else if (streq(mcc, "204")) {
                kal_snprintf((kal_char *)p_cfg->ike_algo, sizeof(p_cfg->ike_algo), "%s",
                             "aes256-aes128-sha1-sha256-sha384-sha512-aesxcbc-prfsha1-modp2048!");
                kal_snprintf((kal_char *)p_cfg->esp_algo, sizeof(p_cfg->esp_algo), "%s",
                             "aes256-aes128-sha1-aesxcbc!");
                kal_snprintf((kal_char *)p_cfg->retry_vector, sizeof(p_cfg->retry_vector), "%s",
                             "'rst=ssid','24,30,30,43200','1040-1041,30,60,120,300,900','1081-1111,30,30,43200','8192-11011,30,30,43200'");
                p_cfg->keep_timer = 30;
                p_cfg->ike_rekey_timer = 86400;
                p_cfg->esp_rekey_timer = 86400;
                p_cfg->rekey_margin = 180;
                p_cfg->cert_used = 0;
                p_cfg->urlcert = 1;
                p_cfg->abort_mode = 1;
            }
            else if (streq(mcc, "272")) {
                kal_snprintf((kal_char *)p_cfg->ike_algo, sizeof(p_cfg->ike_algo), "%s",
                             "aes256-sha256-prfsha256-modp2048!");
                kal_snprintf((kal_char *)p_cfg->esp_algo, sizeof(p_cfg->esp_algo), "%s",
                             "aes256-sha1-modp2048!");
                p_cfg->IDr = IDR_KEY_ID;
            }
            else if (streq(mcc, "655")) {
                kal_snprintf((kal_char *)p_cfg->ike_algo, sizeof(p_cfg->ike_algo), "%s",
                             "aes128-md5-modp1024!");
                kal_snprintf((kal_char *)p_cfg->esp_algo, sizeof(p_cfg->esp_algo), "%s",
                             "aes128-sha1!");
                kal_snprintf((kal_char *)p_cfg->retry_vector, sizeof(p_cfg->retry_vector), "%s",
                             "'rst=ssid','24,30,30,43200','1040-1041,30,60,120,300,900','1081-1111,30,30,43200','8192-11011,30,30,43200'");
                p_cfg->IDr = IDR_KEY_ID;
                p_cfg->keep_timer = 30;
                p_cfg->ike_rekey_timer = 86400;
                p_cfg->esp_rekey_timer = 86400;
                p_cfg->rekey_margin = 180;
                p_cfg->abort_mode = 1;
            }
            else if (streq(mcc, "286")) {
                kal_snprintf((kal_char *)p_cfg->ike_algo, sizeof(p_cfg->ike_algo), "%s",
                             "aes128-sha1-modp1024");
                kal_snprintf((kal_char *)p_cfg->esp_algo, sizeof(p_cfg->esp_algo), "%s",
                             "aes128-sha1-modp1024");
                kal_snprintf((kal_char *)p_cfg->retry_vector, sizeof(p_cfg->retry_vector), "%s",
                             "'rst=ssid','24,30,30,43200','1040-1041,30,60,120,300,900','1081-1111,30,30,43200','8192-11011,30,30,43200'");
                p_cfg->IDi = IDI_RFC822_ADDR;
                p_cfg->IDr = IDR_KEY_ID;
                p_cfg->keep_timer = 20;
                p_cfg->ike_rekey_timer = 28800;
                p_cfg->esp_rekey_timer = 28800;
                p_cfg->rekey_margin = 180;
                p_cfg->dpd_timer = 600;
                p_cfg->cust_pcscf_4 = 16389;
                p_cfg->cust_pcscf_6 = 16390;
                p_cfg->oos = 30;
                p_cfg->urlcert = 1;
                p_cfg->mobike = 1;
                p_cfg->abort_mode = 1;
            }
            else if (streq(mcc,"202")) {
                kal_snprintf((kal_char *)p_cfg->retry_vector, sizeof(p_cfg->retry_vector), "%s",
                             "'rst=ssid','24,30,30,43200','1040-1041,30,60,120,300,900','1081-1111,30,30,43200','8192-11011,30,30,43200'");
                kal_snprintf((kal_char *)p_cfg->ike_algo, sizeof(p_cfg->ike_algo), "%s",
                             "aes256-sha256-modp1024!");
                kal_snprintf((kal_char *)p_cfg->esp_algo, sizeof(p_cfg->esp_algo), "%s",
                             "aes256-sha1!");
                p_cfg->cust_pcscf_4 = 16384;
            }
            else if (streq(mcc, "226")) {
                kal_snprintf((kal_char *)p_cfg->ike_algo, sizeof(p_cfg->ike_algo), "%s",
                             "aes256-aes128-sha1-sha256-sha512-aesxcbc-prfsha1-prfsha256-prfsha512-modp1024-modp1536-modp2048!");
                kal_snprintf((kal_char *)p_cfg->esp_algo, sizeof(p_cfg->esp_algo), "%s",
                             "aes256-aes128-sha1-sha256-sha512-aesxcbc!");
                kal_snprintf((kal_char *)p_cfg->retry_vector, sizeof(p_cfg->retry_vector), "%s",
                             "'rst=ssid','24,30,30,43200','1040-1041,30,60,120,300,900','1081-1111,30,30,43200','8192-11011,30,30,43200'");
                p_cfg->IDr = IDR_KEY_ID;
                p_cfg->keep_timer = 30;
                p_cfg->ike_rekey_timer = 86400;
                p_cfg->esp_rekey_timer = 28800;
                p_cfg->rekey_margin = 180;
                p_cfg->dpd_timer = 60;
                p_cfg->cust_pcscf_6 = 0;
                p_cfg->cert_used = 0;
                p_cfg->abort_mode = 1;
            }
            else {
                kal_snprintf((kal_char *)p_cfg->ike_algo, sizeof(p_cfg->ike_algo), "%s",
                             "aes256-aes128-sha1-sha256-sha384-sha512-aesxcbc-prfsha1-modp2048!");
                kal_snprintf((kal_char *)p_cfg->esp_algo, sizeof(p_cfg->esp_algo), "%s",
                             "aes256-aes128-sha1-aesxcbc!");
                kal_snprintf((kal_char *)p_cfg->retry_vector, sizeof(p_cfg->retry_vector), "%s",
                             "'rst=ssid','24,30,30,43200','1040-1041,30,60,120,300,900','1081-1111,30,30,43200','8192-11011,30,30,43200'");
                p_cfg->keep_timer = 30;
                p_cfg->ike_rekey_timer = 86400;
                p_cfg->esp_rekey_timer = 86400;
                p_cfg->rekey_margin = 180;
                p_cfg->dpd_timer = 600;
                p_cfg->cert_used = 0;
                p_cfg->abort_mode = 1;
            }
            break;
        }
        case 7: /* AT&T */
        {
            if (streq(mcc,"334")) {
                kal_snprintf((kal_char *)p_cfg->ike_algo, sizeof(p_cfg->ike_algo), "%s",
                             "aes256-sha1-prfsha1-modp1536!");
                kal_snprintf((kal_char *)p_cfg->epdg_fqdn, sizeof(p_cfg->epdg_fqdn), "%s",
                             "epdg.ims.attmex.mx");
                kal_snprintf((kal_char *)p_cfg->esp_algo, sizeof(p_cfg->esp_algo), "%s",
                             "aes256-sha1!");
                p_cfg->keep_timer = 60;
                p_cfg->cust_pcscf_4 = 16389;
                p_cfg->cust_pcscf_6 = 16390;
                p_cfg->oos = 30;
                p_cfg->mtu = 1500;
                p_cfg->cust_imei_cp = 16391;
            }
            else{
                kal_snprintf((kal_char *)p_cfg->ike_algo, sizeof(p_cfg->ike_algo), "%s",
                             "aes128-sha256-modp2048!");
                kal_snprintf((kal_char *)p_cfg->esp_algo, sizeof(p_cfg->esp_algo), "%s",
                             "aes128-sha256!");
                kal_snprintf((kal_char *)p_cfg->epdg_fqdn, sizeof(p_cfg->epdg_fqdn), "%s",
                             "epdg.epc.att.net");
                kal_snprintf((kal_char *)p_cfg->retry_vector, sizeof(p_cfg->retry_vector), "%s",
                             "'8192,-1','36,20,40,80,160,320'");
                p_cfg->keep_timer = 20;
                p_cfg->cust_pcscf_4 = 16384;
                p_cfg->cust_pcscf_6 = 16386;
                p_cfg->oos = 30;
                p_cfg->mobike = 0;
                p_cfg->dns_type = DNS_ADDR_V4;
                p_cfg->fragment = 1;
            }
            break;
        }
        case 8: /* TMO_US */
        {
            kal_snprintf((kal_char *)p_cfg->ike_algo, sizeof(p_cfg->ike_algo), "%s",
                         "aes128-sha1-modp1024");
            kal_snprintf((kal_char *)p_cfg->esp_algo, sizeof(p_cfg->esp_algo), "%s",
                         "aes128-sha1");
            kal_snprintf((kal_char *)p_cfg->retry_vector, sizeof(p_cfg->retry_vector), "%s",
                         "'10500,3600','10000,900','11001,-1','11000,-3'");
            p_cfg->cust_pcscf_4 = 16384;
            p_cfg->cust_pcscf_6 = 16386;
            p_cfg->oos = 30;
            p_cfg->urlcert = 1;
            p_cfg->mobike = 1;
            break;
        }
        case 9: /* CT */
        {
            break;
        }
        case 11: /* H3G */
        {
            /* MCC 234 live and 235 lab */

            if (streq(mcc, "234")) {
                kal_snprintf((kal_char *)p_cfg->ike_algo, sizeof(p_cfg->ike_algo), "%s",
                             "aes128-sha1-prfsha1-modp2048");
                kal_snprintf((kal_char *)p_cfg->esp_algo, sizeof(p_cfg->esp_algo), "%s",
                             "aes128-sha1");
                p_cfg->mtu = 1500;
                p_cfg->keep_timer = 20;
                p_cfg->cust_pcscf_4 = 16389;
                p_cfg->cust_pcscf_6 = 16386;
                p_cfg->ike_rekey_timer = 86400;
                p_cfg->esp_rekey_timer = 86400;
                p_cfg->abort_mode = 1;
            }
            else if (streq(mcc, "235")) {
                kal_snprintf((kal_char *)p_cfg->ike_algo, sizeof(p_cfg->ike_algo), "%s",
                             "aes128-sha1-prfsha1-modp2048");
                kal_snprintf((kal_char *)p_cfg->esp_algo, sizeof(p_cfg->esp_algo), "%s",
                             "aes128-sha1");
                p_cfg->mtu = 1500;
                p_cfg->keep_timer = 20;
                p_cfg->cust_pcscf_4 = 16389;
                p_cfg->cust_pcscf_6 = 16386;
                p_cfg->ike_rekey_timer = 86400;
                p_cfg->esp_rekey_timer = 86400;
                p_cfg->abort_mode = 1;
            }
            else if (streq(mcc, "240")) {
                kal_snprintf((kal_char *)p_cfg->ike_algo, sizeof(p_cfg->ike_algo), "%s",
                             "aes256-aes128-sha1-sha256-aesxcbc-prfsha1-prfsha256-prfmd5-modp1024-modp1536-modp2048!");
                kal_snprintf((kal_char *)p_cfg->esp_algo, sizeof(p_cfg->esp_algo), "%s",
                             "aes128-aes256-3des-sha1-sha256-aesxcbc!");
                kal_snprintf((kal_char *)p_cfg->retry_vector, sizeof(p_cfg->retry_vector), "%s",
                             "'rst=ssid','24,30,30,43200','1040-1041,30,60,120,300,900','1081-1111,30,30,43200','8192-11011,30,30,43200'");
                p_cfg->keep_timer = 60;
                p_cfg->dpd_timer = 3600;
                p_cfg->ike_rekey_timer = 86400;
                p_cfg->esp_rekey_timer = 86400;
                p_cfg->rekey_margin = 180;
                p_cfg->mtu = 1280;
                p_cfg->fastreauth = 1;
                p_cfg->oos = 30;
                p_cfg->retrans_to = 1;
                p_cfg->retrans_base = 2;
                p_cfg->cert_used = 0;
                p_cfg->abort_mode = 1;
            }
            else if (streq(mcc, "238")) {
                kal_snprintf((kal_char *)p_cfg->ike_algo, sizeof(p_cfg->ike_algo), "%s",
                             "aes256-aes128-sha1-sha256-aesxcbc-prfsha1-prfsha256-prfmd5-modp1024-modp1536-modp2048!");
                kal_snprintf((kal_char *)p_cfg->esp_algo, sizeof(p_cfg->esp_algo), "%s",
                             "aes128-aes256-3des-sha1-sha256-aesxcbc!");
                kal_snprintf((kal_char *)p_cfg->retry_vector, sizeof(p_cfg->retry_vector), "%s",
                             "'rst=ssid','24,30,30,43200','1040-1041,30,60,120,300,900','1081-1111,30,30,43200','8192-11011,30,30,43200'");
                p_cfg->keep_timer = 60;
                p_cfg->dpd_timer = 3600;
                p_cfg->ike_rekey_timer = 86400;
                p_cfg->esp_rekey_timer = 86400;
                p_cfg->rekey_margin = 180;
                p_cfg->mtu = 1280;
                p_cfg->fastreauth = 1;
                p_cfg->oos = 30;
                p_cfg->retrans_to = 1;
                p_cfg->retrans_base = 2;
                p_cfg->cert_used = 0;
                p_cfg->abort_mode = 1;
            }
            else if (streq(mcc, "232")) {
                kal_snprintf((kal_char *)p_cfg->ike_algo, sizeof(p_cfg->ike_algo), "%s",
                             "aes128-aes256-sha1-sha256-prfsha1-prfsha256-modp2048-modp1024-modp1536!");
                kal_snprintf((kal_char *)p_cfg->esp_algo, sizeof(p_cfg->esp_algo), "%s",
                             "aes128-aes256-sha1-sha256-modp2048-modp1024-modp1536!");
                kal_snprintf((kal_char *)p_cfg->retry_vector, sizeof(p_cfg->retry_vector), "%s",
                             "'rst=ssid','24,30,30,43200','1040-1041,30,60,120,300,900','1081-1111,30,30,43200','8192-11011,30,30,43200'");
                p_cfg->keep_timer = 20;
                p_cfg->ike_rekey_timer = 1800;
                p_cfg->esp_rekey_timer = 1800;
                p_cfg->rekey_margin = 180;
                p_cfg->mtu = 1280;
                p_cfg->cert_used = 0;
                p_cfg->abort_mode = 1;
            }
            else {
                kal_snprintf((kal_char *)p_cfg->ike_algo, sizeof(p_cfg->ike_algo), "%s",
                             "aes128-sha1-modp2048!");
                kal_snprintf((kal_char *)p_cfg->esp_algo, sizeof(p_cfg->esp_algo), "%s",
                             "aes128-sha1!");
                kal_snprintf((kal_char *)p_cfg->retry_vector, sizeof(p_cfg->retry_vector), "%s",
                             "'rst=ssid','24,30,30,43200','1040-1041,30,60,120,300,900','1081-1111,30,30,43200','8192-11011,30,30,43200'");
                p_cfg->IDr = IDR_KEY_ID;
                p_cfg->mtu = 1500;
                p_cfg->cust_pcscf_4 = 16389;
                p_cfg->cust_pcscf_6 = 16386;
                p_cfg->abort_mode = 1;
            }
            break;
        }
        case 12: /* VzW */
        {
            kal_snprintf((kal_char *)p_cfg->ike_algo, sizeof(p_cfg->ike_algo), "%s",
                         "aes256-sha1-modp1024-modp1536-modp2048");
            kal_snprintf((kal_char *)p_cfg->esp_algo, sizeof(p_cfg->esp_algo), "%s",
                         "aes128-aes256-sha1");
            kal_snprintf((kal_char *)p_cfg->epdg_fqdn, sizeof(p_cfg->epdg_fqdn), "%s",
                         "wo.vzwwo.com");
            kal_snprintf((kal_char *)p_cfg->retry_vector, sizeof(p_cfg->retry_vector), "%s",
                         "'rst=ssid','24,0,0,-1','1001-1080,-2','1082-3000,-2','9000-9050,0,0,-1','10500-10550,3600','11000-11050,0,0,-1','1-11050,0,0,60+15,120,480,900'");
            p_cfg->cust_imei_cp = 16391;
            p_cfg->IDi = IDI_RFC822_ADDR_MAC_EAP_NO_MAC;
            p_cfg->IDr = IDR_KEY_ID;
            p_cfg->keep_timer = 50;
            p_cfg->ike_rekey_timer = 86400;
            p_cfg->esp_rekey_timer = 86400;
            p_cfg->rekey_margin = 180;
            p_cfg->dns_timer = 480;
            p_cfg->retrans_to = 1;
            p_cfg->retrans_tries = 4;
            p_cfg->retrans_base = 2;
            p_cfg->esp_setup_time = 20;
            p_cfg->try_epdg_policy = TRY_ONE_EPDG_IP;
            break;
        }
        case 15: /* Telefonica (O2) */
        {
            if (streq(mcc, "234")) {
                kal_snprintf((kal_char *)p_cfg->ike_algo, sizeof(p_cfg->ike_algo), "%s",
                             "aes128-aes128ctr-aes192-aes192ctr-aes256-aes256ctr-sha1-sha256-sha384-sha512-modp2048!");
                kal_snprintf((kal_char *)p_cfg->esp_algo, sizeof(p_cfg->esp_algo), "%s",
                             "aes256-sha1-sha256-sha384-sha512-modp2048!");
                kal_snprintf((kal_char *)p_cfg->epdg_fqdn, sizeof(p_cfg->epdg_fqdn), "%s",
                             "epdg.epc.mnc010.mcc234.pub.3gppnetwork.org");
                kal_snprintf((kal_char *)p_cfg->retry_vector, sizeof(p_cfg->retry_vector), "%s",
                             "'rst=ssid','24,30,30,43200','1040-1041,30,60,120,300,900','1081-1111,30,30,43200','8192-11011,30,30,43200'");
                p_cfg->IDr = IDR_KEY_ID;
                p_cfg->ike_rekey_timer = 43200;
                p_cfg->esp_rekey_timer = 43200;
                p_cfg->rekey_margin = 180;
                p_cfg->keep_timer = 30;
                p_cfg->dpd_timer = 1800;
                p_cfg->retrans_tries = 3;
                p_cfg->mtu = 1280;
                p_cfg->abort_mode = 1;
            }
            else if (streq(mcc, "262")) {
                kal_snprintf((kal_char *)p_cfg->ike_algo, sizeof(p_cfg->ike_algo), "%s",
                             "aes256-sha256-prfsha1-modp2048");
                kal_snprintf((kal_char *)p_cfg->esp_algo, sizeof(p_cfg->esp_algo), "%s",
                             "aes256-sha256");
                kal_snprintf((kal_char *)p_cfg->retry_vector, sizeof(p_cfg->retry_vector), "%s",
                             "'rst=ssid','24,30,30,43200','1040-1041,30,60,120,300,900','1081-1111,30,30,43200','8192-11011,30,30,43200'");
                p_cfg->cust_pcscf_4 = 16389;
                p_cfg->cust_pcscf_6 = 16390;
                p_cfg->cust_imei_cp = 16385;
                p_cfg->keep_timer = 30;
                p_cfg->abort_mode = 1;
            }
            else if (streq(mcc, "214")) {
                kal_snprintf((kal_char *)p_cfg->ike_algo, sizeof(p_cfg->ike_algo), "%s",
                             "aes256-sha512-prfsha256-modp4096,aes256-sha512-prfsha256-modp2048!");
                kal_snprintf((kal_char *)p_cfg->esp_algo, sizeof(p_cfg->esp_algo), "%s",
                             "aes256-sha512-modp4096-modp2048");
                kal_snprintf((kal_char *)p_cfg->retry_vector, sizeof(p_cfg->retry_vector), "%s",
                             "'rst=ssid','24,30,30,43200','1040-1041,30,60,120,300,900','1081-1111,30,30,43200','8192-11011,30,30,43200'");
                p_cfg->mtu = 1280;
                p_cfg->keep_timer = 20;
                p_cfg->dpd_timer = 30;
                p_cfg->retrans_tries = 5;
                p_cfg->cert_used = 0;
                p_cfg->ike_dscp = 46;
                p_cfg->abort_mode = 1;
            }
            else {
                kal_snprintf((kal_char *)p_cfg->ike_algo, sizeof(p_cfg->ike_algo), "%s",
                             "aes128-aes128ctr-aes192-aes192ctr-aes256-aes256ctr-sha1-sha256-sha384-sha512-modp2048!");
                kal_snprintf((kal_char *)p_cfg->esp_algo, sizeof(p_cfg->esp_algo), "%s",
                             "aes256-sha1-sha256-sha384-sha512-modp2048!");
                p_cfg->IDr = IDR_KEY_ID;
                p_cfg->ike_rekey_timer = 43200;
                p_cfg->esp_rekey_timer = 43200;
                p_cfg->rekey_margin = 180;
                p_cfg->dpd_timer = 1800;
                p_cfg->retrans_tries = 3;
                p_cfg->mtu = 1280;
            }
            break;
        }
        case 16: /* EE */
        {
            kal_snprintf((kal_char *)p_cfg->retry_vector, sizeof(p_cfg->retry_vector), "%s",
                         "'rst=ssid','24,10,30,60,120,300','1040-1041,30,60,120,300,900','1081-1111,10,30,60,120,300','8192-11011,10,30,60,120,300'");
            p_cfg->esp_setup_time = 30;
            p_cfg->dpd_timer = 60;
            p_cfg->mtu = 1280;
            p_cfg->ike_rekey_timer = 1200;
            p_cfg->rekey_margin = 180;
            p_cfg->dns_type = DNS_ADDR_V4V6;
            p_cfg->use_cfg_vip = 1;
            p_cfg->abort_mode = 1;
            break;
        }
        case 17: /* DoCoMo */
        {
            break;
        }
        case 18: /* RJIL */
        {
            kal_snprintf((kal_char *)p_cfg->select_info, sizeof(p_cfg->select_info), "%s",
                         "'405840,0','405854,0','405855,0','405856,0','405857,0','405858,0','405859,0','405860,0','405861,0','405862,0','405863,0','405864,0','405865,0','405866,0','405867,0','405868,0','405869,0','405870,0','405871,0','405872,0','405873,0','405874,0'");
            kal_snprintf((kal_char *)p_cfg->epdg_identifier, sizeof(p_cfg->epdg_identifier), "%s",
                         "'internationalvowifi.jio.com,1','vowifi.jio.com,0'");
            kal_snprintf((kal_char *)p_cfg->retry_vector, sizeof(p_cfg->retry_vector), "%s",
                         "'rst=ssid','24,30,30,60,120,240,7200,-1','1040-1041,5,15,30,60,120,300,900','1081,5,15,30,60,120,300,900','1082-1111,30,30,60,120,240,7200','8192-11011,30,30,43200'");
            p_cfg->ike_rekey_timer = 86400;
            p_cfg->esp_rekey_timer = 86400;
            p_cfg->rekey_margin = 180;
            p_cfg->keep_timer = 20;
            p_cfg->device_identity = 1;
            break;
        }
        case 19: /* Telstra */
        {
            kal_snprintf((kal_char *)p_cfg->ike_algo, sizeof(p_cfg->ike_algo), "%s",
                         "aes256-sha256-prfsha256-modp2048");
            kal_snprintf((kal_char *)p_cfg->esp_algo, sizeof(p_cfg->esp_algo), "%s",
                         "aes256-sha256-modp2048");
            kal_snprintf((kal_char *)p_cfg->retry_vector, sizeof(p_cfg->retry_vector), "%s",
                         "'mrc=288','1000-2000ri,60,120,240,480,960,1920'");
            p_cfg->dpd_timer = 1740;
            p_cfg->mtu = 1400;
            p_cfg->ike_rekey_timer = 86400;
            p_cfg->esp_rekey_timer = 86400;
            p_cfg->rekey_margin = 180;
            p_cfg->keep_timer = 20;
            p_cfg->retrans_to = 1;
            p_cfg->retrans_tries = 3;
            p_cfg->retrans_base = 2;
            p_cfg->fragment = 1;
            p_cfg->device_identity = 1;
            break;
        }
        case 20: /* SPRINT */
        {
            kal_snprintf((kal_char *)p_cfg->ike_algo, sizeof(p_cfg->ike_algo), "%s",
                         "aes128-aes256-des-3des-sha1-sha256-sha512-aesxcbc-md5-prfaesxcbc-prfmd5-prfsha1-modp1024-modp1536-modp2048!");
            kal_snprintf((kal_char *)p_cfg->esp_algo, sizeof(p_cfg->esp_algo), "%s",
                         "aes128-sha1-noesn");
            p_cfg->keep_timer = 20;
            p_cfg->retrans_to = 3;
            p_cfg->retrans_tries = 2;
            p_cfg->retrans_base = 1;
            p_cfg->dpd_timer = 600;
            p_cfg->mtu = 1500;
            p_cfg->oos = 7;
            break;
        }
        case 100: /* CSL */
        {
            kal_snprintf((kal_char *)p_cfg->ike_algo, sizeof(p_cfg->ike_algo), "%s",
                         "aes256-aes128-3des-des-aesxcbc-sha1-md5-prfaesxcbc-prfsha1-modp1024!");
            kal_snprintf((kal_char *)p_cfg->esp_algo, sizeof(p_cfg->esp_algo), "%s",
                         "aes256-aes128-3des-des-aesxcbc-sha1-md5!");
            kal_snprintf((kal_char *)p_cfg->epdg_fqdn, sizeof(p_cfg->epdg_fqdn), "%s",
                         "epdg.epc.mnc000.mcc454.pub.3gppnetwork.org");
            kal_snprintf((kal_char *)p_cfg->select_info, sizeof(p_cfg->select_info), "%s",
                         "'45400,0','45402,0','45410,0','45418,0'");
            p_cfg->dpd_timer = 900;
            p_cfg->ike_rekey_timer = 0;
            p_cfg->esp_rekey_timer = 0;
            p_cfg->rekey_margin = 0;
            p_cfg->cust_pcscf_4 = 16384;
            p_cfg->cust_pcscf_6 = 16386;
            p_cfg->cert_used = 0;
            break;
        }
        case 101: /* PCCW */
        {
            kal_snprintf((kal_char *)p_cfg->ike_algo, sizeof(p_cfg->ike_algo), "%s",
                         "aes256-aes128-3des-des-aesxcbc-sha1-md5-prfaesxcbc-prfsha1-modp1024!");
            kal_snprintf((kal_char *)p_cfg->esp_algo, sizeof(p_cfg->esp_algo), "%s",
                         "aes256-aes128-3des-des-aesxcbc-sha1-md5!");
            kal_snprintf((kal_char *)p_cfg->epdg_fqdn, sizeof(p_cfg->epdg_fqdn), "%s",
                         "epdg.epc.mnc019.mcc454.pub.3gppnetwork.org");
            kal_snprintf((kal_char *)p_cfg->select_info, sizeof(p_cfg->select_info), "%s",
                         "'45416,0','45419,0','45420,0','45429,0'");
            p_cfg->dpd_timer = 900;
            p_cfg->ike_rekey_timer = 0;
            p_cfg->esp_rekey_timer = 0;
            p_cfg->rekey_margin = 0;
            p_cfg->cust_pcscf_4 = 16384;
            p_cfg->cust_pcscf_6 = 16386;
            p_cfg->cert_used = 0;
            break;
        }
        case 102: /* SMT, SmarTone */
        {
            kal_snprintf((kal_char *)p_cfg->ike_algo, sizeof(p_cfg->ike_algo), "%s",
                         "aes256-aes128-3des-des-aesxcbc-sha1-md5-prfaesxcbc-prfsha1-modp1024!");
            kal_snprintf((kal_char *)p_cfg->esp_algo, sizeof(p_cfg->esp_algo), "%s",
                         "aes256-aes128-3des-des-aesxcbc-sha1-md5-modp768!");
            kal_snprintf((kal_char *)p_cfg->epdg_fqdn, sizeof(p_cfg->epdg_fqdn), "%s",
                         "epdg.epc.mnc006.mcc454.pub.3gppnetwork.org");
            kal_snprintf((kal_char *)p_cfg->select_info, sizeof(p_cfg->select_info), "%s",
                         "'45406,0','45415,0','45417,0'");
            p_cfg->dpd_timer = 600;
            p_cfg->ike_rekey_timer = 86400;
            p_cfg->esp_rekey_timer = 86400;
            p_cfg->rekey_margin = 43200;
            p_cfg->IDr = IDR_KEY_ID;
            p_cfg->cust_pcscf_4 = 16384;
            p_cfg->cust_pcscf_6 = 16386;
            p_cfg->cert_used = 0;
            break;
        }
        case 103: /* SingTel */
        {
            kal_snprintf((kal_char *)p_cfg->ike_algo, sizeof(p_cfg->ike_algo), "%s",
                         "aes128-aes128ctr-aes192-aes192ctr-aes256-aes256ctr-des-3des-aesxcbc-md5-sha1-sha256-sha384-sha512-prfaesxcbc-prfmd5-prfsha1-prfsha256-prfsha384-prfsha512-modp2048-modp1536-modp1024-modp768!");
            kal_snprintf((kal_char *)p_cfg->esp_algo, sizeof(p_cfg->esp_algo), "%s",
                         "aes128-aes128ctr-aes192-aes192ctr-aes256-aes256ctr-des-3des-aesxcbc-md5-sha1-sha256-sha384-sha512");
            p_cfg->ike_rekey_timer = 3600;
            p_cfg->esp_rekey_timer = 43200;
            p_cfg->dpd_timer = 600;
            p_cfg->retrans_to = 5;
            p_cfg->retrans_base = 1;
            p_cfg->retrans_tries = 3;
            p_cfg->cust_pcscf_4 = 16384;
            p_cfg->cust_pcscf_6 = 16386;
            break;
        }
        case 104: /* StarHub */
        {
            kal_snprintf((kal_char *)p_cfg->ike_algo, sizeof(p_cfg->ike_algo), "%s",
                         "aes128-3des-des-aes192-aes256-sha1-sha256-sha384-sha512-md5-aesxcbc-prfsha1-prfaesxcbc-modp1024-modp2048-modp1536-modp768!");
            kal_snprintf((kal_char *)p_cfg->esp_algo, sizeof(p_cfg->esp_algo), "%s",
                         "aes128-3des-des-aes192-aes256-sha1-sha256-sha384-sha512-md5-aesxcbc-modp1024-modp2048-modp1536-modp768!");
            p_cfg->ike_rekey_timer = 3001;
            p_cfg->esp_rekey_timer = 1500;
            p_cfg->cert_used = 0;
            p_cfg->mobike = 1;
            p_cfg->oos = 15;
            p_cfg->IDr = IDR_KEY_ID;
            break;
        }
        case 106: /* 3HK */
        {
            kal_snprintf((kal_char *)p_cfg->ike_algo, sizeof(p_cfg->ike_algo), "%s",
                         "aes256-aes128-3des-des-aesxcbc-sha1-md5-prfaesxcbc-prfsha1-modp1024!");
            kal_snprintf((kal_char *)p_cfg->esp_algo, sizeof(p_cfg->esp_algo), "%s",
                         "aes256-aes128-3des-des-aesxcbc-sha1-md5!");
            kal_snprintf((kal_char *)p_cfg->epdg_fqdn, sizeof(p_cfg->epdg_fqdn), "%s",
                         "wlan.three.com.hk");
            kal_snprintf((kal_char *)p_cfg->select_info, sizeof(p_cfg->select_info), "%s",
                         "'45403,0','45404,0','45405,0','45414,0'");
            p_cfg->dpd_timer = 4200;
            p_cfg->ike_rekey_timer = 0;
            p_cfg->esp_rekey_timer = 0;
            p_cfg->rekey_margin = 0;
            p_cfg->IDr = IDR_KEY_ID;
            p_cfg->cust_pcscf_4 = 16389;
            p_cfg->cust_pcscf_6 = 16390;
            p_cfg->cert_used = 0;
            break;
        }
        case 107: /* SFR */
        {
            kal_snprintf((kal_char *)p_cfg->ike_algo, sizeof(p_cfg->ike_algo), "%s",
                         "aes128-sha256-modp2048-modp1024");
            kal_snprintf((kal_char *)p_cfg->esp_algo, sizeof(p_cfg->esp_algo), "%s",
                         "aes128-sha256");
            kal_snprintf((kal_char *)p_cfg->retry_vector, sizeof(p_cfg->retry_vector), "%s",
                         "'rst=ssid','24,30,30,43200','1040-1041,30,60,120,300,900','1081-1111,30,30,43200','8192-11011,30,30,43200'");
            p_cfg->ike_rekey_timer = 86400;
            p_cfg->esp_rekey_timer = 86400;
            p_cfg->rekey_margin = 180;
            p_cfg->keep_timer = 20;
            p_cfg->dpd_timer = 1800;
            p_cfg->oos = 30;
            p_cfg->mobike = 1;
            p_cfg->abort_mode = 1;
            p_cfg->ike_dscp = 46;
            break;
        }
        case 108: /* TWM */
        {
            kal_snprintf((kal_char *)p_cfg->ike_algo, sizeof(p_cfg->ike_algo), "%s",
                         "aes128-sha1-modp2048");
            kal_snprintf((kal_char *)p_cfg->esp_algo, sizeof(p_cfg->esp_algo), "%s",
                         "aes128-sha1-modp2048");
            p_cfg->ike_rekey_timer = 3600;
            p_cfg->esp_rekey_timer = 1000;
            p_cfg->rekey_margin = 120;
            p_cfg->mtu = 1500;
            p_cfg->oos = 30;
            p_cfg->mobike = 1;
            break;
        }
        case 109: /* CHT */
        {
            kal_snprintf((kal_char *)p_cfg->ike_algo, sizeof(p_cfg->ike_algo), "%s",
                         "aes128-aes128ctr-aes192-aes192ctr-aes256-aes256ctr-des-3des-aesxcbc-md5-sha1-sha256-sha384-sha512-prfaesxcbc-prfmd5-prfsha1-prfsha256-prfsha384-prfsha512-modp2048-modp1536-modp1024-modp768");
            kal_snprintf((kal_char *)p_cfg->esp_algo, sizeof(p_cfg->esp_algo), "%s",
                         "aes128-aes128ctr-aes192-aes192ctr-aes256-aes256ctr-des-3des-null-aesxcbc-md5-sha1-sha256-sha384-sha512");
            p_cfg->keep_timer = 20;
            p_cfg->dpd_timer = 600;
            p_cfg->ike_rekey_timer = 3600;
            p_cfg->esp_rekey_timer = 7200;
            p_cfg->rekey_margin = 180;
            p_cfg->retrans_to = 5;
            p_cfg->retrans_tries = 3;
            p_cfg->retrans_base = 1;
            p_cfg->mtu = 1500;
            p_cfg->oos = 30;
            p_cfg->mobike = 1;
            p_cfg->cert_used = 0;
            break;
        }
        case 110: /* FET */
        {
            kal_snprintf((kal_char *)p_cfg->ike_algo, sizeof(p_cfg->ike_algo), "%s",
                         "aes256-sha256-modp2048");
            kal_snprintf((kal_char *)p_cfg->esp_algo, sizeof(p_cfg->esp_algo), "%s",
                         "aes256-sha256-modp2048");
            kal_snprintf((kal_char *)p_cfg->retry_vector, sizeof(p_cfg->retry_vector), "%s",
                         "'9000-9003,-1'");
            p_cfg->IDi = IDI_RFC822_ADDR_MAC;
            p_cfg->keep_timer = 60;
            p_cfg->ike_rekey_timer = 86400;
            p_cfg->esp_rekey_timer = 86400;
            p_cfg->rekey_margin = 180;
            p_cfg->retrans_to = 1;
            p_cfg->retrans_tries = 3;
            p_cfg->retrans_base = 2;
            p_cfg->cust_pcscf_4 = 16384;
            p_cfg->cust_pcscf_6 = 16386;
            break;
        }
        case 111: /* Vodafone India */
        {
            kal_snprintf((kal_char *)p_cfg->ike_algo, sizeof(p_cfg->ike_algo), "%s",
                         "aes128-3des-aes256-sha1-sha256-sha384-sha512-md5-aesxcbc-prfsha1-prfmd5-prfaesxcbc-modp1024-modp768-modp1536-modp2048-modp3072-modp4096!");
            kal_snprintf((kal_char *)p_cfg->esp_algo, sizeof(p_cfg->esp_algo), "%s",
                         "aes128-3des-aes256-sha1-md5-aesxcbc-sha256-modp1024-modp768-modp1536-modp2048-modp3072-modp4096!");
            p_cfg->dns_type = DNS_ADDR_V4V6;
            p_cfg->ike_rekey_timer = 86400;
            p_cfg->esp_rekey_timer = 86400;
            p_cfg->rekey_margin = 180;
            p_cfg->mobike = 1;
            break;
        }
        case 112: /* Telcel */
        {
            kal_snprintf((kal_char *)p_cfg->ike_algo, sizeof(p_cfg->ike_algo), "%s",
                         "aes128-sha1-modp1024!");
            kal_snprintf((kal_char *)p_cfg->esp_algo, sizeof(p_cfg->esp_algo), "%s",
                         "aes128-sha1-modp1024!");
            kal_snprintf((kal_char *)p_cfg->epdg_fqdn, sizeof(p_cfg->epdg_fqdn), "%s",
                         "epdg.ims.mnc020.mcc334.pub.3gppnetwork.org");
            kal_snprintf((kal_char *)p_cfg->retry_vector, sizeof(p_cfg->retry_vector), "%s",
                         "'rst=wifiasc,ims,wfc','9000-9002,7200','11001,7200','24,7200'");
            p_cfg->ike_rekey_timer = 87000;
            p_cfg->esp_rekey_timer = 87000;
            p_cfg->rekey_margin = 600;
            p_cfg->retrans_to = 1;
            p_cfg->retrans_tries = 3;
            p_cfg->retrans_base = 2;
            p_cfg->dpd_timer = 10;
            p_cfg->IDi = IDI_RFC822_ADDR_MAC;
            p_cfg->cust_pcscf_4 = 16389;
            p_cfg->cust_pcscf_6 = 16390;
            p_cfg->cust_imei_cp = 16385;
            p_cfg->fastreauth = 1;
            p_cfg->redirect = 1;
            break;
        }
        case 113: /* Beeline Russia */
        {
            /*Russiamcc=250*/
            kal_snprintf((kal_char *)p_cfg->ike_algo, sizeof(p_cfg->ike_algo), "%s",
                         "aes128-sha1-prfsha1-modp1024!");
            kal_snprintf((kal_char *)p_cfg->epdg_fqdn, sizeof(p_cfg->epdg_fqdn), "%s",
                         "epdg.epc.mnc099.mcc250.pub.3gppnetwork.org");
            kal_snprintf((kal_char *)p_cfg->esp_algo, sizeof(p_cfg->esp_algo), "%s",
                         "aes128-sha1-modp1024!");
            p_cfg->ike_rekey_timer = 86400;
            p_cfg->cert_used = 0;
            p_cfg->retrans_base = 1;
            p_cfg->mobike = 1;
            p_cfg->dpd_timer = 120;
            p_cfg->IDr = IDR_KEY_ID;
            p_cfg->rekey_margin = 180;
            p_cfg->esp_rekey_timer = 28800;
            p_cfg->retrans_to = 4;
            p_cfg->keep_timer = 180;
            p_cfg->retrans_tries = 3;

            break;
        }
        case 117: /* Smartfren */
        {
            kal_snprintf((kal_char *)p_cfg->ike_algo, sizeof(p_cfg->ike_algo), "%s",
                         "aes128-aes192-aes256-3des-sha1-sha256-sha384-sha512-md5-aesxcbc-prfsha1-prfmd5-prfaesxcbc-modp768-modp1024-modp1536-modp2048");
            kal_snprintf((kal_char *)p_cfg->esp_algo, sizeof(p_cfg->esp_algo), "%s",
                         "aes128-aes192-aes256-3des-sha1-sha256-sha384-sha512-md5-aesxcbc-modp768-modp1024-modp1536-modp2048");
            p_cfg->ike_rekey_timer = 86400;
            p_cfg->esp_rekey_timer = 86400;
            p_cfg->rekey_margin = 180;
            p_cfg->retrans_to = 1;
            p_cfg->retrans_tries = 4;
            p_cfg->retrans_base = 2;
            p_cfg->cust_pcscf_4 = 16389;
            p_cfg->cust_pcscf_6 = 16390;
            p_cfg->cust_imei_cp = 16385;
            p_cfg->mtu = 1400;
            p_cfg->oos = 30;
            p_cfg->fastreauth = 1;
            p_cfg->mobike = 1;
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
             if (streq(mcc, "716")) {
                kal_snprintf((kal_char *)p_cfg->ike_algo, sizeof(p_cfg->ike_algo), "%s",
                             "aes128-sha1-prfsha1-modp1024!");
                kal_snprintf((kal_char *)p_cfg->esp_algo, sizeof(p_cfg->esp_algo), "%s",
                             "aes128-sha1-modp1024");
                kal_snprintf((kal_char *)p_cfg->epdg_fqdn, sizeof(p_cfg->epdg_fqdn), "%s",
                             "epdg.ims.mnc010.mcc716.pub.3gppnetwork.org");
                p_cfg->ike_rekey_timer = 87000;
                p_cfg->esp_rekey_timer = 87000;
                p_cfg->rekey_margin = 600;
                p_cfg->dpd_timer = 10;
                p_cfg->fastreauth = 1;
                p_cfg->cust_pcscf_4 = 16389;
                p_cfg->cust_pcscf_6 = 16390;
                p_cfg->cust_imei_cp = 16385;
                p_cfg->retrans_tries = 3;
                p_cfg->retrans_base = 2;
                p_cfg->mtu = 1500;
                p_cfg->cert_used = 0;
            }
            else if (streq(mcc, "722")) {
                kal_snprintf((kal_char *)p_cfg->ike_algo, sizeof(p_cfg->ike_algo), "%s",
                             "aes128-sha1-prfsha1-modp1024!");
                kal_snprintf((kal_char *)p_cfg->esp_algo, sizeof(p_cfg->esp_algo), "%s",
                             "aes128-sha1-modp1024");
                kal_snprintf((kal_char *)p_cfg->epdg_fqdn, sizeof(p_cfg->epdg_fqdn), "%s",
                             "epdg.epc.mnc310.mcc722.pub.3gppnetwork.org");
                p_cfg->ike_rekey_timer = 87000;
                p_cfg->esp_rekey_timer = 87000;
                p_cfg->rekey_margin = 600;
                p_cfg->retrans_tries = 3;
                p_cfg->retrans_to = 1;
                p_cfg->retrans_base = 2;
                p_cfg->dpd_timer = 10;
                p_cfg->IDi = IDI_RFC822_ADDR_MAC;
                p_cfg->cust_pcscf_4 = 16384;
                p_cfg->cust_pcscf_6 = 16390;
                p_cfg->fastreauth = 1;
                p_cfg->oos = 30;
                p_cfg->mtu = 1280;
                p_cfg->cust_imei_cp = 16385;
            }
            else if (streq(mcc, "724")) {
                kal_snprintf((kal_char *)p_cfg->ike_algo, sizeof(p_cfg->ike_algo), "%s",
                             "aes128-sha1-modp1024!");
                kal_snprintf((kal_char *)p_cfg->esp_algo, sizeof(p_cfg->esp_algo), "%s",
                             "aes128-sha1-modp1024!");
                kal_snprintf((kal_char *)p_cfg->epdg_fqdn, sizeof(p_cfg->epdg_fqdn), "%s",
                             "epdg.ims.mnc005.mcc724.pub.3gppnetwork.org");
                p_cfg->ike_rekey_timer = 87000;
                p_cfg->esp_rekey_timer = 87000;
                p_cfg->rekey_margin = 600;
                p_cfg->cust_pcscf_4 = 16384;
                p_cfg->cust_pcscf_6 = 16390;
                p_cfg->keep_timer = 60;
                p_cfg->dpd_timer = 10;
                p_cfg->fastreauth = 1;
                p_cfg->oos = 30;
                p_cfg->mtu = 1280;
            }
            else if (streq(mcc, "730")) {
                kal_snprintf((kal_char *)p_cfg->ike_algo, sizeof(p_cfg->ike_algo), "%s",
                             "aes128-sha1-prfsha1-prfsha256-modp1024!");
                kal_snprintf((kal_char *)p_cfg->esp_algo, sizeof(p_cfg->esp_algo), "%s",
                             "aes128-sha1-modp1024-noesn-esn!");
                kal_snprintf((kal_char *)p_cfg->epdg_fqdn, sizeof(p_cfg->epdg_fqdn), "%s",
                             "epdg.ims.mnc003.mcc730.pub.3gppnetwork.org");
                p_cfg->cert_used = 0;
                p_cfg->urlcert = 1;
                p_cfg->IDi = IDI_RFC822_ADDR_MAC;
                p_cfg->keep_timer = 10;
                p_cfg->dpd_timer = 10;
                p_cfg->ike_rekey_timer = 87000;
                p_cfg->esp_rekey_timer = 87000;
                p_cfg->rekey_margin = 600;
                p_cfg->retrans_tries = 3;
                p_cfg->retrans_base = 2;
                p_cfg->mtu = 1500;
            }
            else if (streq(mcc, "732")) {
                kal_snprintf((kal_char *)p_cfg->ike_algo, sizeof(p_cfg->ike_algo), "%s",
                             "aes128-aes192-aes256-3des-sha1-prfsha1-modp1024");
                kal_snprintf((kal_char *)p_cfg->esp_algo, sizeof(p_cfg->esp_algo), "%s",
                             "aes128-aes192-aes256-3des-md5-sha1-sha256");
                kal_snprintf((kal_char *)p_cfg->epdg_fqdn, sizeof(p_cfg->epdg_fqdn), "%s",
                             "epdg.ims.mnc101.mcc732.pub.3gppnetwork.org");
                p_cfg->ike_rekey_timer = 87000;
                p_cfg->esp_rekey_timer = 87000;
                p_cfg->rekey_margin = 600;
                p_cfg->dpd_timer = 10;
                p_cfg->mtu = 1500;
                p_cfg->retrans_to = 1;
                p_cfg->retrans_base = 2;
                p_cfg->retrans_tries = 3;
                p_cfg->oos = 30;
                p_cfg->fastreauth = 1;
                p_cfg->cert_used = 0;
                p_cfg->redirect = 1;
                p_cfg->cust_pcscf_4 = 16389;
                p_cfg->cust_pcscf_6 = 16390;
                p_cfg->keep_timer = 180;
                p_cfg->cust_imei_cp = 16385;
            }
            else if (streq(mcc,"748")) {
                kal_snprintf((kal_char *)p_cfg->ike_algo, sizeof(p_cfg->ike_algo), "%s",
                             "aes128-aes256-sha1-prfsha1-modp1024!");
                kal_snprintf((kal_char *)p_cfg->esp_algo, sizeof(p_cfg->esp_algo), "%s",
                             "aes128-aes256-sha1-modp1024!");
                kal_snprintf((kal_char *)p_cfg->retry_vector, sizeof(p_cfg->retry_vector), "%s",
                             "'rst=ssid','24,30,30,43200','1081,4,8,16,32,256,1024','8192-11011,30,30,43200'");
                p_cfg->ike_rekey_timer = 87000;
                p_cfg->keep_timer = 180;
                p_cfg->cust_pcscf_4 = 16384;
                p_cfg->fastreauth = 1;
                p_cfg->dpd_timer = 10;
                p_cfg->rekey_margin = 600;
                p_cfg->esp_rekey_timer = 87000;
                p_cfg->cust_pcscf_6 = 16390;
                p_cfg->cust_imei_cp = 16385;
                p_cfg->retrans_tries = 3;
            }
            else if (streq(mcc,"704")) {
                kal_snprintf((kal_char *)p_cfg->ike_algo, sizeof(p_cfg->ike_algo), "%s",
                             "aes128-aes256-sha1-prfsha1-prfsha256-modp1024!");
                kal_snprintf((kal_char *)p_cfg->epdg_fqdn, sizeof(p_cfg->epdg_fqdn), "%s",
                             "epdg.ims.mnc001.mcc704.pub.3gppnetwork.org");
                p_cfg->cust_pcscf_4 = 16389;
                p_cfg->cert_used = 0;
                p_cfg->dpd_timer = 10;
                p_cfg->IDi = IDI_RFC822_ADDR_MAC_EAP_NO_MAC;
                p_cfg->retrans_tries = 3;
                p_cfg->cust_pcscf_6 = 16390;
                p_cfg->keep_timer = 180;
                p_cfg->oos = 30;
                p_cfg->fastreauth = 1;
                p_cfg->ike_rekey_timer = 87000;
                p_cfg->esp_rekey_timer = 87000;
            }
            else if (streq(mcc,"370")) {
                kal_snprintf((kal_char *)p_cfg->ike_algo, sizeof(p_cfg->ike_algo), "%s",
                             "aes128-sha1-prfsha1-modp1024!");
                kal_snprintf((kal_char *)p_cfg->epdg_fqdn, sizeof(p_cfg->epdg_fqdn), "%s",
                             "epdg.epc.mnc002.mcc370.pub.3gppnetwork.org");
                kal_snprintf((kal_char *)p_cfg->esp_algo, sizeof(p_cfg->esp_algo), "%s",
                             "aes128-sha1-modp1024!");
                p_cfg->cert_used = 0;
                p_cfg->esp_rekey_timer = 87000;
                p_cfg->retrans_to = 1;
                p_cfg->rekey_margin = 600;
                p_cfg->retrans_tries = 3;
                p_cfg->dpd_timer = 10;
                p_cfg->cust_imei_cp = 16385;
                p_cfg->keep_timer = 180;
                p_cfg->fastreauth = 1;
                p_cfg->IDi = 1;
                p_cfg->cust_pcscf_4 = 16389;
                p_cfg->cust_pcscf_6 = 16390;
                p_cfg->oos = 30;
                p_cfg->ike_rekey_timer = 87000;
                p_cfg->retrans_base = 2;
            }
            else if (streq(mcc,"740")) {
                kal_snprintf((kal_char *)p_cfg->ike_algo, sizeof(p_cfg->ike_algo), "%s",
                             "aes128-aes256-sha1-prfsha1-prfsha256-modp1024!");
                kal_snprintf((kal_char *)p_cfg->esp_algo, sizeof(p_cfg->esp_algo), "%s",
                             "aes128-aes256-sha1-modp1024!");
                p_cfg->cert_used = 0;
                p_cfg->esp_rekey_timer = 87000;
                p_cfg->retrans_to = 1;
                p_cfg->redirect = 1;
                p_cfg->rekey_margin = 600;
                p_cfg->retrans_tries = 3;
                p_cfg->dpd_timer = 10;
                p_cfg->cust_imei_cp = 16385;
                p_cfg->keep_timer = 180;
                p_cfg->fastreauth = 1;
                p_cfg->cust_pcscf_4 = 16389;
                p_cfg->cust_pcscf_6 = 16390;
                p_cfg->oos = 30;
                p_cfg->IDi = IDI_RFC822_ADDR_MAC;
                p_cfg->ike_rekey_timer = 87000;
                p_cfg->retrans_base = 2;
            }
            else {
                kal_snprintf((kal_char *)p_cfg->ike_algo, sizeof(p_cfg->ike_algo), "%s",
                             "aes128-sha1-modp1024");
                kal_snprintf((kal_char *)p_cfg->esp_algo, sizeof(p_cfg->esp_algo), "%s",
                             "aes128-sha1");
                p_cfg->ike_rekey_timer = 87000;
                p_cfg->esp_rekey_timer = 87000;
                p_cfg->rekey_margin = 600;
                p_cfg->dpd_timer = 10;
            }
            break;
        }
        case 121: /* BELL */
        {
            kal_snprintf((kal_char *)p_cfg->ike_algo, sizeof(p_cfg->ike_algo), "%s",
                         "aes256-sha256-modp2048!");
            kal_snprintf((kal_char *)p_cfg->esp_algo, sizeof(p_cfg->esp_algo), "%s",
                         "aes256-sha256-modp2048!");
            kal_snprintf((kal_char *)p_cfg->retry_vector, sizeof(p_cfg->retry_vector), "%s",
                         "'1-35,0,-1','37-39,0,-1','1-44,1,2,4,8,16,32,64,128,256,512,1024,2048,4096,8192,16384,32768,65536'");
            p_cfg->ike_rekey_timer = 80000;
            p_cfg->esp_rekey_timer = 86400;
            p_cfg->rekey_margin = 180;
            p_cfg->dpd_timer = 20;
            p_cfg->fastreauth = 1;
            break;
        }
        case 122: /* AIS */
        {
            kal_snprintf((kal_char *)p_cfg->retry_vector, sizeof(p_cfg->retry_vector), "%s",
                         "'24,45,90,180,360,720,-1','1040-1041,30,60,120,300,900','1081-1111,45,90,180,360,720,-1','8192-11011,45,90,180,360,720,-1'");
            p_cfg->ike_rekey_timer = 86400;
            p_cfg->esp_rekey_timer = 86400;
            p_cfg->rekey_margin = 180;
            p_cfg->keep_timer = 30;
            p_cfg->dpd_timer = 60;
            p_cfg->mtu = 1700;
            break;
        }
        case 124: /* APTG */
        {
            kal_snprintf((kal_char *)p_cfg->ike_algo, sizeof(p_cfg->ike_algo), "%s",
                         "des-3des-aes128-aes256-sha1-sha256-sha384-sha512-md5-aesxcbc-modp1024-modp1536-modp2048!");
            kal_snprintf((kal_char *)p_cfg->esp_algo, sizeof(p_cfg->esp_algo), "%s",
                         "null-des-3des-aes128-aes256-sha1-md5-aesxcbc-sha256-sha384-sha512-modp1024-modp1536-modp2048!");
            kal_snprintf((kal_char *)p_cfg->epdg_fqdn, sizeof(p_cfg->epdg_fqdn), "%s",
                         "epdg.epc.aptg.com.tw");
            p_cfg->ike_rekey_timer = 86400;
            p_cfg->esp_rekey_timer = 86400;
            p_cfg->rekey_margin = 1000;
            p_cfg->dpd_timer = 120;
            p_cfg->keep_timer = 600;
            p_cfg->retrans_tries = 3;
            p_cfg->IDi = IDI_RFC822_ADDR;
            p_cfg->IDr = IDR_KEY_ID;
            p_cfg->cust_pcscf_4 = 16384;
            p_cfg->cust_pcscf_6 = 16390;
            p_cfg->oos = 15;
            p_cfg->detach_hard_timer = 3;
            p_cfg->cert_used = 0;
            p_cfg->mobike = 1;
            break;
        }
        case 125: /* DTAC */
        {
            p_cfg->ike_rekey_timer = 86400;
            p_cfg->esp_rekey_timer = 86400;
            p_cfg->rekey_margin = 180;
            p_cfg->keep_timer = 0;
            p_cfg->retrans_to = 5;
            p_cfg->retrans_tries = 3;
            p_cfg->retrans_base = 1;
            p_cfg->dpd_timer = 300;
            p_cfg->cust_pcscf_4 = 16384;
            p_cfg->cust_pcscf_6 = 16386;
            p_cfg->mtu = 1500;
            p_cfg->oos = 300;
            p_cfg->mobike = 1;
            break;
        }
        case 126: /* Turkey Avea */
        {
            kal_snprintf((kal_char *)p_cfg->ike_algo, sizeof(p_cfg->ike_algo), "%s",
                         "aes128-sha1-prfsha1-modp1024!");
            kal_snprintf((kal_char *)p_cfg->esp_algo, sizeof(p_cfg->esp_algo), "%s",
                         "aes128-sha1-md5-modp1024!");
            kal_snprintf((kal_char *)p_cfg->retry_vector, sizeof(p_cfg->retry_vector), "%s",
                             "'rst=ssid','24,30,30,43200','1081,4,8,16,32,256,1024','1082-1111,5,10,30,60,43200','8192-11011,30,30,43200'");
            p_cfg->ike_rekey_timer = 86400;
            p_cfg->esp_rekey_timer = 86400;
            break;
        }
        case 127: /* MEGAFON */
        {
            kal_snprintf((kal_char *)p_cfg->ike_algo, sizeof(p_cfg->ike_algo), "%s",
                         "aes256-sha256-sha1-prfsha256-prfsha1-modp2048-modp1024!");
            kal_snprintf((kal_char *)p_cfg->esp_algo, sizeof(p_cfg->esp_algo), "%s",
                         "aes256-sha256-sha1-modp2048-modp1024!");
            p_cfg->IDr = IDR_KEY_ID;
            p_cfg->ike_rekey_timer = 86400;
            p_cfg->esp_rekey_timer = 28800;
            p_cfg->rekey_margin = 300;
            p_cfg->cert_used = 0;
            break;
        }
        case 128: /* DNA Finland */
        {
            kal_snprintf((kal_char *)p_cfg->ike_algo, sizeof(p_cfg->ike_algo), "%s",
                         "aes256-sha1-prfsha1-modp2048");
            kal_snprintf((kal_char *)p_cfg->esp_algo, sizeof(p_cfg->esp_algo), "%s",
                         "aes256-sha1");
            kal_snprintf((kal_char *)p_cfg->retry_vector, sizeof(p_cfg->retry_vector), "%s",
                         "'rst=ssid','24,30,30,43200','1040-1041,30,60,120,300,900','1081-1111,30,30,43200','8192-11011,30,30,43200'");
            p_cfg->ike_rekey_timer = 86400;
            p_cfg->esp_rekey_timer = 86400;
            p_cfg->rekey_margin = 180;
            p_cfg->cust_pcscf_6 = 16386;
            p_cfg->mobike = 1;
            p_cfg->abort_mode = 1;
            break;
        }
        case 129: /* KDDI */
        {
            kal_snprintf((kal_char *)p_cfg->ike_algo, sizeof(p_cfg->ike_algo), "%s",
                         "3des-aes128-aes128ctr-sha1-prfsha256-modp2048!");
            kal_snprintf((kal_char *)p_cfg->esp_algo, sizeof(p_cfg->esp_algo), "%s",
                         "3des-aes128-aes128ctr-sha1-modp2048!");
            kal_snprintf((kal_char *)p_cfg->retry_vector, sizeof(p_cfg->retry_vector), "%s",
                         "'ssid','24,30,30,43200','1081,4,8,16,32,64,128,256,512,1024','10500,0,0,0,0,0,0,0,0,0,0,900','8192-10499,30,30,43200','10501-11011,30,30,43200'");
            p_cfg->mobike = 1;
            p_cfg->liveness_check = 1;
            p_cfg->fragment = 1;
            p_cfg->device_identity = 1;
            p_cfg->dns_cache = 0;
            p_cfg->wdrv_keep_alive = 0;
            break;
        }
        case 130: /* TIM Italy */
        {
            if (streq(mcc, "724")) {
                kal_snprintf((kal_char *)p_cfg->ike_algo, sizeof(p_cfg->ike_algo), "%s",
                             "3des-aes128-md5-sha1-prfsha1-modp1024!");
                kal_snprintf((kal_char *)p_cfg->esp_algo, sizeof(p_cfg->esp_algo), "%s",
                             "3des-aes128-md5-sha1!");
                kal_snprintf((kal_char *)p_cfg->epdg_fqdn, sizeof(p_cfg->epdg_fqdn), "%s",
                             "189.40.173.77");
                p_cfg->ike_rekey_timer = 3300;
                p_cfg->esp_rekey_timer = 1800;
                p_cfg->rekey_margin = 300;
                p_cfg->retrans_tries = 3;
                p_cfg->dpd_timer = 120;
                p_cfg->cust_pcscf_4 = 16389;
                p_cfg->cust_pcscf_6 = 16390;
                p_cfg->cert_used = 0;
            }
            break;
        }
        case 131: /* TrueMove */
        {
            kal_snprintf((kal_char *)p_cfg->ike_algo, sizeof(p_cfg->ike_algo), "%s",
                         "aes128-sha1-prfsha1-modp1024");
            kal_snprintf((kal_char *)p_cfg->esp_algo, sizeof(p_cfg->esp_algo), "%s",
                         "aes128-sha1");
            kal_snprintf((kal_char *)p_cfg->epdg_fqdn, sizeof(p_cfg->epdg_fqdn), "%s",
                         "epdg.epc.mnc004.mcc520.pub.3gppnetwork.org");
            p_cfg->ike_rekey_timer = 86400;
            p_cfg->esp_rekey_timer = 86400;
            p_cfg->rekey_margin = 180;
            p_cfg->retrans_to = 1;
            p_cfg->retrans_tries = 3;
            p_cfg->retrans_base = 2;
            p_cfg->dpd_timer = 900;
            p_cfg->cust_pcscf_4 = 16389;
            p_cfg->cust_pcscf_6 = 16390;
            p_cfg->mtu = 1300;
            p_cfg->oos = 30;
            p_cfg->mobike = 1;
            break;
        }
        case 132: /* VIVO */
        {
            if (streq(mcc, "722")) {
                kal_snprintf((kal_char *)p_cfg->ike_algo, sizeof(p_cfg->ike_algo), "%s",
                             "aes128-aes256-3des-md5-sha1-prfsha1-modp1024-modp1536-modp2048");
                kal_snprintf((kal_char *)p_cfg->esp_algo, sizeof(p_cfg->esp_algo), "%s",
                             "aes128-aes256-3des-md5-sha1");
                p_cfg->ike_rekey_timer = 3001;
                p_cfg->esp_rekey_timer = 43000;
                p_cfg->rekey_margin = 180;
                p_cfg->cust_pcscf_4 = 16389;
                p_cfg->cust_pcscf_6 = 16390;
                p_cfg->cert_used = 0;
            }
            else if (streq(mcc, "724")) {
                kal_snprintf((kal_char *)p_cfg->retry_vector, sizeof(p_cfg->retry_vector), "%s",
                             "'rst=ssid','24,30,30,43200','8192-11011,30,30,43200'");
                kal_snprintf((kal_char *)p_cfg->ike_algo, sizeof(p_cfg->ike_algo), "%s",
                             "aes256-sha1-prfsha1-modp1024!");
                kal_snprintf((kal_char *)p_cfg->esp_algo, sizeof(p_cfg->esp_algo), "%s",
                             "aes256-sha1!");
                p_cfg->ike_rekey_timer = 86400;
                p_cfg->esp_rekey_timer = 86400;
                p_cfg->cert_used = 0;
                p_cfg->fastreauth = 1;
                p_cfg->mobike = 1;
                p_cfg->mtu = 1500;
                p_cfg->oos = 15;
            }
            else if (streq(mcc, "732")) {
                kal_snprintf((kal_char *)p_cfg->ike_algo, sizeof(p_cfg->ike_algo), "%s",
                             "aes128-sha1-prefsha1-modp1024");
                kal_snprintf((kal_char *)p_cfg->esp_algo, sizeof(p_cfg->esp_algo), "%s",
                             "aes128-3des-sha1");
                p_cfg->mtu = 1400;
            }
            else if (streq(mcc, "716")) {
                kal_snprintf((kal_char *)p_cfg->ike_algo, sizeof(p_cfg->ike_algo), "%s",
                             "aes256-sha256-prfsha1-modp1536!");
                kal_snprintf((kal_char *)p_cfg->esp_algo, sizeof(p_cfg->esp_algo), "%s",
                             "aes256-sha256!");
                p_cfg->ike_rekey_timer = 3600;
                p_cfg->esp_rekey_timer = 1800;
                p_cfg->rekey_margin = 300;
                p_cfg->retrans_tries = 3;
                p_cfg->dpd_timer = 10;
                p_cfg->cust_pcscf_4 = 16389;
                p_cfg->cust_pcscf_6 = 16390;
                p_cfg->esp_setup_time = 300;
                p_cfg->fastreauth = 1;
                p_cfg->cert_used = 0;
                p_cfg->urlcert = 1;
                p_cfg->oos = 30;
                p_cfg->mobike = 1;
            }
            else if (streq(mcc,"748")) {
                p_cfg->rekey_margin = 52200;
                p_cfg->mtu = 1500;
                p_cfg->retrans_tries = 10;
                p_cfg->dpd_timer = 120;
                p_cfg->IDr = IDR_KEY_ID;
                p_cfg->IDi = IDI_RFC822_ADDR_MAC;
            }
            else if (streq(mcc, "730")) {
                kal_snprintf((kal_char *)p_cfg->epdg_fqdn, sizeof(p_cfg->epdg_fqdn), "%s",
                             "epdg.epc.mnc002.mcc730.pub.3gppnetwork.org");
                p_cfg->ike_rekey_timer = 43380;
                p_cfg->esp_rekey_timer = 43380;
                p_cfg->rekey_margin = 180;
                p_cfg->retrans_tries = 3;
                p_cfg->keep_timer = 20;
                p_cfg->dpd_timer = 120;
                p_cfg->mtu = 1280;
            }
            break;
        }
        case 133: /* DU */
        {
            break;
        }
        case 134: /* Elisa */
        {
            kal_snprintf((kal_char *)p_cfg->ike_algo, sizeof(p_cfg->ike_algo), "%s",
                         "aes128-aes192-aes256-aes256ctr-sha1-prfaesxcbc-prfmd5-prfsha1-modp2048!");
            kal_snprintf((kal_char *)p_cfg->esp_algo, sizeof(p_cfg->esp_algo), "%s",
                         "aes128-sha1!");
            kal_snprintf((kal_char *)p_cfg->retry_vector, sizeof(p_cfg->retry_vector), "%s",
                         "'rst=ssid','24,30,30,43200','1040-1041,30,60,120,300,900','1081-1111,30,30,43200','8192-11011,30,30,43200'");
            p_cfg->cert_used = 0;
            p_cfg->abort_mode = 1;
            break;
        }
        case 135: /* MTS */
        {
            kal_snprintf((kal_char *)p_cfg->ike_algo, sizeof(p_cfg->ike_algo), "%s",
                         "aes256-aes128-sha256-sha1-prfsha256-prfsha1-modp2048!");
            kal_snprintf((kal_char *)p_cfg->esp_algo, sizeof(p_cfg->esp_algo), "%s",
                         "aes256-aes128-sha256-aesxcbc-modp2048!");
            kal_snprintf((kal_char *)p_cfg->retry_vector, sizeof(p_cfg->retry_vector), "%s",
                         "'rst=ssid','24,30,30,43200','1040-1041,30,60,120,300,900','8192-11011,30,30,43200'");
            p_cfg->IDr = IDR_KEY_ID;
            p_cfg->ike_rekey_timer = 86400;
            p_cfg->esp_rekey_timer = 14400;
            p_cfg->rekey_margin = 180;
            p_cfg->dpd_timer = 30;
            p_cfg->retrans_to = 10;
            p_cfg->retrans_tries = 1;
            p_cfg->retrans_base = 1;
            p_cfg->cust_pcscf_4 = 16384;
            p_cfg->cust_pcscf_6 = 16390;
            p_cfg->mtu = 1500;
            p_cfg->cert_used = 0;
            p_cfg->abort_mode = 1;
            break;
        }
        case 136: /* ENTEL */
        {
            if (streq(mcc, "730")) {
                kal_snprintf((kal_char *)p_cfg->ike_algo, sizeof(p_cfg->ike_algo), "%s",
                             "aes128-3des-aes192-aes256-sha1-sha256-sha384-sha512-md5-aesxcbc-prfmd5-prfsha256-prfsha512-prfsha1-modp2048-modp1024-modp1536-modp768!");
                kal_snprintf((kal_char *)p_cfg->esp_algo, sizeof(p_cfg->esp_algo), "%s",
                             "aes128-3des-aes192-aes256-sha1-sha256-sha384-sha512-md5-aesxcbc-modp2048-modp1024-modp1536-modp768!");
                p_cfg->oos = 20;
                p_cfg->cert_used = 0;
            }
            else {
                kal_snprintf((kal_char *)p_cfg->ike_algo, sizeof(p_cfg->ike_algo), "%s",
                             "aes128-3des-aesxcbc-sha1-prfsha1-modp1024");
                kal_snprintf((kal_char *)p_cfg->esp_algo, sizeof(p_cfg->esp_algo), "%s",
                             "aes128-3des-aesxcbc-sha1");
                p_cfg->keep_timer = 60;
                p_cfg->retrans_to = 2;
                p_cfg->retrans_tries = 3;
                p_cfg->retrans_base = 1;
                p_cfg->mtu = 1280;
                p_cfg->fastreauth = 1;
                p_cfg->cert_used = 0;
            }
            break;
        }
        case 137: /* Tele2 */
        {
            if (streq(mcc, "240")) {
                kal_snprintf((kal_char *)p_cfg->retry_vector, sizeof(p_cfg->retry_vector), "%s",
                             "'rst=ssid','24,30,30,43200','1040-1041,30,60,120,300,900','1081-1111,30,30,43200','8192-11011,30,30,43200'");
                p_cfg->cert_used = 0;
                p_cfg->abort_mode = 1;
                p_cfg->ho_ip_disc = 1;
            }
            else {
                kal_snprintf((kal_char *)p_cfg->ike_algo, sizeof(p_cfg->ike_algo), "%s",
                             "aes128-aes256-sha1-sha256-prfsha1-prfsha256-modp1024-modp2048");
                kal_snprintf((kal_char *)p_cfg->esp_algo, sizeof(p_cfg->esp_algo), "%s",
                             "aes128-aes256-sha1-sha256-modp1024-modp2048");
                kal_snprintf((kal_char *)p_cfg->retry_vector, sizeof(p_cfg->retry_vector), "%s",
                             "'rst=ssid','24,30,30,43200','1040-1041,30,60,120,300,900','1081-1111,30,30,43200','8192-11011,30,30,43200'");
                p_cfg->IDr = IDR_KEY_ID;
                p_cfg->ike_rekey_timer = 86400;
                p_cfg->esp_rekey_timer = 28800;
                p_cfg->rekey_margin = 180;
                p_cfg->keep_timer = 30;
                p_cfg->cust_pcscf_4 = 16389;
                p_cfg->cust_pcscf_6 = 16390;
                p_cfg->cert_used = 0;
                p_cfg->abort_mode = 1;
            }
            break;
        }
        case 139: /* Bouygues */
        {
            kal_snprintf((kal_char *)p_cfg->ike_algo, sizeof(p_cfg->ike_algo), "%s",
                         "aes256-sha512-prfsha256-prfsha512-modp2048!");
            kal_snprintf((kal_char *)p_cfg->esp_algo, sizeof(p_cfg->esp_algo), "%s",
                         "aes256-sha256!");
            kal_snprintf((kal_char *)p_cfg->retry_vector, sizeof(p_cfg->retry_vector), "%s",
                         "'rst=ssid','24,30,30,43200','9000,30,30,30,-1','10000,30,30,30,-1','10500,3600','11002-11003,30,-1'");
            p_cfg->ike_rekey_timer = 14800;
            p_cfg->fastreauth = 1;
            p_cfg->rekey_margin = 300;
            p_cfg->mtu = 1354;
            p_cfg->esp_rekey_timer = 7400;
            p_cfg->retrans_tries = 5;
            p_cfg->force_tsi_64 = 0;
            p_cfg->force_tsi_full = 0;
            p_cfg->ho_ip_disc = 1;
            break;
        }
        case 140: /* MTN_ZAIN */
        {
            kal_snprintf((kal_char *)p_cfg->ike_algo, sizeof(p_cfg->ike_algo), "%s",
                         "aes128-aes256-3des-md5-sha1-aesxcbc-modp2048-modp1024-modp1536");
            kal_snprintf((kal_char *)p_cfg->esp_algo, sizeof(p_cfg->esp_algo), "%s",
                         "aes128-sha1-noesn-esn");
            p_cfg->cust_pcscf_4 = 16384;
            p_cfg->cust_pcscf_6 = 16386;
            p_cfg->keep_timer = 180;
            p_cfg->dpd_timer = 600;
            p_cfg->mtu = 1500;
            p_cfg->IDr = IDR_KEY_ID;
            p_cfg->urlcert = 1;
            p_cfg->abort_mode = 1;
            break;
        }
        case 141: /* CELLC */
        {
            kal_snprintf((kal_char *)p_cfg->ike_algo, sizeof(p_cfg->ike_algo), "%s",
                         "aes128-3des-aes192-aes256-sha1-modp1024");
            kal_snprintf((kal_char *)p_cfg->esp_algo, sizeof(p_cfg->esp_algo), "%s",
                         "3des-aes128-aes192-aes256-sha1-md5-aesxcbc");
            kal_snprintf((kal_char *)p_cfg->retry_vector, sizeof(p_cfg->retry_vector), "%s",
                         "'rst=ssid','24,30,30,43200','1040-1041,30,60,120,300,900','1081-1111,30,30,43200','8192-11011,30,30,43200'");
            p_cfg->cust_pcscf_4 = 16384;
            p_cfg->cust_pcscf_6 = 16386;
            p_cfg->mtu = 1440;
            p_cfg->fastreauth = 1;
            p_cfg->oos = 30;
            p_cfg->cert_used = 0;
            p_cfg->mobike = 1;
            p_cfg->abort_mode = 1;
            break;
        }
        case 143: /* Turkcell */
        {
            kal_snprintf((kal_char *)p_cfg->ike_algo, sizeof(p_cfg->ike_algo), "%s",
                         "aes128-aes256-3des-md5-sha1-prfsha1-prfmd5-modp1024-modp768!");
            kal_snprintf((kal_char *)p_cfg->esp_algo, sizeof(p_cfg->esp_algo), "%s",
                         "3des-aes128-aes256-md5-sha1-modp1024-modp768!");
            kal_snprintf((kal_char *)p_cfg->retry_vector, sizeof(p_cfg->retry_vector), "%s",
                         "'rst=ssid','24,30,30,43200','1040-1041,30,60,120,300,900','1081-1111,30,30,43200','8192-11011,30,30,43200'");
            p_cfg->IDr = IDR_KEY_ID;
            p_cfg->keep_timer = 0;
            p_cfg->dpd_timer = 120;
            p_cfg->ike_rekey_timer = 86400;
            p_cfg->esp_rekey_timer = 28800;
            p_cfg->rekey_margin = 180;
            p_cfg->cust_pcscf_4 = 16389;
            p_cfg->cust_pcscf_6 = 16390;
            p_cfg->fastreauth = 1;
            p_cfg->oos = 30;
            p_cfg->mobike = 1;
            p_cfg->abort_mode = 1;
            p_cfg->cert_used = 0;
            break;
        }
        case 145: /* Cricket */
        {
            kal_snprintf((kal_char *)p_cfg->ike_algo, sizeof(p_cfg->ike_algo), "%s",
                         "aes128-sha256-modp2048!");
            kal_snprintf((kal_char *)p_cfg->esp_algo, sizeof(p_cfg->esp_algo), "%s",
                         "aes128-sha256!");
            kal_snprintf((kal_char *)p_cfg->epdg_fqdn, sizeof(p_cfg->epdg_fqdn), "%s",
                         "epdg.epc.att.net");
            kal_snprintf((kal_char *)p_cfg->retry_vector, sizeof(p_cfg->retry_vector), "%s",
                         "'8192,-1','36,20,40,80,160,320'");
            p_cfg->keep_timer = 20;
            p_cfg->cust_pcscf_4 = 16384;
            p_cfg->cust_pcscf_6 = 16386;
            p_cfg->oos = 30;
            p_cfg->mobike = 0;
            p_cfg->dns_type = DNS_ADDR_V4;
            p_cfg->fragment = 1;
            break;
        }
        case 146: /* Etisalat */
        {
            if (streq(mcc, "424")) {
                kal_snprintf((kal_char *)p_cfg->ike_algo, sizeof(p_cfg->ike_algo), "%s",
                             "aes256-sha1-modp1024");
                kal_snprintf((kal_char *)p_cfg->esp_algo, sizeof(p_cfg->esp_algo), "%s",
                             "aes256-sha1");
                kal_snprintf((kal_char *)p_cfg->epdg_fqdn, sizeof(p_cfg->epdg_fqdn), "%s",
                             "epdg.epc.mnc002.mcc424.etisalat.ae");
                kal_snprintf((kal_char *)p_cfg->retry_vector, sizeof(p_cfg->retry_vector), "%s",
                             "'rst=ssid','24,30,30,43200','1040-1041,30,60,120,300,900','1081-1111,30,30,43200','8192-11011,30,30,43200'");
                p_cfg->dpd_timer = 180;
                p_cfg->keep_timer = 20;
                p_cfg->ike_rekey_timer = 86400;
                p_cfg->esp_rekey_timer = 86400;
                p_cfg->rekey_margin = 180;
                p_cfg->cust_pcscf_4 = 16384;
                p_cfg->cust_pcscf_6 = 16390;
                p_cfg->mtu = 1500;
                p_cfg->fastreauth = 1;
                p_cfg->oos = 30;
                p_cfg->mobike = 1;
                p_cfg->abort_mode = 1;
            }
            else if (streq(mcc, "602")) {
                kal_snprintf((kal_char *)p_cfg->ike_algo, sizeof(p_cfg->ike_algo), "%s",
                             "aes128-aes128ctr-aes192-aes192ctr-aes256-aes256ctr-des-3des-aesxcbc-md5-sha1-sha256-sha384-sha512-modp1024");
                kal_snprintf((kal_char *)p_cfg->esp_algo, sizeof(p_cfg->esp_algo), "%s",
                             "aes128-aes128ctr-aes192-aes192ctr-aes256-aes256ctr-des-3des-aesxcbc-md5-sha1-sha256-sha384-sha512");
                p_cfg->ike_rekey_timer = 86400;
                p_cfg->esp_rekey_timer = 86400;
                p_cfg->rekey_margin = 180;
                p_cfg->cust_pcscf_4 = 16389;
                p_cfg->cust_pcscf_6 = 16390;
                p_cfg->fastreauth = 1;
                p_cfg->oos = 30;
                p_cfg->mobike = 1;
            }
            else {
                kal_snprintf((kal_char *)p_cfg->ike_algo, sizeof(p_cfg->ike_algo), "%s",
                             "aes128-aes128ctr-aes192-aes192ctr-aes256-aes256ctr-des-3des-aesxcbc-md5-sha256-sha1-sha384-sha512-modp768-modp1024-modp1536-modp2048-modp3072-modp4096-modp6144-modp8192");
                kal_snprintf((kal_char *)p_cfg->esp_algo, sizeof(p_cfg->esp_algo), "%s",
                             "aes128-aes128ctr-aes192-aes192ctr-aes256-aes256ctr-des-3des-aesxcbc-md5-sha256-sha1-sha384-sha512");
                p_cfg->ike_rekey_timer = 86400;
                p_cfg->esp_rekey_timer = 86400;
                p_cfg->rekey_margin = 180;
                p_cfg->cust_pcscf_4 = 16389;
                p_cfg->cust_pcscf_6 = 16390;
                p_cfg->fastreauth = 1;
                p_cfg->oos = 30;
                p_cfg->mobike = 1;
            }
            break;
        }
        case 147: /* Airtel/India */
        {
            kal_snprintf((kal_char *)p_cfg->ike_algo, sizeof(p_cfg->ike_algo), "%s",
                         "aes128-aes256-sha1-sha256-prfsha1-prfsha256-modp1024!");
            kal_snprintf((kal_char *)p_cfg->esp_algo, sizeof(p_cfg->esp_algo), "%s",
                         "aes128-aes256-sha1-sha256-modp1024!");
            kal_snprintf((kal_char *)p_cfg->select_info, sizeof(p_cfg->select_info), "%s",
                         "'40402,0','40403,0','40410,0','40416,0','40431,0','40440,0','40445,0','40449,0','40470,0','40490,0','40492,0','40493,0','40494,0','40495,0','40496,0','40497,0','40498,0','40551,0','40552,0','40553,0','40554,0','40555,0','40556,0'");
            kal_snprintf((kal_char *)p_cfg->retry_vector, sizeof(p_cfg->retry_vector), "%s",
                         "'rst=ssid','24,30,30,60,120,240,7200,-1','1040-1041,5,15,30,60,120,300,900','1081,5,15,30,60,120,300,900','1082-1111,30,30,60,120,240,7200','8192-11011,30,30,43200'");
            p_cfg->ike_rekey_timer = 86400;
            p_cfg->esp_rekey_timer = 28800;
            p_cfg->rekey_margin = 180;
            p_cfg->cust_pcscf_4 = 16384;
            p_cfg->cust_pcscf_6 = 16390;
            p_cfg->imei_format = IMEI_STRING;
            p_cfg->cust_imei_cp = 16391;
            p_cfg->IDr = IDR_KEY_ID;
            p_cfg->oos = 15;
            p_cfg->mobike = 1;
            p_cfg->dns_type = DNS_ADDR_V4V6;
            break;
        }
        case 149: /* CMHK */
        {
            kal_snprintf((kal_char *)p_cfg->ike_algo, sizeof(p_cfg->ike_algo), "%s",
                         "aes256-aes128-3des-des-aesxcbc-sha1-md5-prfaesxcbc-prfsha1-modp1024!");
            kal_snprintf((kal_char *)p_cfg->esp_algo, sizeof(p_cfg->esp_algo), "%s",
                         "aes256-aes128-3des-des-aesxcbc-sha1-md5!");
            kal_snprintf((kal_char *)p_cfg->select_info, sizeof(p_cfg->select_info), "%s",
                         "'45412,0','45413,0'");
            p_cfg->dpd_timer = 600;
            p_cfg->ike_rekey_timer = 86400;
            p_cfg->esp_rekey_timer = 86400;
            p_cfg->rekey_margin = 42300;
            p_cfg->IDr = IDR_KEY_ID;
            p_cfg->cust_pcscf_4 = 16384;
            p_cfg->cust_pcscf_6 = 16390;
            p_cfg->cert_used = 0;
            break;
        }
        case 150: /* Swisscom Switzerland (228/01) / Liechtenstein (295/01) */
        {
            kal_snprintf((kal_char *)p_cfg->ike_algo, sizeof(p_cfg->ike_algo), "%s",
                         "aes128-aes256-aesxcbc-sha1-prfaesxcbc-prfsha1-modp1024-modp2048!");
            kal_snprintf((kal_char *)p_cfg->esp_algo, sizeof(p_cfg->esp_algo), "%s",
                         "aes128-aes256-aesxcbc-sha1-modp1024-modp2048!");
            kal_snprintf((kal_char *)p_cfg->retry_vector, sizeof(p_cfg->retry_vector), "%s",
                         "'rst=ssid','24,30,30,43200','1040-1041,30,60,120,300,900','1081-1111,30,30,43200','8192-11011,30,30,43200'");
            p_cfg->IDr = IDR_KEY_ID;
            p_cfg->ike_rekey_timer = 82800;
            p_cfg->esp_rekey_timer = 14400;
            p_cfg->rekey_margin = 180;
            p_cfg->keep_timer = 20;
            p_cfg->mtu = 1280;
            p_cfg->oos = 30;
            p_cfg->mobike = 1;
            p_cfg->abort_mode = 1;
            break;
        }
        case 151: /* MobileOne/Singapore */
        {
            kal_snprintf((kal_char *)p_cfg->epdg_fqdn, sizeof(p_cfg->epdg_fqdn), "%s",
                         "epdg.mobileone.net.sg");
            break;
        }
        case 152: /* Optus/Australia */
        {
            kal_snprintf((kal_char *)p_cfg->ike_algo, sizeof(p_cfg->ike_algo), "%s",
                         "aes256-sha256-prfsha256-modp2048!");
            kal_snprintf((kal_char *)p_cfg->esp_algo, sizeof(p_cfg->esp_algo), "%s",
                         "aes256-aesxcbc-sha256!");
            p_cfg->retrans_to = 1;
            p_cfg->retrans_tries = 3;
            p_cfg->retrans_base = 2;
            p_cfg->mtu = 1500;
            p_cfg->oos = 30;
            p_cfg->mobike = 1;
            p_cfg->ike_dscp = 46;
            p_cfg->cert_used = 0;
            p_cfg->ike_rekey_timer = 3001;
            p_cfg->esp_rekey_timer = 86400;
            p_cfg->rekey_margin = 180;
            p_cfg->dpd_timer = 3600;
            break;
        }
        case 153: /* VHA/Australia */
        {
            kal_snprintf((kal_char *)p_cfg->ike_algo, sizeof(p_cfg->ike_algo), "%s",
                         "aes256-sha512-prfsha256-modp2048!");
            kal_snprintf((kal_char *)p_cfg->esp_algo, sizeof(p_cfg->esp_algo), "%s",
                         "aes256-sha512-modp2048!");
            p_cfg->ike_rekey_timer = 64800;
            p_cfg->esp_rekey_timer = 64800;
            p_cfg->dpd_timer = 90;
            p_cfg->IDr = IDR_KEY_ID;
            p_cfg->mtu = 1280;
            p_cfg->fastreauth = 1;
            p_cfg->oos = 30;
            p_cfg->cert_used = 0;
            p_cfg->mobike = 1;
            break;
        }
        case 154: /* Telia */
        {
            if (streq(mcc, "244")) {
                kal_snprintf((kal_char *)p_cfg->ike_algo, sizeof(p_cfg->ike_algo), "%s",
                             "aes128-sha1-prfsha1-modp2048!");
                kal_snprintf((kal_char *)p_cfg->esp_algo, sizeof(p_cfg->esp_algo), "%s",
                             "aes128-sha1-modp2048!");
                kal_snprintf((kal_char *)p_cfg->retry_vector, sizeof(p_cfg->retry_vector), "%s",
                             "'rst=ssid','24,30,30,43200','1040-1041,30,60,120,300,900','1081-1111,30,30,43200','8192-11011,30,30,43200'");
                p_cfg->IDr = IDR_KEY_ID;
                p_cfg->keep_timer = 30;
                p_cfg->dpd_timer = 300;
                p_cfg->ike_rekey_timer = 87900;
                p_cfg->esp_rekey_timer = 86400;
                p_cfg->rekey_margin = 180;
                p_cfg->mtu = 1300;
                p_cfg->cert_used = 0;
                p_cfg->abort_mode = 1;
            }
            else if (streq(mcc, "242")) {
                kal_snprintf((kal_char *)p_cfg->ike_algo, sizeof(p_cfg->ike_algo), "%s",
                             "aes128-sha256-prfsha256-modp2048");
                kal_snprintf((kal_char *)p_cfg->esp_algo, sizeof(p_cfg->esp_algo), "%s",
                             "aes128-sha256-modp2048");
                kal_snprintf((kal_char *)p_cfg->retry_vector, sizeof(p_cfg->retry_vector), "%s",
                             "'rst=ssid','24,30,30,43200','1040-1041,30,60,120,300,900','1081-1111,30,30,43200','8192-11011,30,30,43200'");
                p_cfg->IDr = IDR_KEY_ID;
                p_cfg->keep_timer = 90;
                p_cfg->dpd_timer = 300;
                p_cfg->ike_rekey_timer = 87900;
                p_cfg->esp_rekey_timer = 86400;
                p_cfg->rekey_margin = 180;
                p_cfg->mtu = 1300;
                p_cfg->retrans_to = 1;
                p_cfg->retrans_base = 2;
                p_cfg->oos = 30;
                p_cfg->mobike = 1;
                p_cfg->abort_mode = 1;
                p_cfg->cert_used = 0;
            }
            else if (streq(mcc, "238")) {
                kal_snprintf((kal_char *)p_cfg->ike_algo, sizeof(p_cfg->ike_algo), "%s",
                             "aes128-aes256-3des-sha256-sha1-prfsha256-prfsha1-modp2048-modp3072");
                kal_snprintf((kal_char *)p_cfg->esp_algo, sizeof(p_cfg->esp_algo), "%s",
                             "aes128-3des-sha256-sha1");
                kal_snprintf((kal_char *)p_cfg->retry_vector, sizeof(p_cfg->retry_vector), "%s",
                             "'rst=ssid','24,30,30,43200','1040-1041,30,60,120,300,900','1081-1111,30,30,43200','8192-11011,30,30,43200'");
                p_cfg->IDr = IDR_KEY_ID;
                p_cfg->dpd_timer = 330;
                p_cfg->ike_rekey_timer = 87900;
                p_cfg->esp_rekey_timer = 86400;
                p_cfg->rekey_margin = 180;
                p_cfg->mtu = 1300;
                p_cfg->abort_mode = 1;
                p_cfg->cert_used = 0;
            }
            else if (streq(mcc, "248")) {
                kal_snprintf((kal_char *)p_cfg->ike_algo, sizeof(p_cfg->ike_algo), "%s",
                             "aes128-aes256-3des-sha256-sha1-prfsha256-prfsha1-modp2048-modp3072!");
                kal_snprintf((kal_char *)p_cfg->esp_algo, sizeof(p_cfg->esp_algo), "%s",
                             "aes128-aes256-3des-sha256-sha1!");
                kal_snprintf((kal_char *)p_cfg->retry_vector, sizeof(p_cfg->retry_vector), "%s",
                             "'rst=ssid','24,30,30,43200','1040-1041,30,60,120,300,900','1081-1111,30,30,43200','8192-11011,30,30,43200'");
                p_cfg->IDr = IDR_KEY_ID;
                p_cfg->dpd_timer = 330;
                p_cfg->ike_rekey_timer = 87900;
                p_cfg->esp_rekey_timer = 86400;
                p_cfg->rekey_margin = 180;
                p_cfg->mtu = 1300;
                p_cfg->cert_used = 0;
                p_cfg->abort_mode = 1;
            }
            else {
                kal_snprintf((kal_char *)p_cfg->ike_algo, sizeof(p_cfg->ike_algo), "%s",
                             "aes128-aes192-aes256-sha1-sha256-sha384-prfsha1-prfaesxcbc-prfsha256-prfsha384-modp2048-modp1536-modp1024!");
                kal_snprintf((kal_char *)p_cfg->esp_algo, sizeof(p_cfg->esp_algo), "%s",
                             "aes128-aes192-aes256-3des-sha1-sha256-sha384!");
                kal_snprintf((kal_char *)p_cfg->retry_vector, sizeof(p_cfg->retry_vector), "%s",
                             "'rst=ssid','24,30,30,43200','1040-1041,30,60,120,300,900','1081-1111,30,30,43200','8192-11011,30,30,43200'");
                p_cfg->IDr = IDR_KEY_ID;
                p_cfg->keep_timer = 90;
                p_cfg->dpd_timer = 300;
                p_cfg->ike_rekey_timer = 87900;
                p_cfg->esp_rekey_timer = 86400;
                p_cfg->rekey_margin = 180;
                p_cfg->mtu = 1300;
                p_cfg->cert_used = 0;
                p_cfg->abort_mode = 1;
            }
            break;
        }
        case 155: /* Digi */
        {
            if (streq(mcc, "226")) {
                kal_snprintf((kal_char *)p_cfg->ike_algo, sizeof(p_cfg->ike_algo), "%s",
                             "aes128-aes192-aes256-sha1-sha256-sha384-prfsha1-prfsha256-prfsha384-modp1024-modp1536-modp2048!");
                kal_snprintf((kal_char *)p_cfg->esp_algo, sizeof(p_cfg->esp_algo), "%s",
                             "aes128-aes192-aes256-sha1-sha256-sha384!");
                kal_snprintf((kal_char *)p_cfg->retry_vector, sizeof(p_cfg->retry_vector), "%s",
                             "'rst=ssid','24,30,30,43200','1040-1041,30,60,120,300,900','1081-1111,30,30,43200','8192-11011,30,30,43200'");
                p_cfg->ike_rekey_timer = 86400;
                p_cfg->esp_rekey_timer = 86400;
                p_cfg->rekey_margin = 180;
                p_cfg->keep_timer = 30;
                p_cfg->IDr = IDR_KEY_ID;
                p_cfg->retrans_to = 1;
                p_cfg->retrans_base = 2;
                p_cfg->oos = 30;
                p_cfg->cert_used = 0;
                p_cfg->mobike = 1;
            }
            else if (streq(mcc, "216")) {
                kal_snprintf((kal_char *)p_cfg->ike_algo, sizeof(p_cfg->ike_algo), "%s",
                             "aes256ctr-aes128-aes128ctr-aes192-aes192ctr-aes256-3des-sha1-sha256-sha384-sha512-aesxcbc-md5-prfsha1-prfsha256-prfsha384-prfsha512-prfaesxcbc-prfmd5-modp2048-modp1024-modp1536-modp768!");
                kal_snprintf((kal_char *)p_cfg->esp_algo, sizeof(p_cfg->esp_algo), "%s",
                             "aes128ctr-aes128-aes192-aes192ctr-aes256-aes256ctr-3des-sha256-sha384-sha512-sha1-aesxcbc-md5!");
                kal_snprintf((kal_char *)p_cfg->retry_vector, sizeof(p_cfg->retry_vector), "%s",
                             "'rst=ssid','24,30,30,43200','1040-1041,30,60,120,300,900','1081-1111,30,30,43200','8192-11011,30,30,43200'");
                p_cfg->ike_rekey_timer = 86400;
                p_cfg->esp_rekey_timer = 86400;
                p_cfg->rekey_margin = 180;
                p_cfg->dpd_timer = 60;
                p_cfg->keep_timer = 60;
                p_cfg->cust_pcscf_4 = 16384;
                p_cfg->cust_pcscf_6 = 16390;
                p_cfg->IDr = IDR_KEY_ID;
                p_cfg->retrans_to = 2;
                p_cfg->retrans_tries = 3;
                p_cfg->retrans_base = 2;
                p_cfg->fastreauth = 1;
                p_cfg->oos = 30;
                p_cfg->mtu = 1400;
                p_cfg->cert_used = 1;
                p_cfg->mobike = 1;
                p_cfg->nocert = 0;
            }
            else {
                kal_snprintf((kal_char *)p_cfg->ike_algo, sizeof(p_cfg->ike_algo), "%s",
                             "aes128-aes256-sha1-prfaesxcbc-modp1024");
                kal_snprintf((kal_char *)p_cfg->esp_algo, sizeof(p_cfg->esp_algo), "%s",
                             "aes128-aes256-3des-sha1");
                p_cfg->ike_rekey_timer = 86400;
                p_cfg->esp_rekey_timer = 86400;
                p_cfg->rekey_margin = 180;
                p_cfg->retrans_to = 1;
                p_cfg->retrans_tries = 3;
                p_cfg->retrans_base = 2;
                p_cfg->cust_pcscf_4 = 16384;
                p_cfg->cust_pcscf_6 = 16386;
                p_cfg->fastreauth = 1;
                p_cfg->oos = 15;
                p_cfg->keep_timer = 180;
                p_cfg->cust_imei_cp = 41101;
                p_cfg->dpd_timer = 60;
                p_cfg->cert_used = 0;
                p_cfg->mobike = 1;
            }
            break;
        }
        case 156: /* Telenor */
        {
            if (streq(mcc, "240")) {
                kal_snprintf((kal_char *)p_cfg->ike_algo, sizeof(p_cfg->ike_algo), "%s",
                             "aes128-aes256-aes256ctr-3des-aesxcbc-md5-sha1-sha256-prfaesxcbc-prfmd5-prfsha1-prfsha256-modp2048-modp1024-modp768!");
                kal_snprintf((kal_char *)p_cfg->esp_algo, sizeof(p_cfg->esp_algo), "%s",
                             "aes128-aes256-aes128ctr-aes256ctr-3des-aesxcbc-sha1-sha256-modp2048-modp1024-modp768!");
                kal_snprintf((kal_char *)p_cfg->retry_vector, sizeof(p_cfg->retry_vector), "%s",
                             "'rst=ssid','24,30,30,43200','1040-1041,30,60,120,300,900','1081-1111,30,30,43200','8192-11011,30,30,43200'");
                p_cfg->IDr = IDR_KEY_ID;
                p_cfg->ike_rekey_timer = 86400;
                p_cfg->esp_rekey_timer = 86400;
                p_cfg->rekey_margin = 180;
                p_cfg->cust_pcscf_4 = 0;
                p_cfg->keep_timer = 30;
                p_cfg->cert_used = 0;
                p_cfg->abort_mode = 1;
            }
            else if (streq(mcc, "242")) {
                kal_snprintf((kal_char *)p_cfg->ike_algo, sizeof(p_cfg->ike_algo), "%s",
                             "aes128-aes256-sha1-prfsha1-modp1024-modp768-modp1536-modp2048!");
                kal_snprintf((kal_char *)p_cfg->esp_algo, sizeof(p_cfg->esp_algo), "%s",
                             "aes128-sha1!");
                kal_snprintf((kal_char *)p_cfg->retry_vector, sizeof(p_cfg->retry_vector), "%s",
                             "'rst=ssid','24,30,30,43200','1040-1041,30,60,120,300,900','1081-1111,30,30,43200','8192-11011,30,30,43200'");
                p_cfg->keep_timer = 30;
                p_cfg->ike_rekey_timer = 86400;
                p_cfg->esp_rekey_timer = 1800;
                p_cfg->rekey_margin = 180;
                p_cfg->mtu = 1300;
                p_cfg->fastreauth = 1;
                p_cfg->cert_used = 0;
                p_cfg->abort_mode = 1;
            }
            else {
                kal_snprintf((kal_char *)p_cfg->ike_algo, sizeof(p_cfg->ike_algo), "%s",
                             "aes256-aes128-sha256-prfsha256-prfsha1-modp1024-modp1536-modp2048!");
                kal_snprintf((kal_char *)p_cfg->esp_algo, sizeof(p_cfg->esp_algo), "%s",
                             "aes256-aes128-sha1-sha256!");
                kal_snprintf((kal_char *)p_cfg->retry_vector, sizeof(p_cfg->retry_vector), "%s",
                             "'rst=ssid','24,30,30,43200','1040-1041,30,60,120,300,900','1081-1111,30,30,43200','8192-11011,30,30,43200'");
                p_cfg->IDr = IDR_KEY_ID;
                p_cfg->keep_timer = 30;
                p_cfg->ike_rekey_timer = 86400;
                p_cfg->esp_rekey_timer = 3600;
                p_cfg->rekey_margin = 180;
                p_cfg->mtu = 1280;
                p_cfg->abort_mode = 1;
            }
            break;
        }
        case 157: /* Telus Canada */
        {
            kal_snprintf((kal_char *)p_cfg->ike_algo, sizeof(p_cfg->ike_algo), "%s",
                         "aes128-sha1-prfsha256-modp2048!");
            kal_snprintf((kal_char *)p_cfg->esp_algo, sizeof(p_cfg->esp_algo), "%s",
                         "aes128-sha1-modp2048!");
            kal_snprintf((kal_char *)p_cfg->retry_vector, sizeof(p_cfg->retry_vector), "%s",
                         "'rst=wfc','24,-1'");
            p_cfg->device_identity = 0; //Enable it after new ePDG is online
            p_cfg->pcscf_restore = 1;
            break;
        }
        case 158: /* Zain */
        {
            kal_snprintf((kal_char *)p_cfg->ike_algo, sizeof(p_cfg->ike_algo), "%s",
                         "aes128-sha1-prfsha1-modp1024!");
            kal_snprintf((kal_char *)p_cfg->esp_algo, sizeof(p_cfg->esp_algo), "%s",
                         "aes128-sha1-modp1024!");
            kal_snprintf((kal_char *)p_cfg->retry_vector, sizeof(p_cfg->retry_vector), "%s",
                         "'rst=ssid','24,30,30,43200','1040-1041,30,60,120,300,900','1081-1111,30,30,43200','8192-11011,30,30,43200'");
            p_cfg->keep_timer = 0;
            p_cfg->ike_rekey_timer = 900;
            p_cfg->esp_rekey_timer = 86400;
            p_cfg->rekey_margin = 180;
            p_cfg->cust_pcscf_4 = 16384;
            p_cfg->cust_pcscf_6 = 16386;
            p_cfg->fastreauth = 1;
            p_cfg->dpd_timer = 300;
            p_cfg->mtu = 1280;
            p_cfg->oos = 30;
            p_cfg->mobike = 1;
            p_cfg->abort_mode = 1;
            p_cfg->cert_used = 0;
            break;
        }
        case 159: /* STC */
        {
            kal_snprintf((kal_char *)p_cfg->ike_algo, sizeof(p_cfg->ike_algo), "%s",
                         "aes128-sha1_160-sha1-modp1024!");
            kal_snprintf((kal_char *)p_cfg->esp_algo, sizeof(p_cfg->esp_algo), "%s",
                         "aes128-sha1-modp1024!");
            p_cfg->fastreauth = 1;
            p_cfg->mtu = 1600;
            p_cfg->cert_used = 0;
            break;
        }
        case 161: /* Play */
        {
            kal_snprintf((kal_char *)p_cfg->ike_algo, sizeof(p_cfg->ike_algo), "%s",
                         "aes256-sha1-prfsha1-modp2048");
            kal_snprintf((kal_char *)p_cfg->esp_algo, sizeof(p_cfg->esp_algo), "%s",
                         "aes256-sha1");
            kal_snprintf((kal_char *)p_cfg->retry_vector, sizeof(p_cfg->retry_vector), "%s",
                         "'rst=ssid','24,30,30,43200','1040-1041,30,60,120,300,900','1081-1111,30,30,43200','8192-11011,30,30,43200'");
            p_cfg->IDi = IDI_RFC822_ADDR_MAC_EAP_NO_MAC;
            p_cfg->IDr = IDR_KEY_ID;
            p_cfg->keep_timer = 0;
            p_cfg->ike_rekey_timer = 3600;
            p_cfg->esp_rekey_timer = 1800;
            p_cfg->rekey_margin = 180;
            p_cfg->retrans_tries = 3;
            p_cfg->dpd_timer = 60;
            p_cfg->cpa_dns4 = 2;
            p_cfg->cpa_dns6 = 2;
            p_cfg->cpa_nm = 1;
            p_cfg->cert_used = 0;
            p_cfg->abort_mode = 1;
            break;
        }
        case 162: /* Freedom */
        {
            kal_snprintf((kal_char *)p_cfg->ike_algo, sizeof(p_cfg->ike_algo), "%s",
                         "aes256-aes128-3des-des-sha1-aesxcbc-md5-prfsha1-prfaesxcbc-modp1536-modp2048-modp1024!");
            kal_snprintf((kal_char *)p_cfg->esp_algo, sizeof(p_cfg->esp_algo), "%s",
                         "aes256-aes128-3des-des-sha1-aesxcbc-md5!");
            p_cfg->IDr = IDR_KEY_ID;
            p_cfg->keep_timer = 50;
            p_cfg->ike_rekey_timer = 8000;
            p_cfg->esp_rekey_timer = 8000;
            p_cfg->rekey_margin = 300;
            p_cfg->cust_pcscf_4 = 16389;
            p_cfg->cust_pcscf_6 = 16390;
            p_cfg->mtu = 1500;
            p_cfg->oos = 15;
            p_cfg->cert_used = 0;
            break;
        }
        case 163: /* Dialog */
        {
            kal_snprintf((kal_char *)p_cfg->ike_algo, sizeof(p_cfg->ike_algo), "%s",
                         "aes128-aes256-3des-sha1-sha256-prfsha1-prfmd5--modp768--modp1024-modp1536-modp2048!");
            kal_snprintf((kal_char *)p_cfg->esp_algo, sizeof(p_cfg->esp_algo), "%s",
                         "aes128-aes256-3des-sha1-sha256!");
            p_cfg->IDr = IDR_KEY_ID;
            p_cfg->keep_timer = 900;
            p_cfg->ike_rekey_timer = 86400;
            p_cfg->esp_rekey_timer = 86400;
            p_cfg->rekey_margin = 180;
            p_cfg->mtu = 1400;
            break;
        }
        case 165: /* Sunrise */
        {
            kal_snprintf((kal_char *)p_cfg->ike_algo, sizeof(p_cfg->ike_algo), "%s",
                         "aes128-aes256-3des-prfsha1-sha1-sha1_160-md5_128-modp1024-modp2048");
            kal_snprintf((kal_char *)p_cfg->esp_algo, sizeof(p_cfg->esp_algo), "%s",
                         "aes128-aes192-aes256-3des-sha1-sha256-sha384-sha512");
            kal_snprintf((kal_char *)p_cfg->retry_vector, sizeof(p_cfg->retry_vector), "%s",
                         "'rst=ssid','24,30,30,43200','1040-1041,30,60,120,300,900','1081-1111,30,30,43200','8192-11011,30,30,43200'");
            p_cfg->IDr = IDR_KEY_ID;
            p_cfg->ike_rekey_timer = 86400;
            p_cfg->esp_rekey_timer = 1500;
            p_cfg->rekey_margin = 180;
            p_cfg->cust_pcscf_4 = 16389;
            p_cfg->cust_pcscf_6 = 16390;
            p_cfg->keep_timer = 30;
            p_cfg->retrans_to = 5;
            p_cfg->retrans_tries = 3;
            p_cfg->mtu = 1280;
            p_cfg->cert_used = 0;
            p_cfg->abort_mode = 1;
            break;
        }
        case 171: /* WOM Chile */
        {
            kal_snprintf((kal_char *)p_cfg->esp_algo, sizeof(p_cfg->esp_algo), "%s",
                         "aes128-sha1-sha256-modp1024-modp768!");
            p_cfg->ike_rekey_timer = 86400;
            p_cfg->mtu = 1300;
            break;
        }
        case 172: /* Altice Dominican */
        {
            kal_snprintf((kal_char *)p_cfg->ike_algo, sizeof(p_cfg->ike_algo), "%s",
                         "aes128-sha1-prfsha1-modp1024!");
            kal_snprintf((kal_char *)p_cfg->esp_algo, sizeof(p_cfg->esp_algo), "%s",
                         "aes128-sha1-modp1024!");
            p_cfg->ike_rekey_timer = 86400;
			p_cfg->esp_rekey_timer = 86400;
            p_cfg->fastreauth = 1;
            p_cfg->mtu = 1300;
            break;
        }
        case 175: /* TDC Denmark */
        {
            kal_snprintf((kal_char *)p_cfg->retry_vector, sizeof(p_cfg->retry_vector), "%s",
                         "'rst=ssid','24,30,30,43200','1081,4,8,16,32,256,1024','1082-1111,5,10,30,60,43200','8192-11011,30,30,43200'");
            p_cfg->cert_used = 0;
            p_cfg->mobike = 1;
            break;
        }
        case 178: /* Smart */
        {
            if (streq(mcc, "515")) {
                /*Philippines*/
                kal_snprintf((kal_char *)p_cfg->epdg_fqdn, sizeof(p_cfg->epdg_fqdn), "%s",
                             "epdg.epc.mnc003.mcc515.pub.3gppnetwork.org");
                kal_snprintf((kal_char *)p_cfg->ike_algo, sizeof(p_cfg->ike_algo), "%s",
                             "aes256-aes128-3des-des-sha1-sha1_160-sha256-sha384-sha512-md5-md5_128-prfsha1-prfsha256-prfsha512-prfmd5-modp1024-modp1536-modp2048!");
                kal_snprintf((kal_char *)p_cfg->esp_algo, sizeof(p_cfg->esp_algo), "%s",
                             "aes256-sha1-modp1024!");
                p_cfg->IDr = IDR_KEY_ID;
                p_cfg->dns_type = DNS_ADDR_V4V6;
                p_cfg->ike_rekey_timer = 3600;
                p_cfg->esp_rekey_timer = 3600;
                p_cfg->rekey_margin = 300;
                p_cfg->cust_pcscf_4 = 16389;
                p_cfg->cust_pcscf_6 = 16390;
            }
            else if (streq(mcc, "456")) {
                /* Cambodia */
                kal_snprintf((kal_char *)p_cfg->epdg_fqdn, sizeof(p_cfg->epdg_fqdn), "%s",
                             "epdg01.epc.mnc006.mcc456.pub.3gppnetwork.org");
                kal_snprintf((kal_char *)p_cfg->ike_algo, sizeof(p_cfg->ike_algo), "%s",
                             "aes128-sha1-prfsha1-modp2048");
                kal_snprintf((kal_char *)p_cfg->esp_algo, sizeof(p_cfg->esp_algo), "%s",
                             "aes128-aes192-aes256-3des-des-md5-sha1-sha256-sha384-sha512-modp2048-noesn-esn");
                p_cfg->urlcert = 1;
                p_cfg->dpd_timer = 900;
                p_cfg->ike_rekey_timer = 86400;
                p_cfg->esp_rekey_timer = 86400;
                p_cfg->rekey_margin = 32400;
                p_cfg->mtu = 1500;
            }
            break;
        }
        case 179: /* Newroz */
        {
            kal_snprintf((kal_char *)p_cfg->ike_algo, sizeof(p_cfg->ike_algo), "%s",
                         "aes256-aes128-3des-sha1-sha256-aesxcbc-prfsha1-prfmd5-modp1024-modp1536-modp2048-modp768!");
            kal_snprintf((kal_char *)p_cfg->esp_algo, sizeof(p_cfg->esp_algo), "%s",
                         "aes256-aes128-3des-sha1-sha256-aesxcbc!");
            kal_snprintf((kal_char *)p_cfg->retry_vector, sizeof(p_cfg->retry_vector), "%s",
                         "'rst=ssid','24,30,30,43200','1040-1041,30,60,120,300,900','1081-1111,30,30,43200','8192-11011,30,30,43200'");
            kal_snprintf((kal_char *)p_cfg->epdg_fqdn, sizeof(p_cfg->epdg_fqdn), "%s",
                         "130.193.192.154");
            p_cfg->IDr = IDR_KEY_ID;
            p_cfg->ike_rekey_timer = 86400;
            p_cfg->esp_rekey_timer = 86400;
            p_cfg->fastreauth = 1;
            p_cfg->retrans_tries = 3;
            p_cfg->cert_used = 0;
            p_cfg->abort_mode = 1;
            break;
        }
        case 183: /* Argentina Personal*/
        {
            kal_snprintf((kal_char *)p_cfg->ike_algo, sizeof(p_cfg->ike_algo), "%s",
                         "aes128-aes256-3des-md5-sha1-aesxcbc-prfsha1-prfaesxcbc-modp1024-modp1536-modp2048");
            kal_snprintf((kal_char *)p_cfg->esp_algo, sizeof(p_cfg->esp_algo), "%s",
                         "aes128-aes256-3des-md5-sha1-aesxcbc");
            p_cfg->IDr = IDR_KEY_ID;
            p_cfg->ike_rekey_timer = 3001;
            p_cfg->esp_rekey_timer = 1500;
            p_cfg->rekey_margin = 180;
            p_cfg->mtu = 1300;
            p_cfg->cert_used = 0;
            break;
        }
        case 185: /* 2degrees*/
        {
            kal_snprintf((kal_char *)p_cfg->epdg_fqdn, sizeof(p_cfg->epdg_fqdn), "%s",
                         "epdg.ims.2degrees.net.nz");
            kal_snprintf((kal_char *)p_cfg->ike_algo, sizeof(p_cfg->ike_algo), "%s",
                         "aes256-sha512-modp1024!");
            kal_snprintf((kal_char *)p_cfg->esp_algo, sizeof(p_cfg->esp_algo), "%s",
                         "aes256-sha256-modp1024!");
            p_cfg->IDr = IDR_KEY_ID;
            p_cfg->dns_type = DNS_ADDR_V4;
            p_cfg->ike_rekey_timer = 86400;
            p_cfg->esp_rekey_timer = 86400;
            p_cfg->rekey_margin = 180;
            p_cfg->mtu = 1500;
            p_cfg->retrans_to = 1;
            p_cfg->retrans_tries = 3;
            p_cfg->retrans_base = 2;
            p_cfg->cust_pcscf_4 = 16384;
            p_cfg->cust_pcscf_6 = 16390;
            p_cfg->oos = 30;
            p_cfg->cert_used = 0;
            p_cfg->mobike = 1;
            break;
        }
        case 186: /* Idea/India */
        {
            kal_snprintf((kal_char *)p_cfg->ike_algo, sizeof(p_cfg->ike_algo), "%s",
                         "aes128-3des-aes256-sha1-sha256-sha384-sha512-md5-aesxcbc-prfsha1-prfmd5-prfaesxcbc-modp1024-modp768-modp1536-modp2048-modp3072-modp4096!");
            kal_snprintf((kal_char *)p_cfg->esp_algo, sizeof(p_cfg->esp_algo), "%s",
                         "aes128-3des-aes256-sha1-md5-aesxcbc-sha256-modp1024-modp768-modp1536-modp2048-modp3072-modp4096!");
            p_cfg->dns_type = DNS_ADDR_V4V6;
            p_cfg->ike_rekey_timer = 86400;
            p_cfg->esp_rekey_timer = 86400;
            p_cfg->rekey_margin = 180;
            p_cfg->mobike = 1;
            break;
        }
        case 187: /* Safaricom */
        {
            kal_snprintf((kal_char *)p_cfg->ike_algo, sizeof(p_cfg->ike_algo), "%s",
                         "aes128-3des-sha1-prfsha1-modp1024!");
            kal_snprintf((kal_char *)p_cfg->esp_algo, sizeof(p_cfg->esp_algo), "%s",
                         "aes128-3des-sha1!");
            p_cfg->ike_rekey_timer = 86400;
            p_cfg->oos = 30;
            p_cfg->cert_used = 0;
            p_cfg->dpd_timer = 60;
            p_cfg->keep_timer = 30;
            p_cfg->rekey_margin = 180;
            p_cfg->mtu = 1500;
            p_cfg->esp_rekey_timer = 86400;
            p_cfg->cust_imei_cp = 16385;
            p_cfg->fastreauth = 1;
            break;
        }
        case 188: /* A1 */
        {
            if (streq(mcc, "257")) {
                kal_snprintf((kal_char *)p_cfg->ike_algo, sizeof(p_cfg->ike_algo), "%s",
                             "aes128-sha1-prfsha1-modp1024");
                kal_snprintf((kal_char *)p_cfg->esp_algo, sizeof(p_cfg->esp_algo), "%s",
                             "aes128-sha1-modp1024");
                kal_snprintf((kal_char *)p_cfg->retry_vector, sizeof(p_cfg->retry_vector), "%s",
                             "'rst=ssid','24,30,30,43200','1040-1041,30,60,120,300,900','1081-1111,30,30,43200','8192-11011,30,30,43200'");
                p_cfg->ike_rekey_timer = 28800;
                p_cfg->esp_rekey_timer =28800;
                p_cfg->rekey_margin = 900;
                p_cfg->cert_used = 0;
                p_cfg->abort_mode = 1;
            }
            else {
                kal_snprintf((kal_char *)p_cfg->ike_algo, sizeof(p_cfg->ike_algo), "%s",
                             "aes128-sha1-prfsha1-modp1024");
                kal_snprintf((kal_char *)p_cfg->esp_algo, sizeof(p_cfg->esp_algo), "%s",
                             "aes128-md5-sha1");
                kal_snprintf((kal_char *)p_cfg->retry_vector, sizeof(p_cfg->retry_vector), "%s",
                             "'rst=ssid','24,30,30,43200','1040-1041,30,60,120,300,900','1081-1111,30,30,43200','8192-11011,30,30,43200'");
                p_cfg->IDr = IDR_KEY_ID;
                p_cfg->ike_rekey_timer = 86400;
                p_cfg->esp_rekey_timer = 86400;
                p_cfg->rekey_margin = 180;
                p_cfg->cust_pcscf_4 = 16384;
                p_cfg->cust_pcscf_6 = 16390;
                p_cfg->retrans_to = 1;
                p_cfg->retrans_base = 2;
                p_cfg->cert_used = 0;
                p_cfg->abort_mode = 1;
            }
            break;
        }
        case 189: /* UMOBILE Malaysia*/
        {
            kal_snprintf((kal_char *)p_cfg->ike_algo, sizeof(p_cfg->ike_algo), "%s",
                         "aes128-md5-prfmd5-modp1024!");
            p_cfg->retrans_to = 3;
            p_cfg->retrans_tries = 3;
            p_cfg->mtu = 1500;
            p_cfg->cert_used = 0;
            p_cfg->mobike = 1;
            break;
        }
        case 195: /* O2 Czech and Slovakia*/
        {
            kal_snprintf((kal_char *)p_cfg->ike_algo, sizeof(p_cfg->ike_algo), "%s",
                         "aes128-aes192-aes256-sha256-sha384-sha512-prfsha256-prfsha384-prfsha512-modp2048-modp3072-modp1536-modp1024!");
            kal_snprintf((kal_char *)p_cfg->esp_algo, sizeof(p_cfg->esp_algo), "%s",
                         "aes128-aes192-aes256-sha256-sha384-sha512-modp2048-modp3072-modp1536-modp1024!");
            kal_snprintf((kal_char *)p_cfg->retry_vector, sizeof(p_cfg->retry_vector), "%s",
                         "'rst=ssid','24,30,30,43200','1040-1041,30,60,120,300,900','1081-1111,30,30,43200','8192-11011,30,30,43200'");
            p_cfg->cust_pcscf_4 = 0;
            p_cfg->cust_pcscf_6 = 16390;
            p_cfg->IDr = IDR_KEY_ID;
            p_cfg->abort_mode = 1;
            break;
        }
        case 196: /* FirstNet */
        {
            kal_snprintf((kal_char *)p_cfg->ike_algo, sizeof(p_cfg->ike_algo), "%s",
                         "aes128-sha256-modp2048!");
            kal_snprintf((kal_char *)p_cfg->esp_algo, sizeof(p_cfg->esp_algo), "%s",
                         "aes128-sha256!");
            kal_snprintf((kal_char *)p_cfg->epdg_fqdn, sizeof(p_cfg->epdg_fqdn), "%s",
                         "epdg.epc.firstnet.com");
            kal_snprintf((kal_char *)p_cfg->retry_vector, sizeof(p_cfg->retry_vector), "%s",
                         "'8192,-1','36,20,40,80,160,320'");
            p_cfg->keep_timer = 20;
            p_cfg->cust_pcscf_4 = 16384;
            p_cfg->cust_pcscf_6 = 16386;
            p_cfg->oos = 30;
            p_cfg->mobike = 0;
            p_cfg->dns_type = DNS_ADDR_V4;
            p_cfg->fragment = 1;
            break;
        }
        case 199: /* Vivacom */
        {
            kal_snprintf((kal_char *)p_cfg->ike_algo, sizeof(p_cfg->ike_algo), "%s",
                         "aes128-sha1-prfsha1-modp1024");
            kal_snprintf((kal_char *)p_cfg->esp_algo, sizeof(p_cfg->esp_algo), "%s",
                         "aes128-sha1-modp1024");
            p_cfg->ike_rekey_timer = 43200;
            p_cfg->esp_rekey_timer = 43200;
            p_cfg->rekey_margin = 180;
            p_cfg->cust_pcscf_4 = 16389;
            p_cfg->cust_pcscf_6 = 16390;
            p_cfg->cert_used = 0;
            break;
        }
        case 201: /* KPN */
        {
            kal_snprintf((kal_char *)p_cfg->ike_algo, sizeof(p_cfg->ike_algo), "%s",
                         "aes256-sha256-prfsha256-modp2048!");
            kal_snprintf((kal_char *)p_cfg->esp_algo, sizeof(p_cfg->esp_algo), "%s",
                         "aes256-sha256-modp2048!");
            kal_snprintf((kal_char *)p_cfg->retry_vector, sizeof(p_cfg->retry_vector), "%s",
                         "'rst=ssid','24,30,30,43200','1040-1041,30,60,120,300,900','1081-1111,30,30,43200','8192-11011,30,30,43200'");
            p_cfg->IDr = IDR_KEY_ID;
            p_cfg->ike_rekey_timer = 0;
            p_cfg->esp_rekey_timer = 0;
            p_cfg->rekey_margin = 0;
            p_cfg->cert_used = 0;
            p_cfg->mobike = 1;
            p_cfg->oos = 30;
            p_cfg->abort_mode = 1;
            break;
        }
        case 203: /* NOS */
        {
            kal_snprintf((kal_char *)p_cfg->ike_algo, sizeof(p_cfg->ike_algo), "%s",
                         "aes128-aes256-sha1-sha256-prfsha1-prfsha256-modp1024-modp2048!");
            kal_snprintf((kal_char *)p_cfg->esp_algo, sizeof(p_cfg->esp_algo), "%s",
                         "aes128-aes256-sha1-sha256!");
            kal_snprintf((kal_char *)p_cfg->retry_vector, sizeof(p_cfg->retry_vector), "%s",
                         "'rst=ssid','24,30,30,43200','1040-1041,30,60,120,300,900','1081-1111,30,30,43200','8192-11011,30,30,43200'");
            p_cfg->ike_rekey_timer = 86400;
            p_cfg->esp_rekey_timer = 86400;
            p_cfg->rekey_margin = 180;
            p_cfg->keep_timer = 20;
            p_cfg->ike_dscp = 48;
            p_cfg->cert_used = 0;
            p_cfg->abort_mode = 1;
            break;
        }
        case 204: /* Rogers Canada */
        {
            kal_snprintf((kal_char *)p_cfg->retry_vector, sizeof(p_cfg->retry_vector), "%s",
                         "'rst=wfc','24,2,2,-1'");
            kal_snprintf((kal_char *)p_cfg->ike_algo, sizeof(p_cfg->ike_algo), "%s",
                         "aes128-aes128ctr-aes192-aes192ctr-aes256-aes256ctr-3des-aesxcbc-md5-sha1-sha256-sha384-sha512-prfaesxcbc-prfmd5-prfsha1-prfsha256-prfsha384-prfsha512-modp2048-modp1536-modp1024-modp768!");
            kal_snprintf((kal_char *)p_cfg->esp_algo, sizeof(p_cfg->esp_algo), "%s",
                         "aes128-aes128ctr-aes192-aes192ctr-aes256-aes256ctr-3des-aesxcbc-md5-sha1-sha256-sha384-sha512-noesn-esn!");
            p_cfg->ike_rekey_timer = 43200;
            p_cfg->esp_rekey_timer = 43200;
            p_cfg->keep_timer = 30;
            p_cfg->oos = 30;
            p_cfg->urlcert = 1;
            p_cfg->fragment = 1;
            p_cfg->mobike = 1;
            break;
        }
        case 206: /* Sky */
        {
            kal_snprintf((kal_char *)p_cfg->ike_algo, sizeof(p_cfg->ike_algo), "%s",
                         "des-3des-aes128-aes256-sha1-aesxcbc-prfmd5-prfsha1-prfaesxcbc-prfsha256-modp1024-modp1536-modp2048!");
            kal_snprintf((kal_char *)p_cfg->esp_algo, sizeof(p_cfg->esp_algo), "%s",
                         "des-3des-aes128-aes256-md5-sha1-aesxcbc!");
            kal_snprintf((kal_char *)p_cfg->retry_vector, sizeof(p_cfg->retry_vector), "%s",
                         "'rst=ssid,wfc','24,30,30,43200','1040-1041,30,60,120,300,900','1081,30,60,120,300,600,43200','1082-1111,30,30,43200','8192-11011,30,30,43200'");
            p_cfg->IDr = IDR_KEY_ID;
            p_cfg->ike_rekey_timer = 3001;
            p_cfg->esp_rekey_timer = 1500;
            p_cfg->rekey_margin = 180;
            p_cfg->cert_used = 0;
            p_cfg->abort_mode = 1;
            break;
        }
        case 211: /* C&W Panama */
        {
            p_cfg->IDr = IDR_KEY_ID;
            p_cfg->dpd_timer = 600;
            p_cfg->ike_rekey_timer = 57600;
            p_cfg->esp_rekey_timer = 57600;
            p_cfg->rekey_margin = 28800;
            p_cfg->retrans_to = 5;
            p_cfg->retrans_tries = 3;
            p_cfg->mtu = 1500;
            break;
        }
        case 213: /* Motiv Russia*/
        {
            kal_snprintf((kal_char *)p_cfg->epdg_fqdn, sizeof(p_cfg->epdg_fqdn), "%s",
                         "epdg.motivtelecom.ru");
            kal_snprintf((kal_char *)p_cfg->ike_algo, sizeof(p_cfg->ike_algo), "%s",
                         "aes128-aes128ctr-aes192-aes192ctr-aes256-aes256ctr-des-3des-aesxcbc-md5-sha1-sha256-sha384-sha512-prfaesxcbc-prfmd5-prfsha1-prfsha256-prfsha384-prfsha512-modp2048-modp1536-modp1024-modp768!");
            kal_snprintf((kal_char *)p_cfg->esp_algo, sizeof(p_cfg->esp_algo), "%s",
                         "aes128-aes128ctr-aes192-aes192ctr-aes256-aes256ctr-des-3des-aesxcbc-md5-sha1-sha256-sha384-sha512-modp2048-modp1536-modp1024-modp768!");
            p_cfg->dpd_timer = 60;
            p_cfg->mobike = 1;
            break;
        }
        case 214: /* IDC Moldova */
        {
            kal_snprintf((kal_char *)p_cfg->epdg_fqdn, sizeof(p_cfg->epdg_fqdn), "%s",
                             "217.19.216.219");
            kal_snprintf((kal_char *)p_cfg->ike_algo, sizeof(p_cfg->ike_algo), "%s",
                         "des-3des-aes128-aes256-sha1-sha256-aesxcbc-prfsha1-prfsha256-prfsha384-prfsha512-prfmd5-prfaesxcbc-modp768-modp1024-modp1536-modp2048!");
            kal_snprintf((kal_char *)p_cfg->esp_algo, sizeof(p_cfg->esp_algo), "%s",
                         "des-3des-aes128-aes256-sha1-sha256-aesxcbc!");
            kal_snprintf((kal_char *)p_cfg->retry_vector, sizeof(p_cfg->retry_vector), "%s",
                         "'rst=ssid','24,30,30,43200','1040-1041,30,60,120,300,900','1081-1111,30,30,43200','8192-11011,30,30,43200'");
            p_cfg->cert_used = 0;
            p_cfg->ike_rekey_timer = 81000;
            p_cfg->esp_rekey_timer = 81000;
            p_cfg->rekey_margin = 180;
            p_cfg->keep_timer = 30;
            p_cfg->mtu = 1300;
            p_cfg->fastreauth = 1;
            p_cfg->oos = 30;
            p_cfg->abort_mode = 1;
            break;
        }
        case 217: /* Telekom */
        {
            kal_snprintf((kal_char *)p_cfg->retry_vector, sizeof(p_cfg->retry_vector), "%s",
                         "'24,86400'");
            p_cfg->ike_rekey_timer = 86400;
            p_cfg->rekey_margin = 300;
            p_cfg->esp_rekey_timer = 28800;
            break;
        }
        case 220: /* Tigo */
        {
            p_cfg->ike_rekey_timer = 86400;
            break;
        }
        case 221: /* TPG */
        {
            kal_snprintf((kal_char *)p_cfg->ike_algo, sizeof(p_cfg->ike_algo), "%s",
                         "aes128-3des-aes192-aes256-sha1-sha256-sha384-sha512-md5-aesxcbc-prfsha1-modp1024-modp2048-modp1536-modp768!");
            kal_snprintf((kal_char *)p_cfg->esp_algo, sizeof(p_cfg->esp_algo), "%s",
                         "aes128-3des-aes192-aes256-sha1-sha256-sha384-sha512-md5-aesxcbc-modp1024-modp2048-modp1536-modp768!");
            p_cfg->ike_rekey_timer = 86400;
            p_cfg->esp_rekey_timer = 86400;
            p_cfg->cust_pcscf_4 = 16389;
            p_cfg->cust_pcscf_6 = 16390;
            p_cfg->dns_type = DNS_ADDR_V4V6;
            p_cfg->cert_used = 0;
            p_cfg->mobike = 1;
            p_cfg->dpd_timer = 120;
            p_cfg->mtu = 1500;
            p_cfg->retrans_to = 5;
            p_cfg->retrans_tries = 3;
            p_cfg->oos = 15;
            break;
        }
        case 234: /* PLUS/Poland */
        {
            kal_snprintf((kal_char *)p_cfg->ike_algo, sizeof(p_cfg->ike_algo), "%s",
                             "aes128-aes256-sha1-sha256-prfsha1-prfsha256-modp2048-modp3072-modp4096");
            kal_snprintf((kal_char *)p_cfg->esp_algo, sizeof(p_cfg->esp_algo), "%s",
                             "aes128-aes256-sha1-sha256");
            kal_snprintf((kal_char *)p_cfg->retry_vector, sizeof(p_cfg->retry_vector), "%s",
                             "'rst=ssid','24,30,30,43200','1040-1041,30,60,120,300,900','1081-1111,30,30,43200','8192-11011,30,30,43200'");
            p_cfg->cert_used = 0;
            p_cfg->IDr = IDR_KEY_ID;
            p_cfg->keep_timer = 180;
            p_cfg->ike_rekey_timer = 86400;
            p_cfg->esp_rekey_timer = 28800;
            p_cfg->rekey_margin = 1500;
            p_cfg->retrans_to = 1;
            p_cfg->retrans_base = 2;
            p_cfg->fastreauth = 1;
            p_cfg->device_identity = 1;
            p_cfg->mobike = 1;
            p_cfg->oos = 30;
            p_cfg->abort_mode = 1;
            break;
        }
        case 238: /* Videotron/Canada */
        {
            p_cfg->IDi = IDI_RFC822_ADDR_MAC;
            p_cfg->IDr = IDR_KEY_ID;
            p_cfg->dpd_timer = 960;
            p_cfg->ike_rekey_timer = 43200;
            p_cfg->esp_rekey_timer = 43200;
            p_cfg->rekey_margin = 180;
            p_cfg->retrans_to = 5;
            p_cfg->retrans_tries = 5;
            break;
        }
        case 243: /* Globe/Philippines */
        {
            kal_snprintf((kal_char *)p_cfg->epdg_fqdn, sizeof(p_cfg->epdg_fqdn), "%s",
                         "weconnect.globe.com.ph");
            kal_snprintf((kal_char *)p_cfg->ike_algo, sizeof(p_cfg->ike_algo), "%s",
                         "aes128-aes256-sha1-prfsha1-prfmd5-modp1024!");
            kal_snprintf((kal_char *)p_cfg->esp_algo, sizeof(p_cfg->esp_algo), "%s",
                         "aes128-sha1!");
            p_cfg->cert_used = 0;
            p_cfg->IDr = IDR_KEY_ID;
            p_cfg->keep_timer = 30;
            p_cfg->ike_rekey_timer = 86400;
            p_cfg->fastreauth = 1;
            p_cfg->oos = 60;
            break;
        }
        case 245: /* Vietnamobile/Vietnam */
        {
            kal_snprintf((kal_char *)p_cfg->ike_algo, sizeof(p_cfg->ike_algo), "%s",
                         "aes128-3des-aes192-aes256-sha1-sha256-sha384-sha512-md5-aesxcbc-prfsha1-prfmd5-prfaesxcbc-modp2048-modp1536-modp1024-modp768!");
            kal_snprintf((kal_char *)p_cfg->esp_algo, sizeof(p_cfg->esp_algo), "%s",
                         "aes128-3des-aes192-aes256-sha1-sha256-sha384-sha512-md5-aesxcbc!");
            p_cfg->ike_rekey_timer = 86400;
            p_cfg->esp_rekey_timer = 86400;
            p_cfg->rekey_margin = 32400;
            break;
        }
        case 276: /* Altice-US */
        {
            kal_snprintf((kal_char *)p_cfg->ike_algo, sizeof(p_cfg->ike_algo), "%s", "aes128-aes256-sha256-modp2048-modp1024-modp768");
            kal_snprintf((kal_char *)p_cfg->esp_algo, sizeof(p_cfg->esp_algo), "%s", "aes128-3des-sha256-modp2048");
            p_cfg->ike_rekey_timer = 43200;
            p_cfg->esp_rekey_timer = 43200;
            p_cfg->rekey_margin = 180;
            p_cfg->mobike = 1;
            break;
        }
        case 282: /* Mobily/Saudi */
        {
            kal_snprintf((kal_char *)p_cfg->epdg_fqdn, sizeof(p_cfg->epdg_fqdn), "%s",
                         "epdg.mobily.com.sa");
            kal_snprintf((kal_char *)p_cfg->ike_algo, sizeof(p_cfg->ike_algo), "%s",
                         "aes128-sha1-prfsha256-modp1024");
            kal_snprintf((kal_char *)p_cfg->esp_algo, sizeof(p_cfg->esp_algo), "%s",
                         "aes128-sha1-modp1024");
            p_cfg->cust_pcscf_4 = 16389;
            p_cfg->cust_pcscf_6 = 16390;
            break;
        }
        case 1001: /* Ericsson IMS IWLAN */
        {
            break;
        }
        case 1002: /* Nokia Finland */
        {
            break;
        }
        case 1003: /* HQLAB_ERICSSON */
        {
            if (streq(mcc, "240")) {
                kal_snprintf((kal_char *)p_cfg->ike_algo, sizeof(p_cfg->ike_algo), "%s",
                             "aes128-md5-modp1024");
                kal_snprintf((kal_char *)p_cfg->esp_algo, sizeof(p_cfg->esp_algo), "%s",
                             "aes128-3des-des-md5-sha1-aesxcbc");
                kal_snprintf((kal_char *)p_cfg->epdg_fqdn, sizeof(p_cfg->epdg_fqdn), "%s",
                             "10.164.3.251");
                p_cfg->IDr = IDR_KEY_ID;
                p_cfg->ike_rekey_timer = 3600;
                p_cfg->esp_rekey_timer = 3600;
                p_cfg->rekey_margin = 300;
                p_cfg->mtu = 1500;
            }
            break;
        }
        case 1004: /* Huawei IMS */
        {
            break;
        }
        case 24576: /* ID24576 */
        {
            p_cfg->IDr = IDR_KEY_ID;
            p_cfg->ike_rekey_timer = 3300;
            p_cfg->esp_rekey_timer = 1800;
            p_cfg->rekey_margin = 300;
            p_cfg->dpd_timer = 120;
            break;
        }
        default:
            break;
    }

    return KAL_TRUE;
}

