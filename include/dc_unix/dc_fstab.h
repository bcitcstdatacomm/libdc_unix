#ifndef LIBDC_UTIL_DC_FSTAB_H
#define LIBDC_UTIL_DC_FSTAB_H


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
#include <fstab.h>


#ifdef __cplusplus
extern "C" {
#endif


struct fstab *dc_getfsent(const struct dc_env *env, struct dc_error *err);
struct fstab *dc_getfsspec(const struct dc_env *env, struct dc_error *err, const char *spec);
struct fstab *dc_getfsfile(const struct dc_env *env, struct dc_error *err, const char *file);
int dc_setfsent(const struct dc_env *env, struct dc_error *err);
void dc_endfsent(const struct dc_env *env, struct dc_error *err);


#ifdef __cplusplus
}
#endif


#endif // LIBDC_UTIL_DC_FSTAB_H
