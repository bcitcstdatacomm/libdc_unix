#ifndef DC_UNIX_DC_GETOPT_H
#define DC_UNIX_DC_GETOPT_H


#include <dc_env/env.h>
#include <getopt.h>


int dc_getopt_long(const struct dc_env *env, int argc, char *const argv[],
                   const char *optstring, const struct option *longopts, int *longindex);

int dc_getopt_long_only(const struct dc_env *env, int argc, char *const argv[],
                        const char *optstring, const struct option *longopts, int *longindex);


#endif //DC_UNIX_DC_GETOPT_H
