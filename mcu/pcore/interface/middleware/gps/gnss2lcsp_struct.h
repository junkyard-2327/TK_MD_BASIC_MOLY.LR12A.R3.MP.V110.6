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
 *   gnss2lcsp_struct.h
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
 * 12 14 2017 jl.hsiao
 * [MOLY00296306] [Bianco][O1][6630][GPS] 4G FDD B1 AGNSS CP MA7.5 Sensitivity -130dB is Fail (Time out waiting for the 1st measurment)
 * .
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
 * [MOLY00240104] MDT feature change for Vodafone requirement
 * [UMOLYA][LBS]MDT feature change for VDF.
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
 * 04 29 2015 roland.li
 * [MOLY00109917] [6291][LBS]MDT check in to UMOLY TRUNK
 * [MDT]LBS part.
 *
 * 04 28 2015 george.chang
 * [MOLY00109714] [6291] MOB MDT check in to UMOLY TRUNK
 * 	.
 *
 * 04 16 2015 roland.li
 * [MOLY00087866] [Uni-Bin]AGNSS ubin change
 * .
 *
 * 01 07 2015 roland.li
 * [MOLY00089901] [UMOLY][LBS][LPP] new feaure check in
 * backout gnss2lcsp change.
 *
 * 08 04 2014 doug.shih
 * [MOLY00073990] [LPP CP] LPP code check-in for OTDOA feature
 * .
 *
 * 04 13 2014 roland.li
 * [MOLY00061982] [6595][6630][AGPS][Certification] 2G GSM1900 AGLO MSB70.16.5.1 & 70.16.6 ?????EE????????????????????
 * TOD issue.
 *
 * 03 12 2014 roland.li
 * [MOLY00058246] [ASOP] AGNSS LBS task, AGNSS TOD to TOW transfer.
 *
 *
 *****************************************************************************/

#ifndef _GNSS2LCSP_STRUCT_H
#define _GNSS2LCSP_STRUCT_H

#include "gnss2lcsp_enum.h"
#include "gps2lcsp_enum.h"

#include "mcd_l3_inc_struct.h" /* for PLMN id */
#include "kal_public_api.h"
#include "kal_general_types.h"
        
//#if defined(__AGNSS_SUPPORT__) || defined(__AGPS_SUPPORT__)  /* should add a new compile option __AGNSS_SUPPORT__*/


/*=== GNSS Common Assistance Data ===*/

/* start for gnss reference time */
typedef struct
{
    kal_uint8   svID;         /* satellite PRN [1..64] */
    kal_uint16  tlmWord;      /* telemetry message [0..16383] */
    kal_uint8   antiSpoof;    /* anti spoof flag [0..1] */
    kal_uint8   alert;        /* alert flag [0..1] */
    kal_uint8   tlmRsvdBits;  /* 2 bit reserved bits [0..3] */
} gnss_gps_tow_assist_struct;


typedef struct
{
    gnss_id_enum                gnssTimeID;
    /**
     * This field specifies the sequential number of days from the origin of the GNSS System Time as follows: 
     * GPS, QZSS, SBAS �V Days from January 6th 1980 00:00:00 UTC(USNO)
     * Galileo �V TBD; 
     * GLONASS �V Days from January 1st 1996
     */
    kal_uint16                  gnssDayNumber;           /* [0..32767] */
    kal_uint32                  gnssTimeOfDay;           /* [0..86399] in seconds */
    kal_bool                    gnssTimeOfDayFracMsecValid;
    kal_uint16                  gnssTimeOfDayFracMsec;   /* [0..999] in milli-seconds */
    kal_bool                    notificationLeapSecondValid;
    kal_uint8                   notificationLeapSecond;  /* only present when gnss=GLONASS */
    kal_uint8                   numGpsTowAssist;         /* only present when gnss=GPS */
    gnss_gps_tow_assist_struct  gpsTowAssist[GNSS_MAX_REF_TIME_SAT_ELEMENT];
} gnss_system_time_struct;


typedef struct
{
    kal_uint16      physCellId;  /* [0..503] */
    kal_uint32      earfcn;      /* [0..262143], 65535 is invalid to indicate ARFCN-ValueEUTRA-v9a0 present */    
    /* optional field */
    kal_bool        plmnIdValid;
    plmn_id_struct  plmnId;
    kal_bool        cellIdValid;
    kal_uint32      cellId;      /* eutra 28 bits */
} gnss_eutra_cell_id_struct;


typedef struct
{
    kal_uint16      physCellId;  /* [0..511] */
    kal_uint16      uarfcn;      /* [0..16383] */
    /* optional field */
    kal_bool        plmnIdValid;
    plmn_id_struct  plmnId;
    kal_bool        cellIdValid;
    kal_uint32      cellId;      /* utra 32 bits */ 
} gnss_utra_cell_id_struct;


typedef struct
{
    kal_uint16      bcchCarrier;  /* [0..1023] */
    kal_uint8       bsic;         /* [0..63] */
    /* optional field */
    kal_bool        plmnIdValid;
    plmn_id_struct  plmnId;
    kal_bool        cellIdValid;  /* this validity flag indicate if lac and cellId are present or not */
    kal_uint16      lac;          /* lac 16 bits */
    kal_uint16      cellId;       /* gsm 16 bits */
} gnss_gsm_cell_id_struct;


typedef struct
{
   gnss_network_cell_type_enum     type;

   union
   {
      gnss_eutra_cell_id_struct    eutra;
      gnss_utra_cell_id_struct     utra;
      gnss_gsm_cell_id_struct      gsm;
   }
   data;
} gnss_network_cell_id_struct;


typedef struct
{
   /* The total time since the particular frame structure start is secondsFromFrameStructureStart + fractionalSecondsFromFrameStructureStart  */
   kal_uint16                   secondsFromFrameStructureStart;            /* [0-12533] in seconds, this field specifies the number of seconds from the beginning of the longest frame structure in the corresponding air interface */
   kal_uint32                   fractionalSecondsFromFrameStructureStart;  /* [0-3999999] in 250 nano-seconds, This field specifies the fractional part of the secondsFromFrameStructureStart  in 250 ns resolution */
   kal_bool                     framDriftValid;
   kal_int8                     frameDrift;                                /* [-64~63] in 2^(-30) seconds/second */
   gnss_network_cell_id_struct  cellID;
} gnss_network_time_struct;


typedef struct
{
   gnss_network_time_struct  networkTime;
   kal_bool                  referenceTimeUncValid;
   kal_uint8                 referenceTimeUnc;  /* K = [0..127], uncertainty r (microseconds) = C*(((1+x)^K)-1), C=0.5, x=0.14 */
   kal_bool                  bsAlignValid;
   kal_bool                  bsAlign;           /* indicate all cell with the same carrier freq. and TA/LA/RA are frame aligned */
} gnss_ref_time_one_cell_struct;


typedef struct
{
    gnss_system_time_struct        systemTime;
    kal_bool                       referenceTimeUncValid;
    kal_uint8                      referenceTimeUnc;  /* K = [0..127], uncertainty r (microseconds) = C*(((1+x)^K)-1), C=0.5, x=0.14 */
    kal_uint8                      numGnssReferenceTimeForCells;
    gnss_ref_time_one_cell_struct  gnssReferenceTimeForCells[GNSS_MAX_REF_CELL_FTA_ELEMENT];
} gnss_reference_time_struct;
/* end for gnss reference time */


/* start for gnss reference location */
typedef struct
{
    kal_bool    signOfLatitude;        /* TRUE: SOUTH, FALSE: NORTH */
    kal_uint32  degreesLatitude;       /* [0..8388607] */
    kal_int32   degreesLongitude;      /* [-8388608..8388607] */
    kal_bool    signOfAltitude;        /* TRUE: DEPTH, FALSE: HEIGHT */
    kal_uint16  altitude;              /* [0..32767] */
    kal_uint8   uncertaintySemiMajor;  /* K: [0..127], uncertainty r (meter) = C*((1+x)^K-1), C=10, x=0.1 */
    kal_uint8   uncertaintySemiMinor;  /* K: [0..127], uncertaintyr (meter) = C*((1+x)^K-1), C=10, x=0.1 */
    kal_uint8   orientationMajorAxis;  /* bearing angle degree: [0-179] */
    kal_uint8   uncertaintyAltitude;   /* K: [0..127], uncertainty h (meter) = C*((1+x)^K-1), C=45, x=0.025 */
    kal_uint8   confidence;            /* [0..100] */
} gnss_reference_location_struct;
/* end for gnss reference location */


/* start for gnss ionospheric model */
typedef struct
{
    kal_uint8  dataId; /* dataID, to indicate the klobuchar model parameter is apply for which GNSS, map to GNSS_ION_KLOBUCHAR_DATA_ID_VALUE_* */
    kal_int8   alfa0;  /* alpha0 [-128..127] (* 2^-30 seconds) */
    kal_int8   alfa1;  /* alpha1 [-128..127] (* 2^-27 seconds/semicircle) */
    kal_int8   alfa2;  /* alpha2 [-128..127] (* 2^-24 seconds/semicircle^2) */
    kal_int8   alfa3;  /* alpha3 [-128..127] (* 2^-24 seconds/semicircle^3) */
    kal_int8   beta0;  /* beta0  [-128..127] (* 2^11 seconds) */
    kal_int8   beta1;  /* beta1  [-128..127] (* 2^14 seconds/semicircle) */
    kal_int8   beta2;  /* beta2  [-128..127] (* 2^16 seconds/semicircle^2) */
    kal_int8   beta3;  /* beta3  [-128..127] (* 2^16 seconds/semicircle^3) */
} gnss_klobuchar_model_paras_struct;


typedef struct
{
    kal_uint16  ai0;  /* [0..4095], to be changed to [0..2047] when A-Galileo is planed to support (because LPP ASN.1 is upgraded to Rel-12, but RRC and RRLP not) */
    kal_uint16  ai1;  /* [0..4095], to be changed to kal_int16 [-1024..1023] when A-Galileo is planed to support (because LPP ASN.1 is upgraded to Rel-12, but RRC and RRLP not) */
    kal_uint16  ai2;  /* [0..4095], to be changed to kal_int16 [-8192..8191] when A-Galileo is planed to support (because LPP ASN.1 is upgraded to Rel-12, but RRC and RRLP not) */

    /* optional field */
    /**
     * iono storm flag represent five region: [value 0: no disturbance, value 1: disturbance]
     *  region 1: for the northern region (60�X<MODIP<90�X)
     *  region 2: for the northern middle region (30�X<MODIP<60�X)
     *  region 3: for the equatorial region (-30�X<MODIP<30�X)
     *  region 4: for the southern middle region (-60�X<MODIP<-30�X)
     *  region 5: for the southern region (-90�X<MODIP<-60�X)
     */
    kal_bool    ionoStormFlag1Valid;
    kal_bool    ionoStormFlag1;
    kal_bool    ionoStormFlag2Valid;
    kal_bool    ionoStormFlag2;
    kal_bool    ionoStormFlag3Valid;
    kal_bool    ionoStormFlag3;
    kal_bool    ionoStormFlag4Valid;
    kal_bool    ionoStormFlag4;
    kal_bool    ionoStormFlag5Valid;
    kal_bool    ionoStormFlag5;
} gnss_nequick_model_paras_struct;


typedef struct
{
    kal_bool                           klobucharModelValid;  /* for GPS, GLONASS, etc... */
    gnss_klobuchar_model_paras_struct  klobucharModel;
    kal_bool                           neQuickModelValid;    /* for Galileo */
    gnss_nequick_model_paras_struct    neQuickModel;
} gnss_ionospheric_model_struct;
/* end for gnss ionospheric model */


/* start for gnss earth orientation parameters */
typedef struct
{
    kal_uint16  teop;         /* [0..65535], EOP data reference time in seconds, scale factor 2^4 seconds */
    kal_int32   pmX;          /* [-1048576..1048575], X-axis polar motion value at reference time in arc-seconds, scale factor 2^(-20) arc-seconds */
    kal_int16   pmXdot;       /* [-16384..16383], X-axis polar motion drift at reference time in arc-seconds/day, scale factor 2^(-21) arc-seconds/day */
    kal_int32   pmY;          /* [-1048576..1048575], Y-axis polar motion value at reference time in arc-seconds, scale factor 2^(-20) arc-seconds */
    kal_int16   pmYdot;       /* [-16384..16383] Y-axis polar motion drift at reference time in arc-seconds/day, scale factor 2^(-21) arc-seconds/day */
    kal_int32   deltaUT1;     /* [-1073741824..1073741823], UT1-UTC diff at reference time in seconds, scale factor 2^(-24) seconds */
    kal_int32   deltaUT1dot;  /* [-262144..262143], the rate of UT1-UTC diff at reference time in seconds/day, scale factor 2^(-25) seconds/day */
} gnss_earth_orient_params_struct;
/* end for gnss earth orientation parameters */


/*=== GNSS Generic Assistance Data ===*/

/* start for gnss time model */
/**
 * in LPP, location server could provide up to 15 GNSS-GNSS system time offset
 * in RRC/RRLP, location server could provide up to 7 GNSS-GNSS system time offset
 * i.e. generic assist data is for GPS, time model could provide GPS-GLONASS time offset
 */
typedef struct
{
    /* note that RRC/RRLP tA0, tA1 range is larger than LPP, although scale factor is the same */
    kal_uint16        gnssTimeModelRefTime;  /* [0..65535], the reference time of week, scale factor 2^4 seconds */
    kal_int32         tA0;                   /* [-67108864..67108863] for LPP, [-2147483648 .. 2147483647] for RRC/RRLP, the bias coefficient, scale factor 2^(-35) seconds */
    kal_bool          tA1Valid;
    kal_int32         tA1;                   /* [-4096..4095] for LPP, [-8388608 .. 8388607] for RRC/RRLP, the drift coefficient, scale factor 2^(-51) seconds/second */
    kal_bool          tA2Valid;
    kal_int8          tA2;                   /* [-64..63], the drift rate correction coefficient, scale factor 2^(-68) seconds/second^2 */
    gnss_to_id_enum   gnssToId;              /* GPS, Galileo, QZSS, GLOANSS, BDS */
    /* optional field */
    kal_bool          weekNumberValid;
    kal_uint16        weekNumber;            /* [0..8191], the reference week */
    kal_bool          deltaTValid;
    kal_int8          deltaT;                /* [-128..127], the integer number of seconds of GNSS-GNSS time offset */
} gnss_time_model_element_struct;


typedef struct
{
    kal_uint8                       numTimeModels;
    gnss_time_model_element_struct  gnssTimeModels[GNSS_MAX_TIME_MODEL_ELEMENT];  /* 6-15 is reserved */
} gnss_time_model_list_struct;

/* end for gnss time model */


/* start for gnss dgnss correction */
typedef struct
{
   kal_uint8   svID;                   /* [0..63] */
   kal_uint16  iod;                    /* [11 bits], for issue of data field */
   kal_uint8   udre;                   /* [0-3] */
   kal_int16   pseudoRangeCor;         /* [-2047..2047], the correction to the pseudorange for the particular satellite at dgnssRefTime, scale factor 0.32 meters */
   kal_int8    rangeRateCor;           /* [-127..127], the rate-of-change of the pseudorange correction for the particular satellite, scale factor 0.032 meters/sec */
   /* optional field */
   kal_bool    udreGrowthRateValid;
   kal_uint8   udreGrowthRate;         /* [0-7], an estimate of the growth rate of uncertainty (1-�m) in the corrections for the particular satellite */
   kal_bool    udreValidityTimeValid;
   kal_uint8   udreValidityTime;       /* [0-7], the time when the udreGrowthRate field applies and is included if udreGrowthRate is included */
} gnss_dgnss_corrections_element_struct;


typedef struct
{
    kal_uint8                              gnssSignalId;  /* map to GNSS_SGN_ID_VALUE_* */
    kal_uint8                              gnssStatusHealth;  /* [0-7], for UDRE scale factor */
    kal_uint8                              numCorrectionElements;
    gnss_dgnss_corrections_element_struct  correctionElements[GNSS_MAX_DGNSS_CORRECTION_INFO_ELEMENT];
} gnss_dgnss_signal_type_element_struct;


typedef struct
{
    kal_uint16                             dgnssRefTime;  /* [0..3599], the time for which the DGNSS corrections are valid, modulo 1 hour, scale factor 1 seconds */
    kal_uint8                              numSgnTypes;
    gnss_dgnss_signal_type_element_struct  sgnTypes[GNSS_MAX_DGNSS_SGN_TYPE_ELEMENT];
} gnss_diff_correction_struct;
/* end for gnss dgnss correction */


/* start for gnss navigation model */
typedef struct
{
    kal_uint16  stanClockToc;      /* [0..16383], scale factor 60 seconds */
    kal_int16   stanClockAF2;      /* [-2048..2047], scale factor 2^(-65) seconds/seconds^2 */
    kal_int32   stanClockAF1;      /* [-131072..131071], scale factor 2^(-45) seconds/second */
    kal_int32   stanClockAF0;      /* [-134217728..134217727], scale factor 2^(-33) seconds */
    /* optional field */
    kal_bool    stanClockTgdValid;
    kal_int16   stanClockTgd;      /* [-512..511], scale factor 2^(-32) seconds */
    kal_bool    stanModelIdValid;
    kal_uint8   stanModelID;       /* [0..1], 0 for I/Nav, 1 for F/Nav Galileo clock clock */
} gnss_std_clock_model_element_struct;


typedef struct
{
    kal_uint8                            numStdClkElement;
    gnss_std_clock_model_element_struct  stdClkElement[GNSS_MAX_NAV_STD_CLK_MODEL_ELEMENT];
} gnss_standard_clock_model_struct;


typedef struct
{
    kal_uint16  navToc;  /* [0..37799], time of clock, scale factor 2^4 seconds */
    kal_int8    navaf2;  /* [-128..127], clock correction polynomial coefficient, scale factor 2^(-55) seconds/second^2 */
    kal_int16   navaf1;  /* [-32768..32767], clock correction polynomial coefficient, scale factor 2^(-43) seconds/second */
    kal_int32   navaf0;  /* [-2097152..2097151], clock correction polynomial coefficient, scale factor 2^(-31) seconds */
    kal_int8    navTgd;  /* [-128..127], group delay, scale factor 2^(-31) seconds */
} gnss_nav_clock_model_struct;


