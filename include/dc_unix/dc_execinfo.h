#include <execinfo.h>


size_t dc_backtrace(void **addrlist, size_t len);
char **dc_backtrace_symbols(void *const *, size_t);
int dc_backtrace_symbols_fd(void *const *, size_t, int);
