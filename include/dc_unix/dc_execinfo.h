#ifndef LIBDC_UTIL_DC_EXECINFO_H
#define LIBDC_UTIL_DC_EXECINFO_H


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
#include <execinfo.h>
#include <stddef.h>


#ifdef __cplusplus
extern "C" {
#endif


size_t dc_backtrace(const struct dc_env *env, struct dc_error *err, void **addrlist, size_t len);
char **dc_backtrace_symbols(const struct dc_env *env, struct dc_error *err, void * const *addrlist, size_t len);
int dc_backtrace_symbols_fd(const struct dc_env *env, struct dc_error *err, void * const *addrlist, size_t len, int fd);


#ifdef __cplusplus
}
#endif


#endif // LIBDC_UTIL_DC_EXECINFO_H
