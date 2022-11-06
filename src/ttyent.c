#include "dc_ttyent.h"


struct ttyent *dc_getttyent(void)
{
    return getttyent();
}

struct ttyent *dc_getttynam(const char *a)
{
    return getttynam(a);
}

int dc_setttyent(void)
{
    return setttyent();
}

int dc_endttyent(void)
{
    return endttyent();
}
