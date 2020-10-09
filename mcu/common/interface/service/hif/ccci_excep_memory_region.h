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
*  LAWS PRINCIPLES.  ANY DISPUTES, CONTROVERSIES OR CLAIMS ARISING THEREOF AND
*  RELATED THERETO SHALL BE SETTLED BY ARBITRATION IN SAN FRANCISCO, CA, UNDER
*  THE RULES OF THE INTERNATIONAL CHAMBER OF COMMERCE (ICC).
*
*****************************************************************************/

/*****************************************************************************
 *
 * Filename:
 * ---------
 *   ccci_excep_memory_region.h
 *
 * Project:
 * --------
 *   MOLY
 *
 * Description:
 * ------------
 *   Set ccci exception memory region 
 *
 * Author:
 * -------
 * -------
 *
 *
 * ==========================================================================
 * $Log$
 *
 * 02 27 2018 chien-hui.lu
 * [MOLY00306478] [Gen93] Low Power Monitor - MD CCCI Part
 * [CCCI] exception share memory(feature id: 1) layout modification.
 *
 * 10 20 2016 cs.huang
 * [MOLY00204430] [CCCI] MT6293 change
 * [CCCI] Fix build warning
 *
 * 02 19 2016 cs.huang
 * [MOLY00165616] [CCCI] Change KAL exception log size for MT6292
 * [CCCI Excep] Change CCCI exception handshake data size (Requestor : SS/Qmei)
 *
 * 08 06 2015 cs.huang
 * [MOLY00135464] [CCCI] New CCCI handshake flow
 * [CCCI] New CCCI handshake flow
 *
 * 08 06 2015 cs.huang
 * [MOLY00135464] [CCCI] New CCCI handshake flow
 * [CCCI] New CCCI handshake flow
 *
 * 06 02 2015 cs.huang
 * [MOLY00117870] [CCCI] Modify exception share memory region setting for KAL & AP CCCI
 * [CCCI] Modify exception share memory region setting for KAL & AP CCCI
 *
 * 05 29 2015 hsin-jun.tang
 * [MOLY00113346] Deanli - New Sleep Mode Debug Feature
 * [SHM] Add for low power - UMOLY
 *
 * 11 13 2014 cs.huang
 * [MOLY00084393] [UMOLY][CCCI] CCCI common header arrangement
 * Merging
 * 	
 * 	//UMOLY/TRUNK/UMOLY/mcu/pcore/interface/service/hif/ccci_ch_cfg.h
 * 	
 * 	to //UMOLY/TRUNK/UMOLY/mcu/common/interface/service/hif/ccci_ch_cfg.h
 *
 * 08 19 2014 cs.huang
 * [MOLY00075740] [UMOLY][CCCI] Change exception share memory config size for UMOLY bring-up only
 * [CCCI] Change exception share memory config size for UMOLY bring-up only
 *
 * 08 04 2014 ian.cheng
 * [MOLY00074458] UMOLY CCCI service
 * 	[UMOLY_DEV CCCI PCore Service]
 *
 *
 ****************************************************************************/
#if defined(__MTK_TARGET__) && defined(__HIF_CCISM_SUPPORT__)// Internal modem
X_CCCI_EXCEP_MEMORY_CONF(CCCI_EXCEP_MEMORY_REGION_CCCI, 464)   //- the region for CCCI debug
X_CCCI_EXCEP_MEMORY_CONF(CCCI_EXCEP_MEMORY_REGION_CCCIFS_DUMP, 48)   //- the region for CCCI debug
X_CCCI_EXCEP_MEMORY_CONF(CCCI_EXCEP_MEMORY_REGION_CCCI_SEQ_DEBUG, 1536)   //- the region for CCCI seq debug
X_CCCI_EXCEP_MEMORY_CONF(CCCI_EXCEP_MEMORY_REGION_KAL , 10240)   //- the region for KAL
X_CCCI_EXCEP_MEMORY_CONF(CCCI_EXCEP_MEMORY_REGION_LOW_POWER_MONITOR, 32768)   //- the region for low power monitor (SD10: EJ Farn)
X_CCCI_EXCEP_MEMORY_CONF(CCCI_EXCEP_MEMORY_REGION_NOUSE , 14336)   //- for reserved
X_CCCI_EXCEP_MEMORY_CONF(CCCI_EXCEP_MEMORY_REGION_RUNTIME_DATA ,4096 )   //- the region for AP CCCI (runtime data)
X_CCCI_EXCEP_MEMORY_CONF(CCCI_EXCEP_MEMORY_REGION_APCCCI , 1024)   //- the region for AP CCCI (force assert)
X_CCCI_EXCEP_MEMORY_CONF(CCCI_EXCEP_MEMORY_REGION_LOW_POWER , 1024)	//- the region for low power  
#else // external modem or MoDIS
X_CCCI_EXCEP_MEMORY_CONF(CCCI_EXCEP_MEMORY_REGION_CCCI, 464)   //- the region for CCCI debug
X_CCCI_EXCEP_MEMORY_CONF(CCCI_EXCEP_MEMORY_REGION_CCCIFS_DUMP, 48)   //- the region for CCCI debug
X_CCCI_EXCEP_MEMORY_CONF(CCCI_EXCEP_MEMORY_REGION_CCCI_SEQ_DEBUG, 1536)   //- the region for CCCI seq debug
X_CCCI_EXCEP_MEMORY_CONF(CCCI_EXCEP_MEMORY_REGION_KAL , 2048)	//- the region for KAL
X_CCCI_EXCEP_MEMORY_CONF(CCCI_EXCEP_MEMORY_REGION_APCCCI , 1024)   //- the region for KAL
X_CCCI_EXCEP_MEMORY_CONF(CCCI_EXCEP_MEMORY_REGION_LOW_POWER , 1024)	//- the region for low power 
#endif
