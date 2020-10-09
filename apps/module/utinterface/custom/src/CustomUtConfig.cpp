/* Copyright Statement:
 *
 * This software/firmware and related documentation ("MediaTek Software") are
 * protected under relevant copyright laws. The information contained herein
 * is confidential and proprietary to MediaTek Inc. and/or its licensors.
 * Without the prior written permission of MediaTek inc. and/or its licensors,
 * any reproduction, modification, use or disclosure of MediaTek Software,
 * and information contained herein, in whole or in part, shall be strictly prohibited.
 */
/* MediaTek Inc. (C) 2010. All rights reserved.
 *
 * BY OPENING THIS FILE, RECEIVER HEREBY UNEQUIVOCALLY ACKNOWLEDGES AND AGREES
 * THAT THE SOFTWARE/FIRMWARE AND ITS DOCUMENTATIONS ("MEDIATEK SOFTWARE")
 * RECEIVED FROM MEDIATEK AND/OR ITS REPRESENTATIVES ARE PROVIDED TO RECEIVER ON
 * AN "AS-IS" BASIS ONLY. MEDIATEK EXPRESSLY DISCLAIMS ANY AND ALL WARRANTIES,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE OR NONINFRINGEMENT.
 * NEITHER DOES MEDIATEK PROVIDE ANY WARRANTY WHATSOEVER WITH RESPECT TO THE
 * SOFTWARE OF ANY THIRD PARTY WHICH MAY BE USED BY, INCORPORATED IN, OR
 * SUPPLIED WITH THE MEDIATEK SOFTWARE, AND RECEIVER AGREES TO LOOK ONLY TO SUCH
 * THIRD PARTY FOR ANY WARRANTY CLAIM RELATING THERETO. RECEIVER EXPRESSLY ACKNOWLEDGES
 * THAT IT IS RECEIVER'S SOLE RESPONSIBILITY TO OBTAIN FROM ANY THIRD PARTY ALL PROPER LICENSES
 * CONTAINED IN MEDIATEK SOFTWARE. MEDIATEK SHALL ALSO NOT BE RESPONSIBLE FOR ANY MEDIATEK
 * SOFTWARE RELEASES MADE TO RECEIVER'S SPECIFICATION OR TO CONFORM TO A PARTICULAR
 * STANDARD OR OPEN FORUM. RECEIVER'S SOLE AND EXCLUSIVE REMEDY AND MEDIATEK'S ENTIRE AND
 * CUMULATIVE LIABILITY WITH RESPECT TO THE MEDIATEK SOFTWARE RELEASED HEREUNDER WILL BE,
 * AT MEDIATEK'S OPTION, TO REVISE OR REPLACE THE MEDIATEK SOFTWARE AT ISSUE,
 * OR REFUND ANY SOFTWARE LICENSE FEES OR SERVICE CHARGE PAID BY RECEIVER TO
 * MEDIATEK FOR SUCH MEDIATEK SOFTWARE AT ISSUE.
 *
 * The following software/firmware and/or related documentation ("MediaTek Software")
 * have been modified by MediaTek Inc. All revisions are subject to any receiver's
 * applicable license agreements with MediaTek Inc.
 */
#include <stdlib.h>

#include "UtConfig.h"
#include "string.h"

#define INIT_BOL(x,y) mDefaultBool[x]=y
#define INIT_STR(x,y) mDefaultStr[x]=y
#define INIT_INT(x,y) mDefaultInt[x]=y
#define SET_BOL(x,y,z) setOpBool(x,y,z)
#define SET_STR(x,y,z) setOpStr(x,y,z)
#define SET_INT(x,y,z) setOpInt(x,y,z)

#define SET_TEST_SIM_BOL(x,y,z) setMapBool(&mMapOpTestSimBool, x,y,z)
#define SET_TEST_SIM_STR(x,y,z) setMapStr(&mMapOpTestSimStr, x,y,z)
#define SET_TEST_SIM_INT(x,y,z) setMapInt(&mMapOpTestSimInt, x,y,z)

//#define __SENSITIVE_DATA_MOSAIC_NONE__
//#define __SENSITIVE_DATA_MOSAIC_PARTIAL__
#define __SENSITIVE_DATA_MOSAIC_FULL__