typedef struct
{
    kal_uint16  cnavToc;           /* [0..2015], clock data reference time of week, scale factor 300 seconds */
    kal_uint16  cnavTop;           /* [0..2015], clock data predict time of week, scale factor 300 seconds */
    kal_int8    cnavURA0;          /* [-16..15], SV clock accuracy index */
    kal_uint8   cnavURA1;          /* [0..7], SV clock accuracy change index */
    kal_uint8   cnavURA2;          /* [0..7], SV clock accuracy change rate index */
    kal_int16   cnavAf2;           /* [-512..511], SV clock drift rate correction coefficient, scale factor 2^(-60) seconds/second^2 */
    kal_int32   cnavAf1;           /* [-524288..524287], SV clock drift correction coefficient, scale factor 2^(-48) seconds/second */
    kal_int32   cnavAf0;           /* [-33554432..33554431], SV clock bias correction coefficient, scale 2^(-35) seconds */
    kal_int16   cnavTgd;           /* [-4096..4095], group delay, scale factor 2^(-35) seconds */
    kal_bool    cnavISCl1cpValid;
    kal_int16   cnavISCl1cp;       /* [-4096..4095], inter signal group delay correction, scale factor 2^(-35) seconds */
    kal_bool    cnavISCl1cdValid;
    kal_int16   cnavISCl1cd;       /* [-4096..4095], inter signal group delay correction, scale factor 2^(-35) seconds */
    kal_bool    cnavISCl1caValid;
    kal_int16   cnavISCl1ca;       /* [-4096..4095], inter signal group delay correction, scale factor 2^(-35) seconds */
    kal_bool    cnavISCl2cValid;
    kal_int16   cnavISCl2c;        /* [-4096..4095], inter signal group delay correction, scale factor 2^(-35) seconds */
    kal_bool    cnavISCl5i5Valid;
    kal_int16   cnavISCl5i5;       /* [-4096..4095], inter signal group delay correction, scale factor 2^(-35) seconds */
    kal_bool    cnavISCl5q5Valid;
    kal_int16   cnavISCl5q5;       /* [-4096..4095], inter signal group delay correction, scale factor 2^(-35) seconds */
} gnss_cnav_clock_model_struct;


typedef struct
{
    kal_int32  gloTau;            /* [-2097152..2097151], satellite clock offset, scale factor 2^(-30) seconds */
    kal_int16  gloGamma;          /* [-1024..1023], relative frequency offset from nominal value, scale factor 2^(-40) */
    kal_bool   gloDeltaTauValid;
    kal_int8   gloDeltaTau;       /* [-16..15], time difference between transmission in G2 and G1, scale factor 2^(-30) seconds */
} gnss_glonass_clock_model_struct;


typedef struct
{
    kal_uint16  sbasTo;    /* [0..5399], scale factor 16 seconds */
    kal_int16   sbasAgfo;  /* [-2048..2047], scale factor 2^(-31) seconds */
    kal_int8    sbasAgf1;  /* [-128..127], scale factor 2^(-40) seconds/second */
} gnss_sbas_clock_model_struct;


typedef struct
{
    kal_uint8   bdsAODC;  /* [0..31], age of data, clock (AODC) */
    kal_uint32  bdsToc;   /* [0..131071], time of clock, scale factor 2^3 seconds */
    kal_int32   bdsA0;    /* [-8388608..8388607], clock correction polynomial coefficient, scale factor 2^(-33) seconds */
    kal_int32   bdsA1;    /* [-2097152..2097151], clock correction polynomial coefficient, scale factor 2^(-50) sec/sec */
    kal_int32   bdsA2;    /* [-1024..1023], clock correction polynomial coefficient, scale factor 2^(-66) sec/sec2 */
    kal_int32   bdsTgd1;  /* [-512..511], equipment group delay differential, scale factor 0.1 nanosecond */
} gnss_bds_clock_model_struct;


typedef struct
{
    gnss_clock_model_type_enum            type;

    union
    {
        gnss_standard_clock_model_struct  standardClockModelList;  /* Model-1: usually used for Galileo */
        gnss_nav_clock_model_struct       navClockModel;           /* Model-2: for GPS */
        gnss_cnav_clock_model_struct      cnavClockModel;          /* Model-3: for modernized GPS */
        gnss_glonass_clock_model_struct   glonassClockModel;       /* Model-4: for GLONASS */
        gnss_sbas_clock_model_struct      sbasClockModel;          /* Model-5: for SBAS */
        gnss_bds_clock_model_struct       bdsClockModel;           /* Model-6: for BDS */
   } data;
} gnss_clock_model_struct;

typedef struct
{
    kal_uint16  keplerToe;         /* [0 .. 16383], time-of-ephemeris, scale factor 60 seconds */
    kal_int32   keplerW;           /* [-2147483648..2147483647], argument of perigee, scale factor 2^(-31) semi-circles */
    kal_int16   keplerDeltaN;      /* [-32768..32767], mean motion difference from computed value, scale factor 2^(-43) semi-circles/second */
    kal_int32   keplerM0;          /* [-2147483648..2147483647], mean anomaly at reference time, scale factor 2^(-31) semi-circles */
    kal_int32   keplerOmegaDot;    /* [-8388608.. 8388607], longitude of ascending node of orbit plane at weekly epoch, scale factor 2^(-43) semi-circles/second */
    kal_uint32  keplerE;           /* [0..4294967295], eccentricity, scale factor 2^(-33) */
    kal_int16   keplerIDot;        /* [-8192..8191], rate of inclination angle, scale factor 2^(-43) semi-circles/second */
    kal_uint32  keplerAPowerHalf;  /* [0.. 4294967295], semi-major Axis, scale factor 2^(-19) meters^(0.5)*/
    kal_int32   keplerI0;          /* [-2147483648..2147483647], inclination angle at reference time, scale factor 2^(-31) semi-circles */
    kal_int32   keplerOmega0;      /* [-2147483648..2147483647], longitude of ascending node of orbit plane at weekly epoch, scale factor 2^(-31) semi-circles */
    kal_int16   keplerCrs;         /* [-32768..32767], amplitude of the sine harmonic correction term to the orbit radius, scale factor 2^(-5) meters */
    kal_int16   keplerCis;         /* [-32768..32767], amplitude of the sine harmonic correction term to the angle of inclination, scale factor 2^(-29) radians */
    kal_int16   keplerCus;         /* [-32768..32767], amplitude of the sine harmonic correction term to the argument of latitude, scale factor 2^(-29) radians */
    kal_int16   keplerCrc;         /* [-32768..32767], amplitude of the cosine harmonic correction term to the orbit radius, scale factor 2^(-5) meters */
    kal_int16   keplerCic;         /* [-32768..32767], amplitude of the cosine harmonic correction term to the angle of inclination, scale factor 2^(-29) radians */
    kal_int16   keplerCuc;         /* [-32768..32767], amplitude of the cosine harmonic correction term to the argument of latitude, scale factor 2^(-29) radians */
} gnss_nav_model_keplerian_set_struct;

typedef struct
{
    kal_uint32  reserved1;  /* [0..8388607], 23 bit field */
    kal_uint32  reserved2;  /* [0..16777215], 24 bit field */
    kal_uint32  reserved3;  /* [0..16777215], 24 bit field */
    kal_uint16  reserved4;  /* [0..65535], 16 bit field */
} gnss_nav_model_nav_keplerian_set_struct_add_nav_param_ephemSF1Rsvd_struct;


typedef struct
{
    kal_uint8  ephemCodeOnL2; /* [0..3] */
    kal_uint8  ephemL2Pflag;  /* [0..1] */
    gnss_nav_model_nav_keplerian_set_struct_add_nav_param_ephemSF1Rsvd_struct ephemSF1Rsvd;
    kal_uint8  ephemAODA;     /* [0..31] */
} gnss_nav_model_nav_keplerian_set_struct_add_nav_param_struct;


typedef struct
{
    kal_uint8   navURA;         /* [0..15], SV accuracy */
    kal_uint8   navFitFlag;     /* [0..1], fit interval indication */
    kal_uint16  navToe;         /* [0..37799], time of ephemeris, scale factor 2^4 seconds */
    kal_int32   navOmega;       /* [-2147483648..2147483647], argument of perigee, scale factor 2^(-31) semi-circles */
    kal_int16   navDeltaN;      /* [-32768..32767], mean motion difference from computed value, scale factor 2^(-43) semi-circles/second */
    kal_int32   navM0;          /* [-2147483648..2147483647], mean anonmaly at reference time, scale factor 2^(-31) semi-circles */
    kal_int32   navOmegaADot;   /* [-8388608..8388607], rate of right ascension, scale factor 2^(-43) semi-circles/second */
    kal_uint32  navE;           /* [0..4294967295], eccentricity, scale factor 2^(-33) */
    kal_int16   navIDot;        /* [-8192..8191], rate of inclination angle, scale factor 2^(-43) semi-circles/second */
    kal_uint32  navAPowerHalf;  /* [0..4294967295], square root of semi-major axis, scale factor 2^(-19) meters^(0.5) */
    kal_int32   navI0;          /* [-2147483648..2147483647], inclination angle at reference time, scale factor 2^(-31) semi-circles */
    kal_int32   navOmegaA0;     /* [-2147483648..2147483647], longitude of ascending node of orbit plane at weekly epoch, scale factor 2^(-31) semi-circles*/
    kal_int16   navCrs;         /* [-32768..32767], amplitude of sine harmonic correction term to the orbit radius, scale factor 2^(-5) meters */
    kal_int16   navCis;         /* [-32768..32767], amplitude of the sine harmonic correction term to the angle of inclination, scale factor 2^(-29) radians */
    kal_int16   navCus;         /* [-32768..32767], amplitude of the sine harmonic correction term to the argument of latitude, scale factor 2^(-29) radians */
    kal_int16   navCrc;         /* [-32768..32767], amplitude of the cosine harmonic correction term to the orbit radius, scale factor 2^(-5) meters */
    kal_int16   navCic;         /* [-32768..32767], amplitude of the cosine harmonic correction term to the angle of inclination, scale factor 2^(-29) radians */
    kal_int16   navCuc;         /* [-32768..32767], amplitude of the cosine harmonic correction term to the argument of latitude, scale factor 2^(-29) radians */
    /* optional field */
    kal_bool    addNavParamValid;
    gnss_nav_model_nav_keplerian_set_struct_add_nav_param_struct addNAVparam; /* data and reserved bits in GPS NAV message */
} gnss_nav_model_nav_keplerian_set_struct;


typedef struct
{
    kal_uint16  cnavTop;            /* [0..2015], data predict time of week, scale factor 300 seconds */
    kal_int8    cnavURAindex;       /* [-16..15], SV accuracy */
    kal_int32   cnavDeltaA;         /* [-33554432..33554431], semi-major axis difference at reference time, scale factor 2^(-9) meters */
    kal_int32   cnavAdot;           /* [-16777216..16777215], change rate in semi-major axis, scale factor 2^(-21) meters/sec */
    kal_int32   cnavDeltaNo;        /* [-65536..65535], mean motion difference from computed value at reference time, scale factor 2^(-44) semi-circles/second */
    kal_int32   cnavDeltaNoDot;     /* [-4194304..419430], rate of mean motion difference from computed value, scale factor 2^(-57) semi-circles/seconds */
    kal_int64   cnavMo;             /* [-4294967296..4294967295], mean anomaly at reference time, scale factor 2^(-32) semi-circles */
    kal_uint64  cnavE;              /* [0..8589934591], eccentricity, scale factor 2^(-34) */
    kal_int64   cnavOmega;          /* [-4294967296..4294967295], argument of perigee, scale factor 2^(-32) semi-circles */
    kal_int64   cnavOMEGA0;         /* [-4294967296..4294967295], reference right ascension angle, scale factor 2^(-32) semi-circles */
    kal_int32   cnavDeltaOmegaDot;  /* [-65536..65535], rate of right ascension difference, scale factor 2^(-44) semi-circles/second */
    kal_int64   cnavIo;             /* [-4294967296..4294967295], inclination angle at reference time, scale factor 2^(-32) semi-circles */
    kal_int16   cnavIoDot;          /* [-16384..16383], rate of inclination angle, scale factor 2^(-44) semi-circles/second */
    kal_int16   cnavCis;            /* [-32768..32767], amplitude of the sine harmonic correction term to the angle of inclination, scale factor 2^(-30) radians */
    kal_int16   cnavCic;            /* [-32768..32767], amplitude of the cosine harmonic correction term to the angle of inclination, scale factor 2^(-30) radians  */
    kal_int32   cnavCrs;            /* [-8388608..8388607], amplitude of sine harmonic correction term to the orbit radius, scale factor 2^(-8) meters */
    kal_int32   cnavCrc;            /* [-8388608..8388607], amplitude of the cosine harmonic correction term to the orbit radius, scale factor 2^(-8) meters */
    kal_int32   cnavCus;            /* [-1048576..1048575], amplitude of the sine harmonic correction term to the argument of latitude, scale factor 2^(-30) radians */
    kal_int32   cnavCuc;            /* [-1048576..1048575], amplitude of the cosine harmonic correction term to the argument of latitude, scale factor 2^(-30) radians */
} gnss_nav_model_cnav_keplerian_set_struct;


typedef struct
{
    kal_uint8  gloEn;       /* [0..31] */
    kal_uint8  gloP1;       /* 2 bit field, time interval between two adjacent values of tb */
    kal_bool   gloP2;       /* change of tb flag */
    kal_uint8  gloM;        /* [0..3], type of satellite */
    kal_int32  gloX;        /* [-67108864..67108863], x-coordinate of satellite at time tb, scale factor 2^(-11) kilometers */
    kal_int32  gloXdot;     /* [-8388608..8388607], x-coordinate of satellite velocity at time tb, scale factor 2^(-20) kilometers/second */
    kal_int8   gloXdotdot;  /* [-16..15], x-coordinate of satellite acceleration at time tb, scale factor 2^(-30) kilometers/second^2 */
    kal_int32  gloY;        /* [-67108864..67108863], y-coordinate of satellite at time tb, scale factor 2^(-11) kilometers */
    kal_int32  gloYdot;     /* [-8388608..8388607], y-coordinate of satellite velocity at time tb, scale factor 2^(-20) kilometers/second */
    kal_int8   gloYdotdot;  /* [-16..15], y-coordinate of satellite acceleration at time tb, scale factor 2^(-30) kilometers/second^2 */
    kal_int32  gloZ;        /* [-67108864..67108863], z-coordinate of satellite at time tb, scale factor 2^(-11) kilometers */
    kal_int32  gloZdot;     /* [-8388608..8388607)], z-coordinate of satellite velocity at time tb, scale factor 2^(-20) kilometers/second */
    kal_int8   gloZdotdot;  /* [-16..15], z-coordinate of satellite acceleration at time tb, scale factor 2^(-30) kilometers/second^2 */
} gnss_nav_model_glonass_ecef_struct;


typedef struct
{
    kal_bool    sbasToValid;
    kal_uint16  sbasTo;        /* [0..5399], time applicability, scale factor 16 seconds */
    kal_uint8   sbasAccuracy;  /* 4 bits field, accuracy */
    kal_int32   sbasXg;        /* [-536870912..536870911], scale factor 0.08 meters */
    kal_int32   sbasYg;        /* [-536870912..536870911], scale factor 0.08 meters */
    kal_int32   sbasZg;        /* [-16777216..16777215], 0.4 meters */
    kal_int32   sbasXgDot;     /* [-65536..65535], rate of change, scale factor 0.000625 meters/second */
    kal_int32   sbasYgDot;     /* [-65536..65535], rate of change, scale factor 0.000625 meters/second */
    kal_int32   sbasZgDot;     /* [-131072..131071], rate of change, scale factor 0.004 meters/second */
    kal_int16   sbasXgDotDot;  /* [-512..511], acceleration, scale factor 0.0000125 meters/second^2 */
    kal_int16   sbagYgDotDot;  /* [-512..511], acceleration, scale factor 0.0000125 meters/second^2 */
    kal_int16   sbasZgDotDot;  /* [-512..511], acceleration, scale factor 0.0000625 meters/second^2 */
} gnss_nav_model_sbas_ecef_struct;

typedef struct
{
    kal_uint8   bdsAODE;        /* [0..31], age of data, ephemeris (AODE) */
    kal_uint8   bdsURAI;        /* [0..15], URA Index, URA is used to describe the signal-in-space accuracy in meters */
    kal_uint32  bdsToe;         /* [0..131071], ephemeris reference time, scale factor 2^3 seconds */
    kal_uint32  bdsAPowerHalf;  /* [0..4294967295], square root of semi-major axis, Scale factor 2^(-19) meters^(1/2) */
    kal_uint32  bdsE;           /* [0..4294967295], eccentricity, dimensionless, scale factor 2^(-33) */
    kal_int32   bdsW;           /* [-2147483648..2147483647], argument of perigee, scale factor 2^(-31) semi-circles */
    kal_int16   bdsDeltaN;      /* [-32768..32767], mean motion difference from computed value, scale factor 2-43 semi-circles/sec */
    kal_int32   bdsM0;          /* [-2147483648..2147483647], mean anomaly at reference time, scale factor 2^(-31) semi-circles */
    kal_int32   bdsOmega0;      /* [-2147483648..2147483647], longitude of ascending node of orbital of plane computed according to reference time, scale factor 2^(-31) semi-circles */
    kal_int32   bdsOmegaDot;    /* [-8388608..8388607], rate of right ascension, scale factor 2^(-43) semi-circles/sec */
    kal_int32   bdsI0;          /* [-2147483648..2147483647], inclination angle at reference time, scale factor 2^(-31) semi-circles */
    kal_int16   bdsIDot;        /* [-8192..8191], rate of inclination angle, scale factor 2^(-43) semi-circles/sec */
    kal_int32   bdsCuc;         /* [-131072..131071], amplitude of cosine harmonic correction term to the argument of latitude, scale factor 2^(-31) radians */
    kal_int32   bdsCus;         /* [-131072..131071], amplitude of sine harmonic correction term to the argument of latitude, scale factor 2^(-31) radians */
    kal_int32   bdsCrc;         /* [-131072..131071], amplitude of cosine harmonic correction term to the orbit radius, scale factor 2^(-6) meters */
    kal_int32   bdsCrs;         /* [-131072..131071], amplitude of sine harmonic correction term to the orbit radius, scale factor 2^(-6) meters */
    kal_int32   bdsCic;         /* [-131072..131071], amplitude of cosine harmonic correction term to the angle of inclination, scale factor 2^(-31) radians */
    kal_int32   bdsCis;         /* [-131072..131071], amplitude of sine harmonic correction term to the angle of inclination, scale factor 2^(-31) radians */
} gnss_nav_model_bds_keplerian_set_struct;


typedef struct
{
    gnss_orbit_model_type_enum                  type;

    union
    {
      gnss_nav_model_keplerian_set_struct       keplerianSet;      /* Model-1: usually used for Galileo */
      gnss_nav_model_nav_keplerian_set_struct   navKeplerianSet;   /* Model-2: for GPS series */
      gnss_nav_model_cnav_keplerian_set_struct  cnavKeplerianSet;  /* Model-3: for modernized GPS series */
      gnss_nav_model_glonass_ecef_struct        glonassECEF;       /* Model-4: for GLONASS */
      gnss_nav_model_sbas_ecef_struct           sbasECEF;          /* Model-5: for SBAS */
      gnss_nav_model_bds_keplerian_set_struct   bdsKeplerianSet;   /* Model-6: for BDS */
    } data;
} gnss_orbit_model_struct;


