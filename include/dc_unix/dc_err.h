#include <stdarg.h>


void dc_verr(int eval, const char *fmt, va_list args);
void dc_verrx(int eval, const char	*fmt, va_list args);
void dc_vwarn(const char *fmt, va_list args);
void dc_vwarnx(const char *fmt, va_list args);
