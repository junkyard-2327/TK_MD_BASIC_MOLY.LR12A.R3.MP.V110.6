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
 * 
 *
 * Project:
 * --------
 *   MAUI
 *
 * Description:
 * ------------
 * 
 *
 * Author:
 * -------
 * 
 *
 *============================================================================
 *             HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/
#include "kal_general_types.h"
#include "sbp_public_utility.h"
#include "kal_public_api.h"
#include "nvram_interface.h"
#include "nvram_data_items.h"
#include "nvram_enums.h"
#include "nvram_editor_data_item.h"
#include "c2k_nvram_def.h"
#include "css_msgid.h"
#include "md_sap.h"


#ifdef __CDMA2000_RAT__
extern kal_uint16 calcChecksum(kal_uint8 *ptrtodata, kal_uint16 sizeofdata);

typedef enum
{
    VAL_EHRPD_OFF = 0,
    VAL_EHRPD_ON,
    VAL_EHRPD_MODE_NUM
}ValEhrpdModeE;

extern void ValHrpdAtEhrpd(ValEhrpdModeE Mode);

kal_uint32 nvram_query_sbp_id_by_c2k()
{
    kal_uint8 *buf_css_misc; 
    kal_uint32 sbp_id = 0xFF;
    cssMiscDbmSegment *css_misc_p = NULL;

    buf_css_misc  = get_ctrl_buffer(sizeof(cssMiscDbmSegment));
            
    nvram_external_read_data(NVRAM_EF_C2K_CSS_MISC_LID,
                              1,
                              buf_css_misc,
                              sizeof(cssMiscDbmSegment));

    css_misc_p = (cssMiscDbmSegment *)buf_css_misc;

    sbp_id = css_misc_p->sbp_id;

    free_ctrl_buffer(buf_css_misc);

    return sbp_id;

}


void nvram_write_sbp_id_by_c2k(kal_uint32 sbp_id)
{
    kal_uint8 *buf_css_misc; 
    cssMiscDbmSegment *css_misc_p = NULL;
    kal_uint16 home_eri_vals[] = {1};

    buf_css_misc  = get_ctrl_buffer(sizeof(cssMiscDbmSegment));
            
    nvram_external_read_data(NVRAM_EF_C2K_CSS_MISC_LID,
                              1,
                              buf_css_misc,
                              sizeof(cssMiscDbmSegment));

    css_misc_p = (cssMiscDbmSegment *)buf_css_misc;
    css_misc_p->data.homeEriValNum = sizeof(home_eri_vals)/sizeof(kal_uint16);            
    memcpy(css_misc_p->data.homeEriVals, home_eri_vals, sizeof(home_eri_vals));
    css_misc_p->sbp_id = sbp_id;
    css_misc_p->checksum = 0;
    css_misc_p->checksum = calcChecksum((kal_uint8 *)css_misc_p, sizeof(cssMiscDbmParameters));

    nvram_external_write_data(NVRAM_EF_C2K_CSS_MISC_LID,
                               1,
                               buf_css_misc,
                               sizeof(cssMiscDbmSegment));     

    free_ctrl_buffer(buf_css_misc);

}

/*****************************************************************************
 * FUNCTION
 *  nvram_custom_config_c2k_nam_para
 * DESCRIPTION
 * Set ERRC para in nvram
 * PARAMETERS
 *  sbp_id
 *  protocol_id
 * RETURNS
 *  none
 *****************************************************************************/
