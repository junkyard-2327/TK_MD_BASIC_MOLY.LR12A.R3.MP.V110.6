/*
 * AES-based functions
 *
 * - AES Key Wrap Algorithm (128-bit KEK) (RFC3394)
 * - One-Key CBC MAC (OMAC1) hash with AES-128
 * - AES-128 CTR mode encryption
 * - AES-128 EAX mode encryption/decryption
 * - AES-128 CBC
 *
 * Copyright (c) 2003-2007, Jouni Malinen <j@w1.fi>
 * Copyright (C) 2015 MediaTek Inc.
 *
 *
 * This program is free software; this software is distributed under 
 * the terms of 3-clause BSD license.
 *
 * Redistribution and use in source and binary forms, with or without 
 * modification, are permitted provided that the following conditions are met:
 * 1. Redistributions of source code must retain the above copyright notice, 
 * this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 * this list of conditions and the following disclaimer in the documentation 
 * and/or other materials provided with the distribution.
 * 3. Neither the name of the copyright holder nor the names of its 
 * contributors may be used to endorse or promote products derived from 
 * this software without specific prior written permission.
 * 
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" 
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE 
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE 
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE 
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR 
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF 
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS 
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN 
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) 
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE 
 * POSSIBILITY OF SUCH DAMAGE.
 *
 */



kal_int32  aes_wrap(const kal_uint8 *kek, int n, const kal_uint8 *plain, kal_uint8 *cipher);
kal_int32  aes_unwrap(const kal_uint8 *kek, int n, const kal_uint8 *cipher, kal_uint8 *plain);
kal_int32  omac1_aes_128_vector(const kal_uint8 *key, size_t num_elem,
				      const kal_uint8 *addr[], const size_t *len,
				      kal_uint8 *mac);
kal_int32  omac1_aes_128(const kal_uint8 *key, const kal_uint8 *data, size_t data_len,
			       kal_uint8 *mac);
kal_int32  aes_128_encrypt_block(const kal_uint8 *key, const kal_uint8 *in, kal_uint8 *out);
kal_int32  aes_128_ctr_encrypt(const kal_uint8 *key, const kal_uint8 *nonce,
				     kal_uint8 *data, size_t data_len);
kal_int32  aes_128_eax_encrypt(const kal_uint8 *key,
				     const kal_uint8 *nonce, size_t nonce_len,
				     const kal_uint8 *hdr, size_t hdr_len,
				     kal_uint8 *data, size_t data_len, kal_uint8 *tag);
kal_int32  aes_128_eax_decrypt(const kal_uint8 *key,
				     const kal_uint8 *nonce, size_t nonce_len,
				     const kal_uint8 *hdr, size_t hdr_len,
				     kal_uint8 *data, size_t data_len, const kal_uint8 *tag);
kal_int32  aes_128_cbc_encrypt(const kal_uint8 *key, const kal_uint8 *iv, kal_uint8 *data,
				     size_t data_len);
kal_int32  aes_128_cbc_decrypt(const kal_uint8 *key, const kal_uint8 *iv, kal_uint8 *data,
				     size_t data_len);
