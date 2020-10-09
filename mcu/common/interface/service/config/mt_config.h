#ifndef MT_CONFIG_H
#define MT_CONFIG_H

/***************************************
Template:

XXXX stand for MT Group Name e.g., "EL1D"

*MT Parent:
typedef enum {
    MT_XXXX_IRQ_0 = decimal1,
    MT_XXXX_IRQ_1 = decimal2
} MT_XXXX_IRQ_TYPE ;


*MT Child Func:
typedef enum {
    MT_XXXX_yourFuncNameA,
    MT_XXXX_yourFuncNameB = 9,
    MT_XXXX_yourFuncNameC
} MT_XXXX_FUNC_TYPE ;

***************************************/


typedef enum {
    MT_EL1CD_IRQ_0 = 101,
    MT_EL1CD_IRQ_1 = 102,
    MT_EL1CD_IRQ_2 = 103, 
    MT_EL1CD_IRQ_3 = 104 
} MT_EL1CD_IRQ_TYPE ;


#include "el1cd_mtpublic.h"



#endif
