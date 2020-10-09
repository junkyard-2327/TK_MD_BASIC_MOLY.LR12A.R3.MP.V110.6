/*************************************************************
*
* This Software is the property of VIA Telecom, Inc. and may only be used pursuant to a license from VIA Telecom, Inc.
*
* Any unauthorized use inconsistent with the terms of such license is strictly prohibited.
*
* Copyright (c) 1999-2010 VIA Telecom, Inc.  All rights reserved.
*
*************************************************************/
/****************************************************************************
 *
 * Module:     prefroam.h
 *
 * Purpose:    Definitions for Preferred Roamer List updates from OTASP.
 *
 *             SNR 7/19/00 Updated the purpose: removed the 'NAM updates'
 *             see Rev 1.2 comments
 *
 ****************************************************************************
 *
 *                          PVCS Header Information
 *
 *  $Workfile$
 *  $Revision: 1.4 $
 *  $Modtime$
 *  $Author: mclee $
 *
 *  $Log: PREFROAM.H $
 *
 *  06 29 2017 sue.zhong
 *  [MOLY00259241] [6293][C2K]Replace with KAL data type
 *  ::KAL type - folder inc
 *
 *  05 18 2017 qiming.li
 *  [MOLY00246713][UMOLYA] CSS Traces Re-organization and Re-format
 *
 *  05 17 2017 peijun.zheng
 *  [MOLY00249027] [BIACNO][MT6763][New feature]C2K code release code modification
 *  	
 *  	C2k code release.
 *
 *  02 10 2017 jiayong.zhang
 *  [MOLY00221596] [Gen93] L4 Integration M1 check in
 *  	
 *  	.
 *  Revision 1.4  2006/03/29 12:13:26  mclee
 *  - Add _ResetOosaCounters() prototype.
 *  Revision 1.3  2005/03/18 10:24:43  bcolford
 *  CBP4.05 [4.21] to CBP6.1 [2.9.0] CP Software Merge.
 *  Revision 1.3  2004/12/01 08:26:21  mclee
 *  Merged up to CP 12.0.2 changes from CBP 4.0 into the CBP 4.05 baseline.  Add #define CURRENT_SYSTEM 15.
 *  Revision 1.2  2004/08/13 10:05:44  agontar
 *  Removed T53 flag; added support for BC3; cleaned up logs
 *  Revision 1.2  2004/03/25 12:08:58  fpeng
 *  Updated from 6.0 CP 2.5.0
 *  Revision 1.2  2004/02/10 12:50:13  bcolford
 *  Merged CBP4.0 Release 8.05.0 changes.
 *  Revision 1.9  2003/11/06 11:34:18  ameya
 *  Added new indications to enter CSS, changed function names of cssCpUnpackPrl() and cssCpValidateSystem(). Also added prototypes for cssCpRedirectionEndTimeout() and cssCpMorePrefScanTimeout().
 *  Revision 1.8  2002/07/31 17:22:35  hans
 *  A, B and C frequency block added for Band Class 4 (cr726).
 *  Revision 1.7  2002/06/06 13:14:15  chinh
 *  Changed and Added Copyright
 *  Revision 1.6  2002/02/25 08:47:35  AMALA
 *  Corrected SS Re-Scan errors.
 *  Revision 1.5  2002/01/10 17:11:06  AMALA
 *  Added emergency mode processing for new system selection.
 *  Revision 1.4  2002/01/02 10:08:52  AMALA
 *  Added new system selection changes.
 *  Added system re-scan functionality.
 *  Revision 1.3  2001/11/08 12:20:50  AMALA
 *  Deleted compiler switch SYS_SEL_1_CBP3_MERGE &
 *  associated non-compiled code.
 *  Revision 1.2  2001/09/17 14:10:54  AMALA
 *  CBP3 System Selection port
 *  Revision 1.1  2001/01/17 10:59:14  plabarbe
 *  Initial revision
 *  Revision 1.1  2000/10/24 14:11:24  fpeng
 *  Initial revision
 *  Revision 1.4  2000/09/23 02:38:24Z  rnookala
 *  removed function prototype unpackSspr
 *  Revision 1.3  2000/08/23 22:10:14Z  RSATTARI
 *  Isotel release 2.8 plus LSI applicable IS-95B changes.
 *  Revision 1.3  2000/02/18 23:03:59  gfrye
 *  Added defines for PRL_HEADER_SIZE and PRL_CRC_SIZE.
 *
 *  Revision 1.2  2000/01/21 22:08:46  gfrye
 *  Moved NAM parameters structures to wbios.h.
 *  Added channel list and acquisition record list structures to help
 *  separate "geo scan" list from initial power-up scan list.
 *
 *  Revision 1.1  1999/12/09 23:02:44  gfrye
 *  Initial revision
 *
 *
 ****************************************************************************
 ****************************************************************************/

