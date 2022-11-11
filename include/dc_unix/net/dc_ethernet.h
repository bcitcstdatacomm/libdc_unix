#ifndef LIBDC_UTIL_NET_DC_ETHERNET_H
#define LIBDC_UTIL_NET_DC_ETHERNET_H


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
#include <net/ethernet.h>
#include <sys/types.h>
#include <sys/socket.h>


#ifdef __cplusplus
extern "C" {
#endif


struct ether_addr *dc_ether_aton(const struct dc_env *env, struct dc_error *err, const char *asc);
int	dc_ether_hostton(const struct dc_env *env, struct dc_error *err, const char *hostname, struct ether_addr *addr);
int	dc_ether_line(const struct dc_env *env, struct dc_error *err, const char *line, struct ether_addr *addr, char *hostname);
char *dc_ether_ntoa(const struct dc_env *env, struct dc_error *err, const struct ether_addr *addr);
int	dc_ether_ntohost(const struct dc_env *env, struct dc_error *err, char *hostname, const struct ether_addr *addr);


#ifdef __cplusplus
}
#endif


#endif // LIBDC_UTIL_NET_DC_ETHERNET_H
