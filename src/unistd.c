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

#include "dc_unistd.h"
#ifdef __APPLE__
    #include <sys/random.h>
#endif
#include <unistd.h>


int dc_getentropy(const struct dc_posix_env *env, struct dc_error *err, void *buf, size_t buflen)
{
    int ret_val;

    DC_TRACE(env);
    errno   = 0;
    ret_val = getentropy(buf, buflen);

    if(ret_val == -1)
    {
        DC_ERROR_RAISE_ERRNO(err, errno);
    }

    return ret_val;
}


int	dc_acct(const struct dc_posix_env *env, struct dc_error *err, const char *filename)
{
    int ret_val;

    DC_TRACE(env);
    errno   = 0;
    ret_val = acct(filename);

    if(ret_val == -1)
    {
        DC_ERROR_RAISE_ERRNO(err, errno);
    }

    return ret_val;
}


void dc_endusershell(const struct dc_posix_env *env)
{
    DC_TRACE(env);
    errno   = 0;
    endusershell();
}


int	dc_getdomainname(const struct dc_posix_env *env, struct dc_error *err, char *name, int namelen)
{
    int ret_val;

    DC_TRACE(env);
    errno   = 0;
    ret_val = getdomainname(name, namelen);

    if(ret_val == -1)
    {
        DC_ERROR_RAISE_ERRNO(err, errno);
    }

    return ret_val;
}


char *dc_getusershell(const struct dc_posix_env *env)
{
    char *ret_val;

    DC_TRACE(env);
    errno   = 0;
    ret_val = getusershell();

    return ret_val;
}


int	dc_revoke(const struct dc_posix_env *env, struct dc_error *err, const char *path)
{
    int ret_val;

    DC_TRACE(env);
    errno   = 0;
    ret_val = revoke(path);

    if(ret_val == -1)
    {
        DC_ERROR_RAISE_ERRNO(err, errno);
    }

    return ret_val;
}


int dc_setdomainname(const struct dc_posix_env *env, struct dc_error *err, const char *name, int namelen)
{
    int ret_val;

    DC_TRACE(env);
    errno   = 0;
    ret_val = setdomainname(name, namelen);

    if(ret_val == -1)
    {
        DC_ERROR_RAISE_ERRNO(err, errno);
    }

    return ret_val;
}


int	dc_sethostname(const struct dc_posix_env *env, struct dc_error *err, const char *name, int namelen)
{
    int ret_val;

    DC_TRACE(env);
    errno   = 0;
    ret_val = sethostname(name, namelen);

    if(ret_val == -1)
    {
        DC_ERROR_RAISE_ERRNO(err, errno);
    }

    return ret_val;
}


void dc_setusershell(const struct dc_posix_env *env)
{
    DC_TRACE(env);
    errno   = 0;
    setusershell();
}


mode_t dc_getmode(const struct dc_posix_env *env, const void *set, mode_t mode)
{
    mode_t ret_val;

    DC_TRACE(env);
    errno   = 0;
    ret_val = getmode(set, mode);

    return ret_val;
}


int dc_getpeereid(const struct dc_posix_env *env, struct dc_error *err, int s, uid_t *euid, gid_t *egid)
{
    int ret_val;

    DC_TRACE(env);
    errno   = 0;
    ret_val = getpeereid(s, euid, egid);

    if(ret_val == -1)
    {
        DC_ERROR_RAISE_ERRNO(err, errno);
    }

    return ret_val;
}


char *dc_mkdtemp(const struct dc_posix_env *env, struct dc_error *err, char *template)
{
    char *ret_val;

    DC_TRACE(env);
    errno   = 0;
    ret_val = mkdtemp(template);

    if(ret_val == NULL)
    {
        DC_ERROR_RAISE_ERRNO(err, errno);
    }

    return ret_val;
}


int dc_mknod(const struct dc_posix_env *env, struct dc_error *err, const char *path, mode_t mode, dev_t	dev)
{
    int ret_val;

    DC_TRACE(env);
    errno   = 0;
    ret_val = mknod(path, mode, dev);

    if(ret_val == -1)
    {
        DC_ERROR_RAISE_ERRNO(err, errno);
    }

    return ret_val;
}


int dc_mkstemp(const struct dc_posix_env *env, struct dc_error *err, char *template)
{
    int ret_val;

    DC_TRACE(env);
    errno   = 0;
    ret_val = mkstemp(template);

    if(ret_val == -1)
    {
        DC_ERROR_RAISE_ERRNO(err, errno);
    }

    return ret_val;
}


