/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2005
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
*  LAWS PRINCIPLES.  ANY DISPUTES, CONTROVERSIES OR CLAIMS ARISING THEREOF AND
*  RELATED THERETO SHALL BE SETTLED BY ARBITRATION IN SAN FRANCISCO, CA, UNDER
*  THE RULES OF THE INTERNATIONAL CHAMBER OF COMMERCE (ICC).
*
*****************************************************************************/

#ifndef DMF_APP
#define DMF_APP(APP_ID)
#endif

#ifndef DMF_APP_END
#define DMF_APP_END
#endif

#ifndef DMF_CMD_REQ
#define DMF_CMD_REQ(STRUCT_NAME, PARA_NAME)
#endif

#ifndef DMF_CMD_REQ_END
#define DMF_CMD_REQ_END(STRUCT_NAME)
#endif

#ifndef DMF_CMD_CNF
#define DMF_CMD_CNF(CNF_TYPE, STRUCT_NAME, PARA_NAME)
#endif

#ifndef DMF_CMD_CNF_END
#define DMF_CMD_CNF_END(STRUCT_NAME)
#endif

#ifndef DMF_URC_IND
#define DMF_URC_IND(IND_TYPE, STRUCT_NAME, PARA_NAME)
#endif

#ifndef DMF_URC_IND_END
#define DMF_URC_IND_END(STRUCT_NAME)
#endif

#ifndef DMF_FIELD_VAR
#define DMF_FIELD_VAR(VAR_TYPE, VAR_NAME, MAX_VAL)
#endif

#ifndef DMF_FIELD_VAR_O
#define DMF_FIELD_VAR_O(VAR_TYPE, VAR_NAME, MAX_VAL)
#endif


#ifndef DMF_FIELD_VAR_ARRAY
#define DMF_FIELD_VAR_ARRAY(VAR_TYPE, VAR_NAME, LENGTH)
#endif

#ifndef DMF_FIELD_STRING
#define DMF_FIELD_STRING(STR_NAME, LENGTH)
#endif


#if !defined(DMF_CMD_REQ_SEC) && !defined(DMF_CMD_CNF_SEC) && !defined(DMF_URC_IND_SEC)
#define DMF_CMD_REQ_SEC
#define DMF_CMD_CNF_SEC
#define DMF_URC_IND_SEC
#endif

#define UNUSED_FIELD    0

/*Define structures*/

DMF_APP(DEFAULT_CUST_APP_ID)

    // Define CMD_REQ structure 
    #ifdef DMF_CMD_REQ_SEC
        DMF_CMD_REQ(dmf_custom_app_cmd_req_struct, custom_app_cmd_req)
            DMF_FIELD_VAR(kal_uint32, cause, 2000)
            DMF_FIELD_STRING(event, 100)
        DMF_CMD_REQ_END(dmf_custom_app_cmd_req_struct)
    #endif 

    // Define CMD_CNF structure 
    #ifdef DMF_CMD_CNF_SEC
        DMF_CMD_CNF(DMF_CUSTOM_ATTACH_COUNT_CNF, dmf_custom_attach_count_cnf_struct, custom_attach_count_cnf)
            DMF_FIELD_VAR(kal_uint32, cause, UNUSED_FIELD)
            DMF_FIELD_STRING(event, 100)
            DMF_FIELD_VAR(kal_uint32, lte_attach_request_count, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint32, lte_attach_success_count, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint32, lte_attach_fail_count, UNUSED_FIELD)
        DMF_CMD_CNF_END(dmf_custom_attach_count_cnf_struct)
    #endif 

    // Define URC structure
    #ifdef DMF_URC_IND_SEC
        DMF_URC_IND(DMF_CUSTOM_ATTACH_COUNT_IND, dmf_custom_attach_count_ind_struct, custom_attach_count_ind)
            DMF_FIELD_VAR(kal_uint32, cause, UNUSED_FIELD)
            DMF_FIELD_STRING(event, 100)
            DMF_FIELD_VAR(kal_uint32, lte_attach_request_count, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint32, lte_attach_success_count, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint32, lte_attach_fail_count, UNUSED_FIELD)
        DMF_URC_IND_END(dmf_custom_attach_count_ind_struct)    
    #endif
    
DMF_APP_END

#include "custom_dmf_kpi_app_cmd.h"



#undef DMF_APP
#undef DMF_APP_END
#undef DMF_CMD_REQ
#undef DMF_CMD_REQ_END
#undef DMF_CMD_CNF
#undef DMF_CMD_CNF_END
#undef DMF_URC_IND
#undef DMF_URC_IND_END
#undef DMF_FIELD_VAR
#undef DMF_FIELD_VAR_O
#undef DMF_FIELD_VAR_ARRAY
#undef DMF_FIELD_STRING
#undef DMF_CMD_REQ_SEC
#undef DMF_CMD_CNF_SEC
#undef DMF_URC_IND_SEC
#undef DMF_CUSTOM_SEC
#undef UNUSED_FIELD

