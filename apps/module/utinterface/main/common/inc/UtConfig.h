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
#ifndef UTCONFIG_H_INCLUDED
#define UTCONFIG_H_INCLUDED
#include <string>
#include <map>

#include "Type.h"

using namespace std;

enum IdxBool {
    IDX_BOOL_MEDIA_TAG,
    IDX_BOOL_SUPPORT_CFNL,
    IDX_BOOL_ENABLE_TMPI,
    IDX_BOOL_XCAP_CACHE,
    IDX_BOOL_SUPPORT_PUT_CF_ROOT,
    IDX_BOOL_TIMER_IN_CFNRY,
    IDX_BOOL_SUPPORT_PUT_CLIR_ROOT,
    IDX_BOOL_NEED_QUOTATION_MARK,
    IDX_BOOL_SSL_TRUST,
    IDX_BOOL_GZIP_SUPPORT,
    IDX_BOOL_SET_CFNRC_WITH_CFNL,
    IDX_BOOL_FWD_NUM_USE_SIP_URI,
    IDX_BOOL_CB_NO_ACTION_ALLOW,
    IDX_BOOL_CLEAR_CACHE_AFTER_PUT,
    IDX_BOOL_REMOVE_INVALID_ACTIONS,
    IDX_BOOL_USE_FIRST_XUI_ELEMENT,
    IDX_BOOL_USE_SAVED_XUI,
    IDX_BOOL_SUPPORT_USERNAME_TMPI,
    IDX_BOOL_SUPPORT_ADDING_UNPROVISIONED_RULE,
    IDX_BOOL_ENABLE_CUSTOM_UA_STR,
    IDX_BOOL_EXCLUSIVE_CB,
    IDX_BOOL_SUPPORT_PUT_CW_ROOT,    
	IDX_BOOL_SUPPORT_ADDING_NAMESPACE,
    IDX_BOOL_NEED_CHECK_ISIM_INFO,
    IDX_BOOL_SUPPORT_RULE_LEVEL_SETTING,
    IDX_BOOL_SUPPORT_QUERY_SIMSEVRS,
    IDX_BOOL_SUPPORT_ENABLE_BY_COND,
    IDX_BOOL_SUPPORT_DISABLE_BY_COND,
    IDX_BOOL_CANCEL_ENABLED_RULE_ONLY,
    IDX_BOOL_TCP_SESSION_KEEP_ALIVE,
    IDX_BOOL_SUPPORT_ISIM,
    IDX_BOOL_TOTAL
};

enum IdxStr {
    IDX_STR_XCAP_PROTOCOL,
    IDX_STR_GBA_PROTOCOL,
    IDX_STR_NAF_HOST,
    IDX_STR_BSF_HOST,
    IDX_STR_BSF_URL_PATH,
    IDX_STR_AUID,
    IDX_STR_DIGEST_ID,
    IDX_STR_DIGEST_PWD,
    IDX_STR_IMEI_HEADER,
    IDX_STR_GBA_TYPE,
    IDX_STR_PHONE_CONTEXT,
    IDX_STR_RULEID_CFU,
    IDX_STR_RULEID_CFB,
    IDX_STR_RULEID_CFNRY,
    IDX_STR_RULEID_CFNRC,
    IDX_STR_RULEID_CFNL,
    IDX_STR_RULEID_BAOC,
    IDX_STR_RULEID_BAOIC,
    IDX_STR_RULEID_BAOICXH,
    IDX_STR_RULEID_BAIC,
	IDX_STR_RULEID_BAICA,
    IDX_STR_RULEID_BAICR,
    IDX_STR_BSF_REALM,
    IDX_STR_UA_PREFIX,
    IDX_STR_UA_MODEL,
    IDX_STR_UA_DEFAULT,
    IDX_STR_TOTAL
};

enum IdxInt {
    IDX_INT_XCAP_PORT,
    IDX_INT_GBA_PORT,
    IDX_INT_MEDIA_TYPE,
    IDX_INT_URL_ENCODING,
    IDX_INT_XCAP_CONNECTION_TIMEOUT,
    IDX_INT_XCAP_RETRY_TIMES,
    IDX_INT_GBA_CONNECTION_TIMEOUT,
    IDX_INT_GBA_RETRY_TIMES,
    IDX_INT_DNS_SERVER_IPV4V6_PRIORITY,
    IDX_INT_TOTAL
};

