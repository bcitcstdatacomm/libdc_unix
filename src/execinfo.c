#include "dc_execinfo.h"


size_t dc_backtrace(void **a, size_t b)
{
    return backtrace(a, b);
}

char **dc_backtrace_symbols(void *const *a, size_t b)
{
    return backtrace_symbols(a, b);
}

int dc_backtrace_symbols_fd(void *const *a, size_t b, int c)
{
    backtrace_symbols_fd(a, b, c);

    return 0;
}
