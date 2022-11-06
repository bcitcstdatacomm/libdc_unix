#include "dc_fstab.h"


struct fstab *dc_getfsent(void)
{
    return getfsent();
}

struct fstab *dc_getfsspec(const char *a)
{
    return getfsspec(a);
}

struct fstab *dc_getfsfile(const char *a)
{
    return getfsfile(a);
}

int dc_setfsent(void)
{
    return setfsent();
}

void dc_endfsent(void)
{
    endfsent();
}