typedef struct
{
   kal_uint8                svID;      /* [0..63] */
   kal_uint8                svHealth;  /* 8 bits */
   kal_uint16               iod;       /* 11 bits */
   gnss_clock_model_struct  clockModel;
   gnss_orbit_model_struct  orbitModel;
} gnss_nav_model_satellite_element;


typedef struct
{
   kal_bool                          nonBroadcastIndFlag; /* [0..1] value 0: navigation model data correspond to satellite broadcasted data;
                                                                    value 1: navigation model data is not derived from satellite broadcasted data */
   kal_uint8                         numSatElement;
   gnss_nav_model_satellite_element  satElement[GNSS_MAX_NAV_SAT_ELEMENT];
} gnss_navigation_model_struct;
/* end for gnss navigation model */


/* start for gnss real time integrity */
typedef struct
{
   kal_uint8  badSVID;  /* [0..63] */
   kal_bool   badSignalIDValid;
   kal_uint8  badSignalID;  /* identidy the bad signal or signals of a satellite, bit string representation, map to GNSS_SGN_ID_BITMAP_* */
} gnss_bad_signal_element_struct;


typedef struct
{
    kal_uint8                       numBadSignalElement;
    gnss_bad_signal_element_struct  badSignalElement[GNSS_MAX_RTI_BAD_SAT_ELEMENT];
} gnss_real_time_integrity_struct;
/* end for gnss real time integrity */


/* start for gnss data bit assistance */
typedef struct
{
   kal_uint8   gnssSignalType;                           /* identify GNSS signal type, map to GNSS_SGN_ID_VALUE_* */
   kal_uint8   numGnssDataBits;
   kal_uint8   gnssDataBits[GNSS_MAX_DBA_BIT_LENGTH/8];  /* data bit original max is 1024 bits */
} gnss_data_bit_signal_element_struct;


typedef struct
{
    kal_uint8                            svID;  /* [0..63] */
    kal_uint8                            numGnssDataBitsSgnElement;
    gnss_data_bit_signal_element_struct  gnssDataBitsSgnElement[GNSS_MAX_DBA_SGN_TYPE_ELEMENT];
} gnss_data_bit_satellite_element_struct;


typedef struct
{
    kal_uint16                              gnssTOD;     /* [0..3599], reference time of the first bit of the data modulo 1 hour, scale factor 1 second */
    kal_bool                                gnssTODfracValid;
    kal_uint16                              gnssTODfrac; /* [0..999], fractional part of gnssTD, scale factor 1 milli-second */
    kal_uint8                               numGnssDataBitsSatElement;
    gnss_data_bit_satellite_element_struct  gnssDataBitsSatElement[GNSS_MAX_DBA_SAT_ELEMENT];
} gnss_data_bit_assistance_struct;
/* end for gnss data bit assistance */


/* start for gnss acquisition assistance */
typedef struct
{
    kal_uint8   svID;                   /* [0..63] */
    kal_int16   doppler0;               /* [-2048..2047], Doppler (0th order term) value for velocity, scale factor 0.5 m/s in th range from -1024 m/s to +1023.5 m/s */
    kal_uint8   doppler1;               /* [0..63], Doppler (1th order term) value for acceleration, scale factor 1/210 m/s^2 in the range from -0.2 m/s^2 to +0.1 m/s^2 */
    kal_uint8   dopplerUncertainty;     /* [0..4], defined values: 2.5 m/s, 5 m/s, 10 m/s, 20 m/s, 40 m/s encoded as integer range 0-4 by 2^(-n)*40 m/s, n=0-4 */
    kal_uint16  codePhase;              /* [0..1022], scale factor 2^(-10) ms in the range from 0 to (1-2^(-10)) ms */
    kal_uint8   intCodePhase;           /* [0..127], integer codephase, scale factor 1ms */
    kal_uint8   codePhaseSearchWindow;  /* [0..31], map to value-to-searchwindow table (ms) */
    kal_uint16  azimuth;                /* [0..511], azimuth angle a, x-degrees of satellite x<=a<x+0.703125, scale factor 0.703125 degrees */
    kal_uint8   elevation;              /* [0..127], elevation angle e, y-degrees of satellite y>=e<y+0.703125, scale factr 0.703125 degrees */
    /* optional field */
    kal_bool    codePhase1023Valid;
    kal_bool    codePhase1023;          /* only use if codePhase is 1022, codePhase value is 1023*2^(-10) = (1-2^(-10)) ms */
    /* if support dopplerUncertaintyExtR10, should ignore dopplerUncertainty field */
    kal_bool                                     dopplerUncertaintyExtR10Valid;
    gnss_acq_assist_doppler_uncertainty_ext_enum dopplerUncertaintyExtR10; /* enumerated value map to 60 m/s, 80 m/s, 100 m/s, 120 ms, and No Information */
} gnss_acquisition_assist_element_struct;


/**
 * please note that RRC/RRLP use alternative word to represent GNSS Acquisition Assistance:
 * RRC: GANSS-ReferenceMeasurementInfo
 * RRLP: ganssRefMeasurementAssist
 */
typedef struct
{
    kal_uint8                               gnssSignalID;  /* GNSS type, map to GNSS_SGN_ID_VALUE_* */
    kal_uint8                               numGnssAcqAssistElement;
    gnss_acquisition_assist_element_struct  gnssAcqAssistElement[GNSS_MAX_ACQ_ASSIST_SAT_ELEMENT];
    kal_bool                                confidenceR10Valid;
    kal_uint8                               confidenceR10;  /* only for LPP */
} gnss_acquisition_assistance_struct;
/* end for gnss acquisition assistance */


/* start for gnss almanac */
typedef struct
{
    kal_uint8   svID;                  /* [0..63] */
    kal_uint16  kepAlmanacE;           /* [0..2047], eccentricity, scale factor 2^(-16) */
    kal_int16   kepAlmanacDeltaI;      /* [-1024..1023], scale factor 2^(-14) semi-circles */
    kal_int16   kepAlmanacOmegaDot;    /* [-1024..1023], longitude of ascending node of orbit plane at weekly epoch, scale factor 2^(-33) semi-circles/seconds */
    kal_uint8   kepSVHealth;           /* [0..15], SV health */
    kal_int32   kepAlmanacAPowerHalf;  /* [-65536..65535], semi-major axis delta, scale factor 2^(-9) meters^0.5 */
    kal_int16   kepAlmanacOmega0;      /* [-32768..32767], longitude of ascending node of orbit plane at weekly epoch, scale factor 2^(-15) semi-circles */
    kal_int16   kepAlmanacW;           /* [-32768..32767], argument of perigee, scale factor 2^(-15) semi-circles */
    kal_int16   kepAlmanacM0;          /* [-32768..32767], mean anomaly at reference time, scale factor 2^(-15) semi-circles */
    kal_int16   kepAlmanacAF0;         /* [-8192..8191], scale factor 2^(-19) seconds */
    kal_int16   kepAlmanacAF1;         /* [-1024..1023], scale factor 2^(-38) seconds */
} gnss_almanac_keplerian_set_struct;


typedef struct
{
    kal_uint8   svID;            /* [0..63] */
    kal_uint16  navAlmE;         /* [0..65535], eccentricity, scale factor 2^(-21) */
    kal_int16   navAlmDeltaI;    /* [-32768..32767], correction to inclination, scale factor 2^(-19) semi-circles */
    kal_int16   navAlmOMEGADOT;  /* [-32768..32767], rate of right ascension, scale factor 2^(-38) semi-circles/second */
    kal_uint8   navAlmSVHealth;  /* [0..255] */
    kal_uint32  navAlmSqrtA;     /* [0..16777215], square root of the semi-major axis, scale factor 2^(-11) meters^0.5 */
    kal_int32   navAlmOMEGAo;    /* [-8388608..8388607], longitude of ascending node of orbit plane at weekly epoch, scale factor 2^(-23) semi-circles */
    kal_int32   navAlmOmega;     /* [-8388608..8388607], argument of perigee, , scale factor 2^(-23) semi-circles */
    kal_int32   navAlmMo;        /* [-8388608..8388607], mean anomaly at reference time, scale factor 2^(-23) semi-circles */
    kal_int16   navAlmaf0;       /* [-1024..1023], apparent satellite clock correction, scale factor 2^(-20) seconds */
    kal_int16   navAlmaf1;       /* [-1024..1023], apparent satellite clock correction, scale factor 2^(-38) semi-circles seconds/second */
} gnss_almanac_nav_keplerian_set_struct;


typedef struct
{
    kal_uint8  svID;            /* [0..63] */
    kal_int8   redAlmDeltaA;    /* [-128..127], scale factor 2^9 meters */
    kal_int8   redAlmOmega0;    /* [-64..63], scale factor 2^(-6) semi-circles */
    kal_int8   redAlmPhi0;      /* [-64..63], scale factor 2^(-6) semi-circles */
    kal_bool   redAlmL1Health;  /* L1 health */
    kal_bool   redAlmL2Health;  /* L2 health */
    kal_bool   redAlmL5Health;  /* L5 health */
} gnss_almanac_reduced_keplerian_set_struct;


typedef struct
{
    kal_uint8   svID;             /* [0..63] */
    kal_uint16  midiAlmE;         /* [0..2047], eccentricity, scale factor 2^(-16) */
    kal_int16   midiAlmDeltaI;    /* [-1024..1023], scale factor 2^(-14) semi-circles */
    kal_int16   midiAlmOmegaDot;  /* [-1024..1023], scale factor 2^(-33) semi-circles/second */
    kal_uint32  midiAlmSqrtA;     /* [0..131071], scale factor 2^(-4) meters^0.5 */
    kal_int16   midiAlmOmega0;    /* [-32768..32767], scale factor 2^(-15) semi-circles */
    kal_int16   midiAlmOmega;     /* [-32768..32767], scale factor 2^(-15) semi-circles */
    kal_int16   midiAlmMo;        /* [-32768..32767], scale factor 2^(-15) semi-circles */
    kal_int16   midiAlmaf0;       /* [-1024..1023], scale factor 2^(-20) seconds */
    kal_int16   midiAlmaf1;       /* [-512..511], scale factor 2^(-37) seconds/second */
    kal_bool    midiAlmL1Health;  /* L1 health */
    kal_bool    midiAlmL2Health;  /* L2 health */
    kal_bool    midiAlmL5Health;  /* L5 health */
} gnss_almanac_midi_keplerian_set_struct;


typedef struct
{
    kal_uint16  gloAlmNA;         /* [1..1461], N^A, scale factor 1 days */
    kal_uint8   gloAlmnA;         /* [1..24] */
    kal_uint8   gloAlmHA;         /* [0..31] */
    kal_int32   gloAlmLambdaA;    /* [-1048576..1048575], scale factor 2^(-20) semi-circles */
    kal_uint32  gloAlmtlambdaA;   /* [0..2097151], scale factor 2(^-5) seconds */
    kal_int32   gloAlmDeltaIa;    /* [-131072..131071], scale factor 2^(-20) semi-circles */
    kal_int32   gloAlmDeltaTA;    /* [-2097152..2097151], scale factor 2^(-9) seconds/orbit period */
    kal_int8    gloAlmDeltaTdotA; /* [-64..63], scale factor 2^(-14) seconds/orbit period */
    kal_uint16  gloAlmEpsilonA;   /* [0..32767], scale factor 2^(-20) */
    kal_int16   gloAlmOmegaA;     /* [-32768..32767], scale factor 2^(-15) semi-circles */
    kal_int16   gloAlmTauA;       /* [-512..511], scale factor 2^(-18) seconds */
    kal_uint8   gloAlmCA;         /* [0..1] */
    kal_bool    gloAlmMAValid;
    kal_uint8   gloAlmMA;         /* 2 bit field */
} gnss_almanac_glonass_set_struct;


typedef struct
{
    kal_uint8   sbasAlmDataID;  /* [0..3] */
    kal_uint8   svID;           /* [0..63] */
    kal_uint8   sbasAlmHealth;  /* 8 bit field */
    kal_int16   sbasAlmXg;      /* [-16384..16383], scale factor 2600 meters */
    kal_int16   sbasAlmYg;      /* [-16384..16383], scale factor 2600 meters */
    kal_int16   sbasAlmZg;      /* [-256..255], scale factor 26000 meters */
    kal_int8    sbasAlmXgdot;   /* [-4..3], rate of change, scale factor 10 meters/second */
    kal_int8    sbasAlmYgDot;   /* [-4..3], rate of change, scale factor 10 meters/second */
    kal_int8    sbasAlmZgDot;   /* [-8..7], rate of change, scale factor 40.96 meters/second */
    kal_uint16  sbasAlmTo;      /* [0..2047], scale factor 64 meters/seconds */
} gnss_almanac_ecef_sbas_set_struct;

typedef struct
{
    kal_uint8   svID;              /* [0..63] */
    kal_bool    bdsAlmToaValid;
    kal_uint8   bdsAlmToa;         /* [0..255], almanac reference time, scale factor 2^12 seconds */
    kal_uint32  bdsAlmSqrtA;       /* [0..16777215], square root of semi-major axis, scale factor 2^(-11) meters^(1/2) */
    kal_uint32  bdsAlmE;           /* [0..131071], eccentricity, dimensionless, scale factor 2^(-21) */
    kal_int32   bdsAlmW;           /* [-8388608..8388607], argument of perigee, scale factor 2^(-23) semi-circles */
    kal_int32   bdsAlmM0;          /* [-8388608..8388607], mean anomaly at reference time, scale factor 2^(-23) semi-circles */
    kal_int32   bdsAlmOmega0;      /* [-8388608..8388607], longitude of ascending node of orbital plane computed according to reference time, scale factor 2^(-23) semi-circles */
    kal_int32   bdsAlmOmegaDot;    /* [-65536..65535], rate of right ascension, scale factor 2^(-38) semi-circles/sec */
    kal_int16   bdsAlmDeltaI;      /* [-32768..32767], correction of orbit reference inclination at reference time, scale factor 2^(-19) semi-circles */
    kal_int16   bdsAlmA0;          /* [-1024..1023], satellite clock bias, scale factor 2^(-20) seconds */
    kal_int16   bdsAlmA1;          /* [-1024..1023], satellite clock rate, scale factor 2^(-38) sec/sec */
    kal_bool    bdsSvHealthValid;
    kal_uint16  bdsSvHealth;       /* 9 bit field, indicate satellites health information as defined in BDS ICD v2.0 Table 5-15. The left most bit is the MSB */
} gnss_almanac_bds_almanac_set_struct;

typedef struct
{
    gnss_almanac_type_enum  type;

    union
    {
        gnss_almanac_keplerian_set_struct          keplerianSet;        /* for Galileo */
        gnss_almanac_nav_keplerian_set_struct      navKeplerianSet;     /* for GPS, QZSS */
        gnss_almanac_reduced_keplerian_set_struct  reducedKeplerianSet; /* for GPS, Modernized GPS, QZSS */
        gnss_almanac_midi_keplerian_set_struct     midiKeplerianSet;    /* for GPS, Modernized GPS, QZSS */
        gnss_almanac_glonass_set_struct            glonassSet;          /* for GLONASS */
        gnss_almanac_ecef_sbas_set_struct          ecefSbasSet;         /* for SBAS */
        gnss_almanac_bds_almanac_set_struct        bdsAlmanacSet;       /* for BDS */
    } data;
} gnss_almanac_element_struct;


typedef struct
{
    kal_bool                     weekNumberValid;
    kal_uint8                    weekNumber;  /* [0..255], almanac reference week number for non-GLONASS system, modulo 256 weeks */
    kal_bool                     toaValid;
    kal_uint8                    toa;         /* [0.255], almanac reference time for non-GLONASS system, scale factor 2^12 seconds */
    kal_bool                     iodaValid;
    kal_uint8                    ioda;        /* [0..3], issue of data, for Galileo system */
    kal_bool                     completeAlmanacProvided;  /* if almanac list contains complete GNSS constellation */
    kal_uint8                    numGnssAlmanacElement;
    gnss_almanac_element_struct  gnssAlmanacElement[GNSS_MAX_ALMANAC_SAT_ELEMENT];
} gnss_almanac_struct;
/* end for gnss almanac */


/* start for gnss utc model */
typedef struct
{
    kal_int32  gnssUtcA1;         /* [-8388608..8388607], scale factor 2^(-50) seconds/second */
    kal_int32  gnssUtcA0;         /* [-2147483648..2147483647], scale factor 2^(-30) seconds */
    kal_uint8  gnssUtcTot;        /* [0..255], scale factor 2^12 seconds */
    kal_uint8  gnssUtcWNt;        /* [0..255], scale factor 1 week */
    kal_int8   gnssUtcDeltaTls;   /* [-128..127], scale factor 1 second */
    kal_uint8  gnssUtcWNlsf;      /* [0..255], scale factor 1 week */
    kal_int8   gnssUtcDN;         /* [-128..127], scale factor 1 day */
    kal_int8   gnssUtcDeltaTlsf;  /* [-128..127], scale factor 1 second */
} gnss_utc_model_set1_struct;


typedef struct
{
    kal_int16   utcA0;         /* [-32768..32767], bias coefficient of GNSS time scale relative to UTC time scale, scale factor 2^(-35) seconds */
    kal_int16   utcA1;         /* [-4096..4095], drift coefficient of GNSS time scale relative to UTC time scale, scale factor 2^(-51) seconds/second */
    kal_int8    utcA2;         /* [-64..63], drift rate correction coefficient of GNSS time sacel relative to UTC time scale, scale factor 2^(-68) seconds/second^2 */
    kal_int8    utcDeltaTls;   /* [-128..127], current or past leap second count, scale factor 1 second */
    kal_uint16  utcTot;        /* [0..65535], time data reference time of week, scale factor 2^4 seconds */
    kal_uint16  utcWNot;       /* [0..8191], time data reference week number, scale factor 1 week */
    kal_uint8   utcWNlsf;      /* [0..255], leap second reference week number, scale factor 1 week */
    kal_uint8   utcDN;         /* 4 bits field, leap second reference day number, scale factor 1 day */
    kal_int8    utcDeltaTlsf;  /* [-128..127], current or future leap second count, scale factor 1 second */
} gnss_utc_model_set2_struct;


typedef struct
{
    kal_uint16  nA;    /* [1..1461], callendar day number within four-year period beginning since the leap year, scale factor 1 day */
    kal_int32   tauC;  /* [-2147483648..2147483647], GLONASS time scale correction to UTC(SU), scale factor 2^(-31) seconds */
    /* optional field, mandatory present if GLONASS-M satellites are presnet in the current GLONASS constellation */
    kal_bool    b1Valid;
    kal_int16   b1;    /* [-1024..1023], coefficient to determine delta UT1, scale factor 2^(-10) seconds */
    kal_bool    b2Valid;
    kal_int16   b2;    /* [-512..511], coefficient to determind delta UT1, scale factor 2^(-16) seconds/msd */
    kal_bool    kpValid;
    kal_uint8   kp;    /* 2 bits field, notification of expected leap second correction */
} gnss_utc_model_set3_struct;


