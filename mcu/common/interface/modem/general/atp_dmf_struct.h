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

/*****************************************************************************
 *
 * Filename:
 * ---------
 *  atp_dmf_struct.h
 *
 *
 * Description:
 * ------------
 *  This file defines message structures of ATP_DMF interface
 *
 * Author:
 * -------
 * -------
 *
 *============================================================================
 ****************************************************************************/
#ifndef _ATP_DMF_STRUCT_H_
#define _ATP_DMF_STRUCT_H_

#include "atp_public_defs.h"

#define DMF_APMAC_LEN 18 

typedef enum 
{  
    ATP_MT_DMF_CMD_CNF_TYPE_NULL = 0,

    #define DMF_CMD_CNF(CNF_TYPE, STRUCT_NAME, PARA_NAME)   CNF_TYPE,
    #define DMF_CUSTOM_SEC
    #include "atp_dmf_cmd_def.h"
    
    ATP_MT_DMF_CMD_CNF_TYPE_MAX,
} atp_mt_dmf_cmd_cnf_type_enum;

typedef enum 
{  
    ATP_MT_DMF_URC_IND_TYPE_NULL = 0,

    #define DMF_URC_IND(IND_TYPE, STRUCT_NAME, PARA_NAME)   IND_TYPE,
    #define DMF_CUSTOM_SEC
    #include "atp_dmf_cmd_def.h"
    
    ATP_MT_DMF_URC_IND_TYPE_MAX,
} atp_mt_dmf_urc_ind_type_enum;


/*****************************
 *Define REQ structure here
 ******************************/
#define DMF_CMD_REQ(STRUCT_NAME, PARA_NAME) \
typedef struct \
{
    #define DMF_FIELD_VAR(VAR_TYPE, VAR_NAME, MAX_VAL) VAR_TYPE    VAR_NAME;
    #define DMF_FIELD_VAR_O(VAR_TYPE, VAR_NAME, MAX_VAL) kal_bool is_##VAR_NAME##_present;\
                                                VAR_TYPE    VAR_NAME;
    #define DMF_FIELD_VAR_ARRAY(VAR_TYPE, VAR_NAME, LENGTH) VAR_TYPE    VAR_NAME[LENGTH];
    #define DMF_FIELD_STRING(STR_NAME, LENGTH)  kal_uint16  STR_NAME##_len; \
                                                kal_char    STR_NAME[LENGTH];
#define DMF_CMD_REQ_END(STRUCT_NAME) \
} STRUCT_NAME;

#define DMF_CMD_REQ_SEC
#define DMF_CUSTOM_SEC
#include "atp_dmf_cmd_def.h"



/*****************************
 *Define CNF structure here
 ******************************/
#define DMF_CMD_CNF(RES_TYPE, STRUCT_NAME, PARA_NAME) \
typedef struct \
{

    #define DMF_FIELD_VAR(VAR_TYPE, VAR_NAME, MAX_VAL) VAR_TYPE    VAR_NAME;
    #define DMF_FIELD_VAR_ARRAY(VAR_TYPE, VAR_NAME, LENGTH) VAR_TYPE    VAR_NAME[LENGTH];
    #define DMF_FIELD_STRING(STR_NAME, LENGTH)  kal_uint16  STR_NAME##_len; \
                                                kal_char    STR_NAME[LENGTH];

#define DMF_CMD_CNF_END(STRUCT_NAME) \
} STRUCT_NAME;

#define DMF_CMD_CNF_SEC
#define DMF_CUSTOM_SEC
#include "atp_dmf_cmd_def.h"



/*****************************
 *Define IND structure here
 ******************************/
#define DMF_URC_IND(IND_TYPE, STRUCT_NAME, PARA_NAME) \
typedef struct \
{

    #define DMF_FIELD_VAR(VAR_TYPE, VAR_NAME, MAX_VAL) VAR_TYPE    VAR_NAME;
    #define DMF_FIELD_VAR_ARRAY(VAR_TYPE, VAR_NAME, LENGTH) VAR_TYPE    VAR_NAME[LENGTH];
    #define DMF_FIELD_STRING(STR_NAME, LENGTH)  kal_uint16  STR_NAME##_len; \
                                                kal_char    STR_NAME[LENGTH];

#define DMF_URC_IND_END(STRUCT_NAME) \
} STRUCT_NAME;

#define DMF_URC_IND_SEC
#define DMF_CUSTOM_SEC
#include "atp_dmf_cmd_def.h"



typedef struct 
{  
    LOCAL_PARA_HDR 
    kal_uint16 ch_id;    
    kal_uint32 app_id;

    union {
        #define DMF_CMD_REQ(STRUCT_NAME, PARA_NAME)    STRUCT_NAME  PARA_NAME;
        #define DMF_CUSTOM_SEC
        #include "atp_dmf_cmd_def.h"
        #undef DMF_CMD_REQ
    } p;
} atp_mt_dmf_cmd_req_struct;


typedef struct 
{  
    LOCAL_PARA_HDR 
    kal_uint16 ch_id;
    kal_uint32 app_id;
    proxy_cmd_result_enum result;
    atp_mt_dmf_cmd_cnf_type_enum cnf_type;

    union {
        #define DMF_CMD_CNF(RES_TYPE, STRUCT_NAME, PARA_NAME)    STRUCT_NAME  PARA_NAME;
        #define DMF_CUSTOM_SEC
        #include "atp_dmf_cmd_def.h"
    } p;
   
} atp_mt_dmf_cmd_cnf_struct;


typedef struct 
{  
    LOCAL_PARA_HDR 
    kal_uint32 app_id;
    atp_mt_dmf_urc_ind_type_enum ind_type;
    
    union {
        #define DMF_URC_IND(IND_TYPE, STRUCT_NAME, PARA_NAME)    STRUCT_NAME  PARA_NAME;
        #define DMF_CUSTOM_SEC
        #include "atp_dmf_cmd_def.h"
    } p;

} atp_mt_dmf_urc_ind_struct;


typedef struct 
{  
    LOCAL_PARA_HDR 
    kal_uint8 apmac[DMF_APMAC_LEN];

} atp_mt_dmf_wifiasc_req_struct;


#endif /* _ATP_DMF_STRUCT_H_ */