#ifndef PREFROAM_H
#define PREFROAM_H

/*****************************************************************************
 * Includes
 ****************************************************************************/
#include "cssapi.h"
#include "pswnam.h"

/*****************************************************************************
 * Definitions
 ****************************************************************************/

/* Cellular System types */
#define CP_SYSTEM_CDMA        1       /* Band 0 CDMA */
#define CP_SYSTEM_ANALOG      2       /* Band 0 Analog */
#define CP_SYSTEM_UNKNOWN     3

/* max times to attempt CDMA acquisition from CDMA Available indication */
/* from Analog mode */
#define CP_SELECT_MAX_CDMA_AVAIL_TRIES    5

/* Call Processing system determination indications */
/* NOTE: If this list is changed, please update enum CssIndicationId in ps_trace.txt */


/* NOTE: If this list is changed, please update enum CssIndicationId in css_trace.txt */

/* system selection codes, see Table 1.4-1: System Selection Codes in 3GPP2 C.S0057-D v1.0 */

#define BC0_A   0
#define BC0_B   1

#define BC1_A   2
#define BC1_B   3
#define BC1_C   4
#define BC1_D   5
#define BC1_E   6
#define BC1_F   7

#define BC2_A   8
#define BC2_B   9

/* Band Class 3: 830 to 925 MHz JTACS */
#define BC3_A   10
#define BC3_B   11

#define BC4_A   12
#define BC4_B   13
#define BC4_C   14

#define BC5_A   15
#define BC5_B   16
#define BC5_C   17
#define BC5_D   18
#define BC5_E   19
#define BC5_F   20
#define BC5_G   21
#define BC5_H   22

/* Band Class 6: 2GHz */
#define BC6_A   23

/* 3GPP2 C.S0057-D v1.0: Band Class 7: only C block is valid, with code=24 */
#define BC7_C   24

#define BC19_A  25
#define BC19_B  26
#define BC19_C  27

#define BC8_A   28

#define BC9_A   29

#define BC10_A  30
#define BC10_B  31
#define BC10_C  32
#define BC10_D  33
#define BC10_E  34

#define BC11_A  35
#define BC11_B  36
#define BC11_C  37
#define BC11_D  38
#define BC11_E  39
#define BC11_F  40

#define BC12_A  41
#define BC12_B  42

#define BC13_A  43
#define BC13_B  44
#define BC13_C  45
#define BC13_D  46
#define BC13_E  47
#define BC13_F  48
#define BC13_G  49
#define BC13_H  50
#define BC13_I  51
#define BC13_J  52
#define BC13_K  53
#define BC13_L  54
#define BC13_M  55
#define BC13_N  56

#define BC14_A  2
#define BC14_B  3
#define BC14_C  4
#define BC14_D  5
#define BC14_E  6
#define BC14_F  7
#define BC14_G  57

#define BC15_A  58
#define BC15_B  59
#define BC15_C  60
#define BC15_D  61
#define BC15_E  62
#define BC15_F  63

#define BC16_A  64
#define BC16_B  65
#define BC16_C  66
#define BC16_D  67

#define BC18_D   68
#define BC18_PSB 69

#define BC20_A  70


/* Used if desired system is unknown for OTASP "*228" */
#define CURRENT_SYSTEM      100
#define OTASP_NO_SYSTEM     255

/* field widths, see IS-683-A, section 3.5.3 */
#define PR_LIST_SIZE_WIDTH 16
#define PR_LIST_ID_WIDTH   16
#define CUR_SSPR_P_REV_WIDTH 8  /*as define in C.S0016.C for Extened PRL*/
#define PREF_ONLY_WIDTH     1
#define DEF_ROAM_IND_WIDTH  8
#define NUM_ACQ_RECS_WIDTH  9
#define NUM_COMMOM_SUBNET_REC_WIDTH 9 /*as define in C.S0016.C for Extened PRL*/
#define NUM_SYS_RECS_WIDTH 14
#define PRL_CRC_WIDTH      16
/*                         --
 *                         64 / 8 = 8 bytes */