enum MediaType {
    /** [Standard]
     *      SERVICE_CLASS_VOICE  : (audio), (audio & video)
     *      SERVICE_CLASS_VIDEO  : (video), (audio & video)
     *      SERVICE_CLASS_NONE   : (audio), (video), (audio & video)
     *      illegal :
     */
    MEDIA_TYPE_STANDARD,
    /** [Only Audio]
     *      SERVICE_CLASS_VOICE  : (audio)
     *      SERVICE_CLASS_VIDEO  :
     *      SERVICE_CLASS_NONE   : (audio)
     *      illegal : (video), (audio & video)
     */
    MEDIA_TYPE_ONLY_AUDIO,
    /** [Seperate]
     *      SERVICE_CLASS_VOICE  : (audio)
     *      SERVICE_CLASS_VIDEO  : (video)
     *      SERVICE_CLASS_NONE   : (audio), (video)
     *      illegal : (audio & video)
     */
    MEDIA_TYPE_SEPERATE,
    /** [Video with Audio]
     *      SERVICE_CLASS_VOICE  : (audio)
     *      SERVICE_CLASS_VIDEO  : (audio & video)
     *      SERVICE_CLASS_NONE   : (audio), (audio & video)
     *      illegal : (video)
     */
    MEDIA_TYPE_VIDEO_WITH_AUDIO,
    MEDIA_TYPE_TOTAL
};

enum CUSTOM_RULEID_LEVEL{
	CUSTOM_ID_FIND,
	CUSTOM_ID_CREATE,
};

#define URL_ENCODING_NONE           0
#define URL_ENCODING_DOC_SELECTOR   1 << 0
#define URL_ENCODING_NODE_SELECTOR  1 << 1

enum DNSIPv4v6Priority {
    DNS_SERVER_IPV6_FIRST,
    DNS_SERVER_IPV4_FIRST,
};

class UtConfig {

public:
    static UtConfig* getInstance();
    UtConfig* setSimId(int simId);
    UtConfig* setNetInfo(network_info_t* netInfo);
    int getSimId();
    network_info_t* getNetInfo();
    bool get(IdxBool idx);
    string get(IdxStr idx);
    int get(IdxInt idx);
    static string mediaTypeToString(MediaType type);
    int getOsVersion();

private:
    UtConfig();
    ~UtConfig();
    void init();
    void custom_init();

    void setOpBool(string mccmnc, IdxBool idx, bool on);
    void setOpStr(string mccmnc, IdxStr idx, string on);
    void setOpInt(string mccmnc, IdxInt idx, int on);
    void readOsVersion();

    int getOpBool(string mccmnc, IdxBool idx);
    int getOpStr(string mccmnc, IdxStr idx, string *value);
    int getOpInt(string mccmnc, IdxInt idx);

    int getPropBool(IdxBool idx);
    string getPropStr(IdxStr idx);
    int getPropInt(IdxInt idx);

    void setMapBool(map<string, map<IdxBool, bool>> *mp, string key, IdxBool idx, bool on);
    void setMapStr(map<string, map<IdxStr, string>> *mp, string key, IdxStr idx, string on);
    void setMapInt(map<string, map<IdxInt, int>> *mp, string key, IdxInt idx, int on);

    int getMapBool(map<string, map<IdxBool, bool>> *mp, string key, IdxBool idx);
    int getMapStr(map<string, map<IdxStr, string>> *mp, string key, IdxStr idx, string *value);
    int getMapInt(map<string, map<IdxInt, int>> *mp, string key, IdxInt idx);

    string idxBoolToString(IdxBool idx);
    string idxStrToString(IdxStr idx);
    string idxIntToString(IdxInt idx);

    static UtConfig* sInstance;
    int mSimId;
    network_info_t* mNetInfo;
    string mMccmnc;
    bool mDefaultBool[IDX_BOOL_TOTAL];
    string mDefaultStr[IDX_STR_TOTAL];
    int mDefaultInt[IDX_INT_TOTAL];
    map<string, map<IdxBool, bool>> mMapOpBool;
    map<string, map<IdxStr, string>> mMapOpStr;
    map<string, map<IdxInt, int>> mMapOpInt;
    map<string, map<IdxBool, bool>> mMapOpTestSimBool;
    map<string, map<IdxStr, string>> mMapOpTestSimStr;
    map<string, map<IdxInt, int>> mMapOpTestSimInt;

    int mOSverion;
};




#endif /* UTCONFIG_H_INCLUDED */