void nvram_custom_config_c2k_sbp_default_para(kal_uint32 sbp_id)                                         
{   
    kal_uint8 *buf_c2k_nam1;
    kal_uint8 *buf_css_1x;
    kal_uint8 *buf_css_do;
    kal_uint8 *buf_css_misc;   
     
    if (sbp_id == 1) // for CMCC
    {

    }          
    else if (sbp_id == 9) // for CT
    {     
/*  ALPS04852783 begin  */
        ValHrpdAtEhrpd(VAL_EHRPD_ON);
/*   ALPS04852783 end    */                 
    }
    else if (sbp_id == 12) //for VzW
    {
        PswIs95NamT *c2k_nam1_p = NULL;
        cssMiscDbmSegment *css_misc_p = NULL;
        css1xDbmSegment *css_1x_p = NULL;
        kal_uint16 home_eri_vals[] = {1, 64, 65, 76, 77, 78, 79, 80, 81, 82, 83};
/*  ALPS04852783 begin  */
        ValHrpdAtEhrpd(VAL_EHRPD_OFF);
/*  ALPS04852783 end  */
                
        buf_c2k_nam1 = get_ctrl_buffer(sizeof(PswIs95NamT));    

        nvram_external_read_data(NVRAM_EF_C2K_PSW_NAM1_LID,
                                 1,
                                 buf_c2k_nam1,
                                 sizeof(PswIs95NamT));  

        c2k_nam1_p = (PswIs95NamT *)buf_c2k_nam1; 
        c2k_nam1_p->CPCA = 283;
        c2k_nam1_p->CSCA = 691;
        c2k_nam1_p->CPCB = 384;
        c2k_nam1_p->CSCB = 777;
        c2k_nam1_p->IMSI_Mp.mcc = 209;
        c2k_nam1_p->IMSI_Mp.imsi_11_12 = 99;
        c2k_nam1_p->SystemSelect = AUTOMATIC_B;
        /* VZ_REQ_SYSACQ_28592 in Reqs-System Acqusition */

        nvram_external_write_data(NVRAM_EF_C2K_PSW_NAM1_LID,
                                   1,
                                   buf_c2k_nam1,
                                   sizeof(PswIs95NamT));      

        buf_css_1x = get_ctrl_buffer(sizeof(PswIs95NamT));

        nvram_external_read_data(NVRAM_EF_C2K_CSS_1X_LID,
                                  1,
                                  buf_css_1x,
                                  sizeof(css1xDbmSegment));
        
        css_1x_p = (css1xDbmSegment *)buf_css_1x;
        css_1x_p->data.tBsr[CSS_1X_T_BSR_1] = CSS_1X_T_BSR_1_DEFAULT_VZW;
        css_1x_p->data.tBsr[CSS_1X_T_BSR_2] = CSS_1X_T_BSR_2_DEFAULT_VZW;
        css_1x_p->data.tBsr[CSS_1X_T_BSR_NEWSYS] = CSS_1X_T_BSR_NEWSYS_DEFAULT_VZW;
        css_1x_p->data.tBsr[CSS_1X_T_BSR_REDIR]  = CSS_1X_T_BSR_REDIR_DEFAULT_VZW;
        css_1x_p->data.tEmergencySysLostScan  = CSS_1X_EMERGENCY_SYS_LOST_SCAN_TIME_VZW;
        css_1x_p->checksum = 0;
        css_1x_p->checksum = calcChecksum((kal_uint8 *)css_1x_p, sizeof(css1xDbmParameters));

        nvram_external_write_data(NVRAM_EF_C2K_CSS_1X_LID,
                                   1,
                                   buf_css_1x,
                                   sizeof(css1xDbmSegment)); 

        buf_css_misc  = get_ctrl_buffer(sizeof(cssMiscDbmSegment));
            
        nvram_external_read_data(NVRAM_EF_C2K_CSS_MISC_LID,
                                  1,
                                  buf_css_misc,
                                  sizeof(cssMiscDbmSegment)); 
        
        css_misc_p = (cssMiscDbmSegment *)buf_css_misc;
        css_misc_p->data.roamIndForNonPrlSysButHomeInNam = ROAMING_IND_FLASHING;
        css_misc_p->data.homeEriValNum = sizeof(home_eri_vals)/sizeof(kal_uint16);
        memcpy(css_misc_p->data.homeEriVals, home_eri_vals, sizeof(home_eri_vals));
        css_misc_p->data.intlEriValNum = 0;
        css_misc_p->checksum = 0;
        css_misc_p->checksum = calcChecksum((kal_uint8 *)css_misc_p, sizeof(cssMiscDbmParameters));
        
        nvram_external_write_data(NVRAM_EF_C2K_CSS_MISC_LID,
                                   1,
                                   buf_css_misc,
                                   sizeof(cssMiscDbmSegment)); 

        free_ctrl_buffer(buf_c2k_nam1);
        free_ctrl_buffer(buf_css_1x);
        free_ctrl_buffer(buf_css_misc);
    }    
    else if (sbp_id == 20) // for Sprint
    {
        PswIs95NamT *c2k_nam1_p = NULL;
        cssMiscDbmSegment *css_misc_p = NULL;
        css1xDbmSegment *css_1x_p = NULL;
        cssDODbmSegment *css_do_p = NULL;
        kal_uint16 home_eri_vals[] = {1};
        kal_uint16 International_eriValues[] = {74,
                                            124,125,126,
                                            157,158,159,
                                            193,194,195,196,197,198,
                                            228,229,230,231,232,233,234,235};
/*  ALPS04852783 begin  */
        ValHrpdAtEhrpd(VAL_EHRPD_ON);
/*   ALPS04852783 end    */
                
        buf_c2k_nam1 = get_ctrl_buffer(sizeof(PswIs95NamT));

        nvram_external_read_data(NVRAM_EF_C2K_PSW_NAM1_LID,
                                 1,
                                 buf_c2k_nam1,
                                 sizeof(PswIs95NamT));  

       c2k_nam1_p = (PswIs95NamT *)buf_c2k_nam1; 
       c2k_nam1_p->CPCA = 283;
       c2k_nam1_p->CSCA = 691;
       c2k_nam1_p->CPCB = 384;
       c2k_nam1_p->CSCB = 777;
       c2k_nam1_p->IMSI_Mp.mcc = 209;
       c2k_nam1_p->IMSI_Mp.imsi_11_12 = 99;
       c2k_nam1_p->SystemSelect = AUTOMATIC;
       c2k_nam1_p->RoamingSetting = PSW_DEFAULT_ROAM_SETTING_SPRINT;
        /* VZ_REQ_SYSACQ_28592 in Reqs-System Acqusition */

        nvram_external_write_data(NVRAM_EF_C2K_PSW_NAM1_LID,
                                   1,
                                   buf_c2k_nam1,
                                   sizeof(PswIs95NamT));      

        buf_css_1x = get_ctrl_buffer(sizeof(css1xDbmSegment));

        nvram_external_read_data(NVRAM_EF_C2K_CSS_1X_LID,
                                  1,
                                  buf_css_1x,
                                  sizeof(css1xDbmSegment));        
        
        css_1x_p = (css1xDbmSegment *)buf_css_1x;
        css_1x_p->data.tBsr[CSS_1X_T_BSR_1] = CSS_1X_T_BSR_1_DEFAULT_SPRINT;
        css_1x_p->data.tBsr[CSS_1X_T_BSR_2] = CSS_1X_T_BSR_2_DEFAULT_SPRINT;
        css_1x_p->data.tBsr[CSS_1X_T_BSR_NEWSYS] = CSS_1X_T_BSR_NEWSYS_DEFAULT_SPRINT;
        css_1x_p->data.tBsr[CSS_1X_T_BSR_REDIR]  = CSS_1X_T_BSR_REDIR_DEFAULT_SPRINT;
        css_1x_p->data.tBsr[CSS_1X_T_BSR_CALL]   = CSS_1X_T_BSR_CALL_DEFAULT_SPRINT;
        css_1x_p->data.tBsr[CSS_1X_T_BSR_HOLD]   = CSS_1X_T_BSR_HOLD_DEFAULT_SPRINT;
        css_1x_p->data.tAvoidance[CSS_1X_T_MAPE_HOME_AVOIDANCE]  = CSS_1X_HOME_MAPE_AVOIDANCE_DURATION_DEFAULT_SPRINT;
        css_1x_p->checksum = 0;
        css_1x_p->checksum = calcChecksum((kal_uint8 *)css_1x_p, sizeof(css1xDbmParameters));

        nvram_external_write_data(NVRAM_EF_C2K_CSS_1X_LID,
                                   1,
                                   buf_css_1x,
                                   sizeof(css1xDbmSegment)); 

        buf_css_do = get_ctrl_buffer(sizeof(cssDODbmSegment));      

        nvram_external_read_data(NVRAM_EF_C2K_CSS_DO_LID,
                                  1,
                                  buf_css_do,
                                  sizeof(cssDODbmSegment)); 
        
        css_do_p = (cssDODbmSegment *)buf_css_do;
        css_do_p->data.tBsr[CSS_DO_T_BSR_1] = CSS_DO_T_BSR_1_DEFAULT_SPRINT;
        css_do_p->data.tBsr[CSS_DO_T_BSR_2] = CSS_DO_T_BSR_2_DEFAULT_SPRINT;
        css_do_p->data.tBsr[CSS_DO_T_BSR_HYBRID] = CSS_DO_T_BSR_HYBRID_DEFAULT_SPRINT;
        css_do_p->data.tBsr[CSS_DO_T_BSR_REDIR]  = CSS_DO_T_BSR_REDIR_DEFAULT_SPRINT;
        css_do_p->data.tBsr[CSS_DO_T_BSR_CALL]   = CSS_DO_T_BSR_CALL_DEFAULT_SPRINT;
        css_do_p->data.tBsr[CSS_DO_T_BSR_HOLD]   = CSS_DO_T_BSR_HOLD_DEFAULT_SPRINT;
        css_do_p->checksum = 0;
        css_do_p->checksum = calcChecksum((kal_uint8 *)css_do_p, sizeof(cssDODbmParameters));

        nvram_external_write_data(NVRAM_EF_C2K_CSS_DO_LID,
                                   1,
                                   buf_css_do,
                                   sizeof(cssDODbmSegment));    

        buf_css_misc  = get_ctrl_buffer(sizeof(cssMiscDbmSegment));
            
        nvram_external_read_data(NVRAM_EF_C2K_CSS_MISC_LID,
                                  1,
                                  buf_css_misc,
                                  sizeof(cssMiscDbmSegment));  
        
        css_misc_p = (cssMiscDbmSegment *)buf_css_misc;
        css_misc_p->data.roamIndForNonPrlSysButHomeInNam = ROAMING_IND_OFF;
        css_misc_p->data.homeEriValNum = sizeof(home_eri_vals)/sizeof(kal_uint16);
        memcpy(css_misc_p->data.homeEriVals, home_eri_vals, sizeof(home_eri_vals));
        css_misc_p->data.intlEriValNum = sizeof(International_eriValues)/sizeof(kal_uint16);
        memcpy(css_misc_p->data.intlEriVals, International_eriValues, sizeof(International_eriValues));
        css_misc_p->checksum = 0;
        css_misc_p->checksum = calcChecksum((kal_uint8 *)css_misc_p, sizeof(cssMiscDbmParameters));
        
        nvram_external_write_data(NVRAM_EF_C2K_CSS_MISC_LID,
                                   1,
                                   buf_css_misc,
                                   sizeof(cssMiscDbmSegment)); 

        free_ctrl_buffer(buf_c2k_nam1);
        free_ctrl_buffer(buf_css_1x);
        free_ctrl_buffer(buf_css_do);
        free_ctrl_buffer(buf_css_misc);
    }
    else if(sbp_id == 236) /* For USC */
    {
    /*  ALPS04852783 begin  */
        ValHrpdAtEhrpd(VAL_EHRPD_OFF);
    /*  ALPS04852783 end  */
    }

    return;
}