typedef struct
{
    kal_int32  utcA1wnt;       /* [-8388608..8388607], scale factor 2^(-50) seconds/second */
    kal_int32  utcA0wnt;       /* [-2147483648..2147483647], scale factor 2^(-30) seconds */
    kal_uint8  utcTot;         /* [0..255], scale factor 2^12 seconds */
    kal_uint8  utcWNt;         /* [0..255], scale factor 1 week */
    kal_int8   utcDeltaTls;    /* [-128..127], scale factor 1 second */
    kal_uint8  utcWNlsf;       /* [0..255], scale factor 1 week */
    kal_int8   utcDN;          /* [-128..127], scale factor 1 day */
    kal_int8   utcDeltaTlsf;   /* [-128..127], scale factor 1 second */
    kal_uint8  utcStandardID;  /* [0..7], if GNSS-ID indicates SBAS, this field indicated the UTC stadard used for the SBAS network time indicated by SBAS-ID to UTC relation */
} gnss_utc_model_set4_struct;


typedef struct
{
    kal_int32  utcA0;         /* [-2147483648..2147483647], BDS clock bias relative to UTC, scale factor 2^(-30) seconds */
    kal_int32  utcA1;         /* [-8388608..8388607], BDS clock rate relative to UTC, scale factor 2^(-50) sec/sec */
    kal_int8   utcDeltaTls;   /* [-128..127], delta time due to leap seconds before the new leap second effective, scale factor 1 second */
    kal_uint8  utcWNlsf;      /* [0..255], week number of the new leap second, scale factor 1 week */
    kal_uint8  utcDN;         /* [0..255], day number of week of the new leap second, scale factor 1 day */
    kal_int8   utcDeltaTlsf;  /* [-128..127], delta time due to leap seconds after the new leap second effective, scale factor 1 second */
} gnss_utc_model_set5_struct;


typedef struct
{
    gnss_utc_model_type_enum  type;
 
    union
    {
       gnss_utc_model_set1_struct  utcModel1;  /* for GPS, Galileo, QZSS */
       gnss_utc_model_set2_struct  utcModel2;  /* for GPS, Galileo, QZSS */
       gnss_utc_model_set3_struct  utcModel3;  /* for GLONASS */
       gnss_utc_model_set4_struct  utcModel4;  /* for SBAS */
       gnss_utc_model_set5_struct  utcModel5;  /* for BDS */
    } data;
} gnss_utc_model_struct;
/* end for gnss utc model */


/* start for gnss aux info */
typedef struct
{
    kal_uint8  svID;              /* [0..63] */
    kal_uint8  signalsAvailable;  /* 8 bits field, indicate the ranging signals supported by the satellite indicated by svID, map to GNSS_SGN_ID_BITMAP_* */
} gnss_aux_gps_sat_element_struct;


typedef struct
{
    kal_uint8                        numGpsElement;
    gnss_aux_gps_sat_element_struct  gpsElement[GNSS_MAX_AUX_SAT_ELEMENT];
} gnss_aux_info_gps_struct;


typedef struct
{
    kal_uint8  svID;              /* [0..63] */
    kal_uint8  signalsAvailable;  /* 8 bits field, indicate the ranging signals supported by the satellite indicated by svID */
    /* optional field */
    kal_bool   channelNumberValid;
    kal_int8   channelNumber;     /* [-7..13] indicate the GLONASS carrier frequency number of the satellite identified by svID */
} gnss_aux_glonass_sat_element_struct;


typedef struct
{
    kal_uint8                            numGlonassElement;
    gnss_aux_glonass_sat_element_struct  glonassElement[GNSS_MAX_AUX_SAT_ELEMENT];
} gnss_aux_info_glonass_struct;


typedef struct
{
    gnss_aux_info_gnss_type_enum type;
 
    union
    {
       gnss_aux_info_gps_struct      gps;
       gnss_aux_info_glonass_struct  glonass;
    } data;
} gnss_aux_info_struct;
/* end for gnss aux info */


/* start for gnss dbds correction */
typedef struct
{
    kal_uint8   svID;          /* [0..63] */
    kal_uint8   bdsUDREI;      /* [0..15], indicate user differential range error information by user differential range error index (UDREI) as defined in BDS ICD v2.0, sec 5.3.3.7.2 */
    kal_uint8   bdsRURAI;      /* [0..15], indicate Regional User Range Accuracy (RURA) information by Regional User Range Accuracy Index (UDREI) as defined in BDS ICD v2.0, sec 5.3.3.6 */
    kal_int16   bdsECCDeltaT;  /* [-4096..4095], indicate the BDS differential correction information which is expressed in equivalent clock correction (deltat).
                                                 add the value of deltat to the observed pseudo-range to correct the effect caused by the satellite clock offset and ephemeris error.
                                                 value -4096 means the deltat is not available, scale factor 0.1 meter  */
} gnss_dbds_correction_element_struct;


typedef struct
{
    kal_uint8                            numCorrectionElements;
    gnss_dbds_correction_element_struct  correctionElements[GNSS_MAX_DBDS_CORRECTION_ELEMENT];
} gnss_dbds_correction_list_struct;


typedef struct
{
    kal_bool                          gnssSignalIdValid;
    kal_uint8                         gnssSignalId;         /* map to GNSS_SGN_ID_VALUE_* */
    gnss_dbds_correction_list_struct  correctionList;
} gnss_dbds_correction_sgn_type_element_struct;


typedef struct
{
   kal_uint8                                     numSgnTypeElements;
   gnss_dbds_correction_sgn_type_element_struct  sgnTypeElements[GNSS_MAX_DBDS_SGN_TYPE_ELEMENT];
} gnss_dbds_correction_sgn_type_list_struct;


typedef struct
{
   kal_uint16                                 dbdsRefTime;      /* [0..3599], the time for which the differential corrections are valid, modulo 1 hour. dbds-RefTime is given in BDS system time, scale factor 1 second */
   gnss_dbds_correction_sgn_type_list_struct  dbdsSgnTypeList;
} gnss_dbds_diff_corrections_struct;
/* end for gnss dbds correction */


/* start for gnss bds grid model */
typedef struct
{
    kal_uint16  igpID;  /* indicate the ionospheric grid point (IGP) number as defined in BDS ICD v2.0, sec 5.3.3.8 */
    kal_uint16  dt;     /* indicate dT as defined in BDS ICD v2.0, sec 5.3.3.8.1, i.e. the vertical delay at the corresponding IGP indicated by igp-ID, scale factor 0.125 meter */
    kal_uint8   givei;  /* indicate the Grid Ionospheric Vertical Error Index (GIVEI) which is used to describe the delay correction accuracy at ionospheric grid point indicated by igp-ID, the mapping between GIVEI and GIVE is defined in BDS ICD v2.0, sec 5.3.3.8.2 */
} gnss_bds_grid_ion_element_struct;


typedef struct
{
    kal_uint16                        numGridIonElement;
    gnss_bds_grid_ion_element_struct  gridIonElement[GNSS_MAX_BDS_GRID_ION_ELEMENT];  /* a list that provides ionospheric grid point information for each grid point. Up to 16 instances are used in this version of the specification. The values 17 to 320 are reserved for future use */
} gnss_bds_grid_ion_list_struct;


typedef struct
{
    kal_uint16                     bdsRefTime;   /* [0..3599], the time for which the grid model parameters are valid, modulo 1 hour. bdsRefTime is given in BDS system time, scale factor 1 second */
    gnss_bds_grid_ion_list_struct  gridIonList;  /* a list that provides ionospheric grid point information for each grid point. Up to 16 instances are used in this version of the specification. The values 17 to 320 are reserved for future use */
} gnss_bds_grid_model_params_struct;
/* end for gnss bds grid model */


/* LCSP -> GNSS Task */
/* This structure for MSG_ID_LCSP_GNSS_OPEN_REQ */
typedef struct
{
    LOCAL_PARA_HDR
    //kal_uint8  gnssIdBitmap;  /* GNSS_ID_BITMAP_* */
    //kal_uint8  preferGnssMode; /* TBD: should not used this kind of design in GNSS */
} lcsp_gnss_open_req_struct;


/* This structure for MSG_ID_LCSP_GNSS_CLOSE_REQ */
typedef struct
{
    LOCAL_PARA_HDR
    //kal_uint8  gnssIdBitmap; /* GNSS_ID_BITMAP_* */    
} lcsp_gnss_close_req_struct;


/* This structure for MSG_ID_LCSP_GNSS_COMMON_ASSIST_DATA_REQ */
typedef struct
{
    LOCAL_PARA_HDR
    kal_uint16                           transactionID;

    gnss_common_assist_data_type_enum    type;
    union
    {
        gnss_reference_time_struct       refTime;
        gnss_reference_location_struct   refLoc;
        gnss_ionospheric_model_struct    ionModel;
        gnss_earth_orient_params_struct  eop;
    } data;
} lcsp_gnss_common_assist_data_req_struct;


/**
 * in LPP, location server could provide up to 16 GNSSs generic assist data
 * in RRC/RRLP, location server could provide up to 8 GANSSs generic assist data
 */
/* This structure for MSG_ID_LCSP_GNSS_GENERIC_ASSIST_DATA_REQ */
typedef struct
{
    LOCAL_PARA_HDR
    kal_uint16                               transactionID;

    gnss_id_enum                             gnssId;
    kal_bool                                 sbasIdValid;  /* only present when gnss is sbas */
    sbas_id_enum                             sbasId;

    gnss_generic_assist_data_type_enum       type;
    union
    {
        gnss_time_model_list_struct          timeModel;
        gnss_diff_correction_struct          dgnss;
        gnss_navigation_model_struct         navModel;
        gnss_real_time_integrity_struct      rti;
        gnss_data_bit_assistance_struct      dataBitAssist;
        gnss_acquisition_assistance_struct   acqAssist;
        gnss_almanac_struct                  almanac;
        gnss_utc_model_struct                utcModel;
        gnss_aux_info_struct                 auxInfo;
        gnss_dbds_diff_corrections_struct    dbds;
        gnss_bds_grid_model_params_struct    bdsGridModel;
    } data;
} lcsp_gnss_generic_assist_data_req_struct;


typedef struct
{
   /* note: for MA, use horizontalAccuracy to represent pseudorange error */
   kal_bool   horizontalAccuracyValid;
   kal_uint8  horizontalAccuracy;            /* range: 0-127, refer TS 23.032, K1 decoding formula */
   kal_uint8  horizontalAccuracyConfidence;  /* range: 0-100, refer TS 23.032, direct map to percentage, zero indicate "no inforamation" */
   kal_bool   verticalAccuracyValid;
   kal_uint8  verticalAccuracy;              /* range: 0-127, refer TS 23.032, K3 decoding formula */
   kal_uint8  verticalAccuracyConfidence;    /* range: 0-100, refer TS 23.032, direct map to percentage, zero indicate "no inforamation" */
   kal_uint8  responseTime;                  /* range: 1-128 seconds */
//#ifdef __EARLY_FIX_SUPPORT__
   kal_uint8  responseTimeEarlyFix;          /* range: 1-128 seconds, 0 means not enabled */
//#endif
   kal_bool   isPeriodic;
} gnss_loc_req_qos_struct;


/* This structure for MSG_ID_LCSP_GNSS_POS_REQ */
typedef struct
{
    LOCAL_PARA_HDR
    kal_uint16               transactionID;

    lcs_sim_source_enum      simSource;
    kal_uint16               gnssMethod;                 /* network allowed GNSS type, may be multiple GNSS, map to GNSS_ID_BITMAP_* */
    kal_bool                 fineTimeAssistanceMeasReq;  /* network requested fine time measurement */
                                                         /**
                                                          * note: we assume that when network requests UE to do fine time measurement,
                                                          *       network will always give UE corresponding refercence cell information in Reference Time Assistance Data,
                                                          *       then GNSS task should use this reference cell information within Reference Time Assistance Data to ask current RAT's L1 module to do fine time measurement,
                                                          *       otherwise the measurement would fail.
                                                          */
    kal_bool                 assistanceAvailability;     /* network allow UE request additional GNSS assistance data */
    gnss_loc_req_qos_struct  qos;
    kal_bool                 autoResetTrigger;
} lcsp_gnss_pos_req_struct;


/* This structure for MSG_ID_LCSP_GNSS_MEAS_REQ */
typedef struct
{
    LOCAL_PARA_HDR
    kal_uint16               transactionID;

    lcs_sim_source_enum      simSource;
    kal_uint16               gnssMethod;                 /* network allowed GNSS type, may be multiple GNSS, map to GNSS_ID_BITMAP_* */
    kal_bool                 fineTimeAssistanceMeasReq;  /* network requested fine time measurement */
                                                         /**
                                                          * note: we assume that when network requests UE to do fine time measurement,
                                                          *       network will always give UE corresponding refercence cell information in Reference Time Assistance Data,
                                                          *       then GNSS task should use this reference cell information within Reference Time Assistance Data to ask current RAT's L1 module to do fine time measurement,
                                                          *       otherwise the measurement would fail.
                                                          */
    kal_bool                 adrMeasReq;                 /* network requested ADR(accumulated Doppler range) measurement */
    kal_bool                 multiFreqMeasReq;           /* network requested to report multiple supported GNSS type */
    kal_bool                 assistanceAvailability;     /* network allow UE request additional GNSS assistance data */
    gnss_loc_req_qos_struct  qos;
    kal_bool                 autoResetTrigger;
} lcsp_gnss_meas_req_struct;


/* This structure for MSG_ID_LCSP_GNSS_ABORT_REQ */
typedef struct
{
    LOCAL_PARA_HDR
    kal_uint16  transactionID;
} lcsp_gnss_abort_req_struct;


/* This structure for MSG_ID_LCSP_GNSS_RESET_UE_STORED_POS_INFO */
typedef struct
{
    LOCAL_PARA_HDR
    /* empty */
} lcsp_gnss_reset_ue_stored_pos_info_struct;


/* GNSS Task -> LCSP */
/* This structure for MSG_ID_LCSP_GNSS_COMMON_ASSIST_DATA_CNF */
typedef struct
{
    LOCAL_PARA_HDR
    kal_uint16                               transactionID;
    gnss_common_assist_data_type_enum        type;
    kal_bool                                 resultOk;
} lcsp_gnss_common_assist_data_cnf_struct;


/* This structure for MSG_ID_LCSP_GNSS_GENERIC_ASSIST_DATA_CNF */
typedef struct
{
    LOCAL_PARA_HDR
    kal_uint16                               transactionID;

    gnss_id_enum                             gnssId;
    kal_bool                                 sbasIdValid;  /* only present when gnss is sbas */
    sbas_id_enum                             sbasId;
    gnss_generic_assist_data_type_enum       type;
    kal_bool                                 resultOk;
} lcsp_gnss_generic_assist_data_cnf_struct;


/* No more additional assistance data req primitive, embeded assistance data request in GNSS_POS/MEAS_CNF */
/**
 * For common assistance data,
 * to simplify complexity, LPP would align RRC/RRLP ASN.1 design, request all supported data fields of the assistance data type request
 *  e.g. If network request GPS+GLONASS positioning estimate, LPP will request all supported fields in the GNSS-ReferenceTimeReq if GNSS task response reference time missing
 *       (1) gnssTimeReqPrefList = GPS-ID + GLONASS-ID
 *       (2) gpsTOWAssistReq = true
 *       (3) notOfLeapSecReq = true
 *
 *       If network request GPS only positioning estimate, LPP will request all supported fields in the GNSS-ReferenceTimeReq if GNSS task response reference time missing
 *       (1) gnssTimeReqPrefList = GPS-ID
 *       (2) gpsTOWAssistReq = true
 *       (3) notOfLeapSecReq = false
 *
 *  the same design policy also applies on RRC/RRLP original(extend) GANSS-AdditionalAssistanceDataRequest/GANSSAssistanceData
 */

typedef struct
{
    kal_bool  gnssReferenceTimeReq;     /* fill the request as above example */
    kal_bool  gnssReferenceLocationReq;
    kal_bool  gnssIonosphericModelReq;  /* klobucharModel for GPS, neQuickModel for Galileo, therefore we fill the request according to GNSS method */
    kal_bool  gnssEarthOrientationParametersReq;
} gnss_request_common_assist_data_struct;


/**
 * For generic assistance data, we need to specify GNSS id, and its requested assistance data type.
 * In some assistance data, we also need to include more data in addition to true/false
 *  (1) Time Model => GNSS-ID + deltaTreq
 *  (2) D-Correction => GNSS-Signal-ID + udreValidityTime
 *  (3) Nav Model => stored nav list or request nav list
 *  (4) RTI => only true/false!
 *  (5) Data Bit Assist => GNSS-TOD + interval + speficy which GNSS-Signal-ID, satellite data bit
 *  (6) ACQ => GNSS-Signal-ID
 *  (7) Almanac => Model ID (GNSS-ID map to currect Almanac Model ID)
 *  (8) UTC => Model ID (GNSS-ID map to currect UTC Model ID)
 *  (9) AUX => only true/false!
 *  (10) DBDS Correction => GNSS-Signal-ID
 *  (11) BDS Grid Model => only true/false!
 */

typedef struct
{
    kal_bool         isRequested;     /* indicate if this type of data is requested */
    kal_uint8        numGnssToIDReq;
    gnss_to_id_enum  GnssToIDReq[GNSS_MAX_TIME_MODEL_ELEMENT];  /* 5-15 is reserved */
} gnss_request_time_model_struct;


typedef struct
{
    kal_bool   isRequested;      /* indicate if this type of data is requested */
    kal_uint8  gnssSignalsReq;   /* requested GNSS Signal(s), map to GNSS_SGN_ID_BITMAP_* */
    kal_bool   validityTimeReq;  /* udreGrowthRate and udreValidityTime are requested or not */
} gnss_request_diff_correction_struct;


typedef struct
{
    kal_uint8   svID;          /* [0..63] */
    kal_uint16  iod;           /* 11 bits field */
    /* GNSS-ID to clock/orbit model ID (map to GNSS_NAV_CLOCK_MODEL_*_VALUE_* and GNSS_NAV_ORBIT_MODEL_*_VALUE_*)
     *  gps    : Model-2
     *  sbas   : Model-5
     *  qzss   : Model-2
     *  galileo: Model-1
     *  glonass: Model-4
     *  bds    : Model-6
     */
    kal_bool    clockModelIDValid;
    kal_uint8   clockModelID;  /* [1..8], optional, specify which clock model used */
    kal_bool    orbitModelIDValid;
    kal_uint8   orbitModelID;  /* [1..8]. optional, specify which orbit model used */
} gnss_sat_data_element_struct;