void UtConfig::custom_init() {
    /* Customer Operator config */
    /* Start of allowable modified section */

    /* Please refer to /../main/common/inc/UtConfig.h for IDX */

    // Default config
    INIT_BOL(IDX_BOOL_MEDIA_TAG,             true);
    INIT_BOL(IDX_BOOL_SUPPORT_CFNL,          true);
    INIT_BOL(IDX_BOOL_ENABLE_TMPI,           false);
    INIT_BOL(IDX_BOOL_XCAP_CACHE,            true);
    INIT_BOL(IDX_BOOL_SUPPORT_PUT_CF_ROOT,   true);
    INIT_BOL(IDX_BOOL_TIMER_IN_CFNRY,        false);
    INIT_BOL(IDX_BOOL_SUPPORT_PUT_CLIR_ROOT, true);
    INIT_BOL(IDX_BOOL_NEED_QUOTATION_MARK,   false);
    INIT_BOL(IDX_BOOL_SSL_TRUST,             false);
    INIT_BOL(IDX_BOOL_GZIP_SUPPORT,          false);
    INIT_BOL(IDX_BOOL_SET_CFNRC_WITH_CFNL,   false);
    INIT_BOL(IDX_BOOL_FWD_NUM_USE_SIP_URI,   false);
    INIT_BOL(IDX_BOOL_CB_NO_ACTION_ALLOW,    false);
    INIT_BOL(IDX_BOOL_CLEAR_CACHE_AFTER_PUT, true);
    INIT_BOL(IDX_BOOL_REMOVE_INVALID_ACTIONS,false);
    INIT_BOL(IDX_BOOL_USE_FIRST_XUI_ELEMENT, false);
    INIT_BOL(IDX_BOOL_USE_SAVED_XUI,         false);
    INIT_BOL(IDX_BOOL_SUPPORT_USERNAME_TMPI, false);
    INIT_BOL(IDX_BOOL_SUPPORT_ADDING_UNPROVISIONED_RULE, true);
    INIT_BOL(IDX_BOOL_ENABLE_CUSTOM_UA_STR,  false);
    INIT_BOL(IDX_BOOL_EXCLUSIVE_CB,          false);
    INIT_BOL(IDX_BOOL_SUPPORT_PUT_CW_ROOT,   false);
    INIT_BOL(IDX_BOOL_SUPPORT_ADDING_NAMESPACE, true);
    INIT_BOL(IDX_BOOL_NEED_CHECK_ISIM_INFO,  false);
    INIT_BOL(IDX_BOOL_SUPPORT_RULE_LEVEL_SETTING,   false);
    INIT_BOL(IDX_BOOL_SUPPORT_QUERY_SIMSEVRS, false);
    INIT_BOL(IDX_BOOL_SUPPORT_ENABLE_BY_COND, false);
    INIT_BOL(IDX_BOOL_SUPPORT_DISABLE_BY_COND, false);
    INIT_BOL(IDX_BOOL_CANCEL_ENABLED_RULE_ONLY,   false);
    INIT_BOL(IDX_BOOL_TCP_SESSION_KEEP_ALIVE, true);
    INIT_BOL(IDX_BOOL_SUPPORT_ISIM,           true);

    INIT_STR(IDX_STR_XCAP_PROTOCOL,     "http");
    INIT_STR(IDX_STR_GBA_PROTOCOL,      "http");
    INIT_STR(IDX_STR_NAF_HOST,          "");
    INIT_STR(IDX_STR_BSF_HOST,          "");
    INIT_STR(IDX_STR_BSF_URL_PATH,      "");
    INIT_STR(IDX_STR_AUID,              "simservs.ngn.etsi.org");
    INIT_STR(IDX_STR_DIGEST_ID,         "");
    INIT_STR(IDX_STR_DIGEST_PWD,        "");
    INIT_STR(IDX_STR_IMEI_HEADER,       "");
    INIT_STR(IDX_STR_GBA_TYPE,          "");
    INIT_STR(IDX_STR_PHONE_CONTEXT,     "");
    INIT_STR(IDX_STR_RULEID_CFU,        "");
    INIT_STR(IDX_STR_RULEID_CFB,        "");
    INIT_STR(IDX_STR_RULEID_CFNRY,      "");
    INIT_STR(IDX_STR_RULEID_CFNRC,      "");
    INIT_STR(IDX_STR_RULEID_CFNL,       "");
    INIT_STR(IDX_STR_RULEID_BAOC,       "");
    INIT_STR(IDX_STR_RULEID_BAOIC,      "");
    INIT_STR(IDX_STR_RULEID_BAOICXH,    "");
    INIT_STR(IDX_STR_RULEID_BAIC,       "");
    INIT_STR(IDX_STR_RULEID_BAICR,      "");
    INIT_STR(IDX_STR_BSF_REALM,         "");
    INIT_STR(IDX_STR_UA_PREFIX,         "");
    INIT_STR(IDX_STR_UA_MODEL,          "MTK/1.0.0");
    INIT_STR(IDX_STR_UA_DEFAULT,        "XCAP Client");

    INIT_INT(IDX_INT_XCAP_PORT,                 80);
    INIT_INT(IDX_INT_GBA_PORT,                  80);
    INIT_INT(IDX_INT_MEDIA_TYPE,                MEDIA_TYPE_STANDARD);
    INIT_INT(IDX_INT_URL_ENCODING,              URL_ENCODING_DOC_SELECTOR|URL_ENCODING_NODE_SELECTOR);
    INIT_INT(IDX_INT_XCAP_CONNECTION_TIMEOUT,   30*1000);
    INIT_INT(IDX_INT_XCAP_RETRY_TIMES,          1);  // Only 0 and 1
    INIT_INT(IDX_INT_GBA_CONNECTION_TIMEOUT,    20*1000);
    INIT_INT(IDX_INT_GBA_RETRY_TIMES,           0);  // RFU
    INIT_INT(IDX_INT_DNS_SERVER_IPV4V6_PRIORITY,DNS_SERVER_IPV6_FIRST);

    // Operator config
    SET_BOL("00101",    IDX_BOOL_MEDIA_TAG,             false);
    SET_BOL("00101",    IDX_BOOL_ENABLE_TMPI,           true);
    SET_BOL("00101",    IDX_BOOL_XCAP_CACHE,            false);
    SET_STR("00101",    IDX_STR_AUID,                   "XCAP.3gpp.org/simservs.ngn.etsi.org");
    SET_BOL("20201",    IDX_BOOL_MEDIA_TAG,             false);
    SET_BOL("20201",    IDX_BOOL_ENABLE_CUSTOM_UA_STR,  true);
    SET_BOL("20201",    IDX_BOOL_SUPPORT_ADDING_UNPROVISIONED_RULE, false);
    SET_BOL("20202",    IDX_BOOL_MEDIA_TAG,             false);
    SET_BOL("20202",    IDX_BOOL_ENABLE_CUSTOM_UA_STR,  true);
    SET_BOL("20202",    IDX_BOOL_SUPPORT_ADDING_UNPROVISIONED_RULE, false);
    SET_BOL("20205",    IDX_BOOL_MEDIA_TAG,             false);
    SET_BOL("20205",    IDX_BOOL_SET_CFNRC_WITH_CFNL,   true);
    SET_BOL("20205",    IDX_BOOL_XCAP_CACHE,            false);
    SET_INT("20205",    IDX_INT_URL_ENCODING,           URL_ENCODING_NODE_SELECTOR);
    SET_STR("20205",    IDX_STR_BSF_HOST,               "bsf.ims.mnc005.mcc202.pub.3gppnetwork.org");
    SET_STR("20209",    IDX_STR_BSF_HOST,               "bsf.ims.mnc009.mcc202.pub.3gppnetwork.org");
    SET_BOL("20209",    IDX_BOOL_MEDIA_TAG,             false);
    SET_BOL("20209",    IDX_BOOL_SUPPORT_CFNL,          false);
    SET_INT("20209",    IDX_INT_XCAP_PORT,              8090);
    SET_STR("20209",    IDX_STR_AUID,                   "mtasxdms/simservs.ngn.etsi.org");
    SET_STR("20210",    IDX_STR_BSF_HOST,               "bsf.ims.mnc010.mcc202.pub.3gppnetwork.org");
    SET_BOL("20210",    IDX_BOOL_MEDIA_TAG,             false);
    SET_BOL("20210",    IDX_BOOL_SUPPORT_CFNL,          false);
    SET_INT("20210",    IDX_INT_XCAP_PORT,              8090);
    SET_STR("20210",    IDX_STR_AUID,                   "mtasxdms/simservs.ngn.etsi.org");
    SET_INT("20402",    IDX_INT_MEDIA_TYPE,             MEDIA_TYPE_ONLY_AUDIO);
    SET_BOL("20402",    IDX_BOOL_SUPPORT_PUT_CLIR_ROOT, false);
    SET_BOL("20404",    IDX_BOOL_SUPPORT_PUT_CLIR_ROOT, false);
    SET_BOL("20404",    IDX_BOOL_SUPPORT_PUT_CF_ROOT,   false);
    SET_BOL("20404",    IDX_BOOL_MEDIA_TAG,             false);
    SET_BOL("20404",    IDX_BOOL_SUPPORT_CFNL,          false);
    SET_INT("20404",    IDX_INT_XCAP_PORT,              8080);
    SET_INT("20404",    IDX_INT_GBA_PORT,               10080);
    SET_INT("20404",    IDX_INT_URL_ENCODING,           URL_ENCODING_NODE_SELECTOR);
    SET_STR("20408",    IDX_STR_XCAP_PROTOCOL,          "https");
    SET_STR("20408",    IDX_STR_GBA_PROTOCOL,           "https");
    SET_STR("20408",    IDX_STR_GBA_TYPE,               "GBA_ME");
    SET_BOL("20408",    IDX_BOOL_MEDIA_TAG,             false);
    SET_BOL("20408",    IDX_BOOL_SUPPORT_CFNL,          false);
    SET_BOL("20416",    IDX_BOOL_MEDIA_TAG,             false);
    SET_BOL("20416",    IDX_BOOL_XCAP_CACHE,            false);
    SET_BOL("20416",    IDX_BOOL_ENABLE_CUSTOM_UA_STR,  true);
    SET_BOL("20416",    IDX_BOOL_SUPPORT_ADDING_UNPROVISIONED_RULE, false);
    SET_BOL("20420",    IDX_BOOL_MEDIA_TAG,             false);
    SET_BOL("20420",    IDX_BOOL_XCAP_CACHE,            false);
    SET_BOL("20420",    IDX_BOOL_ENABLE_CUSTOM_UA_STR,  true);
    SET_BOL("20420",    IDX_BOOL_SUPPORT_ADDING_UNPROVISIONED_RULE, false);
    SET_STR("20469",    IDX_STR_XCAP_PROTOCOL,          "https");
    SET_STR("20469",    IDX_STR_GBA_PROTOCOL,           "https");
    SET_STR("20469",    IDX_STR_GBA_TYPE,               "GBA_ME");
    SET_STR("20601",    IDX_STR_GBA_TYPE,               "GBA_ME");
    SET_STR("20601",    IDX_STR_BSF_HOST,               "bsf.ims.mnc001.mcc206.pub.3gppnetwork.org");
    SET_STR("20605",    IDX_STR_GBA_TYPE,               "GBA_ME");
    SET_BOL("20605",    IDX_BOOL_MEDIA_TAG,             false);
    SET_BOL("20605",    IDX_BOOL_SUPPORT_PUT_CF_ROOT,   false);
    SET_BOL("20605",    IDX_BOOL_SUPPORT_CFNL,          false);
    SET_BOL("20801",    IDX_BOOL_MEDIA_TAG,             false);
    SET_BOL("20802",    IDX_BOOL_MEDIA_TAG,             false);
    SET_BOL("20810",    IDX_BOOL_SUPPORT_ADDING_UNPROVISIONED_RULE, false);
    SET_INT("20820",    IDX_INT_XCAP_PORT,              4000);
    SET_INT("20820",    IDX_INT_GBA_PORT,               4001);
    SET_BOL("20820",    IDX_BOOL_SUPPORT_CFNL,          false);
    SET_INT("20888",    IDX_INT_XCAP_PORT,              4000);
    SET_INT("20888",    IDX_INT_GBA_PORT,               4001);
    SET_BOL("21401",    IDX_BOOL_MEDIA_TAG,             false);
    SET_BOL("21401",    IDX_BOOL_SUPPORT_CFNL,          false);
    SET_BOL("21401",    IDX_BOOL_XCAP_CACHE,            false);
    SET_BOL("21401",    IDX_BOOL_NEED_QUOTATION_MARK,   true);
    SET_INT("21405",    IDX_INT_MEDIA_TYPE,             MEDIA_TYPE_SEPERATE);
    SET_STR("21405",    IDX_STR_GBA_TYPE,               "GBA_ME");
    SET_BOL("21405",    IDX_BOOL_SUPPORT_ADDING_UNPROVISIONED_RULE, false);
    SET_INT("21405",    IDX_INT_XCAP_PORT,              8089);
    SET_INT("21405",    IDX_INT_GBA_PORT,               8088);
    SET_BOL("21406",    IDX_BOOL_MEDIA_TAG,             false);
    SET_BOL("21406",    IDX_BOOL_SUPPORT_CFNL,          false);
    SET_INT("21407",    IDX_INT_MEDIA_TYPE,             MEDIA_TYPE_SEPERATE);
    SET_STR("21407",    IDX_STR_GBA_TYPE,               "GBA_ME");
    SET_BOL("21407",    IDX_BOOL_SUPPORT_ADDING_UNPROVISIONED_RULE, false);
    SET_INT("21407",    IDX_INT_XCAP_PORT,              8089);
    SET_INT("21407",    IDX_INT_GBA_PORT,               8088);
    SET_STR("21601",    IDX_STR_BSF_HOST,               "bsf.ims.mnc001.mcc216.pub.3gppnetwork.org");
    SET_BOL("21601",    IDX_BOOL_MEDIA_TAG,             false);
    SET_BOL("21601",    IDX_BOOL_SUPPORT_CFNL,          false);
    SET_BOL("21601",    IDX_BOOL_SUPPORT_PUT_CF_ROOT,   false);
    SET_BOL("21603",    IDX_BOOL_MEDIA_TAG,             false);
    SET_STR("21603",    IDX_STR_BSF_HOST,               "bsf.ims.mnc003.mcc216.pub.3gppnetwork.org");
    SET_INT("21603",    IDX_INT_XCAP_PORT,              8090);
    SET_INT("21603",    IDX_INT_GBA_PORT,               8080);
    SET_BOL("21630",    IDX_BOOL_MEDIA_TAG,             false);
    SET_BOL("21630",    IDX_BOOL_ENABLE_CUSTOM_UA_STR,  true);
    SET_BOL("21630",    IDX_BOOL_SUPPORT_ADDING_UNPROVISIONED_RULE, false);
    SET_BOL("21630",    IDX_BOOL_SUPPORT_PUT_CF_ROOT,   false);
    SET_BOL("21630",    IDX_BOOL_TCP_SESSION_KEEP_ALIVE,false);
    SET_BOL("21670",    IDX_BOOL_MEDIA_TAG,             false);
    SET_BOL("21670",    IDX_BOOL_SET_CFNRC_WITH_CFNL,   true);
    SET_BOL("21670",    IDX_BOOL_XCAP_CACHE,            false);
    SET_STR("21670",    IDX_STR_GBA_TYPE,               "GBA_ME");
	SET_INT("21670",    IDX_INT_URL_ENCODING,           URL_ENCODING_NODE_SELECTOR);
    SET_BOL("21670",    IDX_BOOL_SUPPORT_CFNL,          false);
    SET_BOL("21670",    IDX_BOOL_SUPPORT_PUT_CF_ROOT,   false);
    SET_BOL("21901",    IDX_BOOL_MEDIA_TAG,             false);
    SET_BOL("21901",    IDX_BOOL_ENABLE_CUSTOM_UA_STR,  true);
    SET_BOL("21901",    IDX_BOOL_SUPPORT_ADDING_UNPROVISIONED_RULE, false);
    SET_STR("21910",    IDX_STR_GBA_TYPE,               "GBA_ME");
    SET_BOL("21910",    IDX_BOOL_SUPPORT_ADDING_UNPROVISIONED_RULE, false);
    SET_BOL("22004",    IDX_BOOL_MEDIA_TAG,             false);
    SET_STR("22004",    IDX_STR_XCAP_PROTOCOL,          "https");
    SET_BOL("22005",    IDX_BOOL_MEDIA_TAG,             false);
    SET_BOL("22005",    IDX_BOOL_FWD_NUM_USE_SIP_URI,   true);
    SET_BOL("22201",    IDX_BOOL_MEDIA_TAG,             false);
    SET_STR("22201",    IDX_STR_AUID,                   "mtasxdms/simservs.ngn.etsi.org");
    SET_INT("22201",    IDX_INT_XCAP_PORT,              8080);
    SET_BOL("22201",    IDX_BOOL_SUPPORT_CFNL,          false);
    SET_BOL("22210",    IDX_BOOL_MEDIA_TAG,             false);
    SET_BOL("22210",    IDX_BOOL_SET_CFNRC_WITH_CFNL,   true);
    SET_BOL("22210",    IDX_BOOL_XCAP_CACHE,            false);
    SET_BOL("22243",    IDX_BOOL_MEDIA_TAG,             false);
    SET_STR("22243",    IDX_STR_AUID,                   "mtasxdms/simservs.ngn.etsi.org");
    SET_INT("22243",    IDX_INT_XCAP_PORT,              8080);
    SET_BOL("22248",    IDX_BOOL_MEDIA_TAG,             false);
    SET_STR("22248",    IDX_STR_AUID,                   "mtasxdms/simservs.ngn.etsi.org");
    SET_INT("22248",    IDX_INT_XCAP_PORT,              8080);
    SET_BOL("22288",    IDX_BOOL_MEDIA_TAG,             false);
    SET_BOL("22299",    IDX_BOOL_MEDIA_TAG,             false);
    SET_INT("22601",    IDX_INT_MEDIA_TYPE,             MEDIA_TYPE_SEPERATE);
    SET_BOL("22601",    IDX_BOOL_XCAP_CACHE,            false);
    SET_STR("22601",    IDX_STR_GBA_TYPE,               "GBA_ME");
    SET_INT("22601",    IDX_INT_URL_ENCODING,           URL_ENCODING_NODE_SELECTOR);
    SET_BOL("22601",    IDX_BOOL_SUPPORT_PUT_CF_ROOT,   false);
    SET_BOL("22603",    IDX_BOOL_XCAP_CACHE,            false);
    SET_BOL("22606",    IDX_BOOL_XCAP_CACHE,            false);
    SET_INT("22801",    IDX_INT_XCAP_PORT,              8080);
    SET_INT("22801",    IDX_INT_GBA_PORT,               8081);
    SET_BOL("22801",    IDX_BOOL_SUPPORT_ADDING_UNPROVISIONED_RULE, false);
    SET_BOL("23001",    IDX_BOOL_MEDIA_TAG,             false);
    SET_BOL("23001",    IDX_BOOL_SUPPORT_CFNL,          false);
    SET_BOL("23001",    IDX_BOOL_ENABLE_CUSTOM_UA_STR,  true);
    SET_BOL("23001",    IDX_BOOL_SUPPORT_ADDING_UNPROVISIONED_RULE, false);
    SET_BOL("23001",    IDX_BOOL_SUPPORT_PUT_CF_ROOT,   false);
    SET_INT("23002",    IDX_INT_MEDIA_TYPE,             MEDIA_TYPE_ONLY_AUDIO);
    SET_STR("23002",    IDX_STR_BSF_HOST,               "bsf.ims.mnc002.mcc230.pub.3gppnetwork.org");
    SET_STR("23002",    IDX_STR_BSF_REALM,              "ims.mnc002.mcc230.3gppnetwork.org");
    SET_BOL("23003",    IDX_BOOL_MEDIA_TAG,             false);
    SET_BOL("23003",    IDX_BOOL_SUPPORT_CFNL,          false);
    SET_BOL("23003",    IDX_BOOL_XCAP_CACHE,            false);
    SET_BOL("23003",    IDX_BOOL_FWD_NUM_USE_SIP_URI,   true);
    SET_BOL("23003",    IDX_BOOL_CB_NO_ACTION_ALLOW,    true);
    SET_BOL("23099",    IDX_BOOL_MEDIA_TAG,             false);
    SET_BOL("23099",    IDX_BOOL_SUPPORT_CFNL,          false);
    SET_BOL("23099",    IDX_BOOL_XCAP_CACHE,            false);
    SET_BOL("23102",    IDX_BOOL_MEDIA_TAG,             false);
    SET_BOL("23102",    IDX_BOOL_ENABLE_CUSTOM_UA_STR,  true);
    SET_BOL("23102",    IDX_BOOL_SUPPORT_ADDING_UNPROVISIONED_RULE, false);
    SET_BOL("23104",    IDX_BOOL_XCAP_CACHE,            false);
    SET_BOL("23104",    IDX_BOOL_MEDIA_TAG,             false);
    SET_BOL("23104",    IDX_BOOL_ENABLE_CUSTOM_UA_STR,  true);
    SET_BOL("23104",    IDX_BOOL_SUPPORT_ADDING_UNPROVISIONED_RULE, false);
    SET_BOL("23106",    IDX_BOOL_SUPPORT_ADDING_UNPROVISIONED_RULE, false);
    SET_STR("23106",    IDX_STR_BSF_HOST,               "bsf.ims.mnc006.mcc231.pub.3gppnetwork.org");
    SET_STR("23106",    IDX_STR_BSF_REALM,              "ims.mnc006.mcc231.3gppnetwork.org");
    SET_BOL("23203",    IDX_BOOL_MEDIA_TAG,             false);
    SET_BOL("23203",    IDX_BOOL_XCAP_CACHE,            false);
    SET_BOL("23204",    IDX_BOOL_MEDIA_TAG,             false);
    SET_STR("23204",    IDX_STR_XCAP_PROTOCOL,          "https");
	SET_BOL("23205",    IDX_BOOL_MEDIA_TAG,             false);
    SET_INT("23205",    IDX_INT_URL_ENCODING,           URL_ENCODING_NODE_SELECTOR);
    SET_STR("23205",    IDX_STR_BSF_HOST,               "bsf.ims.mnc005.mcc232.pub.3gppnetwork.org");
	SET_STR("23205",    IDX_STR_RULEID_CFU,             "cfu");
	SET_STR("23205",    IDX_STR_RULEID_CFB,             "cfb");
	SET_STR("23205",    IDX_STR_RULEID_CFNRY,           "cfnr");
	SET_STR("23205",    IDX_STR_RULEID_CFNRC,           "cfnrc");
	SET_STR("23205",    IDX_STR_RULEID_CFNL,            "cfnl");
    SET_BOL("23205",    IDX_BOOL_SUPPORT_PUT_CF_ROOT,   false);
    SET_BOL("23207",    IDX_BOOL_MEDIA_TAG,             false);
    SET_BOL("23207",    IDX_BOOL_XCAP_CACHE,            false);
	SET_BOL("23210",    IDX_BOOL_MEDIA_TAG,             false);
    SET_INT("23210",    IDX_INT_URL_ENCODING,           URL_ENCODING_NODE_SELECTOR);
    SET_STR("23210",    IDX_STR_BSF_HOST,               "bsf.ims.mnc010.mcc232.pub.3gppnetwork.org");
	SET_STR("23210",    IDX_STR_RULEID_CFU,             "cfu");
	SET_STR("23210",    IDX_STR_RULEID_CFB,             "cfb");
	SET_STR("23210",    IDX_STR_RULEID_CFNRY,           "cfnr");
	SET_STR("23210",    IDX_STR_RULEID_CFNRC,           "cfnrc");
	SET_STR("23210",    IDX_STR_RULEID_CFNL,            "cfnl");
    SET_BOL("23210",    IDX_BOOL_SUPPORT_PUT_CF_ROOT,   false);
    SET_BOL("23408",    IDX_BOOL_MEDIA_TAG,             false);
    SET_BOL("23408",    IDX_BOOL_NEED_CHECK_ISIM_INFO,  true);
    SET_BOL("23408",    IDX_BOOL_SUPPORT_ADDING_UNPROVISIONED_RULE, false);
    SET_BOL("23410",    IDX_BOOL_MEDIA_TAG,             false);
    SET_BOL("23410",    IDX_BOOL_SUPPORT_CFNL,          false);
    SET_BOL("23410",    IDX_BOOL_SUPPORT_ADDING_UNPROVISIONED_RULE, false);
    SET_BOL("23415",    IDX_BOOL_MEDIA_TAG,             false);
    SET_BOL("23415",    IDX_BOOL_SET_CFNRC_WITH_CFNL,   true);
    SET_BOL("23415",    IDX_BOOL_XCAP_CACHE,            false);
    SET_BOL("23415",    IDX_BOOL_SUPPORT_ADDING_UNPROVISIONED_RULE, false);
    SET_BOL("23420",    IDX_BOOL_MEDIA_TAG,             false);
    SET_BOL("23430",    IDX_BOOL_MEDIA_TAG,             false);
    SET_BOL("23430",    IDX_BOOL_NEED_CHECK_ISIM_INFO,  true);
    SET_BOL("23430",    IDX_BOOL_SUPPORT_ADDING_UNPROVISIONED_RULE, false);
    SET_BOL("23431",    IDX_BOOL_MEDIA_TAG,             false);
    SET_BOL("23431",    IDX_BOOL_NEED_CHECK_ISIM_INFO,  true);
    SET_BOL("23431",    IDX_BOOL_SUPPORT_ADDING_UNPROVISIONED_RULE, false);
    SET_BOL("23432",    IDX_BOOL_MEDIA_TAG,             false);
    SET_BOL("23432",    IDX_BOOL_NEED_CHECK_ISIM_INFO,  true);
    SET_BOL("23432",    IDX_BOOL_SUPPORT_ADDING_UNPROVISIONED_RULE, false);
    SET_BOL("23433",    IDX_BOOL_MEDIA_TAG,             false);
    SET_BOL("23433",    IDX_BOOL_NEED_CHECK_ISIM_INFO,  true);
    SET_BOL("23433",    IDX_BOOL_SUPPORT_ADDING_UNPROVISIONED_RULE, false);
    SET_BOL("23434",    IDX_BOOL_MEDIA_TAG,             false);
    SET_BOL("23434",    IDX_BOOL_NEED_CHECK_ISIM_INFO,  true);
    SET_BOL("23434",    IDX_BOOL_SUPPORT_ADDING_UNPROVISIONED_RULE, false);
    SET_BOL("23486",    IDX_BOOL_MEDIA_TAG,             false);
    SET_BOL("23486",    IDX_BOOL_NEED_CHECK_ISIM_INFO,  true);
    SET_BOL("23486",    IDX_BOOL_SUPPORT_ADDING_UNPROVISIONED_RULE, false);
    SET_BOL("23494",    IDX_BOOL_MEDIA_TAG,             false);
    SET_STR("23457",    IDX_STR_GBA_TYPE,               "GBA_ME");
    SET_BOL("23501",    IDX_BOOL_MEDIA_TAG,             false);
    SET_BOL("23502",    IDX_BOOL_MEDIA_TAG,             false);
    SET_BOL("23502",    IDX_BOOL_NEED_CHECK_ISIM_INFO,  true);
    SET_BOL("23502",    IDX_BOOL_SUPPORT_ADDING_UNPROVISIONED_RULE, false);
    SET_BOL("23591",    IDX_BOOL_MEDIA_TAG,             false);
    SET_BOL("23591",    IDX_BOOL_SET_CFNRC_WITH_CFNL,   true);
    SET_BOL("23594",    IDX_BOOL_MEDIA_TAG,             false);
    SET_STR("23801",    IDX_STR_GBA_TYPE,               "GBA_ME");
    SET_INT("23801",    IDX_INT_URL_ENCODING,           URL_ENCODING_NODE_SELECTOR);
    SET_BOL("23801",    IDX_BOOL_MEDIA_TAG,             false);
    SET_BOL("23801",    IDX_BOOL_SUPPORT_CFNL,          false);
    SET_INT("23802",    IDX_INT_MEDIA_TYPE,             MEDIA_TYPE_ONLY_AUDIO);
    SET_BOL("23806",    IDX_BOOL_SUPPORT_CFNL,          false);
    SET_BOL("23806",    IDX_BOOL_MEDIA_TAG,             false);
    SET_STR("23810",    IDX_STR_GBA_TYPE,               "GBA_ME");
    SET_INT("23810",    IDX_INT_URL_ENCODING,           URL_ENCODING_NODE_SELECTOR);
    SET_BOL("23810",    IDX_BOOL_MEDIA_TAG,             false);
    SET_BOL("23810",    IDX_BOOL_SUPPORT_CFNL,          false);
    SET_BOL("23820",    IDX_BOOL_MEDIA_TAG,             false);
    SET_BOL("23820",    IDX_BOOL_FWD_NUM_USE_SIP_URI,   true);
    SET_STR("23820",    IDX_STR_GBA_TYPE,               "GBA_ME");
    SET_BOL("23820",    IDX_BOOL_SUPPORT_PUT_CF_ROOT,   false);
    SET_BOL("23820",    IDX_BOOL_SUPPORT_CFNL,          false);
    SET_BOL("23830",    IDX_BOOL_MEDIA_TAG,             false);
    SET_BOL("23830",    IDX_BOOL_FWD_NUM_USE_SIP_URI,   true);
    SET_STR("23830",    IDX_STR_GBA_TYPE,               "GBA_ME");
    SET_BOL("23830",    IDX_BOOL_SUPPORT_PUT_CF_ROOT,   false);
    SET_BOL("23830",    IDX_BOOL_SUPPORT_CFNL,          false);
    SET_INT("23877",    IDX_INT_MEDIA_TYPE,             MEDIA_TYPE_SEPERATE);
    SET_BOL("24001",    IDX_BOOL_MEDIA_TAG,             false);
    SET_BOL("24001",    IDX_BOOL_SUPPORT_CFNL,          false);
    SET_BOL("24002",    IDX_BOOL_SUPPORT_ADDING_UNPROVISIONED_RULE, false);
    SET_BOL("24005",    IDX_BOOL_MEDIA_TAG,             false);
    SET_STR("24099",    IDX_STR_AUID,                   "mtasxdms/simservs.ngn.etsi.org");
    SET_INT("24099",    IDX_INT_XCAP_PORT,              8080);
    SET_INT("24099",    IDX_INT_GBA_PORT,               8088);
    SET_BOL("24099",    IDX_BOOL_NEED_QUOTATION_MARK,   true);
    SET_BOL("24202",    IDX_BOOL_MEDIA_TAG,             false);
    SET_BOL("24202",    IDX_BOOL_SUPPORT_CFNL,          false);
    SET_INT("24405",    IDX_INT_XCAP_PORT,              9002);
    SET_INT("24405",    IDX_INT_GBA_PORT,               9001);
    SET_STR("24405",    IDX_STR_NAF_HOST,               "ap.ims.mnc005.mcc244.pub.3gppnetwork.org");
    SET_INT("24421",    IDX_INT_XCAP_PORT,              9002);
    SET_INT("24421",    IDX_INT_GBA_PORT,               9001);
    SET_STR("24421",    IDX_STR_NAF_HOST,               "ap.ims.mnc005.mcc244.pub.3gppnetwork.org");
    SET_BOL("24412",    IDX_BOOL_MEDIA_TAG,             false);
    SET_BOL("24413",    IDX_BOOL_MEDIA_TAG,             false);
    SET_BOL("24436",    IDX_BOOL_MEDIA_TAG,             false);
    SET_BOL("24491",    IDX_BOOL_MEDIA_TAG,             false);
    SET_BOL("24601",    IDX_BOOL_MEDIA_TAG,             false);
    SET_BOL("24601",    IDX_BOOL_SUPPORT_CFNL,          false);
    SET_BOL("24801",    IDX_BOOL_SET_CFNRC_WITH_CFNL,   true);
    SET_INT("25020",    IDX_INT_XCAP_PORT,              8085);
    SET_INT("25020",    IDX_INT_GBA_PORT,               8080);
    SET_BOL("25020",    IDX_BOOL_SUPPORT_CFNL,          false);
    SET_INT("25020",    IDX_INT_MEDIA_TYPE,             MEDIA_TYPE_ONLY_AUDIO);
    SET_STR("25020",    IDX_STR_BSF_HOST,               "bsf.ims.mnc020.mcc250.pub.3gppnetwork.org");
    SET_STR("25020",    IDX_STR_BSF_URL_PATH,           "/bsf-auth/");
    SET_INT("25028",    IDX_INT_XCAP_PORT,              81);
    SET_BOL("25028",    IDX_BOOL_SUPPORT_CFNL,          false);
    SET_STR("25028",    IDX_STR_BSF_HOST,               "bsf.mnc028.mcc250.pub.3gppnetwork.org");
    SET_STR("25035",    IDX_STR_NAF_HOST,               "xcap.mnc035.mcc250.pub.3gppnetwork.org");
    SET_STR("25035",    IDX_STR_BSF_HOST,               "bsf.ims.mnc035.mcc250.pub.3gppnetwork.org");
    SET_INT("25099",    IDX_INT_XCAP_PORT,              81);
    SET_STR("25099",    IDX_STR_BSF_HOST,               "bsf.mnc099.mcc250.pub.3gppnetwork.org");
    SET_INT("25099",    IDX_INT_MEDIA_TYPE,             MEDIA_TYPE_ONLY_AUDIO);
    SET_BOL("25099",    IDX_BOOL_SUPPORT_CFNL,          false);
    SET_STR("25503",    IDX_STR_XCAP_PROTOCOL,          "https");
    SET_STR("25503",    IDX_STR_GBA_PROTOCOL,           "https");
    SET_STR("25503",    IDX_STR_GBA_TYPE,               "GBA_ME");
    SET_BOL("25503",    IDX_BOOL_MEDIA_TAG,             false);
    SET_INT("25503",    IDX_INT_GBA_PORT,               8080);
    SET_BOL("25503",    IDX_BOOL_SUPPORT_ADDING_UNPROVISIONED_RULE, false);
    SET_STR("25701",    IDX_STR_GBA_TYPE,               "GBA_ME");
    SET_STR("25701",    IDX_STR_BSF_HOST,               "bsf.ims.mnc001.mcc257.pub.3gppnetwork.org");
    SET_INT("25701",    IDX_INT_GBA_PORT,               8080);
    SET_BOL("25701",    IDX_BOOL_SUPPORT_CFNL,          false);
    SET_STR("26001",    IDX_STR_XCAP_PROTOCOL,          "https");
    SET_BOL("26001",    IDX_BOOL_MEDIA_TAG,             false);
    SET_STR("26001",    IDX_STR_GBA_PROTOCOL,           "https");
    SET_BOL("26002",    IDX_BOOL_MEDIA_TAG,             false);
    SET_BOL("26002",    IDX_BOOL_ENABLE_CUSTOM_UA_STR,  true);
    SET_BOL("26002",    IDX_BOOL_SUPPORT_ADDING_UNPROVISIONED_RULE, false);
    SET_BOL("26002",    IDX_BOOL_SUPPORT_PUT_CF_ROOT,   false);
    SET_STR("26006",    IDX_STR_XCAP_PROTOCOL,          "https");
    SET_STR("26006",    IDX_STR_GBA_PROTOCOL,           "https");
    SET_BOL("26006",    IDX_BOOL_SUPPORT_PUT_CF_ROOT,   false);
    SET_BOL("26201",    IDX_BOOL_MEDIA_TAG,             false);
    SET_BOL("26201",    IDX_BOOL_SUPPORT_CFNL,          false);
    SET_BOL("26201",    IDX_BOOL_ENABLE_CUSTOM_UA_STR,  true);
    SET_BOL("26201",    IDX_BOOL_SUPPORT_ADDING_UNPROVISIONED_RULE, false);
    SET_BOL("26201",    IDX_BOOL_SUPPORT_PUT_CF_ROOT,   false);
    SET_BOL("26202",    IDX_BOOL_MEDIA_TAG,             false);
    SET_BOL("26202",    IDX_BOOL_SUPPORT_CFNL,          false);
    SET_BOL("26202",    IDX_BOOL_XCAP_CACHE,            false);
    SET_BOL("26203",    IDX_BOOL_MEDIA_TAG,             false);
    SET_BOL("26204",    IDX_BOOL_MEDIA_TAG,             false);
    SET_BOL("26204",    IDX_BOOL_SUPPORT_CFNL,          false);
    SET_BOL("26204",    IDX_BOOL_XCAP_CACHE,            false);
    SET_BOL("26206",    IDX_BOOL_MEDIA_TAG,             false);
    SET_BOL("26206",    IDX_BOOL_SUPPORT_CFNL,          false);
    SET_BOL("26206",    IDX_BOOL_ENABLE_CUSTOM_UA_STR,  true);
    SET_BOL("26206",    IDX_BOOL_SUPPORT_ADDING_UNPROVISIONED_RULE, false);
    SET_BOL("26206",    IDX_BOOL_SUPPORT_PUT_CF_ROOT,   false);
    SET_BOL("26207",    IDX_BOOL_MEDIA_TAG,             false);
    SET_BOL("26207",    IDX_BOOL_SUPPORT_CFNL,          false);
    SET_BOL("26207",    IDX_BOOL_SUPPORT_ADDING_UNPROVISIONED_RULE, false);
    SET_BOL("26208",    IDX_BOOL_MEDIA_TAG,             false);
    SET_BOL("26208",    IDX_BOOL_SUPPORT_CFNL,          false);
    SET_BOL("26208",    IDX_BOOL_SUPPORT_ADDING_UNPROVISIONED_RULE, false);
    SET_BOL("26209",    IDX_BOOL_MEDIA_TAG,             false);
    SET_BOL("26209",    IDX_BOOL_SUPPORT_CFNL,          false);
    SET_BOL("26209",    IDX_BOOL_XCAP_CACHE,            false);
    SET_BOL("26211",    IDX_BOOL_MEDIA_TAG,             false);
    SET_BOL("26211",    IDX_BOOL_SUPPORT_CFNL,          false);
    SET_BOL("26277",    IDX_BOOL_MEDIA_TAG,             false);
    SET_BOL("26278",    IDX_BOOL_MEDIA_TAG,             false);
    SET_BOL("26278",    IDX_BOOL_XCAP_CACHE,            false);
    SET_BOL("26280",    IDX_BOOL_MEDIA_TAG,             false);                                        // Ericsson IODT lab at Kista
    SET_STR("26280",    IDX_STR_NAF_HOST,               "naf.tcs.ics.se");                             // Ericsson IODT lab at Kista
    SET_STR("26280",    IDX_STR_BSF_HOST,               "bsf.tcs.ics.se");                             // Ericsson IODT lab at Kista
    SET_STR("26280",    IDX_STR_AUID,                   "simservs.ngn.etsi.org");                      // Ericsson IODT lab at Kista
    SET_INT("26280",    IDX_INT_XCAP_PORT,              8080);                                         // Ericsson IODT lab at Kista
    SET_INT("26280",    IDX_INT_GBA_PORT,               10080);                                        // Ericsson IODT lab at Kista
    SET_STR("26299",    IDX_STR_NAF_HOST,               "192.168.23.137");
    SET_STR("26299",    IDX_STR_DIGEST_PWD,             "zte");
    SET_BOL("26801",    IDX_BOOL_MEDIA_TAG,             false);
    SET_BOL("26801",    IDX_BOOL_SUPPORT_CFNL,          false);
    SET_BOL("26801",    IDX_BOOL_XCAP_CACHE,            false);
    SET_BOL("26806",    IDX_BOOL_MEDIA_TAG,             false);
    SET_BOL("26806",    IDX_BOOL_SUPPORT_CFNL,          false);
    SET_STR("26806",    IDX_STR_GBA_TYPE,               "GBA_ME");
    SET_INT("26806",    IDX_INT_XCAP_PORT,              443);
    SET_INT("26806",    IDX_INT_GBA_PORT,               443);
    SET_STR("26806",    IDX_STR_XCAP_PROTOCOL,          "https");
    SET_STR("26806",    IDX_STR_GBA_PROTOCOL,           "https");
    SET_BOL("26806",    IDX_BOOL_SUPPORT_ADDING_UNPROVISIONED_RULE, false);
    SET_BOL("26889",    IDX_BOOL_MEDIA_TAG,             false);
    SET_BOL("26889",    IDX_BOOL_SUPPORT_CFNL,          false);
    SET_BOL("26889",    IDX_BOOL_XCAP_CACHE,            false);
    SET_BOL("27201",    IDX_BOOL_MEDIA_TAG,             false);
    SET_BOL("27201",    IDX_BOOL_SUPPORT_CFNL,          false);
    SET_BOL("27201",    IDX_BOOL_XCAP_CACHE,            false);
    SET_INT("27201",    IDX_INT_XCAP_PORT,              443);
    SET_INT("27201",    IDX_INT_GBA_PORT,               443);
    SET_STR("27201",    IDX_STR_XCAP_PROTOCOL,          "https");
    SET_STR("27201",    IDX_STR_GBA_PROTOCOL,           "https");
    SET_BOL("27402",    IDX_BOOL_MEDIA_TAG,             false);
    SET_BOL("27402",    IDX_BOOL_SET_CFNRC_WITH_CFNL,   true);
    SET_BOL("27402",    IDX_BOOL_XCAP_CACHE,            false);
    SET_BOL("27403",    IDX_BOOL_MEDIA_TAG,             false);
    SET_BOL("27403",    IDX_BOOL_SET_CFNRC_WITH_CFNL,   true);
    SET_BOL("27403",    IDX_BOOL_XCAP_CACHE,            false);
    SET_BOL("27601",    IDX_BOOL_XCAP_CACHE,            false);
    SET_BOL("27801",    IDX_BOOL_MEDIA_TAG,             false);
    SET_BOL("27801",    IDX_BOOL_SET_CFNRC_WITH_CFNL,   true);
    SET_BOL("27801",    IDX_BOOL_XCAP_CACHE,            false);
    SET_STR("28401",    IDX_STR_GBA_TYPE,               "GBA_ME");
    SET_BOL("28401",    IDX_BOOL_SUPPORT_ADDING_UNPROVISIONED_RULE, false);
    SET_INT("28403",    IDX_INT_XCAP_PORT,              8090);
    SET_INT("28403",    IDX_INT_GBA_PORT,               8080);
    SET_STR("28403",    IDX_STR_BSF_HOST,               "bsf.ims.mnc003.mcc284.pub.3gppnetwork.org");
    SET_INT("28403",    IDX_INT_MEDIA_TYPE,             MEDIA_TYPE_ONLY_AUDIO);
    SET_BOL("28403",    IDX_BOOL_SUPPORT_CFNL,          false);
	SET_BOL("28403",    IDX_BOOL_SUPPORT_ADDING_NAMESPACE, false);
    SET_BOL("28602",    IDX_BOOL_MEDIA_TAG,             false);
    SET_BOL("28602",    IDX_BOOL_SET_CFNRC_WITH_CFNL,   true);
    SET_STR("29340",    IDX_STR_BSF_HOST,               "bsf.ims.mnc040.mcc293.pub.3gppnetwork.org");
    SET_STR("29340",    IDX_STR_BSF_REALM,              "ims.mnc040.mcc293.3gppnetwork.org");
    SET_STR("29340",    IDX_STR_GBA_TYPE,               "GBA_ME");
    SET_BOL("29340",    IDX_BOOL_MEDIA_TAG,             false);
    SET_BOL("29341",    IDX_BOOL_MEDIA_TAG,             false);
    SET_STR("29370",    IDX_STR_GBA_TYPE,               "GBA_ME");
    SET_INT("29403",    IDX_INT_GBA_PORT,               8080);
    SET_STR("29403",    IDX_STR_GBA_TYPE,               "GBA_ME");
    SET_INT("29501",    IDX_INT_XCAP_PORT,              8080);
    SET_INT("29501",    IDX_INT_GBA_PORT,               8081);
    SET_BOL("29501",    IDX_BOOL_SUPPORT_ADDING_UNPROVISIONED_RULE, false);
    SET_BOL("302220",   IDX_BOOL_GZIP_SUPPORT,          true);
    SET_STR("302220",   IDX_STR_RULEID_CFU,             "cfu");
    SET_STR("302220",   IDX_STR_RULEID_CFB,             "cfb");
    SET_STR("302220",   IDX_STR_RULEID_CFNRC,           "cfnrc");
    SET_STR("302220",   IDX_STR_RULEID_CFNRY,           "cfnry");
    SET_INT("302220",   IDX_INT_XCAP_PORT,              8090);
    SET_INT("302220",   IDX_INT_GBA_PORT,               8080);
    SET_BOL("302220",   IDX_BOOL_SUPPORT_CFNL,          false);
    SET_BOL("302220",   IDX_BOOL_MEDIA_TAG,             false);
    SET_BOL("302221",   IDX_BOOL_GZIP_SUPPORT,          true);
    SET_STR("302221",   IDX_STR_RULEID_CFU,             "cfu");
    SET_STR("302221",   IDX_STR_RULEID_CFB,             "cfb");
    SET_STR("302221",   IDX_STR_RULEID_CFNRC,           "cfnrc");
    SET_STR("302221",   IDX_STR_RULEID_CFNRY,           "cfnry");
    SET_INT("302221",   IDX_INT_XCAP_PORT,              8090);
    SET_INT("302221",   IDX_INT_GBA_PORT,               8080);
    SET_BOL("302221",   IDX_BOOL_SUPPORT_CFNL,          false);
    SET_BOL("302221",   IDX_BOOL_MEDIA_TAG,             false);
    SET_BOL("302222",   IDX_BOOL_GZIP_SUPPORT,          true);
    SET_STR("302222",   IDX_STR_RULEID_CFU,             "cfu");
    SET_STR("302222",   IDX_STR_RULEID_CFB,             "cfb");
    SET_STR("302222",   IDX_STR_RULEID_CFNRC,           "cfnrc");
    SET_STR("302222",   IDX_STR_RULEID_CFNRY,           "cfnry");
    SET_INT("302222",   IDX_INT_XCAP_PORT,              8090);
    SET_INT("302222",   IDX_INT_GBA_PORT,               8080);
    SET_BOL("302222",   IDX_BOOL_SUPPORT_CFNL,          false);
    SET_BOL("302222",   IDX_BOOL_MEDIA_TAG,             false);
    SET_STR("302370",   IDX_STR_BSF_HOST,               "bsf.ims.mnc370.mcc302.pub.3gppnetwork.org");
    SET_BOL("302370",   IDX_BOOL_MEDIA_TAG,             false);
    SET_BOL("302370",   IDX_BOOL_SUPPORT_CFNL,          false);
    SET_BOL("302490",   IDX_BOOL_SUPPORT_CFNL,          false);
    SET_STR("302490",   IDX_STR_AUID,                   "MYSERVICE/simservs.ngn.etsi.org");
	SET_INT("302490",   IDX_INT_MEDIA_TYPE,             MEDIA_TYPE_ONLY_AUDIO);
	SET_BOL("302500",   IDX_BOOL_MEDIA_TAG,             false);
	SET_STR("302500",   IDX_STR_GBA_TYPE,               "GBA_ME");
	SET_STR("302500",   IDX_STR_NAF_HOST,               "xcap.ims.mnc500.mcc302.pub.3gppnetwork.org");
	SET_STR("302500",   IDX_STR_BSF_HOST,               "bsf.ims.mnc500.mcc302.pub.3gppnetwork.org");
	SET_INT("302500",   IDX_INT_XCAP_PORT,              8090);
	SET_BOL("302500",   IDX_BOOL_SUPPORT_CFNL,          false);
	SET_INT("302500",   IDX_INT_GBA_PORT,               8080);
    SET_STR("302610",   IDX_STR_XCAP_PROTOCOL,          "https");
    SET_STR("302610",   IDX_STR_GBA_PROTOCOL,           "https");
    SET_STR("302610",   IDX_STR_NAF_HOST,               "naf.ims.bell.ca");
    SET_STR("302610",   IDX_STR_BSF_HOST,               "bsf.ims.bell.ca");
    SET_STR("302610",   IDX_STR_AUID,                   "MyService/simservs.ngn.etsi.org");
    SET_BOL("302610",   IDX_BOOL_SUPPORT_CFNL,          false);
    SET_STR("302630",   IDX_STR_XCAP_PROTOCOL,          "https");
    SET_STR("302630",   IDX_STR_GBA_PROTOCOL,           "https");
    SET_STR("302630",   IDX_STR_NAF_HOST,               "naf.ims.bell.ca");
    SET_STR("302630",   IDX_STR_BSF_HOST,               "bsf.ims.bell.ca");
    SET_STR("302630",   IDX_STR_AUID,                   "MyService/simservs.ngn.etsi.org");
    SET_BOL("302630",   IDX_BOOL_SUPPORT_CFNL,          false);
    SET_STR("302640",   IDX_STR_XCAP_PROTOCOL,          "https");
    SET_STR("302640",   IDX_STR_GBA_PROTOCOL,           "https");
    SET_STR("302640",   IDX_STR_NAF_HOST,               "naf.ims.bell.ca");
    SET_STR("302640",   IDX_STR_BSF_HOST,               "bsf.ims.bell.ca");
    SET_STR("302640",   IDX_STR_AUID,                   "MyService/simservs.ngn.etsi.org");
    SET_BOL("302640",   IDX_BOOL_SUPPORT_CFNL,          false);
    SET_BOL("302653",   IDX_BOOL_GZIP_SUPPORT,          true);
    SET_STR("302653",   IDX_STR_RULEID_CFU,             "cfu");
    SET_STR("302653",   IDX_STR_RULEID_CFB,             "cfb");
    SET_STR("302653",   IDX_STR_RULEID_CFNRC,           "cfnrc");
    SET_STR("302653",   IDX_STR_RULEID_CFNRY,           "cfnry");
    SET_STR("302690",   IDX_STR_XCAP_PROTOCOL,          "https");
    SET_STR("302690",   IDX_STR_GBA_PROTOCOL,           "https");
    SET_STR("302690",   IDX_STR_NAF_HOST,               "naf.ims.bell.ca");
    SET_STR("302690",   IDX_STR_BSF_HOST,               "bsf.ims.bell.ca");
    SET_STR("302690",   IDX_STR_AUID,                   "MyService/simservs.ngn.etsi.org");
    SET_BOL("302690",   IDX_BOOL_SUPPORT_CFNL,          false);
    SET_STR("302720",   IDX_STR_BSF_HOST,               "bsf.ims.mnc720.mcc302.pub.3gppnetwork.org");
    SET_BOL("302720",   IDX_BOOL_MEDIA_TAG,             false);
    SET_BOL("302720",   IDX_BOOL_SUPPORT_CFNL,          false);
    SET_BOL("310030",   IDX_BOOL_MEDIA_TAG,             false);
    SET_BOL("310030",   IDX_BOOL_SET_CFNRC_WITH_CFNL,   true);
    SET_BOL("310030",   IDX_BOOL_USE_FIRST_XUI_ELEMENT, true);
    SET_BOL("310030",   IDX_BOOL_USE_SAVED_XUI,         true);
    SET_TEST_SIM_BOL("310030",   IDX_BOOL_XCAP_CACHE,   false);
	SET_BOL("310030",   IDX_BOOL_SUPPORT_PUT_CF_ROOT,   false);
	SET_BOL("310030",   IDX_BOOL_SUPPORT_DISABLE_BY_COND,         true);
    SET_BOL("310070",   IDX_BOOL_MEDIA_TAG,             false);
    SET_BOL("310070",   IDX_BOOL_SET_CFNRC_WITH_CFNL,   true);
    SET_BOL("310070",   IDX_BOOL_USE_FIRST_XUI_ELEMENT, true);
    SET_BOL("310070",   IDX_BOOL_USE_SAVED_XUI,         true);
    SET_TEST_SIM_BOL("310070",   IDX_BOOL_XCAP_CACHE,   false);
	SET_BOL("310070",   IDX_BOOL_SUPPORT_PUT_CF_ROOT,   false);
	SET_BOL("310070",   IDX_BOOL_SUPPORT_DISABLE_BY_COND,         true);
    SET_BOL("310090",   IDX_BOOL_MEDIA_TAG,             false);
    SET_BOL("310090",   IDX_BOOL_SET_CFNRC_WITH_CFNL,   true);
    SET_BOL("310090",   IDX_BOOL_USE_FIRST_XUI_ELEMENT, true);
    SET_BOL("310090",   IDX_BOOL_USE_SAVED_XUI,         true);
    SET_TEST_SIM_BOL("310090",   IDX_BOOL_XCAP_CACHE,   false);
	SET_BOL("310090",   IDX_BOOL_SUPPORT_PUT_CF_ROOT,   false);
	SET_BOL("310090",   IDX_BOOL_SUPPORT_DISABLE_BY_COND,         true);
    SET_BOL("310150",   IDX_BOOL_MEDIA_TAG,             false);
    SET_BOL("310150",   IDX_BOOL_SET_CFNRC_WITH_CFNL,   true);
    SET_BOL("310150",   IDX_BOOL_USE_FIRST_XUI_ELEMENT, true);
    SET_BOL("310150",   IDX_BOOL_USE_SAVED_XUI,         true);
    SET_TEST_SIM_BOL("310150",   IDX_BOOL_XCAP_CACHE,   false);
    SET_BOL("310160",   IDX_BOOL_MEDIA_TAG,             false);
    SET_STR("310160",   IDX_STR_XCAP_PROTOCOL,          "https");
    SET_STR("310160",   IDX_STR_GBA_PROTOCOL,           "https");
    SET_STR("310160",   IDX_STR_IMEI_HEADER,            "X-TMUS-IMEI");
    SET_BOL("310160",   IDX_BOOL_GZIP_SUPPORT,          true);
    SET_BOL("310160",   IDX_BOOL_SUPPORT_ADDING_UNPROVISIONED_RULE, false);
    SET_BOL("310160",   IDX_BOOL_ENABLE_CUSTOM_UA_STR,  true);
    SET_STR("310160",   IDX_STR_UA_PREFIX,              "T-Mobile VoLTE-RCS-ePDG-IR94-RTT-ussd");
    SET_STR("310160",   IDX_STR_UA_DEFAULT,             "");
    SET_BOL("310170",   IDX_BOOL_MEDIA_TAG,             false);
    SET_BOL("310170",   IDX_BOOL_SET_CFNRC_WITH_CFNL,   true);
    SET_BOL("310170",   IDX_BOOL_USE_FIRST_XUI_ELEMENT, true);
    SET_BOL("310170",   IDX_BOOL_USE_SAVED_XUI,         true);
    SET_TEST_SIM_BOL("310170",   IDX_BOOL_XCAP_CACHE,   false);
	SET_BOL("310170",   IDX_BOOL_SUPPORT_PUT_CF_ROOT,   false);
	SET_BOL("310170",   IDX_BOOL_SUPPORT_DISABLE_BY_COND,         true);
    SET_BOL("310200",   IDX_BOOL_MEDIA_TAG,             false);
    SET_STR("310200",   IDX_STR_XCAP_PROTOCOL,          "https");
    SET_STR("310200",   IDX_STR_GBA_PROTOCOL,           "https");
    SET_STR("310200",   IDX_STR_IMEI_HEADER,            "X-TMUS-IMEI");
    SET_BOL("310200",   IDX_BOOL_GZIP_SUPPORT,          true);
    SET_BOL("310200",   IDX_BOOL_SUPPORT_ADDING_UNPROVISIONED_RULE, false);
    SET_BOL("310200",   IDX_BOOL_ENABLE_CUSTOM_UA_STR,  true);
    SET_STR("310200",   IDX_STR_UA_PREFIX,              "T-Mobile VoLTE-RCS-ePDG-IR94-RTT-ussd");
    SET_STR("310200",   IDX_STR_UA_DEFAULT,             "");
    SET_BOL("310210",   IDX_BOOL_MEDIA_TAG,             false);
    SET_STR("310210",   IDX_STR_NAF_HOST,               "xcap.msg.lab.t-mobile.com");
    SET_STR("310210",   IDX_STR_BSF_HOST,               "bsf.msg.lab.t-mobile.com");
    SET_STR("310210",   IDX_STR_IMEI_HEADER,            "X-TMUS-IMEI");
    SET_INT("310210",   IDX_INT_GBA_PORT,               8080);
    SET_BOL("310210",   IDX_BOOL_SUPPORT_ADDING_UNPROVISIONED_RULE, false);
    SET_BOL("310210",   IDX_BOOL_ENABLE_CUSTOM_UA_STR,  true);
    SET_STR("310210",   IDX_STR_UA_PREFIX,              "T-Mobile VoLTE-RCS-ePDG-IR94-RTT-ussd");
    SET_STR("310210",   IDX_STR_UA_DEFAULT,             "");
    SET_TEST_SIM_BOL("310210",   IDX_BOOL_XCAP_CACHE,             false);
    SET_TEST_SIM_BOL("310210",   IDX_BOOL_SUPPORT_PUT_CF_ROOT,    false);
    SET_TEST_SIM_STR("310210",   IDX_STR_GBA_TYPE,                "GBA_ME");
    SET_BOL("310220",   IDX_BOOL_MEDIA_TAG,             false);
    SET_STR("310220",   IDX_STR_XCAP_PROTOCOL,          "https");
    SET_STR("310220",   IDX_STR_GBA_PROTOCOL,           "https");
    SET_STR("310220",   IDX_STR_IMEI_HEADER,            "X-TMUS-IMEI");
    SET_BOL("310220",   IDX_BOOL_GZIP_SUPPORT,          true);
    SET_BOL("310220",   IDX_BOOL_SUPPORT_ADDING_UNPROVISIONED_RULE, false);
    SET_BOL("310220",   IDX_BOOL_ENABLE_CUSTOM_UA_STR,  true);
    SET_STR("310220",   IDX_STR_UA_PREFIX,              "T-Mobile VoLTE-RCS-ePDG-IR94-RTT-ussd");
    SET_STR("310220",   IDX_STR_UA_DEFAULT,             "");
    SET_BOL("310230",   IDX_BOOL_MEDIA_TAG,             false);
    SET_STR("310230",   IDX_STR_XCAP_PROTOCOL,          "https");
    SET_STR("310230",   IDX_STR_GBA_PROTOCOL,           "https");
    SET_STR("310230",   IDX_STR_IMEI_HEADER,            "X-TMUS-IMEI");
    SET_BOL("310230",   IDX_BOOL_GZIP_SUPPORT,          true);
    SET_BOL("310230",   IDX_BOOL_SUPPORT_ADDING_UNPROVISIONED_RULE, false);
    SET_BOL("310230",   IDX_BOOL_ENABLE_CUSTOM_UA_STR,  true);
    SET_STR("310230",   IDX_STR_UA_PREFIX,              "T-Mobile VoLTE-RCS-ePDG-IR94-RTT-ussd");
    SET_STR("310230",   IDX_STR_UA_DEFAULT,             "");
    SET_BOL("310240",   IDX_BOOL_MEDIA_TAG,             false);
    SET_STR("310240",   IDX_STR_XCAP_PROTOCOL,          "https");
    SET_STR("310240",   IDX_STR_GBA_PROTOCOL,           "https");
    SET_STR("310240",   IDX_STR_IMEI_HEADER,            "X-TMUS-IMEI");
    SET_BOL("310240",   IDX_BOOL_GZIP_SUPPORT,          true);
    SET_BOL("310240",   IDX_BOOL_SUPPORT_ADDING_UNPROVISIONED_RULE, false);
    SET_BOL("310240",   IDX_BOOL_ENABLE_CUSTOM_UA_STR,  true);
    SET_STR("310240",   IDX_STR_UA_PREFIX,              "T-Mobile VoLTE-RCS-ePDG-IR94-RTT-ussd");
    SET_STR("310240",   IDX_STR_UA_DEFAULT,             "");
    SET_BOL("310250",   IDX_BOOL_MEDIA_TAG,             false);
    SET_STR("310250",   IDX_STR_XCAP_PROTOCOL,          "https");
    SET_STR("310250",   IDX_STR_GBA_PROTOCOL,           "https");
    SET_STR("310250",   IDX_STR_IMEI_HEADER,            "X-TMUS-IMEI");
    SET_BOL("310250",   IDX_BOOL_GZIP_SUPPORT,          true);
    SET_BOL("310250",   IDX_BOOL_SUPPORT_ADDING_UNPROVISIONED_RULE, false);
    SET_BOL("310250",   IDX_BOOL_ENABLE_CUSTOM_UA_STR,  true);
    SET_STR("310250",   IDX_STR_UA_PREFIX,              "T-Mobile VoLTE-RCS-ePDG-IR94-RTT-ussd");
    SET_STR("310250",   IDX_STR_UA_DEFAULT,             "");
    SET_BOL("310260",   IDX_BOOL_MEDIA_TAG,             false);
    SET_STR("310260",   IDX_STR_XCAP_PROTOCOL,          "https");
    SET_STR("310260",   IDX_STR_GBA_PROTOCOL,           "https");
    SET_STR("310260",   IDX_STR_IMEI_HEADER,            "X-TMUS-IMEI");
    SET_BOL("310260",   IDX_BOOL_GZIP_SUPPORT,          true);
    SET_BOL("310260",   IDX_BOOL_SUPPORT_ADDING_UNPROVISIONED_RULE, false);
    SET_BOL("310260",   IDX_BOOL_ENABLE_CUSTOM_UA_STR,  true);
    SET_STR("310260",   IDX_STR_UA_PREFIX,              "T-Mobile VoLTE-RCS-ePDG-IR94-RTT-ussd");
    SET_STR("310260",   IDX_STR_UA_DEFAULT,             "");
    SET_TEST_SIM_BOL("310260",   IDX_BOOL_SSL_TRUST,    true);
    SET_BOL("310270",   IDX_BOOL_MEDIA_TAG,             false);
    SET_STR("310270",   IDX_STR_XCAP_PROTOCOL,          "https");
    SET_STR("310270",   IDX_STR_GBA_PROTOCOL,           "https");
    SET_STR("310270",   IDX_STR_IMEI_HEADER,            "X-TMUS-IMEI");
    SET_BOL("310270",   IDX_BOOL_GZIP_SUPPORT,          true);
    SET_BOL("310270",   IDX_BOOL_SUPPORT_ADDING_UNPROVISIONED_RULE, false);
    SET_BOL("310270",   IDX_BOOL_ENABLE_CUSTOM_UA_STR,  true);
    SET_STR("310270",   IDX_STR_UA_PREFIX,              "T-Mobile VoLTE-RCS-ePDG-IR94-RTT-ussd");
    SET_STR("310270",   IDX_STR_UA_DEFAULT,             "");
    SET_BOL("310280",   IDX_BOOL_MEDIA_TAG,             false);
    SET_BOL("310280",   IDX_BOOL_SET_CFNRC_WITH_CFNL,   true);
    SET_BOL("310280",   IDX_BOOL_USE_FIRST_XUI_ELEMENT, true);
    SET_BOL("310280",   IDX_BOOL_USE_SAVED_XUI,         true);
    SET_TEST_SIM_BOL("310280",   IDX_BOOL_XCAP_CACHE,   false);
	SET_BOL("310280",   IDX_BOOL_SUPPORT_PUT_CF_ROOT,   false);
	SET_BOL("310280",   IDX_BOOL_SUPPORT_DISABLE_BY_COND,         true);
    SET_BOL("310300",   IDX_BOOL_MEDIA_TAG,             false);
    SET_STR("310300",   IDX_STR_XCAP_PROTOCOL,          "https");
    SET_STR("310300",   IDX_STR_GBA_PROTOCOL,           "https");
    SET_STR("310300",   IDX_STR_IMEI_HEADER,            "X-TMUS-IMEI");
    SET_BOL("310300",   IDX_BOOL_GZIP_SUPPORT,          true);
    SET_BOL("310300",   IDX_BOOL_SUPPORT_ADDING_UNPROVISIONED_RULE, false);
    SET_BOL("310300",   IDX_BOOL_ENABLE_CUSTOM_UA_STR,  true);
    SET_STR("310300",   IDX_STR_UA_PREFIX,              "T-Mobile VoLTE-RCS-ePDG-IR94-RTT-ussd");
    SET_STR("310300",   IDX_STR_UA_DEFAULT,             "");
    SET_BOL("310310",   IDX_BOOL_MEDIA_TAG,             false);
    SET_STR("310310",   IDX_STR_XCAP_PROTOCOL,          "https");
    SET_STR("310310",   IDX_STR_GBA_PROTOCOL,           "https");
    SET_STR("310310",   IDX_STR_IMEI_HEADER,            "X-TMUS-IMEI");
    SET_BOL("310310",   IDX_BOOL_GZIP_SUPPORT,          true);
    SET_BOL("310310",   IDX_BOOL_SUPPORT_ADDING_UNPROVISIONED_RULE, false);
    SET_BOL("310310",   IDX_BOOL_ENABLE_CUSTOM_UA_STR,  true);
    SET_STR("310310",   IDX_STR_UA_PREFIX,              "T-Mobile VoLTE-RCS-ePDG-IR94-RTT-ussd");
    SET_STR("310310",   IDX_STR_UA_DEFAULT,             "");
    SET_TEST_SIM_BOL("310310",   IDX_BOOL_SSL_TRUST,              true);
    SET_TEST_SIM_BOL("310310",   IDX_BOOL_CLEAR_CACHE_AFTER_PUT,  false);
    SET_STR("310332",   IDX_STR_NAF_HOST,               "xcap.ims1.iot-dallas.nsn-rdnet.net");
    SET_INT("310332",   IDX_INT_XCAP_PORT,              8090);
    SET_BOL("310380",   IDX_BOOL_MEDIA_TAG,             false);
    SET_BOL("310380",   IDX_BOOL_SET_CFNRC_WITH_CFNL,   true);
    SET_BOL("310380",   IDX_BOOL_USE_FIRST_XUI_ELEMENT, true);
    SET_BOL("310380",   IDX_BOOL_USE_SAVED_XUI,         true);
    SET_TEST_SIM_BOL("310380",   IDX_BOOL_XCAP_CACHE,   false);
	SET_BOL("310380",   IDX_BOOL_SUPPORT_PUT_CF_ROOT,   false);
	SET_BOL("310380",   IDX_BOOL_SUPPORT_DISABLE_BY_COND,         true);
    SET_BOL("310410",   IDX_BOOL_MEDIA_TAG,             false);
    SET_BOL("310410",   IDX_BOOL_SET_CFNRC_WITH_CFNL,   true);
    SET_BOL("310410",   IDX_BOOL_USE_FIRST_XUI_ELEMENT, true);
    SET_BOL("310410",   IDX_BOOL_USE_SAVED_XUI,         true);
    SET_TEST_SIM_BOL("310410",   IDX_BOOL_XCAP_CACHE,   false);
	SET_BOL("310410",   IDX_BOOL_SUPPORT_PUT_CF_ROOT,   false);
	SET_BOL("310410",   IDX_BOOL_SUPPORT_DISABLE_BY_COND,         true);
    SET_BOL("310490",   IDX_BOOL_MEDIA_TAG,             false);
    SET_STR("310490",   IDX_STR_XCAP_PROTOCOL,          "https");
    SET_STR("310490",   IDX_STR_GBA_PROTOCOL,           "https");
    SET_STR("310490",   IDX_STR_IMEI_HEADER,            "X-TMUS-IMEI");
    SET_BOL("310490",   IDX_BOOL_GZIP_SUPPORT,          true);
    SET_BOL("310490",   IDX_BOOL_SUPPORT_ADDING_UNPROVISIONED_RULE, false);
    SET_BOL("310490",   IDX_BOOL_ENABLE_CUSTOM_UA_STR,  true);
    SET_STR("310490",   IDX_STR_UA_PREFIX,              "T-Mobile VoLTE-RCS-ePDG-IR94-RTT-ussd");
    SET_STR("310490",   IDX_STR_UA_DEFAULT,             "");
    SET_BOL("310530",   IDX_BOOL_MEDIA_TAG,             false);
    SET_STR("310530",   IDX_STR_XCAP_PROTOCOL,          "https");
    SET_STR("310530",   IDX_STR_GBA_PROTOCOL,           "https");
    SET_STR("310530",   IDX_STR_IMEI_HEADER,            "X-TMUS-IMEI");
    SET_BOL("310530",   IDX_BOOL_GZIP_SUPPORT,          true);
    SET_BOL("310530",   IDX_BOOL_SUPPORT_ADDING_UNPROVISIONED_RULE, false);
    SET_BOL("310530",   IDX_BOOL_ENABLE_CUSTOM_UA_STR,  true);
    SET_STR("310530",   IDX_STR_UA_PREFIX,              "T-Mobile VoLTE-RCS-ePDG-IR94-RTT-ussd");
    SET_STR("310530",   IDX_STR_UA_DEFAULT,             "");
    SET_BOL("310560",   IDX_BOOL_MEDIA_TAG,             false);
    SET_BOL("310560",   IDX_BOOL_SET_CFNRC_WITH_CFNL,   true);
    SET_BOL("310560",   IDX_BOOL_USE_FIRST_XUI_ELEMENT, true);
    SET_BOL("310560",   IDX_BOOL_USE_SAVED_XUI,         true);
    SET_TEST_SIM_BOL("310560",   IDX_BOOL_XCAP_CACHE,   false);
	SET_BOL("310560",   IDX_BOOL_SUPPORT_PUT_CF_ROOT,   false);
	SET_BOL("310560",   IDX_BOOL_SUPPORT_DISABLE_BY_COND,         true);
    SET_BOL("310590",   IDX_BOOL_MEDIA_TAG,             false);
    SET_STR("310590",   IDX_STR_XCAP_PROTOCOL,          "https");
    SET_STR("310590",   IDX_STR_GBA_PROTOCOL,           "https");
    SET_STR("310590",   IDX_STR_IMEI_HEADER,            "X-TMUS-IMEI");
    SET_BOL("310590",   IDX_BOOL_GZIP_SUPPORT,          true);
    SET_BOL("310590",   IDX_BOOL_SUPPORT_ADDING_UNPROVISIONED_RULE, false);
    SET_BOL("310590",   IDX_BOOL_ENABLE_CUSTOM_UA_STR,  true);
    SET_STR("310590",   IDX_STR_UA_PREFIX,              "T-Mobile VoLTE-RCS-ePDG-IR94-RTT-ussd");
    SET_STR("310590",   IDX_STR_UA_DEFAULT,             "");
    SET_BOL("310640",   IDX_BOOL_MEDIA_TAG,             false);
    SET_STR("310640",   IDX_STR_XCAP_PROTOCOL,          "https");
    SET_STR("310640",   IDX_STR_GBA_PROTOCOL,           "https");
    SET_STR("310640",   IDX_STR_IMEI_HEADER,            "X-TMUS-IMEI");
    SET_BOL("310640",   IDX_BOOL_GZIP_SUPPORT,          true);
    SET_BOL("310640",   IDX_BOOL_SUPPORT_ADDING_UNPROVISIONED_RULE, false);
    SET_BOL("310640",   IDX_BOOL_ENABLE_CUSTOM_UA_STR,  true);
    SET_STR("310640",   IDX_STR_UA_PREFIX,              "T-Mobile VoLTE-RCS-ePDG-IR94-RTT-ussd");
    SET_STR("310640",   IDX_STR_UA_DEFAULT,             "");
    SET_BOL("310660",   IDX_BOOL_MEDIA_TAG,             false);
    SET_STR("310660",   IDX_STR_XCAP_PROTOCOL,          "https");
    SET_STR("310660",   IDX_STR_GBA_PROTOCOL,           "https");
    SET_STR("310660",   IDX_STR_IMEI_HEADER,            "X-TMUS-IMEI");
    SET_BOL("310660",   IDX_BOOL_GZIP_SUPPORT,          true);
    SET_BOL("310660",   IDX_BOOL_SUPPORT_ADDING_UNPROVISIONED_RULE, false);
    SET_BOL("310660",   IDX_BOOL_ENABLE_CUSTOM_UA_STR,  true);
    SET_STR("310660",   IDX_STR_UA_PREFIX,              "T-Mobile VoLTE-RCS-ePDG-IR94-RTT-ussd");
    SET_STR("310660",   IDX_STR_UA_DEFAULT,             "");
    SET_BOL("310680",   IDX_BOOL_MEDIA_TAG,             false);
    SET_BOL("310680",   IDX_BOOL_SET_CFNRC_WITH_CFNL,   true);
    SET_BOL("310680",   IDX_BOOL_USE_FIRST_XUI_ELEMENT, true);
    SET_BOL("310680",   IDX_BOOL_USE_SAVED_XUI,         true);
    SET_TEST_SIM_BOL("310680",   IDX_BOOL_XCAP_CACHE,   false);
	SET_BOL("310680",   IDX_BOOL_SUPPORT_PUT_CF_ROOT,   false);
	SET_BOL("310680",   IDX_BOOL_SUPPORT_DISABLE_BY_COND,         true);
    SET_BOL("310800",   IDX_BOOL_MEDIA_TAG,             false);
    SET_STR("310800",   IDX_STR_XCAP_PROTOCOL,          "https");
    SET_STR("310800",   IDX_STR_GBA_PROTOCOL,           "https");
    SET_STR("310800",   IDX_STR_IMEI_HEADER,            "X-TMUS-IMEI");
    SET_BOL("310800",   IDX_BOOL_GZIP_SUPPORT,          true);
    SET_BOL("310800",   IDX_BOOL_SUPPORT_ADDING_UNPROVISIONED_RULE, false);
    SET_BOL("310800",   IDX_BOOL_ENABLE_CUSTOM_UA_STR,  true);
    SET_STR("310800",   IDX_STR_UA_PREFIX,              "T-Mobile VoLTE-RCS-ePDG-IR94-RTT-ussd");
    SET_STR("310800",   IDX_STR_UA_DEFAULT,             "");
    SET_BOL("310950",   IDX_BOOL_MEDIA_TAG,             false);
    SET_BOL("310950",   IDX_BOOL_SET_CFNRC_WITH_CFNL,   true);
    SET_BOL("310950",   IDX_BOOL_USE_FIRST_XUI_ELEMENT, true);
    SET_BOL("310950",   IDX_BOOL_USE_SAVED_XUI,         true);
    SET_TEST_SIM_BOL("310950",   IDX_BOOL_XCAP_CACHE,   false);
	SET_BOL("310950",   IDX_BOOL_SUPPORT_PUT_CF_ROOT,   false);
	SET_BOL("310950",   IDX_BOOL_SUPPORT_DISABLE_BY_COND,         true);
    SET_BOL("311180",   IDX_BOOL_MEDIA_TAG,             false);
    SET_BOL("311180",   IDX_BOOL_SET_CFNRC_WITH_CFNL,   true);
    SET_BOL("311180",   IDX_BOOL_USE_FIRST_XUI_ELEMENT, true);
    SET_BOL("311180",   IDX_BOOL_USE_SAVED_XUI,         true);
    SET_TEST_SIM_BOL("311180",   IDX_BOOL_XCAP_CACHE,   false);
	SET_BOL("311180",   IDX_BOOL_SUPPORT_PUT_CF_ROOT,   false);
	SET_BOL("311180",   IDX_BOOL_SUPPORT_DISABLE_BY_COND,         true);
	SET_STR("311560",   IDX_STR_NAF_HOST,               "xcap.ims.mnc560.mcc311.pub.3gppnetwork.org");	
    SET_BOL("312670",   IDX_BOOL_MEDIA_TAG,             false);
    SET_BOL("312670",   IDX_BOOL_SET_CFNRC_WITH_CFNL,   true);
    SET_BOL("312670",   IDX_BOOL_USE_FIRST_XUI_ELEMENT, true);
    SET_BOL("312670",   IDX_BOOL_USE_SAVED_XUI,         true);
    SET_TEST_SIM_BOL("312670",   IDX_BOOL_XCAP_CACHE,   false);
    SET_BOL("313100",   IDX_BOOL_MEDIA_TAG,             false);
    SET_BOL("313100",   IDX_BOOL_SET_CFNRC_WITH_CFNL,   true);
    SET_BOL("313100",   IDX_BOOL_USE_FIRST_XUI_ELEMENT, true);
    SET_BOL("313100",   IDX_BOOL_USE_SAVED_XUI,         true);
    SET_TEST_SIM_BOL("313100",   IDX_BOOL_XCAP_CACHE,   false);
	SET_STR("313390",   IDX_STR_NAF_HOST,               "xcap.ims.mnc390.mcc313.3gppnetwork.org");
    SET_STR("313390",   IDX_STR_BSF_HOST,               "ap.ims.mnc390.mcc313.3gppnetwork.org");
	SET_INT("313390",   IDX_INT_GBA_PORT,               81);
	SET_BOL("313390",   IDX_BOOL_MEDIA_TAG,             false);
	SET_BOL("313390",   IDX_BOOL_SUPPORT_ADDING_UNPROVISIONED_RULE, false);
	SET_BOL("313390",   IDX_BOOL_FWD_NUM_USE_SIP_URI,   true);
    SET_STR("334020",   IDX_STR_BSF_HOST,               "bsf.ims.mnc020.mcc334.pub.3gppnetwork.org");
    SET_STR("334020",   IDX_STR_GBA_TYPE,               "GBA_ME");
    SET_STR("334020",   IDX_STR_RULEID_CFU,             "cfu");
    SET_STR("334020",   IDX_STR_RULEID_CFB,             "cfb");
    SET_STR("334020",   IDX_STR_RULEID_CFNRY,           "cfnr");
    SET_STR("334020",   IDX_STR_RULEID_CFNL,            "cfnl");
    SET_STR("334020",   IDX_STR_RULEID_CFNRC,           "cfnrc");
    SET_STR("334020",   IDX_STR_RULEID_BAIC,            "baic");
    SET_STR("334020",   IDX_STR_RULEID_BAICR,           "bicro");
    SET_STR("334020",   IDX_STR_RULEID_BAOC,            "baoc");
    SET_STR("334020",    IDX_STR_RULEID_BAOIC,           "boic");
    SET_STR("334020",    IDX_STR_RULEID_BAOICXH,        "boic-exHC");
    SET_STR("33403",    IDX_STR_NAF_HOST,              "xcap.ims.mnc030.mcc334.pub.3gppnetwork.org");
    SET_STR("33403",    IDX_STR_BSF_HOST,              "bsf.ims.mnc030.mcc334.pub.3gppnetwork.org");
    SET_INT("33403",    IDX_INT_XCAP_PORT,              8090);
    SET_INT("33403",    IDX_INT_GBA_PORT,               8080);
    SET_INT("33403",    IDX_INT_URL_ENCODING,           URL_ENCODING_NODE_SELECTOR);
    SET_BOL("33403",    IDX_BOOL_MEDIA_TAG,             false);
    SET_BOL("33403",    IDX_BOOL_SUPPORT_CFNL,          false);
    SET_STR("334030",   IDX_STR_NAF_HOST,              "xcap.ims.mnc030.mcc334.pub.3gppnetwork.org");
    SET_STR("334030",   IDX_STR_BSF_HOST,              "bsf.ims.mnc030.mcc334.pub.3gppnetwork.org");
    SET_INT("334030",   IDX_INT_XCAP_PORT,              8090);
    SET_INT("334030",   IDX_INT_GBA_PORT,               8080);
    SET_INT("334030",   IDX_INT_URL_ENCODING,           URL_ENCODING_NODE_SELECTOR);
    SET_STR("334030",   IDX_STR_RULEID_CFU,             "cfu");
    SET_STR("334030",   IDX_STR_RULEID_CFB,             "cfb");
    SET_STR("334030",   IDX_STR_RULEID_CFNRY,           "cfnr");
    SET_STR("334030",   IDX_STR_RULEID_CFNRC,           "cfnrc");
    SET_BOL("334030",   IDX_BOOL_MEDIA_TAG,             false);
    SET_BOL("334030",   IDX_BOOL_SUPPORT_CFNL,          false);
    SET_STR("334050",   IDX_STR_XCAP_PROTOCOL,          "https");
    SET_STR("334050",   IDX_STR_NAF_HOST,               "xcap.ims.attmex.mx");
    SET_STR("334050",   IDX_STR_GBA_PROTOCOL,           "https");
    SET_STR("334050",   IDX_STR_BSF_HOST,               "bsf.ims.attmex.mx");
    SET_INT("334050",   IDX_INT_GBA_PORT,               8443);
    SET_STR("334050",   IDX_STR_GBA_TYPE,               "GBA_ME");
	SET_BOL("334050",   IDX_BOOL_SUPPORT_PUT_CF_ROOT,   false);
    SET_STR("334090",   IDX_STR_XCAP_PROTOCOL,          "https");
    SET_STR("334090",   IDX_STR_NAF_HOST,               "xcap.ims.attmex.mx");
    SET_STR("334090",   IDX_STR_GBA_PROTOCOL,           "https");
    SET_STR("334090",   IDX_STR_BSF_HOST,               "bsf.ims.attmex.mx");
    SET_INT("334090",   IDX_INT_GBA_PORT,               8443);
    SET_STR("334090",   IDX_STR_GBA_TYPE,               "GBA_ME");
	SET_BOL("334090",   IDX_BOOL_SUPPORT_PUT_CF_ROOT,   false);
    SET_STR("37001",    IDX_STR_GBA_TYPE,               "GBA_ME");
    SET_INT("37002",   IDX_INT_XCAP_PORT,              8080);
    SET_INT("37002",   IDX_INT_GBA_PORT,               8080);
    SET_BOL("37002",   IDX_BOOL_SUPPORT_ADDING_UNPROVISIONED_RULE, false);
    SET_STR("37002",   IDX_STR_GBA_TYPE,               "GBA_ME");
    SET_INT("37002",   IDX_INT_URL_ENCODING,           URL_ENCODING_NODE_SELECTOR);
    SET_BOL("37002",   IDX_BOOL_SUPPORT_PUT_CLIR_ROOT,   false);
    SET_INT("40404",    IDX_INT_URL_ENCODING,           URL_ENCODING_NODE_SELECTOR);
    SET_INT("40407",    IDX_INT_URL_ENCODING,           URL_ENCODING_NODE_SELECTOR);
    SET_INT("40412",    IDX_INT_URL_ENCODING,           URL_ENCODING_NODE_SELECTOR);
    SET_INT("40414",    IDX_INT_URL_ENCODING,           URL_ENCODING_NODE_SELECTOR);
    SET_INT("40419",    IDX_INT_URL_ENCODING,           URL_ENCODING_NODE_SELECTOR);
    SET_INT("40422",    IDX_INT_URL_ENCODING,           URL_ENCODING_NODE_SELECTOR);
    SET_INT("40424",    IDX_INT_URL_ENCODING,           URL_ENCODING_NODE_SELECTOR);
    SET_INT("40444",    IDX_INT_URL_ENCODING,           URL_ENCODING_NODE_SELECTOR);
    SET_INT("40456",    IDX_INT_URL_ENCODING,           URL_ENCODING_NODE_SELECTOR);
    SET_INT("40478",    IDX_INT_URL_ENCODING,           URL_ENCODING_NODE_SELECTOR);
    SET_INT("40482",    IDX_INT_URL_ENCODING,           URL_ENCODING_NODE_SELECTOR);
    SET_INT("40487",    IDX_INT_URL_ENCODING,           URL_ENCODING_NODE_SELECTOR);
    SET_INT("40489",    IDX_INT_URL_ENCODING,           URL_ENCODING_NODE_SELECTOR);
    SET_INT("40570",    IDX_INT_URL_ENCODING,           URL_ENCODING_NODE_SELECTOR);
    SET_INT("405799",   IDX_INT_URL_ENCODING,           URL_ENCODING_NODE_SELECTOR);
    SET_INT("405840",   IDX_INT_XCAP_PORT,              7077);
    SET_INT("405840",   IDX_INT_GBA_PORT,               7080);
    SET_INT("405840",   IDX_INT_MEDIA_TYPE,             MEDIA_TYPE_SEPERATE);
    SET_BOL("405840",   IDX_BOOL_USE_SAVED_XUI,         true);
    SET_BOL("405840",    IDX_BOOL_TCP_SESSION_KEEP_ALIVE,false);
    SET_BOL("405840",   IDX_BOOL_XCAP_CACHE,            false);
    SET_INT("405845",   IDX_INT_URL_ENCODING,           URL_ENCODING_NODE_SELECTOR);
    SET_INT("405846",   IDX_INT_URL_ENCODING,           URL_ENCODING_NODE_SELECTOR);
    SET_INT("405848",   IDX_INT_URL_ENCODING,           URL_ENCODING_NODE_SELECTOR);
    SET_INT("405849",   IDX_INT_URL_ENCODING,           URL_ENCODING_NODE_SELECTOR);
    SET_INT("405850",   IDX_INT_URL_ENCODING,           URL_ENCODING_NODE_SELECTOR);
    SET_INT("405852",   IDX_INT_URL_ENCODING,           URL_ENCODING_NODE_SELECTOR);
    SET_INT("405853",   IDX_INT_URL_ENCODING,           URL_ENCODING_NODE_SELECTOR);
    SET_INT("405854",   IDX_INT_XCAP_PORT,              7077);
    SET_INT("405854",   IDX_INT_GBA_PORT,               7080);
    SET_INT("405854",   IDX_INT_MEDIA_TYPE,             MEDIA_TYPE_SEPERATE);
    SET_BOL("405854",   IDX_BOOL_USE_SAVED_XUI,         true);
    SET_BOL("405854",    IDX_BOOL_TCP_SESSION_KEEP_ALIVE,false);
    SET_BOL("405854",   IDX_BOOL_XCAP_CACHE,            false);
    SET_INT("405855",   IDX_INT_XCAP_PORT,              7077);
    SET_INT("405855",   IDX_INT_GBA_PORT,               7080);
    SET_INT("405855",   IDX_INT_MEDIA_TYPE,             MEDIA_TYPE_SEPERATE);
    SET_BOL("405855",   IDX_BOOL_USE_SAVED_XUI,         true);
    SET_BOL("405855",    IDX_BOOL_TCP_SESSION_KEEP_ALIVE,false);
    SET_BOL("405855",   IDX_BOOL_XCAP_CACHE,            false);
    SET_INT("405856",   IDX_INT_XCAP_PORT,              7077);
    SET_INT("405856",   IDX_INT_GBA_PORT,               7080);
    SET_INT("405856",   IDX_INT_MEDIA_TYPE,             MEDIA_TYPE_SEPERATE);
    SET_BOL("405856",   IDX_BOOL_USE_SAVED_XUI,         true);
    SET_BOL("405856",    IDX_BOOL_TCP_SESSION_KEEP_ALIVE,false);
    SET_BOL("405856",   IDX_BOOL_XCAP_CACHE,            false);
    SET_INT("405857",   IDX_INT_XCAP_PORT,              7077);
    SET_INT("405857",   IDX_INT_GBA_PORT,               7080);
    SET_INT("405857",   IDX_INT_MEDIA_TYPE,             MEDIA_TYPE_SEPERATE);
    SET_BOL("405857",   IDX_BOOL_USE_SAVED_XUI,         true);
    SET_BOL("405857",    IDX_BOOL_TCP_SESSION_KEEP_ALIVE,false);
    SET_BOL("405857",   IDX_BOOL_XCAP_CACHE,            false);
    SET_INT("405858",   IDX_INT_XCAP_PORT,              7077);
    SET_INT("405858",   IDX_INT_GBA_PORT,               7080);
    SET_INT("405858",   IDX_INT_MEDIA_TYPE,             MEDIA_TYPE_SEPERATE);
    SET_BOL("405858",   IDX_BOOL_USE_SAVED_XUI,         true);
    SET_BOL("405858",    IDX_BOOL_TCP_SESSION_KEEP_ALIVE,false);
    SET_BOL("405858",   IDX_BOOL_XCAP_CACHE,            false);
    SET_INT("405859",   IDX_INT_XCAP_PORT,              7077);
    SET_INT("405859",   IDX_INT_GBA_PORT,               7080);
    SET_INT("405859",   IDX_INT_MEDIA_TYPE,             MEDIA_TYPE_SEPERATE);
    SET_BOL("405859",   IDX_BOOL_USE_SAVED_XUI,         true);
    SET_BOL("405859",    IDX_BOOL_TCP_SESSION_KEEP_ALIVE,false);
    SET_BOL("405859",   IDX_BOOL_XCAP_CACHE,            false);
    SET_INT("405860",   IDX_INT_XCAP_PORT,              7077);
    SET_INT("405860",   IDX_INT_GBA_PORT,               7080);
    SET_INT("405860",   IDX_INT_MEDIA_TYPE,             MEDIA_TYPE_SEPERATE);
    SET_BOL("405860",   IDX_BOOL_USE_SAVED_XUI,         true);
    SET_BOL("405860",    IDX_BOOL_TCP_SESSION_KEEP_ALIVE,false);
    SET_BOL("405860",   IDX_BOOL_XCAP_CACHE,            false);
    SET_INT("405861",   IDX_INT_XCAP_PORT,              7077);
    SET_INT("405861",   IDX_INT_GBA_PORT,               7080);
    SET_INT("405861",   IDX_INT_MEDIA_TYPE,             MEDIA_TYPE_SEPERATE);
    SET_BOL("405861",   IDX_BOOL_USE_SAVED_XUI,         true);
    SET_BOL("405861",    IDX_BOOL_TCP_SESSION_KEEP_ALIVE,false);
    SET_BOL("405861",   IDX_BOOL_XCAP_CACHE,            false);
    SET_INT("405862",   IDX_INT_XCAP_PORT,              7077);
    SET_INT("405862",   IDX_INT_GBA_PORT,               7080);
    SET_INT("405862",   IDX_INT_MEDIA_TYPE,             MEDIA_TYPE_SEPERATE);
    SET_BOL("405862",   IDX_BOOL_USE_SAVED_XUI,         true);
    SET_BOL("405862",    IDX_BOOL_TCP_SESSION_KEEP_ALIVE,false);
    SET_BOL("405862",   IDX_BOOL_XCAP_CACHE,            false);
    SET_INT("405863",   IDX_INT_XCAP_PORT,              7077);
    SET_INT("405863",   IDX_INT_GBA_PORT,               7080);
    SET_INT("405863",   IDX_INT_MEDIA_TYPE,             MEDIA_TYPE_SEPERATE);
    SET_BOL("405863",   IDX_BOOL_USE_SAVED_XUI,         true);
    SET_BOL("405863",    IDX_BOOL_TCP_SESSION_KEEP_ALIVE,false);
    SET_BOL("405863",   IDX_BOOL_XCAP_CACHE,            false);
    SET_INT("405864",   IDX_INT_XCAP_PORT,              7077);
    SET_INT("405864",   IDX_INT_GBA_PORT,               7080);
    SET_INT("405864",   IDX_INT_MEDIA_TYPE,             MEDIA_TYPE_SEPERATE);
    SET_BOL("405864",   IDX_BOOL_USE_SAVED_XUI,         true);
    SET_BOL("405864",    IDX_BOOL_TCP_SESSION_KEEP_ALIVE,false);
    SET_BOL("405864",   IDX_BOOL_XCAP_CACHE,            false);
    SET_INT("405865",   IDX_INT_XCAP_PORT,              7077);
    SET_INT("405865",   IDX_INT_GBA_PORT,               7080);
    SET_INT("405865",   IDX_INT_MEDIA_TYPE,             MEDIA_TYPE_SEPERATE);
    SET_BOL("405865",   IDX_BOOL_USE_SAVED_XUI,         true);
    SET_BOL("405865",    IDX_BOOL_TCP_SESSION_KEEP_ALIVE,false);
    SET_BOL("405865",   IDX_BOOL_XCAP_CACHE,            false);
    SET_INT("405866",   IDX_INT_XCAP_PORT,              7077);
    SET_INT("405866",   IDX_INT_GBA_PORT,               7080);
    SET_INT("405866",   IDX_INT_MEDIA_TYPE,             MEDIA_TYPE_SEPERATE);
    SET_BOL("405866",   IDX_BOOL_USE_SAVED_XUI,         true);
    SET_BOL("405866",    IDX_BOOL_TCP_SESSION_KEEP_ALIVE,false);
    SET_BOL("405866",   IDX_BOOL_XCAP_CACHE,            false);
    SET_INT("405867",   IDX_INT_XCAP_PORT,              7077);
    SET_INT("405867",   IDX_INT_GBA_PORT,               7080);
    SET_INT("405867",   IDX_INT_MEDIA_TYPE,             MEDIA_TYPE_SEPERATE);
    SET_BOL("405867",   IDX_BOOL_USE_SAVED_XUI,         true);
    SET_BOL("405867",    IDX_BOOL_TCP_SESSION_KEEP_ALIVE,false);
    SET_BOL("405867",   IDX_BOOL_XCAP_CACHE,            false);
    SET_INT("405868",   IDX_INT_XCAP_PORT,              7077);
    SET_INT("405868",   IDX_INT_GBA_PORT,               7080);
    SET_INT("405868",   IDX_INT_MEDIA_TYPE,             MEDIA_TYPE_SEPERATE);
    SET_BOL("405868",   IDX_BOOL_USE_SAVED_XUI,         true);
    SET_BOL("405868",    IDX_BOOL_TCP_SESSION_KEEP_ALIVE,false);
    SET_BOL("405868",   IDX_BOOL_XCAP_CACHE,            false);
    SET_INT("405869",   IDX_INT_XCAP_PORT,              7077);
    SET_INT("405869",   IDX_INT_GBA_PORT,               7080);
    SET_INT("405869",   IDX_INT_MEDIA_TYPE,             MEDIA_TYPE_SEPERATE);
    SET_BOL("405869",   IDX_BOOL_USE_SAVED_XUI,         true);
    SET_BOL("405869",    IDX_BOOL_TCP_SESSION_KEEP_ALIVE,false);
    SET_BOL("405869",   IDX_BOOL_XCAP_CACHE,            false);
    SET_INT("405870",   IDX_INT_XCAP_PORT,              7077);
    SET_INT("405870",   IDX_INT_GBA_PORT,               7080);
    SET_INT("405870",   IDX_INT_MEDIA_TYPE,             MEDIA_TYPE_SEPERATE);
    SET_BOL("405870",   IDX_BOOL_USE_SAVED_XUI,         true);
    SET_BOL("405870",    IDX_BOOL_TCP_SESSION_KEEP_ALIVE,false);
    SET_BOL("405870",   IDX_BOOL_XCAP_CACHE,            false);
    SET_INT("405871",   IDX_INT_XCAP_PORT,              7077);
    SET_INT("405871",   IDX_INT_GBA_PORT,               7080);
    SET_INT("405871",   IDX_INT_MEDIA_TYPE,             MEDIA_TYPE_SEPERATE);
    SET_BOL("405871",   IDX_BOOL_USE_SAVED_XUI,         true);
    SET_BOL("405871",    IDX_BOOL_TCP_SESSION_KEEP_ALIVE,false);
    SET_BOL("405871",   IDX_BOOL_XCAP_CACHE,            false);
    SET_INT("405872",   IDX_INT_XCAP_PORT,              7077);
    SET_INT("405872",   IDX_INT_GBA_PORT,               7080);
    SET_INT("405872",   IDX_INT_MEDIA_TYPE,             MEDIA_TYPE_SEPERATE);
    SET_BOL("405872",   IDX_BOOL_USE_SAVED_XUI,         true);
    SET_BOL("405872",    IDX_BOOL_TCP_SESSION_KEEP_ALIVE,false);
    SET_BOL("405872",   IDX_BOOL_XCAP_CACHE,            false);
    SET_INT("405873",   IDX_INT_XCAP_PORT,              7077);
    SET_INT("405873",   IDX_INT_GBA_PORT,               7080);
    SET_INT("405873",   IDX_INT_MEDIA_TYPE,             MEDIA_TYPE_SEPERATE);
    SET_BOL("405873",   IDX_BOOL_USE_SAVED_XUI,         true);
    SET_BOL("405873",    IDX_BOOL_TCP_SESSION_KEEP_ALIVE,false);
    SET_BOL("405873",   IDX_BOOL_XCAP_CACHE,            false);
    SET_INT("405874",   IDX_INT_XCAP_PORT,              7077);
    SET_INT("405874",   IDX_INT_GBA_PORT,               7080);
    SET_INT("405874",   IDX_INT_MEDIA_TYPE,             MEDIA_TYPE_SEPERATE);
    SET_BOL("405874",   IDX_BOOL_USE_SAVED_XUI,         true);
    SET_BOL("405874",    IDX_BOOL_TCP_SESSION_KEEP_ALIVE,false);
    SET_BOL("405874",   IDX_BOOL_XCAP_CACHE,            false);
    SET_INT("41301",    IDX_INT_URL_ENCODING,           URL_ENCODING_NODE_SELECTOR);
    SET_BOL("41301",    IDX_BOOL_SUPPORT_PUT_CF_ROOT,   false);
    SET_INT("41301",    IDX_INT_MEDIA_TYPE,             MEDIA_TYPE_SEPERATE);
    SET_STR("41406",    IDX_STR_BSF_HOST,               "bsf.ims.mnc006.mcc414.pub.3gppnetwork.org");
    SET_INT("41406",    IDX_INT_URL_ENCODING,           URL_ENCODING_NODE_SELECTOR);
    SET_BOL("41406",    IDX_BOOL_FWD_NUM_USE_SIP_URI,   true);
    SET_BOL("41406",    IDX_BOOL_SUPPORT_PUT_CW_ROOT,   true);
    SET_BOL("41406",    IDX_BOOL_SUPPORT_PUT_CF_ROOT,   false);
    SET_STR("41409",    IDX_STR_GBA_TYPE,               "GBA_ME");
    SET_STR("41409",    IDX_STR_BSF_HOST,               "bsf.ims.mnc009.mcc414.pub.3gppnetwork.org");
    SET_BOL("41409",    IDX_BOOL_SUPPORT_CFNL,          false);
    SET_INT("42001",    IDX_INT_URL_ENCODING,           URL_ENCODING_NONE);
    SET_STR("42003",    IDX_STR_GBA_PROTOCOL,           "GBA_ME");
    SET_BOL("42003",    IDX_BOOL_MEDIA_TAG,             false);
    SET_BOL("42003",    IDX_BOOL_SUPPORT_PUT_CF_ROOT,   false);
    SET_BOL("42003",    IDX_BOOL_FWD_NUM_USE_SIP_URI,   true);
    SET_INT("42003",    IDX_INT_GBA_PORT,               443);
    SET_INT("42004",    IDX_INT_URL_ENCODING,           URL_ENCODING_NODE_SELECTOR);
	SET_INT("42402",    IDX_INT_XCAP_PORT,              8080);
    SET_INT("42402",    IDX_INT_GBA_PORT,               8088);
    SET_STR("42402",    IDX_STR_BSF_HOST,               "bsf.ims.mnc002.mcc424.pub.3gppnetwork.org");
    SET_BOL("44000",    IDX_BOOL_MEDIA_TAG,             false);
    SET_STR("44000",    IDX_STR_XCAP_PROTOCOL,          "https");
    SET_STR("44000",    IDX_STR_RULEID_CFU,             "call-diversion-unconditional");
    SET_STR("44000",    IDX_STR_RULEID_CFB,             "call-diversion-busy");
    SET_STR("44000",    IDX_STR_RULEID_CFNRY,           "call-diversion-no-reply");
    SET_STR("44000",    IDX_STR_RULEID_CFNRC,           "call-diversion-not-reachable");
    SET_STR("44000",    IDX_STR_RULEID_CFNL,            "call-diversion-not-logged-in");
    SET_STR("44000",    IDX_STR_RULEID_BAOC,            "call-barring-all-outgoing");
    SET_STR("44000",    IDX_STR_RULEID_BAOIC,           "call-barring-outgoing-international");
    SET_STR("44000",    IDX_STR_RULEID_BAOICXH,         "call-barring-outgoing-internationalExHC");
    SET_STR("44000",    IDX_STR_RULEID_BAIC,            "call-barring-all-incoming");
    SET_STR("44000",    IDX_STR_RULEID_BAICR,           "call-barring-incoming-in-roaming");
    SET_INT("44000",    IDX_INT_GBA_PORT,               8088);
    SET_BOL("44000",    IDX_BOOL_EXCLUSIVE_CB,          true);
    SET_BOL("44000",    IDX_BOOL_SUPPORT_PUT_CW_ROOT,   true);
    SET_BOL("44000",    IDX_BOOL_ENABLE_TMPI,           true);
	SET_BOL("44000",    IDX_BOOL_SUPPORT_RULE_LEVEL_SETTING, true);
	SET_BOL("44000",    IDX_BOOL_SUPPORT_QUERY_SIMSEVRS, true);
	SET_BOL("44000",    IDX_BOOL_SUPPORT_ENABLE_BY_COND, true);
	SET_BOL("44000",    IDX_BOOL_SUPPORT_DISABLE_BY_COND, true);
    SET_BOL("440011",   IDX_BOOL_MEDIA_TAG,             false);
    SET_STR("440011",   IDX_STR_BSF_HOST,               "bsf.ims.mnc011.mcc440.pub.3gppnetwork.org");
    SET_BOL("44020",    IDX_BOOL_MEDIA_TAG,             false);
    SET_STR("44020",    IDX_STR_XCAP_PROTOCOL,          "https");
    SET_STR("44020",    IDX_STR_RULEID_CFU,             "call-diversion-unconditional");
    SET_STR("44020",    IDX_STR_RULEID_CFB,             "call-diversion-busy");
    SET_STR("44020",    IDX_STR_RULEID_CFNRY,           "call-diversion-no-reply");
    SET_STR("44020",    IDX_STR_RULEID_CFNRC,           "call-diversion-not-reachable");
    SET_STR("44020",    IDX_STR_RULEID_CFNL,            "call-diversion-not-logged-in");
    SET_STR("44020",    IDX_STR_RULEID_BAOC,            "call-barring-all-outgoing");
    SET_STR("44020",    IDX_STR_RULEID_BAOIC,           "call-barring-outgoing-international");
    SET_STR("44020",    IDX_STR_RULEID_BAOICXH,         "call-barring-outgoing-internationalExHC");
    SET_STR("44020",    IDX_STR_RULEID_BAIC,            "call-barring-all-incoming");
    SET_STR("44020",    IDX_STR_RULEID_BAICR,           "call-barring-incoming-in-roaming");
    SET_INT("44020",    IDX_INT_GBA_PORT,               8088);
    SET_BOL("44020",    IDX_BOOL_EXCLUSIVE_CB,          true);
    SET_BOL("44020",    IDX_BOOL_SUPPORT_PUT_CW_ROOT,   true);
    SET_BOL("44020",    IDX_BOOL_ENABLE_TMPI,           true);
	SET_BOL("44020",    IDX_BOOL_SUPPORT_RULE_LEVEL_SETTING, true);
	SET_BOL("44020",    IDX_BOOL_SUPPORT_QUERY_SIMSEVRS, true);
	SET_BOL("44020",    IDX_BOOL_SUPPORT_ENABLE_BY_COND, true);
	SET_BOL("44020",    IDX_BOOL_SUPPORT_DISABLE_BY_COND, true);
    SET_BOL("44021",    IDX_BOOL_MEDIA_TAG,             false);
    SET_STR("44021",    IDX_STR_XCAP_PROTOCOL,          "https");
    SET_STR("44021",    IDX_STR_RULEID_CFU,             "call-diversion-unconditional");
    SET_STR("44021",    IDX_STR_RULEID_CFB,             "call-diversion-busy");
    SET_STR("44021",    IDX_STR_RULEID_CFNRY,           "call-diversion-no-reply");
    SET_STR("44021",    IDX_STR_RULEID_CFNRC,           "call-diversion-not-reachable");
    SET_STR("44021",    IDX_STR_RULEID_CFNL,            "call-diversion-not-logged-in");
    SET_STR("44021",    IDX_STR_RULEID_BAOC,            "call-barring-all-outgoing");
    SET_STR("44021",    IDX_STR_RULEID_BAOIC,           "call-barring-outgoing-international");
    SET_STR("44021",    IDX_STR_RULEID_BAOICXH,         "call-barring-outgoing-internationalExHC");
    SET_STR("44021",    IDX_STR_RULEID_BAIC,            "call-barring-all-incoming");
    SET_STR("44021",    IDX_STR_RULEID_BAICR,           "call-barring-incoming-in-roaming");
    SET_INT("44021",    IDX_INT_GBA_PORT,               8088);
    SET_BOL("44021",    IDX_BOOL_EXCLUSIVE_CB,          true);
    SET_BOL("44021",    IDX_BOOL_SUPPORT_PUT_CW_ROOT,   true);
    SET_BOL("44021",    IDX_BOOL_ENABLE_TMPI,           true);
	SET_BOL("44021",    IDX_BOOL_SUPPORT_RULE_LEVEL_SETTING, true);
	SET_BOL("44021",    IDX_BOOL_SUPPORT_QUERY_SIMSEVRS, true);
	SET_BOL("44021",    IDX_BOOL_SUPPORT_ENABLE_BY_COND, true);
	SET_BOL("44021",    IDX_BOOL_SUPPORT_DISABLE_BY_COND, true);
    SET_INT("44050",    IDX_INT_XCAP_PORT,              8090);
    SET_STR("44050",    IDX_STR_AUID,                   "mtasxdms/simservs.ngn.etsi.org");
    SET_BOL("44050",    IDX_BOOL_SET_CFNRC_WITH_CFNL,   true);
    SET_BOL("44050",    IDX_BOOL_SUPPORT_PUT_CW_ROOT,   true);
    SET_BOL("44050",    IDX_BOOL_MEDIA_TAG,             false);
    SET_INT("44051",    IDX_INT_XCAP_PORT,              8090);
    SET_STR("44051",    IDX_STR_AUID,                   "mtasxdms/simservs.ngn.etsi.org");
    SET_BOL("44051",    IDX_BOOL_SET_CFNRC_WITH_CFNL,   true);
    SET_BOL("44051",    IDX_BOOL_SUPPORT_PUT_CW_ROOT,   true);
    SET_BOL("44051",    IDX_BOOL_MEDIA_TAG,             false);
    SET_INT("44052",    IDX_INT_XCAP_PORT,              8090);
    SET_STR("44052",    IDX_STR_AUID,                   "mtasxdms/simservs.ngn.etsi.org");
    SET_BOL("44052",    IDX_BOOL_SET_CFNRC_WITH_CFNL,   true);
    SET_BOL("44052",    IDX_BOOL_SUPPORT_PUT_CW_ROOT,   true);
    SET_BOL("44052",    IDX_BOOL_MEDIA_TAG,             false);
    SET_INT("44053",    IDX_INT_XCAP_PORT,              8090);
    SET_STR("44053",    IDX_STR_AUID,                   "mtasxdms/simservs.ngn.etsi.org");
    SET_BOL("44053",    IDX_BOOL_SET_CFNRC_WITH_CFNL,   true);
    SET_BOL("44053",    IDX_BOOL_SUPPORT_PUT_CW_ROOT,   true);
    SET_BOL("44053",    IDX_BOOL_MEDIA_TAG,             false);
    SET_INT("44054",    IDX_INT_XCAP_PORT,              8090);
    SET_STR("44054",    IDX_STR_AUID,                   "mtasxdms/simservs.ngn.etsi.org");
    SET_BOL("44054",    IDX_BOOL_SET_CFNRC_WITH_CFNL,   true);
    SET_BOL("44054",    IDX_BOOL_SUPPORT_PUT_CW_ROOT,   true);
    SET_BOL("44054",    IDX_BOOL_MEDIA_TAG,             false);
    SET_INT("44070",    IDX_INT_XCAP_PORT,              8090);
    SET_STR("44070",    IDX_STR_AUID,                   "mtasxdms/simservs.ngn.etsi.org");
    SET_BOL("44070",    IDX_BOOL_SET_CFNRC_WITH_CFNL,   true);
    SET_BOL("44070",    IDX_BOOL_SUPPORT_PUT_CW_ROOT,   true);
    SET_BOL("44070",    IDX_BOOL_MEDIA_TAG,             false);
    SET_INT("44071",    IDX_INT_XCAP_PORT,              8090);
    SET_STR("44071",    IDX_STR_AUID,                   "mtasxdms/simservs.ngn.etsi.org");
    SET_BOL("44071",    IDX_BOOL_SET_CFNRC_WITH_CFNL,   true);
    SET_BOL("44071",    IDX_BOOL_SUPPORT_PUT_CW_ROOT,   true);
    SET_BOL("44071",    IDX_BOOL_MEDIA_TAG,             false);
    SET_INT("44072",    IDX_INT_XCAP_PORT,              8090);
    SET_STR("44072",    IDX_STR_AUID,                   "mtasxdms/simservs.ngn.etsi.org");
    SET_BOL("44072",    IDX_BOOL_SET_CFNRC_WITH_CFNL,   true);
    SET_BOL("44072",    IDX_BOOL_SUPPORT_PUT_CW_ROOT,   true);
    SET_BOL("44072",    IDX_BOOL_MEDIA_TAG,             false);
    SET_INT("44073",    IDX_INT_XCAP_PORT,              8090);
    SET_STR("44073",    IDX_STR_AUID,                   "mtasxdms/simservs.ngn.etsi.org");
    SET_BOL("44073",    IDX_BOOL_SET_CFNRC_WITH_CFNL,   true);
    SET_BOL("44073",    IDX_BOOL_SUPPORT_PUT_CW_ROOT,   true);
    SET_BOL("44073",    IDX_BOOL_MEDIA_TAG,             false);
    SET_INT("44074",    IDX_INT_XCAP_PORT,              8090);
    SET_STR("44074",    IDX_STR_AUID,                   "mtasxdms/simservs.ngn.etsi.org");
    SET_BOL("44074",    IDX_BOOL_SET_CFNRC_WITH_CFNL,   true);
    SET_BOL("44074",    IDX_BOOL_SUPPORT_PUT_CW_ROOT,   true);
    SET_BOL("44074",    IDX_BOOL_MEDIA_TAG,             false);
    SET_INT("44075",    IDX_INT_XCAP_PORT,              8090);
    SET_STR("44075",    IDX_STR_AUID,                   "mtasxdms/simservs.ngn.etsi.org");
    SET_BOL("44075",    IDX_BOOL_SET_CFNRC_WITH_CFNL,   true);
    SET_BOL("44075",    IDX_BOOL_SUPPORT_PUT_CW_ROOT,   true);
    SET_BOL("44075",    IDX_BOOL_MEDIA_TAG,             false);
    SET_INT("44076",    IDX_INT_XCAP_PORT,              8090);
    SET_STR("44076",    IDX_STR_AUID,                   "mtasxdms/simservs.ngn.etsi.org");
    SET_BOL("44076",    IDX_BOOL_SET_CFNRC_WITH_CFNL,   true);
    SET_BOL("44076",    IDX_BOOL_SUPPORT_PUT_CW_ROOT,   true);
    SET_BOL("44076",    IDX_BOOL_MEDIA_TAG,             false);
    SET_BOL("44101",    IDX_BOOL_MEDIA_TAG,             false);
    SET_STR("44101",    IDX_STR_XCAP_PROTOCOL,          "https");
    SET_STR("44101",    IDX_STR_RULEID_CFU,             "call-diversion-unconditional");
    SET_STR("44101",    IDX_STR_RULEID_CFB,             "call-diversion-busy");
    SET_STR("44101",    IDX_STR_RULEID_CFNRY,           "call-diversion-no-reply");
    SET_STR("44101",    IDX_STR_RULEID_CFNRC,           "call-diversion-not-reachable");
    SET_STR("44101",    IDX_STR_RULEID_CFNL,            "call-diversion-not-logged-in");
    SET_STR("44101",    IDX_STR_RULEID_BAOC,            "call-barring-all-outgoing");
    SET_STR("44101",    IDX_STR_RULEID_BAOIC,           "call-barring-outgoing-international");
    SET_STR("44101",    IDX_STR_RULEID_BAOICXH,         "call-barring-outgoing-internationalExHC");
    SET_STR("44101",    IDX_STR_RULEID_BAIC,            "call-barring-all-incoming");
    SET_STR("44101",    IDX_STR_RULEID_BAICR,           "call-barring-incoming-in-roaming");
    SET_INT("44101",    IDX_INT_GBA_PORT,               8088);
    SET_BOL("44101",    IDX_BOOL_EXCLUSIVE_CB,          true);
    SET_BOL("44101",    IDX_BOOL_SUPPORT_PUT_CW_ROOT,   true);
    SET_BOL("44101",    IDX_BOOL_ENABLE_TMPI,           true);
    SET_BOL("44101",    IDX_BOOL_SUPPORT_RULE_LEVEL_SETTING, true);
    SET_BOL("44101",    IDX_BOOL_SUPPORT_QUERY_SIMSEVRS, true);
    SET_BOL("44101",    IDX_BOOL_SUPPORT_ENABLE_BY_COND, true);
    SET_BOL("44101",    IDX_BOOL_SUPPORT_DISABLE_BY_COND, true);
    SET_INT("45202",    IDX_INT_GBA_PORT,               8090);
    SET_INT("45202",    IDX_INT_XCAP_PORT,              8080);
    SET_STR("45202",    IDX_STR_BSF_HOST,               "bsf.ims.mnc002.mcc452.pub.3gppnetwork.org");
    SET_BOL("45202",    IDX_BOOL_MEDIA_TAG,             false);
    SET_STR("45204",    IDX_STR_BSF_HOST,               "bsf.ims.mnc004.mcc452.3gppnetwork.org");
    SET_INT("45204",    IDX_INT_XCAP_PORT,              8080);
    SET_INT("45204",    IDX_INT_GBA_PORT,               8080);
    SET_INT("45204",    IDX_INT_MEDIA_TYPE,             MEDIA_TYPE_VIDEO_WITH_AUDIO);
    SET_INT("45400",    IDX_INT_XCAP_PORT,              8080);
    SET_INT("45402",    IDX_INT_XCAP_PORT,              8080);
    SET_INT("45406",    IDX_INT_XCAP_PORT,              8090);
    SET_BOL("45407",    IDX_BOOL_SUPPORT_CFNL,          false);
    SET_BOL("45407",    IDX_BOOL_SUPPORT_PUT_CF_ROOT,   false);
    SET_INT("45410",    IDX_INT_XCAP_PORT,              8080);
    SET_STR("45412",    IDX_STR_XCAP_PROTOCOL,          "https");
    SET_INT("45412",    IDX_INT_GBA_PORT,               8080);
    SET_INT("45415",    IDX_INT_XCAP_PORT,              8090);
    SET_INT("45417",    IDX_INT_XCAP_PORT,              8090);
    SET_INT("45418",    IDX_INT_XCAP_PORT,              8080);
    SET_INT("45500",    IDX_INT_XCAP_PORT,              8090);
    SET_BOL("45502",    IDX_BOOL_SUPPORT_CFNL,          false);
    SET_BOL("45502",    IDX_BOOL_SUPPORT_PUT_CF_ROOT,   false);
    SET_INT("45502",    IDX_INT_GBA_PORT,               8080);
    SET_INT("45502",    IDX_INT_MEDIA_TYPE,             MEDIA_TYPE_ONLY_AUDIO);
    SET_TEST_SIM_BOL("45502", IDX_BOOL_CLEAR_CACHE_AFTER_PUT, false);
    SET_INT("45506",    IDX_INT_XCAP_PORT,              8090);
    SET_BOL("45507",    IDX_BOOL_SUPPORT_CFNL,          false);
    SET_BOL("45507",    IDX_BOOL_SUPPORT_PUT_CF_ROOT,   false);
    SET_INT("45507",    IDX_INT_GBA_PORT,               8080);
    SET_INT("45507",    IDX_INT_MEDIA_TYPE,             MEDIA_TYPE_ONLY_AUDIO);
    SET_TEST_SIM_BOL("45507", IDX_BOOL_CLEAR_CACHE_AFTER_PUT, false);
    SET_INT("45611",    IDX_INT_GBA_PORT,               8080);
    SET_INT("45611",    IDX_INT_MEDIA_TYPE,             MEDIA_TYPE_VIDEO_WITH_AUDIO);
    SET_STR("45611",    IDX_STR_BSF_HOST,               "bsf.ims.mnc011.mcc456.pub.3gppnetwork.org");
    SET_BOL("45606",    IDX_BOOL_MEDIA_TAG,             false);
    SET_STR("45606",    IDX_STR_BSF_HOST,               "bsf.ims.mnc006.mcc456.pub.3gppnetwork.org");
    SET_INT("45606",    IDX_INT_XCAP_CONNECTION_TIMEOUT,15*1000);
    SET_INT("45606",    IDX_INT_XCAP_RETRY_TIMES,       0);
    SET_BOL("46000",    IDX_BOOL_SUPPORT_CFNL,          false);
    SET_BOL("46000",    IDX_BOOL_SUPPORT_PUT_CF_ROOT,   false);
    SET_STR("46000",    IDX_STR_NAF_HOST,               "xcap.ims.mnc000.mcc460.pub.3gppnetwork.org");
    SET_INT("46000",    IDX_INT_GBA_PORT,               8080);
    SET_INT("46000",    IDX_INT_MEDIA_TYPE,             MEDIA_TYPE_ONLY_AUDIO);
    SET_TEST_SIM_BOL("46000", IDX_BOOL_CLEAR_CACHE_AFTER_PUT, false);
    SET_BOL("46001",    IDX_BOOL_SUPPORT_CFNL,          false);
    SET_BOL("46001",    IDX_BOOL_SUPPORT_PUT_CF_ROOT,   false);
    SET_INT("46001",    IDX_INT_GBA_PORT,               8080);
    SET_INT("46001",    IDX_INT_MEDIA_TYPE,             MEDIA_TYPE_ONLY_AUDIO);
    SET_INT("46001",    IDX_INT_DNS_SERVER_IPV4V6_PRIORITY, DNS_SERVER_IPV4_FIRST);
    SET_TEST_SIM_BOL("46001", IDX_BOOL_CLEAR_CACHE_AFTER_PUT, false);
    SET_BOL("46002",    IDX_BOOL_SUPPORT_CFNL,          false);
    SET_BOL("46002",    IDX_BOOL_SUPPORT_PUT_CF_ROOT,   false);
    SET_STR("46002",    IDX_STR_NAF_HOST,               "xcap.ims.mnc000.mcc460.pub.3gppnetwork.org");
    SET_INT("46002",    IDX_INT_GBA_PORT,               8080);
    SET_INT("46002",    IDX_INT_MEDIA_TYPE,             MEDIA_TYPE_ONLY_AUDIO);
    SET_TEST_SIM_BOL("46002", IDX_BOOL_CLEAR_CACHE_AFTER_PUT, false);
    SET_BOL("46003",    IDX_BOOL_SUPPORT_CFNL,          false);
    SET_BOL("46003",    IDX_BOOL_SUPPORT_PUT_CF_ROOT,   false);
    SET_INT("46003",    IDX_INT_GBA_PORT,               8080);
    SET_INT("46003",    IDX_INT_MEDIA_TYPE,             MEDIA_TYPE_ONLY_AUDIO);
    SET_TEST_SIM_BOL("46003", IDX_BOOL_CLEAR_CACHE_AFTER_PUT, false);
    SET_BOL("46004",    IDX_BOOL_SUPPORT_CFNL,          false);
    SET_BOL("46004",    IDX_BOOL_SUPPORT_PUT_CF_ROOT,   false);
    SET_STR("46004",    IDX_STR_NAF_HOST,               "xcap.ims.mnc000.mcc460.pub.3gppnetwork.org");
    SET_INT("46004",    IDX_INT_MEDIA_TYPE,             MEDIA_TYPE_ONLY_AUDIO);
    SET_TEST_SIM_BOL("46004", IDX_BOOL_CLEAR_CACHE_AFTER_PUT, false);
    SET_BOL("46006",    IDX_BOOL_SUPPORT_CFNL,          false);
    SET_BOL("46006",    IDX_BOOL_SUPPORT_PUT_CF_ROOT,   false);
    SET_INT("46006",    IDX_INT_GBA_PORT,               8080);
    SET_INT("46006",    IDX_INT_MEDIA_TYPE,             MEDIA_TYPE_ONLY_AUDIO);
    SET_INT("46006",    IDX_INT_DNS_SERVER_IPV4V6_PRIORITY, DNS_SERVER_IPV4_FIRST);
    SET_TEST_SIM_BOL("46006", IDX_BOOL_CLEAR_CACHE_AFTER_PUT, false);
    SET_BOL("46007",    IDX_BOOL_SUPPORT_CFNL,          false);
    SET_BOL("46007",    IDX_BOOL_SUPPORT_PUT_CF_ROOT,   false);
    SET_STR("46007",    IDX_STR_NAF_HOST,               "xcap.ims.mnc000.mcc460.pub.3gppnetwork.org");
    SET_INT("46007",    IDX_INT_GBA_PORT,               8080);
    SET_INT("46007",    IDX_INT_MEDIA_TYPE,             MEDIA_TYPE_ONLY_AUDIO);
    SET_TEST_SIM_BOL("46007", IDX_BOOL_CLEAR_CACHE_AFTER_PUT, false);
    SET_BOL("46008",    IDX_BOOL_SUPPORT_CFNL,          false);
    SET_BOL("46008",    IDX_BOOL_SUPPORT_PUT_CF_ROOT,   false);
    SET_STR("46008",    IDX_STR_NAF_HOST,               "xcap.ims.mnc000.mcc460.pub.3gppnetwork.org");
    SET_INT("46008",    IDX_INT_GBA_PORT,               8080);
    SET_INT("46008",    IDX_INT_MEDIA_TYPE,             MEDIA_TYPE_ONLY_AUDIO);
    SET_TEST_SIM_BOL("46008", IDX_BOOL_CLEAR_CACHE_AFTER_PUT, false);
    SET_BOL("46009",    IDX_BOOL_SUPPORT_CFNL,          false);
    SET_BOL("46009",    IDX_BOOL_SUPPORT_PUT_CF_ROOT,   false);
    SET_INT("46009",    IDX_INT_GBA_PORT,               8080);
    SET_BOL("46011",    IDX_BOOL_SUPPORT_CFNL,          false);
    SET_BOL("46011",    IDX_BOOL_SUPPORT_PUT_CF_ROOT,   false);
    SET_INT("46011",    IDX_INT_GBA_PORT,               8080);
    SET_INT("46011",    IDX_INT_MEDIA_TYPE,             MEDIA_TYPE_ONLY_AUDIO);
    SET_TEST_SIM_BOL("46011", IDX_BOOL_CLEAR_CACHE_AFTER_PUT, false);
    SET_BOL("46012",    IDX_BOOL_SUPPORT_CFNL,          false);
    SET_BOL("46012",    IDX_BOOL_SUPPORT_PUT_CF_ROOT,   false);
    SET_INT("46012",    IDX_INT_GBA_PORT,               8080);
    SET_INT("46012",    IDX_INT_MEDIA_TYPE,             MEDIA_TYPE_ONLY_AUDIO);
    SET_TEST_SIM_BOL("46012", IDX_BOOL_CLEAR_CACHE_AFTER_PUT, false);
    SET_BOL("46605",    IDX_BOOL_MEDIA_TAG,             false);
    SET_STR("46692",    IDX_STR_BSF_HOST,               "bsf.ims.mnc092.mcc466.pub.3gppnetwork.org");
    SET_INT("46692",    IDX_INT_GBA_PORT,               8088);
    SET_BOL("46692",    IDX_BOOL_MEDIA_TAG,             false);
    SET_BOL("46692",    IDX_BOOL_SUPPORT_CFNL,          false);
    SET_BOL("46692",    IDX_BOOL_REMOVE_INVALID_ACTIONS,true);
    SET_BOL("46692",    IDX_BOOL_NEED_QUOTATION_MARK,   true);
    SET_INT("46697",    IDX_INT_XCAP_PORT,              8090);
    SET_BOL("502152",   IDX_BOOL_CANCEL_ENABLED_RULE_ONLY, true);
    SET_BOL("502152",   IDX_BOOL_SET_CFNRC_WITH_CFNL,   true);
    SET_BOL("502152",   IDX_BOOL_MEDIA_TAG,             false);
    SET_INT("502153",   IDX_INT_MEDIA_TYPE,             MEDIA_TYPE_ONLY_AUDIO);
    SET_STR("502153",   IDX_STR_BSF_HOST,               "bsf.ims.mnc153.mcc502.pub.3gppnetwork.org");
    SET_INT("50218",    IDX_INT_GBA_PORT,               8080);
    SET_STR("50218",    IDX_STR_GBA_TYPE,               "GBA_ME");
    SET_BOL("50218",    IDX_BOOL_MEDIA_TAG,             false);
    SET_BOL("50501",    IDX_BOOL_MEDIA_TAG,             false);
    SET_BOL("50501",    IDX_BOOL_SUPPORT_CFNL,          false);
    SET_INT("50501",    IDX_INT_MEDIA_TYPE,             MEDIA_TYPE_VIDEO_WITH_AUDIO);
    SET_STR("50502",    IDX_STR_GBA_TYPE,               "GBA_ME");
    SET_STR("50502",    IDX_STR_BSF_HOST,               "bsf.ims.mnc002.mcc505.pub.3gppnetwork.org");
    SET_BOL("50502",    IDX_BOOL_MEDIA_TAG,             false);
    SET_BOL("50502",    IDX_BOOL_SUPPORT_CFNL,          false);
    SET_BOL("50503",    IDX_BOOL_MEDIA_TAG,             false);
    SET_BOL("50503",    IDX_BOOL_SUPPORT_CFNL,          false);
    SET_BOL("50506",    IDX_BOOL_MEDIA_TAG,             false);
    SET_BOL("50506",    IDX_BOOL_SUPPORT_CFNL,          false);
    SET_BOL("50511",    IDX_BOOL_MEDIA_TAG,             false);
    SET_INT("50511",    IDX_INT_MEDIA_TYPE,             MEDIA_TYPE_VIDEO_WITH_AUDIO);
    SET_BOL("50571",    IDX_BOOL_MEDIA_TAG,             false);
    SET_INT("50571",    IDX_INT_MEDIA_TYPE,             MEDIA_TYPE_VIDEO_WITH_AUDIO);
    SET_BOL("50571",    IDX_BOOL_SUPPORT_CFNL,          false);
    SET_BOL("50572",    IDX_BOOL_MEDIA_TAG,             false);
    SET_BOL("50572",    IDX_BOOL_SUPPORT_CFNL,          false);
    SET_INT("50572",    IDX_INT_MEDIA_TYPE,             MEDIA_TYPE_VIDEO_WITH_AUDIO);
    SET_BOL("50590",    IDX_BOOL_SET_CFNRC_WITH_CFNL,   true);
    SET_STR("51009",    IDX_STR_NAF_HOST,               "nafxjktm001.ims.mnc009.mcc510.pub.3gppnetwork.org");
    SET_INT("51009",    IDX_INT_XCAP_PORT,              7077);
    SET_STR("51009",    IDX_STR_BSF_HOST,               "bsf.ims.mnc009.mcc510.pub.3gppnetwork.org");
    SET_INT("51009",    IDX_INT_GBA_PORT,               7080);
    SET_BOL("51009",    IDX_BOOL_MEDIA_TAG,             false);
    SET_BOL("51009",    IDX_BOOL_SUPPORT_CFNL,          false);
    SET_STR("51028",    IDX_STR_NAF_HOST,               "nafxjktm001.ims.mnc009.mcc510.pub.3gppnetwork.org");
    SET_INT("51028",    IDX_INT_XCAP_PORT,              7077);
    SET_STR("51028",    IDX_STR_BSF_HOST,               "bsf.ims.mnc009.mcc510.pub.3gppnetwork.org");
    SET_INT("51028",    IDX_INT_GBA_PORT,               7080);
    SET_BOL("51028",    IDX_BOOL_MEDIA_TAG,             false);
    SET_BOL("51028",    IDX_BOOL_SUPPORT_CFNL,          false);
    SET_STR("51502",    IDX_STR_BSF_HOST,               "bsf.ims.mnc002.mcc515.pub.3gppnetwork.org");
    SET_STR("51502",    IDX_STR_GBA_TYPE,               "GBA_ME");
    SET_STR("51502",    IDX_STR_GBA_PROTOCOL,           "https");
    SET_STR("51502",    IDX_STR_XCAP_PROTOCOL,          "https");
    SET_INT("51502",    IDX_INT_URL_ENCODING,           URL_ENCODING_NODE_SELECTOR);
    SET_BOL("51503",    IDX_BOOL_MEDIA_TAG,             false);
    SET_INT("51503",    IDX_INT_XCAP_PORT,              8080);
    SET_INT("51566",    IDX_INT_XCAP_PORT,              8080);
    SET_INT("51566",    IDX_INT_GBA_PORT,               8080);
    SET_STR("51566",    IDX_STR_BSF_HOST,               "bsf.ims.mnc066.mcc515.pub.3gppnetwork.org");
    SET_INT("52003",    IDX_INT_URL_ENCODING,           URL_ENCODING_NODE_SELECTOR);
    SET_BOL("52501",    IDX_BOOL_MEDIA_TAG,             false);
    SET_BOL("52501",    IDX_BOOL_TIMER_IN_CFNRY,        true);
    SET_BOL("52501",    IDX_BOOL_SUPPORT_CFNL,          false);
    SET_BOL("52501",    IDX_BOOL_NEED_QUOTATION_MARK,   true);
    SET_INT("52501",    IDX_INT_XCAP_PORT,              8080);
    SET_STR("52501",    IDX_STR_DIGEST_PWD,             "0000");
    SET_STR("52501",    IDX_STR_PHONE_CONTEXT,          "ims.mnc001.mcc525.3gppnetwork.org");
    SET_BOL("52502",    IDX_BOOL_MEDIA_TAG,             false);
    SET_BOL("52502",    IDX_BOOL_TIMER_IN_CFNRY,        true);
    SET_BOL("52502",    IDX_BOOL_SUPPORT_CFNL,          false);
    SET_BOL("52502",    IDX_BOOL_NEED_QUOTATION_MARK,   true);
    SET_INT("52502",    IDX_INT_XCAP_PORT,              8080);
    SET_STR("52502",    IDX_STR_DIGEST_PWD,             "0000");
    SET_STR("52502",    IDX_STR_PHONE_CONTEXT,          "ims.mnc002.mcc525.3gppnetwork.org");
    SET_BOL("52503",    IDX_BOOL_MEDIA_TAG,             false);
    SET_INT("52503",    IDX_INT_XCAP_PORT,              8090);
    SET_INT("52503",    IDX_INT_GBA_PORT,               8090);
    SET_INT("52505",    IDX_INT_XCAP_PORT,              8090);
    SET_INT("52506",    IDX_INT_XCAP_PORT,              8090);
    SET_BOL("52507",    IDX_BOOL_MEDIA_TAG,             false);
    SET_BOL("52507",    IDX_BOOL_TIMER_IN_CFNRY,        true);
    SET_BOL("52507",    IDX_BOOL_SUPPORT_CFNL,          false);
    SET_BOL("52507",    IDX_BOOL_NEED_QUOTATION_MARK,   true);
    SET_INT("52507",    IDX_INT_XCAP_PORT,              8080);
    SET_STR("52507",    IDX_STR_DIGEST_PWD,             "0000");
    SET_STR("52507",    IDX_STR_PHONE_CONTEXT,          "ims.mnc007.mcc525.3gppnetwork.org");
    SET_STR("52510",    IDX_STR_GBA_TYPE,               "GBA_ME");
    SET_BOL("52510",    IDX_BOOL_SUPPORT_PUT_CLIR_ROOT, false);
	SET_INT("52510",    IDX_INT_MEDIA_TYPE,             MEDIA_TYPE_SEPERATE);
    SET_BOL("52510",    IDX_BOOL_SUPPORT_PUT_CF_ROOT,   false);
    SET_BOL("52510",    IDX_BOOL_SUPPORT_CFNL,          false);
    SET_STR("53001",    IDX_STR_NAF_HOST,               "xcap.ims.mnc001.mcc530.pub.3gppnetwork.org");
    SET_STR("53001",    IDX_STR_BSF_HOST,               "bsf.mnc001.mcc530.pub.3gppnetwork.org");
    SET_INT("53001",    IDX_INT_GBA_PORT,               443);
    SET_INT("53001",    IDX_INT_XCAP_PORT,              443);
    SET_STR("53001",    IDX_STR_GBA_PROTOCOL,           "https");
    SET_STR("53001",    IDX_STR_XCAP_PROTOCOL,          "https");
    SET_INT("53001",    IDX_INT_URL_ENCODING,           URL_ENCODING_NODE_SELECTOR);
    SET_INT("53001",    IDX_INT_MEDIA_TYPE,             MEDIA_TYPE_ONLY_AUDIO);
    SET_STR("53005",    IDX_STR_NAF_HOST,               "xcap.ims.mnc005.mcc530.pub.3gppnetwork.spark.co.nz");
    SET_STR("53005",    IDX_STR_BSF_HOST,               "bsf.ims.mnc005.mcc530.pub.3gppnetwork.spark.co.nz");
    SET_STR("53005",    IDX_STR_GBA_PROTOCOL,           "https");
    SET_STR("53005",    IDX_STR_XCAP_PROTOCOL,          "https");
    SET_INT("53005",    IDX_INT_GBA_PORT,               8444);
    SET_INT("53005",    IDX_INT_XCAP_PORT,              8443);
    SET_STR("53005",    IDX_STR_GBA_TYPE,               "GBA_ME");
    SET_INT("53024",    IDX_INT_GBA_PORT,               8080);
    SET_STR("53024",    IDX_STR_NAF_HOST,               "xcap.ims.2degrees.net.nz");
    SET_STR("60202",    IDX_STR_BSF_HOST,               "bsf.ims.mnc002.mcc602.pub.3gppnetwork.org");
    SET_BOL("60202",    IDX_BOOL_REMOVE_INVALID_ACTIONS,true);
    SET_BOL("60202",    IDX_BOOL_SET_CFNRC_WITH_CFNL,   true);
    SET_INT("60204",    IDX_INT_GBA_PORT,               8091);
    SET_STR("60204",    IDX_STR_BSF_HOST,               "bsf.ims.mnc004.mcc602.pub.3gppnetwork.org");
    SET_STR("60204",    IDX_STR_XCAP_PROTOCOL,          "http");
    SET_STR("60204",    IDX_STR_GBA_PROTOCOL,           "http");
    SET_INT("65501",    IDX_INT_XCAP_PORT,              8090);
    SET_STR("65501",    IDX_STR_AUID,                   "MyService/simservs.ngn.etsi.org");
    SET_INT("65501",    IDX_INT_URL_ENCODING,           URL_ENCODING_NONE);
    SET_BOL("65501",    IDX_BOOL_MEDIA_TAG,             false);
    SET_STR("65502",    IDX_STR_NAF_HOST,               "xcap.ims.mnc002.mcc655.pub.3gppnetwork.org");
    SET_STR("65502",    IDX_STR_BSF_HOST,               "bsf.ims.mnc002.mcc655.pub.3gppnetwork.org");
    SET_INT("65502",    IDX_INT_URL_ENCODING,           URL_ENCODING_NODE_SELECTOR);
    SET_INT("65510",    IDX_INT_XCAP_PORT,              8080);
    SET_INT("65510",    IDX_INT_GBA_PORT,               8090);
    SET_BOL("65510",    IDX_BOOL_MEDIA_TAG,             false);
    SET_INT("70401",    IDX_INT_XCAP_PORT,              8080);
    SET_BOL("70401",    IDX_BOOL_SUPPORT_PUT_CF_ROOT,   false);
    SET_STR("70401",    IDX_STR_GBA_TYPE,              "GBA_ME");
    SET_BOL("70401",    IDX_BOOL_SUPPORT_ADDING_UNPROVISIONED_RULE, false);
    SET_STR("70402",    IDX_STR_BSF_HOST,               "bsf.ims.MNC002.mcc704.pub.3gppnetwork.org");
    SET_INT("71606",    IDX_INT_XCAP_PORT,              8090);
    SET_INT("71606",    IDX_INT_GBA_PORT,               8080);
    SET_STR("71606",    IDX_STR_BSF_HOST,               "bsf.ims.mnc006.mcc716.pub.3gppnetwork.org");
    SET_INT("71617",    IDX_INT_GBA_PORT,               8080);
    SET_STR("71617",    IDX_STR_BSF_HOST,               "bsf.mnc017.mcc716.pub.3gppnetwork.org");
    SET_STR("722310",   IDX_STR_BSF_HOST,               "bsf.ims.mnc310.mcc722.pub.3gppnetwork.org");
    SET_INT("72402",    IDX_INT_URL_ENCODING,           URL_ENCODING_NODE_SELECTOR);
    SET_BOL("72402",    IDX_BOOL_SUPPORT_PUT_CF_ROOT,   false);
    SET_BOL("72402",    IDX_BOOL_SUPPORT_CFNL,          false);
    SET_STR("72402",    IDX_STR_RULEID_CFU,             "CFU");
    SET_STR("72402",    IDX_STR_RULEID_CFB,             "CFB");
    SET_STR("72402",    IDX_STR_RULEID_CFNRY,           "CFNR");
    SET_STR("72402",    IDX_STR_RULEID_CFNRC,           "CFNRc");
    SET_STR("72402",    IDX_STR_BSF_HOST,               "bsf.ims.mnc002.mcc724.pub.3gppnetwork.org");
    SET_BOL("72402",    IDX_BOOL_SUPPORT_ADDING_UNPROVISIONED_RULE, false);
    SET_BOL("72402",    IDX_BOOL_MEDIA_TAG,             false);
    SET_INT("72403",    IDX_INT_URL_ENCODING,           URL_ENCODING_NODE_SELECTOR);
    SET_BOL("72403",    IDX_BOOL_SUPPORT_PUT_CF_ROOT,   false);
    SET_BOL("72403",    IDX_BOOL_SUPPORT_CFNL,          false);
    SET_STR("72403",    IDX_STR_RULEID_CFU,             "CFU");
    SET_STR("72403",    IDX_STR_RULEID_CFB,             "CFB");
    SET_STR("72403",    IDX_STR_RULEID_CFNRY,           "CFNR");
    SET_STR("72403",    IDX_STR_RULEID_CFNRC,           "CFNRc");
    SET_STR("72403",    IDX_STR_BSF_HOST,               "bsf.ims.mnc003.mcc724.pub.3gppnetwork.org");
    SET_BOL("72403",    IDX_BOOL_SUPPORT_ADDING_UNPROVISIONED_RULE, false);
    SET_BOL("72403",    IDX_BOOL_MEDIA_TAG,             false);
    SET_INT("72404",    IDX_INT_URL_ENCODING,           URL_ENCODING_NODE_SELECTOR);
    SET_BOL("72404",    IDX_BOOL_SUPPORT_PUT_CF_ROOT,   false);
    SET_BOL("72404",    IDX_BOOL_SUPPORT_CFNL,          false);
    SET_STR("72404",    IDX_STR_RULEID_CFU,             "CFU");
    SET_STR("72404",    IDX_STR_RULEID_CFB,             "CFB");
    SET_STR("72404",    IDX_STR_RULEID_CFNRY,           "CFNR");
    SET_STR("72404",    IDX_STR_RULEID_CFNRC,           "CFNRc");
    SET_STR("72404",    IDX_STR_BSF_HOST,               "bsf.ims.mnc004.mcc724.pub.3gppnetwork.org");
    SET_BOL("72404",    IDX_BOOL_SUPPORT_ADDING_UNPROVISIONED_RULE, false);
    SET_BOL("72404",    IDX_BOOL_MEDIA_TAG,             false);
    SET_INT("72405",    IDX_INT_XCAP_PORT,              8090);
    SET_INT("72405",    IDX_INT_GBA_PORT,               8080);
    SET_STR("72406",    IDX_STR_BSF_HOST,               "bsf.mnc006.mcc724.pub.3gppnetwork.org");
    SET_INT("72406",    IDX_INT_XCAP_PORT,              8090);
    SET_INT("72406",    IDX_INT_GBA_PORT,               8080);
    SET_BOL("72406",    IDX_BOOL_MEDIA_TAG,             false);
    SET_BOL("72406",    IDX_BOOL_NEED_QUOTATION_MARK,   false);
    SET_BOL("72406",    IDX_BOOL_USE_SAVED_XUI,         true);
    SET_STR("72410",    IDX_STR_BSF_HOST,               "bsf.mnc010.mcc724.pub.3gppnetwork.org");
    SET_INT("72410",    IDX_INT_XCAP_PORT,              8090);
    SET_INT("72410",    IDX_INT_GBA_PORT,               8080);
    SET_BOL("72410",    IDX_BOOL_MEDIA_TAG,             false);
    SET_BOL("72410",    IDX_BOOL_NEED_QUOTATION_MARK,   false);
    SET_BOL("72410",    IDX_BOOL_USE_SAVED_XUI,         true);
    SET_STR("72411",    IDX_STR_BSF_HOST,               "bsf.mnc011.mcc724.pub.3gppnetwork.org");
    SET_INT("72411",    IDX_INT_XCAP_PORT,              8090);
    SET_INT("72411",    IDX_INT_GBA_PORT,               8080);
    SET_BOL("72411",    IDX_BOOL_MEDIA_TAG,             false);
    SET_BOL("72411",    IDX_BOOL_NEED_QUOTATION_MARK,   false);
    SET_BOL("72411",    IDX_BOOL_USE_SAVED_XUI,         true);
    SET_STR("72423",    IDX_STR_BSF_HOST,               "bsf.mnc023.mcc724.pub.3gppnetwork.org");
    SET_INT("72423",    IDX_INT_XCAP_PORT,              8090);
    SET_INT("72423",    IDX_INT_GBA_PORT,               8080);
    SET_BOL("72423",    IDX_BOOL_MEDIA_TAG,             false);
    SET_BOL("72423",    IDX_BOOL_NEED_QUOTATION_MARK,   false);
    SET_BOL("72423",    IDX_BOOL_USE_SAVED_XUI,         true);
    SET_BOL("72480",    IDX_BOOL_MEDIA_TAG,             false);                                        // Ericsson IODT lab at Kista
    SET_STR("72480",    IDX_STR_NAF_HOST,               "naf.tcs.ics.se");                             // Ericsson IODT lab at Kista
    SET_STR("72480",    IDX_STR_BSF_HOST,               "bsf.tcs.ics.se");                             // Ericsson IODT lab at Kista
    SET_STR("72480",    IDX_STR_AUID,                   "simservs.ngn.etsi.org");                      // Ericsson IODT lab at Kista
    SET_INT("72480",    IDX_INT_XCAP_PORT,              8080);                                         // Ericsson IODT lab at Kista
    SET_INT("72480",    IDX_INT_GBA_PORT,               10080);                                        // Ericsson IODT lab at Kista
    SET_STR("73001",    IDX_STR_BSF_HOST,               "bsf.ims.mnc001.mcc730.pub.3gppnetwork.org");
    SET_INT("73001",    IDX_INT_XCAP_PORT,              8080);
    SET_INT("73001",    IDX_INT_GBA_PORT,               10080);
    SET_BOL("73001",    IDX_BOOL_SUPPORT_ISIM,          false);
    SET_STR("73002",    IDX_STR_BSF_HOST,               "bsf.ims.mnc002.mcc730.pub.3gppnetwork.org");
    SET_INT("73002",    IDX_INT_XCAP_PORT,              8090);
    SET_INT("73002",    IDX_INT_GBA_PORT,               8080);
    SET_BOL("73002",    IDX_BOOL_MEDIA_TAG,             false);
    SET_INT("73003",    IDX_INT_XCAP_PORT,              8090);
    SET_INT("73003",    IDX_INT_GBA_PORT,               8080);
    SET_INT("732123",    IDX_INT_XCAP_PORT,             8090);
    SET_INT("732123",    IDX_INT_GBA_PORT,              8080);
    SET_STR("732123",    IDX_STR_GBA_TYPE,              "GBA_ME");
    SET_STR("732123",    IDX_STR_RULEID_CFU,            "cfu");
    SET_STR("732123",    IDX_STR_RULEID_CFB,            "cfb");
    SET_STR("732123",    IDX_STR_RULEID_CFNRY,          "cfnr");
    SET_STR("732123",    IDX_STR_RULEID_CFNRC,          "cfnrc");
    SET_BOL("732123",    IDX_BOOL_MEDIA_TAG,             false);
    SET_INT("732130",   IDX_INT_XCAP_PORT,              8090);
    SET_STR("732130",   IDX_STR_AUID,                   "MYSERVICE/simservs.ngn.etsi.org");
    SET_INT("73602",    IDX_INT_GBA_PORT,              10080);
    SET_STR("73602",    IDX_STR_AUID,                   "mmtel-service/simservs.ngn.etsi.org");
    SET_INT("74001",    IDX_INT_XCAP_PORT,              8080);
    SET_INT("74001",    IDX_INT_GBA_PORT,               8080);
    SET_BOL("74001",    IDX_BOOL_SUPPORT_ADDING_UNPROVISIONED_RULE, false);
    SET_STR("74001",    IDX_STR_GBA_TYPE,               "GBA_ME");
    SET_BOL("90128",    IDX_BOOL_MEDIA_TAG,             false);

    /* End of allowable modified section */
}