/*****************************************************************************
 * FUNCTION
 *  nvram_custom_config_c2k_nam_para
 * DESCRIPTION
 * Set ERRC para in nvram
 * PARAMETERS
 *  sbp_id
 *  protocol_id
 * RETURNS
 *  none
 *****************************************************************************/
void nvram_custom_config_c2k_nam_para(kal_uint32 old_sbp_id, protocol_id_enum ps_id)                                         
{      
    if(ps_id != PROTOCOL_1)
    {
        return;
    }       

    nvram_custom_config_c2k_sbp_default_para(old_sbp_id);        
}

kal_bool nvram_custom_reconfig_c2k_nam_para(sbp_reconfig_custom_param_struct *param_ptr)                                         
{     
    kal_uint32 sbp_id = param_ptr->sbp_id;    
    kal_uint32 previous_sbp_id = 0xFF;

    if(param_ptr->ps_id != PROTOCOL_1)
    {
        return KAL_TRUE;
    }  
    
    previous_sbp_id = nvram_query_sbp_id_by_c2k();

    if(sbp_id == previous_sbp_id)
    {
        return KAL_TRUE;
    }
    else
    {
        nvram_write_sbp_id_by_c2k(sbp_id);
    }        
    
    nvram_custom_config_c2k_sbp_default_para(sbp_id);
    
    /* trigger re-read NVRAM setting for DSBP functions */
    if ((sbp_id == 0) || (sbp_id == 9) || (sbp_id == 12) || (sbp_id == 20) || (sbp_id == 236))
    {
        msg_send4(MOD_SBP, MOD_CSS, SBP_CSS_SAP, MSG_ID_CSS_DSBP_GET_NVRAM_DATA_IND);
    }

    return KAL_TRUE;      
}


