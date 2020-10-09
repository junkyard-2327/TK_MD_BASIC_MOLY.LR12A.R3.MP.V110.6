#ifndef __OSSL_PORTINGFUNC_H__
#define __OSSL_PORTINGFUNC_H__

#include "kal_general_types.h"
#include "kal_public_api.h"


void *CHE_malloc(kal_uint32 size);

void *CHE_zalloc(size_t num);

void CHE_free(void * ptr);

void CHE_cleanse(void *ptr, size_t len);

void CHE_clear_free(void *str, size_t num);

int CHE_rand_bytes(unsigned char *buf, int num);


#endif

