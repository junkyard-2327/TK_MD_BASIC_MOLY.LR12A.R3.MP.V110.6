/******************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2013
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
*******************************************************************************/

/******************************************************************************
 * Filename:
 * --------------------------------------------------------
 *   gnss2lcsp_enum.h
 *
 * Project:
 * --------------------------------------------------------
 *   A-GNSS project
 *
 * Description:
 * --------------------------------------------------------
 *
 *
 * Author:
 * --------------------------------------------------------
 * -------
 *
 * --------------------------------------------------------
 * $Log$
 *
 * 10 16 2017 jl.hsiao
 * [MOLY00282702] [LBS] Early fix and MDT battery level support
 * .
 *
 * 10 16 2017 jl.hsiao
 * [MOLY00282702] [LBS] Early fix and MDT battery level support
 * .
 *
 * 07 07 2017 wynne.chu
 * [MOLY00261827] [UMOYLA] LPPe development
 * 	
 * 	.
 *
 * 04 07 2017 jie-yu.wang
 * [MOLY00233110] [SBP] MDT feature change for CMCC requirement
 * [LBS][Sync from 91/92][Header] MDT feature.
 *
 * 10 28 2016 wynne.chu
 * [MOLY00206577] [Gen92] A-BeiDou feature development
 * 	
 * 	.
 *
 * 10 20 2016 wynne.chu
 * [MOLY00208519] [MT6293][VzW]LTE SIB8/16 for AGPS fine time aiding (code sync from UMOLY)
 * 	
 * 	.
 *
 * 01 18 2016 roland.li
 * [MOLY00149314] [Metrico ??]AGPS??, ??OTDOA?ECID????ECID.
 * .
 *
 * 12 10 2015 roland.li
 * [MOLY00149314] [Metrico ??]AGPS??, ??OTDOA?ECID????ECID.
 * .
 *
 * 04 29 2015 roland.li
 * [MOLY00109917] [6291][LBS]MDT check in to UMOLY TRUNK
 * Fix buld error.
 *
 * 04 29 2015 roland.li
 * [MOLY00109917] [6291][LBS]MDT check in to UMOLY TRUNK
 * [MDT]LBS part.
 *
 * 04 16 2015 roland.li
 * [MOLY00087866] [Uni-Bin]AGNSS ubin change
 * .
 *
 *
 *****************************************************************************/

#ifndef _GNSS2LCSP_ENUM_H
#define _GNSS2LCSP_ENUM_H


/* MACROS *******************************************************************/

/**
 * among LPP/RRC/RRLP, the max number of elements for GNSS data is different in some data fields.
 * we take the largest value as element definition for common interface
 */
#define GNSS_MAX_REF_TIME_SAT_ELEMENT                    16  /* 64 for LPP, 16 for RRC, 12 for RRLP. Use 16 to reduce structure size */
#define GNSS_MAX_REF_CELL_FTA_ELEMENT                    16  /* 16 for LPP, 1 for RRC/RRLP */

#define GNSS_MAX_GNSS_GENERIC_ASSIST_DATA_ELEMENT        16  /* 16 for LPP, 8 for RRC/RRLP in provide assistance data;
                                                                16 for LPP/RRLP, 8 for RRC in capability */

/* GNSS Time Model */
#define GNSS_MAX_TIME_MODEL_ELEMENT                       5  /* 15 for LPP, 7 for RRC/RRLP, Use 5 since gnss-TO-ID only 5 (GPS, Galileo, QZSS, GLONASS, BDS) */

/* GNSS DGNSS */
#define GNSS_MAX_DGNSS_SGN_TYPE_ELEMENT                   3  /* 3 for LPP/RRLP, 8 for RRC */
#define GNSS_MAX_DGNSS_CORRECTION_INFO_ELEMENT           16  /* 64 for LPP/RRC, 16 for RRLP. Use 16 to reduce structure size */

/* GNSS Navigation Model */
#define GNSS_MAX_NAV_SAT_ELEMENT                         16  /* 64 for LPP/RRC, 32 for RRLP. Use 16 to reduce structure size */
#define GNSS_MAX_NAV_SAT_ELEMENT_BIT_POS                 64  /* 64 for LPP/RRC, 32 for RRLP, dedicated for assist data req */
#define GNSS_MAX_NAV_STD_CLK_MODEL_ELEMENT                4  /* 2 for LPP/RRLP, 4 for RRC */
#define GNSS_MAX_NAV_CLOCK_MODEL_ELEMENT                  6  /* currently there is 6 clock models */
#define GNSS_MAX_NAV_ORBIT_MODEL_ELEMENT                  6  /* currently there is 6 orbit models */

/* GNSS Real Time Integrity */
#define GNSS_MAX_RTI_BAD_SAT_ELEMENT                     16  /* 64 for LPP/RRC, 16 for RRLP. Use 16 to reduce structure size */

/* GNSS Data Bit Assistance */
#define GNSS_MAX_DBA_SGN_TYPE_ELEMENT                     8  /* 8 for LPP/RRC/RRLP */
#define GNSS_MAX_DBA_SAT_ELEMENT                         16  /* 64 for LPP/RRC, 32 for RRLP. Use 16 to reduce structure size */
#define GNSS_MAX_DBA_BIT_LENGTH                          64  /* 1024 bit for LPP/RRC/RRLP, but RRLP use integer intead of bit. Process only max 64 bits to reduce structure size */

/* GNSS Acquisition Assitance */
#define GNSS_MAX_ACQ_ASSIST_SAT_ELEMENT                  16  /* 64 for LPP/RRC, 16 for RRLP. Use 16 to reduce structure size */

/* GNSS Almanac */
#define GNSS_MAX_ALMANAC_SAT_ELEMENT                     32  /* 64 for LPP/RRC, 36 for RRLP. Use 32 to reduce structure size */

/* GNSS Auxiliary Information */
#define GNSS_MAX_AUX_SAT_ELEMENT                         16  /* 64 for LPP/RRC/RRLP. Use 16 to reduce structure size */

/* GNSS BDS Grid Ion Model */
#define GNSS_MAX_BDS_GRID_ION_ELEMENT                    16  /* 320 for LPP/RRC/RRLP. Use 16 to reduce structure size.
                                                                Spec description of BDS-GridModelParameter\gridIonList:
                                                                This list provides ionospheric grid point information for each grid point. Up to 16 instances are used in this version of the specification.
                                                                The values 17 to 320 are reserved for future use */

/* GNSS DBDS Correction */
#define GNSS_MAX_DBDS_SGN_TYPE_ELEMENT                    3  /* 3 for LPP/RRLP, 8 for RRC */
#define GNSS_MAX_DBDS_CORRECTION_ELEMENT                 16  /* 64 for LPP/RRC/RRLP. Use 16 to reduce structure size */


/* MTK supports standalone GPS+QZSS+GLONASS+Galileo+Beidou, and assisted-GNSS supports A-GPS+A-GLONASS+A-BDS */
#define GNSS_MAX_SUPPORT_NUM    0x03 /* A-GPS + A-GLONASS + A-BDS */


