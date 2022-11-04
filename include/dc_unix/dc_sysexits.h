#ifndef LIBDC_UTIL_SYSEXITS_H
#define LIBDC_UTIL_SYSEXITS_H


/*
 * Copyright 2021-2021 D'Arcy Smith.
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


#include <signal.h>


// __has_include is NOT portable, but should work on gcc and clang
#if __has_include(<sysexits.h>)
#include <sysexits.h>
#else
#include <stdlib.h>
    #define EX_OK		    EXIT_SUCCESS /* successful termination */
    #define EX_UNSPECIFIED	EXIT_FAILURR /* successful termination */
    #define EX__BASE	    64
    #define EX_USAGE	    64 /* bad/missing arguments to the command */
    #define EX_DATAERR	    65 /* bad input data from the user */
    #define EX_NOINPUT	    66 /* missing or unreadable input file */
    #define EX_NOUSER	    67 /* specified user does not exist */
    #define EX_NOHOST	    68 /* specified host does not exist */
    #define EX_UNAVAILABLE	69 /* service is unavaialbe */
    #define EX_SOFTWARE	    70 /* internal error */
    #define EX_OSERR	    71 /* internal operating system error */
    #define EX_OSFILE	    72 /* system file does not exsit or is unreadable */
    #define EX_CANTCREAT    73 /* cannot create the specified user */
    #define EX_IOERR	    74 /* some sort of I/O error */
    #define EX_TEMPFAIL     75 /* temporary failure */
    #define EX_PROTOCOL	    76 /* invalid protocol state */
    #define EX_NOPERM	    77 /* insufficient permissions */
    #define EX_CONFIG	    78 /* a configuration issue */
    #define EX__MAX 	    78
#endif


// TODO: MOVE THIS TO UTIL
// https://krueger.report/programming/exit-status-codes/
// https://pubs.opengroup.org/onlinepubs/009695299/utilities/trap.html
#define EX_NOEXEC 126
#define EX_NOCOMMAND 127
#define EX_BADCODE 128
#define EX_SIGHUP 128 + SIGHUP
#define EX_SIGINT 128 + SIGINT
#define EX_SIGQUIT 128 + SIGQUIT
#define EX_SIGABRT 128 + SIGABRT
#define EX_SIGKILL 128 + SIGKILL
#define EX_SIGALRM 128 + SIGALRM
#define EX_SIGTERM 128 + SIGTERM


#endif // LIBDC_UTIL_SYSEXITS_H
