#include "dc_execinfo.h"


size_t dc_backtrace(void **addrlist, size_t len)
{
    return backtrace(addrlist, len);
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
