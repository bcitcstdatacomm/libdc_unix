#include <stdarg.h>


void dc_err_set_exit(void (*exitf)(int));
void dc_err_set_file(void *vfp);
void dc_verr(int eval, const char *fmt, va_list args);
void dc_verrc(int eval, int code, const char *fmt,	va_list	args);
void dc_verrx(int eval, const char	*fmt, va_list args);
void dc_vwarn(const char *fmt, va_list args);
void dc_vwarnc(int	code, const char *fmt, va_list args);
void dc_vwarnx(const char *fmt, va_list args);
