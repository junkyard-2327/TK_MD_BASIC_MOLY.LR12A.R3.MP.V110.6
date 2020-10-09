/*
 * UMTS AKA - Milenage algorithm (3GPP TS 35.205, .206, .207, .208)
 * Copyright (c) 2006-2007 <j@w1.fi>
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

void milenage_generate(const kal_uint8 *opc, const kal_uint8 *amf, const kal_uint8 *k, const kal_uint8 *sqn, const kal_uint8 *_rand, kal_uint8 *autn, kal_uint8 *ik, kal_uint8 *ck, kal_uint8 *res, kal_uint32 *res_len);

kal_int32 milenage_auts(const kal_uint8 *opc, const kal_uint8 *k, const kal_uint8 *_rand, const kal_uint8 *auts, kal_uint8 *sqn);

kal_int32 gsm_milenage(const kal_uint8 *opc, const kal_uint8 *k, const kal_uint8 *_rand, kal_uint8 *sres, kal_uint8 *kc);

kal_int32 milenage_check(const kal_uint8 *opc, const kal_uint8 *k, const kal_uint8 *sqn, const kal_uint8 *_rand, const kal_uint8 *autn, kal_uint8 *ik, kal_uint8 *ck, kal_uint8 *res, kal_uint32 *res_len, kal_uint8 *auts);

kal_int32 milenage_f1(const kal_uint8 *opc, const kal_uint8 *k, const kal_uint8 *_rand, const kal_uint8 *sqn, const kal_uint8 *amf, kal_uint8 *mac_a, kal_uint8 *mac_s);

kal_int32 milenage_f2345(const kal_uint8 *opc, const kal_uint8 *k, const kal_uint8 *_rand, kal_uint8 *res, kal_uint8 *ck, kal_uint8 *ik, kal_uint8 *ak, kal_uint8 *akstar);

kal_int32 milenage_opc_gen(kal_uint8 *opc, const kal_uint8 *k, const kal_uint8 *op);
