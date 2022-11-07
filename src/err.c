#include "dc_err.h"
#include <err.h>


void dc_verr(int eval, const char *fmt, va_list args)
{
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wformat-nonliteral"
    verr(eval, fmt, args);
#pragma GCC diagnostic pop
}

void dc_verrx(int eval, const char	*fmt, va_list args)
{
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wformat-nonliteral"
    verrx(eval, fmt, args);
#pragma GCC diagnostic pop
}

void dc_vwarn(const char *fmt, va_list args)
{
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wformat-nonliteral"
    vwarn(fmt, args);
#pragma GCC diagnostic pop
}

void dc_vwarnx(const char *fmt, va_list args)
{
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wformat-nonliteral"
    vwarnx(fmt, args);
#pragma GCC diagnostic pop
}