typedef struct
{
    kal_uint16                    gnssWeekOrDay; /* [0..4095], indicate GNSS week number for non-GLONASS, otherwise indicate calendar number of data within four-year interval starting from 1st of January in a leap year */
    kal_uint8                     gnssToe;       /* [0.255], indicate GNSS time of ephemeris in hours of latest ephemeris for non-GLONASS, otherwise indicate the time of ephemeris in units of 15 minutes of the latest ephemeris */
    kal_uint8                     tToeLimit;     /* [0..15], indicate ephemeris age tolerance in units of hours for non-GLONASS, otherwise indicate ephemeris age tolerance in units of 30 minutes */
    kal_uint8                     numSatDataElement;
    gnss_sat_data_element_struct  satDataElement[GNSS_MAX_NAV_SAT_ELEMENT];  /* optional */
} gnss_stored_nav_list_struct;


typedef struct
{
    kal_uint8  svReqList[GNSS_MAX_NAV_SAT_ELEMENT_BIT_POS/8];  /* bit position represent SV-ID, total 64 bits */
    /* GNSS-ID to clock/orbit model ID (map to GNSS_NAV_CLOCK_MODEL_*_VALUE_* and GNSS_NAV_ORBIT_MODEL_*_VALUE_*)
     *  gps    : Model-2
     *  sbas   : Model-5
     *  qzss   : Model-2
     *  galileo: Model-1
     *  glonass: Model-4
     *  bds    : Model-6
     */
    kal_uint8  numClockModelIDPrefList;
    kal_uint8  clockModelIDPrefList[GNSS_MAX_NAV_CLOCK_MODEL_ELEMENT];  /* optional, list requested clock model in the order of preference */
    kal_uint8  numOrbitModelIDPrefList;
    kal_uint8  orbitModelIDPrefList[GNSS_MAX_NAV_ORBIT_MODEL_ELEMENT];  /* optional, list requested orbit model in the order of preference */
    kal_bool   addNaparamReqValid;
    kal_bool   addNavparamReq;                                          /* dedicated for orbit model - nav-keplerian-set (gps) if need to include addNAVpara IE */
} gnss_requested_nav_list_struct;


typedef struct
{
    kal_bool                            isRequested;          /* indicate if this type of data is requested */
    gnss_nav_model_req_type_enum        type;                 /* storedNavList or reqNavList */
    /* 
     * TBD: NAV request would be too complex for GNSS task/MNL to have this kind of detailed nav data.
     *      evaluate if we could simplify it (always use requestd nav list according to GNSS method?)
     */
    union
    {
        gnss_stored_nav_list_struct     storedNavList;  /* this needs GNSS chip response current searched SAT info (in detailed) */
        gnss_requested_nav_list_struct  reqNavList;     /* this could simply fill corresponding IE according network specified GNSS method, but needs svID list */
    } data;
} gnss_request_nav_model_struct;


typedef struct
{
    kal_bool    isRequested;                           /* indicate if this type of data is requested */
    kal_uint16  gnssTODReq;                            /* [0..3599], specify the reference time for the first data bit requestd in GNSS specific system time, modulo 1 hour, scale factor 1 second */
    kal_bool    gnssTODFracReqValid;
    kal_uint16  gnssTODFracReq;                        /* [0..999], speficty the franctional part of GNSS-TOD-Req, scale factor 1 millisecond */
    kal_uint8   dataBitInterval;                       /* [0..15], value K, the time length for Data Bit Assist requested, r (second) = 0.1*2^K, K=0 means it is not specified */
    kal_uint8   gnssSignalTypes;                       /* requested GNSS Signal(s), map to GNSS_SGN_ID_BITMAP_* */
    kal_uint8   numReqSatList;
    kal_uint8   ReqSatList[GNSS_MAX_DBA_SAT_ELEMENT];  /* optional, list contains SV-IDs for Data Bit Assist requested */
} gnss_request_data_bit_assist_struct;


typedef struct
{
    kal_bool   isRequested;        /* indicate if this type of data is requested */
    kal_uint8  gnssSignalTypeReq;  /* requested signal type, only specify one single signal, map to GNSS_SGN_ID_VALUE_* */
} gnss_request_acq_assist_struct;


typedef struct
{
    kal_bool   isRequested;     /* indicate if this type of data is requested */
    /* this could simply fill corresponding IE according network specified GNSS method */
    /*
     * GNSS-ID to almanac model ID (map to GNSS_ALMANAC_MODEL_*_VALUE_*)
     *  gps    : Model-2 (keplerian NAV almanac set)
     *  sbas   : Model-6 (ecef-SBAS almanac set)
     *  qzss   : Model-2 (keplerian NAV almanac set)
     *  galileo: Model-1 (keplerian almanac set)
     *  glonass: Model-5 (Glonass almanac set)
     *  bds    : Model-7 (BDS almanac set)
     */
    kal_bool   modelIDValid;
    kal_uint8  modelID;  /* [1..8], currently 1..7, map to GNSS_ALMANAC_MODEL_7_VALUE_* */
} gnss_request_almanac_struct;


typedef struct
{
    kal_bool   isRequested;     /* indicate if this type of data is requested */
    /* this could simply fill corresponding IE according network specified GNSS method */
    /*
     * GNSS-ID to UTC model ID (map to GNSS_UTC_MODEL_*_VALUE)
     *  gps    : Model-1
     *  sbas   : Model-4
     *  qzss   : Model-1
     *  galileo: Model-1
     *  glonass: Model-3
     *  bds    : Model-5
     */
    kal_bool   modelIDValid;
    kal_uint8  modelID;  /* [1..8], currently 1..5 map to GNSS_UTC_MODEL_*_VALUE */
} gnss_request_utc_model_struct;


typedef struct
{
    kal_bool   isRequested;      /* indicate if this type of data is requested */
    kal_uint8  gnssSignalsReq;   /* requested GNSS Signal(s), map to GNSS_SGN_ID_BITMAP_* */
} gnss_request_dbds_correction_struct;


typedef struct
{
    gnss_id_enum  gnssID;
    kal_bool      sbasIDValid;
    sbas_id_enum  sbasID;
 
    gnss_request_time_model_struct       gnssTimeModelsReq;
    gnss_request_diff_correction_struct  gnssDCorrectionsReq;
    gnss_request_nav_model_struct        gnssNavModelReq;
    kal_bool                             gnssRTIReq;
    gnss_request_data_bit_assist_struct  gnssDataBitAssistReq;
    gnss_request_acq_assist_struct       gnssAcqAssistReq;
    gnss_request_almanac_struct          gnssAlmanacReq;
    gnss_request_utc_model_struct        gnssUTCModelReq;
    kal_bool                             gnssAuxInfoReq;
    gnss_request_dbds_correction_struct  gnssDBDSCorrectionsReq;
    kal_bool                             gnssBDSGridModelReq;
} gnss_request_generic_assist_data_struct;


typedef struct
{
    gnss_request_common_assist_data_struct   gnssCommonAssistData;
    kal_uint8                                numGnssGenericAssistData;
    gnss_request_generic_assist_data_struct  gnssGenericAssistData[GNSS_MAX_REQ_ADD_GENERIC_ASSIST_DATA_ELEMENT];
} gnss_request_assist_data_struct;


typedef struct
{
    gnss_eutra_cell_id_struct  cellID;
    kal_uint16                 systemFrameNumber;  /* 10 bits field, refer TS 36.331 */
} gnss_measured_ref_network_time_eutra_struct;


typedef struct
{
    gnss_utra_cell_id_struct  cellID;
    kal_uint16                refSystemFrameNumber;  /* [0..4095], refer TS 25.331 */
} gnss_measured_ref_network_time_utra_struct;


typedef struct
{
    gnss_gsm_cell_id_struct  cellID;
    kal_uint16               referenceFN;       /* [0..65535] */
    kal_bool                 referenceFNMSBValid;
    kal_uint8                referenceFNMSB;    /* [0..63], FN (frame number) = referenceFNMSB*42432 + referenceFN */
    kal_bool                 deltaGNSSTODValid;
    kal_uint8                deltaGNSSTOD;      /* [0..127], the difference in millisecond between gnssTODmsec and millisecond part of the SV time of first SV in the list reported from target device */
} gnss_measured_ref_network_time_gsm_struct;


typedef struct
{
    gnss_network_cell_type_enum                      type;
    union
    {
        gnss_measured_ref_network_time_eutra_struct  eutra;
        gnss_measured_ref_network_time_utra_struct   utra;
        gnss_measured_ref_network_time_gsm_struct    gsm;
    } data;
} gnss_measured_ref_network_time_struct;


typedef struct
{
    kal_uint32                             gpsTOW;            /* [0..604799999], scale factor millisecond, only used for legacy GPS! (gnssTimeID == GPS) */
    kal_uint16                             gnssDayNumber;     /* [0..32767] */
    kal_uint32                             gnssTODmsec;       /* [0..3599999], scale factor 1 millisecond in a hour*/
    kal_bool                               gnssTODfracValid;
    kal_uint16                             gnssTODfrac;       /* [0..3999], scale factor 250 nanoseconds */
    kal_bool                               gnssTODuncValid;
    kal_uint8                              gnssTODunc;        /* [0..127], K = [0..127], uncertainty r (microseconds) = C*(((1+x)^K)-1), C=0.5, x=0.14 */
    gnss_id_enum                           gnssTimeID;        /* specify GNSS type of GNSS system time (TOD+frac) provided */

    /* contain networkTime only if fineTimeAssistanceMeasReq is TRUE */
    kal_bool                               networkTimeValid;
    gnss_measured_ref_network_time_struct  networkTime;
} gnss_measured_ref_time;


/* we only support horizontal velocity */
typedef struct
{
    kal_uint16  bearing;          /* [0..359], direction clockwise from North, scale factor 1 degrees */
    kal_uint16  horizontalSpeed;  /* [0..2047], scale factor 1 kilometers/hour */
} gnss_h_velocity_struct;


typedef struct
{
    kal_bool                signOfLatitude;        /* TRUE: SOUTH, FALSE: NORTH */
    kal_uint32              degreesLatitude;       /* [0..8388607], 23 bits field */
    kal_int32               degreesLongitude;      /* [-8388608..8388607], 24 bits field */
    kal_bool                signOfAltitude;        /* TRUE: DEPTH, FALSE: HEIGHT */
    kal_uint16              altitude;              /* [0..32767], 15 bits field */
    kal_uint8               uncertaintySemiMajor;  /* K: [0..127], uncertainty r (meter) = C*((1+x)^K-1), C=10, x=0.1 */
    kal_uint8               uncertaintySemiMinor;  /* K: [0..127], uncertaintyr (meter) = C*((1+x)^K-1), C=10, x=0.1 */
    kal_uint8               orientationMajorAxis;  /* bearing angle degree: [0-179] */
    kal_uint8               uncertaintyAltitude;   /* K: [0..127], uncertainty h (meter) = C*((1+x)^K-1), C=45, x=0.025 */
    kal_uint8               confidence;            /* [0..100] */
    kal_bool                velocityValid;
    gnss_h_velocity_struct  velocityEstimate;
} gnss_gad_pos_estimate_struct;

typedef struct
{
    kal_uint8   svID;                   /* [0..63] */
    kal_uint8   cNo;                    /* [0..63], carrier-to-noise ratio, scale factor 1dB-Hz */
    kal_uint8   multipath;              /* multipath indicator, real data is two bits field represent multipath enum
                                           '0' = Not measured
                                           '1' = Low, MP error < 5m
                                           '2' = Medium, 5m < MP error < 43m
                                           '3' = High, MP error > 43m
                                         */

    /* use validity flag and rearrange fields to reduce structure size */
    /** 
     *  GNSS_MEAS_INFO_CARRIER_QUALITY_VALIDITY   0x01
     *  GNSS_MEAS_INFO_INT_CODE_PHASE_VALIDITY    0x02
     *  GNSS_MEAS_INFO_DOPPLER_VALIDITY           0x04
     *  GNSS_MEAS_INFO_ADR_VALIDITY               0x08
     */
    kal_uint8   validity;

    kal_uint8   carrierQualityInd;      /* [0..3], two bits field represent carrier phase data inverted/direct, and (not) continuous */
    kal_uint8   intCodePhase;           /* [0..127], integer millisecond part of code phase modulo codePhaseAmbiguity, scale factor 1 milli-seconds in the range from 0 to 127 milliseconds */

    /* to represent codephase RMS error value index, refer floating-point representation mapping table, LPP/RRC/RRLP should combine M & E to index value according to the table */
    kal_uint8   codePhaseRMSErrorM;     /* codePhase(pseudorange) RMS Error Mantissa */
    kal_uint8   codePhaseRMSErrorE;     /* codePhase(Pseudorange) RMS Error Exponent */

    kal_int16   doppler;                /* [-32768..32767], scale factor 0.04 meter/seconds */

    kal_uint32  codePhase;              /* [0..2097151], contain the whole and fractional value of the code phase, scale factor 2^(-21) milliseconds in the range from 0 to (1-2^(-21)) milliseconds */

    kal_uint32  adr;                    /* [0 .. 33554431], accumulated delta range, scale factor 2^(-10) meters in the range for 0 to 32767.5 meters */

    // For LPPE HA
    kal_uint8   haAdrRMSerror;         /* [0..127], contain the RMS error of the continuous carrier phase, scale factor 2^-10 meters, in the range [0, 0.12403) meters */
    kal_bool    haLockIndicator;       /* TRUE if the carrier phase tracking has been continuous between the previous and the current measurement delivery; */
} gnss_measure_info_one_sat;


typedef struct
{
    kal_uint8                  signalID;                 /* map to GNSS_SGN_ID_VALUE_* */
    kal_bool                   codePhaseAmbiguityValid;
    kal_uint8                  codePhaseAmbiguity;       /* [0..127], scale factor 1 milli-seconds */
    kal_uint8                  numSatMeasElement;
    gnss_measure_info_one_sat  satMeasElement[GNSS_MAX_MEASURED_SAT_PER_SGN_ELEMENT];
} gnss_measure_info_one_sgn;


typedef struct
{
    gnss_id_enum               gnssID;
    kal_uint8                  numSgnMeasElement;
    gnss_measure_info_one_sgn  sgnMeasElement[GNSS_MAX_MEASURED_SGN_PER_GNSS_ELEMENT];
} gnss_measure_info_one_gnss;


typedef struct
{
    /**
     * Measurement information up to 16 GNSSs can be included.
     * Per GNSS, up to 8 GNSS signal measurements
     * Per GNSS signal measurement (band), up to 64 GNSS satellites
     */
    kal_uint8                   numGnssMeasElements;
    gnss_measure_info_one_gnss  gnssMeasElement[GNSS_MAX_MEASURED_GNSS_ELEMENT];
    gnss_measured_ref_time      measuredRefTime;  /* should always present */
    //gnss_ha_measured_result_struct haMeasResult;    
} gnss_measured_result_struct;

/* This structure for MSG_ID_LCSP_GNSS_ADDITIONAL_ASSIST_DATA_REQ */
/* This primitive is dedicated for LPP:
 * For LPP, if we request additional assistance data, the network will not resent
 * a new RequestLocationInformation followed by ProvideAssistanceData (two procedures are independent).
 *
 * Therefore, the response time will not reset and LPP will not send a new LCSP_GNSS_POS(MEAS)_REQ,
 * that's why we separate request additional assistance data by another message
 * rather than embeded in LCSP_GNSS_POS(MEAS)_CNF (as RRLP/ULCS design)
 */
typedef struct
{
    LOCAL_PARA_HDR
    kal_uint16                       transactionID;  /* transaction ID should align LCSP_GNSS_POS(MEAS)_REQ if present, for checking assistanceAvailability */

    kal_uint16                       gnssMethod;     /* network allowed GNSS type in LCSP_GNSS_POS(MEAS)_REQ if present (or current GNSS chip operation mode), may be multiple GNSS, map to GNSS_ID_BITMAP_* */
    gnss_request_assist_data_struct  assistDataReq;
    kal_bool                         lppeAssistDataValid;
} lcsp_gnss_additional_assist_data_req_struct;


/* start for gnss chip support */
typedef struct
{
    gnss_id_enum               gnssID;
    kal_uint8                  sgnIdBitmap;
} gnss_gnss_info_one_gnss;


typedef struct
{
    kal_bool                    adrFlag;
    kal_bool                    ftaFlag;           
    kal_bool                    dgnssFlag;
    kal_uint8                   gnssNumber;
    kal_uint16                  gnssMethod;        /* specify the estimated location is supported by GNSS chip, map to GNSS_ID_BITMAP_* */
    gnss_gnss_info_one_gnss     gnssInfo[GNSS_MAX_SUPPORT_NUM];
    kal_bool                    lppeFlag;
} gnss_capability_report_struct;


/* This structure for MSG_ID_ERRC_LBS_GNSS_POS_REQ */
typedef struct
{
    LOCAL_PARA_HDR
    kal_bool positioning_status; /*KAL_TRUE:activate, KAL_FALSE:deactivate} for START/STOP MDT positioning */
    errc_lbs_gnss_pos_mdt_type_enum positioning_mdt_type; /* start/stop MDT positioning with logged MDT or immediate MDT */
}errc_lbs_gnss_pos_req_struct;

/* This structure for MSG_ID_ERRC_LBS_GNSS_POS_IND */
typedef struct
{
    LOCAL_PARA_HDR
    kal_uint16 gnssMethod; /*GNSS Satellite system calculated for this positioning information, gnssMethod  = 0x00 if the position info not available*/
    gnss_gad_pos_estimate_struct locationEstimate; /*Position information ellipsoidPointWithAltitudeAndUncertaintyEllipsoid*/
    gnss_measured_ref_time measuredRefTime; /* Timing information for gnss- TOD-msec-r10, The TOD is also available*/
    kal_uint32 measuredTimeDiff; /* Time difference between LBS getting the positioning result and reporting to ERRC*/
} errc_lbs_gnss_pos_ind_struct;


typedef struct {
    kal_bool                            is_cdma_eutra_sync;     /*FDD mode TRUE : sync sys time recommended, FALSE : assync time recommended.*/
    time_sib_cdma_sys_time_type_enum    cdma_sys_time_type;     /*Used for sync/async_sys_time choice*/
    union
    {
        kal_uint8 sync_sys_time[5];                             /*bit string : 39 bits*/
        kal_uint8 async_sys_time[7];                            /*bit string : 49 bits*/
    } 
    choice;
} time_sib_cdma_sys_time_info_struct;


typedef struct
{
    LOCAL_PARA_HDR
    kal_uint8  CtrlFlag;                                        /*0: Disable (stop pulse), 1: Enable (Start in periodic mode), 2: Test Mode Enable (Start in one shot mode)*/
    kal_uint32 PulsePeriod;                                     /* unit : msec, Range: 100 ~ 300000, The period of pulse. (100 ms ~ 5 min), effective when CtrlFlag = 1 */
    kal_uint16 PulseNumber;                                     /*number : 0~7200, 0: Periodic Mode, 1~7200: Non-Periodic Number of Pulse, effective when CtrlFlag = 1*/
} lbs_errc_read_time_sib_req_struct;


