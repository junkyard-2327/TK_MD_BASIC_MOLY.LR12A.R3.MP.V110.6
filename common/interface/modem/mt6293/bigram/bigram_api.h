#ifndef __BIGRAM_API_H__
#define __BIGRAM_API_H__

#include <stddef.h>

// Enable this compile option to report statistics, don't generate report by default
//#define BIGRAM_GEN_REPORT

#define member_size(type, member) sizeof(((type *)0)->member)
#define bigram_structure_container_sz(type)     member_size(type, container)
#define bigram_structure_payload_sz(type)       member_size(type, payload)
#define as_string(type) # type

#define _bigram_report_header() BIGRAM_PRINT( "\
Structure Name                  payload container   Waste     Waste(%%) (unit=byte)\n");

/*
0123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789
0         1         2         3         4         5         6         7         8
*/

#define _bigram_report(type) do {                                                       \
    kal_uint32 container_sz = bigram_structure_container_sz(type);                      \
    kal_uint32 payload_sz = bigram_structure_payload_sz(type);                          \
    kal_int32 waste = 0;                                                                \
    waste = container_sz - payload_sz;                                                  \
    BIGRAM_PRINT("%-32s%-10d%-10d%-10d%-10d\n",                                         \
        as_string(type), payload_sz, container_sz, waste, 100*waste/container_sz);      \
} while(0)


#if defined(BIGRAM_GEN_REPORT)
    #define bigram_report(type)     _bigram_report(type)
    #define bigram_report_header()  _bigram_report_header()
#else
    #define bigram_report(type)
    #define bigram_report_header()
#endif


#define bigram_structure_integrity_check(type)  do {                                    \
    kal_uint32 container_sz = bigram_structure_container_sz(type);                      \
    kal_uint32 payload_sz = bigram_structure_payload_sz(type);                          \
    if((container_sz & 0x3F) != 0) {                                                    \
        BIGRAM_PRINT("Structure %s container size %d should be multiple of 64\n",       \
            as_string(type), container_sz);                                             \
    }                                                                                   \
    if(container_sz < payload_sz) {                                                     \
        _bigram_report_header();                                                        \
        _bigram_report(type);                                                           \
        BIGRAM_PRINT("error, enter infinite loop\n");                                   \
        while(1);                                                                       \
    }                                                                                   \
    bigram_report(type);                                                                \
} while(0)


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
#endif

#endif // __BIGRAM_API_H__