/*****************************************************************************
 * FUNCTION
 *  nvram_custom_config_c2k_data_para
 * DESCRIPTION
 *                      This is the customer callback funtion of SIM ready. it could be customized to 
 *                      do SIM related customization 
 * PARAMETERS
 *                      mcc        MCC of SIM 
 *                      mnc        MNC of SIM
 *                      pNvData    point to C2K data relatd settings
 * RETURNS
 *                      TRUE      apply customization
 *                      FALSE     abandon customization
 *****************************************************************************/
kal_bool nvram_custom_config_c2k_data_para(kal_uint16 mcc, kal_uint16 mnc, HlpHspdSegData *pNvData)
{
/* this is an example of custimzation of MIP settings for reference */
#if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif
    /* abandon customization */
    return KAL_FALSE;
}

/*****************************************************************************
 * FUNCTION
 *  tethering_mip_nai_cust
 * DESCRIPTION
 *                      This is the customer callback funtion of tethering MIP NAI. customer could customize the MIP NAI. 
 * PARAMETERS
 *                      nai        pointer to the original NAI (max 72 byte)
 *                      len        length of NAI
 *                      
 * RETURNS
 *                      length of new NAI
 *                      
 *****************************************************************************/
kal_uint8 tethering_mip_nai_cust(char *nai, kal_uint8 len)
{
    /* sprint for example nai is 123456@sprint.com */

    /* the new nai should be 123456@modem.sprint.com */

    /* char *nai is used as input and output buf, the new nai should be copy to it at last */ 

    /* length of new NAI */
    return len;
}

#endif /* __CDMA2000_RAT__ */ 