/* GNSS Measurement Info */
#define GNSS_MAX_MEASURED_GNSS_ELEMENT                   GNSS_MAX_SUPPORT_NUM  /* 16 for LPP, 8 for RRC/RRLP, Use GNSS_MAX_SUPPORT_NUM to reduce structure size */
#define GNSS_MAX_MEASURED_SGN_PER_GNSS_ELEMENT                              4  /* 8 for LPP/RRC/RRLP, Use 4 to reduce structure size */
#define GNSS_MAX_MEASURED_SAT_PER_SGN_ELEMENT                              16  /* 64 for LPP/RRC, 16 for RRLP. Use 16 to reduce structure size */

/* GNSS Request Additional Generic Assist Data */
#define GNSS_MAX_REQ_ADD_GENERIC_ASSIST_DATA_ELEMENT     GNSS_MAX_SUPPORT_NUM  /* 16 for LPP, 8 for RRC, unspecified for RRLP (up to 40 bytes), Use 9 since number of generic assistance data type is only 9 */


/* GNSS ID Bitmap, use two-byte representation */
#define GNSS_ID_BITMAP_NONE     0x00
#define GNSS_ID_BITMAP_GPS      0x8000  /* gps     (0) */
#define GNSS_ID_BITMAP_SBAS     0x4000  /* sbas    (1) */
#define GNSS_ID_BITMAP_QZSS     0x2000  /* qzss    (2) */
#define GNSS_ID_BITMAP_GALILEO  0x1000  /* galileo (3) */
#define GNSS_ID_BITMAP_GLONASS  0x0800  /* glonass (4) */
#define GNSS_ID_BITMAP_BDS      0x0400  /* bds     (5) */

#define GNSS_ID_BITMAP_GPS_GLONASS        (GNSS_ID_BITMAP_GPS | GNSS_ID_BITMAP_GLONASS)
#define GNSS_ID_BITMAP_GPS_BDS            (GNSS_ID_BITMAP_GPS | GNSS_ID_BITMAP_BDS)
#define GNSS_ID_BITMAP_GPS_GLONASS_BDS    (GNSS_ID_BITMAP_GPS | GNSS_ID_BITMAP_GLONASS | GNSS_ID_BITMAP_BDS)

/* SBAS ID Bitmap, use one-byte representation */
#define SBAS_ID_BITMAP_NONE   0x00
#define SBAS_ID_BITMAP_WASS   0x80  /* waas  (0) */
#define SBAS_ID_BITMAP_EGNOS  0x40  /* egnos (1) */
#define SBAS_ID_BITMAP_MSAS   0x20  /* msas	 (2) */
#define SBAS_ID_BITMAP_GAGAN  0x10  /* gagan (3) */

/* GNSS Signal IDs Bitmap, use one-byte representation
 * GNSS    | Bit 1  | Bit 2 | Bit 3 | Bit 4 | Bit 5 | Bit 6 | Bit 7 | Bit 8 |
 *         | (MSB)  |       |       |       |       |       |       | (LSB) |
 * --------+--------+-------+-------+-------+-------+-------+-------+-------+
 * GPS     | L1 C/A |  L1C  |  L2C  |   L5  | -- reserved --|-------|-------|
 * SBAS    |   L1   | -- reserved --|-------|-------|-------|-------|-------|
 * QZSS    | QZS-L1 |QZS-L1C|QZS-L2C| QZS-L5| -- reserved --|-------|-------|
 * GLONASS |   G1   |   G2  |  G3   | -- reserved --|-------|-------|-------|
 * Galileo |   E1   |   E5a |  E5b  |   E6  |E5a+E5b| -- reserved --|-------|
 * BDS     |   B1I  | -- reserved --|-------|-------|-------|-------|-------|
 */
/* GNSS signal spectrum */
#define GNSS_SGN_ID_BITMAP_GPS_L1C_A       0x80  /* bit 1 */
#define GNSS_SGN_ID_BITMAP_GPS_L1C         0x40  /* bit 2 */
#define GNSS_SGN_ID_BITMAP_GPS_L2C         0x20  /* bit 3 */
#define GNSS_SGN_ID_BITMAP_GPS_L5          0x10  /* bit 4 */

#define GNSS_SGN_ID_BITMAP_SBAS_L1         0x80  /* bit 1 */

#define GNSS_SGN_ID_BITMAP_QZSS_L1C_A      0x80  /* bit 1 */
#define GNSS_SGN_ID_BITMAP_QZSS_L1C        0x40  /* bit 2 */
#define GNSS_SGN_ID_BITMAP_QZSS_L2C        0x20  /* bit 3 */
#define GNSS_SGN_ID_BITMAP_QZSS_L5         0x10  /* bit 4 */

#define GNSS_SGN_ID_BITMAP_GLONASS_G1      0x80  /* bit 1 */
#define GNSS_SGN_ID_BITMAP_GLONASS_G2      0x40  /* bit 2 */
#define GNSS_SGN_ID_BITMAP_GLONASS_G3      0x20  /* bit 3 */

#define GNSS_SGN_ID_BITMAP_GALILEO_E1      0x80  /* bit 1 */
#define GNSS_SGN_ID_BITMAP_GALILEO_E5A     0x40  /* bit 2 */
#define GNSS_SGN_ID_BITMAP_GALILEO_E5B     0x20  /* bit 3 */
#define GNSS_SGN_ID_BITMAP_GALILEO_E6      0x10  /* bit 4 */
#define GNSS_SGN_ID_BITMAP_GALILEO_E5_A_B  0x08  /* bit 5 */

#define GNSS_SGN_ID_BITMAP_BDS_B1I         0x80  /* bit 1 */

/* GNSS Signal ID value */
#define GNSS_SGN_ID_VALUE_GPS_L1C_A       0
#define GNSS_SGN_ID_VALUE_GPS_L1C         1
#define GNSS_SGN_ID_VALUE_GPS_L2C         2
#define GNSS_SGN_ID_VALUE_GPS_L5          3

#define GNSS_SGN_ID_VALUE_SBAS_L1         0

#define GNSS_SGN_ID_VALUE_QZSS_L1C_A      0
#define GNSS_SGN_ID_VALUE_QZSS_L1C        1
#define GNSS_SGN_ID_VALUE_QZSS_L2C        2
#define GNSS_SGN_ID_VALUE_QZSS_L5         3

#define GNSS_SGN_ID_VALUE_GLONASS_G1      0
#define GNSS_SGN_ID_VALUE_GLONASS_G2      1
#define GNSS_SGN_ID_VALUE_GLONASS_G3      2

#define GNSS_SGN_ID_VALUE_GALILEO_E1      0
#define GNSS_SGN_ID_VALUE_GALILEO_E5A     1
#define GNSS_SGN_ID_VALUE_GALILEO_E5B     2
#define GNSS_SGN_ID_VALUE_GALILEO_E6      3
#define GNSS_SGN_ID_VALUE_GALILEO_E5_A_B  4

#define GNSS_SGN_ID_VALUE_BDS_B1I         0

#define GNSS_SGN_ID_VALUE_MAX             7

