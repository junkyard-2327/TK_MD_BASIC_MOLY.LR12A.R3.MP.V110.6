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
 *   dhl_trace.h
 *
 * Project:
 * --------
 *   MOLY
 *
 * Description:
 * ------------
 *   PS trace define macros and trace API
 *
 * Author:
 * -------
 * -------
 * -------
 * -------
 *
 * 04 28 2017 yu-hsiang.peng
 * [MOLY00243678] [VTF_SMT][MT6293]  Assert message output in META mode without ELT connect
 * [UMOLYA.TRUNK] Support Meta EE trace before MDLogger connect - phase1
 *
 * 04 27 2017 yancy.chien
 * [MOLY00242548] [DHL] Build warning removal
 * 	     Apply A style.
 *
 * 04 27 2017 yancy.chien
 * [MOLY00242548] [DHL] Build warning removal
 *     Apply A style.
 *
 * 01 06 2017 yu-hsiang.peng
 * [MOLY00222943] [MT6293] DHL Seamless Meta Support
 * [UMOLYA.TRUNK] Merge Seamless Meta mode from IT CBr  -DHL
 *
 * 10 27 2016 yancy.chien
 * [MOLY00181823] [DHL] UMOLY Migrate to UMOLYA - W16.44 Migration.
 *
 * 09 21 2016 yancy.chien
 * [MOLY00181823] [DHL] UMOLY Migrate to UMOLYA
 *
 * 05 26 2016 yancy.chien
 * [MOLY00181823] [DHL] UMOLY Migrate to UMOLYA
 * .
 *
 * 04 08 2016 eason.lai
 * [MOLY00172942] SMP modem warning migration
 *  DHL modem warning message porting
 *
 * 12 23 2015 hk.yang
 * [MOLY00152442] [LR11][DHL] L2 PDU logging
 * [UMOLY] L2 pdu logging API.
 *
 * 11 25 2015 eason.lai
 * [MOLY00134958] [MT6292] [DHL] logging service migration
 * refine the xl1sim option in DHL and restore the patch of CL#1796032.
 *
 * 11 23 2015 eason.lai
 * [MOLY00134958] [MT6292] [DHL] logging service migration
 * xl1sim introduce SMP DHL
 *
 * 09 11 2015 eason.lai
 * [MOLY00141576] [DHL] fixed LR11 build error
 * .
 *
 * 08 24 2015 eason.lai
 * [MOLY00138696] [DHL] replace CC IRQ with intra-event and polling to descresing support effort when l1core hang
 *  add MTB L1 access level
 *
 * 07 22 2015 eason.lai
 * [MOLY00130157] [TK6291][DHL] smart logging migration
 *  .
 *
 * 07 10 2015 eason.lai
 * merge code
 *
 * 04 09 2015 eason.lai
 * [MOLY00105513] [TK6291][DHL] introduce GPD/SPD wrapper
 *       GPD/SPD wrapper and L2copro log dma
 *
 * 11 14 2014 eason.lai
 * [MOLY00084440] [MT6291][DHL] Patch back UMOLY trunk from MT6291_DEV
 *  first time patch back
 *
 * 09 25 2014 ken.liu
 * [MOLY00079600] Modify the access level of EL1 trace for MBJ
 * Add internal trace access level for MBJ L1.
 *
 * 05 07 2014 eason.lai
 * [MOLY00064969] [DHL]expand tab to 4 spaces to have better typesettings
 * .
 *
 * 04 23 2014 eason.lai
 * [MOLY00063500] [DHL] set dhl_log_primitve6 as empty function when disable dhl module
 *  .
 *
 * 04 01 2014 mojo.lai
 * [MOLY00060735] Custom read write memory feature
 *
 * 01 14 2014 ken.liu
 * [MOLY00049431] [MT6290E1][DHL] Reserve MOD_NIL (0) to support trace decoding without database
 * enable new sys trace and dhl header format
 *
 * 01 14 2014 mojo.lai
 * [MOLY00053674] Add new log primitive API
 *  .
 *
 * 01 08 2014 ken.liu
 * [MOLY00052051] [DHL] add support for internal trace access level
 * update access level define names.
 *
 * 01 08 2014 ken.liu
 * [MOLY00052051] [DHL] add support for internal trace access level
 * add access level defines.
 *
 * 12 31 2013 ken.liu
 * [MOLY00052051] [DHL] add support for internal trace access level
 * enable dhl_internal_trace support.
 *
 * 12 06 2013 ken.liu
 * [MOLY00049267] [MT6290E1][DHL] kal_brief_trace_macro support for MIPS reduction
 * add flag to skip function call when trace is off.
 *
 * 10 18 2013 mojo.lai
 * [MOLY00041595] [MT6290E1][MMDS_DC] MMDC feature patch back to MOLY trunk
 *  .
 *
 * 10 18 2013 mojo.lai
 * [MOLY00041595] [MT6290E1][MMDS_DC] MMDC feature patch back to MOLY trunk
 *  .
 *
 * 08 20 2013 mojo.lai
 * [MOLY00034193] Show yellow screen while modem warning happens
 * .
 *
 * 07 30 2013 mojo.lai
 * [MOLY00031661] Support IP packet logging
 * .
 *
 * 06 11 2013 mojo.lai
 * [MOLY00025737] DHL multimode support peer trace
 * .
 *
 * 05 27 2013 ken.liu
 * [MOLY00023653] Driver test environment updated for no_ltelib
 * provide dummy dhl api for driver test load.
 *
 * 05 22 2013 mojo.lai
 * [MOLY00009210] DHL
 * L2 copro support
 *
 * 05 14 2013 mojo.lai
 * [MOLY00009210] DHL
 * Add virtual channel id for BTT
 *
 * 04 30 2013 ken.liu
 * [MOLY00012607] MOLY multimode build tst API migration
 * sync dhl_peer_trace and dhl_EM_logger() from stanleyHY's CBr.
 *
 * 04 09 2013 ken.liu
 * [MOLY00012607] MOLY multimode build tst API migration
 * add _kal_trace and _kal_brief_trace function wrapper for users via function pointer.
 *
 * 04 02 2013 ken.liu
 * [MOLY00012607] MOLY multimode build tst API migration
 * enable macro for kal_trace & kal_brief_trace api wrapper.
 *
 * 03 20 2013 ken.liu
 * [MOLY00011772] [MT7208][NW-UE SIM][TC 6.2.2.8] ASSERT at m11301.c, 2027
 * Back out changelist 107910
 *
 * 12 21 2012 ken.liu
 * [MOLY00005322] TATAKA merge to MOLY
 * add dhl_brief_trace api.
 *
 * 12 05 2012 ken.liu
 * [MOLY00005322] TATAKA merge to MOLY
 * add wrapper for kal_brief_trace_macro
 *
 * 11 13 2012 ken.liu
 * [MOLY00005322] TATAKA merge to MOLY
 * sync new ps trace definition macro.
 *
 * 11 07 2012 ken.liu
 * [MOLY00005322] TATAKA merge to MOLY
 * dhl module check-in.
 ****************************************************************************/