int dc_mkostemps(const struct dc_posix_env *env, struct dc_error *err, char *template, int suffixlen, int oflags)
{
    int ret_val;

    DC_TRACE(env);
    errno   = 0;
    ret_val = mkostemps(template, suffixlen, oflags);

    if(ret_val == -1)
    {
        DC_ERROR_RAISE_ERRNO(err, errno);
    }

    return ret_val;
}


char *dc_mktemp(const struct dc_posix_env *env, struct dc_error *err, char *template)
{
    char *ret_val;

    DC_TRACE(env);
    errno   = 0;
    ret_val = mktemp(template); // NOLINT(clang-analyzer-security.insecureAPI.mktemp)

    if(ret_val == NULL)
    {
        DC_ERROR_RAISE_ERRNO(err, errno);
    }

    return ret_val;
}


int dc_mkostemp(const struct dc_posix_env *env, struct dc_error *err, char *template, int oflags)
{
    int ret_val;

    DC_TRACE(env);
    errno   = 0;
    ret_val = mkostemp(template, oflags);

    if(ret_val == -1)
    {
        DC_ERROR_RAISE_ERRNO(err, errno);
    }

    return ret_val;
}


/*
int dc_profil(const struct dc_posix_env *env, struct dc_error *err, char *samples, size_t size, vm_offset_t offset, int scale)
{
    DC_TRACE(env);
    profil(samples, size, offset, scale);
}
*/

int dc_reboot(const struct dc_posix_env *env, struct dc_error *err, int howto)
{
    int ret_val;

    DC_TRACE(env);
    errno   = 0;
    ret_val = reboot(howto);

    if(ret_val == -1)
    {
        DC_ERROR_RAISE_ERRNO(err, errno);
    }

    return ret_val;
}


int dc_setgroups(const struct dc_posix_env *env, struct dc_error *err, int ngroups, const gid_t *gidset)
{
    int ret_val;

    DC_TRACE(env);
    errno   = 0;
    ret_val = setgroups(ngroups, gidset);

    if(ret_val == -1)
    {
        DC_ERROR_RAISE_ERRNO(err, errno);
    }

    return ret_val;
}


void *dc_setmode(const struct dc_posix_env *env, struct dc_error *err, const char *mode_str)
{
    void *ret_val;

    DC_TRACE(env);
    errno   = 0;
    ret_val = setmode(mode_str);

    if(ret_val == NULL)
    {
        DC_ERROR_RAISE_ERRNO(err, errno);
    }

    return ret_val;
}


int dc_setruid(const struct dc_posix_env *env, struct dc_error *err, uid_t ruid)
{
    int ret_val;

    DC_TRACE(env);
    errno   = 0;
    ret_val = setruid(ruid);

    if(ret_val == -1)
    {
        DC_ERROR_RAISE_ERRNO(err, errno);
    }

    return ret_val;
}


int dc_setrgid(const struct dc_posix_env *env, struct dc_error *err, gid_t rgid)
{
    int ret_val;

    DC_TRACE(env);
    errno   = 0;
    ret_val = setrgid(rgid);

    if(ret_val == -1)
    {
        DC_ERROR_RAISE_ERRNO(err, errno);
    }

    return ret_val;
}


int dc_swapon(const struct dc_posix_env *env, struct dc_error *err, const char *special)
{
    int ret_val;

    DC_TRACE(env);
    errno   = 0;
    ret_val = swapon(special);

    if(ret_val == -1)
    {
        DC_ERROR_RAISE_ERRNO(err, errno);
    }

    return ret_val;
}


int dc_getsubopt(const struct dc_posix_env *env, char **optionp, char * const *tokens, char **valuep)
{
    int ret_val;

    DC_TRACE(env);
    errno   = 0;
    ret_val = getsubopt(optionp, tokens, valuep);

    return ret_val;
}

int dc_initgroups(const struct dc_posix_env *env, struct dc_error *err, const char *user, gid_t group)
{
    int ret_val;

    DC_TRACE(env);
    errno   = 0;
    ret_val = initgroups(user, group);

    if(ret_val == -1)
    {
        DC_ERROR_RAISE_ERRNO(err, errno);
    }

    return ret_val;
}