/* GNSS Clock and Orbit Model Value (for Navigation Model) */
#define GNSS_NAV_CLOCK_MODEL_1_VALUE_STANDARD  1  /* model-1 */
#define GNSS_NAV_CLOCK_MODEL_2_VALUE_NAV       2  /* model-2 */
#define GNSS_NAV_CLOCK_MODEL_3_VALUE_CNAV      3  /* model-3 */
#define GNSS_NAV_CLOCK_MODEL_4_VALUE_GLONASS   4  /* model-4 */
#define GNSS_NAV_CLOCK_MODEL_5_VALUE_SBAS      5  /* model-5 */
#define GNSS_NAV_CLOCK_MODEL_6_VALUE_BDS       6  /* model-6 */

#define GNSS_NAV_ORBIT_MODEL_1_VALUE_KEPLERIAN_SET       1  /* model-1 */
#define GNSS_NAV_ORBIT_MODEL_2_VALUE_NAV_KEPLERIAN_SET   2  /* model-2 */
#define GNSS_NAV_ORBIT_MODEL_3_VALUE_CNAV_KEPLERIAN_SET  3  /* model-3 */
#define GNSS_NAV_ORBIT_MODEL_4_VALUE_GLONASS_ECEF        4  /* model-4 */
#define GNSS_NAV_ORBIT_MODEL_5_VALUE_SBAS_ECEF           5  /* model-5 */
#define GNSS_NAV_ORBIT_MODEL_6_VALUE_BDS_KEPLERIAN_SET   6  /* model-6 */

/* Almanac Model Value */
#define GNSS_ALMANAC_MODEL_1_VALUE_KEPLERIAN_SET          1  /* model-1 */
#define GNSS_ALMANAC_MODEL_2_VALUE_NAV_KEPLERIAN_SET      2  /* model-2 */
#define GNSS_ALMANAC_MODEL_3_VALUE_REDUCED_KEPLERIAN_SET  3  /* model-3 */
#define GNSS_ALMANAC_MODEL_4_VALUE_MIDI_KEPLERIAN_SET     4  /* model-4 */
#define GNSS_ALMANAC_MODEL_5_VALUE_GLONASS_SET            5  /* model-5 */
#define GNSS_ALMANAC_MODEL_6_VALUE_ECEF_SBAS_SET          6  /* model-6 */
#define GNSS_ALMANAC_MODEL_7_VALUE_BDS_ALMANAC_SET        7  /* model-7 */

/* UTC Model Value */
#define GNSS_UTC_MODEL_1_VALUE  1  /* model-1 (0) */
#define GNSS_UTC_MODEL_2_VALUE  2  /* model-2 (1) */
#define GNSS_UTC_MODEL_3_VALUE  3  /* model-3 (2) */
#define GNSS_UTC_MODEL_4_VALUE  4  /* model-4 (3) */
#define GNSS_UTC_MODEL_5_VALUE  5  /* model-5 (4) */

/* Ionospheric Model */
#define GNSS_ION_MODEL_KLOBUCHAR  0x80  /* klobuchar (0) */
#define GNSS_ION_MODEL_NEQUICK    0x40  /* neQuick   (1) */

/* Klobuchar Model Parameter - dataID (2 bits) */
/**
 * '11': the parameters have been generated by QZSS
 * '01': the parameters have been generated by BDS
 * '00': the parameters are applicable worldwide
 */
#define GNSS_ION_KLOBUCHAR_DATA_ID_VALUE_QZSS    0x03
#define GNSS_ION_KLOBUCHAR_DATA_ID_VALUE_BDS     0x01
#define GNSS_ION_KLOBUCHAR_DATA_ID_VALUE_WW      0x00
#define GNSS_ION_KLOBUCHAR_DATA_ID_MASK          0x03

/* Navigation Model */
#define GNSS_NAV_CLOCK_MODEL_1_STANDARD  0x80  /* model-1 (0) */
#define GNSS_NAV_CLOCK_MODEL_2_NAV       0x40  /* model-2 (1) */
#define GNSS_NAV_CLOCK_MODEL_3_CNAV      0x20  /* model-3 (2) */
#define GNSS_NAV_CLOCK_MODEL_4_GLONASS   0x10  /* model-4 (3) */
#define GNSS_NAV_CLOCK_MODEL_5_SBAS      0x08  /* model-5 (4) */
#define GNSS_NAV_CLOCK_MODEL_6_BDS       0x04  /* model-6 (5) */

#define GNSS_NAV_ORBIT_MODEL_1_KEPLERIAN_SET       0x80  /* model-1 (0) */
#define GNSS_NAV_ORBIT_MODEL_2_NAV_KEPLERIAN_SET   0x40  /* model-2 (1) */
#define GNSS_NAV_ORBIT_MODEL_3_CNAV_KEPLERIAN_SET  0x20  /* model-3 (2) */
#define GNSS_NAV_ORBIT_MODEL_4_GLONASS_ECEF        0x10  /* model-4 (3) */
#define GNSS_NAV_ORBIT_MODEL_5_SBAS_ECEF           0x08  /* model-5 (4) */
#define GNSS_NAV_ORBIT_MODEL_6_BDS_KEPLERIAN_SET   0x04  /* model-6 (5) */


/* Almanac */
#define GNSS_ALMANAC_MODEL_1_KEPLERIAN_SET          0x80  /* model-1 (0) */
#define GNSS_ALMANAC_MODEL_2_NAV_KEPLERIAN_SET      0x40  /* model-2 (1) */
#define GNSS_ALMANAC_MODEL_3_REDUCED_KEPLERIAN_SET  0x20  /* model-3 (2) */
#define GNSS_ALMANAC_MODEL_4_MIDI_KEPLERIAN_SET     0x10  /* model-4 (3) */
#define GNSS_ALMANAC_MODEL_5_GLONASS_SET            0x08  /* model-5 (4) */
#define GNSS_ALMANAC_MODEL_6_ECEF_SBAS_SET          0x04  /* model-6 (5) */
#define GNSS_ALMANAC_MODEL_7_BDS_ALMANAC_SET        0x02  /* model-7 (6) */


/* UTC Model*/
#define GNSS_UTC_MODEL_1  0x80  /* model-1 (0) */
#define GNSS_UTC_MODEL_2  0x40  /* model-2 (1) */
#define GNSS_UTC_MODEL_3  0x20  /* model-3 (2) */
#define GNSS_UTC_MODEL_4  0x10  /* model-4 (3) */
#define GNSS_UTC_MODEL_5  0x08  /* model-5 (4) */


/* GNSS measurement fields validity bitmask */
#define GNSS_MEAS_INFO_CARRIER_QUALITY_VALIDITY   0x01
#define GNSS_MEAS_INFO_INT_CODE_PHASE_VALIDITY    0x02
#define GNSS_MEAS_INFO_DOPPLER_VALIDITY           0x04
#define GNSS_MEAS_INFO_ADR_VALIDITY               0x08
#define GNSS_MEAS_INFO_ALL_VALIDITY               0x0F

