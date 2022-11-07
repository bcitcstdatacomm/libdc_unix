#ifndef LIBDC_UTIL_DC_STDLIB_H
#define LIBDC_UTIL_DC_STDLIB_H


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
#include <inttypes.h>
#include <stddef.h>


#ifdef __cplusplus
extern "C" {
#endif


uint32_t dc_arc4random(const struct dc_env *env, struct dc_error *err);
void dc_arc4random_buf(const struct dc_env *env, struct dc_error *err, void *buf, size_t nbytes);
uint32_t dc_arc4random_uniform(const struct dc_env *env, struct dc_error *err, uint32_t upper_bound);


#ifdef __cplusplus
}
#endif


#endif // LIBDC_UTIL_DC_STDLIB_H