#ifndef _DHL_TRACE_H
#define _DHL_TRACE_H

#if !defined(__DHL_MODULE__)
#include "kal_trace.h"

#define dhl_trace(...)
#define dhl_internal_trace(...)
#define dhl_brief_trace(...)
#define dhl_peer_trace(...)
#define dhl_raw_trace(...)
#define dhl_print(...)
#define dhl_print_string(...)
#define dhl_print_system_trace(...)

#define dhl_print_struct(...)
#define dhl_debug_print(...)

#define dhl_trace_impl(...)
#define dhl_internal_trace_impl(...)
#define dhl_print_impl(...)
#define dhl_EM_logger(...)
#define dhl_log_primitive6(...)

#define dhl_print_meta_string(...)

#define DHL_MAC_LOG_L2_PDU(pointer, length) do {\
    } while(0)
#define DHL_RLC_LOG_L2_PDU(pointer, length) do {\
    } while(0)
#define DHL_PDCP_LOG_L2_PDU(pointer, length) do {\
    }while(0)

#define DHL_MAC_CHECK_L2_PDU() do {\
    }while(0)
#define DHL_RLC_CHECK_L2_PDU() do {\
    }while(0)
#define DHL_PDCP_CHECK_L2_PDU() do {\
    }while(0)

#else