#define CHECK_GNSS_MEAS_INFO_CARRIER_QUALITY_VALIDITY(validity)      ((validity & GNSS_MEAS_INFO_ALL_VALIDITY) & GNSS_MEAS_INFO_CARRIER_QUALITY_VALIDITY) ? KAL_TRUE : KAL_FALSE
#define SET_GNSS_MEAS_INFO_CARRIER_QUALITY_VALIDITY(validity)        (validity |= GNSS_MEAS_INFO_CARRIER_QUALITY_VALIDITY)

#define CHECK_GNSS_MEAS_INFO_INT_CODE_PHASE_VALIDITY(validity)       ((validity & GNSS_MEAS_INFO_ALL_VALIDITY) & GNSS_MEAS_INFO_INT_CODE_PHASE_VALIDITY) ? KAL_TRUE : KAL_FALSE
#define SET_GNSS_MEAS_INFO_INT_CODE_PHASE_VALIDITY(validity)         (validity |= GNSS_MEAS_INFO_INT_CODE_PHASE_VALIDITY)

#define CHECK_GNSS_MEAS_INFO_DOPPLER_VALIDITY(validity)              ((validity & GNSS_MEAS_INFO_ALL_VALIDITY) & GNSS_MEAS_INFO_DOPPLER_VALIDITY) ? KAL_TRUE : KAL_FALSE
#define SET_GNSS_MEAS_INFO_DOPPLER_VALIDITY(validity)                (validity |= GNSS_MEAS_INFO_DOPPLER_VALIDITY)

#define CHECK_GNSS_MEAS_INFO_ADR_VALIDITY(validity)                  ((validity & GNSS_MEAS_INFO_ALL_VALIDITY) & GNSS_MEAS_INFO_ADR_VALIDITY) ? KAL_TRUE : KAL_FALSE
#define SET_GNSS_MEAS_INFO_ADR_VALIDITY(validity)                    (validity |= GNSS_MEAS_INFO_ADR_VALIDITY)


/* GNSS assist data type bitmask */
#define GNSS_ASSIST_MASK_NONE                        0x0

#define GNSS_COM_ASSIST_MASK_REF_TIME                (1 << 0)  /* 0x0001 */
#define GNSS_COM_ASSIST_MASK_REF_LOCATION            (1 << 1)  /* 0x0002 */
#define GNSS_COM_ASSIST_MASK_IONOSPHERE              (1 << 2)  /* 0x0004 */
#define GNSS_COM_ASSIST_MASK_EARTH_ORIENT_PARAMS     (1 << 3)  /* 0x0008 */

#define GNSS_GEN_ASSIST_MASK_TIME_MODEL              (1 << 4)  /* 0x0010 */
#define GNSS_GEN_ASSIST_MASK_DGNSS_CORRECTION        (1 << 5)  /* 0x0020 */
#define GNSS_GEN_ASSIST_MASK_NAV_MODEL               (1 << 6)  /* 0x0040 */
#define GNSS_GEN_ASSIST_MASK_RTI                     (1 << 7)  /* 0x0080 */
#define GNSS_GEN_ASSIST_MASK_DATA_BIT_ASSIST         (1 << 8)  /* 0x0100 */
#define GNSS_GEN_ASSIST_MASK_ACQUISITION             (1 << 9)  /* 0x0200 */
#define GNSS_GEN_ASSIST_MASK_ALMANAC                 (1 <<10)  /* 0x0400 */
#define GNSS_GEN_ASSIST_MASK_UTC_MODEL               (1 <<11)  /* 0x0800 */
#define GNSS_GEN_ASSIST_MASK_AUX_INFO                (1 <<12)  /* 0x1000 */
#define GNSS_GEN_ASSIST_MASK_DBDS_CORRECTION         (1 <<13)  /* 0x2000 */
#define GNSS_GEN_ASSIST_MASK_BDS_GRID_MODEL          (1 <<14)  /* 0x4000 */

// LPPE HA Part
#define MAX_ENUM_VALUE    2147483647 

#define GNSS_HA_COM_ASSIST_MASK_IONOSPHERE           (1 << 15)  /* 0x08000 */
#define GNSS_HA_COM_ASSIST_MASK_TROPOSPHERE          (1 << 16)  /* 0x10000 */
#define GNSS_HA_COM_ASSIST_MASK_ALTITUDE             (1 << 17)  /* 0x20000 */
#define GNSS_HA_COM_ASSIST_MASK_SOLAR_RADIATION      (1 << 18)  /* 0x40000 */
#define GNSS_HA_COM_ASSIST_MASK_CCP                 (1 << 19)  /* 0x80000 */
#define GNSS_HA_GEN_ASSIST_MASK_CCP                (1 << 20)  /* 0x100000 */
#define GNSS_HA_GEN_ASSIST_MASK_DEGRADATION         (1 << 21)  /* 0x200000 */


#define GNSS_ASSIST_MB_MANDATORY_MASK                (GNSS_COM_ASSIST_MASK_REF_TIME            | \
                                                      GNSS_COM_ASSIST_MASK_REF_LOCATION        | \
                                                      GNSS_COM_ASSIST_MASK_IONOSPHERE          | \
                                                      GNSS_COM_ASSIST_MASK_EARTH_ORIENT_PARAMS | \
                                                      GNSS_GEN_ASSIST_MASK_TIME_MODEL          | \
                                                      GNSS_GEN_ASSIST_MASK_DGNSS_CORRECTION    | \
                                                      GNSS_GEN_ASSIST_MASK_NAV_MODEL           | \
                                                      GNSS_GEN_ASSIST_MASK_RTI                 | \
                                                      GNSS_GEN_ASSIST_MASK_DATA_BIT_ASSIST     | \
                                                      GNSS_GEN_ASSIST_MASK_ALMANAC             | \
                                                      GNSS_GEN_ASSIST_MASK_UTC_MODEL           | \
                                                      GNSS_GEN_ASSIST_MASK_AUX_INFO            | \
                                                      GNSS_GEN_ASSIST_MASK_DBDS_CORRECTION     | \
                                                      GNSS_GEN_ASSIST_MASK_BDS_GRID_MODEL)     /* 0x7DFF */

                                                 
#define GNSS_ASSIST_MA_MANDATORY_MASK               (GNSS_COM_ASSIST_MASK_REF_TIME             | \
                                                     GNSS_GEN_ASSIST_MASK_ACQUISITION          | \
                                                     GNSS_GEN_ASSIST_MASK_AUX_INFO)      /* 0x1201 */
                                                 

#define GNSS_ASSIST_TIME_INDEPENDENT_MASK           (GNSS_COM_ASSIST_MASK_REF_LOCATION)  /* 0x0002 */


#define GNSS_LAST_SEC_TIME       1000
#define GNSS_MDT_GPS_RESPONSE_TIME  1000
#define GNSS_MDT_LBS_ERRC_PERIOD_TIME  1280
#define GNSS_INIT_TIMER_INTERVAL       10000


