#ifndef LIBDC_UTIL_ARPA_DC_NAMESER_H
#define LIBDC_UTIL_ARPA_DC_NAMESER_H


/*
 * Copyright 2022-2022 D'Arcy Smith.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */


#include <arpa/nameser.h>
#include <dc_env/env.h>


#ifdef __cplusplus
extern "C" {
#endif


int dc_ns_msg_getflag(const struct dc_env *env, struct dc_error *err, ns_msg handle, int flag);
u_int dc_ns_get16(const struct dc_env *env, struct dc_error *err, const unsigned char *src);
u_long dc_ns_get32(const struct dc_env *env, struct dc_error *err, const unsigned char *src);
void dc_ns_put16(const struct dc_env *env, struct dc_error *err, unsigned int src, unsigned char *dst);
void dc_ns_put32(const struct dc_env *env, struct dc_error *err, unsigned long src, unsigned char *dst);
int dc_ns_initparse(const struct dc_env *env, struct dc_error *err, const unsigned char *msg, int msglen, ns_msg *handle);
int dc_ns_skiprr(const struct dc_env *env, struct dc_error *err, const unsigned char *ptr, const unsigned char *eom, ns_sect section, int count);
int dc_ns_parserr(const struct dc_env *env, struct dc_error *err, ns_msg *handle, ns_sect section, int rrnum, ns_rr *rr);
int dc_ns_name_ntol(const struct dc_env *env, struct dc_error *err, const unsigned char *src, unsigned char *dst, size_t dstsiz);
int dc_ns_name_ntop(const struct dc_env *env, struct dc_error *err, const unsigned char *src, char *dst, size_t dstsiz);
int dc_ns_name_pton(const struct dc_env *env, struct dc_error *err, const char *src, unsigned char *dst, size_t dstsiz);
int dc_ns_name_unpack(const struct dc_env *env, struct dc_error *err, const unsigned char *msg, const unsigned char *eom, const unsigned char *src, unsigned char *dst, size_t dstsiz);
int dc_ns_name_pack(const struct dc_env *env, struct dc_error *err, const unsigned char *src, unsigned char *dst, int dstsiz, const unsigned char **dnptrs, const unsigned char **lastdnptr);
int dc_ns_name_uncompress(const struct dc_env *env, struct dc_error *err, const unsigned char *msg, const unsigned char *eom, const unsigned char *src, char *dst, size_t dstsiz);
int dc_ns_name_compress(const struct dc_env *env, struct dc_error *err, const char *src, unsigned char *dst, size_t dstsiz, const unsigned char **dnptrs, const unsigned char **lastdnptr);
int dc_ns_name_skip(const struct dc_env *env, struct dc_error *err, const unsigned char **ptrptr, const unsigned char *eom);
void dc_ns_name_rollback(const struct dc_env *env, struct dc_error *err, const unsigned char *src, const unsigned char **dnptrs, const unsigned char **lastdnptr);


#ifdef __cplusplus
}
#endif


#endif // LIBDC_UTIL_ARPA_DC_NAMESER_H