void mask_ip_addr(char* data, int length){
	int idx = 0, mask_count = 0;
#if defined(__SENSITIVE_DATA_MOSAIC_PARTIAL__)
    #define MAX_COUNT 3
#elif defined (__SENSITIVE_DATA_MOSAIC_FULL__)
    #define MAX_COUNT 8
#else
    #define MAX_COUNT 0
#endif
	while (idx < length && mask_count < MAX_COUNT) {
		if ((data[idx] >= '0' && data[idx] <= '9') ||
			(data[idx] >= 'a' && data[idx] <= 'f') ||
			(data[idx] >= 'A' && data[idx] <= 'F')) {
			data[idx] = '*';
		}
		else if (data[idx] == '.' || data[idx] == ':'){
			mask_count++;
		}
		else
			break;

		idx++;
	}
}

void mask_char(char* data, int length) {
#ifndef __SENSITIVE_DATA_MOSAIC_NONE__

#if defined(__SENSITIVE_DATA_MOSAIC_PARTIAL__)
	#define MAX_MASK_LEN 11
	int idx;

    if (length <= 6)
		return;

	for (idx = 6; idx < MAX_MASK_LEN && idx < length; idx++ ) {
		if ((data[idx] >= '0' && data[idx] <= '9') ||
			(data[idx] >= 'a' && data[idx] <= 'z') ||
			(data[idx] >= 'A' && data[idx] <= 'Z')) {
			data[idx] = '*';
		}
		else
			break;
	}

#elif defined (__SENSITIVE_DATA_MOSAIC_FULL__)
	#define MAX_MASK_LEN 20
	int idx;

	for (idx = 0; idx < MAX_MASK_LEN && idx < length; idx++ ) {
		if ((data[idx] >= '0' && data[idx] <= '9') ||
			(data[idx] >= 'a' && data[idx] <= 'z') ||
			(data[idx] >= 'A' && data[idx] <= 'Z')) {
			data[idx] = '*';
		}
	}
#endif

#endif

}

