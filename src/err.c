#include "dc_err.h"
#include <err.h>


void dc_verr(int eval, const char *fmt, va_list args)
{
    verr(eval, fmt, args);
}

void dc_verrx(int eval, const char	*fmt, va_list args)
{
    verrx(eval, fmt, args);
}

void dc_vwarn(const char *fmt, va_list args)
{
    vwarn(fmt, args);
}

void dc_vwarnx(const char *fmt, va_list args)
{
    vwarnx(fmt, args);
}