/* ---LPPe HA GNSS Interface--- maximum element definition */
#define GNSS_HA_MAX_LOCAL_KLOBUCHAR_MODEL_ELEMENT     16
#define GNSS_HA_MAX_LOCAL_KLOBUCHAR_MODEL              8
#define GNSS_HA_MAX_STORM_ELEMENT                     16
#define GNSS_HA_MAX_LOCAL_TROPO_DELAY_AREA_ELEMENT     8
#define GNSS_HA_MAX_LOCAL_TROPO_DELAY_TIME_ELEMENT     8
#define GNSS_HA_MAX_LOCAL_SURFACE_PARAMS_ELEMENT       8
#define GNSS_HA_MAX_LOCAL_SURFACE_PARAMS_TIME_ELEMENT  8
#define GNSS_HA_MAX_ALTITUDE_ASSIST_AREA_ELEMENT       8
#define GNSS_HA_MAX_PRESSURE_ASSIST_ELEMENT           16
#define GNSS_HA_MAX_CCP_SIGNAL_SUPP_ELEMENT            8
#define GNSS_HA_MAX_CCP_PREF_STATION_LIST_ELEMENT      8  /* OMA-TS-LPPe: maxReferenceStations */
#define GNSS_HA_MAX_WA_IONO_SURF_PER_SV_ELEMENT       16  /* OMA-TS-LPPe: defines 64, reduce size to 16 */
#define GNSS_HA_MAX_MECHANICS_SV_ELEMENT              16  /* OMA-TS-LPPe: defines 64, reduce size to 16 */
#define GNSS_HA_MAX_DCB_LIST_ELEMENT                  16  /* OMA-TS-LPPe: defines 64, reduce size to 16 */
#define GNSS_HA_MAX_DCB_ELEMENT                       16
#define GNSS_HA_MAX_DEGRAD_MODEL_ELEMENT              16  /* OMA-TS-LPPe: defines 64, reduce size to 16 */
#define GNSS_HA_MAX_CCP_GENERIC_ELEMENT                8
#define GNSS_HA_MAX_CCP_PER_SIG_ELEMENT                8
#define GNSS_HA_MAX_CCP_PER_SV_ELEMENT                16  /* OMA-TS-LPPe: defines 64, reduce size to 16 */
#define GNSS_HA_MAX_REQ_NAV_MODEL_ID_ELEMENT           8
#define GNSS_HA_MAX_MEAS_PER_GNSS_ELEMENT             16
#define GNSS_HA_MAX_MEAS_PER_SIGNAL_ELEMENT            8
#define GNSS_HA_MAX_MEAS_PER_SV_ELEMENT               16  /* OMA-TS-LPPe: defines 64, reduce size to 16 */
#define GNSS_HA_MAX_TEC_PER_SV_ELEMENT                16  /* OMA-TS-LPPe: defines 64, reduce size to 16 */

#define GNSS_HA_MAX_GNSS_GENERIC_ASSIST_DATA_ELEMENT  16
#define GNSS_HA_MAX_GENERIC_AD_NAV_MODEL_ID_ELEMENT    8
#define GNSS_HA_MAX_HA_GNSS_CAPA_ELEMENT               8


/* ---LPPe HA GNSS Interface--- optional field validity bit definition */
#define GNSS_HA_MAPPING_FUNC_PARAMS_BIT_BH_VALID      0x80
#define GNSS_HA_MAPPING_FUNC_PARAMS_BIT_CH_VALID      0x40
#define GNSS_HA_MAPPING_FUNC_PARAMS_BIT_AW_VALID      0x20
#define GNSS_HA_MAPPING_FUNC_PARAMS_BIT_BW_VALID      0x10
#define GNSS_HA_MAPPING_FUNC_PARAMS_BIT_CW_VALID      0x08

#define GNSS_HA_LOCAL_TROPO_DELAY_TIME_ELEMENT_BIT_EH_VALID     0x80
#define GNSS_HA_LOCAL_TROPO_DELAY_TIME_ELEMENT_BIT_ZW0_VALID    0x40
#define GNSS_HA_LOCAL_TROPO_DELAY_TIME_ELEMENT_BIT_EW_VALID     0x20
#define GNSS_HA_LOCAL_TROPO_DELAY_TIME_ELEMENT_BIT_GN_VALID     0x10
#define GNSS_HA_LOCAL_TROPO_DELAY_TIME_ELEMENT_BIT_GE_VALID     0x08

#define GNSS_HA_LOCAL_SURF_PARAMS_TIME_ELEMENT_BIT_GN_PRESSURE       0x80
#define GNSS_HA_LOCAL_SURF_PARAMS_TIME_ELEMENT_BIT_GE_PRESSURE       0x40
#define GNSS_HA_LOCAL_SURF_PARAMS_TIME_ELEMENT_BIT_TEMPERATURE       0x20
#define GNSS_HA_LOCAL_SURF_PARAMS_TIME_ELEMENT_BIT_TEMPERATURE_RATE  0x10
#define GNSS_HA_LOCAL_SURF_PARAMS_TIME_ELEMENT_BIT_GN_TEMPERATURE    0x08
#define GNSS_HA_LOCAL_SURF_PARAMS_TIME_ELEMENT_BIT_GE_TEMPERATURE    0x04


/* ---LPPe HA GNSS Interface--- bitmask field bit defintion */
#define GNSS_HA_COMM_AD_REQ_IONO_BIT_KLOBUCHAR_MODEL        0x01
#define GNSS_HA_COMM_AD_REQ_IONO_BIT_IONO_STORM_WARNING     0x02

#define GNSS_HA_COMM_AD_REQ_TROPO_BIT_DELAY_LIST            0x01
#define GNSS_HA_COMM_AD_REQ_TROPO_BIT_SURFACE_PARAMS        0x02

#define GNSS_HA_IONO_MEAS_REQ_BIT_TEC_PER_SV                0x01
#define GNSS_HA_IONO_MEAS_REQ_BIT_ZENITH_TEC                0x02

#define GNSS_HA_COMM_IONO_AD_SUPP_BIT_LOCAL_KLOBUCHAR            0x01
#define GNSS_HA_COMM_IONO_AD_SUPP_BIT_IONO_STORM_WARNING         0x02
#define GNSS_HA_COMM_IONO_AD_SUPP_BIT_WIDE_AREA_IONO_SURFACE     0x04

#define GNSS_HA_COMM_TROPO_AD_SUPP_BIT_LOCAL_TROPOSPHERE_DELAY   0x01
#define GNSS_HA_COMM_TROPO_AD_SUPP_BIT_SURFACE_PARAMETERS        0x02
#define GNSS_HA_COMM_TROPO_AD_SUPP_BIT_MULTI_GRID_POINTS         0x04

#define GNSS_HA_COMM_CCP_AD_SUPP_BIT_SUPPORT_AREA_ASSIST         0x01
#define GNSS_HA_COMM_CCP_AD_SUPP_BIT_MULTI_REF_STATION           0x02

#define GNSS_HA_GENE_AD_SUPP_BIT_BIT_TEC_PER_SV                  0x01
#define GNSS_HA_GENE_AD_SUPP_BIT_BIT_ZENITH_TEC                  0x02

#define GNSS_HA_MODE_SUPPORT_BIT_UE_BASED                        0x01
#define GNSS_HA_MODE_SUPPORT_BIT_UE_ASSISTED                     0x02

#define GNSS_HA_ANT_SUPPORT_BIT_ANT_DESCRIPTION                  0x01
#define GNSS_HA_ANT_SUPPORT_BIT_ANT_ORIENTATION                  0x02