#define PRL_HEADER_SIZE     8
#define PRL_CRC_SIZE        2

/* acquisition record fields */
#define ACQ_TYPE_WIDTH       4
#define EXT_ACQ_TYPE_WIDTH   8
#define EXT_ACQ_LENGTH_WIDTH 8   /*as define in C.S0016.C for Extened PRL*/
#define SYSTEM_A_B_WIDTH     2
#define SYSTEM_PRI_SEC_WIDTH 2
#define NUM_CHANS_WIDTH      5
#define BAND_WIDTH           5
#define CHANNEL_WIDTH       11
#define NUM_BLOCKS_WIDTH     3
#define FREQ_BLOCK_WIDTH     3

#define SUBNET_COMMON_LENGTH_WIDTH 4

/* system record fields */
#define SID_WIDTH       15
#define NID_INCL_WIDTH   2
#define NID_WIDTH       16 /* optional */
#define PREF_NEG_WIDTH   1
#define GEO_WIDTH        1
#define PRIORITY_WIDTH   1 /* optional */
#define ACQ_INDEX_WIDTH  9
#define ROAM_IND_WIDTH   8 /* optional */
#define SYS_RECORD_LEN_WIDTH  5
#define SYS_RECORD_TYPE_WIDTH 4
#define SUBNET_COMM_INC_WIDTH 1
#define SUBNET_LSB_LEN_WIDTH  7
#define SUBNET_COMM_OFFSET_WIDTH 12
#define ASSOCIATION_INC_WIDTH 1
#define ASSOCIATION_TAG_WIDTH 8
#define PN_ASSOCIATION_WIDTH  1
#define DATA_ASSOCIATION_WIDTH 1
#define SUBTYPE_WIDTH 3
#define MCC_WIDTH 12
#define MNC_WIDTH 12
#define NUM_SID_WIDTH 4
#define MCC_OFFSET_WIDTH 4
#define NUM_SID_NID_WIDTH 4
#define NUM_SUBNET_WIDTH 4
#define NUM_SUBNET_LEN_WIDTH 8
#define MCC_SID_WIDTH 16
#define MCC_NID_WIDTH 16
#define SUBNET_OFFSET_WIDTH 4

/* values for NID_INCL */
#define NID_ALL_ONES  0
#define NID_INCLUDED  1
#define NID_ALL_ZEROS 2

/* special values for nid */
#define NID_WILDCARD 0xFFFF
#define NID_PUBLIC   0x0000

#define SID_WILDCARD 0x0000  /* 0x0 means wildcard SID for PRL */
#ifdef MTK_CBP
/* NAM home SID not programmed requirement in Verzion Reqs-ERI */
#define SID_NOT_PROGRAMMED 0x0000 /* 0x0 means not programmed SID for home SID */

#define MCC_INVALID 0xFFFF
#define MNC_INVALID 0xFF
#endif

/* values for block, see table 3.5.5.2.1.5-1 */
#define PCS_BLOCK_A 0
#define PCS_BLOCK_B 1
#define PCS_BLOCK_C 2
#define PCS_BLOCK_D 3
#define PCS_BLOCK_E 4
#define PCS_BLOCK_F 5
#define PCS_BLOCK_ANY 7


/****************************************************************************
 * PE => SSPR Interface Function Prototypes
 ****************************************************************************/
PRL_HEADER* cssCpGetPrlInfo(NamNumber namNumber);
void cssCpEmergencyCallbackModeTimeout(void);
void cssCpRescanTimeout(void);
kal_bool cssCpRescanEnabled(void);
void cssCpRedirectionEndTimeout(void);
void cssCpMorePrefScanTimeout(void);
void cssCpEprlEspmWaitTimeout(void);


/*****************************************************************************
 * System Re-Direction Prototypes
 ****************************************************************************/

void cpSystemSelectionReset(void);
void cpSetRedirectionStatus(kal_bool status);
kal_uint16 cpGetAnalogRedirectionSid(void);
kal_uint16 cpGetRedirectionSid(void);
kal_uint16 cpGetRedirectionNid(void);
kal_bool cpGetRedirectionIgnoreCDMA(void);
kal_bool cpIsReturnIfFail(void);
void cssCpCustomSystemSelection(void);

void namUpdate(kal_uint8 whatsChanged);
void _ResetOosaCounters(void);

#endif /* PREFROAM_H */
