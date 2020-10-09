/* crypto/evp/evp.h */
/* Copyright (C) 1995-1998 Eric Young (eay@cryptsoft.com)
 * All rights reserved.
 *
 * This package is an SSL implementation written
 * by Eric Young (eay@cryptsoft.com).
 * The implementation was written so as to conform with Netscapes SSL.
 * 
 * This library is free for commercial and non-commercial use as long as
 * the following conditions are aheared to.  The following conditions
 * apply to all code found in this distribution, be it the RC4, RSA,
 * lhash, DES, etc., code; not just the SSL code.  The SSL documentation
 * included with this distribution is covered by the same copyright terms
 * except that the holder is Tim Hudson (tjh@cryptsoft.com).
 * 
 * Copyright remains Eric Young's, and as such any Copyright notices in
 * the code are not to be removed.
 * If this package is used in a product, Eric Young should be given attribution
 * as the author of the parts of the library used.
 * This can be in the form of a textual message at program startup or
 * in documentation (online or textual) provided with the package.
 * 
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 * 3. All advertising materials mentioning features or use of this software
 *    must display the following acknowledgement:
 *    "This product includes cryptographic software written by
 *     Eric Young (eay@cryptsoft.com)"
 *    The word 'cryptographic' can be left out if the rouines from the library
 *    being used are not cryptographic related :-).
 * 4. If you include any Windows specific code (or a derivative thereof) from 
 *    the apps directory (application code) you must include an acknowledgement:
 *    "This product includes software written by Tim Hudson (tjh@cryptsoft.com)"
 * 
 * THIS SOFTWARE IS PROVIDED BY ERIC YOUNG ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE AUTHOR OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 * 
 * The licence and distribution terms for any publically available version or
 * derivative of this code cannot be changed.  i.e. this code cannot simply be
 * copied and put under another distribution licence
 * [including the GNU Public Licence.]
 */

#ifndef HEADER_ENVELOPE_H
#define HEADER_ENVELOPE_H

#include "ossl_typ.h"
#include "kal_public_defs.h"

#ifdef	__cplusplus
extern "C" {
#endif

#define EVP_MAX_MD_SIZE			64	/* longest known is SHA512 */


struct env_md_st
	{
	//int type; 
	//int pkey_type; 
	int md_size;
	//unsigned long flags;
	int (*init)(EVP_MD_CTX *ctx);
	int (*update)(EVP_MD_CTX *ctx,const void *data,size_t count);
	int (*final)(EVP_MD_CTX *ctx,unsigned char *md);
	//int (*copy)(EVP_MD_CTX *to,const EVP_MD_CTX *from);
	//int (*cleanup)(EVP_MD_CTX *ctx);

	/* FIXME: prototype these some day */
	//int (*sign)(int type, const unsigned char *m, unsigned int m_length,
	//	    unsigned char *sigret, unsigned int *siglen, void *key);
	//int (*verify)(int type, const unsigned char *m, unsigned int m_length,
	//	      const unsigned char *sigbuf, unsigned int siglen,
	//	      void *key);
	//int required_pkey_type[5]; /*EVP_PKEY_xxx */
	int block_size;
	int ctx_size; /* how big does the ctx->md_data need to be */
	/* control function */
	//int (*md_ctrl)(EVP_MD_CTX *ctx, int cmd, int p1, void *p2);
	} /* EVP_MD */;


struct env_md_ctx_st
	{
	const EVP_MD *digest;
	//ENGINE *engine; /* functional reference if 'digest' is ENGINE-provided */
	unsigned long flags;
	void *md_data;
	/* Public key context for sign/verify */
	//EVP_PKEY_CTX *pctx; 
	/* Update function: usually copied from EVP_MD */
	int (*update)(EVP_MD_CTX *ctx,const void *data,size_t count);
	} /* EVP_MD_CTX */;

/* values for EVP_MD_CTX flags */

#define EVP_MD_CTX_FLAG_ONESHOT		0x0001 /* digest update will be called
						* once only */
//#define EVP_MD_CTX_FLAG_CLEANED		0x0002 /* context has already been
//						* cleaned */
#define EVP_MD_CTX_FLAG_REUSE		0x0004 /* Don't free up ctx->md_data
						* in EVP_MD_CTX_cleanup */
						
//#define EVP_MD_CTX_FLAG_NO_INIT		0x0100 /* Don't initialize md_data */


int EVP_MD_size(const EVP_MD *md);
int EVP_MD_block_size(const EVP_MD *md);
EVP_MD_CTX *EVP_MD_CTX_new(void);
int EVP_MD_CTX_reset(EVP_MD_CTX *ctx);
void EVP_MD_CTX_free(EVP_MD_CTX *ctx);
void EVP_MD_CTX_init(EVP_MD_CTX *ctx);
int	EVP_MD_CTX_cleanup(EVP_MD_CTX *ctx);
void EVP_MD_CTX_set_flags(EVP_MD_CTX *ctx, int flags);
int EVP_MD_CTX_copy_ex(EVP_MD_CTX *out,const EVP_MD_CTX *in);  
int EVP_MD_CTX_test_flags(const EVP_MD_CTX *ctx,int flags);
int	EVP_DigestInit_ex(EVP_MD_CTX *ctx, const EVP_MD *type);//, ENGINE *impl);
int	EVP_DigestUpdate(EVP_MD_CTX *ctx,const void *d,
			 size_t cnt);
int	EVP_DigestFinal_ex(EVP_MD_CTX *ctx,unsigned char *md,unsigned int *s);
int	EVP_DigestFinal(EVP_MD_CTX *ctx,unsigned char *md,unsigned int *s);
int EVP_MD_CTX_copy(EVP_MD_CTX *out,const EVP_MD_CTX *in);  
int	EVP_DigestInit(EVP_MD_CTX *ctx, const EVP_MD *type);
int EVP_Digest(const void *data, kal_uint32 data_len,
               unsigned char *digest, unsigned int *digest_len, const EVP_MD *md);
const EVP_MD *EVP_sha256(void);

/* values for EVP_MD_CTX flags */


/* Error codes for the EVP functions. */

/* Function codes. */
#define EVP_F_EVP_DIGESTINIT_EX				 128
#define EVP_F_EVP_MD_CTX_COPY_EX			 110
#define EVP_F_EVP_MD_SIZE				 162

/* Reason codes. */
#define EVP_R_INPUT_NOT_INITIALIZED			 111
#define EVP_R_MESSAGE_DIGEST_IS_NULL			 159

	
#ifdef  __cplusplus
}
#endif
#endif