/* NNUM ********************************************************************/

typedef enum
{
    GNSS_NETWORK_CELL_TYPE_NULL,
    GNSS_NETWORK_CELL_TYPE_EUTRA,
    GNSS_NETWORK_CELL_TYPE_UTRA,
    GNSS_NETWORK_CELL_TYPE_GSM
} gnss_network_cell_type_enum;


typedef enum
{
    GNSS_ID_GPS,
    GNSS_ID_SBAS,
    GNSS_ID_QZSS,
    GNSS_ID_GALILEO,
    GNSS_ID_GLONASS,
    GNSS_ID_BDS,
    GNSS_ID_MAX = MAX_ENUM_VALUE
} gnss_id_enum;


typedef enum
{
    GNSS_TO_ID_GPS = 1,
    GNSS_TO_ID_GALILEO,
    GNSS_TO_ID_QZSS,
    GNSS_TO_ID_GLONASS,
    GNSS_TO_ID_BDS
} gnss_to_id_enum;


typedef enum
{
    SBAS_ID_WAAS,
    SBAS_ID_EGNOS,
    SBAS_ID_MSAS,
    SBAS_ID_GAGAN
} sbas_id_enum;


typedef enum
{
    GNSS_COMMON_ASSIST_DATA_TYPE_REF_TIME,
    GNSS_COMMON_ASSIST_DATA_TYPE_REF_LOCACTION,
    GNSS_COMMON_ASSIST_DATA_TYPE_ION_MODEL,
    GNSS_COMMON_ASSIST_DATA_TYPE_EARTH_ORIENT_PARAMS,
    GNSS_COMMON_HA_ASSIST_DATA_TYPE_ION_MODEL,
    GNSS_COMMON_HA_ASSIST_DATA_TYPE_TROPO_MODEL,
    GNSS_COMMON_HA_ASSIST_DATA_TYPE_ALT,
    GNSS_COMMON_HA_ASSIST_DATA_TYPE_SOLAR,
    GNSS_COMMON_HA_ASSIST_DATA_TYPE_CCP
} gnss_common_assist_data_type_enum;


typedef enum
{
    GNSS_GENERIC_ASSIST_DATA_TYPE_TIME_MODEL,
    GNSS_GENERIC_ASSIST_DATA_TYPE_DGNSS_CORRECTION,
    GNSS_GENERIC_ASSIST_DATA_TYPE_NAVIGATION_MODEL,
    GNSS_GENERIC_ASSIST_DATA_TYPE_RTI,
    GNSS_GENERIC_ASSIST_DATA_TYPE_DATA_BIT_ASSIST,
    GNSS_GENERIC_ASSIST_DATA_TYPE_ACQUISITION,
    GNSS_GENERIC_ASSIST_DATA_TYPE_ALMANAC,
    GNSS_GENERIC_ASSIST_DATA_TYPE_UTC_MODEL,
    GNSS_GENERIC_ASSIST_DATA_TYPE_AUX_INFO,
    GNSS_GENERIC_ASSIST_DATA_TYPE_DBDS_CORRECTION,
    GNSS_GENERIC_ASSIST_DATA_TYPE_BDS_GRID_MODEL,
    GNSS_GENERIC_HA_ASSIST_DATA_TYPE_CCP,
    GNSS_GENERIC_HA_ASSIST_DATA_TYPE_DEGRADATION
} gnss_generic_assist_data_type_enum;


typedef enum
{
    GNSS_CLOCK_MODEL_TYPE_STANDARD,
    GNSS_CLOCK_MODEL_TYPE_NAV,
    GNSS_CLOCK_MODEL_TYPE_CNAV,
    GNSS_CLOCK_MODEL_TYPE_GLONASS,
    GNSS_CLOCK_MODEL_TYPE_SBAS,
    GNSS_CLOCK_MODEL_TYPE_BDS
} gnss_clock_model_type_enum;


typedef enum
{
    GNSS_ORBIT_MODEL_TYPE_KEPLERIAN_SET,
    GNSS_ORBIT_MODEL_TYPE_NAV_KEPLERIAN_SET,
    GNSS_ORBIT_MODEL_TYPE_CNAV_KEPLERIAN_SET,
    GNSS_ORBIT_MODEL_TYPE_GLONASS_ECEF,
    GNSS_ORBIT_MODEL_TYPE_SBAS_ECEF,
    GNSS_ORBIT_MODEL_TYPE_BDS_KEPLERIAN_SET
} gnss_orbit_model_type_enum;


typedef enum
{
    GNSS_NAV_MODEL_REQ_TYPE_STORED_NAV_LIST,
    GNSS_NAV_MODEL_REQ_TYPE_REQ_NAV_LIST
} gnss_nav_model_req_type_enum;

typedef enum
{
    GNSS_ACQ_ASSIST_DOPPLER_UNCERTAINTY_EXT_ENUM_D60,
    GNSS_ACQ_ASSIST_DOPPLER_UNCERTAINTY_EXT_ENUM_D80,
    GNSS_ACQ_ASSIST_DOPPLER_UNCERTAINTY_EXT_ENUM_D100,
    GNSS_ACQ_ASSIST_DOPPLER_UNCERTAINTY_EXT_ENUM_D120,
    GNSS_ACQ_ASSIST_DOPPLER_UNCERTAINTY_EXT_ENUM_NO_INFO
} gnss_acq_assist_doppler_uncertainty_ext_enum;


typedef enum
{
    GNSS_ALMANAC_TYPE_KEPLERIAN_SET,
    GNSS_ALMANAC_TYPE_NAV_KEPLERIAN_SET,
    GNSS_ALMANAC_TYPE_REDUCED_KEPLERIAN_SET,
    GNSS_ALMANAC_TYPE_MIDI_KEPLERIAN_SET,
    GNSS_ALMANAC_TYPE_GLONASS_SET,
    GNSS_ALMANAC_TYPE_ECEF_SBAS_SET,
    GNSS_ALMANAC_TYPE_BDS_ALMANAC_SET
} gnss_almanac_type_enum;


typedef enum
{
    GNSS_UTC_MODEL_TYPE_MODEL1,  /* GPS, Galileo, QZSS */
    GNSS_UTC_MODEL_TYPE_MODEL2,
    GNSS_UTC_MODEL_TYPE_MODEL3,  /* GLONASS */
    GNSS_UTC_MODEL_TYPE_MODEL4,  /* SBAS */
    GNSS_UTC_MODEL_TYPE_MODEL5   /* BDS */
} gnss_utc_model_type_enum;


typedef enum
{
    GNSS_AUX_INFO_GNSS_TYPE_GPS,
    GNSS_AUX_INFO_GNSS_TYPE_GLONASS
} gnss_aux_info_gnss_type_enum;


typedef enum
{
    GNSS_POS_RESULT_TYPE_POS_CNF,
    GNSS_POS_RESULT_TYPE_ASSIST_DATA_REQ
} gnss_pos_result_type_enum;


typedef enum
{
    GNSS_MEAS_RESULT_TYPE_MEAS_CNF,
    GNSS_MEAS_RESULT_TYPE_ASSIST_DATA_REQ
} gnss_meas_result_type_enum;