#ifndef GEN_FOR_PC
#include <stdio.h>
#include <stdarg.h>
#else
typedef char *va_list;
#endif
#include "kal_general_types.h"
#include "kal_public_defs.h"

#if defined(__RVCT__)
#pragma diag_suppress 870
#endif /* __RVCT_ */

#ifdef __cplusplus
extern "C" {
#endif

#if defined(__DHL_MODULE__) && defined(__EM_MODE__) /* for ilm_struct type definition */
#ifndef GEN_FOR_PC
struct ilm_struct;
extern void tst_EM_logger(struct ilm_struct *ilm_ptr);
extern void dhl_EM_logger(struct ilm_struct *ilm_ptr);
#endif
#endif  //#if defined(__DHL_MODULE__) && defined(__EM_MODE__)

#define MAX_MSG_NBR_IN_MODULE       20

//Define Trace Macro for PS trace
#if defined(GEN_FOR_PC) && !defined(GEN_FOR_CPARSER)
#define BEGIN_TRACE_MAP(MOD)     START_MODULE_MSG MOD MAX_MSG_NBR_IN_MODULE
#define BEGIN_TRACE_MAP_WITH_RANGE(MOD, MIN_VAL, MAX_VAL) START_RANGE_MODULE_MSG MOD MAX_MSG_NBR_IN_MODULE MIN_VAL MAX_VAL
#define TRC_MSG(MSG,STR)         MSG STR
#define TRC_MSG_NEWLINE(MSG,STR,NUM)         MSG STR NUM
#define END_TRACE_MAP(MOD)       END_MODULE_MSG
#define END_TRACE_MAP_WITH_RANGE(MOD, MIN_VAL, MAX_VAL)   MOD MIN_VAL MAX_VAL END_RANGE_MODULE_MSG
#else //Define Trace Macro for PS trace
#define BEGIN_TRACE_MAP(MOD)     enum MOD##_MSG_ENUM{\
    MOD##_empty_string=MOD<<MAX_MSG_NBR_IN_MODULE,
#define BEGIN_TRACE_MAP_WITH_RANGE(MOD, MIN_VAL, MAX_VAL) enum MOD##_##MIN_VAL##_MSG_ENUM{\
    MOD##_##MIN_VAL##_empty_string = (MOD<<MAX_MSG_NBR_IN_MODULE) + MIN_VAL - 1,
#define TRC_MSG(MSG,STR)         MSG##__enum,
#define TRC_MSG_NEWLINE(MSG,STR,NUM)         MSG##__enum, MSG##_NEWLINE_EXPAND__enum = MSG##__enum+NUM,
#define  END_TRACE_MAP(MOD)      MOD##__end};
#define  END_TRACE_MAP_WITH_RANGE(MOD, MIN_VAL, MAX_VAL)  MOD##_##MIN_VAL##__end};
#endif //Define Trace Macro for PS trace


#if defined(__DHL_MODULE__) && !defined(__DHL_BRINUP_DUMMY_BUILD__)
#define __DHL_TRACE_ENABLED__
#endif  //#ifdef __DHL_MODULE__

#ifndef __DHL_TRACE_ENABLED__
#if defined(L1_SIM) && !defined (__UE_SIMULATOR__)
#define __DHL_TRACE_ENABLED__
#elif defined(KAL_ON_OSCAR) || defined(MCD_DLL_EXPORT)
#define __DHL_TRACE_EMPTY_FUNCTION__
#endif  //#if defined(KAL_ON_OSCAR) || defined(MCD_DLL_EXPORT)
#endif

typedef enum
{
    TRACE_FUNC,
    TRACE_STATE,
    TRACE_INFO,
    TRACE_WARNING,
    TRACE_ERROR,
    TRACE_GROUP_1,
    TRACE_GROUP_2,
    TRACE_GROUP_3,
    TRACE_GROUP_4,
    TRACE_GROUP_5,
    TRACE_GROUP_6,
    TRACE_GROUP_7,
    TRACE_GROUP_8,
    TRACE_GROUP_9,
    TRACE_GROUP_10,
    TRACE_PEER
} trace_class_enum;

#if defined (__DHL_TRACE_ENABLED__)

#define DHL_USER_FLAG_NONE          (0x0)
#define DHL_FLAG_EM                 (0x1)

/* User API for querying trace started to output or not, contact: Shengfu Tsai */
extern kal_bool dhl_is_trace_started();

/* trace */
extern void dhl_trace(trace_class_enum trc_class, kal_uint32 user_flag, kal_uint32 msg_index, const char *arg_type, ...);

#define DHL_ACCESS_LEVEL_1_ALL_USER             (0x01)
#define DHL_ACCESS_LEVEL_4_MTK_INTERNAL         (0x04)
#define DHL_ACCESS_LEVEL_5_MBJ_L1               (0x05)
#define DHL_ACCESS_LEVEL_5_MTB_L1               (0x05)
#define DHL_ACCESS_LEVEL_7_HQ_ONLY              (0x07)

extern void dhl_internal_trace(trace_class_enum trc_class, kal_uint32 user_flag, kal_uint8 access_level, kal_uint32 msg_index, const char *arg_type, ...);
extern void dhl_brief_trace(trace_class_enum trc_class, kal_uint32 user_flag, kal_uint32 msg_index, const char *arg_type, ...);
extern void dhl_raw_trace(trace_class_enum trc_class, kal_uint32 user_flag, kal_uint32 msg_index, const kal_char *fmt, kal_uint32 buf_len, const kal_uint8 *pData);
extern void dhl_print(trace_class_enum trc_class, kal_uint32 user_flag, module_type mod_id, const char *fmt, ...);
extern void dhl_print_string(trace_class_enum trc_class, kal_uint32 user_flag, module_type mod_id, const char *str);
extern void meta_print_string(trace_class_enum trc_class, kal_uint32 user_flag, module_type mod_id, const char *str);
#define dhl_print_system_trace(_c, _s) \
    dhl_print_string((_c), DHL_USER_FLAG_NONE, 0, (_s));
extern void dhl_peer_trace(kal_uint32 global_peer_msg_id, kal_uint32 raw_data_len, kal_uint8 *raw_data, kal_uint32 trace_index, const char *arg_type, ...);


//for seamless meta 
extern void meta_print_system_trace(trace_class_enum trc_class, kal_uint32 user_flag, module_type mod_id, const kal_char *str);
#define dhl_print_meta_string(_c, _s)  meta_print_system_trace((_c), DHL_USER_FLAG_NONE, 0, (_s))


// Only available on MoDIS
#ifdef UNIT_TEST
#include "kal_public_defs.h"
extern void _dhl_print_struct(module_type src, msg_type msg_id, int buf_len, void *buf);
#define dhl_print_struct(_s,_m,_l,_b) _dhl_print_struct(_s,_m,_l,_b)
#define dhl_debug_print(_c,_m,_f, ...) dhl_print(_c, DHL_USER_FLAG_NONE, _m, _f, __VA_ARGS__);
#else
#define dhl_print_struct(_s,_m,_l,_b)
#define dhl_debug_print(_f, ...)
#endif

#define dhl_trace_impl(_t, _u, _msg, _mod, _argv, _arg_info) \
    dhl_internal_trace_impl(_t, _u, DHL_ACCESS_LEVEL_1_ALL_USER, _msg, _mod, _argv, _arg_info)

extern void dhl_internal_trace_impl(trace_class_enum trc_class, kal_uint32 user_flag, kal_uint8 access_level, kal_uint32 msg_index, kal_uint32 module_id, const char *arg_type, va_list argument_info);
extern void dhl_print_impl(trace_class_enum trc_class, kal_uint32 user_flag, module_type mod_id, const char *fmt, va_list argument_info);

typedef void (*TST_String_Inject_CB)(kal_uint32 index, kal_uint8 *pData);
// External buffer logging via ILM
typedef enum
{
    DHL_EXTERNAL_BUFFER_TYPE_BEGIN = 0,
    DHL_EXTERNAL_BUFFER_L2COPRO_IP_HEADER_LOG,
    DHL_EXTERNAL_BUFFER_TYPE_MAX
} dhl_external_buffer_type;

/*
 * Parameter note:
 * sent_end
 *    the end of buffer address sent
 *    may not align with the buffer end sent
 *    (fragment should be handled by user)
 */
typedef void (*buffer_tx_done_cb)(dhl_external_buffer_type type, kal_uint8 *sent_end, kal_int32 sent_len);
kal_bool register_buffer_tx_done_callback(dhl_external_buffer_type type, buffer_tx_done_cb cb);
/*
 * Parameter usage note:
 * msg_id
 *    MSG_ID_DHL_L2COPRO_DL_IP_HEADER_LOG
 *    MSG_ID_DHL_L2COPRO_UL_IP_HEADER_LOG
 * local_para
 *    caller-free
 * local_para_len
 *    <= 64 bytes
 */
typedef struct
{
    kal_uint8 *buf_address;
    kal_uint32 buf_len;
} S_DHL_SEND_BODY;
kal_bool dhl_send_ilm_log(dhl_external_buffer_type type, msg_type msg_id, kal_uint8 *local_para, kal_int32 local_para_len, S_DHL_SEND_BODY *p_send_body_array, kal_uint32 body_number);


#ifdef TST_TRACE_COMPAT
#define kal_print_string_trace kal_wap_trace  //alias kal_print_string_trace as kal_wap_trace
#define kal_critical_trace kal_trace
#define kal_critical_brief_trace kal_brief_trace
#define kal_critical_assert_trace kal_assert_trace
extern void kal_critical_trace(trace_class_enum, kal_uint32, const kal_char *, ...);
extern void kal_critical_brief_trace(trace_class_enum, kal_uint32, const kal_char *, ...);
extern void kal_critical_assert_trace(trace_class_enum, kal_uint32, const kal_char *, ...);

#if !defined(_MSC_VER)
#define kal_trace(trc_class, msg_index, ...) \
    dhl_trace(trc_class, DHL_USER_FLAG_NONE, msg_index, ##__VA_ARGS__)
#define kal_brief_trace(trc_class, msg_index, ...) \
    dhl_brief_trace(trc_class, DHL_USER_FLAG_NONE, msg_index, ##__VA_ARGS__)
#else
extern void kal_trace(trace_class_enum, kal_uint32, const kal_char *, ...);
extern void kal_brief_trace(trace_class_enum, kal_uint32, const kal_char *, ...);
#endif
extern void _kal_trace(trace_class_enum, kal_uint32, const kal_char *, ...);
extern void _kal_brief_trace(trace_class_enum, kal_uint32, const kal_char *, ...);
extern void kal_trace_for_3rd_party(trace_class_enum, kal_uint32, const kal_char *, va_list);
extern void kal_lib_trace(trace_class_enum, kal_uint32, const kal_char *, ...);
extern void kal_assert_trace(trace_class_enum, kal_uint32, const kal_char *, ...);
extern void kal_wap_trace(module_type mod_id, trace_class_enum trc_class, const char *fmt, ...);
extern void kal_buffer_trace(trace_class_enum trc_class, kal_uint32 msg_index, const kal_char *fmt, kal_uint32 buf_len, const kal_uint8 *pData);
extern void kal_dev_trace(trace_class_enum trc_class, kal_uint32 msg_index, const char *arg_type, ...);
extern void kal_bootup_trace(trace_class_enum, kal_uint32, const kal_char *, ...);
extern void kal_prompt_trace(module_type, const kal_char *fmt, ...);

#if !defined(_MSC_VER)
//Target build
extern kal_bool tst_is_PsTrc_open_and_pstrace_flag;  //For optimization, the AND flag of tst_is_PsTrc_open and tst_pstrace_flag
extern void dhl_brief_trace_opt_helper(trace_class_enum trc_class, kal_uint32 user_flag, kal_uint32 msg_index, const char *arg_type, ...);

#define kal_brief_trace_macro(trc_class, msg_index, ...) do { \
    if (tst_is_PsTrc_open_and_pstrace_flag) {\
        dhl_brief_trace_opt_helper(trc_class, DHL_USER_FLAG_NONE, msg_index, ##__VA_ARGS__); \
    } \
    } while(0)
#else
//PC build (MoDIS or MCDDLL)
extern void kal_brief_trace_macro(trace_class_enum, kal_uint32, const kal_char *, ...);
#endif

#endif
#else //__DHL_TRACE_ENABLED__
#if defined(__DHL_TRACE_EMPTY_FUNCTION__)
/*
 * For non-target platform (PC simulator or MNT),
 * we define trace-related functions as inline function to avoid compile error
 * in VC++.
 */

static __inline void dhl_trace(trace_class_enum trc_class, kal_uint32 user_flag, kal_uint32 msg_index, const char *arg_type, ...)
{
    return;
}

static __inline void dhl_internal_trace(trace_class_enum trc_class, kal_uint32 user_flag, kal_uint8 access_level, kal_uint32 msg_index, const char *arg_type, ...)
{
    return;
}

static __inline void dhl_brief_trace(trace_class_enum trc_class, kal_uint32 user_flag, kal_uint32 msg_index, const char *arg_type, ...)
{
    return;
}

static __inline void dhl_raw_trace(trace_class_enum trc_class, kal_uint32 user_flag, kal_uint32 msg_index, const kal_char *fmt, kal_uint32 buf_len, const kal_uint8 *pData)
{
    return;
}

static __inline void dhl_print(trace_class_enum trc_class, kal_uint32 user_flag, module_type mod_id, const char *fmt, ...)
{
    return;
}

#define dhl_print_system_trace(_c, _s)
#define dhl_print_struct(_s,_m,_l,_b)
#define dhl_debug_print(_f, ...)

static __inline void dhl_peer_trace(kal_uint32 global_peer_msg_id, kal_uint32 raw_data_len, kal_uint8 *raw_data, kal_uint32 trace_index, const char *arg_type, ...)
{
    return;
}

static __inline void dhl_trace_impl(trace_class_enum trc_class, kal_uint32 user_flag, kal_uint32 msg_index, const char *arg_type, va_list argument_info)
{
    return;
}

static __inline void dhl_print_impl(trace_class_enum trc_class, kal_uint32 user_flag, module_type mod_id, const char *fmt, va_list argument_info)
{
    return;
}

static __inline void kal_critical_trace(trace_class_enum trc_class, kal_uint32 msg_index, const kal_char *arg_type, ...)
{
    return ;
}

static __inline void kal_critical_brief_trace(trace_class_enum trc_class, kal_uint32 msg_index, const kal_char *arg_type, ...)
{
    return ;
}
static __inline void kal_critical_assert_trace(trace_class_enum trc_class, kal_uint32 msg_index, const kal_char *arg_type, ...)
{
    return ;
}


static __inline void kal_trace(trace_class_enum trc_class, kal_uint32 msg_index, const kal_char *arg_type, ...)
{
    return ;
}

static __inline void kal_brief_trace(trace_class_enum trc_class, kal_uint32 msg_index, const kal_char *arg_type, ...)
{
    return ;
}

static __inline void kal_brief_trace_macro(trace_class_enum trc_class, kal_uint32 msg_index, const kal_char *arg_type, ...)
{
    return ;
}

static __inline void kal_trace_for_3rd_party(trace_class_enum trc_class, kal_uint32 msg_index, const kal_char *arg_type, va_list argument_info)
{
    return ;
}

static __inline void kal_lib_trace(trace_class_enum trc_class, kal_uint32 msg_index, const kal_char *arg_type, ...)
{
    return ;
}
static __inline void kal_assert_trace(trace_class_enum trc_class, kal_uint32 msg_index, const kal_char *arg_type, ...)
{
    return ;
}
static __inline void kal_wap_trace(module_type mod_id, trace_class_enum trc_class, const char *fmt, ...)
{
    return ;
}
static __inline void kal_print_string_trace(module_type mod_id, trace_class_enum trc_class, const char *fmt, ...)
{
    return ;
}

static __inline void kal_buffer_trace(trace_class_enum trc_class, kal_uint32 msg_index, const kal_char *fmt, kal_uint32 buf_len, const kal_uint8 *pData)
{
    return;
}

static __inline void kal_dev_trace(trace_class_enum trc_class, kal_uint32 msg_index, const char *arg_type, ...)
{
    return;
}

static __inline void kal_bootup_trace(trace_class_enum trc_class, kal_uint32 msg_index, const kal_char *arg_type, ...)
{
    return ;
}

#if !defined(__LTE_REMOVE_TEMPERAL__)
static __inline void kal_prompt_trace(module_type mod_id, const kal_char *fmt, ...)
{
    return;
}
#endif /* end of !__LTE_REMOVE_TEMPERAL__ */
#else // __DHL_TRACE_EMPTY_FUNCTION__
//Define empty functions for Target SW
#define dhl_trace(...)
#define dhl_internal_trace(...)
#define dhl_brief_trace(...)
#define dhl_raw_trace(...)
#define dhl_print(...)
#define dhl_print_string(...)
#define dhl_print_system_trace(...)

#define dhl_print_struct(...)
#define dhl_debug_print(...)
#define dhl_peer_trace(...)

#define dhl_trace_impl(...)
#define dhl_print_impl(...)
#define dhl_internal_trace_impl(...)

#define kal_trace(...)
#define kal_brief_trace(...)
#define _kal_trace(...)
#define _kal_brief_trace(...)
#define kal_brief_trace_macro(...)
#define kal_trace_for_3rd_party(...)
#define kal_lib_trace(...)
#define kal_assert_trace(...)
#define kal_wap_trace(...)
#define kal_print_string_trace(...)
#define kal_buffer_trace(...)
#define kal_dev_trace(...)
#define kal_bootup_trace(...)
#define kal_prompt_trace(...)
#define kal_critical_trace(...)
#define kal_critical_brief_trace(...)
#define kal_critical_assert_trace(...)

#define dhl_EM_logger(...)
#define dhl_brief_trace_opt_helper(...)
#endif
#endif

#define kal_sys_trace        tst_sys_trace
#define kal_sys_init_trace   tst_sys_init_trace
#define kal_sys_fatal_trace  tst_sysfatal_trace

#if defined(__DHL_MODULE__)
extern void tst_log_primitive(ilm_struct *ilm_ptr);
extern void tst_sys_init_trace(const kal_char *info);
extern void tst_sys_trace(kal_char *info);
extern void tst_sysfatal_trace(kal_char *info);
extern kal_int32 tst_trace_check_ps_filter_off(trace_class_enum trc_class, kal_uint32 *module_id, kal_uint32 supportOption);

#define kal_bootup_print tst_sys_init_trace
#else
#ifdef __DHL_TRACE_EMPTY_FUNCTION__
#if !defined(__LTE_REMOVE_TEMPERAL__)
static __inline void tst_sys_init_trace(const kal_char *info)
{
    return ;
}
static __inline void tst_sys_trace(kal_char *info)
{
    return ;
}
static __inline void tst_sysfatal_trace(kal_char *info)
{
    return ;
}
static __inline kal_int32 tst_trace_check_ps_filter_off(trace_class_enum trc_class, kal_uint32 *module_id, kal_uint32 supportOption)
{
    return ;
}
#endif /* end of !__LTE_REMOVE_TEMPERAL__ */
#else
#define tst_sys_init_trace(...)
#define tst_sys_trace(...)
#define tst_sysfatal_trace(...)
#define tst_trace_check_ps_filter_off(...)
#endif
#endif  //#ifdef __DHL_MODULE__

typedef void (*TST_VC_CallBack)(const kal_uint8 *pData, kal_uint32 nLen);
typedef void (*TST_String_Inject_CB)(kal_uint32 index, kal_uint8 *pData);

/*
* tst_virtual_channel_id:
* regiester new virtual channel here and remake tst
*/
typedef enum
{
    TVCI_GPS_LOGGING,
    TVCI_DNT_L2COPRO_LOGGING,
    TVCI_CATCHER_POLLING,
    TVCI_GDB_COMM,
    TVCI_AST_LOGGING,
    TVCI_MINI_LOG,
    TVCI_VM_LOGGING,
    TVCI_BTT,
    TVCI_LAST_ID
}
tst_virtual_channel_id;

#define MAX_VC_RESPONSE_LEN (1023)

kal_bool tst_vc_register_channel(tst_virtual_channel_id channel_id, TST_VC_CallBack fnCmd);
kal_bool tst_vc_response(tst_virtual_channel_id channel_id, const kal_uint8 *pData, kal_uint16 len);

#define TVCI_CREATE_FILE 0x24540001
#define TVCI_CLOSE_FILE 0x24540002

void tst_log_with_offset_single_gpd(sap_type desc_SAP, sap_type raw_data_sap, kal_uint32 msg_index, const char *arg_type, kal_uint32 offset, kal_uint32 *dl_gpd);

kal_bool dhl_get_assert_bypass_buf(kal_char **buf, kal_uint32 *buf_size, kal_uint32 *buf_index);
kal_bool dhl_ack_assert_bypass_buf(kal_char *buf, kal_uint32 message_size, kal_uint32 buf_index);

void dhl_log_primitive6(module_type src_mod_id, module_type dest_mod_id, sap_type sap_id, msg_type msg_id, local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr);

typedef enum
{
    DHL_CUSTOM_MEM_PMIC,
    DHL_CUSTOM_MEM_MAX
} DHL_CUSTOM_MEM_TYPE;

typedef void (*DHL_CUSTOM_READ_MEM_CALLBACK)(void *read_addr, kal_uint32 len, kal_uint32 option, void **read_buffer_addr, kal_uint32 *read_buffer_len);
typedef void (*DHL_CUSTOM_WRITE_MEM_CALLBACK)(void *write_addr, kal_uint32 len, kal_uint32 option, void *write_buffer_addr);

kal_bool dhl_register_custom_mem_read(DHL_CUSTOM_MEM_TYPE mem_type, DHL_CUSTOM_READ_MEM_CALLBACK read_cb);
kal_bool dhl_register_custom_mem_write(DHL_CUSTOM_MEM_TYPE mem_type, DHL_CUSTOM_WRITE_MEM_CALLBACK write_cb);

#ifdef __cplusplus
}
#endif


typedef enum
{
    /* 0~7 reserve for L2 PDU */
    /* should not over DHL_L2_PDU_TYPE_NUM */
    DHL_L2_PDU_MAC_TYPE = 1,
    DHL_L2_PDU_RLC_TYPE = 2,
    DHL_L2_PDU_PDCP_TYPE = 3,
    DHL_L2_PDU_RLC_PDU_TYPE = 4,
} dhl_log_pdu_type;

void dhl_log_pdu(dhl_log_pdu_type type, kal_uint8 *data, kal_uint32 length);
void dhl_flush_pdu(dhl_log_pdu_type type);
kal_bool dhl_check_pdu_filter(dhl_log_pdu_type type);

#define DHL_MAC_CHECK_L2_PDU() dhl_check_pdu_filter(DHL_L2_PDU_MAC_TYPE)
#define DHL_RLC_CHECK_L2_PDU() (dhl_check_pdu_filter(DHL_L2_PDU_RLC_TYPE) || dhl_check_pdu_filter(DHL_L2_PDU_RLC_PDU_TYPE))
#define DHL_PDCP_CHECK_L2_PDU() dhl_check_pdu_filter(DHL_L2_PDU_PDCP_TYPE)

#define DHL_MAC_LOG_L2_PDU(pointer, length) do {          \
        if(DHL_MAC_CHECK_L2_PDU()) {       \
            dhl_log_pdu(DHL_L2_PDU_MAC_TYPE, pointer, length);\
        }                                                     \
    } while(0)
#define DHL_RLC_LOG_L2_PDU(pointer, length) do {          \
        if(DHL_RLC_CHECK_L2_PDU()) {       \
            dhl_log_pdu(DHL_L2_PDU_RLC_TYPE, pointer, length);\
        }                                                     \
    } while(0)
#define DHL_PDCP_LOG_L2_PDU(pointer, length) do {          \
        if(DHL_PDCP_CHECK_L2_PDU()) {       \
            dhl_log_pdu(DHL_L2_PDU_PDCP_TYPE, pointer, length);\
        }                                                      \
    }while(0)


//for UT only
void dhl_mon_set_l2_pdu_filter(dhl_log_pdu_type type, kal_bool enable);


#endif
#endif /* _DHL_TRACE_H */