typedef struct
{
    LOCAL_PARA_HDR
    time_sib_result_enum                  result;
    /*SIB8*/
    kal_bool                              is_sib8_valid;
    time_sib_cdma_sys_time_info_struct    sys_time_info;
    kal_uint64                            sib8_time_diff;
    /*SIB16*/
    kal_bool                              is_sib16_valid;
    kal_uint64                            timeinfo_utc; 
    kal_uint8                             dayLightSavingTime[2];
    kal_bool                              is_leap_seconds_valid;  
    kal_int16                             leap_seconds;
    kal_int16                             localTimeOffset;
    kal_uint64                            sib16_time_diff;   
} lbs_errc_read_time_sib_ind_struct;


/* ---LPPe HA GNSS Interface---begin--- */
typedef struct
{
    kal_uint8               cep;                   /* [0..255] */
    kal_uint8               confidenceHorizontal;    /* [0..99] */
    kal_uint8               confidenceVertical;      /* [0..99] */    
} gnss_ha_3Dposition_struct;


typedef struct
{
    kal_uint16              eastComponent;          /* [0..511] */
    kal_uint16              northComponent;          /* [0..511] */
    kal_uint16              upComponent;            /* [0..511] */    
    kal_uint8               cepV;                  /* [0..255] */
    kal_uint8               uncertaintySemiMajor;    /* [0..255] */
    kal_uint8               uncertaintySemiMinor;    /* [0..255] */    
    kal_uint8               offsetAngle;            /* [0..179] */ 
    kal_uint8               confidenceHorizontal;    /* [0..99] */
    kal_uint8               uncertaintyUpComponent;  /* [0..255] */
    kal_uint8               confidenceUp;           /* [0..99] */
} gnss_ha_3Dvelocity_struct;


typedef struct
{
    gnss_ha_3Dposition_struct   ThreeDposition;
    gnss_ha_3Dvelocity_struct   ThreeDvelocity;
} gnss_ha_pos_estimate_struct;


typedef struct
{
    gnss_system_time_struct  beginTime;          /* specify the start time of the validity period */
    kal_bool                 beginTimeAltValid;
    kal_uint16               beginTimeAlt;       /* [0..2881], specify the alternative start time, and the start time is relative the time the message was received, scale factor 15 min (range from 0 minutes to 43215 min = 30 days) */
    kal_uint16               duration;           /* [0..2881], specify the duration of the validity period after the beginTime, scale factor 15 min (range from 0 minutes to 43215 min = 30 days) */
} gnss_ha_validity_period_struct;

#if 0 
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif

typedef struct
{
    kal_uint8                 regionSizeInv;       /* [1..255], specify the inverse of the size of each side of the region in degrees, for value N the size is 10/N degrees */
    kal_bool                  areaWidthValid;
    kal_uint16                areaWidth;           /* [2..9180], specify the number of regions in the area in East-West direction, if the field is not present, the value is 1 */
    kal_uint16                codedLatOfNWCorner;  /* [0..4589], specify the latitude of the North-West corner of the area, encoded as explained in OMA-TS-LPPe Appendix C.1 */
    kal_uint16                codedLonOfNWCorner;  /* [0..9179], specify the longitude of the North-West corner of the area, encoded as explained in OMA-TS-LPPe Appendix C.1 */

    kal_bool                  rleListValid;
    //gnss_ha_rlelist_struct     rleList;             /* TBD: redefine internal structure? */  /* This field lists the regions in which the data is valid. If the field is not present, the data is valid in all the regions in the area */
} gnss_ha_validity_area_struct;


typedef struct
{
    kal_uint8   regionSizeInv;       /* specify the inverse of the size of each side of the region in degrees, for value N the size is 10/N degrees */
    kal_bool    areaWidthValid;
    kal_uint16  areaWidth;           /* specify the number of regions in the area in East-West direction, if the field is not present, the value is 1 */
    kal_uint16  codedLatOfNWCorner;  /* specify the latitude of the North-West corner of the area, encoded as explained in OMA-TS-LPPe Appendix C.1 */
    kal_uint16  codedLonOfNWCorner;  /* specify the longitude of the North-West corner of the area, encoded as explained in OMA-TS-LPPe Appendix C.1 */
} gnss_ha_storm_validity_area_struct;  /* only used in gnss_ha_iono_storm_ind_struct */


typedef struct
{
    kal_uint8  duration;          /* [1..63], scale factor 15 min, range [15, 945 min], i.e. upto 16 hours */
    kal_bool   durationLSBValid;
    kal_uint8  durationLSB;       /* [1..89], finer granularity duration, scale factor is 10 seconds, range [10, 890] seconds */
} gnss_ha_duration;


typedef struct
{
    kal_uint8   validityBitmap;  /* bhValid, chValid, awValid, bwValid, cwValid, use GNSS_HA_MAPPING_FUNC_PARAMS_BIT_*_VALID */
    kal_uint16  ah;  /* [0..16383], the a-coefficient of the hydrostatic mapping function, scale factor 2^-14 */
    /* optional */
    kal_uint16  bh;  /* [0..16383], the b-coefficient of the hydrostatic mapping function, scale factor 2^-14 */
    /* optional */
    kal_uint16  ch;  /* [0..16383], the c-coefficient of the hydrostatic mapping function, scale factor 2^-14 */
    /* optional */
    kal_uint16  aw;  /* [0..16383], the a-coefficient of the wet mapping function, scale factor 2^-14 */
    /* optional */
    kal_uint16  bw;  /* [0..16383], the b-coefficient of the wet mapping function, scale factor 2^-14 */
    /* optional */
    kal_uint16  cw;  /* [0..16383], the c-coefficient of the wet mapping function, scale factor 2^-14 */
} gnss_ha_mapping_func_params_struct;


typedef struct
{
    kal_int32  latitude;            /* [-2147483648..2147483647], latitude based on WGS84 [GPS-ICD-200D] datum, the relation between the latitude X in range [-90', 90'],
                                       and the coded number N is N = floor((X/90')*2^31), where value N=2^31 is coded as N=2^31-1, resolution 4.7 mm */
    kal_int32  longitude;           /* [-2147483648..2147483647], longitude based on WGS84 [GPS-ICD-200D] datum, the relation between the longitude X in range [-180', 180'),
                                       and the coded number N is floor((X/180')*2^31), worst-case resolution (at the Equator) 9.3 mm */
    kal_bool   cepValid;
    kal_uint8  cep;                 /* [0..255], horizontal uncertainty expressed as Circular Error Probable expressed as the coded number N,
                                       the relation between the CEP and the coded number is given by CEP = 0.3*((1+0.02)^N - 1) meters, range [0, 45.6) meters */
    kal_bool   uncSemiMajorValid; 
    kal_uint8  uncSemiMajor;        /* [0..255], the semi-major axis of the horizontal uncertainty ellipse expressed as the coded number N,
                                       the relation between the semi-major axis and the coded number is given by semi-major axis = 0.3*( (1+0.02)^N -1) meters, range [0, 45.6) meters */
    kal_bool   uncSemiMinorValid;
    kal_uint8  uncSemiMinor;        /* [0..255], the semi-minor axis of the horizontal uncertainty ellipse expressed as the coded number N,
                                       the relation between the semi-minor axis and the coded number is given by semi-minor axis = 0.3*((1+0.02)^N -1) meters, range [0, 45.6) meters */
    kal_bool   offsetAngleValid;
    kal_uint8  offsetAngle;         /* [0..179], the angle of semi-major axis measured clockwise with respect to True North in steps of 1 degree */

    kal_bool   confHorizontalValid;
    kal_uint8  confHorizontal;      /* [0..99], specify the horizontal confidence percentage associated with the CEP or Uncertainty Ellipse depending upon which is included */
    kal_int32  altitude;            /* [-64000..1280000], altitude with respect to WGS84 [GPS-ICD-200D] ellipsoid, scale factor 2^(-7) meters, range [-500, 10000] meters */
    kal_uint8  uncAltitude;         /* [0..255], the altitude uncertainty expressed as the coded number N, the relation between the altitude uncertainty and
                                       the coded number is given by uncertainty= 0.3*((1+0.02)^N -1) meters, range [0, 45.6) meters */
    kal_bool   confVerticalValid;
    kal_uint8  confVertical;        /* [0..99], specify the confidence percentage associated with the altitude uncertainty */
} gnss_ha_high_accu_3d_position_struct;

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
#endif

/* begin of gnss_ha_ionospheric_model */
typedef struct
{
    gnss_ha_validity_period_struct  validityPeriod;  /* specify the start time and duration of the model validity period */
    kal_int8                        alfa0;           /* [-128..127], specify the alpha0 parameter of the Klobuchar model, scale factor 2^(-30) seconds */
    kal_int8                        alfa1;           /* [-128..127], specify the alpha1 parameter of the Klobuchar model, scale factor 2^(-27) seconds/semi-circle */
    kal_int8                        alfa2;           /* [-128..127], specify the alpha2 parameter of the Klobuchar model, scale factor 2^(-24) seconds/semi-circle^2 */
    kal_int8                        alfa3;           /* [-128..127], specify the alpha3 parameter of the Klobuchar model, scale factor 2^(-24) seconds/semi-circle^3 */
    kal_int8                        beta0;           /* [-128..127], specify the beta0 parameter of the Klobuchar model, scale factor 2^11 seconds */
    kal_int8                        beta1;           /* [-128..127], specify the beta1 parameter of the Klobuchar model, scale factor 2^14 seconds/semi-circle */
    kal_int8                        beta2;           /* [-128..127], specify the beta2 parameter of the Klobuchar model, scale factor 2^16 seconds/semi-circle^2 */
    kal_int8                        beta3;           /* [-128..127], specify the beta3 parameter of the Klobuchar model, scale factor 2^16 seconds/semi-circle^3 */
} gnss_ha_local_klobuchar_model_struct;


typedef struct
{
    gnss_ha_validity_area_struct          validityArea;
    kal_uint8                             numKlobucharModel;
    gnss_ha_local_klobuchar_model_struct  klobucharModel[GNSS_HA_MAX_LOCAL_KLOBUCHAR_MODEL];  /* local klobuchar model per validity period */
} gnss_ha_local_klobuchar_model_element_struct;


typedef struct
{
    kal_uint8                                     numKlobucharElement;
    gnss_ha_local_klobuchar_model_element_struct  klobucharElement[GNSS_HA_MAX_LOCAL_KLOBUCHAR_MODEL_ELEMENT];  /* local klobuchar model per validity area */
} gnss_ha_local_klobuchar_model_list_struct;

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
#endif

typedef struct
{
    gnss_ha_validity_period_struct      validityPeriod; 
    //gnss_ha_rle_iono_list_struct  rleListIono;
} gnss_ha_storm_element_struct;


typedef struct
{
    kal_uint8                     numStormElement;
    gnss_ha_storm_element_struct  stormElement[GNSS_HA_MAX_STORM_ELEMENT];  
} gnss_ha_storm_list_struct;


typedef struct
{
    gnss_ha_storm_validity_area_struct  area;       /* rlelist is not not included or ignored in IonoStormIndication */
    gnss_ha_storm_list_struct           stormList;  /* provide information on the ionospheric activity in the area defined by area */
} gnss_ha_iono_storm_ind_struct;


typedef struct
{
    kal_bool                                   localKlobucharListValid;
    gnss_ha_local_klobuchar_model_list_struct  localKlobucharList;  /* localized Klobuchar model */

    kal_bool                                   ionoStormIndValid;
    gnss_ha_iono_storm_ind_struct              ionoStormInd;        /* information on the ionosphere conditions in the area */
} gnss_ha_ionospheric_static_model_struct;

#if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif

typedef struct
{
    kal_bool                      durationValid;
    gnss_ha_duration              duration;           /* specify the length of the continuous periodic assistance session */
 
    kal_bool                      rateValid;
    kal_uint8                     rate;               /* [1..64], specify the length of the continuous periodic assistance session */

    kal_bool                      refPositionValid;
    //gnss_ha_ellipsoid_point_struct       referencePosition;  /* TBD: redefine internal structure? */

    kal_bool                      validityAreaValid;
    gnss_ha_validity_area_struct  validityArea;
} gnss_ha_wa_iono_control_param_struct;


typedef struct
{
    gnss_ha_validity_period_struct  validityPeriod;  /* define the validity period of the widea area ionosphere correction */
} gnss_ha_wa_iono_common_param_struct;


typedef struct
{
    kal_bool                                controlParamsValid;
    gnss_ha_wa_iono_control_param_struct    controlParams;       /* carry the control parameters of the periodic Wide Area ionosphere surface corrections */
    kal_bool                                commonParamsValid;
    gnss_ha_wa_iono_common_param_struct     commonParams;        /* carry the common parameters of the periodic Wide Area ionosphere surface corrections */
} gnss_ha_ionospheric_periodic_model_struct;


typedef struct
{
    LOCAL_PARA_HDR
    kal_uint8 padding[4];
    kal_uint16                                     transactionID;

    gnss_ha_iono_model_type_enum                   type;
    union
    {
        gnss_ha_ionospheric_static_model_struct    staticModel;
        gnss_ha_ionospheric_periodic_model_struct  periodicWAIono;  /* based on the real-time GNSS observations and thus updated frequently to the target */
    } data;
} lcsp_gnss_ha_common_ionospheric_model_req_struct;
/* end of gnss_ha_ionospheric_model */


/* begin of gnss_ha_troposphere_model */
typedef struct
{
    gnss_ha_validity_period_struct      validityPeriod;     /* specify the start time and duration of the local troposphere parameters validity period */
    kal_uint16                          zh0;                /* [0..4095], the hydrostatic zenith delay (meters), measured at the reference altitude level, scale factor 2^(-10) m */

    kal_uint8                           validityBitmap;     /* ehValid, zw0Valid, ewValid, gNValid, gEValid, use GNSS_HA_LOCAL_TROPO_DELAY_TIME_ELEMENT_BIT_*_VALID */
    /* optional */
    kal_uint16                          eh;                 /* [0..4095], the exponential fit parameter (1/m) for scaling zh0 to the target altitude, scale factor 2^(-20) (1/m) */
    /* optional */
    kal_uint16                          zw0;                /* [0..4095], the wet zenith delay (meters), measured at the reference altitude level, scale factor 2^(-10) m */
    /* optional */
    kal_uint16                          ew;                 /* [0..4095], the exponential fit parameter (1/m) for scaling zw0 to the target altitude, scale factor 2^(-20) (1/m) */
    /* optional */
    kal_int16                           gN;                 /* [-8192..8191], the gradient parameter (m) in North direction of the azimuthally asymmetric part of the tropospheric slant delay, scale factor 2^(-7) m */
    /* optioanl */
    kal_int16                           gE;                 /* [-8192..8191], the gradient parameter (m) in East direction of the azimuthally asymmetric part of the tropospheric slant delay, scale factor 2^(-7) m */

    gnss_ha_mapping_func_params_struct  mappingFuncParams;  /* coefficients of the mapping functions */
} gnss_ha_local_tropo_delay_time_element_struct;


typedef struct
{
    kal_uint8                                      numDelayTimeElement;
    gnss_ha_local_tropo_delay_time_element_struct  delayTimeElement[GNSS_HA_MAX_LOCAL_TROPO_DELAY_TIME_ELEMENT];
} gnss_ha_local_tropo_delay_time_list_struct;


typedef struct
{
    gnss_ha_validity_area_struct                validityArea;         /* specify the geographical validity area of the local troposphere model parameters */

    kal_bool                                    refAltitudeValid;
    kal_int16                                   refAltitude;          /* [-1000..8192], specify the reference altitude (from nominal sea level, EGM96) at which the delay measurements are made, scale factor 1m, if absent, the reference altitude is the zero nominal sea level */

    kal_bool                                    graRefPositionValid;
    //gnss_ha_ellipsoid_point_struct                graRefPosition;       /* TBD: redefine internal structure? */  /* specify the origion for the spatial gradients gN and gE, if absent, the origin is taken as the middle point of the validity area */

    gnss_ha_local_tropo_delay_time_list_struct  delayList;            /* specify the troposphere delays */
} gnss_ha_local_tropo_delay_area_element_struct;


typedef struct
{
    kal_uint8                                      numDelayAreaElement;
    gnss_ha_local_tropo_delay_area_element_struct  delayAreaElement[GNSS_HA_MAX_LOCAL_TROPO_DELAY_AREA_ELEMENT];
} gnss_ha_troposphere_delay_list_struct;


typedef struct
{
    gnss_ha_validity_period_struct      validityPeriod;  /* specify the start time and duration of the surface parameter validity period */

    kal_int16                           pressure;        /* [-1024..1023], local atmospheric pressure measurement (hPa) at the altitude given by refAltitude, scale factor 0.1 hPa, the value is added to the nominal pressure of 1013hPa */
    kal_int8                            pressureRate;    /* [-128..127], rate of change of pressure, when calculating the pressure, the origin of time is the begin time of the validity period, scale factor 10 Pa/hour */

    kal_uint8                           validityBitmap;  /* gNpressureValid, gEpressureValid, temperatureValid, temperatureRateValid, gNtemperatureValid, gEtemperatureValid, use GNSS_HA_LOCAL_SURF_PARAMS_TIME_ELEMENT_BIT_* */
    /* optional */
    kal_int8                            gNpressure;      /* [-128..127], specify the northward gradient of the atmospheric pressure, if this field is present, but gE is not given, the eastward gradient is zero, scale factor 10 Pa/km */
    /* optional */
    kal_int8                            gEpressure;      /* [-128..127], specify the eastward gradient of the atmospheric pressure, if this field is present, but gN is not given, the nothward gradient is zero, scale factor 10 Pa/km */
    /* optional */
    kal_int8                            temperature;     /* [-64..63], local temperature measurement at the reference altitude refAltitude, scale factor 1K, the value is added to 273K */
    /* optional */
    kal_int8                            temperatureRate; /* [-16..16], local temperature change rate, the scale factor 1K/hour */
    /* optional */
    kal_int8                            gNtemperature;   /* [-8..7], specify the northward gradient of the temperature, if this field is present, but gE is not given, the eastward gradient is zero, scale factor 1 K/km */
    /* optional*/
    kal_int8                            gEtemperature;   /* [-8..7], specify the eastward gradient of the temperature, if this field is present, but gN is not given, the nothward gradient is zero, scale factor 1 K/km */

    gnss_ha_mapping_func_params_struct  mappingFuncParams;  /* coefficients of the mapping functions */
} gnss_ha_local_surface_params_time_element_struct;


typedef struct
{
    kal_uint8                                         numParamsTimeElements;
    gnss_ha_local_surface_params_time_element_struct  paramsTimeElement[GNSS_HA_MAX_LOCAL_SURFACE_PARAMS_TIME_ELEMENT];
} gnss_ha_local_surface_params_struct;


