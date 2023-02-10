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


#include "dc_unix/dc_stdlib.h"
#include <stdlib.h>


uint32_t dc_arc4random(const struct dc_env *env)
{
    uint32_t ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = arc4random();

    return ret_val;
}

void dc_arc4random_buf(const struct dc_env *env, void *buf, size_t nbytes)
{
    DC_TRACE(env);
    errno = 0;
    arc4random_buf(buf, nbytes);

}

uint32_t dc_arc4random_uniform(const struct dc_env *env, uint32_t upper_bound)
{
    uint32_t ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = arc4random_uniform(upper_bound);

    return ret_val;

}
