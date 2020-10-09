/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2015
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

/*******************************************************************************
 * Filename:
 * ---------
 *   cas_eas_enum.h
 *
 * Project:
 * --------
 *   UMOLY
 *
 * Description:
 * ------------
 *
 *
 * Author:
 * -------
 *
 *
 * ----------------------------------------------------------------------------
 * $Log:$
 *
 * 11 25 2016 tsung-ming.lee
 * [MOLY00214552] [MT6293][C2K] C2K cell measurement enhancement & support band re-arch
 * 	
 * 	.
 *
 * 11 09 2016 xiaofang.xu
 * [MOLY00208435] [6293][C2K]Sync C2K code to UMOLYA TRUNK
 * .
 *
 * 02 15 2016 ryan.ou
 * [MOLY00159902] [ERRC][CEL] 2015 Q4 code sync from LR11 to UMOLY
 * MD3 related (OA domain).
 * 	
 * 	CL1760622
 *
 * 07 23 2015 henry.lai
 * [MOLY00113082] [MT6291] ERRC CEL development
 * .
 *
 *
 ******************************************************************************/

#ifndef __CAS_EAS_ENUM_H__
#define __CAS_EAS_ENUM_H__

/* MACROS ******************************************************************/
#define MAX_NUM_MEAS_C2K_BAND  (5)   /* maximum supported CDMA band class for IRAT measurement.
                                        note: 36.331 ASN.1 define 21, but reduce it to 2 because only band 0, band 1 are planned to support */

#define MAX_NUM_MEAS_C2K_FREQ  (8)   /* maximum supported CDMA channels for IRAT measurement */
                                     /* note: 36.331 ASN.1 define 16, but reduce it to 8 because CC IRQ ILM cannot exceed 4K bytes and 
                                      * no more 8 frequencies in real network. If 8 frequencies are not enough, we need remove phase 
                                      * in cas_meas_sector_rslt_struct and increase this definition to resolve this issue. */

#define MAX_NUM_MEAS_C2K_BAND_IND  (1)   /* maximum supported CDMA band class for IRAT measurement.
                                            for EAS_CAS_MEASUREMENT_IND */


#define MAX_NUM_MEAS_C2K_FREQ_IND  (8)   /* maximum supported CDMA channels for IRAT measurement
                                            for EAS_CAS_MEASUREMENT_IND */

#define MAX_NUM_PN  (40)  /* maximum number of the PN in the PN list */

#define MAX_BYTE_OF_SECTOR_ID  (16)  /* maximum number of bytes to represent sector ID of C2K cell */

#define MAX_BYTE_OF_C2K_SYS_TIME  (7)  /* maximum number of bytes contains CDMA system time bit string (sync: 39 bits, async: 49 bits) */

#define MAX_NUM_C2K_NBR_CELL_LIST_BAND  (5)  /* maximum number of neighbor cell bands in the SIB8 CDMA2000 neighbor cell list (36.331 ASN.1 defined in R9: 1, in R11: 16) in the cell reselection parameters */
                                             /* note: 36.331 ASN.1 define 16, but reduce it to 5 since CDMA2000 supported band is up to 3 at maximum currently and also save message size because CC IRQ ILM cannot exceed 4K bytes */

#define MAX_NUM_C2K_NBR_CELL_FREQ_LIST_PER_BAND  (16)  /* maximum number of neighbor cells per band in the SIB8 CDMA2000 neighbor cell list */

#define MAX_NUM_OF_DEPRIORITIZATION_INFO  (8)  /* maximum number of deprioritization EUTRAN frequencies */

#define MAX_NUM_OF_CAS_PLMN_ID_LIST  (8)  /* maximum number of PLMN ID list sent from CAS to EAS */

#define MAX_UE_POWER_CLASS_OUTPUT_POWER  (23)  /* UE transmit power on all EUTRAN bands should be UE power class 3 which corresponding UE maximum output power is always 23 dBm.
                                                  (according to 36.101 table 6.2.2-1), the unit is in dBm
                                                  note: this MACRO is not used in interface structure, but only be referenced by CAS while calculating ETURA cell S-criteria formula
                                                        if future 3GPP spec is updated, need to confirm if the "all EUTRAN bands having the same UE output power" assumption is broken! */

/* define EAS_CAS_PARAM_UPDATE_IND update type bitmask (16 bits max) */
#define EAS_CAS_PARAM_UPDATE_TYPE_SIB8         0x0001
#define EAS_CAS_PARAM_UPDATE_TYPE_TIME_INFO    0x0002
#define EAS_CAS_PARAM_UPDATE_TYPE_RESEL_PARAMS 0x0004

/* new update type define here */
#define EAS_CAS_PARAM_UPDATE_TYPE_RESEVED      0x8000
#define EAS_CAS_PARAM_UPDATE_TYPE_MASK         0xFFFF

#define EAS_CAS_PARAM_UPDATE_TYPE_SET(validity, type_bitmask)      (validity |= type_bitmask)
#define EAS_CAS_PARAM_UPDATE_TYPE_CLEAR(validity, type_bitmask)    (validity &= ~type_bitmask)
#define EAS_CAS_PARAM_UPDATE_TYPE_CHECK(validity, type_bitmask)    (validity & type_bitmask) ? KAL_TRUE : KAL_FALSE


/* TYPES DEFINITIONS ********************************************************/
typedef enum
{
    CAS_MEAS_TYPE_HP_MODE   = 0,    /* high priority CAS cell measurement */
    CAS_MEAS_TYPE_LP_MODE   = 1,    /* all priority CAS cell measurement */
    CAS_MEAS_TYPE_RESEL     = 2,    /* previously measured CAS cell sectors */
    CAS_MEAS_TYPE_CONNECTED = 3,    /* LTE connected mode CAS cell measurement */
    CAS_MEAS_TYPE_INVALID   = 0xFF
} cas_meas_type_enum;


typedef enum
{
    CDMA_SYS_TIME_TYPE_SYNC  = 0,  /* the enumeration is used when the sys_time_string is interpreted as synchronous system time, bit length = 39 */
    CDMA_SYS_TIME_TYPE_ASYNC = 1   /* the enumeration is used when the sys_time_string is interpreted as asynchronous system time, bit length = 49 */
} cdma_sys_time_type_enum;


#endif /* __CAS_EAS_ENUM_H__ */