typedef struct
{
    gnss_ha_validity_area_struct         validityArea;         /* specify the geographical validity area of the local troposphere model parameters */

    kal_bool                             refAltitudeValid;
    kal_int16                            refAltitude;          /* [-1000..8192], specify the reference altitude (from nominal sea level, EGM96) at which the surface measurements are made, scale factor 1m, if absent, the reference altitude is the zero nominal sea level EGM96 */

    kal_bool                             graRefPositionValid;
    //gnss_ha_ellipsoid_point_struct         graRefPosition;       /* specify the origion for the spatial gradients gN and gE, if absent, the origin is taken as the middle point of the validity area */
    gnss_ha_local_surface_params_struct  paramsList;           /* specify the surface parameters */
} gnss_ha_local_surface_params_element_struct;


typedef struct
{
    kal_uint8                                    numParamsElements;
    gnss_ha_local_surface_params_element_struct  paramsElement[GNSS_HA_MAX_LOCAL_SURFACE_PARAMS_ELEMENT];
} gnss_ha_local_surface_params_list_struct;


typedef struct
{
    LOCAL_PARA_HDR
    kal_uint8 padding[4];
    kal_uint16                                transactionID; 
    
    kal_bool                                  tropoDelayListValid;
    gnss_ha_troposphere_delay_list_struct     tropoDelayList;         /* provide the zenith troposphere delay components determined in a given location and the needed parameters to adjust the delay to the target's altitude */
    kal_bool                                  surfaceParamListValid;
    gnss_ha_local_surface_params_list_struct  surfaceParametersList;  /* provide the surface pressure and optionally temperature that allow the target to compute the tropospheric delay using one of the known atmosphere models, such as the Hopfield or Saastamoinen model */
} lcsp_gnss_ha_common_troposphere_model_req_struct;
/* end of gnss_ha_troposphere_model */


/* begin of gnss_ha_altitude_assist */
typedef struct
{
    gnss_ha_validity_period_struct  validityPeriod;     /* specify the start time and duration of the altitude assistance validity period */

    kal_int16                       pressure;           /* [-1024..1023], local atmospheric pressure measurement (hPa) at the altitude given by refAltitude, scale factor 10 Pa, the value is added to the nominal pressure of 1013hPa */
    kal_bool                        pressureRateValid;
    kal_int8                        pressureRate;       /* [-128..127], rate of change of pressure, when calculating the pressure, the origin of time is the begin time of the validity period, scale factor 10 Pa/hour */

    kal_bool                        gNValid;
    kal_int8                        gN;                 /* [-128..127], specify the northward gradient of the atmospheric pressure, scale factor 10 Pa/km */
    kal_bool                        gEValid;
    kal_int8                        gE;                 /* [-128..127], specify the eastward gradient of the atmospheric pressure, scale factor 10 Pa/km */
} gnss_ha_pressure_assist_element_struct;


typedef struct
{
   kal_uint8                               numPressureElements;
   gnss_ha_pressure_assist_element_struct  pressureElement[GNSS_HA_MAX_PRESSURE_ASSIST_ELEMENT];
} gnss_ha_pressure_assist_list_struct;


typedef struct
{
   gnss_ha_validity_area_struct         validityArea;            /* specify the geographical validity area of the altitude assistance */

   kal_bool                             gradRefPositionValid;
   gnss_reference_location_struct       gradRefPosition;         /* specify the origin for the spatial gradients gN and gE, if absent, the origin is taken as the middle point of the validity area */

   kal_bool                             refAltitudeValid;
   kal_int16                            refAltitude;             /* specify the reference altitude (from nominal sea level, [EGM96]) at which the surface measurements are made, scale factor 1m, if absent, the reference altitude is the zero nominal sea level */

   gnss_ha_pressure_assist_list_struct  pressureAssistanceList;  /* specify the set of pressure assistance elements for different periods of time */
} gnss_ha_altitude_assist_area_element_struct;


typedef struct
{
    LOCAL_PARA_HDR
    kal_uint8 padding[4];
    kal_uint16                                transactionID;

    kal_uint8                                    numAltitudeAreaElement;
    gnss_ha_altitude_assist_area_element_struct  altitudeAreaElement[GNSS_HA_MAX_ALTITUDE_ASSIST_AREA_ELEMENT];
} lcsp_gnss_ha_common_altitude_assist_req_struct;
/* end of gnss_ha_altitude_assist */


/* begin of gnss_ha_altitude_assist */
typedef struct
{
    LOCAL_PARA_HDR
    kal_uint8 padding[4];
    kal_uint16                                transactionID;

    kal_uint16  solarRad;  /* specifies the solar radiation at one AU from the Sun, scale factor 1 Wm^(-2) */
} lcsp_gnss_ha_common_solar_radiation_req_struct;
/* end of gnss_ha_altitude_assist */


/* begin of gnss_ha_ccp_assist_common */
typedef struct
{
    gnss_id_enum  gnssID;       /* specify the GNSS type */
    kal_uint8     gnssSignals;  /* specify the GNSS signal types for which CCP assistance can be provided in the area, GNSS Signal(s), map to GNSS_SGN_ID_BITMAP_* */
} gnss_ha_ccp_signal_supp_element_struct;


typedef struct
{
    kal_uint8                               numSigSuppElement;
    gnss_ha_ccp_signal_supp_element_struct  sigSuppElement[GNSS_HA_MAX_CCP_SIGNAL_SUPP_ELEMENT];
} gnss_ha_ccp_signal_supp_struct;


typedef struct
{
    gnss_ha_validity_area_struct    areaDescr;  /* provide the description of the area */
    gnss_ha_ccp_signal_supp_struct  sigSupp;    /* provide the GNSS signal support information */
} gnss_ha_ccp_support_area_struct;

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
#endif


typedef struct
{
   kal_uint16                                 refStationID;       /* define the ID of the reference station */
   gnss_ha_high_accu_3d_position_struct       refStationLoc;      /* define the location of the reference station, of which ID is refStationID */
   kal_bool                                   antennaDescrValid;
   //gnss_ha_antenna_struct  antennaDescr;       /* TBD: redefine internal structure? */ /* specify the antenna type used at the reference station */
} gnss_ha_ccp_pref_station_list_element_struct;


typedef struct
{

    kal_uint8                                     numPrefStationElement;
    gnss_ha_ccp_pref_station_list_element_struct  prefStationElement[GNSS_HA_MAX_CCP_PREF_STATION_LIST_ELEMENT];
} gnss_ha_ccp_pref_station_list_struct;


typedef struct
{
    kal_bool                              supportAreaValid;
    gnss_ha_ccp_support_area_struct       supportArea;      /* provide information on the area, in which CCP is supported */

    kal_bool                              nbrListValid;
    gnss_ha_ccp_pref_station_list_struct  nbrList;          /* provide information on the possible neighbour reference stations */

    kal_bool                              durationValid;
    gnss_ha_duration                      duration;         /* specify the length of the continuous periodic assistance session */

    kal_bool                              rateValid;
    kal_uint8                             rate;             /* [1..64], specify the interval between the assistance data deliveries in seconds */

    kal_bool                              refStationListValid;
    gnss_ha_ccp_pref_station_list_struct  refStationList;   /* provide the locations of the reference stations for which CCP assistance is being provided */
} gnss_ha_ccp_assist_common_ctrl_params_struct;


typedef struct
{
    LOCAL_PARA_HDR
    kal_uint8 padding[4];
    kal_uint16                           transactionID;
    gnss_ha_ccp_assist_common_type_enum  type;
    union
    {
        gnss_system_time_struct                       commParamsRefSysTime;  /* define the CCP-specific common parameters (reference time) */
        gnss_ha_ccp_assist_common_ctrl_params_struct  ctrlParams;            /* define the CCP-specific control parameters */
    } data;
} lcsp_gnss_ha_common_ccp_assist_req_struct;
/* end of gnss_ha_ccp_assist_common */

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
#endif

/* begin of gnss_ha_req_ionospheric_model */
typedef struct
{
    kal_uint8                ionoReq;            /* specify which ionosphere models are being requested for, mapping to GNSS_HA_COMM_AD_REQ_IONO_BIT_* */

    kal_bool                 reqBeginTimeValid;
    gnss_system_time_struct  reqBeginTime;       /* specify the first time instant when an ionosphere model is needed, if absent, begin time is the current time */

    gnss_ha_duration         duration;           /* specify for how long period the ionospheric model is requested */
} gnss_ha_req_ionospheric_static_model_struct;


typedef struct
{
    kal_bool          durationValid;
    gnss_ha_duration  duration;       /* specify the length of the continuous periodic assistance session */

    kal_bool          rateValid;
    kal_uint8         rate;           /* [0..64], specify the interval between the assistance data deliveries in seconds */
} gnss_ha_req_ionospheric_periodic_model_struct;


typedef struct
{
    gnss_ha_iono_model_type_enum                   type;
    union
    {
        gnss_ha_req_ionospheric_static_model_struct    staticModelReq;     /* request for the one-shot ionosphere models */
        gnss_ha_req_ionospheric_periodic_model_struct  periodicWAIonoReq;  /* request for periodic ionosphere models */
    } data;
} gnss_ha_req_ionospheric_model_struct;
/* end of gnss_ha_req_ionospheric_model */


/* begin of gnss_ha_req_troposphere_model */
typedef struct
{
    kal_uint8                tropoModelReq;           /* specify the desired model or models, mapping to GNSS_HA_COMM_AD_REQ_TROPO_BIT_* */

    kal_bool                 supportMultiGridPoints;  /* indicate if the target is requesting parameter sets originating from multiple locations around it (TRUE)
                                                         FALSE means that only the nearest grid point parameters are requested */

    kal_bool                 reqBeginTimeValid;
    gnss_system_time_struct  reqBeginTime;            /* specify the first time instant when a valid troposphere model is needed, if absent, the begin time is the current time */

    gnss_ha_duration         duration;                /* specify how long time the tropospheric model is requested for */
} gnss_ha_req_troposphere_model_struct;
/* end of gnss_ha_req_troposphere_model */


/* begin of gnss_ha_req_altitude_assist */
typedef struct
{
    kal_bool                 reqBeginTimeValid;
    gnss_system_time_struct  reqBeginTime;       /* specify the first time instant when altitude assistance is needed, if absent, the begin time is the current time */

    kal_bool                 durationValid;
    gnss_ha_duration         duration;           /* specify how long time the altitude assistance is requested for, if absent, altitude assistance is requested for the current moment */
} gnss_ha_req_altitude_assist_struct;
/* end of gnss_ha_req_altitude_assist */


/* begin of gnss_ha_req_ccp_ctrl_params */
typedef struct
{
   gnss_ha_high_accu_3d_position_struct  reqRefStationLoc;  /* request for a new reference station based on the position. The position may or may not be the target position */
   gnss_ha_agnss_qor_type_enum           qor;               /* QoR (Quality-of-Reference station) defines how close to the requested location the closest reference station must be 
                                                               In case the closest reference station is within the uncertainty area of the target location, the QoR parameter is neglected */
} gnss_ha_req_ccp_pos_based_ref_station_struct;


typedef struct
{
    kal_uint8   numRefStationIDElement;
    kal_uint16  refStationIDElement[GNSS_HA_MAX_CCP_PREF_STATION_LIST_ELEMENT];  /* [0..65535], contain the reference station ID list */
} gnss_ha_req_ccp_ref_station_list_struct;


typedef struct
{
    gnss_ha_req_ccp_ref_station_type_enum             type;
    union
    {
        gnss_ha_req_ccp_pos_based_ref_station_struct  posBasedRefStationReq;
        gnss_ha_req_ccp_ref_station_list_struct       idBasedRefStationReq;    /* request for CCP AD for a new reference station based on the reference station ID */
        gnss_ha_req_ccp_ref_station_list_struct       refStationKillList;      /* terminate CCP AD deliveries for selected reference stations based on their reference station IDs */
    } data;
} gnss_ha_req_ccp_ref_station_struct;


typedef struct
{
    kal_bool                            durationValid;
    gnss_ha_duration                    duration;          /* specify the length of the continuous periodic assistance session */

    kal_bool                            rateValid;
    kal_uint8                           rate;              /* [1..64], specify the interval between the assistance data deliveries in seconds */

    kal_bool                            refStationValid;
    gnss_ha_req_ccp_ref_station_struct  refStation;        /* specify the request/modification of the active reference station set */
} gnss_ha_req_ccp_common_req_struct;


typedef struct
{
    kal_bool                           ccpSuppAreaReq;    /* TRUE if request for the information on the CCP assistance availability in the target area */
    kal_bool                           ccpNbrListReq;     /* TRUE if request for the information on the reference stations in the vicinity of the target */

    gnss_ha_req_ccp_common_req_struct  ccpCommonRequest;  /* request for a new reference station or stopping CCP AD delivery for a reference station */
} gnss_ha_req_ccp_ctrl_params_struct;
/* end of gnss_ha_req_ccp_ctrl_params */

/* begin of gnss_ha_req_ccp_generic_struct */
typedef struct
{
    kal_uint8  ccpGnssSignalsReq;  /* specify the GNSS signal types for which the CCP assistance is requested by the target device, GNSS Signal(s), map to GNSS_SGN_ID_BITMAP_* */
} gnss_ha_req_ccp_generic_struct;
/* end of gnss_ha_req_ccp_generic_struct */

typedef struct
{
    gnss_id_enum                             gnssId;
    // kal_bool                        waIonoSurfaceReq;     /* TRUE if wide area ionosphere correction surface is requested for the SVs of this GNSS */
    // gnss_ha_req_mechanics_struct    mechanicsReq;         /* request the SV mechanics information */
    // gnss_ha_req_dcb_struct          dcbReq;               /* request the differential code biases to gain higher accuracy */
    kal_bool                        degradModelReq;       /* TRUE if request the accuracy models for the SV orbit and clock models to get a better understanding of the accuracy of the computed position */
    gnss_ha_req_ccp_generic_struct  ccpAssistGenericReq;  /* request for the CCP reference assistance data for high accuracy */
    // gnss_ha_req_nav_model_struct    navigationModelReq;   /* TBD. request for the navigation models defined in LPPe */

} gnss_ha_generic_assist_struct;

typedef struct
{
    LOCAL_PARA_HDR
    kal_uint8 padding[4];
    kal_uint16                            transactionID;

    /* Common assistance data */
    kal_bool                              ionoModelReqValid;
    gnss_ha_req_ionospheric_model_struct  ionoModelReq;        /* request for ionosphere models */

    kal_bool                              tropoModelReqValid;
    gnss_ha_req_troposphere_model_struct  tropoModelReq;       /* request troposphere models */

    kal_bool                              altAssistReqValid;
    gnss_ha_req_altitude_assist_struct    altAssistReq;        /* request altitude assistance for improved availability */

    kal_bool                              solarRadReq;         /* TRUE if request the solar radiation intensity */

    kal_bool                              ccpCtrlParamsReqValid;
    gnss_ha_req_ccp_ctrl_params_struct    ccpCtrlParamsReq;    /* request for the control parameters of the CCP AD session.
                                                                  it shall be accompanied by ccpAssistGenericReq in the generic part of the AGNSS request */
    /* Generic assistance data */
    kal_uint8                             numGnssSupport;
    gnss_ha_generic_assist_struct         genericAssistReq[16];                                                                                                                                      
} lcsp_gnss_ha_assist_data_request_ind_struct;

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

/* begin of gnss_ha_degradation_model */
typedef struct
{
    kal_uint8  clockRMS0;       /* specify the constant term of the clock model degradation model by cRMS0 =((1+0.1)^clockRMS0 -1) meters,
                                   where clockRMS0 = 31 denotes 'Use At Own Risk', the range is [0, 16.45) meters, refer to OMA-TS-LPPe Appendix C.6.1 */
    kal_bool   clockRMS1Valid;
    kal_uint8  clockRMS1;       /* specify the first order term of the clock model degradation model, cRMS1, scale factor 2^(-14) m/s,
                                   range [0, 4.3e-4) m/s, refer to OMA-TS-LPPe Appendix C.6.1 */
} gnss_ha_clock_model_degrad_model_struct;


typedef struct
{
    kal_uint8  orbitRMS0;       /* specify the constant term of the orbit model degradation model by oRMS0 =((1+0.1)^orbitRMS0 -1) meters,
                                   where orbitRMS0 = 31 denotes 'Use At Own Risk', the range is [0, 16.45) meters, refer to OMA-TS-LPPe Appendix C.6.2 */
    kal_bool   orbitRMS1Valid;
    kal_uint8  orbitRMS1;       /* specify the first order term of the orbit model degradation model, oRMS1, scale factor 2^(-14) m/s, range [0, 4.3e-4) m/s,
                                   refer to OMA-TS-LPPe Appendix C.6.2 */
} gnss_ha_orbit_model_degrad_model_struct;


typedef struct
{
    kal_uint8                                svID;                   /* [0..63], specify the SV for which degradation models are provided */
    gnss_ha_clock_model_degrad_model_struct  clockDegradationModel;  /* provide the degradation model for the clock model */
    gnss_ha_orbit_model_degrad_model_struct  orbitDegradationModel;  /* provide the degradation model for the orbit model */
} gnss_ha_degrad_model_element_struct;


typedef struct
{
    LOCAL_PARA_HDR
    kal_uint8 padding[4];
    kal_uint16                               transactionID;
    gnss_id_enum                             gnssId;
    
    kal_uint8                            numDegradModelElement;
    gnss_ha_degrad_model_element_struct  degradModelElement[GNSS_HA_MAX_DEGRAD_MODEL_ELEMENT];
} lcsp_gnss_ha_generic_degradation_model_req_struct;
/* end of gnss_ha_degradation_model */


/* begin of gnss_ha_ccp_assist_generic */
typedef struct
{
    gnss_ha_code_phase_err_type_enum  type;
    union
    {
        kal_uint8  codePhaseRMSError;  /* contain the pseudorange RMS error value, representation refer to TS 36.355 floating-point representation of GNSS-MeasurementList field descriptions */
        kal_uint8  cnr;                /* carrier-to-noise ratio, scale factor 0.25 dB-Hz, range [0, 63.75] dB-Hz */
    } data;
} gnss_ha_code_phase_error_struct;