typedef enum
{
    GNSS_LOC_RESULT_NULL,
    GNSS_LOC_RESULT_NO_ERROR,
    GNSS_LOC_RESULT_UNDEFINED,
    GNSS_LOC_RESULT_REQ_TIMEOUT,
    GNSS_LOC_RESULT_NOT_ENOUGH_SATELLITES,
    GNSS_LOC_RESULT_ASSIST_DATA_MISSING,  /* not used in POS(MEAS)_REQ/CNF primitive */

    /* dedicated for RRLP */
    GNSS_LOC_RESULT_METHOD_NOT_SUPPORTED,
    GNSS_LOC_RESULT_REFERENCE_BTS_NOT_SERVING_BTS,

    /* dedicated for RRC */
    GNSS_LOC_RESULT_NOT_ACCOMPLISHED_TIMING_OF_CELL_FRAMES,  /* similar to FINE_TIME_ASSISTANCE_MEASUREMENTS_NOT_POSSIBLE */
    GNSS_LOC_RESULT_REFERENCE_CELL_NOT_SERVING_CELL,         /* reference cell's SFN cannot be decoded */

    /* dedicated for LPP */    
    GNSS_LOC_RESULT_FINE_TIME_ASSISTANCE_MEASUREMENTS_NOT_POSSIBLE,  /* fineTimeAssistanceMeasurementsNotPossible IE present */
    GNSS_LOC_RESULT_ADR_MEASUREMENTS_NOT_POSSIBLE,                   /* adrMeasurementsNotPossible IE present */
    GNSS_LOC_RESULT_MULTI_FREQUENCY_MEASUREMENTS_NOT_POSSIBLE        /* multiFrequencyMeasurementsNotPossible IE present */
//#ifdef __EARLY_FIX_SUPPORT__
   ,GNSS_LOC_RESULT_EARLY_FIX,                                       /* Early fix result */
    GNSS_LOC_RESULT_EARLY_FIX_NO_RESULT                              /* Early fix no result */
//#endif
} gnss_loc_result_enum;


typedef enum {
    TIME_SIB_RESULT_OK          =0,         /* ERRC/EL1 reported useful info, check fields in lbs_errc_read_time_sib_ind_struct */
    TIME_SIB_RESULT_NOT_TRY     =1,         /* No valid SIB info, and LBS doesn��t need to try again */
    TIME_SIB_RESULT_RE_TRY      =2,         /* No valid SIB info, and LBS may try again */
    TIME_SIB_RESULT_TIMEOUT     =3          /* While trying to read SIB for time sync, guard timer timeouts(2s), Can retry, ask ERRC for further check*/
} time_sib_result_enum;


typedef enum {
    TIME_SIB_CDMA_SYS_TIME_SYNC  =0,
    TIME_SIB_CDMA_SYS_TIME_ASYNC =1
} time_sib_cdma_sys_time_type_enum;


typedef enum {
    GNSS_TIME,
    GPS_TIME,
    UTC_TIME
} frame_sync_pulse_time_type_enum;

typedef enum{
    ERRC_MDT_NO_REPORT_LOCATION,
    ERRC_MDT_REQUEST_STORE_LOCATION,                   /* ERRC request report stored location, LBS will determine report mode by ERRC request and User location setting. */
    ERRC_MDT_REQUEST_OPEN_GPS                          /* ERRC request report GPS, LBS will determine report mode by ERRC request and User location setting. */
} errc_lbs_gnss_pos_mdt_type_enum;


/* ---LPPe HA GNSS Interface--- */
typedef enum
{
    GNSS_HA_IONO_MODEL_TYPE_STATIC_MODEL,
    GNSS_HA_IONO_MODEL_TYPE_PERIODIC_MODEL,
    GNSS_HA_IONO_MODEL_TYPE_MAX = MAX_ENUM_VALUE
} gnss_ha_iono_model_type_enum;


typedef enum
{
    GNSS_HA_COMMON_ASSIST_DATA_TYPE_IONO_MODEL,
    GNSS_HA_COMMON_ASSIST_DATA_TYPE_TROPO_MODEL,
    GNSS_HA_COMMON_ASSIST_DATA_TYPE_ALTITUDE,
    GNSS_HA_COMMON_ASSIST_DATA_TYPE_SOLAR_RAD,
    GNSS_HA_COMMON_ASSIST_DATA_TYPE_CCP_ASSIST,
    GNSS_HA_COMMON_ASSIST_DATA_TYPE_MAX = MAX_ENUM_VALUE
} gnss_ha_common_assist_data_type_enum;


typedef enum
{
    GNSS_HA_GENERIC_ASSIST_DATA_TYPE_WA_ION_SURF,
    GNSS_HA_GENERIC_ASSIST_DATA_TYPE_SV_MECHANICS,
    GNSS_HA_GENERIC_ASSIST_DATA_TYPE_SV_DCB,
    GNSS_HA_GENERIC_ASSIST_DATA_TYPE_DEGRAD_MODEL,
    GNSS_HA_GENERIC_ASSIST_DATA_TYPE_CCP_ASSIST,
    GNSS_HA_GENERIC_ASSIST_DATA_TYPE_NAV_MODEL,
    GNSS_HA_GENERIC_ASSIST_DATA_TYPE_MAX = MAX_ENUM_VALUE
} gnss_ha_generic_assist_data_type_enum;


typedef enum
{
    GNSS_HA_CCP_ASSIST_COMMON_TYPE_COMMOM,
    GNSS_HA_CCP_ASSIST_COMMON_TYPE_CONTROL,
    GNSS_HA_CCP_ASSIST_COMMON_TYPE_MAX = MAX_ENUM_VALUE
} gnss_ha_ccp_assist_common_type_enum;


typedef enum
{
    GNSS_HA_SV_TYPE_GPS_IIR,
    GNSS_HA_SV_TYPE_GPS_IIRM,
    GNSS_HA_SV_TYPE_GPS_IIF,
    GNSS_HA_SV_TYPE_GPS_III,
    GNSS_HA_SV_TYPE_GLONASS_M,
    GNSS_HA_SV_TYPE_GLONASS_K1,
    GNSS_HA_SV_TYPE_GLONASS_K2,
    GNSS_HA_SV_TYPE_GLONASS_KM,
    GNSS_HA_SV_TYPE_UNKNOWN,
    GNSS_HA_SV_TYPE_MAX = MAX_ENUM_VALUE
} gnss_ha_sv_type_enum;


typedef enum
{
   GNSS_HA_DCB_REF_PD_PILOT,
   GNSS_HA_DCB_REF_PD_DATA,
   GNSS_HA_DCB_REF_PD_NOT_APPLICABLE,
   GNSS_HA_DCB_REF_MAX = MAX_ENUM_VALUE
} gnss_ha_dcb_ref_pd_enum;


typedef enum
{
    GNSS_HA_CODE_PHASE_ERR_TYPE_RMS,
    GNSS_HA_CODE_PHASE_ERR_TYPE_CNR,
    GNSS_HA_CODE_PHASE_ERR_TYPE_MAX = MAX_ENUM_VALUE
} gnss_ha_code_phase_err_type_enum;


