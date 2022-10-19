#ifndef LIBDC_UNIX_UNISTD_H
#define LIBDC_UNIX_UNISTD_H

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

#include <dc_posix/dc_posix_env.h>
#include <sys/types.h>


#ifdef __APPLE__
typedef unsigned long vm_offset_t;
#endif


/**
 *
 * @param env
 * @param err
 * @param buf
 * @param buflen
 * @return
 */
int dc_getentropy(const struct dc_posix_env *env, struct dc_error *err, void *buf, size_t buflen);

/**
 *
 * @param env
 * @param err
 * @param filename
 * @return
 */
int	dc_acct(const struct dc_posix_env *env, struct dc_error *err, const char *filename);

/**
 *
 * @param env
 */
void dc_endusershell(const struct dc_posix_env *env);

/**
 *
 * @param env
 * @param err
 * @param name
 * @param namelen
 * @return
 */
int	dc_getdomainname(const struct dc_posix_env *env, struct dc_error *err, char *name, int namelen);

/**
 *
 * @param env
 * @return
 */
char *dc_getusershell(const struct dc_posix_env *env);

/**
 *
 * @param env
 * @param err
 * @param path
 * @return
 */
int	dc_revoke(const struct dc_posix_env *env, struct dc_error *err, const char *path);

/**
 *
 * @param env
 * @param err
 * @param name
 * @param namelen
 * @return
 */
int	dc_setdomainname(const struct dc_posix_env *env, struct dc_error *err, const char *name, int namelen);

/**
 *
 * @param env
 * @param err
 * @param name
 * @param namelen
 * @return
 */
int	dc_sethostname(const struct dc_posix_env *env, struct dc_error *err, const char *name, int namelen);

/**
 *
 * @param env
 */
void dc_setusershell(const struct dc_posix_env *env);

/**
 *
 * @param env
 * @param err
 * @param name
 * @param basegid
 * @param groups
 * @param ngroups
 * @return
 */
int dc_getgrouplist(const struct dc_posix_env *env, struct dc_error *err, const char *name, gid_t basegid, gid_t *groups, int *ngroups);

/**
 *
 * @param env
 * @param set
 * @param mode
 * @return
 */
mode_t dc_getmode(const struct dc_posix_env *env, const void *set, mode_t mode);

/**
 *
 * @param env
 * @param err
 * @param s
 * @param euid
 * @param egid
 * @return
 */
int dc_getpeereid(const struct dc_posix_env *env, struct dc_error *err, int s, uid_t *euid, gid_t *egid);

/**
 *
 * @param env
 * @param err
 * @param template
 * @return
 */
char *dc_mkdtemp(const struct dc_posix_env *env, struct dc_error *err, char *template);

/**
 *
 * @param env
 * @param err
 * @param path
 * @param mode
 * @param dev
 * @return
 */
int dc_mknod(const struct dc_posix_env *env, struct dc_error *err, const char *path, mode_t mode, dev_t	dev);

/**
 *
 * @param env
 * @param err
 * @param template
 * @return
 */
int dc_mkstemp(const struct dc_posix_env *env, struct dc_error *err, char *template);

/**
 *
 * @param env
 * @param err
 * @param template
 * @param suffixlen
 * @param oflags
 * @return
 */
int dc_mkostemps(const struct dc_posix_env *env, struct dc_error *err, char *template, int suffixlen, int oflags);

/**
 *
 * @param env
 * @param err
 * @param template
 * @return
 */
char *dc_mktemp(const struct dc_posix_env *env, struct dc_error *err, char *template);

/**
 *
 * @param env
 * @param err
 * @param template
 * @param oflags
 * @return
 */
int dc_mkostemp(const struct dc_posix_env *env, struct dc_error *err, char *template, int oflags);

// int dc_profil(const struct dc_posix_env *env, struct dc_error *err, char *samples, size_t size, vm_offset_t offset, int scale);

/**
 *
 * @param env
 * @param err
 * @param howto
 * @return
 */
int dc_reboot(const struct dc_posix_env *env, struct dc_error *err, int howto);

/**
 *
 * @param env
 * @param err
 * @param ngroups
 * @param gidset
 * @return
 */
int dc_setgroups(const struct dc_posix_env *env, struct dc_error *err, int ngroups, const gid_t *gidset);

/**
 *
 * @param env
 * @param err
 * @param mode_str
 * @return
 */
void *dc_setmode(const struct dc_posix_env *env, struct dc_error *err, const char *mode_str);

/**
 *
 * @param env
 * @param err
 * @param ruid
 * @return
 */
int dc_setruid(const struct dc_posix_env *env, struct dc_error *err, uid_t ruid);

/**
 *
 * @param env
 * @param err
 * @param rgid
 * @return
 */
int dc_setrgid(const struct dc_posix_env *env, struct dc_error *err, gid_t rgid);

/**
 *
 * @param env
 * @param err
 * @param special
 * @return
 */
int dc_swapon(const struct dc_posix_env *env, struct dc_error *err, const char *special);

/**
 *
 * @param env
 * @param optionp
 * @param tokens
 * @param valuep
 * @return
 */
int dc_getsubopt(const struct dc_posix_env *env, char **optionp, char * const *tokens, char **valuep);

/**
 *
 * @param env
 * @param err
 * @param user
 * @param group
 * @return
 */
int dc_initgroups(const struct dc_posix_env *env, struct dc_error *err, const char *user, gid_t group);


#endif //LIBDC_UNIX_UNISTD_H