typedef struct
{
    kal_uint8                        svID;                      /* [0..63], identify the SV for which CCP assistance is being provided */

    kal_bool                         intCodePhaseValid;
    kal_uint8                        intCodePhase;              /* [0..255], indicate the integer milli-second part of the code phase */

    kal_uint32                       codePhase;                 /* [0.. 14989622], contain the sub-millisecond part of the code phase observation
                                                                   for the particular satellite signal at the reference time, scale factor 0.02 meters, range [0, 299792.44] meters */

    kal_bool                         codePhaseErrorValid;
    gnss_ha_code_phase_error_struct  codePhaseError;            /* code phase error */

    kal_int32                        phaseRangeDelta;           /* [-524288.. 524287], define the (Phase Range �V Pseudorange), scale factor 0.5 mm, range [-262.144, 262.1435] meters */

    kal_bool                         phaseRangeRMSErrorValid;
    kal_uint8                        phaseRangeRMSerror;        /* [0..127], contain the RMS error of the continuous carrier phase, scale factor 2^(-10) meters, in the range [0, 0.12403) meters */

    kal_bool                         lockIndicator;             /* TRUE: if the carrier phase tracking has been continuous between the previous and the current assistance 
                                                                   data delivery. FALSE: a cycle slip has occurred */
} gnss_ha_ccp_sv_element_struct;


typedef struct
{
    kal_uint8                      numCCPPerSVElement;
    gnss_ha_ccp_sv_element_struct  ccpPerSVElement[GNSS_HA_MAX_CCP_PER_SV_ELEMENT];
} gnss_ha_ccp_per_sv_list_struct;


typedef struct
{
    kal_uint8                       signalID;      /* indicate the signal id, map to GNSS_SGN_ID_VALUE_* */
    gnss_ha_ccp_per_sv_list_struct  ccpPerSVlist;
} gnss_ha_ccp_per_signal_element_struct;


typedef struct
{
    kal_uint8                              numCCPPerSigElement;
    gnss_ha_ccp_per_signal_element_struct  ccpPerSigElement[GNSS_HA_MAX_CCP_PER_SIG_ELEMENT];
} gnss_ha_ccp_per_signal_list_struct;


typedef struct
{
   kal_uint16                          refStationID;      /* define the ID of the reference station to which the CCP assistance is provided */
   gnss_ha_ccp_per_signal_list_struct  ccpPerSignalList; 
} gnss_ha_ccp_generic_element_struct;


typedef struct
{
    LOCAL_PARA_HDR
    kal_uint8 padding[4];
    kal_uint16                               transactionID;
    gnss_id_enum                             gnssId;

    kal_uint8                           numCCPGenericElement;
    gnss_ha_ccp_generic_element_struct  ccpGenericElement[GNSS_HA_MAX_CCP_GENERIC_ELEMENT];
} lcsp_gnss_ha_generic_ccp_assist_req_struct;
/* end of gnss_ha_ccp_assist_generic */

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

typedef struct
{
    gnss_id_enum    gnssID;       /* GNSS ID for which HA GNSS measurements are requested */
    kal_uint8       gnssSignals;  /* specify the GNSS signal types for which HA GNSS measurements are requested by the server, map to GNSS_SGN_ID_BITMAP_* */
} gnss_ha_meas_signal_req_element_struct;


typedef struct
{
    kal_bool                                durationValid;
    gnss_ha_duration                        duration;       /* specify the length of the HA GNSS measurement session */

    kal_bool                                rateValid;
    kal_uint8                               rate;           /* [1..63], specify the rate of delivery of the HA GNSS measurements, scale factor 1 second */

    /* should we support antenna info for HA GNSS? */
    //kal_bool antennaInfoReqValid;
    ///LPP_EXT_OMA_LPPe_AGNSS_HAgnssRequestControlParameters_antennaInformationReq antennaInformationReq; /* request for the target antenna information */

    kal_bool                                pressureReq;    /* request for the pressure information at the target site */

    kal_uint8                               numSigReqElement;
    gnss_ha_meas_signal_req_element_struct  sigReqelement[GNSS_HA_MAX_MEAS_PER_GNSS_ELEMENT];  /*  request HA GNSS measurements for specific GNSS signals */
} gnss_ha_meas_req_struct;


typedef struct
{
    kal_int16  pressure;     /* [-1024..1023], local atmospheric pressure measurement (hPa) at the target��s altitude, scale factor 0.1 hPa, the value is added to the average pressure 1013hPa */
    kal_uint8  pressureUnc;  /* [0..127], the 1-sigma standard deviation of the pressure measurement, the scale factor 0.1 hPa */
} gnss_ha_local_pressure_struct;


typedef struct
{
    kal_uint8                           svID;                /* [0..63], identify the SV for which HA GNSS measurements are provided */

    kal_bool                            intCodePhaseValid;
    kal_uint8                           intCodePhase;        /* [0..255], indicate the integer milli-second part of the code phase */

    kal_uint32                          codePhase;           /* [0..14989622], contain the sub-millisecond part of the code phase observation for the particular satellite signal at the reference time
                                                                target shall reconstruct the full pseudorange by Pseudorange = (Integer Code Phase) + (Code Phase), scale factor 0.02 meters. Range [0, 299792.44] meters */
                                     
    kal_uint8                           codePhaseRMSError;   /* [0..63], contain the pseudorange RMS error value. representation refer to TS 36.355 floating-point representation of GNSS-MeasurementList field descriptions */
    gnss_ha_multipath_detect_type_enum  multipathDetection;  /* contain an estimate of the multipath environment */
    kal_uint8                           cnr;                 /* [0..255], contain an estimate of the carrier-to-noise ratio, scale factor 0.25 dB-Hz, range [0, 63.75] dB-Hz */
    kal_uint32                          adr;                 /* [0..536870911], contain the continuous carrier phase with direct data polarity, scale factor 2^-10 meters, in the range [0, 524287.999023438) meters */
    kal_uint8                           adrRMSerror;         /* [0..127], contain the RMS error of the continuous carrier phase, scale factor 2^-10 meters, in the range [0, 0.12403) meters */
    kal_bool                            lockIndicator;       /* TRUE if the carrier phase tracking has been continuous between the previous and the current measurement delivery;
                                                                FALSE if a cycle slip has occurred */
} gnss_ha_meas_per_sv_element_struct;


typedef struct
{
    kal_uint8                           numPerSVElement;
    gnss_ha_meas_per_sv_element_struct  perSVElement[GNSS_HA_MAX_MEAS_PER_SV_ELEMENT];
} gnss_ha_meas_per_sv_list_struct;


typedef struct
{
    kal_uint8                        signalID;   /* define GNSS signal ID for which measurements are being provided, map to GNSS_SGN_ID_VALUE_* */
    gnss_ha_meas_per_sv_list_struct  perSVlist;  /* carry the HA GNSS measurements for specific satellites */
} gnss_ha_meas_per_sig_element_struct;


typedef struct
{
    kal_uint8                            numPerSigElement;
    gnss_ha_meas_per_sig_element_struct  perSigElement[GNSS_HA_MAX_MEAS_PER_SIGNAL_ELEMENT];
} gnss_ha_meas_per_sig_list_struct;


typedef struct
{
    gnss_id_enum                      gnssID;        /* GNSS ID for which measurements are being provided */
    gnss_ha_meas_per_sig_list_struct  perSignalList; /* carry the HA GNSS measurements for the given signals */
} gnss_ha_meas_per_gnss_element_struct;


typedef struct
{
    kal_uint8                             numGnssElement;
    gnss_ha_meas_per_gnss_element_struct  gnssElement[GNSS_HA_MAX_MEAS_PER_GNSS_ELEMENT];
} gnss_ha_measured_result_struct;


typedef struct
{
    kal_bool                        positionValid;
    gnss_reference_location_struct  position;        /* specify the position of the target device */

    gnss_system_time_struct         refTime;         /* specify the time, when the measurements included are applicable */

    kal_bool                        localPressureValid;
    gnss_ha_local_pressure_struct   localPressure;      /* specify the local atmospheric pressure measurement at the target's altitude for improved altitude or delta-altitude performance */

    /* should we support antenna info for HA GNSS? */    
    //LPP_EXT_OMA_LPPe_Orientation antennaOrientation; /* OPTIONAL */

    gnss_ha_measured_result_struct      signalMeasurements; /* carry the HA GNSS signal measurements */
} gnss_ha_meas_cnf_struct;


typedef struct
{
    kal_uint16  azimuth;         /* [0..359], indicate the azimuth angle of the ionosphere measurement, i.e. the direction from the user where the TEC values are observed.
                                    azimuth angle is defined as the clockwise angle from the true North, scale factor 1 degree */
    kal_uint8   elevation;       /* [0..90], indicate the elevation angle of the ionosphere measurement, i.e. how high or low in the sky the TEC value is observed, scale factor is 1 degree */
    kal_uint16  tecValue;        /* [0..511], indicate the measured TEC value towards the SV concerned, scale factor is 1 TEC unit, 10^16 e-/m^2 */
    kal_uint8   tecUncertainty;  /* [0..63], indicate the 1-sigma standard deviation of the TEC measurement, scale factor is 1 TEC unit, 10^16 e-/m^2 */
} gnaa_ha_tec_per_sv_element_struct;


typedef struct
{
    kal_uint8                          numPerSVElement;
    gnaa_ha_tec_per_sv_element_struct  perSVElement[GNSS_HA_MAX_TEC_PER_SV_ELEMENT];
} gnss_ha_tec_per_sv_struct;


typedef struct
{
    kal_uint16  tecValueAtZenith;        /* [0..511], indicate the measured vertical TEC value, scale factor is 1 TEC unit, 10^16 e-/m^2 */
    kal_uint8   tecUncertaintyAtZenith;  /* [0..63], indicate the 1-sigma standard deviation of the TEC measurement, scale factor is 1 TEC unit 10^16 e-/m^2 */
} gnss_ha_tec_at_zenith_struct;


typedef struct
{
   kal_uint16 azimuth; 
   kal_uint8 elevation; 
   kal_uint16 tecValue; 
   kal_uint8 tecUncertainty; 
} gnss_ha_tec_persv_element_struct;


typedef struct
{
   kal_uint8 numElements;
   gnss_ha_tec_persv_element_struct *element;
} gnss_ha_tec_persv_struct;


typedef struct
{
    gnss_system_time_struct         gnssTime;             /* indicate the measurement time */
    gnss_reference_location_struct  position;             /* indicates the measurement location */

    kal_bool                        tecPerSVValid;
    gnss_ha_tec_persv_struct tecPerSV;             /* contain the list of TEC values from the target towards each of the SVs seen by the target */

    kal_bool                           tecAtZenithValid;
    gnss_ha_tec_at_zenith_struct tecAtZenith;       /* contain the target's estimate of the zenith TEC value at the target's position */
} gnss_ha_iono_meas_struct;


typedef struct
{
    kal_bool   temperatureValid;
    kal_int8   temperature;          /* [-64..63], local temperature measured by the target, the value is added to 273K, scale factor 1K */

    kal_bool   temperatureUncValid;
    kal_uint8  temperatureUnc;       /* [0..7], the 1-sigma standard deviation of the temperature measurement, scale factor 1K */
} gnss_ha_temperature_meas_struct;


typedef struct
{
    gnss_system_time_struct          gnssTime;              /* indicate the measurement time */
    gnss_reference_location_struct   position;              /* indicates the measurement location */

    kal_int16                        pressure;              /* local atmospheric pressure measurement (hPa) at the target's altitude, scale factor is 0.1 hPa, the value is added to the nominal pressure of 1013hPa */
    kal_uint8                        pressureUncertainty;   /* the 1-sigma standard deviation of the pressure measurement, the scale factor is 0.1 hPa */

    kal_bool                         temperatureMeasValid;
    gnss_ha_temperature_meas_struct  temperatureMeas;       /* provide temperature measurement */
} gnss_ha_local_surf_meas_struct;


typedef struct
{
    kal_bool                                haErrCauseValid;
    gnss_ha_tgt_err_cause_enum              haErrCause;

    kal_bool                                ionoMeasErrCauseValid;
    gnss_ha_tgt_iono_meas_err_cause_enum    ionoMeasErrCause;

    kal_bool                                envObserveErrCauseValid;
    gnss_ha_tgt_env_observe_err_cause_enum  envObserveErrCause;

    kal_bool                                haGNSSErrCauseValid; 
    gnss_ha_tgt_gnss_err_cause_enum         haGNSSErrCause;
} gnss_ha_tgt_error_struct;


typedef struct
{
    kal_uint8   ionoModelSupport;       /* specify which ionospheric model or models the target supports, mapping to GNSS_HA_COMM_IONO_AD_SUPP_BIT_* */
    kal_uint8   tropoModelSupport;      /* specify which troposphere model or models the target supports and combining troposphere information from several grid points surrounding the target, mapping to GNSS_HA_COMM_TROPO_AD_SUPP_BIT_* */
    kal_bool    altitudeAssistSupport;  /* TRUE if the targets supports altitude assistance */
    kal_bool    solarRadiationSupport;  /* TRUE if the targets supports solar radiation assistance data */
    kal_uint8   ccpSupport;             /* specify which CCP assistance data type the target supports, mapping to GNSS_HA_COMM_CCP_AD_SUPP_BIT_* */
} gnss_ha_common_assist_data_support_struct;


typedef struct
{
    gnss_id_enum  gnss_ID;

    kal_bool      mechanicsSupport;            /* TRUE if the target supports mechanics assistance data */
    kal_bool      dcbSupport;                  /* TRUE if the target supports Differential Code Bias assistance data */
    kal_bool      degradationModelSupport;     /* TRUE if the target supports navigation model degradation model assistance data */
    kal_uint8     ccpAssistSignalIDsSupport;   /* indicate if target supports CCP assistance data for at least one signal of the GNSS, mapping to GNSS_SGN_ID_BITMAP_* */
    kal_uint8     navModelSupport[GNSS_HA_MAX_GENERIC_AD_NAV_MODEL_ID_ELEMENT];  /* TBD */
} gnss_ha_generic_assist_data_support_element_struct;


typedef struct
{
    kal_uint8                                           numGenericElement;
    gnss_ha_generic_assist_data_support_element_struct  genericElement[GNSS_HA_MAX_GNSS_GENERIC_ASSIST_DATA_ELEMENT];
} gnss_ha_generic_assist_data_support_struct;


typedef struct
{
    gnss_ha_common_assist_data_support_struct   commonAssistDataSupp;   /* provide target's GNSS-independent AGNSS capabilities */
    gnss_ha_generic_assist_data_support_struct  genericAssistDataSupp;  /* provide target's GNSS-dependent AGNSS assistance data capabilities */
} gnss_ha_assist_data_support_list_struct;


typedef struct
{
    kal_uint8  ionoMeasSupport;         /* specify the ionospheric measurement supported by the target device, mapping to GNSS_HA_GENE_AD_SUPP_BIT_BIT_* */
    kal_bool   pressureMeasSupport;
    kal_bool   temperatureMeasSupport;
} gnss_ha_env_observe_support_list_struct;


typedef struct
{
    gnss_id_enum  gnssID;            /* specify the ID of the GNSS for which HA GNSS capabilities are provided */
    kal_uint8     signalIDsSupport;  /* specify the GNSS signal types for which HA GNSS signal measurements are supported by the target device */
} gnss_ha_capa_per_gnss_support_struct;


typedef struct
{
    kal_uint8                             modeSupport;          /* indicate which mode supports HA GNSS, mapping to GNSS_HA_MODE_SUPPORT_BIT* */
    kal_bool                              pressureInfoSupport;  /* TRUE if the target is capable of providing absolute pressure information for improved delta-altitude performance */
    kal_uint8                             antInfoSupport;       /* specify the antenna information support type, mapping to GNSS_HA_ANT_SUPPORT_BIT_* */

    kal_uint8                             numPerGNSSElement;
    gnss_ha_capa_per_gnss_support_struct  perGNSSElement[GNSS_HA_MAX_HA_GNSS_CAPA_ELEMENT];
} gnss_ha_gnss_capa_support_struct;


typedef struct
{
    kal_bool                                 assistDataSuppListValid;
    gnss_ha_assist_data_support_list_struct  assistDataSuppList;          /* provide target's HA GNSS assist data capabilities */
 
    kal_bool                                 envObserveSupportListValid;
    gnss_ha_env_observe_support_list_struct  envObserveSupportList;       /* provide target's environment observation capabilities */
 
    kal_bool                                 haGNSSSupportValid;
    gnss_ha_gnss_capa_support_struct         haGNSSSupport;               /* provide target's HA GNSS capabilities */
} gnss_ha_capability_struct;

typedef struct
{
     LOCAL_PARA_HDR
    kal_uint8 padding[4];
     kal_int32 type; /* refer to agps_md_huge_data_msg_id */
} lbs_gnss_ha_assist_cnf_struct;

/* ---LPPe HA GNSS Interface---end--- */

typedef struct
{
    kal_uint16                    gnssMethod;        /* specify the estimated location is calculated by which GNSS systems, map to GNSS_ID_BITMAP_* */
    gnss_gad_pos_estimate_struct   locationEstimate;
    gnss_measured_ref_time        measuredRefTime;   /* should always present */
    kal_bool                     haLocValid;
    gnss_ha_pos_estimate_struct    haLocationEstimate;    
} gnss_pos_result_struct;

/* This structure for MSG_ID_LCSP_GNSS_STANDALONE_POS_IND*/
typedef struct
{
    LOCAL_PARA_HDR
    kal_uint16                           transactionID;

    gnss_loc_result_enum                 resultStatus;

    gnss_pos_result_type_enum            type;
    union
    {
        gnss_pos_result_struct           posResult;      /* only valid when resultStatus = GNSS_LOC_RESULT_NO_ERROR */
        gnss_request_assist_data_struct  assistDataReq;  /* used for ULCS/RRLP, selected when resultStatus = GNSS_LOC_RESULT_ASSIST_DATA_MISSING */
    } data;
} lcsp_gnss_standalone_pos_ind_struct;


/* This structure for MSG_ID_LCSP_GNSS_POS_CNF */
typedef struct
{
    LOCAL_PARA_HDR
    kal_uint16                           transactionID;

    gnss_loc_result_enum                 resultStatus;

    gnss_pos_result_type_enum            type;
    union
    {
        gnss_pos_result_struct           posResult;      /* only valid when resultStatus = GNSS_LOC_RESULT_NO_ERROR */
        gnss_request_assist_data_struct  assistDataReq;  /* used for ULCS/RRLP, selected when resultStatus = GNSS_LOC_RESULT_ASSIST_DATA_MISSING */
    } data;   
} lcsp_gnss_pos_cnf_struct;


/* This structure for MSG_ID_LCSP_GNSS_MEAS_CNF */
typedef struct
{
    LOCAL_PARA_HDR
    kal_uint16                           transactionID;

    gnss_loc_result_enum                 resultStatus;

    gnss_meas_result_type_enum           type;
    union
    {
        gnss_measured_result_struct      measuredResult;  /* only valid when resultStatus = GNSS_LOC_RESULT_NO_ERROR */
        gnss_request_assist_data_struct  assistDataReq;   /* used for ULCS/RRLP, selected when resultStatus = GNSS_LOC_RESULT_ASSIST_DATA_MISSING */
    } data;
} lcsp_gnss_meas_cnf_struct;


//#endif /* #if defined(__AGNSS_SUPPORT__) || defined(__AGPS_SUPPORT__) */

#endif /* _GNSS2LCSP_STRUCT_H */

