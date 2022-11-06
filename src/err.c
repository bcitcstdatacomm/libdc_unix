#include "dc_err.h"
#include <err.h>


void dc_err_set_exit(void (*exitf)(int))
{
    err_set_exit(exitf);
}

void dc_err_set_file(void *vfp)
{
    err_set_file(vfp);
}

void dc_verr(int eval, const char *fmt, va_list args)
{
    verr(eval, fmt, args);
}

void dc_verrc(int eval, int code, const char *fmt,	va_list	args)
{
    verrc(eval, code, fmt, args);
}

void dc_verrx(int eval, const char	*fmt, va_list args)
{
    verrx(eval, fmt, args);
}

void dc_vwarn(const char *fmt, va_list args)
{
    vwarn(fmt, args);
}

void dc_vwarnc(int code, const char *fmt, va_list args)
{
    vwarnc(code, fmt, args);
}

void dc_vwarnx(const char *fmt, va_list args)
{
    vwarnx(fmt, args);
}