typedef enum
{
    GNSS_HA_AGNSS_QOR_TYPE_10_M,
    GNSS_HA_AGNSS_QOR_TYPE_1_KM,
    GNSS_HA_AGNSS_QOR_TYPE_10_KM,
    GNSS_HA_AGNSS_QOR_TYPE_100_KM,
    GNAA_HA_AGNSS_QOR_TYPE_MAX = MAX_ENUM_VALUE
} gnss_ha_agnss_qor_type_enum;


typedef enum
{
    GNSS_HA_HORI_UNC_TYPE_CEP,
    GNSS_HA_HORI_UNC_TYPE_ELLIPSE,
    GNSS_HA_HORI_UNC_TYPE_MAX = MAX_ENUM_VALUE
} gnss_ha_hori_unc_type_enum;


typedef enum
{
    GNSS_HA_MULTIPATH_DETECTION_TYPE_LOW,
    GNSS_HA_MULTIPATH_DETECTION_TYPE_MODERATE,
    GNSS_HA_MULTIPATH_DETECTION_TYPE_HIGH,
    GNSS_HA_MULTIPATH_DETECTION_TYPE_NOT_MEASURED,
    GNSS_HA_MULTIPATH_DETECTION_TYPE_MAX = MAX_ENUM_VALUE
} gnss_ha_multipath_detect_type_enum;


typedef enum
{
    GNSS_HA_TGT_ERR_CAUSE_UNDEFINED,
    GNSS_HA_TGT_ERR_CAUSE_HA_METHOD_NOT_SUPPORTED,
    GNSS_HA_TGT_ERR_CAUSE_MAX = MAX_ENUM_VALUE
} gnss_ha_tgt_err_cause_enum;


typedef enum
{
    GNSS_HA_TGT_IONO_MEAS_ERR_CAUSE_UNDEFINED,
    GNSS_HA_TGT_IONO_MEAS_ERR_CAUSE_IONO_MEAS_NOT_SUPPORTED,
    GNSS_HA_TGT_IONO_MEAS_ERR_CAUSE_IONO_MEAS_NOT_AVAILABLE,
    GNSS_HA_TGT_IONO_MEAS_ERR_CAUSE_MAX = MAX_ENUM_VALUE
} gnss_ha_tgt_iono_meas_err_cause_enum;

typedef enum
{
    GNSS_HA_TGT_ENV_OBSERVE_ERR_CAUSE_UNDEFINED,
    GNSS_HA_TGT_ENV_OBSERVE_ERR_CAUSE_SURF_MEAS_NOT_SUPPORTED,
    GNSS_HA_TGT_ENV_OBSERVE_ERR_CAUSE_SURF_MEAS_NOT_AVAILABLE,
    GNSS_HA_TGT_ENV_OBSERVE_ERR_CAUSE_MAX = MAX_ENUM_VALUE
} gnss_ha_tgt_env_observe_err_cause_enum;


typedef enum
{
    GNSS_HA_TGT_GNSS_ERR_CAUSE_UNDEFINED,
    GNSS_HA_TGT_GNSS_ERR_CAUSE_GNSS_NOT_SUPPORTED_BY_TARGET,
    GNSS_HA_TGT_GNSS_ERR_CAUSE_GNSS_UNAVAILABLE_FOR_ALL_REQUESTED_SIGNALS,
    GNSS_HA_TGT_GNSS_ERR_CAUSE_GNSS_ANTENNA_INFO_NOT_SUPPORTED,
    GNSS_HA_TGT_GNSS_ERR_CAUSE_GNSS_ANTENNA_INFO_NOT_AVAILABLE,
    GNSS_HA_TGT_GNSS_ERR_CAUSE_GNSS_PRESSURE_INFO_NOT_SUPPORTED,
    GNSS_HA_TGT_GNSS_ERR_CAUSE_GNSS_PRESSURE_INFO_NOT_AVAILABLE,
    GNSS_HA_TGT_GNSS_ERR_CAUSE_GNSS_UNABLE_TO_MODIFY_CTRL_PARAMS,
    GNSS_HA_TGT_GNSS_ERR_CAUSE_GNSS_MAX = MAX_ENUM_VALUE
} gnss_ha_tgt_gnss_err_cause_enum;


typedef enum
{
    GNSS_HA_REQ_CCP_REF_STATION_TYPE_POS_BASED,
    GNSS_HA_REQ_CCP_REF_STATION_TYPE_ID_BASED,
    GNSS_HA_REQ_CCP_REF_STATION_TYPE_KILL_LIST,
    GNSS_HA_REQ_CCP_REF_STATION_TYPE_MAX = MAX_ENUM_VALUE
} gnss_ha_req_ccp_ref_station_type_enum;


typedef enum
{
   GNSS_HA_RleIonoElement_ionoIndex_noaaScales_selected = 1,
   GNSS_HA_RleIonoElement_ionoIndex_UnKnowItem_selected,
   GNSS_HA_RleIonoElement_ionoIndex_MAX = MAX_ENUM_VALUE
} gnss_ha_rle_iono_element_selector_enum;


typedef enum
{
   GNSS_HA_NOAASCALES_G1,
   GNSS_HA_NOAASCALES_G2,
   GNSS_HA_NOAASCALES_G3,
   GNSS_HA_NOAASCALES_G4,
   GNSS_HA_NOAASCALES_G5,
   GNSS_HA_NOAASCALES_UNKNOWN,
   GNSS_HA_NOAASCALES_NONE,
   GNSS_HA_NOAASCALES_MAX = MAX_ENUM_VALUE
} gnss_ha_noaa_scales_enum;


typedef enum
{
   GNSS_HA_ELLIPSOID_POINT_LATITUDESIGN_NORTH,
   GNSS_HA_ELLIPSOID_POINT_LATITUDESIGN_SOUTH,
   GNSS_HA_ELLIPSOID_POINT_LATITUDESIGN_MAX = MAX_ENUM_VALUE
} gnss_ha_ellopsoid_point_latitude_sign_enum;


typedef enum
{
   GNSS_HA_ANTENNA_DESCRIPTION_IGS_ANTENNA_NAME_SELECTED = 1,
   GNSS_HA_ANTENNA_DESCRIPTION_PROPRIETARY_NAME_SELECTED,
   GNSS_HA_ANTENNA_DESCRIPTION_UNKNOWN_ITEM_SELECTED,
   GNSS_HA_ANTENNA_DESCRIPTION_MAX = MAX_ENUM_VALUE
} gnss_ha_antenna_description_selector_enum;


typedef enum
{
   GNSS_HA_NAVMODEL_COORDINATE_BASED_REFERENCED_TO_CENTER_OF_MASS,
   GNSS_HA_NavModel_COORDINATE_BASED_REFERENCED_TO_ANTENNA_PHASE_CENTER,
   GNSS_HA_NavModel_COORDINATE_BASED_REFERENCED_TO_MAX = MAX_ENUM_VALUE
} gnss_ha_nav_model_coordinate_based_referenced_enum;


#endif /* _GNSS2LCSP_ENUM_H_ */

