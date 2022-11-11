#ifndef LIBDC_UTIL_DC_RESOLV_H
#define LIBDC_UTIL_DC_RESOLV_H


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


#include <dc_env/env.h>
#include <netinet/in.h>
#include <sys/socket.h>
#include <resolv.h>


#ifdef __cplusplus
extern "C" {
#endif


int dc_res_hnok(const struct dc_env *env, struct dc_error *err, const char *dn);
int dc_res_ownok(const struct dc_env *env, struct dc_error *err, const char *dn);
int dc_res_mailok(const struct dc_env *env, struct dc_error *err, const char *dn);
int dc_res_dnok(const struct dc_env *env, struct dc_error *err, const char *dn);
int dc_b64_ntop(const struct dc_env *env, struct dc_error *err, unsigned char *src, size_t srclength, char *target, size_t target_size);
int dc_b64_pton(const struct dc_env *env, struct dc_error *err, const char *src, unsigned char *dst, size_t dstsiz);
int dc_dn_skipname(const struct dc_env *env, struct dc_error *err, const unsigned char *comp_dn, const unsigned char *eom);
int dc_dn_comp(const struct dc_env *env, struct dc_error *err, const char *exp_dn, unsigned char *comp_dn, int length, unsigned char **dnptrs, unsigned char **lastdnptr);
int dc_dn_expand(const struct dc_env *env, struct dc_error *err, const unsigned char *msg, const unsigned char *eomorig, const unsigned char *comp_dn, char *exp_dn, int length);
int dc_res_ninit(const struct dc_env *env, struct dc_error *err, res_state statep);
int dc_res_nquery(const struct dc_env *env, struct dc_error *err, res_state statep, const char *dname, int class, int type, unsigned char *answer, int anslen);
int dc_res_nsearch(const struct dc_env *env, struct dc_error *err, res_state statep, const char *dname, int class, int type, unsigned char *answer, int anslen);
int dc_res_nquerydomain(const struct dc_env *env, struct dc_error *err, res_state statep, const char *name, const char *domain, int class, int type, unsigned char *answer, int anslen);
int dc_res_nmkquery(const struct dc_env *env, struct dc_error *err, res_state statep, int op, const char *dname, int class, int type, const unsigned char *data, int datalen, const unsigned char *newrr, unsigned char *buf, int buflen);
int dc_res_nsend(const struct dc_env *env, struct dc_error *err, res_state statep, const unsigned char *msg, int msglen, unsigned char *answer, int anslen);
void dc_res_nclose(const struct dc_env *env, struct dc_error *err, res_state statep);


#ifdef __cplusplus
}
#endif


#endif // LIBDC_UTIL_DC_RESOLV_H