void mask_digit(char* data, int length) {
#ifndef __SENSITIVE_DATA_MOSAIC_NONE__

#if defined(__SENSITIVE_DATA_MOSAIC_PARTIAL__)
	int idx = 2;
#elif defined (__SENSITIVE_DATA_MOSAIC_FULL__)
	int idx = 0;
#endif
	if (length <= idx)
		return;

	while (data[idx] != '\0' && idx < length) {
		if (data[idx] >= '0' && data[idx] <= '9') {
			data[idx] = '*';
		}
		idx++;
	}

#endif
}

void mask_sensitive_data(char* data, int length) {
#ifndef __SENSITIVE_DATA_MOSAIC_NONE__
	#define PATTERN_COUNT 12
	#define PATTERN_CCCI 6
	const char* pattern_xml[PATTERN_COUNT] = {"saveImsi", "getSimInfo: ", "imsi=", "impi=", "imei=", "sip:", "sips:", "tel:", "number=", "username=", "ETag", "decodedString="};
	const char* pattern_ccci[PATTERN_CCCI] = {"urcinfo", "buf=", "ECUSD=", "CURLINFO_TEXT:", "data=", "info="};
	char *head = NULL;
	int idx;
	int search_length;

	// mask IP address
	head = data;
	while (1) {
		head = strstr(head, "address: ");
		if (head != NULL) {
			head += strlen("address: ");
			search_length = length - (head - data);
			mask_ip_addr(head, search_length);
		}
		else
			break;
	}

	// mask char
	for (idx = 0; idx < PATTERN_COUNT; idx++) {
		head = data;
		while (1) {
			head = strstr(head, (const char*)pattern_xml[idx]);
			if (head != NULL) {
				head += strlen((const char*)pattern_xml[idx]);
				search_length = length - (head - data);
				mask_char(head, search_length);
			}
			else
				break;
	    }
	}

	// mask CCCI info.
	for (idx = 0; idx < PATTERN_CCCI; idx++) {
		head = data;
		while (1) {
			head = strstr(head, (const char*)pattern_ccci[idx]);
			if (head != NULL) {
				head += strlen((const char*)pattern_ccci[idx]);
				search_length = length - (head - data);
				mask_digit(head, search_length);
			}
			else
				break;
	    }
	}
#endif
}
